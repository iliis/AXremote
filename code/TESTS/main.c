/** \file TESTS\main.c
*
* \brief Provides basic evaluation functions like transmitting CW or measuring BER from a 101010 bit stream
* \brief Radio Chip parameters are determined by AX-RadioLAB_output\config.c, produced by the AX-RadioLab GUI
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

#include "../AX_Radio_Lab_output/basictests.h"

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

#include "../COMMON/axradio.h"
#include "../COMMON/easyax5043.h"
#include "../COMMON/misc.h"


#undef DUMP_PACKET

#if defined(SDCC)
extern uint8_t _start__stack[];
#endif

uint8_t __data coldstart = 1; // caution: initialization with 1 is necessary! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case

#if BERDIGITS == 3
#define NUMBYTES 125
#elif BERDIGITS == 4
#define NUMBYTES 1250
#elif BERDIGITS == 5
#define NUMBYTES 12500
#else
#error "Invalid BERDIGITS"
#endif


const uint8_t __code txpattern[8] = {
    ((BASICTESTS_TXPATTERN) >>24) & 0xff,
    ((BASICTESTS_TXPATTERN) >>16) & 0xff,
    ((BASICTESTS_TXPATTERN) >>8) & 0xff,
    (BASICTESTS_TXPATTERN) & 0xff,
    ((BASICTESTS_TXPATTERN) >>24) & 0xff,
    ((BASICTESTS_TXPATTERN) >>16) & 0xff,
    ((BASICTESTS_TXPATTERN) >>8) & 0xff,
    (BASICTESTS_TXPATTERN) & 0xff

};

const uint8_t __code onepattern[8] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

uint32_t bytes;
uint32_t errors;
uint32_t errors2;
uint8_t acquire_agc;

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

static void process_ber(struct axradio_status __xdata *st)
{
    __bit fourfsk = (AX5043_MODULATION & 0x0F) == 9;
    {
        uint8_t i = st->u.rx.pktlen;
        bytes -= i;
        acquire_agc = (0 > (int32_t)bytes);
        if (acquire_agc) {
            i += (uint8_t)bytes;
            bytes = 0;
        }
        if (i) {
            const uint8_t __xdata *p = st->u.rx.pktdata;
            if (fourfsk) {
                do {
                    uint8_t databyte = *p++;
                    // send -3dev, -1dev, +dev, +3dev. OK, that's not 1010...
                    errors2 += hweight8(databyte ^ 0x87);
                    errors += hweight8(databyte ^ 0xe1);
                } while (--i);
            } else {
                do {
                    uint8_t databyte = *p++;
                    errors += hweight8(databyte ^ 0x55);
                } while (--i);
            }
        }
    }
    if (!acquire_agc)
        return;
    // BER > 0.5 means we received an 0xAA sequence rather than 0x55 -> invert (0x1e rather than 0xe1 in 4fsk)
    if (errors > (((uint32_t)NUMBYTES) << 2))
        errors = (((uint32_t)NUMBYTES) << 3) - errors;
    if (fourfsk) {
        if (errors2 > (((uint32_t)NUMBYTES) << 2))
            errors2 = (((uint32_t)NUMBYTES) << 3) - errors2;
        if (errors2 < errors)
            errors = errors2;
    }
}

static void dump_pkt(struct axradio_status __xdata *st)
{
#ifdef USE_DBGLINK
    if (!(DBGLNKSTAT & 0x10))
        return;
    {
        const uint8_t __xdata *p = st->u.rx.pktdata;
        uint8_t i = st->u.rx.pktlen, j;
        for (j = 0; j < i; ++j) {
            if (!(j & 15)) {
                dbglink_tx('\n');
                dbglink_writehex16(j, 4, WRNUM_PADZERO);
                dbglink_tx(':');
            }
            dbglink_tx(' ');
            dbglink_writehex16(*p++, 2, WRNUM_PADZERO);
        }
        dbglink_tx('\n');
    }
#endif  // USE_DBGLINK
}

static void display_ber(struct axradio_status __xdata *st)
{
    int32_t freqoffs = axradio_conv_freq_tohz(st->u.rx.phy.offset);

    display_setpos(0x44);
    display_writestr("0.");
    display_writenum32(errors, BERDIGITS, WRNUM_PADZERO);

    display_setpos(0x00);
    display_writestr("O:");
    display_writenum32(freqoffs, 6, WRNUM_SIGNED);

    display_setpos(0x0c);
    display_writenum16(st->u.rx.phy.rssi, 4, WRNUM_SIGNED);

#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10) {
        dbglink_writestr("BER = 0.");
        dbglink_writenum32(errors, BERDIGITS, WRNUM_PADZERO);
        dbglink_writestr("\tFOFFS = ");
        dbglink_writenum32(freqoffs, 6, WRNUM_SIGNED);
        dbglink_tx('\n');
    }
#endif //USE_DBGLINK
}


void axradio_statuschange(struct axradio_status __xdata *st)
{
    switch (st->status) {
    case AXRADIO_STAT_TRANSMITSTART:
        led0_on();
        break;

    case AXRADIO_STAT_TRANSMITEND:
        led0_off();
        break;

    case AXRADIO_STAT_TRANSMITDATA:
        switch (BASICTESTS) {
        case 1:
            axradio_transmit((void *)0, txpattern, sizeof(txpattern));
            break;

        case 0:
        case 2:
            axradio_transmit((void *)0, onepattern, sizeof(onepattern));
            break;

        default:
            break;
        }
        break;

    case AXRADIO_STAT_RECEIVE:
    {

        if (acquire_agc == 1) {
            // we have received 1000 bits with a running AGC and we are going to freeze the AGC now
            led0_off();
            acquire_agc = 2;
            axradio_agc_freeze();
            break;
        }
        if (acquire_agc == 2) {
            // dump bits collected before RXPS0 -> RXPS3 switch happend
            acquire_agc = 0;
            break;
        }
        // AGC frozen, these are bits to be counted.
        led0_on();
        process_ber(st);
#ifdef DUMP_PACKET
        dump_pkt(st);
#endif
        if (!acquire_agc)
            break;
        axradio_agc_thaw();
        display_ber(st);
        bytes = NUMBYTES;
        errors = 0;
        errors2 = 0;
        break;
    }

    default:
        break;
    }
}

void set_cw(void)
{
    uint8_t i = axradio_set_mode(AXRADIO_MODE_CW_TRANSMIT);
    if (i != AXRADIO_ERR_NOERROR) {
        display_radio_error(i);
        for (;;)
            enter_sleep();
    }
    display_clear(0x00, 16);
    display_clear(0x40, 16);
    display_setpos(0x00);
    display_writestr("TX CW, PA ");
    display_writestr(AX5043_MODCFGA & 0x01 ? "DI " : "   ");
    display_writestr(AX5043_MODCFGA & 0x02 ? "SE " : "   ");
}

void set_pattern(void)
{
    uint8_t i = axradio_set_mode(AXRADIO_MODE_STREAM_TRANSMIT_UNENC);
    if (i != AXRADIO_ERR_NOERROR) {
        display_radio_error(i);
        for (;;)
            enter_sleep();
    }
    display_clear(0x00, 16);
    display_clear(0x40, 16);
    display_setpos(0x00);
    display_writestr("TX PAT, PA ");
    display_writestr(AX5043_MODCFGA & 0x01 ? "DI " : "   ");
    display_writestr(AX5043_MODCFGA & 0x02 ? "SE " : "   ");
}

void set_random(void)
{
    uint8_t i = axradio_set_mode(AXRADIO_MODE_STREAM_TRANSMIT_SCRAM);
    if (i != AXRADIO_ERR_NOERROR) {
        display_radio_error(i);
        for (;;)
            enter_sleep();
    }
    display_clear(0x00,16);
    display_clear(0x40,16);
    display_setpos(0x00);
    display_writestr("TX RND, PA ");
    display_writestr(AX5043_MODCFGA & 0x01 ? "DI " : "   ");
    display_writestr(AX5043_MODCFGA & 0x02 ? "SE " : "   ");
}

void set_rx1010(void)
{
    uint8_t i = axradio_set_mode(AXRADIO_MODE_STREAM_RECEIVE_UNENC);
    if (i != AXRADIO_ERR_NOERROR) {
        display_radio_error(i);
        for (;;)
            enter_sleep();
    }
    display_clear(0x00, 16);
    display_clear(0x40, 16);
    display_setpos(0x00);
    display_writestr("RX");

    display_setpos(0x40);
    display_writestr("BER=?");

    display_setpos(0x0A);
    display_writestr("R:");

    bytes = NUMBYTES;
    errors = 0;
    errors2 = 0;
    acquire_agc = 1;
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
    wtimer0_setclksrc(CLKSRC_LPOSC, 1);
    wtimer1_setclksrc(CLKSRC_FRCOSC, 7);

    coldstart = !(PCON & 0x40);

    ANALOGA = 0x18; // PA[3,4] LPXOSC, other PA are used as digital pins
//    PORTA = 0xC0; // pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC) and PA[0,1,2,5] (DIP switches to gnd, default on)
#ifdef MINI_KIT
    PORTA = 0xFF; //
    PORTB = 0xFD | (PINB & 0x2); // LED off, TCXO ON
    PORTC = 0xFF; //
    PORTR = 0xCB; //

    DIRA = 0x00; //
    DIRB = 0x06; //  PB1 = LED, PB2 = TCXO ON/OFF
    DIRC = 0x00; //  PC4 = Switch
    DIRR = 0x15; //
    PALTRADIO |= (1<<6);
#else
    PORTA = 0xC0 | (PINA & 0x25); // pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC). Output 0 in PA[0,1,2,5] to prevent current consumption in all DIP switch states
    PORTB = 0xFE; //PB[0,1]  (LCD RS, LCD RST) are overwritten by lcd2_portinit(), enable pull-ups for PB[2..7]  (PB[2,3] for buttons, PB[4..7] unused)
    PORTC = 0xF3 | (PINC & 0x08); // set PC0 = 1 (LCD SEL), PC1 = 1 (LCD SCK), PC2 = 0 (LCD MOSI), PC3 =0 (LED), enable pull-ups for PC[4..7] which are not bonded Mind: PORTC[0:1] is set to 0x3 by lcd2_portinit()
    PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()
//    DIRA = 0x00; // all digital ports are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
    DIRA = 0x27; // output 0 on PA[0,1,2,5] to prevent current consumption in all DIP switch states. Other PA are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
    DIRB = 0x03; // PB[0,1] are outputs (LCD RS, LCD RST), PB[2..7] are inputs (PB[2,3] for buttons,  PB[4..7]  unused)
    DIRC = 0x0F; // PC[0..3] are outputs (LCD SEL, LCD,SCK, LCD MOSI, LED), PC[4..7] are inputs (not bonded).
    DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()
#endif // else MINI_KIT

    RADIOMUX = 0x47; // overwritten by ax5043_reset, ax5043_comminit()
    RADIOACC = 0x0C; // RADIODATAFMT = 8 bit ( data width), RADIOADDRFMT = automatic 7 / 12 bit, overwritten by ax5043_reset, ax5043_comminit()
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
#if !defined(SDCC) && !defined(__ICC8051__)
    _sdcc_external_startup();
#endif

#if defined(SDCC)
    __asm
    G$_start__stack$0$0 = __start__stack
    .globl G$_start__stack$0$0
    __endasm;
#endif


#ifndef SDCC
    _sdcc_external_startup();
#endif


#ifdef USE_DBGLINK
    dbglink_init();
#endif  // USE_DBGLINK

    EA = 1;

    flash_apply_calibration();
    CLKCON = 0;
    wtimer_init();

    display_init();
    display_setpos(0);
    {
        uint8_t i = axradio_init();
        if (i != AXRADIO_ERR_NOERROR) {
            if (i == AXRADIO_ERR_NOCHIP) {
                display_writestr("No AX5043 RF\nchip found");
#ifdef USE_DBGLINK
                if (DBGLNKSTAT & 0x10)
                    dbglink_writestr("No AX5043 RF\nchip found");
#endif // USE_DBGLINK
                goto terminate_error;
            }
            display_radio_error(i);
            goto terminate_error;
        }
        display_writestr("found AX5043\n");
#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10)
            dbglink_writestr("found AX5043\n");
#endif // USE_DBGLINK
    }

#ifdef USE_DBGLINK
    if(DBGLNKSTAT & 0x10) {
        dbglink_writestr("RNG=");
        dbglink_writenum16(axradio_get_pllrange(), 2, 0);
        dbglink_writestr("\n\n");
    }
#endif

#ifdef USE_DISPLAY
    display_writestr("RNG=");
    display_writenum16(axradio_get_pllrange(), 2, 0);
    delay_ms(1000); // just to show PLL RNG
#endif // USE_DISPLAY

    switch (BASICTESTS) {
    case 0:
        set_cw();
        break;
    case 1:
        set_pattern();
        break;
    case 2:
        set_random();
        break;
    case 3:
    default:
        set_rx1010();
        break;

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
#endif
                && display_txidle())
                    flg |= WTFLAG_CANSLEEP;
#endif
            wtimer_idle(flg);
        }
        EA = 1;
    }
terminate_error:
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
