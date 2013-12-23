                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Sat Dec 21 22:25:42 2013
                              5 ;--------------------------------------------------------
                              6 	.module easyax5043
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _ax5043_init_registers_rx
                             13 	.globl _ax5043_init_registers_tx
                             14 	.globl _memset
                             15 	.globl _memcpy
                             16 	.globl _wtimer_remove_callback
                             17 	.globl _wtimer_add_callback
                             18 	.globl _wtimer_remove
                             19 	.globl _wtimer1_addrelative
                             20 	.globl _wtimer0_addrelative
                             21 	.globl _wtimer0_addabsolute
                             22 	.globl _wtimer0_curtime
                             23 	.globl _wtimer_runcallbacks
                             24 	.globl _wtimer_idle
                             25 	.globl _ax5043_writefifo
                             26 	.globl _ax5043_readfifo
                             27 	.globl _ax5043_wakeup_deepsleep
                             28 	.globl _ax5043_enter_deepsleep
                             29 	.globl _ax5043_reset
                             30 	.globl _radio_read24
                             31 	.globl _radio_read16
                             32 	.globl _pn9_buffer
                             33 	.globl _pn9_advance_byte
                             34 	.globl _pn9_advance_bits
                             35 	.globl _axradio_framing_append_crc
                             36 	.globl _axradio_framing_check_crc
                             37 	.globl _ax5043_set_registers_rx
                             38 	.globl _ax5043_set_registers_tx
                             39 	.globl _ax5043_set_registers
                             40 	.globl _axradio_statuschange
                             41 	.globl _axradio_conv_timeinterval_totimer0
                             42 	.globl _checksignedlimit32
                             43 	.globl _checksignedlimit16
                             44 	.globl _signedlimit16
                             45 	.globl _signextend24
                             46 	.globl _signextend20
                             47 	.globl _PORTC_7
                             48 	.globl _PORTC_6
                             49 	.globl _PORTC_5
                             50 	.globl _PORTC_4
                             51 	.globl _PORTC_3
                             52 	.globl _PORTC_2
                             53 	.globl _PORTC_1
                             54 	.globl _PORTC_0
                             55 	.globl _PORTB_7
                             56 	.globl _PORTB_6
                             57 	.globl _PORTB_5
                             58 	.globl _PORTB_4
                             59 	.globl _PORTB_3
                             60 	.globl _PORTB_2
                             61 	.globl _PORTB_1
                             62 	.globl _PORTB_0
                             63 	.globl _PORTA_7
                             64 	.globl _PORTA_6
                             65 	.globl _PORTA_5
                             66 	.globl _PORTA_4
                             67 	.globl _PORTA_3
                             68 	.globl _PORTA_2
                             69 	.globl _PORTA_1
                             70 	.globl _PORTA_0
                             71 	.globl _PINC_7
                             72 	.globl _PINC_6
                             73 	.globl _PINC_5
                             74 	.globl _PINC_4
                             75 	.globl _PINC_3
                             76 	.globl _PINC_2
                             77 	.globl _PINC_1
                             78 	.globl _PINC_0
                             79 	.globl _PINB_7
                             80 	.globl _PINB_6
                             81 	.globl _PINB_5
                             82 	.globl _PINB_4
                             83 	.globl _PINB_3
                             84 	.globl _PINB_2
                             85 	.globl _PINB_1
                             86 	.globl _PINB_0
                             87 	.globl _PINA_7
                             88 	.globl _PINA_6
                             89 	.globl _PINA_5
                             90 	.globl _PINA_4
                             91 	.globl _PINA_3
                             92 	.globl _PINA_2
                             93 	.globl _PINA_1
                             94 	.globl _PINA_0
                             95 	.globl _CY
                             96 	.globl _AC
                             97 	.globl _F0
                             98 	.globl _RS1
                             99 	.globl _RS0
                            100 	.globl _OV
                            101 	.globl _F1
                            102 	.globl _P
                            103 	.globl _IP_7
                            104 	.globl _IP_6
                            105 	.globl _IP_5
                            106 	.globl _IP_4
                            107 	.globl _IP_3
                            108 	.globl _IP_2
                            109 	.globl _IP_1
                            110 	.globl _IP_0
                            111 	.globl _EA
                            112 	.globl _IE_7
                            113 	.globl _IE_6
                            114 	.globl _IE_5
                            115 	.globl _IE_4
                            116 	.globl _IE_3
                            117 	.globl _IE_2
                            118 	.globl _IE_1
                            119 	.globl _IE_0
                            120 	.globl _EIP_7
                            121 	.globl _EIP_6
                            122 	.globl _EIP_5
                            123 	.globl _EIP_4
                            124 	.globl _EIP_3
                            125 	.globl _EIP_2
                            126 	.globl _EIP_1
                            127 	.globl _EIP_0
                            128 	.globl _EIE_7
                            129 	.globl _EIE_6
                            130 	.globl _EIE_5
                            131 	.globl _EIE_4
                            132 	.globl _EIE_3
                            133 	.globl _EIE_2
                            134 	.globl _EIE_1
                            135 	.globl _EIE_0
                            136 	.globl _E2IP_7
                            137 	.globl _E2IP_6
                            138 	.globl _E2IP_5
                            139 	.globl _E2IP_4
                            140 	.globl _E2IP_3
                            141 	.globl _E2IP_2
                            142 	.globl _E2IP_1
                            143 	.globl _E2IP_0
                            144 	.globl _E2IE_7
                            145 	.globl _E2IE_6
                            146 	.globl _E2IE_5
                            147 	.globl _E2IE_4
                            148 	.globl _E2IE_3
                            149 	.globl _E2IE_2
                            150 	.globl _E2IE_1
                            151 	.globl _E2IE_0
                            152 	.globl _B_7
                            153 	.globl _B_6
                            154 	.globl _B_5
                            155 	.globl _B_4
                            156 	.globl _B_3
                            157 	.globl _B_2
                            158 	.globl _B_1
                            159 	.globl _B_0
                            160 	.globl _ACC_7
                            161 	.globl _ACC_6
                            162 	.globl _ACC_5
                            163 	.globl _ACC_4
                            164 	.globl _ACC_3
                            165 	.globl _ACC_2
                            166 	.globl _ACC_1
                            167 	.globl _ACC_0
                            168 	.globl _WTSTAT
                            169 	.globl _WTIRQEN
                            170 	.globl _WTEVTD
                            171 	.globl _WTEVTD1
                            172 	.globl _WTEVTD0
                            173 	.globl _WTEVTC
                            174 	.globl _WTEVTC1
                            175 	.globl _WTEVTC0
                            176 	.globl _WTEVTB
                            177 	.globl _WTEVTB1
                            178 	.globl _WTEVTB0
                            179 	.globl _WTEVTA
                            180 	.globl _WTEVTA1
                            181 	.globl _WTEVTA0
                            182 	.globl _WTCNTR1
                            183 	.globl _WTCNTB
                            184 	.globl _WTCNTB1
                            185 	.globl _WTCNTB0
                            186 	.globl _WTCNTA
                            187 	.globl _WTCNTA1
                            188 	.globl _WTCNTA0
                            189 	.globl _WTCFGB
                            190 	.globl _WTCFGA
                            191 	.globl _WDTRESET
                            192 	.globl _WDTCFG
                            193 	.globl _U1STATUS
                            194 	.globl _U1SHREG
                            195 	.globl _U1MODE
                            196 	.globl _U1CTRL
                            197 	.globl _U0STATUS
                            198 	.globl _U0SHREG
                            199 	.globl _U0MODE
                            200 	.globl _U0CTRL
                            201 	.globl _T2STATUS
                            202 	.globl _T2PERIOD
                            203 	.globl _T2PERIOD1
                            204 	.globl _T2PERIOD0
                            205 	.globl _T2MODE
                            206 	.globl _T2CNT
                            207 	.globl _T2CNT1
                            208 	.globl _T2CNT0
                            209 	.globl _T2CLKSRC
                            210 	.globl _T1STATUS
                            211 	.globl _T1PERIOD
                            212 	.globl _T1PERIOD1
                            213 	.globl _T1PERIOD0
                            214 	.globl _T1MODE
                            215 	.globl _T1CNT
                            216 	.globl _T1CNT1
                            217 	.globl _T1CNT0
                            218 	.globl _T1CLKSRC
                            219 	.globl _T0STATUS
                            220 	.globl _T0PERIOD
                            221 	.globl _T0PERIOD1
                            222 	.globl _T0PERIOD0
                            223 	.globl _T0MODE
                            224 	.globl _T0CNT
                            225 	.globl _T0CNT1
                            226 	.globl _T0CNT0
                            227 	.globl _T0CLKSRC
                            228 	.globl _SPSTATUS
                            229 	.globl _SPSHREG
                            230 	.globl _SPMODE
                            231 	.globl _SPCLKSRC
                            232 	.globl _RADIOSTAT
                            233 	.globl _RADIOSTAT1
                            234 	.globl _RADIOSTAT0
                            235 	.globl _RADIODATA
                            236 	.globl _RADIODATA3
                            237 	.globl _RADIODATA2
                            238 	.globl _RADIODATA1
                            239 	.globl _RADIODATA0
                            240 	.globl _RADIOADDR
                            241 	.globl _RADIOADDR1
                            242 	.globl _RADIOADDR0
                            243 	.globl _RADIOACC
                            244 	.globl _OC1STATUS
                            245 	.globl _OC1PIN
                            246 	.globl _OC1MODE
                            247 	.globl _OC1COMP
                            248 	.globl _OC1COMP1
                            249 	.globl _OC1COMP0
                            250 	.globl _OC0STATUS
                            251 	.globl _OC0PIN
                            252 	.globl _OC0MODE
                            253 	.globl _OC0COMP
                            254 	.globl _OC0COMP1
                            255 	.globl _OC0COMP0
                            256 	.globl _NVSTATUS
                            257 	.globl _NVKEY
                            258 	.globl _NVDATA
                            259 	.globl _NVDATA1
                            260 	.globl _NVDATA0
                            261 	.globl _NVADDR
                            262 	.globl _NVADDR1
                            263 	.globl _NVADDR0
                            264 	.globl _IC1STATUS
                            265 	.globl _IC1MODE
                            266 	.globl _IC1CAPT
                            267 	.globl _IC1CAPT1
                            268 	.globl _IC1CAPT0
                            269 	.globl _IC0STATUS
                            270 	.globl _IC0MODE
                            271 	.globl _IC0CAPT
                            272 	.globl _IC0CAPT1
                            273 	.globl _IC0CAPT0
                            274 	.globl _PORTR
                            275 	.globl _PORTC
                            276 	.globl _PORTB
                            277 	.globl _PORTA
                            278 	.globl _PINR
                            279 	.globl _PINC
                            280 	.globl _PINB
                            281 	.globl _PINA
                            282 	.globl _DIRR
                            283 	.globl _DIRC
                            284 	.globl _DIRB
                            285 	.globl _DIRA
                            286 	.globl _DBGLNKSTAT
                            287 	.globl _DBGLNKBUF
                            288 	.globl _CODECONFIG
                            289 	.globl _CLKSTAT
                            290 	.globl _CLKCON
                            291 	.globl _ANALOGCOMP
                            292 	.globl _ADCCONV
                            293 	.globl _ADCCLKSRC
                            294 	.globl _ADCCH3CONFIG
                            295 	.globl _ADCCH2CONFIG
                            296 	.globl _ADCCH1CONFIG
                            297 	.globl _ADCCH0CONFIG
                            298 	.globl __XPAGE
                            299 	.globl _XPAGE
                            300 	.globl _SP
                            301 	.globl _PSW
                            302 	.globl _PCON
                            303 	.globl _IP
                            304 	.globl _IE
                            305 	.globl _EIP
                            306 	.globl _EIE
                            307 	.globl _E2IP
                            308 	.globl _E2IE
                            309 	.globl _DPS
                            310 	.globl _DPTR1
                            311 	.globl _DPTR0
                            312 	.globl _DPL1
                            313 	.globl _DPL
                            314 	.globl _DPH1
                            315 	.globl _DPH
                            316 	.globl _B
                            317 	.globl _ACC
                            318 	.globl _f33_saved
                            319 	.globl _f32_saved
                            320 	.globl _f31_saved
                            321 	.globl _f30_saved
                            322 	.globl _axradio_timer
                            323 	.globl _axradio_cb_transmitdata
                            324 	.globl _axradio_cb_transmitend
                            325 	.globl _axradio_cb_transmitstart
                            326 	.globl _axradio_cb_channelstate
                            327 	.globl _axradio_cb_receivesfd
                            328 	.globl _axradio_cb_receive
                            329 	.globl _axradio_rxbuffer
                            330 	.globl _axradio_txbuffer
                            331 	.globl _axradio_default_remoteaddr
                            332 	.globl _axradio_localaddr
                            333 	.globl _axradio_timeanchor
                            334 	.globl _axradio_sync_periodcorr
                            335 	.globl _axradio_sync_time
                            336 	.globl _axradio_ack_seqnr
                            337 	.globl _axradio_ack_count
                            338 	.globl _axradio_curfreqoffset
                            339 	.globl _axradio_curchannel
                            340 	.globl _axradio_txbuffer_cnt
                            341 	.globl _axradio_txbuffer_len
                            342 	.globl _axradio_syncstate
                            343 	.globl _AX5043_POWCTRL1
                            344 	.globl _AX5043_REF
                            345 	.globl _AX5043_0xF44
                            346 	.globl _AX5043_0xF35
                            347 	.globl _AX5043_0xF34
                            348 	.globl _AX5043_0xF33
                            349 	.globl _AX5043_0xF32
                            350 	.globl _AX5043_0xF31
                            351 	.globl _AX5043_0xF30
                            352 	.globl _AX5043_0xF2F
                            353 	.globl _AX5043_0xF26
                            354 	.globl _AX5043_0xF23
                            355 	.globl _AX5043_0xF22
                            356 	.globl _AX5043_0xF21
                            357 	.globl _AX5043_0xF1C
                            358 	.globl _AX5043_0xF18
                            359 	.globl _AX5043_0xF11
                            360 	.globl _AX5043_0xF10
                            361 	.globl _AX5043_0xF0C
                            362 	.globl _AX5043_0xF01
                            363 	.globl _AX5043_0xF00
                            364 	.globl _AX5043_TIMEGAIN3NB
                            365 	.globl _AX5043_TIMEGAIN2NB
                            366 	.globl _AX5043_TIMEGAIN1NB
                            367 	.globl _AX5043_TIMEGAIN0NB
                            368 	.globl _AX5043_RXPARAMSETSNB
                            369 	.globl _AX5043_RXPARAMCURSETNB
                            370 	.globl _AX5043_PKTMAXLENNB
                            371 	.globl _AX5043_PKTLENOFFSETNB
                            372 	.globl _AX5043_PKTLENCFGNB
                            373 	.globl _AX5043_PKTADDRMASK3NB
                            374 	.globl _AX5043_PKTADDRMASK2NB
                            375 	.globl _AX5043_PKTADDRMASK1NB
                            376 	.globl _AX5043_PKTADDRMASK0NB
                            377 	.globl _AX5043_PKTADDRCFGNB
                            378 	.globl _AX5043_PKTADDR3NB
                            379 	.globl _AX5043_PKTADDR2NB
                            380 	.globl _AX5043_PKTADDR1NB
                            381 	.globl _AX5043_PKTADDR0NB
                            382 	.globl _AX5043_PHASEGAIN3NB
                            383 	.globl _AX5043_PHASEGAIN2NB
                            384 	.globl _AX5043_PHASEGAIN1NB
                            385 	.globl _AX5043_PHASEGAIN0NB
                            386 	.globl _AX5043_FREQUENCYLEAKNB
                            387 	.globl _AX5043_FREQUENCYGAIND3NB
                            388 	.globl _AX5043_FREQUENCYGAIND2NB
                            389 	.globl _AX5043_FREQUENCYGAIND1NB
                            390 	.globl _AX5043_FREQUENCYGAIND0NB
                            391 	.globl _AX5043_FREQUENCYGAINC3NB
                            392 	.globl _AX5043_FREQUENCYGAINC2NB
                            393 	.globl _AX5043_FREQUENCYGAINC1NB
                            394 	.globl _AX5043_FREQUENCYGAINC0NB
                            395 	.globl _AX5043_FREQUENCYGAINB3NB
                            396 	.globl _AX5043_FREQUENCYGAINB2NB
                            397 	.globl _AX5043_FREQUENCYGAINB1NB
                            398 	.globl _AX5043_FREQUENCYGAINB0NB
                            399 	.globl _AX5043_FREQUENCYGAINA3NB
                            400 	.globl _AX5043_FREQUENCYGAINA2NB
                            401 	.globl _AX5043_FREQUENCYGAINA1NB
                            402 	.globl _AX5043_FREQUENCYGAINA0NB
                            403 	.globl _AX5043_FREQDEV13NB
                            404 	.globl _AX5043_FREQDEV12NB
                            405 	.globl _AX5043_FREQDEV11NB
                            406 	.globl _AX5043_FREQDEV10NB
                            407 	.globl _AX5043_FREQDEV03NB
                            408 	.globl _AX5043_FREQDEV02NB
                            409 	.globl _AX5043_FREQDEV01NB
                            410 	.globl _AX5043_FREQDEV00NB
                            411 	.globl _AX5043_FOURFSK3NB
                            412 	.globl _AX5043_FOURFSK2NB
                            413 	.globl _AX5043_FOURFSK1NB
                            414 	.globl _AX5043_FOURFSK0NB
                            415 	.globl _AX5043_DRGAIN3NB
                            416 	.globl _AX5043_DRGAIN2NB
                            417 	.globl _AX5043_DRGAIN1NB
                            418 	.globl _AX5043_DRGAIN0NB
                            419 	.globl _AX5043_BBOFFSRES3NB
                            420 	.globl _AX5043_BBOFFSRES2NB
                            421 	.globl _AX5043_BBOFFSRES1NB
                            422 	.globl _AX5043_BBOFFSRES0NB
                            423 	.globl _AX5043_AMPLITUDEGAIN3NB
                            424 	.globl _AX5043_AMPLITUDEGAIN2NB
                            425 	.globl _AX5043_AMPLITUDEGAIN1NB
                            426 	.globl _AX5043_AMPLITUDEGAIN0NB
                            427 	.globl _AX5043_AGCTARGET3NB
                            428 	.globl _AX5043_AGCTARGET2NB
                            429 	.globl _AX5043_AGCTARGET1NB
                            430 	.globl _AX5043_AGCTARGET0NB
                            431 	.globl _AX5043_AGCMINMAX3NB
                            432 	.globl _AX5043_AGCMINMAX2NB
                            433 	.globl _AX5043_AGCMINMAX1NB
                            434 	.globl _AX5043_AGCMINMAX0NB
                            435 	.globl _AX5043_AGCGAIN3NB
                            436 	.globl _AX5043_AGCGAIN2NB
                            437 	.globl _AX5043_AGCGAIN1NB
                            438 	.globl _AX5043_AGCGAIN0NB
                            439 	.globl _AX5043_AGCAHYST3NB
                            440 	.globl _AX5043_AGCAHYST2NB
                            441 	.globl _AX5043_AGCAHYST1NB
                            442 	.globl _AX5043_AGCAHYST0NB
                            443 	.globl _AX5043_XTALSTATUSNB
                            444 	.globl _AX5043_XTALCAPNB
                            445 	.globl _AX5043_WAKEUPXOEARLYNB
                            446 	.globl _AX5043_WAKEUPTIMER1NB
                            447 	.globl _AX5043_WAKEUPTIMER0NB
                            448 	.globl _AX5043_WAKEUPFREQ1NB
                            449 	.globl _AX5043_WAKEUPFREQ0NB
                            450 	.globl _AX5043_WAKEUP1NB
                            451 	.globl _AX5043_WAKEUP0NB
                            452 	.globl _AX5043_TXRATE2NB
                            453 	.globl _AX5043_TXRATE1NB
                            454 	.globl _AX5043_TXRATE0NB
                            455 	.globl _AX5043_TXPWRCOEFFE1NB
                            456 	.globl _AX5043_TXPWRCOEFFE0NB
                            457 	.globl _AX5043_TXPWRCOEFFD1NB
                            458 	.globl _AX5043_TXPWRCOEFFD0NB
                            459 	.globl _AX5043_TXPWRCOEFFC1NB
                            460 	.globl _AX5043_TXPWRCOEFFC0NB
                            461 	.globl _AX5043_TXPWRCOEFFB1NB
                            462 	.globl _AX5043_TXPWRCOEFFB0NB
                            463 	.globl _AX5043_TXPWRCOEFFA1NB
                            464 	.globl _AX5043_TXPWRCOEFFA0NB
                            465 	.globl _AX5043_TRKRFFREQ2NB
                            466 	.globl _AX5043_TRKRFFREQ1NB
                            467 	.globl _AX5043_TRKRFFREQ0NB
                            468 	.globl _AX5043_TRKPHASE1NB
                            469 	.globl _AX5043_TRKPHASE0NB
                            470 	.globl _AX5043_TRKFSKDEMOD1NB
                            471 	.globl _AX5043_TRKFSKDEMOD0NB
                            472 	.globl _AX5043_TRKFREQ1NB
                            473 	.globl _AX5043_TRKFREQ0NB
                            474 	.globl _AX5043_TRKDATARATE2NB
                            475 	.globl _AX5043_TRKDATARATE1NB
                            476 	.globl _AX5043_TRKDATARATE0NB
                            477 	.globl _AX5043_TRKAMPLITUDE1NB
                            478 	.globl _AX5043_TRKAMPLITUDE0NB
                            479 	.globl _AX5043_TRKAFSKDEMOD1NB
                            480 	.globl _AX5043_TRKAFSKDEMOD0NB
                            481 	.globl _AX5043_TMGTXSETTLENB
                            482 	.globl _AX5043_TMGTXBOOSTNB
                            483 	.globl _AX5043_TMGRXSETTLENB
                            484 	.globl _AX5043_TMGRXRSSINB
                            485 	.globl _AX5043_TMGRXPREAMBLE3NB
                            486 	.globl _AX5043_TMGRXPREAMBLE2NB
                            487 	.globl _AX5043_TMGRXPREAMBLE1NB
                            488 	.globl _AX5043_TMGRXOFFSACQNB
                            489 	.globl _AX5043_TMGRXCOARSEAGCNB
                            490 	.globl _AX5043_TMGRXBOOSTNB
                            491 	.globl _AX5043_TMGRXAGCNB
                            492 	.globl _AX5043_TIMER2NB
                            493 	.globl _AX5043_TIMER1NB
                            494 	.globl _AX5043_TIMER0NB
                            495 	.globl _AX5043_SILICONREVISIONNB
                            496 	.globl _AX5043_SCRATCHNB
                            497 	.globl _AX5043_RXDATARATE2NB
                            498 	.globl _AX5043_RXDATARATE1NB
                            499 	.globl _AX5043_RXDATARATE0NB
                            500 	.globl _AX5043_RSSIREFERENCENB
                            501 	.globl _AX5043_RSSIABSTHRNB
                            502 	.globl _AX5043_RSSINB
                            503 	.globl _AX5043_RADIOSTATENB
                            504 	.globl _AX5043_RADIOEVENTREQ1NB
                            505 	.globl _AX5043_RADIOEVENTREQ0NB
                            506 	.globl _AX5043_RADIOEVENTMASK1NB
                            507 	.globl _AX5043_RADIOEVENTMASK0NB
                            508 	.globl _AX5043_PWRMODENB
                            509 	.globl _AX5043_PWRAMPNB
                            510 	.globl _AX5043_POWSTICKYSTATNB
                            511 	.globl _AX5043_POWSTATNB
                            512 	.globl _AX5043_POWIRQMASKNB
                            513 	.globl _AX5043_PLLVCOIRNB
                            514 	.globl _AX5043_PLLVCOINB
                            515 	.globl _AX5043_PLLVCODIVNB
                            516 	.globl _AX5043_PLLRNGCLKNB
                            517 	.globl _AX5043_PLLRANGINGBNB
                            518 	.globl _AX5043_PLLRANGINGANB
                            519 	.globl _AX5043_PLLLOOPBOOSTNB
                            520 	.globl _AX5043_PLLLOOPNB
                            521 	.globl _AX5043_PLLLOCKDETNB
                            522 	.globl _AX5043_PLLCPIBOOSTNB
                            523 	.globl _AX5043_PLLCPINB
                            524 	.globl _AX5043_PKTSTOREFLAGSNB
                            525 	.globl _AX5043_PKTMISCFLAGSNB
                            526 	.globl _AX5043_PKTCHUNKSIZENB
                            527 	.globl _AX5043_PKTACCEPTFLAGSNB
                            528 	.globl _AX5043_PINSTATENB
                            529 	.globl _AX5043_PINFUNCSYSCLKNB
                            530 	.globl _AX5043_PINFUNCPWRAMPNB
                            531 	.globl _AX5043_PINFUNCIRQNB
                            532 	.globl _AX5043_PINFUNCDCLKNB
                            533 	.globl _AX5043_PINFUNCDATANB
                            534 	.globl _AX5043_PINFUNCANTSELNB
                            535 	.globl _AX5043_MODULATIONNB
                            536 	.globl _AX5043_MODCFGFNB
                            537 	.globl _AX5043_MODCFGANB
                            538 	.globl _AX5043_MAXRFOFFSET2NB
                            539 	.globl _AX5043_MAXRFOFFSET1NB
                            540 	.globl _AX5043_MAXRFOFFSET0NB
                            541 	.globl _AX5043_MAXDROFFSET2NB
                            542 	.globl _AX5043_MAXDROFFSET1NB
                            543 	.globl _AX5043_MAXDROFFSET0NB
                            544 	.globl _AX5043_MATCH1PAT1NB
                            545 	.globl _AX5043_MATCH1PAT0NB
                            546 	.globl _AX5043_MATCH1MINNB
                            547 	.globl _AX5043_MATCH1MAXNB
                            548 	.globl _AX5043_MATCH1LENNB
                            549 	.globl _AX5043_MATCH0PAT3NB
                            550 	.globl _AX5043_MATCH0PAT2NB
                            551 	.globl _AX5043_MATCH0PAT1NB
                            552 	.globl _AX5043_MATCH0PAT0NB
                            553 	.globl _AX5043_MATCH0MINNB
                            554 	.globl _AX5043_MATCH0MAXNB
                            555 	.globl _AX5043_MATCH0LENNB
                            556 	.globl _AX5043_LPOSCSTATUSNB
                            557 	.globl _AX5043_LPOSCREF1NB
                            558 	.globl _AX5043_LPOSCREF0NB
                            559 	.globl _AX5043_LPOSCPER1NB
                            560 	.globl _AX5043_LPOSCPER0NB
                            561 	.globl _AX5043_LPOSCKFILT1NB
                            562 	.globl _AX5043_LPOSCKFILT0NB
                            563 	.globl _AX5043_LPOSCFREQ1NB
                            564 	.globl _AX5043_LPOSCFREQ0NB
                            565 	.globl _AX5043_LPOSCCONFIGNB
                            566 	.globl _AX5043_IRQREQUEST1NB
                            567 	.globl _AX5043_IRQREQUEST0NB
                            568 	.globl _AX5043_IRQMASK1NB
                            569 	.globl _AX5043_IRQMASK0NB
                            570 	.globl _AX5043_IRQINVERSION1NB
                            571 	.globl _AX5043_IRQINVERSION0NB
                            572 	.globl _AX5043_IFFREQ1NB
                            573 	.globl _AX5043_IFFREQ0NB
                            574 	.globl _AX5043_GPADCPERIODNB
                            575 	.globl _AX5043_GPADCCTRLNB
                            576 	.globl _AX5043_GPADC13VALUE1NB
                            577 	.globl _AX5043_GPADC13VALUE0NB
                            578 	.globl _AX5043_FSKDMIN1NB
                            579 	.globl _AX5043_FSKDMIN0NB
                            580 	.globl _AX5043_FSKDMAX1NB
                            581 	.globl _AX5043_FSKDMAX0NB
                            582 	.globl _AX5043_FSKDEV2NB
                            583 	.globl _AX5043_FSKDEV1NB
                            584 	.globl _AX5043_FSKDEV0NB
                            585 	.globl _AX5043_FREQB3NB
                            586 	.globl _AX5043_FREQB2NB
                            587 	.globl _AX5043_FREQB1NB
                            588 	.globl _AX5043_FREQB0NB
                            589 	.globl _AX5043_FREQA3NB
                            590 	.globl _AX5043_FREQA2NB
                            591 	.globl _AX5043_FREQA1NB
                            592 	.globl _AX5043_FREQA0NB
                            593 	.globl _AX5043_FRAMINGNB
                            594 	.globl _AX5043_FIFOTHRESH1NB
                            595 	.globl _AX5043_FIFOTHRESH0NB
                            596 	.globl _AX5043_FIFOSTATNB
                            597 	.globl _AX5043_FIFOFREE1NB
                            598 	.globl _AX5043_FIFOFREE0NB
                            599 	.globl _AX5043_FIFODATANB
                            600 	.globl _AX5043_FIFOCOUNT1NB
                            601 	.globl _AX5043_FIFOCOUNT0NB
                            602 	.globl _AX5043_FECSYNCNB
                            603 	.globl _AX5043_FECSTATUSNB
                            604 	.globl _AX5043_FECNB
                            605 	.globl _AX5043_ENCODINGNB
                            606 	.globl _AX5043_DIVERSITYNB
                            607 	.globl _AX5043_DECIMATIONNB
                            608 	.globl _AX5043_DACVALUE1NB
                            609 	.globl _AX5043_DACVALUE0NB
                            610 	.globl _AX5043_DACCONFIGNB
                            611 	.globl _AX5043_CRCINIT3NB
                            612 	.globl _AX5043_CRCINIT2NB
                            613 	.globl _AX5043_CRCINIT1NB
                            614 	.globl _AX5043_CRCINIT0NB
                            615 	.globl _AX5043_BGNDRSSITHRNB
                            616 	.globl _AX5043_BGNDRSSIGAINNB
                            617 	.globl _AX5043_BGNDRSSINB
                            618 	.globl _AX5043_BBTUNENB
                            619 	.globl _AX5043_BBOFFSCAPNB
                            620 	.globl _AX5043_AMPLFILTERNB
                            621 	.globl _AX5043_AGCCOUNTERNB
                            622 	.globl _AX5043_AFSKSPACE1NB
                            623 	.globl _AX5043_AFSKSPACE0NB
                            624 	.globl _AX5043_AFSKMARK1NB
                            625 	.globl _AX5043_AFSKMARK0NB
                            626 	.globl _AX5043_AFSKCTRLNB
                            627 	.globl _AX5043_TIMEGAIN3
                            628 	.globl _AX5043_TIMEGAIN2
                            629 	.globl _AX5043_TIMEGAIN1
                            630 	.globl _AX5043_TIMEGAIN0
                            631 	.globl _AX5043_RXPARAMSETS
                            632 	.globl _AX5043_RXPARAMCURSET
                            633 	.globl _AX5043_PKTMAXLEN
                            634 	.globl _AX5043_PKTLENOFFSET
                            635 	.globl _AX5043_PKTLENCFG
                            636 	.globl _AX5043_PKTADDRMASK3
                            637 	.globl _AX5043_PKTADDRMASK2
                            638 	.globl _AX5043_PKTADDRMASK1
                            639 	.globl _AX5043_PKTADDRMASK0
                            640 	.globl _AX5043_PKTADDRCFG
                            641 	.globl _AX5043_PKTADDR3
                            642 	.globl _AX5043_PKTADDR2
                            643 	.globl _AX5043_PKTADDR1
                            644 	.globl _AX5043_PKTADDR0
                            645 	.globl _AX5043_PHASEGAIN3
                            646 	.globl _AX5043_PHASEGAIN2
                            647 	.globl _AX5043_PHASEGAIN1
                            648 	.globl _AX5043_PHASEGAIN0
                            649 	.globl _AX5043_FREQUENCYLEAK
                            650 	.globl _AX5043_FREQUENCYGAIND3
                            651 	.globl _AX5043_FREQUENCYGAIND2
                            652 	.globl _AX5043_FREQUENCYGAIND1
                            653 	.globl _AX5043_FREQUENCYGAIND0
                            654 	.globl _AX5043_FREQUENCYGAINC3
                            655 	.globl _AX5043_FREQUENCYGAINC2
                            656 	.globl _AX5043_FREQUENCYGAINC1
                            657 	.globl _AX5043_FREQUENCYGAINC0
                            658 	.globl _AX5043_FREQUENCYGAINB3
                            659 	.globl _AX5043_FREQUENCYGAINB2
                            660 	.globl _AX5043_FREQUENCYGAINB1
                            661 	.globl _AX5043_FREQUENCYGAINB0
                            662 	.globl _AX5043_FREQUENCYGAINA3
                            663 	.globl _AX5043_FREQUENCYGAINA2
                            664 	.globl _AX5043_FREQUENCYGAINA1
                            665 	.globl _AX5043_FREQUENCYGAINA0
                            666 	.globl _AX5043_FREQDEV13
                            667 	.globl _AX5043_FREQDEV12
                            668 	.globl _AX5043_FREQDEV11
                            669 	.globl _AX5043_FREQDEV10
                            670 	.globl _AX5043_FREQDEV03
                            671 	.globl _AX5043_FREQDEV02
                            672 	.globl _AX5043_FREQDEV01
                            673 	.globl _AX5043_FREQDEV00
                            674 	.globl _AX5043_FOURFSK3
                            675 	.globl _AX5043_FOURFSK2
                            676 	.globl _AX5043_FOURFSK1
                            677 	.globl _AX5043_FOURFSK0
                            678 	.globl _AX5043_DRGAIN3
                            679 	.globl _AX5043_DRGAIN2
                            680 	.globl _AX5043_DRGAIN1
                            681 	.globl _AX5043_DRGAIN0
                            682 	.globl _AX5043_BBOFFSRES3
                            683 	.globl _AX5043_BBOFFSRES2
                            684 	.globl _AX5043_BBOFFSRES1
                            685 	.globl _AX5043_BBOFFSRES0
                            686 	.globl _AX5043_AMPLITUDEGAIN3
                            687 	.globl _AX5043_AMPLITUDEGAIN2
                            688 	.globl _AX5043_AMPLITUDEGAIN1
                            689 	.globl _AX5043_AMPLITUDEGAIN0
                            690 	.globl _AX5043_AGCTARGET3
                            691 	.globl _AX5043_AGCTARGET2
                            692 	.globl _AX5043_AGCTARGET1
                            693 	.globl _AX5043_AGCTARGET0
                            694 	.globl _AX5043_AGCMINMAX3
                            695 	.globl _AX5043_AGCMINMAX2
                            696 	.globl _AX5043_AGCMINMAX1
                            697 	.globl _AX5043_AGCMINMAX0
                            698 	.globl _AX5043_AGCGAIN3
                            699 	.globl _AX5043_AGCGAIN2
                            700 	.globl _AX5043_AGCGAIN1
                            701 	.globl _AX5043_AGCGAIN0
                            702 	.globl _AX5043_AGCAHYST3
                            703 	.globl _AX5043_AGCAHYST2
                            704 	.globl _AX5043_AGCAHYST1
                            705 	.globl _AX5043_AGCAHYST0
                            706 	.globl _AX5043_XTALSTATUS
                            707 	.globl _AX5043_XTALCAP
                            708 	.globl _AX5043_WAKEUPXOEARLY
                            709 	.globl _AX5043_WAKEUPTIMER1
                            710 	.globl _AX5043_WAKEUPTIMER0
                            711 	.globl _AX5043_WAKEUPFREQ1
                            712 	.globl _AX5043_WAKEUPFREQ0
                            713 	.globl _AX5043_WAKEUP1
                            714 	.globl _AX5043_WAKEUP0
                            715 	.globl _AX5043_TXRATE2
                            716 	.globl _AX5043_TXRATE1
                            717 	.globl _AX5043_TXRATE0
                            718 	.globl _AX5043_TXPWRCOEFFE1
                            719 	.globl _AX5043_TXPWRCOEFFE0
                            720 	.globl _AX5043_TXPWRCOEFFD1
                            721 	.globl _AX5043_TXPWRCOEFFD0
                            722 	.globl _AX5043_TXPWRCOEFFC1
                            723 	.globl _AX5043_TXPWRCOEFFC0
                            724 	.globl _AX5043_TXPWRCOEFFB1
                            725 	.globl _AX5043_TXPWRCOEFFB0
                            726 	.globl _AX5043_TXPWRCOEFFA1
                            727 	.globl _AX5043_TXPWRCOEFFA0
                            728 	.globl _AX5043_TRKRFFREQ2
                            729 	.globl _AX5043_TRKRFFREQ1
                            730 	.globl _AX5043_TRKRFFREQ0
                            731 	.globl _AX5043_TRKPHASE1
                            732 	.globl _AX5043_TRKPHASE0
                            733 	.globl _AX5043_TRKFSKDEMOD1
                            734 	.globl _AX5043_TRKFSKDEMOD0
                            735 	.globl _AX5043_TRKFREQ1
                            736 	.globl _AX5043_TRKFREQ0
                            737 	.globl _AX5043_TRKDATARATE2
                            738 	.globl _AX5043_TRKDATARATE1
                            739 	.globl _AX5043_TRKDATARATE0
                            740 	.globl _AX5043_TRKAMPLITUDE1
                            741 	.globl _AX5043_TRKAMPLITUDE0
                            742 	.globl _AX5043_TRKAFSKDEMOD1
                            743 	.globl _AX5043_TRKAFSKDEMOD0
                            744 	.globl _AX5043_TMGTXSETTLE
                            745 	.globl _AX5043_TMGTXBOOST
                            746 	.globl _AX5043_TMGRXSETTLE
                            747 	.globl _AX5043_TMGRXRSSI
                            748 	.globl _AX5043_TMGRXPREAMBLE3
                            749 	.globl _AX5043_TMGRXPREAMBLE2
                            750 	.globl _AX5043_TMGRXPREAMBLE1
                            751 	.globl _AX5043_TMGRXOFFSACQ
                            752 	.globl _AX5043_TMGRXCOARSEAGC
                            753 	.globl _AX5043_TMGRXBOOST
                            754 	.globl _AX5043_TMGRXAGC
                            755 	.globl _AX5043_TIMER2
                            756 	.globl _AX5043_TIMER1
                            757 	.globl _AX5043_TIMER0
                            758 	.globl _AX5043_SILICONREVISION
                            759 	.globl _AX5043_SCRATCH
                            760 	.globl _AX5043_RXDATARATE2
                            761 	.globl _AX5043_RXDATARATE1
                            762 	.globl _AX5043_RXDATARATE0
                            763 	.globl _AX5043_RSSIREFERENCE
                            764 	.globl _AX5043_RSSIABSTHR
                            765 	.globl _AX5043_RSSI
                            766 	.globl _AX5043_RADIOSTATE
                            767 	.globl _AX5043_RADIOEVENTREQ1
                            768 	.globl _AX5043_RADIOEVENTREQ0
                            769 	.globl _AX5043_RADIOEVENTMASK1
                            770 	.globl _AX5043_RADIOEVENTMASK0
                            771 	.globl _AX5043_PWRMODE
                            772 	.globl _AX5043_PWRAMP
                            773 	.globl _AX5043_POWSTICKYSTAT
                            774 	.globl _AX5043_POWSTAT
                            775 	.globl _AX5043_POWIRQMASK
                            776 	.globl _AX5043_PLLVCOIR
                            777 	.globl _AX5043_PLLVCOI
                            778 	.globl _AX5043_PLLVCODIV
                            779 	.globl _AX5043_PLLRNGCLK
                            780 	.globl _AX5043_PLLRANGINGB
                            781 	.globl _AX5043_PLLRANGINGA
                            782 	.globl _AX5043_PLLLOOPBOOST
                            783 	.globl _AX5043_PLLLOOP
                            784 	.globl _AX5043_PLLLOCKDET
                            785 	.globl _AX5043_PLLCPIBOOST
                            786 	.globl _AX5043_PLLCPI
                            787 	.globl _AX5043_PKTSTOREFLAGS
                            788 	.globl _AX5043_PKTMISCFLAGS
                            789 	.globl _AX5043_PKTCHUNKSIZE
                            790 	.globl _AX5043_PKTACCEPTFLAGS
                            791 	.globl _AX5043_PINSTATE
                            792 	.globl _AX5043_PINFUNCSYSCLK
                            793 	.globl _AX5043_PINFUNCPWRAMP
                            794 	.globl _AX5043_PINFUNCIRQ
                            795 	.globl _AX5043_PINFUNCDCLK
                            796 	.globl _AX5043_PINFUNCDATA
                            797 	.globl _AX5043_PINFUNCANTSEL
                            798 	.globl _AX5043_MODULATION
                            799 	.globl _AX5043_MODCFGF
                            800 	.globl _AX5043_MODCFGA
                            801 	.globl _AX5043_MAXRFOFFSET2
                            802 	.globl _AX5043_MAXRFOFFSET1
                            803 	.globl _AX5043_MAXRFOFFSET0
                            804 	.globl _AX5043_MAXDROFFSET2
                            805 	.globl _AX5043_MAXDROFFSET1
                            806 	.globl _AX5043_MAXDROFFSET0
                            807 	.globl _AX5043_MATCH1PAT1
                            808 	.globl _AX5043_MATCH1PAT0
                            809 	.globl _AX5043_MATCH1MIN
                            810 	.globl _AX5043_MATCH1MAX
                            811 	.globl _AX5043_MATCH1LEN
                            812 	.globl _AX5043_MATCH0PAT3
                            813 	.globl _AX5043_MATCH0PAT2
                            814 	.globl _AX5043_MATCH0PAT1
                            815 	.globl _AX5043_MATCH0PAT0
                            816 	.globl _AX5043_MATCH0MIN
                            817 	.globl _AX5043_MATCH0MAX
                            818 	.globl _AX5043_MATCH0LEN
                            819 	.globl _AX5043_LPOSCSTATUS
                            820 	.globl _AX5043_LPOSCREF1
                            821 	.globl _AX5043_LPOSCREF0
                            822 	.globl _AX5043_LPOSCPER1
                            823 	.globl _AX5043_LPOSCPER0
                            824 	.globl _AX5043_LPOSCKFILT1
                            825 	.globl _AX5043_LPOSCKFILT0
                            826 	.globl _AX5043_LPOSCFREQ1
                            827 	.globl _AX5043_LPOSCFREQ0
                            828 	.globl _AX5043_LPOSCCONFIG
                            829 	.globl _AX5043_IRQREQUEST1
                            830 	.globl _AX5043_IRQREQUEST0
                            831 	.globl _AX5043_IRQMASK1
                            832 	.globl _AX5043_IRQMASK0
                            833 	.globl _AX5043_IRQINVERSION1
                            834 	.globl _AX5043_IRQINVERSION0
                            835 	.globl _AX5043_IFFREQ1
                            836 	.globl _AX5043_IFFREQ0
                            837 	.globl _AX5043_GPADCPERIOD
                            838 	.globl _AX5043_GPADCCTRL
                            839 	.globl _AX5043_GPADC13VALUE1
                            840 	.globl _AX5043_GPADC13VALUE0
                            841 	.globl _AX5043_FSKDMIN1
                            842 	.globl _AX5043_FSKDMIN0
                            843 	.globl _AX5043_FSKDMAX1
                            844 	.globl _AX5043_FSKDMAX0
                            845 	.globl _AX5043_FSKDEV2
                            846 	.globl _AX5043_FSKDEV1
                            847 	.globl _AX5043_FSKDEV0
                            848 	.globl _AX5043_FREQB3
                            849 	.globl _AX5043_FREQB2
                            850 	.globl _AX5043_FREQB1
                            851 	.globl _AX5043_FREQB0
                            852 	.globl _AX5043_FREQA3
                            853 	.globl _AX5043_FREQA2
                            854 	.globl _AX5043_FREQA1
                            855 	.globl _AX5043_FREQA0
                            856 	.globl _AX5043_FRAMING
                            857 	.globl _AX5043_FIFOTHRESH1
                            858 	.globl _AX5043_FIFOTHRESH0
                            859 	.globl _AX5043_FIFOSTAT
                            860 	.globl _AX5043_FIFOFREE1
                            861 	.globl _AX5043_FIFOFREE0
                            862 	.globl _AX5043_FIFODATA
                            863 	.globl _AX5043_FIFOCOUNT1
                            864 	.globl _AX5043_FIFOCOUNT0
                            865 	.globl _AX5043_FECSYNC
                            866 	.globl _AX5043_FECSTATUS
                            867 	.globl _AX5043_FEC
                            868 	.globl _AX5043_ENCODING
                            869 	.globl _AX5043_DIVERSITY
                            870 	.globl _AX5043_DECIMATION
                            871 	.globl _AX5043_DACVALUE1
                            872 	.globl _AX5043_DACVALUE0
                            873 	.globl _AX5043_DACCONFIG
                            874 	.globl _AX5043_CRCINIT3
                            875 	.globl _AX5043_CRCINIT2
                            876 	.globl _AX5043_CRCINIT1
                            877 	.globl _AX5043_CRCINIT0
                            878 	.globl _AX5043_BGNDRSSITHR
                            879 	.globl _AX5043_BGNDRSSIGAIN
                            880 	.globl _AX5043_BGNDRSSI
                            881 	.globl _AX5043_BBTUNE
                            882 	.globl _AX5043_BBOFFSCAP
                            883 	.globl _AX5043_AMPLFILTER
                            884 	.globl _AX5043_AGCCOUNTER
                            885 	.globl _AX5043_AFSKSPACE1
                            886 	.globl _AX5043_AFSKSPACE0
                            887 	.globl _AX5043_AFSKMARK1
                            888 	.globl _AX5043_AFSKMARK0
                            889 	.globl _AX5043_AFSKCTRL
                            890 	.globl _XWTSTAT
                            891 	.globl _XWTIRQEN
                            892 	.globl _XWTEVTD
                            893 	.globl _XWTEVTD1
                            894 	.globl _XWTEVTD0
                            895 	.globl _XWTEVTC
                            896 	.globl _XWTEVTC1
                            897 	.globl _XWTEVTC0
                            898 	.globl _XWTEVTB
                            899 	.globl _XWTEVTB1
                            900 	.globl _XWTEVTB0
                            901 	.globl _XWTEVTA
                            902 	.globl _XWTEVTA1
                            903 	.globl _XWTEVTA0
                            904 	.globl _XWTCNTR1
                            905 	.globl _XWTCNTB
                            906 	.globl _XWTCNTB1
                            907 	.globl _XWTCNTB0
                            908 	.globl _XWTCNTA
                            909 	.globl _XWTCNTA1
                            910 	.globl _XWTCNTA0
                            911 	.globl _XWTCFGB
                            912 	.globl _XWTCFGA
                            913 	.globl _XWDTRESET
                            914 	.globl _XWDTCFG
                            915 	.globl _XU1STATUS
                            916 	.globl _XU1SHREG
                            917 	.globl _XU1MODE
                            918 	.globl _XU1CTRL
                            919 	.globl _XU0STATUS
                            920 	.globl _XU0SHREG
                            921 	.globl _XU0MODE
                            922 	.globl _XU0CTRL
                            923 	.globl _XT2STATUS
                            924 	.globl _XT2PERIOD
                            925 	.globl _XT2PERIOD1
                            926 	.globl _XT2PERIOD0
                            927 	.globl _XT2MODE
                            928 	.globl _XT2CNT
                            929 	.globl _XT2CNT1
                            930 	.globl _XT2CNT0
                            931 	.globl _XT2CLKSRC
                            932 	.globl _XT1STATUS
                            933 	.globl _XT1PERIOD
                            934 	.globl _XT1PERIOD1
                            935 	.globl _XT1PERIOD0
                            936 	.globl _XT1MODE
                            937 	.globl _XT1CNT
                            938 	.globl _XT1CNT1
                            939 	.globl _XT1CNT0
                            940 	.globl _XT1CLKSRC
                            941 	.globl _XT0STATUS
                            942 	.globl _XT0PERIOD
                            943 	.globl _XT0PERIOD1
                            944 	.globl _XT0PERIOD0
                            945 	.globl _XT0MODE
                            946 	.globl _XT0CNT
                            947 	.globl _XT0CNT1
                            948 	.globl _XT0CNT0
                            949 	.globl _XT0CLKSRC
                            950 	.globl _XSPSTATUS
                            951 	.globl _XSPSHREG
                            952 	.globl _XSPMODE
                            953 	.globl _XSPCLKSRC
                            954 	.globl _XRADIOSTAT
                            955 	.globl _XRADIOSTAT1
                            956 	.globl _XRADIOSTAT0
                            957 	.globl _XRADIODATA3
                            958 	.globl _XRADIODATA2
                            959 	.globl _XRADIODATA1
                            960 	.globl _XRADIODATA0
                            961 	.globl _XRADIOADDR1
                            962 	.globl _XRADIOADDR0
                            963 	.globl _XRADIOACC
                            964 	.globl _XOC1STATUS
                            965 	.globl _XOC1PIN
                            966 	.globl _XOC1MODE
                            967 	.globl _XOC1COMP
                            968 	.globl _XOC1COMP1
                            969 	.globl _XOC1COMP0
                            970 	.globl _XOC0STATUS
                            971 	.globl _XOC0PIN
                            972 	.globl _XOC0MODE
                            973 	.globl _XOC0COMP
                            974 	.globl _XOC0COMP1
                            975 	.globl _XOC0COMP0
                            976 	.globl _XNVSTATUS
                            977 	.globl _XNVKEY
                            978 	.globl _XNVDATA
                            979 	.globl _XNVDATA1
                            980 	.globl _XNVDATA0
                            981 	.globl _XNVADDR
                            982 	.globl _XNVADDR1
                            983 	.globl _XNVADDR0
                            984 	.globl _XIC1STATUS
                            985 	.globl _XIC1MODE
                            986 	.globl _XIC1CAPT
                            987 	.globl _XIC1CAPT1
                            988 	.globl _XIC1CAPT0
                            989 	.globl _XIC0STATUS
                            990 	.globl _XIC0MODE
                            991 	.globl _XIC0CAPT
                            992 	.globl _XIC0CAPT1
                            993 	.globl _XIC0CAPT0
                            994 	.globl _XPORTR
                            995 	.globl _XPORTC
                            996 	.globl _XPORTB
                            997 	.globl _XPORTA
                            998 	.globl _XPINR
                            999 	.globl _XPINC
                           1000 	.globl _XPINB
                           1001 	.globl _XPINA
                           1002 	.globl _XDIRR
                           1003 	.globl _XDIRC
                           1004 	.globl _XDIRB
                           1005 	.globl _XDIRA
                           1006 	.globl _XDBGLNKSTAT
                           1007 	.globl _XDBGLNKBUF
                           1008 	.globl _XCODECONFIG
                           1009 	.globl _XCLKSTAT
                           1010 	.globl _XCLKCON
                           1011 	.globl _XANALOGCOMP
                           1012 	.globl _XADCCONV
                           1013 	.globl _XADCCLKSRC
                           1014 	.globl _XADCCH3CONFIG
                           1015 	.globl _XADCCH2CONFIG
                           1016 	.globl _XADCCH1CONFIG
                           1017 	.globl _XADCCH0CONFIG
                           1018 	.globl _XPCON
                           1019 	.globl _XIP
                           1020 	.globl _XIE
                           1021 	.globl _XDPTR1
                           1022 	.globl _XDPTR0
                           1023 	.globl _XTALREADY
                           1024 	.globl _XTALOSC
                           1025 	.globl _XTALAMPL
                           1026 	.globl _SILICONREV
                           1027 	.globl _SCRATCH3
                           1028 	.globl _SCRATCH2
                           1029 	.globl _SCRATCH1
                           1030 	.globl _SCRATCH0
                           1031 	.globl _RADIOMUX
                           1032 	.globl _RADIOFSTATADDR
                           1033 	.globl _RADIOFSTATADDR1
                           1034 	.globl _RADIOFSTATADDR0
                           1035 	.globl _RADIOFDATAADDR
                           1036 	.globl _RADIOFDATAADDR1
                           1037 	.globl _RADIOFDATAADDR0
                           1038 	.globl _OSCRUN
                           1039 	.globl _OSCREADY
                           1040 	.globl _OSCFORCERUN
                           1041 	.globl _OSCCALIB
                           1042 	.globl _MISCCTRL
                           1043 	.globl _LPXOSCGM
                           1044 	.globl _LPOSCREF
                           1045 	.globl _LPOSCREF1
                           1046 	.globl _LPOSCREF0
                           1047 	.globl _LPOSCPER
                           1048 	.globl _LPOSCPER1
                           1049 	.globl _LPOSCPER0
                           1050 	.globl _LPOSCKFILT
                           1051 	.globl _LPOSCKFILT1
                           1052 	.globl _LPOSCKFILT0
                           1053 	.globl _LPOSCFREQ
                           1054 	.globl _LPOSCFREQ1
                           1055 	.globl _LPOSCFREQ0
                           1056 	.globl _LPOSCCONFIG
                           1057 	.globl _PINSEL
                           1058 	.globl _PINCHGC
                           1059 	.globl _PINCHGB
                           1060 	.globl _PINCHGA
                           1061 	.globl _PALTRADIO
                           1062 	.globl _PALTC
                           1063 	.globl _PALTB
                           1064 	.globl _PALTA
                           1065 	.globl _INTCHGC
                           1066 	.globl _INTCHGB
                           1067 	.globl _INTCHGA
                           1068 	.globl _EXTIRQ
                           1069 	.globl _GPIOENABLE
                           1070 	.globl _ANALOGA
                           1071 	.globl _FRCOSCREF
                           1072 	.globl _FRCOSCREF1
                           1073 	.globl _FRCOSCREF0
                           1074 	.globl _FRCOSCPER
                           1075 	.globl _FRCOSCPER1
                           1076 	.globl _FRCOSCPER0
                           1077 	.globl _FRCOSCKFILT
                           1078 	.globl _FRCOSCKFILT1
                           1079 	.globl _FRCOSCKFILT0
                           1080 	.globl _FRCOSCFREQ
                           1081 	.globl _FRCOSCFREQ1
                           1082 	.globl _FRCOSCFREQ0
                           1083 	.globl _FRCOSCCTRL
                           1084 	.globl _FRCOSCCONFIG
                           1085 	.globl _DMA1CONFIG
                           1086 	.globl _DMA1ADDR
                           1087 	.globl _DMA1ADDR1
                           1088 	.globl _DMA1ADDR0
                           1089 	.globl _DMA0CONFIG
                           1090 	.globl _DMA0ADDR
                           1091 	.globl _DMA0ADDR1
                           1092 	.globl _DMA0ADDR0
                           1093 	.globl _ADCTUNE2
                           1094 	.globl _ADCTUNE1
                           1095 	.globl _ADCTUNE0
                           1096 	.globl _ADCCH3VAL
                           1097 	.globl _ADCCH3VAL1
                           1098 	.globl _ADCCH3VAL0
                           1099 	.globl _ADCCH2VAL
                           1100 	.globl _ADCCH2VAL1
                           1101 	.globl _ADCCH2VAL0
                           1102 	.globl _ADCCH1VAL
                           1103 	.globl _ADCCH1VAL1
                           1104 	.globl _ADCCH1VAL0
                           1105 	.globl _ADCCH0VAL
                           1106 	.globl _ADCCH0VAL1
                           1107 	.globl _ADCCH0VAL0
                           1108 	.globl _axradio_transmit_PARM_3
                           1109 	.globl _axradio_transmit_PARM_2
                           1110 	.globl _axradio_trxstate
                           1111 	.globl _axradio_mode
                           1112 	.globl _axradio_conv_time_totimer0
                           1113 	.globl _axradio_isr
                           1114 	.globl _ax5043_receiver_on_continuous
                           1115 	.globl _ax5043_receiver_on_wor
                           1116 	.globl _ax5043_prepare_tx
                           1117 	.globl _ax5043_off
                           1118 	.globl _ax5043_off_xtal
                           1119 	.globl _axradio_wait_for_xtal
                           1120 	.globl _axradio_init
                           1121 	.globl _axradio_cansleep
                           1122 	.globl _axradio_set_mode
                           1123 	.globl _axradio_get_mode
                           1124 	.globl _axradio_set_channel
                           1125 	.globl _axradio_get_channel
                           1126 	.globl _axradio_get_pllrange
                           1127 	.globl _axradio_get_pllrange_tx
                           1128 	.globl _axradio_set_freqoffset
                           1129 	.globl _axradio_get_freqoffset
                           1130 	.globl _axradio_set_local_address
                           1131 	.globl _axradio_get_local_address
                           1132 	.globl _axradio_set_default_remote_address
                           1133 	.globl _axradio_get_default_remote_address
                           1134 	.globl _axradio_transmit
                           1135 	.globl _axradio_agc_freeze
                           1136 	.globl _axradio_agc_thaw
                           1137 ;--------------------------------------------------------
                           1138 ; special function registers
                           1139 ;--------------------------------------------------------
                           1140 	.area RSEG    (ABS,DATA)
   0000                    1141 	.org 0x0000
                    00E0   1142 G$ACC$0$0 == 0x00e0
                    00E0   1143 _ACC	=	0x00e0
                    00F0   1144 G$B$0$0 == 0x00f0
                    00F0   1145 _B	=	0x00f0
                    0083   1146 G$DPH$0$0 == 0x0083
                    0083   1147 _DPH	=	0x0083
                    0085   1148 G$DPH1$0$0 == 0x0085
                    0085   1149 _DPH1	=	0x0085
                    0082   1150 G$DPL$0$0 == 0x0082
                    0082   1151 _DPL	=	0x0082
                    0084   1152 G$DPL1$0$0 == 0x0084
                    0084   1153 _DPL1	=	0x0084
                    8382   1154 G$DPTR0$0$0 == 0x8382
                    8382   1155 _DPTR0	=	0x8382
                    8584   1156 G$DPTR1$0$0 == 0x8584
                    8584   1157 _DPTR1	=	0x8584
                    0086   1158 G$DPS$0$0 == 0x0086
                    0086   1159 _DPS	=	0x0086
                    00A0   1160 G$E2IE$0$0 == 0x00a0
                    00A0   1161 _E2IE	=	0x00a0
                    00C0   1162 G$E2IP$0$0 == 0x00c0
                    00C0   1163 _E2IP	=	0x00c0
                    0098   1164 G$EIE$0$0 == 0x0098
                    0098   1165 _EIE	=	0x0098
                    00B0   1166 G$EIP$0$0 == 0x00b0
                    00B0   1167 _EIP	=	0x00b0
                    00A8   1168 G$IE$0$0 == 0x00a8
                    00A8   1169 _IE	=	0x00a8
                    00B8   1170 G$IP$0$0 == 0x00b8
                    00B8   1171 _IP	=	0x00b8
                    0087   1172 G$PCON$0$0 == 0x0087
                    0087   1173 _PCON	=	0x0087
                    00D0   1174 G$PSW$0$0 == 0x00d0
                    00D0   1175 _PSW	=	0x00d0
                    0081   1176 G$SP$0$0 == 0x0081
                    0081   1177 _SP	=	0x0081
                    00D9   1178 G$XPAGE$0$0 == 0x00d9
                    00D9   1179 _XPAGE	=	0x00d9
                    00D9   1180 G$_XPAGE$0$0 == 0x00d9
                    00D9   1181 __XPAGE	=	0x00d9
                    00CA   1182 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA   1183 _ADCCH0CONFIG	=	0x00ca
                    00CB   1184 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB   1185 _ADCCH1CONFIG	=	0x00cb
                    00D2   1186 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2   1187 _ADCCH2CONFIG	=	0x00d2
                    00D3   1188 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3   1189 _ADCCH3CONFIG	=	0x00d3
                    00D1   1190 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1   1191 _ADCCLKSRC	=	0x00d1
                    00C9   1192 G$ADCCONV$0$0 == 0x00c9
                    00C9   1193 _ADCCONV	=	0x00c9
                    00E1   1194 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1   1195 _ANALOGCOMP	=	0x00e1
                    00C6   1196 G$CLKCON$0$0 == 0x00c6
                    00C6   1197 _CLKCON	=	0x00c6
                    00C7   1198 G$CLKSTAT$0$0 == 0x00c7
                    00C7   1199 _CLKSTAT	=	0x00c7
                    0097   1200 G$CODECONFIG$0$0 == 0x0097
                    0097   1201 _CODECONFIG	=	0x0097
                    00E3   1202 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3   1203 _DBGLNKBUF	=	0x00e3
                    00E2   1204 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2   1205 _DBGLNKSTAT	=	0x00e2
                    0089   1206 G$DIRA$0$0 == 0x0089
                    0089   1207 _DIRA	=	0x0089
                    008A   1208 G$DIRB$0$0 == 0x008a
                    008A   1209 _DIRB	=	0x008a
                    008B   1210 G$DIRC$0$0 == 0x008b
                    008B   1211 _DIRC	=	0x008b
                    008E   1212 G$DIRR$0$0 == 0x008e
                    008E   1213 _DIRR	=	0x008e
                    00C8   1214 G$PINA$0$0 == 0x00c8
                    00C8   1215 _PINA	=	0x00c8
                    00E8   1216 G$PINB$0$0 == 0x00e8
                    00E8   1217 _PINB	=	0x00e8
                    00F8   1218 G$PINC$0$0 == 0x00f8
                    00F8   1219 _PINC	=	0x00f8
                    008D   1220 G$PINR$0$0 == 0x008d
                    008D   1221 _PINR	=	0x008d
                    0080   1222 G$PORTA$0$0 == 0x0080
                    0080   1223 _PORTA	=	0x0080
                    0088   1224 G$PORTB$0$0 == 0x0088
                    0088   1225 _PORTB	=	0x0088
                    0090   1226 G$PORTC$0$0 == 0x0090
                    0090   1227 _PORTC	=	0x0090
                    008C   1228 G$PORTR$0$0 == 0x008c
                    008C   1229 _PORTR	=	0x008c
                    00CE   1230 G$IC0CAPT0$0$0 == 0x00ce
                    00CE   1231 _IC0CAPT0	=	0x00ce
                    00CF   1232 G$IC0CAPT1$0$0 == 0x00cf
                    00CF   1233 _IC0CAPT1	=	0x00cf
                    CFCE   1234 G$IC0CAPT$0$0 == 0xcfce
                    CFCE   1235 _IC0CAPT	=	0xcfce
                    00CC   1236 G$IC0MODE$0$0 == 0x00cc
                    00CC   1237 _IC0MODE	=	0x00cc
                    00CD   1238 G$IC0STATUS$0$0 == 0x00cd
                    00CD   1239 _IC0STATUS	=	0x00cd
                    00D6   1240 G$IC1CAPT0$0$0 == 0x00d6
                    00D6   1241 _IC1CAPT0	=	0x00d6
                    00D7   1242 G$IC1CAPT1$0$0 == 0x00d7
                    00D7   1243 _IC1CAPT1	=	0x00d7
                    D7D6   1244 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6   1245 _IC1CAPT	=	0xd7d6
                    00D4   1246 G$IC1MODE$0$0 == 0x00d4
                    00D4   1247 _IC1MODE	=	0x00d4
                    00D5   1248 G$IC1STATUS$0$0 == 0x00d5
                    00D5   1249 _IC1STATUS	=	0x00d5
                    0092   1250 G$NVADDR0$0$0 == 0x0092
                    0092   1251 _NVADDR0	=	0x0092
                    0093   1252 G$NVADDR1$0$0 == 0x0093
                    0093   1253 _NVADDR1	=	0x0093
                    9392   1254 G$NVADDR$0$0 == 0x9392
                    9392   1255 _NVADDR	=	0x9392
                    0094   1256 G$NVDATA0$0$0 == 0x0094
                    0094   1257 _NVDATA0	=	0x0094
                    0095   1258 G$NVDATA1$0$0 == 0x0095
                    0095   1259 _NVDATA1	=	0x0095
                    9594   1260 G$NVDATA$0$0 == 0x9594
                    9594   1261 _NVDATA	=	0x9594
                    0096   1262 G$NVKEY$0$0 == 0x0096
                    0096   1263 _NVKEY	=	0x0096
                    0091   1264 G$NVSTATUS$0$0 == 0x0091
                    0091   1265 _NVSTATUS	=	0x0091
                    00BC   1266 G$OC0COMP0$0$0 == 0x00bc
                    00BC   1267 _OC0COMP0	=	0x00bc
                    00BD   1268 G$OC0COMP1$0$0 == 0x00bd
                    00BD   1269 _OC0COMP1	=	0x00bd
                    BDBC   1270 G$OC0COMP$0$0 == 0xbdbc
                    BDBC   1271 _OC0COMP	=	0xbdbc
                    00B9   1272 G$OC0MODE$0$0 == 0x00b9
                    00B9   1273 _OC0MODE	=	0x00b9
                    00BA   1274 G$OC0PIN$0$0 == 0x00ba
                    00BA   1275 _OC0PIN	=	0x00ba
                    00BB   1276 G$OC0STATUS$0$0 == 0x00bb
                    00BB   1277 _OC0STATUS	=	0x00bb
                    00C4   1278 G$OC1COMP0$0$0 == 0x00c4
                    00C4   1279 _OC1COMP0	=	0x00c4
                    00C5   1280 G$OC1COMP1$0$0 == 0x00c5
                    00C5   1281 _OC1COMP1	=	0x00c5
                    C5C4   1282 G$OC1COMP$0$0 == 0xc5c4
                    C5C4   1283 _OC1COMP	=	0xc5c4
                    00C1   1284 G$OC1MODE$0$0 == 0x00c1
                    00C1   1285 _OC1MODE	=	0x00c1
                    00C2   1286 G$OC1PIN$0$0 == 0x00c2
                    00C2   1287 _OC1PIN	=	0x00c2
                    00C3   1288 G$OC1STATUS$0$0 == 0x00c3
                    00C3   1289 _OC1STATUS	=	0x00c3
                    00B1   1290 G$RADIOACC$0$0 == 0x00b1
                    00B1   1291 _RADIOACC	=	0x00b1
                    00B3   1292 G$RADIOADDR0$0$0 == 0x00b3
                    00B3   1293 _RADIOADDR0	=	0x00b3
                    00B2   1294 G$RADIOADDR1$0$0 == 0x00b2
                    00B2   1295 _RADIOADDR1	=	0x00b2
                    B2B3   1296 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3   1297 _RADIOADDR	=	0xb2b3
                    00B7   1298 G$RADIODATA0$0$0 == 0x00b7
                    00B7   1299 _RADIODATA0	=	0x00b7
                    00B6   1300 G$RADIODATA1$0$0 == 0x00b6
                    00B6   1301 _RADIODATA1	=	0x00b6
                    00B5   1302 G$RADIODATA2$0$0 == 0x00b5
                    00B5   1303 _RADIODATA2	=	0x00b5
                    00B4   1304 G$RADIODATA3$0$0 == 0x00b4
                    00B4   1305 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1306 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7   1307 _RADIODATA	=	0xb4b5b6b7
                    00BE   1308 G$RADIOSTAT0$0$0 == 0x00be
                    00BE   1309 _RADIOSTAT0	=	0x00be
                    00BF   1310 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF   1311 _RADIOSTAT1	=	0x00bf
                    BFBE   1312 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE   1313 _RADIOSTAT	=	0xbfbe
                    00DF   1314 G$SPCLKSRC$0$0 == 0x00df
                    00DF   1315 _SPCLKSRC	=	0x00df
                    00DC   1316 G$SPMODE$0$0 == 0x00dc
                    00DC   1317 _SPMODE	=	0x00dc
                    00DE   1318 G$SPSHREG$0$0 == 0x00de
                    00DE   1319 _SPSHREG	=	0x00de
                    00DD   1320 G$SPSTATUS$0$0 == 0x00dd
                    00DD   1321 _SPSTATUS	=	0x00dd
                    009A   1322 G$T0CLKSRC$0$0 == 0x009a
                    009A   1323 _T0CLKSRC	=	0x009a
                    009C   1324 G$T0CNT0$0$0 == 0x009c
                    009C   1325 _T0CNT0	=	0x009c
                    009D   1326 G$T0CNT1$0$0 == 0x009d
                    009D   1327 _T0CNT1	=	0x009d
                    9D9C   1328 G$T0CNT$0$0 == 0x9d9c
                    9D9C   1329 _T0CNT	=	0x9d9c
                    0099   1330 G$T0MODE$0$0 == 0x0099
                    0099   1331 _T0MODE	=	0x0099
                    009E   1332 G$T0PERIOD0$0$0 == 0x009e
                    009E   1333 _T0PERIOD0	=	0x009e
                    009F   1334 G$T0PERIOD1$0$0 == 0x009f
                    009F   1335 _T0PERIOD1	=	0x009f
                    9F9E   1336 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E   1337 _T0PERIOD	=	0x9f9e
                    009B   1338 G$T0STATUS$0$0 == 0x009b
                    009B   1339 _T0STATUS	=	0x009b
                    00A2   1340 G$T1CLKSRC$0$0 == 0x00a2
                    00A2   1341 _T1CLKSRC	=	0x00a2
                    00A4   1342 G$T1CNT0$0$0 == 0x00a4
                    00A4   1343 _T1CNT0	=	0x00a4
                    00A5   1344 G$T1CNT1$0$0 == 0x00a5
                    00A5   1345 _T1CNT1	=	0x00a5
                    A5A4   1346 G$T1CNT$0$0 == 0xa5a4
                    A5A4   1347 _T1CNT	=	0xa5a4
                    00A1   1348 G$T1MODE$0$0 == 0x00a1
                    00A1   1349 _T1MODE	=	0x00a1
                    00A6   1350 G$T1PERIOD0$0$0 == 0x00a6
                    00A6   1351 _T1PERIOD0	=	0x00a6
                    00A7   1352 G$T1PERIOD1$0$0 == 0x00a7
                    00A7   1353 _T1PERIOD1	=	0x00a7
                    A7A6   1354 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6   1355 _T1PERIOD	=	0xa7a6
                    00A3   1356 G$T1STATUS$0$0 == 0x00a3
                    00A3   1357 _T1STATUS	=	0x00a3
                    00AA   1358 G$T2CLKSRC$0$0 == 0x00aa
                    00AA   1359 _T2CLKSRC	=	0x00aa
                    00AC   1360 G$T2CNT0$0$0 == 0x00ac
                    00AC   1361 _T2CNT0	=	0x00ac
                    00AD   1362 G$T2CNT1$0$0 == 0x00ad
                    00AD   1363 _T2CNT1	=	0x00ad
                    ADAC   1364 G$T2CNT$0$0 == 0xadac
                    ADAC   1365 _T2CNT	=	0xadac
                    00A9   1366 G$T2MODE$0$0 == 0x00a9
                    00A9   1367 _T2MODE	=	0x00a9
                    00AE   1368 G$T2PERIOD0$0$0 == 0x00ae
                    00AE   1369 _T2PERIOD0	=	0x00ae
                    00AF   1370 G$T2PERIOD1$0$0 == 0x00af
                    00AF   1371 _T2PERIOD1	=	0x00af
                    AFAE   1372 G$T2PERIOD$0$0 == 0xafae
                    AFAE   1373 _T2PERIOD	=	0xafae
                    00AB   1374 G$T2STATUS$0$0 == 0x00ab
                    00AB   1375 _T2STATUS	=	0x00ab
                    00E4   1376 G$U0CTRL$0$0 == 0x00e4
                    00E4   1377 _U0CTRL	=	0x00e4
                    00E7   1378 G$U0MODE$0$0 == 0x00e7
                    00E7   1379 _U0MODE	=	0x00e7
                    00E6   1380 G$U0SHREG$0$0 == 0x00e6
                    00E6   1381 _U0SHREG	=	0x00e6
                    00E5   1382 G$U0STATUS$0$0 == 0x00e5
                    00E5   1383 _U0STATUS	=	0x00e5
                    00EC   1384 G$U1CTRL$0$0 == 0x00ec
                    00EC   1385 _U1CTRL	=	0x00ec
                    00EF   1386 G$U1MODE$0$0 == 0x00ef
                    00EF   1387 _U1MODE	=	0x00ef
                    00EE   1388 G$U1SHREG$0$0 == 0x00ee
                    00EE   1389 _U1SHREG	=	0x00ee
                    00ED   1390 G$U1STATUS$0$0 == 0x00ed
                    00ED   1391 _U1STATUS	=	0x00ed
                    00DA   1392 G$WDTCFG$0$0 == 0x00da
                    00DA   1393 _WDTCFG	=	0x00da
                    00DB   1394 G$WDTRESET$0$0 == 0x00db
                    00DB   1395 _WDTRESET	=	0x00db
                    00F1   1396 G$WTCFGA$0$0 == 0x00f1
                    00F1   1397 _WTCFGA	=	0x00f1
                    00F9   1398 G$WTCFGB$0$0 == 0x00f9
                    00F9   1399 _WTCFGB	=	0x00f9
                    00F2   1400 G$WTCNTA0$0$0 == 0x00f2
                    00F2   1401 _WTCNTA0	=	0x00f2
                    00F3   1402 G$WTCNTA1$0$0 == 0x00f3
                    00F3   1403 _WTCNTA1	=	0x00f3
                    F3F2   1404 G$WTCNTA$0$0 == 0xf3f2
                    F3F2   1405 _WTCNTA	=	0xf3f2
                    00FA   1406 G$WTCNTB0$0$0 == 0x00fa
                    00FA   1407 _WTCNTB0	=	0x00fa
                    00FB   1408 G$WTCNTB1$0$0 == 0x00fb
                    00FB   1409 _WTCNTB1	=	0x00fb
                    FBFA   1410 G$WTCNTB$0$0 == 0xfbfa
                    FBFA   1411 _WTCNTB	=	0xfbfa
                    00EB   1412 G$WTCNTR1$0$0 == 0x00eb
                    00EB   1413 _WTCNTR1	=	0x00eb
                    00F4   1414 G$WTEVTA0$0$0 == 0x00f4
                    00F4   1415 _WTEVTA0	=	0x00f4
                    00F5   1416 G$WTEVTA1$0$0 == 0x00f5
                    00F5   1417 _WTEVTA1	=	0x00f5
                    F5F4   1418 G$WTEVTA$0$0 == 0xf5f4
                    F5F4   1419 _WTEVTA	=	0xf5f4
                    00F6   1420 G$WTEVTB0$0$0 == 0x00f6
                    00F6   1421 _WTEVTB0	=	0x00f6
                    00F7   1422 G$WTEVTB1$0$0 == 0x00f7
                    00F7   1423 _WTEVTB1	=	0x00f7
                    F7F6   1424 G$WTEVTB$0$0 == 0xf7f6
                    F7F6   1425 _WTEVTB	=	0xf7f6
                    00FC   1426 G$WTEVTC0$0$0 == 0x00fc
                    00FC   1427 _WTEVTC0	=	0x00fc
                    00FD   1428 G$WTEVTC1$0$0 == 0x00fd
                    00FD   1429 _WTEVTC1	=	0x00fd
                    FDFC   1430 G$WTEVTC$0$0 == 0xfdfc
                    FDFC   1431 _WTEVTC	=	0xfdfc
                    00FE   1432 G$WTEVTD0$0$0 == 0x00fe
                    00FE   1433 _WTEVTD0	=	0x00fe
                    00FF   1434 G$WTEVTD1$0$0 == 0x00ff
                    00FF   1435 _WTEVTD1	=	0x00ff
                    FFFE   1436 G$WTEVTD$0$0 == 0xfffe
                    FFFE   1437 _WTEVTD	=	0xfffe
                    00E9   1438 G$WTIRQEN$0$0 == 0x00e9
                    00E9   1439 _WTIRQEN	=	0x00e9
                    00EA   1440 G$WTSTAT$0$0 == 0x00ea
                    00EA   1441 _WTSTAT	=	0x00ea
                           1442 ;--------------------------------------------------------
                           1443 ; special function bits
                           1444 ;--------------------------------------------------------
                           1445 	.area RSEG    (ABS,DATA)
   0000                    1446 	.org 0x0000
                    00E0   1447 G$ACC_0$0$0 == 0x00e0
                    00E0   1448 _ACC_0	=	0x00e0
                    00E1   1449 G$ACC_1$0$0 == 0x00e1
                    00E1   1450 _ACC_1	=	0x00e1
                    00E2   1451 G$ACC_2$0$0 == 0x00e2
                    00E2   1452 _ACC_2	=	0x00e2
                    00E3   1453 G$ACC_3$0$0 == 0x00e3
                    00E3   1454 _ACC_3	=	0x00e3
                    00E4   1455 G$ACC_4$0$0 == 0x00e4
                    00E4   1456 _ACC_4	=	0x00e4
                    00E5   1457 G$ACC_5$0$0 == 0x00e5
                    00E5   1458 _ACC_5	=	0x00e5
                    00E6   1459 G$ACC_6$0$0 == 0x00e6
                    00E6   1460 _ACC_6	=	0x00e6
                    00E7   1461 G$ACC_7$0$0 == 0x00e7
                    00E7   1462 _ACC_7	=	0x00e7
                    00F0   1463 G$B_0$0$0 == 0x00f0
                    00F0   1464 _B_0	=	0x00f0
                    00F1   1465 G$B_1$0$0 == 0x00f1
                    00F1   1466 _B_1	=	0x00f1
                    00F2   1467 G$B_2$0$0 == 0x00f2
                    00F2   1468 _B_2	=	0x00f2
                    00F3   1469 G$B_3$0$0 == 0x00f3
                    00F3   1470 _B_3	=	0x00f3
                    00F4   1471 G$B_4$0$0 == 0x00f4
                    00F4   1472 _B_4	=	0x00f4
                    00F5   1473 G$B_5$0$0 == 0x00f5
                    00F5   1474 _B_5	=	0x00f5
                    00F6   1475 G$B_6$0$0 == 0x00f6
                    00F6   1476 _B_6	=	0x00f6
                    00F7   1477 G$B_7$0$0 == 0x00f7
                    00F7   1478 _B_7	=	0x00f7
                    00A0   1479 G$E2IE_0$0$0 == 0x00a0
                    00A0   1480 _E2IE_0	=	0x00a0
                    00A1   1481 G$E2IE_1$0$0 == 0x00a1
                    00A1   1482 _E2IE_1	=	0x00a1
                    00A2   1483 G$E2IE_2$0$0 == 0x00a2
                    00A2   1484 _E2IE_2	=	0x00a2
                    00A3   1485 G$E2IE_3$0$0 == 0x00a3
                    00A3   1486 _E2IE_3	=	0x00a3
                    00A4   1487 G$E2IE_4$0$0 == 0x00a4
                    00A4   1488 _E2IE_4	=	0x00a4
                    00A5   1489 G$E2IE_5$0$0 == 0x00a5
                    00A5   1490 _E2IE_5	=	0x00a5
                    00A6   1491 G$E2IE_6$0$0 == 0x00a6
                    00A6   1492 _E2IE_6	=	0x00a6
                    00A7   1493 G$E2IE_7$0$0 == 0x00a7
                    00A7   1494 _E2IE_7	=	0x00a7
                    00C0   1495 G$E2IP_0$0$0 == 0x00c0
                    00C0   1496 _E2IP_0	=	0x00c0
                    00C1   1497 G$E2IP_1$0$0 == 0x00c1
                    00C1   1498 _E2IP_1	=	0x00c1
                    00C2   1499 G$E2IP_2$0$0 == 0x00c2
                    00C2   1500 _E2IP_2	=	0x00c2
                    00C3   1501 G$E2IP_3$0$0 == 0x00c3
                    00C3   1502 _E2IP_3	=	0x00c3
                    00C4   1503 G$E2IP_4$0$0 == 0x00c4
                    00C4   1504 _E2IP_4	=	0x00c4
                    00C5   1505 G$E2IP_5$0$0 == 0x00c5
                    00C5   1506 _E2IP_5	=	0x00c5
                    00C6   1507 G$E2IP_6$0$0 == 0x00c6
                    00C6   1508 _E2IP_6	=	0x00c6
                    00C7   1509 G$E2IP_7$0$0 == 0x00c7
                    00C7   1510 _E2IP_7	=	0x00c7
                    0098   1511 G$EIE_0$0$0 == 0x0098
                    0098   1512 _EIE_0	=	0x0098
                    0099   1513 G$EIE_1$0$0 == 0x0099
                    0099   1514 _EIE_1	=	0x0099
                    009A   1515 G$EIE_2$0$0 == 0x009a
                    009A   1516 _EIE_2	=	0x009a
                    009B   1517 G$EIE_3$0$0 == 0x009b
                    009B   1518 _EIE_3	=	0x009b
                    009C   1519 G$EIE_4$0$0 == 0x009c
                    009C   1520 _EIE_4	=	0x009c
                    009D   1521 G$EIE_5$0$0 == 0x009d
                    009D   1522 _EIE_5	=	0x009d
                    009E   1523 G$EIE_6$0$0 == 0x009e
                    009E   1524 _EIE_6	=	0x009e
                    009F   1525 G$EIE_7$0$0 == 0x009f
                    009F   1526 _EIE_7	=	0x009f
                    00B0   1527 G$EIP_0$0$0 == 0x00b0
                    00B0   1528 _EIP_0	=	0x00b0
                    00B1   1529 G$EIP_1$0$0 == 0x00b1
                    00B1   1530 _EIP_1	=	0x00b1
                    00B2   1531 G$EIP_2$0$0 == 0x00b2
                    00B2   1532 _EIP_2	=	0x00b2
                    00B3   1533 G$EIP_3$0$0 == 0x00b3
                    00B3   1534 _EIP_3	=	0x00b3
                    00B4   1535 G$EIP_4$0$0 == 0x00b4
                    00B4   1536 _EIP_4	=	0x00b4
                    00B5   1537 G$EIP_5$0$0 == 0x00b5
                    00B5   1538 _EIP_5	=	0x00b5
                    00B6   1539 G$EIP_6$0$0 == 0x00b6
                    00B6   1540 _EIP_6	=	0x00b6
                    00B7   1541 G$EIP_7$0$0 == 0x00b7
                    00B7   1542 _EIP_7	=	0x00b7
                    00A8   1543 G$IE_0$0$0 == 0x00a8
                    00A8   1544 _IE_0	=	0x00a8
                    00A9   1545 G$IE_1$0$0 == 0x00a9
                    00A9   1546 _IE_1	=	0x00a9
                    00AA   1547 G$IE_2$0$0 == 0x00aa
                    00AA   1548 _IE_2	=	0x00aa
                    00AB   1549 G$IE_3$0$0 == 0x00ab
                    00AB   1550 _IE_3	=	0x00ab
                    00AC   1551 G$IE_4$0$0 == 0x00ac
                    00AC   1552 _IE_4	=	0x00ac
                    00AD   1553 G$IE_5$0$0 == 0x00ad
                    00AD   1554 _IE_5	=	0x00ad
                    00AE   1555 G$IE_6$0$0 == 0x00ae
                    00AE   1556 _IE_6	=	0x00ae
                    00AF   1557 G$IE_7$0$0 == 0x00af
                    00AF   1558 _IE_7	=	0x00af
                    00AF   1559 G$EA$0$0 == 0x00af
                    00AF   1560 _EA	=	0x00af
                    00B8   1561 G$IP_0$0$0 == 0x00b8
                    00B8   1562 _IP_0	=	0x00b8
                    00B9   1563 G$IP_1$0$0 == 0x00b9
                    00B9   1564 _IP_1	=	0x00b9
                    00BA   1565 G$IP_2$0$0 == 0x00ba
                    00BA   1566 _IP_2	=	0x00ba
                    00BB   1567 G$IP_3$0$0 == 0x00bb
                    00BB   1568 _IP_3	=	0x00bb
                    00BC   1569 G$IP_4$0$0 == 0x00bc
                    00BC   1570 _IP_4	=	0x00bc
                    00BD   1571 G$IP_5$0$0 == 0x00bd
                    00BD   1572 _IP_5	=	0x00bd
                    00BE   1573 G$IP_6$0$0 == 0x00be
                    00BE   1574 _IP_6	=	0x00be
                    00BF   1575 G$IP_7$0$0 == 0x00bf
                    00BF   1576 _IP_7	=	0x00bf
                    00D0   1577 G$P$0$0 == 0x00d0
                    00D0   1578 _P	=	0x00d0
                    00D1   1579 G$F1$0$0 == 0x00d1
                    00D1   1580 _F1	=	0x00d1
                    00D2   1581 G$OV$0$0 == 0x00d2
                    00D2   1582 _OV	=	0x00d2
                    00D3   1583 G$RS0$0$0 == 0x00d3
                    00D3   1584 _RS0	=	0x00d3
                    00D4   1585 G$RS1$0$0 == 0x00d4
                    00D4   1586 _RS1	=	0x00d4
                    00D5   1587 G$F0$0$0 == 0x00d5
                    00D5   1588 _F0	=	0x00d5
                    00D6   1589 G$AC$0$0 == 0x00d6
                    00D6   1590 _AC	=	0x00d6
                    00D7   1591 G$CY$0$0 == 0x00d7
                    00D7   1592 _CY	=	0x00d7
                    00C8   1593 G$PINA_0$0$0 == 0x00c8
                    00C8   1594 _PINA_0	=	0x00c8
                    00C9   1595 G$PINA_1$0$0 == 0x00c9
                    00C9   1596 _PINA_1	=	0x00c9
                    00CA   1597 G$PINA_2$0$0 == 0x00ca
                    00CA   1598 _PINA_2	=	0x00ca
                    00CB   1599 G$PINA_3$0$0 == 0x00cb
                    00CB   1600 _PINA_3	=	0x00cb
                    00CC   1601 G$PINA_4$0$0 == 0x00cc
                    00CC   1602 _PINA_4	=	0x00cc
                    00CD   1603 G$PINA_5$0$0 == 0x00cd
                    00CD   1604 _PINA_5	=	0x00cd
                    00CE   1605 G$PINA_6$0$0 == 0x00ce
                    00CE   1606 _PINA_6	=	0x00ce
                    00CF   1607 G$PINA_7$0$0 == 0x00cf
                    00CF   1608 _PINA_7	=	0x00cf
                    00E8   1609 G$PINB_0$0$0 == 0x00e8
                    00E8   1610 _PINB_0	=	0x00e8
                    00E9   1611 G$PINB_1$0$0 == 0x00e9
                    00E9   1612 _PINB_1	=	0x00e9
                    00EA   1613 G$PINB_2$0$0 == 0x00ea
                    00EA   1614 _PINB_2	=	0x00ea
                    00EB   1615 G$PINB_3$0$0 == 0x00eb
                    00EB   1616 _PINB_3	=	0x00eb
                    00EC   1617 G$PINB_4$0$0 == 0x00ec
                    00EC   1618 _PINB_4	=	0x00ec
                    00ED   1619 G$PINB_5$0$0 == 0x00ed
                    00ED   1620 _PINB_5	=	0x00ed
                    00EE   1621 G$PINB_6$0$0 == 0x00ee
                    00EE   1622 _PINB_6	=	0x00ee
                    00EF   1623 G$PINB_7$0$0 == 0x00ef
                    00EF   1624 _PINB_7	=	0x00ef
                    00F8   1625 G$PINC_0$0$0 == 0x00f8
                    00F8   1626 _PINC_0	=	0x00f8
                    00F9   1627 G$PINC_1$0$0 == 0x00f9
                    00F9   1628 _PINC_1	=	0x00f9
                    00FA   1629 G$PINC_2$0$0 == 0x00fa
                    00FA   1630 _PINC_2	=	0x00fa
                    00FB   1631 G$PINC_3$0$0 == 0x00fb
                    00FB   1632 _PINC_3	=	0x00fb
                    00FC   1633 G$PINC_4$0$0 == 0x00fc
                    00FC   1634 _PINC_4	=	0x00fc
                    00FD   1635 G$PINC_5$0$0 == 0x00fd
                    00FD   1636 _PINC_5	=	0x00fd
                    00FE   1637 G$PINC_6$0$0 == 0x00fe
                    00FE   1638 _PINC_6	=	0x00fe
                    00FF   1639 G$PINC_7$0$0 == 0x00ff
                    00FF   1640 _PINC_7	=	0x00ff
                    0080   1641 G$PORTA_0$0$0 == 0x0080
                    0080   1642 _PORTA_0	=	0x0080
                    0081   1643 G$PORTA_1$0$0 == 0x0081
                    0081   1644 _PORTA_1	=	0x0081
                    0082   1645 G$PORTA_2$0$0 == 0x0082
                    0082   1646 _PORTA_2	=	0x0082
                    0083   1647 G$PORTA_3$0$0 == 0x0083
                    0083   1648 _PORTA_3	=	0x0083
                    0084   1649 G$PORTA_4$0$0 == 0x0084
                    0084   1650 _PORTA_4	=	0x0084
                    0085   1651 G$PORTA_5$0$0 == 0x0085
                    0085   1652 _PORTA_5	=	0x0085
                    0086   1653 G$PORTA_6$0$0 == 0x0086
                    0086   1654 _PORTA_6	=	0x0086
                    0087   1655 G$PORTA_7$0$0 == 0x0087
                    0087   1656 _PORTA_7	=	0x0087
                    0088   1657 G$PORTB_0$0$0 == 0x0088
                    0088   1658 _PORTB_0	=	0x0088
                    0089   1659 G$PORTB_1$0$0 == 0x0089
                    0089   1660 _PORTB_1	=	0x0089
                    008A   1661 G$PORTB_2$0$0 == 0x008a
                    008A   1662 _PORTB_2	=	0x008a
                    008B   1663 G$PORTB_3$0$0 == 0x008b
                    008B   1664 _PORTB_3	=	0x008b
                    008C   1665 G$PORTB_4$0$0 == 0x008c
                    008C   1666 _PORTB_4	=	0x008c
                    008D   1667 G$PORTB_5$0$0 == 0x008d
                    008D   1668 _PORTB_5	=	0x008d
                    008E   1669 G$PORTB_6$0$0 == 0x008e
                    008E   1670 _PORTB_6	=	0x008e
                    008F   1671 G$PORTB_7$0$0 == 0x008f
                    008F   1672 _PORTB_7	=	0x008f
                    0090   1673 G$PORTC_0$0$0 == 0x0090
                    0090   1674 _PORTC_0	=	0x0090
                    0091   1675 G$PORTC_1$0$0 == 0x0091
                    0091   1676 _PORTC_1	=	0x0091
                    0092   1677 G$PORTC_2$0$0 == 0x0092
                    0092   1678 _PORTC_2	=	0x0092
                    0093   1679 G$PORTC_3$0$0 == 0x0093
                    0093   1680 _PORTC_3	=	0x0093
                    0094   1681 G$PORTC_4$0$0 == 0x0094
                    0094   1682 _PORTC_4	=	0x0094
                    0095   1683 G$PORTC_5$0$0 == 0x0095
                    0095   1684 _PORTC_5	=	0x0095
                    0096   1685 G$PORTC_6$0$0 == 0x0096
                    0096   1686 _PORTC_6	=	0x0096
                    0097   1687 G$PORTC_7$0$0 == 0x0097
                    0097   1688 _PORTC_7	=	0x0097
                           1689 ;--------------------------------------------------------
                           1690 ; overlayable register banks
                           1691 ;--------------------------------------------------------
                           1692 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1693 	.ds 8
                           1694 ;--------------------------------------------------------
                           1695 ; overlayable bit register bank
                           1696 ;--------------------------------------------------------
                           1697 	.area BIT_BANK	(REL,OVR,DATA)
   0020                    1698 bits:
   0020                    1699 	.ds 1
                    8000   1700 	b0 = bits[0]
                    8100   1701 	b1 = bits[1]
                    8200   1702 	b2 = bits[2]
                    8300   1703 	b3 = bits[3]
                    8400   1704 	b4 = bits[4]
                    8500   1705 	b5 = bits[5]
                    8600   1706 	b6 = bits[6]
                    8700   1707 	b7 = bits[7]
                           1708 ;--------------------------------------------------------
                           1709 ; internal ram data
                           1710 ;--------------------------------------------------------
                           1711 	.area DSEG    (DATA)
                    0000   1712 G$axradio_mode$0$0==.
   000A                    1713 _axradio_mode::
   000A                    1714 	.ds 1
                    0001   1715 G$axradio_trxstate$0$0==.
   000B                    1716 _axradio_trxstate::
   000B                    1717 	.ds 1
                    0002   1718 Leasyax5043.axradio_transmit$pkt$1$395==.
   000C                    1719 _axradio_transmit_PARM_2:
   000C                    1720 	.ds 3
                    0005   1721 Leasyax5043.axradio_transmit$pktlen$1$395==.
   000F                    1722 _axradio_transmit_PARM_3:
   000F                    1723 	.ds 2
                           1724 ;--------------------------------------------------------
                           1725 ; overlayable items in internal ram 
                           1726 ;--------------------------------------------------------
                           1727 	.area	OSEG    (OVR,DATA)
                    0000   1728 Leasyax5043.axradio_set_channel$rng$1$370==.
   0036                    1729 _axradio_set_channel_rng_1_370:
   0036                    1730 	.ds 1
                           1731 ;--------------------------------------------------------
                           1732 ; indirectly addressable internal ram data
                           1733 ;--------------------------------------------------------
                           1734 	.area ISEG    (DATA)
                           1735 ;--------------------------------------------------------
                           1736 ; absolute internal ram data
                           1737 ;--------------------------------------------------------
                           1738 	.area IABS    (ABS,DATA)
                           1739 	.area IABS    (ABS,DATA)
                           1740 ;--------------------------------------------------------
                           1741 ; bit data
                           1742 ;--------------------------------------------------------
                           1743 	.area BSEG    (BIT)
                           1744 ;--------------------------------------------------------
                           1745 ; paged external ram data
                           1746 ;--------------------------------------------------------
                           1747 	.area PSEG    (PAG,XDATA)
                           1748 ;--------------------------------------------------------
                           1749 ; external ram data
                           1750 ;--------------------------------------------------------
                           1751 	.area XSEG    (XDATA)
                    7020   1752 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1753 _ADCCH0VAL0	=	0x7020
                    7021   1754 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1755 _ADCCH0VAL1	=	0x7021
                    7020   1756 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1757 _ADCCH0VAL	=	0x7020
                    7022   1758 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1759 _ADCCH1VAL0	=	0x7022
                    7023   1760 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1761 _ADCCH1VAL1	=	0x7023
                    7022   1762 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1763 _ADCCH1VAL	=	0x7022
                    7024   1764 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1765 _ADCCH2VAL0	=	0x7024
                    7025   1766 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1767 _ADCCH2VAL1	=	0x7025
                    7024   1768 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1769 _ADCCH2VAL	=	0x7024
                    7026   1770 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1771 _ADCCH3VAL0	=	0x7026
                    7027   1772 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1773 _ADCCH3VAL1	=	0x7027
                    7026   1774 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1775 _ADCCH3VAL	=	0x7026
                    7028   1776 G$ADCTUNE0$0$0 == 0x7028
                    7028   1777 _ADCTUNE0	=	0x7028
                    7029   1778 G$ADCTUNE1$0$0 == 0x7029
                    7029   1779 _ADCTUNE1	=	0x7029
                    702A   1780 G$ADCTUNE2$0$0 == 0x702a
                    702A   1781 _ADCTUNE2	=	0x702a
                    7010   1782 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1783 _DMA0ADDR0	=	0x7010
                    7011   1784 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1785 _DMA0ADDR1	=	0x7011
                    7010   1786 G$DMA0ADDR$0$0 == 0x7010
                    7010   1787 _DMA0ADDR	=	0x7010
                    7014   1788 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1789 _DMA0CONFIG	=	0x7014
                    7012   1790 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1791 _DMA1ADDR0	=	0x7012
                    7013   1792 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1793 _DMA1ADDR1	=	0x7013
                    7012   1794 G$DMA1ADDR$0$0 == 0x7012
                    7012   1795 _DMA1ADDR	=	0x7012
                    7015   1796 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1797 _DMA1CONFIG	=	0x7015
                    7070   1798 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1799 _FRCOSCCONFIG	=	0x7070
                    7071   1800 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1801 _FRCOSCCTRL	=	0x7071
                    7076   1802 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1803 _FRCOSCFREQ0	=	0x7076
                    7077   1804 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1805 _FRCOSCFREQ1	=	0x7077
                    7076   1806 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1807 _FRCOSCFREQ	=	0x7076
                    7072   1808 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1809 _FRCOSCKFILT0	=	0x7072
                    7073   1810 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1811 _FRCOSCKFILT1	=	0x7073
                    7072   1812 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1813 _FRCOSCKFILT	=	0x7072
                    7078   1814 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1815 _FRCOSCPER0	=	0x7078
                    7079   1816 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1817 _FRCOSCPER1	=	0x7079
                    7078   1818 G$FRCOSCPER$0$0 == 0x7078
                    7078   1819 _FRCOSCPER	=	0x7078
                    7074   1820 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1821 _FRCOSCREF0	=	0x7074
                    7075   1822 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1823 _FRCOSCREF1	=	0x7075
                    7074   1824 G$FRCOSCREF$0$0 == 0x7074
                    7074   1825 _FRCOSCREF	=	0x7074
                    7007   1826 G$ANALOGA$0$0 == 0x7007
                    7007   1827 _ANALOGA	=	0x7007
                    700C   1828 G$GPIOENABLE$0$0 == 0x700c
                    700C   1829 _GPIOENABLE	=	0x700c
                    7003   1830 G$EXTIRQ$0$0 == 0x7003
                    7003   1831 _EXTIRQ	=	0x7003
                    7000   1832 G$INTCHGA$0$0 == 0x7000
                    7000   1833 _INTCHGA	=	0x7000
                    7001   1834 G$INTCHGB$0$0 == 0x7001
                    7001   1835 _INTCHGB	=	0x7001
                    7002   1836 G$INTCHGC$0$0 == 0x7002
                    7002   1837 _INTCHGC	=	0x7002
                    7008   1838 G$PALTA$0$0 == 0x7008
                    7008   1839 _PALTA	=	0x7008
                    7009   1840 G$PALTB$0$0 == 0x7009
                    7009   1841 _PALTB	=	0x7009
                    700A   1842 G$PALTC$0$0 == 0x700a
                    700A   1843 _PALTC	=	0x700a
                    7046   1844 G$PALTRADIO$0$0 == 0x7046
                    7046   1845 _PALTRADIO	=	0x7046
                    7004   1846 G$PINCHGA$0$0 == 0x7004
                    7004   1847 _PINCHGA	=	0x7004
                    7005   1848 G$PINCHGB$0$0 == 0x7005
                    7005   1849 _PINCHGB	=	0x7005
                    7006   1850 G$PINCHGC$0$0 == 0x7006
                    7006   1851 _PINCHGC	=	0x7006
                    700B   1852 G$PINSEL$0$0 == 0x700b
                    700B   1853 _PINSEL	=	0x700b
                    7060   1854 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1855 _LPOSCCONFIG	=	0x7060
                    7066   1856 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1857 _LPOSCFREQ0	=	0x7066
                    7067   1858 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1859 _LPOSCFREQ1	=	0x7067
                    7066   1860 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1861 _LPOSCFREQ	=	0x7066
                    7062   1862 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1863 _LPOSCKFILT0	=	0x7062
                    7063   1864 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1865 _LPOSCKFILT1	=	0x7063
                    7062   1866 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1867 _LPOSCKFILT	=	0x7062
                    7068   1868 G$LPOSCPER0$0$0 == 0x7068
                    7068   1869 _LPOSCPER0	=	0x7068
                    7069   1870 G$LPOSCPER1$0$0 == 0x7069
                    7069   1871 _LPOSCPER1	=	0x7069
                    7068   1872 G$LPOSCPER$0$0 == 0x7068
                    7068   1873 _LPOSCPER	=	0x7068
                    7064   1874 G$LPOSCREF0$0$0 == 0x7064
                    7064   1875 _LPOSCREF0	=	0x7064
                    7065   1876 G$LPOSCREF1$0$0 == 0x7065
                    7065   1877 _LPOSCREF1	=	0x7065
                    7064   1878 G$LPOSCREF$0$0 == 0x7064
                    7064   1879 _LPOSCREF	=	0x7064
                    7054   1880 G$LPXOSCGM$0$0 == 0x7054
                    7054   1881 _LPXOSCGM	=	0x7054
                    7F01   1882 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1883 _MISCCTRL	=	0x7f01
                    7053   1884 G$OSCCALIB$0$0 == 0x7053
                    7053   1885 _OSCCALIB	=	0x7053
                    7050   1886 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1887 _OSCFORCERUN	=	0x7050
                    7052   1888 G$OSCREADY$0$0 == 0x7052
                    7052   1889 _OSCREADY	=	0x7052
                    7051   1890 G$OSCRUN$0$0 == 0x7051
                    7051   1891 _OSCRUN	=	0x7051
                    7040   1892 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1893 _RADIOFDATAADDR0	=	0x7040
                    7041   1894 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1895 _RADIOFDATAADDR1	=	0x7041
                    7040   1896 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1897 _RADIOFDATAADDR	=	0x7040
                    7042   1898 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1899 _RADIOFSTATADDR0	=	0x7042
                    7043   1900 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1901 _RADIOFSTATADDR1	=	0x7043
                    7042   1902 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1903 _RADIOFSTATADDR	=	0x7042
                    7044   1904 G$RADIOMUX$0$0 == 0x7044
                    7044   1905 _RADIOMUX	=	0x7044
                    7084   1906 G$SCRATCH0$0$0 == 0x7084
                    7084   1907 _SCRATCH0	=	0x7084
                    7085   1908 G$SCRATCH1$0$0 == 0x7085
                    7085   1909 _SCRATCH1	=	0x7085
                    7086   1910 G$SCRATCH2$0$0 == 0x7086
                    7086   1911 _SCRATCH2	=	0x7086
                    7087   1912 G$SCRATCH3$0$0 == 0x7087
                    7087   1913 _SCRATCH3	=	0x7087
                    7F00   1914 G$SILICONREV$0$0 == 0x7f00
                    7F00   1915 _SILICONREV	=	0x7f00
                    7F19   1916 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1917 _XTALAMPL	=	0x7f19
                    7F18   1918 G$XTALOSC$0$0 == 0x7f18
                    7F18   1919 _XTALOSC	=	0x7f18
                    7F1A   1920 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1921 _XTALREADY	=	0x7f1a
                    3F82   1922 G$XDPTR0$0$0 == 0x3f82
                    3F82   1923 _XDPTR0	=	0x3f82
                    3F84   1924 G$XDPTR1$0$0 == 0x3f84
                    3F84   1925 _XDPTR1	=	0x3f84
                    3FA8   1926 G$XIE$0$0 == 0x3fa8
                    3FA8   1927 _XIE	=	0x3fa8
                    3FB8   1928 G$XIP$0$0 == 0x3fb8
                    3FB8   1929 _XIP	=	0x3fb8
                    3F87   1930 G$XPCON$0$0 == 0x3f87
                    3F87   1931 _XPCON	=	0x3f87
                    3FCA   1932 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1933 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1934 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1935 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1936 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1937 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1938 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1939 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1940 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1941 _XADCCLKSRC	=	0x3fd1
                    3FC9   1942 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1943 _XADCCONV	=	0x3fc9
                    3FE1   1944 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1945 _XANALOGCOMP	=	0x3fe1
                    3FC6   1946 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1947 _XCLKCON	=	0x3fc6
                    3FC7   1948 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1949 _XCLKSTAT	=	0x3fc7
                    3F97   1950 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1951 _XCODECONFIG	=	0x3f97
                    3FE3   1952 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1953 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1954 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1955 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1956 G$XDIRA$0$0 == 0x3f89
                    3F89   1957 _XDIRA	=	0x3f89
                    3F8A   1958 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1959 _XDIRB	=	0x3f8a
                    3F8B   1960 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1961 _XDIRC	=	0x3f8b
                    3F8E   1962 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1963 _XDIRR	=	0x3f8e
                    3FC8   1964 G$XPINA$0$0 == 0x3fc8
                    3FC8   1965 _XPINA	=	0x3fc8
                    3FE8   1966 G$XPINB$0$0 == 0x3fe8
                    3FE8   1967 _XPINB	=	0x3fe8
                    3FF8   1968 G$XPINC$0$0 == 0x3ff8
                    3FF8   1969 _XPINC	=	0x3ff8
                    3F8D   1970 G$XPINR$0$0 == 0x3f8d
                    3F8D   1971 _XPINR	=	0x3f8d
                    3F80   1972 G$XPORTA$0$0 == 0x3f80
                    3F80   1973 _XPORTA	=	0x3f80
                    3F88   1974 G$XPORTB$0$0 == 0x3f88
                    3F88   1975 _XPORTB	=	0x3f88
                    3F90   1976 G$XPORTC$0$0 == 0x3f90
                    3F90   1977 _XPORTC	=	0x3f90
                    3F8C   1978 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1979 _XPORTR	=	0x3f8c
                    3FCE   1980 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1981 _XIC0CAPT0	=	0x3fce
                    3FCF   1982 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1983 _XIC0CAPT1	=	0x3fcf
                    3FCE   1984 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1985 _XIC0CAPT	=	0x3fce
                    3FCC   1986 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1987 _XIC0MODE	=	0x3fcc
                    3FCD   1988 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1989 _XIC0STATUS	=	0x3fcd
                    3FD6   1990 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1991 _XIC1CAPT0	=	0x3fd6
                    3FD7   1992 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1993 _XIC1CAPT1	=	0x3fd7
                    3FD6   1994 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1995 _XIC1CAPT	=	0x3fd6
                    3FD4   1996 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1997 _XIC1MODE	=	0x3fd4
                    3FD5   1998 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   1999 _XIC1STATUS	=	0x3fd5
                    3F92   2000 G$XNVADDR0$0$0 == 0x3f92
                    3F92   2001 _XNVADDR0	=	0x3f92
                    3F93   2002 G$XNVADDR1$0$0 == 0x3f93
                    3F93   2003 _XNVADDR1	=	0x3f93
                    3F92   2004 G$XNVADDR$0$0 == 0x3f92
                    3F92   2005 _XNVADDR	=	0x3f92
                    3F94   2006 G$XNVDATA0$0$0 == 0x3f94
                    3F94   2007 _XNVDATA0	=	0x3f94
                    3F95   2008 G$XNVDATA1$0$0 == 0x3f95
                    3F95   2009 _XNVDATA1	=	0x3f95
                    3F94   2010 G$XNVDATA$0$0 == 0x3f94
                    3F94   2011 _XNVDATA	=	0x3f94
                    3F96   2012 G$XNVKEY$0$0 == 0x3f96
                    3F96   2013 _XNVKEY	=	0x3f96
                    3F91   2014 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   2015 _XNVSTATUS	=	0x3f91
                    3FBC   2016 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   2017 _XOC0COMP0	=	0x3fbc
                    3FBD   2018 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   2019 _XOC0COMP1	=	0x3fbd
                    3FBC   2020 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   2021 _XOC0COMP	=	0x3fbc
                    3FB9   2022 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   2023 _XOC0MODE	=	0x3fb9
                    3FBA   2024 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   2025 _XOC0PIN	=	0x3fba
                    3FBB   2026 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   2027 _XOC0STATUS	=	0x3fbb
                    3FC4   2028 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   2029 _XOC1COMP0	=	0x3fc4
                    3FC5   2030 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   2031 _XOC1COMP1	=	0x3fc5
                    3FC4   2032 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   2033 _XOC1COMP	=	0x3fc4
                    3FC1   2034 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   2035 _XOC1MODE	=	0x3fc1
                    3FC2   2036 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   2037 _XOC1PIN	=	0x3fc2
                    3FC3   2038 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   2039 _XOC1STATUS	=	0x3fc3
                    3FB1   2040 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   2041 _XRADIOACC	=	0x3fb1
                    3FB3   2042 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   2043 _XRADIOADDR0	=	0x3fb3
                    3FB2   2044 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   2045 _XRADIOADDR1	=	0x3fb2
                    3FB7   2046 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   2047 _XRADIODATA0	=	0x3fb7
                    3FB6   2048 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   2049 _XRADIODATA1	=	0x3fb6
                    3FB5   2050 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   2051 _XRADIODATA2	=	0x3fb5
                    3FB4   2052 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   2053 _XRADIODATA3	=	0x3fb4
                    3FBE   2054 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   2055 _XRADIOSTAT0	=	0x3fbe
                    3FBF   2056 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   2057 _XRADIOSTAT1	=	0x3fbf
                    3FBE   2058 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   2059 _XRADIOSTAT	=	0x3fbe
                    3FDF   2060 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   2061 _XSPCLKSRC	=	0x3fdf
                    3FDC   2062 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   2063 _XSPMODE	=	0x3fdc
                    3FDE   2064 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   2065 _XSPSHREG	=	0x3fde
                    3FDD   2066 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   2067 _XSPSTATUS	=	0x3fdd
                    3F9A   2068 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   2069 _XT0CLKSRC	=	0x3f9a
                    3F9C   2070 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   2071 _XT0CNT0	=	0x3f9c
                    3F9D   2072 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   2073 _XT0CNT1	=	0x3f9d
                    3F9C   2074 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   2075 _XT0CNT	=	0x3f9c
                    3F99   2076 G$XT0MODE$0$0 == 0x3f99
                    3F99   2077 _XT0MODE	=	0x3f99
                    3F9E   2078 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   2079 _XT0PERIOD0	=	0x3f9e
                    3F9F   2080 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   2081 _XT0PERIOD1	=	0x3f9f
                    3F9E   2082 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   2083 _XT0PERIOD	=	0x3f9e
                    3F9B   2084 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   2085 _XT0STATUS	=	0x3f9b
                    3FA2   2086 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   2087 _XT1CLKSRC	=	0x3fa2
                    3FA4   2088 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   2089 _XT1CNT0	=	0x3fa4
                    3FA5   2090 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   2091 _XT1CNT1	=	0x3fa5
                    3FA4   2092 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   2093 _XT1CNT	=	0x3fa4
                    3FA1   2094 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   2095 _XT1MODE	=	0x3fa1
                    3FA6   2096 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   2097 _XT1PERIOD0	=	0x3fa6
                    3FA7   2098 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   2099 _XT1PERIOD1	=	0x3fa7
                    3FA6   2100 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   2101 _XT1PERIOD	=	0x3fa6
                    3FA3   2102 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   2103 _XT1STATUS	=	0x3fa3
                    3FAA   2104 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   2105 _XT2CLKSRC	=	0x3faa
                    3FAC   2106 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   2107 _XT2CNT0	=	0x3fac
                    3FAD   2108 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   2109 _XT2CNT1	=	0x3fad
                    3FAC   2110 G$XT2CNT$0$0 == 0x3fac
                    3FAC   2111 _XT2CNT	=	0x3fac
                    3FA9   2112 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   2113 _XT2MODE	=	0x3fa9
                    3FAE   2114 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   2115 _XT2PERIOD0	=	0x3fae
                    3FAF   2116 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   2117 _XT2PERIOD1	=	0x3faf
                    3FAE   2118 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   2119 _XT2PERIOD	=	0x3fae
                    3FAB   2120 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   2121 _XT2STATUS	=	0x3fab
                    3FE4   2122 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   2123 _XU0CTRL	=	0x3fe4
                    3FE7   2124 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   2125 _XU0MODE	=	0x3fe7
                    3FE6   2126 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   2127 _XU0SHREG	=	0x3fe6
                    3FE5   2128 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   2129 _XU0STATUS	=	0x3fe5
                    3FEC   2130 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   2131 _XU1CTRL	=	0x3fec
                    3FEF   2132 G$XU1MODE$0$0 == 0x3fef
                    3FEF   2133 _XU1MODE	=	0x3fef
                    3FEE   2134 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   2135 _XU1SHREG	=	0x3fee
                    3FED   2136 G$XU1STATUS$0$0 == 0x3fed
                    3FED   2137 _XU1STATUS	=	0x3fed
                    3FDA   2138 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   2139 _XWDTCFG	=	0x3fda
                    3FDB   2140 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   2141 _XWDTRESET	=	0x3fdb
                    3FF1   2142 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   2143 _XWTCFGA	=	0x3ff1
                    3FF9   2144 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   2145 _XWTCFGB	=	0x3ff9
                    3FF2   2146 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   2147 _XWTCNTA0	=	0x3ff2
                    3FF3   2148 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   2149 _XWTCNTA1	=	0x3ff3
                    3FF2   2150 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   2151 _XWTCNTA	=	0x3ff2
                    3FFA   2152 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   2153 _XWTCNTB0	=	0x3ffa
                    3FFB   2154 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   2155 _XWTCNTB1	=	0x3ffb
                    3FFA   2156 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   2157 _XWTCNTB	=	0x3ffa
                    3FEB   2158 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   2159 _XWTCNTR1	=	0x3feb
                    3FF4   2160 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   2161 _XWTEVTA0	=	0x3ff4
                    3FF5   2162 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   2163 _XWTEVTA1	=	0x3ff5
                    3FF4   2164 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   2165 _XWTEVTA	=	0x3ff4
                    3FF6   2166 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   2167 _XWTEVTB0	=	0x3ff6
                    3FF7   2168 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   2169 _XWTEVTB1	=	0x3ff7
                    3FF6   2170 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   2171 _XWTEVTB	=	0x3ff6
                    3FFC   2172 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   2173 _XWTEVTC0	=	0x3ffc
                    3FFD   2174 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   2175 _XWTEVTC1	=	0x3ffd
                    3FFC   2176 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   2177 _XWTEVTC	=	0x3ffc
                    3FFE   2178 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   2179 _XWTEVTD0	=	0x3ffe
                    3FFF   2180 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   2181 _XWTEVTD1	=	0x3fff
                    3FFE   2182 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   2183 _XWTEVTD	=	0x3ffe
                    3FE9   2184 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   2185 _XWTIRQEN	=	0x3fe9
                    3FEA   2186 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   2187 _XWTSTAT	=	0x3fea
                    4114   2188 G$AX5043_AFSKCTRL$0$0 == 0x4114
                    4114   2189 _AX5043_AFSKCTRL	=	0x4114
                    4113   2190 G$AX5043_AFSKMARK0$0$0 == 0x4113
                    4113   2191 _AX5043_AFSKMARK0	=	0x4113
                    4112   2192 G$AX5043_AFSKMARK1$0$0 == 0x4112
                    4112   2193 _AX5043_AFSKMARK1	=	0x4112
                    4111   2194 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                    4111   2195 _AX5043_AFSKSPACE0	=	0x4111
                    4110   2196 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                    4110   2197 _AX5043_AFSKSPACE1	=	0x4110
                    4043   2198 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                    4043   2199 _AX5043_AGCCOUNTER	=	0x4043
                    4115   2200 G$AX5043_AMPLFILTER$0$0 == 0x4115
                    4115   2201 _AX5043_AMPLFILTER	=	0x4115
                    4189   2202 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                    4189   2203 _AX5043_BBOFFSCAP	=	0x4189
                    4188   2204 G$AX5043_BBTUNE$0$0 == 0x4188
                    4188   2205 _AX5043_BBTUNE	=	0x4188
                    4041   2206 G$AX5043_BGNDRSSI$0$0 == 0x4041
                    4041   2207 _AX5043_BGNDRSSI	=	0x4041
                    422E   2208 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                    422E   2209 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   2210 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                    422F   2211 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   2212 G$AX5043_CRCINIT0$0$0 == 0x4017
                    4017   2213 _AX5043_CRCINIT0	=	0x4017
                    4016   2214 G$AX5043_CRCINIT1$0$0 == 0x4016
                    4016   2215 _AX5043_CRCINIT1	=	0x4016
                    4015   2216 G$AX5043_CRCINIT2$0$0 == 0x4015
                    4015   2217 _AX5043_CRCINIT2	=	0x4015
                    4014   2218 G$AX5043_CRCINIT3$0$0 == 0x4014
                    4014   2219 _AX5043_CRCINIT3	=	0x4014
                    4332   2220 G$AX5043_DACCONFIG$0$0 == 0x4332
                    4332   2221 _AX5043_DACCONFIG	=	0x4332
                    4331   2222 G$AX5043_DACVALUE0$0$0 == 0x4331
                    4331   2223 _AX5043_DACVALUE0	=	0x4331
                    4330   2224 G$AX5043_DACVALUE1$0$0 == 0x4330
                    4330   2225 _AX5043_DACVALUE1	=	0x4330
                    4102   2226 G$AX5043_DECIMATION$0$0 == 0x4102
                    4102   2227 _AX5043_DECIMATION	=	0x4102
                    4042   2228 G$AX5043_DIVERSITY$0$0 == 0x4042
                    4042   2229 _AX5043_DIVERSITY	=	0x4042
                    4011   2230 G$AX5043_ENCODING$0$0 == 0x4011
                    4011   2231 _AX5043_ENCODING	=	0x4011
                    4018   2232 G$AX5043_FEC$0$0 == 0x4018
                    4018   2233 _AX5043_FEC	=	0x4018
                    401A   2234 G$AX5043_FECSTATUS$0$0 == 0x401a
                    401A   2235 _AX5043_FECSTATUS	=	0x401a
                    4019   2236 G$AX5043_FECSYNC$0$0 == 0x4019
                    4019   2237 _AX5043_FECSYNC	=	0x4019
                    402B   2238 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                    402B   2239 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   2240 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                    402A   2241 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   2242 G$AX5043_FIFODATA$0$0 == 0x4029
                    4029   2243 _AX5043_FIFODATA	=	0x4029
                    402D   2244 G$AX5043_FIFOFREE0$0$0 == 0x402d
                    402D   2245 _AX5043_FIFOFREE0	=	0x402d
                    402C   2246 G$AX5043_FIFOFREE1$0$0 == 0x402c
                    402C   2247 _AX5043_FIFOFREE1	=	0x402c
                    4028   2248 G$AX5043_FIFOSTAT$0$0 == 0x4028
                    4028   2249 _AX5043_FIFOSTAT	=	0x4028
                    402F   2250 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                    402F   2251 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   2252 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                    402E   2253 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   2254 G$AX5043_FRAMING$0$0 == 0x4012
                    4012   2255 _AX5043_FRAMING	=	0x4012
                    4037   2256 G$AX5043_FREQA0$0$0 == 0x4037
                    4037   2257 _AX5043_FREQA0	=	0x4037
                    4036   2258 G$AX5043_FREQA1$0$0 == 0x4036
                    4036   2259 _AX5043_FREQA1	=	0x4036
                    4035   2260 G$AX5043_FREQA2$0$0 == 0x4035
                    4035   2261 _AX5043_FREQA2	=	0x4035
                    4034   2262 G$AX5043_FREQA3$0$0 == 0x4034
                    4034   2263 _AX5043_FREQA3	=	0x4034
                    403F   2264 G$AX5043_FREQB0$0$0 == 0x403f
                    403F   2265 _AX5043_FREQB0	=	0x403f
                    403E   2266 G$AX5043_FREQB1$0$0 == 0x403e
                    403E   2267 _AX5043_FREQB1	=	0x403e
                    403D   2268 G$AX5043_FREQB2$0$0 == 0x403d
                    403D   2269 _AX5043_FREQB2	=	0x403d
                    403C   2270 G$AX5043_FREQB3$0$0 == 0x403c
                    403C   2271 _AX5043_FREQB3	=	0x403c
                    4163   2272 G$AX5043_FSKDEV0$0$0 == 0x4163
                    4163   2273 _AX5043_FSKDEV0	=	0x4163
                    4162   2274 G$AX5043_FSKDEV1$0$0 == 0x4162
                    4162   2275 _AX5043_FSKDEV1	=	0x4162
                    4161   2276 G$AX5043_FSKDEV2$0$0 == 0x4161
                    4161   2277 _AX5043_FSKDEV2	=	0x4161
                    410D   2278 G$AX5043_FSKDMAX0$0$0 == 0x410d
                    410D   2279 _AX5043_FSKDMAX0	=	0x410d
                    410C   2280 G$AX5043_FSKDMAX1$0$0 == 0x410c
                    410C   2281 _AX5043_FSKDMAX1	=	0x410c
                    410F   2282 G$AX5043_FSKDMIN0$0$0 == 0x410f
                    410F   2283 _AX5043_FSKDMIN0	=	0x410f
                    410E   2284 G$AX5043_FSKDMIN1$0$0 == 0x410e
                    410E   2285 _AX5043_FSKDMIN1	=	0x410e
                    4309   2286 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                    4309   2287 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   2288 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                    4308   2289 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   2290 G$AX5043_GPADCCTRL$0$0 == 0x4300
                    4300   2291 _AX5043_GPADCCTRL	=	0x4300
                    4301   2292 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                    4301   2293 _AX5043_GPADCPERIOD	=	0x4301
                    4101   2294 G$AX5043_IFFREQ0$0$0 == 0x4101
                    4101   2295 _AX5043_IFFREQ0	=	0x4101
                    4100   2296 G$AX5043_IFFREQ1$0$0 == 0x4100
                    4100   2297 _AX5043_IFFREQ1	=	0x4100
                    400B   2298 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                    400B   2299 _AX5043_IRQINVERSION0	=	0x400b
                    400A   2300 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                    400A   2301 _AX5043_IRQINVERSION1	=	0x400a
                    4007   2302 G$AX5043_IRQMASK0$0$0 == 0x4007
                    4007   2303 _AX5043_IRQMASK0	=	0x4007
                    4006   2304 G$AX5043_IRQMASK1$0$0 == 0x4006
                    4006   2305 _AX5043_IRQMASK1	=	0x4006
                    400D   2306 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                    400D   2307 _AX5043_IRQREQUEST0	=	0x400d
                    400C   2308 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                    400C   2309 _AX5043_IRQREQUEST1	=	0x400c
                    4310   2310 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                    4310   2311 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   2312 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                    4317   2313 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   2314 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                    4316   2315 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   2316 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                    4313   2317 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   2318 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                    4312   2319 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   2320 G$AX5043_LPOSCPER0$0$0 == 0x4319
                    4319   2321 _AX5043_LPOSCPER0	=	0x4319
                    4318   2322 G$AX5043_LPOSCPER1$0$0 == 0x4318
                    4318   2323 _AX5043_LPOSCPER1	=	0x4318
                    4315   2324 G$AX5043_LPOSCREF0$0$0 == 0x4315
                    4315   2325 _AX5043_LPOSCREF0	=	0x4315
                    4314   2326 G$AX5043_LPOSCREF1$0$0 == 0x4314
                    4314   2327 _AX5043_LPOSCREF1	=	0x4314
                    4311   2328 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                    4311   2329 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   2330 G$AX5043_MATCH0LEN$0$0 == 0x4214
                    4214   2331 _AX5043_MATCH0LEN	=	0x4214
                    4216   2332 G$AX5043_MATCH0MAX$0$0 == 0x4216
                    4216   2333 _AX5043_MATCH0MAX	=	0x4216
                    4215   2334 G$AX5043_MATCH0MIN$0$0 == 0x4215
                    4215   2335 _AX5043_MATCH0MIN	=	0x4215
                    4213   2336 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                    4213   2337 _AX5043_MATCH0PAT0	=	0x4213
                    4212   2338 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                    4212   2339 _AX5043_MATCH0PAT1	=	0x4212
                    4211   2340 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                    4211   2341 _AX5043_MATCH0PAT2	=	0x4211
                    4210   2342 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                    4210   2343 _AX5043_MATCH0PAT3	=	0x4210
                    421C   2344 G$AX5043_MATCH1LEN$0$0 == 0x421c
                    421C   2345 _AX5043_MATCH1LEN	=	0x421c
                    421E   2346 G$AX5043_MATCH1MAX$0$0 == 0x421e
                    421E   2347 _AX5043_MATCH1MAX	=	0x421e
                    421D   2348 G$AX5043_MATCH1MIN$0$0 == 0x421d
                    421D   2349 _AX5043_MATCH1MIN	=	0x421d
                    4219   2350 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                    4219   2351 _AX5043_MATCH1PAT0	=	0x4219
                    4218   2352 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                    4218   2353 _AX5043_MATCH1PAT1	=	0x4218
                    4108   2354 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                    4108   2355 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   2356 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                    4107   2357 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   2358 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                    4106   2359 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   2360 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                    410B   2361 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   2362 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                    410A   2363 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   2364 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                    4109   2365 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   2366 G$AX5043_MODCFGA$0$0 == 0x4164
                    4164   2367 _AX5043_MODCFGA	=	0x4164
                    4160   2368 G$AX5043_MODCFGF$0$0 == 0x4160
                    4160   2369 _AX5043_MODCFGF	=	0x4160
                    4010   2370 G$AX5043_MODULATION$0$0 == 0x4010
                    4010   2371 _AX5043_MODULATION	=	0x4010
                    4025   2372 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                    4025   2373 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   2374 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                    4023   2375 _AX5043_PINFUNCDATA	=	0x4023
                    4022   2376 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                    4022   2377 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   2378 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                    4024   2379 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   2380 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                    4026   2381 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   2382 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                    4021   2383 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   2384 G$AX5043_PINSTATE$0$0 == 0x4020
                    4020   2385 _AX5043_PINSTATE	=	0x4020
                    4233   2386 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                    4233   2387 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   2388 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                    4230   2389 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   2390 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                    4231   2391 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   2392 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                    4232   2393 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   2394 G$AX5043_PLLCPI$0$0 == 0x4031
                    4031   2395 _AX5043_PLLCPI	=	0x4031
                    4039   2396 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                    4039   2397 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   2398 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                    4182   2399 _AX5043_PLLLOCKDET	=	0x4182
                    4030   2400 G$AX5043_PLLLOOP$0$0 == 0x4030
                    4030   2401 _AX5043_PLLLOOP	=	0x4030
                    4038   2402 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                    4038   2403 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   2404 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                    4033   2405 _AX5043_PLLRANGINGA	=	0x4033
                    403B   2406 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                    403B   2407 _AX5043_PLLRANGINGB	=	0x403b
                    4183   2408 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                    4183   2409 _AX5043_PLLRNGCLK	=	0x4183
                    4032   2410 G$AX5043_PLLVCODIV$0$0 == 0x4032
                    4032   2411 _AX5043_PLLVCODIV	=	0x4032
                    4180   2412 G$AX5043_PLLVCOI$0$0 == 0x4180
                    4180   2413 _AX5043_PLLVCOI	=	0x4180
                    4181   2414 G$AX5043_PLLVCOIR$0$0 == 0x4181
                    4181   2415 _AX5043_PLLVCOIR	=	0x4181
                    4005   2416 G$AX5043_POWIRQMASK$0$0 == 0x4005
                    4005   2417 _AX5043_POWIRQMASK	=	0x4005
                    4003   2418 G$AX5043_POWSTAT$0$0 == 0x4003
                    4003   2419 _AX5043_POWSTAT	=	0x4003
                    4004   2420 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                    4004   2421 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   2422 G$AX5043_PWRAMP$0$0 == 0x4027
                    4027   2423 _AX5043_PWRAMP	=	0x4027
                    4002   2424 G$AX5043_PWRMODE$0$0 == 0x4002
                    4002   2425 _AX5043_PWRMODE	=	0x4002
                    4009   2426 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                    4009   2427 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   2428 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                    4008   2429 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   2430 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                    400F   2431 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   2432 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                    400E   2433 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   2434 G$AX5043_RADIOSTATE$0$0 == 0x401c
                    401C   2435 _AX5043_RADIOSTATE	=	0x401c
                    4040   2436 G$AX5043_RSSI$0$0 == 0x4040
                    4040   2437 _AX5043_RSSI	=	0x4040
                    422D   2438 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                    422D   2439 _AX5043_RSSIABSTHR	=	0x422d
                    422C   2440 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                    422C   2441 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   2442 G$AX5043_RXDATARATE0$0$0 == 0x4105
                    4105   2443 _AX5043_RXDATARATE0	=	0x4105
                    4104   2444 G$AX5043_RXDATARATE1$0$0 == 0x4104
                    4104   2445 _AX5043_RXDATARATE1	=	0x4104
                    4103   2446 G$AX5043_RXDATARATE2$0$0 == 0x4103
                    4103   2447 _AX5043_RXDATARATE2	=	0x4103
                    4001   2448 G$AX5043_SCRATCH$0$0 == 0x4001
                    4001   2449 _AX5043_SCRATCH	=	0x4001
                    4000   2450 G$AX5043_SILICONREVISION$0$0 == 0x4000
                    4000   2451 _AX5043_SILICONREVISION	=	0x4000
                    405B   2452 G$AX5043_TIMER0$0$0 == 0x405b
                    405B   2453 _AX5043_TIMER0	=	0x405b
                    405A   2454 G$AX5043_TIMER1$0$0 == 0x405a
                    405A   2455 _AX5043_TIMER1	=	0x405a
                    4059   2456 G$AX5043_TIMER2$0$0 == 0x4059
                    4059   2457 _AX5043_TIMER2	=	0x4059
                    4227   2458 G$AX5043_TMGRXAGC$0$0 == 0x4227
                    4227   2459 _AX5043_TMGRXAGC	=	0x4227
                    4223   2460 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                    4223   2461 _AX5043_TMGRXBOOST	=	0x4223
                    4226   2462 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                    4226   2463 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   2464 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                    4225   2465 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   2466 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                    4229   2467 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   2468 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                    422A   2469 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   2470 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                    422B   2471 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   2472 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                    4228   2473 _AX5043_TMGRXRSSI	=	0x4228
                    4224   2474 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                    4224   2475 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   2476 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                    4220   2477 _AX5043_TMGTXBOOST	=	0x4220
                    4221   2478 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                    4221   2479 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   2480 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                    4055   2481 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   2482 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                    4054   2483 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   2484 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                    4049   2485 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   2486 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                    4048   2487 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   2488 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                    4047   2489 _AX5043_TRKDATARATE0	=	0x4047
                    4046   2490 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                    4046   2491 _AX5043_TRKDATARATE1	=	0x4046
                    4045   2492 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                    4045   2493 _AX5043_TRKDATARATE2	=	0x4045
                    4051   2494 G$AX5043_TRKFREQ0$0$0 == 0x4051
                    4051   2495 _AX5043_TRKFREQ0	=	0x4051
                    4050   2496 G$AX5043_TRKFREQ1$0$0 == 0x4050
                    4050   2497 _AX5043_TRKFREQ1	=	0x4050
                    4053   2498 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                    4053   2499 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   2500 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                    4052   2501 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   2502 G$AX5043_TRKPHASE0$0$0 == 0x404b
                    404B   2503 _AX5043_TRKPHASE0	=	0x404b
                    404A   2504 G$AX5043_TRKPHASE1$0$0 == 0x404a
                    404A   2505 _AX5043_TRKPHASE1	=	0x404a
                    404F   2506 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                    404F   2507 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   2508 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                    404E   2509 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   2510 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                    404D   2511 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   2512 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                    4169   2513 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   2514 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                    4168   2515 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   2516 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                    416B   2517 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   2518 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                    416A   2519 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   2520 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                    416D   2521 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   2522 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                    416C   2523 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   2524 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                    416F   2525 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   2526 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                    416E   2527 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   2528 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                    4171   2529 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   2530 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                    4170   2531 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   2532 G$AX5043_TXRATE0$0$0 == 0x4167
                    4167   2533 _AX5043_TXRATE0	=	0x4167
                    4166   2534 G$AX5043_TXRATE1$0$0 == 0x4166
                    4166   2535 _AX5043_TXRATE1	=	0x4166
                    4165   2536 G$AX5043_TXRATE2$0$0 == 0x4165
                    4165   2537 _AX5043_TXRATE2	=	0x4165
                    406B   2538 G$AX5043_WAKEUP0$0$0 == 0x406b
                    406B   2539 _AX5043_WAKEUP0	=	0x406b
                    406A   2540 G$AX5043_WAKEUP1$0$0 == 0x406a
                    406A   2541 _AX5043_WAKEUP1	=	0x406a
                    406D   2542 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                    406D   2543 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   2544 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                    406C   2545 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   2546 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                    4069   2547 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   2548 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                    4068   2549 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   2550 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                    406E   2551 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   2552 G$AX5043_XTALCAP$0$0 == 0x4184
                    4184   2553 _AX5043_XTALCAP	=	0x4184
                    401D   2554 G$AX5043_XTALSTATUS$0$0 == 0x401d
                    401D   2555 _AX5043_XTALSTATUS	=	0x401d
                    4122   2556 G$AX5043_AGCAHYST0$0$0 == 0x4122
                    4122   2557 _AX5043_AGCAHYST0	=	0x4122
                    4132   2558 G$AX5043_AGCAHYST1$0$0 == 0x4132
                    4132   2559 _AX5043_AGCAHYST1	=	0x4132
                    4142   2560 G$AX5043_AGCAHYST2$0$0 == 0x4142
                    4142   2561 _AX5043_AGCAHYST2	=	0x4142
                    4152   2562 G$AX5043_AGCAHYST3$0$0 == 0x4152
                    4152   2563 _AX5043_AGCAHYST3	=	0x4152
                    4120   2564 G$AX5043_AGCGAIN0$0$0 == 0x4120
                    4120   2565 _AX5043_AGCGAIN0	=	0x4120
                    4130   2566 G$AX5043_AGCGAIN1$0$0 == 0x4130
                    4130   2567 _AX5043_AGCGAIN1	=	0x4130
                    4140   2568 G$AX5043_AGCGAIN2$0$0 == 0x4140
                    4140   2569 _AX5043_AGCGAIN2	=	0x4140
                    4150   2570 G$AX5043_AGCGAIN3$0$0 == 0x4150
                    4150   2571 _AX5043_AGCGAIN3	=	0x4150
                    4123   2572 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                    4123   2573 _AX5043_AGCMINMAX0	=	0x4123
                    4133   2574 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                    4133   2575 _AX5043_AGCMINMAX1	=	0x4133
                    4143   2576 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                    4143   2577 _AX5043_AGCMINMAX2	=	0x4143
                    4153   2578 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                    4153   2579 _AX5043_AGCMINMAX3	=	0x4153
                    4121   2580 G$AX5043_AGCTARGET0$0$0 == 0x4121
                    4121   2581 _AX5043_AGCTARGET0	=	0x4121
                    4131   2582 G$AX5043_AGCTARGET1$0$0 == 0x4131
                    4131   2583 _AX5043_AGCTARGET1	=	0x4131
                    4141   2584 G$AX5043_AGCTARGET2$0$0 == 0x4141
                    4141   2585 _AX5043_AGCTARGET2	=	0x4141
                    4151   2586 G$AX5043_AGCTARGET3$0$0 == 0x4151
                    4151   2587 _AX5043_AGCTARGET3	=	0x4151
                    412B   2588 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                    412B   2589 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   2590 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                    413B   2591 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   2592 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                    414B   2593 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   2594 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                    415B   2595 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   2596 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                    412F   2597 _AX5043_BBOFFSRES0	=	0x412f
                    413F   2598 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                    413F   2599 _AX5043_BBOFFSRES1	=	0x413f
                    414F   2600 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                    414F   2601 _AX5043_BBOFFSRES2	=	0x414f
                    415F   2602 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                    415F   2603 _AX5043_BBOFFSRES3	=	0x415f
                    4125   2604 G$AX5043_DRGAIN0$0$0 == 0x4125
                    4125   2605 _AX5043_DRGAIN0	=	0x4125
                    4135   2606 G$AX5043_DRGAIN1$0$0 == 0x4135
                    4135   2607 _AX5043_DRGAIN1	=	0x4135
                    4145   2608 G$AX5043_DRGAIN2$0$0 == 0x4145
                    4145   2609 _AX5043_DRGAIN2	=	0x4145
                    4155   2610 G$AX5043_DRGAIN3$0$0 == 0x4155
                    4155   2611 _AX5043_DRGAIN3	=	0x4155
                    412E   2612 G$AX5043_FOURFSK0$0$0 == 0x412e
                    412E   2613 _AX5043_FOURFSK0	=	0x412e
                    413E   2614 G$AX5043_FOURFSK1$0$0 == 0x413e
                    413E   2615 _AX5043_FOURFSK1	=	0x413e
                    414E   2616 G$AX5043_FOURFSK2$0$0 == 0x414e
                    414E   2617 _AX5043_FOURFSK2	=	0x414e
                    415E   2618 G$AX5043_FOURFSK3$0$0 == 0x415e
                    415E   2619 _AX5043_FOURFSK3	=	0x415e
                    412D   2620 G$AX5043_FREQDEV00$0$0 == 0x412d
                    412D   2621 _AX5043_FREQDEV00	=	0x412d
                    413D   2622 G$AX5043_FREQDEV01$0$0 == 0x413d
                    413D   2623 _AX5043_FREQDEV01	=	0x413d
                    414D   2624 G$AX5043_FREQDEV02$0$0 == 0x414d
                    414D   2625 _AX5043_FREQDEV02	=	0x414d
                    415D   2626 G$AX5043_FREQDEV03$0$0 == 0x415d
                    415D   2627 _AX5043_FREQDEV03	=	0x415d
                    412C   2628 G$AX5043_FREQDEV10$0$0 == 0x412c
                    412C   2629 _AX5043_FREQDEV10	=	0x412c
                    413C   2630 G$AX5043_FREQDEV11$0$0 == 0x413c
                    413C   2631 _AX5043_FREQDEV11	=	0x413c
                    414C   2632 G$AX5043_FREQDEV12$0$0 == 0x414c
                    414C   2633 _AX5043_FREQDEV12	=	0x414c
                    415C   2634 G$AX5043_FREQDEV13$0$0 == 0x415c
                    415C   2635 _AX5043_FREQDEV13	=	0x415c
                    4127   2636 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                    4127   2637 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   2638 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                    4137   2639 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   2640 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                    4147   2641 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   2642 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                    4157   2643 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   2644 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                    4128   2645 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   2646 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                    4138   2647 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   2648 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                    4148   2649 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   2650 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                    4158   2651 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   2652 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                    4129   2653 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   2654 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                    4139   2655 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   2656 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                    4149   2657 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   2658 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                    4159   2659 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   2660 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                    412A   2661 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   2662 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                    413A   2663 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   2664 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                    414A   2665 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   2666 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                    415A   2667 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   2668 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                    4116   2669 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   2670 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                    4126   2671 _AX5043_PHASEGAIN0	=	0x4126
                    4136   2672 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                    4136   2673 _AX5043_PHASEGAIN1	=	0x4136
                    4146   2674 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                    4146   2675 _AX5043_PHASEGAIN2	=	0x4146
                    4156   2676 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                    4156   2677 _AX5043_PHASEGAIN3	=	0x4156
                    4207   2678 G$AX5043_PKTADDR0$0$0 == 0x4207
                    4207   2679 _AX5043_PKTADDR0	=	0x4207
                    4206   2680 G$AX5043_PKTADDR1$0$0 == 0x4206
                    4206   2681 _AX5043_PKTADDR1	=	0x4206
                    4205   2682 G$AX5043_PKTADDR2$0$0 == 0x4205
                    4205   2683 _AX5043_PKTADDR2	=	0x4205
                    4204   2684 G$AX5043_PKTADDR3$0$0 == 0x4204
                    4204   2685 _AX5043_PKTADDR3	=	0x4204
                    4200   2686 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                    4200   2687 _AX5043_PKTADDRCFG	=	0x4200
                    420B   2688 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                    420B   2689 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   2690 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                    420A   2691 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   2692 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                    4209   2693 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   2694 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                    4208   2695 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   2696 G$AX5043_PKTLENCFG$0$0 == 0x4201
                    4201   2697 _AX5043_PKTLENCFG	=	0x4201
                    4202   2698 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                    4202   2699 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   2700 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                    4203   2701 _AX5043_PKTMAXLEN	=	0x4203
                    4118   2702 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                    4118   2703 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   2704 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                    4117   2705 _AX5043_RXPARAMSETS	=	0x4117
                    4124   2706 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                    4124   2707 _AX5043_TIMEGAIN0	=	0x4124
                    4134   2708 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                    4134   2709 _AX5043_TIMEGAIN1	=	0x4134
                    4144   2710 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                    4144   2711 _AX5043_TIMEGAIN2	=	0x4144
                    4154   2712 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                    4154   2713 _AX5043_TIMEGAIN3	=	0x4154
                    5114   2714 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                    5114   2715 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   2716 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                    5113   2717 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   2718 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                    5112   2719 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   2720 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                    5111   2721 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   2722 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                    5110   2723 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   2724 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                    5043   2725 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   2726 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                    5115   2727 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   2728 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                    5189   2729 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   2730 G$AX5043_BBTUNENB$0$0 == 0x5188
                    5188   2731 _AX5043_BBTUNENB	=	0x5188
                    5041   2732 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                    5041   2733 _AX5043_BGNDRSSINB	=	0x5041
                    522E   2734 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                    522E   2735 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   2736 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                    522F   2737 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   2738 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                    5017   2739 _AX5043_CRCINIT0NB	=	0x5017
                    5016   2740 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                    5016   2741 _AX5043_CRCINIT1NB	=	0x5016
                    5015   2742 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                    5015   2743 _AX5043_CRCINIT2NB	=	0x5015
                    5014   2744 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                    5014   2745 _AX5043_CRCINIT3NB	=	0x5014
                    5332   2746 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                    5332   2747 _AX5043_DACCONFIGNB	=	0x5332
                    5331   2748 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                    5331   2749 _AX5043_DACVALUE0NB	=	0x5331
                    5330   2750 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                    5330   2751 _AX5043_DACVALUE1NB	=	0x5330
                    5102   2752 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                    5102   2753 _AX5043_DECIMATIONNB	=	0x5102
                    5042   2754 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                    5042   2755 _AX5043_DIVERSITYNB	=	0x5042
                    5011   2756 G$AX5043_ENCODINGNB$0$0 == 0x5011
                    5011   2757 _AX5043_ENCODINGNB	=	0x5011
                    5018   2758 G$AX5043_FECNB$0$0 == 0x5018
                    5018   2759 _AX5043_FECNB	=	0x5018
                    501A   2760 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                    501A   2761 _AX5043_FECSTATUSNB	=	0x501a
                    5019   2762 G$AX5043_FECSYNCNB$0$0 == 0x5019
                    5019   2763 _AX5043_FECSYNCNB	=	0x5019
                    502B   2764 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                    502B   2765 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   2766 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                    502A   2767 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   2768 G$AX5043_FIFODATANB$0$0 == 0x5029
                    5029   2769 _AX5043_FIFODATANB	=	0x5029
                    502D   2770 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                    502D   2771 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   2772 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                    502C   2773 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   2774 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                    5028   2775 _AX5043_FIFOSTATNB	=	0x5028
                    502F   2776 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                    502F   2777 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   2778 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                    502E   2779 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   2780 G$AX5043_FRAMINGNB$0$0 == 0x5012
                    5012   2781 _AX5043_FRAMINGNB	=	0x5012
                    5037   2782 G$AX5043_FREQA0NB$0$0 == 0x5037
                    5037   2783 _AX5043_FREQA0NB	=	0x5037
                    5036   2784 G$AX5043_FREQA1NB$0$0 == 0x5036
                    5036   2785 _AX5043_FREQA1NB	=	0x5036
                    5035   2786 G$AX5043_FREQA2NB$0$0 == 0x5035
                    5035   2787 _AX5043_FREQA2NB	=	0x5035
                    5034   2788 G$AX5043_FREQA3NB$0$0 == 0x5034
                    5034   2789 _AX5043_FREQA3NB	=	0x5034
                    503F   2790 G$AX5043_FREQB0NB$0$0 == 0x503f
                    503F   2791 _AX5043_FREQB0NB	=	0x503f
                    503E   2792 G$AX5043_FREQB1NB$0$0 == 0x503e
                    503E   2793 _AX5043_FREQB1NB	=	0x503e
                    503D   2794 G$AX5043_FREQB2NB$0$0 == 0x503d
                    503D   2795 _AX5043_FREQB2NB	=	0x503d
                    503C   2796 G$AX5043_FREQB3NB$0$0 == 0x503c
                    503C   2797 _AX5043_FREQB3NB	=	0x503c
                    5163   2798 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                    5163   2799 _AX5043_FSKDEV0NB	=	0x5163
                    5162   2800 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                    5162   2801 _AX5043_FSKDEV1NB	=	0x5162
                    5161   2802 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                    5161   2803 _AX5043_FSKDEV2NB	=	0x5161
                    510D   2804 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                    510D   2805 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   2806 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                    510C   2807 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   2808 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                    510F   2809 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   2810 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                    510E   2811 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   2812 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                    5309   2813 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   2814 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                    5308   2815 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   2816 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                    5300   2817 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   2818 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                    5301   2819 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   2820 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                    5101   2821 _AX5043_IFFREQ0NB	=	0x5101
                    5100   2822 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                    5100   2823 _AX5043_IFFREQ1NB	=	0x5100
                    500B   2824 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                    500B   2825 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   2826 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                    500A   2827 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   2828 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                    5007   2829 _AX5043_IRQMASK0NB	=	0x5007
                    5006   2830 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                    5006   2831 _AX5043_IRQMASK1NB	=	0x5006
                    500D   2832 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                    500D   2833 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   2834 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                    500C   2835 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   2836 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                    5310   2837 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   2838 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                    5317   2839 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   2840 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                    5316   2841 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   2842 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                    5313   2843 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   2844 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                    5312   2845 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   2846 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                    5319   2847 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   2848 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                    5318   2849 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   2850 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                    5315   2851 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   2852 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                    5314   2853 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   2854 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                    5311   2855 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   2856 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                    5214   2857 _AX5043_MATCH0LENNB	=	0x5214
                    5216   2858 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                    5216   2859 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   2860 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                    5215   2861 _AX5043_MATCH0MINNB	=	0x5215
                    5213   2862 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                    5213   2863 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   2864 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                    5212   2865 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   2866 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                    5211   2867 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   2868 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                    5210   2869 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   2870 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                    521C   2871 _AX5043_MATCH1LENNB	=	0x521c
                    521E   2872 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                    521E   2873 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   2874 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                    521D   2875 _AX5043_MATCH1MINNB	=	0x521d
                    5219   2876 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                    5219   2877 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   2878 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                    5218   2879 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   2880 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                    5108   2881 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   2882 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                    5107   2883 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   2884 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                    5106   2885 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   2886 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                    510B   2887 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   2888 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                    510A   2889 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   2890 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                    5109   2891 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   2892 G$AX5043_MODCFGANB$0$0 == 0x5164
                    5164   2893 _AX5043_MODCFGANB	=	0x5164
                    5160   2894 G$AX5043_MODCFGFNB$0$0 == 0x5160
                    5160   2895 _AX5043_MODCFGFNB	=	0x5160
                    5010   2896 G$AX5043_MODULATIONNB$0$0 == 0x5010
                    5010   2897 _AX5043_MODULATIONNB	=	0x5010
                    5025   2898 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                    5025   2899 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   2900 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                    5023   2901 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   2902 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                    5022   2903 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   2904 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                    5024   2905 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   2906 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                    5026   2907 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   2908 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                    5021   2909 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   2910 G$AX5043_PINSTATENB$0$0 == 0x5020
                    5020   2911 _AX5043_PINSTATENB	=	0x5020
                    5233   2912 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                    5233   2913 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   2914 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                    5230   2915 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   2916 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                    5231   2917 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   2918 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                    5232   2919 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   2920 G$AX5043_PLLCPINB$0$0 == 0x5031
                    5031   2921 _AX5043_PLLCPINB	=	0x5031
                    5039   2922 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                    5039   2923 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   2924 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                    5182   2925 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   2926 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                    5030   2927 _AX5043_PLLLOOPNB	=	0x5030
                    5038   2928 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                    5038   2929 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   2930 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                    5033   2931 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   2932 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                    503B   2933 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   2934 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                    5183   2935 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   2936 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                    5032   2937 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   2938 G$AX5043_PLLVCOINB$0$0 == 0x5180
                    5180   2939 _AX5043_PLLVCOINB	=	0x5180
                    5181   2940 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                    5181   2941 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   2942 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                    5005   2943 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   2944 G$AX5043_POWSTATNB$0$0 == 0x5003
                    5003   2945 _AX5043_POWSTATNB	=	0x5003
                    5004   2946 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                    5004   2947 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   2948 G$AX5043_PWRAMPNB$0$0 == 0x5027
                    5027   2949 _AX5043_PWRAMPNB	=	0x5027
                    5002   2950 G$AX5043_PWRMODENB$0$0 == 0x5002
                    5002   2951 _AX5043_PWRMODENB	=	0x5002
                    5009   2952 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                    5009   2953 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   2954 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                    5008   2955 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   2956 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                    500F   2957 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   2958 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                    500E   2959 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   2960 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                    501C   2961 _AX5043_RADIOSTATENB	=	0x501c
                    5040   2962 G$AX5043_RSSINB$0$0 == 0x5040
                    5040   2963 _AX5043_RSSINB	=	0x5040
                    522D   2964 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                    522D   2965 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   2966 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                    522C   2967 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   2968 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                    5105   2969 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   2970 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                    5104   2971 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   2972 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                    5103   2973 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   2974 G$AX5043_SCRATCHNB$0$0 == 0x5001
                    5001   2975 _AX5043_SCRATCHNB	=	0x5001
                    5000   2976 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                    5000   2977 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   2978 G$AX5043_TIMER0NB$0$0 == 0x505b
                    505B   2979 _AX5043_TIMER0NB	=	0x505b
                    505A   2980 G$AX5043_TIMER1NB$0$0 == 0x505a
                    505A   2981 _AX5043_TIMER1NB	=	0x505a
                    5059   2982 G$AX5043_TIMER2NB$0$0 == 0x5059
                    5059   2983 _AX5043_TIMER2NB	=	0x5059
                    5227   2984 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                    5227   2985 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   2986 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                    5223   2987 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   2988 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                    5226   2989 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   2990 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                    5225   2991 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   2992 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                    5229   2993 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   2994 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                    522A   2995 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   2996 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                    522B   2997 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   2998 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                    5228   2999 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   3000 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                    5224   3001 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   3002 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                    5220   3003 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   3004 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                    5221   3005 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   3006 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                    5055   3007 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   3008 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                    5054   3009 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   3010 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                    5049   3011 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   3012 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                    5048   3013 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   3014 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                    5047   3015 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   3016 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                    5046   3017 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   3018 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                    5045   3019 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   3020 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                    5051   3021 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   3022 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                    5050   3023 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   3024 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                    5053   3025 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   3026 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                    5052   3027 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   3028 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                    504B   3029 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   3030 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                    504A   3031 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   3032 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                    504F   3033 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   3034 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                    504E   3035 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   3036 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                    504D   3037 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   3038 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                    5169   3039 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   3040 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                    5168   3041 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   3042 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                    516B   3043 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   3044 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                    516A   3045 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   3046 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                    516D   3047 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   3048 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                    516C   3049 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   3050 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                    516F   3051 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   3052 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                    516E   3053 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   3054 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                    5171   3055 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   3056 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                    5170   3057 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   3058 G$AX5043_TXRATE0NB$0$0 == 0x5167
                    5167   3059 _AX5043_TXRATE0NB	=	0x5167
                    5166   3060 G$AX5043_TXRATE1NB$0$0 == 0x5166
                    5166   3061 _AX5043_TXRATE1NB	=	0x5166
                    5165   3062 G$AX5043_TXRATE2NB$0$0 == 0x5165
                    5165   3063 _AX5043_TXRATE2NB	=	0x5165
                    506B   3064 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                    506B   3065 _AX5043_WAKEUP0NB	=	0x506b
                    506A   3066 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                    506A   3067 _AX5043_WAKEUP1NB	=	0x506a
                    506D   3068 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                    506D   3069 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   3070 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                    506C   3071 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   3072 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                    5069   3073 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   3074 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                    5068   3075 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   3076 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                    506E   3077 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   3078 G$AX5043_XTALCAPNB$0$0 == 0x5184
                    5184   3079 _AX5043_XTALCAPNB	=	0x5184
                    501D   3080 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                    501D   3081 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   3082 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                    5122   3083 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   3084 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                    5132   3085 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   3086 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                    5142   3087 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   3088 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                    5152   3089 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   3090 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                    5120   3091 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   3092 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                    5130   3093 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   3094 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                    5140   3095 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   3096 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                    5150   3097 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   3098 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                    5123   3099 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   3100 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                    5133   3101 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   3102 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                    5143   3103 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   3104 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                    5153   3105 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   3106 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                    5121   3107 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   3108 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                    5131   3109 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   3110 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                    5141   3111 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   3112 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                    5151   3113 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   3114 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                    512B   3115 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   3116 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                    513B   3117 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   3118 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                    514B   3119 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   3120 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                    515B   3121 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   3122 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                    512F   3123 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   3124 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                    513F   3125 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   3126 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                    514F   3127 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   3128 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                    515F   3129 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   3130 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                    5125   3131 _AX5043_DRGAIN0NB	=	0x5125
                    5135   3132 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                    5135   3133 _AX5043_DRGAIN1NB	=	0x5135
                    5145   3134 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                    5145   3135 _AX5043_DRGAIN2NB	=	0x5145
                    5155   3136 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                    5155   3137 _AX5043_DRGAIN3NB	=	0x5155
                    512E   3138 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                    512E   3139 _AX5043_FOURFSK0NB	=	0x512e
                    513E   3140 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                    513E   3141 _AX5043_FOURFSK1NB	=	0x513e
                    514E   3142 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                    514E   3143 _AX5043_FOURFSK2NB	=	0x514e
                    515E   3144 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                    515E   3145 _AX5043_FOURFSK3NB	=	0x515e
                    512D   3146 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                    512D   3147 _AX5043_FREQDEV00NB	=	0x512d
                    513D   3148 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                    513D   3149 _AX5043_FREQDEV01NB	=	0x513d
                    514D   3150 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                    514D   3151 _AX5043_FREQDEV02NB	=	0x514d
                    515D   3152 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                    515D   3153 _AX5043_FREQDEV03NB	=	0x515d
                    512C   3154 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                    512C   3155 _AX5043_FREQDEV10NB	=	0x512c
                    513C   3156 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                    513C   3157 _AX5043_FREQDEV11NB	=	0x513c
                    514C   3158 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                    514C   3159 _AX5043_FREQDEV12NB	=	0x514c
                    515C   3160 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                    515C   3161 _AX5043_FREQDEV13NB	=	0x515c
                    5127   3162 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                    5127   3163 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   3164 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                    5137   3165 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   3166 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                    5147   3167 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   3168 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                    5157   3169 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   3170 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                    5128   3171 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   3172 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                    5138   3173 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   3174 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                    5148   3175 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   3176 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                    5158   3177 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   3178 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                    5129   3179 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   3180 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                    5139   3181 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   3182 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                    5149   3183 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   3184 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                    5159   3185 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   3186 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                    512A   3187 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   3188 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                    513A   3189 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   3190 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                    514A   3191 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   3192 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                    515A   3193 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   3194 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                    5116   3195 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   3196 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                    5126   3197 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   3198 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                    5136   3199 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   3200 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                    5146   3201 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   3202 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                    5156   3203 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   3204 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                    5207   3205 _AX5043_PKTADDR0NB	=	0x5207
                    5206   3206 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                    5206   3207 _AX5043_PKTADDR1NB	=	0x5206
                    5205   3208 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                    5205   3209 _AX5043_PKTADDR2NB	=	0x5205
                    5204   3210 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                    5204   3211 _AX5043_PKTADDR3NB	=	0x5204
                    5200   3212 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                    5200   3213 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   3214 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                    520B   3215 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   3216 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                    520A   3217 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   3218 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                    5209   3219 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   3220 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                    5208   3221 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   3222 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                    5201   3223 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   3224 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                    5202   3225 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   3226 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                    5203   3227 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   3228 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                    5118   3229 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   3230 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                    5117   3231 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   3232 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                    5124   3233 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   3234 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                    5134   3235 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   3236 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                    5144   3237 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   3238 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                    5154   3239 _AX5043_TIMEGAIN3NB	=	0x5154
                    4F00   3240 G$AX5043_0xF00$0$0 == 0x4f00
                    4F00   3241 _AX5043_0xF00	=	0x4f00
                    4F01   3242 G$AX5043_0xF01$0$0 == 0x4f01
                    4F01   3243 _AX5043_0xF01	=	0x4f01
                    4F0C   3244 G$AX5043_0xF0C$0$0 == 0x4f0c
                    4F0C   3245 _AX5043_0xF0C	=	0x4f0c
                    4F10   3246 G$AX5043_0xF10$0$0 == 0x4f10
                    4F10   3247 _AX5043_0xF10	=	0x4f10
                    4F11   3248 G$AX5043_0xF11$0$0 == 0x4f11
                    4F11   3249 _AX5043_0xF11	=	0x4f11
                    4F18   3250 G$AX5043_0xF18$0$0 == 0x4f18
                    4F18   3251 _AX5043_0xF18	=	0x4f18
                    4F1C   3252 G$AX5043_0xF1C$0$0 == 0x4f1c
                    4F1C   3253 _AX5043_0xF1C	=	0x4f1c
                    4F21   3254 G$AX5043_0xF21$0$0 == 0x4f21
                    4F21   3255 _AX5043_0xF21	=	0x4f21
                    4F22   3256 G$AX5043_0xF22$0$0 == 0x4f22
                    4F22   3257 _AX5043_0xF22	=	0x4f22
                    4F23   3258 G$AX5043_0xF23$0$0 == 0x4f23
                    4F23   3259 _AX5043_0xF23	=	0x4f23
                    4F26   3260 G$AX5043_0xF26$0$0 == 0x4f26
                    4F26   3261 _AX5043_0xF26	=	0x4f26
                    4F2F   3262 G$AX5043_0xF2F$0$0 == 0x4f2f
                    4F2F   3263 _AX5043_0xF2F	=	0x4f2f
                    4F30   3264 G$AX5043_0xF30$0$0 == 0x4f30
                    4F30   3265 _AX5043_0xF30	=	0x4f30
                    4F31   3266 G$AX5043_0xF31$0$0 == 0x4f31
                    4F31   3267 _AX5043_0xF31	=	0x4f31
                    4F32   3268 G$AX5043_0xF32$0$0 == 0x4f32
                    4F32   3269 _AX5043_0xF32	=	0x4f32
                    4F33   3270 G$AX5043_0xF33$0$0 == 0x4f33
                    4F33   3271 _AX5043_0xF33	=	0x4f33
                    4F34   3272 G$AX5043_0xF34$0$0 == 0x4f34
                    4F34   3273 _AX5043_0xF34	=	0x4f34
                    4F35   3274 G$AX5043_0xF35$0$0 == 0x4f35
                    4F35   3275 _AX5043_0xF35	=	0x4f35
                    4F44   3276 G$AX5043_0xF44$0$0 == 0x4f44
                    4F44   3277 _AX5043_0xF44	=	0x4f44
                    4F0D   3278 G$AX5043_REF$0$0 == 0x4f0d
                    4F0D   3279 _AX5043_REF	=	0x4f0d
                    4F08   3280 G$AX5043_POWCTRL1$0$0 == 0x4f08
                    4F08   3281 _AX5043_POWCTRL1	=	0x4f08
                    0000   3282 G$axradio_syncstate$0$0==.
   0004                    3283 _axradio_syncstate::
   0004                    3284 	.ds 1
                    0001   3285 G$axradio_txbuffer_len$0$0==.
   0005                    3286 _axradio_txbuffer_len::
   0005                    3287 	.ds 2
                    0003   3288 G$axradio_txbuffer_cnt$0$0==.
   0007                    3289 _axradio_txbuffer_cnt::
   0007                    3290 	.ds 2
                    0005   3291 G$axradio_curchannel$0$0==.
   0009                    3292 _axradio_curchannel::
   0009                    3293 	.ds 1
                    0006   3294 G$axradio_curfreqoffset$0$0==.
   000A                    3295 _axradio_curfreqoffset::
   000A                    3296 	.ds 4
                    000A   3297 G$axradio_ack_count$0$0==.
   000E                    3298 _axradio_ack_count::
   000E                    3299 	.ds 1
                    000B   3300 G$axradio_ack_seqnr$0$0==.
   000F                    3301 _axradio_ack_seqnr::
   000F                    3302 	.ds 1
                    000C   3303 G$axradio_sync_time$0$0==.
   0010                    3304 _axradio_sync_time::
   0010                    3305 	.ds 4
                    0010   3306 G$axradio_sync_periodcorr$0$0==.
   0014                    3307 _axradio_sync_periodcorr::
   0014                    3308 	.ds 2
                    0012   3309 G$axradio_timeanchor$0$0==.
   0016                    3310 _axradio_timeanchor::
   0016                    3311 	.ds 8
                    001A   3312 G$axradio_localaddr$0$0==.
   001E                    3313 _axradio_localaddr::
   001E                    3314 	.ds 8
                    0022   3315 G$axradio_default_remoteaddr$0$0==.
   0026                    3316 _axradio_default_remoteaddr::
   0026                    3317 	.ds 4
                    0026   3318 G$axradio_txbuffer$0$0==.
   002A                    3319 _axradio_txbuffer::
   002A                    3320 	.ds 260
                    012A   3321 G$axradio_rxbuffer$0$0==.
   012E                    3322 _axradio_rxbuffer::
   012E                    3323 	.ds 260
                    022E   3324 G$axradio_cb_receive$0$0==.
   0232                    3325 _axradio_cb_receive::
   0232                    3326 	.ds 34
                    0250   3327 G$axradio_cb_receivesfd$0$0==.
   0254                    3328 _axradio_cb_receivesfd::
   0254                    3329 	.ds 10
                    025A   3330 G$axradio_cb_channelstate$0$0==.
   025E                    3331 _axradio_cb_channelstate::
   025E                    3332 	.ds 13
                    0267   3333 G$axradio_cb_transmitstart$0$0==.
   026B                    3334 _axradio_cb_transmitstart::
   026B                    3335 	.ds 10
                    0271   3336 G$axradio_cb_transmitend$0$0==.
   0275                    3337 _axradio_cb_transmitend::
   0275                    3338 	.ds 10
                    027B   3339 G$axradio_cb_transmitdata$0$0==.
   027F                    3340 _axradio_cb_transmitdata::
   027F                    3341 	.ds 10
                    0285   3342 G$axradio_timer$0$0==.
   0289                    3343 _axradio_timer::
   0289                    3344 	.ds 8
                           3345 ;--------------------------------------------------------
                           3346 ; absolute external ram data
                           3347 ;--------------------------------------------------------
                           3348 	.area XABS    (ABS,XDATA)
                           3349 ;--------------------------------------------------------
                           3350 ; external initialized ram data
                           3351 ;--------------------------------------------------------
                           3352 	.area XISEG   (XDATA)
                    0000   3353 G$f30_saved$0$0==.
   0433                    3354 _f30_saved::
   0433                    3355 	.ds 1
                    0001   3356 G$f31_saved$0$0==.
   0434                    3357 _f31_saved::
   0434                    3358 	.ds 1
                    0002   3359 G$f32_saved$0$0==.
   0435                    3360 _f32_saved::
   0435                    3361 	.ds 1
                    0003   3362 G$f33_saved$0$0==.
   0436                    3363 _f33_saved::
   0436                    3364 	.ds 1
                           3365 	.area HOME    (CODE)
                           3366 	.area GSINIT0 (CODE)
                           3367 	.area GSINIT1 (CODE)
                           3368 	.area GSINIT2 (CODE)
                           3369 	.area GSINIT3 (CODE)
                           3370 	.area GSINIT4 (CODE)
                           3371 	.area GSINIT5 (CODE)
                           3372 	.area GSINIT  (CODE)
                           3373 	.area GSFINAL (CODE)
                           3374 	.area CSEG    (CODE)
                           3375 ;--------------------------------------------------------
                           3376 ; global & static initialisations
                           3377 ;--------------------------------------------------------
                           3378 	.area HOME    (CODE)
                           3379 	.area GSINIT  (CODE)
                           3380 	.area GSFINAL (CODE)
                           3381 	.area GSINIT  (CODE)
                    0000   3382 	C$easyax5043.c$55$1$411 ==.
                           3383 ;	..\COMMON\easyax5043.c:55: volatile uint8_t __data axradio_mode = AXRADIO_MODE_UNINIT;
   012C 75 0A 00           3384 	mov	_axradio_mode,#0x00
                    0003   3385 	C$easyax5043.c$56$1$411 ==.
                           3386 ;	..\COMMON\easyax5043.c:56: volatile axradio_trxstate_t __data axradio_trxstate = trxstate_off;
   012F 75 0B 00           3387 	mov	_axradio_trxstate,#0x00
                           3388 ;--------------------------------------------------------
                           3389 ; Home
                           3390 ;--------------------------------------------------------
                           3391 	.area HOME    (CODE)
                           3392 	.area HOME    (CODE)
                           3393 ;--------------------------------------------------------
                           3394 ; code
                           3395 ;--------------------------------------------------------
                           3396 	.area CSEG    (CODE)
                           3397 ;------------------------------------------------------------
                           3398 ;Allocation info for local variables in function 'update_timeanchor'
                           3399 ;------------------------------------------------------------
                           3400 ;iesave                    Allocated to registers r7 
                           3401 ;------------------------------------------------------------
                    0000   3402 	Feasyax5043$update_timeanchor$0$0 ==.
                    0000   3403 	C$easyax5043.c$234$0$0 ==.
                           3404 ;	..\COMMON\easyax5043.c:234: static __reentrantb void update_timeanchor(void) __reentrant
                           3405 ;	-----------------------------------------
                           3406 ;	 function update_timeanchor
                           3407 ;	-----------------------------------------
   084A                    3408 _update_timeanchor:
                    0007   3409 	ar7 = 0x07
                    0006   3410 	ar6 = 0x06
                    0005   3411 	ar5 = 0x05
                    0004   3412 	ar4 = 0x04
                    0003   3413 	ar3 = 0x03
                    0002   3414 	ar2 = 0x02
                    0001   3415 	ar1 = 0x01
                    0000   3416 	ar0 = 0x00
                    0000   3417 	C$easyax5043.c$236$1$203 ==.
                           3418 ;	..\COMMON\easyax5043.c:236: uint8_t iesave = IE & 0x80;
   084A 74 80              3419 	mov	a,#0x80
   084C 55 A8              3420 	anl	a,_IE
   084E FF                 3421 	mov	r7,a
                    0005   3422 	C$easyax5043.c$237$1$203 ==.
                           3423 ;	..\COMMON\easyax5043.c:237: EA = 0;
   084F C2 AF              3424 	clr	_EA
                    0007   3425 	C$easyax5043.c$238$1$203 ==.
                           3426 ;	..\COMMON\easyax5043.c:238: axradio_timeanchor.timer0 = wtimer0_curtime();
   0851 C0 07              3427 	push	ar7
   0853 12 54 61           3428 	lcall	_wtimer0_curtime
   0856 AB 82              3429 	mov	r3,dpl
   0858 AC 83              3430 	mov	r4,dph
   085A AD F0              3431 	mov	r5,b
   085C FE                 3432 	mov	r6,a
   085D D0 07              3433 	pop	ar7
   085F 90 00 16           3434 	mov	dptr,#_axradio_timeanchor
   0862 EB                 3435 	mov	a,r3
   0863 F0                 3436 	movx	@dptr,a
   0864 A3                 3437 	inc	dptr
   0865 EC                 3438 	mov	a,r4
   0866 F0                 3439 	movx	@dptr,a
   0867 A3                 3440 	inc	dptr
   0868 ED                 3441 	mov	a,r5
   0869 F0                 3442 	movx	@dptr,a
   086A A3                 3443 	inc	dptr
   086B EE                 3444 	mov	a,r6
   086C F0                 3445 	movx	@dptr,a
                    0023   3446 	C$easyax5043.c$239$1$203 ==.
                           3447 ;	..\COMMON\easyax5043.c:239: axradio_timeanchor.radiotimer = radio_read24((uint16_t)&AX5043_TIMER2);
   086D 90 40 59           3448 	mov	dptr,#_AX5043_TIMER2
   0870 12 45 A1           3449 	lcall	_radio_read24
   0873 AB 82              3450 	mov	r3,dpl
   0875 AC 83              3451 	mov	r4,dph
   0877 AD F0              3452 	mov	r5,b
   0879 FE                 3453 	mov	r6,a
   087A 90 00 1A           3454 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   087D EB                 3455 	mov	a,r3
   087E F0                 3456 	movx	@dptr,a
   087F A3                 3457 	inc	dptr
   0880 EC                 3458 	mov	a,r4
   0881 F0                 3459 	movx	@dptr,a
   0882 A3                 3460 	inc	dptr
   0883 ED                 3461 	mov	a,r5
   0884 F0                 3462 	movx	@dptr,a
   0885 A3                 3463 	inc	dptr
   0886 EE                 3464 	mov	a,r6
   0887 F0                 3465 	movx	@dptr,a
                    003E   3466 	C$easyax5043.c$240$1$203 ==.
                           3467 ;	..\COMMON\easyax5043.c:240: IE |= iesave;
   0888 EF                 3468 	mov	a,r7
   0889 42 A8              3469 	orl	_IE,a
                    0041   3470 	C$easyax5043.c$241$1$203 ==.
                    0041   3471 	XFeasyax5043$update_timeanchor$0$0 ==.
   088B 22                 3472 	ret
                           3473 ;------------------------------------------------------------
                           3474 ;Allocation info for local variables in function 'axradio_conv_time_totimer0'
                           3475 ;------------------------------------------------------------
                           3476 ;dt                        Allocated to registers r4 r5 r6 r7 
                           3477 ;------------------------------------------------------------
                    0042   3478 	G$axradio_conv_time_totimer0$0$0 ==.
                    0042   3479 	C$easyax5043.c$243$1$203 ==.
                           3480 ;	..\COMMON\easyax5043.c:243: __reentrantb uint32_t axradio_conv_time_totimer0(uint32_t dt) __reentrant
                           3481 ;	-----------------------------------------
                           3482 ;	 function axradio_conv_time_totimer0
                           3483 ;	-----------------------------------------
   088C                    3484 _axradio_conv_time_totimer0:
   088C AC 82              3485 	mov	r4,dpl
   088E AD 83              3486 	mov	r5,dph
   0890 AE F0              3487 	mov	r6,b
   0892 FF                 3488 	mov	r7,a
                    0049   3489 	C$easyax5043.c$245$1$205 ==.
                           3490 ;	..\COMMON\easyax5043.c:245: dt -= axradio_timeanchor.radiotimer;
   0893 90 00 1A           3491 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0896 E0                 3492 	movx	a,@dptr
   0897 F8                 3493 	mov	r0,a
   0898 A3                 3494 	inc	dptr
   0899 E0                 3495 	movx	a,@dptr
   089A F9                 3496 	mov	r1,a
   089B A3                 3497 	inc	dptr
   089C E0                 3498 	movx	a,@dptr
   089D FA                 3499 	mov	r2,a
   089E A3                 3500 	inc	dptr
   089F E0                 3501 	movx	a,@dptr
   08A0 FB                 3502 	mov	r3,a
   08A1 EC                 3503 	mov	a,r4
   08A2 C3                 3504 	clr	c
   08A3 98                 3505 	subb	a,r0
   08A4 FC                 3506 	mov	r4,a
   08A5 ED                 3507 	mov	a,r5
   08A6 99                 3508 	subb	a,r1
   08A7 FD                 3509 	mov	r5,a
   08A8 EE                 3510 	mov	a,r6
   08A9 9A                 3511 	subb	a,r2
   08AA FE                 3512 	mov	r6,a
   08AB EF                 3513 	mov	a,r7
   08AC 9B                 3514 	subb	a,r3
                    0063   3515 	C$easyax5043.c$246$1$205 ==.
                           3516 ;	..\COMMON\easyax5043.c:246: dt = axradio_conv_timeinterval_totimer0(signextend24(dt));
   08AD 8C 82              3517 	mov	dpl,r4
   08AF 8D 83              3518 	mov	dph,r5
   08B1 8E F0              3519 	mov	b,r6
   08B3 12 54 5B           3520 	lcall	_signextend24
   08B6 12 05 6E           3521 	lcall	_axradio_conv_timeinterval_totimer0
   08B9 AC 82              3522 	mov	r4,dpl
   08BB AD 83              3523 	mov	r5,dph
   08BD AE F0              3524 	mov	r6,b
   08BF FF                 3525 	mov	r7,a
                    0076   3526 	C$easyax5043.c$247$1$205 ==.
                           3527 ;	..\COMMON\easyax5043.c:247: dt += axradio_timeanchor.timer0;
   08C0 90 00 16           3528 	mov	dptr,#_axradio_timeanchor
   08C3 E0                 3529 	movx	a,@dptr
   08C4 F8                 3530 	mov	r0,a
   08C5 A3                 3531 	inc	dptr
   08C6 E0                 3532 	movx	a,@dptr
   08C7 F9                 3533 	mov	r1,a
   08C8 A3                 3534 	inc	dptr
   08C9 E0                 3535 	movx	a,@dptr
   08CA FA                 3536 	mov	r2,a
   08CB A3                 3537 	inc	dptr
   08CC E0                 3538 	movx	a,@dptr
   08CD FB                 3539 	mov	r3,a
   08CE E8                 3540 	mov	a,r0
   08CF 2C                 3541 	add	a,r4
   08D0 FC                 3542 	mov	r4,a
   08D1 E9                 3543 	mov	a,r1
   08D2 3D                 3544 	addc	a,r5
   08D3 FD                 3545 	mov	r5,a
   08D4 EA                 3546 	mov	a,r2
   08D5 3E                 3547 	addc	a,r6
   08D6 FE                 3548 	mov	r6,a
   08D7 EB                 3549 	mov	a,r3
   08D8 3F                 3550 	addc	a,r7
                    008F   3551 	C$easyax5043.c$248$1$205 ==.
                           3552 ;	..\COMMON\easyax5043.c:248: return dt;
   08D9 8C 82              3553 	mov	dpl,r4
   08DB 8D 83              3554 	mov	dph,r5
   08DD 8E F0              3555 	mov	b,r6
                    0095   3556 	C$easyax5043.c$249$1$205 ==.
                    0095   3557 	XG$axradio_conv_time_totimer0$0$0 ==.
   08DF 22                 3558 	ret
                           3559 ;------------------------------------------------------------
                           3560 ;Allocation info for local variables in function 'ax5043_init_registers_tx'
                           3561 ;------------------------------------------------------------
                           3562 ;rng                       Allocated to registers r7 
                           3563 ;------------------------------------------------------------
                    0096   3564 	G$ax5043_init_registers_tx$0$0 ==.
                    0096   3565 	C$easyax5043.c$251$1$205 ==.
                           3566 ;	..\COMMON\easyax5043.c:251: __reentrantb uint8_t ax5043_init_registers_tx(void) __reentrant
                           3567 ;	-----------------------------------------
                           3568 ;	 function ax5043_init_registers_tx
                           3569 ;	-----------------------------------------
   08E0                    3570 _ax5043_init_registers_tx:
                    0096   3571 	C$easyax5043.c$254$1$207 ==.
                           3572 ;	..\COMMON\easyax5043.c:254: ax5043_set_registers_tx();
   08E0 12 04 26           3573 	lcall	_ax5043_set_registers_tx
                    0099   3574 	C$easyax5043.c$255$1$207 ==.
                           3575 ;	..\COMMON\easyax5043.c:255: rng = axradio_phy_chanpllrng_tx[axradio_curchannel];
   08E3 90 00 09           3576 	mov	dptr,#_axradio_curchannel
   08E6 E0                 3577 	movx	a,@dptr
   08E7 24 01              3578 	add	a,#_axradio_phy_chanpllrng_tx
   08E9 F5 82              3579 	mov	dpl,a
   08EB E4                 3580 	clr	a
   08EC 34 00              3581 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   08EE F5 83              3582 	mov	dph,a
   08F0 E0                 3583 	movx	a,@dptr
                    00A7   3584 	C$easyax5043.c$256$1$207 ==.
                           3585 ;	..\COMMON\easyax5043.c:256: if (rng & 0x20)
   08F1 FF                 3586 	mov	r7,a
   08F2 30 E5 05           3587 	jnb	acc.5,00102$
                    00AB   3588 	C$easyax5043.c$257$1$207 ==.
                           3589 ;	..\COMMON\easyax5043.c:257: return AXRADIO_ERR_RANGING;
   08F5 75 82 06           3590 	mov	dpl,#0x06
   08F8 80 1B              3591 	sjmp	00106$
   08FA                    3592 00102$:
                    00B0   3593 	C$easyax5043.c$258$1$207 ==.
                           3594 ;	..\COMMON\easyax5043.c:258: if (AX5043_PLLLOOP & 0x80) {
   08FA 90 40 30           3595 	mov	dptr,#_AX5043_PLLLOOP
   08FD E0                 3596 	movx	a,@dptr
   08FE FE                 3597 	mov	r6,a
   08FF 30 E7 09           3598 	jnb	acc.7,00104$
                    00B8   3599 	C$easyax5043.c$259$2$208 ==.
                           3600 ;	..\COMMON\easyax5043.c:259: AX5043_PLLRANGINGB = rng & 0x0F;
   0902 90 40 3B           3601 	mov	dptr,#_AX5043_PLLRANGINGB
   0905 74 0F              3602 	mov	a,#0x0F
   0907 5F                 3603 	anl	a,r7
   0908 F0                 3604 	movx	@dptr,a
   0909 80 07              3605 	sjmp	00105$
   090B                    3606 00104$:
                    00C1   3607 	C$easyax5043.c$261$2$209 ==.
                           3608 ;	..\COMMON\easyax5043.c:261: AX5043_PLLRANGINGA = rng & 0x0F;
   090B 90 40 33           3609 	mov	dptr,#_AX5043_PLLRANGINGA
   090E 74 0F              3610 	mov	a,#0x0F
   0910 5F                 3611 	anl	a,r7
   0911 F0                 3612 	movx	@dptr,a
   0912                    3613 00105$:
                    00C8   3614 	C$easyax5043.c$263$1$207 ==.
                           3615 ;	..\COMMON\easyax5043.c:263: return AXRADIO_ERR_NOERROR;
   0912 75 82 00           3616 	mov	dpl,#0x00
   0915                    3617 00106$:
                    00CB   3618 	C$easyax5043.c$264$1$207 ==.
                    00CB   3619 	XG$ax5043_init_registers_tx$0$0 ==.
   0915 22                 3620 	ret
                           3621 ;------------------------------------------------------------
                           3622 ;Allocation info for local variables in function 'ax5043_init_registers_rx'
                           3623 ;------------------------------------------------------------
                           3624 ;rng                       Allocated to registers r7 
                           3625 ;------------------------------------------------------------
                    00CC   3626 	G$ax5043_init_registers_rx$0$0 ==.
                    00CC   3627 	C$easyax5043.c$266$1$207 ==.
                           3628 ;	..\COMMON\easyax5043.c:266: __reentrantb uint8_t ax5043_init_registers_rx(void) __reentrant
                           3629 ;	-----------------------------------------
                           3630 ;	 function ax5043_init_registers_rx
                           3631 ;	-----------------------------------------
   0916                    3632 _ax5043_init_registers_rx:
                    00CC   3633 	C$easyax5043.c$269$1$211 ==.
                           3634 ;	..\COMMON\easyax5043.c:269: ax5043_set_registers_rx();
   0916 12 04 56           3635 	lcall	_ax5043_set_registers_rx
                    00CF   3636 	C$easyax5043.c$270$1$211 ==.
                           3637 ;	..\COMMON\easyax5043.c:270: rng = axradio_phy_chanpllrng_rx[axradio_curchannel];
   0919 90 00 09           3638 	mov	dptr,#_axradio_curchannel
   091C E0                 3639 	movx	a,@dptr
   091D 24 00              3640 	add	a,#_axradio_phy_chanpllrng_rx
   091F F5 82              3641 	mov	dpl,a
   0921 E4                 3642 	clr	a
   0922 34 00              3643 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   0924 F5 83              3644 	mov	dph,a
   0926 E0                 3645 	movx	a,@dptr
                    00DD   3646 	C$easyax5043.c$271$1$211 ==.
                           3647 ;	..\COMMON\easyax5043.c:271: if (rng & 0x20)
   0927 FF                 3648 	mov	r7,a
   0928 30 E5 05           3649 	jnb	acc.5,00102$
                    00E1   3650 	C$easyax5043.c$272$1$211 ==.
                           3651 ;	..\COMMON\easyax5043.c:272: return AXRADIO_ERR_RANGING;
   092B 75 82 06           3652 	mov	dpl,#0x06
   092E 80 1B              3653 	sjmp	00106$
   0930                    3654 00102$:
                    00E6   3655 	C$easyax5043.c$273$1$211 ==.
                           3656 ;	..\COMMON\easyax5043.c:273: if (AX5043_PLLLOOP & 0x80) {
   0930 90 40 30           3657 	mov	dptr,#_AX5043_PLLLOOP
   0933 E0                 3658 	movx	a,@dptr
   0934 FE                 3659 	mov	r6,a
   0935 30 E7 09           3660 	jnb	acc.7,00104$
                    00EE   3661 	C$easyax5043.c$274$2$212 ==.
                           3662 ;	..\COMMON\easyax5043.c:274: AX5043_PLLRANGINGB = rng & 0x0F;
   0938 90 40 3B           3663 	mov	dptr,#_AX5043_PLLRANGINGB
   093B 74 0F              3664 	mov	a,#0x0F
   093D 5F                 3665 	anl	a,r7
   093E F0                 3666 	movx	@dptr,a
   093F 80 07              3667 	sjmp	00105$
   0941                    3668 00104$:
                    00F7   3669 	C$easyax5043.c$276$2$213 ==.
                           3670 ;	..\COMMON\easyax5043.c:276: AX5043_PLLRANGINGA = rng & 0x0F;
   0941 90 40 33           3671 	mov	dptr,#_AX5043_PLLRANGINGA
   0944 74 0F              3672 	mov	a,#0x0F
   0946 5F                 3673 	anl	a,r7
   0947 F0                 3674 	movx	@dptr,a
   0948                    3675 00105$:
                    00FE   3676 	C$easyax5043.c$278$1$211 ==.
                           3677 ;	..\COMMON\easyax5043.c:278: return AXRADIO_ERR_NOERROR;
   0948 75 82 00           3678 	mov	dpl,#0x00
   094B                    3679 00106$:
                    0101   3680 	C$easyax5043.c$279$1$211 ==.
                    0101   3681 	XG$ax5043_init_registers_rx$0$0 ==.
   094B 22                 3682 	ret
                           3683 ;------------------------------------------------------------
                           3684 ;Allocation info for local variables in function 'receive_isr'
                           3685 ;------------------------------------------------------------
                           3686 ;fifo_cmd                  Allocated to registers r6 
                           3687 ;flags                     Allocated to registers 
                           3688 ;i                         Allocated to registers r6 
                           3689 ;len                       Allocated to registers r7 
                           3690 ;r                         Allocated to registers r6 
                           3691 ;r                         Allocated to registers r6 
                           3692 ;r                         Allocated to registers r6 
                           3693 ;------------------------------------------------------------
                    0102   3694 	Feasyax5043$receive_isr$0$0 ==.
                    0102   3695 	C$easyax5043.c$281$1$211 ==.
                           3696 ;	..\COMMON\easyax5043.c:281: static __reentrantb void receive_isr(void) __reentrant
                           3697 ;	-----------------------------------------
                           3698 ;	 function receive_isr
                           3699 ;	-----------------------------------------
   094C                    3700 _receive_isr:
                    0102   3701 	C$easyax5043.c$285$1$211 ==.
                           3702 ;	..\COMMON\easyax5043.c:285: uint8_t len = AX5043_RADIOEVENTREQ0; // clear request so interrupt does not fire again. sync_rx enables interrupt on radio state changed in order to wake up on SDF detected
   094C 90 40 0F           3703 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   094F E0                 3704 	movx	a,@dptr
                    0106   3705 	C$easyax5043.c$287$1$215 ==.
                           3706 ;	..\COMMON\easyax5043.c:287: if ((len & 0x04) && AX5043_RADIOSTATE == 0x0F) {
   0950 FF                 3707 	mov	r7,a
   0951 30 E2 40           3708 	jnb	acc.2,00162$
   0954 90 40 1C           3709 	mov	dptr,#_AX5043_RADIOSTATE
   0957 E0                 3710 	movx	a,@dptr
   0958 FE                 3711 	mov	r6,a
   0959 BE 0F 38           3712 	cjne	r6,#0x0F,00162$
                    0112   3713 	C$easyax5043.c$289$2$216 ==.
                           3714 ;	..\COMMON\easyax5043.c:289: update_timeanchor();
   095C 12 08 4A           3715 	lcall	_update_timeanchor
                    0115   3716 	C$easyax5043.c$290$2$216 ==.
                           3717 ;	..\COMMON\easyax5043.c:290: if(axradio_framing_enable_sfdcallback)
   095F 90 56 3C           3718 	mov	dptr,#_axradio_framing_enable_sfdcallback
   0962 E4                 3719 	clr	a
   0963 93                 3720 	movc	a,@a+dptr
   0964 FE                 3721 	mov	r6,a
   0965 60 2D              3722 	jz	00162$
                    011D   3723 	C$easyax5043.c$292$3$217 ==.
                           3724 ;	..\COMMON\easyax5043.c:292: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   0967 90 02 54           3725 	mov	dptr,#_axradio_cb_receivesfd
   096A 12 50 73           3726 	lcall	_wtimer_remove_callback
                    0123   3727 	C$easyax5043.c$293$3$217 ==.
                           3728 ;	..\COMMON\easyax5043.c:293: axradio_cb_receivesfd.st.error = AXRADIO_ERR_NOERROR;
   096D 90 02 59           3729 	mov	dptr,#(_axradio_cb_receivesfd + 0x0005)
   0970 E4                 3730 	clr	a
   0971 F0                 3731 	movx	@dptr,a
                    0128   3732 	C$easyax5043.c$294$3$217 ==.
                           3733 ;	..\COMMON\easyax5043.c:294: axradio_cb_receivesfd.st.time.t = axradio_timeanchor.radiotimer;
   0972 90 00 1A           3734 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0975 E0                 3735 	movx	a,@dptr
   0976 FB                 3736 	mov	r3,a
   0977 A3                 3737 	inc	dptr
   0978 E0                 3738 	movx	a,@dptr
   0979 FC                 3739 	mov	r4,a
   097A A3                 3740 	inc	dptr
   097B E0                 3741 	movx	a,@dptr
   097C FD                 3742 	mov	r5,a
   097D A3                 3743 	inc	dptr
   097E E0                 3744 	movx	a,@dptr
   097F FE                 3745 	mov	r6,a
   0980 90 02 5A           3746 	mov	dptr,#(_axradio_cb_receivesfd + 0x0006)
   0983 EB                 3747 	mov	a,r3
   0984 F0                 3748 	movx	@dptr,a
   0985 A3                 3749 	inc	dptr
   0986 EC                 3750 	mov	a,r4
   0987 F0                 3751 	movx	@dptr,a
   0988 A3                 3752 	inc	dptr
   0989 ED                 3753 	mov	a,r5
   098A F0                 3754 	movx	@dptr,a
   098B A3                 3755 	inc	dptr
   098C EE                 3756 	mov	a,r6
   098D F0                 3757 	movx	@dptr,a
                    0144   3758 	C$easyax5043.c$295$3$217 ==.
                           3759 ;	..\COMMON\easyax5043.c:295: wtimer_add_callback(&axradio_cb_receivesfd.cb);
   098E 90 02 54           3760 	mov	dptr,#_axradio_cb_receivesfd
   0991 12 44 48           3761 	lcall	_wtimer_add_callback
                    014A   3762 	C$easyax5043.c$307$1$215 ==.
                           3763 ;	..\COMMON\easyax5043.c:307: while (AX5043_IRQREQUEST0 & 0x01) {    // while fifo not empty
   0994                    3764 00162$:
   0994                    3765 00147$:
   0994 90 40 0D           3766 	mov	dptr,#_AX5043_IRQREQUEST0
   0997 E0                 3767 	movx	a,@dptr
   0998 FE                 3768 	mov	r6,a
   0999 20 E0 03           3769 	jb	acc.0,00207$
   099C 02 0C 2C           3770 	ljmp	00150$
   099F                    3771 00207$:
                    0155   3772 	C$easyax5043.c$308$2$218 ==.
                           3773 ;	..\COMMON\easyax5043.c:308: fifo_cmd = AX5043_FIFODATA; // read command
   099F 90 40 29           3774 	mov	dptr,#_AX5043_FIFODATA
   09A2 E0                 3775 	movx	a,@dptr
   09A3 FE                 3776 	mov	r6,a
                    015A   3777 	C$easyax5043.c$309$2$218 ==.
                           3778 ;	..\COMMON\easyax5043.c:309: len = (fifo_cmd & 0xE0) >> 5; // top 3 bits encode payload len
   09A4 74 E0              3779 	mov	a,#0xE0
   09A6 5E                 3780 	anl	a,r6
   09A7 FD                 3781 	mov	r5,a
   09A8 C4                 3782 	swap	a
   09A9 03                 3783 	rr	a
   09AA 54 07              3784 	anl	a,#0x07
   09AC FF                 3785 	mov	r7,a
                    0163   3786 	C$easyax5043.c$310$2$218 ==.
                           3787 ;	..\COMMON\easyax5043.c:310: if (len == 7)
   09AD BF 07 06           3788 	cjne	r7,#0x07,00107$
                    0166   3789 	C$easyax5043.c$311$2$218 ==.
                           3790 ;	..\COMMON\easyax5043.c:311: len = AX5043_FIFODATA; // 7 means variable length, -> get length byte
   09B0 90 40 29           3791 	mov	dptr,#_AX5043_FIFODATA
   09B3 E0                 3792 	movx	a,@dptr
   09B4 FD                 3793 	mov	r5,a
   09B5 FF                 3794 	mov	r7,a
   09B6                    3795 00107$:
                    016C   3796 	C$easyax5043.c$312$2$218 ==.
                           3797 ;	..\COMMON\easyax5043.c:312: fifo_cmd &= 0x1F;
   09B6 53 06 1F           3798 	anl	ar6,#0x1F
                    016F   3799 	C$easyax5043.c$313$2$218 ==.
                           3800 ;	..\COMMON\easyax5043.c:313: switch (fifo_cmd) {
   09B9 BE 01 02           3801 	cjne	r6,#0x01,00210$
   09BC 80 1B              3802 	sjmp	00108$
   09BE                    3803 00210$:
   09BE BE 10 03           3804 	cjne	r6,#0x10,00211$
   09C1 02 0B 7E           3805 	ljmp	00133$
   09C4                    3806 00211$:
   09C4 BE 11 03           3807 	cjne	r6,#0x11,00212$
   09C7 02 0B 51           3808 	ljmp	00130$
   09CA                    3809 00212$:
   09CA BE 13 03           3810 	cjne	r6,#0x13,00213$
   09CD 02 0B 14           3811 	ljmp	00127$
   09D0                    3812 00213$:
   09D0 BE 15 03           3813 	cjne	r6,#0x15,00214$
   09D3 02 0B A7           3814 	ljmp	00136$
   09D6                    3815 00214$:
   09D6 02 0C 1D           3816 	ljmp	00140$
                    018F   3817 	C$easyax5043.c$314$3$219 ==.
                           3818 ;	..\COMMON\easyax5043.c:314: case AX5043_FIFOCMD_DATA:
   09D9                    3819 00108$:
                    018F   3820 	C$easyax5043.c$315$3$219 ==.
                           3821 ;	..\COMMON\easyax5043.c:315: if (!len)
   09D9 EF                 3822 	mov	a,r7
   09DA 60 B8              3823 	jz	00147$
                    0192   3824 	C$easyax5043.c$323$3$219 ==.
                           3825 ;	..\COMMON\easyax5043.c:323: flags = AX5043_FIFODATA;
   09DC 90 40 29           3826 	mov	dptr,#_AX5043_FIFODATA
   09DF E0                 3827 	movx	a,@dptr
                    0196   3828 	C$easyax5043.c$324$3$219 ==.
                           3829 ;	..\COMMON\easyax5043.c:324: --len;
   09E0 1F                 3830 	dec	r7
                    0197   3831 	C$easyax5043.c$325$3$219 ==.
                           3832 ;	..\COMMON\easyax5043.c:325: ax5043_readfifo(axradio_rxbuffer, len);
   09E1 C0 07              3833 	push	ar7
   09E3 C0 07              3834 	push	ar7
   09E5 90 01 2E           3835 	mov	dptr,#_axradio_rxbuffer
   09E8 75 F0 00           3836 	mov	b,#0x00
   09EB 12 4D 04           3837 	lcall	_ax5043_readfifo
   09EE 15 81              3838 	dec	sp
   09F0 D0 07              3839 	pop	ar7
                    01A8   3840 	C$easyax5043.c$326$3$219 ==.
                           3841 ;	..\COMMON\easyax5043.c:326: if(axradio_mode == AXRADIO_MODE_WOR_RECEIVE || axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   09F2 74 19              3842 	mov	a,#0x19
   09F4 B5 0A 02           3843 	cjne	a,_axradio_mode,00216$
   09F7 80 05              3844 	sjmp	00111$
   09F9                    3845 00216$:
   09F9 74 1B              3846 	mov	a,#0x1B
   09FB B5 0A 21           3847 	cjne	a,_axradio_mode,00112$
   09FE                    3848 00111$:
                    01B4   3849 	C$easyax5043.c$328$4$220 ==.
                           3850 ;	..\COMMON\easyax5043.c:328: f30_saved = AX5043_0xF30;
   09FE 90 4F 30           3851 	mov	dptr,#_AX5043_0xF30
   0A01 E0                 3852 	movx	a,@dptr
   0A02 90 04 33           3853 	mov	dptr,#_f30_saved
   0A05 F0                 3854 	movx	@dptr,a
                    01BC   3855 	C$easyax5043.c$329$4$220 ==.
                           3856 ;	..\COMMON\easyax5043.c:329: f31_saved = AX5043_0xF31;
   0A06 90 4F 31           3857 	mov	dptr,#_AX5043_0xF31
   0A09 E0                 3858 	movx	a,@dptr
   0A0A 90 04 34           3859 	mov	dptr,#_f31_saved
   0A0D F0                 3860 	movx	@dptr,a
                    01C4   3861 	C$easyax5043.c$330$4$220 ==.
                           3862 ;	..\COMMON\easyax5043.c:330: f32_saved = AX5043_0xF32;
   0A0E 90 4F 32           3863 	mov	dptr,#_AX5043_0xF32
   0A11 E0                 3864 	movx	a,@dptr
   0A12 90 04 35           3865 	mov	dptr,#_f32_saved
   0A15 F0                 3866 	movx	@dptr,a
                    01CC   3867 	C$easyax5043.c$331$4$220 ==.
                           3868 ;	..\COMMON\easyax5043.c:331: f33_saved = AX5043_0xF33;
   0A16 90 4F 33           3869 	mov	dptr,#_AX5043_0xF33
   0A19 E0                 3870 	movx	a,@dptr
   0A1A FE                 3871 	mov	r6,a
   0A1B 90 04 36           3872 	mov	dptr,#_f33_saved
   0A1E F0                 3873 	movx	@dptr,a
   0A1F                    3874 00112$:
                    01D5   3875 	C$easyax5043.c$333$3$219 ==.
                           3876 ;	..\COMMON\easyax5043.c:333: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE ||
   0A1F 74 19              3877 	mov	a,#0x19
   0A21 B5 0A 02           3878 	cjne	a,_axradio_mode,00219$
   0A24 80 05              3879 	sjmp	00114$
   0A26                    3880 00219$:
                    01DC   3881 	C$easyax5043.c$334$3$219 ==.
                           3882 ;	..\COMMON\easyax5043.c:334: axradio_mode == AXRADIO_MODE_SYNC_SLAVE)
   0A26 74 22              3883 	mov	a,#0x22
   0A28 B5 0A 05           3884 	cjne	a,_axradio_mode,00115$
   0A2B                    3885 00114$:
                    01E1   3886 	C$easyax5043.c$335$3$219 ==.
                           3887 ;	..\COMMON\easyax5043.c:335: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   0A2B 90 40 02           3888 	mov	dptr,#_AX5043_PWRMODE
   0A2E E4                 3889 	clr	a
   0A2F F0                 3890 	movx	@dptr,a
   0A30                    3891 00115$:
                    01E6   3892 	C$easyax5043.c$336$3$219 ==.
                           3893 ;	..\COMMON\easyax5043.c:336: AX5043_IRQMASK0 &= (uint8_t)~0x01; // disable FIFO not empty irq
   0A30 90 40 07           3894 	mov	dptr,#_AX5043_IRQMASK0
   0A33 E0                 3895 	movx	a,@dptr
   0A34 54 FE              3896 	anl	a,#0xFE
   0A36 F0                 3897 	movx	@dptr,a
                    01ED   3898 	C$easyax5043.c$337$3$219 ==.
                           3899 ;	..\COMMON\easyax5043.c:337: wtimer_remove_callback(&axradio_cb_receive.cb);
   0A37 90 02 32           3900 	mov	dptr,#_axradio_cb_receive
   0A3A C0 07              3901 	push	ar7
   0A3C 12 50 73           3902 	lcall	_wtimer_remove_callback
   0A3F D0 07              3903 	pop	ar7
                    01F7   3904 	C$easyax5043.c$338$3$219 ==.
                           3905 ;	..\COMMON\easyax5043.c:338: axradio_cb_receive.st.error = AXRADIO_ERR_NOERROR;
   0A41 90 02 37           3906 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   0A44 E4                 3907 	clr	a
   0A45 F0                 3908 	movx	@dptr,a
                    01FC   3909 	C$easyax5043.c$339$3$219 ==.
                           3910 ;	..\COMMON\easyax5043.c:339: axradio_cb_receive.st.rx.mac.raw = axradio_rxbuffer;
   0A46 90 02 4E           3911 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   0A49 74 2E              3912 	mov	a,#_axradio_rxbuffer
   0A4B F0                 3913 	movx	@dptr,a
   0A4C A3                 3914 	inc	dptr
   0A4D 74 01              3915 	mov	a,#(_axradio_rxbuffer >> 8)
   0A4F F0                 3916 	movx	@dptr,a
                    0206   3917 	C$easyax5043.c$340$3$219 ==.
                           3918 ;	..\COMMON\easyax5043.c:340: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   0A50 74 1C              3919 	mov	a,#0x1C
   0A52 B5 0A 02           3920 	cjne	a,_axradio_mode,00222$
   0A55 80 0C              3921 	sjmp	00117$
   0A57                    3922 00222$:
                    020D   3923 	C$easyax5043.c$341$3$219 ==.
                           3924 ;	..\COMMON\easyax5043.c:341: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   0A57 74 1D              3925 	mov	a,#0x1D
   0A59 B5 0A 02           3926 	cjne	a,_axradio_mode,00223$
   0A5C 80 05              3927 	sjmp	00117$
   0A5E                    3928 00223$:
                    0214   3929 	C$easyax5043.c$342$3$219 ==.
                           3930 ;	..\COMMON\easyax5043.c:342: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   0A5E 74 1E              3931 	mov	a,#0x1E
   0A60 B5 0A 5F           3932 	cjne	a,_axradio_mode,00118$
   0A63                    3933 00117$:
                    0219   3934 	C$easyax5043.c$343$4$221 ==.
                           3935 ;	..\COMMON\easyax5043.c:343: axradio_cb_receive.st.rx.pktdata = axradio_rxbuffer;
   0A63 90 02 50           3936 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0A66 74 2E              3937 	mov	a,#_axradio_rxbuffer
   0A68 F0                 3938 	movx	@dptr,a
   0A69 A3                 3939 	inc	dptr
   0A6A 74 01              3940 	mov	a,#(_axradio_rxbuffer >> 8)
   0A6C F0                 3941 	movx	@dptr,a
                    0223   3942 	C$easyax5043.c$344$4$221 ==.
                           3943 ;	..\COMMON\easyax5043.c:344: axradio_cb_receive.st.rx.pktlen = len;
   0A6D 8F 05              3944 	mov	ar5,r7
   0A6F 7E 00              3945 	mov	r6,#0x00
   0A71 90 02 52           3946 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0A74 ED                 3947 	mov	a,r5
   0A75 F0                 3948 	movx	@dptr,a
   0A76 A3                 3949 	inc	dptr
   0A77 EE                 3950 	mov	a,r6
   0A78 F0                 3951 	movx	@dptr,a
                    022F   3952 	C$easyax5043.c$346$5$221 ==.
                           3953 ;	..\COMMON\easyax5043.c:346: int8_t r = AX5043_RSSI;
   0A79 90 40 40           3954 	mov	dptr,#_AX5043_RSSI
   0A7C E0                 3955 	movx	a,@dptr
                    0233   3956 	C$easyax5043.c$347$5$222 ==.
                           3957 ;	..\COMMON\easyax5043.c:347: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0A7D FE                 3958 	mov	r6,a
   0A7E 33                 3959 	rlc	a
   0A7F 95 E0              3960 	subb	a,acc
   0A81 FD                 3961 	mov	r5,a
   0A82 90 56 18           3962 	mov	dptr,#_axradio_phy_rssioffset
   0A85 E4                 3963 	clr	a
   0A86 93                 3964 	movc	a,@a+dptr
   0A87 FC                 3965 	mov	r4,a
   0A88 33                 3966 	rlc	a
   0A89 95 E0              3967 	subb	a,acc
   0A8B FB                 3968 	mov	r3,a
   0A8C EE                 3969 	mov	a,r6
   0A8D C3                 3970 	clr	c
   0A8E 9C                 3971 	subb	a,r4
   0A8F FE                 3972 	mov	r6,a
   0A90 ED                 3973 	mov	a,r5
   0A91 9B                 3974 	subb	a,r3
   0A92 FD                 3975 	mov	r5,a
   0A93 90 02 3C           3976 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0A96 EE                 3977 	mov	a,r6
   0A97 F0                 3978 	movx	@dptr,a
   0A98 A3                 3979 	inc	dptr
   0A99 ED                 3980 	mov	a,r5
   0A9A F0                 3981 	movx	@dptr,a
                    0251   3982 	C$easyax5043.c$349$4$221 ==.
                           3983 ;	..\COMMON\easyax5043.c:349: axradio_cb_receive.st.rx.phy.offset.o = signextend20(radio_read24((uint16_t)&AX5043_TRKRFFREQ2));
   0A9B 90 40 4D           3984 	mov	dptr,#_AX5043_TRKRFFREQ2
   0A9E 12 45 A1           3985 	lcall	_radio_read24
   0AA1 12 53 37           3986 	lcall	_signextend20
   0AA4 AB 82              3987 	mov	r3,dpl
   0AA6 AC 83              3988 	mov	r4,dph
   0AA8 AD F0              3989 	mov	r5,b
   0AAA FE                 3990 	mov	r6,a
   0AAB 90 02 3E           3991 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0AAE EB                 3992 	mov	a,r3
   0AAF F0                 3993 	movx	@dptr,a
   0AB0 A3                 3994 	inc	dptr
   0AB1 EC                 3995 	mov	a,r4
   0AB2 F0                 3996 	movx	@dptr,a
   0AB3 A3                 3997 	inc	dptr
   0AB4 ED                 3998 	mov	a,r5
   0AB5 F0                 3999 	movx	@dptr,a
   0AB6 A3                 4000 	inc	dptr
   0AB7 EE                 4001 	mov	a,r6
   0AB8 F0                 4002 	movx	@dptr,a
                    026F   4003 	C$easyax5043.c$350$4$221 ==.
                           4004 ;	..\COMMON\easyax5043.c:350: wtimer_add_callback(&axradio_cb_receive.cb);
   0AB9 90 02 32           4005 	mov	dptr,#_axradio_cb_receive
   0ABC 12 44 48           4006 	lcall	_wtimer_add_callback
                    0275   4007 	C$easyax5043.c$351$4$221 ==.
                           4008 ;	..\COMMON\easyax5043.c:351: break;
   0ABF 02 09 94           4009 	ljmp	00147$
   0AC2                    4010 00118$:
                    0278   4011 	C$easyax5043.c$353$3$219 ==.
                           4012 ;	..\COMMON\easyax5043.c:353: axradio_cb_receive.st.rx.pktdata = &axradio_rxbuffer[axradio_framing_maclen];
   0AC2 90 56 2E           4013 	mov	dptr,#_axradio_framing_maclen
   0AC5 E4                 4014 	clr	a
   0AC6 93                 4015 	movc	a,@a+dptr
   0AC7 FE                 4016 	mov	r6,a
   0AC8 24 2E              4017 	add	a,#_axradio_rxbuffer
   0ACA FC                 4018 	mov	r4,a
   0ACB E4                 4019 	clr	a
   0ACC 34 01              4020 	addc	a,#(_axradio_rxbuffer >> 8)
   0ACE FD                 4021 	mov	r5,a
   0ACF 90 02 50           4022 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0AD2 EC                 4023 	mov	a,r4
   0AD3 F0                 4024 	movx	@dptr,a
   0AD4 A3                 4025 	inc	dptr
   0AD5 ED                 4026 	mov	a,r5
   0AD6 F0                 4027 	movx	@dptr,a
                    028D   4028 	C$easyax5043.c$354$3$219 ==.
                           4029 ;	..\COMMON\easyax5043.c:354: if (len < axradio_framing_maclen) {
   0AD7 C3                 4030 	clr	c
   0AD8 EF                 4031 	mov	a,r7
   0AD9 9E                 4032 	subb	a,r6
   0ADA 50 0A              4033 	jnc	00125$
                    0292   4034 	C$easyax5043.c$356$4$223 ==.
                           4035 ;	..\COMMON\easyax5043.c:356: axradio_cb_receive.st.rx.pktlen = 0;
   0ADC 90 02 52           4036 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0ADF E4                 4037 	clr	a
   0AE0 F0                 4038 	movx	@dptr,a
   0AE1 A3                 4039 	inc	dptr
   0AE2 F0                 4040 	movx	@dptr,a
   0AE3 02 09 94           4041 	ljmp	00147$
   0AE6                    4042 00125$:
                    029C   4043 	C$easyax5043.c$358$4$224 ==.
                           4044 ;	..\COMMON\easyax5043.c:358: len -= axradio_framing_maclen;
   0AE6 EF                 4045 	mov	a,r7
   0AE7 C3                 4046 	clr	c
   0AE8 9E                 4047 	subb	a,r6
                    029F   4048 	C$easyax5043.c$359$4$224 ==.
                           4049 ;	..\COMMON\easyax5043.c:359: axradio_cb_receive.st.rx.pktlen = len;
   0AE9 FD                 4050 	mov	r5,a
   0AEA 7E 00              4051 	mov	r6,#0x00
   0AEC 90 02 52           4052 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AEF ED                 4053 	mov	a,r5
   0AF0 F0                 4054 	movx	@dptr,a
   0AF1 A3                 4055 	inc	dptr
   0AF2 EE                 4056 	mov	a,r6
   0AF3 F0                 4057 	movx	@dptr,a
                    02AA   4058 	C$easyax5043.c$360$4$224 ==.
                           4059 ;	..\COMMON\easyax5043.c:360: wtimer_add_callback(&axradio_cb_receive.cb);
   0AF4 90 02 32           4060 	mov	dptr,#_axradio_cb_receive
   0AF7 12 44 48           4061 	lcall	_wtimer_add_callback
                    02B0   4062 	C$easyax5043.c$361$4$224 ==.
                           4063 ;	..\COMMON\easyax5043.c:361: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   0AFA 74 22              4064 	mov	a,#0x22
   0AFC B5 0A 02           4065 	cjne	a,_axradio_mode,00227$
   0AFF 80 0A              4066 	sjmp	00121$
   0B01                    4067 00227$:
                    02B7   4068 	C$easyax5043.c$362$4$224 ==.
                           4069 ;	..\COMMON\easyax5043.c:362: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE)
   0B01 74 23              4070 	mov	a,#0x23
   0B03 B5 0A 02           4071 	cjne	a,_axradio_mode,00228$
   0B06 80 03              4072 	sjmp	00229$
   0B08                    4073 00228$:
   0B08 02 09 94           4074 	ljmp	00147$
   0B0B                    4075 00229$:
   0B0B                    4076 00121$:
                    02C1   4077 	C$easyax5043.c$363$4$224 ==.
                           4078 ;	..\COMMON\easyax5043.c:363: wtimer_remove(&axradio_timer);
   0B0B 90 02 89           4079 	mov	dptr,#_axradio_timer
   0B0E 12 4D 58           4080 	lcall	_wtimer_remove
                    02C7   4081 	C$easyax5043.c$365$3$219 ==.
                           4082 ;	..\COMMON\easyax5043.c:365: break;
   0B11 02 09 94           4083 	ljmp	00147$
                    02CA   4084 	C$easyax5043.c$367$3$219 ==.
                           4085 ;	..\COMMON\easyax5043.c:367: case AX5043_FIFOCMD_RFFREQOFFS:
   0B14                    4086 00127$:
                    02CA   4087 	C$easyax5043.c$368$3$219 ==.
                           4088 ;	..\COMMON\easyax5043.c:368: if (len != 3)
   0B14 BF 03 02           4089 	cjne	r7,#0x03,00230$
   0B17 80 03              4090 	sjmp	00231$
   0B19                    4091 00230$:
   0B19 02 0C 1D           4092 	ljmp	00140$
   0B1C                    4093 00231$:
                    02D2   4094 	C$easyax5043.c$370$3$219 ==.
                           4095 ;	..\COMMON\easyax5043.c:370: i = AX5043_FIFODATA;
   0B1C 90 40 29           4096 	mov	dptr,#_AX5043_FIFODATA
   0B1F E0                 4097 	movx	a,@dptr
   0B20 FE                 4098 	mov	r6,a
                    02D7   4099 	C$easyax5043.c$371$3$219 ==.
                           4100 ;	..\COMMON\easyax5043.c:371: i &= 0x0F;
   0B21 53 06 0F           4101 	anl	ar6,#0x0F
                    02DA   4102 	C$easyax5043.c$372$3$219 ==.
                           4103 ;	..\COMMON\easyax5043.c:372: i |= 1 + (uint8_t)~(i & 0x08);
   0B24 74 08              4104 	mov	a,#0x08
   0B26 5E                 4105 	anl	a,r6
   0B27 F4                 4106 	cpl	a
   0B28 FD                 4107 	mov	r5,a
   0B29 0D                 4108 	inc	r5
   0B2A ED                 4109 	mov	a,r5
   0B2B 42 06              4110 	orl	ar6,a
                    02E3   4111 	C$easyax5043.c$373$3$219 ==.
                           4112 ;	..\COMMON\easyax5043.c:373: axradio_cb_receive.st.rx.phy.offset.b.b3 = ((int8_t)i) >> 8;
   0B2D 8E 05              4113 	mov	ar5,r6
   0B2F ED                 4114 	mov	a,r5
   0B30 33                 4115 	rlc	a
   0B31 95 E0              4116 	subb	a,acc
   0B33 FD                 4117 	mov	r5,a
   0B34 90 02 41           4118 	mov	dptr,#(_axradio_cb_receive + 0x000f)
   0B37 F0                 4119 	movx	@dptr,a
                    02EE   4120 	C$easyax5043.c$374$3$219 ==.
                           4121 ;	..\COMMON\easyax5043.c:374: axradio_cb_receive.st.rx.phy.offset.b.b2 = i;
   0B38 90 02 40           4122 	mov	dptr,#(_axradio_cb_receive + 0x000e)
   0B3B EE                 4123 	mov	a,r6
   0B3C F0                 4124 	movx	@dptr,a
                    02F3   4125 	C$easyax5043.c$375$3$219 ==.
                           4126 ;	..\COMMON\easyax5043.c:375: axradio_cb_receive.st.rx.phy.offset.b.b1 = AX5043_FIFODATA;
   0B3D 90 40 29           4127 	mov	dptr,#_AX5043_FIFODATA
   0B40 E0                 4128 	movx	a,@dptr
   0B41 90 02 3F           4129 	mov	dptr,#(_axradio_cb_receive + 0x000d)
   0B44 F0                 4130 	movx	@dptr,a
                    02FB   4131 	C$easyax5043.c$376$3$219 ==.
                           4132 ;	..\COMMON\easyax5043.c:376: axradio_cb_receive.st.rx.phy.offset.b.b0 = AX5043_FIFODATA;
   0B45 90 40 29           4133 	mov	dptr,#_AX5043_FIFODATA
   0B48 E0                 4134 	movx	a,@dptr
   0B49 FE                 4135 	mov	r6,a
   0B4A 90 02 3E           4136 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0B4D F0                 4137 	movx	@dptr,a
                    0304   4138 	C$easyax5043.c$377$3$219 ==.
                           4139 ;	..\COMMON\easyax5043.c:377: break;
   0B4E 02 09 94           4140 	ljmp	00147$
                    0307   4141 	C$easyax5043.c$379$3$219 ==.
                           4142 ;	..\COMMON\easyax5043.c:379: case AX5043_FIFOCMD_RSSI:
   0B51                    4143 00130$:
                    0307   4144 	C$easyax5043.c$380$3$219 ==.
                           4145 ;	..\COMMON\easyax5043.c:380: if (len != 1)
   0B51 BF 01 02           4146 	cjne	r7,#0x01,00232$
   0B54 80 03              4147 	sjmp	00233$
   0B56                    4148 00232$:
   0B56 02 0C 1D           4149 	ljmp	00140$
   0B59                    4150 00233$:
                    030F   4151 	C$easyax5043.c$383$4$219 ==.
                           4152 ;	..\COMMON\easyax5043.c:383: int8_t r = AX5043_FIFODATA;
   0B59 90 40 29           4153 	mov	dptr,#_AX5043_FIFODATA
   0B5C E0                 4154 	movx	a,@dptr
                    0313   4155 	C$easyax5043.c$384$4$225 ==.
                           4156 ;	..\COMMON\easyax5043.c:384: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0B5D FE                 4157 	mov	r6,a
   0B5E 33                 4158 	rlc	a
   0B5F 95 E0              4159 	subb	a,acc
   0B61 FD                 4160 	mov	r5,a
   0B62 90 56 18           4161 	mov	dptr,#_axradio_phy_rssioffset
   0B65 E4                 4162 	clr	a
   0B66 93                 4163 	movc	a,@a+dptr
   0B67 FC                 4164 	mov	r4,a
   0B68 33                 4165 	rlc	a
   0B69 95 E0              4166 	subb	a,acc
   0B6B FB                 4167 	mov	r3,a
   0B6C EE                 4168 	mov	a,r6
   0B6D C3                 4169 	clr	c
   0B6E 9C                 4170 	subb	a,r4
   0B6F FE                 4171 	mov	r6,a
   0B70 ED                 4172 	mov	a,r5
   0B71 9B                 4173 	subb	a,r3
   0B72 FD                 4174 	mov	r5,a
   0B73 90 02 3C           4175 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0B76 EE                 4176 	mov	a,r6
   0B77 F0                 4177 	movx	@dptr,a
   0B78 A3                 4178 	inc	dptr
   0B79 ED                 4179 	mov	a,r5
   0B7A F0                 4180 	movx	@dptr,a
                    0331   4181 	C$easyax5043.c$386$3$219 ==.
                           4182 ;	..\COMMON\easyax5043.c:386: break;
   0B7B 02 09 94           4183 	ljmp	00147$
                    0334   4184 	C$easyax5043.c$388$3$219 ==.
                           4185 ;	..\COMMON\easyax5043.c:388: case AX5043_FIFOCMD_TIMER:
   0B7E                    4186 00133$:
                    0334   4187 	C$easyax5043.c$389$3$219 ==.
                           4188 ;	..\COMMON\easyax5043.c:389: if (len != 3)
   0B7E BF 03 02           4189 	cjne	r7,#0x03,00234$
   0B81 80 03              4190 	sjmp	00235$
   0B83                    4191 00234$:
   0B83 02 0C 1D           4192 	ljmp	00140$
   0B86                    4193 00235$:
                    033C   4194 	C$easyax5043.c$393$3$219 ==.
                           4195 ;	..\COMMON\easyax5043.c:393: axradio_cb_receive.st.time.b.b3 = 0;
   0B86 90 02 3B           4196 	mov	dptr,#(_axradio_cb_receive + 0x0009)
   0B89 E4                 4197 	clr	a
   0B8A F0                 4198 	movx	@dptr,a
                    0341   4199 	C$easyax5043.c$394$3$219 ==.
                           4200 ;	..\COMMON\easyax5043.c:394: axradio_cb_receive.st.time.b.b2 = AX5043_FIFODATA;
   0B8B 90 40 29           4201 	mov	dptr,#_AX5043_FIFODATA
   0B8E E0                 4202 	movx	a,@dptr
   0B8F 90 02 3A           4203 	mov	dptr,#(_axradio_cb_receive + 0x0008)
   0B92 F0                 4204 	movx	@dptr,a
                    0349   4205 	C$easyax5043.c$395$3$219 ==.
                           4206 ;	..\COMMON\easyax5043.c:395: axradio_cb_receive.st.time.b.b1 = AX5043_FIFODATA;
   0B93 90 40 29           4207 	mov	dptr,#_AX5043_FIFODATA
   0B96 E0                 4208 	movx	a,@dptr
   0B97 90 02 39           4209 	mov	dptr,#(_axradio_cb_receive + 0x0007)
   0B9A F0                 4210 	movx	@dptr,a
                    0351   4211 	C$easyax5043.c$396$3$219 ==.
                           4212 ;	..\COMMON\easyax5043.c:396: axradio_cb_receive.st.time.b.b0 = AX5043_FIFODATA;
   0B9B 90 40 29           4213 	mov	dptr,#_AX5043_FIFODATA
   0B9E E0                 4214 	movx	a,@dptr
   0B9F FE                 4215 	mov	r6,a
   0BA0 90 02 38           4216 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   0BA3 F0                 4217 	movx	@dptr,a
                    035A   4218 	C$easyax5043.c$397$3$219 ==.
                           4219 ;	..\COMMON\easyax5043.c:397: break;
   0BA4 02 09 94           4220 	ljmp	00147$
                    035D   4221 	C$easyax5043.c$399$3$219 ==.
                           4222 ;	..\COMMON\easyax5043.c:399: case AX5043_FIFOCMD_ANTRSSI:
   0BA7                    4223 00136$:
                    035D   4224 	C$easyax5043.c$400$3$219 ==.
                           4225 ;	..\COMMON\easyax5043.c:400: if (!len)
   0BA7 EF                 4226 	mov	a,r7
   0BA8 70 03              4227 	jnz	00236$
   0BAA 02 09 94           4228 	ljmp	00147$
   0BAD                    4229 00236$:
                    0363   4230 	C$easyax5043.c$402$3$219 ==.
                           4231 ;	..\COMMON\easyax5043.c:402: update_timeanchor();
   0BAD C0 07              4232 	push	ar7
   0BAF 12 08 4A           4233 	lcall	_update_timeanchor
                    0368   4234 	C$easyax5043.c$403$3$219 ==.
                           4235 ;	..\COMMON\easyax5043.c:403: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   0BB2 90 02 5E           4236 	mov	dptr,#_axradio_cb_channelstate
   0BB5 12 50 73           4237 	lcall	_wtimer_remove_callback
                    036E   4238 	C$easyax5043.c$404$3$219 ==.
                           4239 ;	..\COMMON\easyax5043.c:404: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   0BB8 90 02 63           4240 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   0BBB E4                 4241 	clr	a
   0BBC F0                 4242 	movx	@dptr,a
                    0373   4243 	C$easyax5043.c$406$4$219 ==.
                           4244 ;	..\COMMON\easyax5043.c:406: int8_t r = AX5043_FIFODATA;
   0BBD 90 40 29           4245 	mov	dptr,#_AX5043_FIFODATA
   0BC0 E0                 4246 	movx	a,@dptr
                    0377   4247 	C$easyax5043.c$407$4$226 ==.
                           4248 ;	..\COMMON\easyax5043.c:407: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   0BC1 FE                 4249 	mov	r6,a
   0BC2 FC                 4250 	mov	r4,a
   0BC3 33                 4251 	rlc	a
   0BC4 95 E0              4252 	subb	a,acc
   0BC6 FD                 4253 	mov	r5,a
   0BC7 90 56 18           4254 	mov	dptr,#_axradio_phy_rssioffset
   0BCA E4                 4255 	clr	a
   0BCB 93                 4256 	movc	a,@a+dptr
   0BCC FB                 4257 	mov	r3,a
   0BCD 33                 4258 	rlc	a
   0BCE 95 E0              4259 	subb	a,acc
   0BD0 FA                 4260 	mov	r2,a
   0BD1 EC                 4261 	mov	a,r4
   0BD2 C3                 4262 	clr	c
   0BD3 9B                 4263 	subb	a,r3
   0BD4 FC                 4264 	mov	r4,a
   0BD5 ED                 4265 	mov	a,r5
   0BD6 9A                 4266 	subb	a,r2
   0BD7 FD                 4267 	mov	r5,a
   0BD8 90 02 68           4268 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   0BDB EC                 4269 	mov	a,r4
   0BDC F0                 4270 	movx	@dptr,a
   0BDD A3                 4271 	inc	dptr
   0BDE ED                 4272 	mov	a,r5
   0BDF F0                 4273 	movx	@dptr,a
                    0396   4274 	C$easyax5043.c$408$4$226 ==.
                           4275 ;	..\COMMON\easyax5043.c:408: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   0BE0 90 56 1A           4276 	mov	dptr,#_axradio_phy_channelbusy
   0BE3 E4                 4277 	clr	a
   0BE4 93                 4278 	movc	a,@a+dptr
   0BE5 FD                 4279 	mov	r5,a
   0BE6 C3                 4280 	clr	c
   0BE7 EE                 4281 	mov	a,r6
   0BE8 64 80              4282 	xrl	a,#0x80
   0BEA 8D F0              4283 	mov	b,r5
   0BEC 63 F0 80           4284 	xrl	b,#0x80
   0BEF 95 F0              4285 	subb	a,b
   0BF1 B3                 4286 	cpl	c
   0BF2 E4                 4287 	clr	a
   0BF3 33                 4288 	rlc	a
   0BF4 90 02 6A           4289 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   0BF7 F0                 4290 	movx	@dptr,a
                    03AE   4291 	C$easyax5043.c$410$3$219 ==.
                           4292 ;	..\COMMON\easyax5043.c:410: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   0BF8 90 00 1A           4293 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0BFB E0                 4294 	movx	a,@dptr
   0BFC FB                 4295 	mov	r3,a
   0BFD A3                 4296 	inc	dptr
   0BFE E0                 4297 	movx	a,@dptr
   0BFF FC                 4298 	mov	r4,a
   0C00 A3                 4299 	inc	dptr
   0C01 E0                 4300 	movx	a,@dptr
   0C02 FD                 4301 	mov	r5,a
   0C03 A3                 4302 	inc	dptr
   0C04 E0                 4303 	movx	a,@dptr
   0C05 FE                 4304 	mov	r6,a
   0C06 90 02 64           4305 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   0C09 EB                 4306 	mov	a,r3
   0C0A F0                 4307 	movx	@dptr,a
   0C0B A3                 4308 	inc	dptr
   0C0C EC                 4309 	mov	a,r4
   0C0D F0                 4310 	movx	@dptr,a
   0C0E A3                 4311 	inc	dptr
   0C0F ED                 4312 	mov	a,r5
   0C10 F0                 4313 	movx	@dptr,a
   0C11 A3                 4314 	inc	dptr
   0C12 EE                 4315 	mov	a,r6
   0C13 F0                 4316 	movx	@dptr,a
                    03CA   4317 	C$easyax5043.c$411$3$219 ==.
                           4318 ;	..\COMMON\easyax5043.c:411: wtimer_add_callback(&axradio_cb_channelstate.cb);
   0C14 90 02 5E           4319 	mov	dptr,#_axradio_cb_channelstate
   0C17 12 44 48           4320 	lcall	_wtimer_add_callback
   0C1A D0 07              4321 	pop	ar7
                    03D2   4322 	C$easyax5043.c$412$3$219 ==.
                           4323 ;	..\COMMON\easyax5043.c:412: --len;
   0C1C 1F                 4324 	dec	r7
                    03D3   4325 	C$easyax5043.c$417$3$219 ==.
                           4326 ;	..\COMMON\easyax5043.c:417: dropchunk:
   0C1D                    4327 00140$:
                    03D3   4328 	C$easyax5043.c$418$3$219 ==.
                           4329 ;	..\COMMON\easyax5043.c:418: if (!len)
   0C1D EF                 4330 	mov	a,r7
   0C1E 70 03              4331 	jnz	00238$
   0C20 02 09 94           4332 	ljmp	00147$
   0C23                    4333 00238$:
                    03D9   4334 	C$easyax5043.c$421$1$215 ==.
                           4335 ;	..\COMMON\easyax5043.c:421: do {
   0C23                    4336 00143$:
                    03D9   4337 	C$easyax5043.c$422$4$227 ==.
                           4338 ;	..\COMMON\easyax5043.c:422: AX5043_FIFODATA;        // purge FIFO
   0C23 90 40 29           4339 	mov	dptr,#_AX5043_FIFODATA
   0C26 E0                 4340 	movx	a,@dptr
                    03DD   4341 	C$easyax5043.c$424$3$219 ==.
                           4342 ;	..\COMMON\easyax5043.c:424: while (--i);
   0C27 DF FA              4343 	djnz	r7,00143$
                    03DF   4344 	C$easyax5043.c$426$1$215 ==.
                           4345 ;	..\COMMON\easyax5043.c:426: } // end switch(fifo_cmd)
   0C29 02 09 94           4346 	ljmp	00147$
   0C2C                    4347 00150$:
                    03E2   4348 	C$easyax5043.c$428$1$215 ==.
                    03E2   4349 	XFeasyax5043$receive_isr$0$0 ==.
   0C2C 22                 4350 	ret
                           4351 ;------------------------------------------------------------
                           4352 ;Allocation info for local variables in function 'transmit_isr'
                           4353 ;------------------------------------------------------------
                           4354 ;cnt                       Allocated to registers r7 
                           4355 ;byte                      Allocated to registers r7 
                           4356 ;len_byte                  Allocated to registers r4 
                           4357 ;i                         Allocated to registers r3 
                           4358 ;byte                      Allocated to registers r6 
                           4359 ;flags                     Allocated to registers r6 
                           4360 ;len                       Allocated to registers r4 r5 
                           4361 ;------------------------------------------------------------
                    03E3   4362 	Feasyax5043$transmit_isr$0$0 ==.
                    03E3   4363 	C$easyax5043.c$430$1$215 ==.
                           4364 ;	..\COMMON\easyax5043.c:430: static __reentrantb void transmit_isr(void) __reentrant
                           4365 ;	-----------------------------------------
                           4366 ;	 function transmit_isr
                           4367 ;	-----------------------------------------
   0C2D                    4368 _transmit_isr:
                    03E3   4369 	C$easyax5043.c$568$6$238 ==.
                           4370 ;	..\COMMON\easyax5043.c:568: pktend:
   0C2D                    4371 00157$:
                    03E3   4372 	C$easyax5043.c$433$2$229 ==.
                           4373 ;	..\COMMON\easyax5043.c:433: uint8_t cnt = AX5043_FIFOFREE0;
   0C2D 90 40 2D           4374 	mov	dptr,#_AX5043_FIFOFREE0
   0C30 E0                 4375 	movx	a,@dptr
   0C31 FF                 4376 	mov	r7,a
                    03E8   4377 	C$easyax5043.c$434$2$230 ==.
                           4378 ;	..\COMMON\easyax5043.c:434: if (AX5043_FIFOFREE1)
   0C32 90 40 2C           4379 	mov	dptr,#_AX5043_FIFOFREE1
   0C35 E0                 4380 	movx	a,@dptr
   0C36 FE                 4381 	mov	r6,a
   0C37 60 02              4382 	jz	00102$
                    03EF   4383 	C$easyax5043.c$435$2$230 ==.
                           4384 ;	..\COMMON\easyax5043.c:435: cnt = 0xff;
   0C39 7F FF              4385 	mov	r7,#0xFF
   0C3B                    4386 00102$:
                    03F1   4387 	C$easyax5043.c$436$2$230 ==.
                           4388 ;	..\COMMON\easyax5043.c:436: switch (axradio_trxstate) {
   0C3B AE 0B              4389 	mov	r6,_axradio_trxstate
   0C3D BE 0A 02           4390 	cjne	r6,#0x0A,00219$
   0C40 80 0F              4391 	sjmp	00103$
   0C42                    4392 00219$:
   0C42 BE 0B 03           4393 	cjne	r6,#0x0B,00220$
   0C45 02 0C E6           4394 	ljmp	00115$
   0C48                    4395 00220$:
   0C48 BE 0C 03           4396 	cjne	r6,#0x0C,00221$
   0C4B 02 0E BC           4397 	ljmp	00137$
   0C4E                    4398 00221$:
   0C4E 02 0F 52           4399 	ljmp	00148$
                    0407   4400 	C$easyax5043.c$437$3$231 ==.
                           4401 ;	..\COMMON\easyax5043.c:437: case trxstate_tx_longpreamble:
   0C51                    4402 00103$:
                    0407   4403 	C$easyax5043.c$438$3$231 ==.
                           4404 ;	..\COMMON\easyax5043.c:438: if (!axradio_txbuffer_cnt) {
   0C51 90 00 07           4405 	mov	dptr,#_axradio_txbuffer_cnt
   0C54 E0                 4406 	movx	a,@dptr
   0C55 FD                 4407 	mov	r5,a
   0C56 A3                 4408 	inc	dptr
   0C57 E0                 4409 	movx	a,@dptr
   0C58 FE                 4410 	mov	r6,a
   0C59 4D                 4411 	orl	a,r5
   0C5A 70 37              4412 	jnz	00109$
                    0412   4413 	C$easyax5043.c$439$4$232 ==.
                           4414 ;	..\COMMON\easyax5043.c:439: axradio_trxstate = trxstate_tx_shortpreamble;
   0C5C 75 0B 0B           4415 	mov	_axradio_trxstate,#0x0B
                    0415   4416 	C$easyax5043.c$440$4$232 ==.
                           4417 ;	..\COMMON\easyax5043.c:440: if( axradio_mode == AXRADIO_MODE_WOR_TRANSMIT || axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT )
   0C5F 74 11              4418 	mov	a,#0x11
   0C61 B5 0A 02           4419 	cjne	a,_axradio_mode,00223$
   0C64 80 05              4420 	sjmp	00104$
   0C66                    4421 00223$:
   0C66 74 13              4422 	mov	a,#0x13
   0C68 B5 0A 14           4423 	cjne	a,_axradio_mode,00105$
   0C6B                    4424 00104$:
                    0421   4425 	C$easyax5043.c$441$4$232 ==.
                           4426 ;	..\COMMON\easyax5043.c:441: axradio_txbuffer_cnt = axradio_phy_preamble_wor_len;
   0C6B 90 56 24           4427 	mov	dptr,#_axradio_phy_preamble_wor_len
   0C6E E4                 4428 	clr	a
   0C6F 93                 4429 	movc	a,@a+dptr
   0C70 FB                 4430 	mov	r3,a
   0C71 74 01              4431 	mov	a,#0x01
   0C73 93                 4432 	movc	a,@a+dptr
   0C74 FC                 4433 	mov	r4,a
   0C75 90 00 07           4434 	mov	dptr,#_axradio_txbuffer_cnt
   0C78 EB                 4435 	mov	a,r3
   0C79 F0                 4436 	movx	@dptr,a
   0C7A A3                 4437 	inc	dptr
   0C7B EC                 4438 	mov	a,r4
   0C7C F0                 4439 	movx	@dptr,a
   0C7D 80 67              4440 	sjmp	00115$
   0C7F                    4441 00105$:
                    0435   4442 	C$easyax5043.c$443$4$232 ==.
                           4443 ;	..\COMMON\easyax5043.c:443: axradio_txbuffer_cnt = axradio_phy_preamble_len;
   0C7F 90 56 28           4444 	mov	dptr,#_axradio_phy_preamble_len
   0C82 E4                 4445 	clr	a
   0C83 93                 4446 	movc	a,@a+dptr
   0C84 FB                 4447 	mov	r3,a
   0C85 74 01              4448 	mov	a,#0x01
   0C87 93                 4449 	movc	a,@a+dptr
   0C88 FC                 4450 	mov	r4,a
   0C89 90 00 07           4451 	mov	dptr,#_axradio_txbuffer_cnt
   0C8C EB                 4452 	mov	a,r3
   0C8D F0                 4453 	movx	@dptr,a
   0C8E A3                 4454 	inc	dptr
   0C8F EC                 4455 	mov	a,r4
   0C90 F0                 4456 	movx	@dptr,a
                    0447   4457 	C$easyax5043.c$444$4$232 ==.
                           4458 ;	..\COMMON\easyax5043.c:444: goto shortpreamble;
   0C91 80 53              4459 	sjmp	00115$
   0C93                    4460 00109$:
                    0449   4461 	C$easyax5043.c$446$3$231 ==.
                           4462 ;	..\COMMON\easyax5043.c:446: if (cnt < 4)
   0C93 BF 04 00           4463 	cjne	r7,#0x04,00226$
   0C96                    4464 00226$:
   0C96 50 03              4465 	jnc	00227$
   0C98 02 0F 63           4466 	ljmp	00151$
   0C9B                    4467 00227$:
                    0451   4468 	C$easyax5043.c$448$3$231 ==.
                           4469 ;	..\COMMON\easyax5043.c:448: cnt = 7;
   0C9B 7F 07              4470 	mov	r7,#0x07
                    0453   4471 	C$easyax5043.c$449$3$231 ==.
                           4472 ;	..\COMMON\easyax5043.c:449: if (axradio_txbuffer_cnt < 7)
   0C9D C3                 4473 	clr	c
   0C9E ED                 4474 	mov	a,r5
   0C9F 94 07              4475 	subb	a,#0x07
   0CA1 EE                 4476 	mov	a,r6
   0CA2 94 00              4477 	subb	a,#0x00
   0CA4 50 02              4478 	jnc	00113$
                    045C   4479 	C$easyax5043.c$450$3$231 ==.
                           4480 ;	..\COMMON\easyax5043.c:450: cnt = axradio_txbuffer_cnt;
   0CA6 8D 07              4481 	mov	ar7,r5
   0CA8                    4482 00113$:
                    045E   4483 	C$easyax5043.c$451$3$231 ==.
                           4484 ;	..\COMMON\easyax5043.c:451: axradio_txbuffer_cnt -= cnt;
   0CA8 8F 05              4485 	mov	ar5,r7
   0CAA 7E 00              4486 	mov	r6,#0x00
   0CAC 90 00 07           4487 	mov	dptr,#_axradio_txbuffer_cnt
   0CAF E0                 4488 	movx	a,@dptr
   0CB0 FB                 4489 	mov	r3,a
   0CB1 A3                 4490 	inc	dptr
   0CB2 E0                 4491 	movx	a,@dptr
   0CB3 FC                 4492 	mov	r4,a
   0CB4 90 00 07           4493 	mov	dptr,#_axradio_txbuffer_cnt
   0CB7 EB                 4494 	mov	a,r3
   0CB8 C3                 4495 	clr	c
   0CB9 9D                 4496 	subb	a,r5
   0CBA F0                 4497 	movx	@dptr,a
   0CBB EC                 4498 	mov	a,r4
   0CBC 9E                 4499 	subb	a,r6
   0CBD A3                 4500 	inc	dptr
   0CBE F0                 4501 	movx	@dptr,a
                    0475   4502 	C$easyax5043.c$452$3$231 ==.
                           4503 ;	..\COMMON\easyax5043.c:452: cnt <<= 5;
   0CBF EF                 4504 	mov	a,r7
   0CC0 C4                 4505 	swap	a
   0CC1 23                 4506 	rl	a
   0CC2 54 E0              4507 	anl	a,#0xE0
   0CC4 FF                 4508 	mov	r7,a
                    047B   4509 	C$easyax5043.c$453$3$231 ==.
                           4510 ;	..\COMMON\easyax5043.c:453: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0CC5 90 40 29           4511 	mov	dptr,#_AX5043_FIFODATA
   0CC8 74 62              4512 	mov	a,#0x62
   0CCA F0                 4513 	movx	@dptr,a
                    0481   4514 	C$easyax5043.c$454$3$231 ==.
                           4515 ;	..\COMMON\easyax5043.c:454: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0CCB 90 56 2B           4516 	mov	dptr,#_axradio_phy_preamble_flags
   0CCE E4                 4517 	clr	a
   0CCF 93                 4518 	movc	a,@a+dptr
   0CD0 90 40 29           4519 	mov	dptr,#_AX5043_FIFODATA
   0CD3 F0                 4520 	movx	@dptr,a
                    048A   4521 	C$easyax5043.c$455$3$231 ==.
                           4522 ;	..\COMMON\easyax5043.c:455: AX5043_FIFODATA = cnt;
   0CD4 90 40 29           4523 	mov	dptr,#_AX5043_FIFODATA
   0CD7 EF                 4524 	mov	a,r7
   0CD8 F0                 4525 	movx	@dptr,a
                    048F   4526 	C$easyax5043.c$456$3$231 ==.
                           4527 ;	..\COMMON\easyax5043.c:456: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0CD9 90 56 2A           4528 	mov	dptr,#_axradio_phy_preamble_byte
   0CDC E4                 4529 	clr	a
   0CDD 93                 4530 	movc	a,@a+dptr
   0CDE FE                 4531 	mov	r6,a
   0CDF 90 40 29           4532 	mov	dptr,#_AX5043_FIFODATA
   0CE2 F0                 4533 	movx	@dptr,a
                    0499   4534 	C$easyax5043.c$457$3$231 ==.
                           4535 ;	..\COMMON\easyax5043.c:457: break;
   0CE3 02 0C 2D           4536 	ljmp	00157$
                    049C   4537 	C$easyax5043.c$460$3$231 ==.
                           4538 ;	..\COMMON\easyax5043.c:460: shortpreamble:
   0CE6                    4539 00115$:
                    049C   4540 	C$easyax5043.c$461$3$231 ==.
                           4541 ;	..\COMMON\easyax5043.c:461: if (!axradio_txbuffer_cnt) {
   0CE6 90 00 07           4542 	mov	dptr,#_axradio_txbuffer_cnt
   0CE9 E0                 4543 	movx	a,@dptr
   0CEA FD                 4544 	mov	r5,a
   0CEB A3                 4545 	inc	dptr
   0CEC E0                 4546 	movx	a,@dptr
   0CED FE                 4547 	mov	r6,a
   0CEE 4D                 4548 	orl	a,r5
   0CEF 60 03              4549 	jz	00229$
   0CF1 02 0D CC           4550 	ljmp	00127$
   0CF4                    4551 00229$:
                    04AA   4552 	C$easyax5043.c$462$4$233 ==.
                           4553 ;	..\COMMON\easyax5043.c:462: if (cnt < 15)
   0CF4 BF 0F 00           4554 	cjne	r7,#0x0F,00230$
   0CF7                    4555 00230$:
   0CF7 50 03              4556 	jnc	00231$
   0CF9 02 0F 63           4557 	ljmp	00151$
   0CFC                    4558 00231$:
                    04B2   4559 	C$easyax5043.c$464$4$233 ==.
                           4560 ;	..\COMMON\easyax5043.c:464: if (axradio_phy_preamble_appendbits) {
   0CFC 90 56 2C           4561 	mov	dptr,#_axradio_phy_preamble_appendbits
   0CFF E4                 4562 	clr	a
   0D00 93                 4563 	movc	a,@a+dptr
   0D01 FC                 4564 	mov	r4,a
   0D02 60 6F              4565 	jz	00122$
                    04BA   4566 	C$easyax5043.c$466$5$234 ==.
                           4567 ;	..\COMMON\easyax5043.c:466: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                    04BA   4568 	C$easyax5043.c$467$5$234 ==.
                           4569 ;	..\COMMON\easyax5043.c:467: AX5043_FIFODATA = 0x1C;
   0D04 90 40 29           4570 	mov	dptr,#_AX5043_FIFODATA
   0D07 74 41              4571 	mov	a,#0x41
   0D09 F0                 4572 	movx	@dptr,a
   0D0A 74 1C              4573 	mov	a,#0x1C
   0D0C F0                 4574 	movx	@dptr,a
                    04C3   4575 	C$easyax5043.c$468$5$234 ==.
                           4576 ;	..\COMMON\easyax5043.c:468: byte = axradio_phy_preamble_appendpattern;
   0D0D 90 56 2D           4577 	mov	dptr,#_axradio_phy_preamble_appendpattern
   0D10 E4                 4578 	clr	a
   0D11 93                 4579 	movc	a,@a+dptr
   0D12 FB                 4580 	mov	r3,a
   0D13 FF                 4581 	mov	r7,a
                    04CA   4582 	C$easyax5043.c$469$5$234 ==.
                           4583 ;	..\COMMON\easyax5043.c:469: if (AX5043_PKTADDRCFG & 0x80) {
   0D14 90 42 00           4584 	mov	dptr,#_AX5043_PKTADDRCFG
   0D17 E0                 4585 	movx	a,@dptr
   0D18 FA                 4586 	mov	r2,a
   0D19 30 E7 26           4587 	jnb	acc.7,00119$
                    04D2   4588 	C$easyax5043.c$471$6$235 ==.
                           4589 ;	..\COMMON\easyax5043.c:471: byte &= 0xFF << (8-axradio_phy_preamble_appendbits);
   0D1C 74 08              4590 	mov	a,#0x08
   0D1E C3                 4591 	clr	c
   0D1F 9C                 4592 	subb	a,r4
   0D20 F5 F0              4593 	mov	b,a
   0D22 05 F0              4594 	inc	b
   0D24 74 FF              4595 	mov	a,#0xFF
   0D26 80 02              4596 	sjmp	00236$
   0D28                    4597 00234$:
   0D28 25 E0              4598 	add	a,acc
   0D2A                    4599 00236$:
   0D2A D5 F0 FB           4600 	djnz	b,00234$
   0D2D FA                 4601 	mov	r2,a
   0D2E 52 07              4602 	anl	ar7,a
                    04E6   4603 	C$easyax5043.c$472$6$235 ==.
                           4604 ;	..\COMMON\easyax5043.c:472: byte |= 0x80 >> axradio_phy_preamble_appendbits;
   0D30 8C F0              4605 	mov	b,r4
   0D32 05 F0              4606 	inc	b
   0D34 74 80              4607 	mov	a,#0x80
   0D36 80 02              4608 	sjmp	00238$
   0D38                    4609 00237$:
   0D38 C3                 4610 	clr	c
   0D39 13                 4611 	rrc	a
   0D3A                    4612 00238$:
   0D3A D5 F0 FB           4613 	djnz	b,00237$
   0D3D FA                 4614 	mov	r2,a
   0D3E 42 07              4615 	orl	ar7,a
   0D40 80 2C              4616 	sjmp	00120$
   0D42                    4617 00119$:
                    04F8   4618 	C$easyax5043.c$475$6$236 ==.
                           4619 ;	..\COMMON\easyax5043.c:475: byte &= 0xFF >> (8-axradio_phy_preamble_appendbits);
   0D42 8C 02              4620 	mov	ar2,r4
   0D44 7B 00              4621 	mov	r3,#0x00
   0D46 74 08              4622 	mov	a,#0x08
   0D48 C3                 4623 	clr	c
   0D49 9A                 4624 	subb	a,r2
   0D4A FA                 4625 	mov	r2,a
   0D4B E4                 4626 	clr	a
   0D4C 9B                 4627 	subb	a,r3
   0D4D FB                 4628 	mov	r3,a
   0D4E 8A F0              4629 	mov	b,r2
   0D50 05 F0              4630 	inc	b
   0D52 74 FF              4631 	mov	a,#0xFF
   0D54 80 02              4632 	sjmp	00240$
   0D56                    4633 00239$:
   0D56 C3                 4634 	clr	c
   0D57 13                 4635 	rrc	a
   0D58                    4636 00240$:
   0D58 D5 F0 FB           4637 	djnz	b,00239$
   0D5B FA                 4638 	mov	r2,a
   0D5C 52 07              4639 	anl	ar7,a
                    0514   4640 	C$easyax5043.c$476$6$236 ==.
                           4641 ;	..\COMMON\easyax5043.c:476: byte |= 0x01 << axradio_phy_preamble_appendbits;
   0D5E 8C F0              4642 	mov	b,r4
   0D60 05 F0              4643 	inc	b
   0D62 74 01              4644 	mov	a,#0x01
   0D64 80 02              4645 	sjmp	00243$
   0D66                    4646 00241$:
   0D66 25 E0              4647 	add	a,acc
   0D68                    4648 00243$:
   0D68 D5 F0 FB           4649 	djnz	b,00241$
   0D6B FC                 4650 	mov	r4,a
   0D6C 42 07              4651 	orl	ar7,a
   0D6E                    4652 00120$:
                    0524   4653 	C$easyax5043.c$478$5$234 ==.
                           4654 ;	..\COMMON\easyax5043.c:478: AX5043_FIFODATA = byte;
   0D6E 90 40 29           4655 	mov	dptr,#_AX5043_FIFODATA
   0D71 EF                 4656 	mov	a,r7
   0D72 F0                 4657 	movx	@dptr,a
   0D73                    4658 00122$:
                    0529   4659 	C$easyax5043.c$484$4$233 ==.
                           4660 ;	..\COMMON\easyax5043.c:484: if ((AX5043_FRAMING & 0x0E) == 0x06 && axradio_framing_synclen) {
   0D73 90 40 12           4661 	mov	dptr,#_AX5043_FRAMING
   0D76 E0                 4662 	movx	a,@dptr
   0D77 FC                 4663 	mov	r4,a
   0D78 53 04 0E           4664 	anl	ar4,#0x0E
   0D7B BC 06 48           4665 	cjne	r4,#0x06,00124$
   0D7E 90 56 36           4666 	mov	dptr,#_axradio_framing_synclen
   0D81 E4                 4667 	clr	a
   0D82 93                 4668 	movc	a,@a+dptr
   0D83 FC                 4669 	mov	r4,a
   0D84 60 40              4670 	jz	00124$
                    053C   4671 	C$easyax5043.c$486$5$233 ==.
                           4672 ;	..\COMMON\easyax5043.c:486: uint8_t len_byte = axradio_framing_synclen;
                    053C   4673 	C$easyax5043.c$487$5$237 ==.
                           4674 ;	..\COMMON\easyax5043.c:487: uint8_t i = (len_byte & 0x07) ? 0x04 : 0;
   0D86 EC                 4675 	mov	a,r4
   0D87 54 07              4676 	anl	a,#0x07
   0D89 60 04              4677 	jz	00161$
   0D8B 7B 04              4678 	mov	r3,#0x04
   0D8D 80 02              4679 	sjmp	00162$
   0D8F                    4680 00161$:
   0D8F 7B 00              4681 	mov	r3,#0x00
   0D91                    4682 00162$:
                    0547   4683 	C$easyax5043.c$489$5$237 ==.
                           4684 ;	..\COMMON\easyax5043.c:489: len_byte += 7;
   0D91 74 07              4685 	mov	a,#0x07
   0D93 2C                 4686 	add	a,r4
                    054A   4687 	C$easyax5043.c$490$5$237 ==.
                           4688 ;	..\COMMON\easyax5043.c:490: len_byte >>= 3;
   0D94 C4                 4689 	swap	a
   0D95 23                 4690 	rl	a
   0D96 54 1F              4691 	anl	a,#0x1F
                    054E   4692 	C$easyax5043.c$491$5$237 ==.
                           4693 ;	..\COMMON\easyax5043.c:491: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | ((len_byte + 1) << 5);
   0D98 FC                 4694 	mov	r4,a
   0D99 04                 4695 	inc	a
   0D9A C4                 4696 	swap	a
   0D9B 23                 4697 	rl	a
   0D9C 54 E0              4698 	anl	a,#0xE0
   0D9E FA                 4699 	mov	r2,a
   0D9F 90 40 29           4700 	mov	dptr,#_AX5043_FIFODATA
   0DA2 74 01              4701 	mov	a,#0x01
   0DA4 4A                 4702 	orl	a,r2
   0DA5 F0                 4703 	movx	@dptr,a
                    055C   4704 	C$easyax5043.c$492$5$237 ==.
                           4705 ;	..\COMMON\easyax5043.c:492: AX5043_FIFODATA = axradio_framing_syncflags | i;
   0DA6 90 56 3B           4706 	mov	dptr,#_axradio_framing_syncflags
   0DA9 E4                 4707 	clr	a
   0DAA 93                 4708 	movc	a,@a+dptr
   0DAB FA                 4709 	mov	r2,a
   0DAC 90 40 29           4710 	mov	dptr,#_AX5043_FIFODATA
   0DAF EB                 4711 	mov	a,r3
   0DB0 4A                 4712 	orl	a,r2
   0DB1 F0                 4713 	movx	@dptr,a
                    0568   4714 	C$easyax5043.c$493$1$229 ==.
                           4715 ;	..\COMMON\easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DB2 7B 00              4716 	mov	r3,#0x00
   0DB4                    4717 00152$:
   0DB4 C3                 4718 	clr	c
   0DB5 EB                 4719 	mov	a,r3
   0DB6 9C                 4720 	subb	a,r4
   0DB7 50 0D              4721 	jnc	00124$
                    056F   4722 	C$easyax5043.c$495$6$238 ==.
                           4723 ;	..\COMMON\easyax5043.c:495: AX5043_FIFODATA = axradio_framing_syncword[i];
   0DB9 EB                 4724 	mov	a,r3
   0DBA 90 56 37           4725 	mov	dptr,#_axradio_framing_syncword
   0DBD 93                 4726 	movc	a,@a+dptr
   0DBE FA                 4727 	mov	r2,a
   0DBF 90 40 29           4728 	mov	dptr,#_AX5043_FIFODATA
   0DC2 F0                 4729 	movx	@dptr,a
                    0579   4730 	C$easyax5043.c$493$5$237 ==.
                           4731 ;	..\COMMON\easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DC3 0B                 4732 	inc	r3
   0DC4 80 EE              4733 	sjmp	00152$
   0DC6                    4734 00124$:
                    057C   4735 	C$easyax5043.c$502$4$233 ==.
                           4736 ;	..\COMMON\easyax5043.c:502: axradio_trxstate = trxstate_tx_packet;
   0DC6 75 0B 0C           4737 	mov	_axradio_trxstate,#0x0C
                    057F   4738 	C$easyax5043.c$503$4$233 ==.
                           4739 ;	..\COMMON\easyax5043.c:503: break;
   0DC9 02 0C 2D           4740 	ljmp	00157$
   0DCC                    4741 00127$:
                    0582   4742 	C$easyax5043.c$505$3$231 ==.
                           4743 ;	..\COMMON\easyax5043.c:505: if (cnt < 4)
   0DCC BF 04 00           4744 	cjne	r7,#0x04,00249$
   0DCF                    4745 00249$:
   0DCF 50 03              4746 	jnc	00250$
   0DD1 02 0F 63           4747 	ljmp	00151$
   0DD4                    4748 00250$:
                    058A   4749 	C$easyax5043.c$507$3$231 ==.
                           4750 ;	..\COMMON\easyax5043.c:507: cnt = 255;
   0DD4 7F FF              4751 	mov	r7,#0xFF
                    058C   4752 	C$easyax5043.c$508$3$231 ==.
                           4753 ;	..\COMMON\easyax5043.c:508: if (axradio_txbuffer_cnt < 255*8)
   0DD6 C3                 4754 	clr	c
   0DD7 ED                 4755 	mov	a,r5
   0DD8 94 F8              4756 	subb	a,#0xF8
   0DDA EE                 4757 	mov	a,r6
   0DDB 94 07              4758 	subb	a,#0x07
   0DDD 50 12              4759 	jnc	00131$
                    0595   4760 	C$easyax5043.c$509$3$231 ==.
                           4761 ;	..\COMMON\easyax5043.c:509: cnt = axradio_txbuffer_cnt >> 3;
   0DDF EE                 4762 	mov	a,r6
   0DE0 C4                 4763 	swap	a
   0DE1 23                 4764 	rl	a
   0DE2 CD                 4765 	xch	a,r5
   0DE3 C4                 4766 	swap	a
   0DE4 23                 4767 	rl	a
   0DE5 54 1F              4768 	anl	a,#0x1F
   0DE7 6D                 4769 	xrl	a,r5
   0DE8 CD                 4770 	xch	a,r5
   0DE9 54 1F              4771 	anl	a,#0x1F
   0DEB CD                 4772 	xch	a,r5
   0DEC 6D                 4773 	xrl	a,r5
   0DED CD                 4774 	xch	a,r5
   0DEE FE                 4775 	mov	r6,a
   0DEF 8D 07              4776 	mov	ar7,r5
   0DF1                    4777 00131$:
                    05A7   4778 	C$easyax5043.c$510$3$231 ==.
                           4779 ;	..\COMMON\easyax5043.c:510: if (cnt) {
   0DF1 EF                 4780 	mov	a,r7
   0DF2 60 46              4781 	jz	00133$
                    05AA   4782 	C$easyax5043.c$511$4$239 ==.
                           4783 ;	..\COMMON\easyax5043.c:511: axradio_txbuffer_cnt -= ((uint16_t)cnt) << 3;
   0DF4 8F 05              4784 	mov	ar5,r7
   0DF6 E4                 4785 	clr	a
   0DF7 C4                 4786 	swap	a
   0DF8 03                 4787 	rr	a
   0DF9 54 F8              4788 	anl	a,#0xF8
   0DFB CD                 4789 	xch	a,r5
   0DFC C4                 4790 	swap	a
   0DFD 03                 4791 	rr	a
   0DFE CD                 4792 	xch	a,r5
   0DFF 6D                 4793 	xrl	a,r5
   0E00 CD                 4794 	xch	a,r5
   0E01 54 F8              4795 	anl	a,#0xF8
   0E03 CD                 4796 	xch	a,r5
   0E04 6D                 4797 	xrl	a,r5
   0E05 FE                 4798 	mov	r6,a
   0E06 90 00 07           4799 	mov	dptr,#_axradio_txbuffer_cnt
   0E09 E0                 4800 	movx	a,@dptr
   0E0A FB                 4801 	mov	r3,a
   0E0B A3                 4802 	inc	dptr
   0E0C E0                 4803 	movx	a,@dptr
   0E0D FC                 4804 	mov	r4,a
   0E0E 90 00 07           4805 	mov	dptr,#_axradio_txbuffer_cnt
   0E11 EB                 4806 	mov	a,r3
   0E12 C3                 4807 	clr	c
   0E13 9D                 4808 	subb	a,r5
   0E14 F0                 4809 	movx	@dptr,a
   0E15 EC                 4810 	mov	a,r4
   0E16 9E                 4811 	subb	a,r6
   0E17 A3                 4812 	inc	dptr
   0E18 F0                 4813 	movx	@dptr,a
                    05CF   4814 	C$easyax5043.c$512$4$239 ==.
                           4815 ;	..\COMMON\easyax5043.c:512: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0E19 90 40 29           4816 	mov	dptr,#_AX5043_FIFODATA
   0E1C 74 62              4817 	mov	a,#0x62
   0E1E F0                 4818 	movx	@dptr,a
                    05D5   4819 	C$easyax5043.c$513$4$239 ==.
                           4820 ;	..\COMMON\easyax5043.c:513: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0E1F 90 56 2B           4821 	mov	dptr,#_axradio_phy_preamble_flags
   0E22 E4                 4822 	clr	a
   0E23 93                 4823 	movc	a,@a+dptr
   0E24 90 40 29           4824 	mov	dptr,#_AX5043_FIFODATA
   0E27 F0                 4825 	movx	@dptr,a
                    05DE   4826 	C$easyax5043.c$514$4$239 ==.
                           4827 ;	..\COMMON\easyax5043.c:514: AX5043_FIFODATA = cnt;
   0E28 90 40 29           4828 	mov	dptr,#_AX5043_FIFODATA
   0E2B EF                 4829 	mov	a,r7
   0E2C F0                 4830 	movx	@dptr,a
                    05E3   4831 	C$easyax5043.c$515$4$239 ==.
                           4832 ;	..\COMMON\easyax5043.c:515: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0E2D 90 56 2A           4833 	mov	dptr,#_axradio_phy_preamble_byte
   0E30 E4                 4834 	clr	a
   0E31 93                 4835 	movc	a,@a+dptr
   0E32 FE                 4836 	mov	r6,a
   0E33 90 40 29           4837 	mov	dptr,#_AX5043_FIFODATA
   0E36 F0                 4838 	movx	@dptr,a
                    05ED   4839 	C$easyax5043.c$516$4$239 ==.
                           4840 ;	..\COMMON\easyax5043.c:516: break;
   0E37 02 0C 2D           4841 	ljmp	00157$
   0E3A                    4842 00133$:
                    05F0   4843 	C$easyax5043.c$519$4$231 ==.
                           4844 ;	..\COMMON\easyax5043.c:519: uint8_t byte = axradio_phy_preamble_byte;
   0E3A 90 56 2A           4845 	mov	dptr,#_axradio_phy_preamble_byte
   0E3D E4                 4846 	clr	a
   0E3E 93                 4847 	movc	a,@a+dptr
   0E3F FE                 4848 	mov	r6,a
                    05F6   4849 	C$easyax5043.c$520$4$240 ==.
                           4850 ;	..\COMMON\easyax5043.c:520: cnt = axradio_txbuffer_cnt;
   0E40 90 00 07           4851 	mov	dptr,#_axradio_txbuffer_cnt
   0E43 E0                 4852 	movx	a,@dptr
   0E44 FC                 4853 	mov	r4,a
   0E45 A3                 4854 	inc	dptr
   0E46 E0                 4855 	movx	a,@dptr
   0E47 8C 07              4856 	mov	ar7,r4
                    05FF   4857 	C$easyax5043.c$521$4$240 ==.
                           4858 ;	..\COMMON\easyax5043.c:521: axradio_txbuffer_cnt = 0;
   0E49 90 00 07           4859 	mov	dptr,#_axradio_txbuffer_cnt
   0E4C E4                 4860 	clr	a
   0E4D F0                 4861 	movx	@dptr,a
   0E4E A3                 4862 	inc	dptr
   0E4F F0                 4863 	movx	@dptr,a
                    0606   4864 	C$easyax5043.c$522$4$240 ==.
                           4865 ;	..\COMMON\easyax5043.c:522: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                    0606   4866 	C$easyax5043.c$523$4$240 ==.
                           4867 ;	..\COMMON\easyax5043.c:523: AX5043_FIFODATA = 0x1C;
   0E50 90 40 29           4868 	mov	dptr,#_AX5043_FIFODATA
   0E53 74 41              4869 	mov	a,#0x41
   0E55 F0                 4870 	movx	@dptr,a
   0E56 74 1C              4871 	mov	a,#0x1C
   0E58 F0                 4872 	movx	@dptr,a
                    060F   4873 	C$easyax5043.c$524$4$240 ==.
                           4874 ;	..\COMMON\easyax5043.c:524: if (AX5043_PKTADDRCFG & 0x80) {
   0E59 90 42 00           4875 	mov	dptr,#_AX5043_PKTADDRCFG
   0E5C E0                 4876 	movx	a,@dptr
   0E5D FD                 4877 	mov	r5,a
   0E5E 30 E7 27           4878 	jnb	acc.7,00135$
                    0617   4879 	C$easyax5043.c$526$5$241 ==.
                           4880 ;	..\COMMON\easyax5043.c:526: byte &= 0xFF << (8-cnt);
   0E61 74 08              4881 	mov	a,#0x08
   0E63 C3                 4882 	clr	c
   0E64 9F                 4883 	subb	a,r7
   0E65 FD                 4884 	mov	r5,a
   0E66 8D F0              4885 	mov	b,r5
   0E68 05 F0              4886 	inc	b
   0E6A 74 FF              4887 	mov	a,#0xFF
   0E6C 80 02              4888 	sjmp	00256$
   0E6E                    4889 00254$:
   0E6E 25 E0              4890 	add	a,acc
   0E70                    4891 00256$:
   0E70 D5 F0 FB           4892 	djnz	b,00254$
   0E73 FD                 4893 	mov	r5,a
   0E74 52 06              4894 	anl	ar6,a
                    062C   4895 	C$easyax5043.c$527$5$241 ==.
                           4896 ;	..\COMMON\easyax5043.c:527: byte |= 0x80 >> cnt;
   0E76 8F F0              4897 	mov	b,r7
   0E78 05 F0              4898 	inc	b
   0E7A 74 80              4899 	mov	a,#0x80
   0E7C 80 02              4900 	sjmp	00258$
   0E7E                    4901 00257$:
   0E7E C3                 4902 	clr	c
   0E7F 13                 4903 	rrc	a
   0E80                    4904 00258$:
   0E80 D5 F0 FB           4905 	djnz	b,00257$
   0E83 FD                 4906 	mov	r5,a
   0E84 42 06              4907 	orl	ar6,a
   0E86 80 2C              4908 	sjmp	00136$
   0E88                    4909 00135$:
                    063E   4910 	C$easyax5043.c$530$5$242 ==.
                           4911 ;	..\COMMON\easyax5043.c:530: byte &= 0xFF >> (8-cnt);
   0E88 8F 04              4912 	mov	ar4,r7
   0E8A 7D 00              4913 	mov	r5,#0x00
   0E8C 74 08              4914 	mov	a,#0x08
   0E8E C3                 4915 	clr	c
   0E8F 9C                 4916 	subb	a,r4
   0E90 FC                 4917 	mov	r4,a
   0E91 E4                 4918 	clr	a
   0E92 9D                 4919 	subb	a,r5
   0E93 FD                 4920 	mov	r5,a
   0E94 8C F0              4921 	mov	b,r4
   0E96 05 F0              4922 	inc	b
   0E98 74 FF              4923 	mov	a,#0xFF
   0E9A 80 02              4924 	sjmp	00260$
   0E9C                    4925 00259$:
   0E9C C3                 4926 	clr	c
   0E9D 13                 4927 	rrc	a
   0E9E                    4928 00260$:
   0E9E D5 F0 FB           4929 	djnz	b,00259$
   0EA1 FC                 4930 	mov	r4,a
   0EA2 52 06              4931 	anl	ar6,a
                    065A   4932 	C$easyax5043.c$531$5$242 ==.
                           4933 ;	..\COMMON\easyax5043.c:531: byte |= 0x01 << cnt;
   0EA4 8F F0              4934 	mov	b,r7
   0EA6 05 F0              4935 	inc	b
   0EA8 74 01              4936 	mov	a,#0x01
   0EAA 80 02              4937 	sjmp	00263$
   0EAC                    4938 00261$:
   0EAC 25 E0              4939 	add	a,acc
   0EAE                    4940 00263$:
   0EAE D5 F0 FB           4941 	djnz	b,00261$
   0EB1 FD                 4942 	mov	r5,a
   0EB2 42 06              4943 	orl	ar6,a
   0EB4                    4944 00136$:
                    066A   4945 	C$easyax5043.c$533$4$240 ==.
                           4946 ;	..\COMMON\easyax5043.c:533: AX5043_FIFODATA = byte;
   0EB4 90 40 29           4947 	mov	dptr,#_AX5043_FIFODATA
   0EB7 EE                 4948 	mov	a,r6
   0EB8 F0                 4949 	movx	@dptr,a
                    066F   4950 	C$easyax5043.c$535$3$231 ==.
                           4951 ;	..\COMMON\easyax5043.c:535: break;
   0EB9 02 0C 2D           4952 	ljmp	00157$
                    0672   4953 	C$easyax5043.c$537$3$231 ==.
                           4954 ;	..\COMMON\easyax5043.c:537: case trxstate_tx_packet:
   0EBC                    4955 00137$:
                    0672   4956 	C$easyax5043.c$538$3$231 ==.
                           4957 ;	..\COMMON\easyax5043.c:538: if (cnt < 11)
   0EBC BF 0B 00           4958 	cjne	r7,#0x0B,00264$
   0EBF                    4959 00264$:
   0EBF 50 03              4960 	jnc	00265$
   0EC1 02 0F 63           4961 	ljmp	00151$
   0EC4                    4962 00265$:
                    067A   4963 	C$easyax5043.c$541$4$231 ==.
                           4964 ;	..\COMMON\easyax5043.c:541: uint8_t flags = 0;
   0EC4 7E 00              4965 	mov	r6,#0x00
                    067C   4966 	C$easyax5043.c$542$4$243 ==.
                           4967 ;	..\COMMON\easyax5043.c:542: if (!axradio_txbuffer_cnt)
   0EC6 90 00 07           4968 	mov	dptr,#_axradio_txbuffer_cnt
   0EC9 E0                 4969 	movx	a,@dptr
   0ECA FC                 4970 	mov	r4,a
   0ECB A3                 4971 	inc	dptr
   0ECC E0                 4972 	movx	a,@dptr
   0ECD FD                 4973 	mov	r5,a
   0ECE 4C                 4974 	orl	a,r4
   0ECF 70 02              4975 	jnz	00141$
                    0687   4976 	C$easyax5043.c$543$4$243 ==.
                           4977 ;	..\COMMON\easyax5043.c:543: flags |= 0x01; // flag byte: pkt_start
   0ED1 7E 01              4978 	mov	r6,#0x01
   0ED3                    4979 00141$:
                    0689   4980 	C$easyax5043.c$545$5$244 ==.
                           4981 ;	..\COMMON\easyax5043.c:545: uint16_t len = axradio_txbuffer_len - axradio_txbuffer_cnt;
   0ED3 90 00 07           4982 	mov	dptr,#_axradio_txbuffer_cnt
   0ED6 E0                 4983 	movx	a,@dptr
   0ED7 FC                 4984 	mov	r4,a
   0ED8 A3                 4985 	inc	dptr
   0ED9 E0                 4986 	movx	a,@dptr
   0EDA FD                 4987 	mov	r5,a
   0EDB 90 00 05           4988 	mov	dptr,#_axradio_txbuffer_len
   0EDE E0                 4989 	movx	a,@dptr
   0EDF FA                 4990 	mov	r2,a
   0EE0 A3                 4991 	inc	dptr
   0EE1 E0                 4992 	movx	a,@dptr
   0EE2 FB                 4993 	mov	r3,a
   0EE3 EA                 4994 	mov	a,r2
   0EE4 C3                 4995 	clr	c
   0EE5 9C                 4996 	subb	a,r4
   0EE6 FC                 4997 	mov	r4,a
   0EE7 EB                 4998 	mov	a,r3
   0EE8 9D                 4999 	subb	a,r5
   0EE9 FD                 5000 	mov	r5,a
                    06A0   5001 	C$easyax5043.c$546$5$244 ==.
                           5002 ;	..\COMMON\easyax5043.c:546: cnt -= 3;
   0EEA 1F                 5003 	dec	r7
   0EEB 1F                 5004 	dec	r7
   0EEC 1F                 5005 	dec	r7
                    06A3   5006 	C$easyax5043.c$547$5$244 ==.
                           5007 ;	..\COMMON\easyax5043.c:547: if (cnt >= len) {
   0EED 8F 02              5008 	mov	ar2,r7
   0EEF 7B 00              5009 	mov	r3,#0x00
   0EF1 C3                 5010 	clr	c
   0EF2 EA                 5011 	mov	a,r2
   0EF3 9C                 5012 	subb	a,r4
   0EF4 EB                 5013 	mov	a,r3
   0EF5 9D                 5014 	subb	a,r5
   0EF6 40 05              5015 	jc	00143$
                    06AE   5016 	C$easyax5043.c$548$6$245 ==.
                           5017 ;	..\COMMON\easyax5043.c:548: cnt = len;
   0EF8 8C 07              5018 	mov	ar7,r4
                    06B0   5019 	C$easyax5043.c$549$6$245 ==.
                           5020 ;	..\COMMON\easyax5043.c:549: flags |= 0x02; // flag byte: pkt_end
   0EFA 43 06 02           5021 	orl	ar6,#0x02
   0EFD                    5022 00143$:
                    06B3   5023 	C$easyax5043.c$552$4$243 ==.
                           5024 ;	..\COMMON\easyax5043.c:552: if (!cnt)
   0EFD EF                 5025 	mov	a,r7
   0EFE 60 54              5026 	jz	00150$
                    06B6   5027 	C$easyax5043.c$554$4$243 ==.
                           5028 ;	..\COMMON\easyax5043.c:554: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    06B6   5029 	C$easyax5043.c$555$4$243 ==.
                           5030 ;	..\COMMON\easyax5043.c:555: AX5043_FIFODATA = cnt + 1; // write FIFO chunk length byte (length includes the flag byte, thus the +1)
   0F00 90 40 29           5031 	mov	dptr,#_AX5043_FIFODATA
   0F03 74 E1              5032 	mov	a,#0xE1
   0F05 F0                 5033 	movx	@dptr,a
   0F06 EF                 5034 	mov	a,r7
   0F07 04                 5035 	inc	a
   0F08 F0                 5036 	movx	@dptr,a
                    06BF   5037 	C$easyax5043.c$556$4$243 ==.
                           5038 ;	..\COMMON\easyax5043.c:556: AX5043_FIFODATA = flags;
   0F09 90 40 29           5039 	mov	dptr,#_AX5043_FIFODATA
   0F0C EE                 5040 	mov	a,r6
   0F0D F0                 5041 	movx	@dptr,a
                    06C4   5042 	C$easyax5043.c$557$4$243 ==.
                           5043 ;	..\COMMON\easyax5043.c:557: ax5043_writefifo(&axradio_txbuffer[axradio_txbuffer_cnt], cnt);
   0F0E 90 00 07           5044 	mov	dptr,#_axradio_txbuffer_cnt
   0F11 E0                 5045 	movx	a,@dptr
   0F12 FC                 5046 	mov	r4,a
   0F13 A3                 5047 	inc	dptr
   0F14 E0                 5048 	movx	a,@dptr
   0F15 FD                 5049 	mov	r5,a
   0F16 EC                 5050 	mov	a,r4
   0F17 24 2A              5051 	add	a,#_axradio_txbuffer
   0F19 FC                 5052 	mov	r4,a
   0F1A ED                 5053 	mov	a,r5
   0F1B 34 00              5054 	addc	a,#(_axradio_txbuffer >> 8)
   0F1D FD                 5055 	mov	r5,a
   0F1E 7B 00              5056 	mov	r3,#0x00
   0F20 C0 07              5057 	push	ar7
   0F22 C0 06              5058 	push	ar6
   0F24 C0 07              5059 	push	ar7
   0F26 8C 82              5060 	mov	dpl,r4
   0F28 8D 83              5061 	mov	dph,r5
   0F2A 8B F0              5062 	mov	b,r3
   0F2C 12 50 E2           5063 	lcall	_ax5043_writefifo
   0F2F 15 81              5064 	dec	sp
   0F31 D0 06              5065 	pop	ar6
   0F33 D0 07              5066 	pop	ar7
                    06EB   5067 	C$easyax5043.c$558$4$243 ==.
                           5068 ;	..\COMMON\easyax5043.c:558: axradio_txbuffer_cnt += cnt;
   0F35 7D 00              5069 	mov	r5,#0x00
   0F37 90 00 07           5070 	mov	dptr,#_axradio_txbuffer_cnt
   0F3A E0                 5071 	movx	a,@dptr
   0F3B FB                 5072 	mov	r3,a
   0F3C A3                 5073 	inc	dptr
   0F3D E0                 5074 	movx	a,@dptr
   0F3E FC                 5075 	mov	r4,a
   0F3F 90 00 07           5076 	mov	dptr,#_axradio_txbuffer_cnt
   0F42 EF                 5077 	mov	a,r7
   0F43 2B                 5078 	add	a,r3
   0F44 F0                 5079 	movx	@dptr,a
   0F45 ED                 5080 	mov	a,r5
   0F46 3C                 5081 	addc	a,r4
   0F47 A3                 5082 	inc	dptr
   0F48 F0                 5083 	movx	@dptr,a
                    06FF   5084 	C$easyax5043.c$559$4$243 ==.
                           5085 ;	..\COMMON\easyax5043.c:559: if (flags & 0x02)
   0F49 EE                 5086 	mov	a,r6
   0F4A 20 E1 03           5087 	jb	acc.1,00269$
   0F4D 02 0C 2D           5088 	ljmp	00157$
   0F50                    5089 00269$:
                    0706   5090 	C$easyax5043.c$560$4$243 ==.
                           5091 ;	..\COMMON\easyax5043.c:560: goto pktend;
                    0706   5092 	C$easyax5043.c$564$3$231 ==.
                           5093 ;	..\COMMON\easyax5043.c:564: default:
   0F50 80 02              5094 	sjmp	00150$
   0F52                    5095 00148$:
                    0708   5096 	C$easyax5043.c$565$3$231 ==.
                           5097 ;	..\COMMON\easyax5043.c:565: return;
                    0708   5098 	C$easyax5043.c$568$1$229 ==.
                           5099 ;	..\COMMON\easyax5043.c:568: pktend:
   0F52 80 15              5100 	sjmp	00159$
   0F54                    5101 00150$:
                    070A   5102 	C$easyax5043.c$569$1$229 ==.
                           5103 ;	..\COMMON\easyax5043.c:569: axradio_trxstate = trxstate_tx_waitdone;
   0F54 75 0B 0D           5104 	mov	_axradio_trxstate,#0x0D
                    070D   5105 	C$easyax5043.c$570$1$229 ==.
                           5106 ;	..\COMMON\easyax5043.c:570: AX5043_RADIOEVENTMASK0 = 0x01; // enable REVRDONE event
   0F57 90 40 09           5107 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0F5A 74 01              5108 	mov	a,#0x01
   0F5C F0                 5109 	movx	@dptr,a
                    0713   5110 	C$easyax5043.c$571$1$229 ==.
                           5111 ;	..\COMMON\easyax5043.c:571: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   0F5D 90 40 07           5112 	mov	dptr,#_AX5043_IRQMASK0
   0F60 74 40              5113 	mov	a,#0x40
   0F62 F0                 5114 	movx	@dptr,a
                    0719   5115 	C$easyax5043.c$572$1$229 ==.
                           5116 ;	..\COMMON\easyax5043.c:572: fifocommit:
   0F63                    5117 00151$:
                    0719   5118 	C$easyax5043.c$573$1$229 ==.
                           5119 ;	..\COMMON\easyax5043.c:573: AX5043_FIFOSTAT = 4; // commit
   0F63 90 40 28           5120 	mov	dptr,#_AX5043_FIFOSTAT
   0F66 74 04              5121 	mov	a,#0x04
   0F68 F0                 5122 	movx	@dptr,a
   0F69                    5123 00159$:
                    071F   5124 	C$easyax5043.c$574$1$229 ==.
                    071F   5125 	XFeasyax5043$transmit_isr$0$0 ==.
   0F69 22                 5126 	ret
                           5127 ;------------------------------------------------------------
                           5128 ;Allocation info for local variables in function 'axradio_isr'
                           5129 ;------------------------------------------------------------
                           5130 ;evt                       Allocated to registers r7 
                           5131 ;------------------------------------------------------------
                    0720   5132 	G$axradio_isr$0$0 ==.
                    0720   5133 	C$easyax5043.c$577$1$229 ==.
                           5134 ;	..\COMMON\easyax5043.c:577: void axradio_isr(void) __interrupt INT_RADIO
                           5135 ;	-----------------------------------------
                           5136 ;	 function axradio_isr
                           5137 ;	-----------------------------------------
   0F6A                    5138 _axradio_isr:
   0F6A C0 20              5139 	push	bits
   0F6C C0 E0              5140 	push	acc
   0F6E C0 F0              5141 	push	b
   0F70 C0 82              5142 	push	dpl
   0F72 C0 83              5143 	push	dph
   0F74 C0 07              5144 	push	(0+7)
   0F76 C0 06              5145 	push	(0+6)
   0F78 C0 05              5146 	push	(0+5)
   0F7A C0 04              5147 	push	(0+4)
   0F7C C0 03              5148 	push	(0+3)
   0F7E C0 02              5149 	push	(0+2)
   0F80 C0 01              5150 	push	(0+1)
   0F82 C0 00              5151 	push	(0+0)
   0F84 C0 D0              5152 	push	psw
   0F86 75 D0 00           5153 	mov	psw,#0x00
                    073F   5154 	C$easyax5043.c$587$1$247 ==.
                           5155 ;	..\COMMON\easyax5043.c:587: switch (axradio_trxstate) {
   0F89 E5 0B              5156 	mov	a,_axradio_trxstate
   0F8B FF                 5157 	mov	r7,a
   0F8C 24 EF              5158 	add	a,#0xff - 0x10
   0F8E 50 03              5159 	jnc	00222$
   0F90 02 0F C5           5160 	ljmp	00101$
   0F93                    5161 00222$:
   0F93 EF                 5162 	mov	a,r7
   0F94 F5 F0              5163 	mov	b,a
   0F96 24 0A              5164 	add	a,#(00223$-3-.)
   0F98 83                 5165 	movc	a,@a+pc
   0F99 C0 E0              5166 	push	acc
   0F9B E5 F0              5167 	mov	a,b
   0F9D 24 14              5168 	add	a,#(00224$-3-.)
   0F9F 83                 5169 	movc	a,@a+pc
   0FA0 C0 E0              5170 	push	acc
   0FA2 22                 5171 	ret
   0FA3                    5172 00223$:
   0FA3 C5                 5173 	.db	00101$
   0FA4 21                 5174 	.db	00162$
   0FA5 E7                 5175 	.db	00158$
   0FA6 D1                 5176 	.db	00102$
   0FA7 C5                 5177 	.db	00101$
   0FA8 DC                 5178 	.db	00103$
   0FA9 C5                 5179 	.db	00101$
   0FAA E7                 5180 	.db	00104$
   0FAB C5                 5181 	.db	00101$
   0FAC F2                 5182 	.db	00105$
   0FAD 83                 5183 	.db	00114$
   0FAE 83                 5184 	.db	00115$
   0FAF 83                 5185 	.db	00116$
   0FB0 89                 5186 	.db	00117$
   0FB1 BE                 5187 	.db	00144$
   0FB2 03                 5188 	.db	00145$
   0FB3 2A                 5189 	.db	00148$
   0FB4                    5190 00224$:
   0FB4 0F                 5191 	.db	00101$>>8
   0FB5 13                 5192 	.db	00162$>>8
   0FB6 12                 5193 	.db	00158$>>8
   0FB7 0F                 5194 	.db	00102$>>8
   0FB8 0F                 5195 	.db	00101$>>8
   0FB9 0F                 5196 	.db	00103$>>8
   0FBA 0F                 5197 	.db	00101$>>8
   0FBB 0F                 5198 	.db	00104$>>8
   0FBC 0F                 5199 	.db	00101$>>8
   0FBD 0F                 5200 	.db	00105$>>8
   0FBE 10                 5201 	.db	00114$>>8
   0FBF 10                 5202 	.db	00115$>>8
   0FC0 10                 5203 	.db	00116$>>8
   0FC1 10                 5204 	.db	00117$>>8
   0FC2 11                 5205 	.db	00144$>>8
   0FC3 12                 5206 	.db	00145$>>8
   0FC4 12                 5207 	.db	00148$>>8
                    077B   5208 	C$easyax5043.c$588$2$248 ==.
                           5209 ;	..\COMMON\easyax5043.c:588: default:
   0FC5                    5210 00101$:
                    077B   5211 	C$easyax5043.c$589$2$248 ==.
                           5212 ;	..\COMMON\easyax5043.c:589: AX5043_IRQMASK1 = 0x00;
   0FC5 90 40 06           5213 	mov	dptr,#_AX5043_IRQMASK1
                    077E   5214 	C$easyax5043.c$590$2$248 ==.
                           5215 ;	..\COMMON\easyax5043.c:590: AX5043_IRQMASK0 = 0x00;
   0FC8 E4                 5216 	clr	a
   0FC9 F0                 5217 	movx	@dptr,a
   0FCA 90 40 07           5218 	mov	dptr,#_AX5043_IRQMASK0
   0FCD F0                 5219 	movx	@dptr,a
                    0784   5220 	C$easyax5043.c$591$2$248 ==.
                           5221 ;	..\COMMON\easyax5043.c:591: break;
   0FCE 02 13 24           5222 	ljmp	00164$
                    0787   5223 	C$easyax5043.c$593$2$248 ==.
                           5224 ;	..\COMMON\easyax5043.c:593: case trxstate_wait_xtal:
   0FD1                    5225 00102$:
                    0787   5226 	C$easyax5043.c$594$2$248 ==.
                           5227 ;	..\COMMON\easyax5043.c:594: AX5043_IRQMASK1 = 0x00; // otherwise crystal ready will fire all over again
   0FD1 90 40 06           5228 	mov	dptr,#_AX5043_IRQMASK1
   0FD4 E4                 5229 	clr	a
   0FD5 F0                 5230 	movx	@dptr,a
                    078C   5231 	C$easyax5043.c$595$2$248 ==.
                           5232 ;	..\COMMON\easyax5043.c:595: axradio_trxstate = trxstate_xtal_ready;
   0FD6 75 0B 04           5233 	mov	_axradio_trxstate,#0x04
                    078F   5234 	C$easyax5043.c$596$2$248 ==.
                           5235 ;	..\COMMON\easyax5043.c:596: break;
   0FD9 02 13 24           5236 	ljmp	00164$
                    0792   5237 	C$easyax5043.c$598$2$248 ==.
                           5238 ;	..\COMMON\easyax5043.c:598: case trxstate_pll_ranging:
   0FDC                    5239 00103$:
                    0792   5240 	C$easyax5043.c$599$2$248 ==.
                           5241 ;	..\COMMON\easyax5043.c:599: AX5043_IRQMASK1 = 0x00; // otherwise autoranging done will fire all over again
   0FDC 90 40 06           5242 	mov	dptr,#_AX5043_IRQMASK1
   0FDF E4                 5243 	clr	a
   0FE0 F0                 5244 	movx	@dptr,a
                    0797   5245 	C$easyax5043.c$600$2$248 ==.
                           5246 ;	..\COMMON\easyax5043.c:600: axradio_trxstate = trxstate_pll_ranging_done;
   0FE1 75 0B 06           5247 	mov	_axradio_trxstate,#0x06
                    079A   5248 	C$easyax5043.c$601$2$248 ==.
                           5249 ;	..\COMMON\easyax5043.c:601: break;
   0FE4 02 13 24           5250 	ljmp	00164$
                    079D   5251 	C$easyax5043.c$603$2$248 ==.
                           5252 ;	..\COMMON\easyax5043.c:603: case trxstate_pll_settling:
   0FE7                    5253 00104$:
                    079D   5254 	C$easyax5043.c$604$2$248 ==.
                           5255 ;	..\COMMON\easyax5043.c:604: AX5043_RADIOEVENTMASK0 = 0x00;
   0FE7 90 40 09           5256 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0FEA E4                 5257 	clr	a
   0FEB F0                 5258 	movx	@dptr,a
                    07A2   5259 	C$easyax5043.c$605$2$248 ==.
                           5260 ;	..\COMMON\easyax5043.c:605: axradio_trxstate = trxstate_pll_settled;
   0FEC 75 0B 08           5261 	mov	_axradio_trxstate,#0x08
                    07A5   5262 	C$easyax5043.c$606$2$248 ==.
                           5263 ;	..\COMMON\easyax5043.c:606: break;
   0FEF 02 13 24           5264 	ljmp	00164$
                    07A8   5265 	C$easyax5043.c$608$2$248 ==.
                           5266 ;	..\COMMON\easyax5043.c:608: case trxstate_tx_xtalwait:
   0FF2                    5267 00105$:
                    07A8   5268 	C$easyax5043.c$609$2$248 ==.
                           5269 ;	..\COMMON\easyax5043.c:609: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   0FF2 90 40 0F           5270 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   0FF5 E0                 5271 	movx	a,@dptr
                    07AC   5272 	C$easyax5043.c$610$2$248 ==.
                           5273 ;	..\COMMON\easyax5043.c:610: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   0FF6 90 40 28           5274 	mov	dptr,#_AX5043_FIFOSTAT
   0FF9 74 03              5275 	mov	a,#0x03
   0FFB F0                 5276 	movx	@dptr,a
                    07B2   5277 	C$easyax5043.c$611$2$248 ==.
                           5278 ;	..\COMMON\easyax5043.c:611: AX5043_IRQMASK1 = 0x00;
   0FFC 90 40 06           5279 	mov	dptr,#_AX5043_IRQMASK1
   0FFF E4                 5280 	clr	a
   1000 F0                 5281 	movx	@dptr,a
                    07B7   5282 	C$easyax5043.c$612$2$248 ==.
                           5283 ;	..\COMMON\easyax5043.c:612: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1001 90 40 07           5284 	mov	dptr,#_AX5043_IRQMASK0
   1004 74 08              5285 	mov	a,#0x08
   1006 F0                 5286 	movx	@dptr,a
                    07BD   5287 	C$easyax5043.c$613$2$248 ==.
                           5288 ;	..\COMMON\easyax5043.c:613: axradio_trxstate = trxstate_tx_longpreamble;
   1007 75 0B 0A           5289 	mov	_axradio_trxstate,#0x0A
                    07C0   5290 	C$easyax5043.c$615$2$248 ==.
                           5291 ;	..\COMMON\easyax5043.c:615: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   100A 90 40 10           5292 	mov	dptr,#_AX5043_MODULATION
   100D E0                 5293 	movx	a,@dptr
   100E FF                 5294 	mov	r7,a
   100F 53 07 0F           5295 	anl	ar7,#0x0F
   1012 BF 09 0F           5296 	cjne	r7,#0x09,00107$
                    07CB   5297 	C$easyax5043.c$616$3$249 ==.
                           5298 ;	..\COMMON\easyax5043.c:616: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    07CB   5299 	C$easyax5043.c$617$3$249 ==.
                           5300 ;	..\COMMON\easyax5043.c:617: AX5043_FIFODATA = 2;  // length (including flags)
                    07CB   5301 	C$easyax5043.c$618$3$249 ==.
                           5302 ;	..\COMMON\easyax5043.c:618: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                    07CB   5303 	C$easyax5043.c$619$3$249 ==.
                           5304 ;	..\COMMON\easyax5043.c:619: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1015 90 40 29           5305 	mov	dptr,#_AX5043_FIFODATA
   1018 74 E1              5306 	mov	a,#0xE1
   101A F0                 5307 	movx	@dptr,a
   101B 74 02              5308 	mov	a,#0x02
   101D F0                 5309 	movx	@dptr,a
   101E 74 01              5310 	mov	a,#0x01
   1020 F0                 5311 	movx	@dptr,a
   1021 74 11              5312 	mov	a,#0x11
   1023 F0                 5313 	movx	@dptr,a
   1024                    5314 00107$:
                    07DA   5315 	C$easyax5043.c$626$2$248 ==.
                           5316 ;	..\COMMON\easyax5043.c:626: transmit_isr();
   1024 12 0C 2D           5317 	lcall	_transmit_isr
                    07DD   5318 	C$easyax5043.c$627$2$248 ==.
                           5319 ;	..\COMMON\easyax5043.c:627: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1027 90 40 02           5320 	mov	dptr,#_AX5043_PWRMODE
   102A 74 0D              5321 	mov	a,#0x0D
   102C F0                 5322 	movx	@dptr,a
                    07E3   5323 	C$easyax5043.c$628$2$248 ==.
                           5324 ;	..\COMMON\easyax5043.c:628: update_timeanchor();
   102D 12 08 4A           5325 	lcall	_update_timeanchor
                    07E6   5326 	C$easyax5043.c$629$2$248 ==.
                           5327 ;	..\COMMON\easyax5043.c:629: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1030 90 02 6B           5328 	mov	dptr,#_axradio_cb_transmitstart
   1033 12 50 73           5329 	lcall	_wtimer_remove_callback
                    07EC   5330 	C$easyax5043.c$630$2$248 ==.
                           5331 ;	..\COMMON\easyax5043.c:630: switch (axradio_mode) {
   1036 AF 0A              5332 	mov	r7,_axradio_mode
   1038 BF 12 02           5333 	cjne	r7,#0x12,00227$
   103B 80 03              5334 	sjmp	00109$
   103D                    5335 00227$:
   103D BF 13 19           5336 	cjne	r7,#0x13,00112$
                    07F6   5337 	C$easyax5043.c$632$3$250 ==.
                           5338 ;	..\COMMON\easyax5043.c:632: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   1040                    5339 00109$:
                    07F6   5340 	C$easyax5043.c$633$3$250 ==.
                           5341 ;	..\COMMON\easyax5043.c:633: if (axradio_ack_count != axradio_framing_ack_retransmissions) {
   1040 90 00 0E           5342 	mov	dptr,#_axradio_ack_count
   1043 E0                 5343 	movx	a,@dptr
   1044 FF                 5344 	mov	r7,a
   1045 90 56 45           5345 	mov	dptr,#_axradio_framing_ack_retransmissions
   1048 E4                 5346 	clr	a
   1049 93                 5347 	movc	a,@a+dptr
   104A FE                 5348 	mov	r6,a
   104B EF                 5349 	mov	a,r7
   104C B5 06 02           5350 	cjne	a,ar6,00230$
   104F 80 08              5351 	sjmp	00112$
   1051                    5352 00230$:
                    0807   5353 	C$easyax5043.c$634$4$251 ==.
                           5354 ;	..\COMMON\easyax5043.c:634: axradio_cb_transmitstart.st.error = AXRADIO_ERR_RETRANSMISSION;
   1051 90 02 70           5355 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1054 74 08              5356 	mov	a,#0x08
   1056 F0                 5357 	movx	@dptr,a
                    080D   5358 	C$easyax5043.c$635$4$251 ==.
                           5359 ;	..\COMMON\easyax5043.c:635: break;
                    080D   5360 	C$easyax5043.c$638$3$250 ==.
                           5361 ;	..\COMMON\easyax5043.c:638: default:
   1057 80 05              5362 	sjmp	00113$
   1059                    5363 00112$:
                    080F   5364 	C$easyax5043.c$639$3$250 ==.
                           5365 ;	..\COMMON\easyax5043.c:639: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1059 90 02 70           5366 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   105C E4                 5367 	clr	a
   105D F0                 5368 	movx	@dptr,a
                    0814   5369 	C$easyax5043.c$641$2$248 ==.
                           5370 ;	..\COMMON\easyax5043.c:641: }
   105E                    5371 00113$:
                    0814   5372 	C$easyax5043.c$642$2$248 ==.
                           5373 ;	..\COMMON\easyax5043.c:642: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   105E 90 00 1A           5374 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1061 E0                 5375 	movx	a,@dptr
   1062 FC                 5376 	mov	r4,a
   1063 A3                 5377 	inc	dptr
   1064 E0                 5378 	movx	a,@dptr
   1065 FD                 5379 	mov	r5,a
   1066 A3                 5380 	inc	dptr
   1067 E0                 5381 	movx	a,@dptr
   1068 FE                 5382 	mov	r6,a
   1069 A3                 5383 	inc	dptr
   106A E0                 5384 	movx	a,@dptr
   106B FF                 5385 	mov	r7,a
   106C 90 02 71           5386 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   106F EC                 5387 	mov	a,r4
   1070 F0                 5388 	movx	@dptr,a
   1071 A3                 5389 	inc	dptr
   1072 ED                 5390 	mov	a,r5
   1073 F0                 5391 	movx	@dptr,a
   1074 A3                 5392 	inc	dptr
   1075 EE                 5393 	mov	a,r6
   1076 F0                 5394 	movx	@dptr,a
   1077 A3                 5395 	inc	dptr
   1078 EF                 5396 	mov	a,r7
   1079 F0                 5397 	movx	@dptr,a
                    0830   5398 	C$easyax5043.c$643$2$248 ==.
                           5399 ;	..\COMMON\easyax5043.c:643: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   107A 90 02 6B           5400 	mov	dptr,#_axradio_cb_transmitstart
   107D 12 44 48           5401 	lcall	_wtimer_add_callback
                    0836   5402 	C$easyax5043.c$644$2$248 ==.
                           5403 ;	..\COMMON\easyax5043.c:644: break;
   1080 02 13 24           5404 	ljmp	00164$
                    0839   5405 	C$easyax5043.c$646$2$248 ==.
                           5406 ;	..\COMMON\easyax5043.c:646: case trxstate_tx_longpreamble:
   1083                    5407 00114$:
                    0839   5408 	C$easyax5043.c$647$2$248 ==.
                           5409 ;	..\COMMON\easyax5043.c:647: case trxstate_tx_shortpreamble:
   1083                    5410 00115$:
                    0839   5411 	C$easyax5043.c$648$2$248 ==.
                           5412 ;	..\COMMON\easyax5043.c:648: case trxstate_tx_packet:
   1083                    5413 00116$:
                    0839   5414 	C$easyax5043.c$649$2$248 ==.
                           5415 ;	..\COMMON\easyax5043.c:649: transmit_isr();
   1083 12 0C 2D           5416 	lcall	_transmit_isr
                    083C   5417 	C$easyax5043.c$650$2$248 ==.
                           5418 ;	..\COMMON\easyax5043.c:650: break;
   1086 02 13 24           5419 	ljmp	00164$
                    083F   5420 	C$easyax5043.c$652$2$248 ==.
                           5421 ;	..\COMMON\easyax5043.c:652: case trxstate_tx_waitdone:
   1089                    5422 00117$:
                    083F   5423 	C$easyax5043.c$653$2$248 ==.
                           5424 ;	..\COMMON\easyax5043.c:653: AX5043_RADIOEVENTREQ0;
   1089 90 40 0F           5425 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   108C E0                 5426 	movx	a,@dptr
                    0843   5427 	C$easyax5043.c$654$2$248 ==.
                           5428 ;	..\COMMON\easyax5043.c:654: if (AX5043_RADIOSTATE != 0)
   108D 90 40 1C           5429 	mov	dptr,#_AX5043_RADIOSTATE
   1090 E0                 5430 	movx	a,@dptr
   1091 FF                 5431 	mov	r7,a
   1092 60 03              5432 	jz	00231$
   1094 02 13 24           5433 	ljmp	00164$
   1097                    5434 00231$:
                    084D   5435 	C$easyax5043.c$656$2$248 ==.
                           5436 ;	..\COMMON\easyax5043.c:656: AX5043_RADIOEVENTMASK0 = 0x00;
   1097 90 40 09           5437 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   109A E4                 5438 	clr	a
   109B F0                 5439 	movx	@dptr,a
                    0852   5440 	C$easyax5043.c$657$2$248 ==.
                           5441 ;	..\COMMON\easyax5043.c:657: switch (axradio_mode) {
   109C AF 0A              5442 	mov	r7,_axradio_mode
   109E BF 12 02           5443 	cjne	r7,#0x12,00232$
   10A1 80 6A              5444 	sjmp	00131$
   10A3                    5445 00232$:
   10A3 BF 13 02           5446 	cjne	r7,#0x13,00233$
   10A6 80 65              5447 	sjmp	00131$
   10A8                    5448 00233$:
   10A8 BF 18 02           5449 	cjne	r7,#0x18,00234$
   10AB 80 1D              5450 	sjmp	00120$
   10AD                    5451 00234$:
   10AD BF 19 02           5452 	cjne	r7,#0x19,00235$
   10B0 80 36              5453 	sjmp	00125$
   10B2                    5454 00235$:
   10B2 BF 1A 02           5455 	cjne	r7,#0x1A,00236$
   10B5 80 1C              5456 	sjmp	00121$
   10B7                    5457 00236$:
   10B7 BF 1B 02           5458 	cjne	r7,#0x1B,00237$
   10BA 80 3C              5459 	sjmp	00128$
   10BC                    5460 00237$:
   10BC BF 20 03           5461 	cjne	r7,#0x20,00238$
   10BF 02 11 41           5462 	ljmp	00132$
   10C2                    5463 00238$:
   10C2 BF 21 02           5464 	cjne	r7,#0x21,00239$
   10C5 80 39              5465 	sjmp	00129$
   10C7                    5466 00239$:
   10C7 02 11 4E           5467 	ljmp	00133$
                    0880   5468 	C$easyax5043.c$658$3$252 ==.
                           5469 ;	..\COMMON\easyax5043.c:658: case AXRADIO_MODE_ASYNC_RECEIVE:
   10CA                    5470 00120$:
                    0880   5471 	C$easyax5043.c$659$3$252 ==.
                           5472 ;	..\COMMON\easyax5043.c:659: ax5043_init_registers_rx();
   10CA 12 09 16           5473 	lcall	_ax5043_init_registers_rx
                    0883   5474 	C$easyax5043.c$660$3$252 ==.
                           5475 ;	..\COMMON\easyax5043.c:660: ax5043_receiver_on_continuous();
   10CD 12 13 41           5476 	lcall	_ax5043_receiver_on_continuous
                    0886   5477 	C$easyax5043.c$661$3$252 ==.
                           5478 ;	..\COMMON\easyax5043.c:661: break;
   10D0 02 11 51           5479 	ljmp	00134$
                    0889   5480 	C$easyax5043.c$663$3$252 ==.
                           5481 ;	..\COMMON\easyax5043.c:663: case AXRADIO_MODE_ACK_RECEIVE:
   10D3                    5482 00121$:
                    0889   5483 	C$easyax5043.c$664$3$252 ==.
                           5484 ;	..\COMMON\easyax5043.c:664: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10D3 90 02 37           5485 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10D6 E0                 5486 	movx	a,@dptr
   10D7 FF                 5487 	mov	r7,a
   10D8 BF F0 08           5488 	cjne	r7,#0xF0,00124$
                    0891   5489 	C$easyax5043.c$665$4$253 ==.
                           5490 ;	..\COMMON\easyax5043.c:665: ax5043_init_registers_rx();
   10DB 12 09 16           5491 	lcall	_ax5043_init_registers_rx
                    0894   5492 	C$easyax5043.c$666$4$253 ==.
                           5493 ;	..\COMMON\easyax5043.c:666: ax5043_receiver_on_continuous();
   10DE 12 13 41           5494 	lcall	_ax5043_receiver_on_continuous
                    0897   5495 	C$easyax5043.c$667$4$253 ==.
                           5496 ;	..\COMMON\easyax5043.c:667: break;
                    0897   5497 	C$easyax5043.c$669$3$252 ==.
                           5498 ;	..\COMMON\easyax5043.c:669: offxtal:
   10E1 80 6E              5499 	sjmp	00134$
   10E3                    5500 00124$:
                    0899   5501 	C$easyax5043.c$670$3$252 ==.
                           5502 ;	..\COMMON\easyax5043.c:670: ax5043_off_xtal();
   10E3 12 14 8F           5503 	lcall	_ax5043_off_xtal
                    089C   5504 	C$easyax5043.c$671$3$252 ==.
                           5505 ;	..\COMMON\easyax5043.c:671: break;
                    089C   5506 	C$easyax5043.c$673$3$252 ==.
                           5507 ;	..\COMMON\easyax5043.c:673: case AXRADIO_MODE_WOR_RECEIVE:
   10E6 80 69              5508 	sjmp	00134$
   10E8                    5509 00125$:
                    089E   5510 	C$easyax5043.c$674$3$252 ==.
                           5511 ;	..\COMMON\easyax5043.c:674: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10E8 90 02 37           5512 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10EB E0                 5513 	movx	a,@dptr
   10EC FF                 5514 	mov	r7,a
   10ED BF F0 F3           5515 	cjne	r7,#0xF0,00124$
                    08A6   5516 	C$easyax5043.c$675$4$254 ==.
                           5517 ;	..\COMMON\easyax5043.c:675: ax5043_init_registers_rx();
   10F0 12 09 16           5518 	lcall	_ax5043_init_registers_rx
                    08A9   5519 	C$easyax5043.c$676$4$254 ==.
                           5520 ;	..\COMMON\easyax5043.c:676: ax5043_receiver_on_wor();
   10F3 12 13 DB           5521 	lcall	_ax5043_receiver_on_wor
                    08AC   5522 	C$easyax5043.c$677$4$254 ==.
                           5523 ;	..\COMMON\easyax5043.c:677: break;
                    08AC   5524 	C$easyax5043.c$681$3$252 ==.
                           5525 ;	..\COMMON\easyax5043.c:681: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   10F6 80 59              5526 	sjmp	00134$
   10F8                    5527 00128$:
                    08AE   5528 	C$easyax5043.c$682$3$252 ==.
                           5529 ;	..\COMMON\easyax5043.c:682: ax5043_init_registers_rx();
   10F8 12 09 16           5530 	lcall	_ax5043_init_registers_rx
                    08B1   5531 	C$easyax5043.c$683$3$252 ==.
                           5532 ;	..\COMMON\easyax5043.c:683: ax5043_receiver_on_wor();
   10FB 12 13 DB           5533 	lcall	_ax5043_receiver_on_wor
                    08B4   5534 	C$easyax5043.c$684$3$252 ==.
                           5535 ;	..\COMMON\easyax5043.c:684: break;
                    08B4   5536 	C$easyax5043.c$686$3$252 ==.
                           5537 ;	..\COMMON\easyax5043.c:686: case AXRADIO_MODE_SYNC_ACK_MASTER:
   10FE 80 51              5538 	sjmp	00134$
   1100                    5539 00129$:
                    08B6   5540 	C$easyax5043.c$687$3$252 ==.
                           5541 ;	..\COMMON\easyax5043.c:687: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   1100 90 56 47           5542 	mov	dptr,#_axradio_framing_minpayloadlen
   1103 E4                 5543 	clr	a
   1104 93                 5544 	movc	a,@a+dptr
   1105 FF                 5545 	mov	r7,a
   1106 90 00 05           5546 	mov	dptr,#_axradio_txbuffer_len
   1109 F0                 5547 	movx	@dptr,a
   110A A3                 5548 	inc	dptr
   110B E4                 5549 	clr	a
   110C F0                 5550 	movx	@dptr,a
                    08C3   5551 	C$easyax5043.c$691$3$252 ==.
                           5552 ;	..\COMMON\easyax5043.c:691: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   110D                    5553 00131$:
                    08C3   5554 	C$easyax5043.c$692$3$252 ==.
                           5555 ;	..\COMMON\easyax5043.c:692: ax5043_init_registers_rx();
   110D 12 09 16           5556 	lcall	_ax5043_init_registers_rx
                    08C6   5557 	C$easyax5043.c$693$3$252 ==.
                           5558 ;	..\COMMON\easyax5043.c:693: ax5043_receiver_on_continuous();
   1110 12 13 41           5559 	lcall	_ax5043_receiver_on_continuous
                    08C9   5560 	C$easyax5043.c$694$3$252 ==.
                           5561 ;	..\COMMON\easyax5043.c:694: wtimer_remove(&axradio_timer);
   1113 90 02 89           5562 	mov	dptr,#_axradio_timer
   1116 12 4D 58           5563 	lcall	_wtimer_remove
                    08CF   5564 	C$easyax5043.c$695$3$252 ==.
                           5565 ;	..\COMMON\easyax5043.c:695: axradio_timer.time = axradio_framing_ack_timeout;
   1119 90 56 3D           5566 	mov	dptr,#_axradio_framing_ack_timeout
   111C E4                 5567 	clr	a
   111D 93                 5568 	movc	a,@a+dptr
   111E FC                 5569 	mov	r4,a
   111F 74 01              5570 	mov	a,#0x01
   1121 93                 5571 	movc	a,@a+dptr
   1122 FD                 5572 	mov	r5,a
   1123 74 02              5573 	mov	a,#0x02
   1125 93                 5574 	movc	a,@a+dptr
   1126 FE                 5575 	mov	r6,a
   1127 74 03              5576 	mov	a,#0x03
   1129 93                 5577 	movc	a,@a+dptr
   112A FF                 5578 	mov	r7,a
   112B 90 02 8D           5579 	mov	dptr,#(_axradio_timer + 0x0004)
   112E EC                 5580 	mov	a,r4
   112F F0                 5581 	movx	@dptr,a
   1130 A3                 5582 	inc	dptr
   1131 ED                 5583 	mov	a,r5
   1132 F0                 5584 	movx	@dptr,a
   1133 A3                 5585 	inc	dptr
   1134 EE                 5586 	mov	a,r6
   1135 F0                 5587 	movx	@dptr,a
   1136 A3                 5588 	inc	dptr
   1137 EF                 5589 	mov	a,r7
   1138 F0                 5590 	movx	@dptr,a
                    08EF   5591 	C$easyax5043.c$696$3$252 ==.
                           5592 ;	..\COMMON\easyax5043.c:696: wtimer0_addrelative(&axradio_timer);
   1139 90 02 89           5593 	mov	dptr,#_axradio_timer
   113C 12 44 62           5594 	lcall	_wtimer0_addrelative
                    08F5   5595 	C$easyax5043.c$697$3$252 ==.
                           5596 ;	..\COMMON\easyax5043.c:697: break;
                    08F5   5597 	C$easyax5043.c$699$3$252 ==.
                           5598 ;	..\COMMON\easyax5043.c:699: case AXRADIO_MODE_SYNC_MASTER:
   113F 80 10              5599 	sjmp	00134$
   1141                    5600 00132$:
                    08F7   5601 	C$easyax5043.c$700$3$252 ==.
                           5602 ;	..\COMMON\easyax5043.c:700: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   1141 90 56 47           5603 	mov	dptr,#_axradio_framing_minpayloadlen
   1144 E4                 5604 	clr	a
   1145 93                 5605 	movc	a,@a+dptr
   1146 FF                 5606 	mov	r7,a
   1147 90 00 05           5607 	mov	dptr,#_axradio_txbuffer_len
   114A F0                 5608 	movx	@dptr,a
   114B A3                 5609 	inc	dptr
   114C E4                 5610 	clr	a
   114D F0                 5611 	movx	@dptr,a
                    0904   5612 	C$easyax5043.c$703$3$252 ==.
                           5613 ;	..\COMMON\easyax5043.c:703: default:
   114E                    5614 00133$:
                    0904   5615 	C$easyax5043.c$704$3$252 ==.
                           5616 ;	..\COMMON\easyax5043.c:704: ax5043_off();
   114E 12 14 86           5617 	lcall	_ax5043_off
                    0907   5618 	C$easyax5043.c$706$2$248 ==.
                           5619 ;	..\COMMON\easyax5043.c:706: }
   1151                    5620 00134$:
                    0907   5621 	C$easyax5043.c$707$2$248 ==.
                           5622 ;	..\COMMON\easyax5043.c:707: if (axradio_mode != AXRADIO_MODE_SYNC_MASTER &&
   1151 74 20              5623 	mov	a,#0x20
   1153 B5 0A 02           5624 	cjne	a,_axradio_mode,00244$
   1156 80 1A              5625 	sjmp	00136$
   1158                    5626 00244$:
                    090E   5627 	C$easyax5043.c$708$2$248 ==.
                           5628 ;	..\COMMON\easyax5043.c:708: axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER &&
   1158 74 21              5629 	mov	a,#0x21
   115A B5 0A 02           5630 	cjne	a,_axradio_mode,00245$
   115D 80 13              5631 	sjmp	00136$
   115F                    5632 00245$:
                    0915   5633 	C$easyax5043.c$709$2$248 ==.
                           5634 ;	..\COMMON\easyax5043.c:709: axradio_mode != AXRADIO_MODE_SYNC_SLAVE &&
   115F 74 22              5635 	mov	a,#0x22
   1161 B5 0A 02           5636 	cjne	a,_axradio_mode,00246$
   1164 80 0C              5637 	sjmp	00136$
   1166                    5638 00246$:
                    091C   5639 	C$easyax5043.c$710$2$248 ==.
                           5640 ;	..\COMMON\easyax5043.c:710: axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   1166 74 23              5641 	mov	a,#0x23
   1168 B5 0A 02           5642 	cjne	a,_axradio_mode,00247$
   116B 80 05              5643 	sjmp	00136$
   116D                    5644 00247$:
                    0923   5645 	C$easyax5043.c$711$2$248 ==.
                           5646 ;	..\COMMON\easyax5043.c:711: axradio_syncstate = syncstate_off;
   116D 90 00 04           5647 	mov	dptr,#_axradio_syncstate
   1170 E4                 5648 	clr	a
   1171 F0                 5649 	movx	@dptr,a
   1172                    5650 00136$:
                    0928   5651 	C$easyax5043.c$712$2$248 ==.
                           5652 ;	..\COMMON\easyax5043.c:712: update_timeanchor();
   1172 12 08 4A           5653 	lcall	_update_timeanchor
                    092B   5654 	C$easyax5043.c$713$2$248 ==.
                           5655 ;	..\COMMON\easyax5043.c:713: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1175 90 02 75           5656 	mov	dptr,#_axradio_cb_transmitend
   1178 12 50 73           5657 	lcall	_wtimer_remove_callback
                    0931   5658 	C$easyax5043.c$714$2$248 ==.
                           5659 ;	..\COMMON\easyax5043.c:714: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   117B 90 02 7A           5660 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   117E E4                 5661 	clr	a
   117F F0                 5662 	movx	@dptr,a
                    0936   5663 	C$easyax5043.c$715$2$248 ==.
                           5664 ;	..\COMMON\easyax5043.c:715: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   1180 74 12              5665 	mov	a,#0x12
   1182 B5 0A 02           5666 	cjne	a,_axradio_mode,00248$
   1185 80 0C              5667 	sjmp	00140$
   1187                    5668 00248$:
                    093D   5669 	C$easyax5043.c$716$2$248 ==.
                           5670 ;	..\COMMON\easyax5043.c:716: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   1187 74 13              5671 	mov	a,#0x13
   1189 B5 0A 02           5672 	cjne	a,_axradio_mode,00249$
   118C 80 05              5673 	sjmp	00140$
   118E                    5674 00249$:
                    0944   5675 	C$easyax5043.c$717$2$248 ==.
                           5676 ;	..\COMMON\easyax5043.c:717: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   118E 74 21              5677 	mov	a,#0x21
   1190 B5 0A 06           5678 	cjne	a,_axradio_mode,00141$
   1193                    5679 00140$:
                    0949   5680 	C$easyax5043.c$718$2$248 ==.
                           5681 ;	..\COMMON\easyax5043.c:718: axradio_cb_transmitend.st.error = AXRADIO_ERR_BUSY;
   1193 90 02 7A           5682 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1196 74 02              5683 	mov	a,#0x02
   1198 F0                 5684 	movx	@dptr,a
   1199                    5685 00141$:
                    094F   5686 	C$easyax5043.c$719$2$248 ==.
                           5687 ;	..\COMMON\easyax5043.c:719: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1199 90 00 1A           5688 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   119C E0                 5689 	movx	a,@dptr
   119D FC                 5690 	mov	r4,a
   119E A3                 5691 	inc	dptr
   119F E0                 5692 	movx	a,@dptr
   11A0 FD                 5693 	mov	r5,a
   11A1 A3                 5694 	inc	dptr
   11A2 E0                 5695 	movx	a,@dptr
   11A3 FE                 5696 	mov	r6,a
   11A4 A3                 5697 	inc	dptr
   11A5 E0                 5698 	movx	a,@dptr
   11A6 FF                 5699 	mov	r7,a
   11A7 90 02 7B           5700 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   11AA EC                 5701 	mov	a,r4
   11AB F0                 5702 	movx	@dptr,a
   11AC A3                 5703 	inc	dptr
   11AD ED                 5704 	mov	a,r5
   11AE F0                 5705 	movx	@dptr,a
   11AF A3                 5706 	inc	dptr
   11B0 EE                 5707 	mov	a,r6
   11B1 F0                 5708 	movx	@dptr,a
   11B2 A3                 5709 	inc	dptr
   11B3 EF                 5710 	mov	a,r7
   11B4 F0                 5711 	movx	@dptr,a
                    096B   5712 	C$easyax5043.c$720$2$248 ==.
                           5713 ;	..\COMMON\easyax5043.c:720: wtimer_add_callback(&axradio_cb_transmitend.cb);
   11B5 90 02 75           5714 	mov	dptr,#_axradio_cb_transmitend
   11B8 12 44 48           5715 	lcall	_wtimer_add_callback
                    0971   5716 	C$easyax5043.c$721$2$248 ==.
                           5717 ;	..\COMMON\easyax5043.c:721: break;
   11BB 02 13 24           5718 	ljmp	00164$
                    0974   5719 	C$easyax5043.c$724$2$248 ==.
                           5720 ;	..\COMMON\easyax5043.c:724: case trxstate_txcw_xtalwait:
   11BE                    5721 00144$:
                    0974   5722 	C$easyax5043.c$725$2$248 ==.
                           5723 ;	..\COMMON\easyax5043.c:725: AX5043_IRQMASK1 = 0x00;
   11BE 90 40 06           5724 	mov	dptr,#_AX5043_IRQMASK1
                    0977   5725 	C$easyax5043.c$726$2$248 ==.
                           5726 ;	..\COMMON\easyax5043.c:726: AX5043_IRQMASK0 = 0x00;
   11C1 E4                 5727 	clr	a
   11C2 F0                 5728 	movx	@dptr,a
   11C3 90 40 07           5729 	mov	dptr,#_AX5043_IRQMASK0
   11C6 F0                 5730 	movx	@dptr,a
                    097D   5731 	C$easyax5043.c$727$2$248 ==.
                           5732 ;	..\COMMON\easyax5043.c:727: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   11C7 90 40 02           5733 	mov	dptr,#_AX5043_PWRMODE
   11CA 74 0D              5734 	mov	a,#0x0D
   11CC F0                 5735 	movx	@dptr,a
                    0983   5736 	C$easyax5043.c$728$2$248 ==.
                           5737 ;	..\COMMON\easyax5043.c:728: axradio_trxstate = trxstate_off;
   11CD 75 0B 00           5738 	mov	_axradio_trxstate,#0x00
                    0986   5739 	C$easyax5043.c$729$2$248 ==.
                           5740 ;	..\COMMON\easyax5043.c:729: update_timeanchor();
   11D0 12 08 4A           5741 	lcall	_update_timeanchor
                    0989   5742 	C$easyax5043.c$730$2$248 ==.
                           5743 ;	..\COMMON\easyax5043.c:730: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   11D3 90 02 6B           5744 	mov	dptr,#_axradio_cb_transmitstart
   11D6 12 50 73           5745 	lcall	_wtimer_remove_callback
                    098F   5746 	C$easyax5043.c$731$2$248 ==.
                           5747 ;	..\COMMON\easyax5043.c:731: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   11D9 90 02 70           5748 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   11DC E4                 5749 	clr	a
   11DD F0                 5750 	movx	@dptr,a
                    0994   5751 	C$easyax5043.c$732$2$248 ==.
                           5752 ;	..\COMMON\easyax5043.c:732: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   11DE 90 00 1A           5753 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   11E1 E0                 5754 	movx	a,@dptr
   11E2 FC                 5755 	mov	r4,a
   11E3 A3                 5756 	inc	dptr
   11E4 E0                 5757 	movx	a,@dptr
   11E5 FD                 5758 	mov	r5,a
   11E6 A3                 5759 	inc	dptr
   11E7 E0                 5760 	movx	a,@dptr
   11E8 FE                 5761 	mov	r6,a
   11E9 A3                 5762 	inc	dptr
   11EA E0                 5763 	movx	a,@dptr
   11EB FF                 5764 	mov	r7,a
   11EC 90 02 71           5765 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   11EF EC                 5766 	mov	a,r4
   11F0 F0                 5767 	movx	@dptr,a
   11F1 A3                 5768 	inc	dptr
   11F2 ED                 5769 	mov	a,r5
   11F3 F0                 5770 	movx	@dptr,a
   11F4 A3                 5771 	inc	dptr
   11F5 EE                 5772 	mov	a,r6
   11F6 F0                 5773 	movx	@dptr,a
   11F7 A3                 5774 	inc	dptr
   11F8 EF                 5775 	mov	a,r7
   11F9 F0                 5776 	movx	@dptr,a
                    09B0   5777 	C$easyax5043.c$733$2$248 ==.
                           5778 ;	..\COMMON\easyax5043.c:733: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   11FA 90 02 6B           5779 	mov	dptr,#_axradio_cb_transmitstart
   11FD 12 44 48           5780 	lcall	_wtimer_add_callback
                    09B6   5781 	C$easyax5043.c$734$2$248 ==.
                           5782 ;	..\COMMON\easyax5043.c:734: break;
   1200 02 13 24           5783 	ljmp	00164$
                    09B9   5784 	C$easyax5043.c$736$2$248 ==.
                           5785 ;	..\COMMON\easyax5043.c:736: case trxstate_txstream_xtalwait:
   1203                    5786 00145$:
                    09B9   5787 	C$easyax5043.c$737$2$248 ==.
                           5788 ;	..\COMMON\easyax5043.c:737: if (AX5043_IRQREQUEST1 & 0x01) {
   1203 90 40 0C           5789 	mov	dptr,#_AX5043_IRQREQUEST1
   1206 E0                 5790 	movx	a,@dptr
   1207 FF                 5791 	mov	r7,a
   1208 20 E0 03           5792 	jb	acc.0,00252$
   120B 02 12 A0           5793 	ljmp	00155$
   120E                    5794 00252$:
                    09C4   5795 	C$easyax5043.c$738$3$255 ==.
                           5796 ;	..\COMMON\easyax5043.c:738: AX5043_RADIOEVENTMASK0 = 0x03; // enable PLL settled and done event
   120E 90 40 09           5797 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1211 74 03              5798 	mov	a,#0x03
   1213 F0                 5799 	movx	@dptr,a
                    09CA   5800 	C$easyax5043.c$739$3$255 ==.
                           5801 ;	..\COMMON\easyax5043.c:739: AX5043_IRQMASK1 = 0x00;
   1214 90 40 06           5802 	mov	dptr,#_AX5043_IRQMASK1
   1217 E4                 5803 	clr	a
   1218 F0                 5804 	movx	@dptr,a
                    09CF   5805 	C$easyax5043.c$740$3$255 ==.
                           5806 ;	..\COMMON\easyax5043.c:740: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   1219 90 40 07           5807 	mov	dptr,#_AX5043_IRQMASK0
   121C 74 40              5808 	mov	a,#0x40
   121E F0                 5809 	movx	@dptr,a
                    09D5   5810 	C$easyax5043.c$741$3$255 ==.
                           5811 ;	..\COMMON\easyax5043.c:741: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   121F 90 40 02           5812 	mov	dptr,#_AX5043_PWRMODE
   1222 74 0D              5813 	mov	a,#0x0D
   1224 F0                 5814 	movx	@dptr,a
                    09DB   5815 	C$easyax5043.c$742$3$255 ==.
                           5816 ;	..\COMMON\easyax5043.c:742: axradio_trxstate = trxstate_txstream;
   1225 75 0B 10           5817 	mov	_axradio_trxstate,#0x10
                    09DE   5818 	C$easyax5043.c$744$2$248 ==.
                           5819 ;	..\COMMON\easyax5043.c:744: goto txstreamdatacb;
                    09DE   5820 	C$easyax5043.c$746$2$248 ==.
                           5821 ;	..\COMMON\easyax5043.c:746: case trxstate_txstream:
   1228 80 76              5822 	sjmp	00155$
   122A                    5823 00148$:
                    09E0   5824 	C$easyax5043.c$748$3$248 ==.
                           5825 ;	..\COMMON\easyax5043.c:748: uint8_t __autodata evt = AX5043_RADIOEVENTREQ0;
   122A 90 40 0F           5826 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   122D E0                 5827 	movx	a,@dptr
                    09E4   5828 	C$easyax5043.c$749$3$256 ==.
                           5829 ;	..\COMMON\easyax5043.c:749: if (evt & 0x03)
   122E FF                 5830 	mov	r7,a
   122F 54 03              5831 	anl	a,#0x03
   1231 60 07              5832 	jz	00150$
                    09E9   5833 	C$easyax5043.c$750$3$256 ==.
                           5834 ;	..\COMMON\easyax5043.c:750: update_timeanchor();
   1233 C0 07              5835 	push	ar7
   1235 12 08 4A           5836 	lcall	_update_timeanchor
   1238 D0 07              5837 	pop	ar7
   123A                    5838 00150$:
                    09F0   5839 	C$easyax5043.c$751$3$256 ==.
                           5840 ;	..\COMMON\easyax5043.c:751: if (evt & 0x01) {
   123A EF                 5841 	mov	a,r7
   123B 30 E0 31           5842 	jnb	acc.0,00152$
                    09F4   5843 	C$easyax5043.c$752$4$257 ==.
                           5844 ;	..\COMMON\easyax5043.c:752: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   123E 90 02 75           5845 	mov	dptr,#_axradio_cb_transmitend
   1241 C0 07              5846 	push	ar7
   1243 12 50 73           5847 	lcall	_wtimer_remove_callback
                    09FC   5848 	C$easyax5043.c$753$4$257 ==.
                           5849 ;	..\COMMON\easyax5043.c:753: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   1246 90 02 7A           5850 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1249 E4                 5851 	clr	a
   124A F0                 5852 	movx	@dptr,a
                    0A01   5853 	C$easyax5043.c$754$4$257 ==.
                           5854 ;	..\COMMON\easyax5043.c:754: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   124B 90 00 1A           5855 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   124E E0                 5856 	movx	a,@dptr
   124F FB                 5857 	mov	r3,a
   1250 A3                 5858 	inc	dptr
   1251 E0                 5859 	movx	a,@dptr
   1252 FC                 5860 	mov	r4,a
   1253 A3                 5861 	inc	dptr
   1254 E0                 5862 	movx	a,@dptr
   1255 FD                 5863 	mov	r5,a
   1256 A3                 5864 	inc	dptr
   1257 E0                 5865 	movx	a,@dptr
   1258 FE                 5866 	mov	r6,a
   1259 90 02 7B           5867 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   125C EB                 5868 	mov	a,r3
   125D F0                 5869 	movx	@dptr,a
   125E A3                 5870 	inc	dptr
   125F EC                 5871 	mov	a,r4
   1260 F0                 5872 	movx	@dptr,a
   1261 A3                 5873 	inc	dptr
   1262 ED                 5874 	mov	a,r5
   1263 F0                 5875 	movx	@dptr,a
   1264 A3                 5876 	inc	dptr
   1265 EE                 5877 	mov	a,r6
   1266 F0                 5878 	movx	@dptr,a
                    0A1D   5879 	C$easyax5043.c$755$4$257 ==.
                           5880 ;	..\COMMON\easyax5043.c:755: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1267 90 02 75           5881 	mov	dptr,#_axradio_cb_transmitend
   126A 12 44 48           5882 	lcall	_wtimer_add_callback
   126D D0 07              5883 	pop	ar7
   126F                    5884 00152$:
                    0A25   5885 	C$easyax5043.c$757$3$256 ==.
                           5886 ;	..\COMMON\easyax5043.c:757: if (evt & 0x02) {
   126F EF                 5887 	mov	a,r7
   1270 30 E1 2D           5888 	jnb	acc.1,00155$
                    0A29   5889 	C$easyax5043.c$758$4$258 ==.
                           5890 ;	..\COMMON\easyax5043.c:758: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1273 90 02 6B           5891 	mov	dptr,#_axradio_cb_transmitstart
   1276 12 50 73           5892 	lcall	_wtimer_remove_callback
                    0A2F   5893 	C$easyax5043.c$759$4$258 ==.
                           5894 ;	..\COMMON\easyax5043.c:759: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1279 90 02 70           5895 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   127C E4                 5896 	clr	a
   127D F0                 5897 	movx	@dptr,a
                    0A34   5898 	C$easyax5043.c$760$4$258 ==.
                           5899 ;	..\COMMON\easyax5043.c:760: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   127E 90 00 1A           5900 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1281 E0                 5901 	movx	a,@dptr
   1282 FC                 5902 	mov	r4,a
   1283 A3                 5903 	inc	dptr
   1284 E0                 5904 	movx	a,@dptr
   1285 FD                 5905 	mov	r5,a
   1286 A3                 5906 	inc	dptr
   1287 E0                 5907 	movx	a,@dptr
   1288 FE                 5908 	mov	r6,a
   1289 A3                 5909 	inc	dptr
   128A E0                 5910 	movx	a,@dptr
   128B FF                 5911 	mov	r7,a
   128C 90 02 71           5912 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   128F EC                 5913 	mov	a,r4
   1290 F0                 5914 	movx	@dptr,a
   1291 A3                 5915 	inc	dptr
   1292 ED                 5916 	mov	a,r5
   1293 F0                 5917 	movx	@dptr,a
   1294 A3                 5918 	inc	dptr
   1295 EE                 5919 	mov	a,r6
   1296 F0                 5920 	movx	@dptr,a
   1297 A3                 5921 	inc	dptr
   1298 EF                 5922 	mov	a,r7
   1299 F0                 5923 	movx	@dptr,a
                    0A50   5924 	C$easyax5043.c$761$4$258 ==.
                           5925 ;	..\COMMON\easyax5043.c:761: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   129A 90 02 6B           5926 	mov	dptr,#_axradio_cb_transmitstart
   129D 12 44 48           5927 	lcall	_wtimer_add_callback
                    0A56   5928 	C$easyax5043.c$764$2$248 ==.
                           5929 ;	..\COMMON\easyax5043.c:764: txstreamdatacb:
   12A0                    5930 00155$:
                    0A56   5931 	C$easyax5043.c$765$2$248 ==.
                           5932 ;	..\COMMON\easyax5043.c:765: if (AX5043_IRQREQUEST0 & AX5043_IRQMASK0 & 0x08) {
   12A0 90 40 0D           5933 	mov	dptr,#_AX5043_IRQREQUEST0
   12A3 E0                 5934 	movx	a,@dptr
   12A4 FF                 5935 	mov	r7,a
   12A5 90 40 07           5936 	mov	dptr,#_AX5043_IRQMASK0
   12A8 E0                 5937 	movx	a,@dptr
   12A9 FE                 5938 	mov	r6,a
   12AA 5F                 5939 	anl	a,r7
   12AB 30 E3 76           5940 	jnb	acc.3,00164$
                    0A64   5941 	C$easyax5043.c$766$3$259 ==.
                           5942 ;	..\COMMON\easyax5043.c:766: AX5043_IRQMASK0 &= (uint8_t)~0x08;
   12AE 90 40 07           5943 	mov	dptr,#_AX5043_IRQMASK0
   12B1 E0                 5944 	movx	a,@dptr
   12B2 54 F7              5945 	anl	a,#0xF7
   12B4 F0                 5946 	movx	@dptr,a
                    0A6B   5947 	C$easyax5043.c$767$3$259 ==.
                           5948 ;	..\COMMON\easyax5043.c:767: update_timeanchor();
   12B5 12 08 4A           5949 	lcall	_update_timeanchor
                    0A6E   5950 	C$easyax5043.c$768$3$259 ==.
                           5951 ;	..\COMMON\easyax5043.c:768: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   12B8 90 02 7F           5952 	mov	dptr,#_axradio_cb_transmitdata
   12BB 12 50 73           5953 	lcall	_wtimer_remove_callback
                    0A74   5954 	C$easyax5043.c$769$3$259 ==.
                           5955 ;	..\COMMON\easyax5043.c:769: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   12BE 90 02 84           5956 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   12C1 E4                 5957 	clr	a
   12C2 F0                 5958 	movx	@dptr,a
                    0A79   5959 	C$easyax5043.c$770$3$259 ==.
                           5960 ;	..\COMMON\easyax5043.c:770: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   12C3 90 00 1A           5961 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   12C6 E0                 5962 	movx	a,@dptr
   12C7 FC                 5963 	mov	r4,a
   12C8 A3                 5964 	inc	dptr
   12C9 E0                 5965 	movx	a,@dptr
   12CA FD                 5966 	mov	r5,a
   12CB A3                 5967 	inc	dptr
   12CC E0                 5968 	movx	a,@dptr
   12CD FE                 5969 	mov	r6,a
   12CE A3                 5970 	inc	dptr
   12CF E0                 5971 	movx	a,@dptr
   12D0 FF                 5972 	mov	r7,a
   12D1 90 02 85           5973 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   12D4 EC                 5974 	mov	a,r4
   12D5 F0                 5975 	movx	@dptr,a
   12D6 A3                 5976 	inc	dptr
   12D7 ED                 5977 	mov	a,r5
   12D8 F0                 5978 	movx	@dptr,a
   12D9 A3                 5979 	inc	dptr
   12DA EE                 5980 	mov	a,r6
   12DB F0                 5981 	movx	@dptr,a
   12DC A3                 5982 	inc	dptr
   12DD EF                 5983 	mov	a,r7
   12DE F0                 5984 	movx	@dptr,a
                    0A95   5985 	C$easyax5043.c$771$3$259 ==.
                           5986 ;	..\COMMON\easyax5043.c:771: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   12DF 90 02 7F           5987 	mov	dptr,#_axradio_cb_transmitdata
   12E2 12 44 48           5988 	lcall	_wtimer_add_callback
                    0A9B   5989 	C$easyax5043.c$773$2$248 ==.
                           5990 ;	..\COMMON\easyax5043.c:773: break;
                    0A9B   5991 	C$easyax5043.c$775$2$248 ==.
                           5992 ;	..\COMMON\easyax5043.c:775: case trxstate_rxwor:
   12E5 80 3D              5993 	sjmp	00164$
   12E7                    5994 00158$:
                    0A9D   5995 	C$easyax5043.c$776$2$248 ==.
                           5996 ;	..\COMMON\easyax5043.c:776: if( AX5043_IRQREQUEST1 & 0x01 ) // XTAL ready
   12E7 90 40 0C           5997 	mov	dptr,#_AX5043_IRQREQUEST1
   12EA E0                 5998 	movx	a,@dptr
   12EB FF                 5999 	mov	r7,a
   12EC 30 E0 0A           6000 	jnb	acc.0,00160$
                    0AA5   6001 	C$easyax5043.c$778$3$260 ==.
                           6002 ;	..\COMMON\easyax5043.c:778: AX5043_IRQINVERSION1 |= 0x01; // invert the xtal ready irq so it does not fire continuously
   12EF 90 40 0A           6003 	mov	dptr,#_AX5043_IRQINVERSION1
   12F2 E0                 6004 	movx	a,@dptr
   12F3 FF                 6005 	mov	r7,a
   12F4 44 01              6006 	orl	a,#0x01
   12F6 F0                 6007 	movx	@dptr,a
   12F7 80 28              6008 	sjmp	00162$
   12F9                    6009 00160$:
                    0AAF   6010 	C$easyax5043.c$782$3$261 ==.
                           6011 ;	..\COMMON\easyax5043.c:782: AX5043_IRQINVERSION1 &= ~0x01; // drop xtal ready irq inversion --> armed again for next wake-up
   12F9 90 40 0A           6012 	mov	dptr,#_AX5043_IRQINVERSION1
   12FC E0                 6013 	movx	a,@dptr
   12FD 54 FE              6014 	anl	a,#0xFE
   12FF F0                 6015 	movx	@dptr,a
                    0AB6   6016 	C$easyax5043.c$783$3$261 ==.
                           6017 ;	..\COMMON\easyax5043.c:783: AX5043_0xF30 = f30_saved;
   1300 90 04 33           6018 	mov	dptr,#_f30_saved
   1303 E0                 6019 	movx	a,@dptr
   1304 90 4F 30           6020 	mov	dptr,#_AX5043_0xF30
   1307 F0                 6021 	movx	@dptr,a
                    0ABE   6022 	C$easyax5043.c$784$3$261 ==.
                           6023 ;	..\COMMON\easyax5043.c:784: AX5043_0xF31 = f31_saved;
   1308 90 04 34           6024 	mov	dptr,#_f31_saved
   130B E0                 6025 	movx	a,@dptr
   130C 90 4F 31           6026 	mov	dptr,#_AX5043_0xF31
   130F F0                 6027 	movx	@dptr,a
                    0AC6   6028 	C$easyax5043.c$785$3$261 ==.
                           6029 ;	..\COMMON\easyax5043.c:785: AX5043_0xF32 = f32_saved;
   1310 90 04 35           6030 	mov	dptr,#_f32_saved
   1313 E0                 6031 	movx	a,@dptr
   1314 90 4F 32           6032 	mov	dptr,#_AX5043_0xF32
   1317 F0                 6033 	movx	@dptr,a
                    0ACE   6034 	C$easyax5043.c$786$3$261 ==.
                           6035 ;	..\COMMON\easyax5043.c:786: AX5043_0xF33 = f33_saved;
   1318 90 04 36           6036 	mov	dptr,#_f33_saved
   131B E0                 6037 	movx	a,@dptr
   131C FF                 6038 	mov	r7,a
   131D 90 4F 33           6039 	mov	dptr,#_AX5043_0xF33
   1320 F0                 6040 	movx	@dptr,a
                    0AD7   6041 	C$easyax5043.c$790$2$248 ==.
                           6042 ;	..\COMMON\easyax5043.c:790: case trxstate_rx:
   1321                    6043 00162$:
                    0AD7   6044 	C$easyax5043.c$791$2$248 ==.
                           6045 ;	..\COMMON\easyax5043.c:791: receive_isr();
   1321 12 09 4C           6046 	lcall	_receive_isr
                    0ADA   6047 	C$easyax5043.c$794$1$247 ==.
                           6048 ;	..\COMMON\easyax5043.c:794: } // end switch(axradio_trxstate)
   1324                    6049 00164$:
   1324 D0 D0              6050 	pop	psw
   1326 D0 00              6051 	pop	(0+0)
   1328 D0 01              6052 	pop	(0+1)
   132A D0 02              6053 	pop	(0+2)
   132C D0 03              6054 	pop	(0+3)
   132E D0 04              6055 	pop	(0+4)
   1330 D0 05              6056 	pop	(0+5)
   1332 D0 06              6057 	pop	(0+6)
   1334 D0 07              6058 	pop	(0+7)
   1336 D0 83              6059 	pop	dph
   1338 D0 82              6060 	pop	dpl
   133A D0 F0              6061 	pop	b
   133C D0 E0              6062 	pop	acc
   133E D0 20              6063 	pop	bits
                    0AF6   6064 	C$easyax5043.c$795$1$247 ==.
                    0AF6   6065 	XG$axradio_isr$0$0 ==.
   1340 32                 6066 	reti
                           6067 ;------------------------------------------------------------
                           6068 ;Allocation info for local variables in function 'ax5043_receiver_on_continuous'
                           6069 ;------------------------------------------------------------
                           6070 ;rschanged_int             Allocated to registers r7 
                           6071 ;------------------------------------------------------------
                    0AF7   6072 	G$ax5043_receiver_on_continuous$0$0 ==.
                    0AF7   6073 	C$easyax5043.c$798$1$247 ==.
                           6074 ;	..\COMMON\easyax5043.c:798: __reentrantb void ax5043_receiver_on_continuous(void) __reentrant
                           6075 ;	-----------------------------------------
                           6076 ;	 function ax5043_receiver_on_continuous
                           6077 ;	-----------------------------------------
   1341                    6078 _ax5043_receiver_on_continuous:
                    0AF7   6079 	C$easyax5043.c$800$1$263 ==.
                           6080 ;	..\COMMON\easyax5043.c:800: uint8_t rschanged_int = (axradio_framing_enable_sfdcallback | (axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) | (axradio_mode == AXRADIO_MODE_SYNC_SLAVE) );
   1341 74 23              6081 	mov	a,#0x23
   1343 B5 0A 04           6082 	cjne	a,_axradio_mode,00127$
   1346 74 01              6083 	mov	a,#0x01
   1348 80 01              6084 	sjmp	00128$
   134A                    6085 00127$:
   134A E4                 6086 	clr	a
   134B                    6087 00128$:
   134B FF                 6088 	mov	r7,a
   134C 90 56 3C           6089 	mov	dptr,#_axradio_framing_enable_sfdcallback
   134F E4                 6090 	clr	a
   1350 93                 6091 	movc	a,@a+dptr
   1351 FE                 6092 	mov	r6,a
   1352 42 07              6093 	orl	ar7,a
   1354 74 22              6094 	mov	a,#0x22
   1356 B5 0A 04           6095 	cjne	a,_axradio_mode,00129$
   1359 74 01              6096 	mov	a,#0x01
   135B 80 01              6097 	sjmp	00130$
   135D                    6098 00129$:
   135D E4                 6099 	clr	a
   135E                    6100 00130$:
   135E FE                 6101 	mov	r6,a
   135F 42 07              6102 	orl	ar7,a
                    0B17   6103 	C$easyax5043.c$801$1$263 ==.
                           6104 ;	..\COMMON\easyax5043.c:801: if(rschanged_int)
   1361 EF                 6105 	mov	a,r7
   1362 60 06              6106 	jz	00102$
                    0B1A   6107 	C$easyax5043.c$802$1$263 ==.
                           6108 ;	..\COMMON\easyax5043.c:802: AX5043_RADIOEVENTMASK0 = 0x04;
   1364 90 40 09           6109 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1367 74 04              6110 	mov	a,#0x04
   1369 F0                 6111 	movx	@dptr,a
   136A                    6112 00102$:
                    0B20   6113 	C$easyax5043.c$803$1$263 ==.
                           6114 ;	..\COMMON\easyax5043.c:803: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   136A 90 56 19           6115 	mov	dptr,#_axradio_phy_rssireference
   136D E4                 6116 	clr	a
   136E 93                 6117 	movc	a,@a+dptr
   136F FE                 6118 	mov	r6,a
   1370 90 42 2C           6119 	mov	dptr,#_AX5043_RSSIREFERENCE
   1373 F0                 6120 	movx	@dptr,a
                    0B2A   6121 	C$easyax5043.c$804$1$263 ==.
                           6122 ;	..\COMMON\easyax5043.c:804: if (axradio_mode == AXRADIO_MODE_ASYNC_RECEIVE ||
   1374 74 18              6123 	mov	a,#0x18
   1376 B5 0A 02           6124 	cjne	a,_axradio_mode,00132$
   1379 80 1A              6125 	sjmp	00103$
   137B                    6126 00132$:
                    0B31   6127 	C$easyax5043.c$805$1$263 ==.
                           6128 ;	..\COMMON\easyax5043.c:805: axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   137B 74 1A              6129 	mov	a,#0x1A
   137D B5 0A 02           6130 	cjne	a,_axradio_mode,00133$
   1380 80 13              6131 	sjmp	00103$
   1382                    6132 00133$:
                    0B38   6133 	C$easyax5043.c$806$1$263 ==.
                           6134 ;	..\COMMON\easyax5043.c:806: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   1382 74 1C              6135 	mov	a,#0x1C
   1384 B5 0A 02           6136 	cjne	a,_axradio_mode,00134$
   1387 80 0C              6137 	sjmp	00103$
   1389                    6138 00134$:
                    0B3F   6139 	C$easyax5043.c$807$1$263 ==.
                           6140 ;	..\COMMON\easyax5043.c:807: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   1389 74 1D              6141 	mov	a,#0x1D
   138B B5 0A 02           6142 	cjne	a,_axradio_mode,00135$
   138E 80 05              6143 	sjmp	00103$
   1390                    6144 00135$:
                    0B46   6145 	C$easyax5043.c$808$1$263 ==.
                           6146 ;	..\COMMON\easyax5043.c:808: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   1390 74 1E              6147 	mov	a,#0x1E
   1392 B5 0A 13           6148 	cjne	a,_axradio_mode,00104$
   1395                    6149 00103$:
                    0B4B   6150 	C$easyax5043.c$809$2$264 ==.
                           6151 ;	..\COMMON\easyax5043.c:809: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_cont;
   1395 90 56 21           6152 	mov	dptr,#_axradio_phy_tmgrxpreamble1_cont
   1398 E4                 6153 	clr	a
   1399 93                 6154 	movc	a,@a+dptr
   139A 90 42 29           6155 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   139D F0                 6156 	movx	@dptr,a
                    0B54   6157 	C$easyax5043.c$810$2$264 ==.
                           6158 ;	..\COMMON\easyax5043.c:810: AX5043_PKTSTOREFLAGS |= 0x40;
   139E 90 42 32           6159 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   13A1 E0                 6160 	movx	a,@dptr
   13A2 FE                 6161 	mov	r6,a
   13A3 44 40              6162 	orl	a,#0x40
   13A5 F0                 6163 	movx	@dptr,a
   13A6 80 0D              6164 	sjmp	00105$
   13A8                    6165 00104$:
                    0B5E   6166 	C$easyax5043.c$812$2$265 ==.
                           6167 ;	..\COMMON\easyax5043.c:812: AX5043_TMGRXPREAMBLE1 = 0x00;
   13A8 90 42 29           6168 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   13AB E4                 6169 	clr	a
   13AC F0                 6170 	movx	@dptr,a
                    0B63   6171 	C$easyax5043.c$813$2$265 ==.
                           6172 ;	..\COMMON\easyax5043.c:813: AX5043_PKTSTOREFLAGS &= (uint8_t)~0x40;
   13AD 90 42 32           6173 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   13B0 E0                 6174 	movx	a,@dptr
   13B1 FE                 6175 	mov	r6,a
   13B2 54 BF              6176 	anl	a,#0xBF
   13B4 F0                 6177 	movx	@dptr,a
   13B5                    6178 00105$:
                    0B6B   6179 	C$easyax5043.c$815$1$263 ==.
                           6180 ;	..\COMMON\easyax5043.c:815: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13B5 90 40 28           6181 	mov	dptr,#_AX5043_FIFOSTAT
   13B8 74 03              6182 	mov	a,#0x03
   13BA F0                 6183 	movx	@dptr,a
                    0B71   6184 	C$easyax5043.c$816$1$263 ==.
                           6185 ;	..\COMMON\easyax5043.c:816: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   13BB 90 40 02           6186 	mov	dptr,#_AX5043_PWRMODE
   13BE 74 09              6187 	mov	a,#0x09
   13C0 F0                 6188 	movx	@dptr,a
                    0B77   6189 	C$easyax5043.c$817$1$263 ==.
                           6190 ;	..\COMMON\easyax5043.c:817: axradio_trxstate = trxstate_rx;
   13C1 75 0B 01           6191 	mov	_axradio_trxstate,#0x01
                    0B7A   6192 	C$easyax5043.c$818$1$263 ==.
                           6193 ;	..\COMMON\easyax5043.c:818: if(rschanged_int)
   13C4 EF                 6194 	mov	a,r7
   13C5 60 08              6195 	jz	00111$
                    0B7D   6196 	C$easyax5043.c$819$1$263 ==.
                           6197 ;	..\COMMON\easyax5043.c:819: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   13C7 90 40 07           6198 	mov	dptr,#_AX5043_IRQMASK0
   13CA 74 41              6199 	mov	a,#0x41
   13CC F0                 6200 	movx	@dptr,a
   13CD 80 06              6201 	sjmp	00112$
   13CF                    6202 00111$:
                    0B85   6203 	C$easyax5043.c$821$1$263 ==.
                           6204 ;	..\COMMON\easyax5043.c:821: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   13CF 90 40 07           6205 	mov	dptr,#_AX5043_IRQMASK0
   13D2 74 01              6206 	mov	a,#0x01
   13D4 F0                 6207 	movx	@dptr,a
   13D5                    6208 00112$:
                    0B8B   6209 	C$easyax5043.c$822$1$263 ==.
                           6210 ;	..\COMMON\easyax5043.c:822: AX5043_IRQMASK1 = 0x00;
   13D5 90 40 06           6211 	mov	dptr,#_AX5043_IRQMASK1
   13D8 E4                 6212 	clr	a
   13D9 F0                 6213 	movx	@dptr,a
                    0B90   6214 	C$easyax5043.c$823$1$263 ==.
                    0B90   6215 	XG$ax5043_receiver_on_continuous$0$0 ==.
   13DA 22                 6216 	ret
                           6217 ;------------------------------------------------------------
                           6218 ;Allocation info for local variables in function 'ax5043_receiver_on_wor'
                           6219 ;------------------------------------------------------------
                           6220 ;wp                        Allocated to registers r6 r7 
                           6221 ;------------------------------------------------------------
                    0B91   6222 	G$ax5043_receiver_on_wor$0$0 ==.
                    0B91   6223 	C$easyax5043.c$825$1$263 ==.
                           6224 ;	..\COMMON\easyax5043.c:825: __reentrantb void ax5043_receiver_on_wor(void) __reentrant
                           6225 ;	-----------------------------------------
                           6226 ;	 function ax5043_receiver_on_wor
                           6227 ;	-----------------------------------------
   13DB                    6228 _ax5043_receiver_on_wor:
                    0B91   6229 	C$easyax5043.c$827$1$267 ==.
                           6230 ;	..\COMMON\easyax5043.c:827: AX5043_BGNDRSSIGAIN = 0x02;
   13DB 90 42 2E           6231 	mov	dptr,#_AX5043_BGNDRSSIGAIN
   13DE 74 02              6232 	mov	a,#0x02
   13E0 F0                 6233 	movx	@dptr,a
                    0B97   6234 	C$easyax5043.c$828$1$267 ==.
                           6235 ;	..\COMMON\easyax5043.c:828: if(axradio_framing_enable_sfdcallback)
   13E1 90 56 3C           6236 	mov	dptr,#_axradio_framing_enable_sfdcallback
   13E4 E4                 6237 	clr	a
   13E5 93                 6238 	movc	a,@a+dptr
   13E6 FF                 6239 	mov	r7,a
   13E7 60 06              6240 	jz	00102$
                    0B9F   6241 	C$easyax5043.c$829$1$267 ==.
                           6242 ;	..\COMMON\easyax5043.c:829: AX5043_RADIOEVENTMASK0 = 0x04;
   13E9 90 40 09           6243 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   13EC 74 04              6244 	mov	a,#0x04
   13EE F0                 6245 	movx	@dptr,a
   13EF                    6246 00102$:
                    0BA5   6247 	C$easyax5043.c$830$1$267 ==.
                           6248 ;	..\COMMON\easyax5043.c:830: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13EF 90 40 28           6249 	mov	dptr,#_AX5043_FIFOSTAT
   13F2 74 03              6250 	mov	a,#0x03
   13F4 F0                 6251 	movx	@dptr,a
                    0BAB   6252 	C$easyax5043.c$831$1$267 ==.
                           6253 ;	..\COMMON\easyax5043.c:831: AX5043_LPOSCCONFIG = 0x01; // start LPOSC, slow mode
   13F5 90 43 10           6254 	mov	dptr,#_AX5043_LPOSCCONFIG
   13F8 74 01              6255 	mov	a,#0x01
   13FA F0                 6256 	movx	@dptr,a
                    0BB1   6257 	C$easyax5043.c$832$1$267 ==.
                           6258 ;	..\COMMON\easyax5043.c:832: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_wor;
   13FB 90 56 20           6259 	mov	dptr,#_axradio_phy_tmgrxpreamble1_wor
   13FE E4                 6260 	clr	a
   13FF 93                 6261 	movc	a,@a+dptr
   1400 90 42 29           6262 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   1403 F0                 6263 	movx	@dptr,a
                    0BBA   6264 	C$easyax5043.c$833$1$267 ==.
                           6265 ;	..\COMMON\easyax5043.c:833: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   1404 90 56 19           6266 	mov	dptr,#_axradio_phy_rssireference
   1407 E4                 6267 	clr	a
   1408 93                 6268 	movc	a,@a+dptr
   1409 FE                 6269 	mov	r6,a
   140A 90 42 2C           6270 	mov	dptr,#_AX5043_RSSIREFERENCE
   140D F0                 6271 	movx	@dptr,a
                    0BC4   6272 	C$easyax5043.c$834$1$267 ==.
                           6273 ;	..\COMMON\easyax5043.c:834: AX5043_PWRMODE = AX5043_PWRSTATE_WOR_RX;
   140E 90 40 02           6274 	mov	dptr,#_AX5043_PWRMODE
   1411 74 0B              6275 	mov	a,#0x0B
   1413 F0                 6276 	movx	@dptr,a
                    0BCA   6277 	C$easyax5043.c$835$1$267 ==.
                           6278 ;	..\COMMON\easyax5043.c:835: axradio_trxstate = trxstate_rxwor;
   1414 75 0B 02           6279 	mov	_axradio_trxstate,#0x02
                    0BCD   6280 	C$easyax5043.c$836$1$267 ==.
                           6281 ;	..\COMMON\easyax5043.c:836: if(axradio_framing_enable_sfdcallback)
   1417 EF                 6282 	mov	a,r7
   1418 60 08              6283 	jz	00104$
                    0BD0   6284 	C$easyax5043.c$837$1$267 ==.
                           6285 ;	..\COMMON\easyax5043.c:837: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   141A 90 40 07           6286 	mov	dptr,#_AX5043_IRQMASK0
   141D 74 41              6287 	mov	a,#0x41
   141F F0                 6288 	movx	@dptr,a
   1420 80 06              6289 	sjmp	00105$
   1422                    6290 00104$:
                    0BD8   6291 	C$easyax5043.c$839$1$267 ==.
                           6292 ;	..\COMMON\easyax5043.c:839: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   1422 90 40 07           6293 	mov	dptr,#_AX5043_IRQMASK0
   1425 74 01              6294 	mov	a,#0x01
   1427 F0                 6295 	movx	@dptr,a
   1428                    6296 00105$:
                    0BDE   6297 	C$easyax5043.c$840$1$267 ==.
                           6298 ;	..\COMMON\easyax5043.c:840: AX5043_IRQMASK1 = 0x01; // xtal ready
   1428 90 40 06           6299 	mov	dptr,#_AX5043_IRQMASK1
   142B 74 01              6300 	mov	a,#0x01
   142D F0                 6301 	movx	@dptr,a
                    0BE4   6302 	C$easyax5043.c$842$2$267 ==.
                           6303 ;	..\COMMON\easyax5043.c:842: uint16_t wp = axradio_wor_period;
   142E 90 56 48           6304 	mov	dptr,#_axradio_wor_period
   1431 E4                 6305 	clr	a
   1432 93                 6306 	movc	a,@a+dptr
   1433 FE                 6307 	mov	r6,a
   1434 74 01              6308 	mov	a,#0x01
   1436 93                 6309 	movc	a,@a+dptr
                    0BED   6310 	C$easyax5043.c$843$2$268 ==.
                           6311 ;	..\COMMON\easyax5043.c:843: AX5043_WAKEUPFREQ1 = (wp >> 8) & 0xFF;
   1437 FF                 6312 	mov	r7,a
   1438 FD                 6313 	mov	r5,a
   1439 90 40 6C           6314 	mov	dptr,#_AX5043_WAKEUPFREQ1
   143C ED                 6315 	mov	a,r5
   143D F0                 6316 	movx	@dptr,a
                    0BF4   6317 	C$easyax5043.c$844$2$268 ==.
                           6318 ;	..\COMMON\easyax5043.c:844: AX5043_WAKEUPFREQ0 = (wp >> 0) & 0xFF;  // actually wakeup period measured in LP OSC cycles
   143E 8E 05              6319 	mov	ar5,r6
   1440 90 40 6D           6320 	mov	dptr,#_AX5043_WAKEUPFREQ0
   1443 ED                 6321 	mov	a,r5
   1444 F0                 6322 	movx	@dptr,a
                    0BFB   6323 	C$easyax5043.c$845$2$268 ==.
                           6324 ;	..\COMMON\easyax5043.c:845: wp += radio_read16((uint16_t)&AX5043_WAKEUPTIMER1);
   1445 90 40 68           6325 	mov	dptr,#_AX5043_WAKEUPTIMER1
   1448 12 46 DA           6326 	lcall	_radio_read16
   144B AC 82              6327 	mov	r4,dpl
   144D AD 83              6328 	mov	r5,dph
   144F EC                 6329 	mov	a,r4
   1450 2E                 6330 	add	a,r6
   1451 FE                 6331 	mov	r6,a
   1452 ED                 6332 	mov	a,r5
   1453 3F                 6333 	addc	a,r7
                    0C0A   6334 	C$easyax5043.c$846$2$268 ==.
                           6335 ;	..\COMMON\easyax5043.c:846: AX5043_WAKEUP1 = (wp >> 8) & 0xFF;
   1454 FD                 6336 	mov	r5,a
   1455 90 40 6A           6337 	mov	dptr,#_AX5043_WAKEUP1
   1458 ED                 6338 	mov	a,r5
   1459 F0                 6339 	movx	@dptr,a
                    0C10   6340 	C$easyax5043.c$847$2$268 ==.
                           6341 ;	..\COMMON\easyax5043.c:847: AX5043_WAKEUP0 = (wp >> 0) & 0xFF;
   145A 90 40 6B           6342 	mov	dptr,#_AX5043_WAKEUP0
   145D EE                 6343 	mov	a,r6
   145E F0                 6344 	movx	@dptr,a
                    0C15   6345 	C$easyax5043.c$849$2$268 ==.
                    0C15   6346 	XG$ax5043_receiver_on_wor$0$0 ==.
   145F 22                 6347 	ret
                           6348 ;------------------------------------------------------------
                           6349 ;Allocation info for local variables in function 'ax5043_prepare_tx'
                           6350 ;------------------------------------------------------------
                    0C16   6351 	G$ax5043_prepare_tx$0$0 ==.
                    0C16   6352 	C$easyax5043.c$850$2$268 ==.
                           6353 ;	..\COMMON\easyax5043.c:850: __reentrantb void ax5043_prepare_tx(void) __reentrant
                           6354 ;	-----------------------------------------
                           6355 ;	 function ax5043_prepare_tx
                           6356 ;	-----------------------------------------
   1460                    6357 _ax5043_prepare_tx:
                    0C16   6358 	C$easyax5043.c$852$1$270 ==.
                           6359 ;	..\COMMON\easyax5043.c:852: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
                    0C16   6360 	C$easyax5043.c$853$1$270 ==.
                           6361 ;	..\COMMON\easyax5043.c:853: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   1460 90 40 02           6362 	mov	dptr,#_AX5043_PWRMODE
   1463 74 05              6363 	mov	a,#0x05
   1465 F0                 6364 	movx	@dptr,a
   1466 74 07              6365 	mov	a,#0x07
   1468 F0                 6366 	movx	@dptr,a
                    0C1F   6367 	C$easyax5043.c$854$1$270 ==.
                           6368 ;	..\COMMON\easyax5043.c:854: ax5043_init_registers_tx();
   1469 12 08 E0           6369 	lcall	_ax5043_init_registers_tx
                    0C22   6370 	C$easyax5043.c$855$1$270 ==.
                           6371 ;	..\COMMON\easyax5043.c:855: AX5043_FIFOTHRESH1 = 0;
   146C 90 40 2E           6372 	mov	dptr,#_AX5043_FIFOTHRESH1
   146F E4                 6373 	clr	a
   1470 F0                 6374 	movx	@dptr,a
                    0C27   6375 	C$easyax5043.c$856$1$270 ==.
                           6376 ;	..\COMMON\easyax5043.c:856: AX5043_FIFOTHRESH0 = 0x80;
   1471 90 40 2F           6377 	mov	dptr,#_AX5043_FIFOTHRESH0
   1474 74 80              6378 	mov	a,#0x80
   1476 F0                 6379 	movx	@dptr,a
                    0C2D   6380 	C$easyax5043.c$857$1$270 ==.
                           6381 ;	..\COMMON\easyax5043.c:857: axradio_trxstate = trxstate_tx_xtalwait;
   1477 75 0B 09           6382 	mov	_axradio_trxstate,#0x09
                    0C30   6383 	C$easyax5043.c$858$1$270 ==.
                           6384 ;	..\COMMON\easyax5043.c:858: AX5043_IRQMASK0 = 0x00;
   147A 90 40 07           6385 	mov	dptr,#_AX5043_IRQMASK0
   147D E4                 6386 	clr	a
   147E F0                 6387 	movx	@dptr,a
                    0C35   6388 	C$easyax5043.c$859$1$270 ==.
                           6389 ;	..\COMMON\easyax5043.c:859: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   147F 90 40 06           6390 	mov	dptr,#_AX5043_IRQMASK1
   1482 74 01              6391 	mov	a,#0x01
   1484 F0                 6392 	movx	@dptr,a
                    0C3B   6393 	C$easyax5043.c$860$1$270 ==.
                    0C3B   6394 	XG$ax5043_prepare_tx$0$0 ==.
   1485 22                 6395 	ret
                           6396 ;------------------------------------------------------------
                           6397 ;Allocation info for local variables in function 'ax5043_off'
                           6398 ;------------------------------------------------------------
                    0C3C   6399 	G$ax5043_off$0$0 ==.
                    0C3C   6400 	C$easyax5043.c$862$1$270 ==.
                           6401 ;	..\COMMON\easyax5043.c:862: __reentrantb void ax5043_off(void) __reentrant
                           6402 ;	-----------------------------------------
                           6403 ;	 function ax5043_off
                           6404 ;	-----------------------------------------
   1486                    6405 _ax5043_off:
                    0C3C   6406 	C$easyax5043.c$864$1$272 ==.
                           6407 ;	..\COMMON\easyax5043.c:864: ax5043_off_xtal();
   1486 12 14 8F           6408 	lcall	_ax5043_off_xtal
                    0C3F   6409 	C$easyax5043.c$865$1$272 ==.
                           6410 ;	..\COMMON\easyax5043.c:865: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   1489 90 40 02           6411 	mov	dptr,#_AX5043_PWRMODE
   148C E4                 6412 	clr	a
   148D F0                 6413 	movx	@dptr,a
                    0C44   6414 	C$easyax5043.c$866$1$272 ==.
                    0C44   6415 	XG$ax5043_off$0$0 ==.
   148E 22                 6416 	ret
                           6417 ;------------------------------------------------------------
                           6418 ;Allocation info for local variables in function 'ax5043_off_xtal'
                           6419 ;------------------------------------------------------------
                    0C45   6420 	G$ax5043_off_xtal$0$0 ==.
                    0C45   6421 	C$easyax5043.c$868$1$272 ==.
                           6422 ;	..\COMMON\easyax5043.c:868: __reentrantb void ax5043_off_xtal(void) __reentrant
                           6423 ;	-----------------------------------------
                           6424 ;	 function ax5043_off_xtal
                           6425 ;	-----------------------------------------
   148F                    6426 _ax5043_off_xtal:
                    0C45   6427 	C$easyax5043.c$870$1$274 ==.
                           6428 ;	..\COMMON\easyax5043.c:870: AX5043_IRQMASK0 = 0x00; // IRQ off
   148F 90 40 07           6429 	mov	dptr,#_AX5043_IRQMASK0
                    0C48   6430 	C$easyax5043.c$871$1$274 ==.
                           6431 ;	..\COMMON\easyax5043.c:871: AX5043_IRQMASK1 = 0x00;
   1492 E4                 6432 	clr	a
   1493 F0                 6433 	movx	@dptr,a
   1494 90 40 06           6434 	mov	dptr,#_AX5043_IRQMASK1
   1497 F0                 6435 	movx	@dptr,a
                    0C4E   6436 	C$easyax5043.c$872$1$274 ==.
                           6437 ;	..\COMMON\easyax5043.c:872: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1498 90 40 02           6438 	mov	dptr,#_AX5043_PWRMODE
   149B 74 05              6439 	mov	a,#0x05
   149D F0                 6440 	movx	@dptr,a
                    0C54   6441 	C$easyax5043.c$873$1$274 ==.
                           6442 ;	..\COMMON\easyax5043.c:873: AX5043_LPOSCCONFIG = 0x00; // LPOSC off
   149E 90 43 10           6443 	mov	dptr,#_AX5043_LPOSCCONFIG
   14A1 E4                 6444 	clr	a
   14A2 F0                 6445 	movx	@dptr,a
                    0C59   6446 	C$easyax5043.c$874$1$274 ==.
                           6447 ;	..\COMMON\easyax5043.c:874: axradio_trxstate = trxstate_off;
   14A3 75 0B 00           6448 	mov	_axradio_trxstate,#0x00
                    0C5C   6449 	C$easyax5043.c$875$1$274 ==.
                    0C5C   6450 	XG$ax5043_off_xtal$0$0 ==.
   14A6 22                 6451 	ret
                           6452 ;------------------------------------------------------------
                           6453 ;Allocation info for local variables in function 'axradio_wait_for_xtal'
                           6454 ;------------------------------------------------------------
                           6455 ;iesave                    Allocated to registers r7 
                           6456 ;------------------------------------------------------------
                    0C5D   6457 	G$axradio_wait_for_xtal$0$0 ==.
                    0C5D   6458 	C$easyax5043.c$877$1$274 ==.
                           6459 ;	..\COMMON\easyax5043.c:877: void axradio_wait_for_xtal(void)
                           6460 ;	-----------------------------------------
                           6461 ;	 function axradio_wait_for_xtal
                           6462 ;	-----------------------------------------
   14A7                    6463 _axradio_wait_for_xtal:
                    0C5D   6464 	C$easyax5043.c$879$1$276 ==.
                           6465 ;	..\COMMON\easyax5043.c:879: uint8_t __autodata iesave = IE & 0x80;
   14A7 74 80              6466 	mov	a,#0x80
   14A9 55 A8              6467 	anl	a,_IE
   14AB FF                 6468 	mov	r7,a
                    0C62   6469 	C$easyax5043.c$880$1$276 ==.
                           6470 ;	..\COMMON\easyax5043.c:880: EA = 0;
   14AC C2 AF              6471 	clr	_EA
                    0C64   6472 	C$easyax5043.c$881$1$276 ==.
                           6473 ;	..\COMMON\easyax5043.c:881: axradio_trxstate = trxstate_wait_xtal;
   14AE 75 0B 03           6474 	mov	_axradio_trxstate,#0x03
                    0C67   6475 	C$easyax5043.c$882$1$276 ==.
                           6476 ;	..\COMMON\easyax5043.c:882: AX5043_IRQMASK1 |= 0x01; // enable xtal ready interrupt
   14B1 90 40 06           6477 	mov	dptr,#_AX5043_IRQMASK1
   14B4 E0                 6478 	movx	a,@dptr
   14B5 FE                 6479 	mov	r6,a
   14B6 44 01              6480 	orl	a,#0x01
   14B8 F0                 6481 	movx	@dptr,a
   14B9                    6482 00104$:
                    0C6F   6483 	C$easyax5043.c$884$2$277 ==.
                           6484 ;	..\COMMON\easyax5043.c:884: EA = 0;
   14B9 C2 AF              6485 	clr	_EA
                    0C71   6486 	C$easyax5043.c$885$2$277 ==.
                           6487 ;	..\COMMON\easyax5043.c:885: if (axradio_trxstate == trxstate_xtal_ready)
   14BB 74 04              6488 	mov	a,#0x04
   14BD B5 0B 02           6489 	cjne	a,_axradio_trxstate,00112$
   14C0 80 11              6490 	sjmp	00105$
   14C2                    6491 00112$:
                    0C78   6492 	C$easyax5043.c$887$2$277 ==.
                           6493 ;	..\COMMON\easyax5043.c:887: wtimer_idle(WTFLAG_CANSTANDBY);
   14C2 75 82 02           6494 	mov	dpl,#0x02
   14C5 C0 07              6495 	push	ar7
   14C7 12 43 55           6496 	lcall	_wtimer_idle
                    0C80   6497 	C$easyax5043.c$888$2$277 ==.
                           6498 ;	..\COMMON\easyax5043.c:888: EA = 1;
   14CA D2 AF              6499 	setb	_EA
                    0C82   6500 	C$easyax5043.c$889$2$277 ==.
                           6501 ;	..\COMMON\easyax5043.c:889: wtimer_runcallbacks();
   14CC 12 42 D1           6502 	lcall	_wtimer_runcallbacks
   14CF D0 07              6503 	pop	ar7
   14D1 80 E6              6504 	sjmp	00104$
   14D3                    6505 00105$:
                    0C89   6506 	C$easyax5043.c$891$1$276 ==.
                           6507 ;	..\COMMON\easyax5043.c:891: IE |= iesave;
   14D3 EF                 6508 	mov	a,r7
   14D4 42 A8              6509 	orl	_IE,a
                    0C8C   6510 	C$easyax5043.c$892$1$276 ==.
                    0C8C   6511 	XG$axradio_wait_for_xtal$0$0 ==.
   14D6 22                 6512 	ret
                           6513 ;------------------------------------------------------------
                           6514 ;Allocation info for local variables in function 'axradio_setaddrregs'
                           6515 ;------------------------------------------------------------
                           6516 ;pn                        Allocated to registers r6 r7 
                           6517 ;inv                       Allocated to registers r5 
                           6518 ;------------------------------------------------------------
                    0C8D   6519 	Feasyax5043$axradio_setaddrregs$0$0 ==.
                    0C8D   6520 	C$easyax5043.c$894$1$276 ==.
                           6521 ;	..\COMMON\easyax5043.c:894: static void axradio_setaddrregs(void)
                           6522 ;	-----------------------------------------
                           6523 ;	 function axradio_setaddrregs
                           6524 ;	-----------------------------------------
   14D7                    6525 _axradio_setaddrregs:
                    0C8D   6526 	C$easyax5043.c$896$1$279 ==.
                           6527 ;	..\COMMON\easyax5043.c:896: AX5043_PKTADDR0 = axradio_localaddr.addr[0];
   14D7 90 00 1E           6528 	mov	dptr,#_axradio_localaddr
   14DA E0                 6529 	movx	a,@dptr
   14DB 90 42 07           6530 	mov	dptr,#_AX5043_PKTADDR0
   14DE F0                 6531 	movx	@dptr,a
                    0C95   6532 	C$easyax5043.c$897$1$279 ==.
                           6533 ;	..\COMMON\easyax5043.c:897: AX5043_PKTADDR1 = axradio_localaddr.addr[1];
   14DF 90 00 1F           6534 	mov	dptr,#(_axradio_localaddr + 0x0001)
   14E2 E0                 6535 	movx	a,@dptr
   14E3 90 42 06           6536 	mov	dptr,#_AX5043_PKTADDR1
   14E6 F0                 6537 	movx	@dptr,a
                    0C9D   6538 	C$easyax5043.c$898$1$279 ==.
                           6539 ;	..\COMMON\easyax5043.c:898: AX5043_PKTADDR2 = axradio_localaddr.addr[2];
   14E7 90 00 20           6540 	mov	dptr,#(_axradio_localaddr + 0x0002)
   14EA E0                 6541 	movx	a,@dptr
   14EB 90 42 05           6542 	mov	dptr,#_AX5043_PKTADDR2
   14EE F0                 6543 	movx	@dptr,a
                    0CA5   6544 	C$easyax5043.c$899$1$279 ==.
                           6545 ;	..\COMMON\easyax5043.c:899: AX5043_PKTADDR3 = axradio_localaddr.addr[3];
   14EF 90 00 21           6546 	mov	dptr,#(_axradio_localaddr + 0x0003)
   14F2 E0                 6547 	movx	a,@dptr
   14F3 90 42 04           6548 	mov	dptr,#_AX5043_PKTADDR3
   14F6 F0                 6549 	movx	@dptr,a
                    0CAD   6550 	C$easyax5043.c$901$1$279 ==.
                           6551 ;	..\COMMON\easyax5043.c:901: AX5043_PKTADDRMASK0 = axradio_localaddr.mask[0];
   14F7 90 00 22           6552 	mov	dptr,#(_axradio_localaddr + 0x0004)
   14FA E0                 6553 	movx	a,@dptr
   14FB 90 42 0B           6554 	mov	dptr,#_AX5043_PKTADDRMASK0
   14FE F0                 6555 	movx	@dptr,a
                    0CB5   6556 	C$easyax5043.c$902$1$279 ==.
                           6557 ;	..\COMMON\easyax5043.c:902: AX5043_PKTADDRMASK1 = axradio_localaddr.mask[1];
   14FF 90 00 23           6558 	mov	dptr,#(_axradio_localaddr + 0x0005)
   1502 E0                 6559 	movx	a,@dptr
   1503 90 42 0A           6560 	mov	dptr,#_AX5043_PKTADDRMASK1
   1506 F0                 6561 	movx	@dptr,a
                    0CBD   6562 	C$easyax5043.c$903$1$279 ==.
                           6563 ;	..\COMMON\easyax5043.c:903: AX5043_PKTADDRMASK2 = axradio_localaddr.mask[2];
   1507 90 00 24           6564 	mov	dptr,#(_axradio_localaddr + 0x0006)
   150A E0                 6565 	movx	a,@dptr
   150B 90 42 09           6566 	mov	dptr,#_AX5043_PKTADDRMASK2
   150E F0                 6567 	movx	@dptr,a
                    0CC5   6568 	C$easyax5043.c$904$1$279 ==.
                           6569 ;	..\COMMON\easyax5043.c:904: AX5043_PKTADDRMASK3 = axradio_localaddr.mask[3];
   150F 90 00 25           6570 	mov	dptr,#(_axradio_localaddr + 0x0007)
   1512 E0                 6571 	movx	a,@dptr
   1513 90 42 08           6572 	mov	dptr,#_AX5043_PKTADDRMASK3
   1516 F0                 6573 	movx	@dptr,a
                    0CCD   6574 	C$easyax5043.c$906$1$279 ==.
                           6575 ;	..\COMMON\easyax5043.c:906: if (axradio_phy_pn9 && axradio_framing_addrlen) {
   1517 90 56 0D           6576 	mov	dptr,#_axradio_phy_pn9
   151A E4                 6577 	clr	a
   151B 93                 6578 	movc	a,@a+dptr
   151C FF                 6579 	mov	r7,a
   151D 70 03              6580 	jnz	00114$
   151F 02 16 01           6581 	ljmp	00106$
   1522                    6582 00114$:
   1522 90 56 2F           6583 	mov	dptr,#_axradio_framing_addrlen
   1525 E4                 6584 	clr	a
   1526 93                 6585 	movc	a,@a+dptr
   1527 FF                 6586 	mov	r7,a
   1528 70 03              6587 	jnz	00115$
   152A 02 16 01           6588 	ljmp	00106$
   152D                    6589 00115$:
                    0CE3   6590 	C$easyax5043.c$907$2$279 ==.
                           6591 ;	..\COMMON\easyax5043.c:907: uint16_t __autodata pn = 0x1ff;
   152D 7E FF              6592 	mov	r6,#0xFF
   152F 7F 01              6593 	mov	r7,#0x01
                    0CE7   6594 	C$easyax5043.c$908$2$280 ==.
                           6595 ;	..\COMMON\easyax5043.c:908: uint8_t __autodata inv = -(AX5043_ENCODING & 0x01);
   1531 90 40 11           6596 	mov	dptr,#_AX5043_ENCODING
   1534 E0                 6597 	movx	a,@dptr
   1535 FD                 6598 	mov	r5,a
   1536 53 05 01           6599 	anl	ar5,#0x01
   1539 C3                 6600 	clr	c
   153A E4                 6601 	clr	a
   153B 9D                 6602 	subb	a,r5
   153C FD                 6603 	mov	r5,a
                    0CF3   6604 	C$easyax5043.c$909$2$280 ==.
                           6605 ;	..\COMMON\easyax5043.c:909: if (axradio_framing_destaddrpos != 0xff)
   153D 90 56 30           6606 	mov	dptr,#_axradio_framing_destaddrpos
   1540 E4                 6607 	clr	a
   1541 93                 6608 	movc	a,@a+dptr
   1542 FC                 6609 	mov	r4,a
   1543 BC FF 02           6610 	cjne	r4,#0xFF,00116$
   1546 80 25              6611 	sjmp	00102$
   1548                    6612 00116$:
                    0CFE   6613 	C$easyax5043.c$910$2$280 ==.
                           6614 ;	..\COMMON\easyax5043.c:910: pn = pn9_advance_bits(pn, axradio_framing_destaddrpos << 3);
   1548 E4                 6615 	clr	a
   1549 03                 6616 	rr	a
   154A 54 F8              6617 	anl	a,#0xF8
   154C CC                 6618 	xch	a,r4
   154D C4                 6619 	swap	a
   154E 03                 6620 	rr	a
   154F CC                 6621 	xch	a,r4
   1550 6C                 6622 	xrl	a,r4
   1551 CC                 6623 	xch	a,r4
   1552 54 F8              6624 	anl	a,#0xF8
   1554 CC                 6625 	xch	a,r4
   1555 6C                 6626 	xrl	a,r4
   1556 FB                 6627 	mov	r3,a
   1557 C0 05              6628 	push	ar5
   1559 C0 04              6629 	push	ar4
   155B C0 03              6630 	push	ar3
   155D 90 01 FF           6631 	mov	dptr,#0x01FF
   1560 12 51 B5           6632 	lcall	_pn9_advance_bits
   1563 AE 82              6633 	mov	r6,dpl
   1565 AF 83              6634 	mov	r7,dph
   1567 15 81              6635 	dec	sp
   1569 15 81              6636 	dec	sp
   156B D0 05              6637 	pop	ar5
   156D                    6638 00102$:
                    0D23   6639 	C$easyax5043.c$911$2$280 ==.
                           6640 ;	..\COMMON\easyax5043.c:911: AX5043_PKTADDR0 ^= pn ^ inv;
   156D 7C 00              6641 	mov	r4,#0x00
   156F ED                 6642 	mov	a,r5
   1570 6E                 6643 	xrl	a,r6
   1571 FA                 6644 	mov	r2,a
   1572 EC                 6645 	mov	a,r4
   1573 6F                 6646 	xrl	a,r7
   1574 FB                 6647 	mov	r3,a
   1575 90 42 07           6648 	mov	dptr,#_AX5043_PKTADDR0
   1578 E0                 6649 	movx	a,@dptr
   1579 79 00              6650 	mov	r1,#0x00
   157B 62 02              6651 	xrl	ar2,a
   157D E9                 6652 	mov	a,r1
   157E 62 03              6653 	xrl	ar3,a
   1580 90 42 07           6654 	mov	dptr,#_AX5043_PKTADDR0
   1583 EA                 6655 	mov	a,r2
   1584 F0                 6656 	movx	@dptr,a
                    0D3B   6657 	C$easyax5043.c$912$2$280 ==.
                           6658 ;	..\COMMON\easyax5043.c:912: pn = pn9_advance_byte(pn);
   1585 8E 82              6659 	mov	dpl,r6
   1587 8F 83              6660 	mov	dph,r7
   1589 C0 05              6661 	push	ar5
   158B C0 04              6662 	push	ar4
   158D 12 53 03           6663 	lcall	_pn9_advance_byte
   1590 AE 82              6664 	mov	r6,dpl
   1592 AF 83              6665 	mov	r7,dph
   1594 D0 04              6666 	pop	ar4
   1596 D0 05              6667 	pop	ar5
                    0D4E   6668 	C$easyax5043.c$913$2$280 ==.
                           6669 ;	..\COMMON\easyax5043.c:913: AX5043_PKTADDR1 ^= pn ^ inv;
   1598 ED                 6670 	mov	a,r5
   1599 6E                 6671 	xrl	a,r6
   159A FA                 6672 	mov	r2,a
   159B EC                 6673 	mov	a,r4
   159C 6F                 6674 	xrl	a,r7
   159D FB                 6675 	mov	r3,a
   159E 90 42 06           6676 	mov	dptr,#_AX5043_PKTADDR1
   15A1 E0                 6677 	movx	a,@dptr
   15A2 79 00              6678 	mov	r1,#0x00
   15A4 62 02              6679 	xrl	ar2,a
   15A6 E9                 6680 	mov	a,r1
   15A7 62 03              6681 	xrl	ar3,a
   15A9 90 42 06           6682 	mov	dptr,#_AX5043_PKTADDR1
   15AC EA                 6683 	mov	a,r2
   15AD F0                 6684 	movx	@dptr,a
                    0D64   6685 	C$easyax5043.c$914$2$280 ==.
                           6686 ;	..\COMMON\easyax5043.c:914: pn = pn9_advance_byte(pn);
   15AE 8E 82              6687 	mov	dpl,r6
   15B0 8F 83              6688 	mov	dph,r7
   15B2 C0 05              6689 	push	ar5
   15B4 C0 04              6690 	push	ar4
   15B6 12 53 03           6691 	lcall	_pn9_advance_byte
   15B9 AE 82              6692 	mov	r6,dpl
   15BB AF 83              6693 	mov	r7,dph
   15BD D0 04              6694 	pop	ar4
   15BF D0 05              6695 	pop	ar5
                    0D77   6696 	C$easyax5043.c$915$2$280 ==.
                           6697 ;	..\COMMON\easyax5043.c:915: AX5043_PKTADDR2 ^= pn ^ inv;
   15C1 ED                 6698 	mov	a,r5
   15C2 6E                 6699 	xrl	a,r6
   15C3 FA                 6700 	mov	r2,a
   15C4 EC                 6701 	mov	a,r4
   15C5 6F                 6702 	xrl	a,r7
   15C6 FB                 6703 	mov	r3,a
   15C7 90 42 05           6704 	mov	dptr,#_AX5043_PKTADDR2
   15CA E0                 6705 	movx	a,@dptr
   15CB 79 00              6706 	mov	r1,#0x00
   15CD 62 02              6707 	xrl	ar2,a
   15CF E9                 6708 	mov	a,r1
   15D0 62 03              6709 	xrl	ar3,a
   15D2 90 42 05           6710 	mov	dptr,#_AX5043_PKTADDR2
   15D5 EA                 6711 	mov	a,r2
   15D6 F0                 6712 	movx	@dptr,a
                    0D8D   6713 	C$easyax5043.c$916$2$280 ==.
                           6714 ;	..\COMMON\easyax5043.c:916: pn = pn9_advance_byte(pn);
   15D7 8E 82              6715 	mov	dpl,r6
   15D9 8F 83              6716 	mov	dph,r7
   15DB C0 05              6717 	push	ar5
   15DD C0 04              6718 	push	ar4
   15DF 12 53 03           6719 	lcall	_pn9_advance_byte
   15E2 AE 82              6720 	mov	r6,dpl
   15E4 AF 83              6721 	mov	r7,dph
   15E6 D0 04              6722 	pop	ar4
   15E8 D0 05              6723 	pop	ar5
                    0DA0   6724 	C$easyax5043.c$917$2$280 ==.
                           6725 ;	..\COMMON\easyax5043.c:917: AX5043_PKTADDR3 ^= pn ^ inv;
   15EA ED                 6726 	mov	a,r5
   15EB 62 06              6727 	xrl	ar6,a
   15ED EC                 6728 	mov	a,r4
   15EE 62 07              6729 	xrl	ar7,a
   15F0 90 42 04           6730 	mov	dptr,#_AX5043_PKTADDR3
   15F3 E0                 6731 	movx	a,@dptr
   15F4 FD                 6732 	mov	r5,a
   15F5 7C 00              6733 	mov	r4,#0x00
   15F7 62 06              6734 	xrl	ar6,a
   15F9 EC                 6735 	mov	a,r4
   15FA 62 07              6736 	xrl	ar7,a
   15FC 90 42 04           6737 	mov	dptr,#_AX5043_PKTADDR3
   15FF EE                 6738 	mov	a,r6
   1600 F0                 6739 	movx	@dptr,a
   1601                    6740 00106$:
                    0DB7   6741 	C$easyax5043.c$919$1$279 ==.
                    0DB7   6742 	XFeasyax5043$axradio_setaddrregs$0$0 ==.
   1601 22                 6743 	ret
                           6744 ;------------------------------------------------------------
                           6745 ;Allocation info for local variables in function 'ax5043_init_registers'
                           6746 ;------------------------------------------------------------
                    0DB8   6747 	Feasyax5043$ax5043_init_registers$0$0 ==.
                    0DB8   6748 	C$easyax5043.c$921$1$279 ==.
                           6749 ;	..\COMMON\easyax5043.c:921: static void ax5043_init_registers(void)
                           6750 ;	-----------------------------------------
                           6751 ;	 function ax5043_init_registers
                           6752 ;	-----------------------------------------
   1602                    6753 _ax5043_init_registers:
                    0DB8   6754 	C$easyax5043.c$923$1$282 ==.
                           6755 ;	..\COMMON\easyax5043.c:923: ax5043_set_registers();
   1602 12 01 52           6756 	lcall	_ax5043_set_registers
                    0DBB   6757 	C$easyax5043.c$928$1$282 ==.
                           6758 ;	..\COMMON\easyax5043.c:928: AX5043_PKTLENOFFSET += axradio_framing_swcrclen; // add len offs for software CRC16 (used for both, fixed and variable length packets
   1605 90 56 35           6759 	mov	dptr,#_axradio_framing_swcrclen
   1608 E4                 6760 	clr	a
   1609 93                 6761 	movc	a,@a+dptr
   160A FF                 6762 	mov	r7,a
   160B 90 42 02           6763 	mov	dptr,#_AX5043_PKTLENOFFSET
   160E E0                 6764 	movx	a,@dptr
   160F FE                 6765 	mov	r6,a
   1610 90 42 02           6766 	mov	dptr,#_AX5043_PKTLENOFFSET
   1613 EF                 6767 	mov	a,r7
   1614 2E                 6768 	add	a,r6
   1615 F0                 6769 	movx	@dptr,a
                    0DCC   6770 	C$easyax5043.c$929$1$282 ==.
                           6771 ;	..\COMMON\easyax5043.c:929: AX5043_PINFUNCIRQ = 0x03; // use as IRQ pin
   1616 90 40 24           6772 	mov	dptr,#_AX5043_PINFUNCIRQ
   1619 74 03              6773 	mov	a,#0x03
   161B F0                 6774 	movx	@dptr,a
                    0DD2   6775 	C$easyax5043.c$930$1$282 ==.
                           6776 ;	..\COMMON\easyax5043.c:930: AX5043_PKTSTOREFLAGS = 0x15; // store RF offset, RSSI and delimiter timing
   161C 90 42 32           6777 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   161F 74 15              6778 	mov	a,#0x15
   1621 F0                 6779 	movx	@dptr,a
                    0DD8   6780 	C$easyax5043.c$931$1$282 ==.
                           6781 ;	..\COMMON\easyax5043.c:931: axradio_setaddrregs();
   1622 12 14 D7           6782 	lcall	_axradio_setaddrregs
                    0DDB   6783 	C$easyax5043.c$932$1$282 ==.
                    0DDB   6784 	XFeasyax5043$ax5043_init_registers$0$0 ==.
   1625 22                 6785 	ret
                           6786 ;------------------------------------------------------------
                           6787 ;Allocation info for local variables in function 'axradio_sync_addtime'
                           6788 ;------------------------------------------------------------
                           6789 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6790 ;------------------------------------------------------------
                    0DDC   6791 	Feasyax5043$axradio_sync_addtime$0$0 ==.
                    0DDC   6792 	C$easyax5043.c$938$1$282 ==.
                           6793 ;	..\COMMON\easyax5043.c:938: static __reentrantb void axradio_sync_addtime(uint32_t dt) __reentrant
                           6794 ;	-----------------------------------------
                           6795 ;	 function axradio_sync_addtime
                           6796 ;	-----------------------------------------
   1626                    6797 _axradio_sync_addtime:
   1626 AC 82              6798 	mov	r4,dpl
   1628 AD 83              6799 	mov	r5,dph
   162A AE F0              6800 	mov	r6,b
   162C FF                 6801 	mov	r7,a
                    0DE3   6802 	C$easyax5043.c$940$1$284 ==.
                           6803 ;	..\COMMON\easyax5043.c:940: axradio_sync_time += dt;
   162D 90 00 10           6804 	mov	dptr,#_axradio_sync_time
   1630 E0                 6805 	movx	a,@dptr
   1631 F8                 6806 	mov	r0,a
   1632 A3                 6807 	inc	dptr
   1633 E0                 6808 	movx	a,@dptr
   1634 F9                 6809 	mov	r1,a
   1635 A3                 6810 	inc	dptr
   1636 E0                 6811 	movx	a,@dptr
   1637 FA                 6812 	mov	r2,a
   1638 A3                 6813 	inc	dptr
   1639 E0                 6814 	movx	a,@dptr
   163A FB                 6815 	mov	r3,a
   163B 90 00 10           6816 	mov	dptr,#_axradio_sync_time
   163E EC                 6817 	mov	a,r4
   163F 28                 6818 	add	a,r0
   1640 F0                 6819 	movx	@dptr,a
   1641 ED                 6820 	mov	a,r5
   1642 39                 6821 	addc	a,r1
   1643 A3                 6822 	inc	dptr
   1644 F0                 6823 	movx	@dptr,a
   1645 EE                 6824 	mov	a,r6
   1646 3A                 6825 	addc	a,r2
   1647 A3                 6826 	inc	dptr
   1648 F0                 6827 	movx	@dptr,a
   1649 EF                 6828 	mov	a,r7
   164A 3B                 6829 	addc	a,r3
   164B A3                 6830 	inc	dptr
   164C F0                 6831 	movx	@dptr,a
                    0E03   6832 	C$easyax5043.c$941$1$284 ==.
                    0E03   6833 	XFeasyax5043$axradio_sync_addtime$0$0 ==.
   164D 22                 6834 	ret
                           6835 ;------------------------------------------------------------
                           6836 ;Allocation info for local variables in function 'axradio_sync_subtime'
                           6837 ;------------------------------------------------------------
                           6838 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6839 ;------------------------------------------------------------
                    0E04   6840 	Feasyax5043$axradio_sync_subtime$0$0 ==.
                    0E04   6841 	C$easyax5043.c$943$1$284 ==.
                           6842 ;	..\COMMON\easyax5043.c:943: static __reentrantb void axradio_sync_subtime(uint32_t dt) __reentrant
                           6843 ;	-----------------------------------------
                           6844 ;	 function axradio_sync_subtime
                           6845 ;	-----------------------------------------
   164E                    6846 _axradio_sync_subtime:
   164E AC 82              6847 	mov	r4,dpl
   1650 AD 83              6848 	mov	r5,dph
   1652 AE F0              6849 	mov	r6,b
   1654 FF                 6850 	mov	r7,a
                    0E0B   6851 	C$easyax5043.c$945$1$286 ==.
                           6852 ;	..\COMMON\easyax5043.c:945: axradio_sync_time -= dt;
   1655 90 00 10           6853 	mov	dptr,#_axradio_sync_time
   1658 E0                 6854 	movx	a,@dptr
   1659 F8                 6855 	mov	r0,a
   165A A3                 6856 	inc	dptr
   165B E0                 6857 	movx	a,@dptr
   165C F9                 6858 	mov	r1,a
   165D A3                 6859 	inc	dptr
   165E E0                 6860 	movx	a,@dptr
   165F FA                 6861 	mov	r2,a
   1660 A3                 6862 	inc	dptr
   1661 E0                 6863 	movx	a,@dptr
   1662 FB                 6864 	mov	r3,a
   1663 90 00 10           6865 	mov	dptr,#_axradio_sync_time
   1666 E8                 6866 	mov	a,r0
   1667 C3                 6867 	clr	c
   1668 9C                 6868 	subb	a,r4
   1669 F0                 6869 	movx	@dptr,a
   166A E9                 6870 	mov	a,r1
   166B 9D                 6871 	subb	a,r5
   166C A3                 6872 	inc	dptr
   166D F0                 6873 	movx	@dptr,a
   166E EA                 6874 	mov	a,r2
   166F 9E                 6875 	subb	a,r6
   1670 A3                 6876 	inc	dptr
   1671 F0                 6877 	movx	@dptr,a
   1672 EB                 6878 	mov	a,r3
   1673 9F                 6879 	subb	a,r7
   1674 A3                 6880 	inc	dptr
   1675 F0                 6881 	movx	@dptr,a
                    0E2C   6882 	C$easyax5043.c$946$1$286 ==.
                    0E2C   6883 	XFeasyax5043$axradio_sync_subtime$0$0 ==.
   1676 22                 6884 	ret
                           6885 ;------------------------------------------------------------
                           6886 ;Allocation info for local variables in function 'axradio_sync_settimeradv'
                           6887 ;------------------------------------------------------------
                           6888 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6889 ;------------------------------------------------------------
                    0E2D   6890 	Feasyax5043$axradio_sync_settimeradv$0$0 ==.
                    0E2D   6891 	C$easyax5043.c$948$1$286 ==.
                           6892 ;	..\COMMON\easyax5043.c:948: static __reentrantb void axradio_sync_settimeradv(uint32_t dt) __reentrant
                           6893 ;	-----------------------------------------
                           6894 ;	 function axradio_sync_settimeradv
                           6895 ;	-----------------------------------------
   1677                    6896 _axradio_sync_settimeradv:
   1677 AC 82              6897 	mov	r4,dpl
   1679 AD 83              6898 	mov	r5,dph
   167B AE F0              6899 	mov	r6,b
   167D FF                 6900 	mov	r7,a
                    0E34   6901 	C$easyax5043.c$950$1$288 ==.
                           6902 ;	..\COMMON\easyax5043.c:950: axradio_timer.time = axradio_sync_time;
   167E 90 00 10           6903 	mov	dptr,#_axradio_sync_time
   1681 E0                 6904 	movx	a,@dptr
   1682 F8                 6905 	mov	r0,a
   1683 A3                 6906 	inc	dptr
   1684 E0                 6907 	movx	a,@dptr
   1685 F9                 6908 	mov	r1,a
   1686 A3                 6909 	inc	dptr
   1687 E0                 6910 	movx	a,@dptr
   1688 FA                 6911 	mov	r2,a
   1689 A3                 6912 	inc	dptr
   168A E0                 6913 	movx	a,@dptr
   168B FB                 6914 	mov	r3,a
   168C 90 02 8D           6915 	mov	dptr,#(_axradio_timer + 0x0004)
   168F E8                 6916 	mov	a,r0
   1690 F0                 6917 	movx	@dptr,a
   1691 A3                 6918 	inc	dptr
   1692 E9                 6919 	mov	a,r1
   1693 F0                 6920 	movx	@dptr,a
   1694 A3                 6921 	inc	dptr
   1695 EA                 6922 	mov	a,r2
   1696 F0                 6923 	movx	@dptr,a
   1697 A3                 6924 	inc	dptr
   1698 EB                 6925 	mov	a,r3
   1699 F0                 6926 	movx	@dptr,a
                    0E50   6927 	C$easyax5043.c$951$1$288 ==.
                           6928 ;	..\COMMON\easyax5043.c:951: axradio_timer.time -= dt;
   169A E8                 6929 	mov	a,r0
   169B C3                 6930 	clr	c
   169C 9C                 6931 	subb	a,r4
   169D FC                 6932 	mov	r4,a
   169E E9                 6933 	mov	a,r1
   169F 9D                 6934 	subb	a,r5
   16A0 FD                 6935 	mov	r5,a
   16A1 EA                 6936 	mov	a,r2
   16A2 9E                 6937 	subb	a,r6
   16A3 FE                 6938 	mov	r6,a
   16A4 EB                 6939 	mov	a,r3
   16A5 9F                 6940 	subb	a,r7
   16A6 FF                 6941 	mov	r7,a
   16A7 90 02 8D           6942 	mov	dptr,#(_axradio_timer + 0x0004)
   16AA EC                 6943 	mov	a,r4
   16AB F0                 6944 	movx	@dptr,a
   16AC A3                 6945 	inc	dptr
   16AD ED                 6946 	mov	a,r5
   16AE F0                 6947 	movx	@dptr,a
   16AF A3                 6948 	inc	dptr
   16B0 EE                 6949 	mov	a,r6
   16B1 F0                 6950 	movx	@dptr,a
   16B2 A3                 6951 	inc	dptr
   16B3 EF                 6952 	mov	a,r7
   16B4 F0                 6953 	movx	@dptr,a
                    0E6B   6954 	C$easyax5043.c$952$1$288 ==.
                    0E6B   6955 	XFeasyax5043$axradio_sync_settimeradv$0$0 ==.
   16B5 22                 6956 	ret
                           6957 ;------------------------------------------------------------
                           6958 ;Allocation info for local variables in function 'axradio_sync_adjustperiodcorr'
                           6959 ;------------------------------------------------------------
                           6960 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6961 ;------------------------------------------------------------
                    0E6C   6962 	Feasyax5043$axradio_sync_adjustperiodcorr$0$0 ==.
                    0E6C   6963 	C$easyax5043.c$954$1$288 ==.
                           6964 ;	..\COMMON\easyax5043.c:954: static void axradio_sync_adjustperiodcorr(void)
                           6965 ;	-----------------------------------------
                           6966 ;	 function axradio_sync_adjustperiodcorr
                           6967 ;	-----------------------------------------
   16B6                    6968 _axradio_sync_adjustperiodcorr:
                    0E6C   6969 	C$easyax5043.c$956$1$290 ==.
                           6970 ;	..\COMMON\easyax5043.c:956: int32_t __autodata dt = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t) - axradio_sync_time;
   16B6 90 02 38           6971 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   16B9 E0                 6972 	movx	a,@dptr
   16BA FC                 6973 	mov	r4,a
   16BB A3                 6974 	inc	dptr
   16BC E0                 6975 	movx	a,@dptr
   16BD FD                 6976 	mov	r5,a
   16BE A3                 6977 	inc	dptr
   16BF E0                 6978 	movx	a,@dptr
   16C0 FE                 6979 	mov	r6,a
   16C1 A3                 6980 	inc	dptr
   16C2 E0                 6981 	movx	a,@dptr
   16C3 8C 82              6982 	mov	dpl,r4
   16C5 8D 83              6983 	mov	dph,r5
   16C7 8E F0              6984 	mov	b,r6
   16C9 12 08 8C           6985 	lcall	_axradio_conv_time_totimer0
   16CC AC 82              6986 	mov	r4,dpl
   16CE AD 83              6987 	mov	r5,dph
   16D0 AE F0              6988 	mov	r6,b
   16D2 FF                 6989 	mov	r7,a
   16D3 90 00 10           6990 	mov	dptr,#_axradio_sync_time
   16D6 E0                 6991 	movx	a,@dptr
   16D7 F8                 6992 	mov	r0,a
   16D8 A3                 6993 	inc	dptr
   16D9 E0                 6994 	movx	a,@dptr
   16DA F9                 6995 	mov	r1,a
   16DB A3                 6996 	inc	dptr
   16DC E0                 6997 	movx	a,@dptr
   16DD FA                 6998 	mov	r2,a
   16DE A3                 6999 	inc	dptr
   16DF E0                 7000 	movx	a,@dptr
   16E0 FB                 7001 	mov	r3,a
   16E1 EC                 7002 	mov	a,r4
   16E2 C3                 7003 	clr	c
   16E3 98                 7004 	subb	a,r0
   16E4 FC                 7005 	mov	r4,a
   16E5 ED                 7006 	mov	a,r5
   16E6 99                 7007 	subb	a,r1
   16E7 FD                 7008 	mov	r5,a
   16E8 EE                 7009 	mov	a,r6
   16E9 9A                 7010 	subb	a,r2
   16EA FE                 7011 	mov	r6,a
   16EB EF                 7012 	mov	a,r7
   16EC 9B                 7013 	subb	a,r3
   16ED FF                 7014 	mov	r7,a
                    0EA4   7015 	C$easyax5043.c$957$1$290 ==.
                           7016 ;	..\COMMON\easyax5043.c:957: axradio_cb_receive.st.rx.phy.timeoffset = dt;
   16EE 8C 02              7017 	mov	ar2,r4
   16F0 8D 03              7018 	mov	ar3,r5
   16F2 90 02 42           7019 	mov	dptr,#(_axradio_cb_receive + 0x0010)
   16F5 EA                 7020 	mov	a,r2
   16F6 F0                 7021 	movx	@dptr,a
   16F7 A3                 7022 	inc	dptr
   16F8 EB                 7023 	mov	a,r3
   16F9 F0                 7024 	movx	@dptr,a
                    0EB0   7025 	C$easyax5043.c$958$1$290 ==.
                           7026 ;	..\COMMON\easyax5043.c:958: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod)) {
   16FA 90 00 14           7027 	mov	dptr,#_axradio_sync_periodcorr
   16FD E0                 7028 	movx	a,@dptr
   16FE FA                 7029 	mov	r2,a
   16FF A3                 7030 	inc	dptr
   1700 E0                 7031 	movx	a,@dptr
   1701 FB                 7032 	mov	r3,a
   1702 90 56 5E           7033 	mov	dptr,#_axradio_sync_slave_maxperiod
   1705 E4                 7034 	clr	a
   1706 93                 7035 	movc	a,@a+dptr
   1707 C0 E0              7036 	push	acc
   1709 74 01              7037 	mov	a,#0x01
   170B 93                 7038 	movc	a,@a+dptr
   170C C0 E0              7039 	push	acc
   170E 8A 82              7040 	mov	dpl,r2
   1710 8B 83              7041 	mov	dph,r3
   1712 12 4B CF           7042 	lcall	_checksignedlimit16
   1715 AB 82              7043 	mov	r3,dpl
   1717 15 81              7044 	dec	sp
   1719 15 81              7045 	dec	sp
   171B EB                 7046 	mov	a,r3
   171C 70 4B              7047 	jnz	00102$
                    0ED4   7048 	C$easyax5043.c$959$2$291 ==.
                           7049 ;	..\COMMON\easyax5043.c:959: axradio_sync_addtime(dt);
   171E 8C 82              7050 	mov	dpl,r4
   1720 8D 83              7051 	mov	dph,r5
   1722 8E F0              7052 	mov	b,r6
   1724 EF                 7053 	mov	a,r7
   1725 C0 07              7054 	push	ar7
   1727 C0 06              7055 	push	ar6
   1729 C0 05              7056 	push	ar5
   172B C0 04              7057 	push	ar4
   172D 12 16 26           7058 	lcall	_axradio_sync_addtime
   1730 D0 04              7059 	pop	ar4
   1732 D0 05              7060 	pop	ar5
   1734 D0 06              7061 	pop	ar6
   1736 D0 07              7062 	pop	ar7
                    0EEE   7063 	C$easyax5043.c$960$2$291 ==.
                           7064 ;	..\COMMON\easyax5043.c:960: dt <<= SYNC_K1;
   1738 EF                 7065 	mov	a,r7
   1739 C4                 7066 	swap	a
   173A 23                 7067 	rl	a
   173B 54 E0              7068 	anl	a,#0xE0
   173D CE                 7069 	xch	a,r6
   173E C4                 7070 	swap	a
   173F 23                 7071 	rl	a
   1740 CE                 7072 	xch	a,r6
   1741 6E                 7073 	xrl	a,r6
   1742 CE                 7074 	xch	a,r6
   1743 54 E0              7075 	anl	a,#0xE0
   1745 CE                 7076 	xch	a,r6
   1746 6E                 7077 	xrl	a,r6
   1747 FF                 7078 	mov	r7,a
   1748 ED                 7079 	mov	a,r5
   1749 C4                 7080 	swap	a
   174A 23                 7081 	rl	a
   174B 54 1F              7082 	anl	a,#0x1F
   174D 4E                 7083 	orl	a,r6
   174E FE                 7084 	mov	r6,a
   174F ED                 7085 	mov	a,r5
   1750 C4                 7086 	swap	a
   1751 23                 7087 	rl	a
   1752 54 E0              7088 	anl	a,#0xE0
   1754 CC                 7089 	xch	a,r4
   1755 C4                 7090 	swap	a
   1756 23                 7091 	rl	a
   1757 CC                 7092 	xch	a,r4
   1758 6C                 7093 	xrl	a,r4
   1759 CC                 7094 	xch	a,r4
   175A 54 E0              7095 	anl	a,#0xE0
   175C CC                 7096 	xch	a,r4
   175D 6C                 7097 	xrl	a,r4
   175E FD                 7098 	mov	r5,a
                    0F15   7099 	C$easyax5043.c$961$2$291 ==.
                           7100 ;	..\COMMON\easyax5043.c:961: axradio_sync_periodcorr = dt;
   175F 90 00 14           7101 	mov	dptr,#_axradio_sync_periodcorr
   1762 EC                 7102 	mov	a,r4
   1763 F0                 7103 	movx	@dptr,a
   1764 A3                 7104 	inc	dptr
   1765 ED                 7105 	mov	a,r5
   1766 F0                 7106 	movx	@dptr,a
   1767 80 48              7107 	sjmp	00103$
   1769                    7108 00102$:
                    0F1F   7109 	C$easyax5043.c$963$2$292 ==.
                           7110 ;	..\COMMON\easyax5043.c:963: axradio_sync_periodcorr += dt;
   1769 90 00 14           7111 	mov	dptr,#_axradio_sync_periodcorr
   176C E0                 7112 	movx	a,@dptr
   176D FA                 7113 	mov	r2,a
   176E A3                 7114 	inc	dptr
   176F E0                 7115 	movx	a,@dptr
   1770 FB                 7116 	mov	r3,a
   1771 8A 00              7117 	mov	ar0,r2
   1773 EB                 7118 	mov	a,r3
   1774 F9                 7119 	mov	r1,a
   1775 33                 7120 	rlc	a
   1776 95 E0              7121 	subb	a,acc
   1778 FA                 7122 	mov	r2,a
   1779 FB                 7123 	mov	r3,a
   177A EC                 7124 	mov	a,r4
   177B 28                 7125 	add	a,r0
   177C F8                 7126 	mov	r0,a
   177D ED                 7127 	mov	a,r5
   177E 39                 7128 	addc	a,r1
   177F F9                 7129 	mov	r1,a
   1780 EE                 7130 	mov	a,r6
   1781 3A                 7131 	addc	a,r2
   1782 EF                 7132 	mov	a,r7
   1783 3B                 7133 	addc	a,r3
   1784 90 00 14           7134 	mov	dptr,#_axradio_sync_periodcorr
   1787 E8                 7135 	mov	a,r0
   1788 F0                 7136 	movx	@dptr,a
   1789 A3                 7137 	inc	dptr
   178A E9                 7138 	mov	a,r1
   178B F0                 7139 	movx	@dptr,a
                    0F42   7140 	C$easyax5043.c$964$2$292 ==.
                           7141 ;	..\COMMON\easyax5043.c:964: dt >>= SYNC_K0;
   178C EF                 7142 	mov	a,r7
   178D A2 E7              7143 	mov	c,acc.7
   178F 13                 7144 	rrc	a
   1790 FF                 7145 	mov	r7,a
   1791 EE                 7146 	mov	a,r6
   1792 13                 7147 	rrc	a
   1793 FE                 7148 	mov	r6,a
   1794 ED                 7149 	mov	a,r5
   1795 13                 7150 	rrc	a
   1796 FD                 7151 	mov	r5,a
   1797 EC                 7152 	mov	a,r4
   1798 13                 7153 	rrc	a
   1799 FC                 7154 	mov	r4,a
   179A EF                 7155 	mov	a,r7
   179B A2 E7              7156 	mov	c,acc.7
   179D 13                 7157 	rrc	a
   179E FF                 7158 	mov	r7,a
   179F EE                 7159 	mov	a,r6
   17A0 13                 7160 	rrc	a
   17A1 FE                 7161 	mov	r6,a
   17A2 ED                 7162 	mov	a,r5
   17A3 13                 7163 	rrc	a
   17A4 FD                 7164 	mov	r5,a
   17A5 EC                 7165 	mov	a,r4
   17A6 13                 7166 	rrc	a
                    0F5D   7167 	C$easyax5043.c$965$2$292 ==.
                           7168 ;	..\COMMON\easyax5043.c:965: axradio_sync_addtime(dt);
   17A7 F5 82              7169 	mov	dpl,a
   17A9 8D 83              7170 	mov	dph,r5
   17AB 8E F0              7171 	mov	b,r6
   17AD EF                 7172 	mov	a,r7
   17AE 12 16 26           7173 	lcall	_axradio_sync_addtime
   17B1                    7174 00103$:
                    0F67   7175 	C$easyax5043.c$967$1$290 ==.
                           7176 ;	..\COMMON\easyax5043.c:967: axradio_sync_periodcorr = signedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod);
   17B1 90 00 14           7177 	mov	dptr,#_axradio_sync_periodcorr
   17B4 E0                 7178 	movx	a,@dptr
   17B5 FE                 7179 	mov	r6,a
   17B6 A3                 7180 	inc	dptr
   17B7 E0                 7181 	movx	a,@dptr
   17B8 FF                 7182 	mov	r7,a
   17B9 90 56 5E           7183 	mov	dptr,#_axradio_sync_slave_maxperiod
   17BC E4                 7184 	clr	a
   17BD 93                 7185 	movc	a,@a+dptr
   17BE C0 E0              7186 	push	acc
   17C0 74 01              7187 	mov	a,#0x01
   17C2 93                 7188 	movc	a,@a+dptr
   17C3 C0 E0              7189 	push	acc
   17C5 8E 82              7190 	mov	dpl,r6
   17C7 8F 83              7191 	mov	dph,r7
   17C9 12 4C A7           7192 	lcall	_signedlimit16
   17CC AE 82              7193 	mov	r6,dpl
   17CE AF 83              7194 	mov	r7,dph
   17D0 15 81              7195 	dec	sp
   17D2 15 81              7196 	dec	sp
   17D4 90 00 14           7197 	mov	dptr,#_axradio_sync_periodcorr
   17D7 EE                 7198 	mov	a,r6
   17D8 F0                 7199 	movx	@dptr,a
   17D9 A3                 7200 	inc	dptr
   17DA EF                 7201 	mov	a,r7
   17DB F0                 7202 	movx	@dptr,a
                    0F92   7203 	C$easyax5043.c$968$1$290 ==.
                    0F92   7204 	XFeasyax5043$axradio_sync_adjustperiodcorr$0$0 ==.
   17DC 22                 7205 	ret
                           7206 ;------------------------------------------------------------
                           7207 ;Allocation info for local variables in function 'axradio_sync_slave_nextperiod'
                           7208 ;------------------------------------------------------------
                           7209 ;c                         Allocated to registers r6 r7 
                           7210 ;------------------------------------------------------------
                    0F93   7211 	Feasyax5043$axradio_sync_slave_nextperiod$0$0 ==.
                    0F93   7212 	C$easyax5043.c$970$1$290 ==.
                           7213 ;	..\COMMON\easyax5043.c:970: static void axradio_sync_slave_nextperiod()
                           7214 ;	-----------------------------------------
                           7215 ;	 function axradio_sync_slave_nextperiod
                           7216 ;	-----------------------------------------
   17DD                    7217 _axradio_sync_slave_nextperiod:
                    0F93   7218 	C$easyax5043.c$972$1$293 ==.
                           7219 ;	..\COMMON\easyax5043.c:972: axradio_sync_addtime(axradio_sync_period);
   17DD 90 56 4A           7220 	mov	dptr,#_axradio_sync_period
   17E0 E4                 7221 	clr	a
   17E1 93                 7222 	movc	a,@a+dptr
   17E2 FC                 7223 	mov	r4,a
   17E3 74 01              7224 	mov	a,#0x01
   17E5 93                 7225 	movc	a,@a+dptr
   17E6 FD                 7226 	mov	r5,a
   17E7 74 02              7227 	mov	a,#0x02
   17E9 93                 7228 	movc	a,@a+dptr
   17EA FE                 7229 	mov	r6,a
   17EB 74 03              7230 	mov	a,#0x03
   17ED 93                 7231 	movc	a,@a+dptr
   17EE 8C 82              7232 	mov	dpl,r4
   17F0 8D 83              7233 	mov	dph,r5
   17F2 8E F0              7234 	mov	b,r6
   17F4 12 16 26           7235 	lcall	_axradio_sync_addtime
                    0FAD   7236 	C$easyax5043.c$973$1$293 ==.
                           7237 ;	..\COMMON\easyax5043.c:973: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod))
   17F7 90 00 14           7238 	mov	dptr,#_axradio_sync_periodcorr
   17FA E0                 7239 	movx	a,@dptr
   17FB FE                 7240 	mov	r6,a
   17FC A3                 7241 	inc	dptr
   17FD E0                 7242 	movx	a,@dptr
   17FE FF                 7243 	mov	r7,a
   17FF 90 56 5E           7244 	mov	dptr,#_axradio_sync_slave_maxperiod
   1802 E4                 7245 	clr	a
   1803 93                 7246 	movc	a,@a+dptr
   1804 C0 E0              7247 	push	acc
   1806 74 01              7248 	mov	a,#0x01
   1808 93                 7249 	movc	a,@a+dptr
   1809 C0 E0              7250 	push	acc
   180B 8E 82              7251 	mov	dpl,r6
   180D 8F 83              7252 	mov	dph,r7
   180F 12 4B CF           7253 	lcall	_checksignedlimit16
   1812 AF 82              7254 	mov	r7,dpl
   1814 15 81              7255 	dec	sp
   1816 15 81              7256 	dec	sp
   1818 EF                 7257 	mov	a,r7
   1819 70 02              7258 	jnz	00102$
                    0FD1   7259 	C$easyax5043.c$974$1$293 ==.
                           7260 ;	..\COMMON\easyax5043.c:974: return;
   181B 80 29              7261 	sjmp	00103$
   181D                    7262 00102$:
                    0FD3   7263 	C$easyax5043.c$976$2$293 ==.
                           7264 ;	..\COMMON\easyax5043.c:976: int16_t __autodata c = axradio_sync_periodcorr;
   181D 90 00 14           7265 	mov	dptr,#_axradio_sync_periodcorr
   1820 E0                 7266 	movx	a,@dptr
   1821 FE                 7267 	mov	r6,a
   1822 A3                 7268 	inc	dptr
   1823 E0                 7269 	movx	a,@dptr
                    0FDA   7270 	C$easyax5043.c$977$2$294 ==.
                           7271 ;	..\COMMON\easyax5043.c:977: axradio_sync_addtime(c >> SYNC_K1);
   1824 FF                 7272 	mov	r7,a
   1825 C4                 7273 	swap	a
   1826 03                 7274 	rr	a
   1827 CE                 7275 	xch	a,r6
   1828 C4                 7276 	swap	a
   1829 03                 7277 	rr	a
   182A 54 07              7278 	anl	a,#0x07
   182C 6E                 7279 	xrl	a,r6
   182D CE                 7280 	xch	a,r6
   182E 54 07              7281 	anl	a,#0x07
   1830 CE                 7282 	xch	a,r6
   1831 6E                 7283 	xrl	a,r6
   1832 CE                 7284 	xch	a,r6
   1833 30 E2 02           7285 	jnb	acc.2,00108$
   1836 44 F8              7286 	orl	a,#0xF8
   1838                    7287 00108$:
   1838 FF                 7288 	mov	r7,a
   1839 33                 7289 	rlc	a
   183A 95 E0              7290 	subb	a,acc
   183C FD                 7291 	mov	r5,a
   183D 8E 82              7292 	mov	dpl,r6
   183F 8F 83              7293 	mov	dph,r7
   1841 8D F0              7294 	mov	b,r5
   1843 12 16 26           7295 	lcall	_axradio_sync_addtime
   1846                    7296 00103$:
                    0FFC   7297 	C$easyax5043.c$979$2$294 ==.
                    0FFC   7298 	XFeasyax5043$axradio_sync_slave_nextperiod$0$0 ==.
   1846 22                 7299 	ret
                           7300 ;------------------------------------------------------------
                           7301 ;Allocation info for local variables in function 'axradio_timer_callback'
                           7302 ;------------------------------------------------------------
                           7303 ;desc                      Allocated to registers 
                           7304 ;r                         Allocated to registers r7 
                           7305 ;idx                       Allocated to registers r7 
                           7306 ;idx                       Allocated to registers r7 
                           7307 ;------------------------------------------------------------
                    0FFD   7308 	Feasyax5043$axradio_timer_callback$0$0 ==.
                    0FFD   7309 	C$easyax5043.c$983$2$294 ==.
                           7310 ;	..\COMMON\easyax5043.c:983: static void axradio_timer_callback(struct wtimer_desc __xdata *desc)
                           7311 ;	-----------------------------------------
                           7312 ;	 function axradio_timer_callback
                           7313 ;	-----------------------------------------
   1847                    7314 _axradio_timer_callback:
                    0FFD   7315 	C$easyax5043.c$986$1$296 ==.
                           7316 ;	..\COMMON\easyax5043.c:986: switch (axradio_mode) {
   1847 AF 0A              7317 	mov	r7,_axradio_mode
   1849 BF 10 00           7318 	cjne	r7,#0x10,00231$
   184C                    7319 00231$:
   184C 50 03              7320 	jnc	00232$
   184E 02 20 74           7321 	ljmp	00173$
   1851                    7322 00232$:
   1851 EF                 7323 	mov	a,r7
   1852 24 DC              7324 	add	a,#0xff - 0x23
   1854 50 03              7325 	jnc	00233$
   1856 02 20 74           7326 	ljmp	00173$
   1859                    7327 00233$:
   1859 EF                 7328 	mov	a,r7
   185A 24 F0              7329 	add	a,#0xF0
   185C FF                 7330 	mov	r7,a
   185D 24 09              7331 	add	a,#(00234$-3-.)
   185F 83                 7332 	movc	a,@a+pc
   1860 C0 E0              7333 	push	acc
   1862 EF                 7334 	mov	a,r7
   1863 24 17              7335 	add	a,#(00235$-3-.)
   1865 83                 7336 	movc	a,@a+pc
   1866 C0 E0              7337 	push	acc
   1868 22                 7338 	ret
   1869                    7339 00234$:
   1869 32                 7340 	.db	00110$
   186A 32                 7341 	.db	00111$
   186B CB                 7342 	.db	00121$
   186C CB                 7343 	.db	00122$
   186D 74                 7344 	.db	00171$
   186E 74                 7345 	.db	00171$
   186F 74                 7346 	.db	00171$
   1870 74                 7347 	.db	00171$
   1871 91                 7348 	.db	00104$
   1872 91                 7349 	.db	00105$
   1873 32                 7350 	.db	00127$
   1874 32                 7351 	.db	00128$
   1875 91                 7352 	.db	00101$
   1876 91                 7353 	.db	00102$
   1877 91                 7354 	.db	00103$
   1878 74                 7355 	.db	00171$
   1879 CB                 7356 	.db	00137$
   187A CB                 7357 	.db	00138$
   187B 72                 7358 	.db	00150$
   187C 72                 7359 	.db	00151$
   187D                    7360 00235$:
   187D 19                 7361 	.db	00110$>>8
   187E 19                 7362 	.db	00111$>>8
   187F 19                 7363 	.db	00121$>>8
   1880 19                 7364 	.db	00122$>>8
   1881 20                 7365 	.db	00171$>>8
   1882 20                 7366 	.db	00171$>>8
   1883 20                 7367 	.db	00171$>>8
   1884 20                 7368 	.db	00171$>>8
   1885 18                 7369 	.db	00104$>>8
   1886 18                 7370 	.db	00105$>>8
   1887 1A                 7371 	.db	00127$>>8
   1888 1A                 7372 	.db	00128$>>8
   1889 18                 7373 	.db	00101$>>8
   188A 18                 7374 	.db	00102$>>8
   188B 18                 7375 	.db	00103$>>8
   188C 20                 7376 	.db	00171$>>8
   188D 1A                 7377 	.db	00137$>>8
   188E 1A                 7378 	.db	00138$>>8
   188F 1C                 7379 	.db	00150$>>8
   1890 1C                 7380 	.db	00151$>>8
                    1047   7381 	C$easyax5043.c$987$2$297 ==.
                           7382 ;	..\COMMON\easyax5043.c:987: case AXRADIO_MODE_STREAM_RECEIVE:
   1891                    7383 00101$:
                    1047   7384 	C$easyax5043.c$988$2$297 ==.
                           7385 ;	..\COMMON\easyax5043.c:988: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   1891                    7386 00102$:
                    1047   7387 	C$easyax5043.c$989$2$297 ==.
                           7388 ;	..\COMMON\easyax5043.c:989: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   1891                    7389 00103$:
                    1047   7390 	C$easyax5043.c$990$2$297 ==.
                           7391 ;	..\COMMON\easyax5043.c:990: case AXRADIO_MODE_ASYNC_RECEIVE:
   1891                    7392 00104$:
                    1047   7393 	C$easyax5043.c$991$2$297 ==.
                           7394 ;	..\COMMON\easyax5043.c:991: case AXRADIO_MODE_WOR_RECEIVE:
   1891                    7395 00105$:
                    1047   7396 	C$easyax5043.c$992$2$297 ==.
                           7397 ;	..\COMMON\easyax5043.c:992: if (axradio_syncstate == syncstate_asynctx)
   1891 90 00 04           7398 	mov	dptr,#_axradio_syncstate
   1894 E0                 7399 	movx	a,@dptr
   1895 FF                 7400 	mov	r7,a
   1896 BF 02 03           7401 	cjne	r7,#0x02,00236$
   1899 02 19 32           7402 	ljmp	00112$
   189C                    7403 00236$:
                    1052   7404 	C$easyax5043.c$994$2$297 ==.
                           7405 ;	..\COMMON\easyax5043.c:994: wtimer_remove(&axradio_timer);
   189C 90 02 89           7406 	mov	dptr,#_axradio_timer
   189F 12 4D 58           7407 	lcall	_wtimer_remove
                    1058   7408 	C$easyax5043.c$995$2$297 ==.
                           7409 ;	..\COMMON\easyax5043.c:995: rearmcstimer:
   18A2                    7410 00108$:
                    1058   7411 	C$easyax5043.c$996$2$297 ==.
                           7412 ;	..\COMMON\easyax5043.c:996: axradio_timer.time = axradio_phy_cs_period;
   18A2 90 56 1B           7413 	mov	dptr,#_axradio_phy_cs_period
   18A5 E4                 7414 	clr	a
   18A6 93                 7415 	movc	a,@a+dptr
   18A7 FE                 7416 	mov	r6,a
   18A8 74 01              7417 	mov	a,#0x01
   18AA 93                 7418 	movc	a,@a+dptr
   18AB FF                 7419 	mov	r7,a
   18AC 7D 00              7420 	mov	r5,#0x00
   18AE 7C 00              7421 	mov	r4,#0x00
   18B0 90 02 8D           7422 	mov	dptr,#(_axradio_timer + 0x0004)
   18B3 EE                 7423 	mov	a,r6
   18B4 F0                 7424 	movx	@dptr,a
   18B5 A3                 7425 	inc	dptr
   18B6 EF                 7426 	mov	a,r7
   18B7 F0                 7427 	movx	@dptr,a
   18B8 A3                 7428 	inc	dptr
   18B9 ED                 7429 	mov	a,r5
   18BA F0                 7430 	movx	@dptr,a
   18BB A3                 7431 	inc	dptr
   18BC EC                 7432 	mov	a,r4
   18BD F0                 7433 	movx	@dptr,a
                    1074   7434 	C$easyax5043.c$997$2$297 ==.
                           7435 ;	..\COMMON\easyax5043.c:997: wtimer0_addrelative(&axradio_timer);
   18BE 90 02 89           7436 	mov	dptr,#_axradio_timer
   18C1 12 44 62           7437 	lcall	_wtimer0_addrelative
                    107A   7438 	C$easyax5043.c$998$2$297 ==.
                           7439 ;	..\COMMON\easyax5043.c:998: chanstatecb:
   18C4                    7440 00109$:
                    107A   7441 	C$easyax5043.c$999$2$297 ==.
                           7442 ;	..\COMMON\easyax5043.c:999: update_timeanchor();
   18C4 12 08 4A           7443 	lcall	_update_timeanchor
                    107D   7444 	C$easyax5043.c$1000$2$297 ==.
                           7445 ;	..\COMMON\easyax5043.c:1000: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   18C7 90 02 5E           7446 	mov	dptr,#_axradio_cb_channelstate
   18CA 12 50 73           7447 	lcall	_wtimer_remove_callback
                    1083   7448 	C$easyax5043.c$1001$2$297 ==.
                           7449 ;	..\COMMON\easyax5043.c:1001: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   18CD 90 02 63           7450 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   18D0 E4                 7451 	clr	a
   18D1 F0                 7452 	movx	@dptr,a
                    1088   7453 	C$easyax5043.c$1003$3$297 ==.
                           7454 ;	..\COMMON\easyax5043.c:1003: int8_t __autodata r = AX5043_RSSI;
   18D2 90 40 40           7455 	mov	dptr,#_AX5043_RSSI
   18D5 E0                 7456 	movx	a,@dptr
                    108C   7457 	C$easyax5043.c$1004$3$298 ==.
                           7458 ;	..\COMMON\easyax5043.c:1004: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   18D6 FF                 7459 	mov	r7,a
   18D7 FD                 7460 	mov	r5,a
   18D8 33                 7461 	rlc	a
   18D9 95 E0              7462 	subb	a,acc
   18DB FE                 7463 	mov	r6,a
   18DC 90 56 18           7464 	mov	dptr,#_axradio_phy_rssioffset
   18DF E4                 7465 	clr	a
   18E0 93                 7466 	movc	a,@a+dptr
   18E1 FC                 7467 	mov	r4,a
   18E2 33                 7468 	rlc	a
   18E3 95 E0              7469 	subb	a,acc
   18E5 FB                 7470 	mov	r3,a
   18E6 ED                 7471 	mov	a,r5
   18E7 C3                 7472 	clr	c
   18E8 9C                 7473 	subb	a,r4
   18E9 FD                 7474 	mov	r5,a
   18EA EE                 7475 	mov	a,r6
   18EB 9B                 7476 	subb	a,r3
   18EC FE                 7477 	mov	r6,a
   18ED 90 02 68           7478 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   18F0 ED                 7479 	mov	a,r5
   18F1 F0                 7480 	movx	@dptr,a
   18F2 A3                 7481 	inc	dptr
   18F3 EE                 7482 	mov	a,r6
   18F4 F0                 7483 	movx	@dptr,a
                    10AB   7484 	C$easyax5043.c$1005$3$298 ==.
                           7485 ;	..\COMMON\easyax5043.c:1005: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   18F5 90 56 1A           7486 	mov	dptr,#_axradio_phy_channelbusy
   18F8 E4                 7487 	clr	a
   18F9 93                 7488 	movc	a,@a+dptr
   18FA FE                 7489 	mov	r6,a
   18FB C3                 7490 	clr	c
   18FC EF                 7491 	mov	a,r7
   18FD 64 80              7492 	xrl	a,#0x80
   18FF 8E F0              7493 	mov	b,r6
   1901 63 F0 80           7494 	xrl	b,#0x80
   1904 95 F0              7495 	subb	a,b
   1906 B3                 7496 	cpl	c
   1907 E4                 7497 	clr	a
   1908 33                 7498 	rlc	a
   1909 90 02 6A           7499 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   190C F0                 7500 	movx	@dptr,a
                    10C3   7501 	C$easyax5043.c$1007$2$297 ==.
                           7502 ;	..\COMMON\easyax5043.c:1007: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   190D 90 00 1A           7503 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1910 E0                 7504 	movx	a,@dptr
   1911 FC                 7505 	mov	r4,a
   1912 A3                 7506 	inc	dptr
   1913 E0                 7507 	movx	a,@dptr
   1914 FD                 7508 	mov	r5,a
   1915 A3                 7509 	inc	dptr
   1916 E0                 7510 	movx	a,@dptr
   1917 FE                 7511 	mov	r6,a
   1918 A3                 7512 	inc	dptr
   1919 E0                 7513 	movx	a,@dptr
   191A FF                 7514 	mov	r7,a
   191B 90 02 64           7515 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   191E EC                 7516 	mov	a,r4
   191F F0                 7517 	movx	@dptr,a
   1920 A3                 7518 	inc	dptr
   1921 ED                 7519 	mov	a,r5
   1922 F0                 7520 	movx	@dptr,a
   1923 A3                 7521 	inc	dptr
   1924 EE                 7522 	mov	a,r6
   1925 F0                 7523 	movx	@dptr,a
   1926 A3                 7524 	inc	dptr
   1927 EF                 7525 	mov	a,r7
   1928 F0                 7526 	movx	@dptr,a
                    10DF   7527 	C$easyax5043.c$1008$2$297 ==.
                           7528 ;	..\COMMON\easyax5043.c:1008: wtimer_add_callback(&axradio_cb_channelstate.cb);
   1929 90 02 5E           7529 	mov	dptr,#_axradio_cb_channelstate
   192C 12 44 48           7530 	lcall	_wtimer_add_callback
                    10E5   7531 	C$easyax5043.c$1009$2$297 ==.
                           7532 ;	..\COMMON\easyax5043.c:1009: break;
   192F 02 20 74           7533 	ljmp	00173$
                    10E8   7534 	C$easyax5043.c$1011$2$297 ==.
                           7535 ;	..\COMMON\easyax5043.c:1011: case AXRADIO_MODE_ASYNC_TRANSMIT:
   1932                    7536 00110$:
                    10E8   7537 	C$easyax5043.c$1012$2$297 ==.
                           7538 ;	..\COMMON\easyax5043.c:1012: case AXRADIO_MODE_WOR_TRANSMIT:
   1932                    7539 00111$:
                    10E8   7540 	C$easyax5043.c$1013$2$297 ==.
                           7541 ;	..\COMMON\easyax5043.c:1013: transmitcs:
   1932                    7542 00112$:
                    10E8   7543 	C$easyax5043.c$1014$2$297 ==.
                           7544 ;	..\COMMON\easyax5043.c:1014: if (axradio_ack_count)
   1932 90 00 0E           7545 	mov	dptr,#_axradio_ack_count
   1935 E0                 7546 	movx	a,@dptr
   1936 FF                 7547 	mov	r7,a
   1937 60 06              7548 	jz	00114$
                    10EF   7549 	C$easyax5043.c$1015$2$297 ==.
                           7550 ;	..\COMMON\easyax5043.c:1015: --axradio_ack_count;
   1939 EF                 7551 	mov	a,r7
   193A 14                 7552 	dec	a
   193B 90 00 0E           7553 	mov	dptr,#_axradio_ack_count
   193E F0                 7554 	movx	@dptr,a
   193F                    7555 00114$:
                    10F5   7556 	C$easyax5043.c$1016$2$297 ==.
                           7557 ;	..\COMMON\easyax5043.c:1016: wtimer_remove(&axradio_timer);
   193F 90 02 89           7558 	mov	dptr,#_axradio_timer
   1942 12 4D 58           7559 	lcall	_wtimer_remove
                    10FB   7560 	C$easyax5043.c$1017$2$297 ==.
                           7561 ;	..\COMMON\easyax5043.c:1017: if ((int8_t)AX5043_RSSI < axradio_phy_channelbusy ||
   1945 90 40 40           7562 	mov	dptr,#_AX5043_RSSI
   1948 E0                 7563 	movx	a,@dptr
   1949 FF                 7564 	mov	r7,a
   194A 90 56 1A           7565 	mov	dptr,#_axradio_phy_channelbusy
   194D E4                 7566 	clr	a
   194E 93                 7567 	movc	a,@a+dptr
   194F FE                 7568 	mov	r6,a
   1950 C3                 7569 	clr	c
   1951 EF                 7570 	mov	a,r7
   1952 64 80              7571 	xrl	a,#0x80
   1954 8E F0              7572 	mov	b,r6
   1956 63 F0 80           7573 	xrl	b,#0x80
   1959 95 F0              7574 	subb	a,b
   195B 40 0F              7575 	jc	00115$
                    1113   7576 	C$easyax5043.c$1018$2$297 ==.
                           7577 ;	..\COMMON\easyax5043.c:1018: (!axradio_ack_count && axradio_phy_lbt_forcetx)) {
   195D 90 00 0E           7578 	mov	dptr,#_axradio_ack_count
   1960 E0                 7579 	movx	a,@dptr
   1961 FF                 7580 	mov	r7,a
   1962 70 25              7581 	jnz	00116$
   1964 90 56 1F           7582 	mov	dptr,#_axradio_phy_lbt_forcetx
   1967 E4                 7583 	clr	a
   1968 93                 7584 	movc	a,@a+dptr
   1969 FE                 7585 	mov	r6,a
   196A 60 1D              7586 	jz	00116$
   196C                    7587 00115$:
                    1122   7588 	C$easyax5043.c$1019$3$299 ==.
                           7589 ;	..\COMMON\easyax5043.c:1019: axradio_syncstate = syncstate_off;
   196C 90 00 04           7590 	mov	dptr,#_axradio_syncstate
   196F E4                 7591 	clr	a
   1970 F0                 7592 	movx	@dptr,a
                    1127   7593 	C$easyax5043.c$1020$3$299 ==.
                           7594 ;	..\COMMON\easyax5043.c:1020: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1971 90 56 26           7595 	mov	dptr,#_axradio_phy_preamble_longlen
   1974 E4                 7596 	clr	a
   1975 93                 7597 	movc	a,@a+dptr
   1976 FD                 7598 	mov	r5,a
   1977 74 01              7599 	mov	a,#0x01
   1979 93                 7600 	movc	a,@a+dptr
   197A FE                 7601 	mov	r6,a
   197B 90 00 07           7602 	mov	dptr,#_axradio_txbuffer_cnt
   197E ED                 7603 	mov	a,r5
   197F F0                 7604 	movx	@dptr,a
   1980 A3                 7605 	inc	dptr
   1981 EE                 7606 	mov	a,r6
   1982 F0                 7607 	movx	@dptr,a
                    1139   7608 	C$easyax5043.c$1021$3$299 ==.
                           7609 ;	..\COMMON\easyax5043.c:1021: ax5043_prepare_tx();
   1983 12 14 60           7610 	lcall	_ax5043_prepare_tx
                    113C   7611 	C$easyax5043.c$1022$3$299 ==.
                           7612 ;	..\COMMON\easyax5043.c:1022: goto chanstatecb;
   1986 02 18 C4           7613 	ljmp	00109$
   1989                    7614 00116$:
                    113F   7615 	C$easyax5043.c$1024$2$297 ==.
                           7616 ;	..\COMMON\easyax5043.c:1024: if (axradio_ack_count)
   1989 EF                 7617 	mov	a,r7
   198A 60 03              7618 	jz	00242$
   198C 02 18 A2           7619 	ljmp	00108$
   198F                    7620 00242$:
                    1145   7621 	C$easyax5043.c$1026$2$297 ==.
                           7622 ;	..\COMMON\easyax5043.c:1026: update_timeanchor();
   198F 12 08 4A           7623 	lcall	_update_timeanchor
                    1148   7624 	C$easyax5043.c$1027$2$297 ==.
                           7625 ;	..\COMMON\easyax5043.c:1027: axradio_syncstate = syncstate_off;
   1992 90 00 04           7626 	mov	dptr,#_axradio_syncstate
   1995 E4                 7627 	clr	a
   1996 F0                 7628 	movx	@dptr,a
                    114D   7629 	C$easyax5043.c$1028$2$297 ==.
                           7630 ;	..\COMMON\easyax5043.c:1028: ax5043_off();
   1997 12 14 86           7631 	lcall	_ax5043_off
                    1150   7632 	C$easyax5043.c$1029$2$297 ==.
                           7633 ;	..\COMMON\easyax5043.c:1029: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   199A 90 02 6B           7634 	mov	dptr,#_axradio_cb_transmitstart
   199D 12 50 73           7635 	lcall	_wtimer_remove_callback
                    1156   7636 	C$easyax5043.c$1030$2$297 ==.
                           7637 ;	..\COMMON\easyax5043.c:1030: axradio_cb_transmitstart.st.error = AXRADIO_ERR_TIMEOUT;
   19A0 90 02 70           7638 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   19A3 74 03              7639 	mov	a,#0x03
   19A5 F0                 7640 	movx	@dptr,a
                    115C   7641 	C$easyax5043.c$1031$2$297 ==.
                           7642 ;	..\COMMON\easyax5043.c:1031: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   19A6 90 00 1A           7643 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   19A9 E0                 7644 	movx	a,@dptr
   19AA FC                 7645 	mov	r4,a
   19AB A3                 7646 	inc	dptr
   19AC E0                 7647 	movx	a,@dptr
   19AD FD                 7648 	mov	r5,a
   19AE A3                 7649 	inc	dptr
   19AF E0                 7650 	movx	a,@dptr
   19B0 FE                 7651 	mov	r6,a
   19B1 A3                 7652 	inc	dptr
   19B2 E0                 7653 	movx	a,@dptr
   19B3 FF                 7654 	mov	r7,a
   19B4 90 02 71           7655 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   19B7 EC                 7656 	mov	a,r4
   19B8 F0                 7657 	movx	@dptr,a
   19B9 A3                 7658 	inc	dptr
   19BA ED                 7659 	mov	a,r5
   19BB F0                 7660 	movx	@dptr,a
   19BC A3                 7661 	inc	dptr
   19BD EE                 7662 	mov	a,r6
   19BE F0                 7663 	movx	@dptr,a
   19BF A3                 7664 	inc	dptr
   19C0 EF                 7665 	mov	a,r7
   19C1 F0                 7666 	movx	@dptr,a
                    1178   7667 	C$easyax5043.c$1032$2$297 ==.
                           7668 ;	..\COMMON\easyax5043.c:1032: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   19C2 90 02 6B           7669 	mov	dptr,#_axradio_cb_transmitstart
   19C5 12 44 48           7670 	lcall	_wtimer_add_callback
                    117E   7671 	C$easyax5043.c$1033$2$297 ==.
                           7672 ;	..\COMMON\easyax5043.c:1033: break;
   19C8 02 20 74           7673 	ljmp	00173$
                    1181   7674 	C$easyax5043.c$1035$2$297 ==.
                           7675 ;	..\COMMON\easyax5043.c:1035: case AXRADIO_MODE_ACK_TRANSMIT:
   19CB                    7676 00121$:
                    1181   7677 	C$easyax5043.c$1036$2$297 ==.
                           7678 ;	..\COMMON\easyax5043.c:1036: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   19CB                    7679 00122$:
                    1181   7680 	C$easyax5043.c$1037$2$297 ==.
                           7681 ;	..\COMMON\easyax5043.c:1037: if (axradio_syncstate == syncstate_lbt)
   19CB 90 00 04           7682 	mov	dptr,#_axradio_syncstate
   19CE E0                 7683 	movx	a,@dptr
   19CF FF                 7684 	mov	r7,a
   19D0 BF 01 03           7685 	cjne	r7,#0x01,00243$
   19D3 02 19 32           7686 	ljmp	00112$
   19D6                    7687 00243$:
                    118C   7688 	C$easyax5043.c$1039$2$297 ==.
                           7689 ;	..\COMMON\easyax5043.c:1039: ax5043_off();
   19D6 12 14 86           7690 	lcall	_ax5043_off
                    118F   7691 	C$easyax5043.c$1040$2$297 ==.
                           7692 ;	..\COMMON\easyax5043.c:1040: if (!axradio_ack_count) {
   19D9 90 00 0E           7693 	mov	dptr,#_axradio_ack_count
   19DC E0                 7694 	movx	a,@dptr
   19DD FF                 7695 	mov	r7,a
   19DE 70 34              7696 	jnz	00126$
                    1196   7697 	C$easyax5043.c$1041$3$300 ==.
                           7698 ;	..\COMMON\easyax5043.c:1041: update_timeanchor();
   19E0 12 08 4A           7699 	lcall	_update_timeanchor
                    1199   7700 	C$easyax5043.c$1042$3$300 ==.
                           7701 ;	..\COMMON\easyax5043.c:1042: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   19E3 90 02 75           7702 	mov	dptr,#_axradio_cb_transmitend
   19E6 12 50 73           7703 	lcall	_wtimer_remove_callback
                    119F   7704 	C$easyax5043.c$1043$3$300 ==.
                           7705 ;	..\COMMON\easyax5043.c:1043: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   19E9 90 02 7A           7706 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   19EC 74 03              7707 	mov	a,#0x03
   19EE F0                 7708 	movx	@dptr,a
                    11A5   7709 	C$easyax5043.c$1044$3$300 ==.
                           7710 ;	..\COMMON\easyax5043.c:1044: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   19EF 90 00 1A           7711 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   19F2 E0                 7712 	movx	a,@dptr
   19F3 FB                 7713 	mov	r3,a
   19F4 A3                 7714 	inc	dptr
   19F5 E0                 7715 	movx	a,@dptr
   19F6 FC                 7716 	mov	r4,a
   19F7 A3                 7717 	inc	dptr
   19F8 E0                 7718 	movx	a,@dptr
   19F9 FD                 7719 	mov	r5,a
   19FA A3                 7720 	inc	dptr
   19FB E0                 7721 	movx	a,@dptr
   19FC FE                 7722 	mov	r6,a
   19FD 90 02 7B           7723 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1A00 EB                 7724 	mov	a,r3
   1A01 F0                 7725 	movx	@dptr,a
   1A02 A3                 7726 	inc	dptr
   1A03 EC                 7727 	mov	a,r4
   1A04 F0                 7728 	movx	@dptr,a
   1A05 A3                 7729 	inc	dptr
   1A06 ED                 7730 	mov	a,r5
   1A07 F0                 7731 	movx	@dptr,a
   1A08 A3                 7732 	inc	dptr
   1A09 EE                 7733 	mov	a,r6
   1A0A F0                 7734 	movx	@dptr,a
                    11C1   7735 	C$easyax5043.c$1045$3$300 ==.
                           7736 ;	..\COMMON\easyax5043.c:1045: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1A0B 90 02 75           7737 	mov	dptr,#_axradio_cb_transmitend
   1A0E 12 44 48           7738 	lcall	_wtimer_add_callback
                    11C7   7739 	C$easyax5043.c$1046$3$300 ==.
                           7740 ;	..\COMMON\easyax5043.c:1046: break;
   1A11 02 20 74           7741 	ljmp	00173$
   1A14                    7742 00126$:
                    11CA   7743 	C$easyax5043.c$1048$2$297 ==.
                           7744 ;	..\COMMON\easyax5043.c:1048: --axradio_ack_count;
   1A14 EF                 7745 	mov	a,r7
   1A15 14                 7746 	dec	a
   1A16 90 00 0E           7747 	mov	dptr,#_axradio_ack_count
   1A19 F0                 7748 	movx	@dptr,a
                    11D0   7749 	C$easyax5043.c$1049$2$297 ==.
                           7750 ;	..\COMMON\easyax5043.c:1049: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A1A 90 56 26           7751 	mov	dptr,#_axradio_phy_preamble_longlen
   1A1D E4                 7752 	clr	a
   1A1E 93                 7753 	movc	a,@a+dptr
   1A1F FE                 7754 	mov	r6,a
   1A20 74 01              7755 	mov	a,#0x01
   1A22 93                 7756 	movc	a,@a+dptr
   1A23 FF                 7757 	mov	r7,a
   1A24 90 00 07           7758 	mov	dptr,#_axradio_txbuffer_cnt
   1A27 EE                 7759 	mov	a,r6
   1A28 F0                 7760 	movx	@dptr,a
   1A29 A3                 7761 	inc	dptr
   1A2A EF                 7762 	mov	a,r7
   1A2B F0                 7763 	movx	@dptr,a
                    11E2   7764 	C$easyax5043.c$1050$2$297 ==.
                           7765 ;	..\COMMON\easyax5043.c:1050: ax5043_prepare_tx();
   1A2C 12 14 60           7766 	lcall	_ax5043_prepare_tx
                    11E5   7767 	C$easyax5043.c$1051$2$297 ==.
                           7768 ;	..\COMMON\easyax5043.c:1051: break;
   1A2F 02 20 74           7769 	ljmp	00173$
                    11E8   7770 	C$easyax5043.c$1053$2$297 ==.
                           7771 ;	..\COMMON\easyax5043.c:1053: case AXRADIO_MODE_ACK_RECEIVE:
   1A32                    7772 00127$:
                    11E8   7773 	C$easyax5043.c$1054$2$297 ==.
                           7774 ;	..\COMMON\easyax5043.c:1054: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   1A32                    7775 00128$:
                    11E8   7776 	C$easyax5043.c$1055$2$297 ==.
                           7777 ;	..\COMMON\easyax5043.c:1055: if (axradio_syncstate == syncstate_lbt)
   1A32 90 00 04           7778 	mov	dptr,#_axradio_syncstate
   1A35 E0                 7779 	movx	a,@dptr
   1A36 FF                 7780 	mov	r7,a
   1A37 BF 01 03           7781 	cjne	r7,#0x01,00245$
   1A3A 02 19 32           7782 	ljmp	00112$
   1A3D                    7783 00245$:
                    11F3   7784 	C$easyax5043.c$1057$2$297 ==.
                           7785 ;	..\COMMON\easyax5043.c:1057: transmitack:
   1A3D                    7786 00131$:
                    11F3   7787 	C$easyax5043.c$1058$2$297 ==.
                           7788 ;	..\COMMON\easyax5043.c:1058: AX5043_FIFOSTAT = 3;
   1A3D 90 40 28           7789 	mov	dptr,#_AX5043_FIFOSTAT
   1A40 74 03              7790 	mov	a,#0x03
   1A42 F0                 7791 	movx	@dptr,a
                    11F9   7792 	C$easyax5043.c$1059$2$297 ==.
                           7793 ;	..\COMMON\easyax5043.c:1059: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1A43 90 40 02           7794 	mov	dptr,#_AX5043_PWRMODE
   1A46 74 0D              7795 	mov	a,#0x0D
   1A48 F0                 7796 	movx	@dptr,a
                    11FF   7797 	C$easyax5043.c$1060$2$297 ==.
                           7798 ;	..\COMMON\easyax5043.c:1060: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1A49                    7799 00132$:
   1A49 90 40 03           7800 	mov	dptr,#_AX5043_POWSTAT
   1A4C E0                 7801 	movx	a,@dptr
   1A4D FF                 7802 	mov	r7,a
   1A4E 30 E3 F8           7803 	jnb	acc.3,00132$
                    1207   7804 	C$easyax5043.c$1061$2$297 ==.
                           7805 ;	..\COMMON\easyax5043.c:1061: ax5043_init_registers_tx();
   1A51 12 08 E0           7806 	lcall	_ax5043_init_registers_tx
                    120A   7807 	C$easyax5043.c$1062$2$297 ==.
                           7808 ;	..\COMMON\easyax5043.c:1062: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1A54 90 40 0F           7809 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1A57 E0                 7810 	movx	a,@dptr
                    120E   7811 	C$easyax5043.c$1063$2$297 ==.
                           7812 ;	..\COMMON\easyax5043.c:1063: AX5043_FIFOTHRESH1 = 0;
   1A58 90 40 2E           7813 	mov	dptr,#_AX5043_FIFOTHRESH1
   1A5B E4                 7814 	clr	a
   1A5C F0                 7815 	movx	@dptr,a
                    1213   7816 	C$easyax5043.c$1064$2$297 ==.
                           7817 ;	..\COMMON\easyax5043.c:1064: AX5043_FIFOTHRESH0 = 0x80;
   1A5D 90 40 2F           7818 	mov	dptr,#_AX5043_FIFOTHRESH0
   1A60 74 80              7819 	mov	a,#0x80
   1A62 F0                 7820 	movx	@dptr,a
                    1219   7821 	C$easyax5043.c$1065$2$297 ==.
                           7822 ;	..\COMMON\easyax5043.c:1065: axradio_trxstate = trxstate_tx_longpreamble;
   1A63 75 0B 0A           7823 	mov	_axradio_trxstate,#0x0A
                    121C   7824 	C$easyax5043.c$1066$2$297 ==.
                           7825 ;	..\COMMON\easyax5043.c:1066: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A66 90 56 26           7826 	mov	dptr,#_axradio_phy_preamble_longlen
   1A69 E4                 7827 	clr	a
   1A6A 93                 7828 	movc	a,@a+dptr
   1A6B FE                 7829 	mov	r6,a
   1A6C 74 01              7830 	mov	a,#0x01
   1A6E 93                 7831 	movc	a,@a+dptr
   1A6F FF                 7832 	mov	r7,a
   1A70 90 00 07           7833 	mov	dptr,#_axradio_txbuffer_cnt
   1A73 EE                 7834 	mov	a,r6
   1A74 F0                 7835 	movx	@dptr,a
   1A75 A3                 7836 	inc	dptr
   1A76 EF                 7837 	mov	a,r7
   1A77 F0                 7838 	movx	@dptr,a
                    122E   7839 	C$easyax5043.c$1068$2$297 ==.
                           7840 ;	..\COMMON\easyax5043.c:1068: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1A78 90 40 10           7841 	mov	dptr,#_AX5043_MODULATION
   1A7B E0                 7842 	movx	a,@dptr
   1A7C FF                 7843 	mov	r7,a
   1A7D 53 07 0F           7844 	anl	ar7,#0x0F
   1A80 BF 09 0F           7845 	cjne	r7,#0x09,00136$
                    1239   7846 	C$easyax5043.c$1069$3$301 ==.
                           7847 ;	..\COMMON\easyax5043.c:1069: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    1239   7848 	C$easyax5043.c$1070$3$301 ==.
                           7849 ;	..\COMMON\easyax5043.c:1070: AX5043_FIFODATA = 2;  // length (including flags)
                    1239   7850 	C$easyax5043.c$1071$3$301 ==.
                           7851 ;	..\COMMON\easyax5043.c:1071: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                    1239   7852 	C$easyax5043.c$1072$3$301 ==.
                           7853 ;	..\COMMON\easyax5043.c:1072: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1A83 90 40 29           7854 	mov	dptr,#_AX5043_FIFODATA
   1A86 74 E1              7855 	mov	a,#0xE1
   1A88 F0                 7856 	movx	@dptr,a
   1A89 74 02              7857 	mov	a,#0x02
   1A8B F0                 7858 	movx	@dptr,a
   1A8C 74 01              7859 	mov	a,#0x01
   1A8E F0                 7860 	movx	@dptr,a
   1A8F 74 11              7861 	mov	a,#0x11
   1A91 F0                 7862 	movx	@dptr,a
   1A92                    7863 00136$:
                    1248   7864 	C$easyax5043.c$1079$2$297 ==.
                           7865 ;	..\COMMON\easyax5043.c:1079: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1A92 90 40 07           7866 	mov	dptr,#_AX5043_IRQMASK0
   1A95 74 08              7867 	mov	a,#0x08
   1A97 F0                 7868 	movx	@dptr,a
                    124E   7869 	C$easyax5043.c$1080$2$297 ==.
                           7870 ;	..\COMMON\easyax5043.c:1080: update_timeanchor();
   1A98 12 08 4A           7871 	lcall	_update_timeanchor
                    1251   7872 	C$easyax5043.c$1081$2$297 ==.
                           7873 ;	..\COMMON\easyax5043.c:1081: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1A9B 90 02 6B           7874 	mov	dptr,#_axradio_cb_transmitstart
   1A9E 12 50 73           7875 	lcall	_wtimer_remove_callback
                    1257   7876 	C$easyax5043.c$1082$2$297 ==.
                           7877 ;	..\COMMON\easyax5043.c:1082: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1AA1 90 02 70           7878 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1AA4 E4                 7879 	clr	a
   1AA5 F0                 7880 	movx	@dptr,a
                    125C   7881 	C$easyax5043.c$1083$2$297 ==.
                           7882 ;	..\COMMON\easyax5043.c:1083: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1AA6 90 00 1A           7883 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1AA9 E0                 7884 	movx	a,@dptr
   1AAA FC                 7885 	mov	r4,a
   1AAB A3                 7886 	inc	dptr
   1AAC E0                 7887 	movx	a,@dptr
   1AAD FD                 7888 	mov	r5,a
   1AAE A3                 7889 	inc	dptr
   1AAF E0                 7890 	movx	a,@dptr
   1AB0 FE                 7891 	mov	r6,a
   1AB1 A3                 7892 	inc	dptr
   1AB2 E0                 7893 	movx	a,@dptr
   1AB3 FF                 7894 	mov	r7,a
   1AB4 90 02 71           7895 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1AB7 EC                 7896 	mov	a,r4
   1AB8 F0                 7897 	movx	@dptr,a
   1AB9 A3                 7898 	inc	dptr
   1ABA ED                 7899 	mov	a,r5
   1ABB F0                 7900 	movx	@dptr,a
   1ABC A3                 7901 	inc	dptr
   1ABD EE                 7902 	mov	a,r6
   1ABE F0                 7903 	movx	@dptr,a
   1ABF A3                 7904 	inc	dptr
   1AC0 EF                 7905 	mov	a,r7
   1AC1 F0                 7906 	movx	@dptr,a
                    1278   7907 	C$easyax5043.c$1084$2$297 ==.
                           7908 ;	..\COMMON\easyax5043.c:1084: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1AC2 90 02 6B           7909 	mov	dptr,#_axradio_cb_transmitstart
   1AC5 12 44 48           7910 	lcall	_wtimer_add_callback
                    127E   7911 	C$easyax5043.c$1085$2$297 ==.
                           7912 ;	..\COMMON\easyax5043.c:1085: break;
   1AC8 02 20 74           7913 	ljmp	00173$
                    1281   7914 	C$easyax5043.c$1087$2$297 ==.
                           7915 ;	..\COMMON\easyax5043.c:1087: case AXRADIO_MODE_SYNC_MASTER:
   1ACB                    7916 00137$:
                    1281   7917 	C$easyax5043.c$1088$2$297 ==.
                           7918 ;	..\COMMON\easyax5043.c:1088: case AXRADIO_MODE_SYNC_ACK_MASTER:
   1ACB                    7919 00138$:
                    1281   7920 	C$easyax5043.c$1089$2$297 ==.
                           7921 ;	..\COMMON\easyax5043.c:1089: switch (axradio_syncstate) {
   1ACB 90 00 04           7922 	mov	dptr,#_axradio_syncstate
   1ACE E0                 7923 	movx	a,@dptr
   1ACF FF                 7924 	mov	r7,a
   1AD0 BF 04 02           7925 	cjne	r7,#0x04,00249$
   1AD3 80 5C              7926 	sjmp	00140$
   1AD5                    7927 00249$:
   1AD5 BF 05 03           7928 	cjne	r7,#0x05,00250$
   1AD8 02 1C 0F           7929 	ljmp	00148$
   1ADB                    7930 00250$:
                    1291   7931 	C$easyax5043.c$1091$3$302 ==.
                           7932 ;	..\COMMON\easyax5043.c:1091: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1ADB 90 40 02           7933 	mov	dptr,#_AX5043_PWRMODE
   1ADE 74 05              7934 	mov	a,#0x05
   1AE0 F0                 7935 	movx	@dptr,a
                    1297   7936 	C$easyax5043.c$1092$3$302 ==.
                           7937 ;	..\COMMON\easyax5043.c:1092: ax5043_init_registers_tx();
   1AE1 12 08 E0           7938 	lcall	_ax5043_init_registers_tx
                    129A   7939 	C$easyax5043.c$1093$3$302 ==.
                           7940 ;	..\COMMON\easyax5043.c:1093: axradio_syncstate = syncstate_master_xostartup;
   1AE4 90 00 04           7941 	mov	dptr,#_axradio_syncstate
   1AE7 74 04              7942 	mov	a,#0x04
   1AE9 F0                 7943 	movx	@dptr,a
                    12A0   7944 	C$easyax5043.c$1094$3$302 ==.
                           7945 ;	..\COMMON\easyax5043.c:1094: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   1AEA 90 02 7F           7946 	mov	dptr,#_axradio_cb_transmitdata
   1AED 12 50 73           7947 	lcall	_wtimer_remove_callback
                    12A6   7948 	C$easyax5043.c$1095$3$302 ==.
                           7949 ;	..\COMMON\easyax5043.c:1095: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   1AF0 90 02 84           7950 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
                    12A9   7951 	C$easyax5043.c$1096$3$302 ==.
                           7952 ;	..\COMMON\easyax5043.c:1096: axradio_cb_transmitdata.st.time.t = 0;
   1AF3 E4                 7953 	clr	a
   1AF4 F0                 7954 	movx	@dptr,a
   1AF5 90 02 85           7955 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   1AF8 F0                 7956 	movx	@dptr,a
   1AF9 A3                 7957 	inc	dptr
   1AFA E4                 7958 	clr	a
   1AFB F0                 7959 	movx	@dptr,a
   1AFC A3                 7960 	inc	dptr
   1AFD F0                 7961 	movx	@dptr,a
   1AFE A3                 7962 	inc	dptr
   1AFF F0                 7963 	movx	@dptr,a
                    12B6   7964 	C$easyax5043.c$1097$3$302 ==.
                           7965 ;	..\COMMON\easyax5043.c:1097: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   1B00 90 02 7F           7966 	mov	dptr,#_axradio_cb_transmitdata
   1B03 12 44 48           7967 	lcall	_wtimer_add_callback
                    12BC   7968 	C$easyax5043.c$1098$3$302 ==.
                           7969 ;	..\COMMON\easyax5043.c:1098: wtimer_remove(&axradio_timer);
   1B06 90 02 89           7970 	mov	dptr,#_axradio_timer
   1B09 12 4D 58           7971 	lcall	_wtimer_remove
                    12C2   7972 	C$easyax5043.c$1099$3$302 ==.
                           7973 ;	..\COMMON\easyax5043.c:1099: axradio_timer.time = axradio_sync_time;
   1B0C 90 00 10           7974 	mov	dptr,#_axradio_sync_time
   1B0F E0                 7975 	movx	a,@dptr
   1B10 FC                 7976 	mov	r4,a
   1B11 A3                 7977 	inc	dptr
   1B12 E0                 7978 	movx	a,@dptr
   1B13 FD                 7979 	mov	r5,a
   1B14 A3                 7980 	inc	dptr
   1B15 E0                 7981 	movx	a,@dptr
   1B16 FE                 7982 	mov	r6,a
   1B17 A3                 7983 	inc	dptr
   1B18 E0                 7984 	movx	a,@dptr
   1B19 FF                 7985 	mov	r7,a
   1B1A 90 02 8D           7986 	mov	dptr,#(_axradio_timer + 0x0004)
   1B1D EC                 7987 	mov	a,r4
   1B1E F0                 7988 	movx	@dptr,a
   1B1F A3                 7989 	inc	dptr
   1B20 ED                 7990 	mov	a,r5
   1B21 F0                 7991 	movx	@dptr,a
   1B22 A3                 7992 	inc	dptr
   1B23 EE                 7993 	mov	a,r6
   1B24 F0                 7994 	movx	@dptr,a
   1B25 A3                 7995 	inc	dptr
   1B26 EF                 7996 	mov	a,r7
   1B27 F0                 7997 	movx	@dptr,a
                    12DE   7998 	C$easyax5043.c$1100$3$302 ==.
                           7999 ;	..\COMMON\easyax5043.c:1100: wtimer0_addabsolute(&axradio_timer);
   1B28 90 02 89           8000 	mov	dptr,#_axradio_timer
   1B2B 12 45 75           8001 	lcall	_wtimer0_addabsolute
                    12E4   8002 	C$easyax5043.c$1101$3$302 ==.
                           8003 ;	..\COMMON\easyax5043.c:1101: break;
   1B2E 02 20 74           8004 	ljmp	00173$
                    12E7   8005 	C$easyax5043.c$1103$3$302 ==.
                           8006 ;	..\COMMON\easyax5043.c:1103: case syncstate_master_xostartup:
   1B31                    8007 00140$:
                    12E7   8008 	C$easyax5043.c$1104$3$302 ==.
                           8009 ;	..\COMMON\easyax5043.c:1104: AX5043_FIFOSTAT = 3;
   1B31 90 40 28           8010 	mov	dptr,#_AX5043_FIFOSTAT
   1B34 74 03              8011 	mov	a,#0x03
   1B36 F0                 8012 	movx	@dptr,a
                    12ED   8013 	C$easyax5043.c$1105$3$302 ==.
                           8014 ;	..\COMMON\easyax5043.c:1105: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1B37 90 40 02           8015 	mov	dptr,#_AX5043_PWRMODE
   1B3A 74 0D              8016 	mov	a,#0x0D
   1B3C F0                 8017 	movx	@dptr,a
                    12F3   8018 	C$easyax5043.c$1106$3$302 ==.
                           8019 ;	..\COMMON\easyax5043.c:1106: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1B3D                    8020 00141$:
   1B3D 90 40 03           8021 	mov	dptr,#_AX5043_POWSTAT
   1B40 E0                 8022 	movx	a,@dptr
   1B41 FF                 8023 	mov	r7,a
   1B42 30 E3 F8           8024 	jnb	acc.3,00141$
                    12FB   8025 	C$easyax5043.c$1107$3$302 ==.
                           8026 ;	..\COMMON\easyax5043.c:1107: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1B45 90 40 0F           8027 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1B48 E0                 8028 	movx	a,@dptr
                    12FF   8029 	C$easyax5043.c$1108$3$302 ==.
                           8030 ;	..\COMMON\easyax5043.c:1108: AX5043_FIFOTHRESH1 = 0;
   1B49 90 40 2E           8031 	mov	dptr,#_AX5043_FIFOTHRESH1
   1B4C E4                 8032 	clr	a
   1B4D F0                 8033 	movx	@dptr,a
                    1304   8034 	C$easyax5043.c$1109$3$302 ==.
                           8035 ;	..\COMMON\easyax5043.c:1109: AX5043_FIFOTHRESH0 = 0x80;
   1B4E 90 40 2F           8036 	mov	dptr,#_AX5043_FIFOTHRESH0
   1B51 74 80              8037 	mov	a,#0x80
   1B53 F0                 8038 	movx	@dptr,a
                    130A   8039 	C$easyax5043.c$1110$3$302 ==.
                           8040 ;	..\COMMON\easyax5043.c:1110: axradio_trxstate = trxstate_tx_longpreamble;
   1B54 75 0B 0A           8041 	mov	_axradio_trxstate,#0x0A
                    130D   8042 	C$easyax5043.c$1111$3$302 ==.
                           8043 ;	..\COMMON\easyax5043.c:1111: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1B57 90 56 26           8044 	mov	dptr,#_axradio_phy_preamble_longlen
   1B5A E4                 8045 	clr	a
   1B5B 93                 8046 	movc	a,@a+dptr
   1B5C FE                 8047 	mov	r6,a
   1B5D 74 01              8048 	mov	a,#0x01
   1B5F 93                 8049 	movc	a,@a+dptr
   1B60 FF                 8050 	mov	r7,a
   1B61 90 00 07           8051 	mov	dptr,#_axradio_txbuffer_cnt
   1B64 EE                 8052 	mov	a,r6
   1B65 F0                 8053 	movx	@dptr,a
   1B66 A3                 8054 	inc	dptr
   1B67 EF                 8055 	mov	a,r7
   1B68 F0                 8056 	movx	@dptr,a
                    131F   8057 	C$easyax5043.c$1113$3$302 ==.
                           8058 ;	..\COMMON\easyax5043.c:1113: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1B69 90 40 10           8059 	mov	dptr,#_AX5043_MODULATION
   1B6C E0                 8060 	movx	a,@dptr
   1B6D FF                 8061 	mov	r7,a
   1B6E 53 07 0F           8062 	anl	ar7,#0x0F
   1B71 BF 09 0F           8063 	cjne	r7,#0x09,00145$
                    132A   8064 	C$easyax5043.c$1114$4$303 ==.
                           8065 ;	..\COMMON\easyax5043.c:1114: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    132A   8066 	C$easyax5043.c$1115$4$303 ==.
                           8067 ;	..\COMMON\easyax5043.c:1115: AX5043_FIFODATA = 2;  // length (including flags)
                    132A   8068 	C$easyax5043.c$1116$4$303 ==.
                           8069 ;	..\COMMON\easyax5043.c:1116: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                    132A   8070 	C$easyax5043.c$1117$4$303 ==.
                           8071 ;	..\COMMON\easyax5043.c:1117: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1B74 90 40 29           8072 	mov	dptr,#_AX5043_FIFODATA
   1B77 74 E1              8073 	mov	a,#0xE1
   1B79 F0                 8074 	movx	@dptr,a
   1B7A 74 02              8075 	mov	a,#0x02
   1B7C F0                 8076 	movx	@dptr,a
   1B7D 74 01              8077 	mov	a,#0x01
   1B7F F0                 8078 	movx	@dptr,a
   1B80 74 11              8079 	mov	a,#0x11
   1B82 F0                 8080 	movx	@dptr,a
   1B83                    8081 00145$:
                    1339   8082 	C$easyax5043.c$1124$3$302 ==.
                           8083 ;	..\COMMON\easyax5043.c:1124: wtimer_remove(&axradio_timer);
   1B83 90 02 89           8084 	mov	dptr,#_axradio_timer
   1B86 12 4D 58           8085 	lcall	_wtimer_remove
                    133F   8086 	C$easyax5043.c$1125$3$302 ==.
                           8087 ;	..\COMMON\easyax5043.c:1125: update_timeanchor();
   1B89 12 08 4A           8088 	lcall	_update_timeanchor
                    1342   8089 	C$easyax5043.c$1126$3$302 ==.
                           8090 ;	..\COMMON\easyax5043.c:1126: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1B8C 90 40 07           8091 	mov	dptr,#_AX5043_IRQMASK0
   1B8F 74 08              8092 	mov	a,#0x08
   1B91 F0                 8093 	movx	@dptr,a
                    1348   8094 	C$easyax5043.c$1127$3$302 ==.
                           8095 ;	..\COMMON\easyax5043.c:1127: axradio_sync_addtime(axradio_sync_period);
   1B92 90 56 4A           8096 	mov	dptr,#_axradio_sync_period
   1B95 E4                 8097 	clr	a
   1B96 93                 8098 	movc	a,@a+dptr
   1B97 FC                 8099 	mov	r4,a
   1B98 74 01              8100 	mov	a,#0x01
   1B9A 93                 8101 	movc	a,@a+dptr
   1B9B FD                 8102 	mov	r5,a
   1B9C 74 02              8103 	mov	a,#0x02
   1B9E 93                 8104 	movc	a,@a+dptr
   1B9F FE                 8105 	mov	r6,a
   1BA0 74 03              8106 	mov	a,#0x03
   1BA2 93                 8107 	movc	a,@a+dptr
   1BA3 8C 82              8108 	mov	dpl,r4
   1BA5 8D 83              8109 	mov	dph,r5
   1BA7 8E F0              8110 	mov	b,r6
   1BA9 12 16 26           8111 	lcall	_axradio_sync_addtime
                    1362   8112 	C$easyax5043.c$1128$3$302 ==.
                           8113 ;	..\COMMON\easyax5043.c:1128: axradio_syncstate = syncstate_master_waitack;
   1BAC 90 00 04           8114 	mov	dptr,#_axradio_syncstate
   1BAF 74 05              8115 	mov	a,#0x05
   1BB1 F0                 8116 	movx	@dptr,a
                    1368   8117 	C$easyax5043.c$1129$3$302 ==.
                           8118 ;	..\COMMON\easyax5043.c:1129: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER) {
   1BB2 74 21              8119 	mov	a,#0x21
   1BB4 B5 0A 02           8120 	cjne	a,_axradio_mode,00254$
   1BB7 80 26              8121 	sjmp	00147$
   1BB9                    8122 00254$:
                    136F   8123 	C$easyax5043.c$1130$4$304 ==.
                           8124 ;	..\COMMON\easyax5043.c:1130: axradio_syncstate = syncstate_master_normal;
   1BB9 90 00 04           8125 	mov	dptr,#_axradio_syncstate
   1BBC 74 03              8126 	mov	a,#0x03
   1BBE F0                 8127 	movx	@dptr,a
                    1375   8128 	C$easyax5043.c$1131$4$304 ==.
                           8129 ;	..\COMMON\easyax5043.c:1131: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1BBF 90 56 4E           8130 	mov	dptr,#_axradio_sync_xoscstartup
   1BC2 E4                 8131 	clr	a
   1BC3 93                 8132 	movc	a,@a+dptr
   1BC4 FC                 8133 	mov	r4,a
   1BC5 74 01              8134 	mov	a,#0x01
   1BC7 93                 8135 	movc	a,@a+dptr
   1BC8 FD                 8136 	mov	r5,a
   1BC9 74 02              8137 	mov	a,#0x02
   1BCB 93                 8138 	movc	a,@a+dptr
   1BCC FE                 8139 	mov	r6,a
   1BCD 74 03              8140 	mov	a,#0x03
   1BCF 93                 8141 	movc	a,@a+dptr
   1BD0 8C 82              8142 	mov	dpl,r4
   1BD2 8D 83              8143 	mov	dph,r5
   1BD4 8E F0              8144 	mov	b,r6
   1BD6 12 16 77           8145 	lcall	_axradio_sync_settimeradv
                    138F   8146 	C$easyax5043.c$1132$4$304 ==.
                           8147 ;	..\COMMON\easyax5043.c:1132: wtimer0_addabsolute(&axradio_timer);
   1BD9 90 02 89           8148 	mov	dptr,#_axradio_timer
   1BDC 12 45 75           8149 	lcall	_wtimer0_addabsolute
   1BDF                    8150 00147$:
                    1395   8151 	C$easyax5043.c$1134$3$302 ==.
                           8152 ;	..\COMMON\easyax5043.c:1134: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1BDF 90 02 6B           8153 	mov	dptr,#_axradio_cb_transmitstart
   1BE2 12 50 73           8154 	lcall	_wtimer_remove_callback
                    139B   8155 	C$easyax5043.c$1135$3$302 ==.
                           8156 ;	..\COMMON\easyax5043.c:1135: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1BE5 90 02 70           8157 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1BE8 E4                 8158 	clr	a
   1BE9 F0                 8159 	movx	@dptr,a
                    13A0   8160 	C$easyax5043.c$1136$3$302 ==.
                           8161 ;	..\COMMON\easyax5043.c:1136: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1BEA 90 00 1A           8162 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1BED E0                 8163 	movx	a,@dptr
   1BEE FC                 8164 	mov	r4,a
   1BEF A3                 8165 	inc	dptr
   1BF0 E0                 8166 	movx	a,@dptr
   1BF1 FD                 8167 	mov	r5,a
   1BF2 A3                 8168 	inc	dptr
   1BF3 E0                 8169 	movx	a,@dptr
   1BF4 FE                 8170 	mov	r6,a
   1BF5 A3                 8171 	inc	dptr
   1BF6 E0                 8172 	movx	a,@dptr
   1BF7 FF                 8173 	mov	r7,a
   1BF8 90 02 71           8174 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1BFB EC                 8175 	mov	a,r4
   1BFC F0                 8176 	movx	@dptr,a
   1BFD A3                 8177 	inc	dptr
   1BFE ED                 8178 	mov	a,r5
   1BFF F0                 8179 	movx	@dptr,a
   1C00 A3                 8180 	inc	dptr
   1C01 EE                 8181 	mov	a,r6
   1C02 F0                 8182 	movx	@dptr,a
   1C03 A3                 8183 	inc	dptr
   1C04 EF                 8184 	mov	a,r7
   1C05 F0                 8185 	movx	@dptr,a
                    13BC   8186 	C$easyax5043.c$1137$3$302 ==.
                           8187 ;	..\COMMON\easyax5043.c:1137: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1C06 90 02 6B           8188 	mov	dptr,#_axradio_cb_transmitstart
   1C09 12 44 48           8189 	lcall	_wtimer_add_callback
                    13C2   8190 	C$easyax5043.c$1138$3$302 ==.
                           8191 ;	..\COMMON\easyax5043.c:1138: break;
   1C0C 02 20 74           8192 	ljmp	00173$
                    13C5   8193 	C$easyax5043.c$1140$3$302 ==.
                           8194 ;	..\COMMON\easyax5043.c:1140: case syncstate_master_waitack:
   1C0F                    8195 00148$:
                    13C5   8196 	C$easyax5043.c$1141$3$302 ==.
                           8197 ;	..\COMMON\easyax5043.c:1141: ax5043_off();
   1C0F 12 14 86           8198 	lcall	_ax5043_off
                    13C8   8199 	C$easyax5043.c$1142$3$302 ==.
                           8200 ;	..\COMMON\easyax5043.c:1142: axradio_syncstate = syncstate_master_normal;
   1C12 90 00 04           8201 	mov	dptr,#_axradio_syncstate
   1C15 74 03              8202 	mov	a,#0x03
   1C17 F0                 8203 	movx	@dptr,a
                    13CE   8204 	C$easyax5043.c$1143$3$302 ==.
                           8205 ;	..\COMMON\easyax5043.c:1143: wtimer_remove(&axradio_timer);
   1C18 90 02 89           8206 	mov	dptr,#_axradio_timer
   1C1B 12 4D 58           8207 	lcall	_wtimer_remove
                    13D4   8208 	C$easyax5043.c$1144$3$302 ==.
                           8209 ;	..\COMMON\easyax5043.c:1144: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1C1E 90 56 4E           8210 	mov	dptr,#_axradio_sync_xoscstartup
   1C21 E4                 8211 	clr	a
   1C22 93                 8212 	movc	a,@a+dptr
   1C23 FC                 8213 	mov	r4,a
   1C24 74 01              8214 	mov	a,#0x01
   1C26 93                 8215 	movc	a,@a+dptr
   1C27 FD                 8216 	mov	r5,a
   1C28 74 02              8217 	mov	a,#0x02
   1C2A 93                 8218 	movc	a,@a+dptr
   1C2B FE                 8219 	mov	r6,a
   1C2C 74 03              8220 	mov	a,#0x03
   1C2E 93                 8221 	movc	a,@a+dptr
   1C2F 8C 82              8222 	mov	dpl,r4
   1C31 8D 83              8223 	mov	dph,r5
   1C33 8E F0              8224 	mov	b,r6
   1C35 12 16 77           8225 	lcall	_axradio_sync_settimeradv
                    13EE   8226 	C$easyax5043.c$1145$3$302 ==.
                           8227 ;	..\COMMON\easyax5043.c:1145: wtimer0_addabsolute(&axradio_timer);
   1C38 90 02 89           8228 	mov	dptr,#_axradio_timer
   1C3B 12 45 75           8229 	lcall	_wtimer0_addabsolute
                    13F4   8230 	C$easyax5043.c$1146$3$302 ==.
                           8231 ;	..\COMMON\easyax5043.c:1146: update_timeanchor();
   1C3E 12 08 4A           8232 	lcall	_update_timeanchor
                    13F7   8233 	C$easyax5043.c$1147$3$302 ==.
                           8234 ;	..\COMMON\easyax5043.c:1147: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1C41 90 02 75           8235 	mov	dptr,#_axradio_cb_transmitend
   1C44 12 50 73           8236 	lcall	_wtimer_remove_callback
                    13FD   8237 	C$easyax5043.c$1148$3$302 ==.
                           8238 ;	..\COMMON\easyax5043.c:1148: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   1C47 90 02 7A           8239 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1C4A 74 03              8240 	mov	a,#0x03
   1C4C F0                 8241 	movx	@dptr,a
                    1403   8242 	C$easyax5043.c$1149$3$302 ==.
                           8243 ;	..\COMMON\easyax5043.c:1149: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1C4D 90 00 1A           8244 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1C50 E0                 8245 	movx	a,@dptr
   1C51 FC                 8246 	mov	r4,a
   1C52 A3                 8247 	inc	dptr
   1C53 E0                 8248 	movx	a,@dptr
   1C54 FD                 8249 	mov	r5,a
   1C55 A3                 8250 	inc	dptr
   1C56 E0                 8251 	movx	a,@dptr
   1C57 FE                 8252 	mov	r6,a
   1C58 A3                 8253 	inc	dptr
   1C59 E0                 8254 	movx	a,@dptr
   1C5A FF                 8255 	mov	r7,a
   1C5B 90 02 7B           8256 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1C5E EC                 8257 	mov	a,r4
   1C5F F0                 8258 	movx	@dptr,a
   1C60 A3                 8259 	inc	dptr
   1C61 ED                 8260 	mov	a,r5
   1C62 F0                 8261 	movx	@dptr,a
   1C63 A3                 8262 	inc	dptr
   1C64 EE                 8263 	mov	a,r6
   1C65 F0                 8264 	movx	@dptr,a
   1C66 A3                 8265 	inc	dptr
   1C67 EF                 8266 	mov	a,r7
   1C68 F0                 8267 	movx	@dptr,a
                    141F   8268 	C$easyax5043.c$1150$3$302 ==.
                           8269 ;	..\COMMON\easyax5043.c:1150: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1C69 90 02 75           8270 	mov	dptr,#_axradio_cb_transmitend
   1C6C 12 44 48           8271 	lcall	_wtimer_add_callback
                    1425   8272 	C$easyax5043.c$1153$2$297 ==.
                           8273 ;	..\COMMON\easyax5043.c:1153: break;
   1C6F 02 20 74           8274 	ljmp	00173$
                    1428   8275 	C$easyax5043.c$1155$2$297 ==.
                           8276 ;	..\COMMON\easyax5043.c:1155: case AXRADIO_MODE_SYNC_SLAVE:
   1C72                    8277 00150$:
                    1428   8278 	C$easyax5043.c$1156$2$297 ==.
                           8279 ;	..\COMMON\easyax5043.c:1156: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   1C72                    8280 00151$:
                    1428   8281 	C$easyax5043.c$1157$2$297 ==.
                           8282 ;	..\COMMON\easyax5043.c:1157: switch (axradio_syncstate) {
   1C72 90 00 04           8283 	mov	dptr,#_axradio_syncstate
   1C75 E0                 8284 	movx	a,@dptr
   1C76 FF                 8285 	mov  r7,a
   1C77 24 F3              8286 	add	a,#0xff - 0x0C
   1C79 40 2E              8287 	jc	00153$
   1C7B EF                 8288 	mov	a,r7
   1C7C 2F                 8289 	add	a,r7
   1C7D 2F                 8290 	add	a,r7
   1C7E 90 1C 82           8291 	mov	dptr,#00256$
   1C81 73                 8292 	jmp	@a+dptr
   1C82                    8293 00256$:
   1C82 02 1C A9           8294 	ljmp	00152$
   1C85 02 1C A9           8295 	ljmp	00152$
   1C88 02 1C A9           8296 	ljmp	00152$
   1C8B 02 1C A9           8297 	ljmp	00152$
   1C8E 02 1C A9           8298 	ljmp	00152$
   1C91 02 1C A9           8299 	ljmp	00152$
   1C94 02 1C A9           8300 	ljmp	00153$
   1C97 02 1D 37           8301 	ljmp	00154$
   1C9A 02 1D C8           8302 	ljmp	00155$
   1C9D 02 1E 1D           8303 	ljmp	00156$
   1CA0 02 1E D1           8304 	ljmp	00159$
   1CA3 02 1F 2C           8305 	ljmp	00162$
   1CA6 02 20 45           8306 	ljmp	00169$
                    145F   8307 	C$easyax5043.c$1158$3$305 ==.
                           8308 ;	..\COMMON\easyax5043.c:1158: default:
   1CA9                    8309 00152$:
                    145F   8310 	C$easyax5043.c$1159$3$305 ==.
                           8311 ;	..\COMMON\easyax5043.c:1159: case syncstate_slave_synchunt:
   1CA9                    8312 00153$:
                    145F   8313 	C$easyax5043.c$1160$3$305 ==.
                           8314 ;	..\COMMON\easyax5043.c:1160: ax5043_off();
   1CA9 12 14 86           8315 	lcall	_ax5043_off
                    1462   8316 	C$easyax5043.c$1161$3$305 ==.
                           8317 ;	..\COMMON\easyax5043.c:1161: axradio_syncstate = syncstate_slave_syncpause;
   1CAC 90 00 04           8318 	mov	dptr,#_axradio_syncstate
   1CAF 74 07              8319 	mov	a,#0x07
   1CB1 F0                 8320 	movx	@dptr,a
                    1468   8321 	C$easyax5043.c$1162$3$305 ==.
                           8322 ;	..\COMMON\easyax5043.c:1162: axradio_sync_addtime(axradio_sync_slave_syncpause);
   1CB2 90 56 5A           8323 	mov	dptr,#_axradio_sync_slave_syncpause
   1CB5 E4                 8324 	clr	a
   1CB6 93                 8325 	movc	a,@a+dptr
   1CB7 FC                 8326 	mov	r4,a
   1CB8 74 01              8327 	mov	a,#0x01
   1CBA 93                 8328 	movc	a,@a+dptr
   1CBB FD                 8329 	mov	r5,a
   1CBC 74 02              8330 	mov	a,#0x02
   1CBE 93                 8331 	movc	a,@a+dptr
   1CBF FE                 8332 	mov	r6,a
   1CC0 74 03              8333 	mov	a,#0x03
   1CC2 93                 8334 	movc	a,@a+dptr
   1CC3 8C 82              8335 	mov	dpl,r4
   1CC5 8D 83              8336 	mov	dph,r5
   1CC7 8E F0              8337 	mov	b,r6
   1CC9 12 16 26           8338 	lcall	_axradio_sync_addtime
                    1482   8339 	C$easyax5043.c$1163$3$305 ==.
                           8340 ;	..\COMMON\easyax5043.c:1163: wtimer_remove(&axradio_timer);
   1CCC 90 02 89           8341 	mov	dptr,#_axradio_timer
   1CCF 12 4D 58           8342 	lcall	_wtimer_remove
                    1488   8343 	C$easyax5043.c$1164$3$305 ==.
                           8344 ;	..\COMMON\easyax5043.c:1164: axradio_timer.time = axradio_sync_time;
   1CD2 90 00 10           8345 	mov	dptr,#_axradio_sync_time
   1CD5 E0                 8346 	movx	a,@dptr
   1CD6 FC                 8347 	mov	r4,a
   1CD7 A3                 8348 	inc	dptr
   1CD8 E0                 8349 	movx	a,@dptr
   1CD9 FD                 8350 	mov	r5,a
   1CDA A3                 8351 	inc	dptr
   1CDB E0                 8352 	movx	a,@dptr
   1CDC FE                 8353 	mov	r6,a
   1CDD A3                 8354 	inc	dptr
   1CDE E0                 8355 	movx	a,@dptr
   1CDF FF                 8356 	mov	r7,a
   1CE0 90 02 8D           8357 	mov	dptr,#(_axradio_timer + 0x0004)
   1CE3 EC                 8358 	mov	a,r4
   1CE4 F0                 8359 	movx	@dptr,a
   1CE5 A3                 8360 	inc	dptr
   1CE6 ED                 8361 	mov	a,r5
   1CE7 F0                 8362 	movx	@dptr,a
   1CE8 A3                 8363 	inc	dptr
   1CE9 EE                 8364 	mov	a,r6
   1CEA F0                 8365 	movx	@dptr,a
   1CEB A3                 8366 	inc	dptr
   1CEC EF                 8367 	mov	a,r7
   1CED F0                 8368 	movx	@dptr,a
                    14A4   8369 	C$easyax5043.c$1165$3$305 ==.
                           8370 ;	..\COMMON\easyax5043.c:1165: wtimer0_addabsolute(&axradio_timer);
   1CEE 90 02 89           8371 	mov	dptr,#_axradio_timer
   1CF1 12 45 75           8372 	lcall	_wtimer0_addabsolute
                    14AA   8373 	C$easyax5043.c$1166$3$305 ==.
                           8374 ;	..\COMMON\easyax5043.c:1166: wtimer_remove_callback(&axradio_cb_receive.cb);
   1CF4 90 02 32           8375 	mov	dptr,#_axradio_cb_receive
   1CF7 12 50 73           8376 	lcall	_wtimer_remove_callback
                    14B0   8377 	C$easyax5043.c$1167$3$305 ==.
                           8378 ;	..\COMMON\easyax5043.c:1167: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1CFA 75 36 00           8379 	mov	_memset_PARM_2,#0x00
   1CFD 75 37 1E           8380 	mov	_memset_PARM_3,#0x1E
   1D00 75 38 00           8381 	mov	(_memset_PARM_3 + 1),#0x00
   1D03 90 02 36           8382 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1D06 75 F0 00           8383 	mov	b,#0x00
   1D09 12 43 D4           8384 	lcall	_memset
                    14C2   8385 	C$easyax5043.c$1168$3$305 ==.
                           8386 ;	..\COMMON\easyax5043.c:1168: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D0C 90 00 1A           8387 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1D0F E0                 8388 	movx	a,@dptr
   1D10 FC                 8389 	mov	r4,a
   1D11 A3                 8390 	inc	dptr
   1D12 E0                 8391 	movx	a,@dptr
   1D13 FD                 8392 	mov	r5,a
   1D14 A3                 8393 	inc	dptr
   1D15 E0                 8394 	movx	a,@dptr
   1D16 FE                 8395 	mov	r6,a
   1D17 A3                 8396 	inc	dptr
   1D18 E0                 8397 	movx	a,@dptr
   1D19 FF                 8398 	mov	r7,a
   1D1A 90 02 38           8399 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1D1D EC                 8400 	mov	a,r4
   1D1E F0                 8401 	movx	@dptr,a
   1D1F A3                 8402 	inc	dptr
   1D20 ED                 8403 	mov	a,r5
   1D21 F0                 8404 	movx	@dptr,a
   1D22 A3                 8405 	inc	dptr
   1D23 EE                 8406 	mov	a,r6
   1D24 F0                 8407 	movx	@dptr,a
   1D25 A3                 8408 	inc	dptr
   1D26 EF                 8409 	mov	a,r7
   1D27 F0                 8410 	movx	@dptr,a
                    14DE   8411 	C$easyax5043.c$1169$3$305 ==.
                           8412 ;	..\COMMON\easyax5043.c:1169: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNCTIMEOUT;
   1D28 90 02 37           8413 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1D2B 74 0A              8414 	mov	a,#0x0A
   1D2D F0                 8415 	movx	@dptr,a
                    14E4   8416 	C$easyax5043.c$1170$3$305 ==.
                           8417 ;	..\COMMON\easyax5043.c:1170: wtimer_add_callback(&axradio_cb_receive.cb);
   1D2E 90 02 32           8418 	mov	dptr,#_axradio_cb_receive
   1D31 12 44 48           8419 	lcall	_wtimer_add_callback
                    14EA   8420 	C$easyax5043.c$1171$3$305 ==.
                           8421 ;	..\COMMON\easyax5043.c:1171: break;
   1D34 02 20 74           8422 	ljmp	00173$
                    14ED   8423 	C$easyax5043.c$1173$3$305 ==.
                           8424 ;	..\COMMON\easyax5043.c:1173: case syncstate_slave_syncpause:
   1D37                    8425 00154$:
                    14ED   8426 	C$easyax5043.c$1174$3$305 ==.
                           8427 ;	..\COMMON\easyax5043.c:1174: ax5043_receiver_on_continuous();
   1D37 12 13 41           8428 	lcall	_ax5043_receiver_on_continuous
                    14F0   8429 	C$easyax5043.c$1175$3$305 ==.
                           8430 ;	..\COMMON\easyax5043.c:1175: axradio_syncstate = syncstate_slave_synchunt;
   1D3A 90 00 04           8431 	mov	dptr,#_axradio_syncstate
   1D3D 74 06              8432 	mov	a,#0x06
   1D3F F0                 8433 	movx	@dptr,a
                    14F6   8434 	C$easyax5043.c$1176$3$305 ==.
                           8435 ;	..\COMMON\easyax5043.c:1176: axradio_sync_addtime(axradio_sync_slave_syncwindow);
   1D40 90 56 52           8436 	mov	dptr,#_axradio_sync_slave_syncwindow
   1D43 E4                 8437 	clr	a
   1D44 93                 8438 	movc	a,@a+dptr
   1D45 FC                 8439 	mov	r4,a
   1D46 74 01              8440 	mov	a,#0x01
   1D48 93                 8441 	movc	a,@a+dptr
   1D49 FD                 8442 	mov	r5,a
   1D4A 74 02              8443 	mov	a,#0x02
   1D4C 93                 8444 	movc	a,@a+dptr
   1D4D FE                 8445 	mov	r6,a
   1D4E 74 03              8446 	mov	a,#0x03
   1D50 93                 8447 	movc	a,@a+dptr
   1D51 8C 82              8448 	mov	dpl,r4
   1D53 8D 83              8449 	mov	dph,r5
   1D55 8E F0              8450 	mov	b,r6
   1D57 12 16 26           8451 	lcall	_axradio_sync_addtime
                    1510   8452 	C$easyax5043.c$1177$3$305 ==.
                           8453 ;	..\COMMON\easyax5043.c:1177: wtimer_remove(&axradio_timer);
   1D5A 90 02 89           8454 	mov	dptr,#_axradio_timer
   1D5D 12 4D 58           8455 	lcall	_wtimer_remove
                    1516   8456 	C$easyax5043.c$1178$3$305 ==.
                           8457 ;	..\COMMON\easyax5043.c:1178: axradio_timer.time = axradio_sync_time;
   1D60 90 00 10           8458 	mov	dptr,#_axradio_sync_time
   1D63 E0                 8459 	movx	a,@dptr
   1D64 FC                 8460 	mov	r4,a
   1D65 A3                 8461 	inc	dptr
   1D66 E0                 8462 	movx	a,@dptr
   1D67 FD                 8463 	mov	r5,a
   1D68 A3                 8464 	inc	dptr
   1D69 E0                 8465 	movx	a,@dptr
   1D6A FE                 8466 	mov	r6,a
   1D6B A3                 8467 	inc	dptr
   1D6C E0                 8468 	movx	a,@dptr
   1D6D FF                 8469 	mov	r7,a
   1D6E 90 02 8D           8470 	mov	dptr,#(_axradio_timer + 0x0004)
   1D71 EC                 8471 	mov	a,r4
   1D72 F0                 8472 	movx	@dptr,a
   1D73 A3                 8473 	inc	dptr
   1D74 ED                 8474 	mov	a,r5
   1D75 F0                 8475 	movx	@dptr,a
   1D76 A3                 8476 	inc	dptr
   1D77 EE                 8477 	mov	a,r6
   1D78 F0                 8478 	movx	@dptr,a
   1D79 A3                 8479 	inc	dptr
   1D7A EF                 8480 	mov	a,r7
   1D7B F0                 8481 	movx	@dptr,a
                    1532   8482 	C$easyax5043.c$1179$3$305 ==.
                           8483 ;	..\COMMON\easyax5043.c:1179: wtimer0_addabsolute(&axradio_timer);
   1D7C 90 02 89           8484 	mov	dptr,#_axradio_timer
   1D7F 12 45 75           8485 	lcall	_wtimer0_addabsolute
                    1538   8486 	C$easyax5043.c$1180$3$305 ==.
                           8487 ;	..\COMMON\easyax5043.c:1180: update_timeanchor();
   1D82 12 08 4A           8488 	lcall	_update_timeanchor
                    153B   8489 	C$easyax5043.c$1181$3$305 ==.
                           8490 ;	..\COMMON\easyax5043.c:1181: wtimer_remove_callback(&axradio_cb_receive.cb);
   1D85 90 02 32           8491 	mov	dptr,#_axradio_cb_receive
   1D88 12 50 73           8492 	lcall	_wtimer_remove_callback
                    1541   8493 	C$easyax5043.c$1182$3$305 ==.
                           8494 ;	..\COMMON\easyax5043.c:1182: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1D8B 75 36 00           8495 	mov	_memset_PARM_2,#0x00
   1D8E 75 37 1E           8496 	mov	_memset_PARM_3,#0x1E
   1D91 75 38 00           8497 	mov	(_memset_PARM_3 + 1),#0x00
   1D94 90 02 36           8498 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1D97 75 F0 00           8499 	mov	b,#0x00
   1D9A 12 43 D4           8500 	lcall	_memset
                    1553   8501 	C$easyax5043.c$1183$3$305 ==.
                           8502 ;	..\COMMON\easyax5043.c:1183: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D9D 90 00 1A           8503 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1DA0 E0                 8504 	movx	a,@dptr
   1DA1 FC                 8505 	mov	r4,a
   1DA2 A3                 8506 	inc	dptr
   1DA3 E0                 8507 	movx	a,@dptr
   1DA4 FD                 8508 	mov	r5,a
   1DA5 A3                 8509 	inc	dptr
   1DA6 E0                 8510 	movx	a,@dptr
   1DA7 FE                 8511 	mov	r6,a
   1DA8 A3                 8512 	inc	dptr
   1DA9 E0                 8513 	movx	a,@dptr
   1DAA FF                 8514 	mov	r7,a
   1DAB 90 02 38           8515 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1DAE EC                 8516 	mov	a,r4
   1DAF F0                 8517 	movx	@dptr,a
   1DB0 A3                 8518 	inc	dptr
   1DB1 ED                 8519 	mov	a,r5
   1DB2 F0                 8520 	movx	@dptr,a
   1DB3 A3                 8521 	inc	dptr
   1DB4 EE                 8522 	mov	a,r6
   1DB5 F0                 8523 	movx	@dptr,a
   1DB6 A3                 8524 	inc	dptr
   1DB7 EF                 8525 	mov	a,r7
   1DB8 F0                 8526 	movx	@dptr,a
                    156F   8527 	C$easyax5043.c$1184$3$305 ==.
                           8528 ;	..\COMMON\easyax5043.c:1184: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1DB9 90 02 37           8529 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1DBC 74 09              8530 	mov	a,#0x09
   1DBE F0                 8531 	movx	@dptr,a
                    1575   8532 	C$easyax5043.c$1185$3$305 ==.
                           8533 ;	..\COMMON\easyax5043.c:1185: wtimer_add_callback(&axradio_cb_receive.cb);
   1DBF 90 02 32           8534 	mov	dptr,#_axradio_cb_receive
   1DC2 12 44 48           8535 	lcall	_wtimer_add_callback
                    157B   8536 	C$easyax5043.c$1186$3$305 ==.
                           8537 ;	..\COMMON\easyax5043.c:1186: break;
   1DC5 02 20 74           8538 	ljmp	00173$
                    157E   8539 	C$easyax5043.c$1188$3$305 ==.
                           8540 ;	..\COMMON\easyax5043.c:1188: case syncstate_slave_rxidle:
   1DC8                    8541 00155$:
                    157E   8542 	C$easyax5043.c$1189$3$305 ==.
                           8543 ;	..\COMMON\easyax5043.c:1189: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1DC8 90 40 02           8544 	mov	dptr,#_AX5043_PWRMODE
   1DCB 74 05              8545 	mov	a,#0x05
   1DCD F0                 8546 	movx	@dptr,a
                    1584   8547 	C$easyax5043.c$1190$3$305 ==.
                           8548 ;	..\COMMON\easyax5043.c:1190: axradio_syncstate = syncstate_slave_rxxosc;
   1DCE 90 00 04           8549 	mov	dptr,#_axradio_syncstate
   1DD1 74 09              8550 	mov	a,#0x09
   1DD3 F0                 8551 	movx	@dptr,a
                    158A   8552 	C$easyax5043.c$1191$3$305 ==.
                           8553 ;	..\COMMON\easyax5043.c:1191: wtimer_remove(&axradio_timer);
   1DD4 90 02 89           8554 	mov	dptr,#_axradio_timer
   1DD7 12 4D 58           8555 	lcall	_wtimer_remove
                    1590   8556 	C$easyax5043.c$1192$3$305 ==.
                           8557 ;	..\COMMON\easyax5043.c:1192: axradio_timer.time += axradio_sync_xoscstartup;
   1DDA 90 02 8D           8558 	mov	dptr,#(_axradio_timer + 0x0004)
   1DDD E0                 8559 	movx	a,@dptr
   1DDE FC                 8560 	mov	r4,a
   1DDF A3                 8561 	inc	dptr
   1DE0 E0                 8562 	movx	a,@dptr
   1DE1 FD                 8563 	mov	r5,a
   1DE2 A3                 8564 	inc	dptr
   1DE3 E0                 8565 	movx	a,@dptr
   1DE4 FE                 8566 	mov	r6,a
   1DE5 A3                 8567 	inc	dptr
   1DE6 E0                 8568 	movx	a,@dptr
   1DE7 FF                 8569 	mov	r7,a
   1DE8 90 56 4E           8570 	mov	dptr,#_axradio_sync_xoscstartup
   1DEB E4                 8571 	clr	a
   1DEC 93                 8572 	movc	a,@a+dptr
   1DED F8                 8573 	mov	r0,a
   1DEE 74 01              8574 	mov	a,#0x01
   1DF0 93                 8575 	movc	a,@a+dptr
   1DF1 F9                 8576 	mov	r1,a
   1DF2 74 02              8577 	mov	a,#0x02
   1DF4 93                 8578 	movc	a,@a+dptr
   1DF5 FA                 8579 	mov	r2,a
   1DF6 74 03              8580 	mov	a,#0x03
   1DF8 93                 8581 	movc	a,@a+dptr
   1DF9 FB                 8582 	mov	r3,a
   1DFA E8                 8583 	mov	a,r0
   1DFB 2C                 8584 	add	a,r4
   1DFC FC                 8585 	mov	r4,a
   1DFD E9                 8586 	mov	a,r1
   1DFE 3D                 8587 	addc	a,r5
   1DFF FD                 8588 	mov	r5,a
   1E00 EA                 8589 	mov	a,r2
   1E01 3E                 8590 	addc	a,r6
   1E02 FE                 8591 	mov	r6,a
   1E03 EB                 8592 	mov	a,r3
   1E04 3F                 8593 	addc	a,r7
   1E05 FF                 8594 	mov	r7,a
   1E06 90 02 8D           8595 	mov	dptr,#(_axradio_timer + 0x0004)
   1E09 EC                 8596 	mov	a,r4
   1E0A F0                 8597 	movx	@dptr,a
   1E0B A3                 8598 	inc	dptr
   1E0C ED                 8599 	mov	a,r5
   1E0D F0                 8600 	movx	@dptr,a
   1E0E A3                 8601 	inc	dptr
   1E0F EE                 8602 	mov	a,r6
   1E10 F0                 8603 	movx	@dptr,a
   1E11 A3                 8604 	inc	dptr
   1E12 EF                 8605 	mov	a,r7
   1E13 F0                 8606 	movx	@dptr,a
                    15CA   8607 	C$easyax5043.c$1193$3$305 ==.
                           8608 ;	..\COMMON\easyax5043.c:1193: wtimer0_addabsolute(&axradio_timer);
   1E14 90 02 89           8609 	mov	dptr,#_axradio_timer
   1E17 12 45 75           8610 	lcall	_wtimer0_addabsolute
                    15D0   8611 	C$easyax5043.c$1194$3$305 ==.
                           8612 ;	..\COMMON\easyax5043.c:1194: break;
   1E1A 02 20 74           8613 	ljmp	00173$
                    15D3   8614 	C$easyax5043.c$1196$3$305 ==.
                           8615 ;	..\COMMON\easyax5043.c:1196: case syncstate_slave_rxxosc:
   1E1D                    8616 00156$:
                    15D3   8617 	C$easyax5043.c$1197$3$305 ==.
                           8618 ;	..\COMMON\easyax5043.c:1197: ax5043_receiver_on_continuous();
   1E1D 12 13 41           8619 	lcall	_ax5043_receiver_on_continuous
                    15D6   8620 	C$easyax5043.c$1198$3$305 ==.
                           8621 ;	..\COMMON\easyax5043.c:1198: axradio_syncstate = syncstate_slave_rxsfdwindow;
   1E20 90 00 04           8622 	mov	dptr,#_axradio_syncstate
   1E23 74 0A              8623 	mov	a,#0x0A
   1E25 F0                 8624 	movx	@dptr,a
                    15DC   8625 	C$easyax5043.c$1199$3$305 ==.
                           8626 ;	..\COMMON\easyax5043.c:1199: update_timeanchor();
   1E26 12 08 4A           8627 	lcall	_update_timeanchor
                    15DF   8628 	C$easyax5043.c$1200$3$305 ==.
                           8629 ;	..\COMMON\easyax5043.c:1200: wtimer_remove_callback(&axradio_cb_receive.cb);
   1E29 90 02 32           8630 	mov	dptr,#_axradio_cb_receive
   1E2C 12 50 73           8631 	lcall	_wtimer_remove_callback
                    15E5   8632 	C$easyax5043.c$1201$3$305 ==.
                           8633 ;	..\COMMON\easyax5043.c:1201: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1E2F 75 36 00           8634 	mov	_memset_PARM_2,#0x00
   1E32 75 37 1E           8635 	mov	_memset_PARM_3,#0x1E
   1E35 75 38 00           8636 	mov	(_memset_PARM_3 + 1),#0x00
   1E38 90 02 36           8637 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1E3B 75 F0 00           8638 	mov	b,#0x00
   1E3E 12 43 D4           8639 	lcall	_memset
                    15F7   8640 	C$easyax5043.c$1202$3$305 ==.
                           8641 ;	..\COMMON\easyax5043.c:1202: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1E41 90 00 1A           8642 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1E44 E0                 8643 	movx	a,@dptr
   1E45 FC                 8644 	mov	r4,a
   1E46 A3                 8645 	inc	dptr
   1E47 E0                 8646 	movx	a,@dptr
   1E48 FD                 8647 	mov	r5,a
   1E49 A3                 8648 	inc	dptr
   1E4A E0                 8649 	movx	a,@dptr
   1E4B FE                 8650 	mov	r6,a
   1E4C A3                 8651 	inc	dptr
   1E4D E0                 8652 	movx	a,@dptr
   1E4E FF                 8653 	mov	r7,a
   1E4F 90 02 38           8654 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1E52 EC                 8655 	mov	a,r4
   1E53 F0                 8656 	movx	@dptr,a
   1E54 A3                 8657 	inc	dptr
   1E55 ED                 8658 	mov	a,r5
   1E56 F0                 8659 	movx	@dptr,a
   1E57 A3                 8660 	inc	dptr
   1E58 EE                 8661 	mov	a,r6
   1E59 F0                 8662 	movx	@dptr,a
   1E5A A3                 8663 	inc	dptr
   1E5B EF                 8664 	mov	a,r7
   1E5C F0                 8665 	movx	@dptr,a
                    1613   8666 	C$easyax5043.c$1203$3$305 ==.
                           8667 ;	..\COMMON\easyax5043.c:1203: axradio_cb_receive.st.error = AXRADIO_ERR_RECEIVESTART;
   1E5D 90 02 37           8668 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1E60 74 0B              8669 	mov	a,#0x0B
   1E62 F0                 8670 	movx	@dptr,a
                    1619   8671 	C$easyax5043.c$1204$3$305 ==.
                           8672 ;	..\COMMON\easyax5043.c:1204: wtimer_add_callback(&axradio_cb_receive.cb);
   1E63 90 02 32           8673 	mov	dptr,#_axradio_cb_receive
   1E66 12 44 48           8674 	lcall	_wtimer_add_callback
                    161F   8675 	C$easyax5043.c$1205$3$305 ==.
                           8676 ;	..\COMMON\easyax5043.c:1205: wtimer_remove(&axradio_timer);
   1E69 90 02 89           8677 	mov	dptr,#_axradio_timer
   1E6C 12 4D 58           8678 	lcall	_wtimer_remove
                    1625   8679 	C$easyax5043.c$1207$4$305 ==.
                           8680 ;	..\COMMON\easyax5043.c:1207: uint8_t __autodata idx = axradio_sync_seqnr;
   1E6F 90 00 0F           8681 	mov	dptr,#_axradio_ack_seqnr
   1E72 E0                 8682 	movx	a,@dptr
   1E73 FF                 8683 	mov	r7,a
                    162A   8684 	C$easyax5043.c$1208$4$306 ==.
                           8685 ;	..\COMMON\easyax5043.c:1208: if (idx >= axradio_sync_slave_nrrx)
   1E74 90 56 61           8686 	mov	dptr,#_axradio_sync_slave_nrrx
   1E77 E4                 8687 	clr	a
   1E78 93                 8688 	movc	a,@a+dptr
   1E79 FE                 8689 	mov	r6,a
   1E7A C3                 8690 	clr	c
   1E7B EF                 8691 	mov	a,r7
   1E7C 9E                 8692 	subb	a,r6
   1E7D 40 03              8693 	jc	00158$
                    1635   8694 	C$easyax5043.c$1209$4$306 ==.
                           8695 ;	..\COMMON\easyax5043.c:1209: idx = axradio_sync_slave_nrrx - 1;
   1E7F EE                 8696 	mov	a,r6
   1E80 14                 8697 	dec	a
   1E81 FF                 8698 	mov	r7,a
   1E82                    8699 00158$:
                    1638   8700 	C$easyax5043.c$1210$4$306 ==.
                           8701 ;	..\COMMON\easyax5043.c:1210: axradio_timer.time += axradio_sync_slave_rxwindow[idx];
   1E82 90 02 8D           8702 	mov	dptr,#(_axradio_timer + 0x0004)
   1E85 E0                 8703 	movx	a,@dptr
   1E86 FB                 8704 	mov	r3,a
   1E87 A3                 8705 	inc	dptr
   1E88 E0                 8706 	movx	a,@dptr
   1E89 FC                 8707 	mov	r4,a
   1E8A A3                 8708 	inc	dptr
   1E8B E0                 8709 	movx	a,@dptr
   1E8C FD                 8710 	mov	r5,a
   1E8D A3                 8711 	inc	dptr
   1E8E E0                 8712 	movx	a,@dptr
   1E8F FE                 8713 	mov	r6,a
   1E90 EF                 8714 	mov	a,r7
   1E91 75 F0 04           8715 	mov	b,#0x04
   1E94 A4                 8716 	mul	ab
   1E95 24 6E              8717 	add	a,#_axradio_sync_slave_rxwindow
   1E97 F5 82              8718 	mov	dpl,a
   1E99 74 56              8719 	mov	a,#(_axradio_sync_slave_rxwindow >> 8)
   1E9B 35 F0              8720 	addc	a,b
   1E9D F5 83              8721 	mov	dph,a
   1E9F E4                 8722 	clr	a
   1EA0 93                 8723 	movc	a,@a+dptr
   1EA1 F8                 8724 	mov	r0,a
   1EA2 A3                 8725 	inc	dptr
   1EA3 E4                 8726 	clr	a
   1EA4 93                 8727 	movc	a,@a+dptr
   1EA5 F9                 8728 	mov	r1,a
   1EA6 A3                 8729 	inc	dptr
   1EA7 E4                 8730 	clr	a
   1EA8 93                 8731 	movc	a,@a+dptr
   1EA9 FA                 8732 	mov	r2,a
   1EAA A3                 8733 	inc	dptr
   1EAB E4                 8734 	clr	a
   1EAC 93                 8735 	movc	a,@a+dptr
   1EAD FF                 8736 	mov	r7,a
   1EAE E8                 8737 	mov	a,r0
   1EAF 2B                 8738 	add	a,r3
   1EB0 FB                 8739 	mov	r3,a
   1EB1 E9                 8740 	mov	a,r1
   1EB2 3C                 8741 	addc	a,r4
   1EB3 FC                 8742 	mov	r4,a
   1EB4 EA                 8743 	mov	a,r2
   1EB5 3D                 8744 	addc	a,r5
   1EB6 FD                 8745 	mov	r5,a
   1EB7 EF                 8746 	mov	a,r7
   1EB8 3E                 8747 	addc	a,r6
   1EB9 FE                 8748 	mov	r6,a
   1EBA 90 02 8D           8749 	mov	dptr,#(_axradio_timer + 0x0004)
   1EBD EB                 8750 	mov	a,r3
   1EBE F0                 8751 	movx	@dptr,a
   1EBF A3                 8752 	inc	dptr
   1EC0 EC                 8753 	mov	a,r4
   1EC1 F0                 8754 	movx	@dptr,a
   1EC2 A3                 8755 	inc	dptr
   1EC3 ED                 8756 	mov	a,r5
   1EC4 F0                 8757 	movx	@dptr,a
   1EC5 A3                 8758 	inc	dptr
   1EC6 EE                 8759 	mov	a,r6
   1EC7 F0                 8760 	movx	@dptr,a
                    167E   8761 	C$easyax5043.c$1212$3$305 ==.
                           8762 ;	..\COMMON\easyax5043.c:1212: wtimer0_addabsolute(&axradio_timer);
   1EC8 90 02 89           8763 	mov	dptr,#_axradio_timer
   1ECB 12 45 75           8764 	lcall	_wtimer0_addabsolute
                    1684   8765 	C$easyax5043.c$1213$3$305 ==.
                           8766 ;	..\COMMON\easyax5043.c:1213: break;
   1ECE 02 20 74           8767 	ljmp	00173$
                    1687   8768 	C$easyax5043.c$1215$3$305 ==.
                           8769 ;	..\COMMON\easyax5043.c:1215: case syncstate_slave_rxsfdwindow:
   1ED1                    8770 00159$:
                    1687   8771 	C$easyax5043.c$1216$3$305 ==.
                           8772 ;	..\COMMON\easyax5043.c:1216: if (!(0x0F & (uint8_t)~AX5043_RADIOSTATE)) {
   1ED1 90 40 1C           8773 	mov	dptr,#_AX5043_RADIOSTATE
   1ED4 E0                 8774 	movx	a,@dptr
   1ED5 F4                 8775 	cpl	a
   1ED6 FF                 8776 	mov	r7,a
   1ED7 54 0F              8777 	anl	a,#0x0F
   1ED9 60 02              8778 	jz	00259$
   1EDB 80 4F              8779 	sjmp	00162$
   1EDD                    8780 00259$:
                    1693   8781 	C$easyax5043.c$1217$4$307 ==.
                           8782 ;	..\COMMON\easyax5043.c:1217: axradio_syncstate = syncstate_slave_rxpacket;
   1EDD 90 00 04           8783 	mov	dptr,#_axradio_syncstate
   1EE0 74 0B              8784 	mov	a,#0x0B
   1EE2 F0                 8785 	movx	@dptr,a
                    1699   8786 	C$easyax5043.c$1218$4$307 ==.
                           8787 ;	..\COMMON\easyax5043.c:1218: wtimer_remove(&axradio_timer);
   1EE3 90 02 89           8788 	mov	dptr,#_axradio_timer
   1EE6 12 4D 58           8789 	lcall	_wtimer_remove
                    169F   8790 	C$easyax5043.c$1219$4$307 ==.
                           8791 ;	..\COMMON\easyax5043.c:1219: axradio_timer.time += axradio_sync_slave_rxtimeout;
   1EE9 90 02 8D           8792 	mov	dptr,#(_axradio_timer + 0x0004)
   1EEC E0                 8793 	movx	a,@dptr
   1EED FC                 8794 	mov	r4,a
   1EEE A3                 8795 	inc	dptr
   1EEF E0                 8796 	movx	a,@dptr
   1EF0 FD                 8797 	mov	r5,a
   1EF1 A3                 8798 	inc	dptr
   1EF2 E0                 8799 	movx	a,@dptr
   1EF3 FE                 8800 	mov	r6,a
   1EF4 A3                 8801 	inc	dptr
   1EF5 E0                 8802 	movx	a,@dptr
   1EF6 FF                 8803 	mov	r7,a
   1EF7 90 56 7A           8804 	mov	dptr,#_axradio_sync_slave_rxtimeout
   1EFA E4                 8805 	clr	a
   1EFB 93                 8806 	movc	a,@a+dptr
   1EFC F8                 8807 	mov	r0,a
   1EFD 74 01              8808 	mov	a,#0x01
   1EFF 93                 8809 	movc	a,@a+dptr
   1F00 F9                 8810 	mov	r1,a
   1F01 74 02              8811 	mov	a,#0x02
   1F03 93                 8812 	movc	a,@a+dptr
   1F04 FA                 8813 	mov	r2,a
   1F05 74 03              8814 	mov	a,#0x03
   1F07 93                 8815 	movc	a,@a+dptr
   1F08 FB                 8816 	mov	r3,a
   1F09 E8                 8817 	mov	a,r0
   1F0A 2C                 8818 	add	a,r4
   1F0B FC                 8819 	mov	r4,a
   1F0C E9                 8820 	mov	a,r1
   1F0D 3D                 8821 	addc	a,r5
   1F0E FD                 8822 	mov	r5,a
   1F0F EA                 8823 	mov	a,r2
   1F10 3E                 8824 	addc	a,r6
   1F11 FE                 8825 	mov	r6,a
   1F12 EB                 8826 	mov	a,r3
   1F13 3F                 8827 	addc	a,r7
   1F14 FF                 8828 	mov	r7,a
   1F15 90 02 8D           8829 	mov	dptr,#(_axradio_timer + 0x0004)
   1F18 EC                 8830 	mov	a,r4
   1F19 F0                 8831 	movx	@dptr,a
   1F1A A3                 8832 	inc	dptr
   1F1B ED                 8833 	mov	a,r5
   1F1C F0                 8834 	movx	@dptr,a
   1F1D A3                 8835 	inc	dptr
   1F1E EE                 8836 	mov	a,r6
   1F1F F0                 8837 	movx	@dptr,a
   1F20 A3                 8838 	inc	dptr
   1F21 EF                 8839 	mov	a,r7
   1F22 F0                 8840 	movx	@dptr,a
                    16D9   8841 	C$easyax5043.c$1220$4$307 ==.
                           8842 ;	..\COMMON\easyax5043.c:1220: wtimer0_addabsolute(&axradio_timer);
   1F23 90 02 89           8843 	mov	dptr,#_axradio_timer
   1F26 12 45 75           8844 	lcall	_wtimer0_addabsolute
                    16DF   8845 	C$easyax5043.c$1221$4$307 ==.
                           8846 ;	..\COMMON\easyax5043.c:1221: break;
   1F29 02 20 74           8847 	ljmp	00173$
                    16E2   8848 	C$easyax5043.c$1225$3$305 ==.
                           8849 ;	..\COMMON\easyax5043.c:1225: case syncstate_slave_rxpacket:
   1F2C                    8850 00162$:
                    16E2   8851 	C$easyax5043.c$1226$3$305 ==.
                           8852 ;	..\COMMON\easyax5043.c:1226: ax5043_off();
   1F2C 12 14 86           8853 	lcall	_ax5043_off
                    16E5   8854 	C$easyax5043.c$1227$3$305 ==.
                           8855 ;	..\COMMON\easyax5043.c:1227: if (!axradio_sync_seqnr)
   1F2F 90 00 0F           8856 	mov	dptr,#_axradio_ack_seqnr
   1F32 E0                 8857 	movx	a,@dptr
   1F33 FF                 8858 	mov	r7,a
   1F34 70 06              8859 	jnz	00164$
                    16EC   8860 	C$easyax5043.c$1228$3$305 ==.
                           8861 ;	..\COMMON\easyax5043.c:1228: axradio_sync_seqnr = 1;
   1F36 90 00 0F           8862 	mov	dptr,#_axradio_ack_seqnr
   1F39 74 01              8863 	mov	a,#0x01
   1F3B F0                 8864 	movx	@dptr,a
   1F3C                    8865 00164$:
                    16F2   8866 	C$easyax5043.c$1229$3$305 ==.
                           8867 ;	..\COMMON\easyax5043.c:1229: ++axradio_sync_seqnr;
   1F3C 90 00 0F           8868 	mov	dptr,#_axradio_ack_seqnr
   1F3F E0                 8869 	movx	a,@dptr
   1F40 24 01              8870 	add	a,#0x01
   1F42 F0                 8871 	movx	@dptr,a
                    16F9   8872 	C$easyax5043.c$1230$3$305 ==.
                           8873 ;	..\COMMON\easyax5043.c:1230: update_timeanchor();
   1F43 12 08 4A           8874 	lcall	_update_timeanchor
                    16FC   8875 	C$easyax5043.c$1231$3$305 ==.
                           8876 ;	..\COMMON\easyax5043.c:1231: wtimer_remove_callback(&axradio_cb_receive.cb);
   1F46 90 02 32           8877 	mov	dptr,#_axradio_cb_receive
   1F49 12 50 73           8878 	lcall	_wtimer_remove_callback
                    1702   8879 	C$easyax5043.c$1232$3$305 ==.
                           8880 ;	..\COMMON\easyax5043.c:1232: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1F4C 75 36 00           8881 	mov	_memset_PARM_2,#0x00
   1F4F 75 37 1E           8882 	mov	_memset_PARM_3,#0x1E
   1F52 75 38 00           8883 	mov	(_memset_PARM_3 + 1),#0x00
   1F55 90 02 36           8884 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1F58 75 F0 00           8885 	mov	b,#0x00
   1F5B 12 43 D4           8886 	lcall	_memset
                    1714   8887 	C$easyax5043.c$1233$3$305 ==.
                           8888 ;	..\COMMON\easyax5043.c:1233: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1F5E 90 00 1A           8889 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1F61 E0                 8890 	movx	a,@dptr
   1F62 FC                 8891 	mov	r4,a
   1F63 A3                 8892 	inc	dptr
   1F64 E0                 8893 	movx	a,@dptr
   1F65 FD                 8894 	mov	r5,a
   1F66 A3                 8895 	inc	dptr
   1F67 E0                 8896 	movx	a,@dptr
   1F68 FE                 8897 	mov	r6,a
   1F69 A3                 8898 	inc	dptr
   1F6A E0                 8899 	movx	a,@dptr
   1F6B FF                 8900 	mov	r7,a
   1F6C 90 02 38           8901 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1F6F EC                 8902 	mov	a,r4
   1F70 F0                 8903 	movx	@dptr,a
   1F71 A3                 8904 	inc	dptr
   1F72 ED                 8905 	mov	a,r5
   1F73 F0                 8906 	movx	@dptr,a
   1F74 A3                 8907 	inc	dptr
   1F75 EE                 8908 	mov	a,r6
   1F76 F0                 8909 	movx	@dptr,a
   1F77 A3                 8910 	inc	dptr
   1F78 EF                 8911 	mov	a,r7
   1F79 F0                 8912 	movx	@dptr,a
                    1730   8913 	C$easyax5043.c$1234$3$305 ==.
                           8914 ;	..\COMMON\easyax5043.c:1234: axradio_cb_receive.st.error = AXRADIO_ERR_TIMEOUT;
   1F7A 90 02 37           8915 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1F7D 74 03              8916 	mov	a,#0x03
   1F7F F0                 8917 	movx	@dptr,a
                    1736   8918 	C$easyax5043.c$1235$3$305 ==.
                           8919 ;	..\COMMON\easyax5043.c:1235: if (axradio_sync_seqnr <= axradio_sync_slave_resyncloss) {
   1F80 90 00 0F           8920 	mov	dptr,#_axradio_ack_seqnr
   1F83 E0                 8921 	movx	a,@dptr
   1F84 FF                 8922 	mov	r7,a
   1F85 90 56 60           8923 	mov	dptr,#_axradio_sync_slave_resyncloss
   1F88 E4                 8924 	clr	a
   1F89 93                 8925 	movc	a,@a+dptr
   1F8A FE                 8926 	mov	r6,a
   1F8B C3                 8927 	clr	c
   1F8C 9F                 8928 	subb	a,r7
   1F8D 40 57              8929 	jc	00168$
                    1745   8930 	C$easyax5043.c$1236$4$308 ==.
                           8931 ;	..\COMMON\easyax5043.c:1236: wtimer_add_callback(&axradio_cb_receive.cb);
   1F8F 90 02 32           8932 	mov	dptr,#_axradio_cb_receive
   1F92 12 44 48           8933 	lcall	_wtimer_add_callback
                    174B   8934 	C$easyax5043.c$1237$4$308 ==.
                           8935 ;	..\COMMON\easyax5043.c:1237: axradio_sync_slave_nextperiod();
   1F95 12 17 DD           8936 	lcall	_axradio_sync_slave_nextperiod
                    174E   8937 	C$easyax5043.c$1238$4$308 ==.
                           8938 ;	..\COMMON\easyax5043.c:1238: axradio_syncstate = syncstate_slave_rxidle;
   1F98 90 00 04           8939 	mov	dptr,#_axradio_syncstate
   1F9B 74 08              8940 	mov	a,#0x08
   1F9D F0                 8941 	movx	@dptr,a
                    1754   8942 	C$easyax5043.c$1239$4$308 ==.
                           8943 ;	..\COMMON\easyax5043.c:1239: wtimer_remove(&axradio_timer);
   1F9E 90 02 89           8944 	mov	dptr,#_axradio_timer
   1FA1 12 4D 58           8945 	lcall	_wtimer_remove
                    175A   8946 	C$easyax5043.c$1241$5$308 ==.
                           8947 ;	..\COMMON\easyax5043.c:1241: uint8_t __autodata idx = axradio_sync_seqnr;
   1FA4 90 00 0F           8948 	mov	dptr,#_axradio_ack_seqnr
   1FA7 E0                 8949 	movx	a,@dptr
   1FA8 FF                 8950 	mov	r7,a
                    175F   8951 	C$easyax5043.c$1242$5$309 ==.
                           8952 ;	..\COMMON\easyax5043.c:1242: if (idx >= axradio_sync_slave_nrrx)
   1FA9 90 56 61           8953 	mov	dptr,#_axradio_sync_slave_nrrx
   1FAC E4                 8954 	clr	a
   1FAD 93                 8955 	movc	a,@a+dptr
   1FAE FE                 8956 	mov	r6,a
   1FAF C3                 8957 	clr	c
   1FB0 EF                 8958 	mov	a,r7
   1FB1 9E                 8959 	subb	a,r6
   1FB2 40 03              8960 	jc	00166$
                    176A   8961 	C$easyax5043.c$1243$5$309 ==.
                           8962 ;	..\COMMON\easyax5043.c:1243: idx = axradio_sync_slave_nrrx - 1;
   1FB4 EE                 8963 	mov	a,r6
   1FB5 14                 8964 	dec	a
   1FB6 FF                 8965 	mov	r7,a
   1FB7                    8966 00166$:
                    176D   8967 	C$easyax5043.c$1244$5$309 ==.
                           8968 ;	..\COMMON\easyax5043.c:1244: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[idx]);
   1FB7 EF                 8969 	mov	a,r7
   1FB8 75 F0 04           8970 	mov	b,#0x04
   1FBB A4                 8971 	mul	ab
   1FBC 24 62              8972 	add	a,#_axradio_sync_slave_rxadvance
   1FBE F5 82              8973 	mov	dpl,a
   1FC0 74 56              8974 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   1FC2 35 F0              8975 	addc	a,b
   1FC4 F5 83              8976 	mov	dph,a
   1FC6 E4                 8977 	clr	a
   1FC7 93                 8978 	movc	a,@a+dptr
   1FC8 FC                 8979 	mov	r4,a
   1FC9 A3                 8980 	inc	dptr
   1FCA E4                 8981 	clr	a
   1FCB 93                 8982 	movc	a,@a+dptr
   1FCC FD                 8983 	mov	r5,a
   1FCD A3                 8984 	inc	dptr
   1FCE E4                 8985 	clr	a
   1FCF 93                 8986 	movc	a,@a+dptr
   1FD0 FE                 8987 	mov	r6,a
   1FD1 A3                 8988 	inc	dptr
   1FD2 E4                 8989 	clr	a
   1FD3 93                 8990 	movc	a,@a+dptr
   1FD4 8C 82              8991 	mov	dpl,r4
   1FD6 8D 83              8992 	mov	dph,r5
   1FD8 8E F0              8993 	mov	b,r6
   1FDA 12 16 77           8994 	lcall	_axradio_sync_settimeradv
                    1793   8995 	C$easyax5043.c$1246$4$308 ==.
                           8996 ;	..\COMMON\easyax5043.c:1246: wtimer0_addabsolute(&axradio_timer);
   1FDD 90 02 89           8997 	mov	dptr,#_axradio_timer
   1FE0 12 45 75           8998 	lcall	_wtimer0_addabsolute
                    1799   8999 	C$easyax5043.c$1247$4$308 ==.
                           9000 ;	..\COMMON\easyax5043.c:1247: break;
   1FE3 02 20 74           9001 	ljmp	00173$
   1FE6                    9002 00168$:
                    179C   9003 	C$easyax5043.c$1249$3$305 ==.
                           9004 ;	..\COMMON\easyax5043.c:1249: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1FE6 90 02 37           9005 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1FE9 74 09              9006 	mov	a,#0x09
   1FEB F0                 9007 	movx	@dptr,a
                    17A2   9008 	C$easyax5043.c$1250$3$305 ==.
                           9009 ;	..\COMMON\easyax5043.c:1250: wtimer_add_callback(&axradio_cb_receive.cb);
   1FEC 90 02 32           9010 	mov	dptr,#_axradio_cb_receive
   1FEF 12 44 48           9011 	lcall	_wtimer_add_callback
                    17A8   9012 	C$easyax5043.c$1251$3$305 ==.
                           9013 ;	..\COMMON\easyax5043.c:1251: ax5043_receiver_on_continuous();
   1FF2 12 13 41           9014 	lcall	_ax5043_receiver_on_continuous
                    17AB   9015 	C$easyax5043.c$1252$3$305 ==.
                           9016 ;	..\COMMON\easyax5043.c:1252: axradio_syncstate = syncstate_slave_synchunt;
   1FF5 90 00 04           9017 	mov	dptr,#_axradio_syncstate
   1FF8 74 06              9018 	mov	a,#0x06
   1FFA F0                 9019 	movx	@dptr,a
                    17B1   9020 	C$easyax5043.c$1253$3$305 ==.
                           9021 ;	..\COMMON\easyax5043.c:1253: wtimer_remove(&axradio_timer);
   1FFB 90 02 89           9022 	mov	dptr,#_axradio_timer
   1FFE 12 4D 58           9023 	lcall	_wtimer_remove
                    17B7   9024 	C$easyax5043.c$1254$3$305 ==.
                           9025 ;	..\COMMON\easyax5043.c:1254: axradio_timer.time = axradio_sync_slave_syncwindow;
   2001 90 56 52           9026 	mov	dptr,#_axradio_sync_slave_syncwindow
   2004 E4                 9027 	clr	a
   2005 93                 9028 	movc	a,@a+dptr
   2006 FC                 9029 	mov	r4,a
   2007 74 01              9030 	mov	a,#0x01
   2009 93                 9031 	movc	a,@a+dptr
   200A FD                 9032 	mov	r5,a
   200B 74 02              9033 	mov	a,#0x02
   200D 93                 9034 	movc	a,@a+dptr
   200E FE                 9035 	mov	r6,a
   200F 74 03              9036 	mov	a,#0x03
   2011 93                 9037 	movc	a,@a+dptr
   2012 FF                 9038 	mov	r7,a
   2013 90 02 8D           9039 	mov	dptr,#(_axradio_timer + 0x0004)
   2016 EC                 9040 	mov	a,r4
   2017 F0                 9041 	movx	@dptr,a
   2018 A3                 9042 	inc	dptr
   2019 ED                 9043 	mov	a,r5
   201A F0                 9044 	movx	@dptr,a
   201B A3                 9045 	inc	dptr
   201C EE                 9046 	mov	a,r6
   201D F0                 9047 	movx	@dptr,a
   201E A3                 9048 	inc	dptr
   201F EF                 9049 	mov	a,r7
   2020 F0                 9050 	movx	@dptr,a
                    17D7   9051 	C$easyax5043.c$1255$3$305 ==.
                           9052 ;	..\COMMON\easyax5043.c:1255: wtimer0_addrelative(&axradio_timer);
   2021 90 02 89           9053 	mov	dptr,#_axradio_timer
   2024 12 44 62           9054 	lcall	_wtimer0_addrelative
                    17DD   9055 	C$easyax5043.c$1256$3$305 ==.
                           9056 ;	..\COMMON\easyax5043.c:1256: axradio_sync_time = axradio_timer.time;
   2027 90 02 8D           9057 	mov	dptr,#(_axradio_timer + 0x0004)
   202A E0                 9058 	movx	a,@dptr
   202B FC                 9059 	mov	r4,a
   202C A3                 9060 	inc	dptr
   202D E0                 9061 	movx	a,@dptr
   202E FD                 9062 	mov	r5,a
   202F A3                 9063 	inc	dptr
   2030 E0                 9064 	movx	a,@dptr
   2031 FE                 9065 	mov	r6,a
   2032 A3                 9066 	inc	dptr
   2033 E0                 9067 	movx	a,@dptr
   2034 FF                 9068 	mov	r7,a
   2035 90 00 10           9069 	mov	dptr,#_axradio_sync_time
   2038 EC                 9070 	mov	a,r4
   2039 F0                 9071 	movx	@dptr,a
   203A A3                 9072 	inc	dptr
   203B ED                 9073 	mov	a,r5
   203C F0                 9074 	movx	@dptr,a
   203D A3                 9075 	inc	dptr
   203E EE                 9076 	mov	a,r6
   203F F0                 9077 	movx	@dptr,a
   2040 A3                 9078 	inc	dptr
   2041 EF                 9079 	mov	a,r7
   2042 F0                 9080 	movx	@dptr,a
                    17F9   9081 	C$easyax5043.c$1257$3$305 ==.
                           9082 ;	..\COMMON\easyax5043.c:1257: break;
                    17F9   9083 	C$easyax5043.c$1259$3$305 ==.
                           9084 ;	..\COMMON\easyax5043.c:1259: case syncstate_slave_rxack:
   2043 80 2F              9085 	sjmp	00173$
   2045                    9086 00169$:
                    17FB   9087 	C$easyax5043.c$1260$3$305 ==.
                           9088 ;	..\COMMON\easyax5043.c:1260: axradio_syncstate = syncstate_slave_rxidle;
   2045 90 00 04           9089 	mov	dptr,#_axradio_syncstate
   2048 74 08              9090 	mov	a,#0x08
   204A F0                 9091 	movx	@dptr,a
                    1801   9092 	C$easyax5043.c$1261$3$305 ==.
                           9093 ;	..\COMMON\easyax5043.c:1261: wtimer_remove(&axradio_timer);
   204B 90 02 89           9094 	mov	dptr,#_axradio_timer
   204E 12 4D 58           9095 	lcall	_wtimer_remove
                    1807   9096 	C$easyax5043.c$1262$3$305 ==.
                           9097 ;	..\COMMON\easyax5043.c:1262: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[1]);
   2051 90 56 66           9098 	mov	dptr,#(_axradio_sync_slave_rxadvance + 0x0004)
   2054 E4                 9099 	clr	a
   2055 93                 9100 	movc	a,@a+dptr
   2056 FC                 9101 	mov	r4,a
   2057 A3                 9102 	inc	dptr
   2058 E4                 9103 	clr	a
   2059 93                 9104 	movc	a,@a+dptr
   205A FD                 9105 	mov	r5,a
   205B A3                 9106 	inc	dptr
   205C E4                 9107 	clr	a
   205D 93                 9108 	movc	a,@a+dptr
   205E FE                 9109 	mov	r6,a
   205F A3                 9110 	inc	dptr
   2060 E4                 9111 	clr	a
   2061 93                 9112 	movc	a,@a+dptr
   2062 8C 82              9113 	mov	dpl,r4
   2064 8D 83              9114 	mov	dph,r5
   2066 8E F0              9115 	mov	b,r6
   2068 12 16 77           9116 	lcall	_axradio_sync_settimeradv
                    1821   9117 	C$easyax5043.c$1263$3$305 ==.
                           9118 ;	..\COMMON\easyax5043.c:1263: wtimer0_addabsolute(&axradio_timer);
   206B 90 02 89           9119 	mov	dptr,#_axradio_timer
   206E 12 45 75           9120 	lcall	_wtimer0_addabsolute
                    1827   9121 	C$easyax5043.c$1264$3$305 ==.
                           9122 ;	..\COMMON\easyax5043.c:1264: goto transmitack;
   2071 02 1A 3D           9123 	ljmp	00131$
                    182A   9124 	C$easyax5043.c$1268$2$297 ==.
                           9125 ;	..\COMMON\easyax5043.c:1268: default:
   2074                    9126 00171$:
                    182A   9127 	C$easyax5043.c$1270$1$296 ==.
                           9128 ;	..\COMMON\easyax5043.c:1270: }
   2074                    9129 00173$:
                    182A   9130 	C$easyax5043.c$1271$1$296 ==.
                    182A   9131 	XFeasyax5043$axradio_timer_callback$0$0 ==.
   2074 22                 9132 	ret
                           9133 ;------------------------------------------------------------
                           9134 ;Allocation info for local variables in function 'axradio_callback_fwd'
                           9135 ;------------------------------------------------------------
                           9136 ;desc                      Allocated to registers r6 r7 
                           9137 ;------------------------------------------------------------
                    182B   9138 	Feasyax5043$axradio_callback_fwd$0$0 ==.
                    182B   9139 	C$easyax5043.c$1273$1$296 ==.
                           9140 ;	..\COMMON\easyax5043.c:1273: static __reentrantb void axradio_callback_fwd(struct wtimer_callback __xdata *desc) __reentrant
                           9141 ;	-----------------------------------------
                           9142 ;	 function axradio_callback_fwd
                           9143 ;	-----------------------------------------
   2075                    9144 _axradio_callback_fwd:
   2075 AE 82              9145 	mov	r6,dpl
   2077 AF 83              9146 	mov	r7,dph
                    182F   9147 	C$easyax5043.c$1275$1$311 ==.
                           9148 ;	..\COMMON\easyax5043.c:1275: axradio_statuschange((struct axradio_status __xdata *)(desc + 1));
   2079 74 04              9149 	mov	a,#0x04
   207B 2E                 9150 	add	a,r6
   207C FE                 9151 	mov	r6,a
   207D E4                 9152 	clr	a
   207E 3F                 9153 	addc	a,r7
   207F FF                 9154 	mov	r7,a
   2080 8E 82              9155 	mov	dpl,r6
   2082 8F 83              9156 	mov	dph,r7
   2084 12 38 57           9157 	lcall	_axradio_statuschange
                    183D   9158 	C$easyax5043.c$1276$1$311 ==.
                    183D   9159 	XFeasyax5043$axradio_callback_fwd$0$0 ==.
   2087 22                 9160 	ret
                           9161 ;------------------------------------------------------------
                           9162 ;Allocation info for local variables in function 'axradio_receive_callback_fwd'
                           9163 ;------------------------------------------------------------
                           9164 ;desc                      Allocated to registers 
                           9165 ;len                       Allocated to registers r6 r7 
                           9166 ;len                       Allocated to registers r6 r7 
                           9167 ;seqnr                     Allocated to registers r6 
                           9168 ;len_byte                  Allocated to registers r6 
                           9169 ;trxst                     Allocated to registers r6 
                           9170 ;iesave                    Allocated to registers r7 
                           9171 ;------------------------------------------------------------
                    183E   9172 	Feasyax5043$axradio_receive_callback_fwd$0$0 ==.
                    183E   9173 	C$easyax5043.c$1278$1$311 ==.
                           9174 ;	..\COMMON\easyax5043.c:1278: static void axradio_receive_callback_fwd(struct wtimer_callback __xdata *desc)
                           9175 ;	-----------------------------------------
                           9176 ;	 function axradio_receive_callback_fwd
                           9177 ;	-----------------------------------------
   2088                    9178 _axradio_receive_callback_fwd:
                    183E   9179 	C$easyax5043.c$1288$1$313 ==.
                           9180 ;	..\COMMON\easyax5043.c:1288: if (axradio_cb_receive.st.error != AXRADIO_ERR_NOERROR) {
   2088 90 02 37           9181 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   208B E0                 9182 	movx	a,@dptr
   208C 60 09              9183 	jz	00102$
                    1844   9184 	C$easyax5043.c$1289$2$314 ==.
                           9185 ;	..\COMMON\easyax5043.c:1289: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   208E 90 02 36           9186 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2091 12 38 57           9187 	lcall	_axradio_statuschange
                    184A   9188 	C$easyax5043.c$1290$2$314 ==.
                           9189 ;	..\COMMON\easyax5043.c:1290: return;
   2094 02 25 9B           9190 	ljmp	00180$
   2097                    9191 00102$:
                    184D   9192 	C$easyax5043.c$1292$1$313 ==.
                           9193 ;	..\COMMON\easyax5043.c:1292: if (axradio_phy_pn9 && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   2097 90 56 0D           9194 	mov	dptr,#_axradio_phy_pn9
   209A E4                 9195 	clr	a
   209B 93                 9196 	movc	a,@a+dptr
   209C FF                 9197 	mov	r7,a
   209D 60 5C              9198 	jz	00104$
   209F 74 1C              9199 	mov	a,#0x1C
   20A1 B5 0A 02           9200 	cjne	a,_axradio_mode,00260$
   20A4 80 55              9201 	sjmp	00104$
   20A6                    9202 00260$:
                    185C   9203 	C$easyax5043.c$1293$1$313 ==.
                           9204 ;	..\COMMON\easyax5043.c:1293: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   20A6 74 1D              9205 	mov	a,#0x1D
   20A8 B5 0A 02           9206 	cjne	a,_axradio_mode,00261$
   20AB 80 4E              9207 	sjmp	00104$
   20AD                    9208 00261$:
                    1863   9209 	C$easyax5043.c$1294$1$313 ==.
                           9210 ;	..\COMMON\easyax5043.c:1294: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   20AD 74 1E              9211 	mov	a,#0x1E
   20AF B5 0A 02           9212 	cjne	a,_axradio_mode,00262$
   20B2 80 47              9213 	sjmp	00104$
   20B4                    9214 00262$:
                    186A   9215 	C$easyax5043.c$1295$2$315 ==.
                           9216 ;	..\COMMON\easyax5043.c:1295: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   20B4 90 02 52           9217 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   20B7 E0                 9218 	movx	a,@dptr
   20B8 FE                 9219 	mov	r6,a
   20B9 A3                 9220 	inc	dptr
   20BA E0                 9221 	movx	a,@dptr
   20BB FF                 9222 	mov	r7,a
                    1872   9223 	C$easyax5043.c$1296$2$315 ==.
                           9224 ;	..\COMMON\easyax5043.c:1296: len += axradio_framing_maclen;
   20BC 90 56 2E           9225 	mov	dptr,#_axradio_framing_maclen
   20BF E4                 9226 	clr	a
   20C0 93                 9227 	movc	a,@a+dptr
   20C1 7C 00              9228 	mov	r4,#0x00
   20C3 2E                 9229 	add	a,r6
   20C4 FE                 9230 	mov	r6,a
   20C5 EC                 9231 	mov	a,r4
   20C6 3F                 9232 	addc	a,r7
   20C7 FF                 9233 	mov	r7,a
                    187E   9234 	C$easyax5043.c$1297$2$315 ==.
                           9235 ;	..\COMMON\easyax5043.c:1297: pn9_buffer((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len, 0x1ff, -(AX5043_ENCODING & 0x01));
   20C8 90 40 11           9236 	mov	dptr,#_AX5043_ENCODING
   20CB E0                 9237 	movx	a,@dptr
   20CC FD                 9238 	mov	r5,a
   20CD 53 05 01           9239 	anl	ar5,#0x01
   20D0 C3                 9240 	clr	c
   20D1 E4                 9241 	clr	a
   20D2 9D                 9242 	subb	a,r5
   20D3 FD                 9243 	mov	r5,a
   20D4 90 02 4E           9244 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   20D7 E0                 9245 	movx	a,@dptr
   20D8 FB                 9246 	mov	r3,a
   20D9 A3                 9247 	inc	dptr
   20DA E0                 9248 	movx	a,@dptr
   20DB FC                 9249 	mov	r4,a
   20DC 7A 00              9250 	mov	r2,#0x00
   20DE C0 05              9251 	push	ar5
   20E0 74 FF              9252 	mov	a,#0xFF
   20E2 C0 E0              9253 	push	acc
   20E4 74 01              9254 	mov	a,#0x01
   20E6 C0 E0              9255 	push	acc
   20E8 C0 06              9256 	push	ar6
   20EA C0 07              9257 	push	ar7
   20EC 8B 82              9258 	mov	dpl,r3
   20EE 8C 83              9259 	mov	dph,r4
   20F0 8A F0              9260 	mov	b,r2
   20F2 12 45 C8           9261 	lcall	_pn9_buffer
   20F5 E5 81              9262 	mov	a,sp
   20F7 24 FB              9263 	add	a,#0xfb
   20F9 F5 81              9264 	mov	sp,a
   20FB                    9265 00104$:
                    18B1   9266 	C$easyax5043.c$1299$1$313 ==.
                           9267 ;	..\COMMON\easyax5043.c:1299: if (axradio_framing_swcrclen && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   20FB 90 56 35           9268 	mov	dptr,#_axradio_framing_swcrclen
   20FE E4                 9269 	clr	a
   20FF 93                 9270 	movc	a,@a+dptr
   2100 FF                 9271 	mov	r7,a
   2101 60 67              9272 	jz	00111$
   2103 74 1C              9273 	mov	a,#0x1C
   2105 B5 0A 02           9274 	cjne	a,_axradio_mode,00264$
   2108 80 60              9275 	sjmp	00111$
   210A                    9276 00264$:
                    18C0   9277 	C$easyax5043.c$1300$1$313 ==.
                           9278 ;	..\COMMON\easyax5043.c:1300: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   210A 74 1D              9279 	mov	a,#0x1D
   210C B5 0A 02           9280 	cjne	a,_axradio_mode,00265$
   210F 80 59              9281 	sjmp	00111$
   2111                    9282 00265$:
                    18C7   9283 	C$easyax5043.c$1301$1$313 ==.
                           9284 ;	..\COMMON\easyax5043.c:1301: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   2111 74 1E              9285 	mov	a,#0x1E
   2113 B5 0A 02           9286 	cjne	a,_axradio_mode,00266$
   2116 80 52              9287 	sjmp	00111$
   2118                    9288 00266$:
                    18CE   9289 	C$easyax5043.c$1302$2$316 ==.
                           9290 ;	..\COMMON\easyax5043.c:1302: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   2118 90 02 52           9291 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   211B E0                 9292 	movx	a,@dptr
   211C FE                 9293 	mov	r6,a
   211D A3                 9294 	inc	dptr
   211E E0                 9295 	movx	a,@dptr
   211F FF                 9296 	mov	r7,a
                    18D6   9297 	C$easyax5043.c$1303$2$316 ==.
                           9298 ;	..\COMMON\easyax5043.c:1303: len += axradio_framing_maclen;
   2120 90 56 2E           9299 	mov	dptr,#_axradio_framing_maclen
   2123 E4                 9300 	clr	a
   2124 93                 9301 	movc	a,@a+dptr
   2125 7C 00              9302 	mov	r4,#0x00
   2127 2E                 9303 	add	a,r6
   2128 FE                 9304 	mov	r6,a
   2129 EC                 9305 	mov	a,r4
   212A 3F                 9306 	addc	a,r7
   212B FF                 9307 	mov	r7,a
                    18E2   9308 	C$easyax5043.c$1304$2$316 ==.
                           9309 ;	..\COMMON\easyax5043.c:1304: if (!axradio_framing_check_crc((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len)) {
   212C 90 02 4E           9310 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   212F E0                 9311 	movx	a,@dptr
   2130 FC                 9312 	mov	r4,a
   2131 A3                 9313 	inc	dptr
   2132 E0                 9314 	movx	a,@dptr
   2133 FD                 9315 	mov	r5,a
   2134 C0 06              9316 	push	ar6
   2136 C0 07              9317 	push	ar7
   2138 8C 82              9318 	mov	dpl,r4
   213A 8D 83              9319 	mov	dph,r5
   213C 12 06 42           9320 	lcall	_axradio_framing_check_crc
   213F AF 82              9321 	mov	r7,dpl
   2141 15 81              9322 	dec	sp
   2143 15 81              9323 	dec	sp
   2145 EF                 9324 	mov	a,r7
   2146 70 03              9325 	jnz	00267$
   2148 02 25 4F           9326 	ljmp	00163$
   214B                    9327 00267$:
                    1901   9328 	C$easyax5043.c$1308$2$316 ==.
                           9329 ;	..\COMMON\easyax5043.c:1308: axradio_cb_receive.st.rx.pktlen -= axradio_framing_swcrclen; // drop crc
   214B 90 02 52           9330 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   214E E0                 9331 	movx	a,@dptr
   214F FE                 9332 	mov	r6,a
   2150 A3                 9333 	inc	dptr
   2151 E0                 9334 	movx	a,@dptr
   2152 FF                 9335 	mov	r7,a
   2153 90 56 35           9336 	mov	dptr,#_axradio_framing_swcrclen
   2156 E4                 9337 	clr	a
   2157 93                 9338 	movc	a,@a+dptr
   2158 FD                 9339 	mov	r5,a
   2159 7C 00              9340 	mov	r4,#0x00
   215B EE                 9341 	mov	a,r6
   215C C3                 9342 	clr	c
   215D 9D                 9343 	subb	a,r5
   215E FE                 9344 	mov	r6,a
   215F EF                 9345 	mov	a,r7
   2160 9C                 9346 	subb	a,r4
   2161 FF                 9347 	mov	r7,a
   2162 90 02 52           9348 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2165 EE                 9349 	mov	a,r6
   2166 F0                 9350 	movx	@dptr,a
   2167 A3                 9351 	inc	dptr
   2168 EF                 9352 	mov	a,r7
   2169 F0                 9353 	movx	@dptr,a
   216A                    9354 00111$:
                    1920   9355 	C$easyax5043.c$1312$1$313 ==.
                           9356 ;	..\COMMON\easyax5043.c:1312: axradio_cb_receive.st.rx.phy.timeoffset = 0;
   216A 90 02 42           9357 	mov	dptr,#(_axradio_cb_receive + 0x0010)
                    1923   9358 	C$easyax5043.c$1313$1$313 ==.
                           9359 ;	..\COMMON\easyax5043.c:1313: axradio_cb_receive.st.rx.phy.period = 0;
   216D E4                 9360 	clr	a
   216E F0                 9361 	movx	@dptr,a
   216F A3                 9362 	inc	dptr
   2170 F0                 9363 	movx	@dptr,a
   2171 90 02 44           9364 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   2174 F0                 9365 	movx	@dptr,a
   2175 A3                 9366 	inc	dptr
   2176 E4                 9367 	clr	a
   2177 F0                 9368 	movx	@dptr,a
                    192E   9369 	C$easyax5043.c$1314$1$313 ==.
                           9370 ;	..\COMMON\easyax5043.c:1314: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   2178 74 12              9371 	mov	a,#0x12
   217A B5 0A 02           9372 	cjne	a,_axradio_mode,00268$
   217D 80 0C              9373 	sjmp	00117$
   217F                    9374 00268$:
                    1935   9375 	C$easyax5043.c$1315$1$313 ==.
                           9376 ;	..\COMMON\easyax5043.c:1315: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   217F 74 13              9377 	mov	a,#0x13
   2181 B5 0A 02           9378 	cjne	a,_axradio_mode,00269$
   2184 80 05              9379 	sjmp	00117$
   2186                    9380 00269$:
                    193C   9381 	C$easyax5043.c$1316$1$313 ==.
                           9382 ;	..\COMMON\easyax5043.c:1316: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   2186 74 21              9383 	mov	a,#0x21
   2188 B5 0A 60           9384 	cjne	a,_axradio_mode,00118$
   218B                    9385 00117$:
                    1941   9386 	C$easyax5043.c$1317$2$318 ==.
                           9387 ;	..\COMMON\easyax5043.c:1317: ax5043_off();
   218B 12 14 86           9388 	lcall	_ax5043_off
                    1944   9389 	C$easyax5043.c$1318$2$318 ==.
                           9390 ;	..\COMMON\easyax5043.c:1318: wtimer_remove(&axradio_timer);
   218E 90 02 89           9391 	mov	dptr,#_axradio_timer
   2191 12 4D 58           9392 	lcall	_wtimer_remove
                    194A   9393 	C$easyax5043.c$1319$2$318 ==.
                           9394 ;	..\COMMON\easyax5043.c:1319: if (axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   2194 74 21              9395 	mov	a,#0x21
   2196 B5 0A 26           9396 	cjne	a,_axradio_mode,00116$
                    194F   9397 	C$easyax5043.c$1320$3$319 ==.
                           9398 ;	..\COMMON\easyax5043.c:1320: axradio_syncstate = syncstate_master_normal;
   2199 90 00 04           9399 	mov	dptr,#_axradio_syncstate
   219C 74 03              9400 	mov	a,#0x03
   219E F0                 9401 	movx	@dptr,a
                    1955   9402 	C$easyax5043.c$1321$3$319 ==.
                           9403 ;	..\COMMON\easyax5043.c:1321: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   219F 90 56 4E           9404 	mov	dptr,#_axradio_sync_xoscstartup
   21A2 E4                 9405 	clr	a
   21A3 93                 9406 	movc	a,@a+dptr
   21A4 FC                 9407 	mov	r4,a
   21A5 74 01              9408 	mov	a,#0x01
   21A7 93                 9409 	movc	a,@a+dptr
   21A8 FD                 9410 	mov	r5,a
   21A9 74 02              9411 	mov	a,#0x02
   21AB 93                 9412 	movc	a,@a+dptr
   21AC FE                 9413 	mov	r6,a
   21AD 74 03              9414 	mov	a,#0x03
   21AF 93                 9415 	movc	a,@a+dptr
   21B0 8C 82              9416 	mov	dpl,r4
   21B2 8D 83              9417 	mov	dph,r5
   21B4 8E F0              9418 	mov	b,r6
   21B6 12 16 77           9419 	lcall	_axradio_sync_settimeradv
                    196F   9420 	C$easyax5043.c$1322$3$319 ==.
                           9421 ;	..\COMMON\easyax5043.c:1322: wtimer0_addabsolute(&axradio_timer);
   21B9 90 02 89           9422 	mov	dptr,#_axradio_timer
   21BC 12 45 75           9423 	lcall	_wtimer0_addabsolute
   21BF                    9424 00116$:
                    1975   9425 	C$easyax5043.c$1324$2$318 ==.
                           9426 ;	..\COMMON\easyax5043.c:1324: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   21BF 90 02 75           9427 	mov	dptr,#_axradio_cb_transmitend
   21C2 12 50 73           9428 	lcall	_wtimer_remove_callback
                    197B   9429 	C$easyax5043.c$1325$2$318 ==.
                           9430 ;	..\COMMON\easyax5043.c:1325: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   21C5 90 02 7A           9431 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   21C8 E4                 9432 	clr	a
   21C9 F0                 9433 	movx	@dptr,a
                    1980   9434 	C$easyax5043.c$1326$2$318 ==.
                           9435 ;	..\COMMON\easyax5043.c:1326: axradio_cb_transmitend.st.time.t = radio_read24((uint16_t)&AX5043_TIMER2);
   21CA 90 40 59           9436 	mov	dptr,#_AX5043_TIMER2
   21CD 12 45 A1           9437 	lcall	_radio_read24
   21D0 AC 82              9438 	mov	r4,dpl
   21D2 AD 83              9439 	mov	r5,dph
   21D4 AE F0              9440 	mov	r6,b
   21D6 FF                 9441 	mov	r7,a
   21D7 90 02 7B           9442 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   21DA EC                 9443 	mov	a,r4
   21DB F0                 9444 	movx	@dptr,a
   21DC A3                 9445 	inc	dptr
   21DD ED                 9446 	mov	a,r5
   21DE F0                 9447 	movx	@dptr,a
   21DF A3                 9448 	inc	dptr
   21E0 EE                 9449 	mov	a,r6
   21E1 F0                 9450 	movx	@dptr,a
   21E2 A3                 9451 	inc	dptr
   21E3 EF                 9452 	mov	a,r7
   21E4 F0                 9453 	movx	@dptr,a
                    199B   9454 	C$easyax5043.c$1327$2$318 ==.
                           9455 ;	..\COMMON\easyax5043.c:1327: wtimer_add_callback(&axradio_cb_transmitend.cb);
   21E5 90 02 75           9456 	mov	dptr,#_axradio_cb_transmitend
   21E8 12 44 48           9457 	lcall	_wtimer_add_callback
   21EB                    9458 00118$:
                    19A1   9459 	C$easyax5043.c$1329$1$313 ==.
                           9460 ;	..\COMMON\easyax5043.c:1329: if (axradio_framing_destaddrpos != 0xff)
   21EB 90 56 30           9461 	mov	dptr,#_axradio_framing_destaddrpos
   21EE E4                 9462 	clr	a
   21EF 93                 9463 	movc	a,@a+dptr
   21F0 FF                 9464 	mov	r7,a
   21F1 BF FF 02           9465 	cjne	r7,#0xFF,00274$
   21F4 80 29              9466 	sjmp	00122$
   21F6                    9467 00274$:
                    19AC   9468 	C$easyax5043.c$1330$1$313 ==.
                           9469 ;	..\COMMON\easyax5043.c:1330: memcpy_xdata(&axradio_cb_receive.st.rx.mac.localaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_destaddrpos], axradio_framing_addrlen);
   21F6 90 02 4E           9470 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   21F9 E0                 9471 	movx	a,@dptr
   21FA FD                 9472 	mov	r5,a
   21FB A3                 9473 	inc	dptr
   21FC E0                 9474 	movx	a,@dptr
   21FD FE                 9475 	mov	r6,a
   21FE EF                 9476 	mov	a,r7
   21FF 2D                 9477 	add	a,r5
   2200 FF                 9478 	mov	r7,a
   2201 E4                 9479 	clr	a
   2202 3E                 9480 	addc	a,r6
   2203 FC                 9481 	mov	r4,a
   2204 8F 36              9482 	mov	_memcpy_PARM_2,r7
   2206 8C 37              9483 	mov	(_memcpy_PARM_2 + 1),r4
   2208 75 38 00           9484 	mov	(_memcpy_PARM_2 + 2),#0x00
   220B 90 56 2F           9485 	mov	dptr,#_axradio_framing_addrlen
   220E E4                 9486 	clr	a
   220F 93                 9487 	movc	a,@a+dptr
   2210 FF                 9488 	mov	r7,a
   2211 8F 39              9489 	mov	_memcpy_PARM_3,r7
   2213 75 3A 00           9490 	mov	(_memcpy_PARM_3 + 1),#0x00
   2216 90 02 4A           9491 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   2219 75 F0 00           9492 	mov	b,#0x00
   221C 12 43 F3           9493 	lcall	_memcpy
   221F                    9494 00122$:
                    19D5   9495 	C$easyax5043.c$1331$1$313 ==.
                           9496 ;	..\COMMON\easyax5043.c:1331: if (axradio_framing_sourceaddrpos != 0xff)
   221F 90 56 31           9497 	mov	dptr,#_axradio_framing_sourceaddrpos
   2222 E4                 9498 	clr	a
   2223 93                 9499 	movc	a,@a+dptr
   2224 FF                 9500 	mov	r7,a
   2225 BF FF 02           9501 	cjne	r7,#0xFF,00275$
   2228 80 29              9502 	sjmp	00124$
   222A                    9503 00275$:
                    19E0   9504 	C$easyax5043.c$1332$1$313 ==.
                           9505 ;	..\COMMON\easyax5043.c:1332: memcpy_xdata(&axradio_cb_receive.st.rx.mac.remoteaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_sourceaddrpos], axradio_framing_addrlen);
   222A 90 02 4E           9506 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   222D E0                 9507 	movx	a,@dptr
   222E FD                 9508 	mov	r5,a
   222F A3                 9509 	inc	dptr
   2230 E0                 9510 	movx	a,@dptr
   2231 FE                 9511 	mov	r6,a
   2232 EF                 9512 	mov	a,r7
   2233 2D                 9513 	add	a,r5
   2234 FF                 9514 	mov	r7,a
   2235 E4                 9515 	clr	a
   2236 3E                 9516 	addc	a,r6
   2237 FC                 9517 	mov	r4,a
   2238 8F 36              9518 	mov	_memcpy_PARM_2,r7
   223A 8C 37              9519 	mov	(_memcpy_PARM_2 + 1),r4
   223C 75 38 00           9520 	mov	(_memcpy_PARM_2 + 2),#0x00
   223F 90 56 2F           9521 	mov	dptr,#_axradio_framing_addrlen
   2242 E4                 9522 	clr	a
   2243 93                 9523 	movc	a,@a+dptr
   2244 FF                 9524 	mov	r7,a
   2245 8F 39              9525 	mov	_memcpy_PARM_3,r7
   2247 75 3A 00           9526 	mov	(_memcpy_PARM_3 + 1),#0x00
   224A 90 02 46           9527 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   224D 75 F0 00           9528 	mov	b,#0x00
   2250 12 43 F3           9529 	lcall	_memcpy
   2253                    9530 00124$:
                    1A09   9531 	C$easyax5043.c$1333$1$313 ==.
                           9532 ;	..\COMMON\easyax5043.c:1333: if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   2253 74 1A              9533 	mov	a,#0x1A
   2255 B5 0A 02           9534 	cjne	a,_axradio_mode,00276$
   2258 80 11              9535 	sjmp	00146$
   225A                    9536 00276$:
                    1A10   9537 	C$easyax5043.c$1334$1$313 ==.
                           9538 ;	..\COMMON\easyax5043.c:1334: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE ||
   225A 74 1B              9539 	mov	a,#0x1B
   225C B5 0A 02           9540 	cjne	a,_axradio_mode,00277$
   225F 80 0A              9541 	sjmp	00146$
   2261                    9542 00277$:
                    1A17   9543 	C$easyax5043.c$1335$1$313 ==.
                           9544 ;	..\COMMON\easyax5043.c:1335: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2261 74 23              9545 	mov	a,#0x23
   2263 B5 0A 02           9546 	cjne	a,_axradio_mode,00278$
   2266 80 03              9547 	sjmp	00279$
   2268                    9548 00278$:
   2268 02 24 65           9549 	ljmp	00147$
   226B                    9550 00279$:
   226B                    9551 00146$:
                    1A21   9552 	C$easyax5043.c$1336$2$320 ==.
                           9553 ;	..\COMMON\easyax5043.c:1336: axradio_ack_count = 0;
   226B 90 00 0E           9554 	mov	dptr,#_axradio_ack_count
   226E E4                 9555 	clr	a
   226F F0                 9556 	movx	@dptr,a
                    1A26   9557 	C$easyax5043.c$1337$2$320 ==.
                           9558 ;	..\COMMON\easyax5043.c:1337: axradio_txbuffer_len = axradio_framing_maclen + axradio_framing_minpayloadlen;
   2270 90 56 2E           9559 	mov	dptr,#_axradio_framing_maclen
   2273 E4                 9560 	clr	a
   2274 93                 9561 	movc	a,@a+dptr
   2275 FF                 9562 	mov	r7,a
   2276 FD                 9563 	mov	r5,a
   2277 7E 00              9564 	mov	r6,#0x00
   2279 90 56 47           9565 	mov	dptr,#_axradio_framing_minpayloadlen
   227C E4                 9566 	clr	a
   227D 93                 9567 	movc	a,@a+dptr
   227E FC                 9568 	mov	r4,a
   227F 7B 00              9569 	mov	r3,#0x00
   2281 90 00 05           9570 	mov	dptr,#_axradio_txbuffer_len
   2284 EC                 9571 	mov	a,r4
   2285 2D                 9572 	add	a,r5
   2286 F0                 9573 	movx	@dptr,a
   2287 EB                 9574 	mov	a,r3
   2288 3E                 9575 	addc	a,r6
   2289 A3                 9576 	inc	dptr
   228A F0                 9577 	movx	@dptr,a
                    1A41   9578 	C$easyax5043.c$1338$2$320 ==.
                           9579 ;	..\COMMON\easyax5043.c:1338: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   228B 8F 37              9580 	mov	_memset_PARM_3,r7
   228D 75 38 00           9581 	mov	(_memset_PARM_3 + 1),#0x00
   2290 75 36 00           9582 	mov	_memset_PARM_2,#0x00
   2293 90 00 2A           9583 	mov	dptr,#_axradio_txbuffer
   2296 75 F0 00           9584 	mov	b,#0x00
   2299 12 43 D4           9585 	lcall	_memset
                    1A52   9586 	C$easyax5043.c$1339$2$320 ==.
                           9587 ;	..\COMMON\easyax5043.c:1339: if (axradio_framing_ack_seqnrpos != 0xff) {
   229C 90 56 46           9588 	mov	dptr,#_axradio_framing_ack_seqnrpos
   229F E4                 9589 	clr	a
   22A0 93                 9590 	movc	a,@a+dptr
   22A1 FF                 9591 	mov	r7,a
   22A2 BF FF 02           9592 	cjne	r7,#0xFF,00280$
   22A5 80 35              9593 	sjmp	00129$
   22A7                    9594 00280$:
                    1A5D   9595 	C$easyax5043.c$1340$3$321 ==.
                           9596 ;	..\COMMON\easyax5043.c:1340: uint8_t seqnr = axradio_cb_receive.st.rx.mac.raw[axradio_framing_ack_seqnrpos];
   22A7 90 02 4E           9597 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   22AA E0                 9598 	movx	a,@dptr
   22AB FD                 9599 	mov	r5,a
   22AC A3                 9600 	inc	dptr
   22AD E0                 9601 	movx	a,@dptr
   22AE FE                 9602 	mov	r6,a
   22AF EF                 9603 	mov	a,r7
   22B0 2D                 9604 	add	a,r5
   22B1 F5 82              9605 	mov	dpl,a
   22B3 E4                 9606 	clr	a
   22B4 3E                 9607 	addc	a,r6
   22B5 F5 83              9608 	mov	dph,a
   22B7 E0                 9609 	movx	a,@dptr
   22B8 FE                 9610 	mov	r6,a
                    1A6F   9611 	C$easyax5043.c$1341$3$321 ==.
                           9612 ;	..\COMMON\easyax5043.c:1341: axradio_txbuffer[axradio_framing_ack_seqnrpos] = seqnr;
   22B9 EF                 9613 	mov	a,r7
   22BA 24 2A              9614 	add	a,#_axradio_txbuffer
   22BC F5 82              9615 	mov	dpl,a
   22BE E4                 9616 	clr	a
   22BF 34 00              9617 	addc	a,#(_axradio_txbuffer >> 8)
   22C1 F5 83              9618 	mov	dph,a
   22C3 EE                 9619 	mov	a,r6
   22C4 F0                 9620 	movx	@dptr,a
                    1A7B   9621 	C$easyax5043.c$1342$3$321 ==.
                           9622 ;	..\COMMON\easyax5043.c:1342: if (axradio_ack_seqnr != seqnr)
   22C5 90 00 0F           9623 	mov	dptr,#_axradio_ack_seqnr
   22C8 E0                 9624 	movx	a,@dptr
   22C9 FF                 9625 	mov	r7,a
   22CA B5 06 02           9626 	cjne	a,ar6,00281$
   22CD 80 07              9627 	sjmp	00126$
   22CF                    9628 00281$:
                    1A85   9629 	C$easyax5043.c$1343$3$321 ==.
                           9630 ;	..\COMMON\easyax5043.c:1343: axradio_ack_seqnr = seqnr;
   22CF 90 00 0F           9631 	mov	dptr,#_axradio_ack_seqnr
   22D2 EE                 9632 	mov	a,r6
   22D3 F0                 9633 	movx	@dptr,a
   22D4 80 06              9634 	sjmp	00129$
   22D6                    9635 00126$:
                    1A8C   9636 	C$easyax5043.c$1345$3$321 ==.
                           9637 ;	..\COMMON\easyax5043.c:1345: axradio_cb_receive.st.error = AXRADIO_ERR_RETRANSMISSION;
   22D6 90 02 37           9638 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   22D9 74 08              9639 	mov	a,#0x08
   22DB F0                 9640 	movx	@dptr,a
   22DC                    9641 00129$:
                    1A92   9642 	C$easyax5043.c$1347$2$320 ==.
                           9643 ;	..\COMMON\easyax5043.c:1347: if (axradio_framing_destaddrpos != 0xff) {
   22DC 90 56 30           9644 	mov	dptr,#_axradio_framing_destaddrpos
   22DF E4                 9645 	clr	a
   22E0 93                 9646 	movc	a,@a+dptr
   22E1 FF                 9647 	mov	r7,a
   22E2 BF FF 02           9648 	cjne	r7,#0xFF,00282$
   22E5 80 5B              9649 	sjmp	00134$
   22E7                    9650 00282$:
                    1A9D   9651 	C$easyax5043.c$1348$3$322 ==.
                           9652 ;	..\COMMON\easyax5043.c:1348: if (axradio_framing_sourceaddrpos != 0xff)
   22E7 90 56 31           9653 	mov	dptr,#_axradio_framing_sourceaddrpos
   22EA E4                 9654 	clr	a
   22EB 93                 9655 	movc	a,@a+dptr
   22EC FE                 9656 	mov	r6,a
   22ED BE FF 02           9657 	cjne	r6,#0xFF,00283$
   22F0 80 29              9658 	sjmp	00131$
   22F2                    9659 00283$:
                    1AA8   9660 	C$easyax5043.c$1349$3$322 ==.
                           9661 ;	..\COMMON\easyax5043.c:1349: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_cb_receive.st.rx.mac.remoteaddr, axradio_framing_addrlen);
   22F2 EF                 9662 	mov	a,r7
   22F3 24 2A              9663 	add	a,#_axradio_txbuffer
   22F5 FD                 9664 	mov	r5,a
   22F6 E4                 9665 	clr	a
   22F7 34 00              9666 	addc	a,#(_axradio_txbuffer >> 8)
   22F9 FE                 9667 	mov	r6,a
   22FA 7C 00              9668 	mov	r4,#0x00
   22FC 75 36 46           9669 	mov	_memcpy_PARM_2,#(_axradio_cb_receive + 0x0014)
   22FF 75 37 02           9670 	mov	(_memcpy_PARM_2 + 1),#((_axradio_cb_receive + 0x0014) >> 8)
   2302 75 38 00           9671 	mov	(_memcpy_PARM_2 + 2),#0x00
   2305 90 56 2F           9672 	mov	dptr,#_axradio_framing_addrlen
   2308 E4                 9673 	clr	a
   2309 93                 9674 	movc	a,@a+dptr
   230A FB                 9675 	mov	r3,a
   230B 8B 39              9676 	mov	_memcpy_PARM_3,r3
   230D 75 3A 00           9677 	mov	(_memcpy_PARM_3 + 1),#0x00
   2310 8D 82              9678 	mov	dpl,r5
   2312 8E 83              9679 	mov	dph,r6
   2314 8C F0              9680 	mov	b,r4
   2316 12 43 F3           9681 	lcall	_memcpy
   2319 80 27              9682 	sjmp	00134$
   231B                    9683 00131$:
                    1AD1   9684 	C$easyax5043.c$1351$3$322 ==.
                           9685 ;	..\COMMON\easyax5043.c:1351: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_default_remoteaddr, axradio_framing_addrlen);
   231B EF                 9686 	mov	a,r7
   231C 24 2A              9687 	add	a,#_axradio_txbuffer
   231E FF                 9688 	mov	r7,a
   231F E4                 9689 	clr	a
   2320 34 00              9690 	addc	a,#(_axradio_txbuffer >> 8)
   2322 FE                 9691 	mov	r6,a
   2323 7D 00              9692 	mov	r5,#0x00
   2325 75 36 26           9693 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   2328 75 37 00           9694 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   232B 75 38 00           9695 	mov	(_memcpy_PARM_2 + 2),#0x00
   232E 90 56 2F           9696 	mov	dptr,#_axradio_framing_addrlen
   2331 E4                 9697 	clr	a
   2332 93                 9698 	movc	a,@a+dptr
   2333 FC                 9699 	mov	r4,a
   2334 8C 39              9700 	mov	_memcpy_PARM_3,r4
   2336 75 3A 00           9701 	mov	(_memcpy_PARM_3 + 1),#0x00
   2339 8F 82              9702 	mov	dpl,r7
   233B 8E 83              9703 	mov	dph,r6
   233D 8D F0              9704 	mov	b,r5
   233F 12 43 F3           9705 	lcall	_memcpy
   2342                    9706 00134$:
                    1AF8   9707 	C$easyax5043.c$1353$2$320 ==.
                           9708 ;	..\COMMON\easyax5043.c:1353: if (axradio_framing_sourceaddrpos != 0xff)
   2342 90 56 31           9709 	mov	dptr,#_axradio_framing_sourceaddrpos
   2345 E4                 9710 	clr	a
   2346 93                 9711 	movc	a,@a+dptr
   2347 FF                 9712 	mov	r7,a
   2348 BF FF 02           9713 	cjne	r7,#0xFF,00284$
   234B 80 27              9714 	sjmp	00136$
   234D                    9715 00284$:
                    1B03   9716 	C$easyax5043.c$1354$2$320 ==.
                           9717 ;	..\COMMON\easyax5043.c:1354: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   234D EF                 9718 	mov	a,r7
   234E 24 2A              9719 	add	a,#_axradio_txbuffer
   2350 FF                 9720 	mov	r7,a
   2351 E4                 9721 	clr	a
   2352 34 00              9722 	addc	a,#(_axradio_txbuffer >> 8)
   2354 FE                 9723 	mov	r6,a
   2355 7D 00              9724 	mov	r5,#0x00
   2357 75 36 1E           9725 	mov	_memcpy_PARM_2,#_axradio_localaddr
   235A 75 37 00           9726 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   235D 75 38 00           9727 	mov	(_memcpy_PARM_2 + 2),#0x00
   2360 90 56 2F           9728 	mov	dptr,#_axradio_framing_addrlen
   2363 E4                 9729 	clr	a
   2364 93                 9730 	movc	a,@a+dptr
   2365 FC                 9731 	mov	r4,a
   2366 8C 39              9732 	mov	_memcpy_PARM_3,r4
   2368 75 3A 00           9733 	mov	(_memcpy_PARM_3 + 1),#0x00
   236B 8F 82              9734 	mov	dpl,r7
   236D 8E 83              9735 	mov	dph,r6
   236F 8D F0              9736 	mov	b,r5
   2371 12 43 F3           9737 	lcall	_memcpy
   2374                    9738 00136$:
                    1B2A   9739 	C$easyax5043.c$1355$2$320 ==.
                           9740 ;	..\COMMON\easyax5043.c:1355: if (axradio_framing_lenmask) {
   2374 90 56 34           9741 	mov	dptr,#_axradio_framing_lenmask
   2377 E4                 9742 	clr	a
   2378 93                 9743 	movc	a,@a+dptr
   2379 FF                 9744 	mov	r7,a
   237A 60 30              9745 	jz	00138$
                    1B32   9746 	C$easyax5043.c$1356$3$323 ==.
                           9747 ;	..\COMMON\easyax5043.c:1356: uint8_t len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   237C 90 00 05           9748 	mov	dptr,#_axradio_txbuffer_len
   237F E0                 9749 	movx	a,@dptr
   2380 FD                 9750 	mov	r5,a
   2381 A3                 9751 	inc	dptr
   2382 E0                 9752 	movx	a,@dptr
   2383 90 56 33           9753 	mov	dptr,#_axradio_framing_lenoffs
   2386 E4                 9754 	clr	a
   2387 93                 9755 	movc	a,@a+dptr
   2388 FE                 9756 	mov	r6,a
   2389 ED                 9757 	mov	a,r5
   238A C3                 9758 	clr	c
   238B 9E                 9759 	subb	a,r6
   238C 5F                 9760 	anl	a,r7
   238D FE                 9761 	mov	r6,a
                    1B44   9762 	C$easyax5043.c$1357$3$323 ==.
                           9763 ;	..\COMMON\easyax5043.c:1357: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   238E 90 56 32           9764 	mov	dptr,#_axradio_framing_lenpos
   2391 E4                 9765 	clr	a
   2392 93                 9766 	movc	a,@a+dptr
   2393 24 2A              9767 	add	a,#_axradio_txbuffer
   2395 FD                 9768 	mov	r5,a
   2396 E4                 9769 	clr	a
   2397 34 00              9770 	addc	a,#(_axradio_txbuffer >> 8)
   2399 FC                 9771 	mov	r4,a
   239A 8D 82              9772 	mov	dpl,r5
   239C 8C 83              9773 	mov	dph,r4
   239E E0                 9774 	movx	a,@dptr
   239F FB                 9775 	mov	r3,a
   23A0 EF                 9776 	mov	a,r7
   23A1 F4                 9777 	cpl	a
   23A2 FF                 9778 	mov	r7,a
   23A3 5B                 9779 	anl	a,r3
   23A4 42 06              9780 	orl	ar6,a
   23A6 8D 82              9781 	mov	dpl,r5
   23A8 8C 83              9782 	mov	dph,r4
   23AA EE                 9783 	mov	a,r6
   23AB F0                 9784 	movx	@dptr,a
   23AC                    9785 00138$:
                    1B62   9786 	C$easyax5043.c$1359$2$320 ==.
                           9787 ;	..\COMMON\easyax5043.c:1359: if (axradio_framing_swcrclen) {
   23AC 90 56 35           9788 	mov	dptr,#_axradio_framing_swcrclen
   23AF E4                 9789 	clr	a
   23B0 93                 9790 	movc	a,@a+dptr
   23B1 FF                 9791 	mov	r7,a
   23B2 60 2E              9792 	jz	00140$
                    1B6A   9793 	C$easyax5043.c$1360$3$324 ==.
                           9794 ;	..\COMMON\easyax5043.c:1360: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   23B4 90 00 05           9795 	mov	dptr,#_axradio_txbuffer_len
   23B7 E0                 9796 	movx	a,@dptr
   23B8 C0 E0              9797 	push	acc
   23BA A3                 9798 	inc	dptr
   23BB E0                 9799 	movx	a,@dptr
   23BC C0 E0              9800 	push	acc
   23BE 90 00 2A           9801 	mov	dptr,#_axradio_txbuffer
   23C1 12 06 7F           9802 	lcall	_axradio_framing_append_crc
   23C4 15 81              9803 	dec	sp
   23C6 15 81              9804 	dec	sp
                    1B7E   9805 	C$easyax5043.c$1361$3$324 ==.
                           9806 ;	..\COMMON\easyax5043.c:1361: axradio_txbuffer_len += axradio_framing_swcrclen;
   23C8 90 56 35           9807 	mov	dptr,#_axradio_framing_swcrclen
   23CB E4                 9808 	clr	a
   23CC 93                 9809 	movc	a,@a+dptr
   23CD FF                 9810 	mov	r7,a
   23CE 7E 00              9811 	mov	r6,#0x00
   23D0 90 00 05           9812 	mov	dptr,#_axradio_txbuffer_len
   23D3 E0                 9813 	movx	a,@dptr
   23D4 FC                 9814 	mov	r4,a
   23D5 A3                 9815 	inc	dptr
   23D6 E0                 9816 	movx	a,@dptr
   23D7 FD                 9817 	mov	r5,a
   23D8 90 00 05           9818 	mov	dptr,#_axradio_txbuffer_len
   23DB EF                 9819 	mov	a,r7
   23DC 2C                 9820 	add	a,r4
   23DD F0                 9821 	movx	@dptr,a
   23DE EE                 9822 	mov	a,r6
   23DF 3D                 9823 	addc	a,r5
   23E0 A3                 9824 	inc	dptr
   23E1 F0                 9825 	movx	@dptr,a
   23E2                    9826 00140$:
                    1B98   9827 	C$easyax5043.c$1363$2$320 ==.
                           9828 ;	..\COMMON\easyax5043.c:1363: if (axradio_phy_pn9) {
   23E2 90 56 0D           9829 	mov	dptr,#_axradio_phy_pn9
   23E5 E4                 9830 	clr	a
   23E6 93                 9831 	movc	a,@a+dptr
   23E7 FF                 9832 	mov	r7,a
   23E8 60 2F              9833 	jz	00142$
                    1BA0   9834 	C$easyax5043.c$1364$3$325 ==.
                           9835 ;	..\COMMON\easyax5043.c:1364: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   23EA 90 40 11           9836 	mov	dptr,#_AX5043_ENCODING
   23ED E0                 9837 	movx	a,@dptr
   23EE FF                 9838 	mov	r7,a
   23EF 53 07 01           9839 	anl	ar7,#0x01
   23F2 C3                 9840 	clr	c
   23F3 E4                 9841 	clr	a
   23F4 9F                 9842 	subb	a,r7
   23F5 FF                 9843 	mov	r7,a
   23F6 C0 07              9844 	push	ar7
   23F8 74 FF              9845 	mov	a,#0xFF
   23FA C0 E0              9846 	push	acc
   23FC 74 01              9847 	mov	a,#0x01
   23FE C0 E0              9848 	push	acc
   2400 90 00 05           9849 	mov	dptr,#_axradio_txbuffer_len
   2403 E0                 9850 	movx	a,@dptr
   2404 C0 E0              9851 	push	acc
   2406 A3                 9852 	inc	dptr
   2407 E0                 9853 	movx	a,@dptr
   2408 C0 E0              9854 	push	acc
   240A 90 00 2A           9855 	mov	dptr,#_axradio_txbuffer
   240D 75 F0 00           9856 	mov	b,#0x00
   2410 12 45 C8           9857 	lcall	_pn9_buffer
   2413 E5 81              9858 	mov	a,sp
   2415 24 FB              9859 	add	a,#0xfb
   2417 F5 81              9860 	mov	sp,a
   2419                    9861 00142$:
                    1BCF   9862 	C$easyax5043.c$1366$2$320 ==.
                           9863 ;	..\COMMON\easyax5043.c:1366: AX5043_IRQMASK1 = 0x00;
   2419 90 40 06           9864 	mov	dptr,#_AX5043_IRQMASK1
                    1BD2   9865 	C$easyax5043.c$1367$2$320 ==.
                           9866 ;	..\COMMON\easyax5043.c:1367: AX5043_IRQMASK0 = 0x00;
   241C E4                 9867 	clr	a
   241D F0                 9868 	movx	@dptr,a
   241E 90 40 07           9869 	mov	dptr,#_AX5043_IRQMASK0
   2421 F0                 9870 	movx	@dptr,a
                    1BD8   9871 	C$easyax5043.c$1368$2$320 ==.
                           9872 ;	..\COMMON\easyax5043.c:1368: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   2422 90 40 02           9873 	mov	dptr,#_AX5043_PWRMODE
   2425 74 05              9874 	mov	a,#0x05
   2427 F0                 9875 	movx	@dptr,a
                    1BDE   9876 	C$easyax5043.c$1369$2$320 ==.
                           9877 ;	..\COMMON\easyax5043.c:1369: AX5043_FIFOSTAT = 3;
   2428 90 40 28           9878 	mov	dptr,#_AX5043_FIFOSTAT
   242B 74 03              9879 	mov	a,#0x03
   242D F0                 9880 	movx	@dptr,a
                    1BE4   9881 	C$easyax5043.c$1370$2$320 ==.
                           9882 ;	..\COMMON\easyax5043.c:1370: axradio_trxstate = trxstate_tx_longpreamble; // ensure that trxstate != off, otherwise we would prematurely enable the receiver, see below
   242E 75 0B 0A           9883 	mov	_axradio_trxstate,#0x0A
                    1BE7   9884 	C$easyax5043.c$1371$2$320 ==.
                           9885 ;	..\COMMON\easyax5043.c:1371: while (AX5043_POWSTAT & 0x08);
   2431                    9886 00143$:
   2431 90 40 03           9887 	mov	dptr,#_AX5043_POWSTAT
   2434 E0                 9888 	movx	a,@dptr
   2435 FF                 9889 	mov	r7,a
   2436 20 E3 F8           9890 	jb	acc.3,00143$
                    1BEF   9891 	C$easyax5043.c$1372$2$320 ==.
                           9892 ;	..\COMMON\easyax5043.c:1372: wtimer_remove(&axradio_timer);
   2439 90 02 89           9893 	mov	dptr,#_axradio_timer
   243C 12 4D 58           9894 	lcall	_wtimer_remove
                    1BF5   9895 	C$easyax5043.c$1373$2$320 ==.
                           9896 ;	..\COMMON\easyax5043.c:1373: axradio_timer.time = axradio_framing_ack_delay;
   243F 90 56 41           9897 	mov	dptr,#_axradio_framing_ack_delay
   2442 E4                 9898 	clr	a
   2443 93                 9899 	movc	a,@a+dptr
   2444 FC                 9900 	mov	r4,a
   2445 74 01              9901 	mov	a,#0x01
   2447 93                 9902 	movc	a,@a+dptr
   2448 FD                 9903 	mov	r5,a
   2449 74 02              9904 	mov	a,#0x02
   244B 93                 9905 	movc	a,@a+dptr
   244C FE                 9906 	mov	r6,a
   244D 74 03              9907 	mov	a,#0x03
   244F 93                 9908 	movc	a,@a+dptr
   2450 FF                 9909 	mov	r7,a
   2451 90 02 8D           9910 	mov	dptr,#(_axradio_timer + 0x0004)
   2454 EC                 9911 	mov	a,r4
   2455 F0                 9912 	movx	@dptr,a
   2456 A3                 9913 	inc	dptr
   2457 ED                 9914 	mov	a,r5
   2458 F0                 9915 	movx	@dptr,a
   2459 A3                 9916 	inc	dptr
   245A EE                 9917 	mov	a,r6
   245B F0                 9918 	movx	@dptr,a
   245C A3                 9919 	inc	dptr
   245D EF                 9920 	mov	a,r7
   245E F0                 9921 	movx	@dptr,a
                    1C15   9922 	C$easyax5043.c$1374$2$320 ==.
                           9923 ;	..\COMMON\easyax5043.c:1374: wtimer1_addrelative(&axradio_timer);
   245F 90 02 89           9924 	mov	dptr,#_axradio_timer
   2462 12 44 A9           9925 	lcall	_wtimer1_addrelative
   2465                    9926 00147$:
                    1C1B   9927 	C$easyax5043.c$1376$1$313 ==.
                           9928 ;	..\COMMON\easyax5043.c:1376: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   2465 74 22              9929 	mov	a,#0x22
   2467 B5 0A 02           9930 	cjne	a,_axradio_mode,00289$
   246A 80 0A              9931 	sjmp	00160$
   246C                    9932 00289$:
                    1C22   9933 	C$easyax5043.c$1377$1$313 ==.
                           9934 ;	..\COMMON\easyax5043.c:1377: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   246C 74 23              9935 	mov	a,#0x23
   246E B5 0A 02           9936 	cjne	a,_axradio_mode,00290$
   2471 80 03              9937 	sjmp	00291$
   2473                    9938 00290$:
   2473 02 25 49           9939 	ljmp	00161$
   2476                    9940 00291$:
   2476                    9941 00160$:
                    1C2C   9942 	C$easyax5043.c$1378$2$326 ==.
                           9943 ;	..\COMMON\easyax5043.c:1378: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   2476 74 23              9944 	mov	a,#0x23
   2478 B5 0A 02           9945 	cjne	a,_axradio_mode,00292$
   247B 80 03              9946 	sjmp	00151$
   247D                    9947 00292$:
                    1C33   9948 	C$easyax5043.c$1379$2$326 ==.
                           9949 ;	..\COMMON\easyax5043.c:1379: ax5043_off();
   247D 12 14 86           9950 	lcall	_ax5043_off
   2480                    9951 00151$:
                    1C36   9952 	C$easyax5043.c$1380$2$326 ==.
                           9953 ;	..\COMMON\easyax5043.c:1380: switch (axradio_syncstate) {
   2480 90 00 04           9954 	mov	dptr,#_axradio_syncstate
   2483 E0                 9955 	movx	a,@dptr
   2484 FF                 9956 	mov	r7,a
   2485 BF 08 02           9957 	cjne	r7,#0x08,00293$
   2488 80 45              9958 	sjmp	00155$
   248A                    9959 00293$:
   248A BF 0A 02           9960 	cjne	r7,#0x0A,00294$
   248D 80 40              9961 	sjmp	00155$
   248F                    9962 00294$:
   248F BF 0B 02           9963 	cjne	r7,#0x0B,00295$
   2492 80 3B              9964 	sjmp	00155$
   2494                    9965 00295$:
                    1C4A   9966 	C$easyax5043.c$1384$3$327 ==.
                           9967 ;	..\COMMON\easyax5043.c:1384: axradio_sync_time = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t);
   2494 90 02 38           9968 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   2497 E0                 9969 	movx	a,@dptr
   2498 FC                 9970 	mov	r4,a
   2499 A3                 9971 	inc	dptr
   249A E0                 9972 	movx	a,@dptr
   249B FD                 9973 	mov	r5,a
   249C A3                 9974 	inc	dptr
   249D E0                 9975 	movx	a,@dptr
   249E FE                 9976 	mov	r6,a
   249F A3                 9977 	inc	dptr
   24A0 E0                 9978 	movx	a,@dptr
   24A1 8C 82              9979 	mov	dpl,r4
   24A3 8D 83              9980 	mov	dph,r5
   24A5 8E F0              9981 	mov	b,r6
   24A7 12 08 8C           9982 	lcall	_axradio_conv_time_totimer0
   24AA AC 82              9983 	mov	r4,dpl
   24AC AD 83              9984 	mov	r5,dph
   24AE AE F0              9985 	mov	r6,b
   24B0 FF                 9986 	mov	r7,a
   24B1 90 00 10           9987 	mov	dptr,#_axradio_sync_time
   24B4 EC                 9988 	mov	a,r4
   24B5 F0                 9989 	movx	@dptr,a
   24B6 A3                 9990 	inc	dptr
   24B7 ED                 9991 	mov	a,r5
   24B8 F0                 9992 	movx	@dptr,a
   24B9 A3                 9993 	inc	dptr
   24BA EE                 9994 	mov	a,r6
   24BB F0                 9995 	movx	@dptr,a
   24BC A3                 9996 	inc	dptr
   24BD EF                 9997 	mov	a,r7
   24BE F0                 9998 	movx	@dptr,a
                    1C75   9999 	C$easyax5043.c$1385$3$327 ==.
                          10000 ;	..\COMMON\easyax5043.c:1385: axradio_sync_periodcorr = -32768;
   24BF 90 00 14          10001 	mov	dptr,#_axradio_sync_periodcorr
   24C2 E4                10002 	clr	a
   24C3 F0                10003 	movx	@dptr,a
   24C4 A3                10004 	inc	dptr
   24C5 74 80             10005 	mov	a,#0x80
   24C7 F0                10006 	movx	@dptr,a
                    1C7E  10007 	C$easyax5043.c$1386$3$327 ==.
                          10008 ;	..\COMMON\easyax5043.c:1386: axradio_sync_seqnr = 0;
   24C8 90 00 0F          10009 	mov	dptr,#_axradio_ack_seqnr
   24CB E4                10010 	clr	a
   24CC F0                10011 	movx	@dptr,a
                    1C83  10012 	C$easyax5043.c$1387$3$327 ==.
                          10013 ;	..\COMMON\easyax5043.c:1387: break;
                    1C83  10014 	C$easyax5043.c$1391$3$327 ==.
                          10015 ;	..\COMMON\easyax5043.c:1391: case syncstate_slave_rxpacket:
   24CD 80 2D             10016 	sjmp	00156$
   24CF                   10017 00155$:
                    1C85  10018 	C$easyax5043.c$1392$3$327 ==.
                          10019 ;	..\COMMON\easyax5043.c:1392: axradio_sync_adjustperiodcorr();
   24CF 12 16 B6          10020 	lcall	_axradio_sync_adjustperiodcorr
                    1C88  10021 	C$easyax5043.c$1393$3$327 ==.
                          10022 ;	..\COMMON\easyax5043.c:1393: axradio_cb_receive.st.rx.phy.period = axradio_sync_periodcorr >> SYNC_K1;
   24D2 90 00 14          10023 	mov	dptr,#_axradio_sync_periodcorr
   24D5 E0                10024 	movx	a,@dptr
   24D6 FE                10025 	mov	r6,a
   24D7 A3                10026 	inc	dptr
   24D8 E0                10027 	movx	a,@dptr
   24D9 FF                10028 	mov	r7,a
   24DA C4                10029 	swap	a
   24DB 03                10030 	rr	a
   24DC CE                10031 	xch	a,r6
   24DD C4                10032 	swap	a
   24DE 03                10033 	rr	a
   24DF 54 07             10034 	anl	a,#0x07
   24E1 6E                10035 	xrl	a,r6
   24E2 CE                10036 	xch	a,r6
   24E3 54 07             10037 	anl	a,#0x07
   24E5 CE                10038 	xch	a,r6
   24E6 6E                10039 	xrl	a,r6
   24E7 CE                10040 	xch	a,r6
   24E8 30 E2 02          10041 	jnb	acc.2,00296$
   24EB 44 F8             10042 	orl	a,#0xF8
   24ED                   10043 00296$:
   24ED FF                10044 	mov	r7,a
   24EE 90 02 44          10045 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   24F1 EE                10046 	mov	a,r6
   24F2 F0                10047 	movx	@dptr,a
   24F3 A3                10048 	inc	dptr
   24F4 EF                10049 	mov	a,r7
   24F5 F0                10050 	movx	@dptr,a
                    1CAC  10051 	C$easyax5043.c$1394$3$327 ==.
                          10052 ;	..\COMMON\easyax5043.c:1394: axradio_sync_seqnr = 1;
   24F6 90 00 0F          10053 	mov	dptr,#_axradio_ack_seqnr
   24F9 74 01             10054 	mov	a,#0x01
   24FB F0                10055 	movx	@dptr,a
                    1CB2  10056 	C$easyax5043.c$1396$2$326 ==.
                          10057 ;	..\COMMON\easyax5043.c:1396: };
   24FC                   10058 00156$:
                    1CB2  10059 	C$easyax5043.c$1397$2$326 ==.
                          10060 ;	..\COMMON\easyax5043.c:1397: axradio_sync_slave_nextperiod();
   24FC 12 17 DD          10061 	lcall	_axradio_sync_slave_nextperiod
                    1CB5  10062 	C$easyax5043.c$1398$2$326 ==.
                          10063 ;	..\COMMON\easyax5043.c:1398: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE) {
   24FF 74 23             10064 	mov	a,#0x23
   2501 B5 0A 02          10065 	cjne	a,_axradio_mode,00297$
   2504 80 3D             10066 	sjmp	00158$
   2506                   10067 00297$:
                    1CBC  10068 	C$easyax5043.c$1399$3$328 ==.
                          10069 ;	..\COMMON\easyax5043.c:1399: axradio_syncstate = syncstate_slave_rxidle;
   2506 90 00 04          10070 	mov	dptr,#_axradio_syncstate
   2509 74 08             10071 	mov	a,#0x08
   250B F0                10072 	movx	@dptr,a
                    1CC2  10073 	C$easyax5043.c$1400$3$328 ==.
                          10074 ;	..\COMMON\easyax5043.c:1400: wtimer_remove(&axradio_timer);
   250C 90 02 89          10075 	mov	dptr,#_axradio_timer
   250F 12 4D 58          10076 	lcall	_wtimer_remove
                    1CC8  10077 	C$easyax5043.c$1401$3$328 ==.
                          10078 ;	..\COMMON\easyax5043.c:1401: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[axradio_sync_seqnr]);
   2512 90 00 0F          10079 	mov	dptr,#_axradio_ack_seqnr
   2515 E0                10080 	movx	a,@dptr
   2516 75 F0 04          10081 	mov	b,#0x04
   2519 A4                10082 	mul	ab
   251A 24 62             10083 	add	a,#_axradio_sync_slave_rxadvance
   251C F5 82             10084 	mov	dpl,a
   251E 74 56             10085 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   2520 35 F0             10086 	addc	a,b
   2522 F5 83             10087 	mov	dph,a
   2524 E4                10088 	clr	a
   2525 93                10089 	movc	a,@a+dptr
   2526 FC                10090 	mov	r4,a
   2527 A3                10091 	inc	dptr
   2528 E4                10092 	clr	a
   2529 93                10093 	movc	a,@a+dptr
   252A FD                10094 	mov	r5,a
   252B A3                10095 	inc	dptr
   252C E4                10096 	clr	a
   252D 93                10097 	movc	a,@a+dptr
   252E FE                10098 	mov	r6,a
   252F A3                10099 	inc	dptr
   2530 E4                10100 	clr	a
   2531 93                10101 	movc	a,@a+dptr
   2532 8C 82             10102 	mov	dpl,r4
   2534 8D 83             10103 	mov	dph,r5
   2536 8E F0             10104 	mov	b,r6
   2538 12 16 77          10105 	lcall	_axradio_sync_settimeradv
                    1CF1  10106 	C$easyax5043.c$1402$3$328 ==.
                          10107 ;	..\COMMON\easyax5043.c:1402: wtimer0_addabsolute(&axradio_timer);
   253B 90 02 89          10108 	mov	dptr,#_axradio_timer
   253E 12 45 75          10109 	lcall	_wtimer0_addabsolute
   2541 80 06             10110 	sjmp	00161$
   2543                   10111 00158$:
                    1CF9  10112 	C$easyax5043.c$1404$3$329 ==.
                          10113 ;	..\COMMON\easyax5043.c:1404: axradio_syncstate = syncstate_slave_rxack;
   2543 90 00 04          10114 	mov	dptr,#_axradio_syncstate
   2546 74 0C             10115 	mov	a,#0x0C
   2548 F0                10116 	movx	@dptr,a
   2549                   10117 00161$:
                    1CFF  10118 	C$easyax5043.c$1407$1$313 ==.
                          10119 ;	..\COMMON\easyax5043.c:1407: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   2549 90 02 36          10120 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   254C 12 38 57          10121 	lcall	_axradio_statuschange
                    1D05  10122 	C$easyax5043.c$1408$1$313 ==.
                          10123 ;	..\COMMON\easyax5043.c:1408: endcb:
   254F                   10124 00163$:
                    1D05  10125 	C$easyax5043.c$1409$1$313 ==.
                          10126 ;	..\COMMON\easyax5043.c:1409: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE) {
   254F 74 19             10127 	mov	a,#0x19
   2551 B5 0A 05          10128 	cjne	a,_axradio_mode,00178$
                    1D0A  10129 	C$easyax5043.c$1410$2$330 ==.
                          10130 ;	..\COMMON\easyax5043.c:1410: ax5043_receiver_on_wor();
   2554 12 13 DB          10131 	lcall	_ax5043_receiver_on_wor
   2557 80 42             10132 	sjmp	00180$
   2559                   10133 00178$:
                    1D0F  10134 	C$easyax5043.c$1411$1$313 ==.
                          10135 ;	..\COMMON\easyax5043.c:1411: } else if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   2559 74 1A             10136 	mov	a,#0x1A
   255B B5 0A 02          10137 	cjne	a,_axradio_mode,00300$
   255E 80 05             10138 	sjmp	00173$
   2560                   10139 00300$:
                    1D16  10140 	C$easyax5043.c$1412$1$313 ==.
                          10141 ;	..\COMMON\easyax5043.c:1412: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE) {
   2560 74 1B             10142 	mov	a,#0x1B
   2562 B5 0A 24          10143 	cjne	a,_axradio_mode,00174$
   2565                   10144 00173$:
                    1D1B  10145 	C$easyax5043.c$1415$3$332 ==.
                          10146 ;	..\COMMON\easyax5043.c:1415: uint8_t __autodata iesave = IE & 0x80;
   2565 74 80             10147 	mov	a,#0x80
   2567 55 A8             10148 	anl	a,_IE
   2569 FF                10149 	mov	r7,a
                    1D20  10150 	C$easyax5043.c$1416$3$332 ==.
                          10151 ;	..\COMMON\easyax5043.c:1416: EA = 0;
   256A C2 AF             10152 	clr	_EA
                    1D22  10153 	C$easyax5043.c$1417$3$332 ==.
                          10154 ;	..\COMMON\easyax5043.c:1417: trxst = axradio_trxstate;
   256C AE 0B             10155 	mov	r6,_axradio_trxstate
                    1D24  10156 	C$easyax5043.c$1418$3$332 ==.
                          10157 ;	..\COMMON\easyax5043.c:1418: axradio_cb_receive.st.error = AXRADIO_ERR_PACKETDONE;
   256E 90 02 37          10158 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2571 74 F0             10159 	mov	a,#0xF0
   2573 F0                10160 	movx	@dptr,a
                    1D2A  10161 	C$easyax5043.c$1419$3$332 ==.
                          10162 ;	..\COMMON\easyax5043.c:1419: IE |= iesave;
   2574 EF                10163 	mov	a,r7
   2575 42 A8             10164 	orl	_IE,a
                    1D2D  10165 	C$easyax5043.c$1421$2$331 ==.
                          10166 ;	..\COMMON\easyax5043.c:1421: if (trxst == trxstate_off) {
   2577 EE                10167 	mov	a,r6
   2578 70 21             10168 	jnz	00180$
                    1D30  10169 	C$easyax5043.c$1422$3$333 ==.
                          10170 ;	..\COMMON\easyax5043.c:1422: if (axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   257A 74 1B             10171 	mov	a,#0x1B
   257C B5 0A 05          10172 	cjne	a,_axradio_mode,00165$
                    1D35  10173 	C$easyax5043.c$1423$3$333 ==.
                          10174 ;	..\COMMON\easyax5043.c:1423: ax5043_receiver_on_wor();
   257F 12 13 DB          10175 	lcall	_ax5043_receiver_on_wor
   2582 80 17             10176 	sjmp	00180$
   2584                   10177 00165$:
                    1D3A  10178 	C$easyax5043.c$1425$3$333 ==.
                          10179 ;	..\COMMON\easyax5043.c:1425: ax5043_receiver_on_continuous();
   2584 12 13 41          10180 	lcall	_ax5043_receiver_on_continuous
   2587 80 12             10181 	sjmp	00180$
   2589                   10182 00174$:
                    1D3F  10183 	C$easyax5043.c$1428$2$334 ==.
                          10184 ;	..\COMMON\easyax5043.c:1428: switch (axradio_trxstate) {
   2589 AF 0B             10185 	mov	r7,_axradio_trxstate
   258B BF 01 02          10186 	cjne	r7,#0x01,00306$
   258E 80 03             10187 	sjmp	00170$
   2590                   10188 00306$:
   2590 BF 02 08          10189 	cjne	r7,#0x02,00180$
                    1D49  10190 	C$easyax5043.c$1430$3$335 ==.
                          10191 ;	..\COMMON\easyax5043.c:1430: case trxstate_rxwor:
   2593                   10192 00170$:
                    1D49  10193 	C$easyax5043.c$1431$3$335 ==.
                          10194 ;	..\COMMON\easyax5043.c:1431: AX5043_IRQMASK0 |= 0x01; // re-enable FIFO not empty irq
   2593 90 40 07          10195 	mov	dptr,#_AX5043_IRQMASK0
   2596 E0                10196 	movx	a,@dptr
   2597 FF                10197 	mov	r7,a
   2598 44 01             10198 	orl	a,#0x01
   259A F0                10199 	movx	@dptr,a
                    1D51  10200 	C$easyax5043.c$1436$1$313 ==.
                          10201 ;	..\COMMON\easyax5043.c:1436: }
   259B                   10202 00180$:
                    1D51  10203 	C$easyax5043.c$1438$1$313 ==.
                    1D51  10204 	XFeasyax5043$axradio_receive_callback_fwd$0$0 ==.
   259B 22                10205 	ret
                          10206 ;------------------------------------------------------------
                          10207 ;Allocation info for local variables in function 'axradio_killallcb'
                          10208 ;------------------------------------------------------------
                    1D52  10209 	Feasyax5043$axradio_killallcb$0$0 ==.
                    1D52  10210 	C$easyax5043.c$1440$1$313 ==.
                          10211 ;	..\COMMON\easyax5043.c:1440: static void axradio_killallcb(void)
                          10212 ;	-----------------------------------------
                          10213 ;	 function axradio_killallcb
                          10214 ;	-----------------------------------------
   259C                   10215 _axradio_killallcb:
                    1D52  10216 	C$easyax5043.c$1442$1$337 ==.
                          10217 ;	..\COMMON\easyax5043.c:1442: wtimer_remove_callback(&axradio_cb_receive.cb);
   259C 90 02 32          10218 	mov	dptr,#_axradio_cb_receive
   259F 12 50 73          10219 	lcall	_wtimer_remove_callback
                    1D58  10220 	C$easyax5043.c$1443$1$337 ==.
                          10221 ;	..\COMMON\easyax5043.c:1443: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   25A2 90 02 54          10222 	mov	dptr,#_axradio_cb_receivesfd
   25A5 12 50 73          10223 	lcall	_wtimer_remove_callback
                    1D5E  10224 	C$easyax5043.c$1444$1$337 ==.
                          10225 ;	..\COMMON\easyax5043.c:1444: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   25A8 90 02 5E          10226 	mov	dptr,#_axradio_cb_channelstate
   25AB 12 50 73          10227 	lcall	_wtimer_remove_callback
                    1D64  10228 	C$easyax5043.c$1445$1$337 ==.
                          10229 ;	..\COMMON\easyax5043.c:1445: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   25AE 90 02 6B          10230 	mov	dptr,#_axradio_cb_transmitstart
   25B1 12 50 73          10231 	lcall	_wtimer_remove_callback
                    1D6A  10232 	C$easyax5043.c$1446$1$337 ==.
                          10233 ;	..\COMMON\easyax5043.c:1446: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   25B4 90 02 75          10234 	mov	dptr,#_axradio_cb_transmitend
   25B7 12 50 73          10235 	lcall	_wtimer_remove_callback
                    1D70  10236 	C$easyax5043.c$1447$1$337 ==.
                          10237 ;	..\COMMON\easyax5043.c:1447: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   25BA 90 02 7F          10238 	mov	dptr,#_axradio_cb_transmitdata
   25BD 12 50 73          10239 	lcall	_wtimer_remove_callback
                    1D76  10240 	C$easyax5043.c$1448$1$337 ==.
                          10241 ;	..\COMMON\easyax5043.c:1448: wtimer_remove(&axradio_timer);
   25C0 90 02 89          10242 	mov	dptr,#_axradio_timer
   25C3 12 4D 58          10243 	lcall	_wtimer_remove
                    1D7C  10244 	C$easyax5043.c$1449$1$337 ==.
                    1D7C  10245 	XFeasyax5043$axradio_killallcb$0$0 ==.
   25C6 22                10246 	ret
                          10247 ;------------------------------------------------------------
                          10248 ;Allocation info for local variables in function 'axradio_init'
                          10249 ;------------------------------------------------------------
                          10250 ;i                         Allocated to registers r5 
                          10251 ;pllloop_save              Allocated to registers r7 
                          10252 ;pllcpi_save               Allocated to registers r6 
                          10253 ;iesave                    Allocated to registers r4 
                          10254 ;f                         Allocated to registers r1 r2 r3 r4 
                          10255 ;r                         Allocated to registers r3 
                          10256 ;iesave                    Allocated to registers r4 
                          10257 ;r                         Allocated to registers r3 
                          10258 ;f                         Allocated to registers r2 r3 r4 r5 
                          10259 ;------------------------------------------------------------
                    1D7D  10260 	G$axradio_init$0$0 ==.
                    1D7D  10261 	C$easyax5043.c$1455$1$337 ==.
                          10262 ;	..\COMMON\easyax5043.c:1455: uint8_t axradio_init(void)
                          10263 ;	-----------------------------------------
                          10264 ;	 function axradio_init
                          10265 ;	-----------------------------------------
   25C7                   10266 _axradio_init:
                    1D7D  10267 	C$easyax5043.c$1458$1$339 ==.
                          10268 ;	..\COMMON\easyax5043.c:1458: axradio_mode = AXRADIO_MODE_UNINIT;
   25C7 75 0A 00          10269 	mov	_axradio_mode,#0x00
                    1D80  10270 	C$easyax5043.c$1459$1$339 ==.
                          10271 ;	..\COMMON\easyax5043.c:1459: axradio_killallcb();
   25CA 12 25 9C          10272 	lcall	_axradio_killallcb
                    1D83  10273 	C$easyax5043.c$1460$1$339 ==.
                          10274 ;	..\COMMON\easyax5043.c:1460: axradio_cb_receive.cb.handler = axradio_receive_callback_fwd;
   25CD 90 02 34          10275 	mov	dptr,#(_axradio_cb_receive + 0x0002)
   25D0 74 88             10276 	mov	a,#_axradio_receive_callback_fwd
   25D2 F0                10277 	movx	@dptr,a
   25D3 A3                10278 	inc	dptr
   25D4 74 20             10279 	mov	a,#(_axradio_receive_callback_fwd >> 8)
   25D6 F0                10280 	movx	@dptr,a
                    1D8D  10281 	C$easyax5043.c$1461$1$339 ==.
                          10282 ;	..\COMMON\easyax5043.c:1461: axradio_cb_receive.st.status = AXRADIO_STAT_RECEIVE;
   25D7 90 02 36          10283 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   25DA E4                10284 	clr	a
   25DB F0                10285 	movx	@dptr,a
                    1D92  10286 	C$easyax5043.c$1462$1$339 ==.
                          10287 ;	..\COMMON\easyax5043.c:1462: memset_xdata(axradio_cb_receive.st.rx.mac.remoteaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.remoteaddr));
   25DC 75 36 00          10288 	mov	_memset_PARM_2,#0x00
   25DF 75 37 04          10289 	mov	_memset_PARM_3,#0x04
   25E2 75 38 00          10290 	mov	(_memset_PARM_3 + 1),#0x00
   25E5 90 02 46          10291 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   25E8 75 F0 00          10292 	mov	b,#0x00
   25EB 12 43 D4          10293 	lcall	_memset
                    1DA4  10294 	C$easyax5043.c$1463$1$339 ==.
                          10295 ;	..\COMMON\easyax5043.c:1463: memset_xdata(axradio_cb_receive.st.rx.mac.localaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.localaddr));
   25EE 75 36 00          10296 	mov	_memset_PARM_2,#0x00
   25F1 75 37 04          10297 	mov	_memset_PARM_3,#0x04
   25F4 75 38 00          10298 	mov	(_memset_PARM_3 + 1),#0x00
   25F7 90 02 4A          10299 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   25FA 75 F0 00          10300 	mov	b,#0x00
   25FD 12 43 D4          10301 	lcall	_memset
                    1DB6  10302 	C$easyax5043.c$1464$1$339 ==.
                          10303 ;	..\COMMON\easyax5043.c:1464: axradio_cb_receivesfd.cb.handler = axradio_callback_fwd;
   2600 90 02 56          10304 	mov	dptr,#(_axradio_cb_receivesfd + 0x0002)
   2603 74 75             10305 	mov	a,#_axradio_callback_fwd
   2605 F0                10306 	movx	@dptr,a
   2606 A3                10307 	inc	dptr
   2607 74 20             10308 	mov	a,#(_axradio_callback_fwd >> 8)
   2609 F0                10309 	movx	@dptr,a
                    1DC0  10310 	C$easyax5043.c$1465$1$339 ==.
                          10311 ;	..\COMMON\easyax5043.c:1465: axradio_cb_receivesfd.st.status = AXRADIO_STAT_RECEIVESFD;
   260A 90 02 58          10312 	mov	dptr,#(_axradio_cb_receivesfd + 0x0004)
   260D 74 01             10313 	mov	a,#0x01
   260F F0                10314 	movx	@dptr,a
                    1DC6  10315 	C$easyax5043.c$1466$1$339 ==.
                          10316 ;	..\COMMON\easyax5043.c:1466: axradio_cb_channelstate.cb.handler = axradio_callback_fwd;
   2610 90 02 60          10317 	mov	dptr,#(_axradio_cb_channelstate + 0x0002)
   2613 74 75             10318 	mov	a,#_axradio_callback_fwd
   2615 F0                10319 	movx	@dptr,a
   2616 A3                10320 	inc	dptr
   2617 74 20             10321 	mov	a,#(_axradio_callback_fwd >> 8)
   2619 F0                10322 	movx	@dptr,a
                    1DD0  10323 	C$easyax5043.c$1467$1$339 ==.
                          10324 ;	..\COMMON\easyax5043.c:1467: axradio_cb_channelstate.st.status = AXRADIO_STAT_CHANNELSTATE;
   261A 90 02 62          10325 	mov	dptr,#(_axradio_cb_channelstate + 0x0004)
   261D 74 02             10326 	mov	a,#0x02
   261F F0                10327 	movx	@dptr,a
                    1DD6  10328 	C$easyax5043.c$1468$1$339 ==.
                          10329 ;	..\COMMON\easyax5043.c:1468: axradio_cb_transmitstart.cb.handler = axradio_callback_fwd;
   2620 90 02 6D          10330 	mov	dptr,#(_axradio_cb_transmitstart + 0x0002)
   2623 74 75             10331 	mov	a,#_axradio_callback_fwd
   2625 F0                10332 	movx	@dptr,a
   2626 A3                10333 	inc	dptr
   2627 74 20             10334 	mov	a,#(_axradio_callback_fwd >> 8)
   2629 F0                10335 	movx	@dptr,a
                    1DE0  10336 	C$easyax5043.c$1469$1$339 ==.
                          10337 ;	..\COMMON\easyax5043.c:1469: axradio_cb_transmitstart.st.status = AXRADIO_STAT_TRANSMITSTART;
   262A 90 02 6F          10338 	mov	dptr,#(_axradio_cb_transmitstart + 0x0004)
   262D 74 03             10339 	mov	a,#0x03
   262F F0                10340 	movx	@dptr,a
                    1DE6  10341 	C$easyax5043.c$1470$1$339 ==.
                          10342 ;	..\COMMON\easyax5043.c:1470: axradio_cb_transmitend.cb.handler = axradio_callback_fwd;
   2630 90 02 77          10343 	mov	dptr,#(_axradio_cb_transmitend + 0x0002)
   2633 74 75             10344 	mov	a,#_axradio_callback_fwd
   2635 F0                10345 	movx	@dptr,a
   2636 A3                10346 	inc	dptr
   2637 74 20             10347 	mov	a,#(_axradio_callback_fwd >> 8)
   2639 F0                10348 	movx	@dptr,a
                    1DF0  10349 	C$easyax5043.c$1471$1$339 ==.
                          10350 ;	..\COMMON\easyax5043.c:1471: axradio_cb_transmitend.st.status = AXRADIO_STAT_TRANSMITEND;
   263A 90 02 79          10351 	mov	dptr,#(_axradio_cb_transmitend + 0x0004)
   263D 74 04             10352 	mov	a,#0x04
   263F F0                10353 	movx	@dptr,a
                    1DF6  10354 	C$easyax5043.c$1472$1$339 ==.
                          10355 ;	..\COMMON\easyax5043.c:1472: axradio_cb_transmitdata.cb.handler = axradio_callback_fwd;
   2640 90 02 81          10356 	mov	dptr,#(_axradio_cb_transmitdata + 0x0002)
   2643 74 75             10357 	mov	a,#_axradio_callback_fwd
   2645 F0                10358 	movx	@dptr,a
   2646 A3                10359 	inc	dptr
   2647 74 20             10360 	mov	a,#(_axradio_callback_fwd >> 8)
   2649 F0                10361 	movx	@dptr,a
                    1E00  10362 	C$easyax5043.c$1473$1$339 ==.
                          10363 ;	..\COMMON\easyax5043.c:1473: axradio_cb_transmitdata.st.status = AXRADIO_STAT_TRANSMITDATA;
   264A 90 02 83          10364 	mov	dptr,#(_axradio_cb_transmitdata + 0x0004)
   264D 74 05             10365 	mov	a,#0x05
   264F F0                10366 	movx	@dptr,a
                    1E06  10367 	C$easyax5043.c$1474$1$339 ==.
                          10368 ;	..\COMMON\easyax5043.c:1474: axradio_timer.handler = axradio_timer_callback;
   2650 90 02 8B          10369 	mov	dptr,#(_axradio_timer + 0x0002)
   2653 74 47             10370 	mov	a,#_axradio_timer_callback
   2655 F0                10371 	movx	@dptr,a
   2656 A3                10372 	inc	dptr
   2657 74 18             10373 	mov	a,#(_axradio_timer_callback >> 8)
   2659 F0                10374 	movx	@dptr,a
                    1E10  10375 	C$easyax5043.c$1475$1$339 ==.
                          10376 ;	..\COMMON\easyax5043.c:1475: axradio_curchannel = 0;
   265A 90 00 09          10377 	mov	dptr,#_axradio_curchannel
                    1E13  10378 	C$easyax5043.c$1476$1$339 ==.
                          10379 ;	..\COMMON\easyax5043.c:1476: axradio_curfreqoffset = 0;
   265D E4                10380 	clr	a
   265E F0                10381 	movx	@dptr,a
   265F 90 00 0A          10382 	mov	dptr,#_axradio_curfreqoffset
   2662 F0                10383 	movx	@dptr,a
   2663 A3                10384 	inc	dptr
   2664 E4                10385 	clr	a
   2665 F0                10386 	movx	@dptr,a
   2666 A3                10387 	inc	dptr
   2667 F0                10388 	movx	@dptr,a
   2668 A3                10389 	inc	dptr
   2669 F0                10390 	movx	@dptr,a
                    1E20  10391 	C$easyax5043.c$1477$1$339 ==.
                          10392 ;	..\COMMON\easyax5043.c:1477: IE_4 = 0;
   266A C2 AC             10393 	clr	_IE_4
                    1E22  10394 	C$easyax5043.c$1478$1$339 ==.
                          10395 ;	..\COMMON\easyax5043.c:1478: axradio_trxstate = trxstate_off;
   266C 75 0B 00          10396 	mov	_axradio_trxstate,#0x00
                    1E25  10397 	C$easyax5043.c$1479$1$339 ==.
                          10398 ;	..\COMMON\easyax5043.c:1479: if (ax5043_reset())
   266F 12 3C 45          10399 	lcall	_ax5043_reset
   2672 E5 82             10400 	mov	a,dpl
   2674 60 06             10401 	jz	00102$
                    1E2C  10402 	C$easyax5043.c$1480$1$339 ==.
                          10403 ;	..\COMMON\easyax5043.c:1480: return AXRADIO_ERR_NOCHIP;
   2676 75 82 05          10404 	mov	dpl,#0x05
   2679 02 28 B4          10405 	ljmp	00139$
   267C                   10406 00102$:
                    1E32  10407 	C$easyax5043.c$1481$1$339 ==.
                          10408 ;	..\COMMON\easyax5043.c:1481: ax5043_init_registers();
   267C 12 16 02          10409 	lcall	_ax5043_init_registers
                    1E35  10410 	C$easyax5043.c$1482$1$339 ==.
                          10411 ;	..\COMMON\easyax5043.c:1482: ax5043_set_registers_rx();
   267F 12 04 56          10412 	lcall	_ax5043_set_registers_rx
                    1E38  10413 	C$easyax5043.c$1483$1$339 ==.
                          10414 ;	..\COMMON\easyax5043.c:1483: pllloop_save = AX5043_PLLLOOP;
   2682 90 40 30          10415 	mov	dptr,#_AX5043_PLLLOOP
   2685 E0                10416 	movx	a,@dptr
   2686 FF                10417 	mov	r7,a
                    1E3D  10418 	C$easyax5043.c$1484$1$339 ==.
                          10419 ;	..\COMMON\easyax5043.c:1484: pllcpi_save = AX5043_PLLCPI;
   2687 90 40 31          10420 	mov	dptr,#_AX5043_PLLCPI
   268A E0                10421 	movx	a,@dptr
   268B FE                10422 	mov	r6,a
                    1E42  10423 	C$easyax5043.c$1485$1$339 ==.
                          10424 ;	..\COMMON\easyax5043.c:1485: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   268C 90 40 30          10425 	mov	dptr,#_AX5043_PLLLOOP
   268F 74 09             10426 	mov	a,#0x09
   2691 F0                10427 	movx	@dptr,a
                    1E48  10428 	C$easyax5043.c$1486$1$339 ==.
                          10429 ;	..\COMMON\easyax5043.c:1486: AX5043_PLLCPI = 0x08;
   2692 90 40 31          10430 	mov	dptr,#_AX5043_PLLCPI
   2695 74 08             10431 	mov	a,#0x08
   2697 F0                10432 	movx	@dptr,a
                    1E4E  10433 	C$easyax5043.c$1488$1$339 ==.
                          10434 ;	..\COMMON\easyax5043.c:1488: IE_4 = 1;
   2698 D2 AC             10435 	setb	_IE_4
                    1E50  10436 	C$easyax5043.c$1490$1$339 ==.
                          10437 ;	..\COMMON\easyax5043.c:1490: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   269A 90 40 02          10438 	mov	dptr,#_AX5043_PWRMODE
   269D 74 05             10439 	mov	a,#0x05
   269F F0                10440 	movx	@dptr,a
                    1E56  10441 	C$easyax5043.c$1491$1$339 ==.
                          10442 ;	..\COMMON\easyax5043.c:1491: axradio_wait_for_xtal();
   26A0 C0 07             10443 	push	ar7
   26A2 C0 06             10444 	push	ar6
   26A4 12 14 A7          10445 	lcall	_axradio_wait_for_xtal
   26A7 D0 06             10446 	pop	ar6
   26A9 D0 07             10447 	pop	ar7
                    1E61  10448 	C$easyax5043.c$1493$3$341 ==.
                          10449 ;	..\COMMON\easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   26AB 7D 00             10450 	mov	r5,#0x00
   26AD                   10451 00127$:
   26AD 90 56 0E          10452 	mov	dptr,#_axradio_phy_nrchannels
   26B0 E4                10453 	clr	a
   26B1 93                10454 	movc	a,@a+dptr
   26B2 FC                10455 	mov	r4,a
   26B3 C3                10456 	clr	c
   26B4 ED                10457 	mov	a,r5
   26B5 9C                10458 	subb	a,r4
   26B6 40 03             10459 	jc	00178$
   26B8 02 27 88          10460 	ljmp	00130$
   26BB                   10461 00178$:
                    1E71  10462 	C$easyax5043.c$1496$3$341 ==.
                          10463 ;	..\COMMON\easyax5043.c:1496: uint32_t __autodata f = axradio_phy_chanfreq[i];
   26BB ED                10464 	mov	a,r5
   26BC 75 F0 04          10465 	mov	b,#0x04
   26BF A4                10466 	mul	ab
   26C0 24 0F             10467 	add	a,#_axradio_phy_chanfreq
   26C2 F5 82             10468 	mov	dpl,a
   26C4 74 56             10469 	mov	a,#(_axradio_phy_chanfreq >> 8)
   26C6 35 F0             10470 	addc	a,b
   26C8 F5 83             10471 	mov	dph,a
   26CA E4                10472 	clr	a
   26CB 93                10473 	movc	a,@a+dptr
   26CC F9                10474 	mov	r1,a
   26CD A3                10475 	inc	dptr
   26CE E4                10476 	clr	a
   26CF 93                10477 	movc	a,@a+dptr
   26D0 FA                10478 	mov	r2,a
   26D1 A3                10479 	inc	dptr
   26D2 E4                10480 	clr	a
   26D3 93                10481 	movc	a,@a+dptr
   26D4 FB                10482 	mov	r3,a
   26D5 A3                10483 	inc	dptr
   26D6 E4                10484 	clr	a
   26D7 93                10485 	movc	a,@a+dptr
   26D8 FC                10486 	mov	r4,a
                    1E8F  10487 	C$easyax5043.c$1497$3$341 ==.
                          10488 ;	..\COMMON\easyax5043.c:1497: AX5043_FREQA0 = f;
   26D9 90 40 37          10489 	mov	dptr,#_AX5043_FREQA0
   26DC E9                10490 	mov	a,r1
   26DD F0                10491 	movx	@dptr,a
                    1E94  10492 	C$easyax5043.c$1498$3$341 ==.
                          10493 ;	..\COMMON\easyax5043.c:1498: AX5043_FREQA1 = f >> 8;
   26DE 90 40 36          10494 	mov	dptr,#_AX5043_FREQA1
   26E1 EA                10495 	mov	a,r2
   26E2 F0                10496 	movx	@dptr,a
                    1E99  10497 	C$easyax5043.c$1499$3$341 ==.
                          10498 ;	..\COMMON\easyax5043.c:1499: AX5043_FREQA2 = f >> 16;
   26E3 90 40 35          10499 	mov	dptr,#_AX5043_FREQA2
   26E6 EB                10500 	mov	a,r3
   26E7 F0                10501 	movx	@dptr,a
                    1E9E  10502 	C$easyax5043.c$1500$3$341 ==.
                          10503 ;	..\COMMON\easyax5043.c:1500: AX5043_FREQA3 = f >> 24;
   26E8 90 40 34          10504 	mov	dptr,#_AX5043_FREQA3
   26EB EC                10505 	mov	a,r4
   26EC F0                10506 	movx	@dptr,a
                    1EA3  10507 	C$easyax5043.c$1502$2$340 ==.
                          10508 ;	..\COMMON\easyax5043.c:1502: iesave = IE & 0x80;
   26ED 74 80             10509 	mov	a,#0x80
   26EF 55 A8             10510 	anl	a,_IE
   26F1 FC                10511 	mov	r4,a
                    1EA8  10512 	C$easyax5043.c$1503$2$340 ==.
                          10513 ;	..\COMMON\easyax5043.c:1503: EA = 0;
   26F2 C2 AF             10514 	clr	_EA
                    1EAA  10515 	C$easyax5043.c$1504$2$340 ==.
                          10516 ;	..\COMMON\easyax5043.c:1504: axradio_trxstate = trxstate_pll_ranging;
   26F4 75 0B 05          10517 	mov	_axradio_trxstate,#0x05
                    1EAD  10518 	C$easyax5043.c$1505$2$340 ==.
                          10519 ;	..\COMMON\easyax5043.c:1505: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   26F7 90 40 06          10520 	mov	dptr,#_AX5043_IRQMASK1
   26FA 74 10             10521 	mov	a,#0x10
   26FC F0                10522 	movx	@dptr,a
                    1EB3  10523 	C$easyax5043.c$1508$3$342 ==.
                          10524 ;	..\COMMON\easyax5043.c:1508: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   26FD 90 56 13          10525 	mov	dptr,#_axradio_phy_chanpllrnginit
   2700 E4                10526 	clr	a
   2701 93                10527 	movc	a,@a+dptr
   2702 FB                10528 	mov	r3,a
   2703 54 F0             10529 	anl	a,#0xF0
   2705 70 0B             10530 	jnz	00108$
                    1EBD  10531 	C$easyax5043.c$1509$4$343 ==.
                          10532 ;	..\COMMON\easyax5043.c:1509: r = axradio_phy_chanpllrnginit[i] | 0x10;
   2707 ED                10533 	mov	a,r5
   2708 90 56 13          10534 	mov	dptr,#_axradio_phy_chanpllrnginit
   270B 93                10535 	movc	a,@a+dptr
   270C FB                10536 	mov	r3,a
   270D 43 03 10          10537 	orl	ar3,#0x10
   2710 80 25             10538 	sjmp	00109$
   2712                   10539 00108$:
                    1EC8  10540 	C$easyax5043.c$1512$4$344 ==.
                          10541 ;	..\COMMON\easyax5043.c:1512: r = 0x18;
   2712 7B 18             10542 	mov	r3,#0x18
                    1ECA  10543 	C$easyax5043.c$1513$4$344 ==.
                          10544 ;	..\COMMON\easyax5043.c:1513: if (i) {
   2714 ED                10545 	mov	a,r5
   2715 60 20             10546 	jz	00109$
                    1ECD  10547 	C$easyax5043.c$1514$5$345 ==.
                          10548 ;	..\COMMON\easyax5043.c:1514: r = axradio_phy_chanpllrng_rx[i - 1];
   2717 8D 01             10549 	mov	ar1,r5
   2719 7A 00             10550 	mov	r2,#0x00
   271B 19                10551 	dec	r1
   271C B9 FF 01          10552 	cjne	r1,#0xFF,00182$
   271F 1A                10553 	dec	r2
   2720                   10554 00182$:
   2720 E9                10555 	mov	a,r1
   2721 24 00             10556 	add	a,#_axradio_phy_chanpllrng_rx
   2723 F5 82             10557 	mov	dpl,a
   2725 EA                10558 	mov	a,r2
   2726 34 00             10559 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2728 F5 83             10560 	mov	dph,a
   272A E0                10561 	movx	a,@dptr
                    1EE1  10562 	C$easyax5043.c$1515$5$345 ==.
                          10563 ;	..\COMMON\easyax5043.c:1515: if (r & 0x20)
   272B FB                10564 	mov	r3,a
   272C 30 E5 02          10565 	jnb	acc.5,00104$
                    1EE5  10566 	C$easyax5043.c$1516$5$345 ==.
                          10567 ;	..\COMMON\easyax5043.c:1516: r = 0x08;
   272F 7B 08             10568 	mov	r3,#0x08
   2731                   10569 00104$:
                    1EE7  10570 	C$easyax5043.c$1517$5$345 ==.
                          10571 ;	..\COMMON\easyax5043.c:1517: r &= 0x0F;
   2731 53 03 0F          10572 	anl	ar3,#0x0F
                    1EEA  10573 	C$easyax5043.c$1518$5$345 ==.
                          10574 ;	..\COMMON\easyax5043.c:1518: r |= 0x10;
   2734 43 03 10          10575 	orl	ar3,#0x10
   2737                   10576 00109$:
                    1EED  10577 	C$easyax5043.c$1521$3$342 ==.
                          10578 ;	..\COMMON\easyax5043.c:1521: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   2737 90 40 33          10579 	mov	dptr,#_AX5043_PLLRANGINGA
   273A EB                10580 	mov	a,r3
   273B F0                10581 	movx	@dptr,a
   273C                   10582 00113$:
                    1EF2  10583 	C$easyax5043.c$1524$3$346 ==.
                          10584 ;	..\COMMON\easyax5043.c:1524: EA = 0;
   273C C2 AF             10585 	clr	_EA
                    1EF4  10586 	C$easyax5043.c$1525$3$346 ==.
                          10587 ;	..\COMMON\easyax5043.c:1525: if (axradio_trxstate == trxstate_pll_ranging_done)
   273E 74 06             10588 	mov	a,#0x06
   2740 B5 0B 02          10589 	cjne	a,_axradio_trxstate,00184$
   2743 80 22             10590 	sjmp	00114$
   2745                   10591 00184$:
                    1EFB  10592 	C$easyax5043.c$1527$3$346 ==.
                          10593 ;	..\COMMON\easyax5043.c:1527: wtimer_idle(WTFLAG_CANSTANDBY);
   2745 75 82 02          10594 	mov	dpl,#0x02
   2748 C0 07             10595 	push	ar7
   274A C0 06             10596 	push	ar6
   274C C0 05             10597 	push	ar5
   274E C0 04             10598 	push	ar4
   2750 12 43 55          10599 	lcall	_wtimer_idle
   2753 D0 04             10600 	pop	ar4
                    1F0B  10601 	C$easyax5043.c$1528$3$346 ==.
                          10602 ;	..\COMMON\easyax5043.c:1528: IE |= iesave;
   2755 EC                10603 	mov	a,r4
   2756 42 A8             10604 	orl	_IE,a
                    1F0E  10605 	C$easyax5043.c$1529$3$346 ==.
                          10606 ;	..\COMMON\easyax5043.c:1529: wtimer_runcallbacks();
   2758 C0 04             10607 	push	ar4
   275A 12 42 D1          10608 	lcall	_wtimer_runcallbacks
   275D D0 04             10609 	pop	ar4
   275F D0 05             10610 	pop	ar5
   2761 D0 06             10611 	pop	ar6
   2763 D0 07             10612 	pop	ar7
   2765 80 D5             10613 	sjmp	00113$
   2767                   10614 00114$:
                    1F1D  10615 	C$easyax5043.c$1531$2$340 ==.
                          10616 ;	..\COMMON\easyax5043.c:1531: axradio_trxstate = trxstate_off;
   2767 75 0B 00          10617 	mov	_axradio_trxstate,#0x00
                    1F20  10618 	C$easyax5043.c$1532$2$340 ==.
                          10619 ;	..\COMMON\easyax5043.c:1532: AX5043_IRQMASK1 = 0x00;
   276A 90 40 06          10620 	mov	dptr,#_AX5043_IRQMASK1
   276D E4                10621 	clr	a
   276E F0                10622 	movx	@dptr,a
                    1F25  10623 	C$easyax5043.c$1533$2$340 ==.
                          10624 ;	..\COMMON\easyax5043.c:1533: axradio_phy_chanpllrng_rx[i] = AX5043_PLLRANGINGA;
   276F ED                10625 	mov	a,r5
   2770 24 00             10626 	add	a,#_axradio_phy_chanpllrng_rx
   2772 FA                10627 	mov	r2,a
   2773 E4                10628 	clr	a
   2774 34 00             10629 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2776 FB                10630 	mov	r3,a
   2777 90 40 33          10631 	mov	dptr,#_AX5043_PLLRANGINGA
   277A E0                10632 	movx	a,@dptr
   277B F9                10633 	mov	r1,a
   277C 8A 82             10634 	mov	dpl,r2
   277E 8B 83             10635 	mov	dph,r3
   2780 F0                10636 	movx	@dptr,a
                    1F37  10637 	C$easyax5043.c$1534$2$340 ==.
                          10638 ;	..\COMMON\easyax5043.c:1534: IE |= iesave;
   2781 EC                10639 	mov	a,r4
   2782 42 A8             10640 	orl	_IE,a
                    1F3A  10641 	C$easyax5043.c$1493$1$339 ==.
                          10642 ;	..\COMMON\easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2784 0D                10643 	inc	r5
   2785 02 26 AD          10644 	ljmp	00127$
   2788                   10645 00130$:
                    1F3E  10646 	C$easyax5043.c$1536$1$339 ==.
                          10647 ;	..\COMMON\easyax5043.c:1536: ax5043_set_registers_tx();
   2788 C0 07             10648 	push	ar7
   278A C0 06             10649 	push	ar6
   278C 12 04 26          10650 	lcall	_ax5043_set_registers_tx
   278F D0 06             10651 	pop	ar6
   2791 D0 07             10652 	pop	ar7
                    1F49  10653 	C$easyax5043.c$1537$1$339 ==.
                          10654 ;	..\COMMON\easyax5043.c:1537: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   2793 90 40 30          10655 	mov	dptr,#_AX5043_PLLLOOP
   2796 74 09             10656 	mov	a,#0x09
   2798 F0                10657 	movx	@dptr,a
                    1F4F  10658 	C$easyax5043.c$1538$1$339 ==.
                          10659 ;	..\COMMON\easyax5043.c:1538: AX5043_PLLCPI = 0x08;
   2799 90 40 31          10660 	mov	dptr,#_AX5043_PLLCPI
   279C 74 08             10661 	mov	a,#0x08
   279E F0                10662 	movx	@dptr,a
                    1F55  10663 	C$easyax5043.c$1539$2$347 ==.
                          10664 ;	..\COMMON\easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   279F 7D 00             10665 	mov	r5,#0x00
   27A1                   10666 00131$:
   27A1 90 56 0E          10667 	mov	dptr,#_axradio_phy_nrchannels
   27A4 E4                10668 	clr	a
   27A5 93                10669 	movc	a,@a+dptr
   27A6 FC                10670 	mov	r4,a
   27A7 C3                10671 	clr	c
   27A8 ED                10672 	mov	a,r5
   27A9 9C                10673 	subb	a,r4
   27AA 40 03             10674 	jc	00185$
   27AC 02 28 3C          10675 	ljmp	00134$
   27AF                   10676 00185$:
                    1F65  10677 	C$easyax5043.c$1540$2$347 ==.
                          10678 ;	..\COMMON\easyax5043.c:1540: uint8_t __autodata iesave = IE & 0x80;
   27AF 74 80             10679 	mov	a,#0x80
   27B1 55 A8             10680 	anl	a,_IE
   27B3 FC                10681 	mov	r4,a
                    1F6A  10682 	C$easyax5043.c$1541$2$347 ==.
                          10683 ;	..\COMMON\easyax5043.c:1541: EA = 0;
   27B4 C2 AF             10684 	clr	_EA
                    1F6C  10685 	C$easyax5043.c$1542$2$347 ==.
                          10686 ;	..\COMMON\easyax5043.c:1542: axradio_trxstate = trxstate_pll_ranging;
   27B6 75 0B 05          10687 	mov	_axradio_trxstate,#0x05
                    1F6F  10688 	C$easyax5043.c$1543$2$347 ==.
                          10689 ;	..\COMMON\easyax5043.c:1543: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   27B9 90 40 06          10690 	mov	dptr,#_AX5043_IRQMASK1
   27BC 74 10             10691 	mov	a,#0x10
   27BE F0                10692 	movx	@dptr,a
                    1F75  10693 	C$easyax5043.c$1546$3$348 ==.
                          10694 ;	..\COMMON\easyax5043.c:1546: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   27BF 90 56 13          10695 	mov	dptr,#_axradio_phy_chanpllrnginit
   27C2 E4                10696 	clr	a
   27C3 93                10697 	movc	a,@a+dptr
   27C4 FB                10698 	mov	r3,a
   27C5 54 F0             10699 	anl	a,#0xF0
   27C7 70 0B             10700 	jnz	00118$
                    1F7F  10701 	C$easyax5043.c$1547$4$349 ==.
                          10702 ;	..\COMMON\easyax5043.c:1547: r = axradio_phy_chanpllrnginit[i] | 0x10;
   27C9 ED                10703 	mov	a,r5
   27CA 90 56 13          10704 	mov	dptr,#_axradio_phy_chanpllrnginit
   27CD 93                10705 	movc	a,@a+dptr
   27CE FB                10706 	mov	r3,a
   27CF 43 03 10          10707 	orl	ar3,#0x10
   27D2 80 17             10708 	sjmp	00119$
   27D4                   10709 00118$:
                    1F8A  10710 	C$easyax5043.c$1550$4$350 ==.
                          10711 ;	..\COMMON\easyax5043.c:1550: r = axradio_phy_chanpllrng_rx[i];
   27D4 ED                10712 	mov	a,r5
   27D5 24 00             10713 	add	a,#_axradio_phy_chanpllrng_rx
   27D7 F5 82             10714 	mov	dpl,a
   27D9 E4                10715 	clr	a
   27DA 34 00             10716 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   27DC F5 83             10717 	mov	dph,a
   27DE E0                10718 	movx	a,@dptr
                    1F95  10719 	C$easyax5043.c$1551$4$350 ==.
                          10720 ;	..\COMMON\easyax5043.c:1551: if (r & 0x20)
   27DF FB                10721 	mov	r3,a
   27E0 30 E5 02          10722 	jnb	acc.5,00116$
                    1F99  10723 	C$easyax5043.c$1552$4$350 ==.
                          10724 ;	..\COMMON\easyax5043.c:1552: r = 0x08;
   27E3 7B 08             10725 	mov	r3,#0x08
   27E5                   10726 00116$:
                    1F9B  10727 	C$easyax5043.c$1553$4$350 ==.
                          10728 ;	..\COMMON\easyax5043.c:1553: r &= 0x0F;
   27E5 53 03 0F          10729 	anl	ar3,#0x0F
                    1F9E  10730 	C$easyax5043.c$1554$4$350 ==.
                          10731 ;	..\COMMON\easyax5043.c:1554: r |= 0x10;
   27E8 43 03 10          10732 	orl	ar3,#0x10
   27EB                   10733 00119$:
                    1FA1  10734 	C$easyax5043.c$1556$3$348 ==.
                          10735 ;	..\COMMON\easyax5043.c:1556: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   27EB 90 40 33          10736 	mov	dptr,#_AX5043_PLLRANGINGA
   27EE EB                10737 	mov	a,r3
   27EF F0                10738 	movx	@dptr,a
   27F0                   10739 00123$:
                    1FA6  10740 	C$easyax5043.c$1559$3$351 ==.
                          10741 ;	..\COMMON\easyax5043.c:1559: EA = 0;
   27F0 C2 AF             10742 	clr	_EA
                    1FA8  10743 	C$easyax5043.c$1560$3$351 ==.
                          10744 ;	..\COMMON\easyax5043.c:1560: if (axradio_trxstate == trxstate_pll_ranging_done)
   27F2 74 06             10745 	mov	a,#0x06
   27F4 B5 0B 02          10746 	cjne	a,_axradio_trxstate,00189$
   27F7 80 22             10747 	sjmp	00124$
   27F9                   10748 00189$:
                    1FAF  10749 	C$easyax5043.c$1562$3$351 ==.
                          10750 ;	..\COMMON\easyax5043.c:1562: wtimer_idle(WTFLAG_CANSTANDBY);
   27F9 75 82 02          10751 	mov	dpl,#0x02
   27FC C0 07             10752 	push	ar7
   27FE C0 06             10753 	push	ar6
   2800 C0 05             10754 	push	ar5
   2802 C0 04             10755 	push	ar4
   2804 12 43 55          10756 	lcall	_wtimer_idle
   2807 D0 04             10757 	pop	ar4
                    1FBF  10758 	C$easyax5043.c$1563$3$351 ==.
                          10759 ;	..\COMMON\easyax5043.c:1563: IE |= iesave;
   2809 EC                10760 	mov	a,r4
   280A 42 A8             10761 	orl	_IE,a
                    1FC2  10762 	C$easyax5043.c$1564$3$351 ==.
                          10763 ;	..\COMMON\easyax5043.c:1564: wtimer_runcallbacks();
   280C C0 04             10764 	push	ar4
   280E 12 42 D1          10765 	lcall	_wtimer_runcallbacks
   2811 D0 04             10766 	pop	ar4
   2813 D0 05             10767 	pop	ar5
   2815 D0 06             10768 	pop	ar6
   2817 D0 07             10769 	pop	ar7
   2819 80 D5             10770 	sjmp	00123$
   281B                   10771 00124$:
                    1FD1  10772 	C$easyax5043.c$1566$2$347 ==.
                          10773 ;	..\COMMON\easyax5043.c:1566: axradio_trxstate = trxstate_off;
   281B 75 0B 00          10774 	mov	_axradio_trxstate,#0x00
                    1FD4  10775 	C$easyax5043.c$1567$2$347 ==.
                          10776 ;	..\COMMON\easyax5043.c:1567: AX5043_IRQMASK1 = 0x00;
   281E 90 40 06          10777 	mov	dptr,#_AX5043_IRQMASK1
   2821 E4                10778 	clr	a
   2822 F0                10779 	movx	@dptr,a
                    1FD9  10780 	C$easyax5043.c$1568$2$347 ==.
                          10781 ;	..\COMMON\easyax5043.c:1568: axradio_phy_chanpllrng_tx[i] = AX5043_PLLRANGINGA;
   2823 ED                10782 	mov	a,r5
   2824 24 01             10783 	add	a,#_axradio_phy_chanpllrng_tx
   2826 FA                10784 	mov	r2,a
   2827 E4                10785 	clr	a
   2828 34 00             10786 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   282A FB                10787 	mov	r3,a
   282B 90 40 33          10788 	mov	dptr,#_AX5043_PLLRANGINGA
   282E E0                10789 	movx	a,@dptr
   282F F9                10790 	mov	r1,a
   2830 8A 82             10791 	mov	dpl,r2
   2832 8B 83             10792 	mov	dph,r3
   2834 F0                10793 	movx	@dptr,a
                    1FEB  10794 	C$easyax5043.c$1569$2$347 ==.
                          10795 ;	..\COMMON\easyax5043.c:1569: IE |= iesave;
   2835 EC                10796 	mov	a,r4
   2836 42 A8             10797 	orl	_IE,a
                    1FEE  10798 	C$easyax5043.c$1539$1$339 ==.
                          10799 ;	..\COMMON\easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2838 0D                10800 	inc	r5
   2839 02 27 A1          10801 	ljmp	00131$
   283C                   10802 00134$:
                    1FF2  10803 	C$easyax5043.c$1571$1$339 ==.
                          10804 ;	..\COMMON\easyax5043.c:1571: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   283C 90 40 02          10805 	mov	dptr,#_AX5043_PWRMODE
   283F E4                10806 	clr	a
   2840 F0                10807 	movx	@dptr,a
                    1FF7  10808 	C$easyax5043.c$1572$1$339 ==.
                          10809 ;	..\COMMON\easyax5043.c:1572: AX5043_PLLRANGINGA = axradio_phy_chanpllrng_rx[0] & 0x0F;
   2841 90 00 00          10810 	mov	dptr,#_axradio_phy_chanpllrng_rx
   2844 E0                10811 	movx	a,@dptr
   2845 FD                10812 	mov	r5,a
   2846 90 40 33          10813 	mov	dptr,#_AX5043_PLLRANGINGA
   2849 74 0F             10814 	mov	a,#0x0F
   284B 5D                10815 	anl	a,r5
   284C F0                10816 	movx	@dptr,a
                    2003  10817 	C$easyax5043.c$1574$2$352 ==.
                          10818 ;	..\COMMON\easyax5043.c:1574: uint32_t __autodata f = axradio_phy_chanfreq[0];
   284D 90 56 0F          10819 	mov	dptr,#_axradio_phy_chanfreq
   2850 E4                10820 	clr	a
   2851 93                10821 	movc	a,@a+dptr
   2852 FA                10822 	mov	r2,a
   2853 A3                10823 	inc	dptr
   2854 E4                10824 	clr	a
   2855 93                10825 	movc	a,@a+dptr
   2856 FB                10826 	mov	r3,a
   2857 A3                10827 	inc	dptr
   2858 E4                10828 	clr	a
   2859 93                10829 	movc	a,@a+dptr
   285A FC                10830 	mov	r4,a
   285B A3                10831 	inc	dptr
   285C E4                10832 	clr	a
   285D 93                10833 	movc	a,@a+dptr
   285E FD                10834 	mov	r5,a
                    2015  10835 	C$easyax5043.c$1575$2$352 ==.
                          10836 ;	..\COMMON\easyax5043.c:1575: AX5043_FREQA0 = f;
   285F 90 40 37          10837 	mov	dptr,#_AX5043_FREQA0
   2862 EA                10838 	mov	a,r2
   2863 F0                10839 	movx	@dptr,a
                    201A  10840 	C$easyax5043.c$1576$2$352 ==.
                          10841 ;	..\COMMON\easyax5043.c:1576: AX5043_FREQA1 = f >> 8;
   2864 90 40 36          10842 	mov	dptr,#_AX5043_FREQA1
   2867 EB                10843 	mov	a,r3
   2868 F0                10844 	movx	@dptr,a
                    201F  10845 	C$easyax5043.c$1577$2$352 ==.
                          10846 ;	..\COMMON\easyax5043.c:1577: AX5043_FREQA2 = f >> 16;
   2869 90 40 35          10847 	mov	dptr,#_AX5043_FREQA2
   286C EC                10848 	mov	a,r4
   286D F0                10849 	movx	@dptr,a
                    2024  10850 	C$easyax5043.c$1578$2$352 ==.
                          10851 ;	..\COMMON\easyax5043.c:1578: AX5043_FREQA3 = f >> 24;
   286E 90 40 34          10852 	mov	dptr,#_AX5043_FREQA3
   2871 ED                10853 	mov	a,r5
   2872 F0                10854 	movx	@dptr,a
                    2029  10855 	C$easyax5043.c$1580$1$339 ==.
                          10856 ;	..\COMMON\easyax5043.c:1580: AX5043_PLLLOOP = pllloop_save; // restore loop settings (works if they came from the common section, unimportant if the came from the rx / tx section)
   2873 90 40 30          10857 	mov	dptr,#_AX5043_PLLLOOP
   2876 EF                10858 	mov	a,r7
   2877 F0                10859 	movx	@dptr,a
                    202E  10860 	C$easyax5043.c$1581$1$339 ==.
                          10861 ;	..\COMMON\easyax5043.c:1581: AX5043_PLLCPI = pllcpi_save;
   2878 90 40 31          10862 	mov	dptr,#_AX5043_PLLCPI
   287B EE                10863 	mov	a,r6
   287C F0                10864 	movx	@dptr,a
                    2033  10865 	C$easyax5043.c$1583$1$339 ==.
                          10866 ;	..\COMMON\easyax5043.c:1583: axradio_mode = AXRADIO_MODE_OFF;
   287D 75 0A 01          10867 	mov	_axradio_mode,#0x01
                    2036  10868 	C$easyax5043.c$1584$1$339 ==.
                          10869 ;	..\COMMON\easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   2880 7F 00             10870 	mov	r7,#0x00
   2882                   10871 00135$:
   2882 90 56 0E          10872 	mov	dptr,#_axradio_phy_nrchannels
   2885 E4                10873 	clr	a
   2886 93                10874 	movc	a,@a+dptr
   2887 FE                10875 	mov	r6,a
   2888 C3                10876 	clr	c
   2889 EF                10877 	mov	a,r7
   288A 9E                10878 	subb	a,r6
   288B 50 24             10879 	jnc	00138$
                    2043  10880 	C$easyax5043.c$1585$1$339 ==.
                          10881 ;	..\COMMON\easyax5043.c:1585: if ((axradio_phy_chanpllrng_rx[i] | axradio_phy_chanpllrng_tx[i]) & 0x20)
   288D EF                10882 	mov	a,r7
   288E 24 00             10883 	add	a,#_axradio_phy_chanpllrng_rx
   2890 F5 82             10884 	mov	dpl,a
   2892 E4                10885 	clr	a
   2893 34 00             10886 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2895 F5 83             10887 	mov	dph,a
   2897 E0                10888 	movx	a,@dptr
   2898 FE                10889 	mov	r6,a
   2899 EF                10890 	mov	a,r7
   289A 24 01             10891 	add	a,#_axradio_phy_chanpllrng_tx
   289C F5 82             10892 	mov	dpl,a
   289E E4                10893 	clr	a
   289F 34 00             10894 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   28A1 F5 83             10895 	mov	dph,a
   28A3 E0                10896 	movx	a,@dptr
   28A4 FD                10897 	mov	r5,a
   28A5 4E                10898 	orl	a,r6
   28A6 30 E5 05          10899 	jnb	acc.5,00137$
                    205F  10900 	C$easyax5043.c$1586$1$339 ==.
                          10901 ;	..\COMMON\easyax5043.c:1586: return AXRADIO_ERR_RANGING;
   28A9 75 82 06          10902 	mov	dpl,#0x06
   28AC 80 06             10903 	sjmp	00139$
   28AE                   10904 00137$:
                    2064  10905 	C$easyax5043.c$1584$1$339 ==.
                          10906 ;	..\COMMON\easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   28AE 0F                10907 	inc	r7
   28AF 80 D1             10908 	sjmp	00135$
   28B1                   10909 00138$:
                    2067  10910 	C$easyax5043.c$1588$1$339 ==.
                          10911 ;	..\COMMON\easyax5043.c:1588: return AXRADIO_ERR_NOERROR;
   28B1 75 82 00          10912 	mov	dpl,#0x00
   28B4                   10913 00139$:
                    206A  10914 	C$easyax5043.c$1589$1$339 ==.
                    206A  10915 	XG$axradio_init$0$0 ==.
   28B4 22                10916 	ret
                          10917 ;------------------------------------------------------------
                          10918 ;Allocation info for local variables in function 'axradio_cansleep'
                          10919 ;------------------------------------------------------------
                    206B  10920 	G$axradio_cansleep$0$0 ==.
                    206B  10921 	C$easyax5043.c$1591$1$339 ==.
                          10922 ;	..\COMMON\easyax5043.c:1591: __reentrantb uint8_t axradio_cansleep(void) __reentrant
                          10923 ;	-----------------------------------------
                          10924 ;	 function axradio_cansleep
                          10925 ;	-----------------------------------------
   28B5                   10926 _axradio_cansleep:
                    206B  10927 	C$easyax5043.c$1593$1$354 ==.
                          10928 ;	..\COMMON\easyax5043.c:1593: if (axradio_trxstate == trxstate_off || axradio_trxstate == trxstate_rxwor)
   28B5 E5 0B             10929 	mov	a,_axradio_trxstate
   28B7 60 05             10930 	jz	00101$
   28B9 74 02             10931 	mov	a,#0x02
   28BB B5 0B 05          10932 	cjne	a,_axradio_trxstate,00102$
   28BE                   10933 00101$:
                    2074  10934 	C$easyax5043.c$1594$1$354 ==.
                          10935 ;	..\COMMON\easyax5043.c:1594: return 1;
   28BE 75 82 01          10936 	mov	dpl,#0x01
   28C1 80 03             10937 	sjmp	00104$
   28C3                   10938 00102$:
                    2079  10939 	C$easyax5043.c$1595$1$354 ==.
                          10940 ;	..\COMMON\easyax5043.c:1595: return 0;
   28C3 75 82 00          10941 	mov	dpl,#0x00
   28C6                   10942 00104$:
                    207C  10943 	C$easyax5043.c$1596$1$354 ==.
                    207C  10944 	XG$axradio_cansleep$0$0 ==.
   28C6 22                10945 	ret
                          10946 ;------------------------------------------------------------
                          10947 ;Allocation info for local variables in function 'wtimer_cansleep_dummy'
                          10948 ;------------------------------------------------------------
                    207D  10949 	Feasyax5043$wtimer_cansleep_dummy$0$0 ==.
                    207D  10950 	C$easyax5043.c$1599$1$354 ==.
                          10951 ;	..\COMMON\easyax5043.c:1599: static void wtimer_cansleep_dummy(void) __naked
                          10952 ;	-----------------------------------------
                          10953 ;	 function wtimer_cansleep_dummy
                          10954 ;	-----------------------------------------
   28C7                   10955 _wtimer_cansleep_dummy:
                          10956 ;	naked function: no prologue.
                    207D  10957 	C$easyax5043.c$1613$1$356 ==.
                          10958 ;	..\COMMON\easyax5043.c:1613: __endasm;
                          10959 	.area WTCANSLP0 (CODE)
                          10960 	.area WTCANSLP1 (CODE)
                          10961 	.area WTCANSLP2 (CODE)
                          10962 	.area WTCANSLP1 (CODE)
   5B1C 12 28 B5          10963 	lcall _axradio_cansleep
   5B1F E5 82             10964 	mov a,dpl
   5B21 70 01             10965 	jnz 00000$
   5B23 22                10966 	ret
   5B24                   10967 	00000$:
                          10968 	.area CSEG (CODE)
                          10969 ;	naked function: no epilogue.
                    207D  10970 	C$easyax5043.c$1614$1$356 ==.
                    207D  10971 	XFeasyax5043$wtimer_cansleep_dummy$0$0 ==.
                          10972 ;------------------------------------------------------------
                          10973 ;Allocation info for local variables in function 'axradio_set_mode'
                          10974 ;------------------------------------------------------------
                          10975 ;mode                      Allocated to registers r7 
                          10976 ;r                         Allocated to registers r6 
                          10977 ;r                         Allocated to registers r6 
                          10978 ;iesave                    Allocated to registers r6 
                          10979 ;------------------------------------------------------------
                    207D  10980 	G$axradio_set_mode$0$0 ==.
                    207D  10981 	C$easyax5043.c$1617$1$356 ==.
                          10982 ;	..\COMMON\easyax5043.c:1617: uint8_t axradio_set_mode(uint8_t mode)
                          10983 ;	-----------------------------------------
                          10984 ;	 function axradio_set_mode
                          10985 ;	-----------------------------------------
   28C7                   10986 _axradio_set_mode:
                    207D  10987 	C$easyax5043.c$1619$1$358 ==.
                          10988 ;	..\COMMON\easyax5043.c:1619: if (mode == axradio_mode)
   28C7 E5 82             10989 	mov	a,dpl
   28C9 FF                10990 	mov	r7,a
   28CA B5 0A 06          10991 	cjne	a,_axradio_mode,00102$
                    2083  10992 	C$easyax5043.c$1620$1$358 ==.
                          10993 ;	..\COMMON\easyax5043.c:1620: return AXRADIO_ERR_NOERROR;
   28CD 75 82 00          10994 	mov	dpl,#0x00
   28D0 02 2C B2          10995 	ljmp	00161$
   28D3                   10996 00102$:
                    2089  10997 	C$easyax5043.c$1621$1$358 ==.
                          10998 ;	..\COMMON\easyax5043.c:1621: switch (axradio_mode) {
   28D3 AE 0A             10999 	mov	r6,_axradio_mode
   28D5 BE 00 02          11000 	cjne	r6,#0x00,00213$
   28D8 80 2E             11001 	sjmp	00103$
   28DA                   11002 00213$:
   28DA BE 02 02          11003 	cjne	r6,#0x02,00214$
   28DD 80 3D             11004 	sjmp	00106$
   28DF                   11005 00214$:
   28DF BE 03 02          11006 	cjne	r6,#0x03,00215$
   28E2 80 6C             11007 	sjmp	00114$
   28E4                   11008 00215$:
   28E4 BE 14 02          11009 	cjne	r6,#0x14,00216$
   28E7 80 67             11010 	sjmp	00114$
   28E9                   11011 00216$:
   28E9 BE 15 02          11012 	cjne	r6,#0x15,00217$
   28EC 80 62             11013 	sjmp	00114$
   28EE                   11014 00217$:
   28EE BE 16 02          11015 	cjne	r6,#0x16,00218$
   28F1 80 5D             11016 	sjmp	00114$
   28F3                   11017 00218$:
   28F3 BE 1C 03          11018 	cjne	r6,#0x1C,00219$
   28F6 02 29 A9          11019 	ljmp	00119$
   28F9                   11020 00219$:
   28F9 BE 1D 03          11021 	cjne	r6,#0x1D,00220$
   28FC 02 29 A9          11022 	ljmp	00119$
   28FF                   11023 00220$:
   28FF BE 1E 03          11024 	cjne	r6,#0x1E,00221$
   2902 02 29 A9          11025 	ljmp	00119$
   2905                   11026 00221$:
   2905 02 29 B6          11027 	ljmp	00120$
                    20BE  11028 	C$easyax5043.c$1622$2$359 ==.
                          11029 ;	..\COMMON\easyax5043.c:1622: case AXRADIO_MODE_UNINIT:
   2908                   11030 00103$:
                    20BE  11031 	C$easyax5043.c$1624$3$360 ==.
                          11032 ;	..\COMMON\easyax5043.c:1624: uint8_t __autodata r = axradio_init();
   2908 C0 07             11033 	push	ar7
   290A 12 25 C7          11034 	lcall	_axradio_init
   290D AE 82             11035 	mov	r6,dpl
   290F D0 07             11036 	pop	ar7
                    20C7  11037 	C$easyax5043.c$1625$3$360 ==.
                          11038 ;	..\COMMON\easyax5043.c:1625: if (r != AXRADIO_ERR_NOERROR)
   2911 EE                11039 	mov	a,r6
   2912 70 03             11040 	jnz	00222$
   2914 02 29 C0          11041 	ljmp	00121$
   2917                   11042 00222$:
                    20CD  11043 	C$easyax5043.c$1626$3$360 ==.
                          11044 ;	..\COMMON\easyax5043.c:1626: return r;
   2917 8E 82             11045 	mov	dpl,r6
   2919 02 2C B2          11046 	ljmp	00161$
                    20D2  11047 	C$easyax5043.c$1630$2$359 ==.
                          11048 ;	..\COMMON\easyax5043.c:1630: case AXRADIO_MODE_DEEPSLEEP:
   291C                   11049 00106$:
                    20D2  11050 	C$easyax5043.c$1632$3$361 ==.
                          11051 ;	..\COMMON\easyax5043.c:1632: uint8_t __autodata r = ax5043_wakeup_deepsleep();
   291C C0 07             11052 	push	ar7
   291E 12 3C 02          11053 	lcall	_ax5043_wakeup_deepsleep
   2921 AE 82             11054 	mov	r6,dpl
   2923 D0 07             11055 	pop	ar7
                    20DB  11056 	C$easyax5043.c$1633$3$361 ==.
                          11057 ;	..\COMMON\easyax5043.c:1633: if (r)
   2925 EE                11058 	mov	a,r6
   2926 60 06             11059 	jz	00108$
                    20DE  11060 	C$easyax5043.c$1634$3$361 ==.
                          11061 ;	..\COMMON\easyax5043.c:1634: return AXRADIO_ERR_NOCHIP;
   2928 75 82 05          11062 	mov	dpl,#0x05
   292B 02 2C B2          11063 	ljmp	00161$
   292E                   11064 00108$:
                    20E4  11065 	C$easyax5043.c$1635$3$361 ==.
                          11066 ;	..\COMMON\easyax5043.c:1635: ax5043_init_registers();
   292E C0 07             11067 	push	ar7
   2930 12 16 02          11068 	lcall	_ax5043_init_registers
                    20E9  11069 	C$easyax5043.c$1636$3$361 ==.
                          11070 ;	..\COMMON\easyax5043.c:1636: r = axradio_set_channel(axradio_curchannel);
   2933 90 00 09          11071 	mov	dptr,#_axradio_curchannel
   2936 E0                11072 	movx	a,@dptr
   2937 F5 82             11073 	mov	dpl,a
   2939 12 2C B7          11074 	lcall	_axradio_set_channel
   293C AE 82             11075 	mov	r6,dpl
   293E D0 07             11076 	pop	ar7
                    20F6  11077 	C$easyax5043.c$1637$3$361 ==.
                          11078 ;	..\COMMON\easyax5043.c:1637: if (r != AXRADIO_ERR_NOERROR)
   2940 EE                11079 	mov	a,r6
   2941 60 05             11080 	jz	00110$
                    20F9  11081 	C$easyax5043.c$1638$3$361 ==.
                          11082 ;	..\COMMON\easyax5043.c:1638: return r;
   2943 8E 82             11083 	mov	dpl,r6
   2945 02 2C B2          11084 	ljmp	00161$
   2948                   11085 00110$:
                    20FE  11086 	C$easyax5043.c$1639$3$361 ==.
                          11087 ;	..\COMMON\easyax5043.c:1639: axradio_trxstate = trxstate_off;
   2948 75 0B 00          11088 	mov	_axradio_trxstate,#0x00
                    2101  11089 	C$easyax5043.c$1640$3$361 ==.
                          11090 ;	..\COMMON\easyax5043.c:1640: axradio_mode = AXRADIO_MODE_OFF;
   294B 75 0A 01          11091 	mov	_axradio_mode,#0x01
                    2104  11092 	C$easyax5043.c$1641$3$361 ==.
                          11093 ;	..\COMMON\easyax5043.c:1641: break;
                    2104  11094 	C$easyax5043.c$1647$2$359 ==.
                          11095 ;	..\COMMON\easyax5043.c:1647: case AXRADIO_MODE_CW_TRANSMIT:
   294E 80 70             11096 	sjmp	00121$
   2950                   11097 00114$:
                    2106  11098 	C$easyax5043.c$1649$3$362 ==.
                          11099 ;	..\COMMON\easyax5043.c:1649: uint8_t __autodata iesave = IE & 0x80;
   2950 74 80             11100 	mov	a,#0x80
   2952 55 A8             11101 	anl	a,_IE
   2954 FE                11102 	mov	r6,a
                    210B  11103 	C$easyax5043.c$1650$3$362 ==.
                          11104 ;	..\COMMON\easyax5043.c:1650: EA = 0;
   2955 C2 AF             11105 	clr	_EA
                    210D  11106 	C$easyax5043.c$1651$3$362 ==.
                          11107 ;	..\COMMON\easyax5043.c:1651: if (axradio_trxstate == trxstate_off) {
   2957 E5 0B             11108 	mov	a,_axradio_trxstate
   2959 70 38             11109 	jnz	00116$
                    2111  11110 	C$easyax5043.c$1652$4$363 ==.
                          11111 ;	..\COMMON\easyax5043.c:1652: update_timeanchor();
   295B C0 07             11112 	push	ar7
   295D C0 06             11113 	push	ar6
   295F 12 08 4A          11114 	lcall	_update_timeanchor
                    2118  11115 	C$easyax5043.c$1653$4$363 ==.
                          11116 ;	..\COMMON\easyax5043.c:1653: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   2962 90 02 75          11117 	mov	dptr,#_axradio_cb_transmitend
   2965 12 50 73          11118 	lcall	_wtimer_remove_callback
                    211E  11119 	C$easyax5043.c$1654$4$363 ==.
                          11120 ;	..\COMMON\easyax5043.c:1654: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   2968 90 02 7A          11121 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   296B E4                11122 	clr	a
   296C F0                11123 	movx	@dptr,a
                    2123  11124 	C$easyax5043.c$1655$4$363 ==.
                          11125 ;	..\COMMON\easyax5043.c:1655: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   296D 90 00 1A          11126 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2970 E0                11127 	movx	a,@dptr
   2971 FA                11128 	mov	r2,a
   2972 A3                11129 	inc	dptr
   2973 E0                11130 	movx	a,@dptr
   2974 FB                11131 	mov	r3,a
   2975 A3                11132 	inc	dptr
   2976 E0                11133 	movx	a,@dptr
   2977 FC                11134 	mov	r4,a
   2978 A3                11135 	inc	dptr
   2979 E0                11136 	movx	a,@dptr
   297A FD                11137 	mov	r5,a
   297B 90 02 7B          11138 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   297E EA                11139 	mov	a,r2
   297F F0                11140 	movx	@dptr,a
   2980 A3                11141 	inc	dptr
   2981 EB                11142 	mov	a,r3
   2982 F0                11143 	movx	@dptr,a
   2983 A3                11144 	inc	dptr
   2984 EC                11145 	mov	a,r4
   2985 F0                11146 	movx	@dptr,a
   2986 A3                11147 	inc	dptr
   2987 ED                11148 	mov	a,r5
   2988 F0                11149 	movx	@dptr,a
                    213F  11150 	C$easyax5043.c$1656$4$363 ==.
                          11151 ;	..\COMMON\easyax5043.c:1656: wtimer_add_callback(&axradio_cb_transmitend.cb);
   2989 90 02 75          11152 	mov	dptr,#_axradio_cb_transmitend
   298C 12 44 48          11153 	lcall	_wtimer_add_callback
   298F D0 06             11154 	pop	ar6
   2991 D0 07             11155 	pop	ar7
   2993                   11156 00116$:
                    2149  11157 	C$easyax5043.c$1658$3$362 ==.
                          11158 ;	..\COMMON\easyax5043.c:1658: ax5043_off();
   2993 C0 07             11159 	push	ar7
   2995 C0 06             11160 	push	ar6
   2997 12 14 86          11161 	lcall	_ax5043_off
   299A D0 06             11162 	pop	ar6
                    2152  11163 	C$easyax5043.c$1659$3$362 ==.
                          11164 ;	..\COMMON\easyax5043.c:1659: IE |= iesave;
   299C EE                11165 	mov	a,r6
   299D 42 A8             11166 	orl	_IE,a
                    2155  11167 	C$easyax5043.c$1661$3$362 ==.
                          11168 ;	..\COMMON\easyax5043.c:1661: ax5043_init_registers();
   299F 12 16 02          11169 	lcall	_ax5043_init_registers
   29A2 D0 07             11170 	pop	ar7
                    215A  11171 	C$easyax5043.c$1662$3$362 ==.
                          11172 ;	..\COMMON\easyax5043.c:1662: axradio_mode = AXRADIO_MODE_OFF;
   29A4 75 0A 01          11173 	mov	_axradio_mode,#0x01
                    215D  11174 	C$easyax5043.c$1663$3$362 ==.
                          11175 ;	..\COMMON\easyax5043.c:1663: break;
                    215D  11176 	C$easyax5043.c$1668$2$359 ==.
                          11177 ;	..\COMMON\easyax5043.c:1668: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   29A7 80 17             11178 	sjmp	00121$
   29A9                   11179 00119$:
                    215F  11180 	C$easyax5043.c$1669$2$359 ==.
                          11181 ;	..\COMMON\easyax5043.c:1669: ax5043_off();
   29A9 C0 07             11182 	push	ar7
   29AB 12 14 86          11183 	lcall	_ax5043_off
                    2164  11184 	C$easyax5043.c$1670$2$359 ==.
                          11185 ;	..\COMMON\easyax5043.c:1670: ax5043_init_registers();
   29AE 12 16 02          11186 	lcall	_ax5043_init_registers
   29B1 D0 07             11187 	pop	ar7
                    2169  11188 	C$easyax5043.c$1671$2$359 ==.
                          11189 ;	..\COMMON\easyax5043.c:1671: axradio_mode = AXRADIO_MODE_OFF;
   29B3 75 0A 01          11190 	mov	_axradio_mode,#0x01
                    216C  11191 	C$easyax5043.c$1673$2$359 ==.
                          11192 ;	..\COMMON\easyax5043.c:1673: default:
   29B6                   11193 00120$:
                    216C  11194 	C$easyax5043.c$1674$2$359 ==.
                          11195 ;	..\COMMON\easyax5043.c:1674: ax5043_off();
   29B6 C0 07             11196 	push	ar7
   29B8 12 14 86          11197 	lcall	_ax5043_off
   29BB D0 07             11198 	pop	ar7
                    2173  11199 	C$easyax5043.c$1675$2$359 ==.
                          11200 ;	..\COMMON\easyax5043.c:1675: axradio_mode = AXRADIO_MODE_OFF;
   29BD 75 0A 01          11201 	mov	_axradio_mode,#0x01
                    2176  11202 	C$easyax5043.c$1677$1$358 ==.
                          11203 ;	..\COMMON\easyax5043.c:1677: }
   29C0                   11204 00121$:
                    2176  11205 	C$easyax5043.c$1678$1$358 ==.
                          11206 ;	..\COMMON\easyax5043.c:1678: axradio_killallcb();
   29C0 C0 07             11207 	push	ar7
   29C2 12 25 9C          11208 	lcall	_axradio_killallcb
   29C5 D0 07             11209 	pop	ar7
                    217D  11210 	C$easyax5043.c$1679$1$358 ==.
                          11211 ;	..\COMMON\easyax5043.c:1679: if (mode == AXRADIO_MODE_UNINIT)
   29C7 EF                11212 	mov	a,r7
   29C8 70 06             11213 	jnz	00123$
                    2180  11214 	C$easyax5043.c$1680$1$358 ==.
                          11215 ;	..\COMMON\easyax5043.c:1680: return AXRADIO_ERR_NOTSUPPORTED;
   29CA 75 82 01          11216 	mov	dpl,#0x01
   29CD 02 2C B2          11217 	ljmp	00161$
   29D0                   11218 00123$:
                    2186  11219 	C$easyax5043.c$1681$1$358 ==.
                          11220 ;	..\COMMON\easyax5043.c:1681: axradio_syncstate = syncstate_off;
   29D0 90 00 04          11221 	mov	dptr,#_axradio_syncstate
   29D3 E4                11222 	clr	a
   29D4 F0                11223 	movx	@dptr,a
                    218B  11224 	C$easyax5043.c$1682$1$358 ==.
                          11225 ;	..\COMMON\easyax5043.c:1682: switch (mode) {
   29D5 EF                11226 	mov	a,r7
   29D6 24 DC             11227 	add	a,#0xff - 0x23
   29D8 50 03             11228 	jnc	00227$
   29DA 02 2C AF          11229 	ljmp	00159$
   29DD                   11230 00227$:
   29DD EF                11231 	mov	a,r7
   29DE 24 09             11232 	add	a,#(00228$-3-.)
   29E0 83                11233 	movc	a,@a+pc
   29E1 C0 E0             11234 	push	acc
   29E3 EF                11235 	mov	a,r7
   29E4 24 27             11236 	add	a,#(00229$-3-.)
   29E6 83                11237 	movc	a,@a+pc
   29E7 C0 E0             11238 	push	acc
   29E9 22                11239 	ret
   29EA                   11240 00228$:
   29EA AF                11241 	.db	00159$
   29EB 32                11242 	.db	00124$
   29EC 38                11243 	.db	00125$
   29ED 6F                11244 	.db	00154$
   29EE AF                11245 	.db	00159$
   29EF AF                11246 	.db	00159$
   29F0 AF                11247 	.db	00159$
   29F1 AF                11248 	.db	00159$
   29F2 AF                11249 	.db	00159$
   29F3 AF                11250 	.db	00159$
   29F4 AF                11251 	.db	00159$
   29F5 AF                11252 	.db	00159$
   29F6 AF                11253 	.db	00159$
   29F7 AF                11254 	.db	00159$
   29F8 AF                11255 	.db	00159$
   29F9 AF                11256 	.db	00159$
   29FA 44                11257 	.db	00126$
   29FB 59                11258 	.db	00128$
   29FC 44                11259 	.db	00127$
   29FD 59                11260 	.db	00129$
   29FE CE                11261 	.db	00137$
   29FF CE                11262 	.db	00138$
   2A00 CE                11263 	.db	00139$
   2A01 AF                11264 	.db	00159$
   2A02 6E                11265 	.db	00130$
   2A03 B6                11266 	.db	00135$
   2A04 6E                11267 	.db	00131$
   2A05 B6                11268 	.db	00136$
   2A06 3B                11269 	.db	00147$
   2A07 3B                11270 	.db	00148$
   2A08 3B                11271 	.db	00149$
   2A09 AF                11272 	.db	00159$
   2A0A B7                11273 	.db	00155$
   2A0B B7                11274 	.db	00156$
   2A0C 14                11275 	.db	00157$
   2A0D 14                11276 	.db	00158$
   2A0E                   11277 00229$:
   2A0E 2C                11278 	.db	00159$>>8
   2A0F 2A                11279 	.db	00124$>>8
   2A10 2A                11280 	.db	00125$>>8
   2A11 2B                11281 	.db	00154$>>8
   2A12 2C                11282 	.db	00159$>>8
   2A13 2C                11283 	.db	00159$>>8
   2A14 2C                11284 	.db	00159$>>8
   2A15 2C                11285 	.db	00159$>>8
   2A16 2C                11286 	.db	00159$>>8
   2A17 2C                11287 	.db	00159$>>8
   2A18 2C                11288 	.db	00159$>>8
   2A19 2C                11289 	.db	00159$>>8
   2A1A 2C                11290 	.db	00159$>>8
   2A1B 2C                11291 	.db	00159$>>8
   2A1C 2C                11292 	.db	00159$>>8
   2A1D 2C                11293 	.db	00159$>>8
   2A1E 2A                11294 	.db	00126$>>8
   2A1F 2A                11295 	.db	00128$>>8
   2A20 2A                11296 	.db	00127$>>8
   2A21 2A                11297 	.db	00129$>>8
   2A22 2A                11298 	.db	00137$>>8
   2A23 2A                11299 	.db	00138$>>8
   2A24 2A                11300 	.db	00139$>>8
   2A25 2C                11301 	.db	00159$>>8
   2A26 2A                11302 	.db	00130$>>8
   2A27 2A                11303 	.db	00135$>>8
   2A28 2A                11304 	.db	00131$>>8
   2A29 2A                11305 	.db	00136$>>8
   2A2A 2B                11306 	.db	00147$>>8
   2A2B 2B                11307 	.db	00148$>>8
   2A2C 2B                11308 	.db	00149$>>8
   2A2D 2C                11309 	.db	00159$>>8
   2A2E 2B                11310 	.db	00155$>>8
   2A2F 2B                11311 	.db	00156$>>8
   2A30 2C                11312 	.db	00157$>>8
   2A31 2C                11313 	.db	00158$>>8
                    21E8  11314 	C$easyax5043.c$1683$2$364 ==.
                          11315 ;	..\COMMON\easyax5043.c:1683: case AXRADIO_MODE_OFF:
   2A32                   11316 00124$:
                    21E8  11317 	C$easyax5043.c$1684$2$364 ==.
                          11318 ;	..\COMMON\easyax5043.c:1684: return AXRADIO_ERR_NOERROR;
   2A32 75 82 00          11319 	mov	dpl,#0x00
   2A35 02 2C B2          11320 	ljmp	00161$
                    21EE  11321 	C$easyax5043.c$1686$2$364 ==.
                          11322 ;	..\COMMON\easyax5043.c:1686: case AXRADIO_MODE_DEEPSLEEP:
   2A38                   11323 00125$:
                    21EE  11324 	C$easyax5043.c$1687$2$364 ==.
                          11325 ;	..\COMMON\easyax5043.c:1687: ax5043_enter_deepsleep();
   2A38 12 3B E0          11326 	lcall	_ax5043_enter_deepsleep
                    21F1  11327 	C$easyax5043.c$1688$2$364 ==.
                          11328 ;	..\COMMON\easyax5043.c:1688: axradio_mode = AXRADIO_MODE_DEEPSLEEP;
   2A3B 75 0A 02          11329 	mov	_axradio_mode,#0x02
                    21F4  11330 	C$easyax5043.c$1689$2$364 ==.
                          11331 ;	..\COMMON\easyax5043.c:1689: return AXRADIO_ERR_NOERROR;
   2A3E 75 82 00          11332 	mov	dpl,#0x00
   2A41 02 2C B2          11333 	ljmp	00161$
                    21FA  11334 	C$easyax5043.c$1691$2$364 ==.
                          11335 ;	..\COMMON\easyax5043.c:1691: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2A44                   11336 00126$:
                    21FA  11337 	C$easyax5043.c$1692$2$364 ==.
                          11338 ;	..\COMMON\easyax5043.c:1692: case AXRADIO_MODE_ACK_TRANSMIT:
   2A44                   11339 00127$:
                    21FA  11340 	C$easyax5043.c$1693$2$364 ==.
                          11341 ;	..\COMMON\easyax5043.c:1693: ax5043_init_registers_tx();
   2A44 C0 07             11342 	push	ar7
   2A46 12 08 E0          11343 	lcall	_ax5043_init_registers_tx
   2A49 D0 07             11344 	pop	ar7
                    2201  11345 	C$easyax5043.c$1694$2$364 ==.
                          11346 ;	..\COMMON\easyax5043.c:1694: axradio_ack_seqnr = 0xff;
   2A4B 90 00 0F          11347 	mov	dptr,#_axradio_ack_seqnr
   2A4E 74 FF             11348 	mov	a,#0xFF
   2A50 F0                11349 	movx	@dptr,a
                    2207  11350 	C$easyax5043.c$1695$2$364 ==.
                          11351 ;	..\COMMON\easyax5043.c:1695: axradio_mode = mode;
   2A51 8F 0A             11352 	mov	_axradio_mode,r7
                    2209  11353 	C$easyax5043.c$1696$2$364 ==.
                          11354 ;	..\COMMON\easyax5043.c:1696: return AXRADIO_ERR_NOERROR;
   2A53 75 82 00          11355 	mov	dpl,#0x00
   2A56 02 2C B2          11356 	ljmp	00161$
                    220F  11357 	C$easyax5043.c$1698$2$364 ==.
                          11358 ;	..\COMMON\easyax5043.c:1698: case AXRADIO_MODE_WOR_TRANSMIT:
   2A59                   11359 00128$:
                    220F  11360 	C$easyax5043.c$1699$2$364 ==.
                          11361 ;	..\COMMON\easyax5043.c:1699: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2A59                   11362 00129$:
                    220F  11363 	C$easyax5043.c$1700$2$364 ==.
                          11364 ;	..\COMMON\easyax5043.c:1700: ax5043_init_registers_tx();
   2A59 C0 07             11365 	push	ar7
   2A5B 12 08 E0          11366 	lcall	_ax5043_init_registers_tx
   2A5E D0 07             11367 	pop	ar7
                    2216  11368 	C$easyax5043.c$1701$2$364 ==.
                          11369 ;	..\COMMON\easyax5043.c:1701: axradio_ack_seqnr = 0xff;
   2A60 90 00 0F          11370 	mov	dptr,#_axradio_ack_seqnr
   2A63 74 FF             11371 	mov	a,#0xFF
   2A65 F0                11372 	movx	@dptr,a
                    221C  11373 	C$easyax5043.c$1702$2$364 ==.
                          11374 ;	..\COMMON\easyax5043.c:1702: axradio_mode = mode;
   2A66 8F 0A             11375 	mov	_axradio_mode,r7
                    221E  11376 	C$easyax5043.c$1703$2$364 ==.
                          11377 ;	..\COMMON\easyax5043.c:1703: return AXRADIO_ERR_NOERROR;
   2A68 75 82 00          11378 	mov	dpl,#0x00
   2A6B 02 2C B2          11379 	ljmp	00161$
                    2224  11380 	C$easyax5043.c$1705$2$364 ==.
                          11381 ;	..\COMMON\easyax5043.c:1705: case AXRADIO_MODE_ASYNC_RECEIVE:
   2A6E                   11382 00130$:
                    2224  11383 	C$easyax5043.c$1706$2$364 ==.
                          11384 ;	..\COMMON\easyax5043.c:1706: case AXRADIO_MODE_ACK_RECEIVE:
   2A6E                   11385 00131$:
                    2224  11386 	C$easyax5043.c$1707$2$364 ==.
                          11387 ;	..\COMMON\easyax5043.c:1707: ax5043_init_registers_rx();
   2A6E C0 07             11388 	push	ar7
   2A70 12 09 16          11389 	lcall	_ax5043_init_registers_rx
                    2229  11390 	C$easyax5043.c$1708$2$364 ==.
                          11391 ;	..\COMMON\easyax5043.c:1708: ax5043_receiver_on_continuous();
   2A73 12 13 41          11392 	lcall	_ax5043_receiver_on_continuous
   2A76 D0 07             11393 	pop	ar7
                    222E  11394 	C$easyax5043.c$1709$2$364 ==.
                          11395 ;	..\COMMON\easyax5043.c:1709: axradio_ack_seqnr = 0xff;
   2A78 90 00 0F          11396 	mov	dptr,#_axradio_ack_seqnr
   2A7B 74 FF             11397 	mov	a,#0xFF
   2A7D F0                11398 	movx	@dptr,a
                    2234  11399 	C$easyax5043.c$1710$2$364 ==.
                          11400 ;	..\COMMON\easyax5043.c:1710: axradio_mode = mode;
   2A7E 8F 0A             11401 	mov	_axradio_mode,r7
                    2236  11402 	C$easyax5043.c$1711$2$364 ==.
                          11403 ;	..\COMMON\easyax5043.c:1711: enablecs:
   2A80                   11404 00132$:
                    2236  11405 	C$easyax5043.c$1712$2$364 ==.
                          11406 ;	..\COMMON\easyax5043.c:1712: if (axradio_phy_cs_enabled) {
   2A80 90 56 1D          11407 	mov	dptr,#_axradio_phy_cs_enabled
   2A83 E4                11408 	clr	a
   2A84 93                11409 	movc	a,@a+dptr
   2A85 FE                11410 	mov	r6,a
   2A86 60 28             11411 	jz	00134$
                    223E  11412 	C$easyax5043.c$1713$3$365 ==.
                          11413 ;	..\COMMON\easyax5043.c:1713: wtimer_remove(&axradio_timer);
   2A88 90 02 89          11414 	mov	dptr,#_axradio_timer
   2A8B 12 4D 58          11415 	lcall	_wtimer_remove
                    2244  11416 	C$easyax5043.c$1714$3$365 ==.
                          11417 ;	..\COMMON\easyax5043.c:1714: axradio_timer.time = axradio_phy_cs_period;
   2A8E 90 56 1B          11418 	mov	dptr,#_axradio_phy_cs_period
   2A91 E4                11419 	clr	a
   2A92 93                11420 	movc	a,@a+dptr
   2A93 FD                11421 	mov	r5,a
   2A94 74 01             11422 	mov	a,#0x01
   2A96 93                11423 	movc	a,@a+dptr
   2A97 FE                11424 	mov	r6,a
   2A98 7C 00             11425 	mov	r4,#0x00
   2A9A 7B 00             11426 	mov	r3,#0x00
   2A9C 90 02 8D          11427 	mov	dptr,#(_axradio_timer + 0x0004)
   2A9F ED                11428 	mov	a,r5
   2AA0 F0                11429 	movx	@dptr,a
   2AA1 A3                11430 	inc	dptr
   2AA2 EE                11431 	mov	a,r6
   2AA3 F0                11432 	movx	@dptr,a
   2AA4 A3                11433 	inc	dptr
   2AA5 EC                11434 	mov	a,r4
   2AA6 F0                11435 	movx	@dptr,a
   2AA7 A3                11436 	inc	dptr
   2AA8 EB                11437 	mov	a,r3
   2AA9 F0                11438 	movx	@dptr,a
                    2260  11439 	C$easyax5043.c$1715$3$365 ==.
                          11440 ;	..\COMMON\easyax5043.c:1715: wtimer0_addrelative(&axradio_timer);
   2AAA 90 02 89          11441 	mov	dptr,#_axradio_timer
   2AAD 12 44 62          11442 	lcall	_wtimer0_addrelative
   2AB0                   11443 00134$:
                    2266  11444 	C$easyax5043.c$1717$2$364 ==.
                          11445 ;	..\COMMON\easyax5043.c:1717: return AXRADIO_ERR_NOERROR;
   2AB0 75 82 00          11446 	mov	dpl,#0x00
   2AB3 02 2C B2          11447 	ljmp	00161$
                    226C  11448 	C$easyax5043.c$1719$2$364 ==.
                          11449 ;	..\COMMON\easyax5043.c:1719: case AXRADIO_MODE_WOR_RECEIVE:
   2AB6                   11450 00135$:
                    226C  11451 	C$easyax5043.c$1720$2$364 ==.
                          11452 ;	..\COMMON\easyax5043.c:1720: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   2AB6                   11453 00136$:
                    226C  11454 	C$easyax5043.c$1721$2$364 ==.
                          11455 ;	..\COMMON\easyax5043.c:1721: ax5043_init_registers_rx();
   2AB6 C0 07             11456 	push	ar7
   2AB8 12 09 16          11457 	lcall	_ax5043_init_registers_rx
                    2271  11458 	C$easyax5043.c$1722$2$364 ==.
                          11459 ;	..\COMMON\easyax5043.c:1722: ax5043_receiver_on_wor();
   2ABB 12 13 DB          11460 	lcall	_ax5043_receiver_on_wor
   2ABE D0 07             11461 	pop	ar7
                    2276  11462 	C$easyax5043.c$1723$2$364 ==.
                          11463 ;	..\COMMON\easyax5043.c:1723: axradio_ack_seqnr = 0xff;
   2AC0 90 00 0F          11464 	mov	dptr,#_axradio_ack_seqnr
   2AC3 74 FF             11465 	mov	a,#0xFF
   2AC5 F0                11466 	movx	@dptr,a
                    227C  11467 	C$easyax5043.c$1724$2$364 ==.
                          11468 ;	..\COMMON\easyax5043.c:1724: axradio_mode = mode;
   2AC6 8F 0A             11469 	mov	_axradio_mode,r7
                    227E  11470 	C$easyax5043.c$1725$2$364 ==.
                          11471 ;	..\COMMON\easyax5043.c:1725: return AXRADIO_ERR_NOERROR;
   2AC8 75 82 00          11472 	mov	dpl,#0x00
   2ACB 02 2C B2          11473 	ljmp	00161$
                    2284  11474 	C$easyax5043.c$1727$2$364 ==.
                          11475 ;	..\COMMON\easyax5043.c:1727: case AXRADIO_MODE_STREAM_TRANSMIT:
   2ACE                   11476 00137$:
                    2284  11477 	C$easyax5043.c$1728$2$364 ==.
                          11478 ;	..\COMMON\easyax5043.c:1728: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2ACE                   11479 00138$:
                    2284  11480 	C$easyax5043.c$1729$2$364 ==.
                          11481 ;	..\COMMON\easyax5043.c:1729: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2ACE                   11482 00139$:
                    2284  11483 	C$easyax5043.c$1730$2$364 ==.
                          11484 ;	..\COMMON\easyax5043.c:1730: axradio_mode = mode;
   2ACE 8F 0A             11485 	mov	_axradio_mode,r7
                    2286  11486 	C$easyax5043.c$1731$2$364 ==.
                          11487 ;	..\COMMON\easyax5043.c:1731: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_UNENC)
   2AD0 74 15             11488 	mov	a,#0x15
   2AD2 B5 0A 05          11489 	cjne	a,_axradio_mode,00141$
                    228B  11490 	C$easyax5043.c$1732$2$364 ==.
                          11491 ;	..\COMMON\easyax5043.c:1732: AX5043_ENCODING = 0;
   2AD5 90 40 11          11492 	mov	dptr,#_AX5043_ENCODING
   2AD8 E4                11493 	clr	a
   2AD9 F0                11494 	movx	@dptr,a
   2ADA                   11495 00141$:
                    2290  11496 	C$easyax5043.c$1733$2$364 ==.
                          11497 ;	..\COMMON\easyax5043.c:1733: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_SCRAM)
   2ADA 74 16             11498 	mov	a,#0x16
   2ADC B5 0A 06          11499 	cjne	a,_axradio_mode,00143$
                    2295  11500 	C$easyax5043.c$1734$2$364 ==.
                          11501 ;	..\COMMON\easyax5043.c:1734: AX5043_ENCODING = 4;
   2ADF 90 40 11          11502 	mov	dptr,#_AX5043_ENCODING
   2AE2 74 04             11503 	mov	a,#0x04
   2AE4 F0                11504 	movx	@dptr,a
   2AE5                   11505 00143$:
                    229B  11506 	C$easyax5043.c$1735$2$364 ==.
                          11507 ;	..\COMMON\easyax5043.c:1735: ax5043_init_registers_tx();
   2AE5 12 08 E0          11508 	lcall	_ax5043_init_registers_tx
                    229E  11509 	C$easyax5043.c$1736$2$364 ==.
                          11510 ;	..\COMMON\easyax5043.c:1736: AX5043_FRAMING = 0;
   2AE8 90 40 12          11511 	mov	dptr,#_AX5043_FRAMING
   2AEB E4                11512 	clr	a
   2AEC F0                11513 	movx	@dptr,a
                    22A3  11514 	C$easyax5043.c$1737$2$364 ==.
                          11515 ;	..\COMMON\easyax5043.c:1737: ax5043_prepare_tx();
   2AED 12 14 60          11516 	lcall	_ax5043_prepare_tx
                    22A6  11517 	C$easyax5043.c$1738$2$364 ==.
                          11518 ;	..\COMMON\easyax5043.c:1738: axradio_trxstate = trxstate_txstream_xtalwait;
   2AF0 75 0B 0F          11519 	mov	_axradio_trxstate,#0x0F
                    22A9  11520 	C$easyax5043.c$1739$2$364 ==.
                          11521 ;	..\COMMON\easyax5043.c:1739: while (!(AX5043_POWSTAT & 0x08)) {}; // wait for modem vdd so writing the FIFO is safe
   2AF3                   11522 00144$:
   2AF3 90 40 03          11523 	mov	dptr,#_AX5043_POWSTAT
   2AF6 E0                11524 	movx	a,@dptr
   2AF7 FE                11525 	mov	r6,a
   2AF8 30 E3 F8          11526 	jnb	acc.3,00144$
                    22B1  11527 	C$easyax5043.c$1740$2$364 ==.
                          11528 ;	..\COMMON\easyax5043.c:1740: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   2AFB 90 40 28          11529 	mov	dptr,#_AX5043_FIFOSTAT
   2AFE 74 03             11530 	mov	a,#0x03
   2B00 F0                11531 	movx	@dptr,a
                    22B7  11532 	C$easyax5043.c$1741$2$364 ==.
                          11533 ;	..\COMMON\easyax5043.c:1741: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   2B01 90 40 0F          11534 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   2B04 E0                11535 	movx	a,@dptr
                    22BB  11536 	C$easyax5043.c$1742$2$364 ==.
                          11537 ;	..\COMMON\easyax5043.c:1742: update_timeanchor();
   2B05 12 08 4A          11538 	lcall	_update_timeanchor
                    22BE  11539 	C$easyax5043.c$1743$2$364 ==.
                          11540 ;	..\COMMON\easyax5043.c:1743: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   2B08 90 02 7F          11541 	mov	dptr,#_axradio_cb_transmitdata
   2B0B 12 50 73          11542 	lcall	_wtimer_remove_callback
                    22C4  11543 	C$easyax5043.c$1744$2$364 ==.
                          11544 ;	..\COMMON\easyax5043.c:1744: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   2B0E 90 02 84          11545 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   2B11 E4                11546 	clr	a
   2B12 F0                11547 	movx	@dptr,a
                    22C9  11548 	C$easyax5043.c$1745$2$364 ==.
                          11549 ;	..\COMMON\easyax5043.c:1745: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   2B13 90 00 1A          11550 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2B16 E0                11551 	movx	a,@dptr
   2B17 FB                11552 	mov	r3,a
   2B18 A3                11553 	inc	dptr
   2B19 E0                11554 	movx	a,@dptr
   2B1A FC                11555 	mov	r4,a
   2B1B A3                11556 	inc	dptr
   2B1C E0                11557 	movx	a,@dptr
   2B1D FD                11558 	mov	r5,a
   2B1E A3                11559 	inc	dptr
   2B1F E0                11560 	movx	a,@dptr
   2B20 FE                11561 	mov	r6,a
   2B21 90 02 85          11562 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   2B24 EB                11563 	mov	a,r3
   2B25 F0                11564 	movx	@dptr,a
   2B26 A3                11565 	inc	dptr
   2B27 EC                11566 	mov	a,r4
   2B28 F0                11567 	movx	@dptr,a
   2B29 A3                11568 	inc	dptr
   2B2A ED                11569 	mov	a,r5
   2B2B F0                11570 	movx	@dptr,a
   2B2C A3                11571 	inc	dptr
   2B2D EE                11572 	mov	a,r6
   2B2E F0                11573 	movx	@dptr,a
                    22E5  11574 	C$easyax5043.c$1746$2$364 ==.
                          11575 ;	..\COMMON\easyax5043.c:1746: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   2B2F 90 02 7F          11576 	mov	dptr,#_axradio_cb_transmitdata
   2B32 12 44 48          11577 	lcall	_wtimer_add_callback
                    22EB  11578 	C$easyax5043.c$1747$2$364 ==.
                          11579 ;	..\COMMON\easyax5043.c:1747: return AXRADIO_ERR_NOERROR;
   2B35 75 82 00          11580 	mov	dpl,#0x00
   2B38 02 2C B2          11581 	ljmp	00161$
                    22F1  11582 	C$easyax5043.c$1749$2$364 ==.
                          11583 ;	..\COMMON\easyax5043.c:1749: case AXRADIO_MODE_STREAM_RECEIVE:
   2B3B                   11584 00147$:
                    22F1  11585 	C$easyax5043.c$1750$2$364 ==.
                          11586 ;	..\COMMON\easyax5043.c:1750: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   2B3B                   11587 00148$:
                    22F1  11588 	C$easyax5043.c$1751$2$364 ==.
                          11589 ;	..\COMMON\easyax5043.c:1751: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   2B3B                   11590 00149$:
                    22F1  11591 	C$easyax5043.c$1752$2$364 ==.
                          11592 ;	..\COMMON\easyax5043.c:1752: ax5043_init_registers_rx();
   2B3B C0 07             11593 	push	ar7
   2B3D 12 09 16          11594 	lcall	_ax5043_init_registers_rx
   2B40 D0 07             11595 	pop	ar7
                    22F8  11596 	C$easyax5043.c$1753$2$364 ==.
                          11597 ;	..\COMMON\easyax5043.c:1753: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC)
   2B42 74 1D             11598 	mov	a,#0x1D
   2B44 B5 0A 05          11599 	cjne	a,_axradio_mode,00151$
                    22FD  11600 	C$easyax5043.c$1754$2$364 ==.
                          11601 ;	..\COMMON\easyax5043.c:1754: AX5043_ENCODING = 0;
   2B47 90 40 11          11602 	mov	dptr,#_AX5043_ENCODING
   2B4A E4                11603 	clr	a
   2B4B F0                11604 	movx	@dptr,a
   2B4C                   11605 00151$:
                    2302  11606 	C$easyax5043.c$1755$2$364 ==.
                          11607 ;	..\COMMON\easyax5043.c:1755: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   2B4C 74 1E             11608 	mov	a,#0x1E
   2B4E B5 0A 06          11609 	cjne	a,_axradio_mode,00153$
                    2307  11610 	C$easyax5043.c$1756$2$364 ==.
                          11611 ;	..\COMMON\easyax5043.c:1756: AX5043_ENCODING = 4;
   2B51 90 40 11          11612 	mov	dptr,#_AX5043_ENCODING
   2B54 74 04             11613 	mov	a,#0x04
   2B56 F0                11614 	movx	@dptr,a
   2B57                   11615 00153$:
                    230D  11616 	C$easyax5043.c$1757$2$364 ==.
                          11617 ;	..\COMMON\easyax5043.c:1757: AX5043_FRAMING = 0;
   2B57 90 40 12          11618 	mov	dptr,#_AX5043_FRAMING
   2B5A E4                11619 	clr	a
   2B5B F0                11620 	movx	@dptr,a
                    2312  11621 	C$easyax5043.c$1758$2$364 ==.
                          11622 ;	..\COMMON\easyax5043.c:1758: AX5043_PKTCHUNKSIZE = 8; // 64 byte
   2B5C 90 42 30          11623 	mov	dptr,#_AX5043_PKTCHUNKSIZE
   2B5F 74 08             11624 	mov	a,#0x08
   2B61 F0                11625 	movx	@dptr,a
                    2318  11626 	C$easyax5043.c$1759$2$364 ==.
                          11627 ;	..\COMMON\easyax5043.c:1759: AX5043_RXPARAMSETS = 0x00;
   2B62 90 41 17          11628 	mov	dptr,#_AX5043_RXPARAMSETS
   2B65 E4                11629 	clr	a
   2B66 F0                11630 	movx	@dptr,a
                    231D  11631 	C$easyax5043.c$1760$2$364 ==.
                          11632 ;	..\COMMON\easyax5043.c:1760: axradio_mode = mode;
   2B67 8F 0A             11633 	mov	_axradio_mode,r7
                    231F  11634 	C$easyax5043.c$1761$2$364 ==.
                          11635 ;	..\COMMON\easyax5043.c:1761: ax5043_receiver_on_continuous();
   2B69 12 13 41          11636 	lcall	_ax5043_receiver_on_continuous
                    2322  11637 	C$easyax5043.c$1762$2$364 ==.
                          11638 ;	..\COMMON\easyax5043.c:1762: goto enablecs;
   2B6C 02 2A 80          11639 	ljmp	00132$
                    2325  11640 	C$easyax5043.c$1764$2$364 ==.
                          11641 ;	..\COMMON\easyax5043.c:1764: case AXRADIO_MODE_CW_TRANSMIT:
   2B6F                   11642 00154$:
                    2325  11643 	C$easyax5043.c$1765$2$364 ==.
                          11644 ;	..\COMMON\easyax5043.c:1765: ax5043_init_registers_tx();
   2B6F 12 08 E0          11645 	lcall	_ax5043_init_registers_tx
                    2328  11646 	C$easyax5043.c$1766$2$364 ==.
                          11647 ;	..\COMMON\easyax5043.c:1766: AX5043_MODULATION = 8;   // Set an FSK mode
   2B72 90 40 10          11648 	mov	dptr,#_AX5043_MODULATION
   2B75 74 08             11649 	mov	a,#0x08
   2B77 F0                11650 	movx	@dptr,a
                    232E  11651 	C$easyax5043.c$1767$2$364 ==.
                          11652 ;	..\COMMON\easyax5043.c:1767: AX5043_FSKDEV2 = 0x00;
   2B78 90 41 61          11653 	mov	dptr,#_AX5043_FSKDEV2
                    2331  11654 	C$easyax5043.c$1768$2$364 ==.
                          11655 ;	..\COMMON\easyax5043.c:1768: AX5043_FSKDEV1 = 0x00;
                    2331  11656 	C$easyax5043.c$1769$2$364 ==.
                          11657 ;	..\COMMON\easyax5043.c:1769: AX5043_FSKDEV0 = 0x00;
                    2331  11658 	C$easyax5043.c$1770$2$364 ==.
                          11659 ;	..\COMMON\easyax5043.c:1770: AX5043_TXRATE2 = 0x00;
   2B7B E4                11660 	clr	a
   2B7C F0                11661 	movx	@dptr,a
   2B7D 90 41 62          11662 	mov	dptr,#_AX5043_FSKDEV1
   2B80 F0                11663 	movx	@dptr,a
   2B81 90 41 63          11664 	mov	dptr,#_AX5043_FSKDEV0
   2B84 F0                11665 	movx	@dptr,a
   2B85 90 41 65          11666 	mov	dptr,#_AX5043_TXRATE2
   2B88 F0                11667 	movx	@dptr,a
                    233F  11668 	C$easyax5043.c$1771$2$364 ==.
                          11669 ;	..\COMMON\easyax5043.c:1771: AX5043_TXRATE1 = 0x00;
   2B89 90 41 66          11670 	mov	dptr,#_AX5043_TXRATE1
   2B8C E4                11671 	clr	a
   2B8D F0                11672 	movx	@dptr,a
                    2344  11673 	C$easyax5043.c$1772$2$364 ==.
                          11674 ;	..\COMMON\easyax5043.c:1772: AX5043_TXRATE0 = 0x01;
   2B8E 90 41 67          11675 	mov	dptr,#_AX5043_TXRATE0
   2B91 74 01             11676 	mov	a,#0x01
   2B93 F0                11677 	movx	@dptr,a
                    234A  11678 	C$easyax5043.c$1773$2$364 ==.
                          11679 ;	..\COMMON\easyax5043.c:1773: AX5043_PINFUNCDATA = 0x04;
   2B94 90 40 23          11680 	mov	dptr,#_AX5043_PINFUNCDATA
   2B97 74 04             11681 	mov	a,#0x04
   2B99 F0                11682 	movx	@dptr,a
                    2350  11683 	C$easyax5043.c$1774$2$364 ==.
                          11684 ;	..\COMMON\easyax5043.c:1774: axradio_mode = AXRADIO_MODE_CW_TRANSMIT;
   2B9A 75 0A 03          11685 	mov	_axradio_mode,#0x03
                    2353  11686 	C$easyax5043.c$1775$2$364 ==.
                          11687 ;	..\COMMON\easyax5043.c:1775: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   2B9D 90 40 02          11688 	mov	dptr,#_AX5043_PWRMODE
   2BA0 74 07             11689 	mov	a,#0x07
   2BA2 F0                11690 	movx	@dptr,a
                    2359  11691 	C$easyax5043.c$1776$2$364 ==.
                          11692 ;	..\COMMON\easyax5043.c:1776: axradio_trxstate = trxstate_txcw_xtalwait;
   2BA3 75 0B 0E          11693 	mov	_axradio_trxstate,#0x0E
                    235C  11694 	C$easyax5043.c$1777$2$364 ==.
                          11695 ;	..\COMMON\easyax5043.c:1777: AX5043_IRQMASK0 = 0x00;
   2BA6 90 40 07          11696 	mov	dptr,#_AX5043_IRQMASK0
   2BA9 E4                11697 	clr	a
   2BAA F0                11698 	movx	@dptr,a
                    2361  11699 	C$easyax5043.c$1778$2$364 ==.
                          11700 ;	..\COMMON\easyax5043.c:1778: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   2BAB 90 40 06          11701 	mov	dptr,#_AX5043_IRQMASK1
   2BAE 74 01             11702 	mov	a,#0x01
   2BB0 F0                11703 	movx	@dptr,a
                    2367  11704 	C$easyax5043.c$1779$2$364 ==.
                          11705 ;	..\COMMON\easyax5043.c:1779: return AXRADIO_ERR_NOERROR;
   2BB1 75 82 00          11706 	mov	dpl,#0x00
   2BB4 02 2C B2          11707 	ljmp	00161$
                    236D  11708 	C$easyax5043.c$1781$2$364 ==.
                          11709 ;	..\COMMON\easyax5043.c:1781: case AXRADIO_MODE_SYNC_MASTER:
   2BB7                   11710 00155$:
                    236D  11711 	C$easyax5043.c$1782$2$364 ==.
                          11712 ;	..\COMMON\easyax5043.c:1782: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2BB7                   11713 00156$:
                    236D  11714 	C$easyax5043.c$1783$2$364 ==.
                          11715 ;	..\COMMON\easyax5043.c:1783: axradio_mode = mode;
   2BB7 8F 0A             11716 	mov	_axradio_mode,r7
                    236F  11717 	C$easyax5043.c$1784$2$364 ==.
                          11718 ;	..\COMMON\easyax5043.c:1784: axradio_syncstate = syncstate_master_normal;
   2BB9 90 00 04          11719 	mov	dptr,#_axradio_syncstate
   2BBC 74 03             11720 	mov	a,#0x03
   2BBE F0                11721 	movx	@dptr,a
                    2375  11722 	C$easyax5043.c$1786$2$364 ==.
                          11723 ;	..\COMMON\easyax5043.c:1786: wtimer_remove(&axradio_timer);
   2BBF 90 02 89          11724 	mov	dptr,#_axradio_timer
   2BC2 12 4D 58          11725 	lcall	_wtimer_remove
                    237B  11726 	C$easyax5043.c$1787$2$364 ==.
                          11727 ;	..\COMMON\easyax5043.c:1787: axradio_timer.time = 2;
   2BC5 90 02 8D          11728 	mov	dptr,#(_axradio_timer + 0x0004)
   2BC8 74 02             11729 	mov	a,#0x02
   2BCA F0                11730 	movx	@dptr,a
   2BCB A3                11731 	inc	dptr
   2BCC E4                11732 	clr	a
   2BCD F0                11733 	movx	@dptr,a
   2BCE A3                11734 	inc	dptr
   2BCF F0                11735 	movx	@dptr,a
   2BD0 A3                11736 	inc	dptr
   2BD1 F0                11737 	movx	@dptr,a
                    2388  11738 	C$easyax5043.c$1788$2$364 ==.
                          11739 ;	..\COMMON\easyax5043.c:1788: wtimer0_addrelative(&axradio_timer);
   2BD2 90 02 89          11740 	mov	dptr,#_axradio_timer
   2BD5 12 44 62          11741 	lcall	_wtimer0_addrelative
                    238E  11742 	C$easyax5043.c$1789$2$364 ==.
                          11743 ;	..\COMMON\easyax5043.c:1789: axradio_sync_time = axradio_timer.time;
   2BD8 90 02 8D          11744 	mov	dptr,#(_axradio_timer + 0x0004)
   2BDB E0                11745 	movx	a,@dptr
   2BDC FB                11746 	mov	r3,a
   2BDD A3                11747 	inc	dptr
   2BDE E0                11748 	movx	a,@dptr
   2BDF FC                11749 	mov	r4,a
   2BE0 A3                11750 	inc	dptr
   2BE1 E0                11751 	movx	a,@dptr
   2BE2 FD                11752 	mov	r5,a
   2BE3 A3                11753 	inc	dptr
   2BE4 E0                11754 	movx	a,@dptr
   2BE5 FE                11755 	mov	r6,a
   2BE6 90 00 10          11756 	mov	dptr,#_axradio_sync_time
   2BE9 EB                11757 	mov	a,r3
   2BEA F0                11758 	movx	@dptr,a
   2BEB A3                11759 	inc	dptr
   2BEC EC                11760 	mov	a,r4
   2BED F0                11761 	movx	@dptr,a
   2BEE A3                11762 	inc	dptr
   2BEF ED                11763 	mov	a,r5
   2BF0 F0                11764 	movx	@dptr,a
   2BF1 A3                11765 	inc	dptr
   2BF2 EE                11766 	mov	a,r6
   2BF3 F0                11767 	movx	@dptr,a
                    23AA  11768 	C$easyax5043.c$1790$2$364 ==.
                          11769 ;	..\COMMON\easyax5043.c:1790: axradio_sync_addtime(axradio_sync_xoscstartup);
   2BF4 90 56 4E          11770 	mov	dptr,#_axradio_sync_xoscstartup
   2BF7 E4                11771 	clr	a
   2BF8 93                11772 	movc	a,@a+dptr
   2BF9 FB                11773 	mov	r3,a
   2BFA 74 01             11774 	mov	a,#0x01
   2BFC 93                11775 	movc	a,@a+dptr
   2BFD FC                11776 	mov	r4,a
   2BFE 74 02             11777 	mov	a,#0x02
   2C00 93                11778 	movc	a,@a+dptr
   2C01 FD                11779 	mov	r5,a
   2C02 74 03             11780 	mov	a,#0x03
   2C04 93                11781 	movc	a,@a+dptr
   2C05 8B 82             11782 	mov	dpl,r3
   2C07 8C 83             11783 	mov	dph,r4
   2C09 8D F0             11784 	mov	b,r5
   2C0B 12 16 26          11785 	lcall	_axradio_sync_addtime
                    23C4  11786 	C$easyax5043.c$1791$2$364 ==.
                          11787 ;	..\COMMON\easyax5043.c:1791: return AXRADIO_ERR_NOERROR;
   2C0E 75 82 00          11788 	mov	dpl,#0x00
   2C11 02 2C B2          11789 	ljmp	00161$
                    23CA  11790 	C$easyax5043.c$1793$2$364 ==.
                          11791 ;	..\COMMON\easyax5043.c:1793: case AXRADIO_MODE_SYNC_SLAVE:
   2C14                   11792 00157$:
                    23CA  11793 	C$easyax5043.c$1794$2$364 ==.
                          11794 ;	..\COMMON\easyax5043.c:1794: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   2C14                   11795 00158$:
                    23CA  11796 	C$easyax5043.c$1795$2$364 ==.
                          11797 ;	..\COMMON\easyax5043.c:1795: axradio_mode = mode;
   2C14 8F 0A             11798 	mov	_axradio_mode,r7
                    23CC  11799 	C$easyax5043.c$1796$2$364 ==.
                          11800 ;	..\COMMON\easyax5043.c:1796: ax5043_init_registers_rx();
   2C16 12 09 16          11801 	lcall	_ax5043_init_registers_rx
                    23CF  11802 	C$easyax5043.c$1797$2$364 ==.
                          11803 ;	..\COMMON\easyax5043.c:1797: ax5043_receiver_on_continuous();
   2C19 12 13 41          11804 	lcall	_ax5043_receiver_on_continuous
                    23D2  11805 	C$easyax5043.c$1798$2$364 ==.
                          11806 ;	..\COMMON\easyax5043.c:1798: axradio_syncstate = syncstate_slave_synchunt;
   2C1C 90 00 04          11807 	mov	dptr,#_axradio_syncstate
   2C1F 74 06             11808 	mov	a,#0x06
   2C21 F0                11809 	movx	@dptr,a
                    23D8  11810 	C$easyax5043.c$1799$2$364 ==.
                          11811 ;	..\COMMON\easyax5043.c:1799: wtimer_remove(&axradio_timer);
   2C22 90 02 89          11812 	mov	dptr,#_axradio_timer
   2C25 12 4D 58          11813 	lcall	_wtimer_remove
                    23DE  11814 	C$easyax5043.c$1800$2$364 ==.
                          11815 ;	..\COMMON\easyax5043.c:1800: axradio_timer.time = axradio_sync_slave_initialsyncwindow;
   2C28 90 56 56          11816 	mov	dptr,#_axradio_sync_slave_initialsyncwindow
   2C2B E4                11817 	clr	a
   2C2C 93                11818 	movc	a,@a+dptr
   2C2D FC                11819 	mov	r4,a
   2C2E 74 01             11820 	mov	a,#0x01
   2C30 93                11821 	movc	a,@a+dptr
   2C31 FD                11822 	mov	r5,a
   2C32 74 02             11823 	mov	a,#0x02
   2C34 93                11824 	movc	a,@a+dptr
   2C35 FE                11825 	mov	r6,a
   2C36 74 03             11826 	mov	a,#0x03
   2C38 93                11827 	movc	a,@a+dptr
   2C39 FF                11828 	mov	r7,a
   2C3A 90 02 8D          11829 	mov	dptr,#(_axradio_timer + 0x0004)
   2C3D EC                11830 	mov	a,r4
   2C3E F0                11831 	movx	@dptr,a
   2C3F A3                11832 	inc	dptr
   2C40 ED                11833 	mov	a,r5
   2C41 F0                11834 	movx	@dptr,a
   2C42 A3                11835 	inc	dptr
   2C43 EE                11836 	mov	a,r6
   2C44 F0                11837 	movx	@dptr,a
   2C45 A3                11838 	inc	dptr
   2C46 EF                11839 	mov	a,r7
   2C47 F0                11840 	movx	@dptr,a
                    23FE  11841 	C$easyax5043.c$1801$2$364 ==.
                          11842 ;	..\COMMON\easyax5043.c:1801: wtimer0_addrelative(&axradio_timer);
   2C48 90 02 89          11843 	mov	dptr,#_axradio_timer
   2C4B 12 44 62          11844 	lcall	_wtimer0_addrelative
                    2404  11845 	C$easyax5043.c$1802$2$364 ==.
                          11846 ;	..\COMMON\easyax5043.c:1802: axradio_sync_time = axradio_timer.time;
   2C4E 90 02 8D          11847 	mov	dptr,#(_axradio_timer + 0x0004)
   2C51 E0                11848 	movx	a,@dptr
   2C52 FC                11849 	mov	r4,a
   2C53 A3                11850 	inc	dptr
   2C54 E0                11851 	movx	a,@dptr
   2C55 FD                11852 	mov	r5,a
   2C56 A3                11853 	inc	dptr
   2C57 E0                11854 	movx	a,@dptr
   2C58 FE                11855 	mov	r6,a
   2C59 A3                11856 	inc	dptr
   2C5A E0                11857 	movx	a,@dptr
   2C5B FF                11858 	mov	r7,a
   2C5C 90 00 10          11859 	mov	dptr,#_axradio_sync_time
   2C5F EC                11860 	mov	a,r4
   2C60 F0                11861 	movx	@dptr,a
   2C61 A3                11862 	inc	dptr
   2C62 ED                11863 	mov	a,r5
   2C63 F0                11864 	movx	@dptr,a
   2C64 A3                11865 	inc	dptr
   2C65 EE                11866 	mov	a,r6
   2C66 F0                11867 	movx	@dptr,a
   2C67 A3                11868 	inc	dptr
   2C68 EF                11869 	mov	a,r7
   2C69 F0                11870 	movx	@dptr,a
                    2420  11871 	C$easyax5043.c$1803$2$364 ==.
                          11872 ;	..\COMMON\easyax5043.c:1803: wtimer_remove_callback(&axradio_cb_receive.cb);
   2C6A 90 02 32          11873 	mov	dptr,#_axradio_cb_receive
   2C6D 12 50 73          11874 	lcall	_wtimer_remove_callback
                    2426  11875 	C$easyax5043.c$1804$2$364 ==.
                          11876 ;	..\COMMON\easyax5043.c:1804: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   2C70 75 36 00          11877 	mov	_memset_PARM_2,#0x00
   2C73 75 37 1E          11878 	mov	_memset_PARM_3,#0x1E
   2C76 75 38 00          11879 	mov	(_memset_PARM_3 + 1),#0x00
   2C79 90 02 36          11880 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2C7C 75 F0 00          11881 	mov	b,#0x00
   2C7F 12 43 D4          11882 	lcall	_memset
                    2438  11883 	C$easyax5043.c$1805$2$364 ==.
                          11884 ;	..\COMMON\easyax5043.c:1805: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   2C82 90 00 1A          11885 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2C85 E0                11886 	movx	a,@dptr
   2C86 FC                11887 	mov	r4,a
   2C87 A3                11888 	inc	dptr
   2C88 E0                11889 	movx	a,@dptr
   2C89 FD                11890 	mov	r5,a
   2C8A A3                11891 	inc	dptr
   2C8B E0                11892 	movx	a,@dptr
   2C8C FE                11893 	mov	r6,a
   2C8D A3                11894 	inc	dptr
   2C8E E0                11895 	movx	a,@dptr
   2C8F FF                11896 	mov	r7,a
   2C90 90 02 38          11897 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   2C93 EC                11898 	mov	a,r4
   2C94 F0                11899 	movx	@dptr,a
   2C95 A3                11900 	inc	dptr
   2C96 ED                11901 	mov	a,r5
   2C97 F0                11902 	movx	@dptr,a
   2C98 A3                11903 	inc	dptr
   2C99 EE                11904 	mov	a,r6
   2C9A F0                11905 	movx	@dptr,a
   2C9B A3                11906 	inc	dptr
   2C9C EF                11907 	mov	a,r7
   2C9D F0                11908 	movx	@dptr,a
                    2454  11909 	C$easyax5043.c$1806$2$364 ==.
                          11910 ;	..\COMMON\easyax5043.c:1806: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   2C9E 90 02 37          11911 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2CA1 74 09             11912 	mov	a,#0x09
   2CA3 F0                11913 	movx	@dptr,a
                    245A  11914 	C$easyax5043.c$1807$2$364 ==.
                          11915 ;	..\COMMON\easyax5043.c:1807: wtimer_add_callback(&axradio_cb_receive.cb);
   2CA4 90 02 32          11916 	mov	dptr,#_axradio_cb_receive
   2CA7 12 44 48          11917 	lcall	_wtimer_add_callback
                    2460  11918 	C$easyax5043.c$1808$2$364 ==.
                          11919 ;	..\COMMON\easyax5043.c:1808: return AXRADIO_ERR_NOERROR;
   2CAA 75 82 00          11920 	mov	dpl,#0x00
                    2463  11921 	C$easyax5043.c$1810$2$364 ==.
                          11922 ;	..\COMMON\easyax5043.c:1810: default:
   2CAD 80 03             11923 	sjmp	00161$
   2CAF                   11924 00159$:
                    2465  11925 	C$easyax5043.c$1811$2$364 ==.
                          11926 ;	..\COMMON\easyax5043.c:1811: return AXRADIO_ERR_NOTSUPPORTED;
   2CAF 75 82 01          11927 	mov	dpl,#0x01
                    2468  11928 	C$easyax5043.c$1812$1$358 ==.
                          11929 ;	..\COMMON\easyax5043.c:1812: }
   2CB2                   11930 00161$:
                    2468  11931 	C$easyax5043.c$1813$1$358 ==.
                    2468  11932 	XG$axradio_set_mode$0$0 ==.
   2CB2 22                11933 	ret
                          11934 ;------------------------------------------------------------
                          11935 ;Allocation info for local variables in function 'axradio_get_mode'
                          11936 ;------------------------------------------------------------
                    2469  11937 	G$axradio_get_mode$0$0 ==.
                    2469  11938 	C$easyax5043.c$1815$1$358 ==.
                          11939 ;	..\COMMON\easyax5043.c:1815: uint8_t axradio_get_mode(void)
                          11940 ;	-----------------------------------------
                          11941 ;	 function axradio_get_mode
                          11942 ;	-----------------------------------------
   2CB3                   11943 _axradio_get_mode:
                    2469  11944 	C$easyax5043.c$1817$1$368 ==.
                          11945 ;	..\COMMON\easyax5043.c:1817: return axradio_mode;
   2CB3 85 0A 82          11946 	mov	dpl,_axradio_mode
                    246C  11947 	C$easyax5043.c$1818$1$368 ==.
                    246C  11948 	XG$axradio_get_mode$0$0 ==.
   2CB6 22                11949 	ret
                          11950 ;------------------------------------------------------------
                          11951 ;Allocation info for local variables in function 'axradio_set_channel'
                          11952 ;------------------------------------------------------------
                          11953 ;chnum                     Allocated to registers r7 
                          11954 ;rng                       Allocated with name '_axradio_set_channel_rng_1_370'
                          11955 ;f                         Allocated to registers r3 r4 r5 r7 
                          11956 ;------------------------------------------------------------
                    246D  11957 	G$axradio_set_channel$0$0 ==.
                    246D  11958 	C$easyax5043.c$1820$1$368 ==.
                          11959 ;	..\COMMON\easyax5043.c:1820: uint8_t axradio_set_channel(uint8_t chnum)
                          11960 ;	-----------------------------------------
                          11961 ;	 function axradio_set_channel
                          11962 ;	-----------------------------------------
   2CB7                   11963 _axradio_set_channel:
   2CB7 AF 82             11964 	mov	r7,dpl
                    246F  11965 	C$easyax5043.c$1823$1$370 ==.
                          11966 ;	..\COMMON\easyax5043.c:1823: if (chnum >= axradio_phy_nrchannels)
   2CB9 90 56 0E          11967 	mov	dptr,#_axradio_phy_nrchannels
   2CBC E4                11968 	clr	a
   2CBD 93                11969 	movc	a,@a+dptr
   2CBE FE                11970 	mov	r6,a
   2CBF C3                11971 	clr	c
   2CC0 EF                11972 	mov	a,r7
   2CC1 9E                11973 	subb	a,r6
   2CC2 40 06             11974 	jc	00102$
                    247A  11975 	C$easyax5043.c$1824$1$370 ==.
                          11976 ;	..\COMMON\easyax5043.c:1824: return AXRADIO_ERR_INVALID;
   2CC4 75 82 04          11977 	mov	dpl,#0x04
   2CC7 02 2D 6A          11978 	ljmp	00108$
   2CCA                   11979 00102$:
                    2480  11980 	C$easyax5043.c$1825$1$370 ==.
                          11981 ;	..\COMMON\easyax5043.c:1825: axradio_curchannel = chnum;
   2CCA 90 00 09          11982 	mov	dptr,#_axradio_curchannel
   2CCD EF                11983 	mov	a,r7
   2CCE F0                11984 	movx	@dptr,a
                    2485  11985 	C$easyax5043.c$1826$1$370 ==.
                          11986 ;	..\COMMON\easyax5043.c:1826: rng = axradio_phy_chanpllrng_rx[chnum];
   2CCF EF                11987 	mov	a,r7
   2CD0 24 00             11988 	add	a,#_axradio_phy_chanpllrng_rx
   2CD2 F5 82             11989 	mov	dpl,a
   2CD4 E4                11990 	clr	a
   2CD5 34 00             11991 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2CD7 F5 83             11992 	mov	dph,a
   2CD9 E0                11993 	movx	a,@dptr
                    2490  11994 	C$easyax5043.c$1827$1$370 ==.
                          11995 ;	..\COMMON\easyax5043.c:1827: if (rng & 0x20)
   2CDA F5 36             11996 	mov	_axradio_set_channel_rng_1_370,a
   2CDC 30 E5 06          11997 	jnb	acc.5,00104$
                    2495  11998 	C$easyax5043.c$1828$1$370 ==.
                          11999 ;	..\COMMON\easyax5043.c:1828: return AXRADIO_ERR_RANGING;
   2CDF 75 82 06          12000 	mov	dpl,#0x06
   2CE2 02 2D 6A          12001 	ljmp	00108$
   2CE5                   12002 00104$:
                    249B  12003 	C$easyax5043.c$1830$2$371 ==.
                          12004 ;	..\COMMON\easyax5043.c:1830: uint32_t __autodata f = axradio_phy_chanfreq[chnum];
   2CE5 EF                12005 	mov	a,r7
   2CE6 75 F0 04          12006 	mov	b,#0x04
   2CE9 A4                12007 	mul	ab
   2CEA 24 0F             12008 	add	a,#_axradio_phy_chanfreq
   2CEC F5 82             12009 	mov	dpl,a
   2CEE 74 56             12010 	mov	a,#(_axradio_phy_chanfreq >> 8)
   2CF0 35 F0             12011 	addc	a,b
   2CF2 F5 83             12012 	mov	dph,a
   2CF4 E4                12013 	clr	a
   2CF5 93                12014 	movc	a,@a+dptr
   2CF6 FB                12015 	mov	r3,a
   2CF7 A3                12016 	inc	dptr
   2CF8 E4                12017 	clr	a
   2CF9 93                12018 	movc	a,@a+dptr
   2CFA FC                12019 	mov	r4,a
   2CFB A3                12020 	inc	dptr
   2CFC E4                12021 	clr	a
   2CFD 93                12022 	movc	a,@a+dptr
   2CFE FD                12023 	mov	r5,a
   2CFF A3                12024 	inc	dptr
   2D00 E4                12025 	clr	a
   2D01 93                12026 	movc	a,@a+dptr
   2D02 FF                12027 	mov	r7,a
                    24B9  12028 	C$easyax5043.c$1831$2$371 ==.
                          12029 ;	..\COMMON\easyax5043.c:1831: f += axradio_curfreqoffset;
   2D03 90 00 0A          12030 	mov	dptr,#_axradio_curfreqoffset
   2D06 E0                12031 	movx	a,@dptr
   2D07 F8                12032 	mov	r0,a
   2D08 A3                12033 	inc	dptr
   2D09 E0                12034 	movx	a,@dptr
   2D0A F9                12035 	mov	r1,a
   2D0B A3                12036 	inc	dptr
   2D0C E0                12037 	movx	a,@dptr
   2D0D FA                12038 	mov	r2,a
   2D0E A3                12039 	inc	dptr
   2D0F E0                12040 	movx	a,@dptr
   2D10 FE                12041 	mov	r6,a
   2D11 E8                12042 	mov	a,r0
   2D12 2B                12043 	add	a,r3
   2D13 FB                12044 	mov	r3,a
   2D14 E9                12045 	mov	a,r1
   2D15 3C                12046 	addc	a,r4
   2D16 FC                12047 	mov	r4,a
   2D17 EA                12048 	mov	a,r2
   2D18 3D                12049 	addc	a,r5
   2D19 FD                12050 	mov	r5,a
   2D1A EE                12051 	mov	a,r6
   2D1B 3F                12052 	addc	a,r7
   2D1C FF                12053 	mov	r7,a
                    24D3  12054 	C$easyax5043.c$1832$2$371 ==.
                          12055 ;	..\COMMON\easyax5043.c:1832: if (AX5043_PLLLOOP & 0x80) {
   2D1D 90 40 30          12056 	mov	dptr,#_AX5043_PLLLOOP
   2D20 E0                12057 	movx	a,@dptr
   2D21 FE                12058 	mov	r6,a
   2D22 30 E7 1E          12059 	jnb	acc.7,00106$
                    24DB  12060 	C$easyax5043.c$1833$3$372 ==.
                          12061 ;	..\COMMON\easyax5043.c:1833: AX5043_PLLRANGINGA = rng & 0x0F;
   2D25 90 40 33          12062 	mov	dptr,#_AX5043_PLLRANGINGA
   2D28 74 0F             12063 	mov	a,#0x0F
   2D2A 55 36             12064 	anl	a,_axradio_set_channel_rng_1_370
   2D2C F0                12065 	movx	@dptr,a
                    24E3  12066 	C$easyax5043.c$1834$3$372 ==.
                          12067 ;	..\COMMON\easyax5043.c:1834: AX5043_FREQA0 = f;
   2D2D 90 40 37          12068 	mov	dptr,#_AX5043_FREQA0
   2D30 EB                12069 	mov	a,r3
   2D31 F0                12070 	movx	@dptr,a
                    24E8  12071 	C$easyax5043.c$1835$3$372 ==.
                          12072 ;	..\COMMON\easyax5043.c:1835: AX5043_FREQA1 = f >> 8;
   2D32 90 40 36          12073 	mov	dptr,#_AX5043_FREQA1
   2D35 EC                12074 	mov	a,r4
   2D36 F0                12075 	movx	@dptr,a
                    24ED  12076 	C$easyax5043.c$1836$3$372 ==.
                          12077 ;	..\COMMON\easyax5043.c:1836: AX5043_FREQA2 = f >> 16;
   2D37 90 40 35          12078 	mov	dptr,#_AX5043_FREQA2
   2D3A ED                12079 	mov	a,r5
   2D3B F0                12080 	movx	@dptr,a
                    24F2  12081 	C$easyax5043.c$1837$3$372 ==.
                          12082 ;	..\COMMON\easyax5043.c:1837: AX5043_FREQA3 = f >> 24;
   2D3C 90 40 34          12083 	mov	dptr,#_AX5043_FREQA3
   2D3F EF                12084 	mov	a,r7
   2D40 F0                12085 	movx	@dptr,a
   2D41 80 1C             12086 	sjmp	00107$
   2D43                   12087 00106$:
                    24F9  12088 	C$easyax5043.c$1839$3$373 ==.
                          12089 ;	..\COMMON\easyax5043.c:1839: AX5043_PLLRANGINGB = rng & 0x0F;
   2D43 90 40 3B          12090 	mov	dptr,#_AX5043_PLLRANGINGB
   2D46 74 0F             12091 	mov	a,#0x0F
   2D48 55 36             12092 	anl	a,_axradio_set_channel_rng_1_370
   2D4A F0                12093 	movx	@dptr,a
                    2501  12094 	C$easyax5043.c$1840$3$373 ==.
                          12095 ;	..\COMMON\easyax5043.c:1840: AX5043_FREQB0 = f;
   2D4B 90 40 3F          12096 	mov	dptr,#_AX5043_FREQB0
   2D4E EB                12097 	mov	a,r3
   2D4F F0                12098 	movx	@dptr,a
                    2506  12099 	C$easyax5043.c$1841$3$373 ==.
                          12100 ;	..\COMMON\easyax5043.c:1841: AX5043_FREQB1 = f >> 8;
   2D50 90 40 3E          12101 	mov	dptr,#_AX5043_FREQB1
   2D53 EC                12102 	mov	a,r4
   2D54 F0                12103 	movx	@dptr,a
                    250B  12104 	C$easyax5043.c$1842$3$373 ==.
                          12105 ;	..\COMMON\easyax5043.c:1842: AX5043_FREQB2 = f >> 16;
   2D55 90 40 3D          12106 	mov	dptr,#_AX5043_FREQB2
   2D58 ED                12107 	mov	a,r5
   2D59 F0                12108 	movx	@dptr,a
                    2510  12109 	C$easyax5043.c$1843$3$373 ==.
                          12110 ;	..\COMMON\easyax5043.c:1843: AX5043_FREQB3 = f >> 24;
   2D5A 90 40 3C          12111 	mov	dptr,#_AX5043_FREQB3
   2D5D EF                12112 	mov	a,r7
   2D5E F0                12113 	movx	@dptr,a
   2D5F                   12114 00107$:
                    2515  12115 	C$easyax5043.c$1846$1$370 ==.
                          12116 ;	..\COMMON\easyax5043.c:1846: AX5043_PLLLOOP ^= 0x80;
   2D5F 90 40 30          12117 	mov	dptr,#_AX5043_PLLLOOP
   2D62 E0                12118 	movx	a,@dptr
   2D63 FF                12119 	mov	r7,a
   2D64 64 80             12120 	xrl	a,#0x80
   2D66 F0                12121 	movx	@dptr,a
                    251D  12122 	C$easyax5043.c$1847$1$370 ==.
                          12123 ;	..\COMMON\easyax5043.c:1847: return AXRADIO_ERR_NOERROR;
   2D67 75 82 00          12124 	mov	dpl,#0x00
   2D6A                   12125 00108$:
                    2520  12126 	C$easyax5043.c$1848$1$370 ==.
                    2520  12127 	XG$axradio_set_channel$0$0 ==.
   2D6A 22                12128 	ret
                          12129 ;------------------------------------------------------------
                          12130 ;Allocation info for local variables in function 'axradio_get_channel'
                          12131 ;------------------------------------------------------------
                    2521  12132 	G$axradio_get_channel$0$0 ==.
                    2521  12133 	C$easyax5043.c$1850$1$370 ==.
                          12134 ;	..\COMMON\easyax5043.c:1850: uint8_t axradio_get_channel(void)
                          12135 ;	-----------------------------------------
                          12136 ;	 function axradio_get_channel
                          12137 ;	-----------------------------------------
   2D6B                   12138 _axradio_get_channel:
                    2521  12139 	C$easyax5043.c$1852$1$375 ==.
                          12140 ;	..\COMMON\easyax5043.c:1852: return axradio_curchannel;
   2D6B 90 00 09          12141 	mov	dptr,#_axradio_curchannel
   2D6E E0                12142 	movx	a,@dptr
                    2525  12143 	C$easyax5043.c$1853$1$375 ==.
                    2525  12144 	XG$axradio_get_channel$0$0 ==.
   2D6F F5 82             12145 	mov	dpl,a
   2D71 22                12146 	ret
                          12147 ;------------------------------------------------------------
                          12148 ;Allocation info for local variables in function 'axradio_get_pllrange'
                          12149 ;------------------------------------------------------------
                    2528  12150 	G$axradio_get_pllrange$0$0 ==.
                    2528  12151 	C$easyax5043.c$1855$1$375 ==.
                          12152 ;	..\COMMON\easyax5043.c:1855: uint8_t axradio_get_pllrange(void)
                          12153 ;	-----------------------------------------
                          12154 ;	 function axradio_get_pllrange
                          12155 ;	-----------------------------------------
   2D72                   12156 _axradio_get_pllrange:
                    2528  12157 	C$easyax5043.c$1857$1$377 ==.
                          12158 ;	..\COMMON\easyax5043.c:1857: return axradio_phy_chanpllrng_rx[axradio_curchannel] & 0x0F;
   2D72 90 00 09          12159 	mov	dptr,#_axradio_curchannel
   2D75 E0                12160 	movx	a,@dptr
   2D76 24 00             12161 	add	a,#_axradio_phy_chanpllrng_rx
   2D78 F5 82             12162 	mov	dpl,a
   2D7A E4                12163 	clr	a
   2D7B 34 00             12164 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2D7D F5 83             12165 	mov	dph,a
   2D7F E0                12166 	movx	a,@dptr
   2D80 FF                12167 	mov	r7,a
   2D81 74 0F             12168 	mov	a,#0x0F
   2D83 5F                12169 	anl	a,r7
   2D84 F5 82             12170 	mov	dpl,a
                    253C  12171 	C$easyax5043.c$1858$1$377 ==.
                    253C  12172 	XG$axradio_get_pllrange$0$0 ==.
   2D86 22                12173 	ret
                          12174 ;------------------------------------------------------------
                          12175 ;Allocation info for local variables in function 'axradio_get_pllrange_tx'
                          12176 ;------------------------------------------------------------
                    253D  12177 	G$axradio_get_pllrange_tx$0$0 ==.
                    253D  12178 	C$easyax5043.c$1860$1$377 ==.
                          12179 ;	..\COMMON\easyax5043.c:1860: uint8_t axradio_get_pllrange_tx(void)
                          12180 ;	-----------------------------------------
                          12181 ;	 function axradio_get_pllrange_tx
                          12182 ;	-----------------------------------------
   2D87                   12183 _axradio_get_pllrange_tx:
                    253D  12184 	C$easyax5043.c$1862$1$379 ==.
                          12185 ;	..\COMMON\easyax5043.c:1862: return axradio_phy_chanpllrng_tx[axradio_curchannel] & 0x0F;
   2D87 90 00 09          12186 	mov	dptr,#_axradio_curchannel
   2D8A E0                12187 	movx	a,@dptr
   2D8B 24 01             12188 	add	a,#_axradio_phy_chanpllrng_tx
   2D8D F5 82             12189 	mov	dpl,a
   2D8F E4                12190 	clr	a
   2D90 34 00             12191 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   2D92 F5 83             12192 	mov	dph,a
   2D94 E0                12193 	movx	a,@dptr
   2D95 FF                12194 	mov	r7,a
   2D96 74 0F             12195 	mov	a,#0x0F
   2D98 5F                12196 	anl	a,r7
   2D99 F5 82             12197 	mov	dpl,a
                    2551  12198 	C$easyax5043.c$1863$1$379 ==.
                    2551  12199 	XG$axradio_get_pllrange_tx$0$0 ==.
   2D9B 22                12200 	ret
                          12201 ;------------------------------------------------------------
                          12202 ;Allocation info for local variables in function 'axradio_set_curfreqoffset'
                          12203 ;------------------------------------------------------------
                          12204 ;offs                      Allocated to registers r4 r5 r6 r7 
                          12205 ;------------------------------------------------------------
                    2552  12206 	Feasyax5043$axradio_set_curfreqoffset$0$0 ==.
                    2552  12207 	C$easyax5043.c$1865$1$379 ==.
                          12208 ;	..\COMMON\easyax5043.c:1865: static uint8_t axradio_set_curfreqoffset(int32_t offs)
                          12209 ;	-----------------------------------------
                          12210 ;	 function axradio_set_curfreqoffset
                          12211 ;	-----------------------------------------
   2D9C                   12212 _axradio_set_curfreqoffset:
   2D9C AC 82             12213 	mov	r4,dpl
   2D9E AD 83             12214 	mov	r5,dph
   2DA0 AE F0             12215 	mov	r6,b
   2DA2 FF                12216 	mov	r7,a
                    2559  12217 	C$easyax5043.c$1867$1$381 ==.
                          12218 ;	..\COMMON\easyax5043.c:1867: axradio_curfreqoffset = offs;
   2DA3 90 00 0A          12219 	mov	dptr,#_axradio_curfreqoffset
   2DA6 EC                12220 	mov	a,r4
   2DA7 F0                12221 	movx	@dptr,a
   2DA8 A3                12222 	inc	dptr
   2DA9 ED                12223 	mov	a,r5
   2DAA F0                12224 	movx	@dptr,a
   2DAB A3                12225 	inc	dptr
   2DAC EE                12226 	mov	a,r6
   2DAD F0                12227 	movx	@dptr,a
   2DAE A3                12228 	inc	dptr
   2DAF EF                12229 	mov	a,r7
   2DB0 F0                12230 	movx	@dptr,a
                    2567  12231 	C$easyax5043.c$1868$1$381 ==.
                          12232 ;	..\COMMON\easyax5043.c:1868: if (checksignedlimit32(offs, axradio_phy_maxfreqoffset))
   2DB1 90 56 14          12233 	mov	dptr,#_axradio_phy_maxfreqoffset
   2DB4 E4                12234 	clr	a
   2DB5 93                12235 	movc	a,@a+dptr
   2DB6 C0 E0             12236 	push	acc
   2DB8 74 01             12237 	mov	a,#0x01
   2DBA 93                12238 	movc	a,@a+dptr
   2DBB C0 E0             12239 	push	acc
   2DBD 74 02             12240 	mov	a,#0x02
   2DBF 93                12241 	movc	a,@a+dptr
   2DC0 C0 E0             12242 	push	acc
   2DC2 74 03             12243 	mov	a,#0x03
   2DC4 93                12244 	movc	a,@a+dptr
   2DC5 C0 E0             12245 	push	acc
   2DC7 8C 82             12246 	mov	dpl,r4
   2DC9 8D 83             12247 	mov	dph,r5
   2DCB 8E F0             12248 	mov	b,r6
   2DCD EF                12249 	mov	a,r7
   2DCE 12 4B 1F          12250 	lcall	_checksignedlimit32
   2DD1 AF 82             12251 	mov	r7,dpl
   2DD3 E5 81             12252 	mov	a,sp
   2DD5 24 FC             12253 	add	a,#0xfc
   2DD7 F5 81             12254 	mov	sp,a
   2DD9 EF                12255 	mov	a,r7
   2DDA 60 05             12256 	jz	00102$
                    2592  12257 	C$easyax5043.c$1869$1$381 ==.
                          12258 ;	..\COMMON\easyax5043.c:1869: return AXRADIO_ERR_NOERROR;
   2DDC 75 82 00          12259 	mov	dpl,#0x00
   2DDF 80 5B             12260 	sjmp	00106$
   2DE1                   12261 00102$:
                    2597  12262 	C$easyax5043.c$1870$1$381 ==.
                          12263 ;	..\COMMON\easyax5043.c:1870: if (axradio_curfreqoffset < 0)
   2DE1 90 00 0A          12264 	mov	dptr,#_axradio_curfreqoffset
   2DE4 E0                12265 	movx	a,@dptr
   2DE5 FC                12266 	mov	r4,a
   2DE6 A3                12267 	inc	dptr
   2DE7 E0                12268 	movx	a,@dptr
   2DE8 FD                12269 	mov	r5,a
   2DE9 A3                12270 	inc	dptr
   2DEA E0                12271 	movx	a,@dptr
   2DEB FE                12272 	mov	r6,a
   2DEC A3                12273 	inc	dptr
   2DED E0                12274 	movx	a,@dptr
   2DEE FF                12275 	mov	r7,a
   2DEF 30 E7 27          12276 	jnb	acc.7,00104$
                    25A8  12277 	C$easyax5043.c$1871$1$381 ==.
                          12278 ;	..\COMMON\easyax5043.c:1871: axradio_curfreqoffset = -axradio_phy_maxfreqoffset;
   2DF2 90 56 14          12279 	mov	dptr,#_axradio_phy_maxfreqoffset
   2DF5 E4                12280 	clr	a
   2DF6 93                12281 	movc	a,@a+dptr
   2DF7 FC                12282 	mov	r4,a
   2DF8 74 01             12283 	mov	a,#0x01
   2DFA 93                12284 	movc	a,@a+dptr
   2DFB FD                12285 	mov	r5,a
   2DFC 74 02             12286 	mov	a,#0x02
   2DFE 93                12287 	movc	a,@a+dptr
   2DFF FE                12288 	mov	r6,a
   2E00 74 03             12289 	mov	a,#0x03
   2E02 93                12290 	movc	a,@a+dptr
   2E03 FF                12291 	mov	r7,a
   2E04 90 00 0A          12292 	mov	dptr,#_axradio_curfreqoffset
   2E07 C3                12293 	clr	c
   2E08 E4                12294 	clr	a
   2E09 9C                12295 	subb	a,r4
   2E0A F0                12296 	movx	@dptr,a
   2E0B E4                12297 	clr	a
   2E0C 9D                12298 	subb	a,r5
   2E0D A3                12299 	inc	dptr
   2E0E F0                12300 	movx	@dptr,a
   2E0F E4                12301 	clr	a
   2E10 9E                12302 	subb	a,r6
   2E11 A3                12303 	inc	dptr
   2E12 F0                12304 	movx	@dptr,a
   2E13 E4                12305 	clr	a
   2E14 9F                12306 	subb	a,r7
   2E15 A3                12307 	inc	dptr
   2E16 F0                12308 	movx	@dptr,a
   2E17 80 20             12309 	sjmp	00105$
   2E19                   12310 00104$:
                    25CF  12311 	C$easyax5043.c$1873$1$381 ==.
                          12312 ;	..\COMMON\easyax5043.c:1873: axradio_curfreqoffset = axradio_phy_maxfreqoffset;
   2E19 90 56 14          12313 	mov	dptr,#_axradio_phy_maxfreqoffset
   2E1C E4                12314 	clr	a
   2E1D 93                12315 	movc	a,@a+dptr
   2E1E FC                12316 	mov	r4,a
   2E1F 74 01             12317 	mov	a,#0x01
   2E21 93                12318 	movc	a,@a+dptr
   2E22 FD                12319 	mov	r5,a
   2E23 74 02             12320 	mov	a,#0x02
   2E25 93                12321 	movc	a,@a+dptr
   2E26 FE                12322 	mov	r6,a
   2E27 74 03             12323 	mov	a,#0x03
   2E29 93                12324 	movc	a,@a+dptr
   2E2A FF                12325 	mov	r7,a
   2E2B 90 00 0A          12326 	mov	dptr,#_axradio_curfreqoffset
   2E2E EC                12327 	mov	a,r4
   2E2F F0                12328 	movx	@dptr,a
   2E30 A3                12329 	inc	dptr
   2E31 ED                12330 	mov	a,r5
   2E32 F0                12331 	movx	@dptr,a
   2E33 A3                12332 	inc	dptr
   2E34 EE                12333 	mov	a,r6
   2E35 F0                12334 	movx	@dptr,a
   2E36 A3                12335 	inc	dptr
   2E37 EF                12336 	mov	a,r7
   2E38 F0                12337 	movx	@dptr,a
   2E39                   12338 00105$:
                    25EF  12339 	C$easyax5043.c$1874$1$381 ==.
                          12340 ;	..\COMMON\easyax5043.c:1874: return AXRADIO_ERR_INVALID;
   2E39 75 82 04          12341 	mov	dpl,#0x04
   2E3C                   12342 00106$:
                    25F2  12343 	C$easyax5043.c$1875$1$381 ==.
                    25F2  12344 	XFeasyax5043$axradio_set_curfreqoffset$0$0 ==.
   2E3C 22                12345 	ret
                          12346 ;------------------------------------------------------------
                          12347 ;Allocation info for local variables in function 'axradio_set_freqoffset'
                          12348 ;------------------------------------------------------------
                          12349 ;offs                      Allocated to registers r4 r5 r6 r7 
                          12350 ;ret                       Allocated to registers r7 
                          12351 ;ret2                      Allocated to registers r6 
                          12352 ;------------------------------------------------------------
                    25F3  12353 	G$axradio_set_freqoffset$0$0 ==.
                    25F3  12354 	C$easyax5043.c$1877$1$381 ==.
                          12355 ;	..\COMMON\easyax5043.c:1877: uint8_t axradio_set_freqoffset(int32_t offs)
                          12356 ;	-----------------------------------------
                          12357 ;	 function axradio_set_freqoffset
                          12358 ;	-----------------------------------------
   2E3D                   12359 _axradio_set_freqoffset:
                    25F3  12360 	C$easyax5043.c$1879$1$383 ==.
                          12361 ;	..\COMMON\easyax5043.c:1879: uint8_t __autodata ret = axradio_set_curfreqoffset(offs);
   2E3D 12 2D 9C          12362 	lcall	_axradio_set_curfreqoffset
   2E40 AF 82             12363 	mov	r7,dpl
                    25F8  12364 	C$easyax5043.c$1881$2$384 ==.
                          12365 ;	..\COMMON\easyax5043.c:1881: uint8_t __autodata ret2 = axradio_set_channel(axradio_curchannel);
   2E42 90 00 09          12366 	mov	dptr,#_axradio_curchannel
   2E45 E0                12367 	movx	a,@dptr
   2E46 F5 82             12368 	mov	dpl,a
   2E48 C0 07             12369 	push	ar7
   2E4A 12 2C B7          12370 	lcall	_axradio_set_channel
   2E4D AE 82             12371 	mov	r6,dpl
   2E4F D0 07             12372 	pop	ar7
                    2607  12373 	C$easyax5043.c$1882$2$384 ==.
                          12374 ;	..\COMMON\easyax5043.c:1882: if (ret == AXRADIO_ERR_NOERROR)
   2E51 EF                12375 	mov	a,r7
   2E52 70 02             12376 	jnz	00102$
                    260A  12377 	C$easyax5043.c$1883$2$384 ==.
                          12378 ;	..\COMMON\easyax5043.c:1883: ret = ret2;
   2E54 8E 07             12379 	mov	ar7,r6
   2E56                   12380 00102$:
                    260C  12381 	C$easyax5043.c$1885$1$383 ==.
                          12382 ;	..\COMMON\easyax5043.c:1885: return ret;
   2E56 8F 82             12383 	mov	dpl,r7
                    260E  12384 	C$easyax5043.c$1886$1$383 ==.
                    260E  12385 	XG$axradio_set_freqoffset$0$0 ==.
   2E58 22                12386 	ret
                          12387 ;------------------------------------------------------------
                          12388 ;Allocation info for local variables in function 'axradio_get_freqoffset'
                          12389 ;------------------------------------------------------------
                    260F  12390 	G$axradio_get_freqoffset$0$0 ==.
                    260F  12391 	C$easyax5043.c$1888$1$383 ==.
                          12392 ;	..\COMMON\easyax5043.c:1888: int32_t axradio_get_freqoffset(void)
                          12393 ;	-----------------------------------------
                          12394 ;	 function axradio_get_freqoffset
                          12395 ;	-----------------------------------------
   2E59                   12396 _axradio_get_freqoffset:
                    260F  12397 	C$easyax5043.c$1890$1$386 ==.
                          12398 ;	..\COMMON\easyax5043.c:1890: return axradio_curfreqoffset;
   2E59 90 00 0A          12399 	mov	dptr,#_axradio_curfreqoffset
   2E5C E0                12400 	movx	a,@dptr
   2E5D FC                12401 	mov	r4,a
   2E5E A3                12402 	inc	dptr
   2E5F E0                12403 	movx	a,@dptr
   2E60 FD                12404 	mov	r5,a
   2E61 A3                12405 	inc	dptr
   2E62 E0                12406 	movx	a,@dptr
   2E63 FE                12407 	mov	r6,a
   2E64 A3                12408 	inc	dptr
   2E65 E0                12409 	movx	a,@dptr
   2E66 8C 82             12410 	mov	dpl,r4
   2E68 8D 83             12411 	mov	dph,r5
   2E6A 8E F0             12412 	mov	b,r6
                    2622  12413 	C$easyax5043.c$1891$1$386 ==.
                    2622  12414 	XG$axradio_get_freqoffset$0$0 ==.
   2E6C 22                12415 	ret
                          12416 ;------------------------------------------------------------
                          12417 ;Allocation info for local variables in function 'axradio_set_local_address'
                          12418 ;------------------------------------------------------------
                          12419 ;addr                      Allocated to registers r5 r6 r7 
                          12420 ;------------------------------------------------------------
                    2623  12421 	G$axradio_set_local_address$0$0 ==.
                    2623  12422 	C$easyax5043.c$1893$1$386 ==.
                          12423 ;	..\COMMON\easyax5043.c:1893: void axradio_set_local_address(const struct axradio_address_mask *addr)
                          12424 ;	-----------------------------------------
                          12425 ;	 function axradio_set_local_address
                          12426 ;	-----------------------------------------
   2E6D                   12427 _axradio_set_local_address:
   2E6D AD 82             12428 	mov	r5,dpl
   2E6F AE 83             12429 	mov	r6,dph
   2E71 AF F0             12430 	mov	r7,b
                    2629  12431 	C$easyax5043.c$1895$1$388 ==.
                          12432 ;	..\COMMON\easyax5043.c:1895: memcpy_xdatageneric(&axradio_localaddr, addr, sizeof(axradio_localaddr));
   2E73 8D 36             12433 	mov	_memcpy_PARM_2,r5
   2E75 8E 37             12434 	mov	(_memcpy_PARM_2 + 1),r6
   2E77 8F 38             12435 	mov	(_memcpy_PARM_2 + 2),r7
   2E79 75 39 08          12436 	mov	_memcpy_PARM_3,#0x08
   2E7C 75 3A 00          12437 	mov	(_memcpy_PARM_3 + 1),#0x00
   2E7F 90 00 1E          12438 	mov	dptr,#_axradio_localaddr
   2E82 75 F0 00          12439 	mov	b,#0x00
   2E85 12 43 F3          12440 	lcall	_memcpy
                    263E  12441 	C$easyax5043.c$1896$1$388 ==.
                          12442 ;	..\COMMON\easyax5043.c:1896: axradio_setaddrregs();
   2E88 12 14 D7          12443 	lcall	_axradio_setaddrregs
                    2641  12444 	C$easyax5043.c$1897$1$388 ==.
                    2641  12445 	XG$axradio_set_local_address$0$0 ==.
   2E8B 22                12446 	ret
                          12447 ;------------------------------------------------------------
                          12448 ;Allocation info for local variables in function 'axradio_get_local_address'
                          12449 ;------------------------------------------------------------
                          12450 ;addr                      Allocated to registers r5 r6 r7 
                          12451 ;------------------------------------------------------------
                    2642  12452 	G$axradio_get_local_address$0$0 ==.
                    2642  12453 	C$easyax5043.c$1899$1$388 ==.
                          12454 ;	..\COMMON\easyax5043.c:1899: void axradio_get_local_address(struct axradio_address_mask *addr)
                          12455 ;	-----------------------------------------
                          12456 ;	 function axradio_get_local_address
                          12457 ;	-----------------------------------------
   2E8C                   12458 _axradio_get_local_address:
   2E8C AD 82             12459 	mov	r5,dpl
   2E8E AE 83             12460 	mov	r6,dph
   2E90 AF F0             12461 	mov	r7,b
                    2648  12462 	C$easyax5043.c$1901$1$390 ==.
                          12463 ;	..\COMMON\easyax5043.c:1901: memcpy_genericxdata(addr, &axradio_localaddr, sizeof(axradio_localaddr));
   2E92 75 36 1E          12464 	mov	_memcpy_PARM_2,#_axradio_localaddr
   2E95 75 37 00          12465 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2E98 75 38 00          12466 	mov	(_memcpy_PARM_2 + 2),#0x00
   2E9B 75 39 08          12467 	mov	_memcpy_PARM_3,#0x08
   2E9E 75 3A 00          12468 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EA1 8D 82             12469 	mov	dpl,r5
   2EA3 8E 83             12470 	mov	dph,r6
   2EA5 8F F0             12471 	mov	b,r7
   2EA7 12 43 F3          12472 	lcall	_memcpy
                    2660  12473 	C$easyax5043.c$1902$1$390 ==.
                    2660  12474 	XG$axradio_get_local_address$0$0 ==.
   2EAA 22                12475 	ret
                          12476 ;------------------------------------------------------------
                          12477 ;Allocation info for local variables in function 'axradio_set_default_remote_address'
                          12478 ;------------------------------------------------------------
                          12479 ;addr                      Allocated to registers r5 r6 r7 
                          12480 ;------------------------------------------------------------
                    2661  12481 	G$axradio_set_default_remote_address$0$0 ==.
                    2661  12482 	C$easyax5043.c$1904$1$390 ==.
                          12483 ;	..\COMMON\easyax5043.c:1904: void axradio_set_default_remote_address(const struct axradio_address *addr)
                          12484 ;	-----------------------------------------
                          12485 ;	 function axradio_set_default_remote_address
                          12486 ;	-----------------------------------------
   2EAB                   12487 _axradio_set_default_remote_address:
   2EAB AD 82             12488 	mov	r5,dpl
   2EAD AE 83             12489 	mov	r6,dph
   2EAF AF F0             12490 	mov	r7,b
                    2667  12491 	C$easyax5043.c$1906$1$392 ==.
                          12492 ;	..\COMMON\easyax5043.c:1906: memcpy_xdatageneric(&axradio_default_remoteaddr, addr, sizeof(axradio_default_remoteaddr));
   2EB1 8D 36             12493 	mov	_memcpy_PARM_2,r5
   2EB3 8E 37             12494 	mov	(_memcpy_PARM_2 + 1),r6
   2EB5 8F 38             12495 	mov	(_memcpy_PARM_2 + 2),r7
   2EB7 75 39 04          12496 	mov	_memcpy_PARM_3,#0x04
   2EBA 75 3A 00          12497 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EBD 90 00 26          12498 	mov	dptr,#_axradio_default_remoteaddr
   2EC0 75 F0 00          12499 	mov	b,#0x00
   2EC3 12 43 F3          12500 	lcall	_memcpy
                    267C  12501 	C$easyax5043.c$1907$1$392 ==.
                    267C  12502 	XG$axradio_set_default_remote_address$0$0 ==.
   2EC6 22                12503 	ret
                          12504 ;------------------------------------------------------------
                          12505 ;Allocation info for local variables in function 'axradio_get_default_remote_address'
                          12506 ;------------------------------------------------------------
                          12507 ;addr                      Allocated to registers r5 r6 r7 
                          12508 ;------------------------------------------------------------
                    267D  12509 	G$axradio_get_default_remote_address$0$0 ==.
                    267D  12510 	C$easyax5043.c$1909$1$392 ==.
                          12511 ;	..\COMMON\easyax5043.c:1909: void axradio_get_default_remote_address(struct axradio_address *addr)
                          12512 ;	-----------------------------------------
                          12513 ;	 function axradio_get_default_remote_address
                          12514 ;	-----------------------------------------
   2EC7                   12515 _axradio_get_default_remote_address:
   2EC7 AD 82             12516 	mov	r5,dpl
   2EC9 AE 83             12517 	mov	r6,dph
   2ECB AF F0             12518 	mov	r7,b
                    2683  12519 	C$easyax5043.c$1911$1$394 ==.
                          12520 ;	..\COMMON\easyax5043.c:1911: memcpy_genericxdata(addr, &axradio_default_remoteaddr, sizeof(axradio_default_remoteaddr));
   2ECD 75 36 26          12521 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   2ED0 75 37 00          12522 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   2ED3 75 38 00          12523 	mov	(_memcpy_PARM_2 + 2),#0x00
   2ED6 75 39 04          12524 	mov	_memcpy_PARM_3,#0x04
   2ED9 75 3A 00          12525 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EDC 8D 82             12526 	mov	dpl,r5
   2EDE 8E 83             12527 	mov	dph,r6
   2EE0 8F F0             12528 	mov	b,r7
   2EE2 12 43 F3          12529 	lcall	_memcpy
                    269B  12530 	C$easyax5043.c$1912$1$394 ==.
                    269B  12531 	XG$axradio_get_default_remote_address$0$0 ==.
   2EE5 22                12532 	ret
                          12533 ;------------------------------------------------------------
                          12534 ;Allocation info for local variables in function 'axradio_transmit'
                          12535 ;------------------------------------------------------------
                          12536 ;pkt                       Allocated with name '_axradio_transmit_PARM_2'
                          12537 ;pktlen                    Allocated with name '_axradio_transmit_PARM_3'
                          12538 ;addr                      Allocated to registers r5 r6 r7 
                          12539 ;fifofree                  Allocated to registers r3 r4 
                          12540 ;i                         Allocated to registers r4 
                          12541 ;iesave                    Allocated to registers r4 
                          12542 ;len_byte                  Allocated to registers r6 
                          12543 ;------------------------------------------------------------
                    269C  12544 	G$axradio_transmit$0$0 ==.
                    269C  12545 	C$easyax5043.c$1914$1$394 ==.
                          12546 ;	..\COMMON\easyax5043.c:1914: uint8_t axradio_transmit(const struct axradio_address *addr, const uint8_t *pkt, uint16_t pktlen)
                          12547 ;	-----------------------------------------
                          12548 ;	 function axradio_transmit
                          12549 ;	-----------------------------------------
   2EE6                   12550 _axradio_transmit:
   2EE6 AD 82             12551 	mov	r5,dpl
   2EE8 AE 83             12552 	mov	r6,dph
   2EEA AF F0             12553 	mov	r7,b
                    26A2  12554 	C$easyax5043.c$1916$1$396 ==.
                          12555 ;	..\COMMON\easyax5043.c:1916: switch (axradio_mode) {
   2EEC AC 0A             12556 	mov	r4,_axradio_mode
   2EEE BC 10 00          12557 	cjne	r4,#0x10,00217$
   2EF1                   12558 00217$:
   2EF1 50 03             12559 	jnc	00218$
   2EF3 02 32 5C          12560 	ljmp	00160$
   2EF6                   12561 00218$:
   2EF6 EC                12562 	mov	a,r4
   2EF7 24 DE             12563 	add	a,#0xff - 0x21
   2EF9 50 03             12564 	jnc	00219$
   2EFB 02 32 5C          12565 	ljmp	00160$
   2EFE                   12566 00219$:
   2EFE EC                12567 	mov	a,r4
   2EFF 24 F0             12568 	add	a,#0xF0
   2F01 FC                12569 	mov	r4,a
   2F02 24 09             12570 	add	a,#(00220$-3-.)
   2F04 83                12571 	movc	a,@a+pc
   2F05 C0 E0             12572 	push	acc
   2F07 EC                12573 	mov	a,r4
   2F08 24 15             12574 	add	a,#(00221$-3-.)
   2F0A 83                12575 	movc	a,@a+pc
   2F0B C0 E0             12576 	push	acc
   2F0D 22                12577 	ret
   2F0E                   12578 00220$:
   2F0E E0                12579 	.db	00120$
   2F0F E0                12580 	.db	00121$
   2F10 E0                12581 	.db	00122$
   2F11 E0                12582 	.db	00123$
   2F12 32                12583 	.db	00101$
   2F13 32                12584 	.db	00102$
   2F14 32                12585 	.db	00103$
   2F15 5C                12586 	.db	00160$
   2F16 A5                12587 	.db	00113$
   2F17 A5                12588 	.db	00114$
   2F18 5C                12589 	.db	00160$
   2F19 5C                12590 	.db	00160$
   2F1A 5C                12591 	.db	00160$
   2F1B 5C                12592 	.db	00160$
   2F1C 5C                12593 	.db	00160$
   2F1D 5C                12594 	.db	00160$
   2F1E A3                12595 	.db	00111$
   2F1F A3                12596 	.db	00112$
   2F20                   12597 00221$:
   2F20 2F                12598 	.db	00120$>>8
   2F21 2F                12599 	.db	00121$>>8
   2F22 2F                12600 	.db	00122$>>8
   2F23 2F                12601 	.db	00123$>>8
   2F24 2F                12602 	.db	00101$>>8
   2F25 2F                12603 	.db	00102$>>8
   2F26 2F                12604 	.db	00103$>>8
   2F27 32                12605 	.db	00160$>>8
   2F28 2F                12606 	.db	00113$>>8
   2F29 2F                12607 	.db	00114$>>8
   2F2A 32                12608 	.db	00160$>>8
   2F2B 32                12609 	.db	00160$>>8
   2F2C 32                12610 	.db	00160$>>8
   2F2D 32                12611 	.db	00160$>>8
   2F2E 32                12612 	.db	00160$>>8
   2F2F 32                12613 	.db	00160$>>8
   2F30 2F                12614 	.db	00111$>>8
   2F31 2F                12615 	.db	00112$>>8
                    26E8  12616 	C$easyax5043.c$1917$2$397 ==.
                          12617 ;	..\COMMON\easyax5043.c:1917: case AXRADIO_MODE_STREAM_TRANSMIT:
   2F32                   12618 00101$:
                    26E8  12619 	C$easyax5043.c$1918$2$397 ==.
                          12620 ;	..\COMMON\easyax5043.c:1918: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2F32                   12621 00102$:
                    26E8  12622 	C$easyax5043.c$1919$2$397 ==.
                          12623 ;	..\COMMON\easyax5043.c:1919: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2F32                   12624 00103$:
                    26E8  12625 	C$easyax5043.c$1921$3$398 ==.
                          12626 ;	..\COMMON\easyax5043.c:1921: uint16_t __autodata fifofree = radio_read16((uint16_t)&AX5043_FIFOFREE1);
   2F32 90 40 2C          12627 	mov	dptr,#_AX5043_FIFOFREE1
   2F35 12 46 DA          12628 	lcall	_radio_read16
   2F38 AB 82             12629 	mov	r3,dpl
   2F3A AC 83             12630 	mov	r4,dph
                    26F2  12631 	C$easyax5043.c$1922$3$398 ==.
                          12632 ;	..\COMMON\easyax5043.c:1922: if (fifofree < pktlen + 3)
   2F3C 74 03             12633 	mov	a,#0x03
   2F3E 25 0F             12634 	add	a,_axradio_transmit_PARM_3
   2F40 F9                12635 	mov	r1,a
   2F41 E4                12636 	clr	a
   2F42 35 10             12637 	addc	a,(_axradio_transmit_PARM_3 + 1)
   2F44 FA                12638 	mov	r2,a
   2F45 C3                12639 	clr	c
   2F46 EB                12640 	mov	a,r3
   2F47 99                12641 	subb	a,r1
   2F48 EC                12642 	mov	a,r4
   2F49 9A                12643 	subb	a,r2
   2F4A 50 06             12644 	jnc	00105$
                    2702  12645 	C$easyax5043.c$1923$3$398 ==.
                          12646 ;	..\COMMON\easyax5043.c:1923: return AXRADIO_ERR_INVALID;
   2F4C 75 82 04          12647 	mov	dpl,#0x04
   2F4F 02 32 5F          12648 	ljmp	00162$
   2F52                   12649 00105$:
                    2708  12650 	C$easyax5043.c$1925$2$397 ==.
                          12651 ;	..\COMMON\easyax5043.c:1925: if (pktlen) {
   2F52 E5 0F             12652 	mov	a,_axradio_transmit_PARM_3
   2F54 45 10             12653 	orl	a,(_axradio_transmit_PARM_3 + 1)
   2F56 60 2D             12654 	jz	00110$
                    270E  12655 	C$easyax5043.c$1926$3$397 ==.
                          12656 ;	..\COMMON\easyax5043.c:1926: uint8_t __autodata i = pktlen;
   2F58 AC 0F             12657 	mov	r4,_axradio_transmit_PARM_3
                    2710  12658 	C$easyax5043.c$1927$3$399 ==.
                          12659 ;	..\COMMON\easyax5043.c:1927: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    2710  12660 	C$easyax5043.c$1928$3$399 ==.
                          12661 ;	..\COMMON\easyax5043.c:1928: AX5043_FIFODATA = i + 1;
   2F5A 90 40 29          12662 	mov	dptr,#_AX5043_FIFODATA
   2F5D 74 E1             12663 	mov	a,#0xE1
   2F5F F0                12664 	movx	@dptr,a
   2F60 EC                12665 	mov	a,r4
   2F61 04                12666 	inc	a
   2F62 F0                12667 	movx	@dptr,a
                    2719  12668 	C$easyax5043.c$1929$3$399 ==.
                          12669 ;	..\COMMON\easyax5043.c:1929: AX5043_FIFODATA = 0x08;
   2F63 90 40 29          12670 	mov	dptr,#_AX5043_FIFODATA
   2F66 74 08             12671 	mov	a,#0x08
   2F68 F0                12672 	movx	@dptr,a
                    271F  12673 	C$easyax5043.c$1930$1$396 ==.
                          12674 ;	..\COMMON\easyax5043.c:1930: do {
   2F69 A9 0C             12675 	mov	r1,_axradio_transmit_PARM_2
   2F6B AA 0D             12676 	mov	r2,(_axradio_transmit_PARM_2 + 1)
   2F6D AB 0E             12677 	mov	r3,(_axradio_transmit_PARM_2 + 2)
   2F6F                   12678 00106$:
                    2725  12679 	C$easyax5043.c$1931$4$400 ==.
                          12680 ;	..\COMMON\easyax5043.c:1931: AX5043_FIFODATA = *pkt++;
   2F6F 89 82             12681 	mov	dpl,r1
   2F71 8A 83             12682 	mov	dph,r2
   2F73 8B F0             12683 	mov	b,r3
   2F75 12 54 3F          12684 	lcall	__gptrget
   2F78 F8                12685 	mov	r0,a
   2F79 A3                12686 	inc	dptr
   2F7A A9 82             12687 	mov	r1,dpl
   2F7C AA 83             12688 	mov	r2,dph
   2F7E 90 40 29          12689 	mov	dptr,#_AX5043_FIFODATA
   2F81 E8                12690 	mov	a,r0
   2F82 F0                12691 	movx	@dptr,a
                    2739  12692 	C$easyax5043.c$1932$3$399 ==.
                          12693 ;	..\COMMON\easyax5043.c:1932: } while (--i);
   2F83 DC EA             12694 	djnz	r4,00106$
   2F85                   12695 00110$:
                    273B  12696 	C$easyax5043.c$1934$2$397 ==.
                          12697 ;	..\COMMON\easyax5043.c:1934: AX5043_FIFOSTAT =  4; // FIFO commit
   2F85 90 40 28          12698 	mov	dptr,#_AX5043_FIFOSTAT
   2F88 74 04             12699 	mov	a,#0x04
   2F8A F0                12700 	movx	@dptr,a
                    2741  12701 	C$easyax5043.c$1936$3$401 ==.
                          12702 ;	..\COMMON\easyax5043.c:1936: uint8_t __autodata iesave = IE & 0x80;
   2F8B 74 80             12703 	mov	a,#0x80
   2F8D 55 A8             12704 	anl	a,_IE
   2F8F FC                12705 	mov	r4,a
                    2746  12706 	C$easyax5043.c$1937$3$401 ==.
                          12707 ;	..\COMMON\easyax5043.c:1937: EA = 0;
   2F90 C2 AF             12708 	clr	_EA
                    2748  12709 	C$easyax5043.c$1938$3$401 ==.
                          12710 ;	..\COMMON\easyax5043.c:1938: AX5043_IRQMASK0 |= 0x08;
   2F92 90 40 07          12711 	mov	dptr,#_AX5043_IRQMASK0
   2F95 E0                12712 	movx	a,@dptr
   2F96 FB                12713 	mov	r3,a
   2F97 44 08             12714 	orl	a,#0x08
   2F99 F0                12715 	movx	@dptr,a
                    2750  12716 	C$easyax5043.c$1939$3$401 ==.
                          12717 ;	..\COMMON\easyax5043.c:1939: IE |= iesave;
   2F9A EC                12718 	mov	a,r4
   2F9B 42 A8             12719 	orl	_IE,a
                    2753  12720 	C$easyax5043.c$1941$2$397 ==.
                          12721 ;	..\COMMON\easyax5043.c:1941: return AXRADIO_ERR_NOERROR;
   2F9D 75 82 00          12722 	mov	dpl,#0x00
   2FA0 02 32 5F          12723 	ljmp	00162$
                    2759  12724 	C$easyax5043.c$1943$2$397 ==.
                          12725 ;	..\COMMON\easyax5043.c:1943: case AXRADIO_MODE_SYNC_MASTER:
   2FA3                   12726 00111$:
                    2759  12727 	C$easyax5043.c$1944$2$397 ==.
                          12728 ;	..\COMMON\easyax5043.c:1944: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2FA3                   12729 00112$:
                    2759  12730 	C$easyax5043.c$1945$2$397 ==.
                          12731 ;	..\COMMON\easyax5043.c:1945: goto dotx;
                    2759  12732 	C$easyax5043.c$1947$2$397 ==.
                          12733 ;	..\COMMON\easyax5043.c:1947: case AXRADIO_MODE_ASYNC_RECEIVE:
   2FA3 80 48             12734 	sjmp	00126$
   2FA5                   12735 00113$:
                    275B  12736 	C$easyax5043.c$1948$2$397 ==.
                          12737 ;	..\COMMON\easyax5043.c:1948: case AXRADIO_MODE_WOR_RECEIVE:
   2FA5                   12738 00114$:
                    275B  12739 	C$easyax5043.c$1949$2$397 ==.
                          12740 ;	..\COMMON\easyax5043.c:1949: if (axradio_syncstate != syncstate_off)
   2FA5 90 00 04          12741 	mov	dptr,#_axradio_syncstate
   2FA8 E0                12742 	movx	a,@dptr
   2FA9 FC                12743 	mov	r4,a
   2FAA 60 06             12744 	jz	00116$
                    2762  12745 	C$easyax5043.c$1950$2$397 ==.
                          12746 ;	..\COMMON\easyax5043.c:1950: return AXRADIO_ERR_BUSY;
   2FAC 75 82 02          12747 	mov	dpl,#0x02
   2FAF 02 32 5F          12748 	ljmp	00162$
   2FB2                   12749 00116$:
                    2768  12750 	C$easyax5043.c$1951$2$397 ==.
                          12751 ;	..\COMMON\easyax5043.c:1951: AX5043_IRQMASK1 = 0x00;
   2FB2 90 40 06          12752 	mov	dptr,#_AX5043_IRQMASK1
                    276B  12753 	C$easyax5043.c$1952$2$397 ==.
                          12754 ;	..\COMMON\easyax5043.c:1952: AX5043_IRQMASK0 = 0x00;
   2FB5 E4                12755 	clr	a
   2FB6 F0                12756 	movx	@dptr,a
   2FB7 90 40 07          12757 	mov	dptr,#_AX5043_IRQMASK0
   2FBA F0                12758 	movx	@dptr,a
                    2771  12759 	C$easyax5043.c$1953$2$397 ==.
                          12760 ;	..\COMMON\easyax5043.c:1953: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   2FBB 90 40 02          12761 	mov	dptr,#_AX5043_PWRMODE
   2FBE 74 05             12762 	mov	a,#0x05
   2FC0 F0                12763 	movx	@dptr,a
                    2777  12764 	C$easyax5043.c$1954$2$397 ==.
                          12765 ;	..\COMMON\easyax5043.c:1954: AX5043_FIFOSTAT = 3;
   2FC1 90 40 28          12766 	mov	dptr,#_AX5043_FIFOSTAT
   2FC4 74 03             12767 	mov	a,#0x03
   2FC6 F0                12768 	movx	@dptr,a
                    277D  12769 	C$easyax5043.c$1955$2$397 ==.
                          12770 ;	..\COMMON\easyax5043.c:1955: while (AX5043_POWSTAT & 0x08);
   2FC7                   12771 00117$:
   2FC7 90 40 03          12772 	mov	dptr,#_AX5043_POWSTAT
   2FCA E0                12773 	movx	a,@dptr
   2FCB FC                12774 	mov	r4,a
   2FCC 20 E3 F8          12775 	jb	acc.3,00117$
                    2785  12776 	C$easyax5043.c$1956$2$397 ==.
                          12777 ;	..\COMMON\easyax5043.c:1956: ax5043_init_registers_tx();
   2FCF C0 07             12778 	push	ar7
   2FD1 C0 06             12779 	push	ar6
   2FD3 C0 05             12780 	push	ar5
   2FD5 12 08 E0          12781 	lcall	_ax5043_init_registers_tx
   2FD8 D0 05             12782 	pop	ar5
   2FDA D0 06             12783 	pop	ar6
   2FDC D0 07             12784 	pop	ar7
                    2794  12785 	C$easyax5043.c$1957$2$397 ==.
                          12786 ;	..\COMMON\easyax5043.c:1957: goto dotx;
                    2794  12787 	C$easyax5043.c$1959$2$397 ==.
                          12788 ;	..\COMMON\easyax5043.c:1959: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2FDE 80 0D             12789 	sjmp	00126$
   2FE0                   12790 00120$:
                    2796  12791 	C$easyax5043.c$1960$2$397 ==.
                          12792 ;	..\COMMON\easyax5043.c:1960: case AXRADIO_MODE_WOR_TRANSMIT:
   2FE0                   12793 00121$:
                    2796  12794 	C$easyax5043.c$1961$2$397 ==.
                          12795 ;	..\COMMON\easyax5043.c:1961: case AXRADIO_MODE_ACK_TRANSMIT:
   2FE0                   12796 00122$:
                    2796  12797 	C$easyax5043.c$1962$2$397 ==.
                          12798 ;	..\COMMON\easyax5043.c:1962: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2FE0                   12799 00123$:
                    2796  12800 	C$easyax5043.c$1963$2$397 ==.
                          12801 ;	..\COMMON\easyax5043.c:1963: if (axradio_syncstate != syncstate_off)
   2FE0 90 00 04          12802 	mov	dptr,#_axradio_syncstate
   2FE3 E0                12803 	movx	a,@dptr
   2FE4 FC                12804 	mov	r4,a
   2FE5 60 06             12805 	jz	00126$
                    279D  12806 	C$easyax5043.c$1964$2$397 ==.
                          12807 ;	..\COMMON\easyax5043.c:1964: return AXRADIO_ERR_BUSY;
   2FE7 75 82 02          12808 	mov	dpl,#0x02
   2FEA 02 32 5F          12809 	ljmp	00162$
                    27A3  12810 	C$easyax5043.c$1965$2$397 ==.
                          12811 ;	..\COMMON\easyax5043.c:1965: dotx:
   2FED                   12812 00126$:
                    27A3  12813 	C$easyax5043.c$1966$2$397 ==.
                          12814 ;	..\COMMON\easyax5043.c:1966: axradio_ack_count = axradio_framing_ack_retransmissions;
   2FED 90 56 45          12815 	mov	dptr,#_axradio_framing_ack_retransmissions
   2FF0 E4                12816 	clr	a
   2FF1 93                12817 	movc	a,@a+dptr
   2FF2 90 00 0E          12818 	mov	dptr,#_axradio_ack_count
   2FF5 F0                12819 	movx	@dptr,a
                    27AC  12820 	C$easyax5043.c$1967$2$397 ==.
                          12821 ;	..\COMMON\easyax5043.c:1967: ++axradio_ack_seqnr;
   2FF6 90 00 0F          12822 	mov	dptr,#_axradio_ack_seqnr
   2FF9 E0                12823 	movx	a,@dptr
   2FFA 24 01             12824 	add	a,#0x01
   2FFC F0                12825 	movx	@dptr,a
                    27B3  12826 	C$easyax5043.c$1968$2$397 ==.
                          12827 ;	..\COMMON\easyax5043.c:1968: axradio_txbuffer_len = pktlen + axradio_framing_maclen;
   2FFD 90 56 2E          12828 	mov	dptr,#_axradio_framing_maclen
   3000 E4                12829 	clr	a
   3001 93                12830 	movc	a,@a+dptr
   3002 FC                12831 	mov	r4,a
   3003 7B 00             12832 	mov	r3,#0x00
   3005 25 0F             12833 	add	a,_axradio_transmit_PARM_3
   3007 FA                12834 	mov	r2,a
   3008 EB                12835 	mov	a,r3
   3009 35 10             12836 	addc	a,(_axradio_transmit_PARM_3 + 1)
   300B FB                12837 	mov	r3,a
   300C 90 00 05          12838 	mov	dptr,#_axradio_txbuffer_len
   300F EA                12839 	mov	a,r2
   3010 F0                12840 	movx	@dptr,a
   3011 A3                12841 	inc	dptr
   3012 EB                12842 	mov	a,r3
   3013 F0                12843 	movx	@dptr,a
                    27CA  12844 	C$easyax5043.c$1969$2$397 ==.
                          12845 ;	..\COMMON\easyax5043.c:1969: if (axradio_txbuffer_len > sizeof(axradio_txbuffer))
   3014 C3                12846 	clr	c
   3015 74 04             12847 	mov	a,#0x04
   3017 9A                12848 	subb	a,r2
   3018 74 01             12849 	mov	a,#0x01
   301A 9B                12850 	subb	a,r3
   301B 50 06             12851 	jnc	00128$
                    27D3  12852 	C$easyax5043.c$1970$2$397 ==.
                          12853 ;	..\COMMON\easyax5043.c:1970: return AXRADIO_ERR_INVALID;
   301D 75 82 04          12854 	mov	dpl,#0x04
   3020 02 32 5F          12855 	ljmp	00162$
   3023                   12856 00128$:
                    27D9  12857 	C$easyax5043.c$1971$2$397 ==.
                          12858 ;	..\COMMON\easyax5043.c:1971: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   3023 8C 37             12859 	mov	_memset_PARM_3,r4
   3025 75 38 00          12860 	mov	(_memset_PARM_3 + 1),#0x00
   3028 75 36 00          12861 	mov	_memset_PARM_2,#0x00
   302B 90 00 2A          12862 	mov	dptr,#_axradio_txbuffer
   302E 75 F0 00          12863 	mov	b,#0x00
   3031 C0 07             12864 	push	ar7
   3033 C0 06             12865 	push	ar6
   3035 C0 05             12866 	push	ar5
   3037 12 43 D4          12867 	lcall	_memset
                    27F0  12868 	C$easyax5043.c$1972$2$397 ==.
                          12869 ;	..\COMMON\easyax5043.c:1972: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_maclen], pkt, pktlen);
   303A 90 56 2E          12870 	mov	dptr,#_axradio_framing_maclen
   303D E4                12871 	clr	a
   303E 93                12872 	movc	a,@a+dptr
   303F 24 2A             12873 	add	a,#_axradio_txbuffer
   3041 FC                12874 	mov	r4,a
   3042 E4                12875 	clr	a
   3043 34 00             12876 	addc	a,#(_axradio_txbuffer >> 8)
   3045 FB                12877 	mov	r3,a
   3046 7A 00             12878 	mov	r2,#0x00
   3048 85 0C 36          12879 	mov	_memcpy_PARM_2,_axradio_transmit_PARM_2
   304B 85 0D 37          12880 	mov	(_memcpy_PARM_2 + 1),(_axradio_transmit_PARM_2 + 1)
   304E 85 0E 38          12881 	mov	(_memcpy_PARM_2 + 2),(_axradio_transmit_PARM_2 + 2)
   3051 85 0F 39          12882 	mov	_memcpy_PARM_3,_axradio_transmit_PARM_3
   3054 85 10 3A          12883 	mov	(_memcpy_PARM_3 + 1),(_axradio_transmit_PARM_3 + 1)
   3057 8C 82             12884 	mov	dpl,r4
   3059 8B 83             12885 	mov	dph,r3
   305B 8A F0             12886 	mov	b,r2
   305D 12 43 F3          12887 	lcall	_memcpy
   3060 D0 05             12888 	pop	ar5
   3062 D0 06             12889 	pop	ar6
   3064 D0 07             12890 	pop	ar7
                    281C  12891 	C$easyax5043.c$1973$2$397 ==.
                          12892 ;	..\COMMON\easyax5043.c:1973: if (axradio_framing_ack_seqnrpos != 0xff)
   3066 90 56 46          12893 	mov	dptr,#_axradio_framing_ack_seqnrpos
   3069 E4                12894 	clr	a
   306A 93                12895 	movc	a,@a+dptr
   306B FC                12896 	mov	r4,a
   306C BC FF 02          12897 	cjne	r4,#0xFF,00230$
   306F 80 12             12898 	sjmp	00130$
   3071                   12899 00230$:
                    2827  12900 	C$easyax5043.c$1974$2$397 ==.
                          12901 ;	..\COMMON\easyax5043.c:1974: axradio_txbuffer[axradio_framing_ack_seqnrpos] = axradio_ack_seqnr;
   3071 EC                12902 	mov	a,r4
   3072 24 2A             12903 	add	a,#_axradio_txbuffer
   3074 FC                12904 	mov	r4,a
   3075 E4                12905 	clr	a
   3076 34 00             12906 	addc	a,#(_axradio_txbuffer >> 8)
   3078 FB                12907 	mov	r3,a
   3079 90 00 0F          12908 	mov	dptr,#_axradio_ack_seqnr
   307C E0                12909 	movx	a,@dptr
   307D FA                12910 	mov	r2,a
   307E 8C 82             12911 	mov	dpl,r4
   3080 8B 83             12912 	mov	dph,r3
   3082 F0                12913 	movx	@dptr,a
   3083                   12914 00130$:
                    2839  12915 	C$easyax5043.c$1975$2$397 ==.
                          12916 ;	..\COMMON\easyax5043.c:1975: if (axradio_framing_destaddrpos != 0xff)
   3083 90 56 30          12917 	mov	dptr,#_axradio_framing_destaddrpos
   3086 E4                12918 	clr	a
   3087 93                12919 	movc	a,@a+dptr
   3088 FC                12920 	mov	r4,a
   3089 BC FF 02          12921 	cjne	r4,#0xFF,00231$
   308C 80 24             12922 	sjmp	00132$
   308E                   12923 00231$:
                    2844  12924 	C$easyax5043.c$1976$2$397 ==.
                          12925 ;	..\COMMON\easyax5043.c:1976: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_destaddrpos], &addr->addr, axradio_framing_addrlen);
   308E EC                12926 	mov	a,r4
   308F 24 2A             12927 	add	a,#_axradio_txbuffer
   3091 FC                12928 	mov	r4,a
   3092 E4                12929 	clr	a
   3093 34 00             12930 	addc	a,#(_axradio_txbuffer >> 8)
   3095 FB                12931 	mov	r3,a
   3096 7A 00             12932 	mov	r2,#0x00
   3098 8D 36             12933 	mov	_memcpy_PARM_2,r5
   309A 8E 37             12934 	mov	(_memcpy_PARM_2 + 1),r6
   309C 8F 38             12935 	mov	(_memcpy_PARM_2 + 2),r7
   309E 90 56 2F          12936 	mov	dptr,#_axradio_framing_addrlen
   30A1 E4                12937 	clr	a
   30A2 93                12938 	movc	a,@a+dptr
   30A3 FF                12939 	mov	r7,a
   30A4 8F 39             12940 	mov	_memcpy_PARM_3,r7
   30A6 75 3A 00          12941 	mov	(_memcpy_PARM_3 + 1),#0x00
   30A9 8C 82             12942 	mov	dpl,r4
   30AB 8B 83             12943 	mov	dph,r3
   30AD 8A F0             12944 	mov	b,r2
   30AF 12 43 F3          12945 	lcall	_memcpy
   30B2                   12946 00132$:
                    2868  12947 	C$easyax5043.c$1977$2$397 ==.
                          12948 ;	..\COMMON\easyax5043.c:1977: if (axradio_framing_sourceaddrpos != 0xff)
   30B2 90 56 31          12949 	mov	dptr,#_axradio_framing_sourceaddrpos
   30B5 E4                12950 	clr	a
   30B6 93                12951 	movc	a,@a+dptr
   30B7 FF                12952 	mov	r7,a
   30B8 BF FF 02          12953 	cjne	r7,#0xFF,00232$
   30BB 80 27             12954 	sjmp	00134$
   30BD                   12955 00232$:
                    2873  12956 	C$easyax5043.c$1978$2$397 ==.
                          12957 ;	..\COMMON\easyax5043.c:1978: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   30BD EF                12958 	mov	a,r7
   30BE 24 2A             12959 	add	a,#_axradio_txbuffer
   30C0 FF                12960 	mov	r7,a
   30C1 E4                12961 	clr	a
   30C2 34 00             12962 	addc	a,#(_axradio_txbuffer >> 8)
   30C4 FE                12963 	mov	r6,a
   30C5 7D 00             12964 	mov	r5,#0x00
   30C7 75 36 1E          12965 	mov	_memcpy_PARM_2,#_axradio_localaddr
   30CA 75 37 00          12966 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   30CD 75 38 00          12967 	mov	(_memcpy_PARM_2 + 2),#0x00
   30D0 90 56 2F          12968 	mov	dptr,#_axradio_framing_addrlen
   30D3 E4                12969 	clr	a
   30D4 93                12970 	movc	a,@a+dptr
   30D5 FC                12971 	mov	r4,a
   30D6 8C 39             12972 	mov	_memcpy_PARM_3,r4
   30D8 75 3A 00          12973 	mov	(_memcpy_PARM_3 + 1),#0x00
   30DB 8F 82             12974 	mov	dpl,r7
   30DD 8E 83             12975 	mov	dph,r6
   30DF 8D F0             12976 	mov	b,r5
   30E1 12 43 F3          12977 	lcall	_memcpy
   30E4                   12978 00134$:
                    289A  12979 	C$easyax5043.c$1979$2$397 ==.
                          12980 ;	..\COMMON\easyax5043.c:1979: if (axradio_framing_lenmask) {
   30E4 90 56 34          12981 	mov	dptr,#_axradio_framing_lenmask
   30E7 E4                12982 	clr	a
   30E8 93                12983 	movc	a,@a+dptr
   30E9 FF                12984 	mov	r7,a
   30EA 60 30             12985 	jz	00136$
                    28A2  12986 	C$easyax5043.c$1980$3$402 ==.
                          12987 ;	..\COMMON\easyax5043.c:1980: uint8_t __autodata len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   30EC 90 00 05          12988 	mov	dptr,#_axradio_txbuffer_len
   30EF E0                12989 	movx	a,@dptr
   30F0 FD                12990 	mov	r5,a
   30F1 A3                12991 	inc	dptr
   30F2 E0                12992 	movx	a,@dptr
   30F3 90 56 33          12993 	mov	dptr,#_axradio_framing_lenoffs
   30F6 E4                12994 	clr	a
   30F7 93                12995 	movc	a,@a+dptr
   30F8 FE                12996 	mov	r6,a
   30F9 ED                12997 	mov	a,r5
   30FA C3                12998 	clr	c
   30FB 9E                12999 	subb	a,r6
   30FC 5F                13000 	anl	a,r7
   30FD FE                13001 	mov	r6,a
                    28B4  13002 	C$easyax5043.c$1981$3$402 ==.
                          13003 ;	..\COMMON\easyax5043.c:1981: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   30FE 90 56 32          13004 	mov	dptr,#_axradio_framing_lenpos
   3101 E4                13005 	clr	a
   3102 93                13006 	movc	a,@a+dptr
   3103 24 2A             13007 	add	a,#_axradio_txbuffer
   3105 FD                13008 	mov	r5,a
   3106 E4                13009 	clr	a
   3107 34 00             13010 	addc	a,#(_axradio_txbuffer >> 8)
   3109 FC                13011 	mov	r4,a
   310A 8D 82             13012 	mov	dpl,r5
   310C 8C 83             13013 	mov	dph,r4
   310E E0                13014 	movx	a,@dptr
   310F FB                13015 	mov	r3,a
   3110 EF                13016 	mov	a,r7
   3111 F4                13017 	cpl	a
   3112 FF                13018 	mov	r7,a
   3113 5B                13019 	anl	a,r3
   3114 42 06             13020 	orl	ar6,a
   3116 8D 82             13021 	mov	dpl,r5
   3118 8C 83             13022 	mov	dph,r4
   311A EE                13023 	mov	a,r6
   311B F0                13024 	movx	@dptr,a
   311C                   13025 00136$:
                    28D2  13026 	C$easyax5043.c$1983$2$397 ==.
                          13027 ;	..\COMMON\easyax5043.c:1983: if (axradio_framing_swcrclen) {
   311C 90 56 35          13028 	mov	dptr,#_axradio_framing_swcrclen
   311F E4                13029 	clr	a
   3120 93                13030 	movc	a,@a+dptr
   3121 FF                13031 	mov	r7,a
   3122 60 2E             13032 	jz	00138$
                    28DA  13033 	C$easyax5043.c$1984$3$403 ==.
                          13034 ;	..\COMMON\easyax5043.c:1984: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   3124 90 00 05          13035 	mov	dptr,#_axradio_txbuffer_len
   3127 E0                13036 	movx	a,@dptr
   3128 C0 E0             13037 	push	acc
   312A A3                13038 	inc	dptr
   312B E0                13039 	movx	a,@dptr
   312C C0 E0             13040 	push	acc
   312E 90 00 2A          13041 	mov	dptr,#_axradio_txbuffer
   3131 12 06 7F          13042 	lcall	_axradio_framing_append_crc
   3134 15 81             13043 	dec	sp
   3136 15 81             13044 	dec	sp
                    28EE  13045 	C$easyax5043.c$1985$3$403 ==.
                          13046 ;	..\COMMON\easyax5043.c:1985: axradio_txbuffer_len += axradio_framing_swcrclen;
   3138 90 56 35          13047 	mov	dptr,#_axradio_framing_swcrclen
   313B E4                13048 	clr	a
   313C 93                13049 	movc	a,@a+dptr
   313D FF                13050 	mov	r7,a
   313E 7E 00             13051 	mov	r6,#0x00
   3140 90 00 05          13052 	mov	dptr,#_axradio_txbuffer_len
   3143 E0                13053 	movx	a,@dptr
   3144 FC                13054 	mov	r4,a
   3145 A3                13055 	inc	dptr
   3146 E0                13056 	movx	a,@dptr
   3147 FD                13057 	mov	r5,a
   3148 90 00 05          13058 	mov	dptr,#_axradio_txbuffer_len
   314B EF                13059 	mov	a,r7
   314C 2C                13060 	add	a,r4
   314D F0                13061 	movx	@dptr,a
   314E EE                13062 	mov	a,r6
   314F 3D                13063 	addc	a,r5
   3150 A3                13064 	inc	dptr
   3151 F0                13065 	movx	@dptr,a
   3152                   13066 00138$:
                    2908  13067 	C$easyax5043.c$1987$2$397 ==.
                          13068 ;	..\COMMON\easyax5043.c:1987: if (axradio_phy_pn9)
   3152 90 56 0D          13069 	mov	dptr,#_axradio_phy_pn9
   3155 E4                13070 	clr	a
   3156 93                13071 	movc	a,@a+dptr
   3157 FF                13072 	mov	r7,a
   3158 60 2F             13073 	jz	00140$
                    2910  13074 	C$easyax5043.c$1988$2$397 ==.
                          13075 ;	..\COMMON\easyax5043.c:1988: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   315A 90 40 11          13076 	mov	dptr,#_AX5043_ENCODING
   315D E0                13077 	movx	a,@dptr
   315E FF                13078 	mov	r7,a
   315F 53 07 01          13079 	anl	ar7,#0x01
   3162 C3                13080 	clr	c
   3163 E4                13081 	clr	a
   3164 9F                13082 	subb	a,r7
   3165 FF                13083 	mov	r7,a
   3166 C0 07             13084 	push	ar7
   3168 74 FF             13085 	mov	a,#0xFF
   316A C0 E0             13086 	push	acc
   316C 74 01             13087 	mov	a,#0x01
   316E C0 E0             13088 	push	acc
   3170 90 00 05          13089 	mov	dptr,#_axradio_txbuffer_len
   3173 E0                13090 	movx	a,@dptr
   3174 C0 E0             13091 	push	acc
   3176 A3                13092 	inc	dptr
   3177 E0                13093 	movx	a,@dptr
   3178 C0 E0             13094 	push	acc
   317A 90 00 2A          13095 	mov	dptr,#_axradio_txbuffer
   317D 75 F0 00          13096 	mov	b,#0x00
   3180 12 45 C8          13097 	lcall	_pn9_buffer
   3183 E5 81             13098 	mov	a,sp
   3185 24 FB             13099 	add	a,#0xfb
   3187 F5 81             13100 	mov	sp,a
   3189                   13101 00140$:
                    293F  13102 	C$easyax5043.c$1989$2$397 ==.
                          13103 ;	..\COMMON\easyax5043.c:1989: if (axradio_mode == AXRADIO_MODE_SYNC_MASTER ||
   3189 74 20             13104 	mov	a,#0x20
   318B B5 0A 02          13105 	cjne	a,_axradio_mode,00236$
   318E 80 05             13106 	sjmp	00141$
   3190                   13107 00236$:
                    2946  13108 	C$easyax5043.c$1990$2$397 ==.
                          13109 ;	..\COMMON\easyax5043.c:1990: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   3190 74 21             13110 	mov	a,#0x21
   3192 B5 0A 06          13111 	cjne	a,_axradio_mode,00142$
   3195                   13112 00141$:
                    294B  13113 	C$easyax5043.c$1991$2$397 ==.
                          13114 ;	..\COMMON\easyax5043.c:1991: return AXRADIO_ERR_NOERROR;
   3195 75 82 00          13115 	mov	dpl,#0x00
   3198 02 32 5F          13116 	ljmp	00162$
   319B                   13117 00142$:
                    2951  13118 	C$easyax5043.c$1992$2$397 ==.
                          13119 ;	..\COMMON\easyax5043.c:1992: if (axradio_mode == AXRADIO_MODE_WOR_TRANSMIT ||
   319B 74 11             13120 	mov	a,#0x11
   319D B5 0A 02          13121 	cjne	a,_axradio_mode,00239$
   31A0 80 05             13122 	sjmp	00144$
   31A2                   13123 00239$:
                    2958  13124 	C$easyax5043.c$1993$2$397 ==.
                          13125 ;	..\COMMON\easyax5043.c:1993: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT)
   31A2 74 13             13126 	mov	a,#0x13
   31A4 B5 0A 14          13127 	cjne	a,_axradio_mode,00145$
   31A7                   13128 00144$:
                    295D  13129 	C$easyax5043.c$1994$2$397 ==.
                          13130 ;	..\COMMON\easyax5043.c:1994: axradio_txbuffer_cnt = axradio_phy_preamble_wor_longlen;
   31A7 90 56 22          13131 	mov	dptr,#_axradio_phy_preamble_wor_longlen
   31AA E4                13132 	clr	a
   31AB 93                13133 	movc	a,@a+dptr
   31AC FE                13134 	mov	r6,a
   31AD 74 01             13135 	mov	a,#0x01
   31AF 93                13136 	movc	a,@a+dptr
   31B0 FF                13137 	mov	r7,a
   31B1 90 00 07          13138 	mov	dptr,#_axradio_txbuffer_cnt
   31B4 EE                13139 	mov	a,r6
   31B5 F0                13140 	movx	@dptr,a
   31B6 A3                13141 	inc	dptr
   31B7 EF                13142 	mov	a,r7
   31B8 F0                13143 	movx	@dptr,a
   31B9 80 12             13144 	sjmp	00146$
   31BB                   13145 00145$:
                    2971  13146 	C$easyax5043.c$1996$2$397 ==.
                          13147 ;	..\COMMON\easyax5043.c:1996: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   31BB 90 56 26          13148 	mov	dptr,#_axradio_phy_preamble_longlen
   31BE E4                13149 	clr	a
   31BF 93                13150 	movc	a,@a+dptr
   31C0 FE                13151 	mov	r6,a
   31C1 74 01             13152 	mov	a,#0x01
   31C3 93                13153 	movc	a,@a+dptr
   31C4 FF                13154 	mov	r7,a
   31C5 90 00 07          13155 	mov	dptr,#_axradio_txbuffer_cnt
   31C8 EE                13156 	mov	a,r6
   31C9 F0                13157 	movx	@dptr,a
   31CA A3                13158 	inc	dptr
   31CB EF                13159 	mov	a,r7
   31CC F0                13160 	movx	@dptr,a
   31CD                   13161 00146$:
                    2983  13162 	C$easyax5043.c$1997$2$397 ==.
                          13163 ;	..\COMMON\easyax5043.c:1997: if (axradio_phy_lbt_retries) {
   31CD 90 56 1E          13164 	mov	dptr,#_axradio_phy_lbt_retries
   31D0 E4                13165 	clr	a
   31D1 93                13166 	movc	a,@a+dptr
   31D2 FF                13167 	mov	r7,a
   31D3 60 79             13168 	jz	00159$
                    298B  13169 	C$easyax5043.c$1998$3$404 ==.
                          13170 ;	..\COMMON\easyax5043.c:1998: switch (axradio_mode) {
   31D5 AF 0A             13171 	mov	r7,_axradio_mode
   31D7 BF 10 02          13172 	cjne	r7,#0x10,00243$
   31DA 80 21             13173 	sjmp	00155$
   31DC                   13174 00243$:
   31DC BF 11 02          13175 	cjne	r7,#0x11,00244$
   31DF 80 1C             13176 	sjmp	00155$
   31E1                   13177 00244$:
   31E1 BF 12 02          13178 	cjne	r7,#0x12,00245$
   31E4 80 17             13179 	sjmp	00155$
   31E6                   13180 00245$:
   31E6 BF 13 02          13181 	cjne	r7,#0x13,00246$
   31E9 80 12             13182 	sjmp	00155$
   31EB                   13183 00246$:
   31EB BF 18 02          13184 	cjne	r7,#0x18,00247$
   31EE 80 0D             13185 	sjmp	00155$
   31F0                   13186 00247$:
   31F0 BF 19 02          13187 	cjne	r7,#0x19,00248$
   31F3 80 08             13188 	sjmp	00155$
   31F5                   13189 00248$:
   31F5 BF 1A 02          13190 	cjne	r7,#0x1A,00249$
   31F8 80 03             13191 	sjmp	00155$
   31FA                   13192 00249$:
   31FA BF 1B 51          13193 	cjne	r7,#0x1B,00159$
                    29B3  13194 	C$easyax5043.c$2006$4$405 ==.
                          13195 ;	..\COMMON\easyax5043.c:2006: case AXRADIO_MODE_ACK_RECEIVE:
   31FD                   13196 00155$:
                    29B3  13197 	C$easyax5043.c$2007$4$405 ==.
                          13198 ;	..\COMMON\easyax5043.c:2007: ax5043_off_xtal();
   31FD 12 14 8F          13199 	lcall	_ax5043_off_xtal
                    29B6  13200 	C$easyax5043.c$2008$4$405 ==.
                          13201 ;	..\COMMON\easyax5043.c:2008: ax5043_init_registers_rx();
   3200 12 09 16          13202 	lcall	_ax5043_init_registers_rx
                    29B9  13203 	C$easyax5043.c$2009$4$405 ==.
                          13204 ;	..\COMMON\easyax5043.c:2009: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   3203 90 56 19          13205 	mov	dptr,#_axradio_phy_rssireference
   3206 E4                13206 	clr	a
   3207 93                13207 	movc	a,@a+dptr
   3208 90 42 2C          13208 	mov	dptr,#_AX5043_RSSIREFERENCE
   320B F0                13209 	movx	@dptr,a
                    29C2  13210 	C$easyax5043.c$2010$4$405 ==.
                          13211 ;	..\COMMON\easyax5043.c:2010: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   320C 90 40 02          13212 	mov	dptr,#_AX5043_PWRMODE
   320F 74 09             13213 	mov	a,#0x09
   3211 F0                13214 	movx	@dptr,a
                    29C8  13215 	C$easyax5043.c$2011$4$405 ==.
                          13216 ;	..\COMMON\easyax5043.c:2011: axradio_ack_count = axradio_phy_lbt_retries;
   3212 90 56 1E          13217 	mov	dptr,#_axradio_phy_lbt_retries
   3215 E4                13218 	clr	a
   3216 93                13219 	movc	a,@a+dptr
   3217 90 00 0E          13220 	mov	dptr,#_axradio_ack_count
   321A F0                13221 	movx	@dptr,a
                    29D1  13222 	C$easyax5043.c$2012$4$405 ==.
                          13223 ;	..\COMMON\easyax5043.c:2012: axradio_syncstate = syncstate_lbt;
   321B 90 00 04          13224 	mov	dptr,#_axradio_syncstate
   321E 74 01             13225 	mov	a,#0x01
   3220 F0                13226 	movx	@dptr,a
                    29D7  13227 	C$easyax5043.c$2013$4$405 ==.
                          13228 ;	..\COMMON\easyax5043.c:2013: wtimer_remove(&axradio_timer);
   3221 90 02 89          13229 	mov	dptr,#_axradio_timer
   3224 12 4D 58          13230 	lcall	_wtimer_remove
                    29DD  13231 	C$easyax5043.c$2014$4$405 ==.
                          13232 ;	..\COMMON\easyax5043.c:2014: axradio_timer.time = axradio_phy_cs_period;
   3227 90 56 1B          13233 	mov	dptr,#_axradio_phy_cs_period
   322A E4                13234 	clr	a
   322B 93                13235 	movc	a,@a+dptr
   322C FE                13236 	mov	r6,a
   322D 74 01             13237 	mov	a,#0x01
   322F 93                13238 	movc	a,@a+dptr
   3230 FF                13239 	mov	r7,a
   3231 7D 00             13240 	mov	r5,#0x00
   3233 7C 00             13241 	mov	r4,#0x00
   3235 90 02 8D          13242 	mov	dptr,#(_axradio_timer + 0x0004)
   3238 EE                13243 	mov	a,r6
   3239 F0                13244 	movx	@dptr,a
   323A A3                13245 	inc	dptr
   323B EF                13246 	mov	a,r7
   323C F0                13247 	movx	@dptr,a
   323D A3                13248 	inc	dptr
   323E ED                13249 	mov	a,r5
   323F F0                13250 	movx	@dptr,a
   3240 A3                13251 	inc	dptr
   3241 EC                13252 	mov	a,r4
   3242 F0                13253 	movx	@dptr,a
                    29F9  13254 	C$easyax5043.c$2015$4$405 ==.
                          13255 ;	..\COMMON\easyax5043.c:2015: wtimer0_addrelative(&axradio_timer);
   3243 90 02 89          13256 	mov	dptr,#_axradio_timer
   3246 12 44 62          13257 	lcall	_wtimer0_addrelative
                    29FF  13258 	C$easyax5043.c$2016$4$405 ==.
                          13259 ;	..\COMMON\easyax5043.c:2016: return AXRADIO_ERR_NOERROR;
   3249 75 82 00          13260 	mov	dpl,#0x00
                    2A02  13261 	C$easyax5043.c$2020$2$397 ==.
                          13262 ;	..\COMMON\easyax5043.c:2020: }
   324C 80 11             13263 	sjmp	00162$
   324E                   13264 00159$:
                    2A04  13265 	C$easyax5043.c$2022$2$397 ==.
                          13266 ;	..\COMMON\easyax5043.c:2022: axradio_syncstate = syncstate_asynctx;
   324E 90 00 04          13267 	mov	dptr,#_axradio_syncstate
   3251 74 02             13268 	mov	a,#0x02
   3253 F0                13269 	movx	@dptr,a
                    2A0A  13270 	C$easyax5043.c$2023$2$397 ==.
                          13271 ;	..\COMMON\easyax5043.c:2023: ax5043_prepare_tx();
   3254 12 14 60          13272 	lcall	_ax5043_prepare_tx
                    2A0D  13273 	C$easyax5043.c$2024$2$397 ==.
                          13274 ;	..\COMMON\easyax5043.c:2024: return AXRADIO_ERR_NOERROR;
   3257 75 82 00          13275 	mov	dpl,#0x00
                    2A10  13276 	C$easyax5043.c$2026$2$397 ==.
                          13277 ;	..\COMMON\easyax5043.c:2026: default:
   325A 80 03             13278 	sjmp	00162$
   325C                   13279 00160$:
                    2A12  13280 	C$easyax5043.c$2027$2$397 ==.
                          13281 ;	..\COMMON\easyax5043.c:2027: return AXRADIO_ERR_NOTSUPPORTED;
   325C 75 82 01          13282 	mov	dpl,#0x01
                    2A15  13283 	C$easyax5043.c$2028$1$396 ==.
                          13284 ;	..\COMMON\easyax5043.c:2028: }
   325F                   13285 00162$:
                    2A15  13286 	C$easyax5043.c$2029$1$396 ==.
                    2A15  13287 	XG$axradio_transmit$0$0 ==.
   325F 22                13288 	ret
                          13289 ;------------------------------------------------------------
                          13290 ;Allocation info for local variables in function 'axradio_set_paramsets'
                          13291 ;------------------------------------------------------------
                          13292 ;val                       Allocated to registers r7 
                          13293 ;------------------------------------------------------------
                    2A16  13294 	Feasyax5043$axradio_set_paramsets$0$0 ==.
                    2A16  13295 	C$easyax5043.c$2031$1$396 ==.
                          13296 ;	..\COMMON\easyax5043.c:2031: static __reentrantb uint8_t axradio_set_paramsets(uint8_t val) __reentrant
                          13297 ;	-----------------------------------------
                          13298 ;	 function axradio_set_paramsets
                          13299 ;	-----------------------------------------
   3260                   13300 _axradio_set_paramsets:
   3260 AF 82             13301 	mov	r7,dpl
                    2A18  13302 	C$easyax5043.c$2033$1$407 ==.
                          13303 ;	..\COMMON\easyax5043.c:2033: if (axradio_mode != AXRADIO_MODE_STREAM_RECEIVE &&
   3262 74 1C             13304 	mov	a,#0x1C
   3264 B5 0A 02          13305 	cjne	a,_axradio_mode,00113$
   3267 80 13             13306 	sjmp	00102$
   3269                   13307 00113$:
                    2A1F  13308 	C$easyax5043.c$2034$1$407 ==.
                          13309 ;	..\COMMON\easyax5043.c:2034: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_UNENC &&
   3269 74 1D             13310 	mov	a,#0x1D
   326B B5 0A 02          13311 	cjne	a,_axradio_mode,00114$
   326E 80 0C             13312 	sjmp	00102$
   3270                   13313 00114$:
                    2A26  13314 	C$easyax5043.c$2035$1$407 ==.
                          13315 ;	..\COMMON\easyax5043.c:2035: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   3270 74 1E             13316 	mov	a,#0x1E
   3272 B5 0A 02          13317 	cjne	a,_axradio_mode,00115$
   3275 80 05             13318 	sjmp	00102$
   3277                   13319 00115$:
                    2A2D  13320 	C$easyax5043.c$2036$1$407 ==.
                          13321 ;	..\COMMON\easyax5043.c:2036: return AXRADIO_ERR_NOTSUPPORTED;
   3277 75 82 01          13322 	mov	dpl,#0x01
   327A 80 08             13323 	sjmp	00105$
   327C                   13324 00102$:
                    2A32  13325 	C$easyax5043.c$2037$1$407 ==.
                          13326 ;	..\COMMON\easyax5043.c:2037: AX5043_RXPARAMSETS = val;
   327C 90 41 17          13327 	mov	dptr,#_AX5043_RXPARAMSETS
   327F EF                13328 	mov	a,r7
   3280 F0                13329 	movx	@dptr,a
                    2A37  13330 	C$easyax5043.c$2038$1$407 ==.
                          13331 ;	..\COMMON\easyax5043.c:2038: return AXRADIO_ERR_NOERROR;
   3281 75 82 00          13332 	mov	dpl,#0x00
   3284                   13333 00105$:
                    2A3A  13334 	C$easyax5043.c$2039$1$407 ==.
                    2A3A  13335 	XFeasyax5043$axradio_set_paramsets$0$0 ==.
   3284 22                13336 	ret
                          13337 ;------------------------------------------------------------
                          13338 ;Allocation info for local variables in function 'axradio_agc_freeze'
                          13339 ;------------------------------------------------------------
                    2A3B  13340 	G$axradio_agc_freeze$0$0 ==.
                    2A3B  13341 	C$easyax5043.c$2041$1$407 ==.
                          13342 ;	..\COMMON\easyax5043.c:2041: uint8_t axradio_agc_freeze(void)
                          13343 ;	-----------------------------------------
                          13344 ;	 function axradio_agc_freeze
                          13345 ;	-----------------------------------------
   3285                   13346 _axradio_agc_freeze:
                    2A3B  13347 	C$easyax5043.c$2043$1$409 ==.
                          13348 ;	..\COMMON\easyax5043.c:2043: return axradio_set_paramsets(0xff);
   3285 75 82 FF          13349 	mov	dpl,#0xFF
   3288 12 32 60          13350 	lcall	_axradio_set_paramsets
                    2A41  13351 	C$easyax5043.c$2044$1$409 ==.
                    2A41  13352 	XG$axradio_agc_freeze$0$0 ==.
   328B 22                13353 	ret
                          13354 ;------------------------------------------------------------
                          13355 ;Allocation info for local variables in function 'axradio_agc_thaw'
                          13356 ;------------------------------------------------------------
                    2A42  13357 	G$axradio_agc_thaw$0$0 ==.
                    2A42  13358 	C$easyax5043.c$2046$1$409 ==.
                          13359 ;	..\COMMON\easyax5043.c:2046: uint8_t axradio_agc_thaw(void)
                          13360 ;	-----------------------------------------
                          13361 ;	 function axradio_agc_thaw
                          13362 ;	-----------------------------------------
   328C                   13363 _axradio_agc_thaw:
                    2A42  13364 	C$easyax5043.c$2048$1$411 ==.
                          13365 ;	..\COMMON\easyax5043.c:2048: return axradio_set_paramsets(0x00);
   328C 75 82 00          13366 	mov	dpl,#0x00
   328F 12 32 60          13367 	lcall	_axradio_set_paramsets
                    2A48  13368 	C$easyax5043.c$2049$1$411 ==.
                    2A48  13369 	XG$axradio_agc_thaw$0$0 ==.
   3292 22                13370 	ret
                          13371 	.area CSEG    (CODE)
                          13372 	.area CONST   (CODE)
                          13373 	.area XINIT   (CODE)
                    0000  13374 Feasyax5043$__xinit_f30_saved$0$0 == .
   5B08                   13375 __xinit__f30_saved:
   5B08 3F                13376 	.db #0x3F	; 63
                    0001  13377 Feasyax5043$__xinit_f31_saved$0$0 == .
   5B09                   13378 __xinit__f31_saved:
   5B09 F0                13379 	.db #0xF0	; 240
                    0002  13380 Feasyax5043$__xinit_f32_saved$0$0 == .
   5B0A                   13381 __xinit__f32_saved:
   5B0A 3F                13382 	.db #0x3F	; 63
                    0003  13383 Feasyax5043$__xinit_f33_saved$0$0 == .
   5B0B                   13384 __xinit__f33_saved:
   5B0B F0                13385 	.db #0xF0	; 240
                          13386 	.area CABS    (ABS,CODE)
