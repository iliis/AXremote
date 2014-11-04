#ifndef USB_FTDI_INCLUDED
#define USB_FTDI_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>

#include "../COMMON/misc.h"
#include "../COMMON/buffer.h"

void ftdi_spi_init();


extern void spi_irq(void) __interrupt(INT_SPI0);

#define spi_enable_ss()  do { PORTC_0 = 0; } while(0)
#define spi_disable_ss() do { PORTC_0 = 1; } while(0)

void spi_readwrite(uint8_t readlen);


#define FTDI_ID_CHIP				0xFD
#define FTDI_ID_VENDOR				0xEA
#define FTDI_ID_PRODUCT				0xEB
#define FTDI_ID_FTDI				0xED

uint16_t ftdi_read_id(uint8_t id);

#endif
