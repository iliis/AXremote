#include "usb_ftdi.h"

/*

AXREMOTE RECEIVER FTDI BUS:

!RESET      B0  OUT
SUSPEND     B1  OUT
SPI !SS     C0  OUT
    SCLK    C1  OUT
    MOSI    C2  OUT
    MISO    C3  IN
    !INT    C4  IN

*/

volatile uint8_t rx_count = 0;
struct Buffer __xdata spi_rx_buffer;
struct Buffer __xdata spi_tx_buffer;
struct Buffer __xdata usb_buffer;

__xdata DeviceRequest device_request;

void ftdi_spi_init()
{
    LOG(STR("initalizing FTDI ...\n"));

    // initalize buffers
    buffer_reset(&spi_rx_buffer);
    buffer_reset(&spi_tx_buffer);

    // initalize PINS

    PORTB_0 = 0; // RESET ftdi
    PORTB_1 = 0; // don't suspend

    PORTC_0 = 1; // disable chip select

    PORTC_3 = 1; // pull-up on MISO
    PORTC_4 = 1; // pull-up on !INT

    DIRB |= 0x03; // B0, B1 = outputs
    DIRC |= 0x07; // C0,1,2 = outputs
    DIRC &= (uint8_t) ~0x18; // C3, C4 = inputs

    // initialize SPI interface
    // FTDI uses mode 1 (POL=0, PHA=1)

    //SPCLKSRC = 0x30; // FRCOSC/64 = 312.5KHz (FTDI supports up to 20MHz)
    SPCLKSRC = 0x08; // FRCOSC/2 = 10MHz (FTDI supports up to 20MHz)
    SPCLKSRC |= 0x80; // clock phase = 1 (read at falling edge)

    // SPI mode MASTER
    SPMODE = 0x01 | 0x08; // (with rx interrupts)

    // enable SPI interrupts
    EIE_3 = 1;
    INTCHGC |= 0x10; // enable pinchange interrupt on FTDI interrupt line
                     // these interrupts are handled by gpio_irq()

    // start FTDI
    PORTB_0 = 1; // enable chip
    delay_ms(1); // wait a bit


    LOG(STR("FTDI chip version: "), HEX16(ftdi_read_id(FTDI_ID_CHIP)), NL());
    LOG(STR("FTDI vendor id: "), HEX16(ftdi_read_id(FTDI_ID_VENDOR)), NL());
    LOG(STR("FTDI product id: "), HEX16(ftdi_read_id(FTDI_ID_PRODUCT)), NL());
    LOG(STR("FTDI ID: "), HEX16(ftdi_read_id(FTDI_ID_FTDI)), NL());

    usb_disconnect();

    delay_ms(100);

    usb_connect();

}

void spi_irq(void) __interrupt(INT_SPI0)
{
    // RX full?
    if (SPSTATUS & 0x01 && rx_count > 0) {
        buffer_write(&spi_rx_buffer, SPSHREG);
        //LOG(CHAR('%'));
        --rx_count;
    }

    // TX empty?
    if (SPSTATUS & 0x04) {
        if (!buffer_empty(&spi_tx_buffer)) {
            SPSHREG = buffer_read(&spi_tx_buffer);
        }

        if (buffer_empty(&spi_tx_buffer)) {
            // disable TX interrupts
            SPMODE &= (uint8_t) ~0x10;
        } else {
            // enable TX interrupts
            SPMODE |= 0x10;
        }
    }
}

// writes spi_tx_buffer and reads readlen bytes afterwards into spi_rx_buffer
void spi_readwrite(uint8_t readlen)
{
    uint8_t bytes_to_write = buffer_count(&spi_tx_buffer);

    // transmit 0x00 to receive data ...
    rx_count = readlen + bytes_to_write;
    while (readlen-- > 0) { buffer_write(&spi_tx_buffer, 0); }

    // start actual transfer
    spi_enable_ss();
    SPMODE |= 0x10; // enable tx free interrupts
    // wait for data to be transmitted and received
    while (rx_count || !buffer_empty(&spi_tx_buffer)) { nop(); nop(); nop(); nop(); }
    spi_disable_ss();

    // discard data read during transmission
    while (bytes_to_write-- > 0) { buffer_read(&spi_rx_buffer); }
}

void ftdi_send_cmd(uint8_t cmd)
{
    buffer_write(&spi_tx_buffer, cmd);
    spi_readwrite(0);
}

uint8_t  ftdi_read1(uint8_t cmd)
{
    buffer_write(&spi_tx_buffer, cmd);
    spi_readwrite(1);
    return buffer_read(&spi_rx_buffer);
}

uint16_t ftdi_read2(uint8_t cmd)
{
    buffer_write(&spi_tx_buffer, cmd);
    spi_readwrite(2);
    return buffer_read16_rev(&spi_rx_buffer);
}

// read variable amount of data into spi_rx_buffer
void ftdi_read_buffer()
{
    uint8_t buflen = 0;

    buffer_write(&spi_tx_buffer, 0xE0);
    buffer_write(&spi_tx_buffer, 0);
    buffer_write(&spi_tx_buffer, 0);

    rx_count = 3;


    // start actual transfer
    spi_enable_ss();

    SPMODE |= 0x10; // enable tx free interrupts
    while(rx_count) { nop(); nop(); nop(); nop(); }

    // read data length
    buffer_read(&spi_rx_buffer); // discard data read during transmission
    buffer_read(&spi_rx_buffer); // discard first byte (length in MSB)
    buflen = buffer_read(&spi_rx_buffer); // length (in LSB)
    rx_count = buflen;

    // send zeros to receive data ...
    while (buflen--) { buffer_write(&spi_tx_buffer, 0); }
    buflen = rx_count;

    SPMODE |= 0x10;
    while(rx_count) { nop(); nop(); nop(); nop(); }

    spi_disable_ss();

    LOG(STR("read "), NUM8(buflen), STR(" bytes from buffer\n"));

#if 0
    LOG(STR("rxlen = "), NUM8(buffer_count(&spi_rx_buffer)), NL());
    LOG(STR("txlen = "), NUM8(buffer_count(&spi_tx_buffer)), NL());

    while (!buffer_empty(&spi_rx_buffer)) {
        LOG(HEX8(buffer_read(&spi_rx_buffer)), CHAR(':'));
    }

    LOG(NL());
#endif
}

uint16_t ftdi_read_id(uint8_t id)
{
    return ftdi_read2(id);
}

void ftdi_set_mode(uint8_t config)
{
    buffer_write(&spi_tx_buffer, 0xF3); // set mode command

    // clear out reserved bits
    config &= (uint8_t) ~0x23;

    buffer_write(&spi_tx_buffer, config);
    buffer_write(&spi_tx_buffer, 0x4B); // cannot change clockdiv on FT121

    spi_readwrite(0);
}

void usb_connect()
{
    // clock only running when not in suspend mode -> required by USB standard
    // endpoint 2: non-isochronous (HID uses asynchronous)
    // pullup on D+ line
    ftdi_set_mode(FT12X_ENDP_NONISO | FT12X_SOFTCONNECT);
}

void usb_disconnect()
{
    // clock always running
    // no pullup on D+ line
    ftdi_set_mode(FT12X_NOLAZYCLOCK);
}

uint8_t ftdi_read_last_transaction_status(uint8_t endpoint_nr)
{
    if (endpoint_nr > 5) {
        LOG(STR("invalid endpoint number in read transaction status\n"));
        return 0;
    }

    return ftdi_read1(0x40 + endpoint_nr);
}

void usb_read_endpoint(uint8_t endpoint_nr)
{
    uint8_t status = 0;

    if (endpoint_nr > 5) {
        LOG(STR("invalid endpoint number in read endpoint\n"));
        return;
    }

    // select endpoint
    status = ftdi_read1(endpoint_nr);

    // read actual buffer
    ftdi_read_buffer();

    // copy data from spi buffer into usb packet buffer
    buffer_move(&spi_rx_buffer, &usb_buffer);

    // assert(buffer_empty(&spi_rx_buffer))

    // clear buffer
    ftdi_send_cmd(0xF2);
}

void usb_ack_endpoint(uint8_t endpoint_nr)
{
    if (endpoint_nr > 5) {
        LOG(STR("invalid endpoint number in ack endpoint\n"));
        return;
    }

    // select endpoint
    ftdi_read1(endpoint_nr);

    // acknowledge setup packet ("I have read the setup packet and accept its terms.")
    ftdi_send_cmd(0xF1);

    if (endpoint_nr == 0) {
        // clear buffer (why do we need this?)
        ftdi_send_cmd(0xF2);
    }

    LOG(STR("ACK ep"), NUM8(endpoint_nr), NL());
}

void ftdi_handle_interrupt(struct wtimer_callback __xdata * desc)
{
    uint16_t interrupt_reg = ftdi_read2(0xF4);
    UNUSED(desc);

    LOG(STR("got interrupt from FTDI: "), HEX16(interrupt_reg), NL());

    if (interrupt_reg & FT12X_INT_BUSRESET) {
        // TODO: reset
        LOG(STR("bus reset\n"));
    } else {

        if (interrupt_reg & FT12X_INT_EOT) {
            LOG(STR("DMA EOT\n"));
        }

        if (interrupt_reg & FT12X_INT_SUSPENDCHANGE) {
            LOG(STR("suspend change\n"));
        }

        if (interrupt_reg & FT12X_INT_ENDP0IN) {
            LOG(STR("ep0 tx done\n"));
            ftdi_ep0_txdone();
        }

        if (interrupt_reg & FT12X_INT_ENDP0OUT) {
            LOG(STR("ep0 rx done\n"));
            ftdi_ep0_rxdone();
        }

        if (interrupt_reg & FT12X_INT_ENDP1IN) {
            LOG(STR("ep1 tx done\n"));
            ftdi_ep1_txdone();
        }

        if (interrupt_reg & FT12X_INT_ENDP1OUT) {
            LOG(STR("ep1 rx done\n"));
            ftdi_ep1_rxdone();
        }

        if (interrupt_reg & FT12X_INT_ENDP2IN) {
            LOG(STR("ep2 tx done\n"));
            ftdi_ep2_txdone();
        }

        if (interrupt_reg & FT12X_INT_ENDP2OUT) {
            LOG(STR("ep2 rx done\n"));
            ftdi_ep2_rxdone();
        }
    }
}

void ftdi_ep0_txdone()
{
    uint8_t trans_state = ftdi_read_last_transaction_status(1); // clear interrupt flag
}

void ftdi_ep0_rxdone()
{
    uint8_t trans_state = ftdi_read_last_transaction_status(0); // clear interrupt flag

    if (trans_state & FT12X_SETUPPACKET) {

        LOG(STR("got setup packet\n"));

        usb_read_endpoint(0);

        // parse SETUP packet
        device_request.request_type = buffer_read(&usb_buffer);
        device_request.request      = buffer_read(&usb_buffer);
        device_request.value        = buffer_read16_rev(&usb_buffer);
        device_request.index        = buffer_read16_rev(&usb_buffer);
        device_request.length       = buffer_read16_rev(&usb_buffer);

        // assert(buffer_empty(&usb_buffer))

        usb_ack_endpoint(0);
        usb_ack_endpoint(1);

        if (device_request.request_type & USB_ENDPOINT_DIRECTION_MASK) {

            uint8_t type = device_request.request_type & USB_REQUEST_TYPE_MASK;
            uint8_t req  = device_request.request & USB_REQUEST_MASK;

            LOG(STR("SETUP: get command\n"));

            if (type == USB_STANDARD_REQUEST) {
                LOG(STR("SETUP: standard request "), HEX8(req), NL());

                switch (req) {
                    // TODO
                }

            } else if (type == USB_CLASS_REQUEST) {
                LOG(STR("SETUP: class request "), HEX8(req), NL());
                // TODO
            } else {
                LOG(STR("SETUP: unknown request type "), HEX8(type), STR(" req "), HEX8(req), NL());
                // TODO: stall ep0 here
            }

        } else {
            if (device_request.length == 0) {
                LOG(STR("SETUP: set command\n"));
            } else {
                LOG(STR("SETUP: length = "), NUM16(device_request.length), NL());
            }
        }
    }
}

void ftdi_ep1_txdone()
{
    uint8_t trans_state = ftdi_read_last_transaction_status(3); // clear interrupt flag
}

void ftdi_ep1_rxdone()
{
    uint8_t trans_state = ftdi_read_last_transaction_status(2); // clear interrupt flag
}

void ftdi_ep2_txdone()
{
    uint8_t trans_state = ftdi_read_last_transaction_status(5); // clear interrupt flag
}

void ftdi_ep2_rxdone()
{
    uint8_t trans_state = ftdi_read_last_transaction_status(4); // clear interrupt flag
}
