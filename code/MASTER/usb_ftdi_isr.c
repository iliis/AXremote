#include "usb_ftdi_isr.h"

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
                    case 6:     get_descriptor();  break;
                    default:    reserved();        break;
                }

            } else if (type == USB_CLASS_REQUEST) {
                LOG(STR("SETUP: class request "), HEX8(req), NL());
                // TODO
            } else {
                LOG(STR("SETUP: unknown request type "), HEX8(type), STR(" req "), HEX8(req), NL());
                usb_stall_endpoint0();
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
