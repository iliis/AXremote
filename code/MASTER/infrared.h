#ifndef INFRARED_H_INCLUDED
#define INFRARED_H_INCLUDED

#include <ax8052f143.h>
#include <libmftypes.h>
#include <libmfwtimer.h>

#ifdef USE_DBGLINK
#include <libmfdbglink.h>
#endif // USE_DBGLINK

#include "../COMMON/misc.h"

///////////////////////////////////////////////////////////////////////////////
// ANALOG INPUT

#define IO_ADC_CLK_FRCOSC 0
#define IO_ADC_CLK_LPOSC 1
#define IO_ADC_CLK_XOSC 2
#define IO_ADC_CLK_LPXOSC 3
#define IO_ADC_CLK_RSYSCLK 4
// IO_ADC_CLK_INVALID 5
#define IO_ADC_CLK_SYSTEM 6
#define IO_ADC_CLK_OFF 7

#define IO_ADC_PRESCALER_DIV_1 0x0
#define IO_ADC_PRESCALER_DIV_2 0x1
#define IO_ADC_PRESCALER_DIV_4 0x2
#define IO_ADC_PRESCALER_DIV_8 0x3
#define IO_ADC_PRESCALER_DIV_16 0x4
#define IO_ADC_PRESCALER_DIV_32 0x5
#define IO_ADC_PRESCALER_DIV_64 0x6
#define IO_ADC_PRESCALER_DIV_128 0x7
#define IO_ADC_PRESCALER_DIV_256 0x8
#define IO_ADC_PRESCALER_DIV_512 0x9
#define IO_ADC_PRESCALER_DIV_1024 0xA
#define IO_ADC_PRESCALER_DIV_2048 0xB
#define IO_ADC_PRESCALER_DIV_4096 0xC
#define IO_ADC_PRESCALER_DIV_8192 0xD
#define IO_ADC_PRESCALER_DIV_16384 0xE
#define IO_ADC_PRESCALER_DIV_32768 0xF

#define IO_ADC_SET_CLK(clock, prescaler) do { ADCCLKSRC = ((prescaler) & 0xF) << 3 | ((clock) & 0x07); } while(0)

// TODO: should we disable other interrupts? should adc measurements be blocking in general?
#define IO_ADC_WAIT_FOR_CONVERSION() do { EIE_6 = 1; while(1) { if(ADCCONV & 0x80) {break;} enter_standby(); } EIE_6 = 0; } while(0)
#define IO_ADC_BUSY_WAIT_FOR_CONVERSION() while(ADCCLKSRC & 0x80) { nop(); }

///////////////////////////////////////////////////////////////////////////////
// TIMER

// 8052 Programming Manual, Chapter 15.4 (T0CLKSRC)
#define IO_TIMER_SRC_FRCOSC			0b000
#define IO_TIMER_SRC_LPOSC0			0b001
// do not select XOSC or LPXOSC unless a crystal is connected!
#define IO_TIMER_SRC_XOSC			0b010
#define IO_TIMER_SRC_LPXOSC			0b011
#define IO_TIMER_SRC_RSYSCLK		0b100
#define IO_TIMER_SRC_T0CLK			0b101
// System clock may stop if processor enters standby.
#define IO_TIMER_SRC_SYSTEM			0b110
#define IO_TIMER_SRC_OFF			0b111

#define IO_TIMER_PRESC_X2			0b000
#define IO_TIMER_PRESC_X1			0b001
#define IO_TIMER_PRESC_D2			0b010
#define IO_TIMER_PRESC_D4			0b011
#define IO_TIMER_PRESC_D8			0b100
#define IO_TIMER_PRESC_D16			0b101
#define IO_TIMER_PRESC_D32			0b110
#define IO_TIMER_PRESC_D64			0b111

#define IO_TIMER_FLAG_CLK_INVERT	0x40
#define IO_TIMER_FLAG_SYS_SYNC		0x80

// 8052 Programming Manual, Chapter 15.5 (T0MODE)
#define IO_TIMER_MODE_OFF			0b000
#define IO_TIMER_MODE_DELTA_SIGMA	0b001
#define IO_TIMER_MODE_DIV_SAWTOOTH	0b010
#define IO_TIMER_MODE_DIV_TRIANGLE	0b011
#define IO_TIMER_MODE_MULT_SAWTOOTH	0b100
#define IO_TIMER_MODE_MULT_TRIANGLE	0b101

///////////////////////////////////////////////////////////////////////////////
// ANALOG OUTPUT (PWM)

#define IO_PWM_TIMER_OFF			0
#define IO_PWM_TIMER0				1
#define IO_PWM_TIMER1				2
#define IO_PWM_TIMER2				3

void pwm_init(uint16_t period, uint8_t timer, uint8_t mode);

///////////////////////////////////////////////////////////////////////////////

#define WTIMER1_CYCLES_PER_US   10
#define WTIMER1_CYCLES_PER_MS   (WTIMER1_CYCLES_PER_US*1000)

///////////////////////////////////////////////////////////////////////////////
// TIME CONVERSIONS

#define WTIMER1_UNITS_FROM_MS(ms)          ((uint32_t) ((ms) * WTIMER1_CYCLES_PER_MS))
#define WTIMER1_UNITS_FROM_US(us)          ((uint32_t) ((us) * WTIMER1_CYCLES_PER_US))

#define _WTIMER1_UNITS(unit, time)			WTIMER1_UNITS_FROM_##unit(time)
#define WTIMER1_UNITS(...)					_WTIMER1_UNITS(__VA_ARGS__)

#define US(time)							US, ((uint32_t) time)
#define MS(time)							MS, ((uint32_t) time)
#define  S(time)							 S, ((uint32_t) time)

// usage e.g.:
// WTIMER1_UNITS(MS(100))

///////////////////////////////////////////////////////////////////////////////

#define DELAY_FROM_NOW(time)	delay_raw(WTIMER1_UNITS(time), 1) // use for the first delay in a function
#define DELAY(time)				delay_raw(WTIMER1_UNITS(time), 0) // calculates delay relative to last delay call

///////////////////////////////////////////////////////////////////////////////

// infrared receiver outputs an inverted signal
#define IR_RX_READ()			(PINC_1 ? IR_SPACE : IR_MARK)

#define IR_MARK					1
#define IR_SPACE				0

#define IR_RX_BUFFER_SIZE		200	// uint8_t !

#define IR_RX_TIMEOUT			MS(20)

#define IR_TIMING_TOLERANCE 25  // percent tolerance in measurements
#define IR_TIMING_LTOL (1.0 - IR_TIMING_TOLERANCE/100.) 
#define IR_TIMING_UTOL (1.0 + IR_TIMING_TOLERANCE/100.) 

#define IR_TIMING_LOW(unit, time)		((uint32_t) (WTIMER1_UNITS_FROM_##unit(time) * IR_TIMING_UTOL))
#define IR_TIMING_HIGH(unit, time)		((uint32_t) (WTIMER1_UNITS_FROM_##unit(time) * IR_TIMING_LTOL + 1))

#define TIME_IN_RANGE(measured, expected)	( (IR_TIMING_LOW(expected) < (measured)) && (IR_TIMING_HIGH(expected)) )

///////////////////////////////////////////////////////////////////////////////
// INFRARED PROTOCOLS

# define IR_PROTOCOL_SAMSUNG	1
// PWR: C1C0817E

//# define IR_PROTOCOL_

///////////////////////////////////////////////////////////////////////////////

#define infrared_B2_on()    do { \
        PALTB |= 0x04; /* enable T2OUT on Port B2 */ \
}    while(0)

#define infrared_B2_off()    do { \
        PALTB &= (uint8_t) ~0x04; /* disable T2OUT on Port B2 */ \
        PORTB_2 = 0; /* output GND on B2 */ \
}    while(0)


struct ir_packet
{
	uint8_t  protocol;
	uint32_t data;
};

void infrared_transmit(uint8_t protocol, uint32_t data);
void infrared_transmit_samsung(uint32_t data);

uint8_t infrared_parse_samsung(uint32_t* result);
void register_ir_rx_callback(void (*callback)(__xdata struct ir_packet* packet));

void infrared_start_rx();

///////////////////////////////////////////////////////////////////////////////
// internal IR functions

void infrared_init_tx(uint16_t khz);
void handle_pin_change();
void print_recorded_input();

///////////////////////////////////////////////////////////////////////////////


#endif // INFRARED_H_INCLUDED
