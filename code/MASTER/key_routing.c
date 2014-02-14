#include "key_routing.h"


///////////////////////////////////////////////////////////////////////////////
void uart_init(void)
{
    SET_REGISTER_1(PALT, B, 4); // B4: enable U0 TX
    SET_REGISTER_1(DIR,  B, 4); // B4: output
    SET_REGISTER_0(DIR,  B, 5); // B5: input

    PINSEL &= (uint8_t) ~(1<<0); // U0 RX is B5

    // enable interrupt on BREAK
    //U0CTRL |= (1<<5);

    // apply (let's hope this works as planned)
    uart_timer0_baud(CLKSRC_SYSCLK, 38400, 20000000UL);
    // use timer 0
    // 8 bit per word, 1 stop bit
    uart0_init(0, 8, 1);
}
///////////////////////////////////////////////////////////////////////////////
void handle_keycode(uint8_t code) {
    switch(keycode_actions[code][0]) {

    case ACTION_SEND_USB_KEY:
        uart0_tx(keycode_actions[code][1]);
        break;

    case ACTION_SEND_IR_CODE:
        // TODO: implement this
        break;

    case ACTION_IGNORE:
    default:
        break;
    }
}
///////////////////////////////////////////////////////////////////////////////
