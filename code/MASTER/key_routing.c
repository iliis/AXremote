#include "key_routing.h"

 // maps keycode -> action, value (eg. Keypress 'A')
const uint8_t __code keycode_actions[37][2] = {
    { ACTION_IGNORE, 0 }, //  0 (should never be sent)
    { ACTION_IGNORE, 0 }, //  1
    { ACTION_IGNORE, 0 }, //  2
    { ACTION_SEND_USB_KEY, ' ' }, //  3  // play/pause
    { ACTION_IGNORE, 0 }, //  4
    { ACTION_SEND_USB_KEY, 'X' }, //  5  // stop
    { ACTION_SEND_USB_KEY, 'S' }, //  6  // Power (PC)
    { ACTION_SEND_USB_KEY,   5 }, //  7  // LEFT
    { ACTION_SEND_USB_KEY,   8 }, //  8  // BACK (backspace)
    { ACTION_SEND_USB_KEY, '\n'}, //  9  // OK (enter)
    { ACTION_SEND_USB_KEY,   7 }, // 10  // UP
    { ACTION_SEND_USB_KEY,   4 }, // 11  // RIGHT
    { ACTION_SEND_USB_KEY,  11 }, // 12  // home
    { ACTION_IGNORE, 0 }, // 13
    { ACTION_SEND_USB_KEY,  27 }, // 14  // BACK (esc)
    { ACTION_IGNORE, 0 }, // 15
    { ACTION_SEND_USB_KEY,   6 }, // 16  // DOWN
    { ACTION_IGNORE, 0 }, // 17
    { ACTION_IGNORE, 0 }, // 18
    { ACTION_IGNORE, 0 }, // 19
    { ACTION_IGNORE, 0 }, // 20
    { ACTION_IGNORE, 0 }, // 21
    { ACTION_IGNORE, 0 }, // 22
    { ACTION_IGNORE, 0 }, // 23
    { ACTION_SEND_USB_KEY, 'F' }, // 24
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
        led_blink_ok();
        break;

    case ACTION_SEND_IR_CODE:
        // TODO: implement this
        led_blink_error(); // not implemented!
        break;

    case ACTION_IGNORE:
    default:
        led_blink_warn();
        break;
    }
}
///////////////////////////////////////////////////////////////////////////////
