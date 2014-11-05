#ifndef USB_FTDI_INCLUDED
#define USB_FTDI_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>
#include <libmfwtimer.h>

#include "../COMMON/misc.h"
#include "../COMMON/buffer.h"

typedef struct DeviceRequest
{
	uint8_t request_type;
	uint8_t request;
	uint16_t value;
	uint16_t index;
	uint16_t length;
} DeviceRequest;



extern struct Buffer __xdata spi_rx_buffer;
extern struct Buffer __xdata spi_tx_buffer;
extern struct Buffer __xdata usb_buffer;
extern __xdata DeviceRequest device_request;

void ftdi_spi_init();


extern void spi_irq(void) __interrupt(INT_SPI0);

#define spi_enable_ss()  do { PORTC_0 = 0; } while(0)
#define spi_disable_ss() do { PORTC_0 = 1; } while(0)

void spi_readwrite(uint8_t readlen = 0);


#define FTDI_ID_CHIP				0xFD
#define FTDI_ID_VENDOR				0xEA
#define FTDI_ID_PRODUCT				0xEB
#define FTDI_ID_FTDI				0xED

void     ftdi_send_cmd(uint8_t cmd);
uint8_t  ftdi_read1(uint8_t cmd);
uint16_t ftdi_read2(uint8_t cmd);
uint16_t ftdi_read_id(uint8_t id);

void     ftdi_read_buffer();

#define FT12X_NOLAZYCLOCK           0x02
#define FT12X_CLOCKRUNNING          0x04
#define FT12X_INTERRUPTMODE		    0x08
#define FT12X_SOFTCONNECT			0x10
#define FT12X_ENDP_NONISO			0x00
#define FT12X_ENDP_ISOOUT			0x40
#define FT12X_ENDP_ISOIN			0x80
#define FT12X_ENDP_ISOIO			0xC0

void ftdi_set_mode(uint8_t config);

void usb_connect();
void usb_disconnect();

void ftdi_set_endpoint_status(uint8_t endpoint_nr, uint8_t stall);

//void ftdi_config_endpoint(uint8_t endpoint_nr, uint8_t enable, uint8_t type, uint8_t size);
void usb_stall_endpoint0();

uint8_t ftdi_read_last_transaction_status(uint8_t endpoint_nr);

// reads endpoint into usb_buffer
void usb_read_endpoint(uint8_t endpoint_nr);

// writes data from usb_buffer into endpoint
void usb_write_endpoint(uint8_t endpoint_nr);

void usb_ack_endpoint(uint8_t endpoint_nr);

#endif
