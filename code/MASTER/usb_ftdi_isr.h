#ifndef USB_FTDI_ISR_H_INCLUDED
#define USB_FTDI_ISR_H_INCLUDED

#include "usb_ftdi.h"
#include "usb_ftdi_protocol.h"

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

#endif // USB_FTDI_ISR_H_INCLUDED
