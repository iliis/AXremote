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


#ifdef USE_DBGLINK
#include <libmfdbglink.h>
#endif // USE_DBGLINK

#include <string.h>

#include "../COMMON/leds.h"
#include "../COMMON/misc.h"

#ifdef AXREMOTE_TRANSMITTER
#include "keymatrix.h"
#endif

#ifdef AXREMOTE_RECEIVER
#include "key_routing.h"
#include <libmfuart0.h>
#include "infrared.h"
#include "gpio.h"
#include "usb_ftdi.h"

#include "infared_protocols/nec.h"

void gpio_button0_pressed(struct wtimer_callback __xdata *desc)
{
    UNUSED(desc);

    LOG(STR("button 0 pressed\n"));

    //print_recorded_input();
    infrared_transmit_nec(0x00FFB04F); // ON
}

void gpio_button1_pressed(struct wtimer_callback __xdata *desc)
{
    UNUSED(desc);

    LOG(STR("button 1 pressed\n"));
    //infrared_start_rx();
    infrared_transmit_nec(0x00FFF807); // OFF
}

#endif

#if !defined(AXREMOTE_RECEIVER) && !defined(AXREMOTE_TRANSMITTER)
#error Please define either AXREMOTE_TRANSMITTER or AXREMOTE_RECEIVER
#endif

#define RADIO_POWERMODE_OFF AXRADIO_MODE_DEEPSLEEP
//#define RADIO_POWERMODE_OFF AXRADIO_MODE_OFF

#if defined(SDCC)
extern uint8_t _start__stack[];
#endif

uint8_t __data coldstart = 1; // caution: initialization with 1 is necessary! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case
__bit tx_in_progress = 0;

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

static void transmit_packet(uint8_t key)
{
    uint8_t __xdata packet[] = {'K', key};

    packet[1] = key;

    /*
    if (axradio_set_mode(AXRADIO_MODE_ASYNC_TRANSMIT) != AXRADIO_ERR_NOERROR)
        LOG(STR("ERROR enabling radio\n"));
    */

    delay_ms(5); // give hardware time to start up

    key = axradio_transmit(&remoteaddr, packet, sizeof(packet));

#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10) {
        if (key != AXRADIO_ERR_NOERROR) {
            dbglink_writestr("error sending packet: ");
            HEX8(key); NL(); WAIT_DONE();
        }
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
        tx_in_progress = 1;
        LOG(STR("start tx ..."));
        break;

    case AXRADIO_STAT_TRANSMITEND:
        led0_off();
        tx_in_progress = 0;
        LOG(STR(" done\n"));
#ifdef AXREMOTE_TRANSMITTER
        // power down radio when not actively transmitting keypresses
        //delay_ms(5);
        /*if (axradio_set_mode(RADIO_POWERMODE_OFF) != AXRADIO_ERR_NOERROR) {
            LOG(STR("ERROR disabling radio\n"));
            led0_on();
        }*/

        //ax5043_enter_deepsleep();
#endif

        if (st->error != AXRADIO_ERR_NOERROR) {
            // TODO: retry sending or something
#ifdef USE_DBGLINK
            if (DBGLNKSTAT & 0x10) {
                dbglink_writestr("ERROR transmitting packet\n");
            }
#endif // USE_DBGLINK
        }
        break;

#ifdef AXREMOTE_RECEIVER
    case AXRADIO_STAT_RECEIVE:

        infrared_start_rx();

#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10) {
            dbglink_writestr("got packet (");

            if (st->u.rx.pktdata[0] == 'K') {
                dbglink_writenum16(st->u.rx.pktdata[1], 2, 0);
            } else {
                dbglink_writestr("unknown type: ");
                dbglink_writehexu16(st->u.rx.pktdata[0], 2);
                dbglink_tx(':');
                dbglink_writehexu16(st->u.rx.pktdata[1], 2);
            }

            dbglink_writestr(")\n");
        }
#endif // USE_DBGLINK

        if (st->u.rx.pktdata[0] == 'K') {
            handle_keycode(st->u.rx.pktdata[1]);
        } else
            led_blink_error();

        break;
#endif // AXREMOTE_RECEIVER

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
    //wtimer1_setclksrc(CLKSRC_FRCOSC, 7); // 2); // why: 20MHz / 2 -> for IR timing
    wtimer1_setclksrc(CLKSRC_FRCOSC, 2); // why: 20MHz / 2 -> for IR timing

    LPOSCCONFIG = 0x09; // Slow, PRESC /1, no cal. Does NOT enable LPOSC. LPOSC is enabled upon configuring WTCFGA (MODE_TX_PERIODIC and receive_ack() )

    coldstart = !(PCON & 0x40);

    ANALOGA = 0x00; // every PA pin is used in digital mode (no analog I/O)

#ifdef DVK2B
    PORTA = 0xC0 | (0x25); 	// pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC). Output 0 in PA[0,1,2,5] to prevent current consumption in all DIP switch states
    PORTB = 0xFE; //PB[0,1]  (LCD RS, LCD RST) are overwritten by lcd2_portinit(), enable pull-ups for PB[2..7]  (PB[2,3] for buttons, PB[4..7] unused)
    PORTC = 0xF3 | (0x08); 	// set PC0 = 1 (LCD SEL), PC1 = 1 (LCD SCK), PC2 = 0 (LCD MOSI), PC3 =0 (LED), enable pull-ups for PC[4..7] which are not bonded Mind: PORTC[0:1] is set to 0x3 by lcd2_portinit()
    PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()


    DIRA = 0x27; // output 0 on PA[0,1,2,5] to prevent current consumption in all DIP switch states. Other PA are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
    DIRB = 0x03; // PB[0,1] are outputs (LCD RS, LCD RST), PB[2..7] are inputs (PB[2,3] for buttons,  PB[4..7]  unused)
    DIRC = 0x0F; // PC[0..3] are outputs (LCD SEL, LCD,SCK, LCD MOSI, LED), PC[4..7] are inputs (not bonded).
    DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()
#elif defined(AXREMOTE_TRANSMITTER)

    PORTA = 0xFE; // pull-up for PA[6,7] which are not bonded, Output 0 in PA0, pull-up PA[1..3] (unused rows)
    PORTB = 0xFF; // pull-ups on everything
    PORTC = 0xE0; // output 0 on rows, pull-ups for not-bonded outputs (PA[5..7])
    PORTR = 0x0B; // overwritten by ax5043_reset, ax5043_comminit()

    DIRA = 0x31; // PA[0] is output (row5), PA[1..3] is inputs (unused rows), PA4 and 5 are LEDs, PA[6..7] are not bonded
    DIRB = 0x00; // PB[0..5] are inputs (cols), B6 and 7 are debug connections (inputs as well)
    DIRC = 0x1F; // PC[0..4] are outputs (rows), PC[5..7] are inputs (not bonded).
    DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()

#elif defined(AXREMOTE_RECEIVER)

    PORTA = 0xC0 | (0x3C); // pull-up for PA[6,7] which are not bonded, Output 0 in PA2, A0 and A1 (button) floating (has external pull-down)
    PORTB = 0xF8; // pull-ups on everything
    PORTC = 0xE0; // output 0 on rows, pull-ups for not-bonded outputs (PA[5..7])
    PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()

    DIRA = 0x3C; // PA0 and PA1 are inputs (buttons), PA[2..5] are LEDs
    // TODO: these outputs have changed a bit (B4 and B5 are outputs too)
    DIRB = 0x07; // PB[0..2] are outputs (IR LEDs etc.), B3 is IR receiver (input), B[4..7] are debug connections (inputs) and UART
    DIRC = 0x03; // PC[0..1] are outputs (IR LEDs), PC[2..7] are inputs (not bonded / connected).
    DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()

#endif // AXREMOTE_RECEIVER

    DPS = 0;
    //IE = 0x42; // power management interrupt, wakeup timer
    IE = 0;
    EIE = 0x00;
    E2IE = 0x00;

    led0_off();
    led1_off();
    led2_off();
    led3_off();

    PALTRADIO = 0; // don't output PWRAMP/ANTSEL

    GPIOENABLE = 1; // unfreeze GPIO
#if defined(__ICC8051__)
    return coldstart;
#else
    return !coldstart; // coldstart -> return 0 -> var initialization; start from sleep -> return 1 -> no var initialization
#endif
}


void ir_rx_packet_callback(__xdata struct ir_packet* packet)
{
    LOG(STR("got valid IR packet\n"));
}

void main(void)
{
    uint8_t prev_key = 0;
    uint8_t err = 0;

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
    err = !flash_apply_calibration();
    CLKCON = 0x00;
    wtimer_init();



#ifdef USE_DBGLINK
    dbglink_init();
#endif

    led0_off();
    led1_off();
    led2_off();
    led3_off();

#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10)
        dbglink_writestr("initializing ...\n");

    #if 1
    // display a nice startup animation
    delay_ms(100);

    led0_on();
    led1_off();
    led2_off();
    led3_off();
    delay_ms(100);

    led0_on();
    led1_on();
    led2_off();
    led3_off();
    delay_ms(100);

    led0_on();
    led1_on();
    led2_on();
    led3_off();
    delay_ms(100);

    led0_on();
    led1_on();
    led2_on();
    led3_on();

    delay_ms(200);

    led0_off();
    led1_off();
    led2_off();
    led3_off();
    #endif
#endif

#ifdef AXREMOTE_TRANSMITTER
    led1_on(); // green = MCU is running
#else
    led3_on();
#endif

    //-----------------------------------------------------------------------------

    if (coldstart) {
        // coldstart

        LOG(STR("coldstarting, init radio ...\n"));

        if (err)
            LOG(STR("warning: no calibration data found\n"));

        err = axradio_init();
        if (err != AXRADIO_ERR_NOERROR) {
            if (err == AXRADIO_ERR_NOCHIP) {

                LOG(STR("No AX5043 RF chip found \n"));
                goto terminate_error;
            }

#ifdef USE_DBGLINK
            if (DBGLNKSTAT & 0x10) {
                dbglink_writestr("error initializing radio: ");
                dbglink_writehexu16(err, 2);
                dbglink_tx('\n');
            }
#endif // USE_DBGLINK
            goto terminate_radio_error;
        }

        LOG(STR("found AX5043\n"));

        axradio_set_local_address(&localaddr);
        axradio_set_default_remote_address(&remoteaddr);

#ifdef USE_DBGLINK
        if (DBGLNKSTAT & 0x10) {
            dbglink_writestr("RNG = ");
            dbglink_writenum16(axradio_get_pllrange(), 2, 0);
#ifdef AXREMOTE_TRANSMITTER
            dbglink_writestr("\n\nTRANSMITTER\n");
#endif // AXREMOTE_TRANSMITTER
#ifdef AXREMOTE_RECEIVER
            dbglink_writestr("\n\nRECEIVER\n");
#endif
        }
#endif // USE_DBGLINK

#ifdef AXREMOTE_TRANSMITTER
        // don't turn on radio, we only need it when a key gets pressed
        //err = axradio_set_mode(RADIO_POWERMODE_OFF);
        err = axradio_set_mode(AXRADIO_MODE_ASYNC_TRANSMIT);
#else
        err = axradio_set_mode(AXRADIO_MODE_ASYNC_RECEIVE);
#endif

        if (err != AXRADIO_ERR_NOERROR)
            goto terminate_radio_error;

#ifdef AXREMOTE_RECEIVER
        // usb isn't completely implement yet and we don't need it anyway
        //ftdi_spi_init();
#endif // AXREMOTE_RECEIVER
    } else {
        // warmstart

        LOG(STR("warmstarting ...\n"));

#ifdef AXREMOTE_TRANSMITTER
        // radio isn't running here
#else
        ax5043_commsleepexit();
        IE_4 = 1; // Radio Interrupt enable
#endif
    }


#ifdef USE_DBGLINK
    dbglink_wait_txdone();
#endif

    //-----------------------------------------------------------------------------
#ifdef AXREMOTE_TRANSMITTER

    IE_4 = 1; // Radio Interrupt enable
    while (1)
    {
        uint8_t key = scan_keymatrix();

        wtimer_runcallbacks();

        if (key > 0) {
            //led0_on();
            if (key != prev_key && !tx_in_progress) {

#ifdef USE_DBGLINK
                if (DBGLNKSTAT & 0x10) {
                    dbglink_writestr("TX ");
                    dbglink_writenum16(key, 2, 0);
                    dbglink_tx('\n');
                    dbglink_wait_txdone();
                }
#endif // USE_DBGLINK

                transmit_packet(key);
            }
        } else {
            //led0_off();
        }

        prev_key = key;

        // drive all rows, so if any button is pressed we will wake up
        INIT_MATRIX_FOR_SLEEP();
        //INTCHGB |= 0x04;


    // everything output HIGH
    /*DIRA |= (uint8_t) (0x0F);
      DIRB |= (uint8_t) (0x3F);
      DIRC |= (uint8_t) (0x1F);

      PORTA |= 0x0F;
      PORTB |= 0x3F;
      PORTC |= 0x1F;*/

    LOG(WAIT_DONE());

    //for(;;)
    //
        wtimer_runcallbacks();

        // disable interrupts before going to sleep
        EA = 0;
        IE = 0x18; // no interrupts at all, save for GPIO and radio
        {
            uint8_t flg = WTFLAG_CANSTANDBY;
            /*if (tx_in_progress == 0
                    && axradio_cansleep()
#ifdef USE_DBGLINK
                    && dbglink_txidle()
#endif
               ) {
                flg |= WTFLAG_CANSLEEP;
            }
            */

            //wtimer_idle(flg);
            if (flg & WTFLAG_CANSLEEP) {

                //LOG(STR("enter sleep\n"), WAIT_DONE());

                led0_off();
                led1_off();

                // disable all wakeup timers
                WTCFGA = 7;
                WTCFGB = 7;

                enter_sleep();

                led0_on(); // should never be executed
                led1_on();
            } else {

                wtimer_idle(WTFLAG_CANSTANDBY);
                // green led on if chip is active
                led0_on();
            }
        }
        // turn interrupts back on
        IE = 0xD2; // power, radio and wakeup timer (no GPIO as we poll them when awake)
        EA = 1;

        //LOG(CHAR('x'));
    }


    //-----------------------------------------------------------------------------
#else // RECEIVER

    register_ir_rx_callback(ir_rx_packet_callback);
    // don't receive when we transmit -.-
    //infrared_start_rx();

    // listen for button presses
    init_gpio();

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
               )
                flg |= WTFLAG_CANSLEEP;
#endif // MCU_SLEEP

            // green led on if chip is active
            led3_off();
            wtimer_idle(flg);
            led3_on();
        }
        // turn interrupts back on
        EA = 1;
    }
#endif // AXREMOTE_TRANSMITTER

    //-----------------------------------------------------------------------------

terminate_radio_error:
#ifndef USE_DBGLINK
    goto terminate_error;
#else
    display_radio_error(err);
#endif

terminate_error:
#ifndef USE_DBGLINK
    for (;;) PCON |= 0x10; // reset in release build
#else

#ifdef USE_DBGLINK
    if (DBGLNKSTAT & 0x10) {
        dbglink_writestr("TERMINATE ERROR: 0x");
        dbglink_writehexu16(err, 2);
        dbglink_tx('\n');
    }
#endif // USE_DBGLINK

    led0_on();
    led1_on();
    led2_on();
    led3_on();

    for (;;) {

        wtimer_runcallbacks();

        led1_off();
        led2_off();
        led3_off();

        led0_toggle();
        delay_ms(200);

        {
            uint8_t flg = WTFLAG_CANSTANDBY;
#ifdef MCU_SLEEP
            if (axradio_cansleep()
#ifdef USE_DBGLINK
                    && dbglink_txidle()
#endif
               )
                flg |= WTFLAG_CANSLEEP;
#endif
            wtimer_idle(flg);
        }
    }
#endif
}
