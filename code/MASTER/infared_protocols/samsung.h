#include "../infrared.h"

// format:
// start bit: 4.5ms 1, 4.5ms 0
// 32 data bits:
//	1 bit: 0.59ms 1, 1.69ms 0
//	0 bit: 0.59ms 1, 0.59ms 0
// stop bit: same as 0

// frequency: 37.9kHz
#define IR_PROTOCOL_FREQ_SAMSUNG 37900

void    infrared_transmit_samsung(uint32_t data);
uint8_t infrared_parse_samsung(uint32_t* result);

