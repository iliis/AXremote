/** \file SLAVE\main.c
*
* \brief Code skeleton for SLAVE module, illustrating reception of packets.
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

#include "../AX_Radio_Lab_output/configslave.h"

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
#else
#include <libdvk2leds.h>
#endif // MINI_KIT

#include <stdlib.h>

#include "../COMMON/misc.h"

#if defined(SDCC)
extern uint8_t _start__stack[];
#endif



uint8_t __data coldstart = 1; // caution: initialization with 1 is necessary! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case
uint16_t __data pkts_received = 0, pkts_missing = 0;

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

void axradio_statuschange(struct axradio_status __xdata *st)
{
    static uint16_t rssi_ratelimit;
#if defined(USE_DBGLINK) // && defined(DEBUGMSG)
    if (DBGLNKSTAT & 0x10 && st->status != AXRADIO_STAT_CHANNELSTATE) {
        dbglink_writestr("ST: 0x");
        dbglink_writehex16(st->status, 2, WRNUM_PADZERO);
        dbglink_writestr(" ERR: 0x");
        dbglink_writehex16(st->error, 2, WRNUM_PADZERO);
        dbglink_tx('\n');
    }
#endif
    switch (st->status) {
    case AXRADIO_STAT_RECEIVE:
#if RADIO_MODE == AXRADIO_MODE_SYNC_SLAVE || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_SLAVE
        switch (st->error) {
        case AXRADIO_ERR_TIMEOUT:
            led2_on();
            // fall through

        case AXRADIO_ERR_NOERROR:
        case AXRADIO_ERR_RESYNCTIMEOUT:
            led3_off();
            break;

        case AXRADIO_ERR_RESYNC:
            axradio_set_freqoffset(0);
            // fall through

        case AXRADIO_ERR_RECEIVESTART:
            led3_on();
            break;

        default:
            break;
        }

        if (st->error == AXRADIO_ERR_NOERROR) {
            ++pkts_received;
            led2_off();
#ifdef USE_DISPLAY
            display_received_packet(st);
#endif // USE_DISPLAY
        }
#ifdef USE_DBGLINK
        switch (st->error) {
        case AXRADIO_ERR_RESYNCTIMEOUT:
            if (DBGLNKSTAT & 0x10)
                dbglink_writestr("RESYNC Timeout\n");
            break;

        case AXRADIO_ERR_RESYNC:
            if (DBGLNKSTAT & 0x10)
                dbglink_writestr("RESYNC\n");
            break;

        default:
            break;
        }
#endif // USE_DBGLINK
#else  // RADIO_MODE
        {
            uint8_t retran = (st->error != AXRADIO_ERR_NOERROR);
            ++pkts_received;
            led0_toggle();
#ifdef USE_DISPLAY
            if (st->error == AXRADIO_ERR_NOERROR)
                retran = display_received_packet(st) || retran;
#endif // USE_DISPLAY

            if (retran)
                led2_on();
            else
                led2_off();
        }
#endif // RADIO_MODE
#ifdef USE_DBGLINK
        if (st->error == AXRADIO_ERR_NOERROR)
            dbglink_received_packet(st);
#endif
        // Frequency Offset Correction
        {
            int32_t foffs = axradio_get_freqoffset();
#if defined(FREQ_FULL_ADJUST)
            foffs -= st->u.rx.phy.offset;
#else
            // Thom's scheme
            {
                int16_t fcorr;
                if (labs(st->u.rx.phy.offset) > 2000)
                    fcorr = 512;
                else
                    fcorr = 32;
                if (st->u.rx.phy.offset < 0)
                    fcorr = -fcorr;
                foffs -= fcorr;
            }
#endif
            // reset if deviation too large
            if (axradio_set_freqoffset(foffs) != AXRADIO_ERR_NOERROR)
                axradio_set_freqoffset(0);
        }
        break;
#if 0
    case AXRADIO_STAT_CHANNELSTATE:
        if (st->u.cs.busy)
            led3_on();
        else
            led3_off();
        {
            uint16_t t = wtimer0_curtime();
#if WTIMER0_CLKSRC == CLKSRC_LPXOSC
#define RSSIRATE (uint16_t)(32768/2)
#elif WTIMER0_CLKSRC == CLKSRC_LPOSC
#define RSSIRATE (uint16_t)(640/2)
#else
#error "unknown wtimer0 clock source"
#endif
            if ((uint16_t)(t - rssi_ratelimit) < RSSIRATE)
                break;
            rssi_ratelimit = t;
        }
        display_setpos(0x48);
        display_writestr("R:");
        display_tx(st->u.cs.busy ? '*' : ' ');
        display_writenum16(st->u.cs.rssi, 5, WRNUM_SIGNED);
        break;
#endif

	case AXRADIO_STAT_TRANSMITSTART:
        led3_on();
        break;

    case AXRADIO_STAT_TRANSMITEND:
        led3_off();
        break;

    default:
        break;
    }
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

     // caution: coldstart has to be initialized with 1 in it's definition! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case
    coldstart = !(PCON & 0x40);

    ANALOGA = 0x18; // PA[3,4] LPXOSC, other PA are used as digital pins
//    PORTA = 0xC0; // pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC) and PA[0,1,2,5] (DIP switches to gnd, default on)
#ifndef MINI_KIT
    PORTA = 0xC0 | (PINA & 0x25); // pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC). Output 0 in PA[0,1,2,5] to prevent current consumption in all DIP switch states
    PORTB = 0xFE; //PB[0,1]  (LCD RS, LCD RST) are overwritten by lcd2_portinit(), enable pull-ups for PB[2..7]  (PB[2,3] for buttons, PB[4..7] unused)
    PORTC = 0xF3 | (PINC & 0x08); // set PC0 = 1 (LCD SEL), PC1 = 1 (LCD SCK), PC2 = 0 (LCD MOSI), PC3 =0 (LED), enable pull-ups for PC[4..7] which are not bonded Mind: PORTC[0:1] is set to 0x3 by lcd2_portinit()
    PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()
    DIRA = 0x27; // output 0 on PA[0,1,2,5] to prevent current consumption in all DIP switch states. Other PA are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
    DIRB = 0x03; // PB[0,1] are outputs (LCD RS, LCD RST), PB[2..7] are inputs (PB[2,3] for buttons,  PB[4..7]  unused)
    DIRC = 0x0F; // PC[0..3] are outputs (LCD SEL, LCD,SCK, LCD MOSI, LED), PC[4..7] are inputs (not bonded).
    DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()
#else
    PORTA = 0xFF; //
    PORTB = 0xFD | (PINB & 0x02); //
    PORTC = 0xFF; //
    PORTR = 0xCB; //

    DIRA = 0x00; //
    DIRB = 0x06; //  PB1 = LED, PB2 = TCXO ON/OFF
    DIRC = 0x00; //  PC4 = Switch
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

#ifdef USE_DBGLINK
    dbglink_init();
#endif

    EA = 1;
    flash_apply_calibration();
    CLKCON = 0x00;
    wtimer_init();

    if (coldstart) {
        led0_off();
        led1_off();
        led2_off();
        led3_off();
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

            dbglink_writestr("error initializing radio: ");
            dbglink_writehexu16(i, 2);
            dbglink_tx('\n');

            goto terminate_radio_error;
        }
        display_writestr("found AX5043\n");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("found AX5043\n");
#endif // USE_DBGLINK
        axradio_set_local_address(&localaddr);
        axradio_set_default_remote_address(&remoteaddr);

#if RADIO_MODE == AXRADIO_MODE_WOR_RECEIVE || RADIO_MODE == AXRADIO_MODE_WOR_ACK_RECEIVE
        // LPOSC Calibrations needs full control of the radio, so it must run while the radio is idle otherwise
        calibrate_lposc();
#endif

#if RADIO_MODE == MODE_SYNC_MASTER || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_MASTER || RADIO_MODE == AXRADIO_MODE_SYNC_SLAVE || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_SLAVE
        display_writestr("settle LPXOSC");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("settle LPXOSC\n");
#endif // USE_DBGLINK
        delay_ms(lpxosc_settlingtime);
        display_clear(0x40, 16);
        display_setpos(0x40);
#endif  // RADIO_MODE

#ifdef USE_DISPLAY
        display_writestr("RNG=");
        display_writenum16(axradio_get_pllrange(), 2, 0);
        delay_ms(1000); // just to show PLL RNG
        display_clear(0, 16);
        display_clear(0x40, 16);
        display_setpos(0);
#endif // USE_DISPLAY

#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10) {
            dbglink_writestr("RNG = ");
            dbglink_writenum16(axradio_get_pllrange(), 2, 0);
            dbglink_writestr("\n\SLAVE\n");
        }
#endif // USE_DBGLINK

#if RADIO_MODE == AXRADIO_MODE_WOR_RECEIVE || RADIO_MODE == AXRADIO_MODE_WOR_ACK_RECEIVE
        display_writestr("SLAVE  RX WOR\n               ");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("SLAVE  RX WOR\n");
#endif // USE_DBGLINK

#elif RADIO_MODE == AXRADIO_MODE_SYNC_SLAVE || RADIO_MODE == AXRADIO_MODE_SYNC_ACK_SLAVE
        display_writestr("SLAVE  RX SYNC\n               ");
#ifdef USE_DBGLINK
            if (DBGLNKSTAT & 0x10)
        dbglink_writestr("SLAVE  RX SYNC\n");
#endif // USE_DBGLINK

#else  // RADIO_MODE
        display_writestr("SLAVE  RX CONT\n");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("SLAVE  RX CONT\n");
#endif // USE_DBGLINK

#endif // else RADIO_MODE

        i = axradio_set_mode(RADIO_MODE);
        if (i != AXRADIO_ERR_NOERROR)
            goto terminate_radio_error;

#ifdef DBGPKT
        AX5043_IRQMASK0 = 0x41;
        AX5043_RADIOEVENTMASK0 =0x0C; // radio state changed | RXPS changed
#endif

    } else {
        ax5043_commsleepexit();
        IE_4 = 1; // enable radio interrupt
    }

    for(;;) {
        wtimer_runcallbacks();
        EA = 0;
        {
            uint8_t flg = WTFLAG_CANSTANDBY;
#ifdef MCU_SLEEP
            if (axradio_cansleep()
#ifdef USE_DBGLINK
                && dbglink_txidle()
#endif // USE_DBGLINK
                && display_txidle())
                    flg |= WTFLAG_CANSLEEP;
#endif // MCU_SLEEP
            wtimer_idle(flg);
        }
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
        wtimer_runcallbacks();
        {
            uint8_t flg = WTFLAG_CANSTANDBY;
#ifdef MCU_SLEEP
            if (axradio_cansleep()
#ifdef USE_DBGLINK
                && dbglink_txidle()
#endif // USE_DBGLINK
                && display_txidle())
                    flg |= WTFLAG_CANSLEEP;
#endif // MCU_SLEEP
            wtimer_idle(flg);
        }
    }
}



