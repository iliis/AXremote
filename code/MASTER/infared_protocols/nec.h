#ifndef NEC_H_INCLUDED
#define NEC_H_INCLUDED

#include "../infrared.h"

/*
 * This module implements the NEC protocol. Or at least something very similiar to it used by these chinese RGB-LEDs.
 */

// format:
// MARK: 0 on ir receiver
// start bit: 9ms SPACE, 4.5ms MARK
// 32 data bits
//  1 bit: 0.56ms SPACE, 1.69ms MARK
//  0 bit: 0.56ms SPACE, 0.56ms MARK

// frequency: 38KHz
#define IR_PROTOCOL_FREQ_NEC 38000

void    infrared_transmit_nec(uint32_t data);
uint8_t infrared_parse_nec(uint32_t* result);

#endif /* end of include guard: NEC_H_INCLUDED */
