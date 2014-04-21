#include "key_routing.h"

 // maps keycode -> action, value (eg. Keypress 'A')
const uint8_t __code keycode_actions[37][2] = {
    { ACTION_IGNORE, 0 }, //  0 (should never be sent)
    { ACTION_IGNORE, 0 }, //  1
    { ACTION_SEND_USB_KEY, 2 }, //  2
    { ACTION_IGNORE, 0 }, //  3
    { ACTION_SEND_USB_KEY, 4 }, //  4
    { ACTION_IGNORE, 0 }, //  5
    { ACTION_SEND_USB_KEY, 6 }, //  6
    { ACTION_SEND_USB_KEY, 7 }, //  7
    { ACTION_SEND_USB_KEY, 8 }, //  8
    { ACTION_SEND_USB_KEY,  9 }, //  9
    { ACTION_SEND_USB_KEY, 10 }, // 10
    { ACTION_SEND_USB_KEY, 11 }, // 11
    { ACTION_IGNORE, 0 }, // 12
    { ACTION_IGNORE, 0 }, // 13
    { ACTION_IGNORE, 0 }, // 14
    { ACTION_IGNORE, 0 }, // 15
    { ACTION_SEND_USB_KEY, 16 }, // 16
    { ACTION_IGNORE, 0 }, // 17
    { ACTION_IGNORE, 0 }, // 18
    { ACTION_IGNORE, 0 }, // 19
    { ACTION_IGNORE, 0 }, // 20
    { ACTION_IGNORE, 0 }, // 21
    { ACTION_IGNORE, 0 }, // 22
    { ACTION_IGNORE, 0 }, // 23
    { ACTION_IGNORE, 0 }, // 24
    { ACTION_IGNORE, 0 }, // 25
    { ACTION_IGNORE, 0 }, // 26
    { ACTION_IGNORE, 0 }, // 27
    { ACTION_IGNORE, 0 }, // 28
    { ACTION_IGNORE, 0 }, // 29
    { ACTION_IGNORE, 0 }, // 30
    { ACTION_IGNORE, 0 }, // 31
    { ACTION_IGNORE, 0 }, // 32
    { ACTION_IGNORE, 0 }, // 33
    { ACTION_IGNORE, 0 }, // 34
    { ACTION_IGNORE, 0 }, // 35
    { ACTION_IGNORE, 0 } // 36
};

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
