#include "samsung.h"

///////////////////////////////////////////////////////////////////////////////
// returns 1 on successful parse
uint8_t infrared_parse_samsung(uint32_t* result)
{
    uint8_t i = 0;

    *result = 0;

    if (TIME_IN_RANGE(ir_rx_buffer[i], MS(4.5))) {
        NEXT_BIT(i);
        if (TIME_IN_RANGE(ir_rx_buffer[i], MS(4.5))) {
            // found start bit, parse actual data

            uint8_t b = 0;
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
            return 0; // error
        }
    }

    return 0; // error parsing
}
///////////////////////////////////////////////////////////////////////////////
void infrared_transmit_samsung(uint32_t data)
{
    uint8_t i = 0;

    infrared_init_tx(IR_PROTOCOL_FREQ_SAMSUNG);

    // start bit
    infrared_B2_on();
    DELAY_FROM_NOW(MS(4.5));
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
    DELAY(MS(0.56));

    infrared_B2_off();
    DELAY(MS(0.56));
}
///////////////////////////////////////////////////////////////////////////////

