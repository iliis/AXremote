#include "key_routing.h"

 // maps keycode -> action, value (eg. Keypress 'A')
const uint8_t __code keycode_actions[37][2] = {
    { ACTION_IGNORE, 0 }, //  0 (should never be sent)
    { ACTION_IGNORE, 0 }, //  1
    { ACTION_IGNORE, 0 }, //  2
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 8 }, //  3 flash
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 7 }, //  4 WHITE
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 1 }, //  5 OFF
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 0 }, //  6 ON
    { ACTION_IGNORE, 0 }, //  7  // LEFT
    { ACTION_IGNORE, 0 }, //  8  // BACK (backspace)
    { ACTION_IGNORE, 0 }, //  9  // OK (enter)
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 6 }, //  10 BLUE
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 5 }, //  11 GREEN
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 4 }, //  12 RED
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 11 }, //  13 smooth
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 10 }, //  14 fade
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 9 }, //  15 strobe
    { ACTION_IGNORE, 0 }, // 16  // DOWN
    { ACTION_IGNORE, 0 }, // 17
    { ACTION_IGNORE, 0 }, // 18
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 3 }, //  19 darker
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 3 }, //  20 darker
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 3 }, //  21 darker
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 2 }, //  22 brighter
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 2 }, //  23 brighter
    { IR_PROTOCOL_NEC << 4 | ACTION_SEND_IR_CODE, 2 }, //  24 brighter
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

const uint32_t __code ir_codes[] = {
    0x00FFB04F, //  0 ON
    0x00FFF807, //  1 OFF
    0x00FF906F, //  2 brighter
    0x00FFB847, //  3 darker
    0x00FF9867, //  4 RED
    0x00FFD827, //  5 GREEN
    0x00FF8877, //  6 BLUE
    0x00FFA857, //  7 WHITE
    0x00FFB24D, //  8 flash
    0x00FF00FF, //  9 strobe
    0x00FF85A7, // 10 fade
    0x00FF30CF  // 11 smooth
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
    switch(keycode_actions[code][0] & 0x0F) {

    case ACTION_SEND_USB_KEY:
        //uart0_tx(keycode_actions[code][1]);
        LOG(STR("send usb key\n"));
        led_blink_ok();
        break;

    case ACTION_SEND_IR_CODE:

        LOG(STR("send IR code\n"));
        infrared_transmit(keycode_actions[code][0] >> 4, ir_codes[keycode_actions[code][1]]);
        led_blink_ok();
        break;

    case ACTION_IGNORE:
    default:
        led_blink_warn();
        break;
    }
}
///////////////////////////////////////////////////////////////////////////////
