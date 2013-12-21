#ifndef LIBMINIDVKLED_H
#define LIBMINIDVKLED_H

#include "libmftypes.h"

#define led0_toggle() do { PORTA ^= 0x02; } while (0)
#define led0_set(x)   do { PORTA_1 = (x); } while (0)
#define led0_on()     do { led0_set(1); } while (0)
#define led0_off()    do { led0_set(0); } while (0)

#define led1_toggle() do { PORTA ^= 0x04; } while (0)
#define led1_set(x)   do { PORTA_2 = (x); } while (0)
#define led1_on()     do { led1_set(1); } while (0)
#define led1_off()    do { led1_set(0); } while (0)

#define led2_toggle() do { } while (0)
#define led2_set(x)   do { } while (0)
#define led2_on()     do { led2_set(1); } while (0)
#define led2_off()    do { led2_set(0); } while (0)

#define led3_toggle() do { } while (0)
#define led3_set(x)   do { } while (0)
#define led3_on()     do { led3_set(1); } while (0)
#define led3_off()    do { led3_set(0); } while (0)

#endif /* LIBMINIDVKLED_H */
