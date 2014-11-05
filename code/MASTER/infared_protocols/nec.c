#include "nec.h"

///////////////////////////////////////////////////////////////////////////////
// returns 1 on successful parse
uint8_t infrared_parse_nec(uint32_t* result)
{
    uint8_t i = 0;
    uint8_t b = 0;

    *result = 0;

    // first half of start bit
    while (!TIME_IN_RANGE(ir_rx_buffer[i], MS(9))) {
        //LOG(STR("first bit wrong length: "), NUM32(ir_rx_buffer[i]), NL());
        // return 0;
        NEXT_BIT(i);
    }

    NEXT_BIT(i);

    // second half of start bit
    if (!TIME_IN_RANGE(ir_rx_buffer[i], MS(4.5))) {
        if (TIME_IN_RANGE(ir_rx_buffer[i], MS(2.25))) {

            NEXT_BIT(i);
            if (TIME_IN_RANGE(ir_rx_buffer[i], MS(0.56))) {
                LOG(STR("repeat code\n"));
                *result = 0xFFFF;
                return 1;
            }
        }

        LOG(STR("second bit wrong length: "), NUM32(ir_rx_buffer[i]), NL());
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
    uint8_t i = 0;

    infrared_init_tx(IR_PROTOCOL_FREQ_NEC);

    // start bit
    infrared_B2_on();
    DELAY_FROM_NOW(MS(9));
    infrared_B2_off();
    DELAY(MS(4.5));

    // actual data
    for (; i < 32; ++i) {

        infrared_B2_on();
        DELAY(MS(0.56));

        infrared_B2_off();

        if (data & 0x80000000)
            DELAY(MS(1.69));
        else
            DELAY(MS(0.56));

        data <<= 1;
    }

    // stop bit
    infrared_B2_on();
    DELAY_FROM_NOW(MS(0.56));
    infrared_B2_off();
}
///////////////////////////////////////////////////////////////////////////////

