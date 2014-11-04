#ifndef USB_FTDI_INCLUDED
#define USB_FTDI_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>
#include <libmfwtimer.h>

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

void ftdi_config_endpoint(uint8_t endpoint_nr, uint8_t enable, uint8_t type, uint8_t size);

uint8_t ftdi_read_last_transaction_status(uint8_t endpoint_nr);

void usb_read_endpoint(uint8_t endpoint_nr);

void usb_ack_endpoint(uint8_t endpoint_nr);

typedef struct DeviceRequest
{
	uint8_t request_type;
	uint8_t request;
	uint16_t value;
	uint16_t index;
	uint16_t length;
} DeviceRequest;

#define USB_ENDPOINT_DIRECTION_MASK 0x80

#define USB_REQUEST_TYPE_MASK       0x60
#define USB_STANDARD_REQUEST        0x00
#define USB_CLASS_REQUEST           0x20
#define USB_VENDOR_REQUEST          0x40

#define USB_REQUEST_MASK            0x0F

#define DEVICE_ADDRESS_MASK         0x7F


#define FT12X_INT_ENDP0OUT		    0x01
#define FT12X_INT_ENDP0IN			0x02
#define FT12X_INT_ENDP1OUT		    0x04
#define FT12X_INT_ENDP1IN			0x08
#define FT12X_INT_ENDP2OUT		    0x10
#define FT12X_INT_ENDP2IN			0x20
#define FT12X_INT_ENDP3OUT		    0x0100
#define FT12X_INT_ENDP3IN			0x0200
#define FT12X_INT_ENDP4OUT		    0x0400
#define FT12X_INT_ENDP4IN			0x0800
#define FT12X_INT_ENDP5OUT		    0x1000
#define FT12X_INT_ENDP5IN			0x2000
#define FT12X_INT_ENDP6OUT		    0x4000
#define FT12X_INT_ENDP6IN			0x8000

#define FT12X_INT_BUSRESET		    0x40
#define FT12X_INT_SUSPENDCHANGE	    0x80
#define FT12X_INT_EOT				0x0100

#define FT12X_SETUPPACKET			0x20


uint16_t ftdi_read_interrupt_register();

void ftdi_handle_interrupt(struct wtimer_callback __xdata * desc);

void ftdi_ep0_txdone();
void ftdi_ep0_rxdone();
void ftdi_ep1_txdone();
void ftdi_ep1_rxdone();
void ftdi_ep2_txdone();
void ftdi_ep2_rxdone();


#endif
