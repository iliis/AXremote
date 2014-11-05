#include "nec.h"

///////////////////////////////////////////////////////////////////////////////
// returns 1 on successful parse
uint8_t infrared_parse_nec(uint32_t* result)
{
    uint8_t i = 0;
    uint8_t b = 0;

    *result = 0;

    // first half of start bit
    if (!TIME_IN_RANGE(ir_rx_buffer[i], MS(9))) {
        return 0;
    }

    NEXT_BIT(i);

    // second half of start bit
    if (!TIME_IN_RANGE(ir_rx_buffer[i], MS(4.5))) {
        return 0;
    }

    // found start bit, parse actual data
    for (; b<32; ++b) {

        NEXT_BIT(i);
        if (TIME_IN_RANGE(ir_rx_buffer[i], MS(0.56))) {

            NEXT_BIT(i);

            if (TIME_IN_RANGE(ir_rx_buffer[i], MS(1.69))) {
                // one bit
                *result <<= 1;
                *result |= 1;
            } else if (TIME_IN_RANGE(ir_rx_buffer[i], MS(0.56))) {
                // zero bit
                *result <<= 1;
            } else
                return 0; // error
        } else
            return 0; // error
    }

    NEXT_BIT(i);
    if (TIME_IN_RANGE(ir_rx_buffer[i], MS(0.56))) {
        // last '0' can be infinitely long and isn't recorded

        // success: found stop bit
        return 1;
    }

    return 0; // error parsing
}
///////////////////////////////////////////////////////////////////////////////
void infrared_transmit_nec(uint32_t data)
{
#if 0
    uint8_t i = 0;
    // MSB encodes length of data
    const uint8_t bitnum = data >> 24;

    if (bitnum != 12 && bitnum != 15 && bitnum != 20)
        return; // invalid data length

    infrared_init_tx(IR_PROTOCOL_FREQ_SONY);

    // left-align bits
    data <<= 32-bitnum;

    // start bit
    infrared_B2_on();
    DELAY_FROM_NOW(MS(2.4));
    infrared_B2_off();
    DELAY(MS(0.6));

    // actual data
    for (; i < bitnum; ++i) {
        infrared_B2_on();

        if (data & 0x80000000)
            DELAY(MS(1.2));
        else
            DELAY(MS(0.6));

        infrared_B2_off();
        DELAY(MS(0.6));

        data <<= 1;
    }
#endif
}
///////////////////////////////////////////////////////////////////////////////

