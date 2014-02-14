#ifndef KEYMATRIX_H_INCLUDED
#define KEYMATRIX_H_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>

#include "../COMMON/misc.h"

///////////////////////////////////////////////////////////////////////////////

// Mapping between physical pins on microcontroller
// and logical rows/cols

#define ROW_PORT_0  C
#define ROW_PORT_1  C
#define ROW_PORT_2  C
#define ROW_PORT_3  C
#define ROW_PORT_4  C
#define ROW_PORT_5  A
#define ROW_PORT_6  A
#define ROW_PORT_7  A
#define ROW_PORT_8  A

#define COL_PORT_0  B
#define COL_PORT_1  B
#define COL_PORT_2  B
#define COL_PORT_3  B
#define COL_PORT_4  B
#define COL_PORT_5  B

#define ROW_PIN_0   0
#define ROW_PIN_1   1
#define ROW_PIN_2   2
#define ROW_PIN_3   3
#define ROW_PIN_4   4
#define ROW_PIN_5   0
#define ROW_PIN_6   1
#define ROW_PIN_7   2
#define ROW_PIN_8   3

#define COL_PIN_0   5
#define COL_PIN_1   4
#define COL_PIN_2   3
#define COL_PIN_3   2
#define COL_PIN_4   1
#define COL_PIN_5   0

// duplicated information:

#define ROW0    C_0
#define ROW1    C_1
#define ROW2    C_2
#define ROW3    C_3
#define ROW4    C_4
#define ROW5    A_0
#define ROW6    A_1
#define ROW7    A_2
#define ROW8    A_3

#define COL     B
#define COL0    B_5
#define COL1    B_4
#define COL2    B_3
#define COL3    B_2
#define COL4    B_1
#define COL5    B_0

///////////////////////////////////////////////////////////////////////////////

#define READ_COL()  ((~PINB) & 0x3F)    // 0 == pressed -> invert
#define INIT_COL()  do { \
        /* set as input */ \
        DIRB &= (uint8_t) (~0x3F); \
        /* enable pullup */ \
        PORTB |= 0x3F; \
    } while (0)

#define INIT_COL_FOR_SLEEP()    do {    \
        /* drive all rows to GND */ \
        /* set to output */ \
        DIRC |= (uint8_t) 0x1F;    \
        DIRA |= (uint8_t) 0x0F;    \
        /* drive to GND */ \
        PORTC &= (uint8_t) ~0x1F;    \
        PORTA &= (uint8_t) ~0x0F;    \
        /* enable interrupt on change for columns (PB[0..5])*/ \
        INTCHGA = 0; \
        INTCHGB = 0x3F; \
        INTCHGC = 0; \
    } while (0)

///////////////////////////////////////////////////////////////////////////////

// DIR: 0 = input, 1 = output
// PIN: value of pin (read only)
// PORT: if input (DIR == 0): 0 = no pullup, 1 = pullup
//       if output: value of pin

#define ALL_ROWS_Z()    do { \
        /* set to output */ \
        DIRC |= (uint8_t) 0x1F;    \
        DIRA |= (uint8_t) 0x0F;    \
        /* set output to HIGH (clear any charges) */ \
        PORTC |= (uint8_t) 0x1F;    \
        PORTA |= (uint8_t) 0x0F;    \
        /* set to input */ \
        DIRC &= (uint8_t) ~0x1F;    \
        DIRA &= (uint8_t) ~0x0F;    \
        /* disable pull-up (rows are now floating) */ \
        PORTC &= (uint8_t) ~0x1F;    \
        PORTA &= (uint8_t) ~0x0F;    \
    } while (0)

///////////////////////////////////////////////////////////////////////////////

#define SET_REGISTER_0(reg, port, pin)  do { reg##port &= (uint8_t) (~(1<<(pin))); } while(0)
#define SET_REGISTER_1(reg, port, pin)  do { reg##port |= (uint8_t) ( (1<<(pin))); } while(0)

#define SET_REGISTER(reg, port, pin, value) SET_REGISTER_##value(reg, port, pin)

#define SET_REGISTER_ROW(reg, x, value) SET_REGISTER(reg, ROW_PORT_##x, ROW_PIN_##x, value)
#define SET_REGISTER_COL(reg, x, value) SET_REGISTER(reg, COL_PORT_##x, COL_PIN_##x, value)

///////////////////////////////////////////////////////////////////////////////

#define DRIVE_ROW(x)    do { \
        /* set to output */ \
        SET_REGISTER_ROW(DIR, x, 1); \
        /* output = 0 */ \
        SET_REGISTER_ROW(PORT, x, 0); \
    } while (0)

///////////////////////////////////////////////////////////////////////////////
// "reverse" shift, i.e. discrete log (READ_COL() gives a bitmask, we want a number)
// e.g. "0x04" --> 3
//      "0x10" --> 5

#define DISC_LOG(x)     ( x & 0x80 ? 8 :    \
                        ( x & 0x40 ? 7 :    \
                        ( x & 0x20 ? 6 :    \
                        ( x & 0x10 ? 5 :    \
                        ( x & 0x08 ? 4 :    \
                        ( x & 0x04 ? 3 :    \
                        ( x & 0x02 ? 2 :    \
                        ( x & 0x01 ? 1 : 0))))))))

///////////////////////////////////////////////////////////////////////////////
// X-Macro for "looping" over rows
#define FOR_0_TO_5()  \
    F(0)    \
    F(1)    \
    F(2)    \
    F(3)    \
    F(4)    \
    F(5)

///////////////////////////////////////////////////////////////////////////////

// unfortunately, there seems to be quite a long delay necessary, otherwise glitches occur
//#define SHORT_SLEEP()   do { nop(); nop(); nop(); nop(); nop(); nop(); } while(0)
//#define SHORT_SLEEP()   do { delay_ms(1); } while(0)
#define SHORT_SLEEP()   do { uint8_t i = 255; while(--i>0){nop();} } while(0)

///////////////////////////////////////////////////////////////////////////////

uint8_t scan_keymatrix();

///////////////////////////////////////////////////////////////////////////////

#endif // KEYMATRIX_H_INCLUDED
