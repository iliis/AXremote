/* Name: main.c
 * Project: HID-Test
 * Author: Christian Starkjohann
 * Creation Date: 2006-02-02
 * Tabsize: 4
 * Copyright: (c) 2006 by OBJECTIVE DEVELOPMENT Software GmbH
 * License: GNU GPL v2 (see License.txt) or proprietary (CommercialLicense.txt)
 * This Revision: $Id$
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/wdt.h>

// we're using a 16 MHz crystal
// #define F_CPU 16000000UL // defined by makefile
#include <util/delay.h>


#include "usbdrv.h"
#include "oddebug.h"

///////////////////////////////////////////////////////////////////////////////

#define BAUD 38400      // Baudrate
 
#include <util/setbaud.h>

///////////////////////////////////////////////////////////////////////////////
/* ----------------------- hardware I/O abstraction ------------------------ */

/* pin assignments:
 *
 * PD3	USB- (not D0!)
 * PD2	USB+ (int0)
 *
 * PD4  LED green (high = active)
 * PC5  LED red   (high = active)
*/

#define LOW(reg, pin)  		PORT ## reg &= ~(1<<(pin));
#define HIGH(reg, pin) 		PORT ## reg |=  (1<<(pin));

#define INPUT(reg, pin)		DDR  ## reg &= ~(1<<(pin));
#define OUTPUT(reg, pin)	DDR  ## reg |=  (1<<(pin));

#define led_red_toggle()	do { PORTD ^= 0x10; } while(0)
#define led_red_set(x)	do { if (x) { PORTD |= 0x10; } else { PORTD &= ~0x10; } } while(0)
#define led_red_off()		led_red_set(0)
#define led_red_on()		led_red_set(1)

#define led_green_toggle()	do { PORTC ^= 0x20; } while(0)
#define led_green_set(x)		do { if (x) { PORTC |= 0x20; } else { PORTC &= ~0x20; } } while(0)
#define led_green_off()		led_green_set(0)
#define led_green_on()		led_green_set(1)

///////////////////////////////////////////////////////////////////////////////

char UART_read_char()
{
	// poll for data
	while ( !(UCSR0A & (1<<RXC0))) {
		// ...
	}

	return UDR0;
}

///////////////////////////////////////////////////////////////////////////////

void UART_init()
{
	// 38.4k at 16MHz
	// UBRR0H = 0;
	// UBRR0L = 51; // for 2X
	// UBRR0L = 25;
	UBRR0H = UBRRH_VALUE;
	UBRR0L = UBRRL_VALUE;

#if USE_2X
	// double transmission speed (divide clock only by 8 instead of 16)
	UCSR0A |=  (1 << U2X0);
#else
	UCSR0A &= ~(1 << U2X0);
#endif

	// enable receiver
	UCSR0B = (1<<RXCIE0) | (1<<RXEN0);

	// set format (8 data bits, 1 stop bit)
	// enable interrupt on RX complete
	// asynchronous, no parity
	UCSR0C = (0<<USBS0) | (3<<UCSZ00);
}

///////////////////////////////////////////////////////////////////////////////

uint8_t uart_rx_data = 0;
uint8_t uart_rx_available = 0;

// UART receive interrupt
ISR (USART_RX_vect)
{
	uart_rx_data = UDR0;
	uart_rx_available = 1;
}


///////////////////////////////////////////////////////////////////////////////

static void hardwareInit(void)
{
    PORTB = 0xff;   /* activate all pull-ups */
    DDRB = 0;       /* all pins input */
    PORTC = 0xff;   /* activate all pull-ups */
    DDRC = 0;       /* all pins input */
    PORTD = 0xf3;   /* 1111 0011 bin: activate pull-ups except on USB lines */
    DDRD = 0x0c;    /* 0000 1100 bin: all pins input except USB (-> USB reset) */

	_delay_ms(11);

    DDRD = 0x00;    /* 0000 0000 bin: remove USB reset condition */
    /* configure timer 0 for a rate of 16M/(1024 * 256) = 61.035 Hz (~16ms) */
    TCCR0A = 5;      /* timer 0 prescaler: 1024 */

	// DDRD |= (1<<5) | (1<<6);
	// HIGH(D,5);
	// LOW(D,6);
	
	// D4 and C5 are outputs (LEDs)
	OUTPUT(D, 4);
	OUTPUT(C, 5);

	led_green_off();
	led_red_on();


	UART_init();


	// initialization done

	_delay_ms(100);

	led_green_on();
	led_red_off();

	_delay_ms(100);
}

///////////////////////////////////////////////////////////////////////////////

/* ------------------------------------------------------------------------- */
/* ----------------------------- USB interface ----------------------------- */
/* ------------------------------------------------------------------------- */

static uint8_t    idleRate;           /* in 4 ms units */

// change length in usbconfig.h!
const PROGMEM char usbDescriptorHidReport[USB_CFG_HID_REPORT_DESCRIPTOR_LENGTH] = {   /* USB report descriptor */
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x06,                    // USAGE (Keyboard)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x85, 0x01,                    //   REPORT_ID (1)
    0x05, 0x07,                    //   USAGE_PAGE (Keyboard)
    0x19, 0xe0,                    //   USAGE_MINIMUM (Keyboard LeftControl)
    0x29, 0xe7,                    //   USAGE_MAXIMUM (Keyboard Right GUI)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
    0x75, 0x01,                    //   REPORT_SIZE (1)
    0x95, 0x08,                    //   REPORT_COUNT (8)
    0x81, 0x02,                    //   INPUT (Data,Var,Abs)
    0x26, 0xff, 0x00,              //   LOGICAL_MAXIMUM (255)
    0x19, 0x00,                    //   USAGE_MINIMUM (Reserved (no event indicated))
    0x29, 0xe7,                    //   USAGE_MAXIMUM (Keyboard Right GUI)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x81, 0x00,                    //   INPUT (Data,Ary,Abs)
    0xc0,                          // END_COLLECTION
    0x05, 0x0c,                    // USAGE_PAGE (Consumer Devices)
    0x09, 0x01,                    // USAGE (Consumer Control)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x85, 0x02,                    //   REPORT_ID (2)
    0x05, 0x0c,                    //   USAGE_PAGE (Consumer Devices)

    0x25, 0x01,                    //   LOGICAL_MAXIMUM (1)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x95, 0x08,                    //   REPORT_COUNT (8)
    0x75, 0x01,                    //   REPORT_SIZE (1)
    0x09, 0xb6,                    //   USAGE (Scan Previous Track)
    0x09, 0xb5,                    //   USAGE (Scan Next Track)
    0x09, 0xb7,                    //   USAGE (Stop)
    0x09, 0xcd,                    //   USAGE (Play/Pause)
    0x09, 0xb0,                    //   USAGE (Play)
    0x09, 0xe2,                    //   USAGE (Mute)
    0x09, 0xe9,                    //   USAGE (Volume Up)
    0x09, 0xea,                    //   USAGE (Volume Down)

    /*0x19, 0x00,                    //   USAGE_MINIMUM (Unassigned)
    0x2a, 0xA0, 0x0F,              //   USAGE_MAXIMUM (4000)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x26, 0xA0, 0x0F,              //   LOGICAL_MAXIMUM (4000)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x75, 0x10,                    //   REPORT_SIZE (16)
	*/
    0x81, 0x02,                    //   INPUT (Data,Var,Abs)
    0xc0                           // END_COLLECTION
};

//#include "hid_descriptor_header.h"


///////////////////////////////////////////////////////////////////////////////

/* We use a simplifed keyboard report descriptor which does not support the
 * boot protocol. We don't allow setting status LEDs and we only allow one
 * simultaneous key press (except modifiers). We can therefore use short
 * 2 byte input reports.
 * The report descriptor has been created with usb.org's "HID Descriptor Tool"
 * which can be downloaded from http://www.usb.org/developers/hidpage/.
 * Redundant entries (such as LOGICAL_MINIMUM and USAGE_PAGE) have been omitted
 * for the second INPUT item.
 */

/* Keyboard usage values, see usb.org's HID-usage-tables document, chapter
 * 10 Keyboard/Keypad Page for more codes.
 */
#define MOD_CONTROL_LEFT    (1<<0)
#define MOD_SHIFT_LEFT      (1<<1)
#define MOD_ALT_LEFT        (1<<2)
#define MOD_GUI_LEFT        (1<<3)
#define MOD_CONTROL_RIGHT   (1<<4)
#define MOD_SHIFT_RIGHT     (1<<5)
#define MOD_ALT_RIGHT       (1<<6)
#define MOD_GUI_RIGHT       (1<<7)

#define KEY_A       4
#define KEY_B       5
#define KEY_C       6
#define KEY_D       7
#define KEY_E       8
#define KEY_F       9
#define KEY_G       10
#define KEY_H       11
#define KEY_I       12
#define KEY_J       13
#define KEY_K       14
#define KEY_L       15
#define KEY_M       16
#define KEY_N       17
#define KEY_O       18
#define KEY_P       19
#define KEY_Q       20
#define KEY_R       21
#define KEY_S       22
#define KEY_T       23
#define KEY_U       24
#define KEY_V       25
#define KEY_W       26
#define KEY_X       27
#define KEY_Y       28
#define KEY_Z       29
#define KEY_1       30
#define KEY_2       31
#define KEY_3       32
#define KEY_4       33
#define KEY_5       34
#define KEY_6       35
#define KEY_7       36
#define KEY_8       37
#define KEY_9       38
#define KEY_0       39

#define KEY_F1      58
#define KEY_F2      59
#define KEY_F3      60
#define KEY_F4      61
#define KEY_F5      62
#define KEY_F6      63
#define KEY_F7      64
#define KEY_F8      65
#define KEY_F9      66
#define KEY_F10     67
#define KEY_F11     68
#define KEY_F12     69

#define KEY_VOL_MUTE	0x7F
#define KEY_VOL_UP		0x80
#define KEY_VOL_DOWN	0x81

#define KEY_PAUSE		0x48
#define KEY_PAGE_UP		0x4B
#define KEY_PAGE_DOWN	0x4E
#define KEY_CUR_RIGHT	0x4F
#define KEY_CUR_LEFT	0x50
#define KEY_CUR_DOWN	0x51
#define KEY_CUR_UP		0x52
#define KEY_STOP		0x78

#define KEY_RETURN		0x28
#define KEY_ESCAPE		0x29
#define KEY_SPACE		0x2C
#define KEY_PLUS		0x2D
#define KEY_MINUS		0x2E
#define KEY_BACKSPACE	0x2A


#define MULT_MUTE		0xE2
#define MULT_VOL_UP		0xE9
#define MULT_VOL_DOWN	0xEA

#define MULT_BIT_PREV		(1<<0)
#define MULT_BIT_NEXT		(1<<1)
#define MULT_BIT_STOP		(1<<2)
#define MULT_BIT_PLAYP		(1<<3)
#define MULT_BIT_PLAY		(1<<4)
#define MULT_BIT_MUTE		(1<<5)
#define MULT_BIT_VOLUP		(1<<6)
#define MULT_BIT_VOLDOWN	(1<<7)


#define NUM_KEYS    25
static const uint8_t  keyReport[NUM_KEYS + 1][3] PROGMEM = {
/* none */  {0, 0, 0},                     /* no key pressed */
/*  1 */    {0, 0, 0},
/*  2 */    {0, 0, 0},
/*  3 */    {0, 0, 0},
/*  4 */    {0, 0, 0},
/*  5 */    {0, 0, 0},

/*  6 */    {2, MULT_BIT_VOLDOWN, 0},	// {1, 0, KEY_F},
/*  7 */    {2, MULT_BIT_PREV, 0},	// {1, 0, KEY_G},
/*  8 */    {1, 0, KEY_CUR_DOWN},		// {1, 0, KEY_H},
/*  9 */    {2, MULT_BIT_NEXT, 0},	// {1, 0, KEY_I},
/* 10 */    {1, 0, KEY_BACKSPACE},				// {1, 0, KEY_J},

/* 11 */    {2, MULT_BIT_VOLUP, 0},	// {1, 0, KEY_K},
/* 12 */    {1, 0, KEY_CUR_LEFT},		// {1, 0, KEY_L},
/* 13 */    {1, 0, KEY_RETURN},		// {1, 0, KEY_M},
/* 14 */    {1, 0, KEY_CUR_RIGHT},		// {1, 0, KEY_N},
/* 15 */    {1, 0, KEY_BACKSPACE},				// {1, 0, KEY_O},

/* 16 */    {2, MULT_BIT_MUTE, 0},	// {1, 0, KEY_P},
/* 17 */    {2, MULT_BIT_PLAYP, 0},	// {1, 0, KEY_Q},
/* 18 */    {1, 0, KEY_CUR_UP},			// {1, 0, KEY_R},
/* 19 */    {2, MULT_BIT_STOP, 0},	// {1, 0, KEY_S},
/* 20 */    {1, 0, KEY_BACKSPACE},				// {1, 0, KEY_T},

/* 21 */    {1, 0, KEY_X}, // should never be sent
/* 22 */    {1, 0, KEY_X},
/* 23 */    {1, 0, KEY_X},
/* 24 */    {1, 0, KEY_X},
/* 25 */    {1, 0, KEY_X}
};

///////////////////////////////////////////////////////////////////////////////

static uint8_t report_buf_keyb[3] = {1, 0, 0};
static uint8_t report_buf_mult[3] = {2, 0};
static uint8_t send_keyb = 0, send_mult = 0;

static void buildReport(uint8_t key)
{
    // *(int *)reportBuffer = pgm_read_word(keyReport[key]);
	uint8_t page = pgm_read_byte(&keyReport[key][0]);

	if (page == 1) {
		report_buf_keyb[0] = 1;
		report_buf_keyb[1] = pgm_read_byte(&keyReport[key][1]);
		report_buf_keyb[2] = pgm_read_byte(&keyReport[key][2]);
		send_keyb = 1;
	} else if (page == 2) {
		report_buf_mult[0] = 2;
		report_buf_mult[1] = pgm_read_byte(&keyReport[key][1]);
		// report_buf_mult[2] = pgm_read_byte(&keyReport[key][2]);
		send_mult = 1;
	} else { // page == 0 --> reset
		// always send reset for both keyboard and multimedia device
		report_buf_keyb[1] = 0;
		report_buf_keyb[2] = 0;
		report_buf_mult[1] = 0;
		// report_buf_mult[2] = 0;
		send_keyb = 1;
		send_mult = 1;
	}
}

///////////////////////////////////////////////////////////////////////////////

uint8_t usbFunctionSetup(uint8_t data[8])
{
	usbRequest_t *rq = (void *) data;

    usbMsgPtr = 0;
    if ((rq->bmRequestType & USBRQ_TYPE_MASK) == USBRQ_TYPE_CLASS) {    /* class request type */
        if (rq->bRequest == USBRQ_HID_GET_REPORT) {  /* wValue: ReportType (highbyte), ReportID (lowbyte) */
            /* we only have one report type, so don't look at wValue */

			if (rq->wValue.bytes[0] == 1) {
				usbMsgPtr = report_buf_keyb;
				return sizeof(report_buf_keyb);
			} else if (rq->wValue.bytes[0] == 2) {
				usbMsgPtr = report_buf_mult;
				return sizeof(report_buf_mult);
			} else
				return 0;
		} else if (rq->bRequest == USBRQ_HID_SET_REPORT) {
			return 0; // no output/feature reports
        } else if (rq->bRequest == USBRQ_HID_GET_IDLE){
            usbMsgPtr = &idleRate;
            return 1;
        } else if (rq->bRequest == USBRQ_HID_SET_IDLE){
            idleRate = rq->wValue.bytes[1];
        }
    } else {
        /* no vendor specific requests implemented */
    }

	return 0;
}

///////////////////////////////////////////////////////////////////////////////

int	main(void)
{
	wdt_enable(WDTO_2S);
    hardwareInit();

	odDebugInit();
	usbInit();
	sei();
    // DBG1(0x00, 0, 0);
	wdt_enable(WDTO_8S);

	while(1) {	/* main even loop */
		wdt_reset();
		usbPoll();

		// buildReport(key);
		if (uart_rx_available) {
			uart_rx_available = 0;
			led_green_toggle();

			switch (uart_rx_data) {
				case 'a':
					buildReport(18); // up
					break;

				case 'b':
					buildReport(13); // enter
					break;

				case 'c':
					buildReport(8); // down
					break;
			}
		}

		if (usbInterruptIsReady()) {
			if (send_keyb) {
				usbSetInterrupt(report_buf_keyb, sizeof(report_buf_keyb));
				send_keyb = 0;
				// toggle debug led (D1)
				PORTD ^= 2;
			} else if (send_mult) {
				usbSetInterrupt(report_buf_mult, sizeof(report_buf_mult));
				send_mult = 0;
				// toggle debug led (D1)
				PORTD ^= 2;
			}
        }
	}
	return 0;
}

///////////////////////////////////////////////////////////////////////////////
