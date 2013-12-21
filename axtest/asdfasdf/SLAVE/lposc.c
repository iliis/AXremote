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

#include <ax8052f143.h>
#include <libmftypes.h>

#include "../COMMON/misc.h"
#include "../AX_Radio_Lab_output/configslave.h"
#include "../COMMON/easyax5043.h"

static void wait_n_lposccycles(uint8_t n)
{
    uint8_t cnt = 0;
    EA = 0; // isr is not handling lposc irq
    AX5043_IRQMASK1 |= 0x04; // LPOSC irq
    for(;;)
    {
        if( AX5043_IRQREQUEST1 & 0x04 )
        {
            cnt++;
            AX5043_LPOSCSTATUS; // clear irq request
        }

        if(cnt > n)
            break;
        enter_standby();
    }

    AX5043_IRQMASK1 &= ~0x04; // disable LPOSC irq
    EA = 1;
}

void calibrate_lposc(void)
{
        AX5043_LPOSCFREQ1 = 0x00;
        AX5043_LPOSCFREQ0 = 0x00;
#if !(FXTAL >= 33000000 && FXTAL <= 47000000)
        AX5043_LPOSCREF1 = ((FXTAL/640)>>8) & 0xFF;
        AX5043_LPOSCREF0 = ((FXTAL/640)>>0) & 0xFF;
        AX5043_PWRMODE = AX5043_PWRSTATE_SYNTH_RX;
        AX5043_LPOSCKFILT1 = (lposckfiltmax >> (8 + 1)) & 0xFF; // kfiltmax >> 1
        AX5043_LPOSCKFILT0 = (lposckfiltmax >> 1) & 0xFF;
        axradio_wait_for_xtal();

        AX5043_LPOSCCONFIG =  0x25; // LPOSC ENA, slow mode; calibrate on rising edge, irq on rising edge
        wait_n_lposccycles(6);

#if FXTAL > 30000000
        if( AX5043_LPOSCFREQ1 == 0x7F)
        {
            // freq tuning went to max pos. start 25% lower
            AX5043_LPOSCFREQ1 = 0xBC;
            wait_n_lposccycles(6);
        }

        if( AX5043_LPOSCFREQ1 == 0x80)
        {
            // freq tuning went to max neg. start 25% higher
            AX5043_LPOSCFREQ1 = 0xA8;
            wait_n_lposccycles(6);
        }
#endif

        AX5043_LPOSCKFILT1 = (lposckfiltmax >> (8 + 2)) & 0xFF; // kfiltmax >> 2
        AX5043_LPOSCKFILT0 = (lposckfiltmax >> 2) & 0xFF;
        wait_n_lposccycles(5);

        AX5043_LPOSCCONFIG = 0x00;
        AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;

        {
            uint8_t x = AX5043_LPOSCFREQ1;
            if( x == 0x7f || x == 0x80 )
            {
                AX5043_LPOSCFREQ1 = 0;
                AX5043_LPOSCFREQ0 = 0;
            }
        }

#endif
}
