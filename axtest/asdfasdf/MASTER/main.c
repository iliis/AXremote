/** \file MASTER\main.c
*
* \brief Code skeleton for MASTER module, illustrating periodic or on-demand transmission of packets.
* \brief The packet format is determined by AX-RadioLAB_output\config.c, produced by the AX-RadioLab GUI
*
*/

// Copyright (c) 2007,2008,2009,2010,2011,2012,2013 AXSEM AG
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     1.Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     2.Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     3.Neither the name of AXSEM AG, Duebendorf nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//     4.All advertising materials mentioning features or use of this software
//       must display the following acknowledgement:
//       This product includes software developed by AXSEM AG and its contributors.
//
// THIS SOFTWARE IS PROVIDED BY AXSEM AG AND CONTRIBUTORS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL AXSEM AG AND CONTRIBUTORS BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "../AX_Radio_Lab_output/configmaster.h"

#include <ax8052f143.h>
#include <libmftypes.h>
#include <libmfradio.h>
#include <libmfflash.h>
#include <libmfwtimer.h>

#ifdef USE_COM0
#include <libmfuart0.h>
#endif // USE_COM0

#ifdef USE_LCD
#include <libaxlcd2.h>
#endif // USE_LCD

#ifdef USE_DBGLINK
#include <libmfdbglink.h>
#endif // USE_DBGLINK

#if defined(USE_LCD) || defined(USE_COM0)
#define USE_DISPLAY
#endif // defined(USE_LCD) || defined(USE_COM0)

#include "../COMMON/display_com0.h"

#ifdef MINI_KIT
#include "../COMMON/libminidvkled.h"

#ifdef SAM_BOARD
// sam's test board
#define BUTTON_INTCHG INTCHGA
#define BUTTON_PIN    PINA
#define BUTTON_MASK   0x01

#else

// mini dev kit
#define BUTTON_INTCHG INTCHGC
#define BUTTON_PIN    PINC
#define BUTTON_MASK   0x10

#endif

#else
#include <libdvk2leds.h>
#define BUTTON_INTCHG INTCHGB
#define BUTTON_PIN    PINB
#define BUTTON_MASK   0x04
#endif // MINI_KIT

#include <string.h>

#include "../COMMON/misc.h"


#if defined(SDCC)
extern uint8_t _start__stack[];
#endif

uint16_t __data pkt_counter = 0;
uint8_t __data coldstart = 1; // caution: initialization with 1 is necessary! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case
#ifdef TX_ON_DEMAND
__bit deglitch_busy = 0;
#endif

struct wtimer_desc __xdata wakeup_desc;

static void pwrmgmt_irq(void) __interrupt(INT_POWERMGMT)
{
    uint8_t pc = PCON;
    if (!(pc & 0x80))
        return;
    GPIOENABLE = 0;
    IE = EIE = E2IE = 0;
    for (;;)
        PCON |= 0x01;
}

static void transmit_packet(void)
{
    uint8_t __xdata demo_packet_[sizeof(demo_packet)];

    ++pkt_counter;
    memcpy(demo_packet_, demo_packet, sizeof(demo_packet));
    if (framing_insert_counter) {
        demo_packet_[framing_counter_pos] = pkt_counter & 0xFF ;
        demo_packet_[framing_counter_pos+1] = (pkt_counter>>8) & 0xFF;
    }
    axradio_transmit(&remoteaddr, demo_packet_, sizeof(demo_packet));
}

static void display_transmit_packet(void)
{
    if (pkt_counter == 1) {
        display_setpos(0x40);
        display_writestr("TX    ");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("TX : \n");
#endif // USE_DBGLINK
    }
    display_setpos(0x4c);
    display_writehex16(pkt_counter, 4, WRNUM_PADZERO);
#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10) {
        dbglink_writehex16(pkt_counter, 4, WRNUM_PADZERO);
        dbglink_tx('\n');
    }
#endif // USE_DBGLINK

}

void axradio_statuschange(struct axradio_status __xdata *st)
{
#if defined(USE_DBGLINK) && defined(DEBUGMSG)
    if (DBGLNKSTAT & 0x10) {
        dbglink_writestr("ST: 0x");
        dbglink_writehex16(st->status, 2, WRNUM_PADZERO);
        dbglink_writestr(" ERR: 0x");
        dbglink_writehex16(st->error, 2, WRNUM_PADZERO);
        dbglink_tx('\n');
    }
#endif
    switch (st->status)
    {
    case AXRADIO_STAT_TRANSMITSTART:
        led0_on();
        if (st->error == AXRADIO_ERR_RETRANSMISSION)
            led2_on();
#if RADIO_MODE == AXRADIO_MODE_SYNC_MASTER || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_MASTER
        display_transmit_packet();
#endif
        break;

    case AXRADIO_STAT_TRANSMITEND:
        led0_off();
        if (st->error == AXRADIO_ERR_NOERROR) {
            led2_off();
#ifdef TX_ON_DEMAND
            deglitch_busy = 0;
#endif
#if RADIO_MODE == AXRADIO_MODE_ACK_TRANSMIT || RADIO_MODE == AXRADIO_MODE_WOR_ACK_TRANSMIT || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_MASTER
            display_setpos(0x0d);
            display_writestr(":-)");
#ifdef USE_DBGLINK
            if (DBGLNKSTAT & 0x10)
                dbglink_writestr(":-)\n");
#endif // USE_DBGLINK
#endif // RADIO_MODE
        } else if (st->error == AXRADIO_ERR_TIMEOUT) {
            led2_on();
#ifdef TX_ON_DEMAND
            deglitch_busy = 0;
#endif
#if RADIO_MODE == AXRADIO_MODE_ACK_TRANSMIT || RADIO_MODE == AXRADIO_MODE_WOR_ACK_TRANSMIT || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_MASTER
            display_setpos(0x0d);
            display_writestr(":-(");
#ifdef USE_DBGLINK
            if (DBGLNKSTAT & 0x10)
                dbglink_writestr(":-(\n");
#endif // USE_DBGLINK
#endif // RADIO_MODE
        }
        if (st->error == AXRADIO_ERR_BUSY)
            led3_on();
        else
            led3_off();
        break;

#if RADIO_MODE == AXRADIO_MODE_SYNC_MASTER || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_MASTER
    case AXRADIO_STAT_TRANSMITDATA:
        // in SYNC_MASTER mode, transmit data may be prepared between the call to TRANSMITEND until the call to TRANSMITSTART
        // TRANSMITDATA is called when the crystal oscillator is enabled, approximately 1ms before transmission
        transmit_packet();
        break;
#endif

    case AXRADIO_STAT_CHANNELSTATE:
        if (st->u.cs.busy)
            led3_on();
        else
            led3_off();
        break;

    default:
        break;
    }
}
static void wakeup_callback(struct wtimer_desc __xdata *desc)
{
    desc;
#if defined(WTIMER0_PERIOD)
    wakeup_desc.time += WTIMER0_PERIOD;
    wtimer0_addabsolute(&wakeup_desc);
    transmit_packet();
    display_transmit_packet();
#endif
}

#if defined(__ICC8051__)
//
// If the code model is banked, low_level_init must be declared
// __near_func elsa a ?BRET is performed
//
#if (__CODE_MODEL__ == 2)
__near_func __root char
#else
__root char
#endif
__low_level_init(void) @ "CSTART"
#else
uint8_t _sdcc_external_startup(void)
#endif
{
    LPXOSCGM = 0x8A;
    wtimer0_setclksrc(WTIMER0_CLKSRC, WTIMER0_PRESCALER);
    wtimer1_setclksrc(CLKSRC_FRCOSC, 7);

    LPOSCCONFIG = 0x09; // Slow, PRESC /1, no cal. Does NOT enable LPOSC. LPOSC is enabled upon configuring WTCFGA (MODE_TX_PERIODIC and receive_ack() )

    coldstart = !(PCON & 0x40);

    ANALOGA = 0x18; // PA[3,4] LPXOSC, other PA are used as digital pins

#ifndef MINI_KIT
    PORTA = 0xC0 | (PINA & 0x25); 	// pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC). Output 0 in PA[0,1,2,5] to prevent current consumption in all DIP switch states
    // init LEDs to previous (frozen) state
    PORTB = 0xFE; //PB[0,1]  (LCD RS, LCD RST) are overwritten by lcd2_portinit(), enable pull-ups for PB[2..7]  (PB[2,3] for buttons, PB[4..7] unused)
    PORTC = 0xF3 | (PINC & 0x08); 	// set PC0 = 1 (LCD SEL), PC1 = 1 (LCD SCK), PC2 = 0 (LCD MOSI), PC3 =0 (LED), enable pull-ups for PC[4..7] which are not bonded Mind: PORTC[0:1] is set to 0x3 by lcd2_portinit()
    // init LEDs to previous (frozen) state
    PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()


    DIRA = 0x27; // output 0 on PA[0,1,2,5] to prevent current consumption in all DIP switch states. Other PA are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
    DIRB = 0x03; // PB[0,1] are outputs (LCD RS, LCD RST), PB[2..7] are inputs (PB[2,3] for buttons,  PB[4..7]  unused)
    DIRC = 0x0F; // PC[0..3] are outputs (LCD SEL, LCD,SCK, LCD MOSI, LED), PC[4..7] are inputs (not bonded).
    DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()
#else //
    PORTA = 0xFF; //
    PORTB = 0xFD | (PINB & 0x02); // init LEDs to previous (frozen) state
    PORTC = 0xFF; //
    PORTR = 0xCB; //

    DIRA = 0x00; //
    DIRB = 0x06; //  PB1 = LED, PB2 = TCXO ON/OFF
    DIRC = 0x00; //  PC4 = button
    DIRR = 0x15; //
    PALTRADIO |= (1<<6);
#endif // else MINI_KIT

    DPS = 0;
    IE = 0x40;
    EIE = 0x00;
    E2IE = 0x00;
    display_portinit();
    GPIOENABLE = 1; // unfreeze GPIO
#if defined(__ICC8051__)
    return coldstart;
#else
    return !coldstart; // coldstart -> return 0 -> var initialization; start from sleep -> return 1 -> no var initialization
#endif
}

void main(void)
{
    static uint8_t __data saved_button_state = 0xFF;
    uint8_t i;

#if !defined(SDCC) && !defined(__ICC8051__)
    _sdcc_external_startup();
#endif

#if defined(SDCC)
    __asm
    G$_start__stack$0$0 = __start__stack
                          .globl G$_start__stack$0$0
                          __endasm;
#endif

    EA = 1;
    flash_apply_calibration();
    CLKCON = 0x00;
    wtimer_init();

#ifdef USE_DBGLINK
    dbglink_init();

    led0_off();
    led1_off();
    delay_ms(200);

    led0_on();
    led1_on();
    delay_ms(200);

    led0_off();
    led1_off();
    delay_ms(200);

    led0_on();
    led1_on();
    delay_ms(200);

    led0_off();
    led1_off();
    delay_ms(200);

    led0_on();
    led1_on();
    delay_ms(200);

    led0_off();
    led1_off();
#endif

    if (coldstart) {
        // coldstart
        led0_off();
        led1_off();



        wakeup_desc.handler = wakeup_callback;
#ifdef TX_ON_DEMAND
        BUTTON_INTCHG |= BUTTON_MASK; //interrupt on button changed (button SW5 on DVK-2) for wake on button pressed
#endif // TX_ON_DEMAND

        display_init();
        display_setpos(0);



        i = axradio_init();
        if (i != AXRADIO_ERR_NOERROR) {
            if (i == AXRADIO_ERR_NOCHIP) {
                display_writestr("No AX5043 RF\nchip found");
#ifdef USE_DBGLINK
                if (DBGLNKSTAT & 0x10)
                    dbglink_writestr("No AX5043 RF chip found \n");
#endif // USE_DBGLINK
                goto terminate_error;
            }

#ifdef USE_DBGLINK
                if (DBGLNKSTAT & 0x10) {
                    dbglink_writestr("error initializing radio: ");
                    dbglink_writehexu16(i, 2);
                    dbglink_tx('\n');
                }
#endif // USE_DBGLINK
            goto terminate_radio_error;
        }
        display_writestr("found AX5043\n");

        led0_on();
        led1_off();
        delay_ms(500);

#ifdef USE_DBGLINK
       if (DBGLNKSTAT & 0x10)
            dbglink_writestr("found AX5043\n");
#endif // USE_DBGLINK
        axradio_set_local_address(&localaddr);
        axradio_set_default_remote_address(&remoteaddr);

#if RADIO_MODE == AXRADIO_MODE_SYNC_MASTER || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_MASTER || RADIO_MODE == AXRADIO_MODE_SYNC_SLAVE || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_SLAVE
        display_writestr("settle LPXOSC");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("settle LPXOSC\n");
#endif // USE_DBGLINK
        delay_ms(lpxosc_settlingtime);
        display_clear(0x40, 16);
        display_setpos(0x40);
#endif  // RADIO_MODE

        led0_off();
        led1_on();
        delay_ms(500);

#ifdef USE_DISPLAY
        display_writestr("RNG=");
        display_writenum16(axradio_get_pllrange(), 2, 0);
        delay_ms(1000); // just to show PLL RNG
        display_clear(0, 16);
        display_clear(0x40, 16);
        display_setpos(0);
        display_writestr("MASTER");
#endif // USE_DISPLAY

#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10) {
            dbglink_writestr("RNG = ");
            dbglink_writenum16(axradio_get_pllrange(), 2, 0);
            dbglink_writestr("\n\nMASTER\n");
        }
#endif // USE_DBGLINK


        i = axradio_set_mode(RADIO_MODE);
        if (i != AXRADIO_ERR_NOERROR)
            goto terminate_radio_error;

        led0_on();
        led1_on();
        delay_ms(500);

#if defined(WTIMER0_PERIOD)
        wakeup_desc.time = WTIMER0_PERIOD;
        wtimer0_addrelative(&wakeup_desc);
#endif
    } else {
        // warmstart
        ax5043_commsleepexit();
        IE_4 = 1;
    }

#ifdef TX_ON_DEMAND
    BUTTON_INTCHG |= BUTTON_MASK; //interrupt on button changed (button SW5 on DVK-2) for wake on button pressed
#endif // TX_ON_DEMAND

    led0_off();
    led1_on();
    delay_ms(500);

    for(;;)
    {
        wtimer_runcallbacks();
        EA = 0;

#ifdef TX_ON_DEMAND
        {
            uint8_t buttonedge;
            {
                uint8_t p;
                p = BUTTON_PIN;
                buttonedge = saved_button_state & ~p;
                saved_button_state = p;
            }
            if (buttonedge & BUTTON_MASK)
            {
                EA = 1;
                if( !deglitch_busy )
                {
                    //led1_toggle();
                    deglitch_busy = 1;
                    transmit_packet();
                    display_transmit_packet();
                }
                continue;
            }
        }
        IE_3 = 1;
#endif  // TX_ON_DEMAND
        {
            uint8_t flg = WTFLAG_CANSTANDBY;
#ifdef MCU_SLEEP
            if (axradio_cansleep()
#ifdef USE_DBGLINK
                    && dbglink_txidle()
#endif
                    && display_txidle())
                flg |= WTFLAG_CANSLEEP;
#endif // MCU_SLEEP
            wtimer_idle(flg);
        }
        IE_3 = 0; // no ISR!
        EA = 1;
    }


terminate_radio_error:
    display_radio_error(i);
terminate_error:

#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10)
        dbglink_writestr("TERMINATE ERROR\n");
#endif // USE_DBGLINK

    for (;;) {
        //led0_on();
        //led1_on();

        wtimer_runcallbacks();
        {
            uint8_t flg = WTFLAG_CANSTANDBY;
#ifdef MCU_SLEEP
            if (axradio_cansleep()
#ifdef USE_DBGLINK
                    && dbglink_txidle()
#endif
                    && display_txidle())
                flg |= WTFLAG_CANSLEEP;
#endif
            wtimer_idle(flg);
        }
    }
}
