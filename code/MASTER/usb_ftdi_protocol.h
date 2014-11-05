#ifndef USB_FTDI_PROTOCOL_H_INCLUDED
#define USB_FTDI_PROTOCOL_H_INCLUDED

#include "usb_ftdi.h"

void reserved();

#define USB_DEVICE_DESCRIPTOR_TYPE                0x01
#define USB_CONFIGURATION_DESCRIPTOR_TYPE         0x02
#define USB_STRING_DESCRIPTOR_TYPE                0x03
#define USB_INTERFACE_DESCRIPTOR_TYPE             0x04
#define USB_ENDPOINT_DESCRIPTOR_TYPE              0x05
#define USB_POWER_DESCRIPTOR_TYPE                 0x06

void get_descriptor();

#endif // USB_FTDI_PROTOCOL_H_INCLUDED
