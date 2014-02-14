#ifndef KEY_ROUTING_H_INCLUDED
#define KEY_ROUTING_H_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>
#include <libmfuart.h>
#include <libmfuart0.h>

///////////////////////////////////////////////////////////////////////////////

#define ACTION_IGNORE           0x00
#define ACTION_SEND_USB_KEY     0x01
#define ACTION_SEND_IR_CODE     0x02

///////////////////////////////////////////////////////////////////////////////

// maps keycode -> action, value (eg. Keypress 'A')
const uint8_t __code keycode_actions[37][2] = {
    { ACTION_IGNORE, 0 }, //  0 (should never be sent)
    { ACTION_IGNORE, 0 }, //  1
    { ACTION_SEND_USB_KEY, 'c' }, //  2
    { ACTION_IGNORE, 0 }, //  3
    { ACTION_SEND_USB_KEY, 'b' }, //  4
    { ACTION_IGNORE, 0 }, //  5
    { ACTION_SEND_USB_KEY, 'a' }, //  6
    { ACTION_IGNORE, 0 }, //  7
    { ACTION_IGNORE, 0 }, //  8
    { ACTION_IGNORE, 0 }, //  9
    { ACTION_IGNORE, 0 }, // 10
    { ACTION_IGNORE, 0 }, // 11
    { ACTION_IGNORE, 0 }, // 12
    { ACTION_IGNORE, 0 }, // 13
    { ACTION_IGNORE, 0 }, // 14
    { ACTION_IGNORE, 0 }, // 15
    { ACTION_IGNORE, 0 }, // 16
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

#define SET_REGISTER_0(reg, port, pin)  do { reg##port &= (uint8_t) (~(1<<(pin))); } while(0)
#define SET_REGISTER_1(reg, port, pin)  do { reg##port |= (uint8_t) ( (1<<(pin))); } while(0)

///////////////////////////////////////////////////////////////////////////////

void uart_init(void);
void handle_keycode(uint8_t code);

///////////////////////////////////////////////////////////////////////////////

#endif // KEY_ROUTING_H_INCLUDED
