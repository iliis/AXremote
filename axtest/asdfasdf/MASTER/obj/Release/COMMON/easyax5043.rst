                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Mon Dec 23 14:38:16 2013
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
                    00E0   1142 _ACC	=	0x00e0
                    00F0   1143 _B	=	0x00f0
                    0083   1144 _DPH	=	0x0083
                    0085   1145 _DPH1	=	0x0085
                    0082   1146 _DPL	=	0x0082
                    0084   1147 _DPL1	=	0x0084
                    8382   1148 _DPTR0	=	0x8382
                    8584   1149 _DPTR1	=	0x8584
                    0086   1150 _DPS	=	0x0086
                    00A0   1151 _E2IE	=	0x00a0
                    00C0   1152 _E2IP	=	0x00c0
                    0098   1153 _EIE	=	0x0098
                    00B0   1154 _EIP	=	0x00b0
                    00A8   1155 _IE	=	0x00a8
                    00B8   1156 _IP	=	0x00b8
                    0087   1157 _PCON	=	0x0087
                    00D0   1158 _PSW	=	0x00d0
                    0081   1159 _SP	=	0x0081
                    00D9   1160 _XPAGE	=	0x00d9
                    00D9   1161 __XPAGE	=	0x00d9
                    00CA   1162 _ADCCH0CONFIG	=	0x00ca
                    00CB   1163 _ADCCH1CONFIG	=	0x00cb
                    00D2   1164 _ADCCH2CONFIG	=	0x00d2
                    00D3   1165 _ADCCH3CONFIG	=	0x00d3
                    00D1   1166 _ADCCLKSRC	=	0x00d1
                    00C9   1167 _ADCCONV	=	0x00c9
                    00E1   1168 _ANALOGCOMP	=	0x00e1
                    00C6   1169 _CLKCON	=	0x00c6
                    00C7   1170 _CLKSTAT	=	0x00c7
                    0097   1171 _CODECONFIG	=	0x0097
                    00E3   1172 _DBGLNKBUF	=	0x00e3
                    00E2   1173 _DBGLNKSTAT	=	0x00e2
                    0089   1174 _DIRA	=	0x0089
                    008A   1175 _DIRB	=	0x008a
                    008B   1176 _DIRC	=	0x008b
                    008E   1177 _DIRR	=	0x008e
                    00C8   1178 _PINA	=	0x00c8
                    00E8   1179 _PINB	=	0x00e8
                    00F8   1180 _PINC	=	0x00f8
                    008D   1181 _PINR	=	0x008d
                    0080   1182 _PORTA	=	0x0080
                    0088   1183 _PORTB	=	0x0088
                    0090   1184 _PORTC	=	0x0090
                    008C   1185 _PORTR	=	0x008c
                    00CE   1186 _IC0CAPT0	=	0x00ce
                    00CF   1187 _IC0CAPT1	=	0x00cf
                    CFCE   1188 _IC0CAPT	=	0xcfce
                    00CC   1189 _IC0MODE	=	0x00cc
                    00CD   1190 _IC0STATUS	=	0x00cd
                    00D6   1191 _IC1CAPT0	=	0x00d6
                    00D7   1192 _IC1CAPT1	=	0x00d7
                    D7D6   1193 _IC1CAPT	=	0xd7d6
                    00D4   1194 _IC1MODE	=	0x00d4
                    00D5   1195 _IC1STATUS	=	0x00d5
                    0092   1196 _NVADDR0	=	0x0092
                    0093   1197 _NVADDR1	=	0x0093
                    9392   1198 _NVADDR	=	0x9392
                    0094   1199 _NVDATA0	=	0x0094
                    0095   1200 _NVDATA1	=	0x0095
                    9594   1201 _NVDATA	=	0x9594
                    0096   1202 _NVKEY	=	0x0096
                    0091   1203 _NVSTATUS	=	0x0091
                    00BC   1204 _OC0COMP0	=	0x00bc
                    00BD   1205 _OC0COMP1	=	0x00bd
                    BDBC   1206 _OC0COMP	=	0xbdbc
                    00B9   1207 _OC0MODE	=	0x00b9
                    00BA   1208 _OC0PIN	=	0x00ba
                    00BB   1209 _OC0STATUS	=	0x00bb
                    00C4   1210 _OC1COMP0	=	0x00c4
                    00C5   1211 _OC1COMP1	=	0x00c5
                    C5C4   1212 _OC1COMP	=	0xc5c4
                    00C1   1213 _OC1MODE	=	0x00c1
                    00C2   1214 _OC1PIN	=	0x00c2
                    00C3   1215 _OC1STATUS	=	0x00c3
                    00B1   1216 _RADIOACC	=	0x00b1
                    00B3   1217 _RADIOADDR0	=	0x00b3
                    00B2   1218 _RADIOADDR1	=	0x00b2
                    B2B3   1219 _RADIOADDR	=	0xb2b3
                    00B7   1220 _RADIODATA0	=	0x00b7
                    00B6   1221 _RADIODATA1	=	0x00b6
                    00B5   1222 _RADIODATA2	=	0x00b5
                    00B4   1223 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1224 _RADIODATA	=	0xb4b5b6b7
                    00BE   1225 _RADIOSTAT0	=	0x00be
                    00BF   1226 _RADIOSTAT1	=	0x00bf
                    BFBE   1227 _RADIOSTAT	=	0xbfbe
                    00DF   1228 _SPCLKSRC	=	0x00df
                    00DC   1229 _SPMODE	=	0x00dc
                    00DE   1230 _SPSHREG	=	0x00de
                    00DD   1231 _SPSTATUS	=	0x00dd
                    009A   1232 _T0CLKSRC	=	0x009a
                    009C   1233 _T0CNT0	=	0x009c
                    009D   1234 _T0CNT1	=	0x009d
                    9D9C   1235 _T0CNT	=	0x9d9c
                    0099   1236 _T0MODE	=	0x0099
                    009E   1237 _T0PERIOD0	=	0x009e
                    009F   1238 _T0PERIOD1	=	0x009f
                    9F9E   1239 _T0PERIOD	=	0x9f9e
                    009B   1240 _T0STATUS	=	0x009b
                    00A2   1241 _T1CLKSRC	=	0x00a2
                    00A4   1242 _T1CNT0	=	0x00a4
                    00A5   1243 _T1CNT1	=	0x00a5
                    A5A4   1244 _T1CNT	=	0xa5a4
                    00A1   1245 _T1MODE	=	0x00a1
                    00A6   1246 _T1PERIOD0	=	0x00a6
                    00A7   1247 _T1PERIOD1	=	0x00a7
                    A7A6   1248 _T1PERIOD	=	0xa7a6
                    00A3   1249 _T1STATUS	=	0x00a3
                    00AA   1250 _T2CLKSRC	=	0x00aa
                    00AC   1251 _T2CNT0	=	0x00ac
                    00AD   1252 _T2CNT1	=	0x00ad
                    ADAC   1253 _T2CNT	=	0xadac
                    00A9   1254 _T2MODE	=	0x00a9
                    00AE   1255 _T2PERIOD0	=	0x00ae
                    00AF   1256 _T2PERIOD1	=	0x00af
                    AFAE   1257 _T2PERIOD	=	0xafae
                    00AB   1258 _T2STATUS	=	0x00ab
                    00E4   1259 _U0CTRL	=	0x00e4
                    00E7   1260 _U0MODE	=	0x00e7
                    00E6   1261 _U0SHREG	=	0x00e6
                    00E5   1262 _U0STATUS	=	0x00e5
                    00EC   1263 _U1CTRL	=	0x00ec
                    00EF   1264 _U1MODE	=	0x00ef
                    00EE   1265 _U1SHREG	=	0x00ee
                    00ED   1266 _U1STATUS	=	0x00ed
                    00DA   1267 _WDTCFG	=	0x00da
                    00DB   1268 _WDTRESET	=	0x00db
                    00F1   1269 _WTCFGA	=	0x00f1
                    00F9   1270 _WTCFGB	=	0x00f9
                    00F2   1271 _WTCNTA0	=	0x00f2
                    00F3   1272 _WTCNTA1	=	0x00f3
                    F3F2   1273 _WTCNTA	=	0xf3f2
                    00FA   1274 _WTCNTB0	=	0x00fa
                    00FB   1275 _WTCNTB1	=	0x00fb
                    FBFA   1276 _WTCNTB	=	0xfbfa
                    00EB   1277 _WTCNTR1	=	0x00eb
                    00F4   1278 _WTEVTA0	=	0x00f4
                    00F5   1279 _WTEVTA1	=	0x00f5
                    F5F4   1280 _WTEVTA	=	0xf5f4
                    00F6   1281 _WTEVTB0	=	0x00f6
                    00F7   1282 _WTEVTB1	=	0x00f7
                    F7F6   1283 _WTEVTB	=	0xf7f6
                    00FC   1284 _WTEVTC0	=	0x00fc
                    00FD   1285 _WTEVTC1	=	0x00fd
                    FDFC   1286 _WTEVTC	=	0xfdfc
                    00FE   1287 _WTEVTD0	=	0x00fe
                    00FF   1288 _WTEVTD1	=	0x00ff
                    FFFE   1289 _WTEVTD	=	0xfffe
                    00E9   1290 _WTIRQEN	=	0x00e9
                    00EA   1291 _WTSTAT	=	0x00ea
                           1292 ;--------------------------------------------------------
                           1293 ; special function bits
                           1294 ;--------------------------------------------------------
                           1295 	.area RSEG    (ABS,DATA)
   0000                    1296 	.org 0x0000
                    00E0   1297 _ACC_0	=	0x00e0
                    00E1   1298 _ACC_1	=	0x00e1
                    00E2   1299 _ACC_2	=	0x00e2
                    00E3   1300 _ACC_3	=	0x00e3
                    00E4   1301 _ACC_4	=	0x00e4
                    00E5   1302 _ACC_5	=	0x00e5
                    00E6   1303 _ACC_6	=	0x00e6
                    00E7   1304 _ACC_7	=	0x00e7
                    00F0   1305 _B_0	=	0x00f0
                    00F1   1306 _B_1	=	0x00f1
                    00F2   1307 _B_2	=	0x00f2
                    00F3   1308 _B_3	=	0x00f3
                    00F4   1309 _B_4	=	0x00f4
                    00F5   1310 _B_5	=	0x00f5
                    00F6   1311 _B_6	=	0x00f6
                    00F7   1312 _B_7	=	0x00f7
                    00A0   1313 _E2IE_0	=	0x00a0
                    00A1   1314 _E2IE_1	=	0x00a1
                    00A2   1315 _E2IE_2	=	0x00a2
                    00A3   1316 _E2IE_3	=	0x00a3
                    00A4   1317 _E2IE_4	=	0x00a4
                    00A5   1318 _E2IE_5	=	0x00a5
                    00A6   1319 _E2IE_6	=	0x00a6
                    00A7   1320 _E2IE_7	=	0x00a7
                    00C0   1321 _E2IP_0	=	0x00c0
                    00C1   1322 _E2IP_1	=	0x00c1
                    00C2   1323 _E2IP_2	=	0x00c2
                    00C3   1324 _E2IP_3	=	0x00c3
                    00C4   1325 _E2IP_4	=	0x00c4
                    00C5   1326 _E2IP_5	=	0x00c5
                    00C6   1327 _E2IP_6	=	0x00c6
                    00C7   1328 _E2IP_7	=	0x00c7
                    0098   1329 _EIE_0	=	0x0098
                    0099   1330 _EIE_1	=	0x0099
                    009A   1331 _EIE_2	=	0x009a
                    009B   1332 _EIE_3	=	0x009b
                    009C   1333 _EIE_4	=	0x009c
                    009D   1334 _EIE_5	=	0x009d
                    009E   1335 _EIE_6	=	0x009e
                    009F   1336 _EIE_7	=	0x009f
                    00B0   1337 _EIP_0	=	0x00b0
                    00B1   1338 _EIP_1	=	0x00b1
                    00B2   1339 _EIP_2	=	0x00b2
                    00B3   1340 _EIP_3	=	0x00b3
                    00B4   1341 _EIP_4	=	0x00b4
                    00B5   1342 _EIP_5	=	0x00b5
                    00B6   1343 _EIP_6	=	0x00b6
                    00B7   1344 _EIP_7	=	0x00b7
                    00A8   1345 _IE_0	=	0x00a8
                    00A9   1346 _IE_1	=	0x00a9
                    00AA   1347 _IE_2	=	0x00aa
                    00AB   1348 _IE_3	=	0x00ab
                    00AC   1349 _IE_4	=	0x00ac
                    00AD   1350 _IE_5	=	0x00ad
                    00AE   1351 _IE_6	=	0x00ae
                    00AF   1352 _IE_7	=	0x00af
                    00AF   1353 _EA	=	0x00af
                    00B8   1354 _IP_0	=	0x00b8
                    00B9   1355 _IP_1	=	0x00b9
                    00BA   1356 _IP_2	=	0x00ba
                    00BB   1357 _IP_3	=	0x00bb
                    00BC   1358 _IP_4	=	0x00bc
                    00BD   1359 _IP_5	=	0x00bd
                    00BE   1360 _IP_6	=	0x00be
                    00BF   1361 _IP_7	=	0x00bf
                    00D0   1362 _P	=	0x00d0
                    00D1   1363 _F1	=	0x00d1
                    00D2   1364 _OV	=	0x00d2
                    00D3   1365 _RS0	=	0x00d3
                    00D4   1366 _RS1	=	0x00d4
                    00D5   1367 _F0	=	0x00d5
                    00D6   1368 _AC	=	0x00d6
                    00D7   1369 _CY	=	0x00d7
                    00C8   1370 _PINA_0	=	0x00c8
                    00C9   1371 _PINA_1	=	0x00c9
                    00CA   1372 _PINA_2	=	0x00ca
                    00CB   1373 _PINA_3	=	0x00cb
                    00CC   1374 _PINA_4	=	0x00cc
                    00CD   1375 _PINA_5	=	0x00cd
                    00CE   1376 _PINA_6	=	0x00ce
                    00CF   1377 _PINA_7	=	0x00cf
                    00E8   1378 _PINB_0	=	0x00e8
                    00E9   1379 _PINB_1	=	0x00e9
                    00EA   1380 _PINB_2	=	0x00ea
                    00EB   1381 _PINB_3	=	0x00eb
                    00EC   1382 _PINB_4	=	0x00ec
                    00ED   1383 _PINB_5	=	0x00ed
                    00EE   1384 _PINB_6	=	0x00ee
                    00EF   1385 _PINB_7	=	0x00ef
                    00F8   1386 _PINC_0	=	0x00f8
                    00F9   1387 _PINC_1	=	0x00f9
                    00FA   1388 _PINC_2	=	0x00fa
                    00FB   1389 _PINC_3	=	0x00fb
                    00FC   1390 _PINC_4	=	0x00fc
                    00FD   1391 _PINC_5	=	0x00fd
                    00FE   1392 _PINC_6	=	0x00fe
                    00FF   1393 _PINC_7	=	0x00ff
                    0080   1394 _PORTA_0	=	0x0080
                    0081   1395 _PORTA_1	=	0x0081
                    0082   1396 _PORTA_2	=	0x0082
                    0083   1397 _PORTA_3	=	0x0083
                    0084   1398 _PORTA_4	=	0x0084
                    0085   1399 _PORTA_5	=	0x0085
                    0086   1400 _PORTA_6	=	0x0086
                    0087   1401 _PORTA_7	=	0x0087
                    0088   1402 _PORTB_0	=	0x0088
                    0089   1403 _PORTB_1	=	0x0089
                    008A   1404 _PORTB_2	=	0x008a
                    008B   1405 _PORTB_3	=	0x008b
                    008C   1406 _PORTB_4	=	0x008c
                    008D   1407 _PORTB_5	=	0x008d
                    008E   1408 _PORTB_6	=	0x008e
                    008F   1409 _PORTB_7	=	0x008f
                    0090   1410 _PORTC_0	=	0x0090
                    0091   1411 _PORTC_1	=	0x0091
                    0092   1412 _PORTC_2	=	0x0092
                    0093   1413 _PORTC_3	=	0x0093
                    0094   1414 _PORTC_4	=	0x0094
                    0095   1415 _PORTC_5	=	0x0095
                    0096   1416 _PORTC_6	=	0x0096
                    0097   1417 _PORTC_7	=	0x0097
                           1418 ;--------------------------------------------------------
                           1419 ; overlayable register banks
                           1420 ;--------------------------------------------------------
                           1421 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1422 	.ds 8
                           1423 ;--------------------------------------------------------
                           1424 ; overlayable bit register bank
                           1425 ;--------------------------------------------------------
                           1426 	.area BIT_BANK	(REL,OVR,DATA)
   0021                    1427 bits:
   0021                    1428 	.ds 1
                    8000   1429 	b0 = bits[0]
                    8100   1430 	b1 = bits[1]
                    8200   1431 	b2 = bits[2]
                    8300   1432 	b3 = bits[3]
                    8400   1433 	b4 = bits[4]
                    8500   1434 	b5 = bits[5]
                    8600   1435 	b6 = bits[6]
                    8700   1436 	b7 = bits[7]
                           1437 ;--------------------------------------------------------
                           1438 ; internal ram data
                           1439 ;--------------------------------------------------------
                           1440 	.area DSEG    (DATA)
   000A                    1441 _axradio_mode::
   000A                    1442 	.ds 1
   000B                    1443 _axradio_trxstate::
   000B                    1444 	.ds 1
   000C                    1445 _axradio_transmit_PARM_2:
   000C                    1446 	.ds 3
   000F                    1447 _axradio_transmit_PARM_3:
   000F                    1448 	.ds 2
                           1449 ;--------------------------------------------------------
                           1450 ; overlayable items in internal ram 
                           1451 ;--------------------------------------------------------
                           1452 	.area	OSEG    (OVR,DATA)
   002A                    1453 _axradio_set_channel_rng_1_370:
   002A                    1454 	.ds 1
                           1455 ;--------------------------------------------------------
                           1456 ; indirectly addressable internal ram data
                           1457 ;--------------------------------------------------------
                           1458 	.area ISEG    (DATA)
                           1459 ;--------------------------------------------------------
                           1460 ; absolute internal ram data
                           1461 ;--------------------------------------------------------
                           1462 	.area IABS    (ABS,DATA)
                           1463 	.area IABS    (ABS,DATA)
                           1464 ;--------------------------------------------------------
                           1465 ; bit data
                           1466 ;--------------------------------------------------------
                           1467 	.area BSEG    (BIT)
                           1468 ;--------------------------------------------------------
                           1469 ; paged external ram data
                           1470 ;--------------------------------------------------------
                           1471 	.area PSEG    (PAG,XDATA)
                           1472 ;--------------------------------------------------------
                           1473 ; external ram data
                           1474 ;--------------------------------------------------------
                           1475 	.area XSEG    (XDATA)
                    7020   1476 _ADCCH0VAL0	=	0x7020
                    7021   1477 _ADCCH0VAL1	=	0x7021
                    7020   1478 _ADCCH0VAL	=	0x7020
                    7022   1479 _ADCCH1VAL0	=	0x7022
                    7023   1480 _ADCCH1VAL1	=	0x7023
                    7022   1481 _ADCCH1VAL	=	0x7022
                    7024   1482 _ADCCH2VAL0	=	0x7024
                    7025   1483 _ADCCH2VAL1	=	0x7025
                    7024   1484 _ADCCH2VAL	=	0x7024
                    7026   1485 _ADCCH3VAL0	=	0x7026
                    7027   1486 _ADCCH3VAL1	=	0x7027
                    7026   1487 _ADCCH3VAL	=	0x7026
                    7028   1488 _ADCTUNE0	=	0x7028
                    7029   1489 _ADCTUNE1	=	0x7029
                    702A   1490 _ADCTUNE2	=	0x702a
                    7010   1491 _DMA0ADDR0	=	0x7010
                    7011   1492 _DMA0ADDR1	=	0x7011
                    7010   1493 _DMA0ADDR	=	0x7010
                    7014   1494 _DMA0CONFIG	=	0x7014
                    7012   1495 _DMA1ADDR0	=	0x7012
                    7013   1496 _DMA1ADDR1	=	0x7013
                    7012   1497 _DMA1ADDR	=	0x7012
                    7015   1498 _DMA1CONFIG	=	0x7015
                    7070   1499 _FRCOSCCONFIG	=	0x7070
                    7071   1500 _FRCOSCCTRL	=	0x7071
                    7076   1501 _FRCOSCFREQ0	=	0x7076
                    7077   1502 _FRCOSCFREQ1	=	0x7077
                    7076   1503 _FRCOSCFREQ	=	0x7076
                    7072   1504 _FRCOSCKFILT0	=	0x7072
                    7073   1505 _FRCOSCKFILT1	=	0x7073
                    7072   1506 _FRCOSCKFILT	=	0x7072
                    7078   1507 _FRCOSCPER0	=	0x7078
                    7079   1508 _FRCOSCPER1	=	0x7079
                    7078   1509 _FRCOSCPER	=	0x7078
                    7074   1510 _FRCOSCREF0	=	0x7074
                    7075   1511 _FRCOSCREF1	=	0x7075
                    7074   1512 _FRCOSCREF	=	0x7074
                    7007   1513 _ANALOGA	=	0x7007
                    700C   1514 _GPIOENABLE	=	0x700c
                    7003   1515 _EXTIRQ	=	0x7003
                    7000   1516 _INTCHGA	=	0x7000
                    7001   1517 _INTCHGB	=	0x7001
                    7002   1518 _INTCHGC	=	0x7002
                    7008   1519 _PALTA	=	0x7008
                    7009   1520 _PALTB	=	0x7009
                    700A   1521 _PALTC	=	0x700a
                    7046   1522 _PALTRADIO	=	0x7046
                    7004   1523 _PINCHGA	=	0x7004
                    7005   1524 _PINCHGB	=	0x7005
                    7006   1525 _PINCHGC	=	0x7006
                    700B   1526 _PINSEL	=	0x700b
                    7060   1527 _LPOSCCONFIG	=	0x7060
                    7066   1528 _LPOSCFREQ0	=	0x7066
                    7067   1529 _LPOSCFREQ1	=	0x7067
                    7066   1530 _LPOSCFREQ	=	0x7066
                    7062   1531 _LPOSCKFILT0	=	0x7062
                    7063   1532 _LPOSCKFILT1	=	0x7063
                    7062   1533 _LPOSCKFILT	=	0x7062
                    7068   1534 _LPOSCPER0	=	0x7068
                    7069   1535 _LPOSCPER1	=	0x7069
                    7068   1536 _LPOSCPER	=	0x7068
                    7064   1537 _LPOSCREF0	=	0x7064
                    7065   1538 _LPOSCREF1	=	0x7065
                    7064   1539 _LPOSCREF	=	0x7064
                    7054   1540 _LPXOSCGM	=	0x7054
                    7F01   1541 _MISCCTRL	=	0x7f01
                    7053   1542 _OSCCALIB	=	0x7053
                    7050   1543 _OSCFORCERUN	=	0x7050
                    7052   1544 _OSCREADY	=	0x7052
                    7051   1545 _OSCRUN	=	0x7051
                    7040   1546 _RADIOFDATAADDR0	=	0x7040
                    7041   1547 _RADIOFDATAADDR1	=	0x7041
                    7040   1548 _RADIOFDATAADDR	=	0x7040
                    7042   1549 _RADIOFSTATADDR0	=	0x7042
                    7043   1550 _RADIOFSTATADDR1	=	0x7043
                    7042   1551 _RADIOFSTATADDR	=	0x7042
                    7044   1552 _RADIOMUX	=	0x7044
                    7084   1553 _SCRATCH0	=	0x7084
                    7085   1554 _SCRATCH1	=	0x7085
                    7086   1555 _SCRATCH2	=	0x7086
                    7087   1556 _SCRATCH3	=	0x7087
                    7F00   1557 _SILICONREV	=	0x7f00
                    7F19   1558 _XTALAMPL	=	0x7f19
                    7F18   1559 _XTALOSC	=	0x7f18
                    7F1A   1560 _XTALREADY	=	0x7f1a
                    3F82   1561 _XDPTR0	=	0x3f82
                    3F84   1562 _XDPTR1	=	0x3f84
                    3FA8   1563 _XIE	=	0x3fa8
                    3FB8   1564 _XIP	=	0x3fb8
                    3F87   1565 _XPCON	=	0x3f87
                    3FCA   1566 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1567 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1568 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1569 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1570 _XADCCLKSRC	=	0x3fd1
                    3FC9   1571 _XADCCONV	=	0x3fc9
                    3FE1   1572 _XANALOGCOMP	=	0x3fe1
                    3FC6   1573 _XCLKCON	=	0x3fc6
                    3FC7   1574 _XCLKSTAT	=	0x3fc7
                    3F97   1575 _XCODECONFIG	=	0x3f97
                    3FE3   1576 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1577 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1578 _XDIRA	=	0x3f89
                    3F8A   1579 _XDIRB	=	0x3f8a
                    3F8B   1580 _XDIRC	=	0x3f8b
                    3F8E   1581 _XDIRR	=	0x3f8e
                    3FC8   1582 _XPINA	=	0x3fc8
                    3FE8   1583 _XPINB	=	0x3fe8
                    3FF8   1584 _XPINC	=	0x3ff8
                    3F8D   1585 _XPINR	=	0x3f8d
                    3F80   1586 _XPORTA	=	0x3f80
                    3F88   1587 _XPORTB	=	0x3f88
                    3F90   1588 _XPORTC	=	0x3f90
                    3F8C   1589 _XPORTR	=	0x3f8c
                    3FCE   1590 _XIC0CAPT0	=	0x3fce
                    3FCF   1591 _XIC0CAPT1	=	0x3fcf
                    3FCE   1592 _XIC0CAPT	=	0x3fce
                    3FCC   1593 _XIC0MODE	=	0x3fcc
                    3FCD   1594 _XIC0STATUS	=	0x3fcd
                    3FD6   1595 _XIC1CAPT0	=	0x3fd6
                    3FD7   1596 _XIC1CAPT1	=	0x3fd7
                    3FD6   1597 _XIC1CAPT	=	0x3fd6
                    3FD4   1598 _XIC1MODE	=	0x3fd4
                    3FD5   1599 _XIC1STATUS	=	0x3fd5
                    3F92   1600 _XNVADDR0	=	0x3f92
                    3F93   1601 _XNVADDR1	=	0x3f93
                    3F92   1602 _XNVADDR	=	0x3f92
                    3F94   1603 _XNVDATA0	=	0x3f94
                    3F95   1604 _XNVDATA1	=	0x3f95
                    3F94   1605 _XNVDATA	=	0x3f94
                    3F96   1606 _XNVKEY	=	0x3f96
                    3F91   1607 _XNVSTATUS	=	0x3f91
                    3FBC   1608 _XOC0COMP0	=	0x3fbc
                    3FBD   1609 _XOC0COMP1	=	0x3fbd
                    3FBC   1610 _XOC0COMP	=	0x3fbc
                    3FB9   1611 _XOC0MODE	=	0x3fb9
                    3FBA   1612 _XOC0PIN	=	0x3fba
                    3FBB   1613 _XOC0STATUS	=	0x3fbb
                    3FC4   1614 _XOC1COMP0	=	0x3fc4
                    3FC5   1615 _XOC1COMP1	=	0x3fc5
                    3FC4   1616 _XOC1COMP	=	0x3fc4
                    3FC1   1617 _XOC1MODE	=	0x3fc1
                    3FC2   1618 _XOC1PIN	=	0x3fc2
                    3FC3   1619 _XOC1STATUS	=	0x3fc3
                    3FB1   1620 _XRADIOACC	=	0x3fb1
                    3FB3   1621 _XRADIOADDR0	=	0x3fb3
                    3FB2   1622 _XRADIOADDR1	=	0x3fb2
                    3FB7   1623 _XRADIODATA0	=	0x3fb7
                    3FB6   1624 _XRADIODATA1	=	0x3fb6
                    3FB5   1625 _XRADIODATA2	=	0x3fb5
                    3FB4   1626 _XRADIODATA3	=	0x3fb4
                    3FBE   1627 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1628 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1629 _XRADIOSTAT	=	0x3fbe
                    3FDF   1630 _XSPCLKSRC	=	0x3fdf
                    3FDC   1631 _XSPMODE	=	0x3fdc
                    3FDE   1632 _XSPSHREG	=	0x3fde
                    3FDD   1633 _XSPSTATUS	=	0x3fdd
                    3F9A   1634 _XT0CLKSRC	=	0x3f9a
                    3F9C   1635 _XT0CNT0	=	0x3f9c
                    3F9D   1636 _XT0CNT1	=	0x3f9d
                    3F9C   1637 _XT0CNT	=	0x3f9c
                    3F99   1638 _XT0MODE	=	0x3f99
                    3F9E   1639 _XT0PERIOD0	=	0x3f9e
                    3F9F   1640 _XT0PERIOD1	=	0x3f9f
                    3F9E   1641 _XT0PERIOD	=	0x3f9e
                    3F9B   1642 _XT0STATUS	=	0x3f9b
                    3FA2   1643 _XT1CLKSRC	=	0x3fa2
                    3FA4   1644 _XT1CNT0	=	0x3fa4
                    3FA5   1645 _XT1CNT1	=	0x3fa5
                    3FA4   1646 _XT1CNT	=	0x3fa4
                    3FA1   1647 _XT1MODE	=	0x3fa1
                    3FA6   1648 _XT1PERIOD0	=	0x3fa6
                    3FA7   1649 _XT1PERIOD1	=	0x3fa7
                    3FA6   1650 _XT1PERIOD	=	0x3fa6
                    3FA3   1651 _XT1STATUS	=	0x3fa3
                    3FAA   1652 _XT2CLKSRC	=	0x3faa
                    3FAC   1653 _XT2CNT0	=	0x3fac
                    3FAD   1654 _XT2CNT1	=	0x3fad
                    3FAC   1655 _XT2CNT	=	0x3fac
                    3FA9   1656 _XT2MODE	=	0x3fa9
                    3FAE   1657 _XT2PERIOD0	=	0x3fae
                    3FAF   1658 _XT2PERIOD1	=	0x3faf
                    3FAE   1659 _XT2PERIOD	=	0x3fae
                    3FAB   1660 _XT2STATUS	=	0x3fab
                    3FE4   1661 _XU0CTRL	=	0x3fe4
                    3FE7   1662 _XU0MODE	=	0x3fe7
                    3FE6   1663 _XU0SHREG	=	0x3fe6
                    3FE5   1664 _XU0STATUS	=	0x3fe5
                    3FEC   1665 _XU1CTRL	=	0x3fec
                    3FEF   1666 _XU1MODE	=	0x3fef
                    3FEE   1667 _XU1SHREG	=	0x3fee
                    3FED   1668 _XU1STATUS	=	0x3fed
                    3FDA   1669 _XWDTCFG	=	0x3fda
                    3FDB   1670 _XWDTRESET	=	0x3fdb
                    3FF1   1671 _XWTCFGA	=	0x3ff1
                    3FF9   1672 _XWTCFGB	=	0x3ff9
                    3FF2   1673 _XWTCNTA0	=	0x3ff2
                    3FF3   1674 _XWTCNTA1	=	0x3ff3
                    3FF2   1675 _XWTCNTA	=	0x3ff2
                    3FFA   1676 _XWTCNTB0	=	0x3ffa
                    3FFB   1677 _XWTCNTB1	=	0x3ffb
                    3FFA   1678 _XWTCNTB	=	0x3ffa
                    3FEB   1679 _XWTCNTR1	=	0x3feb
                    3FF4   1680 _XWTEVTA0	=	0x3ff4
                    3FF5   1681 _XWTEVTA1	=	0x3ff5
                    3FF4   1682 _XWTEVTA	=	0x3ff4
                    3FF6   1683 _XWTEVTB0	=	0x3ff6
                    3FF7   1684 _XWTEVTB1	=	0x3ff7
                    3FF6   1685 _XWTEVTB	=	0x3ff6
                    3FFC   1686 _XWTEVTC0	=	0x3ffc
                    3FFD   1687 _XWTEVTC1	=	0x3ffd
                    3FFC   1688 _XWTEVTC	=	0x3ffc
                    3FFE   1689 _XWTEVTD0	=	0x3ffe
                    3FFF   1690 _XWTEVTD1	=	0x3fff
                    3FFE   1691 _XWTEVTD	=	0x3ffe
                    3FE9   1692 _XWTIRQEN	=	0x3fe9
                    3FEA   1693 _XWTSTAT	=	0x3fea
                    4114   1694 _AX5043_AFSKCTRL	=	0x4114
                    4113   1695 _AX5043_AFSKMARK0	=	0x4113
                    4112   1696 _AX5043_AFSKMARK1	=	0x4112
                    4111   1697 _AX5043_AFSKSPACE0	=	0x4111
                    4110   1698 _AX5043_AFSKSPACE1	=	0x4110
                    4043   1699 _AX5043_AGCCOUNTER	=	0x4043
                    4115   1700 _AX5043_AMPLFILTER	=	0x4115
                    4189   1701 _AX5043_BBOFFSCAP	=	0x4189
                    4188   1702 _AX5043_BBTUNE	=	0x4188
                    4041   1703 _AX5043_BGNDRSSI	=	0x4041
                    422E   1704 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   1705 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   1706 _AX5043_CRCINIT0	=	0x4017
                    4016   1707 _AX5043_CRCINIT1	=	0x4016
                    4015   1708 _AX5043_CRCINIT2	=	0x4015
                    4014   1709 _AX5043_CRCINIT3	=	0x4014
                    4332   1710 _AX5043_DACCONFIG	=	0x4332
                    4331   1711 _AX5043_DACVALUE0	=	0x4331
                    4330   1712 _AX5043_DACVALUE1	=	0x4330
                    4102   1713 _AX5043_DECIMATION	=	0x4102
                    4042   1714 _AX5043_DIVERSITY	=	0x4042
                    4011   1715 _AX5043_ENCODING	=	0x4011
                    4018   1716 _AX5043_FEC	=	0x4018
                    401A   1717 _AX5043_FECSTATUS	=	0x401a
                    4019   1718 _AX5043_FECSYNC	=	0x4019
                    402B   1719 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   1720 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   1721 _AX5043_FIFODATA	=	0x4029
                    402D   1722 _AX5043_FIFOFREE0	=	0x402d
                    402C   1723 _AX5043_FIFOFREE1	=	0x402c
                    4028   1724 _AX5043_FIFOSTAT	=	0x4028
                    402F   1725 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   1726 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   1727 _AX5043_FRAMING	=	0x4012
                    4037   1728 _AX5043_FREQA0	=	0x4037
                    4036   1729 _AX5043_FREQA1	=	0x4036
                    4035   1730 _AX5043_FREQA2	=	0x4035
                    4034   1731 _AX5043_FREQA3	=	0x4034
                    403F   1732 _AX5043_FREQB0	=	0x403f
                    403E   1733 _AX5043_FREQB1	=	0x403e
                    403D   1734 _AX5043_FREQB2	=	0x403d
                    403C   1735 _AX5043_FREQB3	=	0x403c
                    4163   1736 _AX5043_FSKDEV0	=	0x4163
                    4162   1737 _AX5043_FSKDEV1	=	0x4162
                    4161   1738 _AX5043_FSKDEV2	=	0x4161
                    410D   1739 _AX5043_FSKDMAX0	=	0x410d
                    410C   1740 _AX5043_FSKDMAX1	=	0x410c
                    410F   1741 _AX5043_FSKDMIN0	=	0x410f
                    410E   1742 _AX5043_FSKDMIN1	=	0x410e
                    4309   1743 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   1744 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   1745 _AX5043_GPADCCTRL	=	0x4300
                    4301   1746 _AX5043_GPADCPERIOD	=	0x4301
                    4101   1747 _AX5043_IFFREQ0	=	0x4101
                    4100   1748 _AX5043_IFFREQ1	=	0x4100
                    400B   1749 _AX5043_IRQINVERSION0	=	0x400b
                    400A   1750 _AX5043_IRQINVERSION1	=	0x400a
                    4007   1751 _AX5043_IRQMASK0	=	0x4007
                    4006   1752 _AX5043_IRQMASK1	=	0x4006
                    400D   1753 _AX5043_IRQREQUEST0	=	0x400d
                    400C   1754 _AX5043_IRQREQUEST1	=	0x400c
                    4310   1755 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   1756 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   1757 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   1758 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   1759 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   1760 _AX5043_LPOSCPER0	=	0x4319
                    4318   1761 _AX5043_LPOSCPER1	=	0x4318
                    4315   1762 _AX5043_LPOSCREF0	=	0x4315
                    4314   1763 _AX5043_LPOSCREF1	=	0x4314
                    4311   1764 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   1765 _AX5043_MATCH0LEN	=	0x4214
                    4216   1766 _AX5043_MATCH0MAX	=	0x4216
                    4215   1767 _AX5043_MATCH0MIN	=	0x4215
                    4213   1768 _AX5043_MATCH0PAT0	=	0x4213
                    4212   1769 _AX5043_MATCH0PAT1	=	0x4212
                    4211   1770 _AX5043_MATCH0PAT2	=	0x4211
                    4210   1771 _AX5043_MATCH0PAT3	=	0x4210
                    421C   1772 _AX5043_MATCH1LEN	=	0x421c
                    421E   1773 _AX5043_MATCH1MAX	=	0x421e
                    421D   1774 _AX5043_MATCH1MIN	=	0x421d
                    4219   1775 _AX5043_MATCH1PAT0	=	0x4219
                    4218   1776 _AX5043_MATCH1PAT1	=	0x4218
                    4108   1777 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   1778 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   1779 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   1780 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   1781 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   1782 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   1783 _AX5043_MODCFGA	=	0x4164
                    4160   1784 _AX5043_MODCFGF	=	0x4160
                    4010   1785 _AX5043_MODULATION	=	0x4010
                    4025   1786 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   1787 _AX5043_PINFUNCDATA	=	0x4023
                    4022   1788 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   1789 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   1790 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   1791 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   1792 _AX5043_PINSTATE	=	0x4020
                    4233   1793 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   1794 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   1795 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   1796 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   1797 _AX5043_PLLCPI	=	0x4031
                    4039   1798 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   1799 _AX5043_PLLLOCKDET	=	0x4182
                    4030   1800 _AX5043_PLLLOOP	=	0x4030
                    4038   1801 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   1802 _AX5043_PLLRANGINGA	=	0x4033
                    403B   1803 _AX5043_PLLRANGINGB	=	0x403b
                    4183   1804 _AX5043_PLLRNGCLK	=	0x4183
                    4032   1805 _AX5043_PLLVCODIV	=	0x4032
                    4180   1806 _AX5043_PLLVCOI	=	0x4180
                    4181   1807 _AX5043_PLLVCOIR	=	0x4181
                    4005   1808 _AX5043_POWIRQMASK	=	0x4005
                    4003   1809 _AX5043_POWSTAT	=	0x4003
                    4004   1810 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   1811 _AX5043_PWRAMP	=	0x4027
                    4002   1812 _AX5043_PWRMODE	=	0x4002
                    4009   1813 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   1814 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   1815 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   1816 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   1817 _AX5043_RADIOSTATE	=	0x401c
                    4040   1818 _AX5043_RSSI	=	0x4040
                    422D   1819 _AX5043_RSSIABSTHR	=	0x422d
                    422C   1820 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   1821 _AX5043_RXDATARATE0	=	0x4105
                    4104   1822 _AX5043_RXDATARATE1	=	0x4104
                    4103   1823 _AX5043_RXDATARATE2	=	0x4103
                    4001   1824 _AX5043_SCRATCH	=	0x4001
                    4000   1825 _AX5043_SILICONREVISION	=	0x4000
                    405B   1826 _AX5043_TIMER0	=	0x405b
                    405A   1827 _AX5043_TIMER1	=	0x405a
                    4059   1828 _AX5043_TIMER2	=	0x4059
                    4227   1829 _AX5043_TMGRXAGC	=	0x4227
                    4223   1830 _AX5043_TMGRXBOOST	=	0x4223
                    4226   1831 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   1832 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   1833 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   1834 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   1835 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   1836 _AX5043_TMGRXRSSI	=	0x4228
                    4224   1837 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   1838 _AX5043_TMGTXBOOST	=	0x4220
                    4221   1839 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   1840 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   1841 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   1842 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   1843 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   1844 _AX5043_TRKDATARATE0	=	0x4047
                    4046   1845 _AX5043_TRKDATARATE1	=	0x4046
                    4045   1846 _AX5043_TRKDATARATE2	=	0x4045
                    4051   1847 _AX5043_TRKFREQ0	=	0x4051
                    4050   1848 _AX5043_TRKFREQ1	=	0x4050
                    4053   1849 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   1850 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   1851 _AX5043_TRKPHASE0	=	0x404b
                    404A   1852 _AX5043_TRKPHASE1	=	0x404a
                    404F   1853 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   1854 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   1855 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   1856 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   1857 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   1858 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   1859 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   1860 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   1861 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   1862 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   1863 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   1864 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   1865 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   1866 _AX5043_TXRATE0	=	0x4167
                    4166   1867 _AX5043_TXRATE1	=	0x4166
                    4165   1868 _AX5043_TXRATE2	=	0x4165
                    406B   1869 _AX5043_WAKEUP0	=	0x406b
                    406A   1870 _AX5043_WAKEUP1	=	0x406a
                    406D   1871 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   1872 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   1873 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   1874 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   1875 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   1876 _AX5043_XTALCAP	=	0x4184
                    401D   1877 _AX5043_XTALSTATUS	=	0x401d
                    4122   1878 _AX5043_AGCAHYST0	=	0x4122
                    4132   1879 _AX5043_AGCAHYST1	=	0x4132
                    4142   1880 _AX5043_AGCAHYST2	=	0x4142
                    4152   1881 _AX5043_AGCAHYST3	=	0x4152
                    4120   1882 _AX5043_AGCGAIN0	=	0x4120
                    4130   1883 _AX5043_AGCGAIN1	=	0x4130
                    4140   1884 _AX5043_AGCGAIN2	=	0x4140
                    4150   1885 _AX5043_AGCGAIN3	=	0x4150
                    4123   1886 _AX5043_AGCMINMAX0	=	0x4123
                    4133   1887 _AX5043_AGCMINMAX1	=	0x4133
                    4143   1888 _AX5043_AGCMINMAX2	=	0x4143
                    4153   1889 _AX5043_AGCMINMAX3	=	0x4153
                    4121   1890 _AX5043_AGCTARGET0	=	0x4121
                    4131   1891 _AX5043_AGCTARGET1	=	0x4131
                    4141   1892 _AX5043_AGCTARGET2	=	0x4141
                    4151   1893 _AX5043_AGCTARGET3	=	0x4151
                    412B   1894 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   1895 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   1896 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   1897 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   1898 _AX5043_BBOFFSRES0	=	0x412f
                    413F   1899 _AX5043_BBOFFSRES1	=	0x413f
                    414F   1900 _AX5043_BBOFFSRES2	=	0x414f
                    415F   1901 _AX5043_BBOFFSRES3	=	0x415f
                    4125   1902 _AX5043_DRGAIN0	=	0x4125
                    4135   1903 _AX5043_DRGAIN1	=	0x4135
                    4145   1904 _AX5043_DRGAIN2	=	0x4145
                    4155   1905 _AX5043_DRGAIN3	=	0x4155
                    412E   1906 _AX5043_FOURFSK0	=	0x412e
                    413E   1907 _AX5043_FOURFSK1	=	0x413e
                    414E   1908 _AX5043_FOURFSK2	=	0x414e
                    415E   1909 _AX5043_FOURFSK3	=	0x415e
                    412D   1910 _AX5043_FREQDEV00	=	0x412d
                    413D   1911 _AX5043_FREQDEV01	=	0x413d
                    414D   1912 _AX5043_FREQDEV02	=	0x414d
                    415D   1913 _AX5043_FREQDEV03	=	0x415d
                    412C   1914 _AX5043_FREQDEV10	=	0x412c
                    413C   1915 _AX5043_FREQDEV11	=	0x413c
                    414C   1916 _AX5043_FREQDEV12	=	0x414c
                    415C   1917 _AX5043_FREQDEV13	=	0x415c
                    4127   1918 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   1919 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   1920 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   1921 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   1922 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   1923 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   1924 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   1925 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   1926 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   1927 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   1928 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   1929 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   1930 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   1931 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   1932 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   1933 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   1934 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   1935 _AX5043_PHASEGAIN0	=	0x4126
                    4136   1936 _AX5043_PHASEGAIN1	=	0x4136
                    4146   1937 _AX5043_PHASEGAIN2	=	0x4146
                    4156   1938 _AX5043_PHASEGAIN3	=	0x4156
                    4207   1939 _AX5043_PKTADDR0	=	0x4207
                    4206   1940 _AX5043_PKTADDR1	=	0x4206
                    4205   1941 _AX5043_PKTADDR2	=	0x4205
                    4204   1942 _AX5043_PKTADDR3	=	0x4204
                    4200   1943 _AX5043_PKTADDRCFG	=	0x4200
                    420B   1944 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   1945 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   1946 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   1947 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   1948 _AX5043_PKTLENCFG	=	0x4201
                    4202   1949 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   1950 _AX5043_PKTMAXLEN	=	0x4203
                    4118   1951 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   1952 _AX5043_RXPARAMSETS	=	0x4117
                    4124   1953 _AX5043_TIMEGAIN0	=	0x4124
                    4134   1954 _AX5043_TIMEGAIN1	=	0x4134
                    4144   1955 _AX5043_TIMEGAIN2	=	0x4144
                    4154   1956 _AX5043_TIMEGAIN3	=	0x4154
                    5114   1957 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   1958 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   1959 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   1960 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   1961 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   1962 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   1963 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   1964 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   1965 _AX5043_BBTUNENB	=	0x5188
                    5041   1966 _AX5043_BGNDRSSINB	=	0x5041
                    522E   1967 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   1968 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   1969 _AX5043_CRCINIT0NB	=	0x5017
                    5016   1970 _AX5043_CRCINIT1NB	=	0x5016
                    5015   1971 _AX5043_CRCINIT2NB	=	0x5015
                    5014   1972 _AX5043_CRCINIT3NB	=	0x5014
                    5332   1973 _AX5043_DACCONFIGNB	=	0x5332
                    5331   1974 _AX5043_DACVALUE0NB	=	0x5331
                    5330   1975 _AX5043_DACVALUE1NB	=	0x5330
                    5102   1976 _AX5043_DECIMATIONNB	=	0x5102
                    5042   1977 _AX5043_DIVERSITYNB	=	0x5042
                    5011   1978 _AX5043_ENCODINGNB	=	0x5011
                    5018   1979 _AX5043_FECNB	=	0x5018
                    501A   1980 _AX5043_FECSTATUSNB	=	0x501a
                    5019   1981 _AX5043_FECSYNCNB	=	0x5019
                    502B   1982 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   1983 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   1984 _AX5043_FIFODATANB	=	0x5029
                    502D   1985 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   1986 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   1987 _AX5043_FIFOSTATNB	=	0x5028
                    502F   1988 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   1989 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   1990 _AX5043_FRAMINGNB	=	0x5012
                    5037   1991 _AX5043_FREQA0NB	=	0x5037
                    5036   1992 _AX5043_FREQA1NB	=	0x5036
                    5035   1993 _AX5043_FREQA2NB	=	0x5035
                    5034   1994 _AX5043_FREQA3NB	=	0x5034
                    503F   1995 _AX5043_FREQB0NB	=	0x503f
                    503E   1996 _AX5043_FREQB1NB	=	0x503e
                    503D   1997 _AX5043_FREQB2NB	=	0x503d
                    503C   1998 _AX5043_FREQB3NB	=	0x503c
                    5163   1999 _AX5043_FSKDEV0NB	=	0x5163
                    5162   2000 _AX5043_FSKDEV1NB	=	0x5162
                    5161   2001 _AX5043_FSKDEV2NB	=	0x5161
                    510D   2002 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   2003 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   2004 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   2005 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   2006 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   2007 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   2008 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   2009 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   2010 _AX5043_IFFREQ0NB	=	0x5101
                    5100   2011 _AX5043_IFFREQ1NB	=	0x5100
                    500B   2012 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   2013 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   2014 _AX5043_IRQMASK0NB	=	0x5007
                    5006   2015 _AX5043_IRQMASK1NB	=	0x5006
                    500D   2016 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   2017 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   2018 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   2019 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   2020 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   2021 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   2022 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   2023 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   2024 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   2025 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   2026 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   2027 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   2028 _AX5043_MATCH0LENNB	=	0x5214
                    5216   2029 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   2030 _AX5043_MATCH0MINNB	=	0x5215
                    5213   2031 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   2032 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   2033 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   2034 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   2035 _AX5043_MATCH1LENNB	=	0x521c
                    521E   2036 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   2037 _AX5043_MATCH1MINNB	=	0x521d
                    5219   2038 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   2039 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   2040 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   2041 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   2042 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   2043 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   2044 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   2045 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   2046 _AX5043_MODCFGANB	=	0x5164
                    5160   2047 _AX5043_MODCFGFNB	=	0x5160
                    5010   2048 _AX5043_MODULATIONNB	=	0x5010
                    5025   2049 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   2050 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   2051 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   2052 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   2053 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   2054 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   2055 _AX5043_PINSTATENB	=	0x5020
                    5233   2056 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   2057 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   2058 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   2059 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   2060 _AX5043_PLLCPINB	=	0x5031
                    5039   2061 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   2062 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   2063 _AX5043_PLLLOOPNB	=	0x5030
                    5038   2064 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   2065 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   2066 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   2067 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   2068 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   2069 _AX5043_PLLVCOINB	=	0x5180
                    5181   2070 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   2071 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   2072 _AX5043_POWSTATNB	=	0x5003
                    5004   2073 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   2074 _AX5043_PWRAMPNB	=	0x5027
                    5002   2075 _AX5043_PWRMODENB	=	0x5002
                    5009   2076 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   2077 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   2078 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   2079 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   2080 _AX5043_RADIOSTATENB	=	0x501c
                    5040   2081 _AX5043_RSSINB	=	0x5040
                    522D   2082 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   2083 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   2084 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   2085 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   2086 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   2087 _AX5043_SCRATCHNB	=	0x5001
                    5000   2088 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   2089 _AX5043_TIMER0NB	=	0x505b
                    505A   2090 _AX5043_TIMER1NB	=	0x505a
                    5059   2091 _AX5043_TIMER2NB	=	0x5059
                    5227   2092 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   2093 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   2094 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   2095 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   2096 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   2097 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   2098 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   2099 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   2100 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   2101 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   2102 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   2103 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   2104 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   2105 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   2106 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   2107 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   2108 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   2109 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   2110 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   2111 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   2112 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   2113 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   2114 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   2115 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   2116 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   2117 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   2118 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   2119 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   2120 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   2121 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   2122 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   2123 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   2124 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   2125 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   2126 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   2127 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   2128 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   2129 _AX5043_TXRATE0NB	=	0x5167
                    5166   2130 _AX5043_TXRATE1NB	=	0x5166
                    5165   2131 _AX5043_TXRATE2NB	=	0x5165
                    506B   2132 _AX5043_WAKEUP0NB	=	0x506b
                    506A   2133 _AX5043_WAKEUP1NB	=	0x506a
                    506D   2134 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   2135 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   2136 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   2137 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   2138 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   2139 _AX5043_XTALCAPNB	=	0x5184
                    501D   2140 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   2141 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   2142 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   2143 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   2144 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   2145 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   2146 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   2147 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   2148 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   2149 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   2150 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   2151 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   2152 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   2153 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   2154 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   2155 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   2156 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   2157 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   2158 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   2159 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   2160 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   2161 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   2162 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   2163 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   2164 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   2165 _AX5043_DRGAIN0NB	=	0x5125
                    5135   2166 _AX5043_DRGAIN1NB	=	0x5135
                    5145   2167 _AX5043_DRGAIN2NB	=	0x5145
                    5155   2168 _AX5043_DRGAIN3NB	=	0x5155
                    512E   2169 _AX5043_FOURFSK0NB	=	0x512e
                    513E   2170 _AX5043_FOURFSK1NB	=	0x513e
                    514E   2171 _AX5043_FOURFSK2NB	=	0x514e
                    515E   2172 _AX5043_FOURFSK3NB	=	0x515e
                    512D   2173 _AX5043_FREQDEV00NB	=	0x512d
                    513D   2174 _AX5043_FREQDEV01NB	=	0x513d
                    514D   2175 _AX5043_FREQDEV02NB	=	0x514d
                    515D   2176 _AX5043_FREQDEV03NB	=	0x515d
                    512C   2177 _AX5043_FREQDEV10NB	=	0x512c
                    513C   2178 _AX5043_FREQDEV11NB	=	0x513c
                    514C   2179 _AX5043_FREQDEV12NB	=	0x514c
                    515C   2180 _AX5043_FREQDEV13NB	=	0x515c
                    5127   2181 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   2182 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   2183 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   2184 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   2185 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   2186 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   2187 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   2188 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   2189 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   2190 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   2191 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   2192 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   2193 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   2194 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   2195 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   2196 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   2197 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   2198 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   2199 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   2200 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   2201 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   2202 _AX5043_PKTADDR0NB	=	0x5207
                    5206   2203 _AX5043_PKTADDR1NB	=	0x5206
                    5205   2204 _AX5043_PKTADDR2NB	=	0x5205
                    5204   2205 _AX5043_PKTADDR3NB	=	0x5204
                    5200   2206 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   2207 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   2208 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   2209 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   2210 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   2211 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   2212 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   2213 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   2214 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   2215 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   2216 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   2217 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   2218 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   2219 _AX5043_TIMEGAIN3NB	=	0x5154
                    4F00   2220 _AX5043_0xF00	=	0x4f00
                    4F01   2221 _AX5043_0xF01	=	0x4f01
                    4F0C   2222 _AX5043_0xF0C	=	0x4f0c
                    4F10   2223 _AX5043_0xF10	=	0x4f10
                    4F11   2224 _AX5043_0xF11	=	0x4f11
                    4F18   2225 _AX5043_0xF18	=	0x4f18
                    4F1C   2226 _AX5043_0xF1C	=	0x4f1c
                    4F21   2227 _AX5043_0xF21	=	0x4f21
                    4F22   2228 _AX5043_0xF22	=	0x4f22
                    4F23   2229 _AX5043_0xF23	=	0x4f23
                    4F26   2230 _AX5043_0xF26	=	0x4f26
                    4F2F   2231 _AX5043_0xF2F	=	0x4f2f
                    4F30   2232 _AX5043_0xF30	=	0x4f30
                    4F31   2233 _AX5043_0xF31	=	0x4f31
                    4F32   2234 _AX5043_0xF32	=	0x4f32
                    4F33   2235 _AX5043_0xF33	=	0x4f33
                    4F34   2236 _AX5043_0xF34	=	0x4f34
                    4F35   2237 _AX5043_0xF35	=	0x4f35
                    4F44   2238 _AX5043_0xF44	=	0x4f44
                    4F0D   2239 _AX5043_REF	=	0x4f0d
                    4F08   2240 _AX5043_POWCTRL1	=	0x4f08
   0004                    2241 _axradio_syncstate::
   0004                    2242 	.ds 1
   0005                    2243 _axradio_txbuffer_len::
   0005                    2244 	.ds 2
   0007                    2245 _axradio_txbuffer_cnt::
   0007                    2246 	.ds 2
   0009                    2247 _axradio_curchannel::
   0009                    2248 	.ds 1
   000A                    2249 _axradio_curfreqoffset::
   000A                    2250 	.ds 4
   000E                    2251 _axradio_ack_count::
   000E                    2252 	.ds 1
   000F                    2253 _axradio_ack_seqnr::
   000F                    2254 	.ds 1
   0010                    2255 _axradio_sync_time::
   0010                    2256 	.ds 4
   0014                    2257 _axradio_sync_periodcorr::
   0014                    2258 	.ds 2
   0016                    2259 _axradio_timeanchor::
   0016                    2260 	.ds 8
   001E                    2261 _axradio_localaddr::
   001E                    2262 	.ds 8
   0026                    2263 _axradio_default_remoteaddr::
   0026                    2264 	.ds 4
   002A                    2265 _axradio_txbuffer::
   002A                    2266 	.ds 260
   012E                    2267 _axradio_rxbuffer::
   012E                    2268 	.ds 260
   0232                    2269 _axradio_cb_receive::
   0232                    2270 	.ds 34
   0254                    2271 _axradio_cb_receivesfd::
   0254                    2272 	.ds 10
   025E                    2273 _axradio_cb_channelstate::
   025E                    2274 	.ds 13
   026B                    2275 _axradio_cb_transmitstart::
   026B                    2276 	.ds 10
   0275                    2277 _axradio_cb_transmitend::
   0275                    2278 	.ds 10
   027F                    2279 _axradio_cb_transmitdata::
   027F                    2280 	.ds 10
   0289                    2281 _axradio_timer::
   0289                    2282 	.ds 8
                           2283 ;--------------------------------------------------------
                           2284 ; absolute external ram data
                           2285 ;--------------------------------------------------------
                           2286 	.area XABS    (ABS,XDATA)
                           2287 ;--------------------------------------------------------
                           2288 ; external initialized ram data
                           2289 ;--------------------------------------------------------
                           2290 	.area XISEG   (XDATA)
   0441                    2291 _f30_saved::
   0441                    2292 	.ds 1
   0442                    2293 _f31_saved::
   0442                    2294 	.ds 1
   0443                    2295 _f32_saved::
   0443                    2296 	.ds 1
   0444                    2297 _f33_saved::
   0444                    2298 	.ds 1
                           2299 	.area HOME    (CODE)
                           2300 	.area GSINIT0 (CODE)
                           2301 	.area GSINIT1 (CODE)
                           2302 	.area GSINIT2 (CODE)
                           2303 	.area GSINIT3 (CODE)
                           2304 	.area GSINIT4 (CODE)
                           2305 	.area GSINIT5 (CODE)
                           2306 	.area GSINIT  (CODE)
                           2307 	.area GSFINAL (CODE)
                           2308 	.area CSEG    (CODE)
                           2309 ;--------------------------------------------------------
                           2310 ; global & static initialisations
                           2311 ;--------------------------------------------------------
                           2312 	.area HOME    (CODE)
                           2313 	.area GSINIT  (CODE)
                           2314 	.area GSFINAL (CODE)
                           2315 	.area GSINIT  (CODE)
                           2316 ;	..\COMMON\easyax5043.c:55: volatile uint8_t __data axradio_mode = AXRADIO_MODE_UNINIT;
   012C 75 0A 00           2317 	mov	_axradio_mode,#0x00
                           2318 ;	..\COMMON\easyax5043.c:56: volatile axradio_trxstate_t __data axradio_trxstate = trxstate_off;
   012F 75 0B 00           2319 	mov	_axradio_trxstate,#0x00
                           2320 ;--------------------------------------------------------
                           2321 ; Home
                           2322 ;--------------------------------------------------------
                           2323 	.area HOME    (CODE)
                           2324 	.area HOME    (CODE)
                           2325 ;--------------------------------------------------------
                           2326 ; code
                           2327 ;--------------------------------------------------------
                           2328 	.area CSEG    (CODE)
                           2329 ;------------------------------------------------------------
                           2330 ;Allocation info for local variables in function 'update_timeanchor'
                           2331 ;------------------------------------------------------------
                           2332 ;iesave                    Allocated to registers r7 
                           2333 ;------------------------------------------------------------
                           2334 ;	..\COMMON\easyax5043.c:234: static __reentrantb void update_timeanchor(void) __reentrant
                           2335 ;	-----------------------------------------
                           2336 ;	 function update_timeanchor
                           2337 ;	-----------------------------------------
   0837                    2338 _update_timeanchor:
                    0007   2339 	ar7 = 0x07
                    0006   2340 	ar6 = 0x06
                    0005   2341 	ar5 = 0x05
                    0004   2342 	ar4 = 0x04
                    0003   2343 	ar3 = 0x03
                    0002   2344 	ar2 = 0x02
                    0001   2345 	ar1 = 0x01
                    0000   2346 	ar0 = 0x00
                           2347 ;	..\COMMON\easyax5043.c:236: uint8_t iesave = IE & 0x80;
   0837 74 80              2348 	mov	a,#0x80
   0839 55 A8              2349 	anl	a,_IE
   083B FF                 2350 	mov	r7,a
                           2351 ;	..\COMMON\easyax5043.c:237: EA = 0;
   083C C2 AF              2352 	clr	_EA
                           2353 ;	..\COMMON\easyax5043.c:238: axradio_timeanchor.timer0 = wtimer0_curtime();
   083E C0 07              2354 	push	ar7
   0840 12 4A B0           2355 	lcall	_wtimer0_curtime
   0843 AB 82              2356 	mov	r3,dpl
   0845 AC 83              2357 	mov	r4,dph
   0847 AD F0              2358 	mov	r5,b
   0849 FE                 2359 	mov	r6,a
   084A D0 07              2360 	pop	ar7
   084C 90 00 16           2361 	mov	dptr,#_axradio_timeanchor
   084F EB                 2362 	mov	a,r3
   0850 F0                 2363 	movx	@dptr,a
   0851 A3                 2364 	inc	dptr
   0852 EC                 2365 	mov	a,r4
   0853 F0                 2366 	movx	@dptr,a
   0854 A3                 2367 	inc	dptr
   0855 ED                 2368 	mov	a,r5
   0856 F0                 2369 	movx	@dptr,a
   0857 A3                 2370 	inc	dptr
   0858 EE                 2371 	mov	a,r6
   0859 F0                 2372 	movx	@dptr,a
                           2373 ;	..\COMMON\easyax5043.c:239: axradio_timeanchor.radiotimer = radio_read24((uint16_t)&AX5043_TIMER2);
   085A 90 40 59           2374 	mov	dptr,#_AX5043_TIMER2
   085D 12 3F 4F           2375 	lcall	_radio_read24
   0860 AB 82              2376 	mov	r3,dpl
   0862 AC 83              2377 	mov	r4,dph
   0864 AD F0              2378 	mov	r5,b
   0866 FE                 2379 	mov	r6,a
   0867 90 00 1A           2380 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   086A EB                 2381 	mov	a,r3
   086B F0                 2382 	movx	@dptr,a
   086C A3                 2383 	inc	dptr
   086D EC                 2384 	mov	a,r4
   086E F0                 2385 	movx	@dptr,a
   086F A3                 2386 	inc	dptr
   0870 ED                 2387 	mov	a,r5
   0871 F0                 2388 	movx	@dptr,a
   0872 A3                 2389 	inc	dptr
   0873 EE                 2390 	mov	a,r6
   0874 F0                 2391 	movx	@dptr,a
                           2392 ;	..\COMMON\easyax5043.c:240: IE |= iesave;
   0875 EF                 2393 	mov	a,r7
   0876 42 A8              2394 	orl	_IE,a
   0878 22                 2395 	ret
                           2396 ;------------------------------------------------------------
                           2397 ;Allocation info for local variables in function 'axradio_conv_time_totimer0'
                           2398 ;------------------------------------------------------------
                           2399 ;dt                        Allocated to registers r4 r5 r6 r7 
                           2400 ;------------------------------------------------------------
                           2401 ;	..\COMMON\easyax5043.c:243: __reentrantb uint32_t axradio_conv_time_totimer0(uint32_t dt) __reentrant
                           2402 ;	-----------------------------------------
                           2403 ;	 function axradio_conv_time_totimer0
                           2404 ;	-----------------------------------------
   0879                    2405 _axradio_conv_time_totimer0:
   0879 AC 82              2406 	mov	r4,dpl
   087B AD 83              2407 	mov	r5,dph
   087D AE F0              2408 	mov	r6,b
   087F FF                 2409 	mov	r7,a
                           2410 ;	..\COMMON\easyax5043.c:245: dt -= axradio_timeanchor.radiotimer;
   0880 90 00 1A           2411 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0883 E0                 2412 	movx	a,@dptr
   0884 F8                 2413 	mov	r0,a
   0885 A3                 2414 	inc	dptr
   0886 E0                 2415 	movx	a,@dptr
   0887 F9                 2416 	mov	r1,a
   0888 A3                 2417 	inc	dptr
   0889 E0                 2418 	movx	a,@dptr
   088A FA                 2419 	mov	r2,a
   088B A3                 2420 	inc	dptr
   088C E0                 2421 	movx	a,@dptr
   088D FB                 2422 	mov	r3,a
   088E EC                 2423 	mov	a,r4
   088F C3                 2424 	clr	c
   0890 98                 2425 	subb	a,r0
   0891 FC                 2426 	mov	r4,a
   0892 ED                 2427 	mov	a,r5
   0893 99                 2428 	subb	a,r1
   0894 FD                 2429 	mov	r5,a
   0895 EE                 2430 	mov	a,r6
   0896 9A                 2431 	subb	a,r2
   0897 FE                 2432 	mov	r6,a
   0898 EF                 2433 	mov	a,r7
   0899 9B                 2434 	subb	a,r3
                           2435 ;	..\COMMON\easyax5043.c:246: dt = axradio_conv_timeinterval_totimer0(signextend24(dt));
   089A 8C 82              2436 	mov	dpl,r4
   089C 8D 83              2437 	mov	dph,r5
   089E 8E F0              2438 	mov	b,r6
   08A0 12 4A AA           2439 	lcall	_signextend24
   08A3 12 05 59           2440 	lcall	_axradio_conv_timeinterval_totimer0
   08A6 AC 82              2441 	mov	r4,dpl
   08A8 AD 83              2442 	mov	r5,dph
   08AA AE F0              2443 	mov	r6,b
   08AC FF                 2444 	mov	r7,a
                           2445 ;	..\COMMON\easyax5043.c:247: dt += axradio_timeanchor.timer0;
   08AD 90 00 16           2446 	mov	dptr,#_axradio_timeanchor
   08B0 E0                 2447 	movx	a,@dptr
   08B1 F8                 2448 	mov	r0,a
   08B2 A3                 2449 	inc	dptr
   08B3 E0                 2450 	movx	a,@dptr
   08B4 F9                 2451 	mov	r1,a
   08B5 A3                 2452 	inc	dptr
   08B6 E0                 2453 	movx	a,@dptr
   08B7 FA                 2454 	mov	r2,a
   08B8 A3                 2455 	inc	dptr
   08B9 E0                 2456 	movx	a,@dptr
   08BA FB                 2457 	mov	r3,a
   08BB E8                 2458 	mov	a,r0
   08BC 2C                 2459 	add	a,r4
   08BD FC                 2460 	mov	r4,a
   08BE E9                 2461 	mov	a,r1
   08BF 3D                 2462 	addc	a,r5
   08C0 FD                 2463 	mov	r5,a
   08C1 EA                 2464 	mov	a,r2
   08C2 3E                 2465 	addc	a,r6
   08C3 FE                 2466 	mov	r6,a
   08C4 EB                 2467 	mov	a,r3
   08C5 3F                 2468 	addc	a,r7
                           2469 ;	..\COMMON\easyax5043.c:248: return dt;
   08C6 8C 82              2470 	mov	dpl,r4
   08C8 8D 83              2471 	mov	dph,r5
   08CA 8E F0              2472 	mov	b,r6
   08CC 22                 2473 	ret
                           2474 ;------------------------------------------------------------
                           2475 ;Allocation info for local variables in function 'ax5043_init_registers_tx'
                           2476 ;------------------------------------------------------------
                           2477 ;rng                       Allocated to registers r7 
                           2478 ;------------------------------------------------------------
                           2479 ;	..\COMMON\easyax5043.c:251: __reentrantb uint8_t ax5043_init_registers_tx(void) __reentrant
                           2480 ;	-----------------------------------------
                           2481 ;	 function ax5043_init_registers_tx
                           2482 ;	-----------------------------------------
   08CD                    2483 _ax5043_init_registers_tx:
                           2484 ;	..\COMMON\easyax5043.c:254: ax5043_set_registers_tx();
   08CD 12 04 17           2485 	lcall	_ax5043_set_registers_tx
                           2486 ;	..\COMMON\easyax5043.c:255: rng = axradio_phy_chanpllrng_tx[axradio_curchannel];
   08D0 90 00 09           2487 	mov	dptr,#_axradio_curchannel
   08D3 E0                 2488 	movx	a,@dptr
   08D4 24 01              2489 	add	a,#_axradio_phy_chanpllrng_tx
   08D6 F5 82              2490 	mov	dpl,a
   08D8 E4                 2491 	clr	a
   08D9 34 00              2492 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   08DB F5 83              2493 	mov	dph,a
   08DD E0                 2494 	movx	a,@dptr
                           2495 ;	..\COMMON\easyax5043.c:256: if (rng & 0x20)
   08DE FF                 2496 	mov	r7,a
   08DF 30 E5 04           2497 	jnb	acc.5,00102$
                           2498 ;	..\COMMON\easyax5043.c:257: return AXRADIO_ERR_RANGING;
   08E2 75 82 06           2499 	mov	dpl,#0x06
   08E5 22                 2500 	ret
   08E6                    2501 00102$:
                           2502 ;	..\COMMON\easyax5043.c:258: if (AX5043_PLLLOOP & 0x80) {
   08E6 90 40 30           2503 	mov	dptr,#_AX5043_PLLLOOP
   08E9 E0                 2504 	movx	a,@dptr
   08EA FE                 2505 	mov	r6,a
   08EB 30 E7 09           2506 	jnb	acc.7,00104$
                           2507 ;	..\COMMON\easyax5043.c:259: AX5043_PLLRANGINGB = rng & 0x0F;
   08EE 90 40 3B           2508 	mov	dptr,#_AX5043_PLLRANGINGB
   08F1 74 0F              2509 	mov	a,#0x0F
   08F3 5F                 2510 	anl	a,r7
   08F4 F0                 2511 	movx	@dptr,a
   08F5 80 07              2512 	sjmp	00105$
   08F7                    2513 00104$:
                           2514 ;	..\COMMON\easyax5043.c:261: AX5043_PLLRANGINGA = rng & 0x0F;
   08F7 90 40 33           2515 	mov	dptr,#_AX5043_PLLRANGINGA
   08FA 74 0F              2516 	mov	a,#0x0F
   08FC 5F                 2517 	anl	a,r7
   08FD F0                 2518 	movx	@dptr,a
   08FE                    2519 00105$:
                           2520 ;	..\COMMON\easyax5043.c:263: return AXRADIO_ERR_NOERROR;
   08FE 75 82 00           2521 	mov	dpl,#0x00
   0901 22                 2522 	ret
                           2523 ;------------------------------------------------------------
                           2524 ;Allocation info for local variables in function 'ax5043_init_registers_rx'
                           2525 ;------------------------------------------------------------
                           2526 ;rng                       Allocated to registers r7 
                           2527 ;------------------------------------------------------------
                           2528 ;	..\COMMON\easyax5043.c:266: __reentrantb uint8_t ax5043_init_registers_rx(void) __reentrant
                           2529 ;	-----------------------------------------
                           2530 ;	 function ax5043_init_registers_rx
                           2531 ;	-----------------------------------------
   0902                    2532 _ax5043_init_registers_rx:
                           2533 ;	..\COMMON\easyax5043.c:269: ax5043_set_registers_rx();
   0902 12 04 48           2534 	lcall	_ax5043_set_registers_rx
                           2535 ;	..\COMMON\easyax5043.c:270: rng = axradio_phy_chanpllrng_rx[axradio_curchannel];
   0905 90 00 09           2536 	mov	dptr,#_axradio_curchannel
   0908 E0                 2537 	movx	a,@dptr
   0909 24 00              2538 	add	a,#_axradio_phy_chanpllrng_rx
   090B F5 82              2539 	mov	dpl,a
   090D E4                 2540 	clr	a
   090E 34 00              2541 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   0910 F5 83              2542 	mov	dph,a
   0912 E0                 2543 	movx	a,@dptr
                           2544 ;	..\COMMON\easyax5043.c:271: if (rng & 0x20)
   0913 FF                 2545 	mov	r7,a
   0914 30 E5 04           2546 	jnb	acc.5,00102$
                           2547 ;	..\COMMON\easyax5043.c:272: return AXRADIO_ERR_RANGING;
   0917 75 82 06           2548 	mov	dpl,#0x06
   091A 22                 2549 	ret
   091B                    2550 00102$:
                           2551 ;	..\COMMON\easyax5043.c:273: if (AX5043_PLLLOOP & 0x80) {
   091B 90 40 30           2552 	mov	dptr,#_AX5043_PLLLOOP
   091E E0                 2553 	movx	a,@dptr
   091F FE                 2554 	mov	r6,a
   0920 30 E7 09           2555 	jnb	acc.7,00104$
                           2556 ;	..\COMMON\easyax5043.c:274: AX5043_PLLRANGINGB = rng & 0x0F;
   0923 90 40 3B           2557 	mov	dptr,#_AX5043_PLLRANGINGB
   0926 74 0F              2558 	mov	a,#0x0F
   0928 5F                 2559 	anl	a,r7
   0929 F0                 2560 	movx	@dptr,a
   092A 80 07              2561 	sjmp	00105$
   092C                    2562 00104$:
                           2563 ;	..\COMMON\easyax5043.c:276: AX5043_PLLRANGINGA = rng & 0x0F;
   092C 90 40 33           2564 	mov	dptr,#_AX5043_PLLRANGINGA
   092F 74 0F              2565 	mov	a,#0x0F
   0931 5F                 2566 	anl	a,r7
   0932 F0                 2567 	movx	@dptr,a
   0933                    2568 00105$:
                           2569 ;	..\COMMON\easyax5043.c:278: return AXRADIO_ERR_NOERROR;
   0933 75 82 00           2570 	mov	dpl,#0x00
   0936 22                 2571 	ret
                           2572 ;------------------------------------------------------------
                           2573 ;Allocation info for local variables in function 'receive_isr'
                           2574 ;------------------------------------------------------------
                           2575 ;fifo_cmd                  Allocated to registers r6 
                           2576 ;flags                     Allocated to registers 
                           2577 ;i                         Allocated to registers r6 
                           2578 ;len                       Allocated to registers r7 
                           2579 ;r                         Allocated to registers r6 
                           2580 ;r                         Allocated to registers r6 
                           2581 ;r                         Allocated to registers r6 
                           2582 ;------------------------------------------------------------
                           2583 ;	..\COMMON\easyax5043.c:281: static __reentrantb void receive_isr(void) __reentrant
                           2584 ;	-----------------------------------------
                           2585 ;	 function receive_isr
                           2586 ;	-----------------------------------------
   0937                    2587 _receive_isr:
                           2588 ;	..\COMMON\easyax5043.c:285: uint8_t len = AX5043_RADIOEVENTREQ0; // clear request so interrupt does not fire again. sync_rx enables interrupt on radio state changed in order to wake up on SDF detected
   0937 90 40 0F           2589 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   093A E0                 2590 	movx	a,@dptr
                           2591 ;	..\COMMON\easyax5043.c:287: if ((len & 0x04) && AX5043_RADIOSTATE == 0x0F) {
   093B FF                 2592 	mov	r7,a
   093C 30 E2 40           2593 	jnb	acc.2,00162$
   093F 90 40 1C           2594 	mov	dptr,#_AX5043_RADIOSTATE
   0942 E0                 2595 	movx	a,@dptr
   0943 FE                 2596 	mov	r6,a
   0944 BE 0F 38           2597 	cjne	r6,#0x0F,00162$
                           2598 ;	..\COMMON\easyax5043.c:289: update_timeanchor();
   0947 12 08 37           2599 	lcall	_update_timeanchor
                           2600 ;	..\COMMON\easyax5043.c:290: if(axradio_framing_enable_sfdcallback)
   094A 90 4B A2           2601 	mov	dptr,#_axradio_framing_enable_sfdcallback
   094D E4                 2602 	clr	a
   094E 93                 2603 	movc	a,@a+dptr
   094F FE                 2604 	mov	r6,a
   0950 60 2D              2605 	jz	00162$
                           2606 ;	..\COMMON\easyax5043.c:292: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   0952 90 02 54           2607 	mov	dptr,#_axradio_cb_receivesfd
   0955 12 48 E0           2608 	lcall	_wtimer_remove_callback
                           2609 ;	..\COMMON\easyax5043.c:293: axradio_cb_receivesfd.st.error = AXRADIO_ERR_NOERROR;
   0958 90 02 59           2610 	mov	dptr,#(_axradio_cb_receivesfd + 0x0005)
   095B E4                 2611 	clr	a
   095C F0                 2612 	movx	@dptr,a
                           2613 ;	..\COMMON\easyax5043.c:294: axradio_cb_receivesfd.st.time.t = axradio_timeanchor.radiotimer;
   095D 90 00 1A           2614 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0960 E0                 2615 	movx	a,@dptr
   0961 FB                 2616 	mov	r3,a
   0962 A3                 2617 	inc	dptr
   0963 E0                 2618 	movx	a,@dptr
   0964 FC                 2619 	mov	r4,a
   0965 A3                 2620 	inc	dptr
   0966 E0                 2621 	movx	a,@dptr
   0967 FD                 2622 	mov	r5,a
   0968 A3                 2623 	inc	dptr
   0969 E0                 2624 	movx	a,@dptr
   096A FE                 2625 	mov	r6,a
   096B 90 02 5A           2626 	mov	dptr,#(_axradio_cb_receivesfd + 0x0006)
   096E EB                 2627 	mov	a,r3
   096F F0                 2628 	movx	@dptr,a
   0970 A3                 2629 	inc	dptr
   0971 EC                 2630 	mov	a,r4
   0972 F0                 2631 	movx	@dptr,a
   0973 A3                 2632 	inc	dptr
   0974 ED                 2633 	mov	a,r5
   0975 F0                 2634 	movx	@dptr,a
   0976 A3                 2635 	inc	dptr
   0977 EE                 2636 	mov	a,r6
   0978 F0                 2637 	movx	@dptr,a
                           2638 ;	..\COMMON\easyax5043.c:295: wtimer_add_callback(&axradio_cb_receivesfd.cb);
   0979 90 02 54           2639 	mov	dptr,#_axradio_cb_receivesfd
   097C 12 3E 7B           2640 	lcall	_wtimer_add_callback
                           2641 ;	..\COMMON\easyax5043.c:307: while (AX5043_IRQREQUEST0 & 0x01) {    // while fifo not empty
   097F                    2642 00162$:
   097F                    2643 00147$:
   097F 90 40 0D           2644 	mov	dptr,#_AX5043_IRQREQUEST0
   0982 E0                 2645 	movx	a,@dptr
   0983 FE                 2646 	mov	r6,a
   0984 20 E0 01           2647 	jb	acc.0,00207$
   0987 22                 2648 	ret
   0988                    2649 00207$:
                           2650 ;	..\COMMON\easyax5043.c:308: fifo_cmd = AX5043_FIFODATA; // read command
   0988 90 40 29           2651 	mov	dptr,#_AX5043_FIFODATA
   098B E0                 2652 	movx	a,@dptr
   098C FE                 2653 	mov	r6,a
                           2654 ;	..\COMMON\easyax5043.c:309: len = (fifo_cmd & 0xE0) >> 5; // top 3 bits encode payload len
   098D 74 E0              2655 	mov	a,#0xE0
   098F 5E                 2656 	anl	a,r6
   0990 FD                 2657 	mov	r5,a
   0991 C4                 2658 	swap	a
   0992 03                 2659 	rr	a
   0993 54 07              2660 	anl	a,#0x07
   0995 FF                 2661 	mov	r7,a
                           2662 ;	..\COMMON\easyax5043.c:310: if (len == 7)
   0996 BF 07 06           2663 	cjne	r7,#0x07,00107$
                           2664 ;	..\COMMON\easyax5043.c:311: len = AX5043_FIFODATA; // 7 means variable length, -> get length byte
   0999 90 40 29           2665 	mov	dptr,#_AX5043_FIFODATA
   099C E0                 2666 	movx	a,@dptr
   099D FD                 2667 	mov	r5,a
   099E FF                 2668 	mov	r7,a
   099F                    2669 00107$:
                           2670 ;	..\COMMON\easyax5043.c:312: fifo_cmd &= 0x1F;
   099F 53 06 1F           2671 	anl	ar6,#0x1F
                           2672 ;	..\COMMON\easyax5043.c:313: switch (fifo_cmd) {
   09A2 BE 01 02           2673 	cjne	r6,#0x01,00210$
   09A5 80 1B              2674 	sjmp	00108$
   09A7                    2675 00210$:
   09A7 BE 10 03           2676 	cjne	r6,#0x10,00211$
   09AA 02 0B 67           2677 	ljmp	00133$
   09AD                    2678 00211$:
   09AD BE 11 03           2679 	cjne	r6,#0x11,00212$
   09B0 02 0B 3A           2680 	ljmp	00130$
   09B3                    2681 00212$:
   09B3 BE 13 03           2682 	cjne	r6,#0x13,00213$
   09B6 02 0A FD           2683 	ljmp	00127$
   09B9                    2684 00213$:
   09B9 BE 15 03           2685 	cjne	r6,#0x15,00214$
   09BC 02 0B 90           2686 	ljmp	00136$
   09BF                    2687 00214$:
   09BF 02 0C 06           2688 	ljmp	00140$
                           2689 ;	..\COMMON\easyax5043.c:314: case AX5043_FIFOCMD_DATA:
   09C2                    2690 00108$:
                           2691 ;	..\COMMON\easyax5043.c:315: if (!len)
   09C2 EF                 2692 	mov	a,r7
   09C3 60 BA              2693 	jz	00147$
                           2694 ;	..\COMMON\easyax5043.c:323: flags = AX5043_FIFODATA;
   09C5 90 40 29           2695 	mov	dptr,#_AX5043_FIFODATA
   09C8 E0                 2696 	movx	a,@dptr
                           2697 ;	..\COMMON\easyax5043.c:324: --len;
   09C9 1F                 2698 	dec	r7
                           2699 ;	..\COMMON\easyax5043.c:325: ax5043_readfifo(axradio_rxbuffer, len);
   09CA C0 07              2700 	push	ar7
   09CC C0 07              2701 	push	ar7
   09CE 90 01 2E           2702 	mov	dptr,#_axradio_rxbuffer
   09D1 75 F0 00           2703 	mov	b,#0x00
   09D4 12 46 3B           2704 	lcall	_ax5043_readfifo
   09D7 15 81              2705 	dec	sp
   09D9 D0 07              2706 	pop	ar7
                           2707 ;	..\COMMON\easyax5043.c:326: if(axradio_mode == AXRADIO_MODE_WOR_RECEIVE || axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   09DB 74 19              2708 	mov	a,#0x19
   09DD B5 0A 02           2709 	cjne	a,_axradio_mode,00216$
   09E0 80 05              2710 	sjmp	00111$
   09E2                    2711 00216$:
   09E2 74 1B              2712 	mov	a,#0x1B
   09E4 B5 0A 21           2713 	cjne	a,_axradio_mode,00112$
   09E7                    2714 00111$:
                           2715 ;	..\COMMON\easyax5043.c:328: f30_saved = AX5043_0xF30;
   09E7 90 4F 30           2716 	mov	dptr,#_AX5043_0xF30
   09EA E0                 2717 	movx	a,@dptr
   09EB 90 04 41           2718 	mov	dptr,#_f30_saved
   09EE F0                 2719 	movx	@dptr,a
                           2720 ;	..\COMMON\easyax5043.c:329: f31_saved = AX5043_0xF31;
   09EF 90 4F 31           2721 	mov	dptr,#_AX5043_0xF31
   09F2 E0                 2722 	movx	a,@dptr
   09F3 90 04 42           2723 	mov	dptr,#_f31_saved
   09F6 F0                 2724 	movx	@dptr,a
                           2725 ;	..\COMMON\easyax5043.c:330: f32_saved = AX5043_0xF32;
   09F7 90 4F 32           2726 	mov	dptr,#_AX5043_0xF32
   09FA E0                 2727 	movx	a,@dptr
   09FB 90 04 43           2728 	mov	dptr,#_f32_saved
   09FE F0                 2729 	movx	@dptr,a
                           2730 ;	..\COMMON\easyax5043.c:331: f33_saved = AX5043_0xF33;
   09FF 90 4F 33           2731 	mov	dptr,#_AX5043_0xF33
   0A02 E0                 2732 	movx	a,@dptr
   0A03 FE                 2733 	mov	r6,a
   0A04 90 04 44           2734 	mov	dptr,#_f33_saved
   0A07 F0                 2735 	movx	@dptr,a
   0A08                    2736 00112$:
                           2737 ;	..\COMMON\easyax5043.c:333: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE ||
   0A08 74 19              2738 	mov	a,#0x19
   0A0A B5 0A 02           2739 	cjne	a,_axradio_mode,00219$
   0A0D 80 05              2740 	sjmp	00114$
   0A0F                    2741 00219$:
                           2742 ;	..\COMMON\easyax5043.c:334: axradio_mode == AXRADIO_MODE_SYNC_SLAVE)
   0A0F 74 22              2743 	mov	a,#0x22
   0A11 B5 0A 05           2744 	cjne	a,_axradio_mode,00115$
   0A14                    2745 00114$:
                           2746 ;	..\COMMON\easyax5043.c:335: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   0A14 90 40 02           2747 	mov	dptr,#_AX5043_PWRMODE
   0A17 E4                 2748 	clr	a
   0A18 F0                 2749 	movx	@dptr,a
   0A19                    2750 00115$:
                           2751 ;	..\COMMON\easyax5043.c:336: AX5043_IRQMASK0 &= (uint8_t)~0x01; // disable FIFO not empty irq
   0A19 90 40 07           2752 	mov	dptr,#_AX5043_IRQMASK0
   0A1C E0                 2753 	movx	a,@dptr
   0A1D 54 FE              2754 	anl	a,#0xFE
   0A1F F0                 2755 	movx	@dptr,a
                           2756 ;	..\COMMON\easyax5043.c:337: wtimer_remove_callback(&axradio_cb_receive.cb);
   0A20 90 02 32           2757 	mov	dptr,#_axradio_cb_receive
   0A23 C0 07              2758 	push	ar7
   0A25 12 48 E0           2759 	lcall	_wtimer_remove_callback
   0A28 D0 07              2760 	pop	ar7
                           2761 ;	..\COMMON\easyax5043.c:338: axradio_cb_receive.st.error = AXRADIO_ERR_NOERROR;
   0A2A 90 02 37           2762 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   0A2D E4                 2763 	clr	a
   0A2E F0                 2764 	movx	@dptr,a
                           2765 ;	..\COMMON\easyax5043.c:339: axradio_cb_receive.st.rx.mac.raw = axradio_rxbuffer;
   0A2F 90 02 4E           2766 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   0A32 74 2E              2767 	mov	a,#_axradio_rxbuffer
   0A34 F0                 2768 	movx	@dptr,a
   0A35 A3                 2769 	inc	dptr
   0A36 74 01              2770 	mov	a,#(_axradio_rxbuffer >> 8)
   0A38 F0                 2771 	movx	@dptr,a
                           2772 ;	..\COMMON\easyax5043.c:340: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   0A39 74 1C              2773 	mov	a,#0x1C
   0A3B B5 0A 02           2774 	cjne	a,_axradio_mode,00222$
   0A3E 80 0C              2775 	sjmp	00117$
   0A40                    2776 00222$:
                           2777 ;	..\COMMON\easyax5043.c:341: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   0A40 74 1D              2778 	mov	a,#0x1D
   0A42 B5 0A 02           2779 	cjne	a,_axradio_mode,00223$
   0A45 80 05              2780 	sjmp	00117$
   0A47                    2781 00223$:
                           2782 ;	..\COMMON\easyax5043.c:342: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   0A47 74 1E              2783 	mov	a,#0x1E
   0A49 B5 0A 5F           2784 	cjne	a,_axradio_mode,00118$
   0A4C                    2785 00117$:
                           2786 ;	..\COMMON\easyax5043.c:343: axradio_cb_receive.st.rx.pktdata = axradio_rxbuffer;
   0A4C 90 02 50           2787 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0A4F 74 2E              2788 	mov	a,#_axradio_rxbuffer
   0A51 F0                 2789 	movx	@dptr,a
   0A52 A3                 2790 	inc	dptr
   0A53 74 01              2791 	mov	a,#(_axradio_rxbuffer >> 8)
   0A55 F0                 2792 	movx	@dptr,a
                           2793 ;	..\COMMON\easyax5043.c:344: axradio_cb_receive.st.rx.pktlen = len;
   0A56 8F 05              2794 	mov	ar5,r7
   0A58 7E 00              2795 	mov	r6,#0x00
   0A5A 90 02 52           2796 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0A5D ED                 2797 	mov	a,r5
   0A5E F0                 2798 	movx	@dptr,a
   0A5F A3                 2799 	inc	dptr
   0A60 EE                 2800 	mov	a,r6
   0A61 F0                 2801 	movx	@dptr,a
                           2802 ;	..\COMMON\easyax5043.c:346: int8_t r = AX5043_RSSI;
   0A62 90 40 40           2803 	mov	dptr,#_AX5043_RSSI
   0A65 E0                 2804 	movx	a,@dptr
                           2805 ;	..\COMMON\easyax5043.c:347: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0A66 FE                 2806 	mov	r6,a
   0A67 33                 2807 	rlc	a
   0A68 95 E0              2808 	subb	a,acc
   0A6A FD                 2809 	mov	r5,a
   0A6B 90 4B 7E           2810 	mov	dptr,#_axradio_phy_rssioffset
   0A6E E4                 2811 	clr	a
   0A6F 93                 2812 	movc	a,@a+dptr
   0A70 FC                 2813 	mov	r4,a
   0A71 33                 2814 	rlc	a
   0A72 95 E0              2815 	subb	a,acc
   0A74 FB                 2816 	mov	r3,a
   0A75 EE                 2817 	mov	a,r6
   0A76 C3                 2818 	clr	c
   0A77 9C                 2819 	subb	a,r4
   0A78 FE                 2820 	mov	r6,a
   0A79 ED                 2821 	mov	a,r5
   0A7A 9B                 2822 	subb	a,r3
   0A7B FD                 2823 	mov	r5,a
   0A7C 90 02 3C           2824 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0A7F EE                 2825 	mov	a,r6
   0A80 F0                 2826 	movx	@dptr,a
   0A81 A3                 2827 	inc	dptr
   0A82 ED                 2828 	mov	a,r5
   0A83 F0                 2829 	movx	@dptr,a
                           2830 ;	..\COMMON\easyax5043.c:349: axradio_cb_receive.st.rx.phy.offset.o = signextend20(radio_read24((uint16_t)&AX5043_TRKRFFREQ2));
   0A84 90 40 4D           2831 	mov	dptr,#_AX5043_TRKRFFREQ2
   0A87 12 3F 4F           2832 	lcall	_radio_read24
   0A8A 12 4A 7C           2833 	lcall	_signextend20
   0A8D AB 82              2834 	mov	r3,dpl
   0A8F AC 83              2835 	mov	r4,dph
   0A91 AD F0              2836 	mov	r5,b
   0A93 FE                 2837 	mov	r6,a
   0A94 90 02 3E           2838 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0A97 EB                 2839 	mov	a,r3
   0A98 F0                 2840 	movx	@dptr,a
   0A99 A3                 2841 	inc	dptr
   0A9A EC                 2842 	mov	a,r4
   0A9B F0                 2843 	movx	@dptr,a
   0A9C A3                 2844 	inc	dptr
   0A9D ED                 2845 	mov	a,r5
   0A9E F0                 2846 	movx	@dptr,a
   0A9F A3                 2847 	inc	dptr
   0AA0 EE                 2848 	mov	a,r6
   0AA1 F0                 2849 	movx	@dptr,a
                           2850 ;	..\COMMON\easyax5043.c:350: wtimer_add_callback(&axradio_cb_receive.cb);
   0AA2 90 02 32           2851 	mov	dptr,#_axradio_cb_receive
   0AA5 12 3E 7B           2852 	lcall	_wtimer_add_callback
                           2853 ;	..\COMMON\easyax5043.c:351: break;
   0AA8 02 09 7F           2854 	ljmp	00147$
   0AAB                    2855 00118$:
                           2856 ;	..\COMMON\easyax5043.c:353: axradio_cb_receive.st.rx.pktdata = &axradio_rxbuffer[axradio_framing_maclen];
   0AAB 90 4B 94           2857 	mov	dptr,#_axradio_framing_maclen
   0AAE E4                 2858 	clr	a
   0AAF 93                 2859 	movc	a,@a+dptr
   0AB0 FE                 2860 	mov	r6,a
   0AB1 24 2E              2861 	add	a,#_axradio_rxbuffer
   0AB3 FC                 2862 	mov	r4,a
   0AB4 E4                 2863 	clr	a
   0AB5 34 01              2864 	addc	a,#(_axradio_rxbuffer >> 8)
   0AB7 FD                 2865 	mov	r5,a
   0AB8 90 02 50           2866 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0ABB EC                 2867 	mov	a,r4
   0ABC F0                 2868 	movx	@dptr,a
   0ABD A3                 2869 	inc	dptr
   0ABE ED                 2870 	mov	a,r5
   0ABF F0                 2871 	movx	@dptr,a
                           2872 ;	..\COMMON\easyax5043.c:354: if (len < axradio_framing_maclen) {
   0AC0 C3                 2873 	clr	c
   0AC1 EF                 2874 	mov	a,r7
   0AC2 9E                 2875 	subb	a,r6
   0AC3 50 0A              2876 	jnc	00125$
                           2877 ;	..\COMMON\easyax5043.c:356: axradio_cb_receive.st.rx.pktlen = 0;
   0AC5 90 02 52           2878 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AC8 E4                 2879 	clr	a
   0AC9 F0                 2880 	movx	@dptr,a
   0ACA A3                 2881 	inc	dptr
   0ACB F0                 2882 	movx	@dptr,a
   0ACC 02 09 7F           2883 	ljmp	00147$
   0ACF                    2884 00125$:
                           2885 ;	..\COMMON\easyax5043.c:358: len -= axradio_framing_maclen;
   0ACF EF                 2886 	mov	a,r7
   0AD0 C3                 2887 	clr	c
   0AD1 9E                 2888 	subb	a,r6
                           2889 ;	..\COMMON\easyax5043.c:359: axradio_cb_receive.st.rx.pktlen = len;
   0AD2 FD                 2890 	mov	r5,a
   0AD3 7E 00              2891 	mov	r6,#0x00
   0AD5 90 02 52           2892 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AD8 ED                 2893 	mov	a,r5
   0AD9 F0                 2894 	movx	@dptr,a
   0ADA A3                 2895 	inc	dptr
   0ADB EE                 2896 	mov	a,r6
   0ADC F0                 2897 	movx	@dptr,a
                           2898 ;	..\COMMON\easyax5043.c:360: wtimer_add_callback(&axradio_cb_receive.cb);
   0ADD 90 02 32           2899 	mov	dptr,#_axradio_cb_receive
   0AE0 12 3E 7B           2900 	lcall	_wtimer_add_callback
                           2901 ;	..\COMMON\easyax5043.c:361: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   0AE3 74 22              2902 	mov	a,#0x22
   0AE5 B5 0A 02           2903 	cjne	a,_axradio_mode,00227$
   0AE8 80 0A              2904 	sjmp	00121$
   0AEA                    2905 00227$:
                           2906 ;	..\COMMON\easyax5043.c:362: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE)
   0AEA 74 23              2907 	mov	a,#0x23
   0AEC B5 0A 02           2908 	cjne	a,_axradio_mode,00228$
   0AEF 80 03              2909 	sjmp	00229$
   0AF1                    2910 00228$:
   0AF1 02 09 7F           2911 	ljmp	00147$
   0AF4                    2912 00229$:
   0AF4                    2913 00121$:
                           2914 ;	..\COMMON\easyax5043.c:363: wtimer_remove(&axradio_timer);
   0AF4 90 02 89           2915 	mov	dptr,#_axradio_timer
   0AF7 12 46 8F           2916 	lcall	_wtimer_remove
                           2917 ;	..\COMMON\easyax5043.c:365: break;
   0AFA 02 09 7F           2918 	ljmp	00147$
                           2919 ;	..\COMMON\easyax5043.c:367: case AX5043_FIFOCMD_RFFREQOFFS:
   0AFD                    2920 00127$:
                           2921 ;	..\COMMON\easyax5043.c:368: if (len != 3)
   0AFD BF 03 02           2922 	cjne	r7,#0x03,00230$
   0B00 80 03              2923 	sjmp	00231$
   0B02                    2924 00230$:
   0B02 02 0C 06           2925 	ljmp	00140$
   0B05                    2926 00231$:
                           2927 ;	..\COMMON\easyax5043.c:370: i = AX5043_FIFODATA;
   0B05 90 40 29           2928 	mov	dptr,#_AX5043_FIFODATA
   0B08 E0                 2929 	movx	a,@dptr
   0B09 FE                 2930 	mov	r6,a
                           2931 ;	..\COMMON\easyax5043.c:371: i &= 0x0F;
   0B0A 53 06 0F           2932 	anl	ar6,#0x0F
                           2933 ;	..\COMMON\easyax5043.c:372: i |= 1 + (uint8_t)~(i & 0x08);
   0B0D 74 08              2934 	mov	a,#0x08
   0B0F 5E                 2935 	anl	a,r6
   0B10 F4                 2936 	cpl	a
   0B11 FD                 2937 	mov	r5,a
   0B12 0D                 2938 	inc	r5
   0B13 ED                 2939 	mov	a,r5
   0B14 42 06              2940 	orl	ar6,a
                           2941 ;	..\COMMON\easyax5043.c:373: axradio_cb_receive.st.rx.phy.offset.b.b3 = ((int8_t)i) >> 8;
   0B16 8E 05              2942 	mov	ar5,r6
   0B18 ED                 2943 	mov	a,r5
   0B19 33                 2944 	rlc	a
   0B1A 95 E0              2945 	subb	a,acc
   0B1C FD                 2946 	mov	r5,a
   0B1D 90 02 41           2947 	mov	dptr,#(_axradio_cb_receive + 0x000f)
   0B20 F0                 2948 	movx	@dptr,a
                           2949 ;	..\COMMON\easyax5043.c:374: axradio_cb_receive.st.rx.phy.offset.b.b2 = i;
   0B21 90 02 40           2950 	mov	dptr,#(_axradio_cb_receive + 0x000e)
   0B24 EE                 2951 	mov	a,r6
   0B25 F0                 2952 	movx	@dptr,a
                           2953 ;	..\COMMON\easyax5043.c:375: axradio_cb_receive.st.rx.phy.offset.b.b1 = AX5043_FIFODATA;
   0B26 90 40 29           2954 	mov	dptr,#_AX5043_FIFODATA
   0B29 E0                 2955 	movx	a,@dptr
   0B2A 90 02 3F           2956 	mov	dptr,#(_axradio_cb_receive + 0x000d)
   0B2D F0                 2957 	movx	@dptr,a
                           2958 ;	..\COMMON\easyax5043.c:376: axradio_cb_receive.st.rx.phy.offset.b.b0 = AX5043_FIFODATA;
   0B2E 90 40 29           2959 	mov	dptr,#_AX5043_FIFODATA
   0B31 E0                 2960 	movx	a,@dptr
   0B32 FE                 2961 	mov	r6,a
   0B33 90 02 3E           2962 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0B36 F0                 2963 	movx	@dptr,a
                           2964 ;	..\COMMON\easyax5043.c:377: break;
   0B37 02 09 7F           2965 	ljmp	00147$
                           2966 ;	..\COMMON\easyax5043.c:379: case AX5043_FIFOCMD_RSSI:
   0B3A                    2967 00130$:
                           2968 ;	..\COMMON\easyax5043.c:380: if (len != 1)
   0B3A BF 01 02           2969 	cjne	r7,#0x01,00232$
   0B3D 80 03              2970 	sjmp	00233$
   0B3F                    2971 00232$:
   0B3F 02 0C 06           2972 	ljmp	00140$
   0B42                    2973 00233$:
                           2974 ;	..\COMMON\easyax5043.c:383: int8_t r = AX5043_FIFODATA;
   0B42 90 40 29           2975 	mov	dptr,#_AX5043_FIFODATA
   0B45 E0                 2976 	movx	a,@dptr
                           2977 ;	..\COMMON\easyax5043.c:384: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0B46 FE                 2978 	mov	r6,a
   0B47 33                 2979 	rlc	a
   0B48 95 E0              2980 	subb	a,acc
   0B4A FD                 2981 	mov	r5,a
   0B4B 90 4B 7E           2982 	mov	dptr,#_axradio_phy_rssioffset
   0B4E E4                 2983 	clr	a
   0B4F 93                 2984 	movc	a,@a+dptr
   0B50 FC                 2985 	mov	r4,a
   0B51 33                 2986 	rlc	a
   0B52 95 E0              2987 	subb	a,acc
   0B54 FB                 2988 	mov	r3,a
   0B55 EE                 2989 	mov	a,r6
   0B56 C3                 2990 	clr	c
   0B57 9C                 2991 	subb	a,r4
   0B58 FE                 2992 	mov	r6,a
   0B59 ED                 2993 	mov	a,r5
   0B5A 9B                 2994 	subb	a,r3
   0B5B FD                 2995 	mov	r5,a
   0B5C 90 02 3C           2996 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0B5F EE                 2997 	mov	a,r6
   0B60 F0                 2998 	movx	@dptr,a
   0B61 A3                 2999 	inc	dptr
   0B62 ED                 3000 	mov	a,r5
   0B63 F0                 3001 	movx	@dptr,a
                           3002 ;	..\COMMON\easyax5043.c:386: break;
   0B64 02 09 7F           3003 	ljmp	00147$
                           3004 ;	..\COMMON\easyax5043.c:388: case AX5043_FIFOCMD_TIMER:
   0B67                    3005 00133$:
                           3006 ;	..\COMMON\easyax5043.c:389: if (len != 3)
   0B67 BF 03 02           3007 	cjne	r7,#0x03,00234$
   0B6A 80 03              3008 	sjmp	00235$
   0B6C                    3009 00234$:
   0B6C 02 0C 06           3010 	ljmp	00140$
   0B6F                    3011 00235$:
                           3012 ;	..\COMMON\easyax5043.c:393: axradio_cb_receive.st.time.b.b3 = 0;
   0B6F 90 02 3B           3013 	mov	dptr,#(_axradio_cb_receive + 0x0009)
   0B72 E4                 3014 	clr	a
   0B73 F0                 3015 	movx	@dptr,a
                           3016 ;	..\COMMON\easyax5043.c:394: axradio_cb_receive.st.time.b.b2 = AX5043_FIFODATA;
   0B74 90 40 29           3017 	mov	dptr,#_AX5043_FIFODATA
   0B77 E0                 3018 	movx	a,@dptr
   0B78 90 02 3A           3019 	mov	dptr,#(_axradio_cb_receive + 0x0008)
   0B7B F0                 3020 	movx	@dptr,a
                           3021 ;	..\COMMON\easyax5043.c:395: axradio_cb_receive.st.time.b.b1 = AX5043_FIFODATA;
   0B7C 90 40 29           3022 	mov	dptr,#_AX5043_FIFODATA
   0B7F E0                 3023 	movx	a,@dptr
   0B80 90 02 39           3024 	mov	dptr,#(_axradio_cb_receive + 0x0007)
   0B83 F0                 3025 	movx	@dptr,a
                           3026 ;	..\COMMON\easyax5043.c:396: axradio_cb_receive.st.time.b.b0 = AX5043_FIFODATA;
   0B84 90 40 29           3027 	mov	dptr,#_AX5043_FIFODATA
   0B87 E0                 3028 	movx	a,@dptr
   0B88 FE                 3029 	mov	r6,a
   0B89 90 02 38           3030 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   0B8C F0                 3031 	movx	@dptr,a
                           3032 ;	..\COMMON\easyax5043.c:397: break;
   0B8D 02 09 7F           3033 	ljmp	00147$
                           3034 ;	..\COMMON\easyax5043.c:399: case AX5043_FIFOCMD_ANTRSSI:
   0B90                    3035 00136$:
                           3036 ;	..\COMMON\easyax5043.c:400: if (!len)
   0B90 EF                 3037 	mov	a,r7
   0B91 70 03              3038 	jnz	00236$
   0B93 02 09 7F           3039 	ljmp	00147$
   0B96                    3040 00236$:
                           3041 ;	..\COMMON\easyax5043.c:402: update_timeanchor();
   0B96 C0 07              3042 	push	ar7
   0B98 12 08 37           3043 	lcall	_update_timeanchor
                           3044 ;	..\COMMON\easyax5043.c:403: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   0B9B 90 02 5E           3045 	mov	dptr,#_axradio_cb_channelstate
   0B9E 12 48 E0           3046 	lcall	_wtimer_remove_callback
                           3047 ;	..\COMMON\easyax5043.c:404: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   0BA1 90 02 63           3048 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   0BA4 E4                 3049 	clr	a
   0BA5 F0                 3050 	movx	@dptr,a
                           3051 ;	..\COMMON\easyax5043.c:406: int8_t r = AX5043_FIFODATA;
   0BA6 90 40 29           3052 	mov	dptr,#_AX5043_FIFODATA
   0BA9 E0                 3053 	movx	a,@dptr
                           3054 ;	..\COMMON\easyax5043.c:407: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   0BAA FE                 3055 	mov	r6,a
   0BAB FC                 3056 	mov	r4,a
   0BAC 33                 3057 	rlc	a
   0BAD 95 E0              3058 	subb	a,acc
   0BAF FD                 3059 	mov	r5,a
   0BB0 90 4B 7E           3060 	mov	dptr,#_axradio_phy_rssioffset
   0BB3 E4                 3061 	clr	a
   0BB4 93                 3062 	movc	a,@a+dptr
   0BB5 FB                 3063 	mov	r3,a
   0BB6 33                 3064 	rlc	a
   0BB7 95 E0              3065 	subb	a,acc
   0BB9 FA                 3066 	mov	r2,a
   0BBA EC                 3067 	mov	a,r4
   0BBB C3                 3068 	clr	c
   0BBC 9B                 3069 	subb	a,r3
   0BBD FC                 3070 	mov	r4,a
   0BBE ED                 3071 	mov	a,r5
   0BBF 9A                 3072 	subb	a,r2
   0BC0 FD                 3073 	mov	r5,a
   0BC1 90 02 68           3074 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   0BC4 EC                 3075 	mov	a,r4
   0BC5 F0                 3076 	movx	@dptr,a
   0BC6 A3                 3077 	inc	dptr
   0BC7 ED                 3078 	mov	a,r5
   0BC8 F0                 3079 	movx	@dptr,a
                           3080 ;	..\COMMON\easyax5043.c:408: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   0BC9 90 4B 80           3081 	mov	dptr,#_axradio_phy_channelbusy
   0BCC E4                 3082 	clr	a
   0BCD 93                 3083 	movc	a,@a+dptr
   0BCE FD                 3084 	mov	r5,a
   0BCF C3                 3085 	clr	c
   0BD0 EE                 3086 	mov	a,r6
   0BD1 64 80              3087 	xrl	a,#0x80
   0BD3 8D F0              3088 	mov	b,r5
   0BD5 63 F0 80           3089 	xrl	b,#0x80
   0BD8 95 F0              3090 	subb	a,b
   0BDA B3                 3091 	cpl	c
   0BDB E4                 3092 	clr	a
   0BDC 33                 3093 	rlc	a
   0BDD 90 02 6A           3094 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   0BE0 F0                 3095 	movx	@dptr,a
                           3096 ;	..\COMMON\easyax5043.c:410: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   0BE1 90 00 1A           3097 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0BE4 E0                 3098 	movx	a,@dptr
   0BE5 FB                 3099 	mov	r3,a
   0BE6 A3                 3100 	inc	dptr
   0BE7 E0                 3101 	movx	a,@dptr
   0BE8 FC                 3102 	mov	r4,a
   0BE9 A3                 3103 	inc	dptr
   0BEA E0                 3104 	movx	a,@dptr
   0BEB FD                 3105 	mov	r5,a
   0BEC A3                 3106 	inc	dptr
   0BED E0                 3107 	movx	a,@dptr
   0BEE FE                 3108 	mov	r6,a
   0BEF 90 02 64           3109 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   0BF2 EB                 3110 	mov	a,r3
   0BF3 F0                 3111 	movx	@dptr,a
   0BF4 A3                 3112 	inc	dptr
   0BF5 EC                 3113 	mov	a,r4
   0BF6 F0                 3114 	movx	@dptr,a
   0BF7 A3                 3115 	inc	dptr
   0BF8 ED                 3116 	mov	a,r5
   0BF9 F0                 3117 	movx	@dptr,a
   0BFA A3                 3118 	inc	dptr
   0BFB EE                 3119 	mov	a,r6
   0BFC F0                 3120 	movx	@dptr,a
                           3121 ;	..\COMMON\easyax5043.c:411: wtimer_add_callback(&axradio_cb_channelstate.cb);
   0BFD 90 02 5E           3122 	mov	dptr,#_axradio_cb_channelstate
   0C00 12 3E 7B           3123 	lcall	_wtimer_add_callback
   0C03 D0 07              3124 	pop	ar7
                           3125 ;	..\COMMON\easyax5043.c:412: --len;
   0C05 1F                 3126 	dec	r7
                           3127 ;	..\COMMON\easyax5043.c:417: dropchunk:
   0C06                    3128 00140$:
                           3129 ;	..\COMMON\easyax5043.c:418: if (!len)
   0C06 EF                 3130 	mov	a,r7
   0C07 70 03              3131 	jnz	00238$
   0C09 02 09 7F           3132 	ljmp	00147$
   0C0C                    3133 00238$:
                           3134 ;	..\COMMON\easyax5043.c:421: do {
   0C0C                    3135 00143$:
                           3136 ;	..\COMMON\easyax5043.c:422: AX5043_FIFODATA;        // purge FIFO
   0C0C 90 40 29           3137 	mov	dptr,#_AX5043_FIFODATA
   0C0F E0                 3138 	movx	a,@dptr
                           3139 ;	..\COMMON\easyax5043.c:424: while (--i);
   0C10 DF FA              3140 	djnz	r7,00143$
                           3141 ;	..\COMMON\easyax5043.c:426: } // end switch(fifo_cmd)
   0C12 02 09 7F           3142 	ljmp	00147$
                           3143 ;------------------------------------------------------------
                           3144 ;Allocation info for local variables in function 'transmit_isr'
                           3145 ;------------------------------------------------------------
                           3146 ;cnt                       Allocated to registers r7 
                           3147 ;byte                      Allocated to registers r7 
                           3148 ;len_byte                  Allocated to registers r4 
                           3149 ;i                         Allocated to registers r3 
                           3150 ;byte                      Allocated to registers r6 
                           3151 ;flags                     Allocated to registers r6 
                           3152 ;len                       Allocated to registers r4 r5 
                           3153 ;------------------------------------------------------------
                           3154 ;	..\COMMON\easyax5043.c:430: static __reentrantb void transmit_isr(void) __reentrant
                           3155 ;	-----------------------------------------
                           3156 ;	 function transmit_isr
                           3157 ;	-----------------------------------------
   0C15                    3158 _transmit_isr:
                           3159 ;	..\COMMON\easyax5043.c:568: pktend:
   0C15                    3160 00157$:
                           3161 ;	..\COMMON\easyax5043.c:433: uint8_t cnt = AX5043_FIFOFREE0;
   0C15 90 40 2D           3162 	mov	dptr,#_AX5043_FIFOFREE0
   0C18 E0                 3163 	movx	a,@dptr
   0C19 FF                 3164 	mov	r7,a
                           3165 ;	..\COMMON\easyax5043.c:434: if (AX5043_FIFOFREE1)
   0C1A 90 40 2C           3166 	mov	dptr,#_AX5043_FIFOFREE1
   0C1D E0                 3167 	movx	a,@dptr
   0C1E FE                 3168 	mov	r6,a
   0C1F 60 02              3169 	jz	00102$
                           3170 ;	..\COMMON\easyax5043.c:435: cnt = 0xff;
   0C21 7F FF              3171 	mov	r7,#0xFF
   0C23                    3172 00102$:
                           3173 ;	..\COMMON\easyax5043.c:436: switch (axradio_trxstate) {
   0C23 AE 0B              3174 	mov	r6,_axradio_trxstate
   0C25 BE 0A 02           3175 	cjne	r6,#0x0A,00219$
   0C28 80 0F              3176 	sjmp	00103$
   0C2A                    3177 00219$:
   0C2A BE 0B 03           3178 	cjne	r6,#0x0B,00220$
   0C2D 02 0C CE           3179 	ljmp	00115$
   0C30                    3180 00220$:
   0C30 BE 0C 03           3181 	cjne	r6,#0x0C,00221$
   0C33 02 0E A4           3182 	ljmp	00137$
   0C36                    3183 00221$:
   0C36 02 0F 3A           3184 	ljmp	00148$
                           3185 ;	..\COMMON\easyax5043.c:437: case trxstate_tx_longpreamble:
   0C39                    3186 00103$:
                           3187 ;	..\COMMON\easyax5043.c:438: if (!axradio_txbuffer_cnt) {
   0C39 90 00 07           3188 	mov	dptr,#_axradio_txbuffer_cnt
   0C3C E0                 3189 	movx	a,@dptr
   0C3D FD                 3190 	mov	r5,a
   0C3E A3                 3191 	inc	dptr
   0C3F E0                 3192 	movx	a,@dptr
   0C40 FE                 3193 	mov	r6,a
   0C41 4D                 3194 	orl	a,r5
   0C42 70 37              3195 	jnz	00109$
                           3196 ;	..\COMMON\easyax5043.c:439: axradio_trxstate = trxstate_tx_shortpreamble;
   0C44 75 0B 0B           3197 	mov	_axradio_trxstate,#0x0B
                           3198 ;	..\COMMON\easyax5043.c:440: if( axradio_mode == AXRADIO_MODE_WOR_TRANSMIT || axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT )
   0C47 74 11              3199 	mov	a,#0x11
   0C49 B5 0A 02           3200 	cjne	a,_axradio_mode,00223$
   0C4C 80 05              3201 	sjmp	00104$
   0C4E                    3202 00223$:
   0C4E 74 13              3203 	mov	a,#0x13
   0C50 B5 0A 14           3204 	cjne	a,_axradio_mode,00105$
   0C53                    3205 00104$:
                           3206 ;	..\COMMON\easyax5043.c:441: axradio_txbuffer_cnt = axradio_phy_preamble_wor_len;
   0C53 90 4B 8A           3207 	mov	dptr,#_axradio_phy_preamble_wor_len
   0C56 E4                 3208 	clr	a
   0C57 93                 3209 	movc	a,@a+dptr
   0C58 FB                 3210 	mov	r3,a
   0C59 74 01              3211 	mov	a,#0x01
   0C5B 93                 3212 	movc	a,@a+dptr
   0C5C FC                 3213 	mov	r4,a
   0C5D 90 00 07           3214 	mov	dptr,#_axradio_txbuffer_cnt
   0C60 EB                 3215 	mov	a,r3
   0C61 F0                 3216 	movx	@dptr,a
   0C62 A3                 3217 	inc	dptr
   0C63 EC                 3218 	mov	a,r4
   0C64 F0                 3219 	movx	@dptr,a
   0C65 80 67              3220 	sjmp	00115$
   0C67                    3221 00105$:
                           3222 ;	..\COMMON\easyax5043.c:443: axradio_txbuffer_cnt = axradio_phy_preamble_len;
   0C67 90 4B 8E           3223 	mov	dptr,#_axradio_phy_preamble_len
   0C6A E4                 3224 	clr	a
   0C6B 93                 3225 	movc	a,@a+dptr
   0C6C FB                 3226 	mov	r3,a
   0C6D 74 01              3227 	mov	a,#0x01
   0C6F 93                 3228 	movc	a,@a+dptr
   0C70 FC                 3229 	mov	r4,a
   0C71 90 00 07           3230 	mov	dptr,#_axradio_txbuffer_cnt
   0C74 EB                 3231 	mov	a,r3
   0C75 F0                 3232 	movx	@dptr,a
   0C76 A3                 3233 	inc	dptr
   0C77 EC                 3234 	mov	a,r4
   0C78 F0                 3235 	movx	@dptr,a
                           3236 ;	..\COMMON\easyax5043.c:444: goto shortpreamble;
   0C79 80 53              3237 	sjmp	00115$
   0C7B                    3238 00109$:
                           3239 ;	..\COMMON\easyax5043.c:446: if (cnt < 4)
   0C7B BF 04 00           3240 	cjne	r7,#0x04,00226$
   0C7E                    3241 00226$:
   0C7E 50 03              3242 	jnc	00227$
   0C80 02 0F 4A           3243 	ljmp	00151$
   0C83                    3244 00227$:
                           3245 ;	..\COMMON\easyax5043.c:448: cnt = 7;
   0C83 7F 07              3246 	mov	r7,#0x07
                           3247 ;	..\COMMON\easyax5043.c:449: if (axradio_txbuffer_cnt < 7)
   0C85 C3                 3248 	clr	c
   0C86 ED                 3249 	mov	a,r5
   0C87 94 07              3250 	subb	a,#0x07
   0C89 EE                 3251 	mov	a,r6
   0C8A 94 00              3252 	subb	a,#0x00
   0C8C 50 02              3253 	jnc	00113$
                           3254 ;	..\COMMON\easyax5043.c:450: cnt = axradio_txbuffer_cnt;
   0C8E 8D 07              3255 	mov	ar7,r5
   0C90                    3256 00113$:
                           3257 ;	..\COMMON\easyax5043.c:451: axradio_txbuffer_cnt -= cnt;
   0C90 8F 05              3258 	mov	ar5,r7
   0C92 7E 00              3259 	mov	r6,#0x00
   0C94 90 00 07           3260 	mov	dptr,#_axradio_txbuffer_cnt
   0C97 E0                 3261 	movx	a,@dptr
   0C98 FB                 3262 	mov	r3,a
   0C99 A3                 3263 	inc	dptr
   0C9A E0                 3264 	movx	a,@dptr
   0C9B FC                 3265 	mov	r4,a
   0C9C 90 00 07           3266 	mov	dptr,#_axradio_txbuffer_cnt
   0C9F EB                 3267 	mov	a,r3
   0CA0 C3                 3268 	clr	c
   0CA1 9D                 3269 	subb	a,r5
   0CA2 F0                 3270 	movx	@dptr,a
   0CA3 EC                 3271 	mov	a,r4
   0CA4 9E                 3272 	subb	a,r6
   0CA5 A3                 3273 	inc	dptr
   0CA6 F0                 3274 	movx	@dptr,a
                           3275 ;	..\COMMON\easyax5043.c:452: cnt <<= 5;
   0CA7 EF                 3276 	mov	a,r7
   0CA8 C4                 3277 	swap	a
   0CA9 23                 3278 	rl	a
   0CAA 54 E0              3279 	anl	a,#0xE0
   0CAC FF                 3280 	mov	r7,a
                           3281 ;	..\COMMON\easyax5043.c:453: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0CAD 90 40 29           3282 	mov	dptr,#_AX5043_FIFODATA
   0CB0 74 62              3283 	mov	a,#0x62
   0CB2 F0                 3284 	movx	@dptr,a
                           3285 ;	..\COMMON\easyax5043.c:454: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0CB3 90 4B 91           3286 	mov	dptr,#_axradio_phy_preamble_flags
   0CB6 E4                 3287 	clr	a
   0CB7 93                 3288 	movc	a,@a+dptr
   0CB8 90 40 29           3289 	mov	dptr,#_AX5043_FIFODATA
   0CBB F0                 3290 	movx	@dptr,a
                           3291 ;	..\COMMON\easyax5043.c:455: AX5043_FIFODATA = cnt;
   0CBC 90 40 29           3292 	mov	dptr,#_AX5043_FIFODATA
   0CBF EF                 3293 	mov	a,r7
   0CC0 F0                 3294 	movx	@dptr,a
                           3295 ;	..\COMMON\easyax5043.c:456: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0CC1 90 4B 90           3296 	mov	dptr,#_axradio_phy_preamble_byte
   0CC4 E4                 3297 	clr	a
   0CC5 93                 3298 	movc	a,@a+dptr
   0CC6 FE                 3299 	mov	r6,a
   0CC7 90 40 29           3300 	mov	dptr,#_AX5043_FIFODATA
   0CCA F0                 3301 	movx	@dptr,a
                           3302 ;	..\COMMON\easyax5043.c:457: break;
   0CCB 02 0C 15           3303 	ljmp	00157$
                           3304 ;	..\COMMON\easyax5043.c:460: shortpreamble:
   0CCE                    3305 00115$:
                           3306 ;	..\COMMON\easyax5043.c:461: if (!axradio_txbuffer_cnt) {
   0CCE 90 00 07           3307 	mov	dptr,#_axradio_txbuffer_cnt
   0CD1 E0                 3308 	movx	a,@dptr
   0CD2 FD                 3309 	mov	r5,a
   0CD3 A3                 3310 	inc	dptr
   0CD4 E0                 3311 	movx	a,@dptr
   0CD5 FE                 3312 	mov	r6,a
   0CD6 4D                 3313 	orl	a,r5
   0CD7 60 03              3314 	jz	00229$
   0CD9 02 0D B4           3315 	ljmp	00127$
   0CDC                    3316 00229$:
                           3317 ;	..\COMMON\easyax5043.c:462: if (cnt < 15)
   0CDC BF 0F 00           3318 	cjne	r7,#0x0F,00230$
   0CDF                    3319 00230$:
   0CDF 50 03              3320 	jnc	00231$
   0CE1 02 0F 4A           3321 	ljmp	00151$
   0CE4                    3322 00231$:
                           3323 ;	..\COMMON\easyax5043.c:464: if (axradio_phy_preamble_appendbits) {
   0CE4 90 4B 92           3324 	mov	dptr,#_axradio_phy_preamble_appendbits
   0CE7 E4                 3325 	clr	a
   0CE8 93                 3326 	movc	a,@a+dptr
   0CE9 FC                 3327 	mov	r4,a
   0CEA 60 6F              3328 	jz	00122$
                           3329 ;	..\COMMON\easyax5043.c:466: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                           3330 ;	..\COMMON\easyax5043.c:467: AX5043_FIFODATA = 0x1C;
   0CEC 90 40 29           3331 	mov	dptr,#_AX5043_FIFODATA
   0CEF 74 41              3332 	mov	a,#0x41
   0CF1 F0                 3333 	movx	@dptr,a
   0CF2 74 1C              3334 	mov	a,#0x1C
   0CF4 F0                 3335 	movx	@dptr,a
                           3336 ;	..\COMMON\easyax5043.c:468: byte = axradio_phy_preamble_appendpattern;
   0CF5 90 4B 93           3337 	mov	dptr,#_axradio_phy_preamble_appendpattern
   0CF8 E4                 3338 	clr	a
   0CF9 93                 3339 	movc	a,@a+dptr
   0CFA FB                 3340 	mov	r3,a
   0CFB FF                 3341 	mov	r7,a
                           3342 ;	..\COMMON\easyax5043.c:469: if (AX5043_PKTADDRCFG & 0x80) {
   0CFC 90 42 00           3343 	mov	dptr,#_AX5043_PKTADDRCFG
   0CFF E0                 3344 	movx	a,@dptr
   0D00 FA                 3345 	mov	r2,a
   0D01 30 E7 26           3346 	jnb	acc.7,00119$
                           3347 ;	..\COMMON\easyax5043.c:471: byte &= 0xFF << (8-axradio_phy_preamble_appendbits);
   0D04 74 08              3348 	mov	a,#0x08
   0D06 C3                 3349 	clr	c
   0D07 9C                 3350 	subb	a,r4
   0D08 F5 F0              3351 	mov	b,a
   0D0A 05 F0              3352 	inc	b
   0D0C 74 FF              3353 	mov	a,#0xFF
   0D0E 80 02              3354 	sjmp	00236$
   0D10                    3355 00234$:
   0D10 25 E0              3356 	add	a,acc
   0D12                    3357 00236$:
   0D12 D5 F0 FB           3358 	djnz	b,00234$
   0D15 FA                 3359 	mov	r2,a
   0D16 52 07              3360 	anl	ar7,a
                           3361 ;	..\COMMON\easyax5043.c:472: byte |= 0x80 >> axradio_phy_preamble_appendbits;
   0D18 8C F0              3362 	mov	b,r4
   0D1A 05 F0              3363 	inc	b
   0D1C 74 80              3364 	mov	a,#0x80
   0D1E 80 02              3365 	sjmp	00238$
   0D20                    3366 00237$:
   0D20 C3                 3367 	clr	c
   0D21 13                 3368 	rrc	a
   0D22                    3369 00238$:
   0D22 D5 F0 FB           3370 	djnz	b,00237$
   0D25 FA                 3371 	mov	r2,a
   0D26 42 07              3372 	orl	ar7,a
   0D28 80 2C              3373 	sjmp	00120$
   0D2A                    3374 00119$:
                           3375 ;	..\COMMON\easyax5043.c:475: byte &= 0xFF >> (8-axradio_phy_preamble_appendbits);
   0D2A 8C 02              3376 	mov	ar2,r4
   0D2C 7B 00              3377 	mov	r3,#0x00
   0D2E 74 08              3378 	mov	a,#0x08
   0D30 C3                 3379 	clr	c
   0D31 9A                 3380 	subb	a,r2
   0D32 FA                 3381 	mov	r2,a
   0D33 E4                 3382 	clr	a
   0D34 9B                 3383 	subb	a,r3
   0D35 FB                 3384 	mov	r3,a
   0D36 8A F0              3385 	mov	b,r2
   0D38 05 F0              3386 	inc	b
   0D3A 74 FF              3387 	mov	a,#0xFF
   0D3C 80 02              3388 	sjmp	00240$
   0D3E                    3389 00239$:
   0D3E C3                 3390 	clr	c
   0D3F 13                 3391 	rrc	a
   0D40                    3392 00240$:
   0D40 D5 F0 FB           3393 	djnz	b,00239$
   0D43 FA                 3394 	mov	r2,a
   0D44 52 07              3395 	anl	ar7,a
                           3396 ;	..\COMMON\easyax5043.c:476: byte |= 0x01 << axradio_phy_preamble_appendbits;
   0D46 8C F0              3397 	mov	b,r4
   0D48 05 F0              3398 	inc	b
   0D4A 74 01              3399 	mov	a,#0x01
   0D4C 80 02              3400 	sjmp	00243$
   0D4E                    3401 00241$:
   0D4E 25 E0              3402 	add	a,acc
   0D50                    3403 00243$:
   0D50 D5 F0 FB           3404 	djnz	b,00241$
   0D53 FC                 3405 	mov	r4,a
   0D54 42 07              3406 	orl	ar7,a
   0D56                    3407 00120$:
                           3408 ;	..\COMMON\easyax5043.c:478: AX5043_FIFODATA = byte;
   0D56 90 40 29           3409 	mov	dptr,#_AX5043_FIFODATA
   0D59 EF                 3410 	mov	a,r7
   0D5A F0                 3411 	movx	@dptr,a
   0D5B                    3412 00122$:
                           3413 ;	..\COMMON\easyax5043.c:484: if ((AX5043_FRAMING & 0x0E) == 0x06 && axradio_framing_synclen) {
   0D5B 90 40 12           3414 	mov	dptr,#_AX5043_FRAMING
   0D5E E0                 3415 	movx	a,@dptr
   0D5F FC                 3416 	mov	r4,a
   0D60 53 04 0E           3417 	anl	ar4,#0x0E
   0D63 BC 06 48           3418 	cjne	r4,#0x06,00124$
   0D66 90 4B 9C           3419 	mov	dptr,#_axradio_framing_synclen
   0D69 E4                 3420 	clr	a
   0D6A 93                 3421 	movc	a,@a+dptr
   0D6B FC                 3422 	mov	r4,a
   0D6C 60 40              3423 	jz	00124$
                           3424 ;	..\COMMON\easyax5043.c:486: uint8_t len_byte = axradio_framing_synclen;
                           3425 ;	..\COMMON\easyax5043.c:487: uint8_t i = (len_byte & 0x07) ? 0x04 : 0;
   0D6E EC                 3426 	mov	a,r4
   0D6F 54 07              3427 	anl	a,#0x07
   0D71 60 04              3428 	jz	00161$
   0D73 7B 04              3429 	mov	r3,#0x04
   0D75 80 02              3430 	sjmp	00162$
   0D77                    3431 00161$:
   0D77 7B 00              3432 	mov	r3,#0x00
   0D79                    3433 00162$:
                           3434 ;	..\COMMON\easyax5043.c:489: len_byte += 7;
   0D79 74 07              3435 	mov	a,#0x07
   0D7B 2C                 3436 	add	a,r4
                           3437 ;	..\COMMON\easyax5043.c:490: len_byte >>= 3;
   0D7C C4                 3438 	swap	a
   0D7D 23                 3439 	rl	a
   0D7E 54 1F              3440 	anl	a,#0x1F
                           3441 ;	..\COMMON\easyax5043.c:491: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | ((len_byte + 1) << 5);
   0D80 FC                 3442 	mov	r4,a
   0D81 04                 3443 	inc	a
   0D82 C4                 3444 	swap	a
   0D83 23                 3445 	rl	a
   0D84 54 E0              3446 	anl	a,#0xE0
   0D86 FA                 3447 	mov	r2,a
   0D87 90 40 29           3448 	mov	dptr,#_AX5043_FIFODATA
   0D8A 74 01              3449 	mov	a,#0x01
   0D8C 4A                 3450 	orl	a,r2
   0D8D F0                 3451 	movx	@dptr,a
                           3452 ;	..\COMMON\easyax5043.c:492: AX5043_FIFODATA = axradio_framing_syncflags | i;
   0D8E 90 4B A1           3453 	mov	dptr,#_axradio_framing_syncflags
   0D91 E4                 3454 	clr	a
   0D92 93                 3455 	movc	a,@a+dptr
   0D93 FA                 3456 	mov	r2,a
   0D94 90 40 29           3457 	mov	dptr,#_AX5043_FIFODATA
   0D97 EB                 3458 	mov	a,r3
   0D98 4A                 3459 	orl	a,r2
   0D99 F0                 3460 	movx	@dptr,a
                           3461 ;	..\COMMON\easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0D9A 7B 00              3462 	mov	r3,#0x00
   0D9C                    3463 00152$:
   0D9C C3                 3464 	clr	c
   0D9D EB                 3465 	mov	a,r3
   0D9E 9C                 3466 	subb	a,r4
   0D9F 50 0D              3467 	jnc	00124$
                           3468 ;	..\COMMON\easyax5043.c:495: AX5043_FIFODATA = axradio_framing_syncword[i];
   0DA1 EB                 3469 	mov	a,r3
   0DA2 90 4B 9D           3470 	mov	dptr,#_axradio_framing_syncword
   0DA5 93                 3471 	movc	a,@a+dptr
   0DA6 FA                 3472 	mov	r2,a
   0DA7 90 40 29           3473 	mov	dptr,#_AX5043_FIFODATA
   0DAA F0                 3474 	movx	@dptr,a
                           3475 ;	..\COMMON\easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DAB 0B                 3476 	inc	r3
   0DAC 80 EE              3477 	sjmp	00152$
   0DAE                    3478 00124$:
                           3479 ;	..\COMMON\easyax5043.c:502: axradio_trxstate = trxstate_tx_packet;
   0DAE 75 0B 0C           3480 	mov	_axradio_trxstate,#0x0C
                           3481 ;	..\COMMON\easyax5043.c:503: break;
   0DB1 02 0C 15           3482 	ljmp	00157$
   0DB4                    3483 00127$:
                           3484 ;	..\COMMON\easyax5043.c:505: if (cnt < 4)
   0DB4 BF 04 00           3485 	cjne	r7,#0x04,00249$
   0DB7                    3486 00249$:
   0DB7 50 03              3487 	jnc	00250$
   0DB9 02 0F 4A           3488 	ljmp	00151$
   0DBC                    3489 00250$:
                           3490 ;	..\COMMON\easyax5043.c:507: cnt = 255;
   0DBC 7F FF              3491 	mov	r7,#0xFF
                           3492 ;	..\COMMON\easyax5043.c:508: if (axradio_txbuffer_cnt < 255*8)
   0DBE C3                 3493 	clr	c
   0DBF ED                 3494 	mov	a,r5
   0DC0 94 F8              3495 	subb	a,#0xF8
   0DC2 EE                 3496 	mov	a,r6
   0DC3 94 07              3497 	subb	a,#0x07
   0DC5 50 12              3498 	jnc	00131$
                           3499 ;	..\COMMON\easyax5043.c:509: cnt = axradio_txbuffer_cnt >> 3;
   0DC7 EE                 3500 	mov	a,r6
   0DC8 C4                 3501 	swap	a
   0DC9 23                 3502 	rl	a
   0DCA CD                 3503 	xch	a,r5
   0DCB C4                 3504 	swap	a
   0DCC 23                 3505 	rl	a
   0DCD 54 1F              3506 	anl	a,#0x1F
   0DCF 6D                 3507 	xrl	a,r5
   0DD0 CD                 3508 	xch	a,r5
   0DD1 54 1F              3509 	anl	a,#0x1F
   0DD3 CD                 3510 	xch	a,r5
   0DD4 6D                 3511 	xrl	a,r5
   0DD5 CD                 3512 	xch	a,r5
   0DD6 FE                 3513 	mov	r6,a
   0DD7 8D 07              3514 	mov	ar7,r5
   0DD9                    3515 00131$:
                           3516 ;	..\COMMON\easyax5043.c:510: if (cnt) {
   0DD9 EF                 3517 	mov	a,r7
   0DDA 60 46              3518 	jz	00133$
                           3519 ;	..\COMMON\easyax5043.c:511: axradio_txbuffer_cnt -= ((uint16_t)cnt) << 3;
   0DDC 8F 05              3520 	mov	ar5,r7
   0DDE E4                 3521 	clr	a
   0DDF C4                 3522 	swap	a
   0DE0 03                 3523 	rr	a
   0DE1 54 F8              3524 	anl	a,#0xF8
   0DE3 CD                 3525 	xch	a,r5
   0DE4 C4                 3526 	swap	a
   0DE5 03                 3527 	rr	a
   0DE6 CD                 3528 	xch	a,r5
   0DE7 6D                 3529 	xrl	a,r5
   0DE8 CD                 3530 	xch	a,r5
   0DE9 54 F8              3531 	anl	a,#0xF8
   0DEB CD                 3532 	xch	a,r5
   0DEC 6D                 3533 	xrl	a,r5
   0DED FE                 3534 	mov	r6,a
   0DEE 90 00 07           3535 	mov	dptr,#_axradio_txbuffer_cnt
   0DF1 E0                 3536 	movx	a,@dptr
   0DF2 FB                 3537 	mov	r3,a
   0DF3 A3                 3538 	inc	dptr
   0DF4 E0                 3539 	movx	a,@dptr
   0DF5 FC                 3540 	mov	r4,a
   0DF6 90 00 07           3541 	mov	dptr,#_axradio_txbuffer_cnt
   0DF9 EB                 3542 	mov	a,r3
   0DFA C3                 3543 	clr	c
   0DFB 9D                 3544 	subb	a,r5
   0DFC F0                 3545 	movx	@dptr,a
   0DFD EC                 3546 	mov	a,r4
   0DFE 9E                 3547 	subb	a,r6
   0DFF A3                 3548 	inc	dptr
   0E00 F0                 3549 	movx	@dptr,a
                           3550 ;	..\COMMON\easyax5043.c:512: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0E01 90 40 29           3551 	mov	dptr,#_AX5043_FIFODATA
   0E04 74 62              3552 	mov	a,#0x62
   0E06 F0                 3553 	movx	@dptr,a
                           3554 ;	..\COMMON\easyax5043.c:513: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0E07 90 4B 91           3555 	mov	dptr,#_axradio_phy_preamble_flags
   0E0A E4                 3556 	clr	a
   0E0B 93                 3557 	movc	a,@a+dptr
   0E0C 90 40 29           3558 	mov	dptr,#_AX5043_FIFODATA
   0E0F F0                 3559 	movx	@dptr,a
                           3560 ;	..\COMMON\easyax5043.c:514: AX5043_FIFODATA = cnt;
   0E10 90 40 29           3561 	mov	dptr,#_AX5043_FIFODATA
   0E13 EF                 3562 	mov	a,r7
   0E14 F0                 3563 	movx	@dptr,a
                           3564 ;	..\COMMON\easyax5043.c:515: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0E15 90 4B 90           3565 	mov	dptr,#_axradio_phy_preamble_byte
   0E18 E4                 3566 	clr	a
   0E19 93                 3567 	movc	a,@a+dptr
   0E1A FE                 3568 	mov	r6,a
   0E1B 90 40 29           3569 	mov	dptr,#_AX5043_FIFODATA
   0E1E F0                 3570 	movx	@dptr,a
                           3571 ;	..\COMMON\easyax5043.c:516: break;
   0E1F 02 0C 15           3572 	ljmp	00157$
   0E22                    3573 00133$:
                           3574 ;	..\COMMON\easyax5043.c:519: uint8_t byte = axradio_phy_preamble_byte;
   0E22 90 4B 90           3575 	mov	dptr,#_axradio_phy_preamble_byte
   0E25 E4                 3576 	clr	a
   0E26 93                 3577 	movc	a,@a+dptr
   0E27 FE                 3578 	mov	r6,a
                           3579 ;	..\COMMON\easyax5043.c:520: cnt = axradio_txbuffer_cnt;
   0E28 90 00 07           3580 	mov	dptr,#_axradio_txbuffer_cnt
   0E2B E0                 3581 	movx	a,@dptr
   0E2C FC                 3582 	mov	r4,a
   0E2D A3                 3583 	inc	dptr
   0E2E E0                 3584 	movx	a,@dptr
   0E2F 8C 07              3585 	mov	ar7,r4
                           3586 ;	..\COMMON\easyax5043.c:521: axradio_txbuffer_cnt = 0;
   0E31 90 00 07           3587 	mov	dptr,#_axradio_txbuffer_cnt
   0E34 E4                 3588 	clr	a
   0E35 F0                 3589 	movx	@dptr,a
   0E36 A3                 3590 	inc	dptr
   0E37 F0                 3591 	movx	@dptr,a
                           3592 ;	..\COMMON\easyax5043.c:522: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                           3593 ;	..\COMMON\easyax5043.c:523: AX5043_FIFODATA = 0x1C;
   0E38 90 40 29           3594 	mov	dptr,#_AX5043_FIFODATA
   0E3B 74 41              3595 	mov	a,#0x41
   0E3D F0                 3596 	movx	@dptr,a
   0E3E 74 1C              3597 	mov	a,#0x1C
   0E40 F0                 3598 	movx	@dptr,a
                           3599 ;	..\COMMON\easyax5043.c:524: if (AX5043_PKTADDRCFG & 0x80) {
   0E41 90 42 00           3600 	mov	dptr,#_AX5043_PKTADDRCFG
   0E44 E0                 3601 	movx	a,@dptr
   0E45 FD                 3602 	mov	r5,a
   0E46 30 E7 27           3603 	jnb	acc.7,00135$
                           3604 ;	..\COMMON\easyax5043.c:526: byte &= 0xFF << (8-cnt);
   0E49 74 08              3605 	mov	a,#0x08
   0E4B C3                 3606 	clr	c
   0E4C 9F                 3607 	subb	a,r7
   0E4D FD                 3608 	mov	r5,a
   0E4E 8D F0              3609 	mov	b,r5
   0E50 05 F0              3610 	inc	b
   0E52 74 FF              3611 	mov	a,#0xFF
   0E54 80 02              3612 	sjmp	00256$
   0E56                    3613 00254$:
   0E56 25 E0              3614 	add	a,acc
   0E58                    3615 00256$:
   0E58 D5 F0 FB           3616 	djnz	b,00254$
   0E5B FD                 3617 	mov	r5,a
   0E5C 52 06              3618 	anl	ar6,a
                           3619 ;	..\COMMON\easyax5043.c:527: byte |= 0x80 >> cnt;
   0E5E 8F F0              3620 	mov	b,r7
   0E60 05 F0              3621 	inc	b
   0E62 74 80              3622 	mov	a,#0x80
   0E64 80 02              3623 	sjmp	00258$
   0E66                    3624 00257$:
   0E66 C3                 3625 	clr	c
   0E67 13                 3626 	rrc	a
   0E68                    3627 00258$:
   0E68 D5 F0 FB           3628 	djnz	b,00257$
   0E6B FD                 3629 	mov	r5,a
   0E6C 42 06              3630 	orl	ar6,a
   0E6E 80 2C              3631 	sjmp	00136$
   0E70                    3632 00135$:
                           3633 ;	..\COMMON\easyax5043.c:530: byte &= 0xFF >> (8-cnt);
   0E70 8F 04              3634 	mov	ar4,r7
   0E72 7D 00              3635 	mov	r5,#0x00
   0E74 74 08              3636 	mov	a,#0x08
   0E76 C3                 3637 	clr	c
   0E77 9C                 3638 	subb	a,r4
   0E78 FC                 3639 	mov	r4,a
   0E79 E4                 3640 	clr	a
   0E7A 9D                 3641 	subb	a,r5
   0E7B FD                 3642 	mov	r5,a
   0E7C 8C F0              3643 	mov	b,r4
   0E7E 05 F0              3644 	inc	b
   0E80 74 FF              3645 	mov	a,#0xFF
   0E82 80 02              3646 	sjmp	00260$
   0E84                    3647 00259$:
   0E84 C3                 3648 	clr	c
   0E85 13                 3649 	rrc	a
   0E86                    3650 00260$:
   0E86 D5 F0 FB           3651 	djnz	b,00259$
   0E89 FC                 3652 	mov	r4,a
   0E8A 52 06              3653 	anl	ar6,a
                           3654 ;	..\COMMON\easyax5043.c:531: byte |= 0x01 << cnt;
   0E8C 8F F0              3655 	mov	b,r7
   0E8E 05 F0              3656 	inc	b
   0E90 74 01              3657 	mov	a,#0x01
   0E92 80 02              3658 	sjmp	00263$
   0E94                    3659 00261$:
   0E94 25 E0              3660 	add	a,acc
   0E96                    3661 00263$:
   0E96 D5 F0 FB           3662 	djnz	b,00261$
   0E99 FD                 3663 	mov	r5,a
   0E9A 42 06              3664 	orl	ar6,a
   0E9C                    3665 00136$:
                           3666 ;	..\COMMON\easyax5043.c:533: AX5043_FIFODATA = byte;
   0E9C 90 40 29           3667 	mov	dptr,#_AX5043_FIFODATA
   0E9F EE                 3668 	mov	a,r6
   0EA0 F0                 3669 	movx	@dptr,a
                           3670 ;	..\COMMON\easyax5043.c:535: break;
   0EA1 02 0C 15           3671 	ljmp	00157$
                           3672 ;	..\COMMON\easyax5043.c:537: case trxstate_tx_packet:
   0EA4                    3673 00137$:
                           3674 ;	..\COMMON\easyax5043.c:538: if (cnt < 11)
   0EA4 BF 0B 00           3675 	cjne	r7,#0x0B,00264$
   0EA7                    3676 00264$:
   0EA7 50 03              3677 	jnc	00265$
   0EA9 02 0F 4A           3678 	ljmp	00151$
   0EAC                    3679 00265$:
                           3680 ;	..\COMMON\easyax5043.c:541: uint8_t flags = 0;
   0EAC 7E 00              3681 	mov	r6,#0x00
                           3682 ;	..\COMMON\easyax5043.c:542: if (!axradio_txbuffer_cnt)
   0EAE 90 00 07           3683 	mov	dptr,#_axradio_txbuffer_cnt
   0EB1 E0                 3684 	movx	a,@dptr
   0EB2 FC                 3685 	mov	r4,a
   0EB3 A3                 3686 	inc	dptr
   0EB4 E0                 3687 	movx	a,@dptr
   0EB5 FD                 3688 	mov	r5,a
   0EB6 4C                 3689 	orl	a,r4
   0EB7 70 02              3690 	jnz	00141$
                           3691 ;	..\COMMON\easyax5043.c:543: flags |= 0x01; // flag byte: pkt_start
   0EB9 7E 01              3692 	mov	r6,#0x01
   0EBB                    3693 00141$:
                           3694 ;	..\COMMON\easyax5043.c:545: uint16_t len = axradio_txbuffer_len - axradio_txbuffer_cnt;
   0EBB 90 00 07           3695 	mov	dptr,#_axradio_txbuffer_cnt
   0EBE E0                 3696 	movx	a,@dptr
   0EBF FC                 3697 	mov	r4,a
   0EC0 A3                 3698 	inc	dptr
   0EC1 E0                 3699 	movx	a,@dptr
   0EC2 FD                 3700 	mov	r5,a
   0EC3 90 00 05           3701 	mov	dptr,#_axradio_txbuffer_len
   0EC6 E0                 3702 	movx	a,@dptr
   0EC7 FA                 3703 	mov	r2,a
   0EC8 A3                 3704 	inc	dptr
   0EC9 E0                 3705 	movx	a,@dptr
   0ECA FB                 3706 	mov	r3,a
   0ECB EA                 3707 	mov	a,r2
   0ECC C3                 3708 	clr	c
   0ECD 9C                 3709 	subb	a,r4
   0ECE FC                 3710 	mov	r4,a
   0ECF EB                 3711 	mov	a,r3
   0ED0 9D                 3712 	subb	a,r5
   0ED1 FD                 3713 	mov	r5,a
                           3714 ;	..\COMMON\easyax5043.c:546: cnt -= 3;
   0ED2 1F                 3715 	dec	r7
   0ED3 1F                 3716 	dec	r7
   0ED4 1F                 3717 	dec	r7
                           3718 ;	..\COMMON\easyax5043.c:547: if (cnt >= len) {
   0ED5 8F 02              3719 	mov	ar2,r7
   0ED7 7B 00              3720 	mov	r3,#0x00
   0ED9 C3                 3721 	clr	c
   0EDA EA                 3722 	mov	a,r2
   0EDB 9C                 3723 	subb	a,r4
   0EDC EB                 3724 	mov	a,r3
   0EDD 9D                 3725 	subb	a,r5
   0EDE 40 05              3726 	jc	00143$
                           3727 ;	..\COMMON\easyax5043.c:548: cnt = len;
   0EE0 8C 07              3728 	mov	ar7,r4
                           3729 ;	..\COMMON\easyax5043.c:549: flags |= 0x02; // flag byte: pkt_end
   0EE2 43 06 02           3730 	orl	ar6,#0x02
   0EE5                    3731 00143$:
                           3732 ;	..\COMMON\easyax5043.c:552: if (!cnt)
   0EE5 EF                 3733 	mov	a,r7
   0EE6 60 53              3734 	jz	00150$
                           3735 ;	..\COMMON\easyax5043.c:554: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                           3736 ;	..\COMMON\easyax5043.c:555: AX5043_FIFODATA = cnt + 1; // write FIFO chunk length byte (length includes the flag byte, thus the +1)
   0EE8 90 40 29           3737 	mov	dptr,#_AX5043_FIFODATA
   0EEB 74 E1              3738 	mov	a,#0xE1
   0EED F0                 3739 	movx	@dptr,a
   0EEE EF                 3740 	mov	a,r7
   0EEF 04                 3741 	inc	a
   0EF0 F0                 3742 	movx	@dptr,a
                           3743 ;	..\COMMON\easyax5043.c:556: AX5043_FIFODATA = flags;
   0EF1 90 40 29           3744 	mov	dptr,#_AX5043_FIFODATA
   0EF4 EE                 3745 	mov	a,r6
   0EF5 F0                 3746 	movx	@dptr,a
                           3747 ;	..\COMMON\easyax5043.c:557: ax5043_writefifo(&axradio_txbuffer[axradio_txbuffer_cnt], cnt);
   0EF6 90 00 07           3748 	mov	dptr,#_axradio_txbuffer_cnt
   0EF9 E0                 3749 	movx	a,@dptr
   0EFA FC                 3750 	mov	r4,a
   0EFB A3                 3751 	inc	dptr
   0EFC E0                 3752 	movx	a,@dptr
   0EFD FD                 3753 	mov	r5,a
   0EFE EC                 3754 	mov	a,r4
   0EFF 24 2A              3755 	add	a,#_axradio_txbuffer
   0F01 FC                 3756 	mov	r4,a
   0F02 ED                 3757 	mov	a,r5
   0F03 34 00              3758 	addc	a,#(_axradio_txbuffer >> 8)
   0F05 FD                 3759 	mov	r5,a
   0F06 7B 00              3760 	mov	r3,#0x00
   0F08 C0 07              3761 	push	ar7
   0F0A C0 06              3762 	push	ar6
   0F0C C0 07              3763 	push	ar7
   0F0E 8C 82              3764 	mov	dpl,r4
   0F10 8D 83              3765 	mov	dph,r5
   0F12 8B F0              3766 	mov	b,r3
   0F14 12 49 4F           3767 	lcall	_ax5043_writefifo
   0F17 15 81              3768 	dec	sp
   0F19 D0 06              3769 	pop	ar6
   0F1B D0 07              3770 	pop	ar7
                           3771 ;	..\COMMON\easyax5043.c:558: axradio_txbuffer_cnt += cnt;
   0F1D 7D 00              3772 	mov	r5,#0x00
   0F1F 90 00 07           3773 	mov	dptr,#_axradio_txbuffer_cnt
   0F22 E0                 3774 	movx	a,@dptr
   0F23 FB                 3775 	mov	r3,a
   0F24 A3                 3776 	inc	dptr
   0F25 E0                 3777 	movx	a,@dptr
   0F26 FC                 3778 	mov	r4,a
   0F27 90 00 07           3779 	mov	dptr,#_axradio_txbuffer_cnt
   0F2A EF                 3780 	mov	a,r7
   0F2B 2B                 3781 	add	a,r3
   0F2C F0                 3782 	movx	@dptr,a
   0F2D ED                 3783 	mov	a,r5
   0F2E 3C                 3784 	addc	a,r4
   0F2F A3                 3785 	inc	dptr
   0F30 F0                 3786 	movx	@dptr,a
                           3787 ;	..\COMMON\easyax5043.c:559: if (flags & 0x02)
   0F31 EE                 3788 	mov	a,r6
   0F32 20 E1 03           3789 	jb	acc.1,00269$
   0F35 02 0C 15           3790 	ljmp	00157$
   0F38                    3791 00269$:
                           3792 ;	..\COMMON\easyax5043.c:560: goto pktend;
                           3793 ;	..\COMMON\easyax5043.c:564: default:
   0F38 80 01              3794 	sjmp	00150$
   0F3A                    3795 00148$:
                           3796 ;	..\COMMON\easyax5043.c:565: return;
                           3797 ;	..\COMMON\easyax5043.c:568: pktend:
   0F3A 22                 3798 	ret
   0F3B                    3799 00150$:
                           3800 ;	..\COMMON\easyax5043.c:569: axradio_trxstate = trxstate_tx_waitdone;
   0F3B 75 0B 0D           3801 	mov	_axradio_trxstate,#0x0D
                           3802 ;	..\COMMON\easyax5043.c:570: AX5043_RADIOEVENTMASK0 = 0x01; // enable REVRDONE event
   0F3E 90 40 09           3803 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0F41 74 01              3804 	mov	a,#0x01
   0F43 F0                 3805 	movx	@dptr,a
                           3806 ;	..\COMMON\easyax5043.c:571: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   0F44 90 40 07           3807 	mov	dptr,#_AX5043_IRQMASK0
   0F47 74 40              3808 	mov	a,#0x40
   0F49 F0                 3809 	movx	@dptr,a
                           3810 ;	..\COMMON\easyax5043.c:572: fifocommit:
   0F4A                    3811 00151$:
                           3812 ;	..\COMMON\easyax5043.c:573: AX5043_FIFOSTAT = 4; // commit
   0F4A 90 40 28           3813 	mov	dptr,#_AX5043_FIFOSTAT
   0F4D 74 04              3814 	mov	a,#0x04
   0F4F F0                 3815 	movx	@dptr,a
   0F50 22                 3816 	ret
                           3817 ;------------------------------------------------------------
                           3818 ;Allocation info for local variables in function 'axradio_isr'
                           3819 ;------------------------------------------------------------
                           3820 ;evt                       Allocated to registers r7 
                           3821 ;------------------------------------------------------------
                           3822 ;	..\COMMON\easyax5043.c:577: void axradio_isr(void) __interrupt INT_RADIO
                           3823 ;	-----------------------------------------
                           3824 ;	 function axradio_isr
                           3825 ;	-----------------------------------------
   0F51                    3826 _axradio_isr:
   0F51 C0 21              3827 	push	bits
   0F53 C0 E0              3828 	push	acc
   0F55 C0 F0              3829 	push	b
   0F57 C0 82              3830 	push	dpl
   0F59 C0 83              3831 	push	dph
   0F5B C0 07              3832 	push	(0+7)
   0F5D C0 06              3833 	push	(0+6)
   0F5F C0 05              3834 	push	(0+5)
   0F61 C0 04              3835 	push	(0+4)
   0F63 C0 03              3836 	push	(0+3)
   0F65 C0 02              3837 	push	(0+2)
   0F67 C0 01              3838 	push	(0+1)
   0F69 C0 00              3839 	push	(0+0)
   0F6B C0 D0              3840 	push	psw
   0F6D 75 D0 00           3841 	mov	psw,#0x00
                           3842 ;	..\COMMON\easyax5043.c:587: switch (axradio_trxstate) {
   0F70 E5 0B              3843 	mov	a,_axradio_trxstate
   0F72 FF                 3844 	mov	r7,a
   0F73 24 EF              3845 	add	a,#0xff - 0x10
   0F75 50 03              3846 	jnc	00222$
   0F77 02 0F AC           3847 	ljmp	00101$
   0F7A                    3848 00222$:
   0F7A EF                 3849 	mov	a,r7
   0F7B F5 F0              3850 	mov	b,a
   0F7D 24 0A              3851 	add	a,#(00223$-3-.)
   0F7F 83                 3852 	movc	a,@a+pc
   0F80 C0 E0              3853 	push	acc
   0F82 E5 F0              3854 	mov	a,b
   0F84 24 14              3855 	add	a,#(00224$-3-.)
   0F86 83                 3856 	movc	a,@a+pc
   0F87 C0 E0              3857 	push	acc
   0F89 22                 3858 	ret
   0F8A                    3859 00223$:
   0F8A AC                 3860 	.db	00101$
   0F8B 08                 3861 	.db	00162$
   0F8C CE                 3862 	.db	00158$
   0F8D B8                 3863 	.db	00102$
   0F8E AC                 3864 	.db	00101$
   0F8F C3                 3865 	.db	00103$
   0F90 AC                 3866 	.db	00101$
   0F91 CE                 3867 	.db	00104$
   0F92 AC                 3868 	.db	00101$
   0F93 D9                 3869 	.db	00105$
   0F94 6A                 3870 	.db	00114$
   0F95 6A                 3871 	.db	00115$
   0F96 6A                 3872 	.db	00116$
   0F97 70                 3873 	.db	00117$
   0F98 A5                 3874 	.db	00144$
   0F99 EA                 3875 	.db	00145$
   0F9A 11                 3876 	.db	00148$
   0F9B                    3877 00224$:
   0F9B 0F                 3878 	.db	00101$>>8
   0F9C 13                 3879 	.db	00162$>>8
   0F9D 12                 3880 	.db	00158$>>8
   0F9E 0F                 3881 	.db	00102$>>8
   0F9F 0F                 3882 	.db	00101$>>8
   0FA0 0F                 3883 	.db	00103$>>8
   0FA1 0F                 3884 	.db	00101$>>8
   0FA2 0F                 3885 	.db	00104$>>8
   0FA3 0F                 3886 	.db	00101$>>8
   0FA4 0F                 3887 	.db	00105$>>8
   0FA5 10                 3888 	.db	00114$>>8
   0FA6 10                 3889 	.db	00115$>>8
   0FA7 10                 3890 	.db	00116$>>8
   0FA8 10                 3891 	.db	00117$>>8
   0FA9 11                 3892 	.db	00144$>>8
   0FAA 11                 3893 	.db	00145$>>8
   0FAB 12                 3894 	.db	00148$>>8
                           3895 ;	..\COMMON\easyax5043.c:588: default:
   0FAC                    3896 00101$:
                           3897 ;	..\COMMON\easyax5043.c:589: AX5043_IRQMASK1 = 0x00;
   0FAC 90 40 06           3898 	mov	dptr,#_AX5043_IRQMASK1
                           3899 ;	..\COMMON\easyax5043.c:590: AX5043_IRQMASK0 = 0x00;
   0FAF E4                 3900 	clr	a
   0FB0 F0                 3901 	movx	@dptr,a
   0FB1 90 40 07           3902 	mov	dptr,#_AX5043_IRQMASK0
   0FB4 F0                 3903 	movx	@dptr,a
                           3904 ;	..\COMMON\easyax5043.c:591: break;
   0FB5 02 13 0B           3905 	ljmp	00164$
                           3906 ;	..\COMMON\easyax5043.c:593: case trxstate_wait_xtal:
   0FB8                    3907 00102$:
                           3908 ;	..\COMMON\easyax5043.c:594: AX5043_IRQMASK1 = 0x00; // otherwise crystal ready will fire all over again
   0FB8 90 40 06           3909 	mov	dptr,#_AX5043_IRQMASK1
   0FBB E4                 3910 	clr	a
   0FBC F0                 3911 	movx	@dptr,a
                           3912 ;	..\COMMON\easyax5043.c:595: axradio_trxstate = trxstate_xtal_ready;
   0FBD 75 0B 04           3913 	mov	_axradio_trxstate,#0x04
                           3914 ;	..\COMMON\easyax5043.c:596: break;
   0FC0 02 13 0B           3915 	ljmp	00164$
                           3916 ;	..\COMMON\easyax5043.c:598: case trxstate_pll_ranging:
   0FC3                    3917 00103$:
                           3918 ;	..\COMMON\easyax5043.c:599: AX5043_IRQMASK1 = 0x00; // otherwise autoranging done will fire all over again
   0FC3 90 40 06           3919 	mov	dptr,#_AX5043_IRQMASK1
   0FC6 E4                 3920 	clr	a
   0FC7 F0                 3921 	movx	@dptr,a
                           3922 ;	..\COMMON\easyax5043.c:600: axradio_trxstate = trxstate_pll_ranging_done;
   0FC8 75 0B 06           3923 	mov	_axradio_trxstate,#0x06
                           3924 ;	..\COMMON\easyax5043.c:601: break;
   0FCB 02 13 0B           3925 	ljmp	00164$
                           3926 ;	..\COMMON\easyax5043.c:603: case trxstate_pll_settling:
   0FCE                    3927 00104$:
                           3928 ;	..\COMMON\easyax5043.c:604: AX5043_RADIOEVENTMASK0 = 0x00;
   0FCE 90 40 09           3929 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0FD1 E4                 3930 	clr	a
   0FD2 F0                 3931 	movx	@dptr,a
                           3932 ;	..\COMMON\easyax5043.c:605: axradio_trxstate = trxstate_pll_settled;
   0FD3 75 0B 08           3933 	mov	_axradio_trxstate,#0x08
                           3934 ;	..\COMMON\easyax5043.c:606: break;
   0FD6 02 13 0B           3935 	ljmp	00164$
                           3936 ;	..\COMMON\easyax5043.c:608: case trxstate_tx_xtalwait:
   0FD9                    3937 00105$:
                           3938 ;	..\COMMON\easyax5043.c:609: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   0FD9 90 40 0F           3939 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   0FDC E0                 3940 	movx	a,@dptr
                           3941 ;	..\COMMON\easyax5043.c:610: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   0FDD 90 40 28           3942 	mov	dptr,#_AX5043_FIFOSTAT
   0FE0 74 03              3943 	mov	a,#0x03
   0FE2 F0                 3944 	movx	@dptr,a
                           3945 ;	..\COMMON\easyax5043.c:611: AX5043_IRQMASK1 = 0x00;
   0FE3 90 40 06           3946 	mov	dptr,#_AX5043_IRQMASK1
   0FE6 E4                 3947 	clr	a
   0FE7 F0                 3948 	movx	@dptr,a
                           3949 ;	..\COMMON\easyax5043.c:612: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   0FE8 90 40 07           3950 	mov	dptr,#_AX5043_IRQMASK0
   0FEB 74 08              3951 	mov	a,#0x08
   0FED F0                 3952 	movx	@dptr,a
                           3953 ;	..\COMMON\easyax5043.c:613: axradio_trxstate = trxstate_tx_longpreamble;
   0FEE 75 0B 0A           3954 	mov	_axradio_trxstate,#0x0A
                           3955 ;	..\COMMON\easyax5043.c:615: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   0FF1 90 40 10           3956 	mov	dptr,#_AX5043_MODULATION
   0FF4 E0                 3957 	movx	a,@dptr
   0FF5 FF                 3958 	mov	r7,a
   0FF6 53 07 0F           3959 	anl	ar7,#0x0F
   0FF9 BF 09 0F           3960 	cjne	r7,#0x09,00107$
                           3961 ;	..\COMMON\easyax5043.c:616: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                           3962 ;	..\COMMON\easyax5043.c:617: AX5043_FIFODATA = 2;  // length (including flags)
                           3963 ;	..\COMMON\easyax5043.c:618: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                           3964 ;	..\COMMON\easyax5043.c:619: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   0FFC 90 40 29           3965 	mov	dptr,#_AX5043_FIFODATA
   0FFF 74 E1              3966 	mov	a,#0xE1
   1001 F0                 3967 	movx	@dptr,a
   1002 74 02              3968 	mov	a,#0x02
   1004 F0                 3969 	movx	@dptr,a
   1005 74 01              3970 	mov	a,#0x01
   1007 F0                 3971 	movx	@dptr,a
   1008 74 11              3972 	mov	a,#0x11
   100A F0                 3973 	movx	@dptr,a
   100B                    3974 00107$:
                           3975 ;	..\COMMON\easyax5043.c:626: transmit_isr();
   100B 12 0C 15           3976 	lcall	_transmit_isr
                           3977 ;	..\COMMON\easyax5043.c:627: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   100E 90 40 02           3978 	mov	dptr,#_AX5043_PWRMODE
   1011 74 0D              3979 	mov	a,#0x0D
   1013 F0                 3980 	movx	@dptr,a
                           3981 ;	..\COMMON\easyax5043.c:628: update_timeanchor();
   1014 12 08 37           3982 	lcall	_update_timeanchor
                           3983 ;	..\COMMON\easyax5043.c:629: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1017 90 02 6B           3984 	mov	dptr,#_axradio_cb_transmitstart
   101A 12 48 E0           3985 	lcall	_wtimer_remove_callback
                           3986 ;	..\COMMON\easyax5043.c:630: switch (axradio_mode) {
   101D AF 0A              3987 	mov	r7,_axradio_mode
   101F BF 12 02           3988 	cjne	r7,#0x12,00227$
   1022 80 03              3989 	sjmp	00109$
   1024                    3990 00227$:
   1024 BF 13 19           3991 	cjne	r7,#0x13,00112$
                           3992 ;	..\COMMON\easyax5043.c:632: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   1027                    3993 00109$:
                           3994 ;	..\COMMON\easyax5043.c:633: if (axradio_ack_count != axradio_framing_ack_retransmissions) {
   1027 90 00 0E           3995 	mov	dptr,#_axradio_ack_count
   102A E0                 3996 	movx	a,@dptr
   102B FF                 3997 	mov	r7,a
   102C 90 4B AB           3998 	mov	dptr,#_axradio_framing_ack_retransmissions
   102F E4                 3999 	clr	a
   1030 93                 4000 	movc	a,@a+dptr
   1031 FE                 4001 	mov	r6,a
   1032 EF                 4002 	mov	a,r7
   1033 B5 06 02           4003 	cjne	a,ar6,00230$
   1036 80 08              4004 	sjmp	00112$
   1038                    4005 00230$:
                           4006 ;	..\COMMON\easyax5043.c:634: axradio_cb_transmitstart.st.error = AXRADIO_ERR_RETRANSMISSION;
   1038 90 02 70           4007 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   103B 74 08              4008 	mov	a,#0x08
   103D F0                 4009 	movx	@dptr,a
                           4010 ;	..\COMMON\easyax5043.c:635: break;
                           4011 ;	..\COMMON\easyax5043.c:638: default:
   103E 80 05              4012 	sjmp	00113$
   1040                    4013 00112$:
                           4014 ;	..\COMMON\easyax5043.c:639: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1040 90 02 70           4015 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1043 E4                 4016 	clr	a
   1044 F0                 4017 	movx	@dptr,a
                           4018 ;	..\COMMON\easyax5043.c:641: }
   1045                    4019 00113$:
                           4020 ;	..\COMMON\easyax5043.c:642: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1045 90 00 1A           4021 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1048 E0                 4022 	movx	a,@dptr
   1049 FC                 4023 	mov	r4,a
   104A A3                 4024 	inc	dptr
   104B E0                 4025 	movx	a,@dptr
   104C FD                 4026 	mov	r5,a
   104D A3                 4027 	inc	dptr
   104E E0                 4028 	movx	a,@dptr
   104F FE                 4029 	mov	r6,a
   1050 A3                 4030 	inc	dptr
   1051 E0                 4031 	movx	a,@dptr
   1052 FF                 4032 	mov	r7,a
   1053 90 02 71           4033 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1056 EC                 4034 	mov	a,r4
   1057 F0                 4035 	movx	@dptr,a
   1058 A3                 4036 	inc	dptr
   1059 ED                 4037 	mov	a,r5
   105A F0                 4038 	movx	@dptr,a
   105B A3                 4039 	inc	dptr
   105C EE                 4040 	mov	a,r6
   105D F0                 4041 	movx	@dptr,a
   105E A3                 4042 	inc	dptr
   105F EF                 4043 	mov	a,r7
   1060 F0                 4044 	movx	@dptr,a
                           4045 ;	..\COMMON\easyax5043.c:643: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1061 90 02 6B           4046 	mov	dptr,#_axradio_cb_transmitstart
   1064 12 3E 7B           4047 	lcall	_wtimer_add_callback
                           4048 ;	..\COMMON\easyax5043.c:644: break;
   1067 02 13 0B           4049 	ljmp	00164$
                           4050 ;	..\COMMON\easyax5043.c:646: case trxstate_tx_longpreamble:
   106A                    4051 00114$:
                           4052 ;	..\COMMON\easyax5043.c:647: case trxstate_tx_shortpreamble:
   106A                    4053 00115$:
                           4054 ;	..\COMMON\easyax5043.c:648: case trxstate_tx_packet:
   106A                    4055 00116$:
                           4056 ;	..\COMMON\easyax5043.c:649: transmit_isr();
   106A 12 0C 15           4057 	lcall	_transmit_isr
                           4058 ;	..\COMMON\easyax5043.c:650: break;
   106D 02 13 0B           4059 	ljmp	00164$
                           4060 ;	..\COMMON\easyax5043.c:652: case trxstate_tx_waitdone:
   1070                    4061 00117$:
                           4062 ;	..\COMMON\easyax5043.c:653: AX5043_RADIOEVENTREQ0;
   1070 90 40 0F           4063 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1073 E0                 4064 	movx	a,@dptr
                           4065 ;	..\COMMON\easyax5043.c:654: if (AX5043_RADIOSTATE != 0)
   1074 90 40 1C           4066 	mov	dptr,#_AX5043_RADIOSTATE
   1077 E0                 4067 	movx	a,@dptr
   1078 FF                 4068 	mov	r7,a
   1079 60 03              4069 	jz	00231$
   107B 02 13 0B           4070 	ljmp	00164$
   107E                    4071 00231$:
                           4072 ;	..\COMMON\easyax5043.c:656: AX5043_RADIOEVENTMASK0 = 0x00;
   107E 90 40 09           4073 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1081 E4                 4074 	clr	a
   1082 F0                 4075 	movx	@dptr,a
                           4076 ;	..\COMMON\easyax5043.c:657: switch (axradio_mode) {
   1083 AF 0A              4077 	mov	r7,_axradio_mode
   1085 BF 12 02           4078 	cjne	r7,#0x12,00232$
   1088 80 6A              4079 	sjmp	00131$
   108A                    4080 00232$:
   108A BF 13 02           4081 	cjne	r7,#0x13,00233$
   108D 80 65              4082 	sjmp	00131$
   108F                    4083 00233$:
   108F BF 18 02           4084 	cjne	r7,#0x18,00234$
   1092 80 1D              4085 	sjmp	00120$
   1094                    4086 00234$:
   1094 BF 19 02           4087 	cjne	r7,#0x19,00235$
   1097 80 36              4088 	sjmp	00125$
   1099                    4089 00235$:
   1099 BF 1A 02           4090 	cjne	r7,#0x1A,00236$
   109C 80 1C              4091 	sjmp	00121$
   109E                    4092 00236$:
   109E BF 1B 02           4093 	cjne	r7,#0x1B,00237$
   10A1 80 3C              4094 	sjmp	00128$
   10A3                    4095 00237$:
   10A3 BF 20 03           4096 	cjne	r7,#0x20,00238$
   10A6 02 11 28           4097 	ljmp	00132$
   10A9                    4098 00238$:
   10A9 BF 21 02           4099 	cjne	r7,#0x21,00239$
   10AC 80 39              4100 	sjmp	00129$
   10AE                    4101 00239$:
   10AE 02 11 35           4102 	ljmp	00133$
                           4103 ;	..\COMMON\easyax5043.c:658: case AXRADIO_MODE_ASYNC_RECEIVE:
   10B1                    4104 00120$:
                           4105 ;	..\COMMON\easyax5043.c:659: ax5043_init_registers_rx();
   10B1 12 09 02           4106 	lcall	_ax5043_init_registers_rx
                           4107 ;	..\COMMON\easyax5043.c:660: ax5043_receiver_on_continuous();
   10B4 12 13 28           4108 	lcall	_ax5043_receiver_on_continuous
                           4109 ;	..\COMMON\easyax5043.c:661: break;
   10B7 02 11 38           4110 	ljmp	00134$
                           4111 ;	..\COMMON\easyax5043.c:663: case AXRADIO_MODE_ACK_RECEIVE:
   10BA                    4112 00121$:
                           4113 ;	..\COMMON\easyax5043.c:664: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10BA 90 02 37           4114 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10BD E0                 4115 	movx	a,@dptr
   10BE FF                 4116 	mov	r7,a
   10BF BF F0 08           4117 	cjne	r7,#0xF0,00124$
                           4118 ;	..\COMMON\easyax5043.c:665: ax5043_init_registers_rx();
   10C2 12 09 02           4119 	lcall	_ax5043_init_registers_rx
                           4120 ;	..\COMMON\easyax5043.c:666: ax5043_receiver_on_continuous();
   10C5 12 13 28           4121 	lcall	_ax5043_receiver_on_continuous
                           4122 ;	..\COMMON\easyax5043.c:667: break;
                           4123 ;	..\COMMON\easyax5043.c:669: offxtal:
   10C8 80 6E              4124 	sjmp	00134$
   10CA                    4125 00124$:
                           4126 ;	..\COMMON\easyax5043.c:670: ax5043_off_xtal();
   10CA 12 14 76           4127 	lcall	_ax5043_off_xtal
                           4128 ;	..\COMMON\easyax5043.c:671: break;
                           4129 ;	..\COMMON\easyax5043.c:673: case AXRADIO_MODE_WOR_RECEIVE:
   10CD 80 69              4130 	sjmp	00134$
   10CF                    4131 00125$:
                           4132 ;	..\COMMON\easyax5043.c:674: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10CF 90 02 37           4133 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10D2 E0                 4134 	movx	a,@dptr
   10D3 FF                 4135 	mov	r7,a
   10D4 BF F0 F3           4136 	cjne	r7,#0xF0,00124$
                           4137 ;	..\COMMON\easyax5043.c:675: ax5043_init_registers_rx();
   10D7 12 09 02           4138 	lcall	_ax5043_init_registers_rx
                           4139 ;	..\COMMON\easyax5043.c:676: ax5043_receiver_on_wor();
   10DA 12 13 C2           4140 	lcall	_ax5043_receiver_on_wor
                           4141 ;	..\COMMON\easyax5043.c:677: break;
                           4142 ;	..\COMMON\easyax5043.c:681: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   10DD 80 59              4143 	sjmp	00134$
   10DF                    4144 00128$:
                           4145 ;	..\COMMON\easyax5043.c:682: ax5043_init_registers_rx();
   10DF 12 09 02           4146 	lcall	_ax5043_init_registers_rx
                           4147 ;	..\COMMON\easyax5043.c:683: ax5043_receiver_on_wor();
   10E2 12 13 C2           4148 	lcall	_ax5043_receiver_on_wor
                           4149 ;	..\COMMON\easyax5043.c:684: break;
                           4150 ;	..\COMMON\easyax5043.c:686: case AXRADIO_MODE_SYNC_ACK_MASTER:
   10E5 80 51              4151 	sjmp	00134$
   10E7                    4152 00129$:
                           4153 ;	..\COMMON\easyax5043.c:687: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   10E7 90 4B AD           4154 	mov	dptr,#_axradio_framing_minpayloadlen
   10EA E4                 4155 	clr	a
   10EB 93                 4156 	movc	a,@a+dptr
   10EC FF                 4157 	mov	r7,a
   10ED 90 00 05           4158 	mov	dptr,#_axradio_txbuffer_len
   10F0 F0                 4159 	movx	@dptr,a
   10F1 A3                 4160 	inc	dptr
   10F2 E4                 4161 	clr	a
   10F3 F0                 4162 	movx	@dptr,a
                           4163 ;	..\COMMON\easyax5043.c:691: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   10F4                    4164 00131$:
                           4165 ;	..\COMMON\easyax5043.c:692: ax5043_init_registers_rx();
   10F4 12 09 02           4166 	lcall	_ax5043_init_registers_rx
                           4167 ;	..\COMMON\easyax5043.c:693: ax5043_receiver_on_continuous();
   10F7 12 13 28           4168 	lcall	_ax5043_receiver_on_continuous
                           4169 ;	..\COMMON\easyax5043.c:694: wtimer_remove(&axradio_timer);
   10FA 90 02 89           4170 	mov	dptr,#_axradio_timer
   10FD 12 46 8F           4171 	lcall	_wtimer_remove
                           4172 ;	..\COMMON\easyax5043.c:695: axradio_timer.time = axradio_framing_ack_timeout;
   1100 90 4B A3           4173 	mov	dptr,#_axradio_framing_ack_timeout
   1103 E4                 4174 	clr	a
   1104 93                 4175 	movc	a,@a+dptr
   1105 FC                 4176 	mov	r4,a
   1106 74 01              4177 	mov	a,#0x01
   1108 93                 4178 	movc	a,@a+dptr
   1109 FD                 4179 	mov	r5,a
   110A 74 02              4180 	mov	a,#0x02
   110C 93                 4181 	movc	a,@a+dptr
   110D FE                 4182 	mov	r6,a
   110E 74 03              4183 	mov	a,#0x03
   1110 93                 4184 	movc	a,@a+dptr
   1111 FF                 4185 	mov	r7,a
   1112 90 02 8D           4186 	mov	dptr,#(_axradio_timer + 0x0004)
   1115 EC                 4187 	mov	a,r4
   1116 F0                 4188 	movx	@dptr,a
   1117 A3                 4189 	inc	dptr
   1118 ED                 4190 	mov	a,r5
   1119 F0                 4191 	movx	@dptr,a
   111A A3                 4192 	inc	dptr
   111B EE                 4193 	mov	a,r6
   111C F0                 4194 	movx	@dptr,a
   111D A3                 4195 	inc	dptr
   111E EF                 4196 	mov	a,r7
   111F F0                 4197 	movx	@dptr,a
                           4198 ;	..\COMMON\easyax5043.c:696: wtimer0_addrelative(&axradio_timer);
   1120 90 02 89           4199 	mov	dptr,#_axradio_timer
   1123 12 3E 95           4200 	lcall	_wtimer0_addrelative
                           4201 ;	..\COMMON\easyax5043.c:697: break;
                           4202 ;	..\COMMON\easyax5043.c:699: case AXRADIO_MODE_SYNC_MASTER:
   1126 80 10              4203 	sjmp	00134$
   1128                    4204 00132$:
                           4205 ;	..\COMMON\easyax5043.c:700: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   1128 90 4B AD           4206 	mov	dptr,#_axradio_framing_minpayloadlen
   112B E4                 4207 	clr	a
   112C 93                 4208 	movc	a,@a+dptr
   112D FF                 4209 	mov	r7,a
   112E 90 00 05           4210 	mov	dptr,#_axradio_txbuffer_len
   1131 F0                 4211 	movx	@dptr,a
   1132 A3                 4212 	inc	dptr
   1133 E4                 4213 	clr	a
   1134 F0                 4214 	movx	@dptr,a
                           4215 ;	..\COMMON\easyax5043.c:703: default:
   1135                    4216 00133$:
                           4217 ;	..\COMMON\easyax5043.c:704: ax5043_off();
   1135 12 14 6D           4218 	lcall	_ax5043_off
                           4219 ;	..\COMMON\easyax5043.c:706: }
   1138                    4220 00134$:
                           4221 ;	..\COMMON\easyax5043.c:707: if (axradio_mode != AXRADIO_MODE_SYNC_MASTER &&
   1138 74 20              4222 	mov	a,#0x20
   113A B5 0A 02           4223 	cjne	a,_axradio_mode,00244$
   113D 80 1A              4224 	sjmp	00136$
   113F                    4225 00244$:
                           4226 ;	..\COMMON\easyax5043.c:708: axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER &&
   113F 74 21              4227 	mov	a,#0x21
   1141 B5 0A 02           4228 	cjne	a,_axradio_mode,00245$
   1144 80 13              4229 	sjmp	00136$
   1146                    4230 00245$:
                           4231 ;	..\COMMON\easyax5043.c:709: axradio_mode != AXRADIO_MODE_SYNC_SLAVE &&
   1146 74 22              4232 	mov	a,#0x22
   1148 B5 0A 02           4233 	cjne	a,_axradio_mode,00246$
   114B 80 0C              4234 	sjmp	00136$
   114D                    4235 00246$:
                           4236 ;	..\COMMON\easyax5043.c:710: axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   114D 74 23              4237 	mov	a,#0x23
   114F B5 0A 02           4238 	cjne	a,_axradio_mode,00247$
   1152 80 05              4239 	sjmp	00136$
   1154                    4240 00247$:
                           4241 ;	..\COMMON\easyax5043.c:711: axradio_syncstate = syncstate_off;
   1154 90 00 04           4242 	mov	dptr,#_axradio_syncstate
   1157 E4                 4243 	clr	a
   1158 F0                 4244 	movx	@dptr,a
   1159                    4245 00136$:
                           4246 ;	..\COMMON\easyax5043.c:712: update_timeanchor();
   1159 12 08 37           4247 	lcall	_update_timeanchor
                           4248 ;	..\COMMON\easyax5043.c:713: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   115C 90 02 75           4249 	mov	dptr,#_axradio_cb_transmitend
   115F 12 48 E0           4250 	lcall	_wtimer_remove_callback
                           4251 ;	..\COMMON\easyax5043.c:714: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   1162 90 02 7A           4252 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1165 E4                 4253 	clr	a
   1166 F0                 4254 	movx	@dptr,a
                           4255 ;	..\COMMON\easyax5043.c:715: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   1167 74 12              4256 	mov	a,#0x12
   1169 B5 0A 02           4257 	cjne	a,_axradio_mode,00248$
   116C 80 0C              4258 	sjmp	00140$
   116E                    4259 00248$:
                           4260 ;	..\COMMON\easyax5043.c:716: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   116E 74 13              4261 	mov	a,#0x13
   1170 B5 0A 02           4262 	cjne	a,_axradio_mode,00249$
   1173 80 05              4263 	sjmp	00140$
   1175                    4264 00249$:
                           4265 ;	..\COMMON\easyax5043.c:717: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   1175 74 21              4266 	mov	a,#0x21
   1177 B5 0A 06           4267 	cjne	a,_axradio_mode,00141$
   117A                    4268 00140$:
                           4269 ;	..\COMMON\easyax5043.c:718: axradio_cb_transmitend.st.error = AXRADIO_ERR_BUSY;
   117A 90 02 7A           4270 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   117D 74 02              4271 	mov	a,#0x02
   117F F0                 4272 	movx	@dptr,a
   1180                    4273 00141$:
                           4274 ;	..\COMMON\easyax5043.c:719: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1180 90 00 1A           4275 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1183 E0                 4276 	movx	a,@dptr
   1184 FC                 4277 	mov	r4,a
   1185 A3                 4278 	inc	dptr
   1186 E0                 4279 	movx	a,@dptr
   1187 FD                 4280 	mov	r5,a
   1188 A3                 4281 	inc	dptr
   1189 E0                 4282 	movx	a,@dptr
   118A FE                 4283 	mov	r6,a
   118B A3                 4284 	inc	dptr
   118C E0                 4285 	movx	a,@dptr
   118D FF                 4286 	mov	r7,a
   118E 90 02 7B           4287 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1191 EC                 4288 	mov	a,r4
   1192 F0                 4289 	movx	@dptr,a
   1193 A3                 4290 	inc	dptr
   1194 ED                 4291 	mov	a,r5
   1195 F0                 4292 	movx	@dptr,a
   1196 A3                 4293 	inc	dptr
   1197 EE                 4294 	mov	a,r6
   1198 F0                 4295 	movx	@dptr,a
   1199 A3                 4296 	inc	dptr
   119A EF                 4297 	mov	a,r7
   119B F0                 4298 	movx	@dptr,a
                           4299 ;	..\COMMON\easyax5043.c:720: wtimer_add_callback(&axradio_cb_transmitend.cb);
   119C 90 02 75           4300 	mov	dptr,#_axradio_cb_transmitend
   119F 12 3E 7B           4301 	lcall	_wtimer_add_callback
                           4302 ;	..\COMMON\easyax5043.c:721: break;
   11A2 02 13 0B           4303 	ljmp	00164$
                           4304 ;	..\COMMON\easyax5043.c:724: case trxstate_txcw_xtalwait:
   11A5                    4305 00144$:
                           4306 ;	..\COMMON\easyax5043.c:725: AX5043_IRQMASK1 = 0x00;
   11A5 90 40 06           4307 	mov	dptr,#_AX5043_IRQMASK1
                           4308 ;	..\COMMON\easyax5043.c:726: AX5043_IRQMASK0 = 0x00;
   11A8 E4                 4309 	clr	a
   11A9 F0                 4310 	movx	@dptr,a
   11AA 90 40 07           4311 	mov	dptr,#_AX5043_IRQMASK0
   11AD F0                 4312 	movx	@dptr,a
                           4313 ;	..\COMMON\easyax5043.c:727: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   11AE 90 40 02           4314 	mov	dptr,#_AX5043_PWRMODE
   11B1 74 0D              4315 	mov	a,#0x0D
   11B3 F0                 4316 	movx	@dptr,a
                           4317 ;	..\COMMON\easyax5043.c:728: axradio_trxstate = trxstate_off;
   11B4 75 0B 00           4318 	mov	_axradio_trxstate,#0x00
                           4319 ;	..\COMMON\easyax5043.c:729: update_timeanchor();
   11B7 12 08 37           4320 	lcall	_update_timeanchor
                           4321 ;	..\COMMON\easyax5043.c:730: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   11BA 90 02 6B           4322 	mov	dptr,#_axradio_cb_transmitstart
   11BD 12 48 E0           4323 	lcall	_wtimer_remove_callback
                           4324 ;	..\COMMON\easyax5043.c:731: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   11C0 90 02 70           4325 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   11C3 E4                 4326 	clr	a
   11C4 F0                 4327 	movx	@dptr,a
                           4328 ;	..\COMMON\easyax5043.c:732: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   11C5 90 00 1A           4329 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   11C8 E0                 4330 	movx	a,@dptr
   11C9 FC                 4331 	mov	r4,a
   11CA A3                 4332 	inc	dptr
   11CB E0                 4333 	movx	a,@dptr
   11CC FD                 4334 	mov	r5,a
   11CD A3                 4335 	inc	dptr
   11CE E0                 4336 	movx	a,@dptr
   11CF FE                 4337 	mov	r6,a
   11D0 A3                 4338 	inc	dptr
   11D1 E0                 4339 	movx	a,@dptr
   11D2 FF                 4340 	mov	r7,a
   11D3 90 02 71           4341 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   11D6 EC                 4342 	mov	a,r4
   11D7 F0                 4343 	movx	@dptr,a
   11D8 A3                 4344 	inc	dptr
   11D9 ED                 4345 	mov	a,r5
   11DA F0                 4346 	movx	@dptr,a
   11DB A3                 4347 	inc	dptr
   11DC EE                 4348 	mov	a,r6
   11DD F0                 4349 	movx	@dptr,a
   11DE A3                 4350 	inc	dptr
   11DF EF                 4351 	mov	a,r7
   11E0 F0                 4352 	movx	@dptr,a
                           4353 ;	..\COMMON\easyax5043.c:733: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   11E1 90 02 6B           4354 	mov	dptr,#_axradio_cb_transmitstart
   11E4 12 3E 7B           4355 	lcall	_wtimer_add_callback
                           4356 ;	..\COMMON\easyax5043.c:734: break;
   11E7 02 13 0B           4357 	ljmp	00164$
                           4358 ;	..\COMMON\easyax5043.c:736: case trxstate_txstream_xtalwait:
   11EA                    4359 00145$:
                           4360 ;	..\COMMON\easyax5043.c:737: if (AX5043_IRQREQUEST1 & 0x01) {
   11EA 90 40 0C           4361 	mov	dptr,#_AX5043_IRQREQUEST1
   11ED E0                 4362 	movx	a,@dptr
   11EE FF                 4363 	mov	r7,a
   11EF 20 E0 03           4364 	jb	acc.0,00252$
   11F2 02 12 87           4365 	ljmp	00155$
   11F5                    4366 00252$:
                           4367 ;	..\COMMON\easyax5043.c:738: AX5043_RADIOEVENTMASK0 = 0x03; // enable PLL settled and done event
   11F5 90 40 09           4368 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   11F8 74 03              4369 	mov	a,#0x03
   11FA F0                 4370 	movx	@dptr,a
                           4371 ;	..\COMMON\easyax5043.c:739: AX5043_IRQMASK1 = 0x00;
   11FB 90 40 06           4372 	mov	dptr,#_AX5043_IRQMASK1
   11FE E4                 4373 	clr	a
   11FF F0                 4374 	movx	@dptr,a
                           4375 ;	..\COMMON\easyax5043.c:740: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   1200 90 40 07           4376 	mov	dptr,#_AX5043_IRQMASK0
   1203 74 40              4377 	mov	a,#0x40
   1205 F0                 4378 	movx	@dptr,a
                           4379 ;	..\COMMON\easyax5043.c:741: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1206 90 40 02           4380 	mov	dptr,#_AX5043_PWRMODE
   1209 74 0D              4381 	mov	a,#0x0D
   120B F0                 4382 	movx	@dptr,a
                           4383 ;	..\COMMON\easyax5043.c:742: axradio_trxstate = trxstate_txstream;
   120C 75 0B 10           4384 	mov	_axradio_trxstate,#0x10
                           4385 ;	..\COMMON\easyax5043.c:744: goto txstreamdatacb;
                           4386 ;	..\COMMON\easyax5043.c:746: case trxstate_txstream:
   120F 80 76              4387 	sjmp	00155$
   1211                    4388 00148$:
                           4389 ;	..\COMMON\easyax5043.c:748: uint8_t __autodata evt = AX5043_RADIOEVENTREQ0;
   1211 90 40 0F           4390 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1214 E0                 4391 	movx	a,@dptr
                           4392 ;	..\COMMON\easyax5043.c:749: if (evt & 0x03)
   1215 FF                 4393 	mov	r7,a
   1216 54 03              4394 	anl	a,#0x03
   1218 60 07              4395 	jz	00150$
                           4396 ;	..\COMMON\easyax5043.c:750: update_timeanchor();
   121A C0 07              4397 	push	ar7
   121C 12 08 37           4398 	lcall	_update_timeanchor
   121F D0 07              4399 	pop	ar7
   1221                    4400 00150$:
                           4401 ;	..\COMMON\easyax5043.c:751: if (evt & 0x01) {
   1221 EF                 4402 	mov	a,r7
   1222 30 E0 31           4403 	jnb	acc.0,00152$
                           4404 ;	..\COMMON\easyax5043.c:752: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1225 90 02 75           4405 	mov	dptr,#_axradio_cb_transmitend
   1228 C0 07              4406 	push	ar7
   122A 12 48 E0           4407 	lcall	_wtimer_remove_callback
                           4408 ;	..\COMMON\easyax5043.c:753: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   122D 90 02 7A           4409 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1230 E4                 4410 	clr	a
   1231 F0                 4411 	movx	@dptr,a
                           4412 ;	..\COMMON\easyax5043.c:754: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1232 90 00 1A           4413 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1235 E0                 4414 	movx	a,@dptr
   1236 FB                 4415 	mov	r3,a
   1237 A3                 4416 	inc	dptr
   1238 E0                 4417 	movx	a,@dptr
   1239 FC                 4418 	mov	r4,a
   123A A3                 4419 	inc	dptr
   123B E0                 4420 	movx	a,@dptr
   123C FD                 4421 	mov	r5,a
   123D A3                 4422 	inc	dptr
   123E E0                 4423 	movx	a,@dptr
   123F FE                 4424 	mov	r6,a
   1240 90 02 7B           4425 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1243 EB                 4426 	mov	a,r3
   1244 F0                 4427 	movx	@dptr,a
   1245 A3                 4428 	inc	dptr
   1246 EC                 4429 	mov	a,r4
   1247 F0                 4430 	movx	@dptr,a
   1248 A3                 4431 	inc	dptr
   1249 ED                 4432 	mov	a,r5
   124A F0                 4433 	movx	@dptr,a
   124B A3                 4434 	inc	dptr
   124C EE                 4435 	mov	a,r6
   124D F0                 4436 	movx	@dptr,a
                           4437 ;	..\COMMON\easyax5043.c:755: wtimer_add_callback(&axradio_cb_transmitend.cb);
   124E 90 02 75           4438 	mov	dptr,#_axradio_cb_transmitend
   1251 12 3E 7B           4439 	lcall	_wtimer_add_callback
   1254 D0 07              4440 	pop	ar7
   1256                    4441 00152$:
                           4442 ;	..\COMMON\easyax5043.c:757: if (evt & 0x02) {
   1256 EF                 4443 	mov	a,r7
   1257 30 E1 2D           4444 	jnb	acc.1,00155$
                           4445 ;	..\COMMON\easyax5043.c:758: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   125A 90 02 6B           4446 	mov	dptr,#_axradio_cb_transmitstart
   125D 12 48 E0           4447 	lcall	_wtimer_remove_callback
                           4448 ;	..\COMMON\easyax5043.c:759: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1260 90 02 70           4449 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1263 E4                 4450 	clr	a
   1264 F0                 4451 	movx	@dptr,a
                           4452 ;	..\COMMON\easyax5043.c:760: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1265 90 00 1A           4453 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1268 E0                 4454 	movx	a,@dptr
   1269 FC                 4455 	mov	r4,a
   126A A3                 4456 	inc	dptr
   126B E0                 4457 	movx	a,@dptr
   126C FD                 4458 	mov	r5,a
   126D A3                 4459 	inc	dptr
   126E E0                 4460 	movx	a,@dptr
   126F FE                 4461 	mov	r6,a
   1270 A3                 4462 	inc	dptr
   1271 E0                 4463 	movx	a,@dptr
   1272 FF                 4464 	mov	r7,a
   1273 90 02 71           4465 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1276 EC                 4466 	mov	a,r4
   1277 F0                 4467 	movx	@dptr,a
   1278 A3                 4468 	inc	dptr
   1279 ED                 4469 	mov	a,r5
   127A F0                 4470 	movx	@dptr,a
   127B A3                 4471 	inc	dptr
   127C EE                 4472 	mov	a,r6
   127D F0                 4473 	movx	@dptr,a
   127E A3                 4474 	inc	dptr
   127F EF                 4475 	mov	a,r7
   1280 F0                 4476 	movx	@dptr,a
                           4477 ;	..\COMMON\easyax5043.c:761: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1281 90 02 6B           4478 	mov	dptr,#_axradio_cb_transmitstart
   1284 12 3E 7B           4479 	lcall	_wtimer_add_callback
                           4480 ;	..\COMMON\easyax5043.c:764: txstreamdatacb:
   1287                    4481 00155$:
                           4482 ;	..\COMMON\easyax5043.c:765: if (AX5043_IRQREQUEST0 & AX5043_IRQMASK0 & 0x08) {
   1287 90 40 0D           4483 	mov	dptr,#_AX5043_IRQREQUEST0
   128A E0                 4484 	movx	a,@dptr
   128B FF                 4485 	mov	r7,a
   128C 90 40 07           4486 	mov	dptr,#_AX5043_IRQMASK0
   128F E0                 4487 	movx	a,@dptr
   1290 FE                 4488 	mov	r6,a
   1291 5F                 4489 	anl	a,r7
   1292 30 E3 76           4490 	jnb	acc.3,00164$
                           4491 ;	..\COMMON\easyax5043.c:766: AX5043_IRQMASK0 &= (uint8_t)~0x08;
   1295 90 40 07           4492 	mov	dptr,#_AX5043_IRQMASK0
   1298 E0                 4493 	movx	a,@dptr
   1299 54 F7              4494 	anl	a,#0xF7
   129B F0                 4495 	movx	@dptr,a
                           4496 ;	..\COMMON\easyax5043.c:767: update_timeanchor();
   129C 12 08 37           4497 	lcall	_update_timeanchor
                           4498 ;	..\COMMON\easyax5043.c:768: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   129F 90 02 7F           4499 	mov	dptr,#_axradio_cb_transmitdata
   12A2 12 48 E0           4500 	lcall	_wtimer_remove_callback
                           4501 ;	..\COMMON\easyax5043.c:769: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   12A5 90 02 84           4502 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   12A8 E4                 4503 	clr	a
   12A9 F0                 4504 	movx	@dptr,a
                           4505 ;	..\COMMON\easyax5043.c:770: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   12AA 90 00 1A           4506 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   12AD E0                 4507 	movx	a,@dptr
   12AE FC                 4508 	mov	r4,a
   12AF A3                 4509 	inc	dptr
   12B0 E0                 4510 	movx	a,@dptr
   12B1 FD                 4511 	mov	r5,a
   12B2 A3                 4512 	inc	dptr
   12B3 E0                 4513 	movx	a,@dptr
   12B4 FE                 4514 	mov	r6,a
   12B5 A3                 4515 	inc	dptr
   12B6 E0                 4516 	movx	a,@dptr
   12B7 FF                 4517 	mov	r7,a
   12B8 90 02 85           4518 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   12BB EC                 4519 	mov	a,r4
   12BC F0                 4520 	movx	@dptr,a
   12BD A3                 4521 	inc	dptr
   12BE ED                 4522 	mov	a,r5
   12BF F0                 4523 	movx	@dptr,a
   12C0 A3                 4524 	inc	dptr
   12C1 EE                 4525 	mov	a,r6
   12C2 F0                 4526 	movx	@dptr,a
   12C3 A3                 4527 	inc	dptr
   12C4 EF                 4528 	mov	a,r7
   12C5 F0                 4529 	movx	@dptr,a
                           4530 ;	..\COMMON\easyax5043.c:771: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   12C6 90 02 7F           4531 	mov	dptr,#_axradio_cb_transmitdata
   12C9 12 3E 7B           4532 	lcall	_wtimer_add_callback
                           4533 ;	..\COMMON\easyax5043.c:773: break;
                           4534 ;	..\COMMON\easyax5043.c:775: case trxstate_rxwor:
   12CC 80 3D              4535 	sjmp	00164$
   12CE                    4536 00158$:
                           4537 ;	..\COMMON\easyax5043.c:776: if( AX5043_IRQREQUEST1 & 0x01 ) // XTAL ready
   12CE 90 40 0C           4538 	mov	dptr,#_AX5043_IRQREQUEST1
   12D1 E0                 4539 	movx	a,@dptr
   12D2 FF                 4540 	mov	r7,a
   12D3 30 E0 0A           4541 	jnb	acc.0,00160$
                           4542 ;	..\COMMON\easyax5043.c:778: AX5043_IRQINVERSION1 |= 0x01; // invert the xtal ready irq so it does not fire continuously
   12D6 90 40 0A           4543 	mov	dptr,#_AX5043_IRQINVERSION1
   12D9 E0                 4544 	movx	a,@dptr
   12DA FF                 4545 	mov	r7,a
   12DB 44 01              4546 	orl	a,#0x01
   12DD F0                 4547 	movx	@dptr,a
   12DE 80 28              4548 	sjmp	00162$
   12E0                    4549 00160$:
                           4550 ;	..\COMMON\easyax5043.c:782: AX5043_IRQINVERSION1 &= ~0x01; // drop xtal ready irq inversion --> armed again for next wake-up
   12E0 90 40 0A           4551 	mov	dptr,#_AX5043_IRQINVERSION1
   12E3 E0                 4552 	movx	a,@dptr
   12E4 54 FE              4553 	anl	a,#0xFE
   12E6 F0                 4554 	movx	@dptr,a
                           4555 ;	..\COMMON\easyax5043.c:783: AX5043_0xF30 = f30_saved;
   12E7 90 04 41           4556 	mov	dptr,#_f30_saved
   12EA E0                 4557 	movx	a,@dptr
   12EB 90 4F 30           4558 	mov	dptr,#_AX5043_0xF30
   12EE F0                 4559 	movx	@dptr,a
                           4560 ;	..\COMMON\easyax5043.c:784: AX5043_0xF31 = f31_saved;
   12EF 90 04 42           4561 	mov	dptr,#_f31_saved
   12F2 E0                 4562 	movx	a,@dptr
   12F3 90 4F 31           4563 	mov	dptr,#_AX5043_0xF31
   12F6 F0                 4564 	movx	@dptr,a
                           4565 ;	..\COMMON\easyax5043.c:785: AX5043_0xF32 = f32_saved;
   12F7 90 04 43           4566 	mov	dptr,#_f32_saved
   12FA E0                 4567 	movx	a,@dptr
   12FB 90 4F 32           4568 	mov	dptr,#_AX5043_0xF32
   12FE F0                 4569 	movx	@dptr,a
                           4570 ;	..\COMMON\easyax5043.c:786: AX5043_0xF33 = f33_saved;
   12FF 90 04 44           4571 	mov	dptr,#_f33_saved
   1302 E0                 4572 	movx	a,@dptr
   1303 FF                 4573 	mov	r7,a
   1304 90 4F 33           4574 	mov	dptr,#_AX5043_0xF33
   1307 F0                 4575 	movx	@dptr,a
                           4576 ;	..\COMMON\easyax5043.c:790: case trxstate_rx:
   1308                    4577 00162$:
                           4578 ;	..\COMMON\easyax5043.c:791: receive_isr();
   1308 12 09 37           4579 	lcall	_receive_isr
                           4580 ;	..\COMMON\easyax5043.c:794: } // end switch(axradio_trxstate)
   130B                    4581 00164$:
   130B D0 D0              4582 	pop	psw
   130D D0 00              4583 	pop	(0+0)
   130F D0 01              4584 	pop	(0+1)
   1311 D0 02              4585 	pop	(0+2)
   1313 D0 03              4586 	pop	(0+3)
   1315 D0 04              4587 	pop	(0+4)
   1317 D0 05              4588 	pop	(0+5)
   1319 D0 06              4589 	pop	(0+6)
   131B D0 07              4590 	pop	(0+7)
   131D D0 83              4591 	pop	dph
   131F D0 82              4592 	pop	dpl
   1321 D0 F0              4593 	pop	b
   1323 D0 E0              4594 	pop	acc
   1325 D0 21              4595 	pop	bits
   1327 32                 4596 	reti
                           4597 ;------------------------------------------------------------
                           4598 ;Allocation info for local variables in function 'ax5043_receiver_on_continuous'
                           4599 ;------------------------------------------------------------
                           4600 ;rschanged_int             Allocated to registers r7 
                           4601 ;------------------------------------------------------------
                           4602 ;	..\COMMON\easyax5043.c:798: __reentrantb void ax5043_receiver_on_continuous(void) __reentrant
                           4603 ;	-----------------------------------------
                           4604 ;	 function ax5043_receiver_on_continuous
                           4605 ;	-----------------------------------------
   1328                    4606 _ax5043_receiver_on_continuous:
                           4607 ;	..\COMMON\easyax5043.c:800: uint8_t rschanged_int = (axradio_framing_enable_sfdcallback | (axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) | (axradio_mode == AXRADIO_MODE_SYNC_SLAVE) );
   1328 74 23              4608 	mov	a,#0x23
   132A B5 0A 04           4609 	cjne	a,_axradio_mode,00127$
   132D 74 01              4610 	mov	a,#0x01
   132F 80 01              4611 	sjmp	00128$
   1331                    4612 00127$:
   1331 E4                 4613 	clr	a
   1332                    4614 00128$:
   1332 FF                 4615 	mov	r7,a
   1333 90 4B A2           4616 	mov	dptr,#_axradio_framing_enable_sfdcallback
   1336 E4                 4617 	clr	a
   1337 93                 4618 	movc	a,@a+dptr
   1338 FE                 4619 	mov	r6,a
   1339 42 07              4620 	orl	ar7,a
   133B 74 22              4621 	mov	a,#0x22
   133D B5 0A 04           4622 	cjne	a,_axradio_mode,00129$
   1340 74 01              4623 	mov	a,#0x01
   1342 80 01              4624 	sjmp	00130$
   1344                    4625 00129$:
   1344 E4                 4626 	clr	a
   1345                    4627 00130$:
   1345 FE                 4628 	mov	r6,a
   1346 42 07              4629 	orl	ar7,a
                           4630 ;	..\COMMON\easyax5043.c:801: if(rschanged_int)
   1348 EF                 4631 	mov	a,r7
   1349 60 06              4632 	jz	00102$
                           4633 ;	..\COMMON\easyax5043.c:802: AX5043_RADIOEVENTMASK0 = 0x04;
   134B 90 40 09           4634 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   134E 74 04              4635 	mov	a,#0x04
   1350 F0                 4636 	movx	@dptr,a
   1351                    4637 00102$:
                           4638 ;	..\COMMON\easyax5043.c:803: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   1351 90 4B 7F           4639 	mov	dptr,#_axradio_phy_rssireference
   1354 E4                 4640 	clr	a
   1355 93                 4641 	movc	a,@a+dptr
   1356 FE                 4642 	mov	r6,a
   1357 90 42 2C           4643 	mov	dptr,#_AX5043_RSSIREFERENCE
   135A F0                 4644 	movx	@dptr,a
                           4645 ;	..\COMMON\easyax5043.c:804: if (axradio_mode == AXRADIO_MODE_ASYNC_RECEIVE ||
   135B 74 18              4646 	mov	a,#0x18
   135D B5 0A 02           4647 	cjne	a,_axradio_mode,00132$
   1360 80 1A              4648 	sjmp	00103$
   1362                    4649 00132$:
                           4650 ;	..\COMMON\easyax5043.c:805: axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   1362 74 1A              4651 	mov	a,#0x1A
   1364 B5 0A 02           4652 	cjne	a,_axradio_mode,00133$
   1367 80 13              4653 	sjmp	00103$
   1369                    4654 00133$:
                           4655 ;	..\COMMON\easyax5043.c:806: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   1369 74 1C              4656 	mov	a,#0x1C
   136B B5 0A 02           4657 	cjne	a,_axradio_mode,00134$
   136E 80 0C              4658 	sjmp	00103$
   1370                    4659 00134$:
                           4660 ;	..\COMMON\easyax5043.c:807: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   1370 74 1D              4661 	mov	a,#0x1D
   1372 B5 0A 02           4662 	cjne	a,_axradio_mode,00135$
   1375 80 05              4663 	sjmp	00103$
   1377                    4664 00135$:
                           4665 ;	..\COMMON\easyax5043.c:808: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   1377 74 1E              4666 	mov	a,#0x1E
   1379 B5 0A 13           4667 	cjne	a,_axradio_mode,00104$
   137C                    4668 00103$:
                           4669 ;	..\COMMON\easyax5043.c:809: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_cont;
   137C 90 4B 87           4670 	mov	dptr,#_axradio_phy_tmgrxpreamble1_cont
   137F E4                 4671 	clr	a
   1380 93                 4672 	movc	a,@a+dptr
   1381 90 42 29           4673 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   1384 F0                 4674 	movx	@dptr,a
                           4675 ;	..\COMMON\easyax5043.c:810: AX5043_PKTSTOREFLAGS |= 0x40;
   1385 90 42 32           4676 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1388 E0                 4677 	movx	a,@dptr
   1389 FE                 4678 	mov	r6,a
   138A 44 40              4679 	orl	a,#0x40
   138C F0                 4680 	movx	@dptr,a
   138D 80 0D              4681 	sjmp	00105$
   138F                    4682 00104$:
                           4683 ;	..\COMMON\easyax5043.c:812: AX5043_TMGRXPREAMBLE1 = 0x00;
   138F 90 42 29           4684 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   1392 E4                 4685 	clr	a
   1393 F0                 4686 	movx	@dptr,a
                           4687 ;	..\COMMON\easyax5043.c:813: AX5043_PKTSTOREFLAGS &= (uint8_t)~0x40;
   1394 90 42 32           4688 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1397 E0                 4689 	movx	a,@dptr
   1398 FE                 4690 	mov	r6,a
   1399 54 BF              4691 	anl	a,#0xBF
   139B F0                 4692 	movx	@dptr,a
   139C                    4693 00105$:
                           4694 ;	..\COMMON\easyax5043.c:815: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   139C 90 40 28           4695 	mov	dptr,#_AX5043_FIFOSTAT
   139F 74 03              4696 	mov	a,#0x03
   13A1 F0                 4697 	movx	@dptr,a
                           4698 ;	..\COMMON\easyax5043.c:816: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   13A2 90 40 02           4699 	mov	dptr,#_AX5043_PWRMODE
   13A5 74 09              4700 	mov	a,#0x09
   13A7 F0                 4701 	movx	@dptr,a
                           4702 ;	..\COMMON\easyax5043.c:817: axradio_trxstate = trxstate_rx;
   13A8 75 0B 01           4703 	mov	_axradio_trxstate,#0x01
                           4704 ;	..\COMMON\easyax5043.c:818: if(rschanged_int)
   13AB EF                 4705 	mov	a,r7
   13AC 60 08              4706 	jz	00111$
                           4707 ;	..\COMMON\easyax5043.c:819: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   13AE 90 40 07           4708 	mov	dptr,#_AX5043_IRQMASK0
   13B1 74 41              4709 	mov	a,#0x41
   13B3 F0                 4710 	movx	@dptr,a
   13B4 80 06              4711 	sjmp	00112$
   13B6                    4712 00111$:
                           4713 ;	..\COMMON\easyax5043.c:821: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   13B6 90 40 07           4714 	mov	dptr,#_AX5043_IRQMASK0
   13B9 74 01              4715 	mov	a,#0x01
   13BB F0                 4716 	movx	@dptr,a
   13BC                    4717 00112$:
                           4718 ;	..\COMMON\easyax5043.c:822: AX5043_IRQMASK1 = 0x00;
   13BC 90 40 06           4719 	mov	dptr,#_AX5043_IRQMASK1
   13BF E4                 4720 	clr	a
   13C0 F0                 4721 	movx	@dptr,a
   13C1 22                 4722 	ret
                           4723 ;------------------------------------------------------------
                           4724 ;Allocation info for local variables in function 'ax5043_receiver_on_wor'
                           4725 ;------------------------------------------------------------
                           4726 ;wp                        Allocated to registers r6 r7 
                           4727 ;------------------------------------------------------------
                           4728 ;	..\COMMON\easyax5043.c:825: __reentrantb void ax5043_receiver_on_wor(void) __reentrant
                           4729 ;	-----------------------------------------
                           4730 ;	 function ax5043_receiver_on_wor
                           4731 ;	-----------------------------------------
   13C2                    4732 _ax5043_receiver_on_wor:
                           4733 ;	..\COMMON\easyax5043.c:827: AX5043_BGNDRSSIGAIN = 0x02;
   13C2 90 42 2E           4734 	mov	dptr,#_AX5043_BGNDRSSIGAIN
   13C5 74 02              4735 	mov	a,#0x02
   13C7 F0                 4736 	movx	@dptr,a
                           4737 ;	..\COMMON\easyax5043.c:828: if(axradio_framing_enable_sfdcallback)
   13C8 90 4B A2           4738 	mov	dptr,#_axradio_framing_enable_sfdcallback
   13CB E4                 4739 	clr	a
   13CC 93                 4740 	movc	a,@a+dptr
   13CD FF                 4741 	mov	r7,a
   13CE 60 06              4742 	jz	00102$
                           4743 ;	..\COMMON\easyax5043.c:829: AX5043_RADIOEVENTMASK0 = 0x04;
   13D0 90 40 09           4744 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   13D3 74 04              4745 	mov	a,#0x04
   13D5 F0                 4746 	movx	@dptr,a
   13D6                    4747 00102$:
                           4748 ;	..\COMMON\easyax5043.c:830: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13D6 90 40 28           4749 	mov	dptr,#_AX5043_FIFOSTAT
   13D9 74 03              4750 	mov	a,#0x03
   13DB F0                 4751 	movx	@dptr,a
                           4752 ;	..\COMMON\easyax5043.c:831: AX5043_LPOSCCONFIG = 0x01; // start LPOSC, slow mode
   13DC 90 43 10           4753 	mov	dptr,#_AX5043_LPOSCCONFIG
   13DF 74 01              4754 	mov	a,#0x01
   13E1 F0                 4755 	movx	@dptr,a
                           4756 ;	..\COMMON\easyax5043.c:832: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_wor;
   13E2 90 4B 86           4757 	mov	dptr,#_axradio_phy_tmgrxpreamble1_wor
   13E5 E4                 4758 	clr	a
   13E6 93                 4759 	movc	a,@a+dptr
   13E7 90 42 29           4760 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   13EA F0                 4761 	movx	@dptr,a
                           4762 ;	..\COMMON\easyax5043.c:833: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   13EB 90 4B 7F           4763 	mov	dptr,#_axradio_phy_rssireference
   13EE E4                 4764 	clr	a
   13EF 93                 4765 	movc	a,@a+dptr
   13F0 FE                 4766 	mov	r6,a
   13F1 90 42 2C           4767 	mov	dptr,#_AX5043_RSSIREFERENCE
   13F4 F0                 4768 	movx	@dptr,a
                           4769 ;	..\COMMON\easyax5043.c:834: AX5043_PWRMODE = AX5043_PWRSTATE_WOR_RX;
   13F5 90 40 02           4770 	mov	dptr,#_AX5043_PWRMODE
   13F8 74 0B              4771 	mov	a,#0x0B
   13FA F0                 4772 	movx	@dptr,a
                           4773 ;	..\COMMON\easyax5043.c:835: axradio_trxstate = trxstate_rxwor;
   13FB 75 0B 02           4774 	mov	_axradio_trxstate,#0x02
                           4775 ;	..\COMMON\easyax5043.c:836: if(axradio_framing_enable_sfdcallback)
   13FE EF                 4776 	mov	a,r7
   13FF 60 08              4777 	jz	00104$
                           4778 ;	..\COMMON\easyax5043.c:837: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   1401 90 40 07           4779 	mov	dptr,#_AX5043_IRQMASK0
   1404 74 41              4780 	mov	a,#0x41
   1406 F0                 4781 	movx	@dptr,a
   1407 80 06              4782 	sjmp	00105$
   1409                    4783 00104$:
                           4784 ;	..\COMMON\easyax5043.c:839: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   1409 90 40 07           4785 	mov	dptr,#_AX5043_IRQMASK0
   140C 74 01              4786 	mov	a,#0x01
   140E F0                 4787 	movx	@dptr,a
   140F                    4788 00105$:
                           4789 ;	..\COMMON\easyax5043.c:840: AX5043_IRQMASK1 = 0x01; // xtal ready
   140F 90 40 06           4790 	mov	dptr,#_AX5043_IRQMASK1
   1412 74 01              4791 	mov	a,#0x01
   1414 F0                 4792 	movx	@dptr,a
                           4793 ;	..\COMMON\easyax5043.c:842: uint16_t wp = axradio_wor_period;
   1415 90 4B AE           4794 	mov	dptr,#_axradio_wor_period
   1418 E4                 4795 	clr	a
   1419 93                 4796 	movc	a,@a+dptr
   141A FE                 4797 	mov	r6,a
   141B 74 01              4798 	mov	a,#0x01
   141D 93                 4799 	movc	a,@a+dptr
                           4800 ;	..\COMMON\easyax5043.c:843: AX5043_WAKEUPFREQ1 = (wp >> 8) & 0xFF;
   141E FF                 4801 	mov	r7,a
   141F FD                 4802 	mov	r5,a
   1420 90 40 6C           4803 	mov	dptr,#_AX5043_WAKEUPFREQ1
   1423 ED                 4804 	mov	a,r5
   1424 F0                 4805 	movx	@dptr,a
                           4806 ;	..\COMMON\easyax5043.c:844: AX5043_WAKEUPFREQ0 = (wp >> 0) & 0xFF;  // actually wakeup period measured in LP OSC cycles
   1425 8E 05              4807 	mov	ar5,r6
   1427 90 40 6D           4808 	mov	dptr,#_AX5043_WAKEUPFREQ0
   142A ED                 4809 	mov	a,r5
   142B F0                 4810 	movx	@dptr,a
                           4811 ;	..\COMMON\easyax5043.c:845: wp += radio_read16((uint16_t)&AX5043_WAKEUPTIMER1);
   142C 90 40 68           4812 	mov	dptr,#_AX5043_WAKEUPTIMER1
   142F 12 40 88           4813 	lcall	_radio_read16
   1432 AC 82              4814 	mov	r4,dpl
   1434 AD 83              4815 	mov	r5,dph
   1436 EC                 4816 	mov	a,r4
   1437 2E                 4817 	add	a,r6
   1438 FE                 4818 	mov	r6,a
   1439 ED                 4819 	mov	a,r5
   143A 3F                 4820 	addc	a,r7
                           4821 ;	..\COMMON\easyax5043.c:846: AX5043_WAKEUP1 = (wp >> 8) & 0xFF;
   143B FD                 4822 	mov	r5,a
   143C 90 40 6A           4823 	mov	dptr,#_AX5043_WAKEUP1
   143F ED                 4824 	mov	a,r5
   1440 F0                 4825 	movx	@dptr,a
                           4826 ;	..\COMMON\easyax5043.c:847: AX5043_WAKEUP0 = (wp >> 0) & 0xFF;
   1441 90 40 6B           4827 	mov	dptr,#_AX5043_WAKEUP0
   1444 EE                 4828 	mov	a,r6
   1445 F0                 4829 	movx	@dptr,a
   1446 22                 4830 	ret
                           4831 ;------------------------------------------------------------
                           4832 ;Allocation info for local variables in function 'ax5043_prepare_tx'
                           4833 ;------------------------------------------------------------
                           4834 ;	..\COMMON\easyax5043.c:850: __reentrantb void ax5043_prepare_tx(void) __reentrant
                           4835 ;	-----------------------------------------
                           4836 ;	 function ax5043_prepare_tx
                           4837 ;	-----------------------------------------
   1447                    4838 _ax5043_prepare_tx:
                           4839 ;	..\COMMON\easyax5043.c:852: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
                           4840 ;	..\COMMON\easyax5043.c:853: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   1447 90 40 02           4841 	mov	dptr,#_AX5043_PWRMODE
   144A 74 05              4842 	mov	a,#0x05
   144C F0                 4843 	movx	@dptr,a
   144D 74 07              4844 	mov	a,#0x07
   144F F0                 4845 	movx	@dptr,a
                           4846 ;	..\COMMON\easyax5043.c:854: ax5043_init_registers_tx();
   1450 12 08 CD           4847 	lcall	_ax5043_init_registers_tx
                           4848 ;	..\COMMON\easyax5043.c:855: AX5043_FIFOTHRESH1 = 0;
   1453 90 40 2E           4849 	mov	dptr,#_AX5043_FIFOTHRESH1
   1456 E4                 4850 	clr	a
   1457 F0                 4851 	movx	@dptr,a
                           4852 ;	..\COMMON\easyax5043.c:856: AX5043_FIFOTHRESH0 = 0x80;
   1458 90 40 2F           4853 	mov	dptr,#_AX5043_FIFOTHRESH0
   145B 74 80              4854 	mov	a,#0x80
   145D F0                 4855 	movx	@dptr,a
                           4856 ;	..\COMMON\easyax5043.c:857: axradio_trxstate = trxstate_tx_xtalwait;
   145E 75 0B 09           4857 	mov	_axradio_trxstate,#0x09
                           4858 ;	..\COMMON\easyax5043.c:858: AX5043_IRQMASK0 = 0x00;
   1461 90 40 07           4859 	mov	dptr,#_AX5043_IRQMASK0
   1464 E4                 4860 	clr	a
   1465 F0                 4861 	movx	@dptr,a
                           4862 ;	..\COMMON\easyax5043.c:859: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   1466 90 40 06           4863 	mov	dptr,#_AX5043_IRQMASK1
   1469 74 01              4864 	mov	a,#0x01
   146B F0                 4865 	movx	@dptr,a
   146C 22                 4866 	ret
                           4867 ;------------------------------------------------------------
                           4868 ;Allocation info for local variables in function 'ax5043_off'
                           4869 ;------------------------------------------------------------
                           4870 ;	..\COMMON\easyax5043.c:862: __reentrantb void ax5043_off(void) __reentrant
                           4871 ;	-----------------------------------------
                           4872 ;	 function ax5043_off
                           4873 ;	-----------------------------------------
   146D                    4874 _ax5043_off:
                           4875 ;	..\COMMON\easyax5043.c:864: ax5043_off_xtal();
   146D 12 14 76           4876 	lcall	_ax5043_off_xtal
                           4877 ;	..\COMMON\easyax5043.c:865: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   1470 90 40 02           4878 	mov	dptr,#_AX5043_PWRMODE
   1473 E4                 4879 	clr	a
   1474 F0                 4880 	movx	@dptr,a
   1475 22                 4881 	ret
                           4882 ;------------------------------------------------------------
                           4883 ;Allocation info for local variables in function 'ax5043_off_xtal'
                           4884 ;------------------------------------------------------------
                           4885 ;	..\COMMON\easyax5043.c:868: __reentrantb void ax5043_off_xtal(void) __reentrant
                           4886 ;	-----------------------------------------
                           4887 ;	 function ax5043_off_xtal
                           4888 ;	-----------------------------------------
   1476                    4889 _ax5043_off_xtal:
                           4890 ;	..\COMMON\easyax5043.c:870: AX5043_IRQMASK0 = 0x00; // IRQ off
   1476 90 40 07           4891 	mov	dptr,#_AX5043_IRQMASK0
                           4892 ;	..\COMMON\easyax5043.c:871: AX5043_IRQMASK1 = 0x00;
   1479 E4                 4893 	clr	a
   147A F0                 4894 	movx	@dptr,a
   147B 90 40 06           4895 	mov	dptr,#_AX5043_IRQMASK1
   147E F0                 4896 	movx	@dptr,a
                           4897 ;	..\COMMON\easyax5043.c:872: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   147F 90 40 02           4898 	mov	dptr,#_AX5043_PWRMODE
   1482 74 05              4899 	mov	a,#0x05
   1484 F0                 4900 	movx	@dptr,a
                           4901 ;	..\COMMON\easyax5043.c:873: AX5043_LPOSCCONFIG = 0x00; // LPOSC off
   1485 90 43 10           4902 	mov	dptr,#_AX5043_LPOSCCONFIG
   1488 E4                 4903 	clr	a
   1489 F0                 4904 	movx	@dptr,a
                           4905 ;	..\COMMON\easyax5043.c:874: axradio_trxstate = trxstate_off;
   148A 75 0B 00           4906 	mov	_axradio_trxstate,#0x00
   148D 22                 4907 	ret
                           4908 ;------------------------------------------------------------
                           4909 ;Allocation info for local variables in function 'axradio_wait_for_xtal'
                           4910 ;------------------------------------------------------------
                           4911 ;iesave                    Allocated to registers r7 
                           4912 ;------------------------------------------------------------
                           4913 ;	..\COMMON\easyax5043.c:877: void axradio_wait_for_xtal(void)
                           4914 ;	-----------------------------------------
                           4915 ;	 function axradio_wait_for_xtal
                           4916 ;	-----------------------------------------
   148E                    4917 _axradio_wait_for_xtal:
                           4918 ;	..\COMMON\easyax5043.c:879: uint8_t __autodata iesave = IE & 0x80;
   148E 74 80              4919 	mov	a,#0x80
   1490 55 A8              4920 	anl	a,_IE
   1492 FF                 4921 	mov	r7,a
                           4922 ;	..\COMMON\easyax5043.c:880: EA = 0;
   1493 C2 AF              4923 	clr	_EA
                           4924 ;	..\COMMON\easyax5043.c:881: axradio_trxstate = trxstate_wait_xtal;
   1495 75 0B 03           4925 	mov	_axradio_trxstate,#0x03
                           4926 ;	..\COMMON\easyax5043.c:882: AX5043_IRQMASK1 |= 0x01; // enable xtal ready interrupt
   1498 90 40 06           4927 	mov	dptr,#_AX5043_IRQMASK1
   149B E0                 4928 	movx	a,@dptr
   149C FE                 4929 	mov	r6,a
   149D 44 01              4930 	orl	a,#0x01
   149F F0                 4931 	movx	@dptr,a
   14A0                    4932 00104$:
                           4933 ;	..\COMMON\easyax5043.c:884: EA = 0;
   14A0 C2 AF              4934 	clr	_EA
                           4935 ;	..\COMMON\easyax5043.c:885: if (axradio_trxstate == trxstate_xtal_ready)
   14A2 74 04              4936 	mov	a,#0x04
   14A4 B5 0B 02           4937 	cjne	a,_axradio_trxstate,00112$
   14A7 80 11              4938 	sjmp	00105$
   14A9                    4939 00112$:
                           4940 ;	..\COMMON\easyax5043.c:887: wtimer_idle(WTFLAG_CANSTANDBY);
   14A9 75 82 02           4941 	mov	dpl,#0x02
   14AC C0 07              4942 	push	ar7
   14AE 12 3D 88           4943 	lcall	_wtimer_idle
                           4944 ;	..\COMMON\easyax5043.c:888: EA = 1;
   14B1 D2 AF              4945 	setb	_EA
                           4946 ;	..\COMMON\easyax5043.c:889: wtimer_runcallbacks();
   14B3 12 3D 04           4947 	lcall	_wtimer_runcallbacks
   14B6 D0 07              4948 	pop	ar7
   14B8 80 E6              4949 	sjmp	00104$
   14BA                    4950 00105$:
                           4951 ;	..\COMMON\easyax5043.c:891: IE |= iesave;
   14BA EF                 4952 	mov	a,r7
   14BB 42 A8              4953 	orl	_IE,a
   14BD 22                 4954 	ret
                           4955 ;------------------------------------------------------------
                           4956 ;Allocation info for local variables in function 'axradio_setaddrregs'
                           4957 ;------------------------------------------------------------
                           4958 ;pn                        Allocated to registers r6 r7 
                           4959 ;inv                       Allocated to registers r5 
                           4960 ;------------------------------------------------------------
                           4961 ;	..\COMMON\easyax5043.c:894: static void axradio_setaddrregs(void)
                           4962 ;	-----------------------------------------
                           4963 ;	 function axradio_setaddrregs
                           4964 ;	-----------------------------------------
   14BE                    4965 _axradio_setaddrregs:
                           4966 ;	..\COMMON\easyax5043.c:896: AX5043_PKTADDR0 = axradio_localaddr.addr[0];
   14BE 90 00 1E           4967 	mov	dptr,#_axradio_localaddr
   14C1 E0                 4968 	movx	a,@dptr
   14C2 90 42 07           4969 	mov	dptr,#_AX5043_PKTADDR0
   14C5 F0                 4970 	movx	@dptr,a
                           4971 ;	..\COMMON\easyax5043.c:897: AX5043_PKTADDR1 = axradio_localaddr.addr[1];
   14C6 90 00 1F           4972 	mov	dptr,#(_axradio_localaddr + 0x0001)
   14C9 E0                 4973 	movx	a,@dptr
   14CA 90 42 06           4974 	mov	dptr,#_AX5043_PKTADDR1
   14CD F0                 4975 	movx	@dptr,a
                           4976 ;	..\COMMON\easyax5043.c:898: AX5043_PKTADDR2 = axradio_localaddr.addr[2];
   14CE 90 00 20           4977 	mov	dptr,#(_axradio_localaddr + 0x0002)
   14D1 E0                 4978 	movx	a,@dptr
   14D2 90 42 05           4979 	mov	dptr,#_AX5043_PKTADDR2
   14D5 F0                 4980 	movx	@dptr,a
                           4981 ;	..\COMMON\easyax5043.c:899: AX5043_PKTADDR3 = axradio_localaddr.addr[3];
   14D6 90 00 21           4982 	mov	dptr,#(_axradio_localaddr + 0x0003)
   14D9 E0                 4983 	movx	a,@dptr
   14DA 90 42 04           4984 	mov	dptr,#_AX5043_PKTADDR3
   14DD F0                 4985 	movx	@dptr,a
                           4986 ;	..\COMMON\easyax5043.c:901: AX5043_PKTADDRMASK0 = axradio_localaddr.mask[0];
   14DE 90 00 22           4987 	mov	dptr,#(_axradio_localaddr + 0x0004)
   14E1 E0                 4988 	movx	a,@dptr
   14E2 90 42 0B           4989 	mov	dptr,#_AX5043_PKTADDRMASK0
   14E5 F0                 4990 	movx	@dptr,a
                           4991 ;	..\COMMON\easyax5043.c:902: AX5043_PKTADDRMASK1 = axradio_localaddr.mask[1];
   14E6 90 00 23           4992 	mov	dptr,#(_axradio_localaddr + 0x0005)
   14E9 E0                 4993 	movx	a,@dptr
   14EA 90 42 0A           4994 	mov	dptr,#_AX5043_PKTADDRMASK1
   14ED F0                 4995 	movx	@dptr,a
                           4996 ;	..\COMMON\easyax5043.c:903: AX5043_PKTADDRMASK2 = axradio_localaddr.mask[2];
   14EE 90 00 24           4997 	mov	dptr,#(_axradio_localaddr + 0x0006)
   14F1 E0                 4998 	movx	a,@dptr
   14F2 90 42 09           4999 	mov	dptr,#_AX5043_PKTADDRMASK2
   14F5 F0                 5000 	movx	@dptr,a
                           5001 ;	..\COMMON\easyax5043.c:904: AX5043_PKTADDRMASK3 = axradio_localaddr.mask[3];
   14F6 90 00 25           5002 	mov	dptr,#(_axradio_localaddr + 0x0007)
   14F9 E0                 5003 	movx	a,@dptr
   14FA 90 42 08           5004 	mov	dptr,#_AX5043_PKTADDRMASK3
   14FD F0                 5005 	movx	@dptr,a
                           5006 ;	..\COMMON\easyax5043.c:906: if (axradio_phy_pn9 && axradio_framing_addrlen) {
   14FE 90 4B 73           5007 	mov	dptr,#_axradio_phy_pn9
   1501 E4                 5008 	clr	a
   1502 93                 5009 	movc	a,@a+dptr
   1503 FF                 5010 	mov	r7,a
   1504 70 01              5011 	jnz	00114$
   1506 22                 5012 	ret
   1507                    5013 00114$:
   1507 90 4B 95           5014 	mov	dptr,#_axradio_framing_addrlen
   150A E4                 5015 	clr	a
   150B 93                 5016 	movc	a,@a+dptr
   150C FF                 5017 	mov	r7,a
   150D 70 01              5018 	jnz	00115$
   150F 22                 5019 	ret
   1510                    5020 00115$:
                           5021 ;	..\COMMON\easyax5043.c:907: uint16_t __autodata pn = 0x1ff;
   1510 7E FF              5022 	mov	r6,#0xFF
   1512 7F 01              5023 	mov	r7,#0x01
                           5024 ;	..\COMMON\easyax5043.c:908: uint8_t __autodata inv = -(AX5043_ENCODING & 0x01);
   1514 90 40 11           5025 	mov	dptr,#_AX5043_ENCODING
   1517 E0                 5026 	movx	a,@dptr
   1518 FD                 5027 	mov	r5,a
   1519 53 05 01           5028 	anl	ar5,#0x01
   151C C3                 5029 	clr	c
   151D E4                 5030 	clr	a
   151E 9D                 5031 	subb	a,r5
   151F FD                 5032 	mov	r5,a
                           5033 ;	..\COMMON\easyax5043.c:909: if (axradio_framing_destaddrpos != 0xff)
   1520 90 4B 96           5034 	mov	dptr,#_axradio_framing_destaddrpos
   1523 E4                 5035 	clr	a
   1524 93                 5036 	movc	a,@a+dptr
   1525 FC                 5037 	mov	r4,a
   1526 BC FF 02           5038 	cjne	r4,#0xFF,00116$
   1529 80 25              5039 	sjmp	00102$
   152B                    5040 00116$:
                           5041 ;	..\COMMON\easyax5043.c:910: pn = pn9_advance_bits(pn, axradio_framing_destaddrpos << 3);
   152B E4                 5042 	clr	a
   152C 03                 5043 	rr	a
   152D 54 F8              5044 	anl	a,#0xF8
   152F CC                 5045 	xch	a,r4
   1530 C4                 5046 	swap	a
   1531 03                 5047 	rr	a
   1532 CC                 5048 	xch	a,r4
   1533 6C                 5049 	xrl	a,r4
   1534 CC                 5050 	xch	a,r4
   1535 54 F8              5051 	anl	a,#0xF8
   1537 CC                 5052 	xch	a,r4
   1538 6C                 5053 	xrl	a,r4
   1539 FB                 5054 	mov	r3,a
   153A C0 05              5055 	push	ar5
   153C C0 04              5056 	push	ar4
   153E C0 03              5057 	push	ar3
   1540 90 01 FF           5058 	mov	dptr,#0x01FF
   1543 12 4A 22           5059 	lcall	_pn9_advance_bits
   1546 AE 82              5060 	mov	r6,dpl
   1548 AF 83              5061 	mov	r7,dph
   154A 15 81              5062 	dec	sp
   154C 15 81              5063 	dec	sp
   154E D0 05              5064 	pop	ar5
   1550                    5065 00102$:
                           5066 ;	..\COMMON\easyax5043.c:911: AX5043_PKTADDR0 ^= pn ^ inv;
   1550 7C 00              5067 	mov	r4,#0x00
   1552 ED                 5068 	mov	a,r5
   1553 6E                 5069 	xrl	a,r6
   1554 FA                 5070 	mov	r2,a
   1555 EC                 5071 	mov	a,r4
   1556 6F                 5072 	xrl	a,r7
   1557 FB                 5073 	mov	r3,a
   1558 90 42 07           5074 	mov	dptr,#_AX5043_PKTADDR0
   155B E0                 5075 	movx	a,@dptr
   155C 79 00              5076 	mov	r1,#0x00
   155E 62 02              5077 	xrl	ar2,a
   1560 E9                 5078 	mov	a,r1
   1561 62 03              5079 	xrl	ar3,a
   1563 90 42 07           5080 	mov	dptr,#_AX5043_PKTADDR0
   1566 EA                 5081 	mov	a,r2
   1567 F0                 5082 	movx	@dptr,a
                           5083 ;	..\COMMON\easyax5043.c:912: pn = pn9_advance_byte(pn);
   1568 8E 82              5084 	mov	dpl,r6
   156A 8F 83              5085 	mov	dph,r7
   156C C0 05              5086 	push	ar5
   156E C0 04              5087 	push	ar4
   1570 12 4A 48           5088 	lcall	_pn9_advance_byte
   1573 AE 82              5089 	mov	r6,dpl
   1575 AF 83              5090 	mov	r7,dph
   1577 D0 04              5091 	pop	ar4
   1579 D0 05              5092 	pop	ar5
                           5093 ;	..\COMMON\easyax5043.c:913: AX5043_PKTADDR1 ^= pn ^ inv;
   157B ED                 5094 	mov	a,r5
   157C 6E                 5095 	xrl	a,r6
   157D FA                 5096 	mov	r2,a
   157E EC                 5097 	mov	a,r4
   157F 6F                 5098 	xrl	a,r7
   1580 FB                 5099 	mov	r3,a
   1581 90 42 06           5100 	mov	dptr,#_AX5043_PKTADDR1
   1584 E0                 5101 	movx	a,@dptr
   1585 79 00              5102 	mov	r1,#0x00
   1587 62 02              5103 	xrl	ar2,a
   1589 E9                 5104 	mov	a,r1
   158A 62 03              5105 	xrl	ar3,a
   158C 90 42 06           5106 	mov	dptr,#_AX5043_PKTADDR1
   158F EA                 5107 	mov	a,r2
   1590 F0                 5108 	movx	@dptr,a
                           5109 ;	..\COMMON\easyax5043.c:914: pn = pn9_advance_byte(pn);
   1591 8E 82              5110 	mov	dpl,r6
   1593 8F 83              5111 	mov	dph,r7
   1595 C0 05              5112 	push	ar5
   1597 C0 04              5113 	push	ar4
   1599 12 4A 48           5114 	lcall	_pn9_advance_byte
   159C AE 82              5115 	mov	r6,dpl
   159E AF 83              5116 	mov	r7,dph
   15A0 D0 04              5117 	pop	ar4
   15A2 D0 05              5118 	pop	ar5
                           5119 ;	..\COMMON\easyax5043.c:915: AX5043_PKTADDR2 ^= pn ^ inv;
   15A4 ED                 5120 	mov	a,r5
   15A5 6E                 5121 	xrl	a,r6
   15A6 FA                 5122 	mov	r2,a
   15A7 EC                 5123 	mov	a,r4
   15A8 6F                 5124 	xrl	a,r7
   15A9 FB                 5125 	mov	r3,a
   15AA 90 42 05           5126 	mov	dptr,#_AX5043_PKTADDR2
   15AD E0                 5127 	movx	a,@dptr
   15AE 79 00              5128 	mov	r1,#0x00
   15B0 62 02              5129 	xrl	ar2,a
   15B2 E9                 5130 	mov	a,r1
   15B3 62 03              5131 	xrl	ar3,a
   15B5 90 42 05           5132 	mov	dptr,#_AX5043_PKTADDR2
   15B8 EA                 5133 	mov	a,r2
   15B9 F0                 5134 	movx	@dptr,a
                           5135 ;	..\COMMON\easyax5043.c:916: pn = pn9_advance_byte(pn);
   15BA 8E 82              5136 	mov	dpl,r6
   15BC 8F 83              5137 	mov	dph,r7
   15BE C0 05              5138 	push	ar5
   15C0 C0 04              5139 	push	ar4
   15C2 12 4A 48           5140 	lcall	_pn9_advance_byte
   15C5 AE 82              5141 	mov	r6,dpl
   15C7 AF 83              5142 	mov	r7,dph
   15C9 D0 04              5143 	pop	ar4
   15CB D0 05              5144 	pop	ar5
                           5145 ;	..\COMMON\easyax5043.c:917: AX5043_PKTADDR3 ^= pn ^ inv;
   15CD ED                 5146 	mov	a,r5
   15CE 62 06              5147 	xrl	ar6,a
   15D0 EC                 5148 	mov	a,r4
   15D1 62 07              5149 	xrl	ar7,a
   15D3 90 42 04           5150 	mov	dptr,#_AX5043_PKTADDR3
   15D6 E0                 5151 	movx	a,@dptr
   15D7 7C 00              5152 	mov	r4,#0x00
   15D9 62 06              5153 	xrl	ar6,a
   15DB EC                 5154 	mov	a,r4
   15DC 62 07              5155 	xrl	ar7,a
   15DE 90 42 04           5156 	mov	dptr,#_AX5043_PKTADDR3
   15E1 EE                 5157 	mov	a,r6
   15E2 F0                 5158 	movx	@dptr,a
   15E3 22                 5159 	ret
                           5160 ;------------------------------------------------------------
                           5161 ;Allocation info for local variables in function 'ax5043_init_registers'
                           5162 ;------------------------------------------------------------
                           5163 ;	..\COMMON\easyax5043.c:921: static void ax5043_init_registers(void)
                           5164 ;	-----------------------------------------
                           5165 ;	 function ax5043_init_registers
                           5166 ;	-----------------------------------------
   15E4                    5167 _ax5043_init_registers:
                           5168 ;	..\COMMON\easyax5043.c:923: ax5043_set_registers();
   15E4 12 01 42           5169 	lcall	_ax5043_set_registers
                           5170 ;	..\COMMON\easyax5043.c:928: AX5043_PKTLENOFFSET += axradio_framing_swcrclen; // add len offs for software CRC16 (used for both, fixed and variable length packets
   15E7 90 4B 9B           5171 	mov	dptr,#_axradio_framing_swcrclen
   15EA E4                 5172 	clr	a
   15EB 93                 5173 	movc	a,@a+dptr
   15EC FF                 5174 	mov	r7,a
   15ED 90 42 02           5175 	mov	dptr,#_AX5043_PKTLENOFFSET
   15F0 E0                 5176 	movx	a,@dptr
   15F1 FE                 5177 	mov	r6,a
   15F2 90 42 02           5178 	mov	dptr,#_AX5043_PKTLENOFFSET
   15F5 EF                 5179 	mov	a,r7
   15F6 2E                 5180 	add	a,r6
   15F7 F0                 5181 	movx	@dptr,a
                           5182 ;	..\COMMON\easyax5043.c:929: AX5043_PINFUNCIRQ = 0x03; // use as IRQ pin
   15F8 90 40 24           5183 	mov	dptr,#_AX5043_PINFUNCIRQ
   15FB 74 03              5184 	mov	a,#0x03
   15FD F0                 5185 	movx	@dptr,a
                           5186 ;	..\COMMON\easyax5043.c:930: AX5043_PKTSTOREFLAGS = 0x15; // store RF offset, RSSI and delimiter timing
   15FE 90 42 32           5187 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1601 74 15              5188 	mov	a,#0x15
   1603 F0                 5189 	movx	@dptr,a
                           5190 ;	..\COMMON\easyax5043.c:931: axradio_setaddrregs();
   1604 02 14 BE           5191 	ljmp	_axradio_setaddrregs
                           5192 ;------------------------------------------------------------
                           5193 ;Allocation info for local variables in function 'axradio_sync_addtime'
                           5194 ;------------------------------------------------------------
                           5195 ;dt                        Allocated to registers r4 r5 r6 r7 
                           5196 ;------------------------------------------------------------
                           5197 ;	..\COMMON\easyax5043.c:938: static __reentrantb void axradio_sync_addtime(uint32_t dt) __reentrant
                           5198 ;	-----------------------------------------
                           5199 ;	 function axradio_sync_addtime
                           5200 ;	-----------------------------------------
   1607                    5201 _axradio_sync_addtime:
   1607 AC 82              5202 	mov	r4,dpl
   1609 AD 83              5203 	mov	r5,dph
   160B AE F0              5204 	mov	r6,b
   160D FF                 5205 	mov	r7,a
                           5206 ;	..\COMMON\easyax5043.c:940: axradio_sync_time += dt;
   160E 90 00 10           5207 	mov	dptr,#_axradio_sync_time
   1611 E0                 5208 	movx	a,@dptr
   1612 F8                 5209 	mov	r0,a
   1613 A3                 5210 	inc	dptr
   1614 E0                 5211 	movx	a,@dptr
   1615 F9                 5212 	mov	r1,a
   1616 A3                 5213 	inc	dptr
   1617 E0                 5214 	movx	a,@dptr
   1618 FA                 5215 	mov	r2,a
   1619 A3                 5216 	inc	dptr
   161A E0                 5217 	movx	a,@dptr
   161B FB                 5218 	mov	r3,a
   161C 90 00 10           5219 	mov	dptr,#_axradio_sync_time
   161F EC                 5220 	mov	a,r4
   1620 28                 5221 	add	a,r0
   1621 F0                 5222 	movx	@dptr,a
   1622 ED                 5223 	mov	a,r5
   1623 39                 5224 	addc	a,r1
   1624 A3                 5225 	inc	dptr
   1625 F0                 5226 	movx	@dptr,a
   1626 EE                 5227 	mov	a,r6
   1627 3A                 5228 	addc	a,r2
   1628 A3                 5229 	inc	dptr
   1629 F0                 5230 	movx	@dptr,a
   162A EF                 5231 	mov	a,r7
   162B 3B                 5232 	addc	a,r3
   162C A3                 5233 	inc	dptr
   162D F0                 5234 	movx	@dptr,a
   162E 22                 5235 	ret
                           5236 ;------------------------------------------------------------
                           5237 ;Allocation info for local variables in function 'axradio_sync_subtime'
                           5238 ;------------------------------------------------------------
                           5239 ;dt                        Allocated to registers r4 r5 r6 r7 
                           5240 ;------------------------------------------------------------
                           5241 ;	..\COMMON\easyax5043.c:943: static __reentrantb void axradio_sync_subtime(uint32_t dt) __reentrant
                           5242 ;	-----------------------------------------
                           5243 ;	 function axradio_sync_subtime
                           5244 ;	-----------------------------------------
   162F                    5245 _axradio_sync_subtime:
   162F AC 82              5246 	mov	r4,dpl
   1631 AD 83              5247 	mov	r5,dph
   1633 AE F0              5248 	mov	r6,b
   1635 FF                 5249 	mov	r7,a
                           5250 ;	..\COMMON\easyax5043.c:945: axradio_sync_time -= dt;
   1636 90 00 10           5251 	mov	dptr,#_axradio_sync_time
   1639 E0                 5252 	movx	a,@dptr
   163A F8                 5253 	mov	r0,a
   163B A3                 5254 	inc	dptr
   163C E0                 5255 	movx	a,@dptr
   163D F9                 5256 	mov	r1,a
   163E A3                 5257 	inc	dptr
   163F E0                 5258 	movx	a,@dptr
   1640 FA                 5259 	mov	r2,a
   1641 A3                 5260 	inc	dptr
   1642 E0                 5261 	movx	a,@dptr
   1643 FB                 5262 	mov	r3,a
   1644 90 00 10           5263 	mov	dptr,#_axradio_sync_time
   1647 E8                 5264 	mov	a,r0
   1648 C3                 5265 	clr	c
   1649 9C                 5266 	subb	a,r4
   164A F0                 5267 	movx	@dptr,a
   164B E9                 5268 	mov	a,r1
   164C 9D                 5269 	subb	a,r5
   164D A3                 5270 	inc	dptr
   164E F0                 5271 	movx	@dptr,a
   164F EA                 5272 	mov	a,r2
   1650 9E                 5273 	subb	a,r6
   1651 A3                 5274 	inc	dptr
   1652 F0                 5275 	movx	@dptr,a
   1653 EB                 5276 	mov	a,r3
   1654 9F                 5277 	subb	a,r7
   1655 A3                 5278 	inc	dptr
   1656 F0                 5279 	movx	@dptr,a
   1657 22                 5280 	ret
                           5281 ;------------------------------------------------------------
                           5282 ;Allocation info for local variables in function 'axradio_sync_settimeradv'
                           5283 ;------------------------------------------------------------
                           5284 ;dt                        Allocated to registers r4 r5 r6 r7 
                           5285 ;------------------------------------------------------------
                           5286 ;	..\COMMON\easyax5043.c:948: static __reentrantb void axradio_sync_settimeradv(uint32_t dt) __reentrant
                           5287 ;	-----------------------------------------
                           5288 ;	 function axradio_sync_settimeradv
                           5289 ;	-----------------------------------------
   1658                    5290 _axradio_sync_settimeradv:
   1658 AC 82              5291 	mov	r4,dpl
   165A AD 83              5292 	mov	r5,dph
   165C AE F0              5293 	mov	r6,b
   165E FF                 5294 	mov	r7,a
                           5295 ;	..\COMMON\easyax5043.c:950: axradio_timer.time = axradio_sync_time;
   165F 90 00 10           5296 	mov	dptr,#_axradio_sync_time
   1662 E0                 5297 	movx	a,@dptr
   1663 F8                 5298 	mov	r0,a
   1664 A3                 5299 	inc	dptr
   1665 E0                 5300 	movx	a,@dptr
   1666 F9                 5301 	mov	r1,a
   1667 A3                 5302 	inc	dptr
   1668 E0                 5303 	movx	a,@dptr
   1669 FA                 5304 	mov	r2,a
   166A A3                 5305 	inc	dptr
   166B E0                 5306 	movx	a,@dptr
   166C FB                 5307 	mov	r3,a
   166D 90 02 8D           5308 	mov	dptr,#(_axradio_timer + 0x0004)
   1670 E8                 5309 	mov	a,r0
   1671 F0                 5310 	movx	@dptr,a
   1672 A3                 5311 	inc	dptr
   1673 E9                 5312 	mov	a,r1
   1674 F0                 5313 	movx	@dptr,a
   1675 A3                 5314 	inc	dptr
   1676 EA                 5315 	mov	a,r2
   1677 F0                 5316 	movx	@dptr,a
   1678 A3                 5317 	inc	dptr
   1679 EB                 5318 	mov	a,r3
   167A F0                 5319 	movx	@dptr,a
                           5320 ;	..\COMMON\easyax5043.c:951: axradio_timer.time -= dt;
   167B E8                 5321 	mov	a,r0
   167C C3                 5322 	clr	c
   167D 9C                 5323 	subb	a,r4
   167E FC                 5324 	mov	r4,a
   167F E9                 5325 	mov	a,r1
   1680 9D                 5326 	subb	a,r5
   1681 FD                 5327 	mov	r5,a
   1682 EA                 5328 	mov	a,r2
   1683 9E                 5329 	subb	a,r6
   1684 FE                 5330 	mov	r6,a
   1685 EB                 5331 	mov	a,r3
   1686 9F                 5332 	subb	a,r7
   1687 FF                 5333 	mov	r7,a
   1688 90 02 8D           5334 	mov	dptr,#(_axradio_timer + 0x0004)
   168B EC                 5335 	mov	a,r4
   168C F0                 5336 	movx	@dptr,a
   168D A3                 5337 	inc	dptr
   168E ED                 5338 	mov	a,r5
   168F F0                 5339 	movx	@dptr,a
   1690 A3                 5340 	inc	dptr
   1691 EE                 5341 	mov	a,r6
   1692 F0                 5342 	movx	@dptr,a
   1693 A3                 5343 	inc	dptr
   1694 EF                 5344 	mov	a,r7
   1695 F0                 5345 	movx	@dptr,a
   1696 22                 5346 	ret
                           5347 ;------------------------------------------------------------
                           5348 ;Allocation info for local variables in function 'axradio_sync_adjustperiodcorr'
                           5349 ;------------------------------------------------------------
                           5350 ;dt                        Allocated to registers r4 r5 r6 r7 
                           5351 ;------------------------------------------------------------
                           5352 ;	..\COMMON\easyax5043.c:954: static void axradio_sync_adjustperiodcorr(void)
                           5353 ;	-----------------------------------------
                           5354 ;	 function axradio_sync_adjustperiodcorr
                           5355 ;	-----------------------------------------
   1697                    5356 _axradio_sync_adjustperiodcorr:
                           5357 ;	..\COMMON\easyax5043.c:956: int32_t __autodata dt = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t) - axradio_sync_time;
   1697 90 02 38           5358 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   169A E0                 5359 	movx	a,@dptr
   169B FC                 5360 	mov	r4,a
   169C A3                 5361 	inc	dptr
   169D E0                 5362 	movx	a,@dptr
   169E FD                 5363 	mov	r5,a
   169F A3                 5364 	inc	dptr
   16A0 E0                 5365 	movx	a,@dptr
   16A1 FE                 5366 	mov	r6,a
   16A2 A3                 5367 	inc	dptr
   16A3 E0                 5368 	movx	a,@dptr
   16A4 8C 82              5369 	mov	dpl,r4
   16A6 8D 83              5370 	mov	dph,r5
   16A8 8E F0              5371 	mov	b,r6
   16AA 12 08 79           5372 	lcall	_axradio_conv_time_totimer0
   16AD AC 82              5373 	mov	r4,dpl
   16AF AD 83              5374 	mov	r5,dph
   16B1 AE F0              5375 	mov	r6,b
   16B3 FF                 5376 	mov	r7,a
   16B4 90 00 10           5377 	mov	dptr,#_axradio_sync_time
   16B7 E0                 5378 	movx	a,@dptr
   16B8 F8                 5379 	mov	r0,a
   16B9 A3                 5380 	inc	dptr
   16BA E0                 5381 	movx	a,@dptr
   16BB F9                 5382 	mov	r1,a
   16BC A3                 5383 	inc	dptr
   16BD E0                 5384 	movx	a,@dptr
   16BE FA                 5385 	mov	r2,a
   16BF A3                 5386 	inc	dptr
   16C0 E0                 5387 	movx	a,@dptr
   16C1 FB                 5388 	mov	r3,a
   16C2 EC                 5389 	mov	a,r4
   16C3 C3                 5390 	clr	c
   16C4 98                 5391 	subb	a,r0
   16C5 FC                 5392 	mov	r4,a
   16C6 ED                 5393 	mov	a,r5
   16C7 99                 5394 	subb	a,r1
   16C8 FD                 5395 	mov	r5,a
   16C9 EE                 5396 	mov	a,r6
   16CA 9A                 5397 	subb	a,r2
   16CB FE                 5398 	mov	r6,a
   16CC EF                 5399 	mov	a,r7
   16CD 9B                 5400 	subb	a,r3
   16CE FF                 5401 	mov	r7,a
                           5402 ;	..\COMMON\easyax5043.c:957: axradio_cb_receive.st.rx.phy.timeoffset = dt;
   16CF 8C 02              5403 	mov	ar2,r4
   16D1 8D 03              5404 	mov	ar3,r5
   16D3 90 02 42           5405 	mov	dptr,#(_axradio_cb_receive + 0x0010)
   16D6 EA                 5406 	mov	a,r2
   16D7 F0                 5407 	movx	@dptr,a
   16D8 A3                 5408 	inc	dptr
   16D9 EB                 5409 	mov	a,r3
   16DA F0                 5410 	movx	@dptr,a
                           5411 ;	..\COMMON\easyax5043.c:958: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod)) {
   16DB 90 00 14           5412 	mov	dptr,#_axradio_sync_periodcorr
   16DE E0                 5413 	movx	a,@dptr
   16DF FA                 5414 	mov	r2,a
   16E0 A3                 5415 	inc	dptr
   16E1 E0                 5416 	movx	a,@dptr
   16E2 FB                 5417 	mov	r3,a
   16E3 90 4B C4           5418 	mov	dptr,#_axradio_sync_slave_maxperiod
   16E6 E4                 5419 	clr	a
   16E7 93                 5420 	movc	a,@a+dptr
   16E8 C0 E0              5421 	push	acc
   16EA 74 01              5422 	mov	a,#0x01
   16EC 93                 5423 	movc	a,@a+dptr
   16ED C0 E0              5424 	push	acc
   16EF 8A 82              5425 	mov	dpl,r2
   16F1 8B 83              5426 	mov	dph,r3
   16F3 12 45 06           5427 	lcall	_checksignedlimit16
   16F6 AB 82              5428 	mov	r3,dpl
   16F8 15 81              5429 	dec	sp
   16FA 15 81              5430 	dec	sp
   16FC EB                 5431 	mov	a,r3
   16FD 70 4B              5432 	jnz	00102$
                           5433 ;	..\COMMON\easyax5043.c:959: axradio_sync_addtime(dt);
   16FF 8C 82              5434 	mov	dpl,r4
   1701 8D 83              5435 	mov	dph,r5
   1703 8E F0              5436 	mov	b,r6
   1705 EF                 5437 	mov	a,r7
   1706 C0 07              5438 	push	ar7
   1708 C0 06              5439 	push	ar6
   170A C0 05              5440 	push	ar5
   170C C0 04              5441 	push	ar4
   170E 12 16 07           5442 	lcall	_axradio_sync_addtime
   1711 D0 04              5443 	pop	ar4
   1713 D0 05              5444 	pop	ar5
   1715 D0 06              5445 	pop	ar6
   1717 D0 07              5446 	pop	ar7
                           5447 ;	..\COMMON\easyax5043.c:960: dt <<= SYNC_K1;
   1719 EF                 5448 	mov	a,r7
   171A C4                 5449 	swap	a
   171B 23                 5450 	rl	a
   171C 54 E0              5451 	anl	a,#0xE0
   171E CE                 5452 	xch	a,r6
   171F C4                 5453 	swap	a
   1720 23                 5454 	rl	a
   1721 CE                 5455 	xch	a,r6
   1722 6E                 5456 	xrl	a,r6
   1723 CE                 5457 	xch	a,r6
   1724 54 E0              5458 	anl	a,#0xE0
   1726 CE                 5459 	xch	a,r6
   1727 6E                 5460 	xrl	a,r6
   1728 FF                 5461 	mov	r7,a
   1729 ED                 5462 	mov	a,r5
   172A C4                 5463 	swap	a
   172B 23                 5464 	rl	a
   172C 54 1F              5465 	anl	a,#0x1F
   172E 4E                 5466 	orl	a,r6
   172F FE                 5467 	mov	r6,a
   1730 ED                 5468 	mov	a,r5
   1731 C4                 5469 	swap	a
   1732 23                 5470 	rl	a
   1733 54 E0              5471 	anl	a,#0xE0
   1735 CC                 5472 	xch	a,r4
   1736 C4                 5473 	swap	a
   1737 23                 5474 	rl	a
   1738 CC                 5475 	xch	a,r4
   1739 6C                 5476 	xrl	a,r4
   173A CC                 5477 	xch	a,r4
   173B 54 E0              5478 	anl	a,#0xE0
   173D CC                 5479 	xch	a,r4
   173E 6C                 5480 	xrl	a,r4
   173F FD                 5481 	mov	r5,a
                           5482 ;	..\COMMON\easyax5043.c:961: axradio_sync_periodcorr = dt;
   1740 90 00 14           5483 	mov	dptr,#_axradio_sync_periodcorr
   1743 EC                 5484 	mov	a,r4
   1744 F0                 5485 	movx	@dptr,a
   1745 A3                 5486 	inc	dptr
   1746 ED                 5487 	mov	a,r5
   1747 F0                 5488 	movx	@dptr,a
   1748 80 48              5489 	sjmp	00103$
   174A                    5490 00102$:
                           5491 ;	..\COMMON\easyax5043.c:963: axradio_sync_periodcorr += dt;
   174A 90 00 14           5492 	mov	dptr,#_axradio_sync_periodcorr
   174D E0                 5493 	movx	a,@dptr
   174E FA                 5494 	mov	r2,a
   174F A3                 5495 	inc	dptr
   1750 E0                 5496 	movx	a,@dptr
   1751 FB                 5497 	mov	r3,a
   1752 8A 00              5498 	mov	ar0,r2
   1754 EB                 5499 	mov	a,r3
   1755 F9                 5500 	mov	r1,a
   1756 33                 5501 	rlc	a
   1757 95 E0              5502 	subb	a,acc
   1759 FA                 5503 	mov	r2,a
   175A FB                 5504 	mov	r3,a
   175B EC                 5505 	mov	a,r4
   175C 28                 5506 	add	a,r0
   175D F8                 5507 	mov	r0,a
   175E ED                 5508 	mov	a,r5
   175F 39                 5509 	addc	a,r1
   1760 F9                 5510 	mov	r1,a
   1761 EE                 5511 	mov	a,r6
   1762 3A                 5512 	addc	a,r2
   1763 EF                 5513 	mov	a,r7
   1764 3B                 5514 	addc	a,r3
   1765 90 00 14           5515 	mov	dptr,#_axradio_sync_periodcorr
   1768 E8                 5516 	mov	a,r0
   1769 F0                 5517 	movx	@dptr,a
   176A A3                 5518 	inc	dptr
   176B E9                 5519 	mov	a,r1
   176C F0                 5520 	movx	@dptr,a
                           5521 ;	..\COMMON\easyax5043.c:964: dt >>= SYNC_K0;
   176D EF                 5522 	mov	a,r7
   176E A2 E7              5523 	mov	c,acc.7
   1770 13                 5524 	rrc	a
   1771 FF                 5525 	mov	r7,a
   1772 EE                 5526 	mov	a,r6
   1773 13                 5527 	rrc	a
   1774 FE                 5528 	mov	r6,a
   1775 ED                 5529 	mov	a,r5
   1776 13                 5530 	rrc	a
   1777 FD                 5531 	mov	r5,a
   1778 EC                 5532 	mov	a,r4
   1779 13                 5533 	rrc	a
   177A FC                 5534 	mov	r4,a
   177B EF                 5535 	mov	a,r7
   177C A2 E7              5536 	mov	c,acc.7
   177E 13                 5537 	rrc	a
   177F FF                 5538 	mov	r7,a
   1780 EE                 5539 	mov	a,r6
   1781 13                 5540 	rrc	a
   1782 FE                 5541 	mov	r6,a
   1783 ED                 5542 	mov	a,r5
   1784 13                 5543 	rrc	a
   1785 FD                 5544 	mov	r5,a
   1786 EC                 5545 	mov	a,r4
   1787 13                 5546 	rrc	a
                           5547 ;	..\COMMON\easyax5043.c:965: axradio_sync_addtime(dt);
   1788 F5 82              5548 	mov	dpl,a
   178A 8D 83              5549 	mov	dph,r5
   178C 8E F0              5550 	mov	b,r6
   178E EF                 5551 	mov	a,r7
   178F 12 16 07           5552 	lcall	_axradio_sync_addtime
   1792                    5553 00103$:
                           5554 ;	..\COMMON\easyax5043.c:967: axradio_sync_periodcorr = signedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod);
   1792 90 00 14           5555 	mov	dptr,#_axradio_sync_periodcorr
   1795 E0                 5556 	movx	a,@dptr
   1796 FE                 5557 	mov	r6,a
   1797 A3                 5558 	inc	dptr
   1798 E0                 5559 	movx	a,@dptr
   1799 FF                 5560 	mov	r7,a
   179A 90 4B C4           5561 	mov	dptr,#_axradio_sync_slave_maxperiod
   179D E4                 5562 	clr	a
   179E 93                 5563 	movc	a,@a+dptr
   179F C0 E0              5564 	push	acc
   17A1 74 01              5565 	mov	a,#0x01
   17A3 93                 5566 	movc	a,@a+dptr
   17A4 C0 E0              5567 	push	acc
   17A6 8E 82              5568 	mov	dpl,r6
   17A8 8F 83              5569 	mov	dph,r7
   17AA 12 45 DE           5570 	lcall	_signedlimit16
   17AD AE 82              5571 	mov	r6,dpl
   17AF AF 83              5572 	mov	r7,dph
   17B1 15 81              5573 	dec	sp
   17B3 15 81              5574 	dec	sp
   17B5 90 00 14           5575 	mov	dptr,#_axradio_sync_periodcorr
   17B8 EE                 5576 	mov	a,r6
   17B9 F0                 5577 	movx	@dptr,a
   17BA A3                 5578 	inc	dptr
   17BB EF                 5579 	mov	a,r7
   17BC F0                 5580 	movx	@dptr,a
   17BD 22                 5581 	ret
                           5582 ;------------------------------------------------------------
                           5583 ;Allocation info for local variables in function 'axradio_sync_slave_nextperiod'
                           5584 ;------------------------------------------------------------
                           5585 ;c                         Allocated to registers r6 r7 
                           5586 ;------------------------------------------------------------
                           5587 ;	..\COMMON\easyax5043.c:970: static void axradio_sync_slave_nextperiod()
                           5588 ;	-----------------------------------------
                           5589 ;	 function axradio_sync_slave_nextperiod
                           5590 ;	-----------------------------------------
   17BE                    5591 _axradio_sync_slave_nextperiod:
                           5592 ;	..\COMMON\easyax5043.c:972: axradio_sync_addtime(axradio_sync_period);
   17BE 90 4B B0           5593 	mov	dptr,#_axradio_sync_period
   17C1 E4                 5594 	clr	a
   17C2 93                 5595 	movc	a,@a+dptr
   17C3 FC                 5596 	mov	r4,a
   17C4 74 01              5597 	mov	a,#0x01
   17C6 93                 5598 	movc	a,@a+dptr
   17C7 FD                 5599 	mov	r5,a
   17C8 74 02              5600 	mov	a,#0x02
   17CA 93                 5601 	movc	a,@a+dptr
   17CB FE                 5602 	mov	r6,a
   17CC 74 03              5603 	mov	a,#0x03
   17CE 93                 5604 	movc	a,@a+dptr
   17CF 8C 82              5605 	mov	dpl,r4
   17D1 8D 83              5606 	mov	dph,r5
   17D3 8E F0              5607 	mov	b,r6
   17D5 12 16 07           5608 	lcall	_axradio_sync_addtime
                           5609 ;	..\COMMON\easyax5043.c:973: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod))
   17D8 90 00 14           5610 	mov	dptr,#_axradio_sync_periodcorr
   17DB E0                 5611 	movx	a,@dptr
   17DC FE                 5612 	mov	r6,a
   17DD A3                 5613 	inc	dptr
   17DE E0                 5614 	movx	a,@dptr
   17DF FF                 5615 	mov	r7,a
   17E0 90 4B C4           5616 	mov	dptr,#_axradio_sync_slave_maxperiod
   17E3 E4                 5617 	clr	a
   17E4 93                 5618 	movc	a,@a+dptr
   17E5 C0 E0              5619 	push	acc
   17E7 74 01              5620 	mov	a,#0x01
   17E9 93                 5621 	movc	a,@a+dptr
   17EA C0 E0              5622 	push	acc
   17EC 8E 82              5623 	mov	dpl,r6
   17EE 8F 83              5624 	mov	dph,r7
   17F0 12 45 06           5625 	lcall	_checksignedlimit16
   17F3 AF 82              5626 	mov	r7,dpl
   17F5 15 81              5627 	dec	sp
   17F7 15 81              5628 	dec	sp
   17F9 EF                 5629 	mov	a,r7
   17FA 70 01              5630 	jnz	00102$
                           5631 ;	..\COMMON\easyax5043.c:974: return;
   17FC 22                 5632 	ret
   17FD                    5633 00102$:
                           5634 ;	..\COMMON\easyax5043.c:976: int16_t __autodata c = axradio_sync_periodcorr;
   17FD 90 00 14           5635 	mov	dptr,#_axradio_sync_periodcorr
   1800 E0                 5636 	movx	a,@dptr
   1801 FE                 5637 	mov	r6,a
   1802 A3                 5638 	inc	dptr
   1803 E0                 5639 	movx	a,@dptr
                           5640 ;	..\COMMON\easyax5043.c:977: axradio_sync_addtime(c >> SYNC_K1);
   1804 FF                 5641 	mov	r7,a
   1805 C4                 5642 	swap	a
   1806 03                 5643 	rr	a
   1807 CE                 5644 	xch	a,r6
   1808 C4                 5645 	swap	a
   1809 03                 5646 	rr	a
   180A 54 07              5647 	anl	a,#0x07
   180C 6E                 5648 	xrl	a,r6
   180D CE                 5649 	xch	a,r6
   180E 54 07              5650 	anl	a,#0x07
   1810 CE                 5651 	xch	a,r6
   1811 6E                 5652 	xrl	a,r6
   1812 CE                 5653 	xch	a,r6
   1813 30 E2 02           5654 	jnb	acc.2,00108$
   1816 44 F8              5655 	orl	a,#0xF8
   1818                    5656 00108$:
   1818 FF                 5657 	mov	r7,a
   1819 33                 5658 	rlc	a
   181A 95 E0              5659 	subb	a,acc
   181C FD                 5660 	mov	r5,a
   181D 8E 82              5661 	mov	dpl,r6
   181F 8F 83              5662 	mov	dph,r7
   1821 8D F0              5663 	mov	b,r5
   1823 02 16 07           5664 	ljmp	_axradio_sync_addtime
                           5665 ;------------------------------------------------------------
                           5666 ;Allocation info for local variables in function 'axradio_timer_callback'
                           5667 ;------------------------------------------------------------
                           5668 ;desc                      Allocated to registers 
                           5669 ;r                         Allocated to registers r7 
                           5670 ;idx                       Allocated to registers r7 
                           5671 ;idx                       Allocated to registers r7 
                           5672 ;------------------------------------------------------------
                           5673 ;	..\COMMON\easyax5043.c:983: static void axradio_timer_callback(struct wtimer_desc __xdata *desc)
                           5674 ;	-----------------------------------------
                           5675 ;	 function axradio_timer_callback
                           5676 ;	-----------------------------------------
   1826                    5677 _axradio_timer_callback:
                           5678 ;	..\COMMON\easyax5043.c:986: switch (axradio_mode) {
   1826 AF 0A              5679 	mov	r7,_axradio_mode
   1828 BF 10 00           5680 	cjne	r7,#0x10,00231$
   182B                    5681 00231$:
   182B 50 01              5682 	jnc	00232$
   182D 22                 5683 	ret
   182E                    5684 00232$:
   182E EF                 5685 	mov	a,r7
   182F 24 DC              5686 	add	a,#0xff - 0x23
   1831 50 01              5687 	jnc	00233$
   1833 22                 5688 	ret
   1834                    5689 00233$:
   1834 EF                 5690 	mov	a,r7
   1835 24 F0              5691 	add	a,#0xF0
   1837 FF                 5692 	mov	r7,a
   1838 24 09              5693 	add	a,#(00234$-3-.)
   183A 83                 5694 	movc	a,@a+pc
   183B C0 E0              5695 	push	acc
   183D EF                 5696 	mov	a,r7
   183E 24 17              5697 	add	a,#(00235$-3-.)
   1840 83                 5698 	movc	a,@a+pc
   1841 C0 E0              5699 	push	acc
   1843 22                 5700 	ret
   1844                    5701 00234$:
   1844 0A                 5702 	.db	00110$
   1845 0A                 5703 	.db	00111$
   1846 A0                 5704 	.db	00121$
   1847 A0                 5705 	.db	00122$
   1848 24                 5706 	.db	00171$
   1849 24                 5707 	.db	00171$
   184A 24                 5708 	.db	00171$
   184B 24                 5709 	.db	00171$
   184C 6C                 5710 	.db	00104$
   184D 6C                 5711 	.db	00105$
   184E 01                 5712 	.db	00127$
   184F 01                 5713 	.db	00128$
   1850 6C                 5714 	.db	00101$
   1851 6C                 5715 	.db	00102$
   1852 6C                 5716 	.db	00103$
   1853 24                 5717 	.db	00171$
   1854 97                 5718 	.db	00137$
   1855 97                 5719 	.db	00138$
   1856 35                 5720 	.db	00150$
   1857 35                 5721 	.db	00151$
   1858                    5722 00235$:
   1858 19                 5723 	.db	00110$>>8
   1859 19                 5724 	.db	00111$>>8
   185A 19                 5725 	.db	00121$>>8
   185B 19                 5726 	.db	00122$>>8
   185C 20                 5727 	.db	00171$>>8
   185D 20                 5728 	.db	00171$>>8
   185E 20                 5729 	.db	00171$>>8
   185F 20                 5730 	.db	00171$>>8
   1860 18                 5731 	.db	00104$>>8
   1861 18                 5732 	.db	00105$>>8
   1862 1A                 5733 	.db	00127$>>8
   1863 1A                 5734 	.db	00128$>>8
   1864 18                 5735 	.db	00101$>>8
   1865 18                 5736 	.db	00102$>>8
   1866 18                 5737 	.db	00103$>>8
   1867 20                 5738 	.db	00171$>>8
   1868 1A                 5739 	.db	00137$>>8
   1869 1A                 5740 	.db	00138$>>8
   186A 1C                 5741 	.db	00150$>>8
   186B 1C                 5742 	.db	00151$>>8
                           5743 ;	..\COMMON\easyax5043.c:987: case AXRADIO_MODE_STREAM_RECEIVE:
   186C                    5744 00101$:
                           5745 ;	..\COMMON\easyax5043.c:988: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   186C                    5746 00102$:
                           5747 ;	..\COMMON\easyax5043.c:989: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   186C                    5748 00103$:
                           5749 ;	..\COMMON\easyax5043.c:990: case AXRADIO_MODE_ASYNC_RECEIVE:
   186C                    5750 00104$:
                           5751 ;	..\COMMON\easyax5043.c:991: case AXRADIO_MODE_WOR_RECEIVE:
   186C                    5752 00105$:
                           5753 ;	..\COMMON\easyax5043.c:992: if (axradio_syncstate == syncstate_asynctx)
   186C 90 00 04           5754 	mov	dptr,#_axradio_syncstate
   186F E0                 5755 	movx	a,@dptr
   1870 FF                 5756 	mov	r7,a
   1871 BF 02 03           5757 	cjne	r7,#0x02,00236$
   1874 02 19 0A           5758 	ljmp	00112$
   1877                    5759 00236$:
                           5760 ;	..\COMMON\easyax5043.c:994: wtimer_remove(&axradio_timer);
   1877 90 02 89           5761 	mov	dptr,#_axradio_timer
   187A 12 46 8F           5762 	lcall	_wtimer_remove
                           5763 ;	..\COMMON\easyax5043.c:995: rearmcstimer:
   187D                    5764 00108$:
                           5765 ;	..\COMMON\easyax5043.c:996: axradio_timer.time = axradio_phy_cs_period;
   187D 90 4B 81           5766 	mov	dptr,#_axradio_phy_cs_period
   1880 E4                 5767 	clr	a
   1881 93                 5768 	movc	a,@a+dptr
   1882 FE                 5769 	mov	r6,a
   1883 74 01              5770 	mov	a,#0x01
   1885 93                 5771 	movc	a,@a+dptr
   1886 FF                 5772 	mov	r7,a
   1887 7D 00              5773 	mov	r5,#0x00
   1889 7C 00              5774 	mov	r4,#0x00
   188B 90 02 8D           5775 	mov	dptr,#(_axradio_timer + 0x0004)
   188E EE                 5776 	mov	a,r6
   188F F0                 5777 	movx	@dptr,a
   1890 A3                 5778 	inc	dptr
   1891 EF                 5779 	mov	a,r7
   1892 F0                 5780 	movx	@dptr,a
   1893 A3                 5781 	inc	dptr
   1894 ED                 5782 	mov	a,r5
   1895 F0                 5783 	movx	@dptr,a
   1896 A3                 5784 	inc	dptr
   1897 EC                 5785 	mov	a,r4
   1898 F0                 5786 	movx	@dptr,a
                           5787 ;	..\COMMON\easyax5043.c:997: wtimer0_addrelative(&axradio_timer);
   1899 90 02 89           5788 	mov	dptr,#_axradio_timer
   189C 12 3E 95           5789 	lcall	_wtimer0_addrelative
                           5790 ;	..\COMMON\easyax5043.c:998: chanstatecb:
   189F                    5791 00109$:
                           5792 ;	..\COMMON\easyax5043.c:999: update_timeanchor();
   189F 12 08 37           5793 	lcall	_update_timeanchor
                           5794 ;	..\COMMON\easyax5043.c:1000: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   18A2 90 02 5E           5795 	mov	dptr,#_axradio_cb_channelstate
   18A5 12 48 E0           5796 	lcall	_wtimer_remove_callback
                           5797 ;	..\COMMON\easyax5043.c:1001: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   18A8 90 02 63           5798 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   18AB E4                 5799 	clr	a
   18AC F0                 5800 	movx	@dptr,a
                           5801 ;	..\COMMON\easyax5043.c:1003: int8_t __autodata r = AX5043_RSSI;
   18AD 90 40 40           5802 	mov	dptr,#_AX5043_RSSI
   18B0 E0                 5803 	movx	a,@dptr
                           5804 ;	..\COMMON\easyax5043.c:1004: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   18B1 FF                 5805 	mov	r7,a
   18B2 FD                 5806 	mov	r5,a
   18B3 33                 5807 	rlc	a
   18B4 95 E0              5808 	subb	a,acc
   18B6 FE                 5809 	mov	r6,a
   18B7 90 4B 7E           5810 	mov	dptr,#_axradio_phy_rssioffset
   18BA E4                 5811 	clr	a
   18BB 93                 5812 	movc	a,@a+dptr
   18BC FC                 5813 	mov	r4,a
   18BD 33                 5814 	rlc	a
   18BE 95 E0              5815 	subb	a,acc
   18C0 FB                 5816 	mov	r3,a
   18C1 ED                 5817 	mov	a,r5
   18C2 C3                 5818 	clr	c
   18C3 9C                 5819 	subb	a,r4
   18C4 FD                 5820 	mov	r5,a
   18C5 EE                 5821 	mov	a,r6
   18C6 9B                 5822 	subb	a,r3
   18C7 FE                 5823 	mov	r6,a
   18C8 90 02 68           5824 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   18CB ED                 5825 	mov	a,r5
   18CC F0                 5826 	movx	@dptr,a
   18CD A3                 5827 	inc	dptr
   18CE EE                 5828 	mov	a,r6
   18CF F0                 5829 	movx	@dptr,a
                           5830 ;	..\COMMON\easyax5043.c:1005: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   18D0 90 4B 80           5831 	mov	dptr,#_axradio_phy_channelbusy
   18D3 E4                 5832 	clr	a
   18D4 93                 5833 	movc	a,@a+dptr
   18D5 FE                 5834 	mov	r6,a
   18D6 C3                 5835 	clr	c
   18D7 EF                 5836 	mov	a,r7
   18D8 64 80              5837 	xrl	a,#0x80
   18DA 8E F0              5838 	mov	b,r6
   18DC 63 F0 80           5839 	xrl	b,#0x80
   18DF 95 F0              5840 	subb	a,b
   18E1 B3                 5841 	cpl	c
   18E2 E4                 5842 	clr	a
   18E3 33                 5843 	rlc	a
   18E4 90 02 6A           5844 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   18E7 F0                 5845 	movx	@dptr,a
                           5846 ;	..\COMMON\easyax5043.c:1007: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   18E8 90 00 1A           5847 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   18EB E0                 5848 	movx	a,@dptr
   18EC FC                 5849 	mov	r4,a
   18ED A3                 5850 	inc	dptr
   18EE E0                 5851 	movx	a,@dptr
   18EF FD                 5852 	mov	r5,a
   18F0 A3                 5853 	inc	dptr
   18F1 E0                 5854 	movx	a,@dptr
   18F2 FE                 5855 	mov	r6,a
   18F3 A3                 5856 	inc	dptr
   18F4 E0                 5857 	movx	a,@dptr
   18F5 FF                 5858 	mov	r7,a
   18F6 90 02 64           5859 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   18F9 EC                 5860 	mov	a,r4
   18FA F0                 5861 	movx	@dptr,a
   18FB A3                 5862 	inc	dptr
   18FC ED                 5863 	mov	a,r5
   18FD F0                 5864 	movx	@dptr,a
   18FE A3                 5865 	inc	dptr
   18FF EE                 5866 	mov	a,r6
   1900 F0                 5867 	movx	@dptr,a
   1901 A3                 5868 	inc	dptr
   1902 EF                 5869 	mov	a,r7
   1903 F0                 5870 	movx	@dptr,a
                           5871 ;	..\COMMON\easyax5043.c:1008: wtimer_add_callback(&axradio_cb_channelstate.cb);
   1904 90 02 5E           5872 	mov	dptr,#_axradio_cb_channelstate
                           5873 ;	..\COMMON\easyax5043.c:1009: break;
   1907 02 3E 7B           5874 	ljmp	_wtimer_add_callback
                           5875 ;	..\COMMON\easyax5043.c:1011: case AXRADIO_MODE_ASYNC_TRANSMIT:
   190A                    5876 00110$:
                           5877 ;	..\COMMON\easyax5043.c:1012: case AXRADIO_MODE_WOR_TRANSMIT:
   190A                    5878 00111$:
                           5879 ;	..\COMMON\easyax5043.c:1013: transmitcs:
   190A                    5880 00112$:
                           5881 ;	..\COMMON\easyax5043.c:1014: if (axradio_ack_count)
   190A 90 00 0E           5882 	mov	dptr,#_axradio_ack_count
   190D E0                 5883 	movx	a,@dptr
   190E FF                 5884 	mov	r7,a
   190F 60 06              5885 	jz	00114$
                           5886 ;	..\COMMON\easyax5043.c:1015: --axradio_ack_count;
   1911 EF                 5887 	mov	a,r7
   1912 14                 5888 	dec	a
   1913 90 00 0E           5889 	mov	dptr,#_axradio_ack_count
   1916 F0                 5890 	movx	@dptr,a
   1917                    5891 00114$:
                           5892 ;	..\COMMON\easyax5043.c:1016: wtimer_remove(&axradio_timer);
   1917 90 02 89           5893 	mov	dptr,#_axradio_timer
   191A 12 46 8F           5894 	lcall	_wtimer_remove
                           5895 ;	..\COMMON\easyax5043.c:1017: if ((int8_t)AX5043_RSSI < axradio_phy_channelbusy ||
   191D 90 40 40           5896 	mov	dptr,#_AX5043_RSSI
   1920 E0                 5897 	movx	a,@dptr
   1921 FF                 5898 	mov	r7,a
   1922 90 4B 80           5899 	mov	dptr,#_axradio_phy_channelbusy
   1925 E4                 5900 	clr	a
   1926 93                 5901 	movc	a,@a+dptr
   1927 FE                 5902 	mov	r6,a
   1928 C3                 5903 	clr	c
   1929 EF                 5904 	mov	a,r7
   192A 64 80              5905 	xrl	a,#0x80
   192C 8E F0              5906 	mov	b,r6
   192E 63 F0 80           5907 	xrl	b,#0x80
   1931 95 F0              5908 	subb	a,b
   1933 40 0F              5909 	jc	00115$
                           5910 ;	..\COMMON\easyax5043.c:1018: (!axradio_ack_count && axradio_phy_lbt_forcetx)) {
   1935 90 00 0E           5911 	mov	dptr,#_axradio_ack_count
   1938 E0                 5912 	movx	a,@dptr
   1939 FF                 5913 	mov	r7,a
   193A 70 25              5914 	jnz	00116$
   193C 90 4B 85           5915 	mov	dptr,#_axradio_phy_lbt_forcetx
   193F E4                 5916 	clr	a
   1940 93                 5917 	movc	a,@a+dptr
   1941 FE                 5918 	mov	r6,a
   1942 60 1D              5919 	jz	00116$
   1944                    5920 00115$:
                           5921 ;	..\COMMON\easyax5043.c:1019: axradio_syncstate = syncstate_off;
   1944 90 00 04           5922 	mov	dptr,#_axradio_syncstate
   1947 E4                 5923 	clr	a
   1948 F0                 5924 	movx	@dptr,a
                           5925 ;	..\COMMON\easyax5043.c:1020: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1949 90 4B 8C           5926 	mov	dptr,#_axradio_phy_preamble_longlen
   194C E4                 5927 	clr	a
   194D 93                 5928 	movc	a,@a+dptr
   194E FD                 5929 	mov	r5,a
   194F 74 01              5930 	mov	a,#0x01
   1951 93                 5931 	movc	a,@a+dptr
   1952 FE                 5932 	mov	r6,a
   1953 90 00 07           5933 	mov	dptr,#_axradio_txbuffer_cnt
   1956 ED                 5934 	mov	a,r5
   1957 F0                 5935 	movx	@dptr,a
   1958 A3                 5936 	inc	dptr
   1959 EE                 5937 	mov	a,r6
   195A F0                 5938 	movx	@dptr,a
                           5939 ;	..\COMMON\easyax5043.c:1021: ax5043_prepare_tx();
   195B 12 14 47           5940 	lcall	_ax5043_prepare_tx
                           5941 ;	..\COMMON\easyax5043.c:1022: goto chanstatecb;
   195E 02 18 9F           5942 	ljmp	00109$
   1961                    5943 00116$:
                           5944 ;	..\COMMON\easyax5043.c:1024: if (axradio_ack_count)
   1961 EF                 5945 	mov	a,r7
   1962 60 03              5946 	jz	00242$
   1964 02 18 7D           5947 	ljmp	00108$
   1967                    5948 00242$:
                           5949 ;	..\COMMON\easyax5043.c:1026: update_timeanchor();
   1967 12 08 37           5950 	lcall	_update_timeanchor
                           5951 ;	..\COMMON\easyax5043.c:1027: axradio_syncstate = syncstate_off;
   196A 90 00 04           5952 	mov	dptr,#_axradio_syncstate
   196D E4                 5953 	clr	a
   196E F0                 5954 	movx	@dptr,a
                           5955 ;	..\COMMON\easyax5043.c:1028: ax5043_off();
   196F 12 14 6D           5956 	lcall	_ax5043_off
                           5957 ;	..\COMMON\easyax5043.c:1029: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1972 90 02 6B           5958 	mov	dptr,#_axradio_cb_transmitstart
   1975 12 48 E0           5959 	lcall	_wtimer_remove_callback
                           5960 ;	..\COMMON\easyax5043.c:1030: axradio_cb_transmitstart.st.error = AXRADIO_ERR_TIMEOUT;
   1978 90 02 70           5961 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   197B 74 03              5962 	mov	a,#0x03
   197D F0                 5963 	movx	@dptr,a
                           5964 ;	..\COMMON\easyax5043.c:1031: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   197E 90 00 1A           5965 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1981 E0                 5966 	movx	a,@dptr
   1982 FC                 5967 	mov	r4,a
   1983 A3                 5968 	inc	dptr
   1984 E0                 5969 	movx	a,@dptr
   1985 FD                 5970 	mov	r5,a
   1986 A3                 5971 	inc	dptr
   1987 E0                 5972 	movx	a,@dptr
   1988 FE                 5973 	mov	r6,a
   1989 A3                 5974 	inc	dptr
   198A E0                 5975 	movx	a,@dptr
   198B FF                 5976 	mov	r7,a
   198C 90 02 71           5977 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   198F EC                 5978 	mov	a,r4
   1990 F0                 5979 	movx	@dptr,a
   1991 A3                 5980 	inc	dptr
   1992 ED                 5981 	mov	a,r5
   1993 F0                 5982 	movx	@dptr,a
   1994 A3                 5983 	inc	dptr
   1995 EE                 5984 	mov	a,r6
   1996 F0                 5985 	movx	@dptr,a
   1997 A3                 5986 	inc	dptr
   1998 EF                 5987 	mov	a,r7
   1999 F0                 5988 	movx	@dptr,a
                           5989 ;	..\COMMON\easyax5043.c:1032: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   199A 90 02 6B           5990 	mov	dptr,#_axradio_cb_transmitstart
                           5991 ;	..\COMMON\easyax5043.c:1033: break;
   199D 02 3E 7B           5992 	ljmp	_wtimer_add_callback
                           5993 ;	..\COMMON\easyax5043.c:1035: case AXRADIO_MODE_ACK_TRANSMIT:
   19A0                    5994 00121$:
                           5995 ;	..\COMMON\easyax5043.c:1036: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   19A0                    5996 00122$:
                           5997 ;	..\COMMON\easyax5043.c:1037: if (axradio_syncstate == syncstate_lbt)
   19A0 90 00 04           5998 	mov	dptr,#_axradio_syncstate
   19A3 E0                 5999 	movx	a,@dptr
   19A4 FF                 6000 	mov	r7,a
   19A5 BF 01 03           6001 	cjne	r7,#0x01,00243$
   19A8 02 19 0A           6002 	ljmp	00112$
   19AB                    6003 00243$:
                           6004 ;	..\COMMON\easyax5043.c:1039: ax5043_off();
   19AB 12 14 6D           6005 	lcall	_ax5043_off
                           6006 ;	..\COMMON\easyax5043.c:1040: if (!axradio_ack_count) {
   19AE 90 00 0E           6007 	mov	dptr,#_axradio_ack_count
   19B1 E0                 6008 	movx	a,@dptr
   19B2 FF                 6009 	mov	r7,a
   19B3 70 31              6010 	jnz	00126$
                           6011 ;	..\COMMON\easyax5043.c:1041: update_timeanchor();
   19B5 12 08 37           6012 	lcall	_update_timeanchor
                           6013 ;	..\COMMON\easyax5043.c:1042: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   19B8 90 02 75           6014 	mov	dptr,#_axradio_cb_transmitend
   19BB 12 48 E0           6015 	lcall	_wtimer_remove_callback
                           6016 ;	..\COMMON\easyax5043.c:1043: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   19BE 90 02 7A           6017 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   19C1 74 03              6018 	mov	a,#0x03
   19C3 F0                 6019 	movx	@dptr,a
                           6020 ;	..\COMMON\easyax5043.c:1044: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   19C4 90 00 1A           6021 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   19C7 E0                 6022 	movx	a,@dptr
   19C8 FB                 6023 	mov	r3,a
   19C9 A3                 6024 	inc	dptr
   19CA E0                 6025 	movx	a,@dptr
   19CB FC                 6026 	mov	r4,a
   19CC A3                 6027 	inc	dptr
   19CD E0                 6028 	movx	a,@dptr
   19CE FD                 6029 	mov	r5,a
   19CF A3                 6030 	inc	dptr
   19D0 E0                 6031 	movx	a,@dptr
   19D1 FE                 6032 	mov	r6,a
   19D2 90 02 7B           6033 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   19D5 EB                 6034 	mov	a,r3
   19D6 F0                 6035 	movx	@dptr,a
   19D7 A3                 6036 	inc	dptr
   19D8 EC                 6037 	mov	a,r4
   19D9 F0                 6038 	movx	@dptr,a
   19DA A3                 6039 	inc	dptr
   19DB ED                 6040 	mov	a,r5
   19DC F0                 6041 	movx	@dptr,a
   19DD A3                 6042 	inc	dptr
   19DE EE                 6043 	mov	a,r6
   19DF F0                 6044 	movx	@dptr,a
                           6045 ;	..\COMMON\easyax5043.c:1045: wtimer_add_callback(&axradio_cb_transmitend.cb);
   19E0 90 02 75           6046 	mov	dptr,#_axradio_cb_transmitend
                           6047 ;	..\COMMON\easyax5043.c:1046: break;
   19E3 02 3E 7B           6048 	ljmp	_wtimer_add_callback
   19E6                    6049 00126$:
                           6050 ;	..\COMMON\easyax5043.c:1048: --axradio_ack_count;
   19E6 EF                 6051 	mov	a,r7
   19E7 14                 6052 	dec	a
   19E8 90 00 0E           6053 	mov	dptr,#_axradio_ack_count
   19EB F0                 6054 	movx	@dptr,a
                           6055 ;	..\COMMON\easyax5043.c:1049: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   19EC 90 4B 8C           6056 	mov	dptr,#_axradio_phy_preamble_longlen
   19EF E4                 6057 	clr	a
   19F0 93                 6058 	movc	a,@a+dptr
   19F1 FE                 6059 	mov	r6,a
   19F2 74 01              6060 	mov	a,#0x01
   19F4 93                 6061 	movc	a,@a+dptr
   19F5 FF                 6062 	mov	r7,a
   19F6 90 00 07           6063 	mov	dptr,#_axradio_txbuffer_cnt
   19F9 EE                 6064 	mov	a,r6
   19FA F0                 6065 	movx	@dptr,a
   19FB A3                 6066 	inc	dptr
   19FC EF                 6067 	mov	a,r7
   19FD F0                 6068 	movx	@dptr,a
                           6069 ;	..\COMMON\easyax5043.c:1050: ax5043_prepare_tx();
                           6070 ;	..\COMMON\easyax5043.c:1051: break;
   19FE 02 14 47           6071 	ljmp	_ax5043_prepare_tx
                           6072 ;	..\COMMON\easyax5043.c:1053: case AXRADIO_MODE_ACK_RECEIVE:
   1A01                    6073 00127$:
                           6074 ;	..\COMMON\easyax5043.c:1054: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   1A01                    6075 00128$:
                           6076 ;	..\COMMON\easyax5043.c:1055: if (axradio_syncstate == syncstate_lbt)
   1A01 90 00 04           6077 	mov	dptr,#_axradio_syncstate
   1A04 E0                 6078 	movx	a,@dptr
   1A05 FF                 6079 	mov	r7,a
   1A06 BF 01 03           6080 	cjne	r7,#0x01,00245$
   1A09 02 19 0A           6081 	ljmp	00112$
   1A0C                    6082 00245$:
                           6083 ;	..\COMMON\easyax5043.c:1057: transmitack:
   1A0C                    6084 00131$:
                           6085 ;	..\COMMON\easyax5043.c:1058: AX5043_FIFOSTAT = 3;
   1A0C 90 40 28           6086 	mov	dptr,#_AX5043_FIFOSTAT
   1A0F 74 03              6087 	mov	a,#0x03
   1A11 F0                 6088 	movx	@dptr,a
                           6089 ;	..\COMMON\easyax5043.c:1059: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1A12 90 40 02           6090 	mov	dptr,#_AX5043_PWRMODE
   1A15 74 0D              6091 	mov	a,#0x0D
   1A17 F0                 6092 	movx	@dptr,a
                           6093 ;	..\COMMON\easyax5043.c:1060: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1A18                    6094 00132$:
   1A18 90 40 03           6095 	mov	dptr,#_AX5043_POWSTAT
   1A1B E0                 6096 	movx	a,@dptr
   1A1C FF                 6097 	mov	r7,a
   1A1D 30 E3 F8           6098 	jnb	acc.3,00132$
                           6099 ;	..\COMMON\easyax5043.c:1061: ax5043_init_registers_tx();
   1A20 12 08 CD           6100 	lcall	_ax5043_init_registers_tx
                           6101 ;	..\COMMON\easyax5043.c:1062: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1A23 90 40 0F           6102 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1A26 E0                 6103 	movx	a,@dptr
                           6104 ;	..\COMMON\easyax5043.c:1063: AX5043_FIFOTHRESH1 = 0;
   1A27 90 40 2E           6105 	mov	dptr,#_AX5043_FIFOTHRESH1
   1A2A E4                 6106 	clr	a
   1A2B F0                 6107 	movx	@dptr,a
                           6108 ;	..\COMMON\easyax5043.c:1064: AX5043_FIFOTHRESH0 = 0x80;
   1A2C 90 40 2F           6109 	mov	dptr,#_AX5043_FIFOTHRESH0
   1A2F 74 80              6110 	mov	a,#0x80
   1A31 F0                 6111 	movx	@dptr,a
                           6112 ;	..\COMMON\easyax5043.c:1065: axradio_trxstate = trxstate_tx_longpreamble;
   1A32 75 0B 0A           6113 	mov	_axradio_trxstate,#0x0A
                           6114 ;	..\COMMON\easyax5043.c:1066: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A35 90 4B 8C           6115 	mov	dptr,#_axradio_phy_preamble_longlen
   1A38 E4                 6116 	clr	a
   1A39 93                 6117 	movc	a,@a+dptr
   1A3A FE                 6118 	mov	r6,a
   1A3B 74 01              6119 	mov	a,#0x01
   1A3D 93                 6120 	movc	a,@a+dptr
   1A3E FF                 6121 	mov	r7,a
   1A3F 90 00 07           6122 	mov	dptr,#_axradio_txbuffer_cnt
   1A42 EE                 6123 	mov	a,r6
   1A43 F0                 6124 	movx	@dptr,a
   1A44 A3                 6125 	inc	dptr
   1A45 EF                 6126 	mov	a,r7
   1A46 F0                 6127 	movx	@dptr,a
                           6128 ;	..\COMMON\easyax5043.c:1068: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1A47 90 40 10           6129 	mov	dptr,#_AX5043_MODULATION
   1A4A E0                 6130 	movx	a,@dptr
   1A4B FF                 6131 	mov	r7,a
   1A4C 53 07 0F           6132 	anl	ar7,#0x0F
   1A4F BF 09 0F           6133 	cjne	r7,#0x09,00136$
                           6134 ;	..\COMMON\easyax5043.c:1069: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                           6135 ;	..\COMMON\easyax5043.c:1070: AX5043_FIFODATA = 2;  // length (including flags)
                           6136 ;	..\COMMON\easyax5043.c:1071: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                           6137 ;	..\COMMON\easyax5043.c:1072: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1A52 90 40 29           6138 	mov	dptr,#_AX5043_FIFODATA
   1A55 74 E1              6139 	mov	a,#0xE1
   1A57 F0                 6140 	movx	@dptr,a
   1A58 74 02              6141 	mov	a,#0x02
   1A5A F0                 6142 	movx	@dptr,a
   1A5B 74 01              6143 	mov	a,#0x01
   1A5D F0                 6144 	movx	@dptr,a
   1A5E 74 11              6145 	mov	a,#0x11
   1A60 F0                 6146 	movx	@dptr,a
   1A61                    6147 00136$:
                           6148 ;	..\COMMON\easyax5043.c:1079: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1A61 90 40 07           6149 	mov	dptr,#_AX5043_IRQMASK0
   1A64 74 08              6150 	mov	a,#0x08
   1A66 F0                 6151 	movx	@dptr,a
                           6152 ;	..\COMMON\easyax5043.c:1080: update_timeanchor();
   1A67 12 08 37           6153 	lcall	_update_timeanchor
                           6154 ;	..\COMMON\easyax5043.c:1081: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1A6A 90 02 6B           6155 	mov	dptr,#_axradio_cb_transmitstart
   1A6D 12 48 E0           6156 	lcall	_wtimer_remove_callback
                           6157 ;	..\COMMON\easyax5043.c:1082: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1A70 90 02 70           6158 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1A73 E4                 6159 	clr	a
   1A74 F0                 6160 	movx	@dptr,a
                           6161 ;	..\COMMON\easyax5043.c:1083: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1A75 90 00 1A           6162 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1A78 E0                 6163 	movx	a,@dptr
   1A79 FC                 6164 	mov	r4,a
   1A7A A3                 6165 	inc	dptr
   1A7B E0                 6166 	movx	a,@dptr
   1A7C FD                 6167 	mov	r5,a
   1A7D A3                 6168 	inc	dptr
   1A7E E0                 6169 	movx	a,@dptr
   1A7F FE                 6170 	mov	r6,a
   1A80 A3                 6171 	inc	dptr
   1A81 E0                 6172 	movx	a,@dptr
   1A82 FF                 6173 	mov	r7,a
   1A83 90 02 71           6174 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1A86 EC                 6175 	mov	a,r4
   1A87 F0                 6176 	movx	@dptr,a
   1A88 A3                 6177 	inc	dptr
   1A89 ED                 6178 	mov	a,r5
   1A8A F0                 6179 	movx	@dptr,a
   1A8B A3                 6180 	inc	dptr
   1A8C EE                 6181 	mov	a,r6
   1A8D F0                 6182 	movx	@dptr,a
   1A8E A3                 6183 	inc	dptr
   1A8F EF                 6184 	mov	a,r7
   1A90 F0                 6185 	movx	@dptr,a
                           6186 ;	..\COMMON\easyax5043.c:1084: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1A91 90 02 6B           6187 	mov	dptr,#_axradio_cb_transmitstart
                           6188 ;	..\COMMON\easyax5043.c:1085: break;
   1A94 02 3E 7B           6189 	ljmp	_wtimer_add_callback
                           6190 ;	..\COMMON\easyax5043.c:1087: case AXRADIO_MODE_SYNC_MASTER:
   1A97                    6191 00137$:
                           6192 ;	..\COMMON\easyax5043.c:1088: case AXRADIO_MODE_SYNC_ACK_MASTER:
   1A97                    6193 00138$:
                           6194 ;	..\COMMON\easyax5043.c:1089: switch (axradio_syncstate) {
   1A97 90 00 04           6195 	mov	dptr,#_axradio_syncstate
   1A9A E0                 6196 	movx	a,@dptr
   1A9B FF                 6197 	mov	r7,a
   1A9C BF 04 02           6198 	cjne	r7,#0x04,00249$
   1A9F 80 59              6199 	sjmp	00140$
   1AA1                    6200 00249$:
   1AA1 BF 05 03           6201 	cjne	r7,#0x05,00250$
   1AA4 02 1B D5           6202 	ljmp	00148$
   1AA7                    6203 00250$:
                           6204 ;	..\COMMON\easyax5043.c:1091: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1AA7 90 40 02           6205 	mov	dptr,#_AX5043_PWRMODE
   1AAA 74 05              6206 	mov	a,#0x05
   1AAC F0                 6207 	movx	@dptr,a
                           6208 ;	..\COMMON\easyax5043.c:1092: ax5043_init_registers_tx();
   1AAD 12 08 CD           6209 	lcall	_ax5043_init_registers_tx
                           6210 ;	..\COMMON\easyax5043.c:1093: axradio_syncstate = syncstate_master_xostartup;
   1AB0 90 00 04           6211 	mov	dptr,#_axradio_syncstate
   1AB3 74 04              6212 	mov	a,#0x04
   1AB5 F0                 6213 	movx	@dptr,a
                           6214 ;	..\COMMON\easyax5043.c:1094: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   1AB6 90 02 7F           6215 	mov	dptr,#_axradio_cb_transmitdata
   1AB9 12 48 E0           6216 	lcall	_wtimer_remove_callback
                           6217 ;	..\COMMON\easyax5043.c:1095: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   1ABC 90 02 84           6218 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
                           6219 ;	..\COMMON\easyax5043.c:1096: axradio_cb_transmitdata.st.time.t = 0;
   1ABF E4                 6220 	clr	a
   1AC0 F0                 6221 	movx	@dptr,a
   1AC1 90 02 85           6222 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   1AC4 F0                 6223 	movx	@dptr,a
   1AC5 A3                 6224 	inc	dptr
   1AC6 E4                 6225 	clr	a
   1AC7 F0                 6226 	movx	@dptr,a
   1AC8 A3                 6227 	inc	dptr
   1AC9 F0                 6228 	movx	@dptr,a
   1ACA A3                 6229 	inc	dptr
   1ACB F0                 6230 	movx	@dptr,a
                           6231 ;	..\COMMON\easyax5043.c:1097: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   1ACC 90 02 7F           6232 	mov	dptr,#_axradio_cb_transmitdata
   1ACF 12 3E 7B           6233 	lcall	_wtimer_add_callback
                           6234 ;	..\COMMON\easyax5043.c:1098: wtimer_remove(&axradio_timer);
   1AD2 90 02 89           6235 	mov	dptr,#_axradio_timer
   1AD5 12 46 8F           6236 	lcall	_wtimer_remove
                           6237 ;	..\COMMON\easyax5043.c:1099: axradio_timer.time = axradio_sync_time;
   1AD8 90 00 10           6238 	mov	dptr,#_axradio_sync_time
   1ADB E0                 6239 	movx	a,@dptr
   1ADC FC                 6240 	mov	r4,a
   1ADD A3                 6241 	inc	dptr
   1ADE E0                 6242 	movx	a,@dptr
   1ADF FD                 6243 	mov	r5,a
   1AE0 A3                 6244 	inc	dptr
   1AE1 E0                 6245 	movx	a,@dptr
   1AE2 FE                 6246 	mov	r6,a
   1AE3 A3                 6247 	inc	dptr
   1AE4 E0                 6248 	movx	a,@dptr
   1AE5 FF                 6249 	mov	r7,a
   1AE6 90 02 8D           6250 	mov	dptr,#(_axradio_timer + 0x0004)
   1AE9 EC                 6251 	mov	a,r4
   1AEA F0                 6252 	movx	@dptr,a
   1AEB A3                 6253 	inc	dptr
   1AEC ED                 6254 	mov	a,r5
   1AED F0                 6255 	movx	@dptr,a
   1AEE A3                 6256 	inc	dptr
   1AEF EE                 6257 	mov	a,r6
   1AF0 F0                 6258 	movx	@dptr,a
   1AF1 A3                 6259 	inc	dptr
   1AF2 EF                 6260 	mov	a,r7
   1AF3 F0                 6261 	movx	@dptr,a
                           6262 ;	..\COMMON\easyax5043.c:1100: wtimer0_addabsolute(&axradio_timer);
   1AF4 90 02 89           6263 	mov	dptr,#_axradio_timer
                           6264 ;	..\COMMON\easyax5043.c:1101: break;
   1AF7 02 3F 23           6265 	ljmp	_wtimer0_addabsolute
                           6266 ;	..\COMMON\easyax5043.c:1103: case syncstate_master_xostartup:
   1AFA                    6267 00140$:
                           6268 ;	..\COMMON\easyax5043.c:1104: AX5043_FIFOSTAT = 3;
   1AFA 90 40 28           6269 	mov	dptr,#_AX5043_FIFOSTAT
   1AFD 74 03              6270 	mov	a,#0x03
   1AFF F0                 6271 	movx	@dptr,a
                           6272 ;	..\COMMON\easyax5043.c:1105: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1B00 90 40 02           6273 	mov	dptr,#_AX5043_PWRMODE
   1B03 74 0D              6274 	mov	a,#0x0D
   1B05 F0                 6275 	movx	@dptr,a
                           6276 ;	..\COMMON\easyax5043.c:1106: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1B06                    6277 00141$:
   1B06 90 40 03           6278 	mov	dptr,#_AX5043_POWSTAT
   1B09 E0                 6279 	movx	a,@dptr
   1B0A FF                 6280 	mov	r7,a
   1B0B 30 E3 F8           6281 	jnb	acc.3,00141$
                           6282 ;	..\COMMON\easyax5043.c:1107: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1B0E 90 40 0F           6283 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1B11 E0                 6284 	movx	a,@dptr
                           6285 ;	..\COMMON\easyax5043.c:1108: AX5043_FIFOTHRESH1 = 0;
   1B12 90 40 2E           6286 	mov	dptr,#_AX5043_FIFOTHRESH1
   1B15 E4                 6287 	clr	a
   1B16 F0                 6288 	movx	@dptr,a
                           6289 ;	..\COMMON\easyax5043.c:1109: AX5043_FIFOTHRESH0 = 0x80;
   1B17 90 40 2F           6290 	mov	dptr,#_AX5043_FIFOTHRESH0
   1B1A 74 80              6291 	mov	a,#0x80
   1B1C F0                 6292 	movx	@dptr,a
                           6293 ;	..\COMMON\easyax5043.c:1110: axradio_trxstate = trxstate_tx_longpreamble;
   1B1D 75 0B 0A           6294 	mov	_axradio_trxstate,#0x0A
                           6295 ;	..\COMMON\easyax5043.c:1111: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1B20 90 4B 8C           6296 	mov	dptr,#_axradio_phy_preamble_longlen
   1B23 E4                 6297 	clr	a
   1B24 93                 6298 	movc	a,@a+dptr
   1B25 FE                 6299 	mov	r6,a
   1B26 74 01              6300 	mov	a,#0x01
   1B28 93                 6301 	movc	a,@a+dptr
   1B29 FF                 6302 	mov	r7,a
   1B2A 90 00 07           6303 	mov	dptr,#_axradio_txbuffer_cnt
   1B2D EE                 6304 	mov	a,r6
   1B2E F0                 6305 	movx	@dptr,a
   1B2F A3                 6306 	inc	dptr
   1B30 EF                 6307 	mov	a,r7
   1B31 F0                 6308 	movx	@dptr,a
                           6309 ;	..\COMMON\easyax5043.c:1113: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1B32 90 40 10           6310 	mov	dptr,#_AX5043_MODULATION
   1B35 E0                 6311 	movx	a,@dptr
   1B36 FF                 6312 	mov	r7,a
   1B37 53 07 0F           6313 	anl	ar7,#0x0F
   1B3A BF 09 0F           6314 	cjne	r7,#0x09,00145$
                           6315 ;	..\COMMON\easyax5043.c:1114: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                           6316 ;	..\COMMON\easyax5043.c:1115: AX5043_FIFODATA = 2;  // length (including flags)
                           6317 ;	..\COMMON\easyax5043.c:1116: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                           6318 ;	..\COMMON\easyax5043.c:1117: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1B3D 90 40 29           6319 	mov	dptr,#_AX5043_FIFODATA
   1B40 74 E1              6320 	mov	a,#0xE1
   1B42 F0                 6321 	movx	@dptr,a
   1B43 74 02              6322 	mov	a,#0x02
   1B45 F0                 6323 	movx	@dptr,a
   1B46 74 01              6324 	mov	a,#0x01
   1B48 F0                 6325 	movx	@dptr,a
   1B49 74 11              6326 	mov	a,#0x11
   1B4B F0                 6327 	movx	@dptr,a
   1B4C                    6328 00145$:
                           6329 ;	..\COMMON\easyax5043.c:1124: wtimer_remove(&axradio_timer);
   1B4C 90 02 89           6330 	mov	dptr,#_axradio_timer
   1B4F 12 46 8F           6331 	lcall	_wtimer_remove
                           6332 ;	..\COMMON\easyax5043.c:1125: update_timeanchor();
   1B52 12 08 37           6333 	lcall	_update_timeanchor
                           6334 ;	..\COMMON\easyax5043.c:1126: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1B55 90 40 07           6335 	mov	dptr,#_AX5043_IRQMASK0
   1B58 74 08              6336 	mov	a,#0x08
   1B5A F0                 6337 	movx	@dptr,a
                           6338 ;	..\COMMON\easyax5043.c:1127: axradio_sync_addtime(axradio_sync_period);
   1B5B 90 4B B0           6339 	mov	dptr,#_axradio_sync_period
   1B5E E4                 6340 	clr	a
   1B5F 93                 6341 	movc	a,@a+dptr
   1B60 FC                 6342 	mov	r4,a
   1B61 74 01              6343 	mov	a,#0x01
   1B63 93                 6344 	movc	a,@a+dptr
   1B64 FD                 6345 	mov	r5,a
   1B65 74 02              6346 	mov	a,#0x02
   1B67 93                 6347 	movc	a,@a+dptr
   1B68 FE                 6348 	mov	r6,a
   1B69 74 03              6349 	mov	a,#0x03
   1B6B 93                 6350 	movc	a,@a+dptr
   1B6C 8C 82              6351 	mov	dpl,r4
   1B6E 8D 83              6352 	mov	dph,r5
   1B70 8E F0              6353 	mov	b,r6
   1B72 12 16 07           6354 	lcall	_axradio_sync_addtime
                           6355 ;	..\COMMON\easyax5043.c:1128: axradio_syncstate = syncstate_master_waitack;
   1B75 90 00 04           6356 	mov	dptr,#_axradio_syncstate
   1B78 74 05              6357 	mov	a,#0x05
   1B7A F0                 6358 	movx	@dptr,a
                           6359 ;	..\COMMON\easyax5043.c:1129: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER) {
   1B7B 74 21              6360 	mov	a,#0x21
   1B7D B5 0A 02           6361 	cjne	a,_axradio_mode,00254$
   1B80 80 26              6362 	sjmp	00147$
   1B82                    6363 00254$:
                           6364 ;	..\COMMON\easyax5043.c:1130: axradio_syncstate = syncstate_master_normal;
   1B82 90 00 04           6365 	mov	dptr,#_axradio_syncstate
   1B85 74 03              6366 	mov	a,#0x03
   1B87 F0                 6367 	movx	@dptr,a
                           6368 ;	..\COMMON\easyax5043.c:1131: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1B88 90 4B B4           6369 	mov	dptr,#_axradio_sync_xoscstartup
   1B8B E4                 6370 	clr	a
   1B8C 93                 6371 	movc	a,@a+dptr
   1B8D FC                 6372 	mov	r4,a
   1B8E 74 01              6373 	mov	a,#0x01
   1B90 93                 6374 	movc	a,@a+dptr
   1B91 FD                 6375 	mov	r5,a
   1B92 74 02              6376 	mov	a,#0x02
   1B94 93                 6377 	movc	a,@a+dptr
   1B95 FE                 6378 	mov	r6,a
   1B96 74 03              6379 	mov	a,#0x03
   1B98 93                 6380 	movc	a,@a+dptr
   1B99 8C 82              6381 	mov	dpl,r4
   1B9B 8D 83              6382 	mov	dph,r5
   1B9D 8E F0              6383 	mov	b,r6
   1B9F 12 16 58           6384 	lcall	_axradio_sync_settimeradv
                           6385 ;	..\COMMON\easyax5043.c:1132: wtimer0_addabsolute(&axradio_timer);
   1BA2 90 02 89           6386 	mov	dptr,#_axradio_timer
   1BA5 12 3F 23           6387 	lcall	_wtimer0_addabsolute
   1BA8                    6388 00147$:
                           6389 ;	..\COMMON\easyax5043.c:1134: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1BA8 90 02 6B           6390 	mov	dptr,#_axradio_cb_transmitstart
   1BAB 12 48 E0           6391 	lcall	_wtimer_remove_callback
                           6392 ;	..\COMMON\easyax5043.c:1135: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1BAE 90 02 70           6393 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1BB1 E4                 6394 	clr	a
   1BB2 F0                 6395 	movx	@dptr,a
                           6396 ;	..\COMMON\easyax5043.c:1136: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1BB3 90 00 1A           6397 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1BB6 E0                 6398 	movx	a,@dptr
   1BB7 FC                 6399 	mov	r4,a
   1BB8 A3                 6400 	inc	dptr
   1BB9 E0                 6401 	movx	a,@dptr
   1BBA FD                 6402 	mov	r5,a
   1BBB A3                 6403 	inc	dptr
   1BBC E0                 6404 	movx	a,@dptr
   1BBD FE                 6405 	mov	r6,a
   1BBE A3                 6406 	inc	dptr
   1BBF E0                 6407 	movx	a,@dptr
   1BC0 FF                 6408 	mov	r7,a
   1BC1 90 02 71           6409 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1BC4 EC                 6410 	mov	a,r4
   1BC5 F0                 6411 	movx	@dptr,a
   1BC6 A3                 6412 	inc	dptr
   1BC7 ED                 6413 	mov	a,r5
   1BC8 F0                 6414 	movx	@dptr,a
   1BC9 A3                 6415 	inc	dptr
   1BCA EE                 6416 	mov	a,r6
   1BCB F0                 6417 	movx	@dptr,a
   1BCC A3                 6418 	inc	dptr
   1BCD EF                 6419 	mov	a,r7
   1BCE F0                 6420 	movx	@dptr,a
                           6421 ;	..\COMMON\easyax5043.c:1137: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1BCF 90 02 6B           6422 	mov	dptr,#_axradio_cb_transmitstart
                           6423 ;	..\COMMON\easyax5043.c:1138: break;
   1BD2 02 3E 7B           6424 	ljmp	_wtimer_add_callback
                           6425 ;	..\COMMON\easyax5043.c:1140: case syncstate_master_waitack:
   1BD5                    6426 00148$:
                           6427 ;	..\COMMON\easyax5043.c:1141: ax5043_off();
   1BD5 12 14 6D           6428 	lcall	_ax5043_off
                           6429 ;	..\COMMON\easyax5043.c:1142: axradio_syncstate = syncstate_master_normal;
   1BD8 90 00 04           6430 	mov	dptr,#_axradio_syncstate
   1BDB 74 03              6431 	mov	a,#0x03
   1BDD F0                 6432 	movx	@dptr,a
                           6433 ;	..\COMMON\easyax5043.c:1143: wtimer_remove(&axradio_timer);
   1BDE 90 02 89           6434 	mov	dptr,#_axradio_timer
   1BE1 12 46 8F           6435 	lcall	_wtimer_remove
                           6436 ;	..\COMMON\easyax5043.c:1144: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1BE4 90 4B B4           6437 	mov	dptr,#_axradio_sync_xoscstartup
   1BE7 E4                 6438 	clr	a
   1BE8 93                 6439 	movc	a,@a+dptr
   1BE9 FC                 6440 	mov	r4,a
   1BEA 74 01              6441 	mov	a,#0x01
   1BEC 93                 6442 	movc	a,@a+dptr
   1BED FD                 6443 	mov	r5,a
   1BEE 74 02              6444 	mov	a,#0x02
   1BF0 93                 6445 	movc	a,@a+dptr
   1BF1 FE                 6446 	mov	r6,a
   1BF2 74 03              6447 	mov	a,#0x03
   1BF4 93                 6448 	movc	a,@a+dptr
   1BF5 8C 82              6449 	mov	dpl,r4
   1BF7 8D 83              6450 	mov	dph,r5
   1BF9 8E F0              6451 	mov	b,r6
   1BFB 12 16 58           6452 	lcall	_axradio_sync_settimeradv
                           6453 ;	..\COMMON\easyax5043.c:1145: wtimer0_addabsolute(&axradio_timer);
   1BFE 90 02 89           6454 	mov	dptr,#_axradio_timer
   1C01 12 3F 23           6455 	lcall	_wtimer0_addabsolute
                           6456 ;	..\COMMON\easyax5043.c:1146: update_timeanchor();
   1C04 12 08 37           6457 	lcall	_update_timeanchor
                           6458 ;	..\COMMON\easyax5043.c:1147: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1C07 90 02 75           6459 	mov	dptr,#_axradio_cb_transmitend
   1C0A 12 48 E0           6460 	lcall	_wtimer_remove_callback
                           6461 ;	..\COMMON\easyax5043.c:1148: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   1C0D 90 02 7A           6462 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1C10 74 03              6463 	mov	a,#0x03
   1C12 F0                 6464 	movx	@dptr,a
                           6465 ;	..\COMMON\easyax5043.c:1149: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1C13 90 00 1A           6466 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1C16 E0                 6467 	movx	a,@dptr
   1C17 FC                 6468 	mov	r4,a
   1C18 A3                 6469 	inc	dptr
   1C19 E0                 6470 	movx	a,@dptr
   1C1A FD                 6471 	mov	r5,a
   1C1B A3                 6472 	inc	dptr
   1C1C E0                 6473 	movx	a,@dptr
   1C1D FE                 6474 	mov	r6,a
   1C1E A3                 6475 	inc	dptr
   1C1F E0                 6476 	movx	a,@dptr
   1C20 FF                 6477 	mov	r7,a
   1C21 90 02 7B           6478 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1C24 EC                 6479 	mov	a,r4
   1C25 F0                 6480 	movx	@dptr,a
   1C26 A3                 6481 	inc	dptr
   1C27 ED                 6482 	mov	a,r5
   1C28 F0                 6483 	movx	@dptr,a
   1C29 A3                 6484 	inc	dptr
   1C2A EE                 6485 	mov	a,r6
   1C2B F0                 6486 	movx	@dptr,a
   1C2C A3                 6487 	inc	dptr
   1C2D EF                 6488 	mov	a,r7
   1C2E F0                 6489 	movx	@dptr,a
                           6490 ;	..\COMMON\easyax5043.c:1150: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1C2F 90 02 75           6491 	mov	dptr,#_axradio_cb_transmitend
                           6492 ;	..\COMMON\easyax5043.c:1153: break;
   1C32 02 3E 7B           6493 	ljmp	_wtimer_add_callback
                           6494 ;	..\COMMON\easyax5043.c:1155: case AXRADIO_MODE_SYNC_SLAVE:
   1C35                    6495 00150$:
                           6496 ;	..\COMMON\easyax5043.c:1156: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   1C35                    6497 00151$:
                           6498 ;	..\COMMON\easyax5043.c:1157: switch (axradio_syncstate) {
   1C35 90 00 04           6499 	mov	dptr,#_axradio_syncstate
   1C38 E0                 6500 	movx	a,@dptr
   1C39 FF                 6501 	mov  r7,a
   1C3A 24 F3              6502 	add	a,#0xff - 0x0C
   1C3C 40 2E              6503 	jc	00153$
   1C3E EF                 6504 	mov	a,r7
   1C3F 2F                 6505 	add	a,r7
   1C40 2F                 6506 	add	a,r7
   1C41 90 1C 45           6507 	mov	dptr,#00256$
   1C44 73                 6508 	jmp	@a+dptr
   1C45                    6509 00256$:
   1C45 02 1C 6C           6510 	ljmp	00152$
   1C48 02 1C 6C           6511 	ljmp	00152$
   1C4B 02 1C 6C           6512 	ljmp	00152$
   1C4E 02 1C 6C           6513 	ljmp	00152$
   1C51 02 1C 6C           6514 	ljmp	00152$
   1C54 02 1C 6C           6515 	ljmp	00152$
   1C57 02 1C 6C           6516 	ljmp	00153$
   1C5A 02 1C F7           6517 	ljmp	00154$
   1C5D 02 1D 85           6518 	ljmp	00155$
   1C60 02 1D D7           6519 	ljmp	00156$
   1C63 02 1E 88           6520 	ljmp	00159$
   1C66 02 1E E0           6521 	ljmp	00162$
   1C69 02 1F F5           6522 	ljmp	00169$
                           6523 ;	..\COMMON\easyax5043.c:1158: default:
   1C6C                    6524 00152$:
                           6525 ;	..\COMMON\easyax5043.c:1159: case syncstate_slave_synchunt:
   1C6C                    6526 00153$:
                           6527 ;	..\COMMON\easyax5043.c:1160: ax5043_off();
   1C6C 12 14 6D           6528 	lcall	_ax5043_off
                           6529 ;	..\COMMON\easyax5043.c:1161: axradio_syncstate = syncstate_slave_syncpause;
   1C6F 90 00 04           6530 	mov	dptr,#_axradio_syncstate
   1C72 74 07              6531 	mov	a,#0x07
   1C74 F0                 6532 	movx	@dptr,a
                           6533 ;	..\COMMON\easyax5043.c:1162: axradio_sync_addtime(axradio_sync_slave_syncpause);
   1C75 90 4B C0           6534 	mov	dptr,#_axradio_sync_slave_syncpause
   1C78 E4                 6535 	clr	a
   1C79 93                 6536 	movc	a,@a+dptr
   1C7A FC                 6537 	mov	r4,a
   1C7B 74 01              6538 	mov	a,#0x01
   1C7D 93                 6539 	movc	a,@a+dptr
   1C7E FD                 6540 	mov	r5,a
   1C7F 74 02              6541 	mov	a,#0x02
   1C81 93                 6542 	movc	a,@a+dptr
   1C82 FE                 6543 	mov	r6,a
   1C83 74 03              6544 	mov	a,#0x03
   1C85 93                 6545 	movc	a,@a+dptr
   1C86 8C 82              6546 	mov	dpl,r4
   1C88 8D 83              6547 	mov	dph,r5
   1C8A 8E F0              6548 	mov	b,r6
   1C8C 12 16 07           6549 	lcall	_axradio_sync_addtime
                           6550 ;	..\COMMON\easyax5043.c:1163: wtimer_remove(&axradio_timer);
   1C8F 90 02 89           6551 	mov	dptr,#_axradio_timer
   1C92 12 46 8F           6552 	lcall	_wtimer_remove
                           6553 ;	..\COMMON\easyax5043.c:1164: axradio_timer.time = axradio_sync_time;
   1C95 90 00 10           6554 	mov	dptr,#_axradio_sync_time
   1C98 E0                 6555 	movx	a,@dptr
   1C99 FC                 6556 	mov	r4,a
   1C9A A3                 6557 	inc	dptr
   1C9B E0                 6558 	movx	a,@dptr
   1C9C FD                 6559 	mov	r5,a
   1C9D A3                 6560 	inc	dptr
   1C9E E0                 6561 	movx	a,@dptr
   1C9F FE                 6562 	mov	r6,a
   1CA0 A3                 6563 	inc	dptr
   1CA1 E0                 6564 	movx	a,@dptr
   1CA2 FF                 6565 	mov	r7,a
   1CA3 90 02 8D           6566 	mov	dptr,#(_axradio_timer + 0x0004)
   1CA6 EC                 6567 	mov	a,r4
   1CA7 F0                 6568 	movx	@dptr,a
   1CA8 A3                 6569 	inc	dptr
   1CA9 ED                 6570 	mov	a,r5
   1CAA F0                 6571 	movx	@dptr,a
   1CAB A3                 6572 	inc	dptr
   1CAC EE                 6573 	mov	a,r6
   1CAD F0                 6574 	movx	@dptr,a
   1CAE A3                 6575 	inc	dptr
   1CAF EF                 6576 	mov	a,r7
   1CB0 F0                 6577 	movx	@dptr,a
                           6578 ;	..\COMMON\easyax5043.c:1165: wtimer0_addabsolute(&axradio_timer);
   1CB1 90 02 89           6579 	mov	dptr,#_axradio_timer
   1CB4 12 3F 23           6580 	lcall	_wtimer0_addabsolute
                           6581 ;	..\COMMON\easyax5043.c:1166: wtimer_remove_callback(&axradio_cb_receive.cb);
   1CB7 90 02 32           6582 	mov	dptr,#_axradio_cb_receive
   1CBA 12 48 E0           6583 	lcall	_wtimer_remove_callback
                           6584 ;	..\COMMON\easyax5043.c:1167: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1CBD 75 2A 00           6585 	mov	_memset_PARM_2,#0x00
   1CC0 75 2B 1E           6586 	mov	_memset_PARM_3,#0x1E
   1CC3 75 2C 00           6587 	mov	(_memset_PARM_3 + 1),#0x00
   1CC6 90 02 36           6588 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1CC9 75 F0 00           6589 	mov	b,#0x00
   1CCC 12 3E 07           6590 	lcall	_memset
                           6591 ;	..\COMMON\easyax5043.c:1168: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1CCF 90 00 1A           6592 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1CD2 E0                 6593 	movx	a,@dptr
   1CD3 FC                 6594 	mov	r4,a
   1CD4 A3                 6595 	inc	dptr
   1CD5 E0                 6596 	movx	a,@dptr
   1CD6 FD                 6597 	mov	r5,a
   1CD7 A3                 6598 	inc	dptr
   1CD8 E0                 6599 	movx	a,@dptr
   1CD9 FE                 6600 	mov	r6,a
   1CDA A3                 6601 	inc	dptr
   1CDB E0                 6602 	movx	a,@dptr
   1CDC FF                 6603 	mov	r7,a
   1CDD 90 02 38           6604 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1CE0 EC                 6605 	mov	a,r4
   1CE1 F0                 6606 	movx	@dptr,a
   1CE2 A3                 6607 	inc	dptr
   1CE3 ED                 6608 	mov	a,r5
   1CE4 F0                 6609 	movx	@dptr,a
   1CE5 A3                 6610 	inc	dptr
   1CE6 EE                 6611 	mov	a,r6
   1CE7 F0                 6612 	movx	@dptr,a
   1CE8 A3                 6613 	inc	dptr
   1CE9 EF                 6614 	mov	a,r7
   1CEA F0                 6615 	movx	@dptr,a
                           6616 ;	..\COMMON\easyax5043.c:1169: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNCTIMEOUT;
   1CEB 90 02 37           6617 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1CEE 74 0A              6618 	mov	a,#0x0A
   1CF0 F0                 6619 	movx	@dptr,a
                           6620 ;	..\COMMON\easyax5043.c:1170: wtimer_add_callback(&axradio_cb_receive.cb);
   1CF1 90 02 32           6621 	mov	dptr,#_axradio_cb_receive
                           6622 ;	..\COMMON\easyax5043.c:1171: break;
   1CF4 02 3E 7B           6623 	ljmp	_wtimer_add_callback
                           6624 ;	..\COMMON\easyax5043.c:1173: case syncstate_slave_syncpause:
   1CF7                    6625 00154$:
                           6626 ;	..\COMMON\easyax5043.c:1174: ax5043_receiver_on_continuous();
   1CF7 12 13 28           6627 	lcall	_ax5043_receiver_on_continuous
                           6628 ;	..\COMMON\easyax5043.c:1175: axradio_syncstate = syncstate_slave_synchunt;
   1CFA 90 00 04           6629 	mov	dptr,#_axradio_syncstate
   1CFD 74 06              6630 	mov	a,#0x06
   1CFF F0                 6631 	movx	@dptr,a
                           6632 ;	..\COMMON\easyax5043.c:1176: axradio_sync_addtime(axradio_sync_slave_syncwindow);
   1D00 90 4B B8           6633 	mov	dptr,#_axradio_sync_slave_syncwindow
   1D03 E4                 6634 	clr	a
   1D04 93                 6635 	movc	a,@a+dptr
   1D05 FC                 6636 	mov	r4,a
   1D06 74 01              6637 	mov	a,#0x01
   1D08 93                 6638 	movc	a,@a+dptr
   1D09 FD                 6639 	mov	r5,a
   1D0A 74 02              6640 	mov	a,#0x02
   1D0C 93                 6641 	movc	a,@a+dptr
   1D0D FE                 6642 	mov	r6,a
   1D0E 74 03              6643 	mov	a,#0x03
   1D10 93                 6644 	movc	a,@a+dptr
   1D11 8C 82              6645 	mov	dpl,r4
   1D13 8D 83              6646 	mov	dph,r5
   1D15 8E F0              6647 	mov	b,r6
   1D17 12 16 07           6648 	lcall	_axradio_sync_addtime
                           6649 ;	..\COMMON\easyax5043.c:1177: wtimer_remove(&axradio_timer);
   1D1A 90 02 89           6650 	mov	dptr,#_axradio_timer
   1D1D 12 46 8F           6651 	lcall	_wtimer_remove
                           6652 ;	..\COMMON\easyax5043.c:1178: axradio_timer.time = axradio_sync_time;
   1D20 90 00 10           6653 	mov	dptr,#_axradio_sync_time
   1D23 E0                 6654 	movx	a,@dptr
   1D24 FC                 6655 	mov	r4,a
   1D25 A3                 6656 	inc	dptr
   1D26 E0                 6657 	movx	a,@dptr
   1D27 FD                 6658 	mov	r5,a
   1D28 A3                 6659 	inc	dptr
   1D29 E0                 6660 	movx	a,@dptr
   1D2A FE                 6661 	mov	r6,a
   1D2B A3                 6662 	inc	dptr
   1D2C E0                 6663 	movx	a,@dptr
   1D2D FF                 6664 	mov	r7,a
   1D2E 90 02 8D           6665 	mov	dptr,#(_axradio_timer + 0x0004)
   1D31 EC                 6666 	mov	a,r4
   1D32 F0                 6667 	movx	@dptr,a
   1D33 A3                 6668 	inc	dptr
   1D34 ED                 6669 	mov	a,r5
   1D35 F0                 6670 	movx	@dptr,a
   1D36 A3                 6671 	inc	dptr
   1D37 EE                 6672 	mov	a,r6
   1D38 F0                 6673 	movx	@dptr,a
   1D39 A3                 6674 	inc	dptr
   1D3A EF                 6675 	mov	a,r7
   1D3B F0                 6676 	movx	@dptr,a
                           6677 ;	..\COMMON\easyax5043.c:1179: wtimer0_addabsolute(&axradio_timer);
   1D3C 90 02 89           6678 	mov	dptr,#_axradio_timer
   1D3F 12 3F 23           6679 	lcall	_wtimer0_addabsolute
                           6680 ;	..\COMMON\easyax5043.c:1180: update_timeanchor();
   1D42 12 08 37           6681 	lcall	_update_timeanchor
                           6682 ;	..\COMMON\easyax5043.c:1181: wtimer_remove_callback(&axradio_cb_receive.cb);
   1D45 90 02 32           6683 	mov	dptr,#_axradio_cb_receive
   1D48 12 48 E0           6684 	lcall	_wtimer_remove_callback
                           6685 ;	..\COMMON\easyax5043.c:1182: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1D4B 75 2A 00           6686 	mov	_memset_PARM_2,#0x00
   1D4E 75 2B 1E           6687 	mov	_memset_PARM_3,#0x1E
   1D51 75 2C 00           6688 	mov	(_memset_PARM_3 + 1),#0x00
   1D54 90 02 36           6689 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1D57 75 F0 00           6690 	mov	b,#0x00
   1D5A 12 3E 07           6691 	lcall	_memset
                           6692 ;	..\COMMON\easyax5043.c:1183: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D5D 90 00 1A           6693 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1D60 E0                 6694 	movx	a,@dptr
   1D61 FC                 6695 	mov	r4,a
   1D62 A3                 6696 	inc	dptr
   1D63 E0                 6697 	movx	a,@dptr
   1D64 FD                 6698 	mov	r5,a
   1D65 A3                 6699 	inc	dptr
   1D66 E0                 6700 	movx	a,@dptr
   1D67 FE                 6701 	mov	r6,a
   1D68 A3                 6702 	inc	dptr
   1D69 E0                 6703 	movx	a,@dptr
   1D6A FF                 6704 	mov	r7,a
   1D6B 90 02 38           6705 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1D6E EC                 6706 	mov	a,r4
   1D6F F0                 6707 	movx	@dptr,a
   1D70 A3                 6708 	inc	dptr
   1D71 ED                 6709 	mov	a,r5
   1D72 F0                 6710 	movx	@dptr,a
   1D73 A3                 6711 	inc	dptr
   1D74 EE                 6712 	mov	a,r6
   1D75 F0                 6713 	movx	@dptr,a
   1D76 A3                 6714 	inc	dptr
   1D77 EF                 6715 	mov	a,r7
   1D78 F0                 6716 	movx	@dptr,a
                           6717 ;	..\COMMON\easyax5043.c:1184: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1D79 90 02 37           6718 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1D7C 74 09              6719 	mov	a,#0x09
   1D7E F0                 6720 	movx	@dptr,a
                           6721 ;	..\COMMON\easyax5043.c:1185: wtimer_add_callback(&axradio_cb_receive.cb);
   1D7F 90 02 32           6722 	mov	dptr,#_axradio_cb_receive
                           6723 ;	..\COMMON\easyax5043.c:1186: break;
   1D82 02 3E 7B           6724 	ljmp	_wtimer_add_callback
                           6725 ;	..\COMMON\easyax5043.c:1188: case syncstate_slave_rxidle:
   1D85                    6726 00155$:
                           6727 ;	..\COMMON\easyax5043.c:1189: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1D85 90 40 02           6728 	mov	dptr,#_AX5043_PWRMODE
   1D88 74 05              6729 	mov	a,#0x05
   1D8A F0                 6730 	movx	@dptr,a
                           6731 ;	..\COMMON\easyax5043.c:1190: axradio_syncstate = syncstate_slave_rxxosc;
   1D8B 90 00 04           6732 	mov	dptr,#_axradio_syncstate
   1D8E 74 09              6733 	mov	a,#0x09
   1D90 F0                 6734 	movx	@dptr,a
                           6735 ;	..\COMMON\easyax5043.c:1191: wtimer_remove(&axradio_timer);
   1D91 90 02 89           6736 	mov	dptr,#_axradio_timer
   1D94 12 46 8F           6737 	lcall	_wtimer_remove
                           6738 ;	..\COMMON\easyax5043.c:1192: axradio_timer.time += axradio_sync_xoscstartup;
   1D97 90 02 8D           6739 	mov	dptr,#(_axradio_timer + 0x0004)
   1D9A E0                 6740 	movx	a,@dptr
   1D9B FC                 6741 	mov	r4,a
   1D9C A3                 6742 	inc	dptr
   1D9D E0                 6743 	movx	a,@dptr
   1D9E FD                 6744 	mov	r5,a
   1D9F A3                 6745 	inc	dptr
   1DA0 E0                 6746 	movx	a,@dptr
   1DA1 FE                 6747 	mov	r6,a
   1DA2 A3                 6748 	inc	dptr
   1DA3 E0                 6749 	movx	a,@dptr
   1DA4 FF                 6750 	mov	r7,a
   1DA5 90 4B B4           6751 	mov	dptr,#_axradio_sync_xoscstartup
   1DA8 E4                 6752 	clr	a
   1DA9 93                 6753 	movc	a,@a+dptr
   1DAA F8                 6754 	mov	r0,a
   1DAB 74 01              6755 	mov	a,#0x01
   1DAD 93                 6756 	movc	a,@a+dptr
   1DAE F9                 6757 	mov	r1,a
   1DAF 74 02              6758 	mov	a,#0x02
   1DB1 93                 6759 	movc	a,@a+dptr
   1DB2 FA                 6760 	mov	r2,a
   1DB3 74 03              6761 	mov	a,#0x03
   1DB5 93                 6762 	movc	a,@a+dptr
   1DB6 FB                 6763 	mov	r3,a
   1DB7 E8                 6764 	mov	a,r0
   1DB8 2C                 6765 	add	a,r4
   1DB9 FC                 6766 	mov	r4,a
   1DBA E9                 6767 	mov	a,r1
   1DBB 3D                 6768 	addc	a,r5
   1DBC FD                 6769 	mov	r5,a
   1DBD EA                 6770 	mov	a,r2
   1DBE 3E                 6771 	addc	a,r6
   1DBF FE                 6772 	mov	r6,a
   1DC0 EB                 6773 	mov	a,r3
   1DC1 3F                 6774 	addc	a,r7
   1DC2 FF                 6775 	mov	r7,a
   1DC3 90 02 8D           6776 	mov	dptr,#(_axradio_timer + 0x0004)
   1DC6 EC                 6777 	mov	a,r4
   1DC7 F0                 6778 	movx	@dptr,a
   1DC8 A3                 6779 	inc	dptr
   1DC9 ED                 6780 	mov	a,r5
   1DCA F0                 6781 	movx	@dptr,a
   1DCB A3                 6782 	inc	dptr
   1DCC EE                 6783 	mov	a,r6
   1DCD F0                 6784 	movx	@dptr,a
   1DCE A3                 6785 	inc	dptr
   1DCF EF                 6786 	mov	a,r7
   1DD0 F0                 6787 	movx	@dptr,a
                           6788 ;	..\COMMON\easyax5043.c:1193: wtimer0_addabsolute(&axradio_timer);
   1DD1 90 02 89           6789 	mov	dptr,#_axradio_timer
                           6790 ;	..\COMMON\easyax5043.c:1194: break;
   1DD4 02 3F 23           6791 	ljmp	_wtimer0_addabsolute
                           6792 ;	..\COMMON\easyax5043.c:1196: case syncstate_slave_rxxosc:
   1DD7                    6793 00156$:
                           6794 ;	..\COMMON\easyax5043.c:1197: ax5043_receiver_on_continuous();
   1DD7 12 13 28           6795 	lcall	_ax5043_receiver_on_continuous
                           6796 ;	..\COMMON\easyax5043.c:1198: axradio_syncstate = syncstate_slave_rxsfdwindow;
   1DDA 90 00 04           6797 	mov	dptr,#_axradio_syncstate
   1DDD 74 0A              6798 	mov	a,#0x0A
   1DDF F0                 6799 	movx	@dptr,a
                           6800 ;	..\COMMON\easyax5043.c:1199: update_timeanchor();
   1DE0 12 08 37           6801 	lcall	_update_timeanchor
                           6802 ;	..\COMMON\easyax5043.c:1200: wtimer_remove_callback(&axradio_cb_receive.cb);
   1DE3 90 02 32           6803 	mov	dptr,#_axradio_cb_receive
   1DE6 12 48 E0           6804 	lcall	_wtimer_remove_callback
                           6805 ;	..\COMMON\easyax5043.c:1201: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1DE9 75 2A 00           6806 	mov	_memset_PARM_2,#0x00
   1DEC 75 2B 1E           6807 	mov	_memset_PARM_3,#0x1E
   1DEF 75 2C 00           6808 	mov	(_memset_PARM_3 + 1),#0x00
   1DF2 90 02 36           6809 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1DF5 75 F0 00           6810 	mov	b,#0x00
   1DF8 12 3E 07           6811 	lcall	_memset
                           6812 ;	..\COMMON\easyax5043.c:1202: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1DFB 90 00 1A           6813 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1DFE E0                 6814 	movx	a,@dptr
   1DFF FC                 6815 	mov	r4,a
   1E00 A3                 6816 	inc	dptr
   1E01 E0                 6817 	movx	a,@dptr
   1E02 FD                 6818 	mov	r5,a
   1E03 A3                 6819 	inc	dptr
   1E04 E0                 6820 	movx	a,@dptr
   1E05 FE                 6821 	mov	r6,a
   1E06 A3                 6822 	inc	dptr
   1E07 E0                 6823 	movx	a,@dptr
   1E08 FF                 6824 	mov	r7,a
   1E09 90 02 38           6825 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1E0C EC                 6826 	mov	a,r4
   1E0D F0                 6827 	movx	@dptr,a
   1E0E A3                 6828 	inc	dptr
   1E0F ED                 6829 	mov	a,r5
   1E10 F0                 6830 	movx	@dptr,a
   1E11 A3                 6831 	inc	dptr
   1E12 EE                 6832 	mov	a,r6
   1E13 F0                 6833 	movx	@dptr,a
   1E14 A3                 6834 	inc	dptr
   1E15 EF                 6835 	mov	a,r7
   1E16 F0                 6836 	movx	@dptr,a
                           6837 ;	..\COMMON\easyax5043.c:1203: axradio_cb_receive.st.error = AXRADIO_ERR_RECEIVESTART;
   1E17 90 02 37           6838 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1E1A 74 0B              6839 	mov	a,#0x0B
   1E1C F0                 6840 	movx	@dptr,a
                           6841 ;	..\COMMON\easyax5043.c:1204: wtimer_add_callback(&axradio_cb_receive.cb);
   1E1D 90 02 32           6842 	mov	dptr,#_axradio_cb_receive
   1E20 12 3E 7B           6843 	lcall	_wtimer_add_callback
                           6844 ;	..\COMMON\easyax5043.c:1205: wtimer_remove(&axradio_timer);
   1E23 90 02 89           6845 	mov	dptr,#_axradio_timer
   1E26 12 46 8F           6846 	lcall	_wtimer_remove
                           6847 ;	..\COMMON\easyax5043.c:1207: uint8_t __autodata idx = axradio_sync_seqnr;
   1E29 90 00 0F           6848 	mov	dptr,#_axradio_ack_seqnr
   1E2C E0                 6849 	movx	a,@dptr
   1E2D FF                 6850 	mov	r7,a
                           6851 ;	..\COMMON\easyax5043.c:1208: if (idx >= axradio_sync_slave_nrrx)
   1E2E 90 4B C7           6852 	mov	dptr,#_axradio_sync_slave_nrrx
   1E31 E4                 6853 	clr	a
   1E32 93                 6854 	movc	a,@a+dptr
   1E33 FE                 6855 	mov	r6,a
   1E34 C3                 6856 	clr	c
   1E35 EF                 6857 	mov	a,r7
   1E36 9E                 6858 	subb	a,r6
   1E37 40 03              6859 	jc	00158$
                           6860 ;	..\COMMON\easyax5043.c:1209: idx = axradio_sync_slave_nrrx - 1;
   1E39 EE                 6861 	mov	a,r6
   1E3A 14                 6862 	dec	a
   1E3B FF                 6863 	mov	r7,a
   1E3C                    6864 00158$:
                           6865 ;	..\COMMON\easyax5043.c:1210: axradio_timer.time += axradio_sync_slave_rxwindow[idx];
   1E3C 90 02 8D           6866 	mov	dptr,#(_axradio_timer + 0x0004)
   1E3F E0                 6867 	movx	a,@dptr
   1E40 FB                 6868 	mov	r3,a
   1E41 A3                 6869 	inc	dptr
   1E42 E0                 6870 	movx	a,@dptr
   1E43 FC                 6871 	mov	r4,a
   1E44 A3                 6872 	inc	dptr
   1E45 E0                 6873 	movx	a,@dptr
   1E46 FD                 6874 	mov	r5,a
   1E47 A3                 6875 	inc	dptr
   1E48 E0                 6876 	movx	a,@dptr
   1E49 FE                 6877 	mov	r6,a
   1E4A EF                 6878 	mov	a,r7
   1E4B 75 F0 04           6879 	mov	b,#0x04
   1E4E A4                 6880 	mul	ab
   1E4F 24 D4              6881 	add	a,#_axradio_sync_slave_rxwindow
   1E51 F5 82              6882 	mov	dpl,a
   1E53 74 4B              6883 	mov	a,#(_axradio_sync_slave_rxwindow >> 8)
   1E55 35 F0              6884 	addc	a,b
   1E57 F5 83              6885 	mov	dph,a
   1E59 E4                 6886 	clr	a
   1E5A 93                 6887 	movc	a,@a+dptr
   1E5B F8                 6888 	mov	r0,a
   1E5C A3                 6889 	inc	dptr
   1E5D E4                 6890 	clr	a
   1E5E 93                 6891 	movc	a,@a+dptr
   1E5F F9                 6892 	mov	r1,a
   1E60 A3                 6893 	inc	dptr
   1E61 E4                 6894 	clr	a
   1E62 93                 6895 	movc	a,@a+dptr
   1E63 FA                 6896 	mov	r2,a
   1E64 A3                 6897 	inc	dptr
   1E65 E4                 6898 	clr	a
   1E66 93                 6899 	movc	a,@a+dptr
   1E67 FF                 6900 	mov	r7,a
   1E68 E8                 6901 	mov	a,r0
   1E69 2B                 6902 	add	a,r3
   1E6A FB                 6903 	mov	r3,a
   1E6B E9                 6904 	mov	a,r1
   1E6C 3C                 6905 	addc	a,r4
   1E6D FC                 6906 	mov	r4,a
   1E6E EA                 6907 	mov	a,r2
   1E6F 3D                 6908 	addc	a,r5
   1E70 FD                 6909 	mov	r5,a
   1E71 EF                 6910 	mov	a,r7
   1E72 3E                 6911 	addc	a,r6
   1E73 FE                 6912 	mov	r6,a
   1E74 90 02 8D           6913 	mov	dptr,#(_axradio_timer + 0x0004)
   1E77 EB                 6914 	mov	a,r3
   1E78 F0                 6915 	movx	@dptr,a
   1E79 A3                 6916 	inc	dptr
   1E7A EC                 6917 	mov	a,r4
   1E7B F0                 6918 	movx	@dptr,a
   1E7C A3                 6919 	inc	dptr
   1E7D ED                 6920 	mov	a,r5
   1E7E F0                 6921 	movx	@dptr,a
   1E7F A3                 6922 	inc	dptr
   1E80 EE                 6923 	mov	a,r6
   1E81 F0                 6924 	movx	@dptr,a
                           6925 ;	..\COMMON\easyax5043.c:1212: wtimer0_addabsolute(&axradio_timer);
   1E82 90 02 89           6926 	mov	dptr,#_axradio_timer
                           6927 ;	..\COMMON\easyax5043.c:1213: break;
   1E85 02 3F 23           6928 	ljmp	_wtimer0_addabsolute
                           6929 ;	..\COMMON\easyax5043.c:1215: case syncstate_slave_rxsfdwindow:
   1E88                    6930 00159$:
                           6931 ;	..\COMMON\easyax5043.c:1216: if (!(0x0F & (uint8_t)~AX5043_RADIOSTATE)) {
   1E88 90 40 1C           6932 	mov	dptr,#_AX5043_RADIOSTATE
   1E8B E0                 6933 	movx	a,@dptr
   1E8C F4                 6934 	cpl	a
   1E8D FF                 6935 	mov	r7,a
   1E8E 54 0F              6936 	anl	a,#0x0F
   1E90 60 02              6937 	jz	00259$
   1E92 80 4C              6938 	sjmp	00162$
   1E94                    6939 00259$:
                           6940 ;	..\COMMON\easyax5043.c:1217: axradio_syncstate = syncstate_slave_rxpacket;
   1E94 90 00 04           6941 	mov	dptr,#_axradio_syncstate
   1E97 74 0B              6942 	mov	a,#0x0B
   1E99 F0                 6943 	movx	@dptr,a
                           6944 ;	..\COMMON\easyax5043.c:1218: wtimer_remove(&axradio_timer);
   1E9A 90 02 89           6945 	mov	dptr,#_axradio_timer
   1E9D 12 46 8F           6946 	lcall	_wtimer_remove
                           6947 ;	..\COMMON\easyax5043.c:1219: axradio_timer.time += axradio_sync_slave_rxtimeout;
   1EA0 90 02 8D           6948 	mov	dptr,#(_axradio_timer + 0x0004)
   1EA3 E0                 6949 	movx	a,@dptr
   1EA4 FC                 6950 	mov	r4,a
   1EA5 A3                 6951 	inc	dptr
   1EA6 E0                 6952 	movx	a,@dptr
   1EA7 FD                 6953 	mov	r5,a
   1EA8 A3                 6954 	inc	dptr
   1EA9 E0                 6955 	movx	a,@dptr
   1EAA FE                 6956 	mov	r6,a
   1EAB A3                 6957 	inc	dptr
   1EAC E0                 6958 	movx	a,@dptr
   1EAD FF                 6959 	mov	r7,a
   1EAE 90 4B E0           6960 	mov	dptr,#_axradio_sync_slave_rxtimeout
   1EB1 E4                 6961 	clr	a
   1EB2 93                 6962 	movc	a,@a+dptr
   1EB3 F8                 6963 	mov	r0,a
   1EB4 74 01              6964 	mov	a,#0x01
   1EB6 93                 6965 	movc	a,@a+dptr
   1EB7 F9                 6966 	mov	r1,a
   1EB8 74 02              6967 	mov	a,#0x02
   1EBA 93                 6968 	movc	a,@a+dptr
   1EBB FA                 6969 	mov	r2,a
   1EBC 74 03              6970 	mov	a,#0x03
   1EBE 93                 6971 	movc	a,@a+dptr
   1EBF FB                 6972 	mov	r3,a
   1EC0 E8                 6973 	mov	a,r0
   1EC1 2C                 6974 	add	a,r4
   1EC2 FC                 6975 	mov	r4,a
   1EC3 E9                 6976 	mov	a,r1
   1EC4 3D                 6977 	addc	a,r5
   1EC5 FD                 6978 	mov	r5,a
   1EC6 EA                 6979 	mov	a,r2
   1EC7 3E                 6980 	addc	a,r6
   1EC8 FE                 6981 	mov	r6,a
   1EC9 EB                 6982 	mov	a,r3
   1ECA 3F                 6983 	addc	a,r7
   1ECB FF                 6984 	mov	r7,a
   1ECC 90 02 8D           6985 	mov	dptr,#(_axradio_timer + 0x0004)
   1ECF EC                 6986 	mov	a,r4
   1ED0 F0                 6987 	movx	@dptr,a
   1ED1 A3                 6988 	inc	dptr
   1ED2 ED                 6989 	mov	a,r5
   1ED3 F0                 6990 	movx	@dptr,a
   1ED4 A3                 6991 	inc	dptr
   1ED5 EE                 6992 	mov	a,r6
   1ED6 F0                 6993 	movx	@dptr,a
   1ED7 A3                 6994 	inc	dptr
   1ED8 EF                 6995 	mov	a,r7
   1ED9 F0                 6996 	movx	@dptr,a
                           6997 ;	..\COMMON\easyax5043.c:1220: wtimer0_addabsolute(&axradio_timer);
   1EDA 90 02 89           6998 	mov	dptr,#_axradio_timer
                           6999 ;	..\COMMON\easyax5043.c:1221: break;
   1EDD 02 3F 23           7000 	ljmp	_wtimer0_addabsolute
                           7001 ;	..\COMMON\easyax5043.c:1225: case syncstate_slave_rxpacket:
   1EE0                    7002 00162$:
                           7003 ;	..\COMMON\easyax5043.c:1226: ax5043_off();
   1EE0 12 14 6D           7004 	lcall	_ax5043_off
                           7005 ;	..\COMMON\easyax5043.c:1227: if (!axradio_sync_seqnr)
   1EE3 90 00 0F           7006 	mov	dptr,#_axradio_ack_seqnr
   1EE6 E0                 7007 	movx	a,@dptr
   1EE7 FF                 7008 	mov	r7,a
   1EE8 70 06              7009 	jnz	00164$
                           7010 ;	..\COMMON\easyax5043.c:1228: axradio_sync_seqnr = 1;
   1EEA 90 00 0F           7011 	mov	dptr,#_axradio_ack_seqnr
   1EED 74 01              7012 	mov	a,#0x01
   1EEF F0                 7013 	movx	@dptr,a
   1EF0                    7014 00164$:
                           7015 ;	..\COMMON\easyax5043.c:1229: ++axradio_sync_seqnr;
   1EF0 90 00 0F           7016 	mov	dptr,#_axradio_ack_seqnr
   1EF3 E0                 7017 	movx	a,@dptr
   1EF4 24 01              7018 	add	a,#0x01
   1EF6 F0                 7019 	movx	@dptr,a
                           7020 ;	..\COMMON\easyax5043.c:1230: update_timeanchor();
   1EF7 12 08 37           7021 	lcall	_update_timeanchor
                           7022 ;	..\COMMON\easyax5043.c:1231: wtimer_remove_callback(&axradio_cb_receive.cb);
   1EFA 90 02 32           7023 	mov	dptr,#_axradio_cb_receive
   1EFD 12 48 E0           7024 	lcall	_wtimer_remove_callback
                           7025 ;	..\COMMON\easyax5043.c:1232: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1F00 75 2A 00           7026 	mov	_memset_PARM_2,#0x00
   1F03 75 2B 1E           7027 	mov	_memset_PARM_3,#0x1E
   1F06 75 2C 00           7028 	mov	(_memset_PARM_3 + 1),#0x00
   1F09 90 02 36           7029 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1F0C 75 F0 00           7030 	mov	b,#0x00
   1F0F 12 3E 07           7031 	lcall	_memset
                           7032 ;	..\COMMON\easyax5043.c:1233: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1F12 90 00 1A           7033 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1F15 E0                 7034 	movx	a,@dptr
   1F16 FC                 7035 	mov	r4,a
   1F17 A3                 7036 	inc	dptr
   1F18 E0                 7037 	movx	a,@dptr
   1F19 FD                 7038 	mov	r5,a
   1F1A A3                 7039 	inc	dptr
   1F1B E0                 7040 	movx	a,@dptr
   1F1C FE                 7041 	mov	r6,a
   1F1D A3                 7042 	inc	dptr
   1F1E E0                 7043 	movx	a,@dptr
   1F1F FF                 7044 	mov	r7,a
   1F20 90 02 38           7045 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1F23 EC                 7046 	mov	a,r4
   1F24 F0                 7047 	movx	@dptr,a
   1F25 A3                 7048 	inc	dptr
   1F26 ED                 7049 	mov	a,r5
   1F27 F0                 7050 	movx	@dptr,a
   1F28 A3                 7051 	inc	dptr
   1F29 EE                 7052 	mov	a,r6
   1F2A F0                 7053 	movx	@dptr,a
   1F2B A3                 7054 	inc	dptr
   1F2C EF                 7055 	mov	a,r7
   1F2D F0                 7056 	movx	@dptr,a
                           7057 ;	..\COMMON\easyax5043.c:1234: axradio_cb_receive.st.error = AXRADIO_ERR_TIMEOUT;
   1F2E 90 02 37           7058 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1F31 74 03              7059 	mov	a,#0x03
   1F33 F0                 7060 	movx	@dptr,a
                           7061 ;	..\COMMON\easyax5043.c:1235: if (axradio_sync_seqnr <= axradio_sync_slave_resyncloss) {
   1F34 90 00 0F           7062 	mov	dptr,#_axradio_ack_seqnr
   1F37 E0                 7063 	movx	a,@dptr
   1F38 FF                 7064 	mov	r7,a
   1F39 90 4B C6           7065 	mov	dptr,#_axradio_sync_slave_resyncloss
   1F3C E4                 7066 	clr	a
   1F3D 93                 7067 	movc	a,@a+dptr
   1F3E FE                 7068 	mov	r6,a
   1F3F C3                 7069 	clr	c
   1F40 9F                 7070 	subb	a,r7
   1F41 40 54              7071 	jc	00168$
                           7072 ;	..\COMMON\easyax5043.c:1236: wtimer_add_callback(&axradio_cb_receive.cb);
   1F43 90 02 32           7073 	mov	dptr,#_axradio_cb_receive
   1F46 12 3E 7B           7074 	lcall	_wtimer_add_callback
                           7075 ;	..\COMMON\easyax5043.c:1237: axradio_sync_slave_nextperiod();
   1F49 12 17 BE           7076 	lcall	_axradio_sync_slave_nextperiod
                           7077 ;	..\COMMON\easyax5043.c:1238: axradio_syncstate = syncstate_slave_rxidle;
   1F4C 90 00 04           7078 	mov	dptr,#_axradio_syncstate
   1F4F 74 08              7079 	mov	a,#0x08
   1F51 F0                 7080 	movx	@dptr,a
                           7081 ;	..\COMMON\easyax5043.c:1239: wtimer_remove(&axradio_timer);
   1F52 90 02 89           7082 	mov	dptr,#_axradio_timer
   1F55 12 46 8F           7083 	lcall	_wtimer_remove
                           7084 ;	..\COMMON\easyax5043.c:1241: uint8_t __autodata idx = axradio_sync_seqnr;
   1F58 90 00 0F           7085 	mov	dptr,#_axradio_ack_seqnr
   1F5B E0                 7086 	movx	a,@dptr
   1F5C FF                 7087 	mov	r7,a
                           7088 ;	..\COMMON\easyax5043.c:1242: if (idx >= axradio_sync_slave_nrrx)
   1F5D 90 4B C7           7089 	mov	dptr,#_axradio_sync_slave_nrrx
   1F60 E4                 7090 	clr	a
   1F61 93                 7091 	movc	a,@a+dptr
   1F62 FE                 7092 	mov	r6,a
   1F63 C3                 7093 	clr	c
   1F64 EF                 7094 	mov	a,r7
   1F65 9E                 7095 	subb	a,r6
   1F66 40 03              7096 	jc	00166$
                           7097 ;	..\COMMON\easyax5043.c:1243: idx = axradio_sync_slave_nrrx - 1;
   1F68 EE                 7098 	mov	a,r6
   1F69 14                 7099 	dec	a
   1F6A FF                 7100 	mov	r7,a
   1F6B                    7101 00166$:
                           7102 ;	..\COMMON\easyax5043.c:1244: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[idx]);
   1F6B EF                 7103 	mov	a,r7
   1F6C 75 F0 04           7104 	mov	b,#0x04
   1F6F A4                 7105 	mul	ab
   1F70 24 C8              7106 	add	a,#_axradio_sync_slave_rxadvance
   1F72 F5 82              7107 	mov	dpl,a
   1F74 74 4B              7108 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   1F76 35 F0              7109 	addc	a,b
   1F78 F5 83              7110 	mov	dph,a
   1F7A E4                 7111 	clr	a
   1F7B 93                 7112 	movc	a,@a+dptr
   1F7C FC                 7113 	mov	r4,a
   1F7D A3                 7114 	inc	dptr
   1F7E E4                 7115 	clr	a
   1F7F 93                 7116 	movc	a,@a+dptr
   1F80 FD                 7117 	mov	r5,a
   1F81 A3                 7118 	inc	dptr
   1F82 E4                 7119 	clr	a
   1F83 93                 7120 	movc	a,@a+dptr
   1F84 FE                 7121 	mov	r6,a
   1F85 A3                 7122 	inc	dptr
   1F86 E4                 7123 	clr	a
   1F87 93                 7124 	movc	a,@a+dptr
   1F88 8C 82              7125 	mov	dpl,r4
   1F8A 8D 83              7126 	mov	dph,r5
   1F8C 8E F0              7127 	mov	b,r6
   1F8E 12 16 58           7128 	lcall	_axradio_sync_settimeradv
                           7129 ;	..\COMMON\easyax5043.c:1246: wtimer0_addabsolute(&axradio_timer);
   1F91 90 02 89           7130 	mov	dptr,#_axradio_timer
                           7131 ;	..\COMMON\easyax5043.c:1247: break;
   1F94 02 3F 23           7132 	ljmp	_wtimer0_addabsolute
   1F97                    7133 00168$:
                           7134 ;	..\COMMON\easyax5043.c:1249: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1F97 90 02 37           7135 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1F9A 74 09              7136 	mov	a,#0x09
   1F9C F0                 7137 	movx	@dptr,a
                           7138 ;	..\COMMON\easyax5043.c:1250: wtimer_add_callback(&axradio_cb_receive.cb);
   1F9D 90 02 32           7139 	mov	dptr,#_axradio_cb_receive
   1FA0 12 3E 7B           7140 	lcall	_wtimer_add_callback
                           7141 ;	..\COMMON\easyax5043.c:1251: ax5043_receiver_on_continuous();
   1FA3 12 13 28           7142 	lcall	_ax5043_receiver_on_continuous
                           7143 ;	..\COMMON\easyax5043.c:1252: axradio_syncstate = syncstate_slave_synchunt;
   1FA6 90 00 04           7144 	mov	dptr,#_axradio_syncstate
   1FA9 74 06              7145 	mov	a,#0x06
   1FAB F0                 7146 	movx	@dptr,a
                           7147 ;	..\COMMON\easyax5043.c:1253: wtimer_remove(&axradio_timer);
   1FAC 90 02 89           7148 	mov	dptr,#_axradio_timer
   1FAF 12 46 8F           7149 	lcall	_wtimer_remove
                           7150 ;	..\COMMON\easyax5043.c:1254: axradio_timer.time = axradio_sync_slave_syncwindow;
   1FB2 90 4B B8           7151 	mov	dptr,#_axradio_sync_slave_syncwindow
   1FB5 E4                 7152 	clr	a
   1FB6 93                 7153 	movc	a,@a+dptr
   1FB7 FC                 7154 	mov	r4,a
   1FB8 74 01              7155 	mov	a,#0x01
   1FBA 93                 7156 	movc	a,@a+dptr
   1FBB FD                 7157 	mov	r5,a
   1FBC 74 02              7158 	mov	a,#0x02
   1FBE 93                 7159 	movc	a,@a+dptr
   1FBF FE                 7160 	mov	r6,a
   1FC0 74 03              7161 	mov	a,#0x03
   1FC2 93                 7162 	movc	a,@a+dptr
   1FC3 FF                 7163 	mov	r7,a
   1FC4 90 02 8D           7164 	mov	dptr,#(_axradio_timer + 0x0004)
   1FC7 EC                 7165 	mov	a,r4
   1FC8 F0                 7166 	movx	@dptr,a
   1FC9 A3                 7167 	inc	dptr
   1FCA ED                 7168 	mov	a,r5
   1FCB F0                 7169 	movx	@dptr,a
   1FCC A3                 7170 	inc	dptr
   1FCD EE                 7171 	mov	a,r6
   1FCE F0                 7172 	movx	@dptr,a
   1FCF A3                 7173 	inc	dptr
   1FD0 EF                 7174 	mov	a,r7
   1FD1 F0                 7175 	movx	@dptr,a
                           7176 ;	..\COMMON\easyax5043.c:1255: wtimer0_addrelative(&axradio_timer);
   1FD2 90 02 89           7177 	mov	dptr,#_axradio_timer
   1FD5 12 3E 95           7178 	lcall	_wtimer0_addrelative
                           7179 ;	..\COMMON\easyax5043.c:1256: axradio_sync_time = axradio_timer.time;
   1FD8 90 02 8D           7180 	mov	dptr,#(_axradio_timer + 0x0004)
   1FDB E0                 7181 	movx	a,@dptr
   1FDC FC                 7182 	mov	r4,a
   1FDD A3                 7183 	inc	dptr
   1FDE E0                 7184 	movx	a,@dptr
   1FDF FD                 7185 	mov	r5,a
   1FE0 A3                 7186 	inc	dptr
   1FE1 E0                 7187 	movx	a,@dptr
   1FE2 FE                 7188 	mov	r6,a
   1FE3 A3                 7189 	inc	dptr
   1FE4 E0                 7190 	movx	a,@dptr
   1FE5 FF                 7191 	mov	r7,a
   1FE6 90 00 10           7192 	mov	dptr,#_axradio_sync_time
   1FE9 EC                 7193 	mov	a,r4
   1FEA F0                 7194 	movx	@dptr,a
   1FEB A3                 7195 	inc	dptr
   1FEC ED                 7196 	mov	a,r5
   1FED F0                 7197 	movx	@dptr,a
   1FEE A3                 7198 	inc	dptr
   1FEF EE                 7199 	mov	a,r6
   1FF0 F0                 7200 	movx	@dptr,a
   1FF1 A3                 7201 	inc	dptr
   1FF2 EF                 7202 	mov	a,r7
   1FF3 F0                 7203 	movx	@dptr,a
                           7204 ;	..\COMMON\easyax5043.c:1257: break;
                           7205 ;	..\COMMON\easyax5043.c:1259: case syncstate_slave_rxack:
   1FF4 22                 7206 	ret
   1FF5                    7207 00169$:
                           7208 ;	..\COMMON\easyax5043.c:1260: axradio_syncstate = syncstate_slave_rxidle;
   1FF5 90 00 04           7209 	mov	dptr,#_axradio_syncstate
   1FF8 74 08              7210 	mov	a,#0x08
   1FFA F0                 7211 	movx	@dptr,a
                           7212 ;	..\COMMON\easyax5043.c:1261: wtimer_remove(&axradio_timer);
   1FFB 90 02 89           7213 	mov	dptr,#_axradio_timer
   1FFE 12 46 8F           7214 	lcall	_wtimer_remove
                           7215 ;	..\COMMON\easyax5043.c:1262: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[1]);
   2001 90 4B CC           7216 	mov	dptr,#(_axradio_sync_slave_rxadvance + 0x0004)
   2004 E4                 7217 	clr	a
   2005 93                 7218 	movc	a,@a+dptr
   2006 FC                 7219 	mov	r4,a
   2007 A3                 7220 	inc	dptr
   2008 E4                 7221 	clr	a
   2009 93                 7222 	movc	a,@a+dptr
   200A FD                 7223 	mov	r5,a
   200B A3                 7224 	inc	dptr
   200C E4                 7225 	clr	a
   200D 93                 7226 	movc	a,@a+dptr
   200E FE                 7227 	mov	r6,a
   200F A3                 7228 	inc	dptr
   2010 E4                 7229 	clr	a
   2011 93                 7230 	movc	a,@a+dptr
   2012 8C 82              7231 	mov	dpl,r4
   2014 8D 83              7232 	mov	dph,r5
   2016 8E F0              7233 	mov	b,r6
   2018 12 16 58           7234 	lcall	_axradio_sync_settimeradv
                           7235 ;	..\COMMON\easyax5043.c:1263: wtimer0_addabsolute(&axradio_timer);
   201B 90 02 89           7236 	mov	dptr,#_axradio_timer
   201E 12 3F 23           7237 	lcall	_wtimer0_addabsolute
                           7238 ;	..\COMMON\easyax5043.c:1264: goto transmitack;
   2021 02 1A 0C           7239 	ljmp	00131$
                           7240 ;	..\COMMON\easyax5043.c:1268: default:
   2024                    7241 00171$:
                           7242 ;	..\COMMON\easyax5043.c:1270: }
   2024 22                 7243 	ret
                           7244 ;------------------------------------------------------------
                           7245 ;Allocation info for local variables in function 'axradio_callback_fwd'
                           7246 ;------------------------------------------------------------
                           7247 ;desc                      Allocated to registers r6 r7 
                           7248 ;------------------------------------------------------------
                           7249 ;	..\COMMON\easyax5043.c:1273: static __reentrantb void axradio_callback_fwd(struct wtimer_callback __xdata *desc) __reentrant
                           7250 ;	-----------------------------------------
                           7251 ;	 function axradio_callback_fwd
                           7252 ;	-----------------------------------------
   2025                    7253 _axradio_callback_fwd:
   2025 AE 82              7254 	mov	r6,dpl
   2027 AF 83              7255 	mov	r7,dph
                           7256 ;	..\COMMON\easyax5043.c:1275: axradio_statuschange((struct axradio_status __xdata *)(desc + 1));
   2029 74 04              7257 	mov	a,#0x04
   202B 2E                 7258 	add	a,r6
   202C FE                 7259 	mov	r6,a
   202D E4                 7260 	clr	a
   202E 3F                 7261 	addc	a,r7
   202F FF                 7262 	mov	r7,a
   2030 8E 82              7263 	mov	dpl,r6
   2032 8F 83              7264 	mov	dph,r7
   2034 02 34 7A           7265 	ljmp	_axradio_statuschange
                           7266 ;------------------------------------------------------------
                           7267 ;Allocation info for local variables in function 'axradio_receive_callback_fwd'
                           7268 ;------------------------------------------------------------
                           7269 ;desc                      Allocated to registers 
                           7270 ;len                       Allocated to registers r6 r7 
                           7271 ;len                       Allocated to registers r6 r7 
                           7272 ;seqnr                     Allocated to registers r6 
                           7273 ;len_byte                  Allocated to registers r6 
                           7274 ;trxst                     Allocated to registers r6 
                           7275 ;iesave                    Allocated to registers r7 
                           7276 ;------------------------------------------------------------
                           7277 ;	..\COMMON\easyax5043.c:1278: static void axradio_receive_callback_fwd(struct wtimer_callback __xdata *desc)
                           7278 ;	-----------------------------------------
                           7279 ;	 function axradio_receive_callback_fwd
                           7280 ;	-----------------------------------------
   2037                    7281 _axradio_receive_callback_fwd:
                           7282 ;	..\COMMON\easyax5043.c:1288: if (axradio_cb_receive.st.error != AXRADIO_ERR_NOERROR) {
   2037 90 02 37           7283 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   203A E0                 7284 	movx	a,@dptr
   203B 60 06              7285 	jz	00102$
                           7286 ;	..\COMMON\easyax5043.c:1289: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   203D 90 02 36           7287 	mov	dptr,#(_axradio_cb_receive + 0x0004)
                           7288 ;	..\COMMON\easyax5043.c:1290: return;
   2040 02 34 7A           7289 	ljmp	_axradio_statuschange
   2043                    7290 00102$:
                           7291 ;	..\COMMON\easyax5043.c:1292: if (axradio_phy_pn9 && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   2043 90 4B 73           7292 	mov	dptr,#_axradio_phy_pn9
   2046 E4                 7293 	clr	a
   2047 93                 7294 	movc	a,@a+dptr
   2048 FF                 7295 	mov	r7,a
   2049 60 5C              7296 	jz	00104$
   204B 74 1C              7297 	mov	a,#0x1C
   204D B5 0A 02           7298 	cjne	a,_axradio_mode,00260$
   2050 80 55              7299 	sjmp	00104$
   2052                    7300 00260$:
                           7301 ;	..\COMMON\easyax5043.c:1293: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   2052 74 1D              7302 	mov	a,#0x1D
   2054 B5 0A 02           7303 	cjne	a,_axradio_mode,00261$
   2057 80 4E              7304 	sjmp	00104$
   2059                    7305 00261$:
                           7306 ;	..\COMMON\easyax5043.c:1294: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   2059 74 1E              7307 	mov	a,#0x1E
   205B B5 0A 02           7308 	cjne	a,_axradio_mode,00262$
   205E 80 47              7309 	sjmp	00104$
   2060                    7310 00262$:
                           7311 ;	..\COMMON\easyax5043.c:1295: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   2060 90 02 52           7312 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2063 E0                 7313 	movx	a,@dptr
   2064 FE                 7314 	mov	r6,a
   2065 A3                 7315 	inc	dptr
   2066 E0                 7316 	movx	a,@dptr
   2067 FF                 7317 	mov	r7,a
                           7318 ;	..\COMMON\easyax5043.c:1296: len += axradio_framing_maclen;
   2068 90 4B 94           7319 	mov	dptr,#_axradio_framing_maclen
   206B E4                 7320 	clr	a
   206C 93                 7321 	movc	a,@a+dptr
   206D 7C 00              7322 	mov	r4,#0x00
   206F 2E                 7323 	add	a,r6
   2070 FE                 7324 	mov	r6,a
   2071 EC                 7325 	mov	a,r4
   2072 3F                 7326 	addc	a,r7
   2073 FF                 7327 	mov	r7,a
                           7328 ;	..\COMMON\easyax5043.c:1297: pn9_buffer((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len, 0x1ff, -(AX5043_ENCODING & 0x01));
   2074 90 40 11           7329 	mov	dptr,#_AX5043_ENCODING
   2077 E0                 7330 	movx	a,@dptr
   2078 FD                 7331 	mov	r5,a
   2079 53 05 01           7332 	anl	ar5,#0x01
   207C C3                 7333 	clr	c
   207D E4                 7334 	clr	a
   207E 9D                 7335 	subb	a,r5
   207F FD                 7336 	mov	r5,a
   2080 90 02 4E           7337 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2083 E0                 7338 	movx	a,@dptr
   2084 FB                 7339 	mov	r3,a
   2085 A3                 7340 	inc	dptr
   2086 E0                 7341 	movx	a,@dptr
   2087 FC                 7342 	mov	r4,a
   2088 7A 00              7343 	mov	r2,#0x00
   208A C0 05              7344 	push	ar5
   208C 74 FF              7345 	mov	a,#0xFF
   208E C0 E0              7346 	push	acc
   2090 74 01              7347 	mov	a,#0x01
   2092 C0 E0              7348 	push	acc
   2094 C0 06              7349 	push	ar6
   2096 C0 07              7350 	push	ar7
   2098 8B 82              7351 	mov	dpl,r3
   209A 8C 83              7352 	mov	dph,r4
   209C 8A F0              7353 	mov	b,r2
   209E 12 3F 76           7354 	lcall	_pn9_buffer
   20A1 E5 81              7355 	mov	a,sp
   20A3 24 FB              7356 	add	a,#0xfb
   20A5 F5 81              7357 	mov	sp,a
   20A7                    7358 00104$:
                           7359 ;	..\COMMON\easyax5043.c:1299: if (axradio_framing_swcrclen && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   20A7 90 4B 9B           7360 	mov	dptr,#_axradio_framing_swcrclen
   20AA E4                 7361 	clr	a
   20AB 93                 7362 	movc	a,@a+dptr
   20AC FF                 7363 	mov	r7,a
   20AD 60 67              7364 	jz	00111$
   20AF 74 1C              7365 	mov	a,#0x1C
   20B1 B5 0A 02           7366 	cjne	a,_axradio_mode,00264$
   20B4 80 60              7367 	sjmp	00111$
   20B6                    7368 00264$:
                           7369 ;	..\COMMON\easyax5043.c:1300: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   20B6 74 1D              7370 	mov	a,#0x1D
   20B8 B5 0A 02           7371 	cjne	a,_axradio_mode,00265$
   20BB 80 59              7372 	sjmp	00111$
   20BD                    7373 00265$:
                           7374 ;	..\COMMON\easyax5043.c:1301: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   20BD 74 1E              7375 	mov	a,#0x1E
   20BF B5 0A 02           7376 	cjne	a,_axradio_mode,00266$
   20C2 80 52              7377 	sjmp	00111$
   20C4                    7378 00266$:
                           7379 ;	..\COMMON\easyax5043.c:1302: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   20C4 90 02 52           7380 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   20C7 E0                 7381 	movx	a,@dptr
   20C8 FE                 7382 	mov	r6,a
   20C9 A3                 7383 	inc	dptr
   20CA E0                 7384 	movx	a,@dptr
   20CB FF                 7385 	mov	r7,a
                           7386 ;	..\COMMON\easyax5043.c:1303: len += axradio_framing_maclen;
   20CC 90 4B 94           7387 	mov	dptr,#_axradio_framing_maclen
   20CF E4                 7388 	clr	a
   20D0 93                 7389 	movc	a,@a+dptr
   20D1 7C 00              7390 	mov	r4,#0x00
   20D3 2E                 7391 	add	a,r6
   20D4 FE                 7392 	mov	r6,a
   20D5 EC                 7393 	mov	a,r4
   20D6 3F                 7394 	addc	a,r7
   20D7 FF                 7395 	mov	r7,a
                           7396 ;	..\COMMON\easyax5043.c:1304: if (!axradio_framing_check_crc((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len)) {
   20D8 90 02 4E           7397 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   20DB E0                 7398 	movx	a,@dptr
   20DC FC                 7399 	mov	r4,a
   20DD A3                 7400 	inc	dptr
   20DE E0                 7401 	movx	a,@dptr
   20DF FD                 7402 	mov	r5,a
   20E0 C0 06              7403 	push	ar6
   20E2 C0 07              7404 	push	ar7
   20E4 8C 82              7405 	mov	dpl,r4
   20E6 8D 83              7406 	mov	dph,r5
   20E8 12 06 37           7407 	lcall	_axradio_framing_check_crc
   20EB AF 82              7408 	mov	r7,dpl
   20ED 15 81              7409 	dec	sp
   20EF 15 81              7410 	dec	sp
   20F1 EF                 7411 	mov	a,r7
   20F2 70 03              7412 	jnz	00267$
   20F4 02 24 FB           7413 	ljmp	00163$
   20F7                    7414 00267$:
                           7415 ;	..\COMMON\easyax5043.c:1308: axradio_cb_receive.st.rx.pktlen -= axradio_framing_swcrclen; // drop crc
   20F7 90 02 52           7416 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   20FA E0                 7417 	movx	a,@dptr
   20FB FE                 7418 	mov	r6,a
   20FC A3                 7419 	inc	dptr
   20FD E0                 7420 	movx	a,@dptr
   20FE FF                 7421 	mov	r7,a
   20FF 90 4B 9B           7422 	mov	dptr,#_axradio_framing_swcrclen
   2102 E4                 7423 	clr	a
   2103 93                 7424 	movc	a,@a+dptr
   2104 FD                 7425 	mov	r5,a
   2105 7C 00              7426 	mov	r4,#0x00
   2107 EE                 7427 	mov	a,r6
   2108 C3                 7428 	clr	c
   2109 9D                 7429 	subb	a,r5
   210A FE                 7430 	mov	r6,a
   210B EF                 7431 	mov	a,r7
   210C 9C                 7432 	subb	a,r4
   210D FF                 7433 	mov	r7,a
   210E 90 02 52           7434 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2111 EE                 7435 	mov	a,r6
   2112 F0                 7436 	movx	@dptr,a
   2113 A3                 7437 	inc	dptr
   2114 EF                 7438 	mov	a,r7
   2115 F0                 7439 	movx	@dptr,a
   2116                    7440 00111$:
                           7441 ;	..\COMMON\easyax5043.c:1312: axradio_cb_receive.st.rx.phy.timeoffset = 0;
   2116 90 02 42           7442 	mov	dptr,#(_axradio_cb_receive + 0x0010)
                           7443 ;	..\COMMON\easyax5043.c:1313: axradio_cb_receive.st.rx.phy.period = 0;
   2119 E4                 7444 	clr	a
   211A F0                 7445 	movx	@dptr,a
   211B A3                 7446 	inc	dptr
   211C F0                 7447 	movx	@dptr,a
   211D 90 02 44           7448 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   2120 F0                 7449 	movx	@dptr,a
   2121 A3                 7450 	inc	dptr
   2122 E4                 7451 	clr	a
   2123 F0                 7452 	movx	@dptr,a
                           7453 ;	..\COMMON\easyax5043.c:1314: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   2124 74 12              7454 	mov	a,#0x12
   2126 B5 0A 02           7455 	cjne	a,_axradio_mode,00268$
   2129 80 0C              7456 	sjmp	00117$
   212B                    7457 00268$:
                           7458 ;	..\COMMON\easyax5043.c:1315: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   212B 74 13              7459 	mov	a,#0x13
   212D B5 0A 02           7460 	cjne	a,_axradio_mode,00269$
   2130 80 05              7461 	sjmp	00117$
   2132                    7462 00269$:
                           7463 ;	..\COMMON\easyax5043.c:1316: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   2132 74 21              7464 	mov	a,#0x21
   2134 B5 0A 60           7465 	cjne	a,_axradio_mode,00118$
   2137                    7466 00117$:
                           7467 ;	..\COMMON\easyax5043.c:1317: ax5043_off();
   2137 12 14 6D           7468 	lcall	_ax5043_off
                           7469 ;	..\COMMON\easyax5043.c:1318: wtimer_remove(&axradio_timer);
   213A 90 02 89           7470 	mov	dptr,#_axradio_timer
   213D 12 46 8F           7471 	lcall	_wtimer_remove
                           7472 ;	..\COMMON\easyax5043.c:1319: if (axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   2140 74 21              7473 	mov	a,#0x21
   2142 B5 0A 26           7474 	cjne	a,_axradio_mode,00116$
                           7475 ;	..\COMMON\easyax5043.c:1320: axradio_syncstate = syncstate_master_normal;
   2145 90 00 04           7476 	mov	dptr,#_axradio_syncstate
   2148 74 03              7477 	mov	a,#0x03
   214A F0                 7478 	movx	@dptr,a
                           7479 ;	..\COMMON\easyax5043.c:1321: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   214B 90 4B B4           7480 	mov	dptr,#_axradio_sync_xoscstartup
   214E E4                 7481 	clr	a
   214F 93                 7482 	movc	a,@a+dptr
   2150 FC                 7483 	mov	r4,a
   2151 74 01              7484 	mov	a,#0x01
   2153 93                 7485 	movc	a,@a+dptr
   2154 FD                 7486 	mov	r5,a
   2155 74 02              7487 	mov	a,#0x02
   2157 93                 7488 	movc	a,@a+dptr
   2158 FE                 7489 	mov	r6,a
   2159 74 03              7490 	mov	a,#0x03
   215B 93                 7491 	movc	a,@a+dptr
   215C 8C 82              7492 	mov	dpl,r4
   215E 8D 83              7493 	mov	dph,r5
   2160 8E F0              7494 	mov	b,r6
   2162 12 16 58           7495 	lcall	_axradio_sync_settimeradv
                           7496 ;	..\COMMON\easyax5043.c:1322: wtimer0_addabsolute(&axradio_timer);
   2165 90 02 89           7497 	mov	dptr,#_axradio_timer
   2168 12 3F 23           7498 	lcall	_wtimer0_addabsolute
   216B                    7499 00116$:
                           7500 ;	..\COMMON\easyax5043.c:1324: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   216B 90 02 75           7501 	mov	dptr,#_axradio_cb_transmitend
   216E 12 48 E0           7502 	lcall	_wtimer_remove_callback
                           7503 ;	..\COMMON\easyax5043.c:1325: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   2171 90 02 7A           7504 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   2174 E4                 7505 	clr	a
   2175 F0                 7506 	movx	@dptr,a
                           7507 ;	..\COMMON\easyax5043.c:1326: axradio_cb_transmitend.st.time.t = radio_read24((uint16_t)&AX5043_TIMER2);
   2176 90 40 59           7508 	mov	dptr,#_AX5043_TIMER2
   2179 12 3F 4F           7509 	lcall	_radio_read24
   217C AC 82              7510 	mov	r4,dpl
   217E AD 83              7511 	mov	r5,dph
   2180 AE F0              7512 	mov	r6,b
   2182 FF                 7513 	mov	r7,a
   2183 90 02 7B           7514 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   2186 EC                 7515 	mov	a,r4
   2187 F0                 7516 	movx	@dptr,a
   2188 A3                 7517 	inc	dptr
   2189 ED                 7518 	mov	a,r5
   218A F0                 7519 	movx	@dptr,a
   218B A3                 7520 	inc	dptr
   218C EE                 7521 	mov	a,r6
   218D F0                 7522 	movx	@dptr,a
   218E A3                 7523 	inc	dptr
   218F EF                 7524 	mov	a,r7
   2190 F0                 7525 	movx	@dptr,a
                           7526 ;	..\COMMON\easyax5043.c:1327: wtimer_add_callback(&axradio_cb_transmitend.cb);
   2191 90 02 75           7527 	mov	dptr,#_axradio_cb_transmitend
   2194 12 3E 7B           7528 	lcall	_wtimer_add_callback
   2197                    7529 00118$:
                           7530 ;	..\COMMON\easyax5043.c:1329: if (axradio_framing_destaddrpos != 0xff)
   2197 90 4B 96           7531 	mov	dptr,#_axradio_framing_destaddrpos
   219A E4                 7532 	clr	a
   219B 93                 7533 	movc	a,@a+dptr
   219C FF                 7534 	mov	r7,a
   219D BF FF 02           7535 	cjne	r7,#0xFF,00274$
   21A0 80 29              7536 	sjmp	00122$
   21A2                    7537 00274$:
                           7538 ;	..\COMMON\easyax5043.c:1330: memcpy_xdata(&axradio_cb_receive.st.rx.mac.localaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_destaddrpos], axradio_framing_addrlen);
   21A2 90 02 4E           7539 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   21A5 E0                 7540 	movx	a,@dptr
   21A6 FD                 7541 	mov	r5,a
   21A7 A3                 7542 	inc	dptr
   21A8 E0                 7543 	movx	a,@dptr
   21A9 FE                 7544 	mov	r6,a
   21AA EF                 7545 	mov	a,r7
   21AB 2D                 7546 	add	a,r5
   21AC FF                 7547 	mov	r7,a
   21AD E4                 7548 	clr	a
   21AE 3E                 7549 	addc	a,r6
   21AF FC                 7550 	mov	r4,a
   21B0 8F 2A              7551 	mov	_memcpy_PARM_2,r7
   21B2 8C 2B              7552 	mov	(_memcpy_PARM_2 + 1),r4
   21B4 75 2C 00           7553 	mov	(_memcpy_PARM_2 + 2),#0x00
   21B7 90 4B 95           7554 	mov	dptr,#_axradio_framing_addrlen
   21BA E4                 7555 	clr	a
   21BB 93                 7556 	movc	a,@a+dptr
   21BC FF                 7557 	mov	r7,a
   21BD 8F 2D              7558 	mov	_memcpy_PARM_3,r7
   21BF 75 2E 00           7559 	mov	(_memcpy_PARM_3 + 1),#0x00
   21C2 90 02 4A           7560 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   21C5 75 F0 00           7561 	mov	b,#0x00
   21C8 12 3E 26           7562 	lcall	_memcpy
   21CB                    7563 00122$:
                           7564 ;	..\COMMON\easyax5043.c:1331: if (axradio_framing_sourceaddrpos != 0xff)
   21CB 90 4B 97           7565 	mov	dptr,#_axradio_framing_sourceaddrpos
   21CE E4                 7566 	clr	a
   21CF 93                 7567 	movc	a,@a+dptr
   21D0 FF                 7568 	mov	r7,a
   21D1 BF FF 02           7569 	cjne	r7,#0xFF,00275$
   21D4 80 29              7570 	sjmp	00124$
   21D6                    7571 00275$:
                           7572 ;	..\COMMON\easyax5043.c:1332: memcpy_xdata(&axradio_cb_receive.st.rx.mac.remoteaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_sourceaddrpos], axradio_framing_addrlen);
   21D6 90 02 4E           7573 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   21D9 E0                 7574 	movx	a,@dptr
   21DA FD                 7575 	mov	r5,a
   21DB A3                 7576 	inc	dptr
   21DC E0                 7577 	movx	a,@dptr
   21DD FE                 7578 	mov	r6,a
   21DE EF                 7579 	mov	a,r7
   21DF 2D                 7580 	add	a,r5
   21E0 FF                 7581 	mov	r7,a
   21E1 E4                 7582 	clr	a
   21E2 3E                 7583 	addc	a,r6
   21E3 FC                 7584 	mov	r4,a
   21E4 8F 2A              7585 	mov	_memcpy_PARM_2,r7
   21E6 8C 2B              7586 	mov	(_memcpy_PARM_2 + 1),r4
   21E8 75 2C 00           7587 	mov	(_memcpy_PARM_2 + 2),#0x00
   21EB 90 4B 95           7588 	mov	dptr,#_axradio_framing_addrlen
   21EE E4                 7589 	clr	a
   21EF 93                 7590 	movc	a,@a+dptr
   21F0 FF                 7591 	mov	r7,a
   21F1 8F 2D              7592 	mov	_memcpy_PARM_3,r7
   21F3 75 2E 00           7593 	mov	(_memcpy_PARM_3 + 1),#0x00
   21F6 90 02 46           7594 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   21F9 75 F0 00           7595 	mov	b,#0x00
   21FC 12 3E 26           7596 	lcall	_memcpy
   21FF                    7597 00124$:
                           7598 ;	..\COMMON\easyax5043.c:1333: if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   21FF 74 1A              7599 	mov	a,#0x1A
   2201 B5 0A 02           7600 	cjne	a,_axradio_mode,00276$
   2204 80 11              7601 	sjmp	00146$
   2206                    7602 00276$:
                           7603 ;	..\COMMON\easyax5043.c:1334: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE ||
   2206 74 1B              7604 	mov	a,#0x1B
   2208 B5 0A 02           7605 	cjne	a,_axradio_mode,00277$
   220B 80 0A              7606 	sjmp	00146$
   220D                    7607 00277$:
                           7608 ;	..\COMMON\easyax5043.c:1335: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   220D 74 23              7609 	mov	a,#0x23
   220F B5 0A 02           7610 	cjne	a,_axradio_mode,00278$
   2212 80 03              7611 	sjmp	00279$
   2214                    7612 00278$:
   2214 02 24 11           7613 	ljmp	00147$
   2217                    7614 00279$:
   2217                    7615 00146$:
                           7616 ;	..\COMMON\easyax5043.c:1336: axradio_ack_count = 0;
   2217 90 00 0E           7617 	mov	dptr,#_axradio_ack_count
   221A E4                 7618 	clr	a
   221B F0                 7619 	movx	@dptr,a
                           7620 ;	..\COMMON\easyax5043.c:1337: axradio_txbuffer_len = axradio_framing_maclen + axradio_framing_minpayloadlen;
   221C 90 4B 94           7621 	mov	dptr,#_axradio_framing_maclen
   221F E4                 7622 	clr	a
   2220 93                 7623 	movc	a,@a+dptr
   2221 FF                 7624 	mov	r7,a
   2222 FD                 7625 	mov	r5,a
   2223 7E 00              7626 	mov	r6,#0x00
   2225 90 4B AD           7627 	mov	dptr,#_axradio_framing_minpayloadlen
   2228 E4                 7628 	clr	a
   2229 93                 7629 	movc	a,@a+dptr
   222A FC                 7630 	mov	r4,a
   222B 7B 00              7631 	mov	r3,#0x00
   222D 90 00 05           7632 	mov	dptr,#_axradio_txbuffer_len
   2230 EC                 7633 	mov	a,r4
   2231 2D                 7634 	add	a,r5
   2232 F0                 7635 	movx	@dptr,a
   2233 EB                 7636 	mov	a,r3
   2234 3E                 7637 	addc	a,r6
   2235 A3                 7638 	inc	dptr
   2236 F0                 7639 	movx	@dptr,a
                           7640 ;	..\COMMON\easyax5043.c:1338: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   2237 8F 2B              7641 	mov	_memset_PARM_3,r7
   2239 75 2C 00           7642 	mov	(_memset_PARM_3 + 1),#0x00
   223C 75 2A 00           7643 	mov	_memset_PARM_2,#0x00
   223F 90 00 2A           7644 	mov	dptr,#_axradio_txbuffer
   2242 75 F0 00           7645 	mov	b,#0x00
   2245 12 3E 07           7646 	lcall	_memset
                           7647 ;	..\COMMON\easyax5043.c:1339: if (axradio_framing_ack_seqnrpos != 0xff) {
   2248 90 4B AC           7648 	mov	dptr,#_axradio_framing_ack_seqnrpos
   224B E4                 7649 	clr	a
   224C 93                 7650 	movc	a,@a+dptr
   224D FF                 7651 	mov	r7,a
   224E BF FF 02           7652 	cjne	r7,#0xFF,00280$
   2251 80 35              7653 	sjmp	00129$
   2253                    7654 00280$:
                           7655 ;	..\COMMON\easyax5043.c:1340: uint8_t seqnr = axradio_cb_receive.st.rx.mac.raw[axradio_framing_ack_seqnrpos];
   2253 90 02 4E           7656 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2256 E0                 7657 	movx	a,@dptr
   2257 FD                 7658 	mov	r5,a
   2258 A3                 7659 	inc	dptr
   2259 E0                 7660 	movx	a,@dptr
   225A FE                 7661 	mov	r6,a
   225B EF                 7662 	mov	a,r7
   225C 2D                 7663 	add	a,r5
   225D F5 82              7664 	mov	dpl,a
   225F E4                 7665 	clr	a
   2260 3E                 7666 	addc	a,r6
   2261 F5 83              7667 	mov	dph,a
   2263 E0                 7668 	movx	a,@dptr
   2264 FE                 7669 	mov	r6,a
                           7670 ;	..\COMMON\easyax5043.c:1341: axradio_txbuffer[axradio_framing_ack_seqnrpos] = seqnr;
   2265 EF                 7671 	mov	a,r7
   2266 24 2A              7672 	add	a,#_axradio_txbuffer
   2268 F5 82              7673 	mov	dpl,a
   226A E4                 7674 	clr	a
   226B 34 00              7675 	addc	a,#(_axradio_txbuffer >> 8)
   226D F5 83              7676 	mov	dph,a
   226F EE                 7677 	mov	a,r6
   2270 F0                 7678 	movx	@dptr,a
                           7679 ;	..\COMMON\easyax5043.c:1342: if (axradio_ack_seqnr != seqnr)
   2271 90 00 0F           7680 	mov	dptr,#_axradio_ack_seqnr
   2274 E0                 7681 	movx	a,@dptr
   2275 FF                 7682 	mov	r7,a
   2276 B5 06 02           7683 	cjne	a,ar6,00281$
   2279 80 07              7684 	sjmp	00126$
   227B                    7685 00281$:
                           7686 ;	..\COMMON\easyax5043.c:1343: axradio_ack_seqnr = seqnr;
   227B 90 00 0F           7687 	mov	dptr,#_axradio_ack_seqnr
   227E EE                 7688 	mov	a,r6
   227F F0                 7689 	movx	@dptr,a
   2280 80 06              7690 	sjmp	00129$
   2282                    7691 00126$:
                           7692 ;	..\COMMON\easyax5043.c:1345: axradio_cb_receive.st.error = AXRADIO_ERR_RETRANSMISSION;
   2282 90 02 37           7693 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2285 74 08              7694 	mov	a,#0x08
   2287 F0                 7695 	movx	@dptr,a
   2288                    7696 00129$:
                           7697 ;	..\COMMON\easyax5043.c:1347: if (axradio_framing_destaddrpos != 0xff) {
   2288 90 4B 96           7698 	mov	dptr,#_axradio_framing_destaddrpos
   228B E4                 7699 	clr	a
   228C 93                 7700 	movc	a,@a+dptr
   228D FF                 7701 	mov	r7,a
   228E BF FF 02           7702 	cjne	r7,#0xFF,00282$
   2291 80 5B              7703 	sjmp	00134$
   2293                    7704 00282$:
                           7705 ;	..\COMMON\easyax5043.c:1348: if (axradio_framing_sourceaddrpos != 0xff)
   2293 90 4B 97           7706 	mov	dptr,#_axradio_framing_sourceaddrpos
   2296 E4                 7707 	clr	a
   2297 93                 7708 	movc	a,@a+dptr
   2298 FE                 7709 	mov	r6,a
   2299 BE FF 02           7710 	cjne	r6,#0xFF,00283$
   229C 80 29              7711 	sjmp	00131$
   229E                    7712 00283$:
                           7713 ;	..\COMMON\easyax5043.c:1349: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_cb_receive.st.rx.mac.remoteaddr, axradio_framing_addrlen);
   229E EF                 7714 	mov	a,r7
   229F 24 2A              7715 	add	a,#_axradio_txbuffer
   22A1 FD                 7716 	mov	r5,a
   22A2 E4                 7717 	clr	a
   22A3 34 00              7718 	addc	a,#(_axradio_txbuffer >> 8)
   22A5 FE                 7719 	mov	r6,a
   22A6 7C 00              7720 	mov	r4,#0x00
   22A8 75 2A 46           7721 	mov	_memcpy_PARM_2,#(_axradio_cb_receive + 0x0014)
   22AB 75 2B 02           7722 	mov	(_memcpy_PARM_2 + 1),#((_axradio_cb_receive + 0x0014) >> 8)
   22AE 75 2C 00           7723 	mov	(_memcpy_PARM_2 + 2),#0x00
   22B1 90 4B 95           7724 	mov	dptr,#_axradio_framing_addrlen
   22B4 E4                 7725 	clr	a
   22B5 93                 7726 	movc	a,@a+dptr
   22B6 FB                 7727 	mov	r3,a
   22B7 8B 2D              7728 	mov	_memcpy_PARM_3,r3
   22B9 75 2E 00           7729 	mov	(_memcpy_PARM_3 + 1),#0x00
   22BC 8D 82              7730 	mov	dpl,r5
   22BE 8E 83              7731 	mov	dph,r6
   22C0 8C F0              7732 	mov	b,r4
   22C2 12 3E 26           7733 	lcall	_memcpy
   22C5 80 27              7734 	sjmp	00134$
   22C7                    7735 00131$:
                           7736 ;	..\COMMON\easyax5043.c:1351: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_default_remoteaddr, axradio_framing_addrlen);
   22C7 EF                 7737 	mov	a,r7
   22C8 24 2A              7738 	add	a,#_axradio_txbuffer
   22CA FF                 7739 	mov	r7,a
   22CB E4                 7740 	clr	a
   22CC 34 00              7741 	addc	a,#(_axradio_txbuffer >> 8)
   22CE FE                 7742 	mov	r6,a
   22CF 7D 00              7743 	mov	r5,#0x00
   22D1 75 2A 26           7744 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   22D4 75 2B 00           7745 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   22D7 75 2C 00           7746 	mov	(_memcpy_PARM_2 + 2),#0x00
   22DA 90 4B 95           7747 	mov	dptr,#_axradio_framing_addrlen
   22DD E4                 7748 	clr	a
   22DE 93                 7749 	movc	a,@a+dptr
   22DF FC                 7750 	mov	r4,a
   22E0 8C 2D              7751 	mov	_memcpy_PARM_3,r4
   22E2 75 2E 00           7752 	mov	(_memcpy_PARM_3 + 1),#0x00
   22E5 8F 82              7753 	mov	dpl,r7
   22E7 8E 83              7754 	mov	dph,r6
   22E9 8D F0              7755 	mov	b,r5
   22EB 12 3E 26           7756 	lcall	_memcpy
   22EE                    7757 00134$:
                           7758 ;	..\COMMON\easyax5043.c:1353: if (axradio_framing_sourceaddrpos != 0xff)
   22EE 90 4B 97           7759 	mov	dptr,#_axradio_framing_sourceaddrpos
   22F1 E4                 7760 	clr	a
   22F2 93                 7761 	movc	a,@a+dptr
   22F3 FF                 7762 	mov	r7,a
   22F4 BF FF 02           7763 	cjne	r7,#0xFF,00284$
   22F7 80 27              7764 	sjmp	00136$
   22F9                    7765 00284$:
                           7766 ;	..\COMMON\easyax5043.c:1354: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   22F9 EF                 7767 	mov	a,r7
   22FA 24 2A              7768 	add	a,#_axradio_txbuffer
   22FC FF                 7769 	mov	r7,a
   22FD E4                 7770 	clr	a
   22FE 34 00              7771 	addc	a,#(_axradio_txbuffer >> 8)
   2300 FE                 7772 	mov	r6,a
   2301 7D 00              7773 	mov	r5,#0x00
   2303 75 2A 1E           7774 	mov	_memcpy_PARM_2,#_axradio_localaddr
   2306 75 2B 00           7775 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2309 75 2C 00           7776 	mov	(_memcpy_PARM_2 + 2),#0x00
   230C 90 4B 95           7777 	mov	dptr,#_axradio_framing_addrlen
   230F E4                 7778 	clr	a
   2310 93                 7779 	movc	a,@a+dptr
   2311 FC                 7780 	mov	r4,a
   2312 8C 2D              7781 	mov	_memcpy_PARM_3,r4
   2314 75 2E 00           7782 	mov	(_memcpy_PARM_3 + 1),#0x00
   2317 8F 82              7783 	mov	dpl,r7
   2319 8E 83              7784 	mov	dph,r6
   231B 8D F0              7785 	mov	b,r5
   231D 12 3E 26           7786 	lcall	_memcpy
   2320                    7787 00136$:
                           7788 ;	..\COMMON\easyax5043.c:1355: if (axradio_framing_lenmask) {
   2320 90 4B 9A           7789 	mov	dptr,#_axradio_framing_lenmask
   2323 E4                 7790 	clr	a
   2324 93                 7791 	movc	a,@a+dptr
   2325 FF                 7792 	mov	r7,a
   2326 60 30              7793 	jz	00138$
                           7794 ;	..\COMMON\easyax5043.c:1356: uint8_t len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   2328 90 00 05           7795 	mov	dptr,#_axradio_txbuffer_len
   232B E0                 7796 	movx	a,@dptr
   232C FD                 7797 	mov	r5,a
   232D A3                 7798 	inc	dptr
   232E E0                 7799 	movx	a,@dptr
   232F 90 4B 99           7800 	mov	dptr,#_axradio_framing_lenoffs
   2332 E4                 7801 	clr	a
   2333 93                 7802 	movc	a,@a+dptr
   2334 FE                 7803 	mov	r6,a
   2335 ED                 7804 	mov	a,r5
   2336 C3                 7805 	clr	c
   2337 9E                 7806 	subb	a,r6
   2338 5F                 7807 	anl	a,r7
   2339 FE                 7808 	mov	r6,a
                           7809 ;	..\COMMON\easyax5043.c:1357: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   233A 90 4B 98           7810 	mov	dptr,#_axradio_framing_lenpos
   233D E4                 7811 	clr	a
   233E 93                 7812 	movc	a,@a+dptr
   233F 24 2A              7813 	add	a,#_axradio_txbuffer
   2341 FD                 7814 	mov	r5,a
   2342 E4                 7815 	clr	a
   2343 34 00              7816 	addc	a,#(_axradio_txbuffer >> 8)
   2345 FC                 7817 	mov	r4,a
   2346 8D 82              7818 	mov	dpl,r5
   2348 8C 83              7819 	mov	dph,r4
   234A E0                 7820 	movx	a,@dptr
   234B FB                 7821 	mov	r3,a
   234C EF                 7822 	mov	a,r7
   234D F4                 7823 	cpl	a
   234E FF                 7824 	mov	r7,a
   234F 5B                 7825 	anl	a,r3
   2350 42 06              7826 	orl	ar6,a
   2352 8D 82              7827 	mov	dpl,r5
   2354 8C 83              7828 	mov	dph,r4
   2356 EE                 7829 	mov	a,r6
   2357 F0                 7830 	movx	@dptr,a
   2358                    7831 00138$:
                           7832 ;	..\COMMON\easyax5043.c:1359: if (axradio_framing_swcrclen) {
   2358 90 4B 9B           7833 	mov	dptr,#_axradio_framing_swcrclen
   235B E4                 7834 	clr	a
   235C 93                 7835 	movc	a,@a+dptr
   235D FF                 7836 	mov	r7,a
   235E 60 2E              7837 	jz	00140$
                           7838 ;	..\COMMON\easyax5043.c:1360: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   2360 90 00 05           7839 	mov	dptr,#_axradio_txbuffer_len
   2363 E0                 7840 	movx	a,@dptr
   2364 C0 E0              7841 	push	acc
   2366 A3                 7842 	inc	dptr
   2367 E0                 7843 	movx	a,@dptr
   2368 C0 E0              7844 	push	acc
   236A 90 00 2A           7845 	mov	dptr,#_axradio_txbuffer
   236D 12 06 74           7846 	lcall	_axradio_framing_append_crc
   2370 15 81              7847 	dec	sp
   2372 15 81              7848 	dec	sp
                           7849 ;	..\COMMON\easyax5043.c:1361: axradio_txbuffer_len += axradio_framing_swcrclen;
   2374 90 4B 9B           7850 	mov	dptr,#_axradio_framing_swcrclen
   2377 E4                 7851 	clr	a
   2378 93                 7852 	movc	a,@a+dptr
   2379 FF                 7853 	mov	r7,a
   237A 7E 00              7854 	mov	r6,#0x00
   237C 90 00 05           7855 	mov	dptr,#_axradio_txbuffer_len
   237F E0                 7856 	movx	a,@dptr
   2380 FC                 7857 	mov	r4,a
   2381 A3                 7858 	inc	dptr
   2382 E0                 7859 	movx	a,@dptr
   2383 FD                 7860 	mov	r5,a
   2384 90 00 05           7861 	mov	dptr,#_axradio_txbuffer_len
   2387 EF                 7862 	mov	a,r7
   2388 2C                 7863 	add	a,r4
   2389 F0                 7864 	movx	@dptr,a
   238A EE                 7865 	mov	a,r6
   238B 3D                 7866 	addc	a,r5
   238C A3                 7867 	inc	dptr
   238D F0                 7868 	movx	@dptr,a
   238E                    7869 00140$:
                           7870 ;	..\COMMON\easyax5043.c:1363: if (axradio_phy_pn9) {
   238E 90 4B 73           7871 	mov	dptr,#_axradio_phy_pn9
   2391 E4                 7872 	clr	a
   2392 93                 7873 	movc	a,@a+dptr
   2393 FF                 7874 	mov	r7,a
   2394 60 2F              7875 	jz	00142$
                           7876 ;	..\COMMON\easyax5043.c:1364: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   2396 90 40 11           7877 	mov	dptr,#_AX5043_ENCODING
   2399 E0                 7878 	movx	a,@dptr
   239A FF                 7879 	mov	r7,a
   239B 53 07 01           7880 	anl	ar7,#0x01
   239E C3                 7881 	clr	c
   239F E4                 7882 	clr	a
   23A0 9F                 7883 	subb	a,r7
   23A1 FF                 7884 	mov	r7,a
   23A2 C0 07              7885 	push	ar7
   23A4 74 FF              7886 	mov	a,#0xFF
   23A6 C0 E0              7887 	push	acc
   23A8 74 01              7888 	mov	a,#0x01
   23AA C0 E0              7889 	push	acc
   23AC 90 00 05           7890 	mov	dptr,#_axradio_txbuffer_len
   23AF E0                 7891 	movx	a,@dptr
   23B0 C0 E0              7892 	push	acc
   23B2 A3                 7893 	inc	dptr
   23B3 E0                 7894 	movx	a,@dptr
   23B4 C0 E0              7895 	push	acc
   23B6 90 00 2A           7896 	mov	dptr,#_axradio_txbuffer
   23B9 75 F0 00           7897 	mov	b,#0x00
   23BC 12 3F 76           7898 	lcall	_pn9_buffer
   23BF E5 81              7899 	mov	a,sp
   23C1 24 FB              7900 	add	a,#0xfb
   23C3 F5 81              7901 	mov	sp,a
   23C5                    7902 00142$:
                           7903 ;	..\COMMON\easyax5043.c:1366: AX5043_IRQMASK1 = 0x00;
   23C5 90 40 06           7904 	mov	dptr,#_AX5043_IRQMASK1
                           7905 ;	..\COMMON\easyax5043.c:1367: AX5043_IRQMASK0 = 0x00;
   23C8 E4                 7906 	clr	a
   23C9 F0                 7907 	movx	@dptr,a
   23CA 90 40 07           7908 	mov	dptr,#_AX5043_IRQMASK0
   23CD F0                 7909 	movx	@dptr,a
                           7910 ;	..\COMMON\easyax5043.c:1368: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   23CE 90 40 02           7911 	mov	dptr,#_AX5043_PWRMODE
   23D1 74 05              7912 	mov	a,#0x05
   23D3 F0                 7913 	movx	@dptr,a
                           7914 ;	..\COMMON\easyax5043.c:1369: AX5043_FIFOSTAT = 3;
   23D4 90 40 28           7915 	mov	dptr,#_AX5043_FIFOSTAT
   23D7 74 03              7916 	mov	a,#0x03
   23D9 F0                 7917 	movx	@dptr,a
                           7918 ;	..\COMMON\easyax5043.c:1370: axradio_trxstate = trxstate_tx_longpreamble; // ensure that trxstate != off, otherwise we would prematurely enable the receiver, see below
   23DA 75 0B 0A           7919 	mov	_axradio_trxstate,#0x0A
                           7920 ;	..\COMMON\easyax5043.c:1371: while (AX5043_POWSTAT & 0x08);
   23DD                    7921 00143$:
   23DD 90 40 03           7922 	mov	dptr,#_AX5043_POWSTAT
   23E0 E0                 7923 	movx	a,@dptr
   23E1 FF                 7924 	mov	r7,a
   23E2 20 E3 F8           7925 	jb	acc.3,00143$
                           7926 ;	..\COMMON\easyax5043.c:1372: wtimer_remove(&axradio_timer);
   23E5 90 02 89           7927 	mov	dptr,#_axradio_timer
   23E8 12 46 8F           7928 	lcall	_wtimer_remove
                           7929 ;	..\COMMON\easyax5043.c:1373: axradio_timer.time = axradio_framing_ack_delay;
   23EB 90 4B A7           7930 	mov	dptr,#_axradio_framing_ack_delay
   23EE E4                 7931 	clr	a
   23EF 93                 7932 	movc	a,@a+dptr
   23F0 FC                 7933 	mov	r4,a
   23F1 74 01              7934 	mov	a,#0x01
   23F3 93                 7935 	movc	a,@a+dptr
   23F4 FD                 7936 	mov	r5,a
   23F5 74 02              7937 	mov	a,#0x02
   23F7 93                 7938 	movc	a,@a+dptr
   23F8 FE                 7939 	mov	r6,a
   23F9 74 03              7940 	mov	a,#0x03
   23FB 93                 7941 	movc	a,@a+dptr
   23FC FF                 7942 	mov	r7,a
   23FD 90 02 8D           7943 	mov	dptr,#(_axradio_timer + 0x0004)
   2400 EC                 7944 	mov	a,r4
   2401 F0                 7945 	movx	@dptr,a
   2402 A3                 7946 	inc	dptr
   2403 ED                 7947 	mov	a,r5
   2404 F0                 7948 	movx	@dptr,a
   2405 A3                 7949 	inc	dptr
   2406 EE                 7950 	mov	a,r6
   2407 F0                 7951 	movx	@dptr,a
   2408 A3                 7952 	inc	dptr
   2409 EF                 7953 	mov	a,r7
   240A F0                 7954 	movx	@dptr,a
                           7955 ;	..\COMMON\easyax5043.c:1374: wtimer1_addrelative(&axradio_timer);
   240B 90 02 89           7956 	mov	dptr,#_axradio_timer
   240E 12 3E DC           7957 	lcall	_wtimer1_addrelative
   2411                    7958 00147$:
                           7959 ;	..\COMMON\easyax5043.c:1376: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   2411 74 22              7960 	mov	a,#0x22
   2413 B5 0A 02           7961 	cjne	a,_axradio_mode,00289$
   2416 80 0A              7962 	sjmp	00160$
   2418                    7963 00289$:
                           7964 ;	..\COMMON\easyax5043.c:1377: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2418 74 23              7965 	mov	a,#0x23
   241A B5 0A 02           7966 	cjne	a,_axradio_mode,00290$
   241D 80 03              7967 	sjmp	00291$
   241F                    7968 00290$:
   241F 02 24 F5           7969 	ljmp	00161$
   2422                    7970 00291$:
   2422                    7971 00160$:
                           7972 ;	..\COMMON\easyax5043.c:1378: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   2422 74 23              7973 	mov	a,#0x23
   2424 B5 0A 02           7974 	cjne	a,_axradio_mode,00292$
   2427 80 03              7975 	sjmp	00151$
   2429                    7976 00292$:
                           7977 ;	..\COMMON\easyax5043.c:1379: ax5043_off();
   2429 12 14 6D           7978 	lcall	_ax5043_off
   242C                    7979 00151$:
                           7980 ;	..\COMMON\easyax5043.c:1380: switch (axradio_syncstate) {
   242C 90 00 04           7981 	mov	dptr,#_axradio_syncstate
   242F E0                 7982 	movx	a,@dptr
   2430 FF                 7983 	mov	r7,a
   2431 BF 08 02           7984 	cjne	r7,#0x08,00293$
   2434 80 45              7985 	sjmp	00155$
   2436                    7986 00293$:
   2436 BF 0A 02           7987 	cjne	r7,#0x0A,00294$
   2439 80 40              7988 	sjmp	00155$
   243B                    7989 00294$:
   243B BF 0B 02           7990 	cjne	r7,#0x0B,00295$
   243E 80 3B              7991 	sjmp	00155$
   2440                    7992 00295$:
                           7993 ;	..\COMMON\easyax5043.c:1384: axradio_sync_time = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t);
   2440 90 02 38           7994 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   2443 E0                 7995 	movx	a,@dptr
   2444 FC                 7996 	mov	r4,a
   2445 A3                 7997 	inc	dptr
   2446 E0                 7998 	movx	a,@dptr
   2447 FD                 7999 	mov	r5,a
   2448 A3                 8000 	inc	dptr
   2449 E0                 8001 	movx	a,@dptr
   244A FE                 8002 	mov	r6,a
   244B A3                 8003 	inc	dptr
   244C E0                 8004 	movx	a,@dptr
   244D 8C 82              8005 	mov	dpl,r4
   244F 8D 83              8006 	mov	dph,r5
   2451 8E F0              8007 	mov	b,r6
   2453 12 08 79           8008 	lcall	_axradio_conv_time_totimer0
   2456 AC 82              8009 	mov	r4,dpl
   2458 AD 83              8010 	mov	r5,dph
   245A AE F0              8011 	mov	r6,b
   245C FF                 8012 	mov	r7,a
   245D 90 00 10           8013 	mov	dptr,#_axradio_sync_time
   2460 EC                 8014 	mov	a,r4
   2461 F0                 8015 	movx	@dptr,a
   2462 A3                 8016 	inc	dptr
   2463 ED                 8017 	mov	a,r5
   2464 F0                 8018 	movx	@dptr,a
   2465 A3                 8019 	inc	dptr
   2466 EE                 8020 	mov	a,r6
   2467 F0                 8021 	movx	@dptr,a
   2468 A3                 8022 	inc	dptr
   2469 EF                 8023 	mov	a,r7
   246A F0                 8024 	movx	@dptr,a
                           8025 ;	..\COMMON\easyax5043.c:1385: axradio_sync_periodcorr = -32768;
   246B 90 00 14           8026 	mov	dptr,#_axradio_sync_periodcorr
   246E E4                 8027 	clr	a
   246F F0                 8028 	movx	@dptr,a
   2470 A3                 8029 	inc	dptr
   2471 74 80              8030 	mov	a,#0x80
   2473 F0                 8031 	movx	@dptr,a
                           8032 ;	..\COMMON\easyax5043.c:1386: axradio_sync_seqnr = 0;
   2474 90 00 0F           8033 	mov	dptr,#_axradio_ack_seqnr
   2477 E4                 8034 	clr	a
   2478 F0                 8035 	movx	@dptr,a
                           8036 ;	..\COMMON\easyax5043.c:1387: break;
                           8037 ;	..\COMMON\easyax5043.c:1391: case syncstate_slave_rxpacket:
   2479 80 2D              8038 	sjmp	00156$
   247B                    8039 00155$:
                           8040 ;	..\COMMON\easyax5043.c:1392: axradio_sync_adjustperiodcorr();
   247B 12 16 97           8041 	lcall	_axradio_sync_adjustperiodcorr
                           8042 ;	..\COMMON\easyax5043.c:1393: axradio_cb_receive.st.rx.phy.period = axradio_sync_periodcorr >> SYNC_K1;
   247E 90 00 14           8043 	mov	dptr,#_axradio_sync_periodcorr
   2481 E0                 8044 	movx	a,@dptr
   2482 FE                 8045 	mov	r6,a
   2483 A3                 8046 	inc	dptr
   2484 E0                 8047 	movx	a,@dptr
   2485 FF                 8048 	mov	r7,a
   2486 C4                 8049 	swap	a
   2487 03                 8050 	rr	a
   2488 CE                 8051 	xch	a,r6
   2489 C4                 8052 	swap	a
   248A 03                 8053 	rr	a
   248B 54 07              8054 	anl	a,#0x07
   248D 6E                 8055 	xrl	a,r6
   248E CE                 8056 	xch	a,r6
   248F 54 07              8057 	anl	a,#0x07
   2491 CE                 8058 	xch	a,r6
   2492 6E                 8059 	xrl	a,r6
   2493 CE                 8060 	xch	a,r6
   2494 30 E2 02           8061 	jnb	acc.2,00296$
   2497 44 F8              8062 	orl	a,#0xF8
   2499                    8063 00296$:
   2499 FF                 8064 	mov	r7,a
   249A 90 02 44           8065 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   249D EE                 8066 	mov	a,r6
   249E F0                 8067 	movx	@dptr,a
   249F A3                 8068 	inc	dptr
   24A0 EF                 8069 	mov	a,r7
   24A1 F0                 8070 	movx	@dptr,a
                           8071 ;	..\COMMON\easyax5043.c:1394: axradio_sync_seqnr = 1;
   24A2 90 00 0F           8072 	mov	dptr,#_axradio_ack_seqnr
   24A5 74 01              8073 	mov	a,#0x01
   24A7 F0                 8074 	movx	@dptr,a
                           8075 ;	..\COMMON\easyax5043.c:1396: };
   24A8                    8076 00156$:
                           8077 ;	..\COMMON\easyax5043.c:1397: axradio_sync_slave_nextperiod();
   24A8 12 17 BE           8078 	lcall	_axradio_sync_slave_nextperiod
                           8079 ;	..\COMMON\easyax5043.c:1398: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE) {
   24AB 74 23              8080 	mov	a,#0x23
   24AD B5 0A 02           8081 	cjne	a,_axradio_mode,00297$
   24B0 80 3D              8082 	sjmp	00158$
   24B2                    8083 00297$:
                           8084 ;	..\COMMON\easyax5043.c:1399: axradio_syncstate = syncstate_slave_rxidle;
   24B2 90 00 04           8085 	mov	dptr,#_axradio_syncstate
   24B5 74 08              8086 	mov	a,#0x08
   24B7 F0                 8087 	movx	@dptr,a
                           8088 ;	..\COMMON\easyax5043.c:1400: wtimer_remove(&axradio_timer);
   24B8 90 02 89           8089 	mov	dptr,#_axradio_timer
   24BB 12 46 8F           8090 	lcall	_wtimer_remove
                           8091 ;	..\COMMON\easyax5043.c:1401: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[axradio_sync_seqnr]);
   24BE 90 00 0F           8092 	mov	dptr,#_axradio_ack_seqnr
   24C1 E0                 8093 	movx	a,@dptr
   24C2 75 F0 04           8094 	mov	b,#0x04
   24C5 A4                 8095 	mul	ab
   24C6 24 C8              8096 	add	a,#_axradio_sync_slave_rxadvance
   24C8 F5 82              8097 	mov	dpl,a
   24CA 74 4B              8098 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   24CC 35 F0              8099 	addc	a,b
   24CE F5 83              8100 	mov	dph,a
   24D0 E4                 8101 	clr	a
   24D1 93                 8102 	movc	a,@a+dptr
   24D2 FC                 8103 	mov	r4,a
   24D3 A3                 8104 	inc	dptr
   24D4 E4                 8105 	clr	a
   24D5 93                 8106 	movc	a,@a+dptr
   24D6 FD                 8107 	mov	r5,a
   24D7 A3                 8108 	inc	dptr
   24D8 E4                 8109 	clr	a
   24D9 93                 8110 	movc	a,@a+dptr
   24DA FE                 8111 	mov	r6,a
   24DB A3                 8112 	inc	dptr
   24DC E4                 8113 	clr	a
   24DD 93                 8114 	movc	a,@a+dptr
   24DE 8C 82              8115 	mov	dpl,r4
   24E0 8D 83              8116 	mov	dph,r5
   24E2 8E F0              8117 	mov	b,r6
   24E4 12 16 58           8118 	lcall	_axradio_sync_settimeradv
                           8119 ;	..\COMMON\easyax5043.c:1402: wtimer0_addabsolute(&axradio_timer);
   24E7 90 02 89           8120 	mov	dptr,#_axradio_timer
   24EA 12 3F 23           8121 	lcall	_wtimer0_addabsolute
   24ED 80 06              8122 	sjmp	00161$
   24EF                    8123 00158$:
                           8124 ;	..\COMMON\easyax5043.c:1404: axradio_syncstate = syncstate_slave_rxack;
   24EF 90 00 04           8125 	mov	dptr,#_axradio_syncstate
   24F2 74 0C              8126 	mov	a,#0x0C
   24F4 F0                 8127 	movx	@dptr,a
   24F5                    8128 00161$:
                           8129 ;	..\COMMON\easyax5043.c:1407: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   24F5 90 02 36           8130 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   24F8 12 34 7A           8131 	lcall	_axradio_statuschange
                           8132 ;	..\COMMON\easyax5043.c:1408: endcb:
   24FB                    8133 00163$:
                           8134 ;	..\COMMON\easyax5043.c:1409: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE) {
   24FB 74 19              8135 	mov	a,#0x19
   24FD B5 0A 03           8136 	cjne	a,_axradio_mode,00178$
                           8137 ;	..\COMMON\easyax5043.c:1410: ax5043_receiver_on_wor();
   2500 02 13 C2           8138 	ljmp	_ax5043_receiver_on_wor
   2503                    8139 00178$:
                           8140 ;	..\COMMON\easyax5043.c:1411: } else if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   2503 74 1A              8141 	mov	a,#0x1A
   2505 B5 0A 02           8142 	cjne	a,_axradio_mode,00300$
   2508 80 05              8143 	sjmp	00173$
   250A                    8144 00300$:
                           8145 ;	..\COMMON\easyax5043.c:1412: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE) {
   250A 74 1B              8146 	mov	a,#0x1B
   250C B5 0A 20           8147 	cjne	a,_axradio_mode,00174$
   250F                    8148 00173$:
                           8149 ;	..\COMMON\easyax5043.c:1415: uint8_t __autodata iesave = IE & 0x80;
   250F 74 80              8150 	mov	a,#0x80
   2511 55 A8              8151 	anl	a,_IE
   2513 FF                 8152 	mov	r7,a
                           8153 ;	..\COMMON\easyax5043.c:1416: EA = 0;
   2514 C2 AF              8154 	clr	_EA
                           8155 ;	..\COMMON\easyax5043.c:1417: trxst = axradio_trxstate;
   2516 AE 0B              8156 	mov	r6,_axradio_trxstate
                           8157 ;	..\COMMON\easyax5043.c:1418: axradio_cb_receive.st.error = AXRADIO_ERR_PACKETDONE;
   2518 90 02 37           8158 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   251B 74 F0              8159 	mov	a,#0xF0
   251D F0                 8160 	movx	@dptr,a
                           8161 ;	..\COMMON\easyax5043.c:1419: IE |= iesave;
   251E EF                 8162 	mov	a,r7
   251F 42 A8              8163 	orl	_IE,a
                           8164 ;	..\COMMON\easyax5043.c:1421: if (trxst == trxstate_off) {
   2521 EE                 8165 	mov	a,r6
   2522 70 1D              8166 	jnz	00180$
                           8167 ;	..\COMMON\easyax5043.c:1422: if (axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   2524 74 1B              8168 	mov	a,#0x1B
   2526 B5 0A 03           8169 	cjne	a,_axradio_mode,00165$
                           8170 ;	..\COMMON\easyax5043.c:1423: ax5043_receiver_on_wor();
   2529 02 13 C2           8171 	ljmp	_ax5043_receiver_on_wor
   252C                    8172 00165$:
                           8173 ;	..\COMMON\easyax5043.c:1425: ax5043_receiver_on_continuous();
   252C 02 13 28           8174 	ljmp	_ax5043_receiver_on_continuous
   252F                    8175 00174$:
                           8176 ;	..\COMMON\easyax5043.c:1428: switch (axradio_trxstate) {
   252F AF 0B              8177 	mov	r7,_axradio_trxstate
   2531 BF 01 02           8178 	cjne	r7,#0x01,00306$
   2534 80 03              8179 	sjmp	00170$
   2536                    8180 00306$:
   2536 BF 02 08           8181 	cjne	r7,#0x02,00180$
                           8182 ;	..\COMMON\easyax5043.c:1430: case trxstate_rxwor:
   2539                    8183 00170$:
                           8184 ;	..\COMMON\easyax5043.c:1431: AX5043_IRQMASK0 |= 0x01; // re-enable FIFO not empty irq
   2539 90 40 07           8185 	mov	dptr,#_AX5043_IRQMASK0
   253C E0                 8186 	movx	a,@dptr
   253D FF                 8187 	mov	r7,a
   253E 44 01              8188 	orl	a,#0x01
   2540 F0                 8189 	movx	@dptr,a
                           8190 ;	..\COMMON\easyax5043.c:1436: }
   2541                    8191 00180$:
   2541 22                 8192 	ret
                           8193 ;------------------------------------------------------------
                           8194 ;Allocation info for local variables in function 'axradio_killallcb'
                           8195 ;------------------------------------------------------------
                           8196 ;	..\COMMON\easyax5043.c:1440: static void axradio_killallcb(void)
                           8197 ;	-----------------------------------------
                           8198 ;	 function axradio_killallcb
                           8199 ;	-----------------------------------------
   2542                    8200 _axradio_killallcb:
                           8201 ;	..\COMMON\easyax5043.c:1442: wtimer_remove_callback(&axradio_cb_receive.cb);
   2542 90 02 32           8202 	mov	dptr,#_axradio_cb_receive
   2545 12 48 E0           8203 	lcall	_wtimer_remove_callback
                           8204 ;	..\COMMON\easyax5043.c:1443: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   2548 90 02 54           8205 	mov	dptr,#_axradio_cb_receivesfd
   254B 12 48 E0           8206 	lcall	_wtimer_remove_callback
                           8207 ;	..\COMMON\easyax5043.c:1444: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   254E 90 02 5E           8208 	mov	dptr,#_axradio_cb_channelstate
   2551 12 48 E0           8209 	lcall	_wtimer_remove_callback
                           8210 ;	..\COMMON\easyax5043.c:1445: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   2554 90 02 6B           8211 	mov	dptr,#_axradio_cb_transmitstart
   2557 12 48 E0           8212 	lcall	_wtimer_remove_callback
                           8213 ;	..\COMMON\easyax5043.c:1446: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   255A 90 02 75           8214 	mov	dptr,#_axradio_cb_transmitend
   255D 12 48 E0           8215 	lcall	_wtimer_remove_callback
                           8216 ;	..\COMMON\easyax5043.c:1447: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   2560 90 02 7F           8217 	mov	dptr,#_axradio_cb_transmitdata
   2563 12 48 E0           8218 	lcall	_wtimer_remove_callback
                           8219 ;	..\COMMON\easyax5043.c:1448: wtimer_remove(&axradio_timer);
   2566 90 02 89           8220 	mov	dptr,#_axradio_timer
   2569 02 46 8F           8221 	ljmp	_wtimer_remove
                           8222 ;------------------------------------------------------------
                           8223 ;Allocation info for local variables in function 'axradio_init'
                           8224 ;------------------------------------------------------------
                           8225 ;i                         Allocated to registers r5 
                           8226 ;pllloop_save              Allocated to registers r7 
                           8227 ;pllcpi_save               Allocated to registers r6 
                           8228 ;iesave                    Allocated to registers r4 
                           8229 ;f                         Allocated to registers r1 r2 r3 r4 
                           8230 ;r                         Allocated to registers r3 
                           8231 ;iesave                    Allocated to registers r4 
                           8232 ;r                         Allocated to registers r3 
                           8233 ;f                         Allocated to registers r2 r3 r4 r5 
                           8234 ;------------------------------------------------------------
                           8235 ;	..\COMMON\easyax5043.c:1455: uint8_t axradio_init(void)
                           8236 ;	-----------------------------------------
                           8237 ;	 function axradio_init
                           8238 ;	-----------------------------------------
   256C                    8239 _axradio_init:
                           8240 ;	..\COMMON\easyax5043.c:1458: axradio_mode = AXRADIO_MODE_UNINIT;
   256C 75 0A 00           8241 	mov	_axradio_mode,#0x00
                           8242 ;	..\COMMON\easyax5043.c:1459: axradio_killallcb();
   256F 12 25 42           8243 	lcall	_axradio_killallcb
                           8244 ;	..\COMMON\easyax5043.c:1460: axradio_cb_receive.cb.handler = axradio_receive_callback_fwd;
   2572 90 02 34           8245 	mov	dptr,#(_axradio_cb_receive + 0x0002)
   2575 74 37              8246 	mov	a,#_axradio_receive_callback_fwd
   2577 F0                 8247 	movx	@dptr,a
   2578 A3                 8248 	inc	dptr
   2579 74 20              8249 	mov	a,#(_axradio_receive_callback_fwd >> 8)
   257B F0                 8250 	movx	@dptr,a
                           8251 ;	..\COMMON\easyax5043.c:1461: axradio_cb_receive.st.status = AXRADIO_STAT_RECEIVE;
   257C 90 02 36           8252 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   257F E4                 8253 	clr	a
   2580 F0                 8254 	movx	@dptr,a
                           8255 ;	..\COMMON\easyax5043.c:1462: memset_xdata(axradio_cb_receive.st.rx.mac.remoteaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.remoteaddr));
   2581 75 2A 00           8256 	mov	_memset_PARM_2,#0x00
   2584 75 2B 04           8257 	mov	_memset_PARM_3,#0x04
   2587 75 2C 00           8258 	mov	(_memset_PARM_3 + 1),#0x00
   258A 90 02 46           8259 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   258D 75 F0 00           8260 	mov	b,#0x00
   2590 12 3E 07           8261 	lcall	_memset
                           8262 ;	..\COMMON\easyax5043.c:1463: memset_xdata(axradio_cb_receive.st.rx.mac.localaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.localaddr));
   2593 75 2A 00           8263 	mov	_memset_PARM_2,#0x00
   2596 75 2B 04           8264 	mov	_memset_PARM_3,#0x04
   2599 75 2C 00           8265 	mov	(_memset_PARM_3 + 1),#0x00
   259C 90 02 4A           8266 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   259F 75 F0 00           8267 	mov	b,#0x00
   25A2 12 3E 07           8268 	lcall	_memset
                           8269 ;	..\COMMON\easyax5043.c:1464: axradio_cb_receivesfd.cb.handler = axradio_callback_fwd;
   25A5 90 02 56           8270 	mov	dptr,#(_axradio_cb_receivesfd + 0x0002)
   25A8 74 25              8271 	mov	a,#_axradio_callback_fwd
   25AA F0                 8272 	movx	@dptr,a
   25AB A3                 8273 	inc	dptr
   25AC 74 20              8274 	mov	a,#(_axradio_callback_fwd >> 8)
   25AE F0                 8275 	movx	@dptr,a
                           8276 ;	..\COMMON\easyax5043.c:1465: axradio_cb_receivesfd.st.status = AXRADIO_STAT_RECEIVESFD;
   25AF 90 02 58           8277 	mov	dptr,#(_axradio_cb_receivesfd + 0x0004)
   25B2 74 01              8278 	mov	a,#0x01
   25B4 F0                 8279 	movx	@dptr,a
                           8280 ;	..\COMMON\easyax5043.c:1466: axradio_cb_channelstate.cb.handler = axradio_callback_fwd;
   25B5 90 02 60           8281 	mov	dptr,#(_axradio_cb_channelstate + 0x0002)
   25B8 74 25              8282 	mov	a,#_axradio_callback_fwd
   25BA F0                 8283 	movx	@dptr,a
   25BB A3                 8284 	inc	dptr
   25BC 74 20              8285 	mov	a,#(_axradio_callback_fwd >> 8)
   25BE F0                 8286 	movx	@dptr,a
                           8287 ;	..\COMMON\easyax5043.c:1467: axradio_cb_channelstate.st.status = AXRADIO_STAT_CHANNELSTATE;
   25BF 90 02 62           8288 	mov	dptr,#(_axradio_cb_channelstate + 0x0004)
   25C2 74 02              8289 	mov	a,#0x02
   25C4 F0                 8290 	movx	@dptr,a
                           8291 ;	..\COMMON\easyax5043.c:1468: axradio_cb_transmitstart.cb.handler = axradio_callback_fwd;
   25C5 90 02 6D           8292 	mov	dptr,#(_axradio_cb_transmitstart + 0x0002)
   25C8 74 25              8293 	mov	a,#_axradio_callback_fwd
   25CA F0                 8294 	movx	@dptr,a
   25CB A3                 8295 	inc	dptr
   25CC 74 20              8296 	mov	a,#(_axradio_callback_fwd >> 8)
   25CE F0                 8297 	movx	@dptr,a
                           8298 ;	..\COMMON\easyax5043.c:1469: axradio_cb_transmitstart.st.status = AXRADIO_STAT_TRANSMITSTART;
   25CF 90 02 6F           8299 	mov	dptr,#(_axradio_cb_transmitstart + 0x0004)
   25D2 74 03              8300 	mov	a,#0x03
   25D4 F0                 8301 	movx	@dptr,a
                           8302 ;	..\COMMON\easyax5043.c:1470: axradio_cb_transmitend.cb.handler = axradio_callback_fwd;
   25D5 90 02 77           8303 	mov	dptr,#(_axradio_cb_transmitend + 0x0002)
   25D8 74 25              8304 	mov	a,#_axradio_callback_fwd
   25DA F0                 8305 	movx	@dptr,a
   25DB A3                 8306 	inc	dptr
   25DC 74 20              8307 	mov	a,#(_axradio_callback_fwd >> 8)
   25DE F0                 8308 	movx	@dptr,a
                           8309 ;	..\COMMON\easyax5043.c:1471: axradio_cb_transmitend.st.status = AXRADIO_STAT_TRANSMITEND;
   25DF 90 02 79           8310 	mov	dptr,#(_axradio_cb_transmitend + 0x0004)
   25E2 74 04              8311 	mov	a,#0x04
   25E4 F0                 8312 	movx	@dptr,a
                           8313 ;	..\COMMON\easyax5043.c:1472: axradio_cb_transmitdata.cb.handler = axradio_callback_fwd;
   25E5 90 02 81           8314 	mov	dptr,#(_axradio_cb_transmitdata + 0x0002)
   25E8 74 25              8315 	mov	a,#_axradio_callback_fwd
   25EA F0                 8316 	movx	@dptr,a
   25EB A3                 8317 	inc	dptr
   25EC 74 20              8318 	mov	a,#(_axradio_callback_fwd >> 8)
   25EE F0                 8319 	movx	@dptr,a
                           8320 ;	..\COMMON\easyax5043.c:1473: axradio_cb_transmitdata.st.status = AXRADIO_STAT_TRANSMITDATA;
   25EF 90 02 83           8321 	mov	dptr,#(_axradio_cb_transmitdata + 0x0004)
   25F2 74 05              8322 	mov	a,#0x05
   25F4 F0                 8323 	movx	@dptr,a
                           8324 ;	..\COMMON\easyax5043.c:1474: axradio_timer.handler = axradio_timer_callback;
   25F5 90 02 8B           8325 	mov	dptr,#(_axradio_timer + 0x0002)
   25F8 74 26              8326 	mov	a,#_axradio_timer_callback
   25FA F0                 8327 	movx	@dptr,a
   25FB A3                 8328 	inc	dptr
   25FC 74 18              8329 	mov	a,#(_axradio_timer_callback >> 8)
   25FE F0                 8330 	movx	@dptr,a
                           8331 ;	..\COMMON\easyax5043.c:1475: axradio_curchannel = 0;
   25FF 90 00 09           8332 	mov	dptr,#_axradio_curchannel
                           8333 ;	..\COMMON\easyax5043.c:1476: axradio_curfreqoffset = 0;
   2602 E4                 8334 	clr	a
   2603 F0                 8335 	movx	@dptr,a
   2604 90 00 0A           8336 	mov	dptr,#_axradio_curfreqoffset
   2607 F0                 8337 	movx	@dptr,a
   2608 A3                 8338 	inc	dptr
   2609 E4                 8339 	clr	a
   260A F0                 8340 	movx	@dptr,a
   260B A3                 8341 	inc	dptr
   260C F0                 8342 	movx	@dptr,a
   260D A3                 8343 	inc	dptr
   260E F0                 8344 	movx	@dptr,a
                           8345 ;	..\COMMON\easyax5043.c:1477: IE_4 = 0;
   260F C2 AC              8346 	clr	_IE_4
                           8347 ;	..\COMMON\easyax5043.c:1478: axradio_trxstate = trxstate_off;
   2611 75 0B 00           8348 	mov	_axradio_trxstate,#0x00
                           8349 ;	..\COMMON\easyax5043.c:1479: if (ax5043_reset())
   2614 12 36 78           8350 	lcall	_ax5043_reset
   2617 E5 82              8351 	mov	a,dpl
   2619 60 04              8352 	jz	00102$
                           8353 ;	..\COMMON\easyax5043.c:1480: return AXRADIO_ERR_NOCHIP;
   261B 75 82 05           8354 	mov	dpl,#0x05
   261E 22                 8355 	ret
   261F                    8356 00102$:
                           8357 ;	..\COMMON\easyax5043.c:1481: ax5043_init_registers();
   261F 12 15 E4           8358 	lcall	_ax5043_init_registers
                           8359 ;	..\COMMON\easyax5043.c:1482: ax5043_set_registers_rx();
   2622 12 04 48           8360 	lcall	_ax5043_set_registers_rx
                           8361 ;	..\COMMON\easyax5043.c:1483: pllloop_save = AX5043_PLLLOOP;
   2625 90 40 30           8362 	mov	dptr,#_AX5043_PLLLOOP
   2628 E0                 8363 	movx	a,@dptr
   2629 FF                 8364 	mov	r7,a
                           8365 ;	..\COMMON\easyax5043.c:1484: pllcpi_save = AX5043_PLLCPI;
   262A 90 40 31           8366 	mov	dptr,#_AX5043_PLLCPI
   262D E0                 8367 	movx	a,@dptr
   262E FE                 8368 	mov	r6,a
                           8369 ;	..\COMMON\easyax5043.c:1485: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   262F 90 40 30           8370 	mov	dptr,#_AX5043_PLLLOOP
   2632 74 09              8371 	mov	a,#0x09
   2634 F0                 8372 	movx	@dptr,a
                           8373 ;	..\COMMON\easyax5043.c:1486: AX5043_PLLCPI = 0x08;
   2635 90 40 31           8374 	mov	dptr,#_AX5043_PLLCPI
   2638 74 08              8375 	mov	a,#0x08
   263A F0                 8376 	movx	@dptr,a
                           8377 ;	..\COMMON\easyax5043.c:1488: IE_4 = 1;
   263B D2 AC              8378 	setb	_IE_4
                           8379 ;	..\COMMON\easyax5043.c:1490: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   263D 90 40 02           8380 	mov	dptr,#_AX5043_PWRMODE
   2640 74 05              8381 	mov	a,#0x05
   2642 F0                 8382 	movx	@dptr,a
                           8383 ;	..\COMMON\easyax5043.c:1491: axradio_wait_for_xtal();
   2643 C0 07              8384 	push	ar7
   2645 C0 06              8385 	push	ar6
   2647 12 14 8E           8386 	lcall	_axradio_wait_for_xtal
   264A D0 06              8387 	pop	ar6
   264C D0 07              8388 	pop	ar7
                           8389 ;	..\COMMON\easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   264E 7D 00              8390 	mov	r5,#0x00
   2650                    8391 00127$:
   2650 90 4B 74           8392 	mov	dptr,#_axradio_phy_nrchannels
   2653 E4                 8393 	clr	a
   2654 93                 8394 	movc	a,@a+dptr
   2655 FC                 8395 	mov	r4,a
   2656 C3                 8396 	clr	c
   2657 ED                 8397 	mov	a,r5
   2658 9C                 8398 	subb	a,r4
   2659 40 03              8399 	jc	00178$
   265B 02 27 2B           8400 	ljmp	00130$
   265E                    8401 00178$:
                           8402 ;	..\COMMON\easyax5043.c:1496: uint32_t __autodata f = axradio_phy_chanfreq[i];
   265E ED                 8403 	mov	a,r5
   265F 75 F0 04           8404 	mov	b,#0x04
   2662 A4                 8405 	mul	ab
   2663 24 75              8406 	add	a,#_axradio_phy_chanfreq
   2665 F5 82              8407 	mov	dpl,a
   2667 74 4B              8408 	mov	a,#(_axradio_phy_chanfreq >> 8)
   2669 35 F0              8409 	addc	a,b
   266B F5 83              8410 	mov	dph,a
   266D E4                 8411 	clr	a
   266E 93                 8412 	movc	a,@a+dptr
   266F F9                 8413 	mov	r1,a
   2670 A3                 8414 	inc	dptr
   2671 E4                 8415 	clr	a
   2672 93                 8416 	movc	a,@a+dptr
   2673 FA                 8417 	mov	r2,a
   2674 A3                 8418 	inc	dptr
   2675 E4                 8419 	clr	a
   2676 93                 8420 	movc	a,@a+dptr
   2677 FB                 8421 	mov	r3,a
   2678 A3                 8422 	inc	dptr
   2679 E4                 8423 	clr	a
   267A 93                 8424 	movc	a,@a+dptr
   267B FC                 8425 	mov	r4,a
                           8426 ;	..\COMMON\easyax5043.c:1497: AX5043_FREQA0 = f;
   267C 90 40 37           8427 	mov	dptr,#_AX5043_FREQA0
   267F E9                 8428 	mov	a,r1
   2680 F0                 8429 	movx	@dptr,a
                           8430 ;	..\COMMON\easyax5043.c:1498: AX5043_FREQA1 = f >> 8;
   2681 90 40 36           8431 	mov	dptr,#_AX5043_FREQA1
   2684 EA                 8432 	mov	a,r2
   2685 F0                 8433 	movx	@dptr,a
                           8434 ;	..\COMMON\easyax5043.c:1499: AX5043_FREQA2 = f >> 16;
   2686 90 40 35           8435 	mov	dptr,#_AX5043_FREQA2
   2689 EB                 8436 	mov	a,r3
   268A F0                 8437 	movx	@dptr,a
                           8438 ;	..\COMMON\easyax5043.c:1500: AX5043_FREQA3 = f >> 24;
   268B 90 40 34           8439 	mov	dptr,#_AX5043_FREQA3
   268E EC                 8440 	mov	a,r4
   268F F0                 8441 	movx	@dptr,a
                           8442 ;	..\COMMON\easyax5043.c:1502: iesave = IE & 0x80;
   2690 74 80              8443 	mov	a,#0x80
   2692 55 A8              8444 	anl	a,_IE
   2694 FC                 8445 	mov	r4,a
                           8446 ;	..\COMMON\easyax5043.c:1503: EA = 0;
   2695 C2 AF              8447 	clr	_EA
                           8448 ;	..\COMMON\easyax5043.c:1504: axradio_trxstate = trxstate_pll_ranging;
   2697 75 0B 05           8449 	mov	_axradio_trxstate,#0x05
                           8450 ;	..\COMMON\easyax5043.c:1505: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   269A 90 40 06           8451 	mov	dptr,#_AX5043_IRQMASK1
   269D 74 10              8452 	mov	a,#0x10
   269F F0                 8453 	movx	@dptr,a
                           8454 ;	..\COMMON\easyax5043.c:1508: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   26A0 90 4B 79           8455 	mov	dptr,#_axradio_phy_chanpllrnginit
   26A3 E4                 8456 	clr	a
   26A4 93                 8457 	movc	a,@a+dptr
   26A5 FB                 8458 	mov	r3,a
   26A6 54 F0              8459 	anl	a,#0xF0
   26A8 70 0B              8460 	jnz	00108$
                           8461 ;	..\COMMON\easyax5043.c:1509: r = axradio_phy_chanpllrnginit[i] | 0x10;
   26AA ED                 8462 	mov	a,r5
   26AB 90 4B 79           8463 	mov	dptr,#_axradio_phy_chanpllrnginit
   26AE 93                 8464 	movc	a,@a+dptr
   26AF FB                 8465 	mov	r3,a
   26B0 43 03 10           8466 	orl	ar3,#0x10
   26B3 80 25              8467 	sjmp	00109$
   26B5                    8468 00108$:
                           8469 ;	..\COMMON\easyax5043.c:1512: r = 0x18;
   26B5 7B 18              8470 	mov	r3,#0x18
                           8471 ;	..\COMMON\easyax5043.c:1513: if (i) {
   26B7 ED                 8472 	mov	a,r5
   26B8 60 20              8473 	jz	00109$
                           8474 ;	..\COMMON\easyax5043.c:1514: r = axradio_phy_chanpllrng_rx[i - 1];
   26BA 8D 01              8475 	mov	ar1,r5
   26BC 7A 00              8476 	mov	r2,#0x00
   26BE 19                 8477 	dec	r1
   26BF B9 FF 01           8478 	cjne	r1,#0xFF,00182$
   26C2 1A                 8479 	dec	r2
   26C3                    8480 00182$:
   26C3 E9                 8481 	mov	a,r1
   26C4 24 00              8482 	add	a,#_axradio_phy_chanpllrng_rx
   26C6 F5 82              8483 	mov	dpl,a
   26C8 EA                 8484 	mov	a,r2
   26C9 34 00              8485 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   26CB F5 83              8486 	mov	dph,a
   26CD E0                 8487 	movx	a,@dptr
                           8488 ;	..\COMMON\easyax5043.c:1515: if (r & 0x20)
   26CE FB                 8489 	mov	r3,a
   26CF 30 E5 02           8490 	jnb	acc.5,00104$
                           8491 ;	..\COMMON\easyax5043.c:1516: r = 0x08;
   26D2 7B 08              8492 	mov	r3,#0x08
   26D4                    8493 00104$:
                           8494 ;	..\COMMON\easyax5043.c:1517: r &= 0x0F;
   26D4 53 03 0F           8495 	anl	ar3,#0x0F
                           8496 ;	..\COMMON\easyax5043.c:1518: r |= 0x10;
   26D7 43 03 10           8497 	orl	ar3,#0x10
   26DA                    8498 00109$:
                           8499 ;	..\COMMON\easyax5043.c:1521: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   26DA 90 40 33           8500 	mov	dptr,#_AX5043_PLLRANGINGA
   26DD EB                 8501 	mov	a,r3
   26DE F0                 8502 	movx	@dptr,a
   26DF                    8503 00113$:
                           8504 ;	..\COMMON\easyax5043.c:1524: EA = 0;
   26DF C2 AF              8505 	clr	_EA
                           8506 ;	..\COMMON\easyax5043.c:1525: if (axradio_trxstate == trxstate_pll_ranging_done)
   26E1 74 06              8507 	mov	a,#0x06
   26E3 B5 0B 02           8508 	cjne	a,_axradio_trxstate,00184$
   26E6 80 22              8509 	sjmp	00114$
   26E8                    8510 00184$:
                           8511 ;	..\COMMON\easyax5043.c:1527: wtimer_idle(WTFLAG_CANSTANDBY);
   26E8 75 82 02           8512 	mov	dpl,#0x02
   26EB C0 07              8513 	push	ar7
   26ED C0 06              8514 	push	ar6
   26EF C0 05              8515 	push	ar5
   26F1 C0 04              8516 	push	ar4
   26F3 12 3D 88           8517 	lcall	_wtimer_idle
   26F6 D0 04              8518 	pop	ar4
                           8519 ;	..\COMMON\easyax5043.c:1528: IE |= iesave;
   26F8 EC                 8520 	mov	a,r4
   26F9 42 A8              8521 	orl	_IE,a
                           8522 ;	..\COMMON\easyax5043.c:1529: wtimer_runcallbacks();
   26FB C0 04              8523 	push	ar4
   26FD 12 3D 04           8524 	lcall	_wtimer_runcallbacks
   2700 D0 04              8525 	pop	ar4
   2702 D0 05              8526 	pop	ar5
   2704 D0 06              8527 	pop	ar6
   2706 D0 07              8528 	pop	ar7
   2708 80 D5              8529 	sjmp	00113$
   270A                    8530 00114$:
                           8531 ;	..\COMMON\easyax5043.c:1531: axradio_trxstate = trxstate_off;
   270A 75 0B 00           8532 	mov	_axradio_trxstate,#0x00
                           8533 ;	..\COMMON\easyax5043.c:1532: AX5043_IRQMASK1 = 0x00;
   270D 90 40 06           8534 	mov	dptr,#_AX5043_IRQMASK1
   2710 E4                 8535 	clr	a
   2711 F0                 8536 	movx	@dptr,a
                           8537 ;	..\COMMON\easyax5043.c:1533: axradio_phy_chanpllrng_rx[i] = AX5043_PLLRANGINGA;
   2712 ED                 8538 	mov	a,r5
   2713 24 00              8539 	add	a,#_axradio_phy_chanpllrng_rx
   2715 FA                 8540 	mov	r2,a
   2716 E4                 8541 	clr	a
   2717 34 00              8542 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2719 FB                 8543 	mov	r3,a
   271A 90 40 33           8544 	mov	dptr,#_AX5043_PLLRANGINGA
   271D E0                 8545 	movx	a,@dptr
   271E F9                 8546 	mov	r1,a
   271F 8A 82              8547 	mov	dpl,r2
   2721 8B 83              8548 	mov	dph,r3
   2723 F0                 8549 	movx	@dptr,a
                           8550 ;	..\COMMON\easyax5043.c:1534: IE |= iesave;
   2724 EC                 8551 	mov	a,r4
   2725 42 A8              8552 	orl	_IE,a
                           8553 ;	..\COMMON\easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2727 0D                 8554 	inc	r5
   2728 02 26 50           8555 	ljmp	00127$
   272B                    8556 00130$:
                           8557 ;	..\COMMON\easyax5043.c:1536: ax5043_set_registers_tx();
   272B C0 07              8558 	push	ar7
   272D C0 06              8559 	push	ar6
   272F 12 04 17           8560 	lcall	_ax5043_set_registers_tx
   2732 D0 06              8561 	pop	ar6
   2734 D0 07              8562 	pop	ar7
                           8563 ;	..\COMMON\easyax5043.c:1537: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   2736 90 40 30           8564 	mov	dptr,#_AX5043_PLLLOOP
   2739 74 09              8565 	mov	a,#0x09
   273B F0                 8566 	movx	@dptr,a
                           8567 ;	..\COMMON\easyax5043.c:1538: AX5043_PLLCPI = 0x08;
   273C 90 40 31           8568 	mov	dptr,#_AX5043_PLLCPI
   273F 74 08              8569 	mov	a,#0x08
   2741 F0                 8570 	movx	@dptr,a
                           8571 ;	..\COMMON\easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2742 7D 00              8572 	mov	r5,#0x00
   2744                    8573 00131$:
   2744 90 4B 74           8574 	mov	dptr,#_axradio_phy_nrchannels
   2747 E4                 8575 	clr	a
   2748 93                 8576 	movc	a,@a+dptr
   2749 FC                 8577 	mov	r4,a
   274A C3                 8578 	clr	c
   274B ED                 8579 	mov	a,r5
   274C 9C                 8580 	subb	a,r4
   274D 40 03              8581 	jc	00185$
   274F 02 27 DF           8582 	ljmp	00134$
   2752                    8583 00185$:
                           8584 ;	..\COMMON\easyax5043.c:1540: uint8_t __autodata iesave = IE & 0x80;
   2752 74 80              8585 	mov	a,#0x80
   2754 55 A8              8586 	anl	a,_IE
   2756 FC                 8587 	mov	r4,a
                           8588 ;	..\COMMON\easyax5043.c:1541: EA = 0;
   2757 C2 AF              8589 	clr	_EA
                           8590 ;	..\COMMON\easyax5043.c:1542: axradio_trxstate = trxstate_pll_ranging;
   2759 75 0B 05           8591 	mov	_axradio_trxstate,#0x05
                           8592 ;	..\COMMON\easyax5043.c:1543: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   275C 90 40 06           8593 	mov	dptr,#_AX5043_IRQMASK1
   275F 74 10              8594 	mov	a,#0x10
   2761 F0                 8595 	movx	@dptr,a
                           8596 ;	..\COMMON\easyax5043.c:1546: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   2762 90 4B 79           8597 	mov	dptr,#_axradio_phy_chanpllrnginit
   2765 E4                 8598 	clr	a
   2766 93                 8599 	movc	a,@a+dptr
   2767 FB                 8600 	mov	r3,a
   2768 54 F0              8601 	anl	a,#0xF0
   276A 70 0B              8602 	jnz	00118$
                           8603 ;	..\COMMON\easyax5043.c:1547: r = axradio_phy_chanpllrnginit[i] | 0x10;
   276C ED                 8604 	mov	a,r5
   276D 90 4B 79           8605 	mov	dptr,#_axradio_phy_chanpllrnginit
   2770 93                 8606 	movc	a,@a+dptr
   2771 FB                 8607 	mov	r3,a
   2772 43 03 10           8608 	orl	ar3,#0x10
   2775 80 17              8609 	sjmp	00119$
   2777                    8610 00118$:
                           8611 ;	..\COMMON\easyax5043.c:1550: r = axradio_phy_chanpllrng_rx[i];
   2777 ED                 8612 	mov	a,r5
   2778 24 00              8613 	add	a,#_axradio_phy_chanpllrng_rx
   277A F5 82              8614 	mov	dpl,a
   277C E4                 8615 	clr	a
   277D 34 00              8616 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   277F F5 83              8617 	mov	dph,a
   2781 E0                 8618 	movx	a,@dptr
                           8619 ;	..\COMMON\easyax5043.c:1551: if (r & 0x20)
   2782 FB                 8620 	mov	r3,a
   2783 30 E5 02           8621 	jnb	acc.5,00116$
                           8622 ;	..\COMMON\easyax5043.c:1552: r = 0x08;
   2786 7B 08              8623 	mov	r3,#0x08
   2788                    8624 00116$:
                           8625 ;	..\COMMON\easyax5043.c:1553: r &= 0x0F;
   2788 53 03 0F           8626 	anl	ar3,#0x0F
                           8627 ;	..\COMMON\easyax5043.c:1554: r |= 0x10;
   278B 43 03 10           8628 	orl	ar3,#0x10
   278E                    8629 00119$:
                           8630 ;	..\COMMON\easyax5043.c:1556: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   278E 90 40 33           8631 	mov	dptr,#_AX5043_PLLRANGINGA
   2791 EB                 8632 	mov	a,r3
   2792 F0                 8633 	movx	@dptr,a
   2793                    8634 00123$:
                           8635 ;	..\COMMON\easyax5043.c:1559: EA = 0;
   2793 C2 AF              8636 	clr	_EA
                           8637 ;	..\COMMON\easyax5043.c:1560: if (axradio_trxstate == trxstate_pll_ranging_done)
   2795 74 06              8638 	mov	a,#0x06
   2797 B5 0B 02           8639 	cjne	a,_axradio_trxstate,00189$
   279A 80 22              8640 	sjmp	00124$
   279C                    8641 00189$:
                           8642 ;	..\COMMON\easyax5043.c:1562: wtimer_idle(WTFLAG_CANSTANDBY);
   279C 75 82 02           8643 	mov	dpl,#0x02
   279F C0 07              8644 	push	ar7
   27A1 C0 06              8645 	push	ar6
   27A3 C0 05              8646 	push	ar5
   27A5 C0 04              8647 	push	ar4
   27A7 12 3D 88           8648 	lcall	_wtimer_idle
   27AA D0 04              8649 	pop	ar4
                           8650 ;	..\COMMON\easyax5043.c:1563: IE |= iesave;
   27AC EC                 8651 	mov	a,r4
   27AD 42 A8              8652 	orl	_IE,a
                           8653 ;	..\COMMON\easyax5043.c:1564: wtimer_runcallbacks();
   27AF C0 04              8654 	push	ar4
   27B1 12 3D 04           8655 	lcall	_wtimer_runcallbacks
   27B4 D0 04              8656 	pop	ar4
   27B6 D0 05              8657 	pop	ar5
   27B8 D0 06              8658 	pop	ar6
   27BA D0 07              8659 	pop	ar7
   27BC 80 D5              8660 	sjmp	00123$
   27BE                    8661 00124$:
                           8662 ;	..\COMMON\easyax5043.c:1566: axradio_trxstate = trxstate_off;
   27BE 75 0B 00           8663 	mov	_axradio_trxstate,#0x00
                           8664 ;	..\COMMON\easyax5043.c:1567: AX5043_IRQMASK1 = 0x00;
   27C1 90 40 06           8665 	mov	dptr,#_AX5043_IRQMASK1
   27C4 E4                 8666 	clr	a
   27C5 F0                 8667 	movx	@dptr,a
                           8668 ;	..\COMMON\easyax5043.c:1568: axradio_phy_chanpllrng_tx[i] = AX5043_PLLRANGINGA;
   27C6 ED                 8669 	mov	a,r5
   27C7 24 01              8670 	add	a,#_axradio_phy_chanpllrng_tx
   27C9 FA                 8671 	mov	r2,a
   27CA E4                 8672 	clr	a
   27CB 34 00              8673 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   27CD FB                 8674 	mov	r3,a
   27CE 90 40 33           8675 	mov	dptr,#_AX5043_PLLRANGINGA
   27D1 E0                 8676 	movx	a,@dptr
   27D2 F9                 8677 	mov	r1,a
   27D3 8A 82              8678 	mov	dpl,r2
   27D5 8B 83              8679 	mov	dph,r3
   27D7 F0                 8680 	movx	@dptr,a
                           8681 ;	..\COMMON\easyax5043.c:1569: IE |= iesave;
   27D8 EC                 8682 	mov	a,r4
   27D9 42 A8              8683 	orl	_IE,a
                           8684 ;	..\COMMON\easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   27DB 0D                 8685 	inc	r5
   27DC 02 27 44           8686 	ljmp	00131$
   27DF                    8687 00134$:
                           8688 ;	..\COMMON\easyax5043.c:1571: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   27DF 90 40 02           8689 	mov	dptr,#_AX5043_PWRMODE
   27E2 E4                 8690 	clr	a
   27E3 F0                 8691 	movx	@dptr,a
                           8692 ;	..\COMMON\easyax5043.c:1572: AX5043_PLLRANGINGA = axradio_phy_chanpllrng_rx[0] & 0x0F;
   27E4 90 00 00           8693 	mov	dptr,#_axradio_phy_chanpllrng_rx
   27E7 E0                 8694 	movx	a,@dptr
   27E8 FD                 8695 	mov	r5,a
   27E9 90 40 33           8696 	mov	dptr,#_AX5043_PLLRANGINGA
   27EC 74 0F              8697 	mov	a,#0x0F
   27EE 5D                 8698 	anl	a,r5
   27EF F0                 8699 	movx	@dptr,a
                           8700 ;	..\COMMON\easyax5043.c:1574: uint32_t __autodata f = axradio_phy_chanfreq[0];
   27F0 90 4B 75           8701 	mov	dptr,#_axradio_phy_chanfreq
   27F3 E4                 8702 	clr	a
   27F4 93                 8703 	movc	a,@a+dptr
   27F5 FA                 8704 	mov	r2,a
   27F6 A3                 8705 	inc	dptr
   27F7 E4                 8706 	clr	a
   27F8 93                 8707 	movc	a,@a+dptr
   27F9 FB                 8708 	mov	r3,a
   27FA A3                 8709 	inc	dptr
   27FB E4                 8710 	clr	a
   27FC 93                 8711 	movc	a,@a+dptr
   27FD FC                 8712 	mov	r4,a
   27FE A3                 8713 	inc	dptr
   27FF E4                 8714 	clr	a
   2800 93                 8715 	movc	a,@a+dptr
   2801 FD                 8716 	mov	r5,a
                           8717 ;	..\COMMON\easyax5043.c:1575: AX5043_FREQA0 = f;
   2802 90 40 37           8718 	mov	dptr,#_AX5043_FREQA0
   2805 EA                 8719 	mov	a,r2
   2806 F0                 8720 	movx	@dptr,a
                           8721 ;	..\COMMON\easyax5043.c:1576: AX5043_FREQA1 = f >> 8;
   2807 90 40 36           8722 	mov	dptr,#_AX5043_FREQA1
   280A EB                 8723 	mov	a,r3
   280B F0                 8724 	movx	@dptr,a
                           8725 ;	..\COMMON\easyax5043.c:1577: AX5043_FREQA2 = f >> 16;
   280C 90 40 35           8726 	mov	dptr,#_AX5043_FREQA2
   280F EC                 8727 	mov	a,r4
   2810 F0                 8728 	movx	@dptr,a
                           8729 ;	..\COMMON\easyax5043.c:1578: AX5043_FREQA3 = f >> 24;
   2811 90 40 34           8730 	mov	dptr,#_AX5043_FREQA3
   2814 ED                 8731 	mov	a,r5
   2815 F0                 8732 	movx	@dptr,a
                           8733 ;	..\COMMON\easyax5043.c:1580: AX5043_PLLLOOP = pllloop_save; // restore loop settings (works if they came from the common section, unimportant if the came from the rx / tx section)
   2816 90 40 30           8734 	mov	dptr,#_AX5043_PLLLOOP
   2819 EF                 8735 	mov	a,r7
   281A F0                 8736 	movx	@dptr,a
                           8737 ;	..\COMMON\easyax5043.c:1581: AX5043_PLLCPI = pllcpi_save;
   281B 90 40 31           8738 	mov	dptr,#_AX5043_PLLCPI
   281E EE                 8739 	mov	a,r6
   281F F0                 8740 	movx	@dptr,a
                           8741 ;	..\COMMON\easyax5043.c:1583: axradio_mode = AXRADIO_MODE_OFF;
   2820 75 0A 01           8742 	mov	_axradio_mode,#0x01
                           8743 ;	..\COMMON\easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   2823 7F 00              8744 	mov	r7,#0x00
   2825                    8745 00135$:
   2825 90 4B 74           8746 	mov	dptr,#_axradio_phy_nrchannels
   2828 E4                 8747 	clr	a
   2829 93                 8748 	movc	a,@a+dptr
   282A FE                 8749 	mov	r6,a
   282B C3                 8750 	clr	c
   282C EF                 8751 	mov	a,r7
   282D 9E                 8752 	subb	a,r6
   282E 50 23              8753 	jnc	00138$
                           8754 ;	..\COMMON\easyax5043.c:1585: if ((axradio_phy_chanpllrng_rx[i] | axradio_phy_chanpllrng_tx[i]) & 0x20)
   2830 EF                 8755 	mov	a,r7
   2831 24 00              8756 	add	a,#_axradio_phy_chanpllrng_rx
   2833 F5 82              8757 	mov	dpl,a
   2835 E4                 8758 	clr	a
   2836 34 00              8759 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2838 F5 83              8760 	mov	dph,a
   283A E0                 8761 	movx	a,@dptr
   283B FE                 8762 	mov	r6,a
   283C EF                 8763 	mov	a,r7
   283D 24 01              8764 	add	a,#_axradio_phy_chanpllrng_tx
   283F F5 82              8765 	mov	dpl,a
   2841 E4                 8766 	clr	a
   2842 34 00              8767 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   2844 F5 83              8768 	mov	dph,a
   2846 E0                 8769 	movx	a,@dptr
   2847 FD                 8770 	mov	r5,a
   2848 4E                 8771 	orl	a,r6
   2849 30 E5 04           8772 	jnb	acc.5,00137$
                           8773 ;	..\COMMON\easyax5043.c:1586: return AXRADIO_ERR_RANGING;
   284C 75 82 06           8774 	mov	dpl,#0x06
   284F 22                 8775 	ret
   2850                    8776 00137$:
                           8777 ;	..\COMMON\easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   2850 0F                 8778 	inc	r7
   2851 80 D2              8779 	sjmp	00135$
   2853                    8780 00138$:
                           8781 ;	..\COMMON\easyax5043.c:1588: return AXRADIO_ERR_NOERROR;
   2853 75 82 00           8782 	mov	dpl,#0x00
   2856 22                 8783 	ret
                           8784 ;------------------------------------------------------------
                           8785 ;Allocation info for local variables in function 'axradio_cansleep'
                           8786 ;------------------------------------------------------------
                           8787 ;	..\COMMON\easyax5043.c:1591: __reentrantb uint8_t axradio_cansleep(void) __reentrant
                           8788 ;	-----------------------------------------
                           8789 ;	 function axradio_cansleep
                           8790 ;	-----------------------------------------
   2857                    8791 _axradio_cansleep:
                           8792 ;	..\COMMON\easyax5043.c:1593: if (axradio_trxstate == trxstate_off || axradio_trxstate == trxstate_rxwor)
   2857 E5 0B              8793 	mov	a,_axradio_trxstate
   2859 60 05              8794 	jz	00101$
   285B 74 02              8795 	mov	a,#0x02
   285D B5 0B 04           8796 	cjne	a,_axradio_trxstate,00102$
   2860                    8797 00101$:
                           8798 ;	..\COMMON\easyax5043.c:1594: return 1;
   2860 75 82 01           8799 	mov	dpl,#0x01
   2863 22                 8800 	ret
   2864                    8801 00102$:
                           8802 ;	..\COMMON\easyax5043.c:1595: return 0;
   2864 75 82 00           8803 	mov	dpl,#0x00
   2867 22                 8804 	ret
                           8805 ;------------------------------------------------------------
                           8806 ;Allocation info for local variables in function 'wtimer_cansleep_dummy'
                           8807 ;------------------------------------------------------------
                           8808 ;	..\COMMON\easyax5043.c:1599: static void wtimer_cansleep_dummy(void) __naked
                           8809 ;	-----------------------------------------
                           8810 ;	 function wtimer_cansleep_dummy
                           8811 ;	-----------------------------------------
   2868                    8812 _wtimer_cansleep_dummy:
                           8813 ;	naked function: no prologue.
                           8814 ;	..\COMMON\easyax5043.c:1613: __endasm;
                           8815 	.area WTCANSLP0 (CODE)
                           8816 	.area WTCANSLP1 (CODE)
                           8817 	.area WTCANSLP2 (CODE)
                           8818 	.area WTCANSLP1 (CODE)
   4F1C 12 28 57           8819 	lcall _axradio_cansleep
   4F1F E5 82              8820 	mov a,dpl
   4F21 70 01              8821 	jnz 00000$
   4F23 22                 8822 	ret
   4F24                    8823 	00000$:
                           8824 	.area CSEG (CODE)
                           8825 ;	naked function: no epilogue.
                           8826 ;------------------------------------------------------------
                           8827 ;Allocation info for local variables in function 'axradio_set_mode'
                           8828 ;------------------------------------------------------------
                           8829 ;mode                      Allocated to registers r7 
                           8830 ;r                         Allocated to registers r6 
                           8831 ;r                         Allocated to registers r6 
                           8832 ;iesave                    Allocated to registers r6 
                           8833 ;------------------------------------------------------------
                           8834 ;	..\COMMON\easyax5043.c:1617: uint8_t axradio_set_mode(uint8_t mode)
                           8835 ;	-----------------------------------------
                           8836 ;	 function axradio_set_mode
                           8837 ;	-----------------------------------------
   2868                    8838 _axradio_set_mode:
                           8839 ;	..\COMMON\easyax5043.c:1619: if (mode == axradio_mode)
   2868 E5 82              8840 	mov	a,dpl
   286A FF                 8841 	mov	r7,a
   286B B5 0A 04           8842 	cjne	a,_axradio_mode,00102$
                           8843 ;	..\COMMON\easyax5043.c:1620: return AXRADIO_ERR_NOERROR;
   286E 75 82 00           8844 	mov	dpl,#0x00
   2871 22                 8845 	ret
   2872                    8846 00102$:
                           8847 ;	..\COMMON\easyax5043.c:1621: switch (axradio_mode) {
   2872 AE 0A              8848 	mov	r6,_axradio_mode
   2874 BE 00 02           8849 	cjne	r6,#0x00,00213$
   2877 80 2E              8850 	sjmp	00103$
   2879                    8851 00213$:
   2879 BE 02 02           8852 	cjne	r6,#0x02,00214$
   287C 80 3B              8853 	sjmp	00106$
   287E                    8854 00214$:
   287E BE 03 02           8855 	cjne	r6,#0x03,00215$
   2881 80 66              8856 	sjmp	00114$
   2883                    8857 00215$:
   2883 BE 14 02           8858 	cjne	r6,#0x14,00216$
   2886 80 61              8859 	sjmp	00114$
   2888                    8860 00216$:
   2888 BE 15 02           8861 	cjne	r6,#0x15,00217$
   288B 80 5C              8862 	sjmp	00114$
   288D                    8863 00217$:
   288D BE 16 02           8864 	cjne	r6,#0x16,00218$
   2890 80 57              8865 	sjmp	00114$
   2892                    8866 00218$:
   2892 BE 1C 03           8867 	cjne	r6,#0x1C,00219$
   2895 02 29 42           8868 	ljmp	00119$
   2898                    8869 00219$:
   2898 BE 1D 03           8870 	cjne	r6,#0x1D,00220$
   289B 02 29 42           8871 	ljmp	00119$
   289E                    8872 00220$:
   289E BE 1E 03           8873 	cjne	r6,#0x1E,00221$
   28A1 02 29 42           8874 	ljmp	00119$
   28A4                    8875 00221$:
   28A4 02 29 4F           8876 	ljmp	00120$
                           8877 ;	..\COMMON\easyax5043.c:1622: case AXRADIO_MODE_UNINIT:
   28A7                    8878 00103$:
                           8879 ;	..\COMMON\easyax5043.c:1624: uint8_t __autodata r = axradio_init();
   28A7 C0 07              8880 	push	ar7
   28A9 12 25 6C           8881 	lcall	_axradio_init
   28AC AE 82              8882 	mov	r6,dpl
   28AE D0 07              8883 	pop	ar7
                           8884 ;	..\COMMON\easyax5043.c:1625: if (r != AXRADIO_ERR_NOERROR)
   28B0 EE                 8885 	mov	a,r6
   28B1 70 03              8886 	jnz	00222$
   28B3 02 29 59           8887 	ljmp	00121$
   28B6                    8888 00222$:
                           8889 ;	..\COMMON\easyax5043.c:1626: return r;
   28B6 8E 82              8890 	mov	dpl,r6
   28B8 22                 8891 	ret
                           8892 ;	..\COMMON\easyax5043.c:1630: case AXRADIO_MODE_DEEPSLEEP:
   28B9                    8893 00106$:
                           8894 ;	..\COMMON\easyax5043.c:1632: uint8_t __autodata r = ax5043_wakeup_deepsleep();
   28B9 C0 07              8895 	push	ar7
   28BB 12 36 35           8896 	lcall	_ax5043_wakeup_deepsleep
   28BE AE 82              8897 	mov	r6,dpl
   28C0 D0 07              8898 	pop	ar7
                           8899 ;	..\COMMON\easyax5043.c:1633: if (r)
   28C2 EE                 8900 	mov	a,r6
   28C3 60 04              8901 	jz	00108$
                           8902 ;	..\COMMON\easyax5043.c:1634: return AXRADIO_ERR_NOCHIP;
   28C5 75 82 05           8903 	mov	dpl,#0x05
   28C8 22                 8904 	ret
   28C9                    8905 00108$:
                           8906 ;	..\COMMON\easyax5043.c:1635: ax5043_init_registers();
   28C9 C0 07              8907 	push	ar7
   28CB 12 15 E4           8908 	lcall	_ax5043_init_registers
                           8909 ;	..\COMMON\easyax5043.c:1636: r = axradio_set_channel(axradio_curchannel);
   28CE 90 00 09           8910 	mov	dptr,#_axradio_curchannel
   28D1 E0                 8911 	movx	a,@dptr
   28D2 F5 82              8912 	mov	dpl,a
   28D4 12 2C 3B           8913 	lcall	_axradio_set_channel
   28D7 AE 82              8914 	mov	r6,dpl
   28D9 D0 07              8915 	pop	ar7
                           8916 ;	..\COMMON\easyax5043.c:1637: if (r != AXRADIO_ERR_NOERROR)
   28DB EE                 8917 	mov	a,r6
   28DC 60 03              8918 	jz	00110$
                           8919 ;	..\COMMON\easyax5043.c:1638: return r;
   28DE 8E 82              8920 	mov	dpl,r6
   28E0 22                 8921 	ret
   28E1                    8922 00110$:
                           8923 ;	..\COMMON\easyax5043.c:1639: axradio_trxstate = trxstate_off;
   28E1 75 0B 00           8924 	mov	_axradio_trxstate,#0x00
                           8925 ;	..\COMMON\easyax5043.c:1640: axradio_mode = AXRADIO_MODE_OFF;
   28E4 75 0A 01           8926 	mov	_axradio_mode,#0x01
                           8927 ;	..\COMMON\easyax5043.c:1641: break;
                           8928 ;	..\COMMON\easyax5043.c:1647: case AXRADIO_MODE_CW_TRANSMIT:
   28E7 80 70              8929 	sjmp	00121$
   28E9                    8930 00114$:
                           8931 ;	..\COMMON\easyax5043.c:1649: uint8_t __autodata iesave = IE & 0x80;
   28E9 74 80              8932 	mov	a,#0x80
   28EB 55 A8              8933 	anl	a,_IE
   28ED FE                 8934 	mov	r6,a
                           8935 ;	..\COMMON\easyax5043.c:1650: EA = 0;
   28EE C2 AF              8936 	clr	_EA
                           8937 ;	..\COMMON\easyax5043.c:1651: if (axradio_trxstate == trxstate_off) {
   28F0 E5 0B              8938 	mov	a,_axradio_trxstate
   28F2 70 38              8939 	jnz	00116$
                           8940 ;	..\COMMON\easyax5043.c:1652: update_timeanchor();
   28F4 C0 07              8941 	push	ar7
   28F6 C0 06              8942 	push	ar6
   28F8 12 08 37           8943 	lcall	_update_timeanchor
                           8944 ;	..\COMMON\easyax5043.c:1653: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   28FB 90 02 75           8945 	mov	dptr,#_axradio_cb_transmitend
   28FE 12 48 E0           8946 	lcall	_wtimer_remove_callback
                           8947 ;	..\COMMON\easyax5043.c:1654: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   2901 90 02 7A           8948 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   2904 E4                 8949 	clr	a
   2905 F0                 8950 	movx	@dptr,a
                           8951 ;	..\COMMON\easyax5043.c:1655: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   2906 90 00 1A           8952 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2909 E0                 8953 	movx	a,@dptr
   290A FA                 8954 	mov	r2,a
   290B A3                 8955 	inc	dptr
   290C E0                 8956 	movx	a,@dptr
   290D FB                 8957 	mov	r3,a
   290E A3                 8958 	inc	dptr
   290F E0                 8959 	movx	a,@dptr
   2910 FC                 8960 	mov	r4,a
   2911 A3                 8961 	inc	dptr
   2912 E0                 8962 	movx	a,@dptr
   2913 FD                 8963 	mov	r5,a
   2914 90 02 7B           8964 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   2917 EA                 8965 	mov	a,r2
   2918 F0                 8966 	movx	@dptr,a
   2919 A3                 8967 	inc	dptr
   291A EB                 8968 	mov	a,r3
   291B F0                 8969 	movx	@dptr,a
   291C A3                 8970 	inc	dptr
   291D EC                 8971 	mov	a,r4
   291E F0                 8972 	movx	@dptr,a
   291F A3                 8973 	inc	dptr
   2920 ED                 8974 	mov	a,r5
   2921 F0                 8975 	movx	@dptr,a
                           8976 ;	..\COMMON\easyax5043.c:1656: wtimer_add_callback(&axradio_cb_transmitend.cb);
   2922 90 02 75           8977 	mov	dptr,#_axradio_cb_transmitend
   2925 12 3E 7B           8978 	lcall	_wtimer_add_callback
   2928 D0 06              8979 	pop	ar6
   292A D0 07              8980 	pop	ar7
   292C                    8981 00116$:
                           8982 ;	..\COMMON\easyax5043.c:1658: ax5043_off();
   292C C0 07              8983 	push	ar7
   292E C0 06              8984 	push	ar6
   2930 12 14 6D           8985 	lcall	_ax5043_off
   2933 D0 06              8986 	pop	ar6
                           8987 ;	..\COMMON\easyax5043.c:1659: IE |= iesave;
   2935 EE                 8988 	mov	a,r6
   2936 42 A8              8989 	orl	_IE,a
                           8990 ;	..\COMMON\easyax5043.c:1661: ax5043_init_registers();
   2938 12 15 E4           8991 	lcall	_ax5043_init_registers
   293B D0 07              8992 	pop	ar7
                           8993 ;	..\COMMON\easyax5043.c:1662: axradio_mode = AXRADIO_MODE_OFF;
   293D 75 0A 01           8994 	mov	_axradio_mode,#0x01
                           8995 ;	..\COMMON\easyax5043.c:1663: break;
                           8996 ;	..\COMMON\easyax5043.c:1668: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   2940 80 17              8997 	sjmp	00121$
   2942                    8998 00119$:
                           8999 ;	..\COMMON\easyax5043.c:1669: ax5043_off();
   2942 C0 07              9000 	push	ar7
   2944 12 14 6D           9001 	lcall	_ax5043_off
                           9002 ;	..\COMMON\easyax5043.c:1670: ax5043_init_registers();
   2947 12 15 E4           9003 	lcall	_ax5043_init_registers
   294A D0 07              9004 	pop	ar7
                           9005 ;	..\COMMON\easyax5043.c:1671: axradio_mode = AXRADIO_MODE_OFF;
   294C 75 0A 01           9006 	mov	_axradio_mode,#0x01
                           9007 ;	..\COMMON\easyax5043.c:1673: default:
   294F                    9008 00120$:
                           9009 ;	..\COMMON\easyax5043.c:1674: ax5043_off();
   294F C0 07              9010 	push	ar7
   2951 12 14 6D           9011 	lcall	_ax5043_off
   2954 D0 07              9012 	pop	ar7
                           9013 ;	..\COMMON\easyax5043.c:1675: axradio_mode = AXRADIO_MODE_OFF;
   2956 75 0A 01           9014 	mov	_axradio_mode,#0x01
                           9015 ;	..\COMMON\easyax5043.c:1677: }
   2959                    9016 00121$:
                           9017 ;	..\COMMON\easyax5043.c:1678: axradio_killallcb();
   2959 C0 07              9018 	push	ar7
   295B 12 25 42           9019 	lcall	_axradio_killallcb
   295E D0 07              9020 	pop	ar7
                           9021 ;	..\COMMON\easyax5043.c:1679: if (mode == AXRADIO_MODE_UNINIT)
   2960 EF                 9022 	mov	a,r7
   2961 70 04              9023 	jnz	00123$
                           9024 ;	..\COMMON\easyax5043.c:1680: return AXRADIO_ERR_NOTSUPPORTED;
   2963 75 82 01           9025 	mov	dpl,#0x01
   2966 22                 9026 	ret
   2967                    9027 00123$:
                           9028 ;	..\COMMON\easyax5043.c:1681: axradio_syncstate = syncstate_off;
   2967 90 00 04           9029 	mov	dptr,#_axradio_syncstate
   296A E4                 9030 	clr	a
   296B F0                 9031 	movx	@dptr,a
                           9032 ;	..\COMMON\easyax5043.c:1682: switch (mode) {
   296C EF                 9033 	mov	a,r7
   296D 24 DC              9034 	add	a,#0xff - 0x23
   296F 50 03              9035 	jnc	00227$
   2971 02 2C 33           9036 	ljmp	00159$
   2974                    9037 00227$:
   2974 EF                 9038 	mov	a,r7
   2975 24 09              9039 	add	a,#(00228$-3-.)
   2977 83                 9040 	movc	a,@a+pc
   2978 C0 E0              9041 	push	acc
   297A EF                 9042 	mov	a,r7
   297B 24 27              9043 	add	a,#(00229$-3-.)
   297D 83                 9044 	movc	a,@a+pc
   297E C0 E0              9045 	push	acc
   2980 22                 9046 	ret
   2981                    9047 00228$:
   2981 33                 9048 	.db	00159$
   2982 C9                 9049 	.db	00124$
   2983 CD                 9050 	.db	00125$
   2984 F8                 9051 	.db	00154$
   2985 33                 9052 	.db	00159$
   2986 33                 9053 	.db	00159$
   2987 33                 9054 	.db	00159$
   2988 33                 9055 	.db	00159$
   2989 33                 9056 	.db	00159$
   298A 33                 9057 	.db	00159$
   298B 33                 9058 	.db	00159$
   298C 33                 9059 	.db	00159$
   298D 33                 9060 	.db	00159$
   298E 33                 9061 	.db	00159$
   298F 33                 9062 	.db	00159$
   2990 33                 9063 	.db	00159$
   2991 D7                 9064 	.db	00126$
   2992 EA                 9065 	.db	00128$
   2993 D7                 9066 	.db	00127$
   2994 EA                 9067 	.db	00129$
   2995 59                 9068 	.db	00137$
   2996 59                 9069 	.db	00138$
   2997 59                 9070 	.db	00139$
   2998 33                 9071 	.db	00159$
   2999 FD                 9072 	.db	00130$
   299A 43                 9073 	.db	00135$
   299B FD                 9074 	.db	00131$
   299C 43                 9075 	.db	00136$
   299D C4                 9076 	.db	00147$
   299E C4                 9077 	.db	00148$
   299F C4                 9078 	.db	00149$
   29A0 33                 9079 	.db	00159$
   29A1 3E                 9080 	.db	00155$
   29A2 3E                 9081 	.db	00156$
   29A3 99                 9082 	.db	00157$
   29A4 99                 9083 	.db	00158$
   29A5                    9084 00229$:
   29A5 2C                 9085 	.db	00159$>>8
   29A6 29                 9086 	.db	00124$>>8
   29A7 29                 9087 	.db	00125$>>8
   29A8 2A                 9088 	.db	00154$>>8
   29A9 2C                 9089 	.db	00159$>>8
   29AA 2C                 9090 	.db	00159$>>8
   29AB 2C                 9091 	.db	00159$>>8
   29AC 2C                 9092 	.db	00159$>>8
   29AD 2C                 9093 	.db	00159$>>8
   29AE 2C                 9094 	.db	00159$>>8
   29AF 2C                 9095 	.db	00159$>>8
   29B0 2C                 9096 	.db	00159$>>8
   29B1 2C                 9097 	.db	00159$>>8
   29B2 2C                 9098 	.db	00159$>>8
   29B3 2C                 9099 	.db	00159$>>8
   29B4 2C                 9100 	.db	00159$>>8
   29B5 29                 9101 	.db	00126$>>8
   29B6 29                 9102 	.db	00128$>>8
   29B7 29                 9103 	.db	00127$>>8
   29B8 29                 9104 	.db	00129$>>8
   29B9 2A                 9105 	.db	00137$>>8
   29BA 2A                 9106 	.db	00138$>>8
   29BB 2A                 9107 	.db	00139$>>8
   29BC 2C                 9108 	.db	00159$>>8
   29BD 29                 9109 	.db	00130$>>8
   29BE 2A                 9110 	.db	00135$>>8
   29BF 29                 9111 	.db	00131$>>8
   29C0 2A                 9112 	.db	00136$>>8
   29C1 2A                 9113 	.db	00147$>>8
   29C2 2A                 9114 	.db	00148$>>8
   29C3 2A                 9115 	.db	00149$>>8
   29C4 2C                 9116 	.db	00159$>>8
   29C5 2B                 9117 	.db	00155$>>8
   29C6 2B                 9118 	.db	00156$>>8
   29C7 2B                 9119 	.db	00157$>>8
   29C8 2B                 9120 	.db	00158$>>8
                           9121 ;	..\COMMON\easyax5043.c:1683: case AXRADIO_MODE_OFF:
   29C9                    9122 00124$:
                           9123 ;	..\COMMON\easyax5043.c:1684: return AXRADIO_ERR_NOERROR;
   29C9 75 82 00           9124 	mov	dpl,#0x00
   29CC 22                 9125 	ret
                           9126 ;	..\COMMON\easyax5043.c:1686: case AXRADIO_MODE_DEEPSLEEP:
   29CD                    9127 00125$:
                           9128 ;	..\COMMON\easyax5043.c:1687: ax5043_enter_deepsleep();
   29CD 12 36 13           9129 	lcall	_ax5043_enter_deepsleep
                           9130 ;	..\COMMON\easyax5043.c:1688: axradio_mode = AXRADIO_MODE_DEEPSLEEP;
   29D0 75 0A 02           9131 	mov	_axradio_mode,#0x02
                           9132 ;	..\COMMON\easyax5043.c:1689: return AXRADIO_ERR_NOERROR;
   29D3 75 82 00           9133 	mov	dpl,#0x00
   29D6 22                 9134 	ret
                           9135 ;	..\COMMON\easyax5043.c:1691: case AXRADIO_MODE_ASYNC_TRANSMIT:
   29D7                    9136 00126$:
                           9137 ;	..\COMMON\easyax5043.c:1692: case AXRADIO_MODE_ACK_TRANSMIT:
   29D7                    9138 00127$:
                           9139 ;	..\COMMON\easyax5043.c:1693: ax5043_init_registers_tx();
   29D7 C0 07              9140 	push	ar7
   29D9 12 08 CD           9141 	lcall	_ax5043_init_registers_tx
   29DC D0 07              9142 	pop	ar7
                           9143 ;	..\COMMON\easyax5043.c:1694: axradio_ack_seqnr = 0xff;
   29DE 90 00 0F           9144 	mov	dptr,#_axradio_ack_seqnr
   29E1 74 FF              9145 	mov	a,#0xFF
   29E3 F0                 9146 	movx	@dptr,a
                           9147 ;	..\COMMON\easyax5043.c:1695: axradio_mode = mode;
   29E4 8F 0A              9148 	mov	_axradio_mode,r7
                           9149 ;	..\COMMON\easyax5043.c:1696: return AXRADIO_ERR_NOERROR;
   29E6 75 82 00           9150 	mov	dpl,#0x00
   29E9 22                 9151 	ret
                           9152 ;	..\COMMON\easyax5043.c:1698: case AXRADIO_MODE_WOR_TRANSMIT:
   29EA                    9153 00128$:
                           9154 ;	..\COMMON\easyax5043.c:1699: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   29EA                    9155 00129$:
                           9156 ;	..\COMMON\easyax5043.c:1700: ax5043_init_registers_tx();
   29EA C0 07              9157 	push	ar7
   29EC 12 08 CD           9158 	lcall	_ax5043_init_registers_tx
   29EF D0 07              9159 	pop	ar7
                           9160 ;	..\COMMON\easyax5043.c:1701: axradio_ack_seqnr = 0xff;
   29F1 90 00 0F           9161 	mov	dptr,#_axradio_ack_seqnr
   29F4 74 FF              9162 	mov	a,#0xFF
   29F6 F0                 9163 	movx	@dptr,a
                           9164 ;	..\COMMON\easyax5043.c:1702: axradio_mode = mode;
   29F7 8F 0A              9165 	mov	_axradio_mode,r7
                           9166 ;	..\COMMON\easyax5043.c:1703: return AXRADIO_ERR_NOERROR;
   29F9 75 82 00           9167 	mov	dpl,#0x00
   29FC 22                 9168 	ret
                           9169 ;	..\COMMON\easyax5043.c:1705: case AXRADIO_MODE_ASYNC_RECEIVE:
   29FD                    9170 00130$:
                           9171 ;	..\COMMON\easyax5043.c:1706: case AXRADIO_MODE_ACK_RECEIVE:
   29FD                    9172 00131$:
                           9173 ;	..\COMMON\easyax5043.c:1707: ax5043_init_registers_rx();
   29FD C0 07              9174 	push	ar7
   29FF 12 09 02           9175 	lcall	_ax5043_init_registers_rx
                           9176 ;	..\COMMON\easyax5043.c:1708: ax5043_receiver_on_continuous();
   2A02 12 13 28           9177 	lcall	_ax5043_receiver_on_continuous
   2A05 D0 07              9178 	pop	ar7
                           9179 ;	..\COMMON\easyax5043.c:1709: axradio_ack_seqnr = 0xff;
   2A07 90 00 0F           9180 	mov	dptr,#_axradio_ack_seqnr
   2A0A 74 FF              9181 	mov	a,#0xFF
   2A0C F0                 9182 	movx	@dptr,a
                           9183 ;	..\COMMON\easyax5043.c:1710: axradio_mode = mode;
   2A0D 8F 0A              9184 	mov	_axradio_mode,r7
                           9185 ;	..\COMMON\easyax5043.c:1711: enablecs:
   2A0F                    9186 00132$:
                           9187 ;	..\COMMON\easyax5043.c:1712: if (axradio_phy_cs_enabled) {
   2A0F 90 4B 83           9188 	mov	dptr,#_axradio_phy_cs_enabled
   2A12 E4                 9189 	clr	a
   2A13 93                 9190 	movc	a,@a+dptr
   2A14 FE                 9191 	mov	r6,a
   2A15 60 28              9192 	jz	00134$
                           9193 ;	..\COMMON\easyax5043.c:1713: wtimer_remove(&axradio_timer);
   2A17 90 02 89           9194 	mov	dptr,#_axradio_timer
   2A1A 12 46 8F           9195 	lcall	_wtimer_remove
                           9196 ;	..\COMMON\easyax5043.c:1714: axradio_timer.time = axradio_phy_cs_period;
   2A1D 90 4B 81           9197 	mov	dptr,#_axradio_phy_cs_period
   2A20 E4                 9198 	clr	a
   2A21 93                 9199 	movc	a,@a+dptr
   2A22 FD                 9200 	mov	r5,a
   2A23 74 01              9201 	mov	a,#0x01
   2A25 93                 9202 	movc	a,@a+dptr
   2A26 FE                 9203 	mov	r6,a
   2A27 7C 00              9204 	mov	r4,#0x00
   2A29 7B 00              9205 	mov	r3,#0x00
   2A2B 90 02 8D           9206 	mov	dptr,#(_axradio_timer + 0x0004)
   2A2E ED                 9207 	mov	a,r5
   2A2F F0                 9208 	movx	@dptr,a
   2A30 A3                 9209 	inc	dptr
   2A31 EE                 9210 	mov	a,r6
   2A32 F0                 9211 	movx	@dptr,a
   2A33 A3                 9212 	inc	dptr
   2A34 EC                 9213 	mov	a,r4
   2A35 F0                 9214 	movx	@dptr,a
   2A36 A3                 9215 	inc	dptr
   2A37 EB                 9216 	mov	a,r3
   2A38 F0                 9217 	movx	@dptr,a
                           9218 ;	..\COMMON\easyax5043.c:1715: wtimer0_addrelative(&axradio_timer);
   2A39 90 02 89           9219 	mov	dptr,#_axradio_timer
   2A3C 12 3E 95           9220 	lcall	_wtimer0_addrelative
   2A3F                    9221 00134$:
                           9222 ;	..\COMMON\easyax5043.c:1717: return AXRADIO_ERR_NOERROR;
   2A3F 75 82 00           9223 	mov	dpl,#0x00
   2A42 22                 9224 	ret
                           9225 ;	..\COMMON\easyax5043.c:1719: case AXRADIO_MODE_WOR_RECEIVE:
   2A43                    9226 00135$:
                           9227 ;	..\COMMON\easyax5043.c:1720: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   2A43                    9228 00136$:
                           9229 ;	..\COMMON\easyax5043.c:1721: ax5043_init_registers_rx();
   2A43 C0 07              9230 	push	ar7
   2A45 12 09 02           9231 	lcall	_ax5043_init_registers_rx
                           9232 ;	..\COMMON\easyax5043.c:1722: ax5043_receiver_on_wor();
   2A48 12 13 C2           9233 	lcall	_ax5043_receiver_on_wor
   2A4B D0 07              9234 	pop	ar7
                           9235 ;	..\COMMON\easyax5043.c:1723: axradio_ack_seqnr = 0xff;
   2A4D 90 00 0F           9236 	mov	dptr,#_axradio_ack_seqnr
   2A50 74 FF              9237 	mov	a,#0xFF
   2A52 F0                 9238 	movx	@dptr,a
                           9239 ;	..\COMMON\easyax5043.c:1724: axradio_mode = mode;
   2A53 8F 0A              9240 	mov	_axradio_mode,r7
                           9241 ;	..\COMMON\easyax5043.c:1725: return AXRADIO_ERR_NOERROR;
   2A55 75 82 00           9242 	mov	dpl,#0x00
   2A58 22                 9243 	ret
                           9244 ;	..\COMMON\easyax5043.c:1727: case AXRADIO_MODE_STREAM_TRANSMIT:
   2A59                    9245 00137$:
                           9246 ;	..\COMMON\easyax5043.c:1728: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2A59                    9247 00138$:
                           9248 ;	..\COMMON\easyax5043.c:1729: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2A59                    9249 00139$:
                           9250 ;	..\COMMON\easyax5043.c:1730: axradio_mode = mode;
   2A59 8F 0A              9251 	mov	_axradio_mode,r7
                           9252 ;	..\COMMON\easyax5043.c:1731: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_UNENC)
   2A5B 74 15              9253 	mov	a,#0x15
   2A5D B5 0A 05           9254 	cjne	a,_axradio_mode,00141$
                           9255 ;	..\COMMON\easyax5043.c:1732: AX5043_ENCODING = 0;
   2A60 90 40 11           9256 	mov	dptr,#_AX5043_ENCODING
   2A63 E4                 9257 	clr	a
   2A64 F0                 9258 	movx	@dptr,a
   2A65                    9259 00141$:
                           9260 ;	..\COMMON\easyax5043.c:1733: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_SCRAM)
   2A65 74 16              9261 	mov	a,#0x16
   2A67 B5 0A 06           9262 	cjne	a,_axradio_mode,00143$
                           9263 ;	..\COMMON\easyax5043.c:1734: AX5043_ENCODING = 4;
   2A6A 90 40 11           9264 	mov	dptr,#_AX5043_ENCODING
   2A6D 74 04              9265 	mov	a,#0x04
   2A6F F0                 9266 	movx	@dptr,a
   2A70                    9267 00143$:
                           9268 ;	..\COMMON\easyax5043.c:1735: ax5043_init_registers_tx();
   2A70 12 08 CD           9269 	lcall	_ax5043_init_registers_tx
                           9270 ;	..\COMMON\easyax5043.c:1736: AX5043_FRAMING = 0;
   2A73 90 40 12           9271 	mov	dptr,#_AX5043_FRAMING
   2A76 E4                 9272 	clr	a
   2A77 F0                 9273 	movx	@dptr,a
                           9274 ;	..\COMMON\easyax5043.c:1737: ax5043_prepare_tx();
   2A78 12 14 47           9275 	lcall	_ax5043_prepare_tx
                           9276 ;	..\COMMON\easyax5043.c:1738: axradio_trxstate = trxstate_txstream_xtalwait;
   2A7B 75 0B 0F           9277 	mov	_axradio_trxstate,#0x0F
                           9278 ;	..\COMMON\easyax5043.c:1739: while (!(AX5043_POWSTAT & 0x08)) {}; // wait for modem vdd so writing the FIFO is safe
   2A7E                    9279 00144$:
   2A7E 90 40 03           9280 	mov	dptr,#_AX5043_POWSTAT
   2A81 E0                 9281 	movx	a,@dptr
   2A82 FE                 9282 	mov	r6,a
   2A83 30 E3 F8           9283 	jnb	acc.3,00144$
                           9284 ;	..\COMMON\easyax5043.c:1740: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   2A86 90 40 28           9285 	mov	dptr,#_AX5043_FIFOSTAT
   2A89 74 03              9286 	mov	a,#0x03
   2A8B F0                 9287 	movx	@dptr,a
                           9288 ;	..\COMMON\easyax5043.c:1741: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   2A8C 90 40 0F           9289 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   2A8F E0                 9290 	movx	a,@dptr
                           9291 ;	..\COMMON\easyax5043.c:1742: update_timeanchor();
   2A90 12 08 37           9292 	lcall	_update_timeanchor
                           9293 ;	..\COMMON\easyax5043.c:1743: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   2A93 90 02 7F           9294 	mov	dptr,#_axradio_cb_transmitdata
   2A96 12 48 E0           9295 	lcall	_wtimer_remove_callback
                           9296 ;	..\COMMON\easyax5043.c:1744: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   2A99 90 02 84           9297 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   2A9C E4                 9298 	clr	a
   2A9D F0                 9299 	movx	@dptr,a
                           9300 ;	..\COMMON\easyax5043.c:1745: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   2A9E 90 00 1A           9301 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2AA1 E0                 9302 	movx	a,@dptr
   2AA2 FB                 9303 	mov	r3,a
   2AA3 A3                 9304 	inc	dptr
   2AA4 E0                 9305 	movx	a,@dptr
   2AA5 FC                 9306 	mov	r4,a
   2AA6 A3                 9307 	inc	dptr
   2AA7 E0                 9308 	movx	a,@dptr
   2AA8 FD                 9309 	mov	r5,a
   2AA9 A3                 9310 	inc	dptr
   2AAA E0                 9311 	movx	a,@dptr
   2AAB FE                 9312 	mov	r6,a
   2AAC 90 02 85           9313 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   2AAF EB                 9314 	mov	a,r3
   2AB0 F0                 9315 	movx	@dptr,a
   2AB1 A3                 9316 	inc	dptr
   2AB2 EC                 9317 	mov	a,r4
   2AB3 F0                 9318 	movx	@dptr,a
   2AB4 A3                 9319 	inc	dptr
   2AB5 ED                 9320 	mov	a,r5
   2AB6 F0                 9321 	movx	@dptr,a
   2AB7 A3                 9322 	inc	dptr
   2AB8 EE                 9323 	mov	a,r6
   2AB9 F0                 9324 	movx	@dptr,a
                           9325 ;	..\COMMON\easyax5043.c:1746: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   2ABA 90 02 7F           9326 	mov	dptr,#_axradio_cb_transmitdata
   2ABD 12 3E 7B           9327 	lcall	_wtimer_add_callback
                           9328 ;	..\COMMON\easyax5043.c:1747: return AXRADIO_ERR_NOERROR;
   2AC0 75 82 00           9329 	mov	dpl,#0x00
   2AC3 22                 9330 	ret
                           9331 ;	..\COMMON\easyax5043.c:1749: case AXRADIO_MODE_STREAM_RECEIVE:
   2AC4                    9332 00147$:
                           9333 ;	..\COMMON\easyax5043.c:1750: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   2AC4                    9334 00148$:
                           9335 ;	..\COMMON\easyax5043.c:1751: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   2AC4                    9336 00149$:
                           9337 ;	..\COMMON\easyax5043.c:1752: ax5043_init_registers_rx();
   2AC4 C0 07              9338 	push	ar7
   2AC6 12 09 02           9339 	lcall	_ax5043_init_registers_rx
   2AC9 D0 07              9340 	pop	ar7
                           9341 ;	..\COMMON\easyax5043.c:1753: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC)
   2ACB 74 1D              9342 	mov	a,#0x1D
   2ACD B5 0A 05           9343 	cjne	a,_axradio_mode,00151$
                           9344 ;	..\COMMON\easyax5043.c:1754: AX5043_ENCODING = 0;
   2AD0 90 40 11           9345 	mov	dptr,#_AX5043_ENCODING
   2AD3 E4                 9346 	clr	a
   2AD4 F0                 9347 	movx	@dptr,a
   2AD5                    9348 00151$:
                           9349 ;	..\COMMON\easyax5043.c:1755: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   2AD5 74 1E              9350 	mov	a,#0x1E
   2AD7 B5 0A 06           9351 	cjne	a,_axradio_mode,00153$
                           9352 ;	..\COMMON\easyax5043.c:1756: AX5043_ENCODING = 4;
   2ADA 90 40 11           9353 	mov	dptr,#_AX5043_ENCODING
   2ADD 74 04              9354 	mov	a,#0x04
   2ADF F0                 9355 	movx	@dptr,a
   2AE0                    9356 00153$:
                           9357 ;	..\COMMON\easyax5043.c:1757: AX5043_FRAMING = 0;
   2AE0 90 40 12           9358 	mov	dptr,#_AX5043_FRAMING
   2AE3 E4                 9359 	clr	a
   2AE4 F0                 9360 	movx	@dptr,a
                           9361 ;	..\COMMON\easyax5043.c:1758: AX5043_PKTCHUNKSIZE = 8; // 64 byte
   2AE5 90 42 30           9362 	mov	dptr,#_AX5043_PKTCHUNKSIZE
   2AE8 74 08              9363 	mov	a,#0x08
   2AEA F0                 9364 	movx	@dptr,a
                           9365 ;	..\COMMON\easyax5043.c:1759: AX5043_RXPARAMSETS = 0x00;
   2AEB 90 41 17           9366 	mov	dptr,#_AX5043_RXPARAMSETS
   2AEE E4                 9367 	clr	a
   2AEF F0                 9368 	movx	@dptr,a
                           9369 ;	..\COMMON\easyax5043.c:1760: axradio_mode = mode;
   2AF0 8F 0A              9370 	mov	_axradio_mode,r7
                           9371 ;	..\COMMON\easyax5043.c:1761: ax5043_receiver_on_continuous();
   2AF2 12 13 28           9372 	lcall	_ax5043_receiver_on_continuous
                           9373 ;	..\COMMON\easyax5043.c:1762: goto enablecs;
   2AF5 02 2A 0F           9374 	ljmp	00132$
                           9375 ;	..\COMMON\easyax5043.c:1764: case AXRADIO_MODE_CW_TRANSMIT:
   2AF8                    9376 00154$:
                           9377 ;	..\COMMON\easyax5043.c:1765: ax5043_init_registers_tx();
   2AF8 12 08 CD           9378 	lcall	_ax5043_init_registers_tx
                           9379 ;	..\COMMON\easyax5043.c:1766: AX5043_MODULATION = 8;   // Set an FSK mode
   2AFB 90 40 10           9380 	mov	dptr,#_AX5043_MODULATION
   2AFE 74 08              9381 	mov	a,#0x08
   2B00 F0                 9382 	movx	@dptr,a
                           9383 ;	..\COMMON\easyax5043.c:1767: AX5043_FSKDEV2 = 0x00;
   2B01 90 41 61           9384 	mov	dptr,#_AX5043_FSKDEV2
                           9385 ;	..\COMMON\easyax5043.c:1768: AX5043_FSKDEV1 = 0x00;
                           9386 ;	..\COMMON\easyax5043.c:1769: AX5043_FSKDEV0 = 0x00;
                           9387 ;	..\COMMON\easyax5043.c:1770: AX5043_TXRATE2 = 0x00;
   2B04 E4                 9388 	clr	a
   2B05 F0                 9389 	movx	@dptr,a
   2B06 90 41 62           9390 	mov	dptr,#_AX5043_FSKDEV1
   2B09 F0                 9391 	movx	@dptr,a
   2B0A 90 41 63           9392 	mov	dptr,#_AX5043_FSKDEV0
   2B0D F0                 9393 	movx	@dptr,a
   2B0E 90 41 65           9394 	mov	dptr,#_AX5043_TXRATE2
   2B11 F0                 9395 	movx	@dptr,a
                           9396 ;	..\COMMON\easyax5043.c:1771: AX5043_TXRATE1 = 0x00;
   2B12 90 41 66           9397 	mov	dptr,#_AX5043_TXRATE1
   2B15 E4                 9398 	clr	a
   2B16 F0                 9399 	movx	@dptr,a
                           9400 ;	..\COMMON\easyax5043.c:1772: AX5043_TXRATE0 = 0x01;
   2B17 90 41 67           9401 	mov	dptr,#_AX5043_TXRATE0
   2B1A 74 01              9402 	mov	a,#0x01
   2B1C F0                 9403 	movx	@dptr,a
                           9404 ;	..\COMMON\easyax5043.c:1773: AX5043_PINFUNCDATA = 0x04;
   2B1D 90 40 23           9405 	mov	dptr,#_AX5043_PINFUNCDATA
   2B20 74 04              9406 	mov	a,#0x04
   2B22 F0                 9407 	movx	@dptr,a
                           9408 ;	..\COMMON\easyax5043.c:1774: axradio_mode = AXRADIO_MODE_CW_TRANSMIT;
   2B23 75 0A 03           9409 	mov	_axradio_mode,#0x03
                           9410 ;	..\COMMON\easyax5043.c:1775: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   2B26 90 40 02           9411 	mov	dptr,#_AX5043_PWRMODE
   2B29 74 07              9412 	mov	a,#0x07
   2B2B F0                 9413 	movx	@dptr,a
                           9414 ;	..\COMMON\easyax5043.c:1776: axradio_trxstate = trxstate_txcw_xtalwait;
   2B2C 75 0B 0E           9415 	mov	_axradio_trxstate,#0x0E
                           9416 ;	..\COMMON\easyax5043.c:1777: AX5043_IRQMASK0 = 0x00;
   2B2F 90 40 07           9417 	mov	dptr,#_AX5043_IRQMASK0
   2B32 E4                 9418 	clr	a
   2B33 F0                 9419 	movx	@dptr,a
                           9420 ;	..\COMMON\easyax5043.c:1778: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   2B34 90 40 06           9421 	mov	dptr,#_AX5043_IRQMASK1
   2B37 74 01              9422 	mov	a,#0x01
   2B39 F0                 9423 	movx	@dptr,a
                           9424 ;	..\COMMON\easyax5043.c:1779: return AXRADIO_ERR_NOERROR;
   2B3A 75 82 00           9425 	mov	dpl,#0x00
   2B3D 22                 9426 	ret
                           9427 ;	..\COMMON\easyax5043.c:1781: case AXRADIO_MODE_SYNC_MASTER:
   2B3E                    9428 00155$:
                           9429 ;	..\COMMON\easyax5043.c:1782: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2B3E                    9430 00156$:
                           9431 ;	..\COMMON\easyax5043.c:1783: axradio_mode = mode;
   2B3E 8F 0A              9432 	mov	_axradio_mode,r7
                           9433 ;	..\COMMON\easyax5043.c:1784: axradio_syncstate = syncstate_master_normal;
   2B40 90 00 04           9434 	mov	dptr,#_axradio_syncstate
   2B43 74 03              9435 	mov	a,#0x03
   2B45 F0                 9436 	movx	@dptr,a
                           9437 ;	..\COMMON\easyax5043.c:1786: wtimer_remove(&axradio_timer);
   2B46 90 02 89           9438 	mov	dptr,#_axradio_timer
   2B49 12 46 8F           9439 	lcall	_wtimer_remove
                           9440 ;	..\COMMON\easyax5043.c:1787: axradio_timer.time = 2;
   2B4C 90 02 8D           9441 	mov	dptr,#(_axradio_timer + 0x0004)
   2B4F 74 02              9442 	mov	a,#0x02
   2B51 F0                 9443 	movx	@dptr,a
   2B52 A3                 9444 	inc	dptr
   2B53 E4                 9445 	clr	a
   2B54 F0                 9446 	movx	@dptr,a
   2B55 A3                 9447 	inc	dptr
   2B56 F0                 9448 	movx	@dptr,a
   2B57 A3                 9449 	inc	dptr
   2B58 F0                 9450 	movx	@dptr,a
                           9451 ;	..\COMMON\easyax5043.c:1788: wtimer0_addrelative(&axradio_timer);
   2B59 90 02 89           9452 	mov	dptr,#_axradio_timer
   2B5C 12 3E 95           9453 	lcall	_wtimer0_addrelative
                           9454 ;	..\COMMON\easyax5043.c:1789: axradio_sync_time = axradio_timer.time;
   2B5F 90 02 8D           9455 	mov	dptr,#(_axradio_timer + 0x0004)
   2B62 E0                 9456 	movx	a,@dptr
   2B63 FB                 9457 	mov	r3,a
   2B64 A3                 9458 	inc	dptr
   2B65 E0                 9459 	movx	a,@dptr
   2B66 FC                 9460 	mov	r4,a
   2B67 A3                 9461 	inc	dptr
   2B68 E0                 9462 	movx	a,@dptr
   2B69 FD                 9463 	mov	r5,a
   2B6A A3                 9464 	inc	dptr
   2B6B E0                 9465 	movx	a,@dptr
   2B6C FE                 9466 	mov	r6,a
   2B6D 90 00 10           9467 	mov	dptr,#_axradio_sync_time
   2B70 EB                 9468 	mov	a,r3
   2B71 F0                 9469 	movx	@dptr,a
   2B72 A3                 9470 	inc	dptr
   2B73 EC                 9471 	mov	a,r4
   2B74 F0                 9472 	movx	@dptr,a
   2B75 A3                 9473 	inc	dptr
   2B76 ED                 9474 	mov	a,r5
   2B77 F0                 9475 	movx	@dptr,a
   2B78 A3                 9476 	inc	dptr
   2B79 EE                 9477 	mov	a,r6
   2B7A F0                 9478 	movx	@dptr,a
                           9479 ;	..\COMMON\easyax5043.c:1790: axradio_sync_addtime(axradio_sync_xoscstartup);
   2B7B 90 4B B4           9480 	mov	dptr,#_axradio_sync_xoscstartup
   2B7E E4                 9481 	clr	a
   2B7F 93                 9482 	movc	a,@a+dptr
   2B80 FB                 9483 	mov	r3,a
   2B81 74 01              9484 	mov	a,#0x01
   2B83 93                 9485 	movc	a,@a+dptr
   2B84 FC                 9486 	mov	r4,a
   2B85 74 02              9487 	mov	a,#0x02
   2B87 93                 9488 	movc	a,@a+dptr
   2B88 FD                 9489 	mov	r5,a
   2B89 74 03              9490 	mov	a,#0x03
   2B8B 93                 9491 	movc	a,@a+dptr
   2B8C 8B 82              9492 	mov	dpl,r3
   2B8E 8C 83              9493 	mov	dph,r4
   2B90 8D F0              9494 	mov	b,r5
   2B92 12 16 07           9495 	lcall	_axradio_sync_addtime
                           9496 ;	..\COMMON\easyax5043.c:1791: return AXRADIO_ERR_NOERROR;
   2B95 75 82 00           9497 	mov	dpl,#0x00
   2B98 22                 9498 	ret
                           9499 ;	..\COMMON\easyax5043.c:1793: case AXRADIO_MODE_SYNC_SLAVE:
   2B99                    9500 00157$:
                           9501 ;	..\COMMON\easyax5043.c:1794: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   2B99                    9502 00158$:
                           9503 ;	..\COMMON\easyax5043.c:1795: axradio_mode = mode;
   2B99 8F 0A              9504 	mov	_axradio_mode,r7
                           9505 ;	..\COMMON\easyax5043.c:1796: ax5043_init_registers_rx();
   2B9B 12 09 02           9506 	lcall	_ax5043_init_registers_rx
                           9507 ;	..\COMMON\easyax5043.c:1797: ax5043_receiver_on_continuous();
   2B9E 12 13 28           9508 	lcall	_ax5043_receiver_on_continuous
                           9509 ;	..\COMMON\easyax5043.c:1798: axradio_syncstate = syncstate_slave_synchunt;
   2BA1 90 00 04           9510 	mov	dptr,#_axradio_syncstate
   2BA4 74 06              9511 	mov	a,#0x06
   2BA6 F0                 9512 	movx	@dptr,a
                           9513 ;	..\COMMON\easyax5043.c:1799: wtimer_remove(&axradio_timer);
   2BA7 90 02 89           9514 	mov	dptr,#_axradio_timer
   2BAA 12 46 8F           9515 	lcall	_wtimer_remove
                           9516 ;	..\COMMON\easyax5043.c:1800: axradio_timer.time = axradio_sync_slave_initialsyncwindow;
   2BAD 90 4B BC           9517 	mov	dptr,#_axradio_sync_slave_initialsyncwindow
   2BB0 E4                 9518 	clr	a
   2BB1 93                 9519 	movc	a,@a+dptr
   2BB2 FC                 9520 	mov	r4,a
   2BB3 74 01              9521 	mov	a,#0x01
   2BB5 93                 9522 	movc	a,@a+dptr
   2BB6 FD                 9523 	mov	r5,a
   2BB7 74 02              9524 	mov	a,#0x02
   2BB9 93                 9525 	movc	a,@a+dptr
   2BBA FE                 9526 	mov	r6,a
   2BBB 74 03              9527 	mov	a,#0x03
   2BBD 93                 9528 	movc	a,@a+dptr
   2BBE FF                 9529 	mov	r7,a
   2BBF 90 02 8D           9530 	mov	dptr,#(_axradio_timer + 0x0004)
   2BC2 EC                 9531 	mov	a,r4
   2BC3 F0                 9532 	movx	@dptr,a
   2BC4 A3                 9533 	inc	dptr
   2BC5 ED                 9534 	mov	a,r5
   2BC6 F0                 9535 	movx	@dptr,a
   2BC7 A3                 9536 	inc	dptr
   2BC8 EE                 9537 	mov	a,r6
   2BC9 F0                 9538 	movx	@dptr,a
   2BCA A3                 9539 	inc	dptr
   2BCB EF                 9540 	mov	a,r7
   2BCC F0                 9541 	movx	@dptr,a
                           9542 ;	..\COMMON\easyax5043.c:1801: wtimer0_addrelative(&axradio_timer);
   2BCD 90 02 89           9543 	mov	dptr,#_axradio_timer
   2BD0 12 3E 95           9544 	lcall	_wtimer0_addrelative
                           9545 ;	..\COMMON\easyax5043.c:1802: axradio_sync_time = axradio_timer.time;
   2BD3 90 02 8D           9546 	mov	dptr,#(_axradio_timer + 0x0004)
   2BD6 E0                 9547 	movx	a,@dptr
   2BD7 FC                 9548 	mov	r4,a
   2BD8 A3                 9549 	inc	dptr
   2BD9 E0                 9550 	movx	a,@dptr
   2BDA FD                 9551 	mov	r5,a
   2BDB A3                 9552 	inc	dptr
   2BDC E0                 9553 	movx	a,@dptr
   2BDD FE                 9554 	mov	r6,a
   2BDE A3                 9555 	inc	dptr
   2BDF E0                 9556 	movx	a,@dptr
   2BE0 FF                 9557 	mov	r7,a
   2BE1 90 00 10           9558 	mov	dptr,#_axradio_sync_time
   2BE4 EC                 9559 	mov	a,r4
   2BE5 F0                 9560 	movx	@dptr,a
   2BE6 A3                 9561 	inc	dptr
   2BE7 ED                 9562 	mov	a,r5
   2BE8 F0                 9563 	movx	@dptr,a
   2BE9 A3                 9564 	inc	dptr
   2BEA EE                 9565 	mov	a,r6
   2BEB F0                 9566 	movx	@dptr,a
   2BEC A3                 9567 	inc	dptr
   2BED EF                 9568 	mov	a,r7
   2BEE F0                 9569 	movx	@dptr,a
                           9570 ;	..\COMMON\easyax5043.c:1803: wtimer_remove_callback(&axradio_cb_receive.cb);
   2BEF 90 02 32           9571 	mov	dptr,#_axradio_cb_receive
   2BF2 12 48 E0           9572 	lcall	_wtimer_remove_callback
                           9573 ;	..\COMMON\easyax5043.c:1804: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   2BF5 75 2A 00           9574 	mov	_memset_PARM_2,#0x00
   2BF8 75 2B 1E           9575 	mov	_memset_PARM_3,#0x1E
   2BFB 75 2C 00           9576 	mov	(_memset_PARM_3 + 1),#0x00
   2BFE 90 02 36           9577 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2C01 75 F0 00           9578 	mov	b,#0x00
   2C04 12 3E 07           9579 	lcall	_memset
                           9580 ;	..\COMMON\easyax5043.c:1805: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   2C07 90 00 1A           9581 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2C0A E0                 9582 	movx	a,@dptr
   2C0B FC                 9583 	mov	r4,a
   2C0C A3                 9584 	inc	dptr
   2C0D E0                 9585 	movx	a,@dptr
   2C0E FD                 9586 	mov	r5,a
   2C0F A3                 9587 	inc	dptr
   2C10 E0                 9588 	movx	a,@dptr
   2C11 FE                 9589 	mov	r6,a
   2C12 A3                 9590 	inc	dptr
   2C13 E0                 9591 	movx	a,@dptr
   2C14 FF                 9592 	mov	r7,a
   2C15 90 02 38           9593 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   2C18 EC                 9594 	mov	a,r4
   2C19 F0                 9595 	movx	@dptr,a
   2C1A A3                 9596 	inc	dptr
   2C1B ED                 9597 	mov	a,r5
   2C1C F0                 9598 	movx	@dptr,a
   2C1D A3                 9599 	inc	dptr
   2C1E EE                 9600 	mov	a,r6
   2C1F F0                 9601 	movx	@dptr,a
   2C20 A3                 9602 	inc	dptr
   2C21 EF                 9603 	mov	a,r7
   2C22 F0                 9604 	movx	@dptr,a
                           9605 ;	..\COMMON\easyax5043.c:1806: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   2C23 90 02 37           9606 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2C26 74 09              9607 	mov	a,#0x09
   2C28 F0                 9608 	movx	@dptr,a
                           9609 ;	..\COMMON\easyax5043.c:1807: wtimer_add_callback(&axradio_cb_receive.cb);
   2C29 90 02 32           9610 	mov	dptr,#_axradio_cb_receive
   2C2C 12 3E 7B           9611 	lcall	_wtimer_add_callback
                           9612 ;	..\COMMON\easyax5043.c:1808: return AXRADIO_ERR_NOERROR;
   2C2F 75 82 00           9613 	mov	dpl,#0x00
                           9614 ;	..\COMMON\easyax5043.c:1810: default:
   2C32 22                 9615 	ret
   2C33                    9616 00159$:
                           9617 ;	..\COMMON\easyax5043.c:1811: return AXRADIO_ERR_NOTSUPPORTED;
   2C33 75 82 01           9618 	mov	dpl,#0x01
                           9619 ;	..\COMMON\easyax5043.c:1812: }
   2C36 22                 9620 	ret
                           9621 ;------------------------------------------------------------
                           9622 ;Allocation info for local variables in function 'axradio_get_mode'
                           9623 ;------------------------------------------------------------
                           9624 ;	..\COMMON\easyax5043.c:1815: uint8_t axradio_get_mode(void)
                           9625 ;	-----------------------------------------
                           9626 ;	 function axradio_get_mode
                           9627 ;	-----------------------------------------
   2C37                    9628 _axradio_get_mode:
                           9629 ;	..\COMMON\easyax5043.c:1817: return axradio_mode;
   2C37 85 0A 82           9630 	mov	dpl,_axradio_mode
   2C3A 22                 9631 	ret
                           9632 ;------------------------------------------------------------
                           9633 ;Allocation info for local variables in function 'axradio_set_channel'
                           9634 ;------------------------------------------------------------
                           9635 ;chnum                     Allocated to registers r7 
                           9636 ;rng                       Allocated with name '_axradio_set_channel_rng_1_370'
                           9637 ;f                         Allocated to registers r3 r4 r5 r7 
                           9638 ;------------------------------------------------------------
                           9639 ;	..\COMMON\easyax5043.c:1820: uint8_t axradio_set_channel(uint8_t chnum)
                           9640 ;	-----------------------------------------
                           9641 ;	 function axradio_set_channel
                           9642 ;	-----------------------------------------
   2C3B                    9643 _axradio_set_channel:
   2C3B AF 82              9644 	mov	r7,dpl
                           9645 ;	..\COMMON\easyax5043.c:1823: if (chnum >= axradio_phy_nrchannels)
   2C3D 90 4B 74           9646 	mov	dptr,#_axradio_phy_nrchannels
   2C40 E4                 9647 	clr	a
   2C41 93                 9648 	movc	a,@a+dptr
   2C42 FE                 9649 	mov	r6,a
   2C43 C3                 9650 	clr	c
   2C44 EF                 9651 	mov	a,r7
   2C45 9E                 9652 	subb	a,r6
   2C46 40 04              9653 	jc	00102$
                           9654 ;	..\COMMON\easyax5043.c:1824: return AXRADIO_ERR_INVALID;
   2C48 75 82 04           9655 	mov	dpl,#0x04
   2C4B 22                 9656 	ret
   2C4C                    9657 00102$:
                           9658 ;	..\COMMON\easyax5043.c:1825: axradio_curchannel = chnum;
   2C4C 90 00 09           9659 	mov	dptr,#_axradio_curchannel
   2C4F EF                 9660 	mov	a,r7
   2C50 F0                 9661 	movx	@dptr,a
                           9662 ;	..\COMMON\easyax5043.c:1826: rng = axradio_phy_chanpllrng_rx[chnum];
   2C51 EF                 9663 	mov	a,r7
   2C52 24 00              9664 	add	a,#_axradio_phy_chanpllrng_rx
   2C54 F5 82              9665 	mov	dpl,a
   2C56 E4                 9666 	clr	a
   2C57 34 00              9667 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2C59 F5 83              9668 	mov	dph,a
   2C5B E0                 9669 	movx	a,@dptr
                           9670 ;	..\COMMON\easyax5043.c:1827: if (rng & 0x20)
   2C5C F5 2A              9671 	mov	_axradio_set_channel_rng_1_370,a
   2C5E 30 E5 04           9672 	jnb	acc.5,00104$
                           9673 ;	..\COMMON\easyax5043.c:1828: return AXRADIO_ERR_RANGING;
   2C61 75 82 06           9674 	mov	dpl,#0x06
   2C64 22                 9675 	ret
   2C65                    9676 00104$:
                           9677 ;	..\COMMON\easyax5043.c:1830: uint32_t __autodata f = axradio_phy_chanfreq[chnum];
   2C65 EF                 9678 	mov	a,r7
   2C66 75 F0 04           9679 	mov	b,#0x04
   2C69 A4                 9680 	mul	ab
   2C6A 24 75              9681 	add	a,#_axradio_phy_chanfreq
   2C6C F5 82              9682 	mov	dpl,a
   2C6E 74 4B              9683 	mov	a,#(_axradio_phy_chanfreq >> 8)
   2C70 35 F0              9684 	addc	a,b
   2C72 F5 83              9685 	mov	dph,a
   2C74 E4                 9686 	clr	a
   2C75 93                 9687 	movc	a,@a+dptr
   2C76 FB                 9688 	mov	r3,a
   2C77 A3                 9689 	inc	dptr
   2C78 E4                 9690 	clr	a
   2C79 93                 9691 	movc	a,@a+dptr
   2C7A FC                 9692 	mov	r4,a
   2C7B A3                 9693 	inc	dptr
   2C7C E4                 9694 	clr	a
   2C7D 93                 9695 	movc	a,@a+dptr
   2C7E FD                 9696 	mov	r5,a
   2C7F A3                 9697 	inc	dptr
   2C80 E4                 9698 	clr	a
   2C81 93                 9699 	movc	a,@a+dptr
   2C82 FF                 9700 	mov	r7,a
                           9701 ;	..\COMMON\easyax5043.c:1831: f += axradio_curfreqoffset;
   2C83 90 00 0A           9702 	mov	dptr,#_axradio_curfreqoffset
   2C86 E0                 9703 	movx	a,@dptr
   2C87 F8                 9704 	mov	r0,a
   2C88 A3                 9705 	inc	dptr
   2C89 E0                 9706 	movx	a,@dptr
   2C8A F9                 9707 	mov	r1,a
   2C8B A3                 9708 	inc	dptr
   2C8C E0                 9709 	movx	a,@dptr
   2C8D FA                 9710 	mov	r2,a
   2C8E A3                 9711 	inc	dptr
   2C8F E0                 9712 	movx	a,@dptr
   2C90 FE                 9713 	mov	r6,a
   2C91 E8                 9714 	mov	a,r0
   2C92 2B                 9715 	add	a,r3
   2C93 FB                 9716 	mov	r3,a
   2C94 E9                 9717 	mov	a,r1
   2C95 3C                 9718 	addc	a,r4
   2C96 FC                 9719 	mov	r4,a
   2C97 EA                 9720 	mov	a,r2
   2C98 3D                 9721 	addc	a,r5
   2C99 FD                 9722 	mov	r5,a
   2C9A EE                 9723 	mov	a,r6
   2C9B 3F                 9724 	addc	a,r7
   2C9C FF                 9725 	mov	r7,a
                           9726 ;	..\COMMON\easyax5043.c:1832: if (AX5043_PLLLOOP & 0x80) {
   2C9D 90 40 30           9727 	mov	dptr,#_AX5043_PLLLOOP
   2CA0 E0                 9728 	movx	a,@dptr
   2CA1 FE                 9729 	mov	r6,a
   2CA2 30 E7 1E           9730 	jnb	acc.7,00106$
                           9731 ;	..\COMMON\easyax5043.c:1833: AX5043_PLLRANGINGA = rng & 0x0F;
   2CA5 90 40 33           9732 	mov	dptr,#_AX5043_PLLRANGINGA
   2CA8 74 0F              9733 	mov	a,#0x0F
   2CAA 55 2A              9734 	anl	a,_axradio_set_channel_rng_1_370
   2CAC F0                 9735 	movx	@dptr,a
                           9736 ;	..\COMMON\easyax5043.c:1834: AX5043_FREQA0 = f;
   2CAD 90 40 37           9737 	mov	dptr,#_AX5043_FREQA0
   2CB0 EB                 9738 	mov	a,r3
   2CB1 F0                 9739 	movx	@dptr,a
                           9740 ;	..\COMMON\easyax5043.c:1835: AX5043_FREQA1 = f >> 8;
   2CB2 90 40 36           9741 	mov	dptr,#_AX5043_FREQA1
   2CB5 EC                 9742 	mov	a,r4
   2CB6 F0                 9743 	movx	@dptr,a
                           9744 ;	..\COMMON\easyax5043.c:1836: AX5043_FREQA2 = f >> 16;
   2CB7 90 40 35           9745 	mov	dptr,#_AX5043_FREQA2
   2CBA ED                 9746 	mov	a,r5
   2CBB F0                 9747 	movx	@dptr,a
                           9748 ;	..\COMMON\easyax5043.c:1837: AX5043_FREQA3 = f >> 24;
   2CBC 90 40 34           9749 	mov	dptr,#_AX5043_FREQA3
   2CBF EF                 9750 	mov	a,r7
   2CC0 F0                 9751 	movx	@dptr,a
   2CC1 80 1C              9752 	sjmp	00107$
   2CC3                    9753 00106$:
                           9754 ;	..\COMMON\easyax5043.c:1839: AX5043_PLLRANGINGB = rng & 0x0F;
   2CC3 90 40 3B           9755 	mov	dptr,#_AX5043_PLLRANGINGB
   2CC6 74 0F              9756 	mov	a,#0x0F
   2CC8 55 2A              9757 	anl	a,_axradio_set_channel_rng_1_370
   2CCA F0                 9758 	movx	@dptr,a
                           9759 ;	..\COMMON\easyax5043.c:1840: AX5043_FREQB0 = f;
   2CCB 90 40 3F           9760 	mov	dptr,#_AX5043_FREQB0
   2CCE EB                 9761 	mov	a,r3
   2CCF F0                 9762 	movx	@dptr,a
                           9763 ;	..\COMMON\easyax5043.c:1841: AX5043_FREQB1 = f >> 8;
   2CD0 90 40 3E           9764 	mov	dptr,#_AX5043_FREQB1
   2CD3 EC                 9765 	mov	a,r4
   2CD4 F0                 9766 	movx	@dptr,a
                           9767 ;	..\COMMON\easyax5043.c:1842: AX5043_FREQB2 = f >> 16;
   2CD5 90 40 3D           9768 	mov	dptr,#_AX5043_FREQB2
   2CD8 ED                 9769 	mov	a,r5
   2CD9 F0                 9770 	movx	@dptr,a
                           9771 ;	..\COMMON\easyax5043.c:1843: AX5043_FREQB3 = f >> 24;
   2CDA 90 40 3C           9772 	mov	dptr,#_AX5043_FREQB3
   2CDD EF                 9773 	mov	a,r7
   2CDE F0                 9774 	movx	@dptr,a
   2CDF                    9775 00107$:
                           9776 ;	..\COMMON\easyax5043.c:1846: AX5043_PLLLOOP ^= 0x80;
   2CDF 90 40 30           9777 	mov	dptr,#_AX5043_PLLLOOP
   2CE2 E0                 9778 	movx	a,@dptr
   2CE3 64 80              9779 	xrl	a,#0x80
   2CE5 F0                 9780 	movx	@dptr,a
                           9781 ;	..\COMMON\easyax5043.c:1847: return AXRADIO_ERR_NOERROR;
   2CE6 75 82 00           9782 	mov	dpl,#0x00
   2CE9 22                 9783 	ret
                           9784 ;------------------------------------------------------------
                           9785 ;Allocation info for local variables in function 'axradio_get_channel'
                           9786 ;------------------------------------------------------------
                           9787 ;	..\COMMON\easyax5043.c:1850: uint8_t axradio_get_channel(void)
                           9788 ;	-----------------------------------------
                           9789 ;	 function axradio_get_channel
                           9790 ;	-----------------------------------------
   2CEA                    9791 _axradio_get_channel:
                           9792 ;	..\COMMON\easyax5043.c:1852: return axradio_curchannel;
   2CEA 90 00 09           9793 	mov	dptr,#_axradio_curchannel
   2CED E0                 9794 	movx	a,@dptr
   2CEE F5 82              9795 	mov	dpl,a
   2CF0 22                 9796 	ret
                           9797 ;------------------------------------------------------------
                           9798 ;Allocation info for local variables in function 'axradio_get_pllrange'
                           9799 ;------------------------------------------------------------
                           9800 ;	..\COMMON\easyax5043.c:1855: uint8_t axradio_get_pllrange(void)
                           9801 ;	-----------------------------------------
                           9802 ;	 function axradio_get_pllrange
                           9803 ;	-----------------------------------------
   2CF1                    9804 _axradio_get_pllrange:
                           9805 ;	..\COMMON\easyax5043.c:1857: return axradio_phy_chanpllrng_rx[axradio_curchannel] & 0x0F;
   2CF1 90 00 09           9806 	mov	dptr,#_axradio_curchannel
   2CF4 E0                 9807 	movx	a,@dptr
   2CF5 24 00              9808 	add	a,#_axradio_phy_chanpllrng_rx
   2CF7 F5 82              9809 	mov	dpl,a
   2CF9 E4                 9810 	clr	a
   2CFA 34 00              9811 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2CFC F5 83              9812 	mov	dph,a
   2CFE E0                 9813 	movx	a,@dptr
   2CFF FF                 9814 	mov	r7,a
   2D00 74 0F              9815 	mov	a,#0x0F
   2D02 5F                 9816 	anl	a,r7
   2D03 F5 82              9817 	mov	dpl,a
   2D05 22                 9818 	ret
                           9819 ;------------------------------------------------------------
                           9820 ;Allocation info for local variables in function 'axradio_get_pllrange_tx'
                           9821 ;------------------------------------------------------------
                           9822 ;	..\COMMON\easyax5043.c:1860: uint8_t axradio_get_pllrange_tx(void)
                           9823 ;	-----------------------------------------
                           9824 ;	 function axradio_get_pllrange_tx
                           9825 ;	-----------------------------------------
   2D06                    9826 _axradio_get_pllrange_tx:
                           9827 ;	..\COMMON\easyax5043.c:1862: return axradio_phy_chanpllrng_tx[axradio_curchannel] & 0x0F;
   2D06 90 00 09           9828 	mov	dptr,#_axradio_curchannel
   2D09 E0                 9829 	movx	a,@dptr
   2D0A 24 01              9830 	add	a,#_axradio_phy_chanpllrng_tx
   2D0C F5 82              9831 	mov	dpl,a
   2D0E E4                 9832 	clr	a
   2D0F 34 00              9833 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   2D11 F5 83              9834 	mov	dph,a
   2D13 E0                 9835 	movx	a,@dptr
   2D14 FF                 9836 	mov	r7,a
   2D15 74 0F              9837 	mov	a,#0x0F
   2D17 5F                 9838 	anl	a,r7
   2D18 F5 82              9839 	mov	dpl,a
   2D1A 22                 9840 	ret
                           9841 ;------------------------------------------------------------
                           9842 ;Allocation info for local variables in function 'axradio_set_curfreqoffset'
                           9843 ;------------------------------------------------------------
                           9844 ;offs                      Allocated to registers r4 r5 r6 r7 
                           9845 ;------------------------------------------------------------
                           9846 ;	..\COMMON\easyax5043.c:1865: static uint8_t axradio_set_curfreqoffset(int32_t offs)
                           9847 ;	-----------------------------------------
                           9848 ;	 function axradio_set_curfreqoffset
                           9849 ;	-----------------------------------------
   2D1B                    9850 _axradio_set_curfreqoffset:
   2D1B AC 82              9851 	mov	r4,dpl
   2D1D AD 83              9852 	mov	r5,dph
   2D1F AE F0              9853 	mov	r6,b
   2D21 FF                 9854 	mov	r7,a
                           9855 ;	..\COMMON\easyax5043.c:1867: axradio_curfreqoffset = offs;
   2D22 90 00 0A           9856 	mov	dptr,#_axradio_curfreqoffset
   2D25 EC                 9857 	mov	a,r4
   2D26 F0                 9858 	movx	@dptr,a
   2D27 A3                 9859 	inc	dptr
   2D28 ED                 9860 	mov	a,r5
   2D29 F0                 9861 	movx	@dptr,a
   2D2A A3                 9862 	inc	dptr
   2D2B EE                 9863 	mov	a,r6
   2D2C F0                 9864 	movx	@dptr,a
   2D2D A3                 9865 	inc	dptr
   2D2E EF                 9866 	mov	a,r7
   2D2F F0                 9867 	movx	@dptr,a
                           9868 ;	..\COMMON\easyax5043.c:1868: if (checksignedlimit32(offs, axradio_phy_maxfreqoffset))
   2D30 90 4B 7A           9869 	mov	dptr,#_axradio_phy_maxfreqoffset
   2D33 E4                 9870 	clr	a
   2D34 93                 9871 	movc	a,@a+dptr
   2D35 C0 E0              9872 	push	acc
   2D37 74 01              9873 	mov	a,#0x01
   2D39 93                 9874 	movc	a,@a+dptr
   2D3A C0 E0              9875 	push	acc
   2D3C 74 02              9876 	mov	a,#0x02
   2D3E 93                 9877 	movc	a,@a+dptr
   2D3F C0 E0              9878 	push	acc
   2D41 74 03              9879 	mov	a,#0x03
   2D43 93                 9880 	movc	a,@a+dptr
   2D44 C0 E0              9881 	push	acc
   2D46 8C 82              9882 	mov	dpl,r4
   2D48 8D 83              9883 	mov	dph,r5
   2D4A 8E F0              9884 	mov	b,r6
   2D4C EF                 9885 	mov	a,r7
   2D4D 12 44 CD           9886 	lcall	_checksignedlimit32
   2D50 AF 82              9887 	mov	r7,dpl
   2D52 E5 81              9888 	mov	a,sp
   2D54 24 FC              9889 	add	a,#0xfc
   2D56 F5 81              9890 	mov	sp,a
   2D58 EF                 9891 	mov	a,r7
   2D59 60 04              9892 	jz	00102$
                           9893 ;	..\COMMON\easyax5043.c:1869: return AXRADIO_ERR_NOERROR;
   2D5B 75 82 00           9894 	mov	dpl,#0x00
   2D5E 22                 9895 	ret
   2D5F                    9896 00102$:
                           9897 ;	..\COMMON\easyax5043.c:1870: if (axradio_curfreqoffset < 0)
   2D5F 90 00 0A           9898 	mov	dptr,#_axradio_curfreqoffset
   2D62 E0                 9899 	movx	a,@dptr
   2D63 FC                 9900 	mov	r4,a
   2D64 A3                 9901 	inc	dptr
   2D65 E0                 9902 	movx	a,@dptr
   2D66 FD                 9903 	mov	r5,a
   2D67 A3                 9904 	inc	dptr
   2D68 E0                 9905 	movx	a,@dptr
   2D69 FE                 9906 	mov	r6,a
   2D6A A3                 9907 	inc	dptr
   2D6B E0                 9908 	movx	a,@dptr
   2D6C FF                 9909 	mov	r7,a
   2D6D 30 E7 27           9910 	jnb	acc.7,00104$
                           9911 ;	..\COMMON\easyax5043.c:1871: axradio_curfreqoffset = -axradio_phy_maxfreqoffset;
   2D70 90 4B 7A           9912 	mov	dptr,#_axradio_phy_maxfreqoffset
   2D73 E4                 9913 	clr	a
   2D74 93                 9914 	movc	a,@a+dptr
   2D75 FC                 9915 	mov	r4,a
   2D76 74 01              9916 	mov	a,#0x01
   2D78 93                 9917 	movc	a,@a+dptr
   2D79 FD                 9918 	mov	r5,a
   2D7A 74 02              9919 	mov	a,#0x02
   2D7C 93                 9920 	movc	a,@a+dptr
   2D7D FE                 9921 	mov	r6,a
   2D7E 74 03              9922 	mov	a,#0x03
   2D80 93                 9923 	movc	a,@a+dptr
   2D81 FF                 9924 	mov	r7,a
   2D82 90 00 0A           9925 	mov	dptr,#_axradio_curfreqoffset
   2D85 C3                 9926 	clr	c
   2D86 E4                 9927 	clr	a
   2D87 9C                 9928 	subb	a,r4
   2D88 F0                 9929 	movx	@dptr,a
   2D89 E4                 9930 	clr	a
   2D8A 9D                 9931 	subb	a,r5
   2D8B A3                 9932 	inc	dptr
   2D8C F0                 9933 	movx	@dptr,a
   2D8D E4                 9934 	clr	a
   2D8E 9E                 9935 	subb	a,r6
   2D8F A3                 9936 	inc	dptr
   2D90 F0                 9937 	movx	@dptr,a
   2D91 E4                 9938 	clr	a
   2D92 9F                 9939 	subb	a,r7
   2D93 A3                 9940 	inc	dptr
   2D94 F0                 9941 	movx	@dptr,a
   2D95 80 20              9942 	sjmp	00105$
   2D97                    9943 00104$:
                           9944 ;	..\COMMON\easyax5043.c:1873: axradio_curfreqoffset = axradio_phy_maxfreqoffset;
   2D97 90 4B 7A           9945 	mov	dptr,#_axradio_phy_maxfreqoffset
   2D9A E4                 9946 	clr	a
   2D9B 93                 9947 	movc	a,@a+dptr
   2D9C FC                 9948 	mov	r4,a
   2D9D 74 01              9949 	mov	a,#0x01
   2D9F 93                 9950 	movc	a,@a+dptr
   2DA0 FD                 9951 	mov	r5,a
   2DA1 74 02              9952 	mov	a,#0x02
   2DA3 93                 9953 	movc	a,@a+dptr
   2DA4 FE                 9954 	mov	r6,a
   2DA5 74 03              9955 	mov	a,#0x03
   2DA7 93                 9956 	movc	a,@a+dptr
   2DA8 FF                 9957 	mov	r7,a
   2DA9 90 00 0A           9958 	mov	dptr,#_axradio_curfreqoffset
   2DAC EC                 9959 	mov	a,r4
   2DAD F0                 9960 	movx	@dptr,a
   2DAE A3                 9961 	inc	dptr
   2DAF ED                 9962 	mov	a,r5
   2DB0 F0                 9963 	movx	@dptr,a
   2DB1 A3                 9964 	inc	dptr
   2DB2 EE                 9965 	mov	a,r6
   2DB3 F0                 9966 	movx	@dptr,a
   2DB4 A3                 9967 	inc	dptr
   2DB5 EF                 9968 	mov	a,r7
   2DB6 F0                 9969 	movx	@dptr,a
   2DB7                    9970 00105$:
                           9971 ;	..\COMMON\easyax5043.c:1874: return AXRADIO_ERR_INVALID;
   2DB7 75 82 04           9972 	mov	dpl,#0x04
   2DBA 22                 9973 	ret
                           9974 ;------------------------------------------------------------
                           9975 ;Allocation info for local variables in function 'axradio_set_freqoffset'
                           9976 ;------------------------------------------------------------
                           9977 ;offs                      Allocated to registers r4 r5 r6 r7 
                           9978 ;ret                       Allocated to registers r7 
                           9979 ;ret2                      Allocated to registers r6 
                           9980 ;------------------------------------------------------------
                           9981 ;	..\COMMON\easyax5043.c:1877: uint8_t axradio_set_freqoffset(int32_t offs)
                           9982 ;	-----------------------------------------
                           9983 ;	 function axradio_set_freqoffset
                           9984 ;	-----------------------------------------
   2DBB                    9985 _axradio_set_freqoffset:
                           9986 ;	..\COMMON\easyax5043.c:1879: uint8_t __autodata ret = axradio_set_curfreqoffset(offs);
   2DBB 12 2D 1B           9987 	lcall	_axradio_set_curfreqoffset
   2DBE AF 82              9988 	mov	r7,dpl
                           9989 ;	..\COMMON\easyax5043.c:1881: uint8_t __autodata ret2 = axradio_set_channel(axradio_curchannel);
   2DC0 90 00 09           9990 	mov	dptr,#_axradio_curchannel
   2DC3 E0                 9991 	movx	a,@dptr
   2DC4 F5 82              9992 	mov	dpl,a
   2DC6 C0 07              9993 	push	ar7
   2DC8 12 2C 3B           9994 	lcall	_axradio_set_channel
   2DCB AE 82              9995 	mov	r6,dpl
   2DCD D0 07              9996 	pop	ar7
                           9997 ;	..\COMMON\easyax5043.c:1882: if (ret == AXRADIO_ERR_NOERROR)
   2DCF EF                 9998 	mov	a,r7
   2DD0 70 02              9999 	jnz	00102$
                          10000 ;	..\COMMON\easyax5043.c:1883: ret = ret2;
   2DD2 8E 07             10001 	mov	ar7,r6
   2DD4                   10002 00102$:
                          10003 ;	..\COMMON\easyax5043.c:1885: return ret;
   2DD4 8F 82             10004 	mov	dpl,r7
   2DD6 22                10005 	ret
                          10006 ;------------------------------------------------------------
                          10007 ;Allocation info for local variables in function 'axradio_get_freqoffset'
                          10008 ;------------------------------------------------------------
                          10009 ;	..\COMMON\easyax5043.c:1888: int32_t axradio_get_freqoffset(void)
                          10010 ;	-----------------------------------------
                          10011 ;	 function axradio_get_freqoffset
                          10012 ;	-----------------------------------------
   2DD7                   10013 _axradio_get_freqoffset:
                          10014 ;	..\COMMON\easyax5043.c:1890: return axradio_curfreqoffset;
   2DD7 90 00 0A          10015 	mov	dptr,#_axradio_curfreqoffset
   2DDA E0                10016 	movx	a,@dptr
   2DDB FC                10017 	mov	r4,a
   2DDC A3                10018 	inc	dptr
   2DDD E0                10019 	movx	a,@dptr
   2DDE FD                10020 	mov	r5,a
   2DDF A3                10021 	inc	dptr
   2DE0 E0                10022 	movx	a,@dptr
   2DE1 FE                10023 	mov	r6,a
   2DE2 A3                10024 	inc	dptr
   2DE3 E0                10025 	movx	a,@dptr
   2DE4 8C 82             10026 	mov	dpl,r4
   2DE6 8D 83             10027 	mov	dph,r5
   2DE8 8E F0             10028 	mov	b,r6
   2DEA 22                10029 	ret
                          10030 ;------------------------------------------------------------
                          10031 ;Allocation info for local variables in function 'axradio_set_local_address'
                          10032 ;------------------------------------------------------------
                          10033 ;addr                      Allocated to registers r5 r6 r7 
                          10034 ;------------------------------------------------------------
                          10035 ;	..\COMMON\easyax5043.c:1893: void axradio_set_local_address(const struct axradio_address_mask *addr)
                          10036 ;	-----------------------------------------
                          10037 ;	 function axradio_set_local_address
                          10038 ;	-----------------------------------------
   2DEB                   10039 _axradio_set_local_address:
   2DEB AD 82             10040 	mov	r5,dpl
   2DED AE 83             10041 	mov	r6,dph
   2DEF AF F0             10042 	mov	r7,b
                          10043 ;	..\COMMON\easyax5043.c:1895: memcpy_xdatageneric(&axradio_localaddr, addr, sizeof(axradio_localaddr));
   2DF1 8D 2A             10044 	mov	_memcpy_PARM_2,r5
   2DF3 8E 2B             10045 	mov	(_memcpy_PARM_2 + 1),r6
   2DF5 8F 2C             10046 	mov	(_memcpy_PARM_2 + 2),r7
   2DF7 75 2D 08          10047 	mov	_memcpy_PARM_3,#0x08
   2DFA 75 2E 00          10048 	mov	(_memcpy_PARM_3 + 1),#0x00
   2DFD 90 00 1E          10049 	mov	dptr,#_axradio_localaddr
   2E00 75 F0 00          10050 	mov	b,#0x00
   2E03 12 3E 26          10051 	lcall	_memcpy
                          10052 ;	..\COMMON\easyax5043.c:1896: axradio_setaddrregs();
   2E06 02 14 BE          10053 	ljmp	_axradio_setaddrregs
                          10054 ;------------------------------------------------------------
                          10055 ;Allocation info for local variables in function 'axradio_get_local_address'
                          10056 ;------------------------------------------------------------
                          10057 ;addr                      Allocated to registers r5 r6 r7 
                          10058 ;------------------------------------------------------------
                          10059 ;	..\COMMON\easyax5043.c:1899: void axradio_get_local_address(struct axradio_address_mask *addr)
                          10060 ;	-----------------------------------------
                          10061 ;	 function axradio_get_local_address
                          10062 ;	-----------------------------------------
   2E09                   10063 _axradio_get_local_address:
   2E09 AD 82             10064 	mov	r5,dpl
   2E0B AE 83             10065 	mov	r6,dph
   2E0D AF F0             10066 	mov	r7,b
                          10067 ;	..\COMMON\easyax5043.c:1901: memcpy_genericxdata(addr, &axradio_localaddr, sizeof(axradio_localaddr));
   2E0F 75 2A 1E          10068 	mov	_memcpy_PARM_2,#_axradio_localaddr
   2E12 75 2B 00          10069 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2E15 75 2C 00          10070 	mov	(_memcpy_PARM_2 + 2),#0x00
   2E18 75 2D 08          10071 	mov	_memcpy_PARM_3,#0x08
   2E1B 75 2E 00          10072 	mov	(_memcpy_PARM_3 + 1),#0x00
   2E1E 8D 82             10073 	mov	dpl,r5
   2E20 8E 83             10074 	mov	dph,r6
   2E22 8F F0             10075 	mov	b,r7
   2E24 02 3E 26          10076 	ljmp	_memcpy
                          10077 ;------------------------------------------------------------
                          10078 ;Allocation info for local variables in function 'axradio_set_default_remote_address'
                          10079 ;------------------------------------------------------------
                          10080 ;addr                      Allocated to registers r5 r6 r7 
                          10081 ;------------------------------------------------------------
                          10082 ;	..\COMMON\easyax5043.c:1904: void axradio_set_default_remote_address(const struct axradio_address *addr)
                          10083 ;	-----------------------------------------
                          10084 ;	 function axradio_set_default_remote_address
                          10085 ;	-----------------------------------------
   2E27                   10086 _axradio_set_default_remote_address:
   2E27 AD 82             10087 	mov	r5,dpl
   2E29 AE 83             10088 	mov	r6,dph
   2E2B AF F0             10089 	mov	r7,b
                          10090 ;	..\COMMON\easyax5043.c:1906: memcpy_xdatageneric(&axradio_default_remoteaddr, addr, sizeof(axradio_default_remoteaddr));
   2E2D 8D 2A             10091 	mov	_memcpy_PARM_2,r5
   2E2F 8E 2B             10092 	mov	(_memcpy_PARM_2 + 1),r6
   2E31 8F 2C             10093 	mov	(_memcpy_PARM_2 + 2),r7
   2E33 75 2D 04          10094 	mov	_memcpy_PARM_3,#0x04
   2E36 75 2E 00          10095 	mov	(_memcpy_PARM_3 + 1),#0x00
   2E39 90 00 26          10096 	mov	dptr,#_axradio_default_remoteaddr
   2E3C 75 F0 00          10097 	mov	b,#0x00
   2E3F 02 3E 26          10098 	ljmp	_memcpy
                          10099 ;------------------------------------------------------------
                          10100 ;Allocation info for local variables in function 'axradio_get_default_remote_address'
                          10101 ;------------------------------------------------------------
                          10102 ;addr                      Allocated to registers r5 r6 r7 
                          10103 ;------------------------------------------------------------
                          10104 ;	..\COMMON\easyax5043.c:1909: void axradio_get_default_remote_address(struct axradio_address *addr)
                          10105 ;	-----------------------------------------
                          10106 ;	 function axradio_get_default_remote_address
                          10107 ;	-----------------------------------------
   2E42                   10108 _axradio_get_default_remote_address:
   2E42 AD 82             10109 	mov	r5,dpl
   2E44 AE 83             10110 	mov	r6,dph
   2E46 AF F0             10111 	mov	r7,b
                          10112 ;	..\COMMON\easyax5043.c:1911: memcpy_genericxdata(addr, &axradio_default_remoteaddr, sizeof(axradio_default_remoteaddr));
   2E48 75 2A 26          10113 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   2E4B 75 2B 00          10114 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   2E4E 75 2C 00          10115 	mov	(_memcpy_PARM_2 + 2),#0x00
   2E51 75 2D 04          10116 	mov	_memcpy_PARM_3,#0x04
   2E54 75 2E 00          10117 	mov	(_memcpy_PARM_3 + 1),#0x00
   2E57 8D 82             10118 	mov	dpl,r5
   2E59 8E 83             10119 	mov	dph,r6
   2E5B 8F F0             10120 	mov	b,r7
   2E5D 02 3E 26          10121 	ljmp	_memcpy
                          10122 ;------------------------------------------------------------
                          10123 ;Allocation info for local variables in function 'axradio_transmit'
                          10124 ;------------------------------------------------------------
                          10125 ;pkt                       Allocated with name '_axradio_transmit_PARM_2'
                          10126 ;pktlen                    Allocated with name '_axradio_transmit_PARM_3'
                          10127 ;addr                      Allocated to registers r5 r6 r7 
                          10128 ;fifofree                  Allocated to registers r3 r4 
                          10129 ;i                         Allocated to registers r4 
                          10130 ;iesave                    Allocated to registers r4 
                          10131 ;len_byte                  Allocated to registers r6 
                          10132 ;------------------------------------------------------------
                          10133 ;	..\COMMON\easyax5043.c:1914: uint8_t axradio_transmit(const struct axradio_address *addr, const uint8_t *pkt, uint16_t pktlen)
                          10134 ;	-----------------------------------------
                          10135 ;	 function axradio_transmit
                          10136 ;	-----------------------------------------
   2E60                   10137 _axradio_transmit:
   2E60 AD 82             10138 	mov	r5,dpl
   2E62 AE 83             10139 	mov	r6,dph
   2E64 AF F0             10140 	mov	r7,b
                          10141 ;	..\COMMON\easyax5043.c:1916: switch (axradio_mode) {
   2E66 AC 0A             10142 	mov	r4,_axradio_mode
   2E68 BC 10 00          10143 	cjne	r4,#0x10,00217$
   2E6B                   10144 00217$:
   2E6B 50 03             10145 	jnc	00218$
   2E6D 02 31 C7          10146 	ljmp	00160$
   2E70                   10147 00218$:
   2E70 EC                10148 	mov	a,r4
   2E71 24 DE             10149 	add	a,#0xff - 0x21
   2E73 50 03             10150 	jnc	00219$
   2E75 02 31 C7          10151 	ljmp	00160$
   2E78                   10152 00219$:
   2E78 EC                10153 	mov	a,r4
   2E79 24 F0             10154 	add	a,#0xF0
   2E7B FC                10155 	mov	r4,a
   2E7C 24 09             10156 	add	a,#(00220$-3-.)
   2E7E 83                10157 	movc	a,@a+pc
   2E7F C0 E0             10158 	push	acc
   2E81 EC                10159 	mov	a,r4
   2E82 24 15             10160 	add	a,#(00221$-3-.)
   2E84 83                10161 	movc	a,@a+pc
   2E85 C0 E0             10162 	push	acc
   2E87 22                10163 	ret
   2E88                   10164 00220$:
   2E88 53                10165 	.db	00120$
   2E89 53                10166 	.db	00121$
   2E8A 53                10167 	.db	00122$
   2E8B 53                10168 	.db	00123$
   2E8C AC                10169 	.db	00101$
   2E8D AC                10170 	.db	00102$
   2E8E AC                10171 	.db	00103$
   2E8F C7                10172 	.db	00160$
   2E90 1A                10173 	.db	00113$
   2E91 1A                10174 	.db	00114$
   2E92 C7                10175 	.db	00160$
   2E93 C7                10176 	.db	00160$
   2E94 C7                10177 	.db	00160$
   2E95 C7                10178 	.db	00160$
   2E96 C7                10179 	.db	00160$
   2E97 C7                10180 	.db	00160$
   2E98 18                10181 	.db	00111$
   2E99 18                10182 	.db	00112$
   2E9A                   10183 00221$:
   2E9A 2F                10184 	.db	00120$>>8
   2E9B 2F                10185 	.db	00121$>>8
   2E9C 2F                10186 	.db	00122$>>8
   2E9D 2F                10187 	.db	00123$>>8
   2E9E 2E                10188 	.db	00101$>>8
   2E9F 2E                10189 	.db	00102$>>8
   2EA0 2E                10190 	.db	00103$>>8
   2EA1 31                10191 	.db	00160$>>8
   2EA2 2F                10192 	.db	00113$>>8
   2EA3 2F                10193 	.db	00114$>>8
   2EA4 31                10194 	.db	00160$>>8
   2EA5 31                10195 	.db	00160$>>8
   2EA6 31                10196 	.db	00160$>>8
   2EA7 31                10197 	.db	00160$>>8
   2EA8 31                10198 	.db	00160$>>8
   2EA9 31                10199 	.db	00160$>>8
   2EAA 2F                10200 	.db	00111$>>8
   2EAB 2F                10201 	.db	00112$>>8
                          10202 ;	..\COMMON\easyax5043.c:1917: case AXRADIO_MODE_STREAM_TRANSMIT:
   2EAC                   10203 00101$:
                          10204 ;	..\COMMON\easyax5043.c:1918: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2EAC                   10205 00102$:
                          10206 ;	..\COMMON\easyax5043.c:1919: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2EAC                   10207 00103$:
                          10208 ;	..\COMMON\easyax5043.c:1921: uint16_t __autodata fifofree = radio_read16((uint16_t)&AX5043_FIFOFREE1);
   2EAC 90 40 2C          10209 	mov	dptr,#_AX5043_FIFOFREE1
   2EAF 12 40 88          10210 	lcall	_radio_read16
   2EB2 AB 82             10211 	mov	r3,dpl
   2EB4 AC 83             10212 	mov	r4,dph
                          10213 ;	..\COMMON\easyax5043.c:1922: if (fifofree < pktlen + 3)
   2EB6 74 03             10214 	mov	a,#0x03
   2EB8 25 0F             10215 	add	a,_axradio_transmit_PARM_3
   2EBA F9                10216 	mov	r1,a
   2EBB E4                10217 	clr	a
   2EBC 35 10             10218 	addc	a,(_axradio_transmit_PARM_3 + 1)
   2EBE FA                10219 	mov	r2,a
   2EBF C3                10220 	clr	c
   2EC0 EB                10221 	mov	a,r3
   2EC1 99                10222 	subb	a,r1
   2EC2 EC                10223 	mov	a,r4
   2EC3 9A                10224 	subb	a,r2
   2EC4 50 04             10225 	jnc	00105$
                          10226 ;	..\COMMON\easyax5043.c:1923: return AXRADIO_ERR_INVALID;
   2EC6 75 82 04          10227 	mov	dpl,#0x04
   2EC9 22                10228 	ret
   2ECA                   10229 00105$:
                          10230 ;	..\COMMON\easyax5043.c:1925: if (pktlen) {
   2ECA E5 0F             10231 	mov	a,_axradio_transmit_PARM_3
   2ECC 45 10             10232 	orl	a,(_axradio_transmit_PARM_3 + 1)
   2ECE 60 2D             10233 	jz	00110$
                          10234 ;	..\COMMON\easyax5043.c:1926: uint8_t __autodata i = pktlen;
   2ED0 AC 0F             10235 	mov	r4,_axradio_transmit_PARM_3
                          10236 ;	..\COMMON\easyax5043.c:1927: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                          10237 ;	..\COMMON\easyax5043.c:1928: AX5043_FIFODATA = i + 1;
   2ED2 90 40 29          10238 	mov	dptr,#_AX5043_FIFODATA
   2ED5 74 E1             10239 	mov	a,#0xE1
   2ED7 F0                10240 	movx	@dptr,a
   2ED8 EC                10241 	mov	a,r4
   2ED9 04                10242 	inc	a
   2EDA F0                10243 	movx	@dptr,a
                          10244 ;	..\COMMON\easyax5043.c:1929: AX5043_FIFODATA = 0x08;
   2EDB 90 40 29          10245 	mov	dptr,#_AX5043_FIFODATA
   2EDE 74 08             10246 	mov	a,#0x08
   2EE0 F0                10247 	movx	@dptr,a
                          10248 ;	..\COMMON\easyax5043.c:1930: do {
   2EE1 A9 0C             10249 	mov	r1,_axradio_transmit_PARM_2
   2EE3 AA 0D             10250 	mov	r2,(_axradio_transmit_PARM_2 + 1)
   2EE5 AB 0E             10251 	mov	r3,(_axradio_transmit_PARM_2 + 2)
   2EE7                   10252 00106$:
                          10253 ;	..\COMMON\easyax5043.c:1931: AX5043_FIFODATA = *pkt++;
   2EE7 89 82             10254 	mov	dpl,r1
   2EE9 8A 83             10255 	mov	dph,r2
   2EEB 8B F0             10256 	mov	b,r3
   2EED 12 4A 8E          10257 	lcall	__gptrget
   2EF0 F8                10258 	mov	r0,a
   2EF1 A3                10259 	inc	dptr
   2EF2 A9 82             10260 	mov	r1,dpl
   2EF4 AA 83             10261 	mov	r2,dph
   2EF6 90 40 29          10262 	mov	dptr,#_AX5043_FIFODATA
   2EF9 E8                10263 	mov	a,r0
   2EFA F0                10264 	movx	@dptr,a
                          10265 ;	..\COMMON\easyax5043.c:1932: } while (--i);
   2EFB DC EA             10266 	djnz	r4,00106$
   2EFD                   10267 00110$:
                          10268 ;	..\COMMON\easyax5043.c:1934: AX5043_FIFOSTAT =  4; // FIFO commit
   2EFD 90 40 28          10269 	mov	dptr,#_AX5043_FIFOSTAT
   2F00 74 04             10270 	mov	a,#0x04
   2F02 F0                10271 	movx	@dptr,a
                          10272 ;	..\COMMON\easyax5043.c:1936: uint8_t __autodata iesave = IE & 0x80;
   2F03 74 80             10273 	mov	a,#0x80
   2F05 55 A8             10274 	anl	a,_IE
   2F07 FC                10275 	mov	r4,a
                          10276 ;	..\COMMON\easyax5043.c:1937: EA = 0;
   2F08 C2 AF             10277 	clr	_EA
                          10278 ;	..\COMMON\easyax5043.c:1938: AX5043_IRQMASK0 |= 0x08;
   2F0A 90 40 07          10279 	mov	dptr,#_AX5043_IRQMASK0
   2F0D E0                10280 	movx	a,@dptr
   2F0E 44 08             10281 	orl	a,#0x08
   2F10 F0                10282 	movx	@dptr,a
                          10283 ;	..\COMMON\easyax5043.c:1939: IE |= iesave;
   2F11 EC                10284 	mov	a,r4
   2F12 42 A8             10285 	orl	_IE,a
                          10286 ;	..\COMMON\easyax5043.c:1941: return AXRADIO_ERR_NOERROR;
   2F14 75 82 00          10287 	mov	dpl,#0x00
   2F17 22                10288 	ret
                          10289 ;	..\COMMON\easyax5043.c:1943: case AXRADIO_MODE_SYNC_MASTER:
   2F18                   10290 00111$:
                          10291 ;	..\COMMON\easyax5043.c:1944: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2F18                   10292 00112$:
                          10293 ;	..\COMMON\easyax5043.c:1945: goto dotx;
                          10294 ;	..\COMMON\easyax5043.c:1947: case AXRADIO_MODE_ASYNC_RECEIVE:
   2F18 80 44             10295 	sjmp	00126$
   2F1A                   10296 00113$:
                          10297 ;	..\COMMON\easyax5043.c:1948: case AXRADIO_MODE_WOR_RECEIVE:
   2F1A                   10298 00114$:
                          10299 ;	..\COMMON\easyax5043.c:1949: if (axradio_syncstate != syncstate_off)
   2F1A 90 00 04          10300 	mov	dptr,#_axradio_syncstate
   2F1D E0                10301 	movx	a,@dptr
   2F1E FC                10302 	mov	r4,a
   2F1F 60 04             10303 	jz	00116$
                          10304 ;	..\COMMON\easyax5043.c:1950: return AXRADIO_ERR_BUSY;
   2F21 75 82 02          10305 	mov	dpl,#0x02
   2F24 22                10306 	ret
   2F25                   10307 00116$:
                          10308 ;	..\COMMON\easyax5043.c:1951: AX5043_IRQMASK1 = 0x00;
   2F25 90 40 06          10309 	mov	dptr,#_AX5043_IRQMASK1
                          10310 ;	..\COMMON\easyax5043.c:1952: AX5043_IRQMASK0 = 0x00;
   2F28 E4                10311 	clr	a
   2F29 F0                10312 	movx	@dptr,a
   2F2A 90 40 07          10313 	mov	dptr,#_AX5043_IRQMASK0
   2F2D F0                10314 	movx	@dptr,a
                          10315 ;	..\COMMON\easyax5043.c:1953: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   2F2E 90 40 02          10316 	mov	dptr,#_AX5043_PWRMODE
   2F31 74 05             10317 	mov	a,#0x05
   2F33 F0                10318 	movx	@dptr,a
                          10319 ;	..\COMMON\easyax5043.c:1954: AX5043_FIFOSTAT = 3;
   2F34 90 40 28          10320 	mov	dptr,#_AX5043_FIFOSTAT
   2F37 74 03             10321 	mov	a,#0x03
   2F39 F0                10322 	movx	@dptr,a
                          10323 ;	..\COMMON\easyax5043.c:1955: while (AX5043_POWSTAT & 0x08);
   2F3A                   10324 00117$:
   2F3A 90 40 03          10325 	mov	dptr,#_AX5043_POWSTAT
   2F3D E0                10326 	movx	a,@dptr
   2F3E FC                10327 	mov	r4,a
   2F3F 20 E3 F8          10328 	jb	acc.3,00117$
                          10329 ;	..\COMMON\easyax5043.c:1956: ax5043_init_registers_tx();
   2F42 C0 07             10330 	push	ar7
   2F44 C0 06             10331 	push	ar6
   2F46 C0 05             10332 	push	ar5
   2F48 12 08 CD          10333 	lcall	_ax5043_init_registers_tx
   2F4B D0 05             10334 	pop	ar5
   2F4D D0 06             10335 	pop	ar6
   2F4F D0 07             10336 	pop	ar7
                          10337 ;	..\COMMON\easyax5043.c:1957: goto dotx;
                          10338 ;	..\COMMON\easyax5043.c:1959: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2F51 80 0B             10339 	sjmp	00126$
   2F53                   10340 00120$:
                          10341 ;	..\COMMON\easyax5043.c:1960: case AXRADIO_MODE_WOR_TRANSMIT:
   2F53                   10342 00121$:
                          10343 ;	..\COMMON\easyax5043.c:1961: case AXRADIO_MODE_ACK_TRANSMIT:
   2F53                   10344 00122$:
                          10345 ;	..\COMMON\easyax5043.c:1962: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2F53                   10346 00123$:
                          10347 ;	..\COMMON\easyax5043.c:1963: if (axradio_syncstate != syncstate_off)
   2F53 90 00 04          10348 	mov	dptr,#_axradio_syncstate
   2F56 E0                10349 	movx	a,@dptr
   2F57 FC                10350 	mov	r4,a
   2F58 60 04             10351 	jz	00126$
                          10352 ;	..\COMMON\easyax5043.c:1964: return AXRADIO_ERR_BUSY;
   2F5A 75 82 02          10353 	mov	dpl,#0x02
   2F5D 22                10354 	ret
                          10355 ;	..\COMMON\easyax5043.c:1965: dotx:
   2F5E                   10356 00126$:
                          10357 ;	..\COMMON\easyax5043.c:1966: axradio_ack_count = axradio_framing_ack_retransmissions;
   2F5E 90 4B AB          10358 	mov	dptr,#_axradio_framing_ack_retransmissions
   2F61 E4                10359 	clr	a
   2F62 93                10360 	movc	a,@a+dptr
   2F63 90 00 0E          10361 	mov	dptr,#_axradio_ack_count
   2F66 F0                10362 	movx	@dptr,a
                          10363 ;	..\COMMON\easyax5043.c:1967: ++axradio_ack_seqnr;
   2F67 90 00 0F          10364 	mov	dptr,#_axradio_ack_seqnr
   2F6A E0                10365 	movx	a,@dptr
   2F6B 24 01             10366 	add	a,#0x01
   2F6D F0                10367 	movx	@dptr,a
                          10368 ;	..\COMMON\easyax5043.c:1968: axradio_txbuffer_len = pktlen + axradio_framing_maclen;
   2F6E 90 4B 94          10369 	mov	dptr,#_axradio_framing_maclen
   2F71 E4                10370 	clr	a
   2F72 93                10371 	movc	a,@a+dptr
   2F73 FC                10372 	mov	r4,a
   2F74 7B 00             10373 	mov	r3,#0x00
   2F76 25 0F             10374 	add	a,_axradio_transmit_PARM_3
   2F78 FA                10375 	mov	r2,a
   2F79 EB                10376 	mov	a,r3
   2F7A 35 10             10377 	addc	a,(_axradio_transmit_PARM_3 + 1)
   2F7C FB                10378 	mov	r3,a
   2F7D 90 00 05          10379 	mov	dptr,#_axradio_txbuffer_len
   2F80 EA                10380 	mov	a,r2
   2F81 F0                10381 	movx	@dptr,a
   2F82 A3                10382 	inc	dptr
   2F83 EB                10383 	mov	a,r3
   2F84 F0                10384 	movx	@dptr,a
                          10385 ;	..\COMMON\easyax5043.c:1969: if (axradio_txbuffer_len > sizeof(axradio_txbuffer))
   2F85 C3                10386 	clr	c
   2F86 74 04             10387 	mov	a,#0x04
   2F88 9A                10388 	subb	a,r2
   2F89 74 01             10389 	mov	a,#0x01
   2F8B 9B                10390 	subb	a,r3
   2F8C 50 04             10391 	jnc	00128$
                          10392 ;	..\COMMON\easyax5043.c:1970: return AXRADIO_ERR_INVALID;
   2F8E 75 82 04          10393 	mov	dpl,#0x04
   2F91 22                10394 	ret
   2F92                   10395 00128$:
                          10396 ;	..\COMMON\easyax5043.c:1971: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   2F92 8C 2B             10397 	mov	_memset_PARM_3,r4
   2F94 75 2C 00          10398 	mov	(_memset_PARM_3 + 1),#0x00
   2F97 75 2A 00          10399 	mov	_memset_PARM_2,#0x00
   2F9A 90 00 2A          10400 	mov	dptr,#_axradio_txbuffer
   2F9D 75 F0 00          10401 	mov	b,#0x00
   2FA0 C0 07             10402 	push	ar7
   2FA2 C0 06             10403 	push	ar6
   2FA4 C0 05             10404 	push	ar5
   2FA6 12 3E 07          10405 	lcall	_memset
                          10406 ;	..\COMMON\easyax5043.c:1972: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_maclen], pkt, pktlen);
   2FA9 90 4B 94          10407 	mov	dptr,#_axradio_framing_maclen
   2FAC E4                10408 	clr	a
   2FAD 93                10409 	movc	a,@a+dptr
   2FAE 24 2A             10410 	add	a,#_axradio_txbuffer
   2FB0 FC                10411 	mov	r4,a
   2FB1 E4                10412 	clr	a
   2FB2 34 00             10413 	addc	a,#(_axradio_txbuffer >> 8)
   2FB4 FB                10414 	mov	r3,a
   2FB5 7A 00             10415 	mov	r2,#0x00
   2FB7 85 0C 2A          10416 	mov	_memcpy_PARM_2,_axradio_transmit_PARM_2
   2FBA 85 0D 2B          10417 	mov	(_memcpy_PARM_2 + 1),(_axradio_transmit_PARM_2 + 1)
   2FBD 85 0E 2C          10418 	mov	(_memcpy_PARM_2 + 2),(_axradio_transmit_PARM_2 + 2)
   2FC0 85 0F 2D          10419 	mov	_memcpy_PARM_3,_axradio_transmit_PARM_3
   2FC3 85 10 2E          10420 	mov	(_memcpy_PARM_3 + 1),(_axradio_transmit_PARM_3 + 1)
   2FC6 8C 82             10421 	mov	dpl,r4
   2FC8 8B 83             10422 	mov	dph,r3
   2FCA 8A F0             10423 	mov	b,r2
   2FCC 12 3E 26          10424 	lcall	_memcpy
   2FCF D0 05             10425 	pop	ar5
   2FD1 D0 06             10426 	pop	ar6
   2FD3 D0 07             10427 	pop	ar7
                          10428 ;	..\COMMON\easyax5043.c:1973: if (axradio_framing_ack_seqnrpos != 0xff)
   2FD5 90 4B AC          10429 	mov	dptr,#_axradio_framing_ack_seqnrpos
   2FD8 E4                10430 	clr	a
   2FD9 93                10431 	movc	a,@a+dptr
   2FDA FC                10432 	mov	r4,a
   2FDB BC FF 02          10433 	cjne	r4,#0xFF,00230$
   2FDE 80 12             10434 	sjmp	00130$
   2FE0                   10435 00230$:
                          10436 ;	..\COMMON\easyax5043.c:1974: axradio_txbuffer[axradio_framing_ack_seqnrpos] = axradio_ack_seqnr;
   2FE0 EC                10437 	mov	a,r4
   2FE1 24 2A             10438 	add	a,#_axradio_txbuffer
   2FE3 FC                10439 	mov	r4,a
   2FE4 E4                10440 	clr	a
   2FE5 34 00             10441 	addc	a,#(_axradio_txbuffer >> 8)
   2FE7 FB                10442 	mov	r3,a
   2FE8 90 00 0F          10443 	mov	dptr,#_axradio_ack_seqnr
   2FEB E0                10444 	movx	a,@dptr
   2FEC FA                10445 	mov	r2,a
   2FED 8C 82             10446 	mov	dpl,r4
   2FEF 8B 83             10447 	mov	dph,r3
   2FF1 F0                10448 	movx	@dptr,a
   2FF2                   10449 00130$:
                          10450 ;	..\COMMON\easyax5043.c:1975: if (axradio_framing_destaddrpos != 0xff)
   2FF2 90 4B 96          10451 	mov	dptr,#_axradio_framing_destaddrpos
   2FF5 E4                10452 	clr	a
   2FF6 93                10453 	movc	a,@a+dptr
   2FF7 FC                10454 	mov	r4,a
   2FF8 BC FF 02          10455 	cjne	r4,#0xFF,00231$
   2FFB 80 24             10456 	sjmp	00132$
   2FFD                   10457 00231$:
                          10458 ;	..\COMMON\easyax5043.c:1976: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_destaddrpos], &addr->addr, axradio_framing_addrlen);
   2FFD EC                10459 	mov	a,r4
   2FFE 24 2A             10460 	add	a,#_axradio_txbuffer
   3000 FC                10461 	mov	r4,a
   3001 E4                10462 	clr	a
   3002 34 00             10463 	addc	a,#(_axradio_txbuffer >> 8)
   3004 FB                10464 	mov	r3,a
   3005 7A 00             10465 	mov	r2,#0x00
   3007 8D 2A             10466 	mov	_memcpy_PARM_2,r5
   3009 8E 2B             10467 	mov	(_memcpy_PARM_2 + 1),r6
   300B 8F 2C             10468 	mov	(_memcpy_PARM_2 + 2),r7
   300D 90 4B 95          10469 	mov	dptr,#_axradio_framing_addrlen
   3010 E4                10470 	clr	a
   3011 93                10471 	movc	a,@a+dptr
   3012 FF                10472 	mov	r7,a
   3013 8F 2D             10473 	mov	_memcpy_PARM_3,r7
   3015 75 2E 00          10474 	mov	(_memcpy_PARM_3 + 1),#0x00
   3018 8C 82             10475 	mov	dpl,r4
   301A 8B 83             10476 	mov	dph,r3
   301C 8A F0             10477 	mov	b,r2
   301E 12 3E 26          10478 	lcall	_memcpy
   3021                   10479 00132$:
                          10480 ;	..\COMMON\easyax5043.c:1977: if (axradio_framing_sourceaddrpos != 0xff)
   3021 90 4B 97          10481 	mov	dptr,#_axradio_framing_sourceaddrpos
   3024 E4                10482 	clr	a
   3025 93                10483 	movc	a,@a+dptr
   3026 FF                10484 	mov	r7,a
   3027 BF FF 02          10485 	cjne	r7,#0xFF,00232$
   302A 80 27             10486 	sjmp	00134$
   302C                   10487 00232$:
                          10488 ;	..\COMMON\easyax5043.c:1978: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   302C EF                10489 	mov	a,r7
   302D 24 2A             10490 	add	a,#_axradio_txbuffer
   302F FF                10491 	mov	r7,a
   3030 E4                10492 	clr	a
   3031 34 00             10493 	addc	a,#(_axradio_txbuffer >> 8)
   3033 FE                10494 	mov	r6,a
   3034 7D 00             10495 	mov	r5,#0x00
   3036 75 2A 1E          10496 	mov	_memcpy_PARM_2,#_axradio_localaddr
   3039 75 2B 00          10497 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   303C 75 2C 00          10498 	mov	(_memcpy_PARM_2 + 2),#0x00
   303F 90 4B 95          10499 	mov	dptr,#_axradio_framing_addrlen
   3042 E4                10500 	clr	a
   3043 93                10501 	movc	a,@a+dptr
   3044 FC                10502 	mov	r4,a
   3045 8C 2D             10503 	mov	_memcpy_PARM_3,r4
   3047 75 2E 00          10504 	mov	(_memcpy_PARM_3 + 1),#0x00
   304A 8F 82             10505 	mov	dpl,r7
   304C 8E 83             10506 	mov	dph,r6
   304E 8D F0             10507 	mov	b,r5
   3050 12 3E 26          10508 	lcall	_memcpy
   3053                   10509 00134$:
                          10510 ;	..\COMMON\easyax5043.c:1979: if (axradio_framing_lenmask) {
   3053 90 4B 9A          10511 	mov	dptr,#_axradio_framing_lenmask
   3056 E4                10512 	clr	a
   3057 93                10513 	movc	a,@a+dptr
   3058 FF                10514 	mov	r7,a
   3059 60 30             10515 	jz	00136$
                          10516 ;	..\COMMON\easyax5043.c:1980: uint8_t __autodata len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   305B 90 00 05          10517 	mov	dptr,#_axradio_txbuffer_len
   305E E0                10518 	movx	a,@dptr
   305F FD                10519 	mov	r5,a
   3060 A3                10520 	inc	dptr
   3061 E0                10521 	movx	a,@dptr
   3062 90 4B 99          10522 	mov	dptr,#_axradio_framing_lenoffs
   3065 E4                10523 	clr	a
   3066 93                10524 	movc	a,@a+dptr
   3067 FE                10525 	mov	r6,a
   3068 ED                10526 	mov	a,r5
   3069 C3                10527 	clr	c
   306A 9E                10528 	subb	a,r6
   306B 5F                10529 	anl	a,r7
   306C FE                10530 	mov	r6,a
                          10531 ;	..\COMMON\easyax5043.c:1981: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   306D 90 4B 98          10532 	mov	dptr,#_axradio_framing_lenpos
   3070 E4                10533 	clr	a
   3071 93                10534 	movc	a,@a+dptr
   3072 24 2A             10535 	add	a,#_axradio_txbuffer
   3074 FD                10536 	mov	r5,a
   3075 E4                10537 	clr	a
   3076 34 00             10538 	addc	a,#(_axradio_txbuffer >> 8)
   3078 FC                10539 	mov	r4,a
   3079 8D 82             10540 	mov	dpl,r5
   307B 8C 83             10541 	mov	dph,r4
   307D E0                10542 	movx	a,@dptr
   307E FB                10543 	mov	r3,a
   307F EF                10544 	mov	a,r7
   3080 F4                10545 	cpl	a
   3081 FF                10546 	mov	r7,a
   3082 5B                10547 	anl	a,r3
   3083 42 06             10548 	orl	ar6,a
   3085 8D 82             10549 	mov	dpl,r5
   3087 8C 83             10550 	mov	dph,r4
   3089 EE                10551 	mov	a,r6
   308A F0                10552 	movx	@dptr,a
   308B                   10553 00136$:
                          10554 ;	..\COMMON\easyax5043.c:1983: if (axradio_framing_swcrclen) {
   308B 90 4B 9B          10555 	mov	dptr,#_axradio_framing_swcrclen
   308E E4                10556 	clr	a
   308F 93                10557 	movc	a,@a+dptr
   3090 FF                10558 	mov	r7,a
   3091 60 2E             10559 	jz	00138$
                          10560 ;	..\COMMON\easyax5043.c:1984: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   3093 90 00 05          10561 	mov	dptr,#_axradio_txbuffer_len
   3096 E0                10562 	movx	a,@dptr
   3097 C0 E0             10563 	push	acc
   3099 A3                10564 	inc	dptr
   309A E0                10565 	movx	a,@dptr
   309B C0 E0             10566 	push	acc
   309D 90 00 2A          10567 	mov	dptr,#_axradio_txbuffer
   30A0 12 06 74          10568 	lcall	_axradio_framing_append_crc
   30A3 15 81             10569 	dec	sp
   30A5 15 81             10570 	dec	sp
                          10571 ;	..\COMMON\easyax5043.c:1985: axradio_txbuffer_len += axradio_framing_swcrclen;
   30A7 90 4B 9B          10572 	mov	dptr,#_axradio_framing_swcrclen
   30AA E4                10573 	clr	a
   30AB 93                10574 	movc	a,@a+dptr
   30AC FF                10575 	mov	r7,a
   30AD 7E 00             10576 	mov	r6,#0x00
   30AF 90 00 05          10577 	mov	dptr,#_axradio_txbuffer_len
   30B2 E0                10578 	movx	a,@dptr
   30B3 FC                10579 	mov	r4,a
   30B4 A3                10580 	inc	dptr
   30B5 E0                10581 	movx	a,@dptr
   30B6 FD                10582 	mov	r5,a
   30B7 90 00 05          10583 	mov	dptr,#_axradio_txbuffer_len
   30BA EF                10584 	mov	a,r7
   30BB 2C                10585 	add	a,r4
   30BC F0                10586 	movx	@dptr,a
   30BD EE                10587 	mov	a,r6
   30BE 3D                10588 	addc	a,r5
   30BF A3                10589 	inc	dptr
   30C0 F0                10590 	movx	@dptr,a
   30C1                   10591 00138$:
                          10592 ;	..\COMMON\easyax5043.c:1987: if (axradio_phy_pn9)
   30C1 90 4B 73          10593 	mov	dptr,#_axradio_phy_pn9
   30C4 E4                10594 	clr	a
   30C5 93                10595 	movc	a,@a+dptr
   30C6 FF                10596 	mov	r7,a
   30C7 60 2F             10597 	jz	00140$
                          10598 ;	..\COMMON\easyax5043.c:1988: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   30C9 90 40 11          10599 	mov	dptr,#_AX5043_ENCODING
   30CC E0                10600 	movx	a,@dptr
   30CD FF                10601 	mov	r7,a
   30CE 53 07 01          10602 	anl	ar7,#0x01
   30D1 C3                10603 	clr	c
   30D2 E4                10604 	clr	a
   30D3 9F                10605 	subb	a,r7
   30D4 FF                10606 	mov	r7,a
   30D5 C0 07             10607 	push	ar7
   30D7 74 FF             10608 	mov	a,#0xFF
   30D9 C0 E0             10609 	push	acc
   30DB 74 01             10610 	mov	a,#0x01
   30DD C0 E0             10611 	push	acc
   30DF 90 00 05          10612 	mov	dptr,#_axradio_txbuffer_len
   30E2 E0                10613 	movx	a,@dptr
   30E3 C0 E0             10614 	push	acc
   30E5 A3                10615 	inc	dptr
   30E6 E0                10616 	movx	a,@dptr
   30E7 C0 E0             10617 	push	acc
   30E9 90 00 2A          10618 	mov	dptr,#_axradio_txbuffer
   30EC 75 F0 00          10619 	mov	b,#0x00
   30EF 12 3F 76          10620 	lcall	_pn9_buffer
   30F2 E5 81             10621 	mov	a,sp
   30F4 24 FB             10622 	add	a,#0xfb
   30F6 F5 81             10623 	mov	sp,a
   30F8                   10624 00140$:
                          10625 ;	..\COMMON\easyax5043.c:1989: if (axradio_mode == AXRADIO_MODE_SYNC_MASTER ||
   30F8 74 20             10626 	mov	a,#0x20
   30FA B5 0A 02          10627 	cjne	a,_axradio_mode,00236$
   30FD 80 05             10628 	sjmp	00141$
   30FF                   10629 00236$:
                          10630 ;	..\COMMON\easyax5043.c:1990: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   30FF 74 21             10631 	mov	a,#0x21
   3101 B5 0A 04          10632 	cjne	a,_axradio_mode,00142$
   3104                   10633 00141$:
                          10634 ;	..\COMMON\easyax5043.c:1991: return AXRADIO_ERR_NOERROR;
   3104 75 82 00          10635 	mov	dpl,#0x00
   3107 22                10636 	ret
   3108                   10637 00142$:
                          10638 ;	..\COMMON\easyax5043.c:1992: if (axradio_mode == AXRADIO_MODE_WOR_TRANSMIT ||
   3108 74 11             10639 	mov	a,#0x11
   310A B5 0A 02          10640 	cjne	a,_axradio_mode,00239$
   310D 80 05             10641 	sjmp	00144$
   310F                   10642 00239$:
                          10643 ;	..\COMMON\easyax5043.c:1993: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT)
   310F 74 13             10644 	mov	a,#0x13
   3111 B5 0A 14          10645 	cjne	a,_axradio_mode,00145$
   3114                   10646 00144$:
                          10647 ;	..\COMMON\easyax5043.c:1994: axradio_txbuffer_cnt = axradio_phy_preamble_wor_longlen;
   3114 90 4B 88          10648 	mov	dptr,#_axradio_phy_preamble_wor_longlen
   3117 E4                10649 	clr	a
   3118 93                10650 	movc	a,@a+dptr
   3119 FE                10651 	mov	r6,a
   311A 74 01             10652 	mov	a,#0x01
   311C 93                10653 	movc	a,@a+dptr
   311D FF                10654 	mov	r7,a
   311E 90 00 07          10655 	mov	dptr,#_axradio_txbuffer_cnt
   3121 EE                10656 	mov	a,r6
   3122 F0                10657 	movx	@dptr,a
   3123 A3                10658 	inc	dptr
   3124 EF                10659 	mov	a,r7
   3125 F0                10660 	movx	@dptr,a
   3126 80 12             10661 	sjmp	00146$
   3128                   10662 00145$:
                          10663 ;	..\COMMON\easyax5043.c:1996: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   3128 90 4B 8C          10664 	mov	dptr,#_axradio_phy_preamble_longlen
   312B E4                10665 	clr	a
   312C 93                10666 	movc	a,@a+dptr
   312D FE                10667 	mov	r6,a
   312E 74 01             10668 	mov	a,#0x01
   3130 93                10669 	movc	a,@a+dptr
   3131 FF                10670 	mov	r7,a
   3132 90 00 07          10671 	mov	dptr,#_axradio_txbuffer_cnt
   3135 EE                10672 	mov	a,r6
   3136 F0                10673 	movx	@dptr,a
   3137 A3                10674 	inc	dptr
   3138 EF                10675 	mov	a,r7
   3139 F0                10676 	movx	@dptr,a
   313A                   10677 00146$:
                          10678 ;	..\COMMON\easyax5043.c:1997: if (axradio_phy_lbt_retries) {
   313A 90 4B 84          10679 	mov	dptr,#_axradio_phy_lbt_retries
   313D E4                10680 	clr	a
   313E 93                10681 	movc	a,@a+dptr
   313F FF                10682 	mov	r7,a
   3140 60 78             10683 	jz	00159$
                          10684 ;	..\COMMON\easyax5043.c:1998: switch (axradio_mode) {
   3142 AF 0A             10685 	mov	r7,_axradio_mode
   3144 BF 10 02          10686 	cjne	r7,#0x10,00243$
   3147 80 21             10687 	sjmp	00155$
   3149                   10688 00243$:
   3149 BF 11 02          10689 	cjne	r7,#0x11,00244$
   314C 80 1C             10690 	sjmp	00155$
   314E                   10691 00244$:
   314E BF 12 02          10692 	cjne	r7,#0x12,00245$
   3151 80 17             10693 	sjmp	00155$
   3153                   10694 00245$:
   3153 BF 13 02          10695 	cjne	r7,#0x13,00246$
   3156 80 12             10696 	sjmp	00155$
   3158                   10697 00246$:
   3158 BF 18 02          10698 	cjne	r7,#0x18,00247$
   315B 80 0D             10699 	sjmp	00155$
   315D                   10700 00247$:
   315D BF 19 02          10701 	cjne	r7,#0x19,00248$
   3160 80 08             10702 	sjmp	00155$
   3162                   10703 00248$:
   3162 BF 1A 02          10704 	cjne	r7,#0x1A,00249$
   3165 80 03             10705 	sjmp	00155$
   3167                   10706 00249$:
   3167 BF 1B 50          10707 	cjne	r7,#0x1B,00159$
                          10708 ;	..\COMMON\easyax5043.c:2006: case AXRADIO_MODE_ACK_RECEIVE:
   316A                   10709 00155$:
                          10710 ;	..\COMMON\easyax5043.c:2007: ax5043_off_xtal();
   316A 12 14 76          10711 	lcall	_ax5043_off_xtal
                          10712 ;	..\COMMON\easyax5043.c:2008: ax5043_init_registers_rx();
   316D 12 09 02          10713 	lcall	_ax5043_init_registers_rx
                          10714 ;	..\COMMON\easyax5043.c:2009: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   3170 90 4B 7F          10715 	mov	dptr,#_axradio_phy_rssireference
   3173 E4                10716 	clr	a
   3174 93                10717 	movc	a,@a+dptr
   3175 90 42 2C          10718 	mov	dptr,#_AX5043_RSSIREFERENCE
   3178 F0                10719 	movx	@dptr,a
                          10720 ;	..\COMMON\easyax5043.c:2010: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   3179 90 40 02          10721 	mov	dptr,#_AX5043_PWRMODE
   317C 74 09             10722 	mov	a,#0x09
   317E F0                10723 	movx	@dptr,a
                          10724 ;	..\COMMON\easyax5043.c:2011: axradio_ack_count = axradio_phy_lbt_retries;
   317F 90 4B 84          10725 	mov	dptr,#_axradio_phy_lbt_retries
   3182 E4                10726 	clr	a
   3183 93                10727 	movc	a,@a+dptr
   3184 90 00 0E          10728 	mov	dptr,#_axradio_ack_count
   3187 F0                10729 	movx	@dptr,a
                          10730 ;	..\COMMON\easyax5043.c:2012: axradio_syncstate = syncstate_lbt;
   3188 90 00 04          10731 	mov	dptr,#_axradio_syncstate
   318B 74 01             10732 	mov	a,#0x01
   318D F0                10733 	movx	@dptr,a
                          10734 ;	..\COMMON\easyax5043.c:2013: wtimer_remove(&axradio_timer);
   318E 90 02 89          10735 	mov	dptr,#_axradio_timer
   3191 12 46 8F          10736 	lcall	_wtimer_remove
                          10737 ;	..\COMMON\easyax5043.c:2014: axradio_timer.time = axradio_phy_cs_period;
   3194 90 4B 81          10738 	mov	dptr,#_axradio_phy_cs_period
   3197 E4                10739 	clr	a
   3198 93                10740 	movc	a,@a+dptr
   3199 FE                10741 	mov	r6,a
   319A 74 01             10742 	mov	a,#0x01
   319C 93                10743 	movc	a,@a+dptr
   319D FF                10744 	mov	r7,a
   319E 7D 00             10745 	mov	r5,#0x00
   31A0 7C 00             10746 	mov	r4,#0x00
   31A2 90 02 8D          10747 	mov	dptr,#(_axradio_timer + 0x0004)
   31A5 EE                10748 	mov	a,r6
   31A6 F0                10749 	movx	@dptr,a
   31A7 A3                10750 	inc	dptr
   31A8 EF                10751 	mov	a,r7
   31A9 F0                10752 	movx	@dptr,a
   31AA A3                10753 	inc	dptr
   31AB ED                10754 	mov	a,r5
   31AC F0                10755 	movx	@dptr,a
   31AD A3                10756 	inc	dptr
   31AE EC                10757 	mov	a,r4
   31AF F0                10758 	movx	@dptr,a
                          10759 ;	..\COMMON\easyax5043.c:2015: wtimer0_addrelative(&axradio_timer);
   31B0 90 02 89          10760 	mov	dptr,#_axradio_timer
   31B3 12 3E 95          10761 	lcall	_wtimer0_addrelative
                          10762 ;	..\COMMON\easyax5043.c:2016: return AXRADIO_ERR_NOERROR;
   31B6 75 82 00          10763 	mov	dpl,#0x00
                          10764 ;	..\COMMON\easyax5043.c:2020: }
   31B9 22                10765 	ret
   31BA                   10766 00159$:
                          10767 ;	..\COMMON\easyax5043.c:2022: axradio_syncstate = syncstate_asynctx;
   31BA 90 00 04          10768 	mov	dptr,#_axradio_syncstate
   31BD 74 02             10769 	mov	a,#0x02
   31BF F0                10770 	movx	@dptr,a
                          10771 ;	..\COMMON\easyax5043.c:2023: ax5043_prepare_tx();
   31C0 12 14 47          10772 	lcall	_ax5043_prepare_tx
                          10773 ;	..\COMMON\easyax5043.c:2024: return AXRADIO_ERR_NOERROR;
   31C3 75 82 00          10774 	mov	dpl,#0x00
                          10775 ;	..\COMMON\easyax5043.c:2026: default:
   31C6 22                10776 	ret
   31C7                   10777 00160$:
                          10778 ;	..\COMMON\easyax5043.c:2027: return AXRADIO_ERR_NOTSUPPORTED;
   31C7 75 82 01          10779 	mov	dpl,#0x01
                          10780 ;	..\COMMON\easyax5043.c:2028: }
   31CA 22                10781 	ret
                          10782 ;------------------------------------------------------------
                          10783 ;Allocation info for local variables in function 'axradio_set_paramsets'
                          10784 ;------------------------------------------------------------
                          10785 ;val                       Allocated to registers r7 
                          10786 ;------------------------------------------------------------
                          10787 ;	..\COMMON\easyax5043.c:2031: static __reentrantb uint8_t axradio_set_paramsets(uint8_t val) __reentrant
                          10788 ;	-----------------------------------------
                          10789 ;	 function axradio_set_paramsets
                          10790 ;	-----------------------------------------
   31CB                   10791 _axradio_set_paramsets:
   31CB AF 82             10792 	mov	r7,dpl
                          10793 ;	..\COMMON\easyax5043.c:2033: if (axradio_mode != AXRADIO_MODE_STREAM_RECEIVE &&
   31CD 74 1C             10794 	mov	a,#0x1C
   31CF B5 0A 02          10795 	cjne	a,_axradio_mode,00113$
   31D2 80 12             10796 	sjmp	00102$
   31D4                   10797 00113$:
                          10798 ;	..\COMMON\easyax5043.c:2034: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_UNENC &&
   31D4 74 1D             10799 	mov	a,#0x1D
   31D6 B5 0A 02          10800 	cjne	a,_axradio_mode,00114$
   31D9 80 0B             10801 	sjmp	00102$
   31DB                   10802 00114$:
                          10803 ;	..\COMMON\easyax5043.c:2035: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   31DB 74 1E             10804 	mov	a,#0x1E
   31DD B5 0A 02          10805 	cjne	a,_axradio_mode,00115$
   31E0 80 04             10806 	sjmp	00102$
   31E2                   10807 00115$:
                          10808 ;	..\COMMON\easyax5043.c:2036: return AXRADIO_ERR_NOTSUPPORTED;
   31E2 75 82 01          10809 	mov	dpl,#0x01
   31E5 22                10810 	ret
   31E6                   10811 00102$:
                          10812 ;	..\COMMON\easyax5043.c:2037: AX5043_RXPARAMSETS = val;
   31E6 90 41 17          10813 	mov	dptr,#_AX5043_RXPARAMSETS
   31E9 EF                10814 	mov	a,r7
   31EA F0                10815 	movx	@dptr,a
                          10816 ;	..\COMMON\easyax5043.c:2038: return AXRADIO_ERR_NOERROR;
   31EB 75 82 00          10817 	mov	dpl,#0x00
   31EE 22                10818 	ret
                          10819 ;------------------------------------------------------------
                          10820 ;Allocation info for local variables in function 'axradio_agc_freeze'
                          10821 ;------------------------------------------------------------
                          10822 ;	..\COMMON\easyax5043.c:2041: uint8_t axradio_agc_freeze(void)
                          10823 ;	-----------------------------------------
                          10824 ;	 function axradio_agc_freeze
                          10825 ;	-----------------------------------------
   31EF                   10826 _axradio_agc_freeze:
                          10827 ;	..\COMMON\easyax5043.c:2043: return axradio_set_paramsets(0xff);
   31EF 75 82 FF          10828 	mov	dpl,#0xFF
   31F2 02 31 CB          10829 	ljmp	_axradio_set_paramsets
                          10830 ;------------------------------------------------------------
                          10831 ;Allocation info for local variables in function 'axradio_agc_thaw'
                          10832 ;------------------------------------------------------------
                          10833 ;	..\COMMON\easyax5043.c:2046: uint8_t axradio_agc_thaw(void)
                          10834 ;	-----------------------------------------
                          10835 ;	 function axradio_agc_thaw
                          10836 ;	-----------------------------------------
   31F5                   10837 _axradio_agc_thaw:
                          10838 ;	..\COMMON\easyax5043.c:2048: return axradio_set_paramsets(0x00);
   31F5 75 82 00          10839 	mov	dpl,#0x00
   31F8 02 31 CB          10840 	ljmp	_axradio_set_paramsets
                          10841 	.area CSEG    (CODE)
                          10842 	.area CONST   (CODE)
                          10843 	.area XINIT   (CODE)
   4F08                   10844 __xinit__f30_saved:
   4F08 3F                10845 	.db #0x3F	; 63
   4F09                   10846 __xinit__f31_saved:
   4F09 F0                10847 	.db #0xF0	; 240
   4F0A                   10848 __xinit__f32_saved:
   4F0A 3F                10849 	.db #0x3F	; 63
   4F0B                   10850 __xinit__f33_saved:
   4F0B F0                10851 	.db #0xF0	; 240
                          10852 	.area CABS    (ABS,CODE)
