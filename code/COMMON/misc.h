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


#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED

#include <libmftypes.h>
#include "../COMMON/axradio.h"

extern void calibrate_lposc(void);
extern uint8_t display_received_packet(struct axradio_status __xdata *st);
extern void dbglink_received_packet(struct axradio_status __xdata *st);
extern __reentrantb void delay_ms(uint16_t ms) __reentrant;
extern __reentrantb void delay_raw(uint32_t cycles, uint8_t relative) __reentrant;
extern void stop_with_error(uint8_t *str);
extern void display_radio_error(uint8_t err);

#ifdef USE_DBGLINK
#include <libmfdbglink.h>
#define NL()        dbglink_tx('\n');
#define WAIT_DONE() dbglink_wait_txdone();
#define STR(s)      dbglink_writestr(s);
#define CHAR(x)     dbglink_tx(x);
#define NUM8(x)     dbglink_writenum16(x, 3, 0);
#define HEX8(x)     dbglink_writehexu16(x, 2);
#define NUM16(x)    dbglink_writenum16(x, 5, 0);
#define HEX16(x)    dbglink_writehexu16(x, 4);
#define NUM32(x)    dbglink_writenum32(x, 10, 0);
#define HEX32(x)    dbglink_writehexu32(x, 8);
// ...

#define NOP
#define LOG(...) LOG_(__VA_ARGS__, NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP,NOP)
#define LOG_(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) \
    do { if(DBGLNKSTAT & 0x10) { _1 _2 _3 _4 _5 _6 _7 _8 _9 _10 _11 _12 _13 _14 _15 _16 } } while(0)

#else
#define LOG(...)    do { } while(0)
#endif


#endif // MISC_H_INCLUDED
