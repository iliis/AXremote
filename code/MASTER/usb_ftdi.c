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

__xdata uint8_t spi_buffer[20];

volatile uint8_t rx_count = 0;
struct Buffer __xdata spi_rx_buffer;
struct Buffer __xdata spi_tx_buffer;

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


//    PALTC |= 1<<2; // enable UART0 TX on C2
//    PINSEL |= 1;   // UART0 RX is on C3


    // initialize SPI interface
    // FTDI uses mode 1 (POL=0, PHA=1)

    //SPCLKSRC = 0x30; // FRCOSC/64 = 312.5KHz (FTDI supports up to 20MHz)
    SPCLKSRC = 0x08; // FRCOSC/2 = 10MHz (FTDI supports up to 20MHz)
    SPCLKSRC |= 0x80; // clock phase = 1 (read at falling edge)

    // SPI mode MASTER
    SPMODE = 0x01 | 0x08; // (with rx interrupts)

    // enable SPI interrupts
    EIE_3 = 1;

    // start FTDI
    PORTB_0 = 1; // enable chip
    delay_ms(100); // wait a bit


    LOG(STR("FTDI chip version: "), HEX16(ftdi_read_id(FTDI_ID_CHIP)), NL());
    LOG(STR("FTDI vendor id: "), HEX16(ftdi_read_id(FTDI_ID_VENDOR)), NL());
    LOG(STR("FTDI product id: "), HEX16(ftdi_read_id(FTDI_ID_PRODUCT)), NL());
    LOG(STR("FTDI ID: "), HEX16(ftdi_read_id(FTDI_ID_FTDI)), NL());
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

uint16_t ftdi_read_id(uint8_t id)
{
    buffer_write(&spi_tx_buffer, id);
    spi_readwrite(2);

    {
        // LSB is transmitted first
        uint16_t v = 0;
        uint8_t b0 = buffer_read(&spi_rx_buffer);
        v = buffer_read(&spi_rx_buffer);
        v = v << 8;
        v += b0;
        return v;
    }
}
