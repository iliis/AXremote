#include "infrared.h"

///////////////////////////////////////////////////////////////////////////////

__xdata uint32_t input_recording[100];
__xdata uint8_t input_recording_state[100];
uint8_t input_rec_idx;

///////////////////////////////////////////////////////////////////////////////
void pwm_init(uint16_t period, uint8_t timer, uint8_t mode)
{
    // TODO: system clock may stop during standby, ensure PWM keeps running in standby

    switch (timer) {
        case IO_PWM_TIMER2:
            T2PERIOD = period;
            T2CLKSRC = 0b00001110; // source: system clock x1 (20MHz)
            T2MODE = 0b00000000 | (mode & 0b111); // no buffering, no interrupts
            break;

        // TODO: add other timers

        default:
            // TODO: throw error
            break;
    }

    DIRB |= 0x04; // B2 is output
    infrared_B2_off();

    DIRC &= (uint8_t) ~0x02; // C1 is input (IR receiver)
    PORTC |= 0x02; // with pull-up
}
///////////////////////////////////////////////////////////////////////////////
void infrared_init()
{
    // this should give us approximately 38kHz (38.0228...)
    //pwm_init(263, IO_PWM_TIMER2, IO_TIMER_MODE_DIV_TRIANGLE);

    // 37.9kHz
    pwm_init(264, IO_PWM_TIMER2, IO_TIMER_MODE_DIV_TRIANGLE);

    input_rec_idx = 0;

    // enable GPIO change interrupt on C1:
    INTCHGC |= 0x02;
    IE_3 = 1; // GPIO interrupts enable
}
///////////////////////////////////////////////////////////////////////////////
void record_input()
{
    if (input_rec_idx < 100) {
        input_recording[input_rec_idx] = wtimer1_curtime();
        input_recording_state[input_rec_idx] = PINC_1 ? 0 : 1;
        input_rec_idx++;
    }
    /*
    if (PINC & 0x01) {
        input_recording[input_rec_idx++] = T2CNT | 0x01;
    } else {
        input_recording[input_rec_idx++] = T2CNT & 0xFE;
    }*/
}
///////////////////////////////////////////////////////////////////////////////
void print_recorded_input()
{
#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10) {
        uint8_t i = 0;
        dbglink_writestr("recording:\n");
        /*for (; i < input_rec_idx; ++i) {
            if (i>0) {
                dbglink_writeu32(input_recording[i], 10);
                dbglink_tx(',');
                dbglink_tx(' ');
                dbglink_writeu16(input_recording_state[i-1], 1);
                dbglink_tx('\n');
            }

            dbglink_writeu32(input_recording[i], 10);
            dbglink_tx(',');
            dbglink_tx(' ');
            dbglink_writeu16(input_recording_state[i], 1);
            dbglink_tx('\n');
        }*/
		dbglink_writestr("parsed: ");
		dbglink_writehexu32(parse_input_samsung(), 8);
		dbglink_tx('\n');
    }
#endif // USE_DBGLINK
    input_rec_idx = 0;
}
///////////////////////////////////////////////////////////////////////////////
// format:
// start bit: 4.5ms 1, 4.5ms 0
// 32 data bits:
//	1 bit: 0.59ms 1, 1.69ms 0
//	0 bit: 0.59ms 1, 0.59ms 0
// stop bit: same as 0
#define JITTER	100 // in microseconds
#define LENGTH(length) ( ((length)-JITTER) < (delta) && (delta) < ((length)+JITTER) )

#define NEXT_BIT()	do { \
    ++i; \
	if (i >= input_rec_idx) return 0; \
	state = input_recording_state[i-1]; \
	delta = input_recording[i]; \
	delta -= input_recording[i-1]; \
	delta /= 20; /* convert to microseconds */ \
} while (0);

#define PRINT_DELTA()   do { dbglink_writestr("delta: "); dbglink_writeu32(delta, 10); dbglink_tx('\n'); } while(0)

uint32_t parse_input_samsung()
{
    uint32_t delta = 0, result = 0;
	uint8_t i = 0;

	while (i < input_rec_idx) {
        uint8_t state;
		NEXT_BIT();

        // values are timer1 units (running on 20MHz), one unit = 0.05us

        if (LENGTH(4500) && state == 1) {
            NEXT_BIT();
            if (LENGTH(4500) && state == 0) {
                // found start bit, parse actual data

                uint8_t b = 0;
                for (; b<32; ++b) {

                    NEXT_BIT();
                    if (LENGTH(560) && state == 1) {

                        NEXT_BIT();
                        if (LENGTH(1690) && state == 0) {
                            // one bit
                            result |= 1;
                            result <<= 1;
                        } else if (LENGTH(560) && state == 0) {
                            // zero bit
                            result <<= 1;
                        } else
                            return 0; // error
                    } else
                        return 0; // error
                }

                NEXT_BIT();
                if (LENGTH(560) && state == 1) {

                    NEXT_BIT();
                    if (state == 0) { // last 0 can be infinitely long ;)
                        // success: found stop bit
                        return result;
                    }
                }
                return 0;
            }
		}
	}

	return 0; // error parsing
}
///////////////////////////////////////////////////////////////////////////////
