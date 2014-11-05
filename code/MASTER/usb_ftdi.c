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

void ftdi_set_endpoint_status(uint8_t endpoint_nr, uint8_t stall)
{
    if (endpoint_nr > 5)
        return;

    buffer_write(&spi_tx_buffer, 0x50 + endpoint_nr);
    buffer_write(&spi_tx_buffer, stall & 0x01);

    spi_readwrite(0);
}

void usb_stall_endpoint0()
{
    ftdi_set_endpoint_status(0, 1);
    ftdi_set_endpoint_status(1, 1);
    LOG(STR("stalling ep0\n"));
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

void usb_write_endpoint(uint8_t endpoint_nr)
{
    // TODO: handle sizeof(data) > max endpoint packet size

    if (endpoint_nr > 5) {
        LOG(STR("invalid endpoint number in write endpoint\n"));
        return;
    }

    if (buffer_count(&usb_buffer) > 16) {
        LOG(STR("WARNING: writing more than ep0 max packetsize\n"));
    }

    // select endpoint
    ftdi_read1(endpoint_nr);


    buffer_write(&spi_tx_buffer, 0xF0); // write buffer command
    buffer_write(&spi_tx_buffer, 0); // length in msb (ignored in default mode)
    buffer_write(&spi_tx_buffer, buffer_count(&usb_buffer));
    buffer_move(&usb_buffer, &spi_tx_buffer);
    spi_readwrite(0); // actually transmit data via SPI

    // validate buffer (i.e. tell FTDI this is everything)
    ftdi_send_cmd(0xFA);
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
