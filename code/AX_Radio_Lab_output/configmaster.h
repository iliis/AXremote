/* Warning: This file is automatically generated by AX-RadioLAB.
Manual changes are overwritten! */

#include "../COMMON/axradio.h"


#define MINI_KIT
//#define USE_LCD
#define USE_DBGLINK
//#define USE_COM0
//#define DEBUGMSG 
#define MCU_SLEEP
#define WTIMER0_CLKSRC	CLKSRC_LPOSC
#define WTIMER0_PRESCALER 0x01
#define WTIMER0_PERIOD    0x0280
#define RADIO_MODE        AXRADIO_MODE_ASYNC_TRANSMIT
extern const struct axradio_address __code remoteaddr;
extern const struct axradio_address_mask __code localaddr;
extern const uint8_t __code demo_packet[6];
extern const uint8_t __code framing_insert_counter;
extern const uint8_t __code framing_counter_pos;

extern const uint16_t __code lpxosc_settlingtime;
