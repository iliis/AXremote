#include "sony.h"

///////////////////////////////////////////////////////////////////////////////
// returns 1 on successful parse
uint8_t infrared_parse_sony(uint32_t* result)
{
    uint8_t i = 0;

    *result = 0;

    if (TIME_IN_RANGE(ir_rx_buffer[i], MS(2.4))) {
        NEXT_BIT(i);
        if (TIME_IN_RANGE(ir_rx_buffer[i], MS(0.6))) {
            // found start bit, parse actual data

            uint8_t b = 0;
            for (; b<25; ++b) {

                NEXT_BIT(i);
                if (TIME_IN_RANGE(ir_rx_buffer[i], MS(1.2))) {
                    // one bit
                    *result <<= 1;
                    *result |= 1;
                } else if (TIME_IN_RANGE(ir_rx_buffer[i], MS(0.6))) {
                    // zero bit
                    *result <<= 1;
                } else
                    return 0; // error

                // was this the last bit?
                if (i == ir_rx_count-1) {
                    // is length valid?
                    if (b == 12 || b == 15 || b == 20) {
                        // store length in MSB
                        *result |= ((uint32_t) b) << 24;
                        return 1; // success
                    } else
                        return 0; // invalid number of bits
                }

                NEXT_BIT(i);
                if (!TIME_IN_RANGE(ir_rx_buffer[i], MS(0.6)))
                    return 0; // error
            }

            // too many bits
            return 0; // error
        }
    }

    // invalid start bit
    return 0; // error parsing
}
///////////////////////////////////////////////////////////////////////////////
void infrared_transmit_sony(uint32_t data)
{
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
}
///////////////////////////////////////////////////////////////////////////////

