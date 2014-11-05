#include "usb_ftdi_protocol.h"

void reserved()
{
    LOG(STR("reserved\n"));
    usb_stall_endpoint0();
}

void get_descriptor()
{
    uint8_t desc  = device_request.value >> 8;
    uint8_t index = device_request.value;

    LOG(STR("get descriptor: des="), HEX8(desc), STR(" idx="), HEX8(index), NL());

	if (desc == USB_DEVICE_DESCRIPTOR_TYPE)
	{
        LOG(STR("device descriptor\n"));
		//code_transmit((unsigned char code *)&DeviceDescr, sizeof(USB_DEVICE_DESCRIPTOR));
	}
	else if (desc == USB_CONFIGURATION_DESCRIPTOR_TYPE)
	{
        LOG(STR("config descriptor\n"));
		//code_transmit((unsigned char code *)&ConfigDescr, sizeof(CFG01));
	}
	else if(desc == USB_STRING_DESCRIPTOR_TYPE)
	{
        LOG(STR("string descriptor\n"));
        /*
		i=0;
		switch(index)
		{
			case 0:
				memcpy(&buffer1[0]+i,(unsigned char *)&ft232_str0_descriptor,sizeof(ft232_str0_descriptor));
				i+=sizeof(ft232_str0_descriptor);
				break;
			case 1:
				memcpy(&buffer1[0]+i,(unsigned char *)&ft232_str1_descriptor,sizeof(ft232_str1_descriptor));
				i+=sizeof(ft232_str1_descriptor);
				break;
			case 2:
				memcpy(&buffer1[0]+i,(unsigned char *)&ft232_str2_descriptor,sizeof(ft232_str2_descriptor));
				i+=sizeof(ft232_str2_descriptor);
				break;
			case 3:
				memcpy(&buffer1[0]+i,(unsigned char *)&ft232_str3_descriptor,sizeof(ft232_str3_descriptor));
				i+=sizeof(ft232_str3_descriptor);
				break;

			default:
				break;
		}
		code_transmit((unsigned char *)buffer1, i);
		*/
	}
	else if(desc == 0x22)
	{
        LOG(STR("report1 descriptor\n"));
        /*
		switch(index)
		{
			case 0:
				code_transmit((unsigned char code *)&report1_descriptor, 65);
				break;

			default:
				break;
		}
		*/
	}
	else if(desc == 0x21)//20120912_CV-HID-test
	{
        LOG(STR("hid descriptor\n"));
		//code_transmit((unsigned char code *)&dsc_hid, sizeof(dsc_hid));
	}
	else
	{
        LOG(STR("get_descriptor: unknown desc\n"));
        usb_stall_endpoint0();
	}
}

