#include "../infrared.h"

// format:
// start bit: 2.4ms 1, 0.6ms 0
// 12/15 or 20 data bits:
//	1 bit: 1.2ms 1, 0.6ms 0
//	0 bit: 0.6ms 1, 0.6ms 0

// frequency: 40kHz
#define IR_PROTOCOL_FREQ_SONY 40000

void    infrared_transmit_sony(uint32_t data);
uint8_t infrared_parse_sony(uint32_t* result);

