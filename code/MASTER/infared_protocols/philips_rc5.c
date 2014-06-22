#include "philips_rc5.h"

// swap first bit on every transmission
static uint8_t last_toggle = 0;

///////////////////////////////////////////////////////////////////////////////
// returns 1 on successful parse
uint8_t infrared_parse_philips_rc5(uint32_t* result)
{
    uint8_t i = 0, bits = 0, state = 0;
    uint32_t man_decoded = 0;

    *result = 0;

    // second half of first start bit
    if (!TIME_IN_RANGE(ir_rx_buffer[i], US(889)))
        return 0;

    NEXT_BIT(i);

    // cut intervals into equal pieces as RC5 uses Manchester encoding
    // as man_decoded is zeroed, we don't have to handle the special case of a trailing '0'
    while (i < ir_rx_count) {
        man_decoded <<= 1;
        if (TIME_IN_RANGE(ir_rx_buffer[i], US(889))) {
            // short
            man_decoded |= state;
        } else if (TIME_IN_RANGE(ir_rx_buffer[i], US(2*889))) {
            // long
            man_decoded |= state;
            man_decoded <<= 1;
            man_decoded |= state;
            bits++;
        } else
            return 0; // error

        i++; bits++;
        state = !state;
        man_decoded <<= 1;
    }

    // if last bit was a '0', the second half (space) isn't recorded anymore
    if (bits % 2 == 1)
        bits++;

    bits = bits/2;

    if (bits != 13) // we started at second start bit
        return 0; // invalid number of bits

    // decode Manchester
    for (i = 0; i < bits; ++i) {
        if      ((man_decoded & 0b11) == 0b10) // '1'
            *result |= 1;
        else if ((man_decoded & 0b11) == 0b01) // '0'
            *result |= 0;
        else
            return 0; // error

        *result <<= 1;
        man_decoded >>= 2;
    }

    *result <<= 32-bits+2; // left align (remove second start bit and toggle)
    return 1;
}
///////////////////////////////////////////////////////////////////////////////
void infrared_transmit_philips_rc5(uint32_t data)
{
    uint8_t i = 0;

    // start bits
    infrared_B2_off();
    DELAY(US(889));
    infrared_B2_on();
    DELAY_FROM_NOW(US(889));

    infrared_B2_off();
    DELAY(US(889));
    infrared_B2_on();
    DELAY_FROM_NOW(US(889));

    // toggle bit
    last_toggle = !last_toggle;

    // actual data 
    for (i = 0; i < 11; ++i) {

        if (data & 0x80000000) {
            infrared_B2_off();
            DELAY(US(889));
            infrared_B2_on();
            DELAY(US(889));
        } else {
            infrared_B2_on();
            DELAY(US(889));
            infrared_B2_off();
            DELAY(US(889));
        }

        data <<= 1;
    }
}
///////////////////////////////////////////////////////////////////////////////

