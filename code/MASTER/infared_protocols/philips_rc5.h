#include "../infrared.h"

// format:
// start bit: 2x '1'
// one toggle bit (stays if key is stays pressed)
// 11 data bits (manchester):
//	1 bit: 889us 0, 889us 1
//	0 bit: 889us 1, 889us 0

// frequency: 36kHz
#define IR_PROTOCOL_FREQ_PHILIPS_RC5 36000

void    infrared_transmit_philips_rc5(uint32_t data);
uint8_t infrared_parse_philips_rc5(uint32_t* result);

