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
extern const uint8_t __code keycode_actions[37][2];

///////////////////////////////////////////////////////////////////////////////

#define SET_REGISTER_0(reg, port, pin)  do { reg##port &= (uint8_t) (~(1<<(pin))); } while(0)
#define SET_REGISTER_1(reg, port, pin)  do { reg##port |= (uint8_t) ( (1<<(pin))); } while(0)

///////////////////////////////////////////////////////////////////////////////

void uart_init(void);
void handle_keycode(uint8_t code);

///////////////////////////////////////////////////////////////////////////////

#endif // KEY_ROUTING_H_INCLUDED
