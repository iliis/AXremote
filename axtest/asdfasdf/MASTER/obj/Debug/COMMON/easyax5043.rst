                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Wed Feb 12 16:52:06 2014
                              5 ;--------------------------------------------------------
                              6 	.module easyax5043
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _ax5043_init_registers_rx
                             13 	.globl _ax5043_init_registers_tx
                             14 	.globl _dbglink_writestr
                             15 	.globl _dbglink_tx
                             16 	.globl _memset
                             17 	.globl _memcpy
                             18 	.globl _wtimer_remove_callback
                             19 	.globl _wtimer_add_callback
                             20 	.globl _wtimer_remove
                             21 	.globl _wtimer1_addrelative
                             22 	.globl _wtimer0_addrelative
                             23 	.globl _wtimer0_addabsolute
                             24 	.globl _wtimer0_curtime
                             25 	.globl _wtimer_runcallbacks
                             26 	.globl _wtimer_idle
                             27 	.globl _ax5043_writefifo
                             28 	.globl _ax5043_readfifo
                             29 	.globl _ax5043_wakeup_deepsleep
                             30 	.globl _ax5043_enter_deepsleep
                             31 	.globl _ax5043_reset
                             32 	.globl _radio_read24
                             33 	.globl _radio_read16
                             34 	.globl _pn9_buffer
                             35 	.globl _pn9_advance_byte
                             36 	.globl _pn9_advance_bits
                             37 	.globl _axradio_framing_append_crc
                             38 	.globl _axradio_framing_check_crc
                             39 	.globl _ax5043_set_registers_rx
                             40 	.globl _ax5043_set_registers_tx
                             41 	.globl _ax5043_set_registers
                             42 	.globl _axradio_statuschange
                             43 	.globl _axradio_conv_timeinterval_totimer0
                             44 	.globl _checksignedlimit32
                             45 	.globl _checksignedlimit16
                             46 	.globl _signedlimit16
                             47 	.globl _signextend24
                             48 	.globl _signextend20
                             49 	.globl _PORTC_7
                             50 	.globl _PORTC_6
                             51 	.globl _PORTC_5
                             52 	.globl _PORTC_4
                             53 	.globl _PORTC_3
                             54 	.globl _PORTC_2
                             55 	.globl _PORTC_1
                             56 	.globl _PORTC_0
                             57 	.globl _PORTB_7
                             58 	.globl _PORTB_6
                             59 	.globl _PORTB_5
                             60 	.globl _PORTB_4
                             61 	.globl _PORTB_3
                             62 	.globl _PORTB_2
                             63 	.globl _PORTB_1
                             64 	.globl _PORTB_0
                             65 	.globl _PORTA_7
                             66 	.globl _PORTA_6
                             67 	.globl _PORTA_5
                             68 	.globl _PORTA_4
                             69 	.globl _PORTA_3
                             70 	.globl _PORTA_2
                             71 	.globl _PORTA_1
                             72 	.globl _PORTA_0
                             73 	.globl _PINC_7
                             74 	.globl _PINC_6
                             75 	.globl _PINC_5
                             76 	.globl _PINC_4
                             77 	.globl _PINC_3
                             78 	.globl _PINC_2
                             79 	.globl _PINC_1
                             80 	.globl _PINC_0
                             81 	.globl _PINB_7
                             82 	.globl _PINB_6
                             83 	.globl _PINB_5
                             84 	.globl _PINB_4
                             85 	.globl _PINB_3
                             86 	.globl _PINB_2
                             87 	.globl _PINB_1
                             88 	.globl _PINB_0
                             89 	.globl _PINA_7
                             90 	.globl _PINA_6
                             91 	.globl _PINA_5
                             92 	.globl _PINA_4
                             93 	.globl _PINA_3
                             94 	.globl _PINA_2
                             95 	.globl _PINA_1
                             96 	.globl _PINA_0
                             97 	.globl _CY
                             98 	.globl _AC
                             99 	.globl _F0
                            100 	.globl _RS1
                            101 	.globl _RS0
                            102 	.globl _OV
                            103 	.globl _F1
                            104 	.globl _P
                            105 	.globl _IP_7
                            106 	.globl _IP_6
                            107 	.globl _IP_5
                            108 	.globl _IP_4
                            109 	.globl _IP_3
                            110 	.globl _IP_2
                            111 	.globl _IP_1
                            112 	.globl _IP_0
                            113 	.globl _EA
                            114 	.globl _IE_7
                            115 	.globl _IE_6
                            116 	.globl _IE_5
                            117 	.globl _IE_4
                            118 	.globl _IE_3
                            119 	.globl _IE_2
                            120 	.globl _IE_1
                            121 	.globl _IE_0
                            122 	.globl _EIP_7
                            123 	.globl _EIP_6
                            124 	.globl _EIP_5
                            125 	.globl _EIP_4
                            126 	.globl _EIP_3
                            127 	.globl _EIP_2
                            128 	.globl _EIP_1
                            129 	.globl _EIP_0
                            130 	.globl _EIE_7
                            131 	.globl _EIE_6
                            132 	.globl _EIE_5
                            133 	.globl _EIE_4
                            134 	.globl _EIE_3
                            135 	.globl _EIE_2
                            136 	.globl _EIE_1
                            137 	.globl _EIE_0
                            138 	.globl _E2IP_7
                            139 	.globl _E2IP_6
                            140 	.globl _E2IP_5
                            141 	.globl _E2IP_4
                            142 	.globl _E2IP_3
                            143 	.globl _E2IP_2
                            144 	.globl _E2IP_1
                            145 	.globl _E2IP_0
                            146 	.globl _E2IE_7
                            147 	.globl _E2IE_6
                            148 	.globl _E2IE_5
                            149 	.globl _E2IE_4
                            150 	.globl _E2IE_3
                            151 	.globl _E2IE_2
                            152 	.globl _E2IE_1
                            153 	.globl _E2IE_0
                            154 	.globl _B_7
                            155 	.globl _B_6
                            156 	.globl _B_5
                            157 	.globl _B_4
                            158 	.globl _B_3
                            159 	.globl _B_2
                            160 	.globl _B_1
                            161 	.globl _B_0
                            162 	.globl _ACC_7
                            163 	.globl _ACC_6
                            164 	.globl _ACC_5
                            165 	.globl _ACC_4
                            166 	.globl _ACC_3
                            167 	.globl _ACC_2
                            168 	.globl _ACC_1
                            169 	.globl _ACC_0
                            170 	.globl _WTSTAT
                            171 	.globl _WTIRQEN
                            172 	.globl _WTEVTD
                            173 	.globl _WTEVTD1
                            174 	.globl _WTEVTD0
                            175 	.globl _WTEVTC
                            176 	.globl _WTEVTC1
                            177 	.globl _WTEVTC0
                            178 	.globl _WTEVTB
                            179 	.globl _WTEVTB1
                            180 	.globl _WTEVTB0
                            181 	.globl _WTEVTA
                            182 	.globl _WTEVTA1
                            183 	.globl _WTEVTA0
                            184 	.globl _WTCNTR1
                            185 	.globl _WTCNTB
                            186 	.globl _WTCNTB1
                            187 	.globl _WTCNTB0
                            188 	.globl _WTCNTA
                            189 	.globl _WTCNTA1
                            190 	.globl _WTCNTA0
                            191 	.globl _WTCFGB
                            192 	.globl _WTCFGA
                            193 	.globl _WDTRESET
                            194 	.globl _WDTCFG
                            195 	.globl _U1STATUS
                            196 	.globl _U1SHREG
                            197 	.globl _U1MODE
                            198 	.globl _U1CTRL
                            199 	.globl _U0STATUS
                            200 	.globl _U0SHREG
                            201 	.globl _U0MODE
                            202 	.globl _U0CTRL
                            203 	.globl _T2STATUS
                            204 	.globl _T2PERIOD
                            205 	.globl _T2PERIOD1
                            206 	.globl _T2PERIOD0
                            207 	.globl _T2MODE
                            208 	.globl _T2CNT
                            209 	.globl _T2CNT1
                            210 	.globl _T2CNT0
                            211 	.globl _T2CLKSRC
                            212 	.globl _T1STATUS
                            213 	.globl _T1PERIOD
                            214 	.globl _T1PERIOD1
                            215 	.globl _T1PERIOD0
                            216 	.globl _T1MODE
                            217 	.globl _T1CNT
                            218 	.globl _T1CNT1
                            219 	.globl _T1CNT0
                            220 	.globl _T1CLKSRC
                            221 	.globl _T0STATUS
                            222 	.globl _T0PERIOD
                            223 	.globl _T0PERIOD1
                            224 	.globl _T0PERIOD0
                            225 	.globl _T0MODE
                            226 	.globl _T0CNT
                            227 	.globl _T0CNT1
                            228 	.globl _T0CNT0
                            229 	.globl _T0CLKSRC
                            230 	.globl _SPSTATUS
                            231 	.globl _SPSHREG
                            232 	.globl _SPMODE
                            233 	.globl _SPCLKSRC
                            234 	.globl _RADIOSTAT
                            235 	.globl _RADIOSTAT1
                            236 	.globl _RADIOSTAT0
                            237 	.globl _RADIODATA
                            238 	.globl _RADIODATA3
                            239 	.globl _RADIODATA2
                            240 	.globl _RADIODATA1
                            241 	.globl _RADIODATA0
                            242 	.globl _RADIOADDR
                            243 	.globl _RADIOADDR1
                            244 	.globl _RADIOADDR0
                            245 	.globl _RADIOACC
                            246 	.globl _OC1STATUS
                            247 	.globl _OC1PIN
                            248 	.globl _OC1MODE
                            249 	.globl _OC1COMP
                            250 	.globl _OC1COMP1
                            251 	.globl _OC1COMP0
                            252 	.globl _OC0STATUS
                            253 	.globl _OC0PIN
                            254 	.globl _OC0MODE
                            255 	.globl _OC0COMP
                            256 	.globl _OC0COMP1
                            257 	.globl _OC0COMP0
                            258 	.globl _NVSTATUS
                            259 	.globl _NVKEY
                            260 	.globl _NVDATA
                            261 	.globl _NVDATA1
                            262 	.globl _NVDATA0
                            263 	.globl _NVADDR
                            264 	.globl _NVADDR1
                            265 	.globl _NVADDR0
                            266 	.globl _IC1STATUS
                            267 	.globl _IC1MODE
                            268 	.globl _IC1CAPT
                            269 	.globl _IC1CAPT1
                            270 	.globl _IC1CAPT0
                            271 	.globl _IC0STATUS
                            272 	.globl _IC0MODE
                            273 	.globl _IC0CAPT
                            274 	.globl _IC0CAPT1
                            275 	.globl _IC0CAPT0
                            276 	.globl _PORTR
                            277 	.globl _PORTC
                            278 	.globl _PORTB
                            279 	.globl _PORTA
                            280 	.globl _PINR
                            281 	.globl _PINC
                            282 	.globl _PINB
                            283 	.globl _PINA
                            284 	.globl _DIRR
                            285 	.globl _DIRC
                            286 	.globl _DIRB
                            287 	.globl _DIRA
                            288 	.globl _DBGLNKSTAT
                            289 	.globl _DBGLNKBUF
                            290 	.globl _CODECONFIG
                            291 	.globl _CLKSTAT
                            292 	.globl _CLKCON
                            293 	.globl _ANALOGCOMP
                            294 	.globl _ADCCONV
                            295 	.globl _ADCCLKSRC
                            296 	.globl _ADCCH3CONFIG
                            297 	.globl _ADCCH2CONFIG
                            298 	.globl _ADCCH1CONFIG
                            299 	.globl _ADCCH0CONFIG
                            300 	.globl __XPAGE
                            301 	.globl _XPAGE
                            302 	.globl _SP
                            303 	.globl _PSW
                            304 	.globl _PCON
                            305 	.globl _IP
                            306 	.globl _IE
                            307 	.globl _EIP
                            308 	.globl _EIE
                            309 	.globl _E2IP
                            310 	.globl _E2IE
                            311 	.globl _DPS
                            312 	.globl _DPTR1
                            313 	.globl _DPTR0
                            314 	.globl _DPL1
                            315 	.globl _DPL
                            316 	.globl _DPH1
                            317 	.globl _DPH
                            318 	.globl _B
                            319 	.globl _ACC
                            320 	.globl _f33_saved
                            321 	.globl _f32_saved
                            322 	.globl _f31_saved
                            323 	.globl _f30_saved
                            324 	.globl _axradio_timer
                            325 	.globl _axradio_cb_transmitdata
                            326 	.globl _axradio_cb_transmitend
                            327 	.globl _axradio_cb_transmitstart
                            328 	.globl _axradio_cb_channelstate
                            329 	.globl _axradio_cb_receivesfd
                            330 	.globl _axradio_cb_receive
                            331 	.globl _axradio_rxbuffer
                            332 	.globl _axradio_txbuffer
                            333 	.globl _axradio_default_remoteaddr
                            334 	.globl _axradio_localaddr
                            335 	.globl _axradio_timeanchor
                            336 	.globl _axradio_sync_periodcorr
                            337 	.globl _axradio_sync_time
                            338 	.globl _axradio_ack_seqnr
                            339 	.globl _axradio_ack_count
                            340 	.globl _axradio_curfreqoffset
                            341 	.globl _axradio_curchannel
                            342 	.globl _axradio_txbuffer_cnt
                            343 	.globl _axradio_txbuffer_len
                            344 	.globl _axradio_syncstate
                            345 	.globl _AX5043_POWCTRL1
                            346 	.globl _AX5043_REF
                            347 	.globl _AX5043_0xF44
                            348 	.globl _AX5043_0xF35
                            349 	.globl _AX5043_0xF34
                            350 	.globl _AX5043_0xF33
                            351 	.globl _AX5043_0xF32
                            352 	.globl _AX5043_0xF31
                            353 	.globl _AX5043_0xF30
                            354 	.globl _AX5043_0xF2F
                            355 	.globl _AX5043_0xF26
                            356 	.globl _AX5043_0xF23
                            357 	.globl _AX5043_0xF22
                            358 	.globl _AX5043_0xF21
                            359 	.globl _AX5043_0xF1C
                            360 	.globl _AX5043_0xF18
                            361 	.globl _AX5043_0xF11
                            362 	.globl _AX5043_0xF10
                            363 	.globl _AX5043_0xF0C
                            364 	.globl _AX5043_0xF01
                            365 	.globl _AX5043_0xF00
                            366 	.globl _AX5043_TIMEGAIN3NB
                            367 	.globl _AX5043_TIMEGAIN2NB
                            368 	.globl _AX5043_TIMEGAIN1NB
                            369 	.globl _AX5043_TIMEGAIN0NB
                            370 	.globl _AX5043_RXPARAMSETSNB
                            371 	.globl _AX5043_RXPARAMCURSETNB
                            372 	.globl _AX5043_PKTMAXLENNB
                            373 	.globl _AX5043_PKTLENOFFSETNB
                            374 	.globl _AX5043_PKTLENCFGNB
                            375 	.globl _AX5043_PKTADDRMASK3NB
                            376 	.globl _AX5043_PKTADDRMASK2NB
                            377 	.globl _AX5043_PKTADDRMASK1NB
                            378 	.globl _AX5043_PKTADDRMASK0NB
                            379 	.globl _AX5043_PKTADDRCFGNB
                            380 	.globl _AX5043_PKTADDR3NB
                            381 	.globl _AX5043_PKTADDR2NB
                            382 	.globl _AX5043_PKTADDR1NB
                            383 	.globl _AX5043_PKTADDR0NB
                            384 	.globl _AX5043_PHASEGAIN3NB
                            385 	.globl _AX5043_PHASEGAIN2NB
                            386 	.globl _AX5043_PHASEGAIN1NB
                            387 	.globl _AX5043_PHASEGAIN0NB
                            388 	.globl _AX5043_FREQUENCYLEAKNB
                            389 	.globl _AX5043_FREQUENCYGAIND3NB
                            390 	.globl _AX5043_FREQUENCYGAIND2NB
                            391 	.globl _AX5043_FREQUENCYGAIND1NB
                            392 	.globl _AX5043_FREQUENCYGAIND0NB
                            393 	.globl _AX5043_FREQUENCYGAINC3NB
                            394 	.globl _AX5043_FREQUENCYGAINC2NB
                            395 	.globl _AX5043_FREQUENCYGAINC1NB
                            396 	.globl _AX5043_FREQUENCYGAINC0NB
                            397 	.globl _AX5043_FREQUENCYGAINB3NB
                            398 	.globl _AX5043_FREQUENCYGAINB2NB
                            399 	.globl _AX5043_FREQUENCYGAINB1NB
                            400 	.globl _AX5043_FREQUENCYGAINB0NB
                            401 	.globl _AX5043_FREQUENCYGAINA3NB
                            402 	.globl _AX5043_FREQUENCYGAINA2NB
                            403 	.globl _AX5043_FREQUENCYGAINA1NB
                            404 	.globl _AX5043_FREQUENCYGAINA0NB
                            405 	.globl _AX5043_FREQDEV13NB
                            406 	.globl _AX5043_FREQDEV12NB
                            407 	.globl _AX5043_FREQDEV11NB
                            408 	.globl _AX5043_FREQDEV10NB
                            409 	.globl _AX5043_FREQDEV03NB
                            410 	.globl _AX5043_FREQDEV02NB
                            411 	.globl _AX5043_FREQDEV01NB
                            412 	.globl _AX5043_FREQDEV00NB
                            413 	.globl _AX5043_FOURFSK3NB
                            414 	.globl _AX5043_FOURFSK2NB
                            415 	.globl _AX5043_FOURFSK1NB
                            416 	.globl _AX5043_FOURFSK0NB
                            417 	.globl _AX5043_DRGAIN3NB
                            418 	.globl _AX5043_DRGAIN2NB
                            419 	.globl _AX5043_DRGAIN1NB
                            420 	.globl _AX5043_DRGAIN0NB
                            421 	.globl _AX5043_BBOFFSRES3NB
                            422 	.globl _AX5043_BBOFFSRES2NB
                            423 	.globl _AX5043_BBOFFSRES1NB
                            424 	.globl _AX5043_BBOFFSRES0NB
                            425 	.globl _AX5043_AMPLITUDEGAIN3NB
                            426 	.globl _AX5043_AMPLITUDEGAIN2NB
                            427 	.globl _AX5043_AMPLITUDEGAIN1NB
                            428 	.globl _AX5043_AMPLITUDEGAIN0NB
                            429 	.globl _AX5043_AGCTARGET3NB
                            430 	.globl _AX5043_AGCTARGET2NB
                            431 	.globl _AX5043_AGCTARGET1NB
                            432 	.globl _AX5043_AGCTARGET0NB
                            433 	.globl _AX5043_AGCMINMAX3NB
                            434 	.globl _AX5043_AGCMINMAX2NB
                            435 	.globl _AX5043_AGCMINMAX1NB
                            436 	.globl _AX5043_AGCMINMAX0NB
                            437 	.globl _AX5043_AGCGAIN3NB
                            438 	.globl _AX5043_AGCGAIN2NB
                            439 	.globl _AX5043_AGCGAIN1NB
                            440 	.globl _AX5043_AGCGAIN0NB
                            441 	.globl _AX5043_AGCAHYST3NB
                            442 	.globl _AX5043_AGCAHYST2NB
                            443 	.globl _AX5043_AGCAHYST1NB
                            444 	.globl _AX5043_AGCAHYST0NB
                            445 	.globl _AX5043_XTALSTATUSNB
                            446 	.globl _AX5043_XTALCAPNB
                            447 	.globl _AX5043_WAKEUPXOEARLYNB
                            448 	.globl _AX5043_WAKEUPTIMER1NB
                            449 	.globl _AX5043_WAKEUPTIMER0NB
                            450 	.globl _AX5043_WAKEUPFREQ1NB
                            451 	.globl _AX5043_WAKEUPFREQ0NB
                            452 	.globl _AX5043_WAKEUP1NB
                            453 	.globl _AX5043_WAKEUP0NB
                            454 	.globl _AX5043_TXRATE2NB
                            455 	.globl _AX5043_TXRATE1NB
                            456 	.globl _AX5043_TXRATE0NB
                            457 	.globl _AX5043_TXPWRCOEFFE1NB
                            458 	.globl _AX5043_TXPWRCOEFFE0NB
                            459 	.globl _AX5043_TXPWRCOEFFD1NB
                            460 	.globl _AX5043_TXPWRCOEFFD0NB
                            461 	.globl _AX5043_TXPWRCOEFFC1NB
                            462 	.globl _AX5043_TXPWRCOEFFC0NB
                            463 	.globl _AX5043_TXPWRCOEFFB1NB
                            464 	.globl _AX5043_TXPWRCOEFFB0NB
                            465 	.globl _AX5043_TXPWRCOEFFA1NB
                            466 	.globl _AX5043_TXPWRCOEFFA0NB
                            467 	.globl _AX5043_TRKRFFREQ2NB
                            468 	.globl _AX5043_TRKRFFREQ1NB
                            469 	.globl _AX5043_TRKRFFREQ0NB
                            470 	.globl _AX5043_TRKPHASE1NB
                            471 	.globl _AX5043_TRKPHASE0NB
                            472 	.globl _AX5043_TRKFSKDEMOD1NB
                            473 	.globl _AX5043_TRKFSKDEMOD0NB
                            474 	.globl _AX5043_TRKFREQ1NB
                            475 	.globl _AX5043_TRKFREQ0NB
                            476 	.globl _AX5043_TRKDATARATE2NB
                            477 	.globl _AX5043_TRKDATARATE1NB
                            478 	.globl _AX5043_TRKDATARATE0NB
                            479 	.globl _AX5043_TRKAMPLITUDE1NB
                            480 	.globl _AX5043_TRKAMPLITUDE0NB
                            481 	.globl _AX5043_TRKAFSKDEMOD1NB
                            482 	.globl _AX5043_TRKAFSKDEMOD0NB
                            483 	.globl _AX5043_TMGTXSETTLENB
                            484 	.globl _AX5043_TMGTXBOOSTNB
                            485 	.globl _AX5043_TMGRXSETTLENB
                            486 	.globl _AX5043_TMGRXRSSINB
                            487 	.globl _AX5043_TMGRXPREAMBLE3NB
                            488 	.globl _AX5043_TMGRXPREAMBLE2NB
                            489 	.globl _AX5043_TMGRXPREAMBLE1NB
                            490 	.globl _AX5043_TMGRXOFFSACQNB
                            491 	.globl _AX5043_TMGRXCOARSEAGCNB
                            492 	.globl _AX5043_TMGRXBOOSTNB
                            493 	.globl _AX5043_TMGRXAGCNB
                            494 	.globl _AX5043_TIMER2NB
                            495 	.globl _AX5043_TIMER1NB
                            496 	.globl _AX5043_TIMER0NB
                            497 	.globl _AX5043_SILICONREVISIONNB
                            498 	.globl _AX5043_SCRATCHNB
                            499 	.globl _AX5043_RXDATARATE2NB
                            500 	.globl _AX5043_RXDATARATE1NB
                            501 	.globl _AX5043_RXDATARATE0NB
                            502 	.globl _AX5043_RSSIREFERENCENB
                            503 	.globl _AX5043_RSSIABSTHRNB
                            504 	.globl _AX5043_RSSINB
                            505 	.globl _AX5043_RADIOSTATENB
                            506 	.globl _AX5043_RADIOEVENTREQ1NB
                            507 	.globl _AX5043_RADIOEVENTREQ0NB
                            508 	.globl _AX5043_RADIOEVENTMASK1NB
                            509 	.globl _AX5043_RADIOEVENTMASK0NB
                            510 	.globl _AX5043_PWRMODENB
                            511 	.globl _AX5043_PWRAMPNB
                            512 	.globl _AX5043_POWSTICKYSTATNB
                            513 	.globl _AX5043_POWSTATNB
                            514 	.globl _AX5043_POWIRQMASKNB
                            515 	.globl _AX5043_PLLVCOIRNB
                            516 	.globl _AX5043_PLLVCOINB
                            517 	.globl _AX5043_PLLVCODIVNB
                            518 	.globl _AX5043_PLLRNGCLKNB
                            519 	.globl _AX5043_PLLRANGINGBNB
                            520 	.globl _AX5043_PLLRANGINGANB
                            521 	.globl _AX5043_PLLLOOPBOOSTNB
                            522 	.globl _AX5043_PLLLOOPNB
                            523 	.globl _AX5043_PLLLOCKDETNB
                            524 	.globl _AX5043_PLLCPIBOOSTNB
                            525 	.globl _AX5043_PLLCPINB
                            526 	.globl _AX5043_PKTSTOREFLAGSNB
                            527 	.globl _AX5043_PKTMISCFLAGSNB
                            528 	.globl _AX5043_PKTCHUNKSIZENB
                            529 	.globl _AX5043_PKTACCEPTFLAGSNB
                            530 	.globl _AX5043_PINSTATENB
                            531 	.globl _AX5043_PINFUNCSYSCLKNB
                            532 	.globl _AX5043_PINFUNCPWRAMPNB
                            533 	.globl _AX5043_PINFUNCIRQNB
                            534 	.globl _AX5043_PINFUNCDCLKNB
                            535 	.globl _AX5043_PINFUNCDATANB
                            536 	.globl _AX5043_PINFUNCANTSELNB
                            537 	.globl _AX5043_MODULATIONNB
                            538 	.globl _AX5043_MODCFGFNB
                            539 	.globl _AX5043_MODCFGANB
                            540 	.globl _AX5043_MAXRFOFFSET2NB
                            541 	.globl _AX5043_MAXRFOFFSET1NB
                            542 	.globl _AX5043_MAXRFOFFSET0NB
                            543 	.globl _AX5043_MAXDROFFSET2NB
                            544 	.globl _AX5043_MAXDROFFSET1NB
                            545 	.globl _AX5043_MAXDROFFSET0NB
                            546 	.globl _AX5043_MATCH1PAT1NB
                            547 	.globl _AX5043_MATCH1PAT0NB
                            548 	.globl _AX5043_MATCH1MINNB
                            549 	.globl _AX5043_MATCH1MAXNB
                            550 	.globl _AX5043_MATCH1LENNB
                            551 	.globl _AX5043_MATCH0PAT3NB
                            552 	.globl _AX5043_MATCH0PAT2NB
                            553 	.globl _AX5043_MATCH0PAT1NB
                            554 	.globl _AX5043_MATCH0PAT0NB
                            555 	.globl _AX5043_MATCH0MINNB
                            556 	.globl _AX5043_MATCH0MAXNB
                            557 	.globl _AX5043_MATCH0LENNB
                            558 	.globl _AX5043_LPOSCSTATUSNB
                            559 	.globl _AX5043_LPOSCREF1NB
                            560 	.globl _AX5043_LPOSCREF0NB
                            561 	.globl _AX5043_LPOSCPER1NB
                            562 	.globl _AX5043_LPOSCPER0NB
                            563 	.globl _AX5043_LPOSCKFILT1NB
                            564 	.globl _AX5043_LPOSCKFILT0NB
                            565 	.globl _AX5043_LPOSCFREQ1NB
                            566 	.globl _AX5043_LPOSCFREQ0NB
                            567 	.globl _AX5043_LPOSCCONFIGNB
                            568 	.globl _AX5043_IRQREQUEST1NB
                            569 	.globl _AX5043_IRQREQUEST0NB
                            570 	.globl _AX5043_IRQMASK1NB
                            571 	.globl _AX5043_IRQMASK0NB
                            572 	.globl _AX5043_IRQINVERSION1NB
                            573 	.globl _AX5043_IRQINVERSION0NB
                            574 	.globl _AX5043_IFFREQ1NB
                            575 	.globl _AX5043_IFFREQ0NB
                            576 	.globl _AX5043_GPADCPERIODNB
                            577 	.globl _AX5043_GPADCCTRLNB
                            578 	.globl _AX5043_GPADC13VALUE1NB
                            579 	.globl _AX5043_GPADC13VALUE0NB
                            580 	.globl _AX5043_FSKDMIN1NB
                            581 	.globl _AX5043_FSKDMIN0NB
                            582 	.globl _AX5043_FSKDMAX1NB
                            583 	.globl _AX5043_FSKDMAX0NB
                            584 	.globl _AX5043_FSKDEV2NB
                            585 	.globl _AX5043_FSKDEV1NB
                            586 	.globl _AX5043_FSKDEV0NB
                            587 	.globl _AX5043_FREQB3NB
                            588 	.globl _AX5043_FREQB2NB
                            589 	.globl _AX5043_FREQB1NB
                            590 	.globl _AX5043_FREQB0NB
                            591 	.globl _AX5043_FREQA3NB
                            592 	.globl _AX5043_FREQA2NB
                            593 	.globl _AX5043_FREQA1NB
                            594 	.globl _AX5043_FREQA0NB
                            595 	.globl _AX5043_FRAMINGNB
                            596 	.globl _AX5043_FIFOTHRESH1NB
                            597 	.globl _AX5043_FIFOTHRESH0NB
                            598 	.globl _AX5043_FIFOSTATNB
                            599 	.globl _AX5043_FIFOFREE1NB
                            600 	.globl _AX5043_FIFOFREE0NB
                            601 	.globl _AX5043_FIFODATANB
                            602 	.globl _AX5043_FIFOCOUNT1NB
                            603 	.globl _AX5043_FIFOCOUNT0NB
                            604 	.globl _AX5043_FECSYNCNB
                            605 	.globl _AX5043_FECSTATUSNB
                            606 	.globl _AX5043_FECNB
                            607 	.globl _AX5043_ENCODINGNB
                            608 	.globl _AX5043_DIVERSITYNB
                            609 	.globl _AX5043_DECIMATIONNB
                            610 	.globl _AX5043_DACVALUE1NB
                            611 	.globl _AX5043_DACVALUE0NB
                            612 	.globl _AX5043_DACCONFIGNB
                            613 	.globl _AX5043_CRCINIT3NB
                            614 	.globl _AX5043_CRCINIT2NB
                            615 	.globl _AX5043_CRCINIT1NB
                            616 	.globl _AX5043_CRCINIT0NB
                            617 	.globl _AX5043_BGNDRSSITHRNB
                            618 	.globl _AX5043_BGNDRSSIGAINNB
                            619 	.globl _AX5043_BGNDRSSINB
                            620 	.globl _AX5043_BBTUNENB
                            621 	.globl _AX5043_BBOFFSCAPNB
                            622 	.globl _AX5043_AMPLFILTERNB
                            623 	.globl _AX5043_AGCCOUNTERNB
                            624 	.globl _AX5043_AFSKSPACE1NB
                            625 	.globl _AX5043_AFSKSPACE0NB
                            626 	.globl _AX5043_AFSKMARK1NB
                            627 	.globl _AX5043_AFSKMARK0NB
                            628 	.globl _AX5043_AFSKCTRLNB
                            629 	.globl _AX5043_TIMEGAIN3
                            630 	.globl _AX5043_TIMEGAIN2
                            631 	.globl _AX5043_TIMEGAIN1
                            632 	.globl _AX5043_TIMEGAIN0
                            633 	.globl _AX5043_RXPARAMSETS
                            634 	.globl _AX5043_RXPARAMCURSET
                            635 	.globl _AX5043_PKTMAXLEN
                            636 	.globl _AX5043_PKTLENOFFSET
                            637 	.globl _AX5043_PKTLENCFG
                            638 	.globl _AX5043_PKTADDRMASK3
                            639 	.globl _AX5043_PKTADDRMASK2
                            640 	.globl _AX5043_PKTADDRMASK1
                            641 	.globl _AX5043_PKTADDRMASK0
                            642 	.globl _AX5043_PKTADDRCFG
                            643 	.globl _AX5043_PKTADDR3
                            644 	.globl _AX5043_PKTADDR2
                            645 	.globl _AX5043_PKTADDR1
                            646 	.globl _AX5043_PKTADDR0
                            647 	.globl _AX5043_PHASEGAIN3
                            648 	.globl _AX5043_PHASEGAIN2
                            649 	.globl _AX5043_PHASEGAIN1
                            650 	.globl _AX5043_PHASEGAIN0
                            651 	.globl _AX5043_FREQUENCYLEAK
                            652 	.globl _AX5043_FREQUENCYGAIND3
                            653 	.globl _AX5043_FREQUENCYGAIND2
                            654 	.globl _AX5043_FREQUENCYGAIND1
                            655 	.globl _AX5043_FREQUENCYGAIND0
                            656 	.globl _AX5043_FREQUENCYGAINC3
                            657 	.globl _AX5043_FREQUENCYGAINC2
                            658 	.globl _AX5043_FREQUENCYGAINC1
                            659 	.globl _AX5043_FREQUENCYGAINC0
                            660 	.globl _AX5043_FREQUENCYGAINB3
                            661 	.globl _AX5043_FREQUENCYGAINB2
                            662 	.globl _AX5043_FREQUENCYGAINB1
                            663 	.globl _AX5043_FREQUENCYGAINB0
                            664 	.globl _AX5043_FREQUENCYGAINA3
                            665 	.globl _AX5043_FREQUENCYGAINA2
                            666 	.globl _AX5043_FREQUENCYGAINA1
                            667 	.globl _AX5043_FREQUENCYGAINA0
                            668 	.globl _AX5043_FREQDEV13
                            669 	.globl _AX5043_FREQDEV12
                            670 	.globl _AX5043_FREQDEV11
                            671 	.globl _AX5043_FREQDEV10
                            672 	.globl _AX5043_FREQDEV03
                            673 	.globl _AX5043_FREQDEV02
                            674 	.globl _AX5043_FREQDEV01
                            675 	.globl _AX5043_FREQDEV00
                            676 	.globl _AX5043_FOURFSK3
                            677 	.globl _AX5043_FOURFSK2
                            678 	.globl _AX5043_FOURFSK1
                            679 	.globl _AX5043_FOURFSK0
                            680 	.globl _AX5043_DRGAIN3
                            681 	.globl _AX5043_DRGAIN2
                            682 	.globl _AX5043_DRGAIN1
                            683 	.globl _AX5043_DRGAIN0
                            684 	.globl _AX5043_BBOFFSRES3
                            685 	.globl _AX5043_BBOFFSRES2
                            686 	.globl _AX5043_BBOFFSRES1
                            687 	.globl _AX5043_BBOFFSRES0
                            688 	.globl _AX5043_AMPLITUDEGAIN3
                            689 	.globl _AX5043_AMPLITUDEGAIN2
                            690 	.globl _AX5043_AMPLITUDEGAIN1
                            691 	.globl _AX5043_AMPLITUDEGAIN0
                            692 	.globl _AX5043_AGCTARGET3
                            693 	.globl _AX5043_AGCTARGET2
                            694 	.globl _AX5043_AGCTARGET1
                            695 	.globl _AX5043_AGCTARGET0
                            696 	.globl _AX5043_AGCMINMAX3
                            697 	.globl _AX5043_AGCMINMAX2
                            698 	.globl _AX5043_AGCMINMAX1
                            699 	.globl _AX5043_AGCMINMAX0
                            700 	.globl _AX5043_AGCGAIN3
                            701 	.globl _AX5043_AGCGAIN2
                            702 	.globl _AX5043_AGCGAIN1
                            703 	.globl _AX5043_AGCGAIN0
                            704 	.globl _AX5043_AGCAHYST3
                            705 	.globl _AX5043_AGCAHYST2
                            706 	.globl _AX5043_AGCAHYST1
                            707 	.globl _AX5043_AGCAHYST0
                            708 	.globl _AX5043_XTALSTATUS
                            709 	.globl _AX5043_XTALCAP
                            710 	.globl _AX5043_WAKEUPXOEARLY
                            711 	.globl _AX5043_WAKEUPTIMER1
                            712 	.globl _AX5043_WAKEUPTIMER0
                            713 	.globl _AX5043_WAKEUPFREQ1
                            714 	.globl _AX5043_WAKEUPFREQ0
                            715 	.globl _AX5043_WAKEUP1
                            716 	.globl _AX5043_WAKEUP0
                            717 	.globl _AX5043_TXRATE2
                            718 	.globl _AX5043_TXRATE1
                            719 	.globl _AX5043_TXRATE0
                            720 	.globl _AX5043_TXPWRCOEFFE1
                            721 	.globl _AX5043_TXPWRCOEFFE0
                            722 	.globl _AX5043_TXPWRCOEFFD1
                            723 	.globl _AX5043_TXPWRCOEFFD0
                            724 	.globl _AX5043_TXPWRCOEFFC1
                            725 	.globl _AX5043_TXPWRCOEFFC0
                            726 	.globl _AX5043_TXPWRCOEFFB1
                            727 	.globl _AX5043_TXPWRCOEFFB0
                            728 	.globl _AX5043_TXPWRCOEFFA1
                            729 	.globl _AX5043_TXPWRCOEFFA0
                            730 	.globl _AX5043_TRKRFFREQ2
                            731 	.globl _AX5043_TRKRFFREQ1
                            732 	.globl _AX5043_TRKRFFREQ0
                            733 	.globl _AX5043_TRKPHASE1
                            734 	.globl _AX5043_TRKPHASE0
                            735 	.globl _AX5043_TRKFSKDEMOD1
                            736 	.globl _AX5043_TRKFSKDEMOD0
                            737 	.globl _AX5043_TRKFREQ1
                            738 	.globl _AX5043_TRKFREQ0
                            739 	.globl _AX5043_TRKDATARATE2
                            740 	.globl _AX5043_TRKDATARATE1
                            741 	.globl _AX5043_TRKDATARATE0
                            742 	.globl _AX5043_TRKAMPLITUDE1
                            743 	.globl _AX5043_TRKAMPLITUDE0
                            744 	.globl _AX5043_TRKAFSKDEMOD1
                            745 	.globl _AX5043_TRKAFSKDEMOD0
                            746 	.globl _AX5043_TMGTXSETTLE
                            747 	.globl _AX5043_TMGTXBOOST
                            748 	.globl _AX5043_TMGRXSETTLE
                            749 	.globl _AX5043_TMGRXRSSI
                            750 	.globl _AX5043_TMGRXPREAMBLE3
                            751 	.globl _AX5043_TMGRXPREAMBLE2
                            752 	.globl _AX5043_TMGRXPREAMBLE1
                            753 	.globl _AX5043_TMGRXOFFSACQ
                            754 	.globl _AX5043_TMGRXCOARSEAGC
                            755 	.globl _AX5043_TMGRXBOOST
                            756 	.globl _AX5043_TMGRXAGC
                            757 	.globl _AX5043_TIMER2
                            758 	.globl _AX5043_TIMER1
                            759 	.globl _AX5043_TIMER0
                            760 	.globl _AX5043_SILICONREVISION
                            761 	.globl _AX5043_SCRATCH
                            762 	.globl _AX5043_RXDATARATE2
                            763 	.globl _AX5043_RXDATARATE1
                            764 	.globl _AX5043_RXDATARATE0
                            765 	.globl _AX5043_RSSIREFERENCE
                            766 	.globl _AX5043_RSSIABSTHR
                            767 	.globl _AX5043_RSSI
                            768 	.globl _AX5043_RADIOSTATE
                            769 	.globl _AX5043_RADIOEVENTREQ1
                            770 	.globl _AX5043_RADIOEVENTREQ0
                            771 	.globl _AX5043_RADIOEVENTMASK1
                            772 	.globl _AX5043_RADIOEVENTMASK0
                            773 	.globl _AX5043_PWRMODE
                            774 	.globl _AX5043_PWRAMP
                            775 	.globl _AX5043_POWSTICKYSTAT
                            776 	.globl _AX5043_POWSTAT
                            777 	.globl _AX5043_POWIRQMASK
                            778 	.globl _AX5043_PLLVCOIR
                            779 	.globl _AX5043_PLLVCOI
                            780 	.globl _AX5043_PLLVCODIV
                            781 	.globl _AX5043_PLLRNGCLK
                            782 	.globl _AX5043_PLLRANGINGB
                            783 	.globl _AX5043_PLLRANGINGA
                            784 	.globl _AX5043_PLLLOOPBOOST
                            785 	.globl _AX5043_PLLLOOP
                            786 	.globl _AX5043_PLLLOCKDET
                            787 	.globl _AX5043_PLLCPIBOOST
                            788 	.globl _AX5043_PLLCPI
                            789 	.globl _AX5043_PKTSTOREFLAGS
                            790 	.globl _AX5043_PKTMISCFLAGS
                            791 	.globl _AX5043_PKTCHUNKSIZE
                            792 	.globl _AX5043_PKTACCEPTFLAGS
                            793 	.globl _AX5043_PINSTATE
                            794 	.globl _AX5043_PINFUNCSYSCLK
                            795 	.globl _AX5043_PINFUNCPWRAMP
                            796 	.globl _AX5043_PINFUNCIRQ
                            797 	.globl _AX5043_PINFUNCDCLK
                            798 	.globl _AX5043_PINFUNCDATA
                            799 	.globl _AX5043_PINFUNCANTSEL
                            800 	.globl _AX5043_MODULATION
                            801 	.globl _AX5043_MODCFGF
                            802 	.globl _AX5043_MODCFGA
                            803 	.globl _AX5043_MAXRFOFFSET2
                            804 	.globl _AX5043_MAXRFOFFSET1
                            805 	.globl _AX5043_MAXRFOFFSET0
                            806 	.globl _AX5043_MAXDROFFSET2
                            807 	.globl _AX5043_MAXDROFFSET1
                            808 	.globl _AX5043_MAXDROFFSET0
                            809 	.globl _AX5043_MATCH1PAT1
                            810 	.globl _AX5043_MATCH1PAT0
                            811 	.globl _AX5043_MATCH1MIN
                            812 	.globl _AX5043_MATCH1MAX
                            813 	.globl _AX5043_MATCH1LEN
                            814 	.globl _AX5043_MATCH0PAT3
                            815 	.globl _AX5043_MATCH0PAT2
                            816 	.globl _AX5043_MATCH0PAT1
                            817 	.globl _AX5043_MATCH0PAT0
                            818 	.globl _AX5043_MATCH0MIN
                            819 	.globl _AX5043_MATCH0MAX
                            820 	.globl _AX5043_MATCH0LEN
                            821 	.globl _AX5043_LPOSCSTATUS
                            822 	.globl _AX5043_LPOSCREF1
                            823 	.globl _AX5043_LPOSCREF0
                            824 	.globl _AX5043_LPOSCPER1
                            825 	.globl _AX5043_LPOSCPER0
                            826 	.globl _AX5043_LPOSCKFILT1
                            827 	.globl _AX5043_LPOSCKFILT0
                            828 	.globl _AX5043_LPOSCFREQ1
                            829 	.globl _AX5043_LPOSCFREQ0
                            830 	.globl _AX5043_LPOSCCONFIG
                            831 	.globl _AX5043_IRQREQUEST1
                            832 	.globl _AX5043_IRQREQUEST0
                            833 	.globl _AX5043_IRQMASK1
                            834 	.globl _AX5043_IRQMASK0
                            835 	.globl _AX5043_IRQINVERSION1
                            836 	.globl _AX5043_IRQINVERSION0
                            837 	.globl _AX5043_IFFREQ1
                            838 	.globl _AX5043_IFFREQ0
                            839 	.globl _AX5043_GPADCPERIOD
                            840 	.globl _AX5043_GPADCCTRL
                            841 	.globl _AX5043_GPADC13VALUE1
                            842 	.globl _AX5043_GPADC13VALUE0
                            843 	.globl _AX5043_FSKDMIN1
                            844 	.globl _AX5043_FSKDMIN0
                            845 	.globl _AX5043_FSKDMAX1
                            846 	.globl _AX5043_FSKDMAX0
                            847 	.globl _AX5043_FSKDEV2
                            848 	.globl _AX5043_FSKDEV1
                            849 	.globl _AX5043_FSKDEV0
                            850 	.globl _AX5043_FREQB3
                            851 	.globl _AX5043_FREQB2
                            852 	.globl _AX5043_FREQB1
                            853 	.globl _AX5043_FREQB0
                            854 	.globl _AX5043_FREQA3
                            855 	.globl _AX5043_FREQA2
                            856 	.globl _AX5043_FREQA1
                            857 	.globl _AX5043_FREQA0
                            858 	.globl _AX5043_FRAMING
                            859 	.globl _AX5043_FIFOTHRESH1
                            860 	.globl _AX5043_FIFOTHRESH0
                            861 	.globl _AX5043_FIFOSTAT
                            862 	.globl _AX5043_FIFOFREE1
                            863 	.globl _AX5043_FIFOFREE0
                            864 	.globl _AX5043_FIFODATA
                            865 	.globl _AX5043_FIFOCOUNT1
                            866 	.globl _AX5043_FIFOCOUNT0
                            867 	.globl _AX5043_FECSYNC
                            868 	.globl _AX5043_FECSTATUS
                            869 	.globl _AX5043_FEC
                            870 	.globl _AX5043_ENCODING
                            871 	.globl _AX5043_DIVERSITY
                            872 	.globl _AX5043_DECIMATION
                            873 	.globl _AX5043_DACVALUE1
                            874 	.globl _AX5043_DACVALUE0
                            875 	.globl _AX5043_DACCONFIG
                            876 	.globl _AX5043_CRCINIT3
                            877 	.globl _AX5043_CRCINIT2
                            878 	.globl _AX5043_CRCINIT1
                            879 	.globl _AX5043_CRCINIT0
                            880 	.globl _AX5043_BGNDRSSITHR
                            881 	.globl _AX5043_BGNDRSSIGAIN
                            882 	.globl _AX5043_BGNDRSSI
                            883 	.globl _AX5043_BBTUNE
                            884 	.globl _AX5043_BBOFFSCAP
                            885 	.globl _AX5043_AMPLFILTER
                            886 	.globl _AX5043_AGCCOUNTER
                            887 	.globl _AX5043_AFSKSPACE1
                            888 	.globl _AX5043_AFSKSPACE0
                            889 	.globl _AX5043_AFSKMARK1
                            890 	.globl _AX5043_AFSKMARK0
                            891 	.globl _AX5043_AFSKCTRL
                            892 	.globl _XWTSTAT
                            893 	.globl _XWTIRQEN
                            894 	.globl _XWTEVTD
                            895 	.globl _XWTEVTD1
                            896 	.globl _XWTEVTD0
                            897 	.globl _XWTEVTC
                            898 	.globl _XWTEVTC1
                            899 	.globl _XWTEVTC0
                            900 	.globl _XWTEVTB
                            901 	.globl _XWTEVTB1
                            902 	.globl _XWTEVTB0
                            903 	.globl _XWTEVTA
                            904 	.globl _XWTEVTA1
                            905 	.globl _XWTEVTA0
                            906 	.globl _XWTCNTR1
                            907 	.globl _XWTCNTB
                            908 	.globl _XWTCNTB1
                            909 	.globl _XWTCNTB0
                            910 	.globl _XWTCNTA
                            911 	.globl _XWTCNTA1
                            912 	.globl _XWTCNTA0
                            913 	.globl _XWTCFGB
                            914 	.globl _XWTCFGA
                            915 	.globl _XWDTRESET
                            916 	.globl _XWDTCFG
                            917 	.globl _XU1STATUS
                            918 	.globl _XU1SHREG
                            919 	.globl _XU1MODE
                            920 	.globl _XU1CTRL
                            921 	.globl _XU0STATUS
                            922 	.globl _XU0SHREG
                            923 	.globl _XU0MODE
                            924 	.globl _XU0CTRL
                            925 	.globl _XT2STATUS
                            926 	.globl _XT2PERIOD
                            927 	.globl _XT2PERIOD1
                            928 	.globl _XT2PERIOD0
                            929 	.globl _XT2MODE
                            930 	.globl _XT2CNT
                            931 	.globl _XT2CNT1
                            932 	.globl _XT2CNT0
                            933 	.globl _XT2CLKSRC
                            934 	.globl _XT1STATUS
                            935 	.globl _XT1PERIOD
                            936 	.globl _XT1PERIOD1
                            937 	.globl _XT1PERIOD0
                            938 	.globl _XT1MODE
                            939 	.globl _XT1CNT
                            940 	.globl _XT1CNT1
                            941 	.globl _XT1CNT0
                            942 	.globl _XT1CLKSRC
                            943 	.globl _XT0STATUS
                            944 	.globl _XT0PERIOD
                            945 	.globl _XT0PERIOD1
                            946 	.globl _XT0PERIOD0
                            947 	.globl _XT0MODE
                            948 	.globl _XT0CNT
                            949 	.globl _XT0CNT1
                            950 	.globl _XT0CNT0
                            951 	.globl _XT0CLKSRC
                            952 	.globl _XSPSTATUS
                            953 	.globl _XSPSHREG
                            954 	.globl _XSPMODE
                            955 	.globl _XSPCLKSRC
                            956 	.globl _XRADIOSTAT
                            957 	.globl _XRADIOSTAT1
                            958 	.globl _XRADIOSTAT0
                            959 	.globl _XRADIODATA3
                            960 	.globl _XRADIODATA2
                            961 	.globl _XRADIODATA1
                            962 	.globl _XRADIODATA0
                            963 	.globl _XRADIOADDR1
                            964 	.globl _XRADIOADDR0
                            965 	.globl _XRADIOACC
                            966 	.globl _XOC1STATUS
                            967 	.globl _XOC1PIN
                            968 	.globl _XOC1MODE
                            969 	.globl _XOC1COMP
                            970 	.globl _XOC1COMP1
                            971 	.globl _XOC1COMP0
                            972 	.globl _XOC0STATUS
                            973 	.globl _XOC0PIN
                            974 	.globl _XOC0MODE
                            975 	.globl _XOC0COMP
                            976 	.globl _XOC0COMP1
                            977 	.globl _XOC0COMP0
                            978 	.globl _XNVSTATUS
                            979 	.globl _XNVKEY
                            980 	.globl _XNVDATA
                            981 	.globl _XNVDATA1
                            982 	.globl _XNVDATA0
                            983 	.globl _XNVADDR
                            984 	.globl _XNVADDR1
                            985 	.globl _XNVADDR0
                            986 	.globl _XIC1STATUS
                            987 	.globl _XIC1MODE
                            988 	.globl _XIC1CAPT
                            989 	.globl _XIC1CAPT1
                            990 	.globl _XIC1CAPT0
                            991 	.globl _XIC0STATUS
                            992 	.globl _XIC0MODE
                            993 	.globl _XIC0CAPT
                            994 	.globl _XIC0CAPT1
                            995 	.globl _XIC0CAPT0
                            996 	.globl _XPORTR
                            997 	.globl _XPORTC
                            998 	.globl _XPORTB
                            999 	.globl _XPORTA
                           1000 	.globl _XPINR
                           1001 	.globl _XPINC
                           1002 	.globl _XPINB
                           1003 	.globl _XPINA
                           1004 	.globl _XDIRR
                           1005 	.globl _XDIRC
                           1006 	.globl _XDIRB
                           1007 	.globl _XDIRA
                           1008 	.globl _XDBGLNKSTAT
                           1009 	.globl _XDBGLNKBUF
                           1010 	.globl _XCODECONFIG
                           1011 	.globl _XCLKSTAT
                           1012 	.globl _XCLKCON
                           1013 	.globl _XANALOGCOMP
                           1014 	.globl _XADCCONV
                           1015 	.globl _XADCCLKSRC
                           1016 	.globl _XADCCH3CONFIG
                           1017 	.globl _XADCCH2CONFIG
                           1018 	.globl _XADCCH1CONFIG
                           1019 	.globl _XADCCH0CONFIG
                           1020 	.globl _XPCON
                           1021 	.globl _XIP
                           1022 	.globl _XIE
                           1023 	.globl _XDPTR1
                           1024 	.globl _XDPTR0
                           1025 	.globl _XTALREADY
                           1026 	.globl _XTALOSC
                           1027 	.globl _XTALAMPL
                           1028 	.globl _SILICONREV
                           1029 	.globl _SCRATCH3
                           1030 	.globl _SCRATCH2
                           1031 	.globl _SCRATCH1
                           1032 	.globl _SCRATCH0
                           1033 	.globl _RADIOMUX
                           1034 	.globl _RADIOFSTATADDR
                           1035 	.globl _RADIOFSTATADDR1
                           1036 	.globl _RADIOFSTATADDR0
                           1037 	.globl _RADIOFDATAADDR
                           1038 	.globl _RADIOFDATAADDR1
                           1039 	.globl _RADIOFDATAADDR0
                           1040 	.globl _OSCRUN
                           1041 	.globl _OSCREADY
                           1042 	.globl _OSCFORCERUN
                           1043 	.globl _OSCCALIB
                           1044 	.globl _MISCCTRL
                           1045 	.globl _LPXOSCGM
                           1046 	.globl _LPOSCREF
                           1047 	.globl _LPOSCREF1
                           1048 	.globl _LPOSCREF0
                           1049 	.globl _LPOSCPER
                           1050 	.globl _LPOSCPER1
                           1051 	.globl _LPOSCPER0
                           1052 	.globl _LPOSCKFILT
                           1053 	.globl _LPOSCKFILT1
                           1054 	.globl _LPOSCKFILT0
                           1055 	.globl _LPOSCFREQ
                           1056 	.globl _LPOSCFREQ1
                           1057 	.globl _LPOSCFREQ0
                           1058 	.globl _LPOSCCONFIG
                           1059 	.globl _PINSEL
                           1060 	.globl _PINCHGC
                           1061 	.globl _PINCHGB
                           1062 	.globl _PINCHGA
                           1063 	.globl _PALTRADIO
                           1064 	.globl _PALTC
                           1065 	.globl _PALTB
                           1066 	.globl _PALTA
                           1067 	.globl _INTCHGC
                           1068 	.globl _INTCHGB
                           1069 	.globl _INTCHGA
                           1070 	.globl _EXTIRQ
                           1071 	.globl _GPIOENABLE
                           1072 	.globl _ANALOGA
                           1073 	.globl _FRCOSCREF
                           1074 	.globl _FRCOSCREF1
                           1075 	.globl _FRCOSCREF0
                           1076 	.globl _FRCOSCPER
                           1077 	.globl _FRCOSCPER1
                           1078 	.globl _FRCOSCPER0
                           1079 	.globl _FRCOSCKFILT
                           1080 	.globl _FRCOSCKFILT1
                           1081 	.globl _FRCOSCKFILT0
                           1082 	.globl _FRCOSCFREQ
                           1083 	.globl _FRCOSCFREQ1
                           1084 	.globl _FRCOSCFREQ0
                           1085 	.globl _FRCOSCCTRL
                           1086 	.globl _FRCOSCCONFIG
                           1087 	.globl _DMA1CONFIG
                           1088 	.globl _DMA1ADDR
                           1089 	.globl _DMA1ADDR1
                           1090 	.globl _DMA1ADDR0
                           1091 	.globl _DMA0CONFIG
                           1092 	.globl _DMA0ADDR
                           1093 	.globl _DMA0ADDR1
                           1094 	.globl _DMA0ADDR0
                           1095 	.globl _ADCTUNE2
                           1096 	.globl _ADCTUNE1
                           1097 	.globl _ADCTUNE0
                           1098 	.globl _ADCCH3VAL
                           1099 	.globl _ADCCH3VAL1
                           1100 	.globl _ADCCH3VAL0
                           1101 	.globl _ADCCH2VAL
                           1102 	.globl _ADCCH2VAL1
                           1103 	.globl _ADCCH2VAL0
                           1104 	.globl _ADCCH1VAL
                           1105 	.globl _ADCCH1VAL1
                           1106 	.globl _ADCCH1VAL0
                           1107 	.globl _ADCCH0VAL
                           1108 	.globl _ADCCH0VAL1
                           1109 	.globl _ADCCH0VAL0
                           1110 	.globl _axradio_transmit_PARM_3
                           1111 	.globl _axradio_transmit_PARM_2
                           1112 	.globl _axradio_trxstate
                           1113 	.globl _axradio_mode
                           1114 	.globl _axradio_conv_time_totimer0
                           1115 	.globl _axradio_isr
                           1116 	.globl _ax5043_receiver_on_continuous
                           1117 	.globl _ax5043_receiver_on_wor
                           1118 	.globl _ax5043_prepare_tx
                           1119 	.globl _ax5043_off
                           1120 	.globl _ax5043_off_xtal
                           1121 	.globl _axradio_wait_for_xtal
                           1122 	.globl _axradio_init
                           1123 	.globl _axradio_cansleep
                           1124 	.globl _axradio_set_mode
                           1125 	.globl _axradio_get_mode
                           1126 	.globl _axradio_set_channel
                           1127 	.globl _axradio_get_channel
                           1128 	.globl _axradio_get_pllrange
                           1129 	.globl _axradio_get_pllrange_tx
                           1130 	.globl _axradio_set_freqoffset
                           1131 	.globl _axradio_get_freqoffset
                           1132 	.globl _axradio_set_local_address
                           1133 	.globl _axradio_get_local_address
                           1134 	.globl _axradio_set_default_remote_address
                           1135 	.globl _axradio_get_default_remote_address
                           1136 	.globl _axradio_transmit
                           1137 	.globl _axradio_agc_freeze
                           1138 	.globl _axradio_agc_thaw
                           1139 ;--------------------------------------------------------
                           1140 ; special function registers
                           1141 ;--------------------------------------------------------
                           1142 	.area RSEG    (ABS,DATA)
   0000                    1143 	.org 0x0000
                    00E0   1144 G$ACC$0$0 == 0x00e0
                    00E0   1145 _ACC	=	0x00e0
                    00F0   1146 G$B$0$0 == 0x00f0
                    00F0   1147 _B	=	0x00f0
                    0083   1148 G$DPH$0$0 == 0x0083
                    0083   1149 _DPH	=	0x0083
                    0085   1150 G$DPH1$0$0 == 0x0085
                    0085   1151 _DPH1	=	0x0085
                    0082   1152 G$DPL$0$0 == 0x0082
                    0082   1153 _DPL	=	0x0082
                    0084   1154 G$DPL1$0$0 == 0x0084
                    0084   1155 _DPL1	=	0x0084
                    8382   1156 G$DPTR0$0$0 == 0x8382
                    8382   1157 _DPTR0	=	0x8382
                    8584   1158 G$DPTR1$0$0 == 0x8584
                    8584   1159 _DPTR1	=	0x8584
                    0086   1160 G$DPS$0$0 == 0x0086
                    0086   1161 _DPS	=	0x0086
                    00A0   1162 G$E2IE$0$0 == 0x00a0
                    00A0   1163 _E2IE	=	0x00a0
                    00C0   1164 G$E2IP$0$0 == 0x00c0
                    00C0   1165 _E2IP	=	0x00c0
                    0098   1166 G$EIE$0$0 == 0x0098
                    0098   1167 _EIE	=	0x0098
                    00B0   1168 G$EIP$0$0 == 0x00b0
                    00B0   1169 _EIP	=	0x00b0
                    00A8   1170 G$IE$0$0 == 0x00a8
                    00A8   1171 _IE	=	0x00a8
                    00B8   1172 G$IP$0$0 == 0x00b8
                    00B8   1173 _IP	=	0x00b8
                    0087   1174 G$PCON$0$0 == 0x0087
                    0087   1175 _PCON	=	0x0087
                    00D0   1176 G$PSW$0$0 == 0x00d0
                    00D0   1177 _PSW	=	0x00d0
                    0081   1178 G$SP$0$0 == 0x0081
                    0081   1179 _SP	=	0x0081
                    00D9   1180 G$XPAGE$0$0 == 0x00d9
                    00D9   1181 _XPAGE	=	0x00d9
                    00D9   1182 G$_XPAGE$0$0 == 0x00d9
                    00D9   1183 __XPAGE	=	0x00d9
                    00CA   1184 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA   1185 _ADCCH0CONFIG	=	0x00ca
                    00CB   1186 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB   1187 _ADCCH1CONFIG	=	0x00cb
                    00D2   1188 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2   1189 _ADCCH2CONFIG	=	0x00d2
                    00D3   1190 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3   1191 _ADCCH3CONFIG	=	0x00d3
                    00D1   1192 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1   1193 _ADCCLKSRC	=	0x00d1
                    00C9   1194 G$ADCCONV$0$0 == 0x00c9
                    00C9   1195 _ADCCONV	=	0x00c9
                    00E1   1196 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1   1197 _ANALOGCOMP	=	0x00e1
                    00C6   1198 G$CLKCON$0$0 == 0x00c6
                    00C6   1199 _CLKCON	=	0x00c6
                    00C7   1200 G$CLKSTAT$0$0 == 0x00c7
                    00C7   1201 _CLKSTAT	=	0x00c7
                    0097   1202 G$CODECONFIG$0$0 == 0x0097
                    0097   1203 _CODECONFIG	=	0x0097
                    00E3   1204 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3   1205 _DBGLNKBUF	=	0x00e3
                    00E2   1206 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2   1207 _DBGLNKSTAT	=	0x00e2
                    0089   1208 G$DIRA$0$0 == 0x0089
                    0089   1209 _DIRA	=	0x0089
                    008A   1210 G$DIRB$0$0 == 0x008a
                    008A   1211 _DIRB	=	0x008a
                    008B   1212 G$DIRC$0$0 == 0x008b
                    008B   1213 _DIRC	=	0x008b
                    008E   1214 G$DIRR$0$0 == 0x008e
                    008E   1215 _DIRR	=	0x008e
                    00C8   1216 G$PINA$0$0 == 0x00c8
                    00C8   1217 _PINA	=	0x00c8
                    00E8   1218 G$PINB$0$0 == 0x00e8
                    00E8   1219 _PINB	=	0x00e8
                    00F8   1220 G$PINC$0$0 == 0x00f8
                    00F8   1221 _PINC	=	0x00f8
                    008D   1222 G$PINR$0$0 == 0x008d
                    008D   1223 _PINR	=	0x008d
                    0080   1224 G$PORTA$0$0 == 0x0080
                    0080   1225 _PORTA	=	0x0080
                    0088   1226 G$PORTB$0$0 == 0x0088
                    0088   1227 _PORTB	=	0x0088
                    0090   1228 G$PORTC$0$0 == 0x0090
                    0090   1229 _PORTC	=	0x0090
                    008C   1230 G$PORTR$0$0 == 0x008c
                    008C   1231 _PORTR	=	0x008c
                    00CE   1232 G$IC0CAPT0$0$0 == 0x00ce
                    00CE   1233 _IC0CAPT0	=	0x00ce
                    00CF   1234 G$IC0CAPT1$0$0 == 0x00cf
                    00CF   1235 _IC0CAPT1	=	0x00cf
                    CFCE   1236 G$IC0CAPT$0$0 == 0xcfce
                    CFCE   1237 _IC0CAPT	=	0xcfce
                    00CC   1238 G$IC0MODE$0$0 == 0x00cc
                    00CC   1239 _IC0MODE	=	0x00cc
                    00CD   1240 G$IC0STATUS$0$0 == 0x00cd
                    00CD   1241 _IC0STATUS	=	0x00cd
                    00D6   1242 G$IC1CAPT0$0$0 == 0x00d6
                    00D6   1243 _IC1CAPT0	=	0x00d6
                    00D7   1244 G$IC1CAPT1$0$0 == 0x00d7
                    00D7   1245 _IC1CAPT1	=	0x00d7
                    D7D6   1246 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6   1247 _IC1CAPT	=	0xd7d6
                    00D4   1248 G$IC1MODE$0$0 == 0x00d4
                    00D4   1249 _IC1MODE	=	0x00d4
                    00D5   1250 G$IC1STATUS$0$0 == 0x00d5
                    00D5   1251 _IC1STATUS	=	0x00d5
                    0092   1252 G$NVADDR0$0$0 == 0x0092
                    0092   1253 _NVADDR0	=	0x0092
                    0093   1254 G$NVADDR1$0$0 == 0x0093
                    0093   1255 _NVADDR1	=	0x0093
                    9392   1256 G$NVADDR$0$0 == 0x9392
                    9392   1257 _NVADDR	=	0x9392
                    0094   1258 G$NVDATA0$0$0 == 0x0094
                    0094   1259 _NVDATA0	=	0x0094
                    0095   1260 G$NVDATA1$0$0 == 0x0095
                    0095   1261 _NVDATA1	=	0x0095
                    9594   1262 G$NVDATA$0$0 == 0x9594
                    9594   1263 _NVDATA	=	0x9594
                    0096   1264 G$NVKEY$0$0 == 0x0096
                    0096   1265 _NVKEY	=	0x0096
                    0091   1266 G$NVSTATUS$0$0 == 0x0091
                    0091   1267 _NVSTATUS	=	0x0091
                    00BC   1268 G$OC0COMP0$0$0 == 0x00bc
                    00BC   1269 _OC0COMP0	=	0x00bc
                    00BD   1270 G$OC0COMP1$0$0 == 0x00bd
                    00BD   1271 _OC0COMP1	=	0x00bd
                    BDBC   1272 G$OC0COMP$0$0 == 0xbdbc
                    BDBC   1273 _OC0COMP	=	0xbdbc
                    00B9   1274 G$OC0MODE$0$0 == 0x00b9
                    00B9   1275 _OC0MODE	=	0x00b9
                    00BA   1276 G$OC0PIN$0$0 == 0x00ba
                    00BA   1277 _OC0PIN	=	0x00ba
                    00BB   1278 G$OC0STATUS$0$0 == 0x00bb
                    00BB   1279 _OC0STATUS	=	0x00bb
                    00C4   1280 G$OC1COMP0$0$0 == 0x00c4
                    00C4   1281 _OC1COMP0	=	0x00c4
                    00C5   1282 G$OC1COMP1$0$0 == 0x00c5
                    00C5   1283 _OC1COMP1	=	0x00c5
                    C5C4   1284 G$OC1COMP$0$0 == 0xc5c4
                    C5C4   1285 _OC1COMP	=	0xc5c4
                    00C1   1286 G$OC1MODE$0$0 == 0x00c1
                    00C1   1287 _OC1MODE	=	0x00c1
                    00C2   1288 G$OC1PIN$0$0 == 0x00c2
                    00C2   1289 _OC1PIN	=	0x00c2
                    00C3   1290 G$OC1STATUS$0$0 == 0x00c3
                    00C3   1291 _OC1STATUS	=	0x00c3
                    00B1   1292 G$RADIOACC$0$0 == 0x00b1
                    00B1   1293 _RADIOACC	=	0x00b1
                    00B3   1294 G$RADIOADDR0$0$0 == 0x00b3
                    00B3   1295 _RADIOADDR0	=	0x00b3
                    00B2   1296 G$RADIOADDR1$0$0 == 0x00b2
                    00B2   1297 _RADIOADDR1	=	0x00b2
                    B2B3   1298 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3   1299 _RADIOADDR	=	0xb2b3
                    00B7   1300 G$RADIODATA0$0$0 == 0x00b7
                    00B7   1301 _RADIODATA0	=	0x00b7
                    00B6   1302 G$RADIODATA1$0$0 == 0x00b6
                    00B6   1303 _RADIODATA1	=	0x00b6
                    00B5   1304 G$RADIODATA2$0$0 == 0x00b5
                    00B5   1305 _RADIODATA2	=	0x00b5
                    00B4   1306 G$RADIODATA3$0$0 == 0x00b4
                    00B4   1307 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1308 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7   1309 _RADIODATA	=	0xb4b5b6b7
                    00BE   1310 G$RADIOSTAT0$0$0 == 0x00be
                    00BE   1311 _RADIOSTAT0	=	0x00be
                    00BF   1312 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF   1313 _RADIOSTAT1	=	0x00bf
                    BFBE   1314 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE   1315 _RADIOSTAT	=	0xbfbe
                    00DF   1316 G$SPCLKSRC$0$0 == 0x00df
                    00DF   1317 _SPCLKSRC	=	0x00df
                    00DC   1318 G$SPMODE$0$0 == 0x00dc
                    00DC   1319 _SPMODE	=	0x00dc
                    00DE   1320 G$SPSHREG$0$0 == 0x00de
                    00DE   1321 _SPSHREG	=	0x00de
                    00DD   1322 G$SPSTATUS$0$0 == 0x00dd
                    00DD   1323 _SPSTATUS	=	0x00dd
                    009A   1324 G$T0CLKSRC$0$0 == 0x009a
                    009A   1325 _T0CLKSRC	=	0x009a
                    009C   1326 G$T0CNT0$0$0 == 0x009c
                    009C   1327 _T0CNT0	=	0x009c
                    009D   1328 G$T0CNT1$0$0 == 0x009d
                    009D   1329 _T0CNT1	=	0x009d
                    9D9C   1330 G$T0CNT$0$0 == 0x9d9c
                    9D9C   1331 _T0CNT	=	0x9d9c
                    0099   1332 G$T0MODE$0$0 == 0x0099
                    0099   1333 _T0MODE	=	0x0099
                    009E   1334 G$T0PERIOD0$0$0 == 0x009e
                    009E   1335 _T0PERIOD0	=	0x009e
                    009F   1336 G$T0PERIOD1$0$0 == 0x009f
                    009F   1337 _T0PERIOD1	=	0x009f
                    9F9E   1338 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E   1339 _T0PERIOD	=	0x9f9e
                    009B   1340 G$T0STATUS$0$0 == 0x009b
                    009B   1341 _T0STATUS	=	0x009b
                    00A2   1342 G$T1CLKSRC$0$0 == 0x00a2
                    00A2   1343 _T1CLKSRC	=	0x00a2
                    00A4   1344 G$T1CNT0$0$0 == 0x00a4
                    00A4   1345 _T1CNT0	=	0x00a4
                    00A5   1346 G$T1CNT1$0$0 == 0x00a5
                    00A5   1347 _T1CNT1	=	0x00a5
                    A5A4   1348 G$T1CNT$0$0 == 0xa5a4
                    A5A4   1349 _T1CNT	=	0xa5a4
                    00A1   1350 G$T1MODE$0$0 == 0x00a1
                    00A1   1351 _T1MODE	=	0x00a1
                    00A6   1352 G$T1PERIOD0$0$0 == 0x00a6
                    00A6   1353 _T1PERIOD0	=	0x00a6
                    00A7   1354 G$T1PERIOD1$0$0 == 0x00a7
                    00A7   1355 _T1PERIOD1	=	0x00a7
                    A7A6   1356 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6   1357 _T1PERIOD	=	0xa7a6
                    00A3   1358 G$T1STATUS$0$0 == 0x00a3
                    00A3   1359 _T1STATUS	=	0x00a3
                    00AA   1360 G$T2CLKSRC$0$0 == 0x00aa
                    00AA   1361 _T2CLKSRC	=	0x00aa
                    00AC   1362 G$T2CNT0$0$0 == 0x00ac
                    00AC   1363 _T2CNT0	=	0x00ac
                    00AD   1364 G$T2CNT1$0$0 == 0x00ad
                    00AD   1365 _T2CNT1	=	0x00ad
                    ADAC   1366 G$T2CNT$0$0 == 0xadac
                    ADAC   1367 _T2CNT	=	0xadac
                    00A9   1368 G$T2MODE$0$0 == 0x00a9
                    00A9   1369 _T2MODE	=	0x00a9
                    00AE   1370 G$T2PERIOD0$0$0 == 0x00ae
                    00AE   1371 _T2PERIOD0	=	0x00ae
                    00AF   1372 G$T2PERIOD1$0$0 == 0x00af
                    00AF   1373 _T2PERIOD1	=	0x00af
                    AFAE   1374 G$T2PERIOD$0$0 == 0xafae
                    AFAE   1375 _T2PERIOD	=	0xafae
                    00AB   1376 G$T2STATUS$0$0 == 0x00ab
                    00AB   1377 _T2STATUS	=	0x00ab
                    00E4   1378 G$U0CTRL$0$0 == 0x00e4
                    00E4   1379 _U0CTRL	=	0x00e4
                    00E7   1380 G$U0MODE$0$0 == 0x00e7
                    00E7   1381 _U0MODE	=	0x00e7
                    00E6   1382 G$U0SHREG$0$0 == 0x00e6
                    00E6   1383 _U0SHREG	=	0x00e6
                    00E5   1384 G$U0STATUS$0$0 == 0x00e5
                    00E5   1385 _U0STATUS	=	0x00e5
                    00EC   1386 G$U1CTRL$0$0 == 0x00ec
                    00EC   1387 _U1CTRL	=	0x00ec
                    00EF   1388 G$U1MODE$0$0 == 0x00ef
                    00EF   1389 _U1MODE	=	0x00ef
                    00EE   1390 G$U1SHREG$0$0 == 0x00ee
                    00EE   1391 _U1SHREG	=	0x00ee
                    00ED   1392 G$U1STATUS$0$0 == 0x00ed
                    00ED   1393 _U1STATUS	=	0x00ed
                    00DA   1394 G$WDTCFG$0$0 == 0x00da
                    00DA   1395 _WDTCFG	=	0x00da
                    00DB   1396 G$WDTRESET$0$0 == 0x00db
                    00DB   1397 _WDTRESET	=	0x00db
                    00F1   1398 G$WTCFGA$0$0 == 0x00f1
                    00F1   1399 _WTCFGA	=	0x00f1
                    00F9   1400 G$WTCFGB$0$0 == 0x00f9
                    00F9   1401 _WTCFGB	=	0x00f9
                    00F2   1402 G$WTCNTA0$0$0 == 0x00f2
                    00F2   1403 _WTCNTA0	=	0x00f2
                    00F3   1404 G$WTCNTA1$0$0 == 0x00f3
                    00F3   1405 _WTCNTA1	=	0x00f3
                    F3F2   1406 G$WTCNTA$0$0 == 0xf3f2
                    F3F2   1407 _WTCNTA	=	0xf3f2
                    00FA   1408 G$WTCNTB0$0$0 == 0x00fa
                    00FA   1409 _WTCNTB0	=	0x00fa
                    00FB   1410 G$WTCNTB1$0$0 == 0x00fb
                    00FB   1411 _WTCNTB1	=	0x00fb
                    FBFA   1412 G$WTCNTB$0$0 == 0xfbfa
                    FBFA   1413 _WTCNTB	=	0xfbfa
                    00EB   1414 G$WTCNTR1$0$0 == 0x00eb
                    00EB   1415 _WTCNTR1	=	0x00eb
                    00F4   1416 G$WTEVTA0$0$0 == 0x00f4
                    00F4   1417 _WTEVTA0	=	0x00f4
                    00F5   1418 G$WTEVTA1$0$0 == 0x00f5
                    00F5   1419 _WTEVTA1	=	0x00f5
                    F5F4   1420 G$WTEVTA$0$0 == 0xf5f4
                    F5F4   1421 _WTEVTA	=	0xf5f4
                    00F6   1422 G$WTEVTB0$0$0 == 0x00f6
                    00F6   1423 _WTEVTB0	=	0x00f6
                    00F7   1424 G$WTEVTB1$0$0 == 0x00f7
                    00F7   1425 _WTEVTB1	=	0x00f7
                    F7F6   1426 G$WTEVTB$0$0 == 0xf7f6
                    F7F6   1427 _WTEVTB	=	0xf7f6
                    00FC   1428 G$WTEVTC0$0$0 == 0x00fc
                    00FC   1429 _WTEVTC0	=	0x00fc
                    00FD   1430 G$WTEVTC1$0$0 == 0x00fd
                    00FD   1431 _WTEVTC1	=	0x00fd
                    FDFC   1432 G$WTEVTC$0$0 == 0xfdfc
                    FDFC   1433 _WTEVTC	=	0xfdfc
                    00FE   1434 G$WTEVTD0$0$0 == 0x00fe
                    00FE   1435 _WTEVTD0	=	0x00fe
                    00FF   1436 G$WTEVTD1$0$0 == 0x00ff
                    00FF   1437 _WTEVTD1	=	0x00ff
                    FFFE   1438 G$WTEVTD$0$0 == 0xfffe
                    FFFE   1439 _WTEVTD	=	0xfffe
                    00E9   1440 G$WTIRQEN$0$0 == 0x00e9
                    00E9   1441 _WTIRQEN	=	0x00e9
                    00EA   1442 G$WTSTAT$0$0 == 0x00ea
                    00EA   1443 _WTSTAT	=	0x00ea
                           1444 ;--------------------------------------------------------
                           1445 ; special function bits
                           1446 ;--------------------------------------------------------
                           1447 	.area RSEG    (ABS,DATA)
   0000                    1448 	.org 0x0000
                    00E0   1449 G$ACC_0$0$0 == 0x00e0
                    00E0   1450 _ACC_0	=	0x00e0
                    00E1   1451 G$ACC_1$0$0 == 0x00e1
                    00E1   1452 _ACC_1	=	0x00e1
                    00E2   1453 G$ACC_2$0$0 == 0x00e2
                    00E2   1454 _ACC_2	=	0x00e2
                    00E3   1455 G$ACC_3$0$0 == 0x00e3
                    00E3   1456 _ACC_3	=	0x00e3
                    00E4   1457 G$ACC_4$0$0 == 0x00e4
                    00E4   1458 _ACC_4	=	0x00e4
                    00E5   1459 G$ACC_5$0$0 == 0x00e5
                    00E5   1460 _ACC_5	=	0x00e5
                    00E6   1461 G$ACC_6$0$0 == 0x00e6
                    00E6   1462 _ACC_6	=	0x00e6
                    00E7   1463 G$ACC_7$0$0 == 0x00e7
                    00E7   1464 _ACC_7	=	0x00e7
                    00F0   1465 G$B_0$0$0 == 0x00f0
                    00F0   1466 _B_0	=	0x00f0
                    00F1   1467 G$B_1$0$0 == 0x00f1
                    00F1   1468 _B_1	=	0x00f1
                    00F2   1469 G$B_2$0$0 == 0x00f2
                    00F2   1470 _B_2	=	0x00f2
                    00F3   1471 G$B_3$0$0 == 0x00f3
                    00F3   1472 _B_3	=	0x00f3
                    00F4   1473 G$B_4$0$0 == 0x00f4
                    00F4   1474 _B_4	=	0x00f4
                    00F5   1475 G$B_5$0$0 == 0x00f5
                    00F5   1476 _B_5	=	0x00f5
                    00F6   1477 G$B_6$0$0 == 0x00f6
                    00F6   1478 _B_6	=	0x00f6
                    00F7   1479 G$B_7$0$0 == 0x00f7
                    00F7   1480 _B_7	=	0x00f7
                    00A0   1481 G$E2IE_0$0$0 == 0x00a0
                    00A0   1482 _E2IE_0	=	0x00a0
                    00A1   1483 G$E2IE_1$0$0 == 0x00a1
                    00A1   1484 _E2IE_1	=	0x00a1
                    00A2   1485 G$E2IE_2$0$0 == 0x00a2
                    00A2   1486 _E2IE_2	=	0x00a2
                    00A3   1487 G$E2IE_3$0$0 == 0x00a3
                    00A3   1488 _E2IE_3	=	0x00a3
                    00A4   1489 G$E2IE_4$0$0 == 0x00a4
                    00A4   1490 _E2IE_4	=	0x00a4
                    00A5   1491 G$E2IE_5$0$0 == 0x00a5
                    00A5   1492 _E2IE_5	=	0x00a5
                    00A6   1493 G$E2IE_6$0$0 == 0x00a6
                    00A6   1494 _E2IE_6	=	0x00a6
                    00A7   1495 G$E2IE_7$0$0 == 0x00a7
                    00A7   1496 _E2IE_7	=	0x00a7
                    00C0   1497 G$E2IP_0$0$0 == 0x00c0
                    00C0   1498 _E2IP_0	=	0x00c0
                    00C1   1499 G$E2IP_1$0$0 == 0x00c1
                    00C1   1500 _E2IP_1	=	0x00c1
                    00C2   1501 G$E2IP_2$0$0 == 0x00c2
                    00C2   1502 _E2IP_2	=	0x00c2
                    00C3   1503 G$E2IP_3$0$0 == 0x00c3
                    00C3   1504 _E2IP_3	=	0x00c3
                    00C4   1505 G$E2IP_4$0$0 == 0x00c4
                    00C4   1506 _E2IP_4	=	0x00c4
                    00C5   1507 G$E2IP_5$0$0 == 0x00c5
                    00C5   1508 _E2IP_5	=	0x00c5
                    00C6   1509 G$E2IP_6$0$0 == 0x00c6
                    00C6   1510 _E2IP_6	=	0x00c6
                    00C7   1511 G$E2IP_7$0$0 == 0x00c7
                    00C7   1512 _E2IP_7	=	0x00c7
                    0098   1513 G$EIE_0$0$0 == 0x0098
                    0098   1514 _EIE_0	=	0x0098
                    0099   1515 G$EIE_1$0$0 == 0x0099
                    0099   1516 _EIE_1	=	0x0099
                    009A   1517 G$EIE_2$0$0 == 0x009a
                    009A   1518 _EIE_2	=	0x009a
                    009B   1519 G$EIE_3$0$0 == 0x009b
                    009B   1520 _EIE_3	=	0x009b
                    009C   1521 G$EIE_4$0$0 == 0x009c
                    009C   1522 _EIE_4	=	0x009c
                    009D   1523 G$EIE_5$0$0 == 0x009d
                    009D   1524 _EIE_5	=	0x009d
                    009E   1525 G$EIE_6$0$0 == 0x009e
                    009E   1526 _EIE_6	=	0x009e
                    009F   1527 G$EIE_7$0$0 == 0x009f
                    009F   1528 _EIE_7	=	0x009f
                    00B0   1529 G$EIP_0$0$0 == 0x00b0
                    00B0   1530 _EIP_0	=	0x00b0
                    00B1   1531 G$EIP_1$0$0 == 0x00b1
                    00B1   1532 _EIP_1	=	0x00b1
                    00B2   1533 G$EIP_2$0$0 == 0x00b2
                    00B2   1534 _EIP_2	=	0x00b2
                    00B3   1535 G$EIP_3$0$0 == 0x00b3
                    00B3   1536 _EIP_3	=	0x00b3
                    00B4   1537 G$EIP_4$0$0 == 0x00b4
                    00B4   1538 _EIP_4	=	0x00b4
                    00B5   1539 G$EIP_5$0$0 == 0x00b5
                    00B5   1540 _EIP_5	=	0x00b5
                    00B6   1541 G$EIP_6$0$0 == 0x00b6
                    00B6   1542 _EIP_6	=	0x00b6
                    00B7   1543 G$EIP_7$0$0 == 0x00b7
                    00B7   1544 _EIP_7	=	0x00b7
                    00A8   1545 G$IE_0$0$0 == 0x00a8
                    00A8   1546 _IE_0	=	0x00a8
                    00A9   1547 G$IE_1$0$0 == 0x00a9
                    00A9   1548 _IE_1	=	0x00a9
                    00AA   1549 G$IE_2$0$0 == 0x00aa
                    00AA   1550 _IE_2	=	0x00aa
                    00AB   1551 G$IE_3$0$0 == 0x00ab
                    00AB   1552 _IE_3	=	0x00ab
                    00AC   1553 G$IE_4$0$0 == 0x00ac
                    00AC   1554 _IE_4	=	0x00ac
                    00AD   1555 G$IE_5$0$0 == 0x00ad
                    00AD   1556 _IE_5	=	0x00ad
                    00AE   1557 G$IE_6$0$0 == 0x00ae
                    00AE   1558 _IE_6	=	0x00ae
                    00AF   1559 G$IE_7$0$0 == 0x00af
                    00AF   1560 _IE_7	=	0x00af
                    00AF   1561 G$EA$0$0 == 0x00af
                    00AF   1562 _EA	=	0x00af
                    00B8   1563 G$IP_0$0$0 == 0x00b8
                    00B8   1564 _IP_0	=	0x00b8
                    00B9   1565 G$IP_1$0$0 == 0x00b9
                    00B9   1566 _IP_1	=	0x00b9
                    00BA   1567 G$IP_2$0$0 == 0x00ba
                    00BA   1568 _IP_2	=	0x00ba
                    00BB   1569 G$IP_3$0$0 == 0x00bb
                    00BB   1570 _IP_3	=	0x00bb
                    00BC   1571 G$IP_4$0$0 == 0x00bc
                    00BC   1572 _IP_4	=	0x00bc
                    00BD   1573 G$IP_5$0$0 == 0x00bd
                    00BD   1574 _IP_5	=	0x00bd
                    00BE   1575 G$IP_6$0$0 == 0x00be
                    00BE   1576 _IP_6	=	0x00be
                    00BF   1577 G$IP_7$0$0 == 0x00bf
                    00BF   1578 _IP_7	=	0x00bf
                    00D0   1579 G$P$0$0 == 0x00d0
                    00D0   1580 _P	=	0x00d0
                    00D1   1581 G$F1$0$0 == 0x00d1
                    00D1   1582 _F1	=	0x00d1
                    00D2   1583 G$OV$0$0 == 0x00d2
                    00D2   1584 _OV	=	0x00d2
                    00D3   1585 G$RS0$0$0 == 0x00d3
                    00D3   1586 _RS0	=	0x00d3
                    00D4   1587 G$RS1$0$0 == 0x00d4
                    00D4   1588 _RS1	=	0x00d4
                    00D5   1589 G$F0$0$0 == 0x00d5
                    00D5   1590 _F0	=	0x00d5
                    00D6   1591 G$AC$0$0 == 0x00d6
                    00D6   1592 _AC	=	0x00d6
                    00D7   1593 G$CY$0$0 == 0x00d7
                    00D7   1594 _CY	=	0x00d7
                    00C8   1595 G$PINA_0$0$0 == 0x00c8
                    00C8   1596 _PINA_0	=	0x00c8
                    00C9   1597 G$PINA_1$0$0 == 0x00c9
                    00C9   1598 _PINA_1	=	0x00c9
                    00CA   1599 G$PINA_2$0$0 == 0x00ca
                    00CA   1600 _PINA_2	=	0x00ca
                    00CB   1601 G$PINA_3$0$0 == 0x00cb
                    00CB   1602 _PINA_3	=	0x00cb
                    00CC   1603 G$PINA_4$0$0 == 0x00cc
                    00CC   1604 _PINA_4	=	0x00cc
                    00CD   1605 G$PINA_5$0$0 == 0x00cd
                    00CD   1606 _PINA_5	=	0x00cd
                    00CE   1607 G$PINA_6$0$0 == 0x00ce
                    00CE   1608 _PINA_6	=	0x00ce
                    00CF   1609 G$PINA_7$0$0 == 0x00cf
                    00CF   1610 _PINA_7	=	0x00cf
                    00E8   1611 G$PINB_0$0$0 == 0x00e8
                    00E8   1612 _PINB_0	=	0x00e8
                    00E9   1613 G$PINB_1$0$0 == 0x00e9
                    00E9   1614 _PINB_1	=	0x00e9
                    00EA   1615 G$PINB_2$0$0 == 0x00ea
                    00EA   1616 _PINB_2	=	0x00ea
                    00EB   1617 G$PINB_3$0$0 == 0x00eb
                    00EB   1618 _PINB_3	=	0x00eb
                    00EC   1619 G$PINB_4$0$0 == 0x00ec
                    00EC   1620 _PINB_4	=	0x00ec
                    00ED   1621 G$PINB_5$0$0 == 0x00ed
                    00ED   1622 _PINB_5	=	0x00ed
                    00EE   1623 G$PINB_6$0$0 == 0x00ee
                    00EE   1624 _PINB_6	=	0x00ee
                    00EF   1625 G$PINB_7$0$0 == 0x00ef
                    00EF   1626 _PINB_7	=	0x00ef
                    00F8   1627 G$PINC_0$0$0 == 0x00f8
                    00F8   1628 _PINC_0	=	0x00f8
                    00F9   1629 G$PINC_1$0$0 == 0x00f9
                    00F9   1630 _PINC_1	=	0x00f9
                    00FA   1631 G$PINC_2$0$0 == 0x00fa
                    00FA   1632 _PINC_2	=	0x00fa
                    00FB   1633 G$PINC_3$0$0 == 0x00fb
                    00FB   1634 _PINC_3	=	0x00fb
                    00FC   1635 G$PINC_4$0$0 == 0x00fc
                    00FC   1636 _PINC_4	=	0x00fc
                    00FD   1637 G$PINC_5$0$0 == 0x00fd
                    00FD   1638 _PINC_5	=	0x00fd
                    00FE   1639 G$PINC_6$0$0 == 0x00fe
                    00FE   1640 _PINC_6	=	0x00fe
                    00FF   1641 G$PINC_7$0$0 == 0x00ff
                    00FF   1642 _PINC_7	=	0x00ff
                    0080   1643 G$PORTA_0$0$0 == 0x0080
                    0080   1644 _PORTA_0	=	0x0080
                    0081   1645 G$PORTA_1$0$0 == 0x0081
                    0081   1646 _PORTA_1	=	0x0081
                    0082   1647 G$PORTA_2$0$0 == 0x0082
                    0082   1648 _PORTA_2	=	0x0082
                    0083   1649 G$PORTA_3$0$0 == 0x0083
                    0083   1650 _PORTA_3	=	0x0083
                    0084   1651 G$PORTA_4$0$0 == 0x0084
                    0084   1652 _PORTA_4	=	0x0084
                    0085   1653 G$PORTA_5$0$0 == 0x0085
                    0085   1654 _PORTA_5	=	0x0085
                    0086   1655 G$PORTA_6$0$0 == 0x0086
                    0086   1656 _PORTA_6	=	0x0086
                    0087   1657 G$PORTA_7$0$0 == 0x0087
                    0087   1658 _PORTA_7	=	0x0087
                    0088   1659 G$PORTB_0$0$0 == 0x0088
                    0088   1660 _PORTB_0	=	0x0088
                    0089   1661 G$PORTB_1$0$0 == 0x0089
                    0089   1662 _PORTB_1	=	0x0089
                    008A   1663 G$PORTB_2$0$0 == 0x008a
                    008A   1664 _PORTB_2	=	0x008a
                    008B   1665 G$PORTB_3$0$0 == 0x008b
                    008B   1666 _PORTB_3	=	0x008b
                    008C   1667 G$PORTB_4$0$0 == 0x008c
                    008C   1668 _PORTB_4	=	0x008c
                    008D   1669 G$PORTB_5$0$0 == 0x008d
                    008D   1670 _PORTB_5	=	0x008d
                    008E   1671 G$PORTB_6$0$0 == 0x008e
                    008E   1672 _PORTB_6	=	0x008e
                    008F   1673 G$PORTB_7$0$0 == 0x008f
                    008F   1674 _PORTB_7	=	0x008f
                    0090   1675 G$PORTC_0$0$0 == 0x0090
                    0090   1676 _PORTC_0	=	0x0090
                    0091   1677 G$PORTC_1$0$0 == 0x0091
                    0091   1678 _PORTC_1	=	0x0091
                    0092   1679 G$PORTC_2$0$0 == 0x0092
                    0092   1680 _PORTC_2	=	0x0092
                    0093   1681 G$PORTC_3$0$0 == 0x0093
                    0093   1682 _PORTC_3	=	0x0093
                    0094   1683 G$PORTC_4$0$0 == 0x0094
                    0094   1684 _PORTC_4	=	0x0094
                    0095   1685 G$PORTC_5$0$0 == 0x0095
                    0095   1686 _PORTC_5	=	0x0095
                    0096   1687 G$PORTC_6$0$0 == 0x0096
                    0096   1688 _PORTC_6	=	0x0096
                    0097   1689 G$PORTC_7$0$0 == 0x0097
                    0097   1690 _PORTC_7	=	0x0097
                           1691 ;--------------------------------------------------------
                           1692 ; overlayable register banks
                           1693 ;--------------------------------------------------------
                           1694 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1695 	.ds 8
                           1696 ;--------------------------------------------------------
                           1697 ; overlayable bit register bank
                           1698 ;--------------------------------------------------------
                           1699 	.area BIT_BANK	(REL,OVR,DATA)
   0020                    1700 bits:
   0020                    1701 	.ds 1
                    8000   1702 	b0 = bits[0]
                    8100   1703 	b1 = bits[1]
                    8200   1704 	b2 = bits[2]
                    8300   1705 	b3 = bits[3]
                    8400   1706 	b4 = bits[4]
                    8500   1707 	b5 = bits[5]
                    8600   1708 	b6 = bits[6]
                    8700   1709 	b7 = bits[7]
                           1710 ;--------------------------------------------------------
                           1711 ; internal ram data
                           1712 ;--------------------------------------------------------
                           1713 	.area DSEG    (DATA)
                    0000   1714 G$axradio_mode$0$0==.
   000A                    1715 _axradio_mode::
   000A                    1716 	.ds 1
                    0001   1717 G$axradio_trxstate$0$0==.
   000B                    1718 _axradio_trxstate::
   000B                    1719 	.ds 1
                    0002   1720 Leasyax5043.axradio_transmit$pkt$1$395==.
   000C                    1721 _axradio_transmit_PARM_2:
   000C                    1722 	.ds 3
                    0005   1723 Leasyax5043.axradio_transmit$pktlen$1$395==.
   000F                    1724 _axradio_transmit_PARM_3:
   000F                    1725 	.ds 2
                           1726 ;--------------------------------------------------------
                           1727 ; overlayable items in internal ram 
                           1728 ;--------------------------------------------------------
                           1729 	.area	OSEG    (OVR,DATA)
                    0000   1730 Leasyax5043.axradio_set_channel$rng$1$370==.
   0027                    1731 _axradio_set_channel_rng_1_370:
   0027                    1732 	.ds 1
                           1733 ;--------------------------------------------------------
                           1734 ; indirectly addressable internal ram data
                           1735 ;--------------------------------------------------------
                           1736 	.area ISEG    (DATA)
                           1737 ;--------------------------------------------------------
                           1738 ; absolute internal ram data
                           1739 ;--------------------------------------------------------
                           1740 	.area IABS    (ABS,DATA)
                           1741 	.area IABS    (ABS,DATA)
                           1742 ;--------------------------------------------------------
                           1743 ; bit data
                           1744 ;--------------------------------------------------------
                           1745 	.area BSEG    (BIT)
                           1746 ;--------------------------------------------------------
                           1747 ; paged external ram data
                           1748 ;--------------------------------------------------------
                           1749 	.area PSEG    (PAG,XDATA)
                           1750 ;--------------------------------------------------------
                           1751 ; external ram data
                           1752 ;--------------------------------------------------------
                           1753 	.area XSEG    (XDATA)
                    7020   1754 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1755 _ADCCH0VAL0	=	0x7020
                    7021   1756 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1757 _ADCCH0VAL1	=	0x7021
                    7020   1758 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1759 _ADCCH0VAL	=	0x7020
                    7022   1760 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1761 _ADCCH1VAL0	=	0x7022
                    7023   1762 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1763 _ADCCH1VAL1	=	0x7023
                    7022   1764 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1765 _ADCCH1VAL	=	0x7022
                    7024   1766 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1767 _ADCCH2VAL0	=	0x7024
                    7025   1768 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1769 _ADCCH2VAL1	=	0x7025
                    7024   1770 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1771 _ADCCH2VAL	=	0x7024
                    7026   1772 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1773 _ADCCH3VAL0	=	0x7026
                    7027   1774 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1775 _ADCCH3VAL1	=	0x7027
                    7026   1776 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1777 _ADCCH3VAL	=	0x7026
                    7028   1778 G$ADCTUNE0$0$0 == 0x7028
                    7028   1779 _ADCTUNE0	=	0x7028
                    7029   1780 G$ADCTUNE1$0$0 == 0x7029
                    7029   1781 _ADCTUNE1	=	0x7029
                    702A   1782 G$ADCTUNE2$0$0 == 0x702a
                    702A   1783 _ADCTUNE2	=	0x702a
                    7010   1784 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1785 _DMA0ADDR0	=	0x7010
                    7011   1786 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1787 _DMA0ADDR1	=	0x7011
                    7010   1788 G$DMA0ADDR$0$0 == 0x7010
                    7010   1789 _DMA0ADDR	=	0x7010
                    7014   1790 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1791 _DMA0CONFIG	=	0x7014
                    7012   1792 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1793 _DMA1ADDR0	=	0x7012
                    7013   1794 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1795 _DMA1ADDR1	=	0x7013
                    7012   1796 G$DMA1ADDR$0$0 == 0x7012
                    7012   1797 _DMA1ADDR	=	0x7012
                    7015   1798 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1799 _DMA1CONFIG	=	0x7015
                    7070   1800 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1801 _FRCOSCCONFIG	=	0x7070
                    7071   1802 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1803 _FRCOSCCTRL	=	0x7071
                    7076   1804 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1805 _FRCOSCFREQ0	=	0x7076
                    7077   1806 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1807 _FRCOSCFREQ1	=	0x7077
                    7076   1808 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1809 _FRCOSCFREQ	=	0x7076
                    7072   1810 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1811 _FRCOSCKFILT0	=	0x7072
                    7073   1812 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1813 _FRCOSCKFILT1	=	0x7073
                    7072   1814 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1815 _FRCOSCKFILT	=	0x7072
                    7078   1816 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1817 _FRCOSCPER0	=	0x7078
                    7079   1818 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1819 _FRCOSCPER1	=	0x7079
                    7078   1820 G$FRCOSCPER$0$0 == 0x7078
                    7078   1821 _FRCOSCPER	=	0x7078
                    7074   1822 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1823 _FRCOSCREF0	=	0x7074
                    7075   1824 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1825 _FRCOSCREF1	=	0x7075
                    7074   1826 G$FRCOSCREF$0$0 == 0x7074
                    7074   1827 _FRCOSCREF	=	0x7074
                    7007   1828 G$ANALOGA$0$0 == 0x7007
                    7007   1829 _ANALOGA	=	0x7007
                    700C   1830 G$GPIOENABLE$0$0 == 0x700c
                    700C   1831 _GPIOENABLE	=	0x700c
                    7003   1832 G$EXTIRQ$0$0 == 0x7003
                    7003   1833 _EXTIRQ	=	0x7003
                    7000   1834 G$INTCHGA$0$0 == 0x7000
                    7000   1835 _INTCHGA	=	0x7000
                    7001   1836 G$INTCHGB$0$0 == 0x7001
                    7001   1837 _INTCHGB	=	0x7001
                    7002   1838 G$INTCHGC$0$0 == 0x7002
                    7002   1839 _INTCHGC	=	0x7002
                    7008   1840 G$PALTA$0$0 == 0x7008
                    7008   1841 _PALTA	=	0x7008
                    7009   1842 G$PALTB$0$0 == 0x7009
                    7009   1843 _PALTB	=	0x7009
                    700A   1844 G$PALTC$0$0 == 0x700a
                    700A   1845 _PALTC	=	0x700a
                    7046   1846 G$PALTRADIO$0$0 == 0x7046
                    7046   1847 _PALTRADIO	=	0x7046
                    7004   1848 G$PINCHGA$0$0 == 0x7004
                    7004   1849 _PINCHGA	=	0x7004
                    7005   1850 G$PINCHGB$0$0 == 0x7005
                    7005   1851 _PINCHGB	=	0x7005
                    7006   1852 G$PINCHGC$0$0 == 0x7006
                    7006   1853 _PINCHGC	=	0x7006
                    700B   1854 G$PINSEL$0$0 == 0x700b
                    700B   1855 _PINSEL	=	0x700b
                    7060   1856 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1857 _LPOSCCONFIG	=	0x7060
                    7066   1858 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1859 _LPOSCFREQ0	=	0x7066
                    7067   1860 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1861 _LPOSCFREQ1	=	0x7067
                    7066   1862 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1863 _LPOSCFREQ	=	0x7066
                    7062   1864 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1865 _LPOSCKFILT0	=	0x7062
                    7063   1866 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1867 _LPOSCKFILT1	=	0x7063
                    7062   1868 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1869 _LPOSCKFILT	=	0x7062
                    7068   1870 G$LPOSCPER0$0$0 == 0x7068
                    7068   1871 _LPOSCPER0	=	0x7068
                    7069   1872 G$LPOSCPER1$0$0 == 0x7069
                    7069   1873 _LPOSCPER1	=	0x7069
                    7068   1874 G$LPOSCPER$0$0 == 0x7068
                    7068   1875 _LPOSCPER	=	0x7068
                    7064   1876 G$LPOSCREF0$0$0 == 0x7064
                    7064   1877 _LPOSCREF0	=	0x7064
                    7065   1878 G$LPOSCREF1$0$0 == 0x7065
                    7065   1879 _LPOSCREF1	=	0x7065
                    7064   1880 G$LPOSCREF$0$0 == 0x7064
                    7064   1881 _LPOSCREF	=	0x7064
                    7054   1882 G$LPXOSCGM$0$0 == 0x7054
                    7054   1883 _LPXOSCGM	=	0x7054
                    7F01   1884 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1885 _MISCCTRL	=	0x7f01
                    7053   1886 G$OSCCALIB$0$0 == 0x7053
                    7053   1887 _OSCCALIB	=	0x7053
                    7050   1888 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1889 _OSCFORCERUN	=	0x7050
                    7052   1890 G$OSCREADY$0$0 == 0x7052
                    7052   1891 _OSCREADY	=	0x7052
                    7051   1892 G$OSCRUN$0$0 == 0x7051
                    7051   1893 _OSCRUN	=	0x7051
                    7040   1894 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1895 _RADIOFDATAADDR0	=	0x7040
                    7041   1896 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1897 _RADIOFDATAADDR1	=	0x7041
                    7040   1898 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1899 _RADIOFDATAADDR	=	0x7040
                    7042   1900 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1901 _RADIOFSTATADDR0	=	0x7042
                    7043   1902 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1903 _RADIOFSTATADDR1	=	0x7043
                    7042   1904 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1905 _RADIOFSTATADDR	=	0x7042
                    7044   1906 G$RADIOMUX$0$0 == 0x7044
                    7044   1907 _RADIOMUX	=	0x7044
                    7084   1908 G$SCRATCH0$0$0 == 0x7084
                    7084   1909 _SCRATCH0	=	0x7084
                    7085   1910 G$SCRATCH1$0$0 == 0x7085
                    7085   1911 _SCRATCH1	=	0x7085
                    7086   1912 G$SCRATCH2$0$0 == 0x7086
                    7086   1913 _SCRATCH2	=	0x7086
                    7087   1914 G$SCRATCH3$0$0 == 0x7087
                    7087   1915 _SCRATCH3	=	0x7087
                    7F00   1916 G$SILICONREV$0$0 == 0x7f00
                    7F00   1917 _SILICONREV	=	0x7f00
                    7F19   1918 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1919 _XTALAMPL	=	0x7f19
                    7F18   1920 G$XTALOSC$0$0 == 0x7f18
                    7F18   1921 _XTALOSC	=	0x7f18
                    7F1A   1922 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1923 _XTALREADY	=	0x7f1a
                    3F82   1924 G$XDPTR0$0$0 == 0x3f82
                    3F82   1925 _XDPTR0	=	0x3f82
                    3F84   1926 G$XDPTR1$0$0 == 0x3f84
                    3F84   1927 _XDPTR1	=	0x3f84
                    3FA8   1928 G$XIE$0$0 == 0x3fa8
                    3FA8   1929 _XIE	=	0x3fa8
                    3FB8   1930 G$XIP$0$0 == 0x3fb8
                    3FB8   1931 _XIP	=	0x3fb8
                    3F87   1932 G$XPCON$0$0 == 0x3f87
                    3F87   1933 _XPCON	=	0x3f87
                    3FCA   1934 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1935 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1936 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1937 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1938 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1939 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1940 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1941 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1942 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1943 _XADCCLKSRC	=	0x3fd1
                    3FC9   1944 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1945 _XADCCONV	=	0x3fc9
                    3FE1   1946 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1947 _XANALOGCOMP	=	0x3fe1
                    3FC6   1948 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1949 _XCLKCON	=	0x3fc6
                    3FC7   1950 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1951 _XCLKSTAT	=	0x3fc7
                    3F97   1952 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1953 _XCODECONFIG	=	0x3f97
                    3FE3   1954 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1955 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1956 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1957 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1958 G$XDIRA$0$0 == 0x3f89
                    3F89   1959 _XDIRA	=	0x3f89
                    3F8A   1960 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1961 _XDIRB	=	0x3f8a
                    3F8B   1962 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1963 _XDIRC	=	0x3f8b
                    3F8E   1964 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1965 _XDIRR	=	0x3f8e
                    3FC8   1966 G$XPINA$0$0 == 0x3fc8
                    3FC8   1967 _XPINA	=	0x3fc8
                    3FE8   1968 G$XPINB$0$0 == 0x3fe8
                    3FE8   1969 _XPINB	=	0x3fe8
                    3FF8   1970 G$XPINC$0$0 == 0x3ff8
                    3FF8   1971 _XPINC	=	0x3ff8
                    3F8D   1972 G$XPINR$0$0 == 0x3f8d
                    3F8D   1973 _XPINR	=	0x3f8d
                    3F80   1974 G$XPORTA$0$0 == 0x3f80
                    3F80   1975 _XPORTA	=	0x3f80
                    3F88   1976 G$XPORTB$0$0 == 0x3f88
                    3F88   1977 _XPORTB	=	0x3f88
                    3F90   1978 G$XPORTC$0$0 == 0x3f90
                    3F90   1979 _XPORTC	=	0x3f90
                    3F8C   1980 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1981 _XPORTR	=	0x3f8c
                    3FCE   1982 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1983 _XIC0CAPT0	=	0x3fce
                    3FCF   1984 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1985 _XIC0CAPT1	=	0x3fcf
                    3FCE   1986 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1987 _XIC0CAPT	=	0x3fce
                    3FCC   1988 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1989 _XIC0MODE	=	0x3fcc
                    3FCD   1990 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1991 _XIC0STATUS	=	0x3fcd
                    3FD6   1992 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1993 _XIC1CAPT0	=	0x3fd6
                    3FD7   1994 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1995 _XIC1CAPT1	=	0x3fd7
                    3FD6   1996 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1997 _XIC1CAPT	=	0x3fd6
                    3FD4   1998 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1999 _XIC1MODE	=	0x3fd4
                    3FD5   2000 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   2001 _XIC1STATUS	=	0x3fd5
                    3F92   2002 G$XNVADDR0$0$0 == 0x3f92
                    3F92   2003 _XNVADDR0	=	0x3f92
                    3F93   2004 G$XNVADDR1$0$0 == 0x3f93
                    3F93   2005 _XNVADDR1	=	0x3f93
                    3F92   2006 G$XNVADDR$0$0 == 0x3f92
                    3F92   2007 _XNVADDR	=	0x3f92
                    3F94   2008 G$XNVDATA0$0$0 == 0x3f94
                    3F94   2009 _XNVDATA0	=	0x3f94
                    3F95   2010 G$XNVDATA1$0$0 == 0x3f95
                    3F95   2011 _XNVDATA1	=	0x3f95
                    3F94   2012 G$XNVDATA$0$0 == 0x3f94
                    3F94   2013 _XNVDATA	=	0x3f94
                    3F96   2014 G$XNVKEY$0$0 == 0x3f96
                    3F96   2015 _XNVKEY	=	0x3f96
                    3F91   2016 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   2017 _XNVSTATUS	=	0x3f91
                    3FBC   2018 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   2019 _XOC0COMP0	=	0x3fbc
                    3FBD   2020 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   2021 _XOC0COMP1	=	0x3fbd
                    3FBC   2022 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   2023 _XOC0COMP	=	0x3fbc
                    3FB9   2024 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   2025 _XOC0MODE	=	0x3fb9
                    3FBA   2026 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   2027 _XOC0PIN	=	0x3fba
                    3FBB   2028 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   2029 _XOC0STATUS	=	0x3fbb
                    3FC4   2030 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   2031 _XOC1COMP0	=	0x3fc4
                    3FC5   2032 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   2033 _XOC1COMP1	=	0x3fc5
                    3FC4   2034 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   2035 _XOC1COMP	=	0x3fc4
                    3FC1   2036 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   2037 _XOC1MODE	=	0x3fc1
                    3FC2   2038 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   2039 _XOC1PIN	=	0x3fc2
                    3FC3   2040 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   2041 _XOC1STATUS	=	0x3fc3
                    3FB1   2042 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   2043 _XRADIOACC	=	0x3fb1
                    3FB3   2044 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   2045 _XRADIOADDR0	=	0x3fb3
                    3FB2   2046 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   2047 _XRADIOADDR1	=	0x3fb2
                    3FB7   2048 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   2049 _XRADIODATA0	=	0x3fb7
                    3FB6   2050 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   2051 _XRADIODATA1	=	0x3fb6
                    3FB5   2052 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   2053 _XRADIODATA2	=	0x3fb5
                    3FB4   2054 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   2055 _XRADIODATA3	=	0x3fb4
                    3FBE   2056 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   2057 _XRADIOSTAT0	=	0x3fbe
                    3FBF   2058 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   2059 _XRADIOSTAT1	=	0x3fbf
                    3FBE   2060 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   2061 _XRADIOSTAT	=	0x3fbe
                    3FDF   2062 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   2063 _XSPCLKSRC	=	0x3fdf
                    3FDC   2064 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   2065 _XSPMODE	=	0x3fdc
                    3FDE   2066 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   2067 _XSPSHREG	=	0x3fde
                    3FDD   2068 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   2069 _XSPSTATUS	=	0x3fdd
                    3F9A   2070 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   2071 _XT0CLKSRC	=	0x3f9a
                    3F9C   2072 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   2073 _XT0CNT0	=	0x3f9c
                    3F9D   2074 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   2075 _XT0CNT1	=	0x3f9d
                    3F9C   2076 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   2077 _XT0CNT	=	0x3f9c
                    3F99   2078 G$XT0MODE$0$0 == 0x3f99
                    3F99   2079 _XT0MODE	=	0x3f99
                    3F9E   2080 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   2081 _XT0PERIOD0	=	0x3f9e
                    3F9F   2082 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   2083 _XT0PERIOD1	=	0x3f9f
                    3F9E   2084 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   2085 _XT0PERIOD	=	0x3f9e
                    3F9B   2086 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   2087 _XT0STATUS	=	0x3f9b
                    3FA2   2088 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   2089 _XT1CLKSRC	=	0x3fa2
                    3FA4   2090 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   2091 _XT1CNT0	=	0x3fa4
                    3FA5   2092 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   2093 _XT1CNT1	=	0x3fa5
                    3FA4   2094 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   2095 _XT1CNT	=	0x3fa4
                    3FA1   2096 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   2097 _XT1MODE	=	0x3fa1
                    3FA6   2098 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   2099 _XT1PERIOD0	=	0x3fa6
                    3FA7   2100 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   2101 _XT1PERIOD1	=	0x3fa7
                    3FA6   2102 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   2103 _XT1PERIOD	=	0x3fa6
                    3FA3   2104 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   2105 _XT1STATUS	=	0x3fa3
                    3FAA   2106 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   2107 _XT2CLKSRC	=	0x3faa
                    3FAC   2108 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   2109 _XT2CNT0	=	0x3fac
                    3FAD   2110 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   2111 _XT2CNT1	=	0x3fad
                    3FAC   2112 G$XT2CNT$0$0 == 0x3fac
                    3FAC   2113 _XT2CNT	=	0x3fac
                    3FA9   2114 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   2115 _XT2MODE	=	0x3fa9
                    3FAE   2116 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   2117 _XT2PERIOD0	=	0x3fae
                    3FAF   2118 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   2119 _XT2PERIOD1	=	0x3faf
                    3FAE   2120 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   2121 _XT2PERIOD	=	0x3fae
                    3FAB   2122 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   2123 _XT2STATUS	=	0x3fab
                    3FE4   2124 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   2125 _XU0CTRL	=	0x3fe4
                    3FE7   2126 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   2127 _XU0MODE	=	0x3fe7
                    3FE6   2128 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   2129 _XU0SHREG	=	0x3fe6
                    3FE5   2130 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   2131 _XU0STATUS	=	0x3fe5
                    3FEC   2132 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   2133 _XU1CTRL	=	0x3fec
                    3FEF   2134 G$XU1MODE$0$0 == 0x3fef
                    3FEF   2135 _XU1MODE	=	0x3fef
                    3FEE   2136 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   2137 _XU1SHREG	=	0x3fee
                    3FED   2138 G$XU1STATUS$0$0 == 0x3fed
                    3FED   2139 _XU1STATUS	=	0x3fed
                    3FDA   2140 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   2141 _XWDTCFG	=	0x3fda
                    3FDB   2142 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   2143 _XWDTRESET	=	0x3fdb
                    3FF1   2144 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   2145 _XWTCFGA	=	0x3ff1
                    3FF9   2146 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   2147 _XWTCFGB	=	0x3ff9
                    3FF2   2148 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   2149 _XWTCNTA0	=	0x3ff2
                    3FF3   2150 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   2151 _XWTCNTA1	=	0x3ff3
                    3FF2   2152 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   2153 _XWTCNTA	=	0x3ff2
                    3FFA   2154 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   2155 _XWTCNTB0	=	0x3ffa
                    3FFB   2156 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   2157 _XWTCNTB1	=	0x3ffb
                    3FFA   2158 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   2159 _XWTCNTB	=	0x3ffa
                    3FEB   2160 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   2161 _XWTCNTR1	=	0x3feb
                    3FF4   2162 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   2163 _XWTEVTA0	=	0x3ff4
                    3FF5   2164 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   2165 _XWTEVTA1	=	0x3ff5
                    3FF4   2166 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   2167 _XWTEVTA	=	0x3ff4
                    3FF6   2168 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   2169 _XWTEVTB0	=	0x3ff6
                    3FF7   2170 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   2171 _XWTEVTB1	=	0x3ff7
                    3FF6   2172 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   2173 _XWTEVTB	=	0x3ff6
                    3FFC   2174 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   2175 _XWTEVTC0	=	0x3ffc
                    3FFD   2176 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   2177 _XWTEVTC1	=	0x3ffd
                    3FFC   2178 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   2179 _XWTEVTC	=	0x3ffc
                    3FFE   2180 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   2181 _XWTEVTD0	=	0x3ffe
                    3FFF   2182 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   2183 _XWTEVTD1	=	0x3fff
                    3FFE   2184 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   2185 _XWTEVTD	=	0x3ffe
                    3FE9   2186 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   2187 _XWTIRQEN	=	0x3fe9
                    3FEA   2188 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   2189 _XWTSTAT	=	0x3fea
                    4114   2190 G$AX5043_AFSKCTRL$0$0 == 0x4114
                    4114   2191 _AX5043_AFSKCTRL	=	0x4114
                    4113   2192 G$AX5043_AFSKMARK0$0$0 == 0x4113
                    4113   2193 _AX5043_AFSKMARK0	=	0x4113
                    4112   2194 G$AX5043_AFSKMARK1$0$0 == 0x4112
                    4112   2195 _AX5043_AFSKMARK1	=	0x4112
                    4111   2196 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                    4111   2197 _AX5043_AFSKSPACE0	=	0x4111
                    4110   2198 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                    4110   2199 _AX5043_AFSKSPACE1	=	0x4110
                    4043   2200 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                    4043   2201 _AX5043_AGCCOUNTER	=	0x4043
                    4115   2202 G$AX5043_AMPLFILTER$0$0 == 0x4115
                    4115   2203 _AX5043_AMPLFILTER	=	0x4115
                    4189   2204 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                    4189   2205 _AX5043_BBOFFSCAP	=	0x4189
                    4188   2206 G$AX5043_BBTUNE$0$0 == 0x4188
                    4188   2207 _AX5043_BBTUNE	=	0x4188
                    4041   2208 G$AX5043_BGNDRSSI$0$0 == 0x4041
                    4041   2209 _AX5043_BGNDRSSI	=	0x4041
                    422E   2210 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                    422E   2211 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   2212 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                    422F   2213 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   2214 G$AX5043_CRCINIT0$0$0 == 0x4017
                    4017   2215 _AX5043_CRCINIT0	=	0x4017
                    4016   2216 G$AX5043_CRCINIT1$0$0 == 0x4016
                    4016   2217 _AX5043_CRCINIT1	=	0x4016
                    4015   2218 G$AX5043_CRCINIT2$0$0 == 0x4015
                    4015   2219 _AX5043_CRCINIT2	=	0x4015
                    4014   2220 G$AX5043_CRCINIT3$0$0 == 0x4014
                    4014   2221 _AX5043_CRCINIT3	=	0x4014
                    4332   2222 G$AX5043_DACCONFIG$0$0 == 0x4332
                    4332   2223 _AX5043_DACCONFIG	=	0x4332
                    4331   2224 G$AX5043_DACVALUE0$0$0 == 0x4331
                    4331   2225 _AX5043_DACVALUE0	=	0x4331
                    4330   2226 G$AX5043_DACVALUE1$0$0 == 0x4330
                    4330   2227 _AX5043_DACVALUE1	=	0x4330
                    4102   2228 G$AX5043_DECIMATION$0$0 == 0x4102
                    4102   2229 _AX5043_DECIMATION	=	0x4102
                    4042   2230 G$AX5043_DIVERSITY$0$0 == 0x4042
                    4042   2231 _AX5043_DIVERSITY	=	0x4042
                    4011   2232 G$AX5043_ENCODING$0$0 == 0x4011
                    4011   2233 _AX5043_ENCODING	=	0x4011
                    4018   2234 G$AX5043_FEC$0$0 == 0x4018
                    4018   2235 _AX5043_FEC	=	0x4018
                    401A   2236 G$AX5043_FECSTATUS$0$0 == 0x401a
                    401A   2237 _AX5043_FECSTATUS	=	0x401a
                    4019   2238 G$AX5043_FECSYNC$0$0 == 0x4019
                    4019   2239 _AX5043_FECSYNC	=	0x4019
                    402B   2240 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                    402B   2241 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   2242 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                    402A   2243 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   2244 G$AX5043_FIFODATA$0$0 == 0x4029
                    4029   2245 _AX5043_FIFODATA	=	0x4029
                    402D   2246 G$AX5043_FIFOFREE0$0$0 == 0x402d
                    402D   2247 _AX5043_FIFOFREE0	=	0x402d
                    402C   2248 G$AX5043_FIFOFREE1$0$0 == 0x402c
                    402C   2249 _AX5043_FIFOFREE1	=	0x402c
                    4028   2250 G$AX5043_FIFOSTAT$0$0 == 0x4028
                    4028   2251 _AX5043_FIFOSTAT	=	0x4028
                    402F   2252 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                    402F   2253 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   2254 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                    402E   2255 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   2256 G$AX5043_FRAMING$0$0 == 0x4012
                    4012   2257 _AX5043_FRAMING	=	0x4012
                    4037   2258 G$AX5043_FREQA0$0$0 == 0x4037
                    4037   2259 _AX5043_FREQA0	=	0x4037
                    4036   2260 G$AX5043_FREQA1$0$0 == 0x4036
                    4036   2261 _AX5043_FREQA1	=	0x4036
                    4035   2262 G$AX5043_FREQA2$0$0 == 0x4035
                    4035   2263 _AX5043_FREQA2	=	0x4035
                    4034   2264 G$AX5043_FREQA3$0$0 == 0x4034
                    4034   2265 _AX5043_FREQA3	=	0x4034
                    403F   2266 G$AX5043_FREQB0$0$0 == 0x403f
                    403F   2267 _AX5043_FREQB0	=	0x403f
                    403E   2268 G$AX5043_FREQB1$0$0 == 0x403e
                    403E   2269 _AX5043_FREQB1	=	0x403e
                    403D   2270 G$AX5043_FREQB2$0$0 == 0x403d
                    403D   2271 _AX5043_FREQB2	=	0x403d
                    403C   2272 G$AX5043_FREQB3$0$0 == 0x403c
                    403C   2273 _AX5043_FREQB3	=	0x403c
                    4163   2274 G$AX5043_FSKDEV0$0$0 == 0x4163
                    4163   2275 _AX5043_FSKDEV0	=	0x4163
                    4162   2276 G$AX5043_FSKDEV1$0$0 == 0x4162
                    4162   2277 _AX5043_FSKDEV1	=	0x4162
                    4161   2278 G$AX5043_FSKDEV2$0$0 == 0x4161
                    4161   2279 _AX5043_FSKDEV2	=	0x4161
                    410D   2280 G$AX5043_FSKDMAX0$0$0 == 0x410d
                    410D   2281 _AX5043_FSKDMAX0	=	0x410d
                    410C   2282 G$AX5043_FSKDMAX1$0$0 == 0x410c
                    410C   2283 _AX5043_FSKDMAX1	=	0x410c
                    410F   2284 G$AX5043_FSKDMIN0$0$0 == 0x410f
                    410F   2285 _AX5043_FSKDMIN0	=	0x410f
                    410E   2286 G$AX5043_FSKDMIN1$0$0 == 0x410e
                    410E   2287 _AX5043_FSKDMIN1	=	0x410e
                    4309   2288 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                    4309   2289 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   2290 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                    4308   2291 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   2292 G$AX5043_GPADCCTRL$0$0 == 0x4300
                    4300   2293 _AX5043_GPADCCTRL	=	0x4300
                    4301   2294 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                    4301   2295 _AX5043_GPADCPERIOD	=	0x4301
                    4101   2296 G$AX5043_IFFREQ0$0$0 == 0x4101
                    4101   2297 _AX5043_IFFREQ0	=	0x4101
                    4100   2298 G$AX5043_IFFREQ1$0$0 == 0x4100
                    4100   2299 _AX5043_IFFREQ1	=	0x4100
                    400B   2300 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                    400B   2301 _AX5043_IRQINVERSION0	=	0x400b
                    400A   2302 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                    400A   2303 _AX5043_IRQINVERSION1	=	0x400a
                    4007   2304 G$AX5043_IRQMASK0$0$0 == 0x4007
                    4007   2305 _AX5043_IRQMASK0	=	0x4007
                    4006   2306 G$AX5043_IRQMASK1$0$0 == 0x4006
                    4006   2307 _AX5043_IRQMASK1	=	0x4006
                    400D   2308 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                    400D   2309 _AX5043_IRQREQUEST0	=	0x400d
                    400C   2310 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                    400C   2311 _AX5043_IRQREQUEST1	=	0x400c
                    4310   2312 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                    4310   2313 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   2314 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                    4317   2315 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   2316 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                    4316   2317 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   2318 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                    4313   2319 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   2320 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                    4312   2321 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   2322 G$AX5043_LPOSCPER0$0$0 == 0x4319
                    4319   2323 _AX5043_LPOSCPER0	=	0x4319
                    4318   2324 G$AX5043_LPOSCPER1$0$0 == 0x4318
                    4318   2325 _AX5043_LPOSCPER1	=	0x4318
                    4315   2326 G$AX5043_LPOSCREF0$0$0 == 0x4315
                    4315   2327 _AX5043_LPOSCREF0	=	0x4315
                    4314   2328 G$AX5043_LPOSCREF1$0$0 == 0x4314
                    4314   2329 _AX5043_LPOSCREF1	=	0x4314
                    4311   2330 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                    4311   2331 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   2332 G$AX5043_MATCH0LEN$0$0 == 0x4214
                    4214   2333 _AX5043_MATCH0LEN	=	0x4214
                    4216   2334 G$AX5043_MATCH0MAX$0$0 == 0x4216
                    4216   2335 _AX5043_MATCH0MAX	=	0x4216
                    4215   2336 G$AX5043_MATCH0MIN$0$0 == 0x4215
                    4215   2337 _AX5043_MATCH0MIN	=	0x4215
                    4213   2338 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                    4213   2339 _AX5043_MATCH0PAT0	=	0x4213
                    4212   2340 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                    4212   2341 _AX5043_MATCH0PAT1	=	0x4212
                    4211   2342 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                    4211   2343 _AX5043_MATCH0PAT2	=	0x4211
                    4210   2344 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                    4210   2345 _AX5043_MATCH0PAT3	=	0x4210
                    421C   2346 G$AX5043_MATCH1LEN$0$0 == 0x421c
                    421C   2347 _AX5043_MATCH1LEN	=	0x421c
                    421E   2348 G$AX5043_MATCH1MAX$0$0 == 0x421e
                    421E   2349 _AX5043_MATCH1MAX	=	0x421e
                    421D   2350 G$AX5043_MATCH1MIN$0$0 == 0x421d
                    421D   2351 _AX5043_MATCH1MIN	=	0x421d
                    4219   2352 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                    4219   2353 _AX5043_MATCH1PAT0	=	0x4219
                    4218   2354 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                    4218   2355 _AX5043_MATCH1PAT1	=	0x4218
                    4108   2356 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                    4108   2357 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   2358 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                    4107   2359 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   2360 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                    4106   2361 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   2362 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                    410B   2363 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   2364 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                    410A   2365 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   2366 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                    4109   2367 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   2368 G$AX5043_MODCFGA$0$0 == 0x4164
                    4164   2369 _AX5043_MODCFGA	=	0x4164
                    4160   2370 G$AX5043_MODCFGF$0$0 == 0x4160
                    4160   2371 _AX5043_MODCFGF	=	0x4160
                    4010   2372 G$AX5043_MODULATION$0$0 == 0x4010
                    4010   2373 _AX5043_MODULATION	=	0x4010
                    4025   2374 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                    4025   2375 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   2376 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                    4023   2377 _AX5043_PINFUNCDATA	=	0x4023
                    4022   2378 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                    4022   2379 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   2380 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                    4024   2381 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   2382 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                    4026   2383 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   2384 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                    4021   2385 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   2386 G$AX5043_PINSTATE$0$0 == 0x4020
                    4020   2387 _AX5043_PINSTATE	=	0x4020
                    4233   2388 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                    4233   2389 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   2390 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                    4230   2391 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   2392 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                    4231   2393 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   2394 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                    4232   2395 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   2396 G$AX5043_PLLCPI$0$0 == 0x4031
                    4031   2397 _AX5043_PLLCPI	=	0x4031
                    4039   2398 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                    4039   2399 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   2400 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                    4182   2401 _AX5043_PLLLOCKDET	=	0x4182
                    4030   2402 G$AX5043_PLLLOOP$0$0 == 0x4030
                    4030   2403 _AX5043_PLLLOOP	=	0x4030
                    4038   2404 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                    4038   2405 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   2406 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                    4033   2407 _AX5043_PLLRANGINGA	=	0x4033
                    403B   2408 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                    403B   2409 _AX5043_PLLRANGINGB	=	0x403b
                    4183   2410 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                    4183   2411 _AX5043_PLLRNGCLK	=	0x4183
                    4032   2412 G$AX5043_PLLVCODIV$0$0 == 0x4032
                    4032   2413 _AX5043_PLLVCODIV	=	0x4032
                    4180   2414 G$AX5043_PLLVCOI$0$0 == 0x4180
                    4180   2415 _AX5043_PLLVCOI	=	0x4180
                    4181   2416 G$AX5043_PLLVCOIR$0$0 == 0x4181
                    4181   2417 _AX5043_PLLVCOIR	=	0x4181
                    4005   2418 G$AX5043_POWIRQMASK$0$0 == 0x4005
                    4005   2419 _AX5043_POWIRQMASK	=	0x4005
                    4003   2420 G$AX5043_POWSTAT$0$0 == 0x4003
                    4003   2421 _AX5043_POWSTAT	=	0x4003
                    4004   2422 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                    4004   2423 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   2424 G$AX5043_PWRAMP$0$0 == 0x4027
                    4027   2425 _AX5043_PWRAMP	=	0x4027
                    4002   2426 G$AX5043_PWRMODE$0$0 == 0x4002
                    4002   2427 _AX5043_PWRMODE	=	0x4002
                    4009   2428 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                    4009   2429 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   2430 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                    4008   2431 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   2432 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                    400F   2433 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   2434 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                    400E   2435 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   2436 G$AX5043_RADIOSTATE$0$0 == 0x401c
                    401C   2437 _AX5043_RADIOSTATE	=	0x401c
                    4040   2438 G$AX5043_RSSI$0$0 == 0x4040
                    4040   2439 _AX5043_RSSI	=	0x4040
                    422D   2440 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                    422D   2441 _AX5043_RSSIABSTHR	=	0x422d
                    422C   2442 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                    422C   2443 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   2444 G$AX5043_RXDATARATE0$0$0 == 0x4105
                    4105   2445 _AX5043_RXDATARATE0	=	0x4105
                    4104   2446 G$AX5043_RXDATARATE1$0$0 == 0x4104
                    4104   2447 _AX5043_RXDATARATE1	=	0x4104
                    4103   2448 G$AX5043_RXDATARATE2$0$0 == 0x4103
                    4103   2449 _AX5043_RXDATARATE2	=	0x4103
                    4001   2450 G$AX5043_SCRATCH$0$0 == 0x4001
                    4001   2451 _AX5043_SCRATCH	=	0x4001
                    4000   2452 G$AX5043_SILICONREVISION$0$0 == 0x4000
                    4000   2453 _AX5043_SILICONREVISION	=	0x4000
                    405B   2454 G$AX5043_TIMER0$0$0 == 0x405b
                    405B   2455 _AX5043_TIMER0	=	0x405b
                    405A   2456 G$AX5043_TIMER1$0$0 == 0x405a
                    405A   2457 _AX5043_TIMER1	=	0x405a
                    4059   2458 G$AX5043_TIMER2$0$0 == 0x4059
                    4059   2459 _AX5043_TIMER2	=	0x4059
                    4227   2460 G$AX5043_TMGRXAGC$0$0 == 0x4227
                    4227   2461 _AX5043_TMGRXAGC	=	0x4227
                    4223   2462 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                    4223   2463 _AX5043_TMGRXBOOST	=	0x4223
                    4226   2464 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                    4226   2465 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   2466 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                    4225   2467 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   2468 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                    4229   2469 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   2470 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                    422A   2471 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   2472 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                    422B   2473 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   2474 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                    4228   2475 _AX5043_TMGRXRSSI	=	0x4228
                    4224   2476 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                    4224   2477 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   2478 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                    4220   2479 _AX5043_TMGTXBOOST	=	0x4220
                    4221   2480 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                    4221   2481 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   2482 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                    4055   2483 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   2484 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                    4054   2485 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   2486 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                    4049   2487 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   2488 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                    4048   2489 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   2490 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                    4047   2491 _AX5043_TRKDATARATE0	=	0x4047
                    4046   2492 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                    4046   2493 _AX5043_TRKDATARATE1	=	0x4046
                    4045   2494 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                    4045   2495 _AX5043_TRKDATARATE2	=	0x4045
                    4051   2496 G$AX5043_TRKFREQ0$0$0 == 0x4051
                    4051   2497 _AX5043_TRKFREQ0	=	0x4051
                    4050   2498 G$AX5043_TRKFREQ1$0$0 == 0x4050
                    4050   2499 _AX5043_TRKFREQ1	=	0x4050
                    4053   2500 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                    4053   2501 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   2502 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                    4052   2503 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   2504 G$AX5043_TRKPHASE0$0$0 == 0x404b
                    404B   2505 _AX5043_TRKPHASE0	=	0x404b
                    404A   2506 G$AX5043_TRKPHASE1$0$0 == 0x404a
                    404A   2507 _AX5043_TRKPHASE1	=	0x404a
                    404F   2508 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                    404F   2509 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   2510 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                    404E   2511 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   2512 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                    404D   2513 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   2514 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                    4169   2515 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   2516 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                    4168   2517 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   2518 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                    416B   2519 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   2520 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                    416A   2521 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   2522 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                    416D   2523 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   2524 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                    416C   2525 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   2526 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                    416F   2527 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   2528 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                    416E   2529 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   2530 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                    4171   2531 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   2532 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                    4170   2533 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   2534 G$AX5043_TXRATE0$0$0 == 0x4167
                    4167   2535 _AX5043_TXRATE0	=	0x4167
                    4166   2536 G$AX5043_TXRATE1$0$0 == 0x4166
                    4166   2537 _AX5043_TXRATE1	=	0x4166
                    4165   2538 G$AX5043_TXRATE2$0$0 == 0x4165
                    4165   2539 _AX5043_TXRATE2	=	0x4165
                    406B   2540 G$AX5043_WAKEUP0$0$0 == 0x406b
                    406B   2541 _AX5043_WAKEUP0	=	0x406b
                    406A   2542 G$AX5043_WAKEUP1$0$0 == 0x406a
                    406A   2543 _AX5043_WAKEUP1	=	0x406a
                    406D   2544 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                    406D   2545 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   2546 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                    406C   2547 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   2548 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                    4069   2549 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   2550 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                    4068   2551 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   2552 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                    406E   2553 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   2554 G$AX5043_XTALCAP$0$0 == 0x4184
                    4184   2555 _AX5043_XTALCAP	=	0x4184
                    401D   2556 G$AX5043_XTALSTATUS$0$0 == 0x401d
                    401D   2557 _AX5043_XTALSTATUS	=	0x401d
                    4122   2558 G$AX5043_AGCAHYST0$0$0 == 0x4122
                    4122   2559 _AX5043_AGCAHYST0	=	0x4122
                    4132   2560 G$AX5043_AGCAHYST1$0$0 == 0x4132
                    4132   2561 _AX5043_AGCAHYST1	=	0x4132
                    4142   2562 G$AX5043_AGCAHYST2$0$0 == 0x4142
                    4142   2563 _AX5043_AGCAHYST2	=	0x4142
                    4152   2564 G$AX5043_AGCAHYST3$0$0 == 0x4152
                    4152   2565 _AX5043_AGCAHYST3	=	0x4152
                    4120   2566 G$AX5043_AGCGAIN0$0$0 == 0x4120
                    4120   2567 _AX5043_AGCGAIN0	=	0x4120
                    4130   2568 G$AX5043_AGCGAIN1$0$0 == 0x4130
                    4130   2569 _AX5043_AGCGAIN1	=	0x4130
                    4140   2570 G$AX5043_AGCGAIN2$0$0 == 0x4140
                    4140   2571 _AX5043_AGCGAIN2	=	0x4140
                    4150   2572 G$AX5043_AGCGAIN3$0$0 == 0x4150
                    4150   2573 _AX5043_AGCGAIN3	=	0x4150
                    4123   2574 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                    4123   2575 _AX5043_AGCMINMAX0	=	0x4123
                    4133   2576 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                    4133   2577 _AX5043_AGCMINMAX1	=	0x4133
                    4143   2578 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                    4143   2579 _AX5043_AGCMINMAX2	=	0x4143
                    4153   2580 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                    4153   2581 _AX5043_AGCMINMAX3	=	0x4153
                    4121   2582 G$AX5043_AGCTARGET0$0$0 == 0x4121
                    4121   2583 _AX5043_AGCTARGET0	=	0x4121
                    4131   2584 G$AX5043_AGCTARGET1$0$0 == 0x4131
                    4131   2585 _AX5043_AGCTARGET1	=	0x4131
                    4141   2586 G$AX5043_AGCTARGET2$0$0 == 0x4141
                    4141   2587 _AX5043_AGCTARGET2	=	0x4141
                    4151   2588 G$AX5043_AGCTARGET3$0$0 == 0x4151
                    4151   2589 _AX5043_AGCTARGET3	=	0x4151
                    412B   2590 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                    412B   2591 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   2592 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                    413B   2593 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   2594 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                    414B   2595 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   2596 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                    415B   2597 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   2598 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                    412F   2599 _AX5043_BBOFFSRES0	=	0x412f
                    413F   2600 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                    413F   2601 _AX5043_BBOFFSRES1	=	0x413f
                    414F   2602 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                    414F   2603 _AX5043_BBOFFSRES2	=	0x414f
                    415F   2604 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                    415F   2605 _AX5043_BBOFFSRES3	=	0x415f
                    4125   2606 G$AX5043_DRGAIN0$0$0 == 0x4125
                    4125   2607 _AX5043_DRGAIN0	=	0x4125
                    4135   2608 G$AX5043_DRGAIN1$0$0 == 0x4135
                    4135   2609 _AX5043_DRGAIN1	=	0x4135
                    4145   2610 G$AX5043_DRGAIN2$0$0 == 0x4145
                    4145   2611 _AX5043_DRGAIN2	=	0x4145
                    4155   2612 G$AX5043_DRGAIN3$0$0 == 0x4155
                    4155   2613 _AX5043_DRGAIN3	=	0x4155
                    412E   2614 G$AX5043_FOURFSK0$0$0 == 0x412e
                    412E   2615 _AX5043_FOURFSK0	=	0x412e
                    413E   2616 G$AX5043_FOURFSK1$0$0 == 0x413e
                    413E   2617 _AX5043_FOURFSK1	=	0x413e
                    414E   2618 G$AX5043_FOURFSK2$0$0 == 0x414e
                    414E   2619 _AX5043_FOURFSK2	=	0x414e
                    415E   2620 G$AX5043_FOURFSK3$0$0 == 0x415e
                    415E   2621 _AX5043_FOURFSK3	=	0x415e
                    412D   2622 G$AX5043_FREQDEV00$0$0 == 0x412d
                    412D   2623 _AX5043_FREQDEV00	=	0x412d
                    413D   2624 G$AX5043_FREQDEV01$0$0 == 0x413d
                    413D   2625 _AX5043_FREQDEV01	=	0x413d
                    414D   2626 G$AX5043_FREQDEV02$0$0 == 0x414d
                    414D   2627 _AX5043_FREQDEV02	=	0x414d
                    415D   2628 G$AX5043_FREQDEV03$0$0 == 0x415d
                    415D   2629 _AX5043_FREQDEV03	=	0x415d
                    412C   2630 G$AX5043_FREQDEV10$0$0 == 0x412c
                    412C   2631 _AX5043_FREQDEV10	=	0x412c
                    413C   2632 G$AX5043_FREQDEV11$0$0 == 0x413c
                    413C   2633 _AX5043_FREQDEV11	=	0x413c
                    414C   2634 G$AX5043_FREQDEV12$0$0 == 0x414c
                    414C   2635 _AX5043_FREQDEV12	=	0x414c
                    415C   2636 G$AX5043_FREQDEV13$0$0 == 0x415c
                    415C   2637 _AX5043_FREQDEV13	=	0x415c
                    4127   2638 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                    4127   2639 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   2640 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                    4137   2641 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   2642 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                    4147   2643 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   2644 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                    4157   2645 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   2646 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                    4128   2647 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   2648 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                    4138   2649 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   2650 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                    4148   2651 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   2652 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                    4158   2653 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   2654 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                    4129   2655 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   2656 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                    4139   2657 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   2658 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                    4149   2659 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   2660 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                    4159   2661 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   2662 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                    412A   2663 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   2664 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                    413A   2665 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   2666 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                    414A   2667 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   2668 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                    415A   2669 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   2670 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                    4116   2671 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   2672 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                    4126   2673 _AX5043_PHASEGAIN0	=	0x4126
                    4136   2674 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                    4136   2675 _AX5043_PHASEGAIN1	=	0x4136
                    4146   2676 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                    4146   2677 _AX5043_PHASEGAIN2	=	0x4146
                    4156   2678 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                    4156   2679 _AX5043_PHASEGAIN3	=	0x4156
                    4207   2680 G$AX5043_PKTADDR0$0$0 == 0x4207
                    4207   2681 _AX5043_PKTADDR0	=	0x4207
                    4206   2682 G$AX5043_PKTADDR1$0$0 == 0x4206
                    4206   2683 _AX5043_PKTADDR1	=	0x4206
                    4205   2684 G$AX5043_PKTADDR2$0$0 == 0x4205
                    4205   2685 _AX5043_PKTADDR2	=	0x4205
                    4204   2686 G$AX5043_PKTADDR3$0$0 == 0x4204
                    4204   2687 _AX5043_PKTADDR3	=	0x4204
                    4200   2688 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                    4200   2689 _AX5043_PKTADDRCFG	=	0x4200
                    420B   2690 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                    420B   2691 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   2692 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                    420A   2693 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   2694 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                    4209   2695 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   2696 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                    4208   2697 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   2698 G$AX5043_PKTLENCFG$0$0 == 0x4201
                    4201   2699 _AX5043_PKTLENCFG	=	0x4201
                    4202   2700 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                    4202   2701 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   2702 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                    4203   2703 _AX5043_PKTMAXLEN	=	0x4203
                    4118   2704 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                    4118   2705 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   2706 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                    4117   2707 _AX5043_RXPARAMSETS	=	0x4117
                    4124   2708 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                    4124   2709 _AX5043_TIMEGAIN0	=	0x4124
                    4134   2710 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                    4134   2711 _AX5043_TIMEGAIN1	=	0x4134
                    4144   2712 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                    4144   2713 _AX5043_TIMEGAIN2	=	0x4144
                    4154   2714 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                    4154   2715 _AX5043_TIMEGAIN3	=	0x4154
                    5114   2716 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                    5114   2717 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   2718 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                    5113   2719 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   2720 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                    5112   2721 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   2722 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                    5111   2723 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   2724 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                    5110   2725 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   2726 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                    5043   2727 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   2728 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                    5115   2729 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   2730 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                    5189   2731 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   2732 G$AX5043_BBTUNENB$0$0 == 0x5188
                    5188   2733 _AX5043_BBTUNENB	=	0x5188
                    5041   2734 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                    5041   2735 _AX5043_BGNDRSSINB	=	0x5041
                    522E   2736 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                    522E   2737 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   2738 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                    522F   2739 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   2740 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                    5017   2741 _AX5043_CRCINIT0NB	=	0x5017
                    5016   2742 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                    5016   2743 _AX5043_CRCINIT1NB	=	0x5016
                    5015   2744 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                    5015   2745 _AX5043_CRCINIT2NB	=	0x5015
                    5014   2746 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                    5014   2747 _AX5043_CRCINIT3NB	=	0x5014
                    5332   2748 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                    5332   2749 _AX5043_DACCONFIGNB	=	0x5332
                    5331   2750 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                    5331   2751 _AX5043_DACVALUE0NB	=	0x5331
                    5330   2752 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                    5330   2753 _AX5043_DACVALUE1NB	=	0x5330
                    5102   2754 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                    5102   2755 _AX5043_DECIMATIONNB	=	0x5102
                    5042   2756 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                    5042   2757 _AX5043_DIVERSITYNB	=	0x5042
                    5011   2758 G$AX5043_ENCODINGNB$0$0 == 0x5011
                    5011   2759 _AX5043_ENCODINGNB	=	0x5011
                    5018   2760 G$AX5043_FECNB$0$0 == 0x5018
                    5018   2761 _AX5043_FECNB	=	0x5018
                    501A   2762 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                    501A   2763 _AX5043_FECSTATUSNB	=	0x501a
                    5019   2764 G$AX5043_FECSYNCNB$0$0 == 0x5019
                    5019   2765 _AX5043_FECSYNCNB	=	0x5019
                    502B   2766 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                    502B   2767 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   2768 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                    502A   2769 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   2770 G$AX5043_FIFODATANB$0$0 == 0x5029
                    5029   2771 _AX5043_FIFODATANB	=	0x5029
                    502D   2772 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                    502D   2773 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   2774 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                    502C   2775 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   2776 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                    5028   2777 _AX5043_FIFOSTATNB	=	0x5028
                    502F   2778 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                    502F   2779 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   2780 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                    502E   2781 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   2782 G$AX5043_FRAMINGNB$0$0 == 0x5012
                    5012   2783 _AX5043_FRAMINGNB	=	0x5012
                    5037   2784 G$AX5043_FREQA0NB$0$0 == 0x5037
                    5037   2785 _AX5043_FREQA0NB	=	0x5037
                    5036   2786 G$AX5043_FREQA1NB$0$0 == 0x5036
                    5036   2787 _AX5043_FREQA1NB	=	0x5036
                    5035   2788 G$AX5043_FREQA2NB$0$0 == 0x5035
                    5035   2789 _AX5043_FREQA2NB	=	0x5035
                    5034   2790 G$AX5043_FREQA3NB$0$0 == 0x5034
                    5034   2791 _AX5043_FREQA3NB	=	0x5034
                    503F   2792 G$AX5043_FREQB0NB$0$0 == 0x503f
                    503F   2793 _AX5043_FREQB0NB	=	0x503f
                    503E   2794 G$AX5043_FREQB1NB$0$0 == 0x503e
                    503E   2795 _AX5043_FREQB1NB	=	0x503e
                    503D   2796 G$AX5043_FREQB2NB$0$0 == 0x503d
                    503D   2797 _AX5043_FREQB2NB	=	0x503d
                    503C   2798 G$AX5043_FREQB3NB$0$0 == 0x503c
                    503C   2799 _AX5043_FREQB3NB	=	0x503c
                    5163   2800 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                    5163   2801 _AX5043_FSKDEV0NB	=	0x5163
                    5162   2802 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                    5162   2803 _AX5043_FSKDEV1NB	=	0x5162
                    5161   2804 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                    5161   2805 _AX5043_FSKDEV2NB	=	0x5161
                    510D   2806 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                    510D   2807 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   2808 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                    510C   2809 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   2810 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                    510F   2811 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   2812 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                    510E   2813 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   2814 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                    5309   2815 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   2816 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                    5308   2817 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   2818 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                    5300   2819 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   2820 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                    5301   2821 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   2822 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                    5101   2823 _AX5043_IFFREQ0NB	=	0x5101
                    5100   2824 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                    5100   2825 _AX5043_IFFREQ1NB	=	0x5100
                    500B   2826 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                    500B   2827 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   2828 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                    500A   2829 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   2830 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                    5007   2831 _AX5043_IRQMASK0NB	=	0x5007
                    5006   2832 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                    5006   2833 _AX5043_IRQMASK1NB	=	0x5006
                    500D   2834 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                    500D   2835 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   2836 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                    500C   2837 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   2838 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                    5310   2839 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   2840 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                    5317   2841 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   2842 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                    5316   2843 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   2844 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                    5313   2845 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   2846 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                    5312   2847 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   2848 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                    5319   2849 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   2850 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                    5318   2851 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   2852 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                    5315   2853 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   2854 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                    5314   2855 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   2856 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                    5311   2857 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   2858 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                    5214   2859 _AX5043_MATCH0LENNB	=	0x5214
                    5216   2860 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                    5216   2861 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   2862 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                    5215   2863 _AX5043_MATCH0MINNB	=	0x5215
                    5213   2864 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                    5213   2865 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   2866 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                    5212   2867 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   2868 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                    5211   2869 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   2870 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                    5210   2871 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   2872 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                    521C   2873 _AX5043_MATCH1LENNB	=	0x521c
                    521E   2874 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                    521E   2875 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   2876 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                    521D   2877 _AX5043_MATCH1MINNB	=	0x521d
                    5219   2878 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                    5219   2879 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   2880 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                    5218   2881 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   2882 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                    5108   2883 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   2884 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                    5107   2885 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   2886 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                    5106   2887 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   2888 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                    510B   2889 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   2890 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                    510A   2891 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   2892 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                    5109   2893 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   2894 G$AX5043_MODCFGANB$0$0 == 0x5164
                    5164   2895 _AX5043_MODCFGANB	=	0x5164
                    5160   2896 G$AX5043_MODCFGFNB$0$0 == 0x5160
                    5160   2897 _AX5043_MODCFGFNB	=	0x5160
                    5010   2898 G$AX5043_MODULATIONNB$0$0 == 0x5010
                    5010   2899 _AX5043_MODULATIONNB	=	0x5010
                    5025   2900 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                    5025   2901 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   2902 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                    5023   2903 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   2904 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                    5022   2905 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   2906 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                    5024   2907 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   2908 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                    5026   2909 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   2910 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                    5021   2911 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   2912 G$AX5043_PINSTATENB$0$0 == 0x5020
                    5020   2913 _AX5043_PINSTATENB	=	0x5020
                    5233   2914 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                    5233   2915 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   2916 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                    5230   2917 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   2918 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                    5231   2919 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   2920 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                    5232   2921 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   2922 G$AX5043_PLLCPINB$0$0 == 0x5031
                    5031   2923 _AX5043_PLLCPINB	=	0x5031
                    5039   2924 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                    5039   2925 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   2926 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                    5182   2927 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   2928 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                    5030   2929 _AX5043_PLLLOOPNB	=	0x5030
                    5038   2930 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                    5038   2931 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   2932 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                    5033   2933 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   2934 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                    503B   2935 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   2936 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                    5183   2937 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   2938 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                    5032   2939 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   2940 G$AX5043_PLLVCOINB$0$0 == 0x5180
                    5180   2941 _AX5043_PLLVCOINB	=	0x5180
                    5181   2942 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                    5181   2943 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   2944 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                    5005   2945 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   2946 G$AX5043_POWSTATNB$0$0 == 0x5003
                    5003   2947 _AX5043_POWSTATNB	=	0x5003
                    5004   2948 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                    5004   2949 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   2950 G$AX5043_PWRAMPNB$0$0 == 0x5027
                    5027   2951 _AX5043_PWRAMPNB	=	0x5027
                    5002   2952 G$AX5043_PWRMODENB$0$0 == 0x5002
                    5002   2953 _AX5043_PWRMODENB	=	0x5002
                    5009   2954 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                    5009   2955 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   2956 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                    5008   2957 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   2958 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                    500F   2959 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   2960 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                    500E   2961 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   2962 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                    501C   2963 _AX5043_RADIOSTATENB	=	0x501c
                    5040   2964 G$AX5043_RSSINB$0$0 == 0x5040
                    5040   2965 _AX5043_RSSINB	=	0x5040
                    522D   2966 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                    522D   2967 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   2968 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                    522C   2969 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   2970 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                    5105   2971 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   2972 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                    5104   2973 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   2974 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                    5103   2975 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   2976 G$AX5043_SCRATCHNB$0$0 == 0x5001
                    5001   2977 _AX5043_SCRATCHNB	=	0x5001
                    5000   2978 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                    5000   2979 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   2980 G$AX5043_TIMER0NB$0$0 == 0x505b
                    505B   2981 _AX5043_TIMER0NB	=	0x505b
                    505A   2982 G$AX5043_TIMER1NB$0$0 == 0x505a
                    505A   2983 _AX5043_TIMER1NB	=	0x505a
                    5059   2984 G$AX5043_TIMER2NB$0$0 == 0x5059
                    5059   2985 _AX5043_TIMER2NB	=	0x5059
                    5227   2986 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                    5227   2987 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   2988 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                    5223   2989 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   2990 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                    5226   2991 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   2992 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                    5225   2993 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   2994 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                    5229   2995 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   2996 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                    522A   2997 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   2998 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                    522B   2999 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   3000 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                    5228   3001 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   3002 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                    5224   3003 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   3004 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                    5220   3005 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   3006 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                    5221   3007 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   3008 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                    5055   3009 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   3010 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                    5054   3011 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   3012 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                    5049   3013 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   3014 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                    5048   3015 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   3016 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                    5047   3017 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   3018 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                    5046   3019 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   3020 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                    5045   3021 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   3022 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                    5051   3023 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   3024 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                    5050   3025 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   3026 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                    5053   3027 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   3028 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                    5052   3029 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   3030 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                    504B   3031 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   3032 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                    504A   3033 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   3034 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                    504F   3035 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   3036 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                    504E   3037 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   3038 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                    504D   3039 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   3040 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                    5169   3041 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   3042 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                    5168   3043 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   3044 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                    516B   3045 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   3046 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                    516A   3047 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   3048 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                    516D   3049 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   3050 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                    516C   3051 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   3052 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                    516F   3053 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   3054 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                    516E   3055 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   3056 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                    5171   3057 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   3058 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                    5170   3059 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   3060 G$AX5043_TXRATE0NB$0$0 == 0x5167
                    5167   3061 _AX5043_TXRATE0NB	=	0x5167
                    5166   3062 G$AX5043_TXRATE1NB$0$0 == 0x5166
                    5166   3063 _AX5043_TXRATE1NB	=	0x5166
                    5165   3064 G$AX5043_TXRATE2NB$0$0 == 0x5165
                    5165   3065 _AX5043_TXRATE2NB	=	0x5165
                    506B   3066 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                    506B   3067 _AX5043_WAKEUP0NB	=	0x506b
                    506A   3068 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                    506A   3069 _AX5043_WAKEUP1NB	=	0x506a
                    506D   3070 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                    506D   3071 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   3072 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                    506C   3073 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   3074 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                    5069   3075 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   3076 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                    5068   3077 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   3078 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                    506E   3079 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   3080 G$AX5043_XTALCAPNB$0$0 == 0x5184
                    5184   3081 _AX5043_XTALCAPNB	=	0x5184
                    501D   3082 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                    501D   3083 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   3084 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                    5122   3085 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   3086 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                    5132   3087 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   3088 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                    5142   3089 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   3090 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                    5152   3091 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   3092 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                    5120   3093 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   3094 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                    5130   3095 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   3096 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                    5140   3097 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   3098 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                    5150   3099 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   3100 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                    5123   3101 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   3102 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                    5133   3103 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   3104 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                    5143   3105 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   3106 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                    5153   3107 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   3108 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                    5121   3109 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   3110 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                    5131   3111 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   3112 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                    5141   3113 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   3114 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                    5151   3115 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   3116 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                    512B   3117 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   3118 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                    513B   3119 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   3120 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                    514B   3121 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   3122 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                    515B   3123 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   3124 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                    512F   3125 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   3126 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                    513F   3127 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   3128 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                    514F   3129 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   3130 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                    515F   3131 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   3132 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                    5125   3133 _AX5043_DRGAIN0NB	=	0x5125
                    5135   3134 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                    5135   3135 _AX5043_DRGAIN1NB	=	0x5135
                    5145   3136 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                    5145   3137 _AX5043_DRGAIN2NB	=	0x5145
                    5155   3138 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                    5155   3139 _AX5043_DRGAIN3NB	=	0x5155
                    512E   3140 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                    512E   3141 _AX5043_FOURFSK0NB	=	0x512e
                    513E   3142 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                    513E   3143 _AX5043_FOURFSK1NB	=	0x513e
                    514E   3144 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                    514E   3145 _AX5043_FOURFSK2NB	=	0x514e
                    515E   3146 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                    515E   3147 _AX5043_FOURFSK3NB	=	0x515e
                    512D   3148 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                    512D   3149 _AX5043_FREQDEV00NB	=	0x512d
                    513D   3150 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                    513D   3151 _AX5043_FREQDEV01NB	=	0x513d
                    514D   3152 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                    514D   3153 _AX5043_FREQDEV02NB	=	0x514d
                    515D   3154 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                    515D   3155 _AX5043_FREQDEV03NB	=	0x515d
                    512C   3156 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                    512C   3157 _AX5043_FREQDEV10NB	=	0x512c
                    513C   3158 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                    513C   3159 _AX5043_FREQDEV11NB	=	0x513c
                    514C   3160 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                    514C   3161 _AX5043_FREQDEV12NB	=	0x514c
                    515C   3162 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                    515C   3163 _AX5043_FREQDEV13NB	=	0x515c
                    5127   3164 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                    5127   3165 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   3166 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                    5137   3167 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   3168 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                    5147   3169 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   3170 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                    5157   3171 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   3172 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                    5128   3173 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   3174 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                    5138   3175 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   3176 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                    5148   3177 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   3178 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                    5158   3179 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   3180 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                    5129   3181 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   3182 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                    5139   3183 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   3184 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                    5149   3185 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   3186 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                    5159   3187 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   3188 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                    512A   3189 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   3190 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                    513A   3191 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   3192 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                    514A   3193 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   3194 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                    515A   3195 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   3196 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                    5116   3197 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   3198 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                    5126   3199 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   3200 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                    5136   3201 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   3202 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                    5146   3203 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   3204 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                    5156   3205 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   3206 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                    5207   3207 _AX5043_PKTADDR0NB	=	0x5207
                    5206   3208 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                    5206   3209 _AX5043_PKTADDR1NB	=	0x5206
                    5205   3210 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                    5205   3211 _AX5043_PKTADDR2NB	=	0x5205
                    5204   3212 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                    5204   3213 _AX5043_PKTADDR3NB	=	0x5204
                    5200   3214 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                    5200   3215 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   3216 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                    520B   3217 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   3218 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                    520A   3219 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   3220 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                    5209   3221 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   3222 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                    5208   3223 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   3224 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                    5201   3225 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   3226 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                    5202   3227 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   3228 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                    5203   3229 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   3230 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                    5118   3231 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   3232 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                    5117   3233 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   3234 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                    5124   3235 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   3236 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                    5134   3237 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   3238 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                    5144   3239 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   3240 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                    5154   3241 _AX5043_TIMEGAIN3NB	=	0x5154
                    4F00   3242 G$AX5043_0xF00$0$0 == 0x4f00
                    4F00   3243 _AX5043_0xF00	=	0x4f00
                    4F01   3244 G$AX5043_0xF01$0$0 == 0x4f01
                    4F01   3245 _AX5043_0xF01	=	0x4f01
                    4F0C   3246 G$AX5043_0xF0C$0$0 == 0x4f0c
                    4F0C   3247 _AX5043_0xF0C	=	0x4f0c
                    4F10   3248 G$AX5043_0xF10$0$0 == 0x4f10
                    4F10   3249 _AX5043_0xF10	=	0x4f10
                    4F11   3250 G$AX5043_0xF11$0$0 == 0x4f11
                    4F11   3251 _AX5043_0xF11	=	0x4f11
                    4F18   3252 G$AX5043_0xF18$0$0 == 0x4f18
                    4F18   3253 _AX5043_0xF18	=	0x4f18
                    4F1C   3254 G$AX5043_0xF1C$0$0 == 0x4f1c
                    4F1C   3255 _AX5043_0xF1C	=	0x4f1c
                    4F21   3256 G$AX5043_0xF21$0$0 == 0x4f21
                    4F21   3257 _AX5043_0xF21	=	0x4f21
                    4F22   3258 G$AX5043_0xF22$0$0 == 0x4f22
                    4F22   3259 _AX5043_0xF22	=	0x4f22
                    4F23   3260 G$AX5043_0xF23$0$0 == 0x4f23
                    4F23   3261 _AX5043_0xF23	=	0x4f23
                    4F26   3262 G$AX5043_0xF26$0$0 == 0x4f26
                    4F26   3263 _AX5043_0xF26	=	0x4f26
                    4F2F   3264 G$AX5043_0xF2F$0$0 == 0x4f2f
                    4F2F   3265 _AX5043_0xF2F	=	0x4f2f
                    4F30   3266 G$AX5043_0xF30$0$0 == 0x4f30
                    4F30   3267 _AX5043_0xF30	=	0x4f30
                    4F31   3268 G$AX5043_0xF31$0$0 == 0x4f31
                    4F31   3269 _AX5043_0xF31	=	0x4f31
                    4F32   3270 G$AX5043_0xF32$0$0 == 0x4f32
                    4F32   3271 _AX5043_0xF32	=	0x4f32
                    4F33   3272 G$AX5043_0xF33$0$0 == 0x4f33
                    4F33   3273 _AX5043_0xF33	=	0x4f33
                    4F34   3274 G$AX5043_0xF34$0$0 == 0x4f34
                    4F34   3275 _AX5043_0xF34	=	0x4f34
                    4F35   3276 G$AX5043_0xF35$0$0 == 0x4f35
                    4F35   3277 _AX5043_0xF35	=	0x4f35
                    4F44   3278 G$AX5043_0xF44$0$0 == 0x4f44
                    4F44   3279 _AX5043_0xF44	=	0x4f44
                    4F0D   3280 G$AX5043_REF$0$0 == 0x4f0d
                    4F0D   3281 _AX5043_REF	=	0x4f0d
                    4F08   3282 G$AX5043_POWCTRL1$0$0 == 0x4f08
                    4F08   3283 _AX5043_POWCTRL1	=	0x4f08
                    0000   3284 G$axradio_syncstate$0$0==.
   0004                    3285 _axradio_syncstate::
   0004                    3286 	.ds 1
                    0001   3287 G$axradio_txbuffer_len$0$0==.
   0005                    3288 _axradio_txbuffer_len::
   0005                    3289 	.ds 2
                    0003   3290 G$axradio_txbuffer_cnt$0$0==.
   0007                    3291 _axradio_txbuffer_cnt::
   0007                    3292 	.ds 2
                    0005   3293 G$axradio_curchannel$0$0==.
   0009                    3294 _axradio_curchannel::
   0009                    3295 	.ds 1
                    0006   3296 G$axradio_curfreqoffset$0$0==.
   000A                    3297 _axradio_curfreqoffset::
   000A                    3298 	.ds 4
                    000A   3299 G$axradio_ack_count$0$0==.
   000E                    3300 _axradio_ack_count::
   000E                    3301 	.ds 1
                    000B   3302 G$axradio_ack_seqnr$0$0==.
   000F                    3303 _axradio_ack_seqnr::
   000F                    3304 	.ds 1
                    000C   3305 G$axradio_sync_time$0$0==.
   0010                    3306 _axradio_sync_time::
   0010                    3307 	.ds 4
                    0010   3308 G$axradio_sync_periodcorr$0$0==.
   0014                    3309 _axradio_sync_periodcorr::
   0014                    3310 	.ds 2
                    0012   3311 G$axradio_timeanchor$0$0==.
   0016                    3312 _axradio_timeanchor::
   0016                    3313 	.ds 8
                    001A   3314 G$axradio_localaddr$0$0==.
   001E                    3315 _axradio_localaddr::
   001E                    3316 	.ds 8
                    0022   3317 G$axradio_default_remoteaddr$0$0==.
   0026                    3318 _axradio_default_remoteaddr::
   0026                    3319 	.ds 4
                    0026   3320 G$axradio_txbuffer$0$0==.
   002A                    3321 _axradio_txbuffer::
   002A                    3322 	.ds 260
                    012A   3323 G$axradio_rxbuffer$0$0==.
   012E                    3324 _axradio_rxbuffer::
   012E                    3325 	.ds 260
                    022E   3326 G$axradio_cb_receive$0$0==.
   0232                    3327 _axradio_cb_receive::
   0232                    3328 	.ds 34
                    0250   3329 G$axradio_cb_receivesfd$0$0==.
   0254                    3330 _axradio_cb_receivesfd::
   0254                    3331 	.ds 10
                    025A   3332 G$axradio_cb_channelstate$0$0==.
   025E                    3333 _axradio_cb_channelstate::
   025E                    3334 	.ds 13
                    0267   3335 G$axradio_cb_transmitstart$0$0==.
   026B                    3336 _axradio_cb_transmitstart::
   026B                    3337 	.ds 10
                    0271   3338 G$axradio_cb_transmitend$0$0==.
   0275                    3339 _axradio_cb_transmitend::
   0275                    3340 	.ds 10
                    027B   3341 G$axradio_cb_transmitdata$0$0==.
   027F                    3342 _axradio_cb_transmitdata::
   027F                    3343 	.ds 10
                    0285   3344 G$axradio_timer$0$0==.
   0289                    3345 _axradio_timer::
   0289                    3346 	.ds 8
                           3347 ;--------------------------------------------------------
                           3348 ; absolute external ram data
                           3349 ;--------------------------------------------------------
                           3350 	.area XABS    (ABS,XDATA)
                           3351 ;--------------------------------------------------------
                           3352 ; external initialized ram data
                           3353 ;--------------------------------------------------------
                           3354 	.area XISEG   (XDATA)
                    0000   3355 G$f30_saved$0$0==.
   0441                    3356 _f30_saved::
   0441                    3357 	.ds 1
                    0001   3358 G$f31_saved$0$0==.
   0442                    3359 _f31_saved::
   0442                    3360 	.ds 1
                    0002   3361 G$f32_saved$0$0==.
   0443                    3362 _f32_saved::
   0443                    3363 	.ds 1
                    0003   3364 G$f33_saved$0$0==.
   0444                    3365 _f33_saved::
   0444                    3366 	.ds 1
                           3367 	.area HOME    (CODE)
                           3368 	.area GSINIT0 (CODE)
                           3369 	.area GSINIT1 (CODE)
                           3370 	.area GSINIT2 (CODE)
                           3371 	.area GSINIT3 (CODE)
                           3372 	.area GSINIT4 (CODE)
                           3373 	.area GSINIT5 (CODE)
                           3374 	.area GSINIT  (CODE)
                           3375 	.area GSFINAL (CODE)
                           3376 	.area CSEG    (CODE)
                           3377 ;--------------------------------------------------------
                           3378 ; global & static initialisations
                           3379 ;--------------------------------------------------------
                           3380 	.area HOME    (CODE)
                           3381 	.area GSINIT  (CODE)
                           3382 	.area GSFINAL (CODE)
                           3383 	.area GSINIT  (CODE)
                    0000   3384 	C$easyax5043.c$55$1$411 ==.
                           3385 ;	..\COMMON\easyax5043.c:55: volatile uint8_t __data axradio_mode = AXRADIO_MODE_UNINIT;
   012C 75 0A 00           3386 	mov	_axradio_mode,#0x00
                    0003   3387 	C$easyax5043.c$56$1$411 ==.
                           3388 ;	..\COMMON\easyax5043.c:56: volatile axradio_trxstate_t __data axradio_trxstate = trxstate_off;
   012F 75 0B 00           3389 	mov	_axradio_trxstate,#0x00
                           3390 ;--------------------------------------------------------
                           3391 ; Home
                           3392 ;--------------------------------------------------------
                           3393 	.area HOME    (CODE)
                           3394 	.area HOME    (CODE)
                           3395 ;--------------------------------------------------------
                           3396 ; code
                           3397 ;--------------------------------------------------------
                           3398 	.area CSEG    (CODE)
                           3399 ;------------------------------------------------------------
                           3400 ;Allocation info for local variables in function 'update_timeanchor'
                           3401 ;------------------------------------------------------------
                           3402 ;iesave                    Allocated to registers r7 
                           3403 ;------------------------------------------------------------
                    0000   3404 	Feasyax5043$update_timeanchor$0$0 ==.
                    0000   3405 	C$easyax5043.c$234$0$0 ==.
                           3406 ;	..\COMMON\easyax5043.c:234: static __reentrantb void update_timeanchor(void) __reentrant
                           3407 ;	-----------------------------------------
                           3408 ;	 function update_timeanchor
                           3409 ;	-----------------------------------------
   0835                    3410 _update_timeanchor:
                    0007   3411 	ar7 = 0x07
                    0006   3412 	ar6 = 0x06
                    0005   3413 	ar5 = 0x05
                    0004   3414 	ar4 = 0x04
                    0003   3415 	ar3 = 0x03
                    0002   3416 	ar2 = 0x02
                    0001   3417 	ar1 = 0x01
                    0000   3418 	ar0 = 0x00
                    0000   3419 	C$easyax5043.c$236$1$203 ==.
                           3420 ;	..\COMMON\easyax5043.c:236: uint8_t iesave = IE & 0x80;
   0835 74 80              3421 	mov	a,#0x80
   0837 55 A8              3422 	anl	a,_IE
   0839 FF                 3423 	mov	r7,a
                    0005   3424 	C$easyax5043.c$237$1$203 ==.
                           3425 ;	..\COMMON\easyax5043.c:237: EA = 0;
   083A C2 AF              3426 	clr	_EA
                    0007   3427 	C$easyax5043.c$238$1$203 ==.
                           3428 ;	..\COMMON\easyax5043.c:238: axradio_timeanchor.timer0 = wtimer0_curtime();
   083C C0 07              3429 	push	ar7
   083E 12 4D D9           3430 	lcall	_wtimer0_curtime
   0841 AB 82              3431 	mov	r3,dpl
   0843 AC 83              3432 	mov	r4,dph
   0845 AD F0              3433 	mov	r5,b
   0847 FE                 3434 	mov	r6,a
   0848 D0 07              3435 	pop	ar7
   084A 90 00 16           3436 	mov	dptr,#_axradio_timeanchor
   084D EB                 3437 	mov	a,r3
   084E F0                 3438 	movx	@dptr,a
   084F A3                 3439 	inc	dptr
   0850 EC                 3440 	mov	a,r4
   0851 F0                 3441 	movx	@dptr,a
   0852 A3                 3442 	inc	dptr
   0853 ED                 3443 	mov	a,r5
   0854 F0                 3444 	movx	@dptr,a
   0855 A3                 3445 	inc	dptr
   0856 EE                 3446 	mov	a,r6
   0857 F0                 3447 	movx	@dptr,a
                    0023   3448 	C$easyax5043.c$239$1$203 ==.
                           3449 ;	..\COMMON\easyax5043.c:239: axradio_timeanchor.radiotimer = radio_read24((uint16_t)&AX5043_TIMER2);
   0858 90 40 59           3450 	mov	dptr,#_AX5043_TIMER2
   085B 12 41 18           3451 	lcall	_radio_read24
   085E AB 82              3452 	mov	r3,dpl
   0860 AC 83              3453 	mov	r4,dph
   0862 AD F0              3454 	mov	r5,b
   0864 FE                 3455 	mov	r6,a
   0865 90 00 1A           3456 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0868 EB                 3457 	mov	a,r3
   0869 F0                 3458 	movx	@dptr,a
   086A A3                 3459 	inc	dptr
   086B EC                 3460 	mov	a,r4
   086C F0                 3461 	movx	@dptr,a
   086D A3                 3462 	inc	dptr
   086E ED                 3463 	mov	a,r5
   086F F0                 3464 	movx	@dptr,a
   0870 A3                 3465 	inc	dptr
   0871 EE                 3466 	mov	a,r6
   0872 F0                 3467 	movx	@dptr,a
                    003E   3468 	C$easyax5043.c$240$1$203 ==.
                           3469 ;	..\COMMON\easyax5043.c:240: IE |= iesave;
   0873 EF                 3470 	mov	a,r7
   0874 42 A8              3471 	orl	_IE,a
                    0041   3472 	C$easyax5043.c$241$1$203 ==.
                    0041   3473 	XFeasyax5043$update_timeanchor$0$0 ==.
   0876 22                 3474 	ret
                           3475 ;------------------------------------------------------------
                           3476 ;Allocation info for local variables in function 'axradio_conv_time_totimer0'
                           3477 ;------------------------------------------------------------
                           3478 ;dt                        Allocated to registers r4 r5 r6 r7 
                           3479 ;------------------------------------------------------------
                    0042   3480 	G$axradio_conv_time_totimer0$0$0 ==.
                    0042   3481 	C$easyax5043.c$243$1$203 ==.
                           3482 ;	..\COMMON\easyax5043.c:243: __reentrantb uint32_t axradio_conv_time_totimer0(uint32_t dt) __reentrant
                           3483 ;	-----------------------------------------
                           3484 ;	 function axradio_conv_time_totimer0
                           3485 ;	-----------------------------------------
   0877                    3486 _axradio_conv_time_totimer0:
   0877 AC 82              3487 	mov	r4,dpl
   0879 AD 83              3488 	mov	r5,dph
   087B AE F0              3489 	mov	r6,b
   087D FF                 3490 	mov	r7,a
                    0049   3491 	C$easyax5043.c$245$1$205 ==.
                           3492 ;	..\COMMON\easyax5043.c:245: dt -= axradio_timeanchor.radiotimer;
   087E 90 00 1A           3493 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0881 E0                 3494 	movx	a,@dptr
   0882 F8                 3495 	mov	r0,a
   0883 A3                 3496 	inc	dptr
   0884 E0                 3497 	movx	a,@dptr
   0885 F9                 3498 	mov	r1,a
   0886 A3                 3499 	inc	dptr
   0887 E0                 3500 	movx	a,@dptr
   0888 FA                 3501 	mov	r2,a
   0889 A3                 3502 	inc	dptr
   088A E0                 3503 	movx	a,@dptr
   088B FB                 3504 	mov	r3,a
   088C EC                 3505 	mov	a,r4
   088D C3                 3506 	clr	c
   088E 98                 3507 	subb	a,r0
   088F FC                 3508 	mov	r4,a
   0890 ED                 3509 	mov	a,r5
   0891 99                 3510 	subb	a,r1
   0892 FD                 3511 	mov	r5,a
   0893 EE                 3512 	mov	a,r6
   0894 9A                 3513 	subb	a,r2
   0895 FE                 3514 	mov	r6,a
   0896 EF                 3515 	mov	a,r7
   0897 9B                 3516 	subb	a,r3
                    0063   3517 	C$easyax5043.c$246$1$205 ==.
                           3518 ;	..\COMMON\easyax5043.c:246: dt = axradio_conv_timeinterval_totimer0(signextend24(dt));
   0898 8C 82              3519 	mov	dpl,r4
   089A 8D 83              3520 	mov	dph,r5
   089C 8E F0              3521 	mov	b,r6
   089E 12 4D D3           3522 	lcall	_signextend24
   08A1 12 05 4F           3523 	lcall	_axradio_conv_timeinterval_totimer0
   08A4 AC 82              3524 	mov	r4,dpl
   08A6 AD 83              3525 	mov	r5,dph
   08A8 AE F0              3526 	mov	r6,b
   08AA FF                 3527 	mov	r7,a
                    0076   3528 	C$easyax5043.c$247$1$205 ==.
                           3529 ;	..\COMMON\easyax5043.c:247: dt += axradio_timeanchor.timer0;
   08AB 90 00 16           3530 	mov	dptr,#_axradio_timeanchor
   08AE E0                 3531 	movx	a,@dptr
   08AF F8                 3532 	mov	r0,a
   08B0 A3                 3533 	inc	dptr
   08B1 E0                 3534 	movx	a,@dptr
   08B2 F9                 3535 	mov	r1,a
   08B3 A3                 3536 	inc	dptr
   08B4 E0                 3537 	movx	a,@dptr
   08B5 FA                 3538 	mov	r2,a
   08B6 A3                 3539 	inc	dptr
   08B7 E0                 3540 	movx	a,@dptr
   08B8 FB                 3541 	mov	r3,a
   08B9 E8                 3542 	mov	a,r0
   08BA 2C                 3543 	add	a,r4
   08BB FC                 3544 	mov	r4,a
   08BC E9                 3545 	mov	a,r1
   08BD 3D                 3546 	addc	a,r5
   08BE FD                 3547 	mov	r5,a
   08BF EA                 3548 	mov	a,r2
   08C0 3E                 3549 	addc	a,r6
   08C1 FE                 3550 	mov	r6,a
   08C2 EB                 3551 	mov	a,r3
   08C3 3F                 3552 	addc	a,r7
                    008F   3553 	C$easyax5043.c$248$1$205 ==.
                           3554 ;	..\COMMON\easyax5043.c:248: return dt;
   08C4 8C 82              3555 	mov	dpl,r4
   08C6 8D 83              3556 	mov	dph,r5
   08C8 8E F0              3557 	mov	b,r6
                    0095   3558 	C$easyax5043.c$249$1$205 ==.
                    0095   3559 	XG$axradio_conv_time_totimer0$0$0 ==.
   08CA 22                 3560 	ret
                           3561 ;------------------------------------------------------------
                           3562 ;Allocation info for local variables in function 'ax5043_init_registers_tx'
                           3563 ;------------------------------------------------------------
                           3564 ;rng                       Allocated to registers r7 
                           3565 ;------------------------------------------------------------
                    0096   3566 	G$ax5043_init_registers_tx$0$0 ==.
                    0096   3567 	C$easyax5043.c$251$1$205 ==.
                           3568 ;	..\COMMON\easyax5043.c:251: __reentrantb uint8_t ax5043_init_registers_tx(void) __reentrant
                           3569 ;	-----------------------------------------
                           3570 ;	 function ax5043_init_registers_tx
                           3571 ;	-----------------------------------------
   08CB                    3572 _ax5043_init_registers_tx:
                    0096   3573 	C$easyax5043.c$254$1$207 ==.
                           3574 ;	..\COMMON\easyax5043.c:254: ax5043_set_registers_tx();
   08CB 12 04 0D           3575 	lcall	_ax5043_set_registers_tx
                    0099   3576 	C$easyax5043.c$255$1$207 ==.
                           3577 ;	..\COMMON\easyax5043.c:255: rng = axradio_phy_chanpllrng_tx[axradio_curchannel];
   08CE 90 00 09           3578 	mov	dptr,#_axradio_curchannel
   08D1 E0                 3579 	movx	a,@dptr
   08D2 24 01              3580 	add	a,#_axradio_phy_chanpllrng_tx
   08D4 F5 82              3581 	mov	dpl,a
   08D6 E4                 3582 	clr	a
   08D7 34 00              3583 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   08D9 F5 83              3584 	mov	dph,a
   08DB E0                 3585 	movx	a,@dptr
                    00A7   3586 	C$easyax5043.c$256$1$207 ==.
                           3587 ;	..\COMMON\easyax5043.c:256: if (rng & 0x20)
   08DC FF                 3588 	mov	r7,a
   08DD 30 E5 05           3589 	jnb	acc.5,00102$
                    00AB   3590 	C$easyax5043.c$257$1$207 ==.
                           3591 ;	..\COMMON\easyax5043.c:257: return AXRADIO_ERR_RANGING;
   08E0 75 82 06           3592 	mov	dpl,#0x06
   08E3 80 1B              3593 	sjmp	00106$
   08E5                    3594 00102$:
                    00B0   3595 	C$easyax5043.c$258$1$207 ==.
                           3596 ;	..\COMMON\easyax5043.c:258: if (AX5043_PLLLOOP & 0x80) {
   08E5 90 40 30           3597 	mov	dptr,#_AX5043_PLLLOOP
   08E8 E0                 3598 	movx	a,@dptr
   08E9 FE                 3599 	mov	r6,a
   08EA 30 E7 09           3600 	jnb	acc.7,00104$
                    00B8   3601 	C$easyax5043.c$259$2$208 ==.
                           3602 ;	..\COMMON\easyax5043.c:259: AX5043_PLLRANGINGB = rng & 0x0F;
   08ED 90 40 3B           3603 	mov	dptr,#_AX5043_PLLRANGINGB
   08F0 74 0F              3604 	mov	a,#0x0F
   08F2 5F                 3605 	anl	a,r7
   08F3 F0                 3606 	movx	@dptr,a
   08F4 80 07              3607 	sjmp	00105$
   08F6                    3608 00104$:
                    00C1   3609 	C$easyax5043.c$261$2$209 ==.
                           3610 ;	..\COMMON\easyax5043.c:261: AX5043_PLLRANGINGA = rng & 0x0F;
   08F6 90 40 33           3611 	mov	dptr,#_AX5043_PLLRANGINGA
   08F9 74 0F              3612 	mov	a,#0x0F
   08FB 5F                 3613 	anl	a,r7
   08FC F0                 3614 	movx	@dptr,a
   08FD                    3615 00105$:
                    00C8   3616 	C$easyax5043.c$263$1$207 ==.
                           3617 ;	..\COMMON\easyax5043.c:263: return AXRADIO_ERR_NOERROR;
   08FD 75 82 00           3618 	mov	dpl,#0x00
   0900                    3619 00106$:
                    00CB   3620 	C$easyax5043.c$264$1$207 ==.
                    00CB   3621 	XG$ax5043_init_registers_tx$0$0 ==.
   0900 22                 3622 	ret
                           3623 ;------------------------------------------------------------
                           3624 ;Allocation info for local variables in function 'ax5043_init_registers_rx'
                           3625 ;------------------------------------------------------------
                           3626 ;rng                       Allocated to registers r7 
                           3627 ;------------------------------------------------------------
                    00CC   3628 	G$ax5043_init_registers_rx$0$0 ==.
                    00CC   3629 	C$easyax5043.c$266$1$207 ==.
                           3630 ;	..\COMMON\easyax5043.c:266: __reentrantb uint8_t ax5043_init_registers_rx(void) __reentrant
                           3631 ;	-----------------------------------------
                           3632 ;	 function ax5043_init_registers_rx
                           3633 ;	-----------------------------------------
   0901                    3634 _ax5043_init_registers_rx:
                    00CC   3635 	C$easyax5043.c$269$1$211 ==.
                           3636 ;	..\COMMON\easyax5043.c:269: ax5043_set_registers_rx();
   0901 12 04 3E           3637 	lcall	_ax5043_set_registers_rx
                    00CF   3638 	C$easyax5043.c$270$1$211 ==.
                           3639 ;	..\COMMON\easyax5043.c:270: rng = axradio_phy_chanpllrng_rx[axradio_curchannel];
   0904 90 00 09           3640 	mov	dptr,#_axradio_curchannel
   0907 E0                 3641 	movx	a,@dptr
   0908 24 00              3642 	add	a,#_axradio_phy_chanpllrng_rx
   090A F5 82              3643 	mov	dpl,a
   090C E4                 3644 	clr	a
   090D 34 00              3645 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   090F F5 83              3646 	mov	dph,a
   0911 E0                 3647 	movx	a,@dptr
                    00DD   3648 	C$easyax5043.c$271$1$211 ==.
                           3649 ;	..\COMMON\easyax5043.c:271: if (rng & 0x20)
   0912 FF                 3650 	mov	r7,a
   0913 30 E5 05           3651 	jnb	acc.5,00102$
                    00E1   3652 	C$easyax5043.c$272$1$211 ==.
                           3653 ;	..\COMMON\easyax5043.c:272: return AXRADIO_ERR_RANGING;
   0916 75 82 06           3654 	mov	dpl,#0x06
   0919 80 1B              3655 	sjmp	00106$
   091B                    3656 00102$:
                    00E6   3657 	C$easyax5043.c$273$1$211 ==.
                           3658 ;	..\COMMON\easyax5043.c:273: if (AX5043_PLLLOOP & 0x80) {
   091B 90 40 30           3659 	mov	dptr,#_AX5043_PLLLOOP
   091E E0                 3660 	movx	a,@dptr
   091F FE                 3661 	mov	r6,a
   0920 30 E7 09           3662 	jnb	acc.7,00104$
                    00EE   3663 	C$easyax5043.c$274$2$212 ==.
                           3664 ;	..\COMMON\easyax5043.c:274: AX5043_PLLRANGINGB = rng & 0x0F;
   0923 90 40 3B           3665 	mov	dptr,#_AX5043_PLLRANGINGB
   0926 74 0F              3666 	mov	a,#0x0F
   0928 5F                 3667 	anl	a,r7
   0929 F0                 3668 	movx	@dptr,a
   092A 80 07              3669 	sjmp	00105$
   092C                    3670 00104$:
                    00F7   3671 	C$easyax5043.c$276$2$213 ==.
                           3672 ;	..\COMMON\easyax5043.c:276: AX5043_PLLRANGINGA = rng & 0x0F;
   092C 90 40 33           3673 	mov	dptr,#_AX5043_PLLRANGINGA
   092F 74 0F              3674 	mov	a,#0x0F
   0931 5F                 3675 	anl	a,r7
   0932 F0                 3676 	movx	@dptr,a
   0933                    3677 00105$:
                    00FE   3678 	C$easyax5043.c$278$1$211 ==.
                           3679 ;	..\COMMON\easyax5043.c:278: return AXRADIO_ERR_NOERROR;
   0933 75 82 00           3680 	mov	dpl,#0x00
   0936                    3681 00106$:
                    0101   3682 	C$easyax5043.c$279$1$211 ==.
                    0101   3683 	XG$ax5043_init_registers_rx$0$0 ==.
   0936 22                 3684 	ret
                           3685 ;------------------------------------------------------------
                           3686 ;Allocation info for local variables in function 'receive_isr'
                           3687 ;------------------------------------------------------------
                           3688 ;fifo_cmd                  Allocated to registers r6 
                           3689 ;flags                     Allocated to registers 
                           3690 ;i                         Allocated to registers r6 
                           3691 ;len                       Allocated to registers r7 
                           3692 ;r                         Allocated to registers r6 
                           3693 ;r                         Allocated to registers r6 
                           3694 ;r                         Allocated to registers r6 
                           3695 ;------------------------------------------------------------
                    0102   3696 	Feasyax5043$receive_isr$0$0 ==.
                    0102   3697 	C$easyax5043.c$281$1$211 ==.
                           3698 ;	..\COMMON\easyax5043.c:281: static __reentrantb void receive_isr(void) __reentrant
                           3699 ;	-----------------------------------------
                           3700 ;	 function receive_isr
                           3701 ;	-----------------------------------------
   0937                    3702 _receive_isr:
                    0102   3703 	C$easyax5043.c$285$1$211 ==.
                           3704 ;	..\COMMON\easyax5043.c:285: uint8_t len = AX5043_RADIOEVENTREQ0; // clear request so interrupt does not fire again. sync_rx enables interrupt on radio state changed in order to wake up on SDF detected
   0937 90 40 0F           3705 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   093A E0                 3706 	movx	a,@dptr
                    0106   3707 	C$easyax5043.c$287$1$215 ==.
                           3708 ;	..\COMMON\easyax5043.c:287: if ((len & 0x04) && AX5043_RADIOSTATE == 0x0F) {
   093B FF                 3709 	mov	r7,a
   093C 30 E2 40           3710 	jnb	acc.2,00164$
   093F 90 40 1C           3711 	mov	dptr,#_AX5043_RADIOSTATE
   0942 E0                 3712 	movx	a,@dptr
   0943 FE                 3713 	mov	r6,a
   0944 BE 0F 38           3714 	cjne	r6,#0x0F,00164$
                    0112   3715 	C$easyax5043.c$289$2$216 ==.
                           3716 ;	..\COMMON\easyax5043.c:289: update_timeanchor();
   0947 12 08 35           3717 	lcall	_update_timeanchor
                    0115   3718 	C$easyax5043.c$290$2$216 ==.
                           3719 ;	..\COMMON\easyax5043.c:290: if(axradio_framing_enable_sfdcallback)
   094A 90 4F 2D           3720 	mov	dptr,#_axradio_framing_enable_sfdcallback
   094D E4                 3721 	clr	a
   094E 93                 3722 	movc	a,@a+dptr
   094F FE                 3723 	mov	r6,a
   0950 60 2D              3724 	jz	00164$
                    011D   3725 	C$easyax5043.c$292$3$217 ==.
                           3726 ;	..\COMMON\easyax5043.c:292: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   0952 90 02 54           3727 	mov	dptr,#_axradio_cb_receivesfd
   0955 12 4B 64           3728 	lcall	_wtimer_remove_callback
                    0123   3729 	C$easyax5043.c$293$3$217 ==.
                           3730 ;	..\COMMON\easyax5043.c:293: axradio_cb_receivesfd.st.error = AXRADIO_ERR_NOERROR;
   0958 90 02 59           3731 	mov	dptr,#(_axradio_cb_receivesfd + 0x0005)
   095B E4                 3732 	clr	a
   095C F0                 3733 	movx	@dptr,a
                    0128   3734 	C$easyax5043.c$294$3$217 ==.
                           3735 ;	..\COMMON\easyax5043.c:294: axradio_cb_receivesfd.st.time.t = axradio_timeanchor.radiotimer;
   095D 90 00 1A           3736 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0960 E0                 3737 	movx	a,@dptr
   0961 FB                 3738 	mov	r3,a
   0962 A3                 3739 	inc	dptr
   0963 E0                 3740 	movx	a,@dptr
   0964 FC                 3741 	mov	r4,a
   0965 A3                 3742 	inc	dptr
   0966 E0                 3743 	movx	a,@dptr
   0967 FD                 3744 	mov	r5,a
   0968 A3                 3745 	inc	dptr
   0969 E0                 3746 	movx	a,@dptr
   096A FE                 3747 	mov	r6,a
   096B 90 02 5A           3748 	mov	dptr,#(_axradio_cb_receivesfd + 0x0006)
   096E EB                 3749 	mov	a,r3
   096F F0                 3750 	movx	@dptr,a
   0970 A3                 3751 	inc	dptr
   0971 EC                 3752 	mov	a,r4
   0972 F0                 3753 	movx	@dptr,a
   0973 A3                 3754 	inc	dptr
   0974 ED                 3755 	mov	a,r5
   0975 F0                 3756 	movx	@dptr,a
   0976 A3                 3757 	inc	dptr
   0977 EE                 3758 	mov	a,r6
   0978 F0                 3759 	movx	@dptr,a
                    0144   3760 	C$easyax5043.c$295$3$217 ==.
                           3761 ;	..\COMMON\easyax5043.c:295: wtimer_add_callback(&axradio_cb_receivesfd.cb);
   0979 90 02 54           3762 	mov	dptr,#_axradio_cb_receivesfd
   097C 12 3F BF           3763 	lcall	_wtimer_add_callback
                    014A   3764 	C$easyax5043.c$307$1$215 ==.
                           3765 ;	..\COMMON\easyax5043.c:307: while (AX5043_IRQREQUEST0 & 0x01) {    // while fifo not empty
   097F                    3766 00164$:
   097F                    3767 00149$:
   097F 90 40 0D           3768 	mov	dptr,#_AX5043_IRQREQUEST0
   0982 E0                 3769 	movx	a,@dptr
   0983 FE                 3770 	mov	r6,a
   0984 20 E0 03           3771 	jb	acc.0,00211$
   0987 02 0C 22           3772 	ljmp	00152$
   098A                    3773 00211$:
                    0155   3774 	C$easyax5043.c$308$2$218 ==.
                           3775 ;	..\COMMON\easyax5043.c:308: fifo_cmd = AX5043_FIFODATA; // read command
   098A 90 40 29           3776 	mov	dptr,#_AX5043_FIFODATA
   098D E0                 3777 	movx	a,@dptr
   098E FE                 3778 	mov	r6,a
                    015A   3779 	C$easyax5043.c$309$2$218 ==.
                           3780 ;	..\COMMON\easyax5043.c:309: len = (fifo_cmd & 0xE0) >> 5; // top 3 bits encode payload len
   098F 74 E0              3781 	mov	a,#0xE0
   0991 5E                 3782 	anl	a,r6
   0992 FD                 3783 	mov	r5,a
   0993 C4                 3784 	swap	a
   0994 03                 3785 	rr	a
   0995 54 07              3786 	anl	a,#0x07
   0997 FF                 3787 	mov	r7,a
                    0163   3788 	C$easyax5043.c$310$2$218 ==.
                           3789 ;	..\COMMON\easyax5043.c:310: if (len == 7)
   0998 BF 07 06           3790 	cjne	r7,#0x07,00107$
                    0166   3791 	C$easyax5043.c$311$2$218 ==.
                           3792 ;	..\COMMON\easyax5043.c:311: len = AX5043_FIFODATA; // 7 means variable length, -> get length byte
   099B 90 40 29           3793 	mov	dptr,#_AX5043_FIFODATA
   099E E0                 3794 	movx	a,@dptr
   099F FD                 3795 	mov	r5,a
   09A0 FF                 3796 	mov	r7,a
   09A1                    3797 00107$:
                    016C   3798 	C$easyax5043.c$312$2$218 ==.
                           3799 ;	..\COMMON\easyax5043.c:312: fifo_cmd &= 0x1F;
   09A1 53 06 1F           3800 	anl	ar6,#0x1F
                    016F   3801 	C$easyax5043.c$313$2$218 ==.
                           3802 ;	..\COMMON\easyax5043.c:313: switch (fifo_cmd) {
   09A4 BE 01 02           3803 	cjne	r6,#0x01,00214$
   09A7 80 1B              3804 	sjmp	00108$
   09A9                    3805 00214$:
   09A9 BE 10 03           3806 	cjne	r6,#0x10,00215$
   09AC 02 0B 74           3807 	ljmp	00135$
   09AF                    3808 00215$:
   09AF BE 11 03           3809 	cjne	r6,#0x11,00216$
   09B2 02 0B 47           3810 	ljmp	00132$
   09B5                    3811 00216$:
   09B5 BE 13 03           3812 	cjne	r6,#0x13,00217$
   09B8 02 0B 0A           3813 	ljmp	00129$
   09BB                    3814 00217$:
   09BB BE 15 03           3815 	cjne	r6,#0x15,00218$
   09BE 02 0B 9D           3816 	ljmp	00138$
   09C1                    3817 00218$:
   09C1 02 0C 13           3818 	ljmp	00142$
                    018F   3819 	C$easyax5043.c$314$3$219 ==.
                           3820 ;	..\COMMON\easyax5043.c:314: case AX5043_FIFOCMD_DATA:
   09C4                    3821 00108$:
                    018F   3822 	C$easyax5043.c$315$3$219 ==.
                           3823 ;	..\COMMON\easyax5043.c:315: if (!len)
   09C4 EF                 3824 	mov	a,r7
   09C5 60 B8              3825 	jz	00149$
                    0192   3826 	C$easyax5043.c$319$3$219 ==.
                           3827 ;	..\COMMON\easyax5043.c:319: if (DBGLNKSTAT & 0x10)
   09C7 E5 E2              3828 	mov	a,_DBGLNKSTAT
   09C9 30 E4 06           3829 	jnb	acc.4,00112$
                    0197   3830 	C$easyax5043.c$320$3$219 ==.
                           3831 ;	..\COMMON\easyax5043.c:320: dbglink_tx('.');
   09CC 75 82 2E           3832 	mov	dpl,#0x2E
   09CF 12 37 3A           3833 	lcall	_dbglink_tx
   09D2                    3834 00112$:
                    019D   3835 	C$easyax5043.c$323$3$219 ==.
                           3836 ;	..\COMMON\easyax5043.c:323: flags = AX5043_FIFODATA;
   09D2 90 40 29           3837 	mov	dptr,#_AX5043_FIFODATA
   09D5 E0                 3838 	movx	a,@dptr
                    01A1   3839 	C$easyax5043.c$324$3$219 ==.
                           3840 ;	..\COMMON\easyax5043.c:324: --len;
   09D6 1F                 3841 	dec	r7
                    01A2   3842 	C$easyax5043.c$325$3$219 ==.
                           3843 ;	..\COMMON\easyax5043.c:325: ax5043_readfifo(axradio_rxbuffer, len);
   09D7 C0 07              3844 	push	ar7
   09D9 C0 07              3845 	push	ar7
   09DB 90 01 2E           3846 	mov	dptr,#_axradio_rxbuffer
   09DE 75 F0 00           3847 	mov	b,#0x00
   09E1 12 49 06           3848 	lcall	_ax5043_readfifo
   09E4 15 81              3849 	dec	sp
   09E6 D0 07              3850 	pop	ar7
                    01B3   3851 	C$easyax5043.c$326$3$219 ==.
                           3852 ;	..\COMMON\easyax5043.c:326: if(axradio_mode == AXRADIO_MODE_WOR_RECEIVE || axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   09E8 74 19              3853 	mov	a,#0x19
   09EA B5 0A 02           3854 	cjne	a,_axradio_mode,00221$
   09ED 80 05              3855 	sjmp	00113$
   09EF                    3856 00221$:
   09EF 74 1B              3857 	mov	a,#0x1B
   09F1 B5 0A 21           3858 	cjne	a,_axradio_mode,00114$
   09F4                    3859 00113$:
                    01BF   3860 	C$easyax5043.c$328$4$220 ==.
                           3861 ;	..\COMMON\easyax5043.c:328: f30_saved = AX5043_0xF30;
   09F4 90 4F 30           3862 	mov	dptr,#_AX5043_0xF30
   09F7 E0                 3863 	movx	a,@dptr
   09F8 90 04 41           3864 	mov	dptr,#_f30_saved
   09FB F0                 3865 	movx	@dptr,a
                    01C7   3866 	C$easyax5043.c$329$4$220 ==.
                           3867 ;	..\COMMON\easyax5043.c:329: f31_saved = AX5043_0xF31;
   09FC 90 4F 31           3868 	mov	dptr,#_AX5043_0xF31
   09FF E0                 3869 	movx	a,@dptr
   0A00 90 04 42           3870 	mov	dptr,#_f31_saved
   0A03 F0                 3871 	movx	@dptr,a
                    01CF   3872 	C$easyax5043.c$330$4$220 ==.
                           3873 ;	..\COMMON\easyax5043.c:330: f32_saved = AX5043_0xF32;
   0A04 90 4F 32           3874 	mov	dptr,#_AX5043_0xF32
   0A07 E0                 3875 	movx	a,@dptr
   0A08 90 04 43           3876 	mov	dptr,#_f32_saved
   0A0B F0                 3877 	movx	@dptr,a
                    01D7   3878 	C$easyax5043.c$331$4$220 ==.
                           3879 ;	..\COMMON\easyax5043.c:331: f33_saved = AX5043_0xF33;
   0A0C 90 4F 33           3880 	mov	dptr,#_AX5043_0xF33
   0A0F E0                 3881 	movx	a,@dptr
   0A10 FE                 3882 	mov	r6,a
   0A11 90 04 44           3883 	mov	dptr,#_f33_saved
   0A14 F0                 3884 	movx	@dptr,a
   0A15                    3885 00114$:
                    01E0   3886 	C$easyax5043.c$333$3$219 ==.
                           3887 ;	..\COMMON\easyax5043.c:333: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE ||
   0A15 74 19              3888 	mov	a,#0x19
   0A17 B5 0A 02           3889 	cjne	a,_axradio_mode,00224$
   0A1A 80 05              3890 	sjmp	00116$
   0A1C                    3891 00224$:
                    01E7   3892 	C$easyax5043.c$334$3$219 ==.
                           3893 ;	..\COMMON\easyax5043.c:334: axradio_mode == AXRADIO_MODE_SYNC_SLAVE)
   0A1C 74 22              3894 	mov	a,#0x22
   0A1E B5 0A 05           3895 	cjne	a,_axradio_mode,00117$
   0A21                    3896 00116$:
                    01EC   3897 	C$easyax5043.c$335$3$219 ==.
                           3898 ;	..\COMMON\easyax5043.c:335: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   0A21 90 40 02           3899 	mov	dptr,#_AX5043_PWRMODE
   0A24 E4                 3900 	clr	a
   0A25 F0                 3901 	movx	@dptr,a
   0A26                    3902 00117$:
                    01F1   3903 	C$easyax5043.c$336$3$219 ==.
                           3904 ;	..\COMMON\easyax5043.c:336: AX5043_IRQMASK0 &= (uint8_t)~0x01; // disable FIFO not empty irq
   0A26 90 40 07           3905 	mov	dptr,#_AX5043_IRQMASK0
   0A29 E0                 3906 	movx	a,@dptr
   0A2A 54 FE              3907 	anl	a,#0xFE
   0A2C F0                 3908 	movx	@dptr,a
                    01F8   3909 	C$easyax5043.c$337$3$219 ==.
                           3910 ;	..\COMMON\easyax5043.c:337: wtimer_remove_callback(&axradio_cb_receive.cb);
   0A2D 90 02 32           3911 	mov	dptr,#_axradio_cb_receive
   0A30 C0 07              3912 	push	ar7
   0A32 12 4B 64           3913 	lcall	_wtimer_remove_callback
   0A35 D0 07              3914 	pop	ar7
                    0202   3915 	C$easyax5043.c$338$3$219 ==.
                           3916 ;	..\COMMON\easyax5043.c:338: axradio_cb_receive.st.error = AXRADIO_ERR_NOERROR;
   0A37 90 02 37           3917 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   0A3A E4                 3918 	clr	a
   0A3B F0                 3919 	movx	@dptr,a
                    0207   3920 	C$easyax5043.c$339$3$219 ==.
                           3921 ;	..\COMMON\easyax5043.c:339: axradio_cb_receive.st.rx.mac.raw = axradio_rxbuffer;
   0A3C 90 02 4E           3922 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   0A3F 74 2E              3923 	mov	a,#_axradio_rxbuffer
   0A41 F0                 3924 	movx	@dptr,a
   0A42 A3                 3925 	inc	dptr
   0A43 74 01              3926 	mov	a,#(_axradio_rxbuffer >> 8)
   0A45 F0                 3927 	movx	@dptr,a
                    0211   3928 	C$easyax5043.c$340$3$219 ==.
                           3929 ;	..\COMMON\easyax5043.c:340: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   0A46 74 1C              3930 	mov	a,#0x1C
   0A48 B5 0A 02           3931 	cjne	a,_axradio_mode,00227$
   0A4B 80 0C              3932 	sjmp	00119$
   0A4D                    3933 00227$:
                    0218   3934 	C$easyax5043.c$341$3$219 ==.
                           3935 ;	..\COMMON\easyax5043.c:341: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   0A4D 74 1D              3936 	mov	a,#0x1D
   0A4F B5 0A 02           3937 	cjne	a,_axradio_mode,00228$
   0A52 80 05              3938 	sjmp	00119$
   0A54                    3939 00228$:
                    021F   3940 	C$easyax5043.c$342$3$219 ==.
                           3941 ;	..\COMMON\easyax5043.c:342: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   0A54 74 1E              3942 	mov	a,#0x1E
   0A56 B5 0A 5F           3943 	cjne	a,_axradio_mode,00120$
   0A59                    3944 00119$:
                    0224   3945 	C$easyax5043.c$343$4$221 ==.
                           3946 ;	..\COMMON\easyax5043.c:343: axradio_cb_receive.st.rx.pktdata = axradio_rxbuffer;
   0A59 90 02 50           3947 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0A5C 74 2E              3948 	mov	a,#_axradio_rxbuffer
   0A5E F0                 3949 	movx	@dptr,a
   0A5F A3                 3950 	inc	dptr
   0A60 74 01              3951 	mov	a,#(_axradio_rxbuffer >> 8)
   0A62 F0                 3952 	movx	@dptr,a
                    022E   3953 	C$easyax5043.c$344$4$221 ==.
                           3954 ;	..\COMMON\easyax5043.c:344: axradio_cb_receive.st.rx.pktlen = len;
   0A63 8F 05              3955 	mov	ar5,r7
   0A65 7E 00              3956 	mov	r6,#0x00
   0A67 90 02 52           3957 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0A6A ED                 3958 	mov	a,r5
   0A6B F0                 3959 	movx	@dptr,a
   0A6C A3                 3960 	inc	dptr
   0A6D EE                 3961 	mov	a,r6
   0A6E F0                 3962 	movx	@dptr,a
                    023A   3963 	C$easyax5043.c$346$5$221 ==.
                           3964 ;	..\COMMON\easyax5043.c:346: int8_t r = AX5043_RSSI;
   0A6F 90 40 40           3965 	mov	dptr,#_AX5043_RSSI
   0A72 E0                 3966 	movx	a,@dptr
                    023E   3967 	C$easyax5043.c$347$5$222 ==.
                           3968 ;	..\COMMON\easyax5043.c:347: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0A73 FE                 3969 	mov	r6,a
   0A74 33                 3970 	rlc	a
   0A75 95 E0              3971 	subb	a,acc
   0A77 FD                 3972 	mov	r5,a
   0A78 90 4F 09           3973 	mov	dptr,#_axradio_phy_rssioffset
   0A7B E4                 3974 	clr	a
   0A7C 93                 3975 	movc	a,@a+dptr
   0A7D FC                 3976 	mov	r4,a
   0A7E 33                 3977 	rlc	a
   0A7F 95 E0              3978 	subb	a,acc
   0A81 FB                 3979 	mov	r3,a
   0A82 EE                 3980 	mov	a,r6
   0A83 C3                 3981 	clr	c
   0A84 9C                 3982 	subb	a,r4
   0A85 FE                 3983 	mov	r6,a
   0A86 ED                 3984 	mov	a,r5
   0A87 9B                 3985 	subb	a,r3
   0A88 FD                 3986 	mov	r5,a
   0A89 90 02 3C           3987 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0A8C EE                 3988 	mov	a,r6
   0A8D F0                 3989 	movx	@dptr,a
   0A8E A3                 3990 	inc	dptr
   0A8F ED                 3991 	mov	a,r5
   0A90 F0                 3992 	movx	@dptr,a
                    025C   3993 	C$easyax5043.c$349$4$221 ==.
                           3994 ;	..\COMMON\easyax5043.c:349: axradio_cb_receive.st.rx.phy.offset.o = signextend20(radio_read24((uint16_t)&AX5043_TRKRFFREQ2));
   0A91 90 40 4D           3995 	mov	dptr,#_AX5043_TRKRFFREQ2
   0A94 12 41 18           3996 	lcall	_radio_read24
   0A97 12 4C AF           3997 	lcall	_signextend20
   0A9A AB 82              3998 	mov	r3,dpl
   0A9C AC 83              3999 	mov	r4,dph
   0A9E AD F0              4000 	mov	r5,b
   0AA0 FE                 4001 	mov	r6,a
   0AA1 90 02 3E           4002 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0AA4 EB                 4003 	mov	a,r3
   0AA5 F0                 4004 	movx	@dptr,a
   0AA6 A3                 4005 	inc	dptr
   0AA7 EC                 4006 	mov	a,r4
   0AA8 F0                 4007 	movx	@dptr,a
   0AA9 A3                 4008 	inc	dptr
   0AAA ED                 4009 	mov	a,r5
   0AAB F0                 4010 	movx	@dptr,a
   0AAC A3                 4011 	inc	dptr
   0AAD EE                 4012 	mov	a,r6
   0AAE F0                 4013 	movx	@dptr,a
                    027A   4014 	C$easyax5043.c$350$4$221 ==.
                           4015 ;	..\COMMON\easyax5043.c:350: wtimer_add_callback(&axradio_cb_receive.cb);
   0AAF 90 02 32           4016 	mov	dptr,#_axradio_cb_receive
   0AB2 12 3F BF           4017 	lcall	_wtimer_add_callback
                    0280   4018 	C$easyax5043.c$351$4$221 ==.
                           4019 ;	..\COMMON\easyax5043.c:351: break;
   0AB5 02 09 7F           4020 	ljmp	00149$
   0AB8                    4021 00120$:
                    0283   4022 	C$easyax5043.c$353$3$219 ==.
                           4023 ;	..\COMMON\easyax5043.c:353: axradio_cb_receive.st.rx.pktdata = &axradio_rxbuffer[axradio_framing_maclen];
   0AB8 90 4F 1F           4024 	mov	dptr,#_axradio_framing_maclen
   0ABB E4                 4025 	clr	a
   0ABC 93                 4026 	movc	a,@a+dptr
   0ABD FE                 4027 	mov	r6,a
   0ABE 24 2E              4028 	add	a,#_axradio_rxbuffer
   0AC0 FC                 4029 	mov	r4,a
   0AC1 E4                 4030 	clr	a
   0AC2 34 01              4031 	addc	a,#(_axradio_rxbuffer >> 8)
   0AC4 FD                 4032 	mov	r5,a
   0AC5 90 02 50           4033 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0AC8 EC                 4034 	mov	a,r4
   0AC9 F0                 4035 	movx	@dptr,a
   0ACA A3                 4036 	inc	dptr
   0ACB ED                 4037 	mov	a,r5
   0ACC F0                 4038 	movx	@dptr,a
                    0298   4039 	C$easyax5043.c$354$3$219 ==.
                           4040 ;	..\COMMON\easyax5043.c:354: if (len < axradio_framing_maclen) {
   0ACD C3                 4041 	clr	c
   0ACE EF                 4042 	mov	a,r7
   0ACF 9E                 4043 	subb	a,r6
   0AD0 50 0A              4044 	jnc	00127$
                    029D   4045 	C$easyax5043.c$356$4$223 ==.
                           4046 ;	..\COMMON\easyax5043.c:356: axradio_cb_receive.st.rx.pktlen = 0;
   0AD2 90 02 52           4047 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AD5 E4                 4048 	clr	a
   0AD6 F0                 4049 	movx	@dptr,a
   0AD7 A3                 4050 	inc	dptr
   0AD8 F0                 4051 	movx	@dptr,a
   0AD9 02 09 7F           4052 	ljmp	00149$
   0ADC                    4053 00127$:
                    02A7   4054 	C$easyax5043.c$358$4$224 ==.
                           4055 ;	..\COMMON\easyax5043.c:358: len -= axradio_framing_maclen;
   0ADC EF                 4056 	mov	a,r7
   0ADD C3                 4057 	clr	c
   0ADE 9E                 4058 	subb	a,r6
                    02AA   4059 	C$easyax5043.c$359$4$224 ==.
                           4060 ;	..\COMMON\easyax5043.c:359: axradio_cb_receive.st.rx.pktlen = len;
   0ADF FD                 4061 	mov	r5,a
   0AE0 7E 00              4062 	mov	r6,#0x00
   0AE2 90 02 52           4063 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AE5 ED                 4064 	mov	a,r5
   0AE6 F0                 4065 	movx	@dptr,a
   0AE7 A3                 4066 	inc	dptr
   0AE8 EE                 4067 	mov	a,r6
   0AE9 F0                 4068 	movx	@dptr,a
                    02B5   4069 	C$easyax5043.c$360$4$224 ==.
                           4070 ;	..\COMMON\easyax5043.c:360: wtimer_add_callback(&axradio_cb_receive.cb);
   0AEA 90 02 32           4071 	mov	dptr,#_axradio_cb_receive
   0AED 12 3F BF           4072 	lcall	_wtimer_add_callback
                    02BB   4073 	C$easyax5043.c$361$4$224 ==.
                           4074 ;	..\COMMON\easyax5043.c:361: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   0AF0 74 22              4075 	mov	a,#0x22
   0AF2 B5 0A 02           4076 	cjne	a,_axradio_mode,00232$
   0AF5 80 0A              4077 	sjmp	00123$
   0AF7                    4078 00232$:
                    02C2   4079 	C$easyax5043.c$362$4$224 ==.
                           4080 ;	..\COMMON\easyax5043.c:362: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE)
   0AF7 74 23              4081 	mov	a,#0x23
   0AF9 B5 0A 02           4082 	cjne	a,_axradio_mode,00233$
   0AFC 80 03              4083 	sjmp	00234$
   0AFE                    4084 00233$:
   0AFE 02 09 7F           4085 	ljmp	00149$
   0B01                    4086 00234$:
   0B01                    4087 00123$:
                    02CC   4088 	C$easyax5043.c$363$4$224 ==.
                           4089 ;	..\COMMON\easyax5043.c:363: wtimer_remove(&axradio_timer);
   0B01 90 02 89           4090 	mov	dptr,#_axradio_timer
   0B04 12 49 5A           4091 	lcall	_wtimer_remove
                    02D2   4092 	C$easyax5043.c$365$3$219 ==.
                           4093 ;	..\COMMON\easyax5043.c:365: break;
   0B07 02 09 7F           4094 	ljmp	00149$
                    02D5   4095 	C$easyax5043.c$367$3$219 ==.
                           4096 ;	..\COMMON\easyax5043.c:367: case AX5043_FIFOCMD_RFFREQOFFS:
   0B0A                    4097 00129$:
                    02D5   4098 	C$easyax5043.c$368$3$219 ==.
                           4099 ;	..\COMMON\easyax5043.c:368: if (len != 3)
   0B0A BF 03 02           4100 	cjne	r7,#0x03,00235$
   0B0D 80 03              4101 	sjmp	00236$
   0B0F                    4102 00235$:
   0B0F 02 0C 13           4103 	ljmp	00142$
   0B12                    4104 00236$:
                    02DD   4105 	C$easyax5043.c$370$3$219 ==.
                           4106 ;	..\COMMON\easyax5043.c:370: i = AX5043_FIFODATA;
   0B12 90 40 29           4107 	mov	dptr,#_AX5043_FIFODATA
   0B15 E0                 4108 	movx	a,@dptr
   0B16 FE                 4109 	mov	r6,a
                    02E2   4110 	C$easyax5043.c$371$3$219 ==.
                           4111 ;	..\COMMON\easyax5043.c:371: i &= 0x0F;
   0B17 53 06 0F           4112 	anl	ar6,#0x0F
                    02E5   4113 	C$easyax5043.c$372$3$219 ==.
                           4114 ;	..\COMMON\easyax5043.c:372: i |= 1 + (uint8_t)~(i & 0x08);
   0B1A 74 08              4115 	mov	a,#0x08
   0B1C 5E                 4116 	anl	a,r6
   0B1D F4                 4117 	cpl	a
   0B1E FD                 4118 	mov	r5,a
   0B1F 0D                 4119 	inc	r5
   0B20 ED                 4120 	mov	a,r5
   0B21 42 06              4121 	orl	ar6,a
                    02EE   4122 	C$easyax5043.c$373$3$219 ==.
                           4123 ;	..\COMMON\easyax5043.c:373: axradio_cb_receive.st.rx.phy.offset.b.b3 = ((int8_t)i) >> 8;
   0B23 8E 05              4124 	mov	ar5,r6
   0B25 ED                 4125 	mov	a,r5
   0B26 33                 4126 	rlc	a
   0B27 95 E0              4127 	subb	a,acc
   0B29 FD                 4128 	mov	r5,a
   0B2A 90 02 41           4129 	mov	dptr,#(_axradio_cb_receive + 0x000f)
   0B2D F0                 4130 	movx	@dptr,a
                    02F9   4131 	C$easyax5043.c$374$3$219 ==.
                           4132 ;	..\COMMON\easyax5043.c:374: axradio_cb_receive.st.rx.phy.offset.b.b2 = i;
   0B2E 90 02 40           4133 	mov	dptr,#(_axradio_cb_receive + 0x000e)
   0B31 EE                 4134 	mov	a,r6
   0B32 F0                 4135 	movx	@dptr,a
                    02FE   4136 	C$easyax5043.c$375$3$219 ==.
                           4137 ;	..\COMMON\easyax5043.c:375: axradio_cb_receive.st.rx.phy.offset.b.b1 = AX5043_FIFODATA;
   0B33 90 40 29           4138 	mov	dptr,#_AX5043_FIFODATA
   0B36 E0                 4139 	movx	a,@dptr
   0B37 90 02 3F           4140 	mov	dptr,#(_axradio_cb_receive + 0x000d)
   0B3A F0                 4141 	movx	@dptr,a
                    0306   4142 	C$easyax5043.c$376$3$219 ==.
                           4143 ;	..\COMMON\easyax5043.c:376: axradio_cb_receive.st.rx.phy.offset.b.b0 = AX5043_FIFODATA;
   0B3B 90 40 29           4144 	mov	dptr,#_AX5043_FIFODATA
   0B3E E0                 4145 	movx	a,@dptr
   0B3F FE                 4146 	mov	r6,a
   0B40 90 02 3E           4147 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0B43 F0                 4148 	movx	@dptr,a
                    030F   4149 	C$easyax5043.c$377$3$219 ==.
                           4150 ;	..\COMMON\easyax5043.c:377: break;
   0B44 02 09 7F           4151 	ljmp	00149$
                    0312   4152 	C$easyax5043.c$379$3$219 ==.
                           4153 ;	..\COMMON\easyax5043.c:379: case AX5043_FIFOCMD_RSSI:
   0B47                    4154 00132$:
                    0312   4155 	C$easyax5043.c$380$3$219 ==.
                           4156 ;	..\COMMON\easyax5043.c:380: if (len != 1)
   0B47 BF 01 02           4157 	cjne	r7,#0x01,00237$
   0B4A 80 03              4158 	sjmp	00238$
   0B4C                    4159 00237$:
   0B4C 02 0C 13           4160 	ljmp	00142$
   0B4F                    4161 00238$:
                    031A   4162 	C$easyax5043.c$383$4$219 ==.
                           4163 ;	..\COMMON\easyax5043.c:383: int8_t r = AX5043_FIFODATA;
   0B4F 90 40 29           4164 	mov	dptr,#_AX5043_FIFODATA
   0B52 E0                 4165 	movx	a,@dptr
                    031E   4166 	C$easyax5043.c$384$4$225 ==.
                           4167 ;	..\COMMON\easyax5043.c:384: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0B53 FE                 4168 	mov	r6,a
   0B54 33                 4169 	rlc	a
   0B55 95 E0              4170 	subb	a,acc
   0B57 FD                 4171 	mov	r5,a
   0B58 90 4F 09           4172 	mov	dptr,#_axradio_phy_rssioffset
   0B5B E4                 4173 	clr	a
   0B5C 93                 4174 	movc	a,@a+dptr
   0B5D FC                 4175 	mov	r4,a
   0B5E 33                 4176 	rlc	a
   0B5F 95 E0              4177 	subb	a,acc
   0B61 FB                 4178 	mov	r3,a
   0B62 EE                 4179 	mov	a,r6
   0B63 C3                 4180 	clr	c
   0B64 9C                 4181 	subb	a,r4
   0B65 FE                 4182 	mov	r6,a
   0B66 ED                 4183 	mov	a,r5
   0B67 9B                 4184 	subb	a,r3
   0B68 FD                 4185 	mov	r5,a
   0B69 90 02 3C           4186 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0B6C EE                 4187 	mov	a,r6
   0B6D F0                 4188 	movx	@dptr,a
   0B6E A3                 4189 	inc	dptr
   0B6F ED                 4190 	mov	a,r5
   0B70 F0                 4191 	movx	@dptr,a
                    033C   4192 	C$easyax5043.c$386$3$219 ==.
                           4193 ;	..\COMMON\easyax5043.c:386: break;
   0B71 02 09 7F           4194 	ljmp	00149$
                    033F   4195 	C$easyax5043.c$388$3$219 ==.
                           4196 ;	..\COMMON\easyax5043.c:388: case AX5043_FIFOCMD_TIMER:
   0B74                    4197 00135$:
                    033F   4198 	C$easyax5043.c$389$3$219 ==.
                           4199 ;	..\COMMON\easyax5043.c:389: if (len != 3)
   0B74 BF 03 02           4200 	cjne	r7,#0x03,00239$
   0B77 80 03              4201 	sjmp	00240$
   0B79                    4202 00239$:
   0B79 02 0C 13           4203 	ljmp	00142$
   0B7C                    4204 00240$:
                    0347   4205 	C$easyax5043.c$393$3$219 ==.
                           4206 ;	..\COMMON\easyax5043.c:393: axradio_cb_receive.st.time.b.b3 = 0;
   0B7C 90 02 3B           4207 	mov	dptr,#(_axradio_cb_receive + 0x0009)
   0B7F E4                 4208 	clr	a
   0B80 F0                 4209 	movx	@dptr,a
                    034C   4210 	C$easyax5043.c$394$3$219 ==.
                           4211 ;	..\COMMON\easyax5043.c:394: axradio_cb_receive.st.time.b.b2 = AX5043_FIFODATA;
   0B81 90 40 29           4212 	mov	dptr,#_AX5043_FIFODATA
   0B84 E0                 4213 	movx	a,@dptr
   0B85 90 02 3A           4214 	mov	dptr,#(_axradio_cb_receive + 0x0008)
   0B88 F0                 4215 	movx	@dptr,a
                    0354   4216 	C$easyax5043.c$395$3$219 ==.
                           4217 ;	..\COMMON\easyax5043.c:395: axradio_cb_receive.st.time.b.b1 = AX5043_FIFODATA;
   0B89 90 40 29           4218 	mov	dptr,#_AX5043_FIFODATA
   0B8C E0                 4219 	movx	a,@dptr
   0B8D 90 02 39           4220 	mov	dptr,#(_axradio_cb_receive + 0x0007)
   0B90 F0                 4221 	movx	@dptr,a
                    035C   4222 	C$easyax5043.c$396$3$219 ==.
                           4223 ;	..\COMMON\easyax5043.c:396: axradio_cb_receive.st.time.b.b0 = AX5043_FIFODATA;
   0B91 90 40 29           4224 	mov	dptr,#_AX5043_FIFODATA
   0B94 E0                 4225 	movx	a,@dptr
   0B95 FE                 4226 	mov	r6,a
   0B96 90 02 38           4227 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   0B99 F0                 4228 	movx	@dptr,a
                    0365   4229 	C$easyax5043.c$397$3$219 ==.
                           4230 ;	..\COMMON\easyax5043.c:397: break;
   0B9A 02 09 7F           4231 	ljmp	00149$
                    0368   4232 	C$easyax5043.c$399$3$219 ==.
                           4233 ;	..\COMMON\easyax5043.c:399: case AX5043_FIFOCMD_ANTRSSI:
   0B9D                    4234 00138$:
                    0368   4235 	C$easyax5043.c$400$3$219 ==.
                           4236 ;	..\COMMON\easyax5043.c:400: if (!len)
   0B9D EF                 4237 	mov	a,r7
   0B9E 70 03              4238 	jnz	00241$
   0BA0 02 09 7F           4239 	ljmp	00149$
   0BA3                    4240 00241$:
                    036E   4241 	C$easyax5043.c$402$3$219 ==.
                           4242 ;	..\COMMON\easyax5043.c:402: update_timeanchor();
   0BA3 C0 07              4243 	push	ar7
   0BA5 12 08 35           4244 	lcall	_update_timeanchor
                    0373   4245 	C$easyax5043.c$403$3$219 ==.
                           4246 ;	..\COMMON\easyax5043.c:403: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   0BA8 90 02 5E           4247 	mov	dptr,#_axradio_cb_channelstate
   0BAB 12 4B 64           4248 	lcall	_wtimer_remove_callback
                    0379   4249 	C$easyax5043.c$404$3$219 ==.
                           4250 ;	..\COMMON\easyax5043.c:404: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   0BAE 90 02 63           4251 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   0BB1 E4                 4252 	clr	a
   0BB2 F0                 4253 	movx	@dptr,a
                    037E   4254 	C$easyax5043.c$406$4$219 ==.
                           4255 ;	..\COMMON\easyax5043.c:406: int8_t r = AX5043_FIFODATA;
   0BB3 90 40 29           4256 	mov	dptr,#_AX5043_FIFODATA
   0BB6 E0                 4257 	movx	a,@dptr
                    0382   4258 	C$easyax5043.c$407$4$226 ==.
                           4259 ;	..\COMMON\easyax5043.c:407: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   0BB7 FE                 4260 	mov	r6,a
   0BB8 FC                 4261 	mov	r4,a
   0BB9 33                 4262 	rlc	a
   0BBA 95 E0              4263 	subb	a,acc
   0BBC FD                 4264 	mov	r5,a
   0BBD 90 4F 09           4265 	mov	dptr,#_axradio_phy_rssioffset
   0BC0 E4                 4266 	clr	a
   0BC1 93                 4267 	movc	a,@a+dptr
   0BC2 FB                 4268 	mov	r3,a
   0BC3 33                 4269 	rlc	a
   0BC4 95 E0              4270 	subb	a,acc
   0BC6 FA                 4271 	mov	r2,a
   0BC7 EC                 4272 	mov	a,r4
   0BC8 C3                 4273 	clr	c
   0BC9 9B                 4274 	subb	a,r3
   0BCA FC                 4275 	mov	r4,a
   0BCB ED                 4276 	mov	a,r5
   0BCC 9A                 4277 	subb	a,r2
   0BCD FD                 4278 	mov	r5,a
   0BCE 90 02 68           4279 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   0BD1 EC                 4280 	mov	a,r4
   0BD2 F0                 4281 	movx	@dptr,a
   0BD3 A3                 4282 	inc	dptr
   0BD4 ED                 4283 	mov	a,r5
   0BD5 F0                 4284 	movx	@dptr,a
                    03A1   4285 	C$easyax5043.c$408$4$226 ==.
                           4286 ;	..\COMMON\easyax5043.c:408: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   0BD6 90 4F 0B           4287 	mov	dptr,#_axradio_phy_channelbusy
   0BD9 E4                 4288 	clr	a
   0BDA 93                 4289 	movc	a,@a+dptr
   0BDB FD                 4290 	mov	r5,a
   0BDC C3                 4291 	clr	c
   0BDD EE                 4292 	mov	a,r6
   0BDE 64 80              4293 	xrl	a,#0x80
   0BE0 8D F0              4294 	mov	b,r5
   0BE2 63 F0 80           4295 	xrl	b,#0x80
   0BE5 95 F0              4296 	subb	a,b
   0BE7 B3                 4297 	cpl	c
   0BE8 E4                 4298 	clr	a
   0BE9 33                 4299 	rlc	a
   0BEA 90 02 6A           4300 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   0BED F0                 4301 	movx	@dptr,a
                    03B9   4302 	C$easyax5043.c$410$3$219 ==.
                           4303 ;	..\COMMON\easyax5043.c:410: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   0BEE 90 00 1A           4304 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0BF1 E0                 4305 	movx	a,@dptr
   0BF2 FB                 4306 	mov	r3,a
   0BF3 A3                 4307 	inc	dptr
   0BF4 E0                 4308 	movx	a,@dptr
   0BF5 FC                 4309 	mov	r4,a
   0BF6 A3                 4310 	inc	dptr
   0BF7 E0                 4311 	movx	a,@dptr
   0BF8 FD                 4312 	mov	r5,a
   0BF9 A3                 4313 	inc	dptr
   0BFA E0                 4314 	movx	a,@dptr
   0BFB FE                 4315 	mov	r6,a
   0BFC 90 02 64           4316 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   0BFF EB                 4317 	mov	a,r3
   0C00 F0                 4318 	movx	@dptr,a
   0C01 A3                 4319 	inc	dptr
   0C02 EC                 4320 	mov	a,r4
   0C03 F0                 4321 	movx	@dptr,a
   0C04 A3                 4322 	inc	dptr
   0C05 ED                 4323 	mov	a,r5
   0C06 F0                 4324 	movx	@dptr,a
   0C07 A3                 4325 	inc	dptr
   0C08 EE                 4326 	mov	a,r6
   0C09 F0                 4327 	movx	@dptr,a
                    03D5   4328 	C$easyax5043.c$411$3$219 ==.
                           4329 ;	..\COMMON\easyax5043.c:411: wtimer_add_callback(&axradio_cb_channelstate.cb);
   0C0A 90 02 5E           4330 	mov	dptr,#_axradio_cb_channelstate
   0C0D 12 3F BF           4331 	lcall	_wtimer_add_callback
   0C10 D0 07              4332 	pop	ar7
                    03DD   4333 	C$easyax5043.c$412$3$219 ==.
                           4334 ;	..\COMMON\easyax5043.c:412: --len;
   0C12 1F                 4335 	dec	r7
                    03DE   4336 	C$easyax5043.c$417$3$219 ==.
                           4337 ;	..\COMMON\easyax5043.c:417: dropchunk:
   0C13                    4338 00142$:
                    03DE   4339 	C$easyax5043.c$418$3$219 ==.
                           4340 ;	..\COMMON\easyax5043.c:418: if (!len)
   0C13 EF                 4341 	mov	a,r7
   0C14 70 03              4342 	jnz	00243$
   0C16 02 09 7F           4343 	ljmp	00149$
   0C19                    4344 00243$:
                    03E4   4345 	C$easyax5043.c$421$1$215 ==.
                           4346 ;	..\COMMON\easyax5043.c:421: do {
   0C19                    4347 00145$:
                    03E4   4348 	C$easyax5043.c$422$4$227 ==.
                           4349 ;	..\COMMON\easyax5043.c:422: AX5043_FIFODATA;        // purge FIFO
   0C19 90 40 29           4350 	mov	dptr,#_AX5043_FIFODATA
   0C1C E0                 4351 	movx	a,@dptr
                    03E8   4352 	C$easyax5043.c$424$3$219 ==.
                           4353 ;	..\COMMON\easyax5043.c:424: while (--i);
   0C1D DF FA              4354 	djnz	r7,00145$
                    03EA   4355 	C$easyax5043.c$426$1$215 ==.
                           4356 ;	..\COMMON\easyax5043.c:426: } // end switch(fifo_cmd)
   0C1F 02 09 7F           4357 	ljmp	00149$
   0C22                    4358 00152$:
                    03ED   4359 	C$easyax5043.c$428$1$215 ==.
                    03ED   4360 	XFeasyax5043$receive_isr$0$0 ==.
   0C22 22                 4361 	ret
                           4362 ;------------------------------------------------------------
                           4363 ;Allocation info for local variables in function 'transmit_isr'
                           4364 ;------------------------------------------------------------
                           4365 ;cnt                       Allocated to registers r7 
                           4366 ;byte                      Allocated to registers r7 
                           4367 ;len_byte                  Allocated to registers r4 
                           4368 ;i                         Allocated to registers r3 
                           4369 ;byte                      Allocated to registers r6 
                           4370 ;flags                     Allocated to registers r6 
                           4371 ;len                       Allocated to registers r4 r5 
                           4372 ;------------------------------------------------------------
                    03EE   4373 	Feasyax5043$transmit_isr$0$0 ==.
                    03EE   4374 	C$easyax5043.c$430$1$215 ==.
                           4375 ;	..\COMMON\easyax5043.c:430: static __reentrantb void transmit_isr(void) __reentrant
                           4376 ;	-----------------------------------------
                           4377 ;	 function transmit_isr
                           4378 ;	-----------------------------------------
   0C23                    4379 _transmit_isr:
                    03EE   4380 	C$easyax5043.c$568$6$238 ==.
                           4381 ;	..\COMMON\easyax5043.c:568: pktend:
   0C23                    4382 00157$:
                    03EE   4383 	C$easyax5043.c$433$2$229 ==.
                           4384 ;	..\COMMON\easyax5043.c:433: uint8_t cnt = AX5043_FIFOFREE0;
   0C23 90 40 2D           4385 	mov	dptr,#_AX5043_FIFOFREE0
   0C26 E0                 4386 	movx	a,@dptr
   0C27 FF                 4387 	mov	r7,a
                    03F3   4388 	C$easyax5043.c$434$2$230 ==.
                           4389 ;	..\COMMON\easyax5043.c:434: if (AX5043_FIFOFREE1)
   0C28 90 40 2C           4390 	mov	dptr,#_AX5043_FIFOFREE1
   0C2B E0                 4391 	movx	a,@dptr
   0C2C FE                 4392 	mov	r6,a
   0C2D 60 02              4393 	jz	00102$
                    03FA   4394 	C$easyax5043.c$435$2$230 ==.
                           4395 ;	..\COMMON\easyax5043.c:435: cnt = 0xff;
   0C2F 7F FF              4396 	mov	r7,#0xFF
   0C31                    4397 00102$:
                    03FC   4398 	C$easyax5043.c$436$2$230 ==.
                           4399 ;	..\COMMON\easyax5043.c:436: switch (axradio_trxstate) {
   0C31 AE 0B              4400 	mov	r6,_axradio_trxstate
   0C33 BE 0A 02           4401 	cjne	r6,#0x0A,00219$
   0C36 80 0F              4402 	sjmp	00103$
   0C38                    4403 00219$:
   0C38 BE 0B 03           4404 	cjne	r6,#0x0B,00220$
   0C3B 02 0C DC           4405 	ljmp	00115$
   0C3E                    4406 00220$:
   0C3E BE 0C 03           4407 	cjne	r6,#0x0C,00221$
   0C41 02 0E B2           4408 	ljmp	00137$
   0C44                    4409 00221$:
   0C44 02 0F 48           4410 	ljmp	00148$
                    0412   4411 	C$easyax5043.c$437$3$231 ==.
                           4412 ;	..\COMMON\easyax5043.c:437: case trxstate_tx_longpreamble:
   0C47                    4413 00103$:
                    0412   4414 	C$easyax5043.c$438$3$231 ==.
                           4415 ;	..\COMMON\easyax5043.c:438: if (!axradio_txbuffer_cnt) {
   0C47 90 00 07           4416 	mov	dptr,#_axradio_txbuffer_cnt
   0C4A E0                 4417 	movx	a,@dptr
   0C4B FD                 4418 	mov	r5,a
   0C4C A3                 4419 	inc	dptr
   0C4D E0                 4420 	movx	a,@dptr
   0C4E FE                 4421 	mov	r6,a
   0C4F 4D                 4422 	orl	a,r5
   0C50 70 37              4423 	jnz	00109$
                    041D   4424 	C$easyax5043.c$439$4$232 ==.
                           4425 ;	..\COMMON\easyax5043.c:439: axradio_trxstate = trxstate_tx_shortpreamble;
   0C52 75 0B 0B           4426 	mov	_axradio_trxstate,#0x0B
                    0420   4427 	C$easyax5043.c$440$4$232 ==.
                           4428 ;	..\COMMON\easyax5043.c:440: if( axradio_mode == AXRADIO_MODE_WOR_TRANSMIT || axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT )
   0C55 74 11              4429 	mov	a,#0x11
   0C57 B5 0A 02           4430 	cjne	a,_axradio_mode,00223$
   0C5A 80 05              4431 	sjmp	00104$
   0C5C                    4432 00223$:
   0C5C 74 13              4433 	mov	a,#0x13
   0C5E B5 0A 14           4434 	cjne	a,_axradio_mode,00105$
   0C61                    4435 00104$:
                    042C   4436 	C$easyax5043.c$441$4$232 ==.
                           4437 ;	..\COMMON\easyax5043.c:441: axradio_txbuffer_cnt = axradio_phy_preamble_wor_len;
   0C61 90 4F 15           4438 	mov	dptr,#_axradio_phy_preamble_wor_len
   0C64 E4                 4439 	clr	a
   0C65 93                 4440 	movc	a,@a+dptr
   0C66 FB                 4441 	mov	r3,a
   0C67 74 01              4442 	mov	a,#0x01
   0C69 93                 4443 	movc	a,@a+dptr
   0C6A FC                 4444 	mov	r4,a
   0C6B 90 00 07           4445 	mov	dptr,#_axradio_txbuffer_cnt
   0C6E EB                 4446 	mov	a,r3
   0C6F F0                 4447 	movx	@dptr,a
   0C70 A3                 4448 	inc	dptr
   0C71 EC                 4449 	mov	a,r4
   0C72 F0                 4450 	movx	@dptr,a
   0C73 80 67              4451 	sjmp	00115$
   0C75                    4452 00105$:
                    0440   4453 	C$easyax5043.c$443$4$232 ==.
                           4454 ;	..\COMMON\easyax5043.c:443: axradio_txbuffer_cnt = axradio_phy_preamble_len;
   0C75 90 4F 19           4455 	mov	dptr,#_axradio_phy_preamble_len
   0C78 E4                 4456 	clr	a
   0C79 93                 4457 	movc	a,@a+dptr
   0C7A FB                 4458 	mov	r3,a
   0C7B 74 01              4459 	mov	a,#0x01
   0C7D 93                 4460 	movc	a,@a+dptr
   0C7E FC                 4461 	mov	r4,a
   0C7F 90 00 07           4462 	mov	dptr,#_axradio_txbuffer_cnt
   0C82 EB                 4463 	mov	a,r3
   0C83 F0                 4464 	movx	@dptr,a
   0C84 A3                 4465 	inc	dptr
   0C85 EC                 4466 	mov	a,r4
   0C86 F0                 4467 	movx	@dptr,a
                    0452   4468 	C$easyax5043.c$444$4$232 ==.
                           4469 ;	..\COMMON\easyax5043.c:444: goto shortpreamble;
   0C87 80 53              4470 	sjmp	00115$
   0C89                    4471 00109$:
                    0454   4472 	C$easyax5043.c$446$3$231 ==.
                           4473 ;	..\COMMON\easyax5043.c:446: if (cnt < 4)
   0C89 BF 04 00           4474 	cjne	r7,#0x04,00226$
   0C8C                    4475 00226$:
   0C8C 50 03              4476 	jnc	00227$
   0C8E 02 0F 59           4477 	ljmp	00151$
   0C91                    4478 00227$:
                    045C   4479 	C$easyax5043.c$448$3$231 ==.
                           4480 ;	..\COMMON\easyax5043.c:448: cnt = 7;
   0C91 7F 07              4481 	mov	r7,#0x07
                    045E   4482 	C$easyax5043.c$449$3$231 ==.
                           4483 ;	..\COMMON\easyax5043.c:449: if (axradio_txbuffer_cnt < 7)
   0C93 C3                 4484 	clr	c
   0C94 ED                 4485 	mov	a,r5
   0C95 94 07              4486 	subb	a,#0x07
   0C97 EE                 4487 	mov	a,r6
   0C98 94 00              4488 	subb	a,#0x00
   0C9A 50 02              4489 	jnc	00113$
                    0467   4490 	C$easyax5043.c$450$3$231 ==.
                           4491 ;	..\COMMON\easyax5043.c:450: cnt = axradio_txbuffer_cnt;
   0C9C 8D 07              4492 	mov	ar7,r5
   0C9E                    4493 00113$:
                    0469   4494 	C$easyax5043.c$451$3$231 ==.
                           4495 ;	..\COMMON\easyax5043.c:451: axradio_txbuffer_cnt -= cnt;
   0C9E 8F 05              4496 	mov	ar5,r7
   0CA0 7E 00              4497 	mov	r6,#0x00
   0CA2 90 00 07           4498 	mov	dptr,#_axradio_txbuffer_cnt
   0CA5 E0                 4499 	movx	a,@dptr
   0CA6 FB                 4500 	mov	r3,a
   0CA7 A3                 4501 	inc	dptr
   0CA8 E0                 4502 	movx	a,@dptr
   0CA9 FC                 4503 	mov	r4,a
   0CAA 90 00 07           4504 	mov	dptr,#_axradio_txbuffer_cnt
   0CAD EB                 4505 	mov	a,r3
   0CAE C3                 4506 	clr	c
   0CAF 9D                 4507 	subb	a,r5
   0CB0 F0                 4508 	movx	@dptr,a
   0CB1 EC                 4509 	mov	a,r4
   0CB2 9E                 4510 	subb	a,r6
   0CB3 A3                 4511 	inc	dptr
   0CB4 F0                 4512 	movx	@dptr,a
                    0480   4513 	C$easyax5043.c$452$3$231 ==.
                           4514 ;	..\COMMON\easyax5043.c:452: cnt <<= 5;
   0CB5 EF                 4515 	mov	a,r7
   0CB6 C4                 4516 	swap	a
   0CB7 23                 4517 	rl	a
   0CB8 54 E0              4518 	anl	a,#0xE0
   0CBA FF                 4519 	mov	r7,a
                    0486   4520 	C$easyax5043.c$453$3$231 ==.
                           4521 ;	..\COMMON\easyax5043.c:453: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0CBB 90 40 29           4522 	mov	dptr,#_AX5043_FIFODATA
   0CBE 74 62              4523 	mov	a,#0x62
   0CC0 F0                 4524 	movx	@dptr,a
                    048C   4525 	C$easyax5043.c$454$3$231 ==.
                           4526 ;	..\COMMON\easyax5043.c:454: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0CC1 90 4F 1C           4527 	mov	dptr,#_axradio_phy_preamble_flags
   0CC4 E4                 4528 	clr	a
   0CC5 93                 4529 	movc	a,@a+dptr
   0CC6 90 40 29           4530 	mov	dptr,#_AX5043_FIFODATA
   0CC9 F0                 4531 	movx	@dptr,a
                    0495   4532 	C$easyax5043.c$455$3$231 ==.
                           4533 ;	..\COMMON\easyax5043.c:455: AX5043_FIFODATA = cnt;
   0CCA 90 40 29           4534 	mov	dptr,#_AX5043_FIFODATA
   0CCD EF                 4535 	mov	a,r7
   0CCE F0                 4536 	movx	@dptr,a
                    049A   4537 	C$easyax5043.c$456$3$231 ==.
                           4538 ;	..\COMMON\easyax5043.c:456: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0CCF 90 4F 1B           4539 	mov	dptr,#_axradio_phy_preamble_byte
   0CD2 E4                 4540 	clr	a
   0CD3 93                 4541 	movc	a,@a+dptr
   0CD4 FE                 4542 	mov	r6,a
   0CD5 90 40 29           4543 	mov	dptr,#_AX5043_FIFODATA
   0CD8 F0                 4544 	movx	@dptr,a
                    04A4   4545 	C$easyax5043.c$457$3$231 ==.
                           4546 ;	..\COMMON\easyax5043.c:457: break;
   0CD9 02 0C 23           4547 	ljmp	00157$
                    04A7   4548 	C$easyax5043.c$460$3$231 ==.
                           4549 ;	..\COMMON\easyax5043.c:460: shortpreamble:
   0CDC                    4550 00115$:
                    04A7   4551 	C$easyax5043.c$461$3$231 ==.
                           4552 ;	..\COMMON\easyax5043.c:461: if (!axradio_txbuffer_cnt) {
   0CDC 90 00 07           4553 	mov	dptr,#_axradio_txbuffer_cnt
   0CDF E0                 4554 	movx	a,@dptr
   0CE0 FD                 4555 	mov	r5,a
   0CE1 A3                 4556 	inc	dptr
   0CE2 E0                 4557 	movx	a,@dptr
   0CE3 FE                 4558 	mov	r6,a
   0CE4 4D                 4559 	orl	a,r5
   0CE5 60 03              4560 	jz	00229$
   0CE7 02 0D C2           4561 	ljmp	00127$
   0CEA                    4562 00229$:
                    04B5   4563 	C$easyax5043.c$462$4$233 ==.
                           4564 ;	..\COMMON\easyax5043.c:462: if (cnt < 15)
   0CEA BF 0F 00           4565 	cjne	r7,#0x0F,00230$
   0CED                    4566 00230$:
   0CED 50 03              4567 	jnc	00231$
   0CEF 02 0F 59           4568 	ljmp	00151$
   0CF2                    4569 00231$:
                    04BD   4570 	C$easyax5043.c$464$4$233 ==.
                           4571 ;	..\COMMON\easyax5043.c:464: if (axradio_phy_preamble_appendbits) {
   0CF2 90 4F 1D           4572 	mov	dptr,#_axradio_phy_preamble_appendbits
   0CF5 E4                 4573 	clr	a
   0CF6 93                 4574 	movc	a,@a+dptr
   0CF7 FC                 4575 	mov	r4,a
   0CF8 60 6F              4576 	jz	00122$
                    04C5   4577 	C$easyax5043.c$466$5$234 ==.
                           4578 ;	..\COMMON\easyax5043.c:466: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                    04C5   4579 	C$easyax5043.c$467$5$234 ==.
                           4580 ;	..\COMMON\easyax5043.c:467: AX5043_FIFODATA = 0x1C;
   0CFA 90 40 29           4581 	mov	dptr,#_AX5043_FIFODATA
   0CFD 74 41              4582 	mov	a,#0x41
   0CFF F0                 4583 	movx	@dptr,a
   0D00 74 1C              4584 	mov	a,#0x1C
   0D02 F0                 4585 	movx	@dptr,a
                    04CE   4586 	C$easyax5043.c$468$5$234 ==.
                           4587 ;	..\COMMON\easyax5043.c:468: byte = axradio_phy_preamble_appendpattern;
   0D03 90 4F 1E           4588 	mov	dptr,#_axradio_phy_preamble_appendpattern
   0D06 E4                 4589 	clr	a
   0D07 93                 4590 	movc	a,@a+dptr
   0D08 FB                 4591 	mov	r3,a
   0D09 FF                 4592 	mov	r7,a
                    04D5   4593 	C$easyax5043.c$469$5$234 ==.
                           4594 ;	..\COMMON\easyax5043.c:469: if (AX5043_PKTADDRCFG & 0x80) {
   0D0A 90 42 00           4595 	mov	dptr,#_AX5043_PKTADDRCFG
   0D0D E0                 4596 	movx	a,@dptr
   0D0E FA                 4597 	mov	r2,a
   0D0F 30 E7 26           4598 	jnb	acc.7,00119$
                    04DD   4599 	C$easyax5043.c$471$6$235 ==.
                           4600 ;	..\COMMON\easyax5043.c:471: byte &= 0xFF << (8-axradio_phy_preamble_appendbits);
   0D12 74 08              4601 	mov	a,#0x08
   0D14 C3                 4602 	clr	c
   0D15 9C                 4603 	subb	a,r4
   0D16 F5 F0              4604 	mov	b,a
   0D18 05 F0              4605 	inc	b
   0D1A 74 FF              4606 	mov	a,#0xFF
   0D1C 80 02              4607 	sjmp	00236$
   0D1E                    4608 00234$:
   0D1E 25 E0              4609 	add	a,acc
   0D20                    4610 00236$:
   0D20 D5 F0 FB           4611 	djnz	b,00234$
   0D23 FA                 4612 	mov	r2,a
   0D24 52 07              4613 	anl	ar7,a
                    04F1   4614 	C$easyax5043.c$472$6$235 ==.
                           4615 ;	..\COMMON\easyax5043.c:472: byte |= 0x80 >> axradio_phy_preamble_appendbits;
   0D26 8C F0              4616 	mov	b,r4
   0D28 05 F0              4617 	inc	b
   0D2A 74 80              4618 	mov	a,#0x80
   0D2C 80 02              4619 	sjmp	00238$
   0D2E                    4620 00237$:
   0D2E C3                 4621 	clr	c
   0D2F 13                 4622 	rrc	a
   0D30                    4623 00238$:
   0D30 D5 F0 FB           4624 	djnz	b,00237$
   0D33 FA                 4625 	mov	r2,a
   0D34 42 07              4626 	orl	ar7,a
   0D36 80 2C              4627 	sjmp	00120$
   0D38                    4628 00119$:
                    0503   4629 	C$easyax5043.c$475$6$236 ==.
                           4630 ;	..\COMMON\easyax5043.c:475: byte &= 0xFF >> (8-axradio_phy_preamble_appendbits);
   0D38 8C 02              4631 	mov	ar2,r4
   0D3A 7B 00              4632 	mov	r3,#0x00
   0D3C 74 08              4633 	mov	a,#0x08
   0D3E C3                 4634 	clr	c
   0D3F 9A                 4635 	subb	a,r2
   0D40 FA                 4636 	mov	r2,a
   0D41 E4                 4637 	clr	a
   0D42 9B                 4638 	subb	a,r3
   0D43 FB                 4639 	mov	r3,a
   0D44 8A F0              4640 	mov	b,r2
   0D46 05 F0              4641 	inc	b
   0D48 74 FF              4642 	mov	a,#0xFF
   0D4A 80 02              4643 	sjmp	00240$
   0D4C                    4644 00239$:
   0D4C C3                 4645 	clr	c
   0D4D 13                 4646 	rrc	a
   0D4E                    4647 00240$:
   0D4E D5 F0 FB           4648 	djnz	b,00239$
   0D51 FA                 4649 	mov	r2,a
   0D52 52 07              4650 	anl	ar7,a
                    051F   4651 	C$easyax5043.c$476$6$236 ==.
                           4652 ;	..\COMMON\easyax5043.c:476: byte |= 0x01 << axradio_phy_preamble_appendbits;
   0D54 8C F0              4653 	mov	b,r4
   0D56 05 F0              4654 	inc	b
   0D58 74 01              4655 	mov	a,#0x01
   0D5A 80 02              4656 	sjmp	00243$
   0D5C                    4657 00241$:
   0D5C 25 E0              4658 	add	a,acc
   0D5E                    4659 00243$:
   0D5E D5 F0 FB           4660 	djnz	b,00241$
   0D61 FC                 4661 	mov	r4,a
   0D62 42 07              4662 	orl	ar7,a
   0D64                    4663 00120$:
                    052F   4664 	C$easyax5043.c$478$5$234 ==.
                           4665 ;	..\COMMON\easyax5043.c:478: AX5043_FIFODATA = byte;
   0D64 90 40 29           4666 	mov	dptr,#_AX5043_FIFODATA
   0D67 EF                 4667 	mov	a,r7
   0D68 F0                 4668 	movx	@dptr,a
   0D69                    4669 00122$:
                    0534   4670 	C$easyax5043.c$484$4$233 ==.
                           4671 ;	..\COMMON\easyax5043.c:484: if ((AX5043_FRAMING & 0x0E) == 0x06 && axradio_framing_synclen) {
   0D69 90 40 12           4672 	mov	dptr,#_AX5043_FRAMING
   0D6C E0                 4673 	movx	a,@dptr
   0D6D FC                 4674 	mov	r4,a
   0D6E 53 04 0E           4675 	anl	ar4,#0x0E
   0D71 BC 06 48           4676 	cjne	r4,#0x06,00124$
   0D74 90 4F 27           4677 	mov	dptr,#_axradio_framing_synclen
   0D77 E4                 4678 	clr	a
   0D78 93                 4679 	movc	a,@a+dptr
   0D79 FC                 4680 	mov	r4,a
   0D7A 60 40              4681 	jz	00124$
                    0547   4682 	C$easyax5043.c$486$5$233 ==.
                           4683 ;	..\COMMON\easyax5043.c:486: uint8_t len_byte = axradio_framing_synclen;
                    0547   4684 	C$easyax5043.c$487$5$237 ==.
                           4685 ;	..\COMMON\easyax5043.c:487: uint8_t i = (len_byte & 0x07) ? 0x04 : 0;
   0D7C EC                 4686 	mov	a,r4
   0D7D 54 07              4687 	anl	a,#0x07
   0D7F 60 04              4688 	jz	00161$
   0D81 7B 04              4689 	mov	r3,#0x04
   0D83 80 02              4690 	sjmp	00162$
   0D85                    4691 00161$:
   0D85 7B 00              4692 	mov	r3,#0x00
   0D87                    4693 00162$:
                    0552   4694 	C$easyax5043.c$489$5$237 ==.
                           4695 ;	..\COMMON\easyax5043.c:489: len_byte += 7;
   0D87 74 07              4696 	mov	a,#0x07
   0D89 2C                 4697 	add	a,r4
                    0555   4698 	C$easyax5043.c$490$5$237 ==.
                           4699 ;	..\COMMON\easyax5043.c:490: len_byte >>= 3;
   0D8A C4                 4700 	swap	a
   0D8B 23                 4701 	rl	a
   0D8C 54 1F              4702 	anl	a,#0x1F
                    0559   4703 	C$easyax5043.c$491$5$237 ==.
                           4704 ;	..\COMMON\easyax5043.c:491: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | ((len_byte + 1) << 5);
   0D8E FC                 4705 	mov	r4,a
   0D8F 04                 4706 	inc	a
   0D90 C4                 4707 	swap	a
   0D91 23                 4708 	rl	a
   0D92 54 E0              4709 	anl	a,#0xE0
   0D94 FA                 4710 	mov	r2,a
   0D95 90 40 29           4711 	mov	dptr,#_AX5043_FIFODATA
   0D98 74 01              4712 	mov	a,#0x01
   0D9A 4A                 4713 	orl	a,r2
   0D9B F0                 4714 	movx	@dptr,a
                    0567   4715 	C$easyax5043.c$492$5$237 ==.
                           4716 ;	..\COMMON\easyax5043.c:492: AX5043_FIFODATA = axradio_framing_syncflags | i;
   0D9C 90 4F 2C           4717 	mov	dptr,#_axradio_framing_syncflags
   0D9F E4                 4718 	clr	a
   0DA0 93                 4719 	movc	a,@a+dptr
   0DA1 FA                 4720 	mov	r2,a
   0DA2 90 40 29           4721 	mov	dptr,#_AX5043_FIFODATA
   0DA5 EB                 4722 	mov	a,r3
   0DA6 4A                 4723 	orl	a,r2
   0DA7 F0                 4724 	movx	@dptr,a
                    0573   4725 	C$easyax5043.c$493$1$229 ==.
                           4726 ;	..\COMMON\easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DA8 7B 00              4727 	mov	r3,#0x00
   0DAA                    4728 00152$:
   0DAA C3                 4729 	clr	c
   0DAB EB                 4730 	mov	a,r3
   0DAC 9C                 4731 	subb	a,r4
   0DAD 50 0D              4732 	jnc	00124$
                    057A   4733 	C$easyax5043.c$495$6$238 ==.
                           4734 ;	..\COMMON\easyax5043.c:495: AX5043_FIFODATA = axradio_framing_syncword[i];
   0DAF EB                 4735 	mov	a,r3
   0DB0 90 4F 28           4736 	mov	dptr,#_axradio_framing_syncword
   0DB3 93                 4737 	movc	a,@a+dptr
   0DB4 FA                 4738 	mov	r2,a
   0DB5 90 40 29           4739 	mov	dptr,#_AX5043_FIFODATA
   0DB8 F0                 4740 	movx	@dptr,a
                    0584   4741 	C$easyax5043.c$493$5$237 ==.
                           4742 ;	..\COMMON\easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DB9 0B                 4743 	inc	r3
   0DBA 80 EE              4744 	sjmp	00152$
   0DBC                    4745 00124$:
                    0587   4746 	C$easyax5043.c$502$4$233 ==.
                           4747 ;	..\COMMON\easyax5043.c:502: axradio_trxstate = trxstate_tx_packet;
   0DBC 75 0B 0C           4748 	mov	_axradio_trxstate,#0x0C
                    058A   4749 	C$easyax5043.c$503$4$233 ==.
                           4750 ;	..\COMMON\easyax5043.c:503: break;
   0DBF 02 0C 23           4751 	ljmp	00157$
   0DC2                    4752 00127$:
                    058D   4753 	C$easyax5043.c$505$3$231 ==.
                           4754 ;	..\COMMON\easyax5043.c:505: if (cnt < 4)
   0DC2 BF 04 00           4755 	cjne	r7,#0x04,00249$
   0DC5                    4756 00249$:
   0DC5 50 03              4757 	jnc	00250$
   0DC7 02 0F 59           4758 	ljmp	00151$
   0DCA                    4759 00250$:
                    0595   4760 	C$easyax5043.c$507$3$231 ==.
                           4761 ;	..\COMMON\easyax5043.c:507: cnt = 255;
   0DCA 7F FF              4762 	mov	r7,#0xFF
                    0597   4763 	C$easyax5043.c$508$3$231 ==.
                           4764 ;	..\COMMON\easyax5043.c:508: if (axradio_txbuffer_cnt < 255*8)
   0DCC C3                 4765 	clr	c
   0DCD ED                 4766 	mov	a,r5
   0DCE 94 F8              4767 	subb	a,#0xF8
   0DD0 EE                 4768 	mov	a,r6
   0DD1 94 07              4769 	subb	a,#0x07
   0DD3 50 12              4770 	jnc	00131$
                    05A0   4771 	C$easyax5043.c$509$3$231 ==.
                           4772 ;	..\COMMON\easyax5043.c:509: cnt = axradio_txbuffer_cnt >> 3;
   0DD5 EE                 4773 	mov	a,r6
   0DD6 C4                 4774 	swap	a
   0DD7 23                 4775 	rl	a
   0DD8 CD                 4776 	xch	a,r5
   0DD9 C4                 4777 	swap	a
   0DDA 23                 4778 	rl	a
   0DDB 54 1F              4779 	anl	a,#0x1F
   0DDD 6D                 4780 	xrl	a,r5
   0DDE CD                 4781 	xch	a,r5
   0DDF 54 1F              4782 	anl	a,#0x1F
   0DE1 CD                 4783 	xch	a,r5
   0DE2 6D                 4784 	xrl	a,r5
   0DE3 CD                 4785 	xch	a,r5
   0DE4 FE                 4786 	mov	r6,a
   0DE5 8D 07              4787 	mov	ar7,r5
   0DE7                    4788 00131$:
                    05B2   4789 	C$easyax5043.c$510$3$231 ==.
                           4790 ;	..\COMMON\easyax5043.c:510: if (cnt) {
   0DE7 EF                 4791 	mov	a,r7
   0DE8 60 46              4792 	jz	00133$
                    05B5   4793 	C$easyax5043.c$511$4$239 ==.
                           4794 ;	..\COMMON\easyax5043.c:511: axradio_txbuffer_cnt -= ((uint16_t)cnt) << 3;
   0DEA 8F 05              4795 	mov	ar5,r7
   0DEC E4                 4796 	clr	a
   0DED C4                 4797 	swap	a
   0DEE 03                 4798 	rr	a
   0DEF 54 F8              4799 	anl	a,#0xF8
   0DF1 CD                 4800 	xch	a,r5
   0DF2 C4                 4801 	swap	a
   0DF3 03                 4802 	rr	a
   0DF4 CD                 4803 	xch	a,r5
   0DF5 6D                 4804 	xrl	a,r5
   0DF6 CD                 4805 	xch	a,r5
   0DF7 54 F8              4806 	anl	a,#0xF8
   0DF9 CD                 4807 	xch	a,r5
   0DFA 6D                 4808 	xrl	a,r5
   0DFB FE                 4809 	mov	r6,a
   0DFC 90 00 07           4810 	mov	dptr,#_axradio_txbuffer_cnt
   0DFF E0                 4811 	movx	a,@dptr
   0E00 FB                 4812 	mov	r3,a
   0E01 A3                 4813 	inc	dptr
   0E02 E0                 4814 	movx	a,@dptr
   0E03 FC                 4815 	mov	r4,a
   0E04 90 00 07           4816 	mov	dptr,#_axradio_txbuffer_cnt
   0E07 EB                 4817 	mov	a,r3
   0E08 C3                 4818 	clr	c
   0E09 9D                 4819 	subb	a,r5
   0E0A F0                 4820 	movx	@dptr,a
   0E0B EC                 4821 	mov	a,r4
   0E0C 9E                 4822 	subb	a,r6
   0E0D A3                 4823 	inc	dptr
   0E0E F0                 4824 	movx	@dptr,a
                    05DA   4825 	C$easyax5043.c$512$4$239 ==.
                           4826 ;	..\COMMON\easyax5043.c:512: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0E0F 90 40 29           4827 	mov	dptr,#_AX5043_FIFODATA
   0E12 74 62              4828 	mov	a,#0x62
   0E14 F0                 4829 	movx	@dptr,a
                    05E0   4830 	C$easyax5043.c$513$4$239 ==.
                           4831 ;	..\COMMON\easyax5043.c:513: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0E15 90 4F 1C           4832 	mov	dptr,#_axradio_phy_preamble_flags
   0E18 E4                 4833 	clr	a
   0E19 93                 4834 	movc	a,@a+dptr
   0E1A 90 40 29           4835 	mov	dptr,#_AX5043_FIFODATA
   0E1D F0                 4836 	movx	@dptr,a
                    05E9   4837 	C$easyax5043.c$514$4$239 ==.
                           4838 ;	..\COMMON\easyax5043.c:514: AX5043_FIFODATA = cnt;
   0E1E 90 40 29           4839 	mov	dptr,#_AX5043_FIFODATA
   0E21 EF                 4840 	mov	a,r7
   0E22 F0                 4841 	movx	@dptr,a
                    05EE   4842 	C$easyax5043.c$515$4$239 ==.
                           4843 ;	..\COMMON\easyax5043.c:515: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0E23 90 4F 1B           4844 	mov	dptr,#_axradio_phy_preamble_byte
   0E26 E4                 4845 	clr	a
   0E27 93                 4846 	movc	a,@a+dptr
   0E28 FE                 4847 	mov	r6,a
   0E29 90 40 29           4848 	mov	dptr,#_AX5043_FIFODATA
   0E2C F0                 4849 	movx	@dptr,a
                    05F8   4850 	C$easyax5043.c$516$4$239 ==.
                           4851 ;	..\COMMON\easyax5043.c:516: break;
   0E2D 02 0C 23           4852 	ljmp	00157$
   0E30                    4853 00133$:
                    05FB   4854 	C$easyax5043.c$519$4$231 ==.
                           4855 ;	..\COMMON\easyax5043.c:519: uint8_t byte = axradio_phy_preamble_byte;
   0E30 90 4F 1B           4856 	mov	dptr,#_axradio_phy_preamble_byte
   0E33 E4                 4857 	clr	a
   0E34 93                 4858 	movc	a,@a+dptr
   0E35 FE                 4859 	mov	r6,a
                    0601   4860 	C$easyax5043.c$520$4$240 ==.
                           4861 ;	..\COMMON\easyax5043.c:520: cnt = axradio_txbuffer_cnt;
   0E36 90 00 07           4862 	mov	dptr,#_axradio_txbuffer_cnt
   0E39 E0                 4863 	movx	a,@dptr
   0E3A FC                 4864 	mov	r4,a
   0E3B A3                 4865 	inc	dptr
   0E3C E0                 4866 	movx	a,@dptr
   0E3D 8C 07              4867 	mov	ar7,r4
                    060A   4868 	C$easyax5043.c$521$4$240 ==.
                           4869 ;	..\COMMON\easyax5043.c:521: axradio_txbuffer_cnt = 0;
   0E3F 90 00 07           4870 	mov	dptr,#_axradio_txbuffer_cnt
   0E42 E4                 4871 	clr	a
   0E43 F0                 4872 	movx	@dptr,a
   0E44 A3                 4873 	inc	dptr
   0E45 F0                 4874 	movx	@dptr,a
                    0611   4875 	C$easyax5043.c$522$4$240 ==.
                           4876 ;	..\COMMON\easyax5043.c:522: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                    0611   4877 	C$easyax5043.c$523$4$240 ==.
                           4878 ;	..\COMMON\easyax5043.c:523: AX5043_FIFODATA = 0x1C;
   0E46 90 40 29           4879 	mov	dptr,#_AX5043_FIFODATA
   0E49 74 41              4880 	mov	a,#0x41
   0E4B F0                 4881 	movx	@dptr,a
   0E4C 74 1C              4882 	mov	a,#0x1C
   0E4E F0                 4883 	movx	@dptr,a
                    061A   4884 	C$easyax5043.c$524$4$240 ==.
                           4885 ;	..\COMMON\easyax5043.c:524: if (AX5043_PKTADDRCFG & 0x80) {
   0E4F 90 42 00           4886 	mov	dptr,#_AX5043_PKTADDRCFG
   0E52 E0                 4887 	movx	a,@dptr
   0E53 FD                 4888 	mov	r5,a
   0E54 30 E7 27           4889 	jnb	acc.7,00135$
                    0622   4890 	C$easyax5043.c$526$5$241 ==.
                           4891 ;	..\COMMON\easyax5043.c:526: byte &= 0xFF << (8-cnt);
   0E57 74 08              4892 	mov	a,#0x08
   0E59 C3                 4893 	clr	c
   0E5A 9F                 4894 	subb	a,r7
   0E5B FD                 4895 	mov	r5,a
   0E5C 8D F0              4896 	mov	b,r5
   0E5E 05 F0              4897 	inc	b
   0E60 74 FF              4898 	mov	a,#0xFF
   0E62 80 02              4899 	sjmp	00256$
   0E64                    4900 00254$:
   0E64 25 E0              4901 	add	a,acc
   0E66                    4902 00256$:
   0E66 D5 F0 FB           4903 	djnz	b,00254$
   0E69 FD                 4904 	mov	r5,a
   0E6A 52 06              4905 	anl	ar6,a
                    0637   4906 	C$easyax5043.c$527$5$241 ==.
                           4907 ;	..\COMMON\easyax5043.c:527: byte |= 0x80 >> cnt;
   0E6C 8F F0              4908 	mov	b,r7
   0E6E 05 F0              4909 	inc	b
   0E70 74 80              4910 	mov	a,#0x80
   0E72 80 02              4911 	sjmp	00258$
   0E74                    4912 00257$:
   0E74 C3                 4913 	clr	c
   0E75 13                 4914 	rrc	a
   0E76                    4915 00258$:
   0E76 D5 F0 FB           4916 	djnz	b,00257$
   0E79 FD                 4917 	mov	r5,a
   0E7A 42 06              4918 	orl	ar6,a
   0E7C 80 2C              4919 	sjmp	00136$
   0E7E                    4920 00135$:
                    0649   4921 	C$easyax5043.c$530$5$242 ==.
                           4922 ;	..\COMMON\easyax5043.c:530: byte &= 0xFF >> (8-cnt);
   0E7E 8F 04              4923 	mov	ar4,r7
   0E80 7D 00              4924 	mov	r5,#0x00
   0E82 74 08              4925 	mov	a,#0x08
   0E84 C3                 4926 	clr	c
   0E85 9C                 4927 	subb	a,r4
   0E86 FC                 4928 	mov	r4,a
   0E87 E4                 4929 	clr	a
   0E88 9D                 4930 	subb	a,r5
   0E89 FD                 4931 	mov	r5,a
   0E8A 8C F0              4932 	mov	b,r4
   0E8C 05 F0              4933 	inc	b
   0E8E 74 FF              4934 	mov	a,#0xFF
   0E90 80 02              4935 	sjmp	00260$
   0E92                    4936 00259$:
   0E92 C3                 4937 	clr	c
   0E93 13                 4938 	rrc	a
   0E94                    4939 00260$:
   0E94 D5 F0 FB           4940 	djnz	b,00259$
   0E97 FC                 4941 	mov	r4,a
   0E98 52 06              4942 	anl	ar6,a
                    0665   4943 	C$easyax5043.c$531$5$242 ==.
                           4944 ;	..\COMMON\easyax5043.c:531: byte |= 0x01 << cnt;
   0E9A 8F F0              4945 	mov	b,r7
   0E9C 05 F0              4946 	inc	b
   0E9E 74 01              4947 	mov	a,#0x01
   0EA0 80 02              4948 	sjmp	00263$
   0EA2                    4949 00261$:
   0EA2 25 E0              4950 	add	a,acc
   0EA4                    4951 00263$:
   0EA4 D5 F0 FB           4952 	djnz	b,00261$
   0EA7 FD                 4953 	mov	r5,a
   0EA8 42 06              4954 	orl	ar6,a
   0EAA                    4955 00136$:
                    0675   4956 	C$easyax5043.c$533$4$240 ==.
                           4957 ;	..\COMMON\easyax5043.c:533: AX5043_FIFODATA = byte;
   0EAA 90 40 29           4958 	mov	dptr,#_AX5043_FIFODATA
   0EAD EE                 4959 	mov	a,r6
   0EAE F0                 4960 	movx	@dptr,a
                    067A   4961 	C$easyax5043.c$535$3$231 ==.
                           4962 ;	..\COMMON\easyax5043.c:535: break;
   0EAF 02 0C 23           4963 	ljmp	00157$
                    067D   4964 	C$easyax5043.c$537$3$231 ==.
                           4965 ;	..\COMMON\easyax5043.c:537: case trxstate_tx_packet:
   0EB2                    4966 00137$:
                    067D   4967 	C$easyax5043.c$538$3$231 ==.
                           4968 ;	..\COMMON\easyax5043.c:538: if (cnt < 11)
   0EB2 BF 0B 00           4969 	cjne	r7,#0x0B,00264$
   0EB5                    4970 00264$:
   0EB5 50 03              4971 	jnc	00265$
   0EB7 02 0F 59           4972 	ljmp	00151$
   0EBA                    4973 00265$:
                    0685   4974 	C$easyax5043.c$541$4$231 ==.
                           4975 ;	..\COMMON\easyax5043.c:541: uint8_t flags = 0;
   0EBA 7E 00              4976 	mov	r6,#0x00
                    0687   4977 	C$easyax5043.c$542$4$243 ==.
                           4978 ;	..\COMMON\easyax5043.c:542: if (!axradio_txbuffer_cnt)
   0EBC 90 00 07           4979 	mov	dptr,#_axradio_txbuffer_cnt
   0EBF E0                 4980 	movx	a,@dptr
   0EC0 FC                 4981 	mov	r4,a
   0EC1 A3                 4982 	inc	dptr
   0EC2 E0                 4983 	movx	a,@dptr
   0EC3 FD                 4984 	mov	r5,a
   0EC4 4C                 4985 	orl	a,r4
   0EC5 70 02              4986 	jnz	00141$
                    0692   4987 	C$easyax5043.c$543$4$243 ==.
                           4988 ;	..\COMMON\easyax5043.c:543: flags |= 0x01; // flag byte: pkt_start
   0EC7 7E 01              4989 	mov	r6,#0x01
   0EC9                    4990 00141$:
                    0694   4991 	C$easyax5043.c$545$5$244 ==.
                           4992 ;	..\COMMON\easyax5043.c:545: uint16_t len = axradio_txbuffer_len - axradio_txbuffer_cnt;
   0EC9 90 00 07           4993 	mov	dptr,#_axradio_txbuffer_cnt
   0ECC E0                 4994 	movx	a,@dptr
   0ECD FC                 4995 	mov	r4,a
   0ECE A3                 4996 	inc	dptr
   0ECF E0                 4997 	movx	a,@dptr
   0ED0 FD                 4998 	mov	r5,a
   0ED1 90 00 05           4999 	mov	dptr,#_axradio_txbuffer_len
   0ED4 E0                 5000 	movx	a,@dptr
   0ED5 FA                 5001 	mov	r2,a
   0ED6 A3                 5002 	inc	dptr
   0ED7 E0                 5003 	movx	a,@dptr
   0ED8 FB                 5004 	mov	r3,a
   0ED9 EA                 5005 	mov	a,r2
   0EDA C3                 5006 	clr	c
   0EDB 9C                 5007 	subb	a,r4
   0EDC FC                 5008 	mov	r4,a
   0EDD EB                 5009 	mov	a,r3
   0EDE 9D                 5010 	subb	a,r5
   0EDF FD                 5011 	mov	r5,a
                    06AB   5012 	C$easyax5043.c$546$5$244 ==.
                           5013 ;	..\COMMON\easyax5043.c:546: cnt -= 3;
   0EE0 1F                 5014 	dec	r7
   0EE1 1F                 5015 	dec	r7
   0EE2 1F                 5016 	dec	r7
                    06AE   5017 	C$easyax5043.c$547$5$244 ==.
                           5018 ;	..\COMMON\easyax5043.c:547: if (cnt >= len) {
   0EE3 8F 02              5019 	mov	ar2,r7
   0EE5 7B 00              5020 	mov	r3,#0x00
   0EE7 C3                 5021 	clr	c
   0EE8 EA                 5022 	mov	a,r2
   0EE9 9C                 5023 	subb	a,r4
   0EEA EB                 5024 	mov	a,r3
   0EEB 9D                 5025 	subb	a,r5
   0EEC 40 05              5026 	jc	00143$
                    06B9   5027 	C$easyax5043.c$548$6$245 ==.
                           5028 ;	..\COMMON\easyax5043.c:548: cnt = len;
   0EEE 8C 07              5029 	mov	ar7,r4
                    06BB   5030 	C$easyax5043.c$549$6$245 ==.
                           5031 ;	..\COMMON\easyax5043.c:549: flags |= 0x02; // flag byte: pkt_end
   0EF0 43 06 02           5032 	orl	ar6,#0x02
   0EF3                    5033 00143$:
                    06BE   5034 	C$easyax5043.c$552$4$243 ==.
                           5035 ;	..\COMMON\easyax5043.c:552: if (!cnt)
   0EF3 EF                 5036 	mov	a,r7
   0EF4 60 54              5037 	jz	00150$
                    06C1   5038 	C$easyax5043.c$554$4$243 ==.
                           5039 ;	..\COMMON\easyax5043.c:554: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    06C1   5040 	C$easyax5043.c$555$4$243 ==.
                           5041 ;	..\COMMON\easyax5043.c:555: AX5043_FIFODATA = cnt + 1; // write FIFO chunk length byte (length includes the flag byte, thus the +1)
   0EF6 90 40 29           5042 	mov	dptr,#_AX5043_FIFODATA
   0EF9 74 E1              5043 	mov	a,#0xE1
   0EFB F0                 5044 	movx	@dptr,a
   0EFC EF                 5045 	mov	a,r7
   0EFD 04                 5046 	inc	a
   0EFE F0                 5047 	movx	@dptr,a
                    06CA   5048 	C$easyax5043.c$556$4$243 ==.
                           5049 ;	..\COMMON\easyax5043.c:556: AX5043_FIFODATA = flags;
   0EFF 90 40 29           5050 	mov	dptr,#_AX5043_FIFODATA
   0F02 EE                 5051 	mov	a,r6
   0F03 F0                 5052 	movx	@dptr,a
                    06CF   5053 	C$easyax5043.c$557$4$243 ==.
                           5054 ;	..\COMMON\easyax5043.c:557: ax5043_writefifo(&axradio_txbuffer[axradio_txbuffer_cnt], cnt);
   0F04 90 00 07           5055 	mov	dptr,#_axradio_txbuffer_cnt
   0F07 E0                 5056 	movx	a,@dptr
   0F08 FC                 5057 	mov	r4,a
   0F09 A3                 5058 	inc	dptr
   0F0A E0                 5059 	movx	a,@dptr
   0F0B FD                 5060 	mov	r5,a
   0F0C EC                 5061 	mov	a,r4
   0F0D 24 2A              5062 	add	a,#_axradio_txbuffer
   0F0F FC                 5063 	mov	r4,a
   0F10 ED                 5064 	mov	a,r5
   0F11 34 00              5065 	addc	a,#(_axradio_txbuffer >> 8)
   0F13 FD                 5066 	mov	r5,a
   0F14 7B 00              5067 	mov	r3,#0x00
   0F16 C0 07              5068 	push	ar7
   0F18 C0 06              5069 	push	ar6
   0F1A C0 07              5070 	push	ar7
   0F1C 8C 82              5071 	mov	dpl,r4
   0F1E 8D 83              5072 	mov	dph,r5
   0F20 8B F0              5073 	mov	b,r3
   0F22 12 4B 82           5074 	lcall	_ax5043_writefifo
   0F25 15 81              5075 	dec	sp
   0F27 D0 06              5076 	pop	ar6
   0F29 D0 07              5077 	pop	ar7
                    06F6   5078 	C$easyax5043.c$558$4$243 ==.
                           5079 ;	..\COMMON\easyax5043.c:558: axradio_txbuffer_cnt += cnt;
   0F2B 7D 00              5080 	mov	r5,#0x00
   0F2D 90 00 07           5081 	mov	dptr,#_axradio_txbuffer_cnt
   0F30 E0                 5082 	movx	a,@dptr
   0F31 FB                 5083 	mov	r3,a
   0F32 A3                 5084 	inc	dptr
   0F33 E0                 5085 	movx	a,@dptr
   0F34 FC                 5086 	mov	r4,a
   0F35 90 00 07           5087 	mov	dptr,#_axradio_txbuffer_cnt
   0F38 EF                 5088 	mov	a,r7
   0F39 2B                 5089 	add	a,r3
   0F3A F0                 5090 	movx	@dptr,a
   0F3B ED                 5091 	mov	a,r5
   0F3C 3C                 5092 	addc	a,r4
   0F3D A3                 5093 	inc	dptr
   0F3E F0                 5094 	movx	@dptr,a
                    070A   5095 	C$easyax5043.c$559$4$243 ==.
                           5096 ;	..\COMMON\easyax5043.c:559: if (flags & 0x02)
   0F3F EE                 5097 	mov	a,r6
   0F40 20 E1 03           5098 	jb	acc.1,00269$
   0F43 02 0C 23           5099 	ljmp	00157$
   0F46                    5100 00269$:
                    0711   5101 	C$easyax5043.c$560$4$243 ==.
                           5102 ;	..\COMMON\easyax5043.c:560: goto pktend;
                    0711   5103 	C$easyax5043.c$564$3$231 ==.
                           5104 ;	..\COMMON\easyax5043.c:564: default:
   0F46 80 02              5105 	sjmp	00150$
   0F48                    5106 00148$:
                    0713   5107 	C$easyax5043.c$565$3$231 ==.
                           5108 ;	..\COMMON\easyax5043.c:565: return;
                    0713   5109 	C$easyax5043.c$568$1$229 ==.
                           5110 ;	..\COMMON\easyax5043.c:568: pktend:
   0F48 80 15              5111 	sjmp	00159$
   0F4A                    5112 00150$:
                    0715   5113 	C$easyax5043.c$569$1$229 ==.
                           5114 ;	..\COMMON\easyax5043.c:569: axradio_trxstate = trxstate_tx_waitdone;
   0F4A 75 0B 0D           5115 	mov	_axradio_trxstate,#0x0D
                    0718   5116 	C$easyax5043.c$570$1$229 ==.
                           5117 ;	..\COMMON\easyax5043.c:570: AX5043_RADIOEVENTMASK0 = 0x01; // enable REVRDONE event
   0F4D 90 40 09           5118 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0F50 74 01              5119 	mov	a,#0x01
   0F52 F0                 5120 	movx	@dptr,a
                    071E   5121 	C$easyax5043.c$571$1$229 ==.
                           5122 ;	..\COMMON\easyax5043.c:571: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   0F53 90 40 07           5123 	mov	dptr,#_AX5043_IRQMASK0
   0F56 74 40              5124 	mov	a,#0x40
   0F58 F0                 5125 	movx	@dptr,a
                    0724   5126 	C$easyax5043.c$572$1$229 ==.
                           5127 ;	..\COMMON\easyax5043.c:572: fifocommit:
   0F59                    5128 00151$:
                    0724   5129 	C$easyax5043.c$573$1$229 ==.
                           5130 ;	..\COMMON\easyax5043.c:573: AX5043_FIFOSTAT = 4; // commit
   0F59 90 40 28           5131 	mov	dptr,#_AX5043_FIFOSTAT
   0F5C 74 04              5132 	mov	a,#0x04
   0F5E F0                 5133 	movx	@dptr,a
   0F5F                    5134 00159$:
                    072A   5135 	C$easyax5043.c$574$1$229 ==.
                    072A   5136 	XFeasyax5043$transmit_isr$0$0 ==.
   0F5F 22                 5137 	ret
                           5138 ;------------------------------------------------------------
                           5139 ;Allocation info for local variables in function 'axradio_isr'
                           5140 ;------------------------------------------------------------
                           5141 ;evt                       Allocated to registers r7 
                           5142 ;------------------------------------------------------------
                    072B   5143 	G$axradio_isr$0$0 ==.
                    072B   5144 	C$easyax5043.c$577$1$229 ==.
                           5145 ;	..\COMMON\easyax5043.c:577: void axradio_isr(void) __interrupt INT_RADIO
                           5146 ;	-----------------------------------------
                           5147 ;	 function axradio_isr
                           5148 ;	-----------------------------------------
   0F60                    5149 _axradio_isr:
   0F60 C0 20              5150 	push	bits
   0F62 C0 E0              5151 	push	acc
   0F64 C0 F0              5152 	push	b
   0F66 C0 82              5153 	push	dpl
   0F68 C0 83              5154 	push	dph
   0F6A C0 07              5155 	push	(0+7)
   0F6C C0 06              5156 	push	(0+6)
   0F6E C0 05              5157 	push	(0+5)
   0F70 C0 04              5158 	push	(0+4)
   0F72 C0 03              5159 	push	(0+3)
   0F74 C0 02              5160 	push	(0+2)
   0F76 C0 01              5161 	push	(0+1)
   0F78 C0 00              5162 	push	(0+0)
   0F7A C0 D0              5163 	push	psw
   0F7C 75 D0 00           5164 	mov	psw,#0x00
                    074A   5165 	C$easyax5043.c$587$1$247 ==.
                           5166 ;	..\COMMON\easyax5043.c:587: switch (axradio_trxstate) {
   0F7F E5 0B              5167 	mov	a,_axradio_trxstate
   0F81 FF                 5168 	mov	r7,a
   0F82 24 EF              5169 	add	a,#0xff - 0x10
   0F84 50 03              5170 	jnc	00222$
   0F86 02 0F BB           5171 	ljmp	00101$
   0F89                    5172 00222$:
   0F89 EF                 5173 	mov	a,r7
   0F8A F5 F0              5174 	mov	b,a
   0F8C 24 0A              5175 	add	a,#(00223$-3-.)
   0F8E 83                 5176 	movc	a,@a+pc
   0F8F C0 E0              5177 	push	acc
   0F91 E5 F0              5178 	mov	a,b
   0F93 24 14              5179 	add	a,#(00224$-3-.)
   0F95 83                 5180 	movc	a,@a+pc
   0F96 C0 E0              5181 	push	acc
   0F98 22                 5182 	ret
   0F99                    5183 00223$:
   0F99 BB                 5184 	.db	00101$
   0F9A 17                 5185 	.db	00162$
   0F9B DD                 5186 	.db	00158$
   0F9C C7                 5187 	.db	00102$
   0F9D BB                 5188 	.db	00101$
   0F9E D2                 5189 	.db	00103$
   0F9F BB                 5190 	.db	00101$
   0FA0 DD                 5191 	.db	00104$
   0FA1 BB                 5192 	.db	00101$
   0FA2 E8                 5193 	.db	00105$
   0FA3 79                 5194 	.db	00114$
   0FA4 79                 5195 	.db	00115$
   0FA5 79                 5196 	.db	00116$
   0FA6 7F                 5197 	.db	00117$
   0FA7 B4                 5198 	.db	00144$
   0FA8 F9                 5199 	.db	00145$
   0FA9 20                 5200 	.db	00148$
   0FAA                    5201 00224$:
   0FAA 0F                 5202 	.db	00101$>>8
   0FAB 13                 5203 	.db	00162$>>8
   0FAC 12                 5204 	.db	00158$>>8
   0FAD 0F                 5205 	.db	00102$>>8
   0FAE 0F                 5206 	.db	00101$>>8
   0FAF 0F                 5207 	.db	00103$>>8
   0FB0 0F                 5208 	.db	00101$>>8
   0FB1 0F                 5209 	.db	00104$>>8
   0FB2 0F                 5210 	.db	00101$>>8
   0FB3 0F                 5211 	.db	00105$>>8
   0FB4 10                 5212 	.db	00114$>>8
   0FB5 10                 5213 	.db	00115$>>8
   0FB6 10                 5214 	.db	00116$>>8
   0FB7 10                 5215 	.db	00117$>>8
   0FB8 11                 5216 	.db	00144$>>8
   0FB9 11                 5217 	.db	00145$>>8
   0FBA 12                 5218 	.db	00148$>>8
                    0786   5219 	C$easyax5043.c$588$2$248 ==.
                           5220 ;	..\COMMON\easyax5043.c:588: default:
   0FBB                    5221 00101$:
                    0786   5222 	C$easyax5043.c$589$2$248 ==.
                           5223 ;	..\COMMON\easyax5043.c:589: AX5043_IRQMASK1 = 0x00;
   0FBB 90 40 06           5224 	mov	dptr,#_AX5043_IRQMASK1
                    0789   5225 	C$easyax5043.c$590$2$248 ==.
                           5226 ;	..\COMMON\easyax5043.c:590: AX5043_IRQMASK0 = 0x00;
   0FBE E4                 5227 	clr	a
   0FBF F0                 5228 	movx	@dptr,a
   0FC0 90 40 07           5229 	mov	dptr,#_AX5043_IRQMASK0
   0FC3 F0                 5230 	movx	@dptr,a
                    078F   5231 	C$easyax5043.c$591$2$248 ==.
                           5232 ;	..\COMMON\easyax5043.c:591: break;
   0FC4 02 13 1A           5233 	ljmp	00164$
                    0792   5234 	C$easyax5043.c$593$2$248 ==.
                           5235 ;	..\COMMON\easyax5043.c:593: case trxstate_wait_xtal:
   0FC7                    5236 00102$:
                    0792   5237 	C$easyax5043.c$594$2$248 ==.
                           5238 ;	..\COMMON\easyax5043.c:594: AX5043_IRQMASK1 = 0x00; // otherwise crystal ready will fire all over again
   0FC7 90 40 06           5239 	mov	dptr,#_AX5043_IRQMASK1
   0FCA E4                 5240 	clr	a
   0FCB F0                 5241 	movx	@dptr,a
                    0797   5242 	C$easyax5043.c$595$2$248 ==.
                           5243 ;	..\COMMON\easyax5043.c:595: axradio_trxstate = trxstate_xtal_ready;
   0FCC 75 0B 04           5244 	mov	_axradio_trxstate,#0x04
                    079A   5245 	C$easyax5043.c$596$2$248 ==.
                           5246 ;	..\COMMON\easyax5043.c:596: break;
   0FCF 02 13 1A           5247 	ljmp	00164$
                    079D   5248 	C$easyax5043.c$598$2$248 ==.
                           5249 ;	..\COMMON\easyax5043.c:598: case trxstate_pll_ranging:
   0FD2                    5250 00103$:
                    079D   5251 	C$easyax5043.c$599$2$248 ==.
                           5252 ;	..\COMMON\easyax5043.c:599: AX5043_IRQMASK1 = 0x00; // otherwise autoranging done will fire all over again
   0FD2 90 40 06           5253 	mov	dptr,#_AX5043_IRQMASK1
   0FD5 E4                 5254 	clr	a
   0FD6 F0                 5255 	movx	@dptr,a
                    07A2   5256 	C$easyax5043.c$600$2$248 ==.
                           5257 ;	..\COMMON\easyax5043.c:600: axradio_trxstate = trxstate_pll_ranging_done;
   0FD7 75 0B 06           5258 	mov	_axradio_trxstate,#0x06
                    07A5   5259 	C$easyax5043.c$601$2$248 ==.
                           5260 ;	..\COMMON\easyax5043.c:601: break;
   0FDA 02 13 1A           5261 	ljmp	00164$
                    07A8   5262 	C$easyax5043.c$603$2$248 ==.
                           5263 ;	..\COMMON\easyax5043.c:603: case trxstate_pll_settling:
   0FDD                    5264 00104$:
                    07A8   5265 	C$easyax5043.c$604$2$248 ==.
                           5266 ;	..\COMMON\easyax5043.c:604: AX5043_RADIOEVENTMASK0 = 0x00;
   0FDD 90 40 09           5267 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0FE0 E4                 5268 	clr	a
   0FE1 F0                 5269 	movx	@dptr,a
                    07AD   5270 	C$easyax5043.c$605$2$248 ==.
                           5271 ;	..\COMMON\easyax5043.c:605: axradio_trxstate = trxstate_pll_settled;
   0FE2 75 0B 08           5272 	mov	_axradio_trxstate,#0x08
                    07B0   5273 	C$easyax5043.c$606$2$248 ==.
                           5274 ;	..\COMMON\easyax5043.c:606: break;
   0FE5 02 13 1A           5275 	ljmp	00164$
                    07B3   5276 	C$easyax5043.c$608$2$248 ==.
                           5277 ;	..\COMMON\easyax5043.c:608: case trxstate_tx_xtalwait:
   0FE8                    5278 00105$:
                    07B3   5279 	C$easyax5043.c$609$2$248 ==.
                           5280 ;	..\COMMON\easyax5043.c:609: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   0FE8 90 40 0F           5281 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   0FEB E0                 5282 	movx	a,@dptr
                    07B7   5283 	C$easyax5043.c$610$2$248 ==.
                           5284 ;	..\COMMON\easyax5043.c:610: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   0FEC 90 40 28           5285 	mov	dptr,#_AX5043_FIFOSTAT
   0FEF 74 03              5286 	mov	a,#0x03
   0FF1 F0                 5287 	movx	@dptr,a
                    07BD   5288 	C$easyax5043.c$611$2$248 ==.
                           5289 ;	..\COMMON\easyax5043.c:611: AX5043_IRQMASK1 = 0x00;
   0FF2 90 40 06           5290 	mov	dptr,#_AX5043_IRQMASK1
   0FF5 E4                 5291 	clr	a
   0FF6 F0                 5292 	movx	@dptr,a
                    07C2   5293 	C$easyax5043.c$612$2$248 ==.
                           5294 ;	..\COMMON\easyax5043.c:612: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   0FF7 90 40 07           5295 	mov	dptr,#_AX5043_IRQMASK0
   0FFA 74 08              5296 	mov	a,#0x08
   0FFC F0                 5297 	movx	@dptr,a
                    07C8   5298 	C$easyax5043.c$613$2$248 ==.
                           5299 ;	..\COMMON\easyax5043.c:613: axradio_trxstate = trxstate_tx_longpreamble;
   0FFD 75 0B 0A           5300 	mov	_axradio_trxstate,#0x0A
                    07CB   5301 	C$easyax5043.c$615$2$248 ==.
                           5302 ;	..\COMMON\easyax5043.c:615: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1000 90 40 10           5303 	mov	dptr,#_AX5043_MODULATION
   1003 E0                 5304 	movx	a,@dptr
   1004 FF                 5305 	mov	r7,a
   1005 53 07 0F           5306 	anl	ar7,#0x0F
   1008 BF 09 0F           5307 	cjne	r7,#0x09,00107$
                    07D6   5308 	C$easyax5043.c$616$3$249 ==.
                           5309 ;	..\COMMON\easyax5043.c:616: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    07D6   5310 	C$easyax5043.c$617$3$249 ==.
                           5311 ;	..\COMMON\easyax5043.c:617: AX5043_FIFODATA = 2;  // length (including flags)
                    07D6   5312 	C$easyax5043.c$618$3$249 ==.
                           5313 ;	..\COMMON\easyax5043.c:618: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                    07D6   5314 	C$easyax5043.c$619$3$249 ==.
                           5315 ;	..\COMMON\easyax5043.c:619: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   100B 90 40 29           5316 	mov	dptr,#_AX5043_FIFODATA
   100E 74 E1              5317 	mov	a,#0xE1
   1010 F0                 5318 	movx	@dptr,a
   1011 74 02              5319 	mov	a,#0x02
   1013 F0                 5320 	movx	@dptr,a
   1014 74 01              5321 	mov	a,#0x01
   1016 F0                 5322 	movx	@dptr,a
   1017 74 11              5323 	mov	a,#0x11
   1019 F0                 5324 	movx	@dptr,a
   101A                    5325 00107$:
                    07E5   5326 	C$easyax5043.c$626$2$248 ==.
                           5327 ;	..\COMMON\easyax5043.c:626: transmit_isr();
   101A 12 0C 23           5328 	lcall	_transmit_isr
                    07E8   5329 	C$easyax5043.c$627$2$248 ==.
                           5330 ;	..\COMMON\easyax5043.c:627: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   101D 90 40 02           5331 	mov	dptr,#_AX5043_PWRMODE
   1020 74 0D              5332 	mov	a,#0x0D
   1022 F0                 5333 	movx	@dptr,a
                    07EE   5334 	C$easyax5043.c$628$2$248 ==.
                           5335 ;	..\COMMON\easyax5043.c:628: update_timeanchor();
   1023 12 08 35           5336 	lcall	_update_timeanchor
                    07F1   5337 	C$easyax5043.c$629$2$248 ==.
                           5338 ;	..\COMMON\easyax5043.c:629: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1026 90 02 6B           5339 	mov	dptr,#_axradio_cb_transmitstart
   1029 12 4B 64           5340 	lcall	_wtimer_remove_callback
                    07F7   5341 	C$easyax5043.c$630$2$248 ==.
                           5342 ;	..\COMMON\easyax5043.c:630: switch (axradio_mode) {
   102C AF 0A              5343 	mov	r7,_axradio_mode
   102E BF 12 02           5344 	cjne	r7,#0x12,00227$
   1031 80 03              5345 	sjmp	00109$
   1033                    5346 00227$:
   1033 BF 13 19           5347 	cjne	r7,#0x13,00112$
                    0801   5348 	C$easyax5043.c$632$3$250 ==.
                           5349 ;	..\COMMON\easyax5043.c:632: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   1036                    5350 00109$:
                    0801   5351 	C$easyax5043.c$633$3$250 ==.
                           5352 ;	..\COMMON\easyax5043.c:633: if (axradio_ack_count != axradio_framing_ack_retransmissions) {
   1036 90 00 0E           5353 	mov	dptr,#_axradio_ack_count
   1039 E0                 5354 	movx	a,@dptr
   103A FF                 5355 	mov	r7,a
   103B 90 4F 36           5356 	mov	dptr,#_axradio_framing_ack_retransmissions
   103E E4                 5357 	clr	a
   103F 93                 5358 	movc	a,@a+dptr
   1040 FE                 5359 	mov	r6,a
   1041 EF                 5360 	mov	a,r7
   1042 B5 06 02           5361 	cjne	a,ar6,00230$
   1045 80 08              5362 	sjmp	00112$
   1047                    5363 00230$:
                    0812   5364 	C$easyax5043.c$634$4$251 ==.
                           5365 ;	..\COMMON\easyax5043.c:634: axradio_cb_transmitstart.st.error = AXRADIO_ERR_RETRANSMISSION;
   1047 90 02 70           5366 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   104A 74 08              5367 	mov	a,#0x08
   104C F0                 5368 	movx	@dptr,a
                    0818   5369 	C$easyax5043.c$635$4$251 ==.
                           5370 ;	..\COMMON\easyax5043.c:635: break;
                    0818   5371 	C$easyax5043.c$638$3$250 ==.
                           5372 ;	..\COMMON\easyax5043.c:638: default:
   104D 80 05              5373 	sjmp	00113$
   104F                    5374 00112$:
                    081A   5375 	C$easyax5043.c$639$3$250 ==.
                           5376 ;	..\COMMON\easyax5043.c:639: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   104F 90 02 70           5377 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1052 E4                 5378 	clr	a
   1053 F0                 5379 	movx	@dptr,a
                    081F   5380 	C$easyax5043.c$641$2$248 ==.
                           5381 ;	..\COMMON\easyax5043.c:641: }
   1054                    5382 00113$:
                    081F   5383 	C$easyax5043.c$642$2$248 ==.
                           5384 ;	..\COMMON\easyax5043.c:642: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1054 90 00 1A           5385 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1057 E0                 5386 	movx	a,@dptr
   1058 FC                 5387 	mov	r4,a
   1059 A3                 5388 	inc	dptr
   105A E0                 5389 	movx	a,@dptr
   105B FD                 5390 	mov	r5,a
   105C A3                 5391 	inc	dptr
   105D E0                 5392 	movx	a,@dptr
   105E FE                 5393 	mov	r6,a
   105F A3                 5394 	inc	dptr
   1060 E0                 5395 	movx	a,@dptr
   1061 FF                 5396 	mov	r7,a
   1062 90 02 71           5397 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1065 EC                 5398 	mov	a,r4
   1066 F0                 5399 	movx	@dptr,a
   1067 A3                 5400 	inc	dptr
   1068 ED                 5401 	mov	a,r5
   1069 F0                 5402 	movx	@dptr,a
   106A A3                 5403 	inc	dptr
   106B EE                 5404 	mov	a,r6
   106C F0                 5405 	movx	@dptr,a
   106D A3                 5406 	inc	dptr
   106E EF                 5407 	mov	a,r7
   106F F0                 5408 	movx	@dptr,a
                    083B   5409 	C$easyax5043.c$643$2$248 ==.
                           5410 ;	..\COMMON\easyax5043.c:643: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1070 90 02 6B           5411 	mov	dptr,#_axradio_cb_transmitstart
   1073 12 3F BF           5412 	lcall	_wtimer_add_callback
                    0841   5413 	C$easyax5043.c$644$2$248 ==.
                           5414 ;	..\COMMON\easyax5043.c:644: break;
   1076 02 13 1A           5415 	ljmp	00164$
                    0844   5416 	C$easyax5043.c$646$2$248 ==.
                           5417 ;	..\COMMON\easyax5043.c:646: case trxstate_tx_longpreamble:
   1079                    5418 00114$:
                    0844   5419 	C$easyax5043.c$647$2$248 ==.
                           5420 ;	..\COMMON\easyax5043.c:647: case trxstate_tx_shortpreamble:
   1079                    5421 00115$:
                    0844   5422 	C$easyax5043.c$648$2$248 ==.
                           5423 ;	..\COMMON\easyax5043.c:648: case trxstate_tx_packet:
   1079                    5424 00116$:
                    0844   5425 	C$easyax5043.c$649$2$248 ==.
                           5426 ;	..\COMMON\easyax5043.c:649: transmit_isr();
   1079 12 0C 23           5427 	lcall	_transmit_isr
                    0847   5428 	C$easyax5043.c$650$2$248 ==.
                           5429 ;	..\COMMON\easyax5043.c:650: break;
   107C 02 13 1A           5430 	ljmp	00164$
                    084A   5431 	C$easyax5043.c$652$2$248 ==.
                           5432 ;	..\COMMON\easyax5043.c:652: case trxstate_tx_waitdone:
   107F                    5433 00117$:
                    084A   5434 	C$easyax5043.c$653$2$248 ==.
                           5435 ;	..\COMMON\easyax5043.c:653: AX5043_RADIOEVENTREQ0;
   107F 90 40 0F           5436 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1082 E0                 5437 	movx	a,@dptr
                    084E   5438 	C$easyax5043.c$654$2$248 ==.
                           5439 ;	..\COMMON\easyax5043.c:654: if (AX5043_RADIOSTATE != 0)
   1083 90 40 1C           5440 	mov	dptr,#_AX5043_RADIOSTATE
   1086 E0                 5441 	movx	a,@dptr
   1087 FF                 5442 	mov	r7,a
   1088 60 03              5443 	jz	00231$
   108A 02 13 1A           5444 	ljmp	00164$
   108D                    5445 00231$:
                    0858   5446 	C$easyax5043.c$656$2$248 ==.
                           5447 ;	..\COMMON\easyax5043.c:656: AX5043_RADIOEVENTMASK0 = 0x00;
   108D 90 40 09           5448 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1090 E4                 5449 	clr	a
   1091 F0                 5450 	movx	@dptr,a
                    085D   5451 	C$easyax5043.c$657$2$248 ==.
                           5452 ;	..\COMMON\easyax5043.c:657: switch (axradio_mode) {
   1092 AF 0A              5453 	mov	r7,_axradio_mode
   1094 BF 12 02           5454 	cjne	r7,#0x12,00232$
   1097 80 6A              5455 	sjmp	00131$
   1099                    5456 00232$:
   1099 BF 13 02           5457 	cjne	r7,#0x13,00233$
   109C 80 65              5458 	sjmp	00131$
   109E                    5459 00233$:
   109E BF 18 02           5460 	cjne	r7,#0x18,00234$
   10A1 80 1D              5461 	sjmp	00120$
   10A3                    5462 00234$:
   10A3 BF 19 02           5463 	cjne	r7,#0x19,00235$
   10A6 80 36              5464 	sjmp	00125$
   10A8                    5465 00235$:
   10A8 BF 1A 02           5466 	cjne	r7,#0x1A,00236$
   10AB 80 1C              5467 	sjmp	00121$
   10AD                    5468 00236$:
   10AD BF 1B 02           5469 	cjne	r7,#0x1B,00237$
   10B0 80 3C              5470 	sjmp	00128$
   10B2                    5471 00237$:
   10B2 BF 20 03           5472 	cjne	r7,#0x20,00238$
   10B5 02 11 37           5473 	ljmp	00132$
   10B8                    5474 00238$:
   10B8 BF 21 02           5475 	cjne	r7,#0x21,00239$
   10BB 80 39              5476 	sjmp	00129$
   10BD                    5477 00239$:
   10BD 02 11 44           5478 	ljmp	00133$
                    088B   5479 	C$easyax5043.c$658$3$252 ==.
                           5480 ;	..\COMMON\easyax5043.c:658: case AXRADIO_MODE_ASYNC_RECEIVE:
   10C0                    5481 00120$:
                    088B   5482 	C$easyax5043.c$659$3$252 ==.
                           5483 ;	..\COMMON\easyax5043.c:659: ax5043_init_registers_rx();
   10C0 12 09 01           5484 	lcall	_ax5043_init_registers_rx
                    088E   5485 	C$easyax5043.c$660$3$252 ==.
                           5486 ;	..\COMMON\easyax5043.c:660: ax5043_receiver_on_continuous();
   10C3 12 13 37           5487 	lcall	_ax5043_receiver_on_continuous
                    0891   5488 	C$easyax5043.c$661$3$252 ==.
                           5489 ;	..\COMMON\easyax5043.c:661: break;
   10C6 02 11 47           5490 	ljmp	00134$
                    0894   5491 	C$easyax5043.c$663$3$252 ==.
                           5492 ;	..\COMMON\easyax5043.c:663: case AXRADIO_MODE_ACK_RECEIVE:
   10C9                    5493 00121$:
                    0894   5494 	C$easyax5043.c$664$3$252 ==.
                           5495 ;	..\COMMON\easyax5043.c:664: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10C9 90 02 37           5496 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10CC E0                 5497 	movx	a,@dptr
   10CD FF                 5498 	mov	r7,a
   10CE BF F0 08           5499 	cjne	r7,#0xF0,00124$
                    089C   5500 	C$easyax5043.c$665$4$253 ==.
                           5501 ;	..\COMMON\easyax5043.c:665: ax5043_init_registers_rx();
   10D1 12 09 01           5502 	lcall	_ax5043_init_registers_rx
                    089F   5503 	C$easyax5043.c$666$4$253 ==.
                           5504 ;	..\COMMON\easyax5043.c:666: ax5043_receiver_on_continuous();
   10D4 12 13 37           5505 	lcall	_ax5043_receiver_on_continuous
                    08A2   5506 	C$easyax5043.c$667$4$253 ==.
                           5507 ;	..\COMMON\easyax5043.c:667: break;
                    08A2   5508 	C$easyax5043.c$669$3$252 ==.
                           5509 ;	..\COMMON\easyax5043.c:669: offxtal:
   10D7 80 6E              5510 	sjmp	00134$
   10D9                    5511 00124$:
                    08A4   5512 	C$easyax5043.c$670$3$252 ==.
                           5513 ;	..\COMMON\easyax5043.c:670: ax5043_off_xtal();
   10D9 12 14 85           5514 	lcall	_ax5043_off_xtal
                    08A7   5515 	C$easyax5043.c$671$3$252 ==.
                           5516 ;	..\COMMON\easyax5043.c:671: break;
                    08A7   5517 	C$easyax5043.c$673$3$252 ==.
                           5518 ;	..\COMMON\easyax5043.c:673: case AXRADIO_MODE_WOR_RECEIVE:
   10DC 80 69              5519 	sjmp	00134$
   10DE                    5520 00125$:
                    08A9   5521 	C$easyax5043.c$674$3$252 ==.
                           5522 ;	..\COMMON\easyax5043.c:674: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10DE 90 02 37           5523 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10E1 E0                 5524 	movx	a,@dptr
   10E2 FF                 5525 	mov	r7,a
   10E3 BF F0 F3           5526 	cjne	r7,#0xF0,00124$
                    08B1   5527 	C$easyax5043.c$675$4$254 ==.
                           5528 ;	..\COMMON\easyax5043.c:675: ax5043_init_registers_rx();
   10E6 12 09 01           5529 	lcall	_ax5043_init_registers_rx
                    08B4   5530 	C$easyax5043.c$676$4$254 ==.
                           5531 ;	..\COMMON\easyax5043.c:676: ax5043_receiver_on_wor();
   10E9 12 13 D1           5532 	lcall	_ax5043_receiver_on_wor
                    08B7   5533 	C$easyax5043.c$677$4$254 ==.
                           5534 ;	..\COMMON\easyax5043.c:677: break;
                    08B7   5535 	C$easyax5043.c$681$3$252 ==.
                           5536 ;	..\COMMON\easyax5043.c:681: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   10EC 80 59              5537 	sjmp	00134$
   10EE                    5538 00128$:
                    08B9   5539 	C$easyax5043.c$682$3$252 ==.
                           5540 ;	..\COMMON\easyax5043.c:682: ax5043_init_registers_rx();
   10EE 12 09 01           5541 	lcall	_ax5043_init_registers_rx
                    08BC   5542 	C$easyax5043.c$683$3$252 ==.
                           5543 ;	..\COMMON\easyax5043.c:683: ax5043_receiver_on_wor();
   10F1 12 13 D1           5544 	lcall	_ax5043_receiver_on_wor
                    08BF   5545 	C$easyax5043.c$684$3$252 ==.
                           5546 ;	..\COMMON\easyax5043.c:684: break;
                    08BF   5547 	C$easyax5043.c$686$3$252 ==.
                           5548 ;	..\COMMON\easyax5043.c:686: case AXRADIO_MODE_SYNC_ACK_MASTER:
   10F4 80 51              5549 	sjmp	00134$
   10F6                    5550 00129$:
                    08C1   5551 	C$easyax5043.c$687$3$252 ==.
                           5552 ;	..\COMMON\easyax5043.c:687: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   10F6 90 4F 38           5553 	mov	dptr,#_axradio_framing_minpayloadlen
   10F9 E4                 5554 	clr	a
   10FA 93                 5555 	movc	a,@a+dptr
   10FB FF                 5556 	mov	r7,a
   10FC 90 00 05           5557 	mov	dptr,#_axradio_txbuffer_len
   10FF F0                 5558 	movx	@dptr,a
   1100 A3                 5559 	inc	dptr
   1101 E4                 5560 	clr	a
   1102 F0                 5561 	movx	@dptr,a
                    08CE   5562 	C$easyax5043.c$691$3$252 ==.
                           5563 ;	..\COMMON\easyax5043.c:691: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   1103                    5564 00131$:
                    08CE   5565 	C$easyax5043.c$692$3$252 ==.
                           5566 ;	..\COMMON\easyax5043.c:692: ax5043_init_registers_rx();
   1103 12 09 01           5567 	lcall	_ax5043_init_registers_rx
                    08D1   5568 	C$easyax5043.c$693$3$252 ==.
                           5569 ;	..\COMMON\easyax5043.c:693: ax5043_receiver_on_continuous();
   1106 12 13 37           5570 	lcall	_ax5043_receiver_on_continuous
                    08D4   5571 	C$easyax5043.c$694$3$252 ==.
                           5572 ;	..\COMMON\easyax5043.c:694: wtimer_remove(&axradio_timer);
   1109 90 02 89           5573 	mov	dptr,#_axradio_timer
   110C 12 49 5A           5574 	lcall	_wtimer_remove
                    08DA   5575 	C$easyax5043.c$695$3$252 ==.
                           5576 ;	..\COMMON\easyax5043.c:695: axradio_timer.time = axradio_framing_ack_timeout;
   110F 90 4F 2E           5577 	mov	dptr,#_axradio_framing_ack_timeout
   1112 E4                 5578 	clr	a
   1113 93                 5579 	movc	a,@a+dptr
   1114 FC                 5580 	mov	r4,a
   1115 74 01              5581 	mov	a,#0x01
   1117 93                 5582 	movc	a,@a+dptr
   1118 FD                 5583 	mov	r5,a
   1119 74 02              5584 	mov	a,#0x02
   111B 93                 5585 	movc	a,@a+dptr
   111C FE                 5586 	mov	r6,a
   111D 74 03              5587 	mov	a,#0x03
   111F 93                 5588 	movc	a,@a+dptr
   1120 FF                 5589 	mov	r7,a
   1121 90 02 8D           5590 	mov	dptr,#(_axradio_timer + 0x0004)
   1124 EC                 5591 	mov	a,r4
   1125 F0                 5592 	movx	@dptr,a
   1126 A3                 5593 	inc	dptr
   1127 ED                 5594 	mov	a,r5
   1128 F0                 5595 	movx	@dptr,a
   1129 A3                 5596 	inc	dptr
   112A EE                 5597 	mov	a,r6
   112B F0                 5598 	movx	@dptr,a
   112C A3                 5599 	inc	dptr
   112D EF                 5600 	mov	a,r7
   112E F0                 5601 	movx	@dptr,a
                    08FA   5602 	C$easyax5043.c$696$3$252 ==.
                           5603 ;	..\COMMON\easyax5043.c:696: wtimer0_addrelative(&axradio_timer);
   112F 90 02 89           5604 	mov	dptr,#_axradio_timer
   1132 12 3F D9           5605 	lcall	_wtimer0_addrelative
                    0900   5606 	C$easyax5043.c$697$3$252 ==.
                           5607 ;	..\COMMON\easyax5043.c:697: break;
                    0900   5608 	C$easyax5043.c$699$3$252 ==.
                           5609 ;	..\COMMON\easyax5043.c:699: case AXRADIO_MODE_SYNC_MASTER:
   1135 80 10              5610 	sjmp	00134$
   1137                    5611 00132$:
                    0902   5612 	C$easyax5043.c$700$3$252 ==.
                           5613 ;	..\COMMON\easyax5043.c:700: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   1137 90 4F 38           5614 	mov	dptr,#_axradio_framing_minpayloadlen
   113A E4                 5615 	clr	a
   113B 93                 5616 	movc	a,@a+dptr
   113C FF                 5617 	mov	r7,a
   113D 90 00 05           5618 	mov	dptr,#_axradio_txbuffer_len
   1140 F0                 5619 	movx	@dptr,a
   1141 A3                 5620 	inc	dptr
   1142 E4                 5621 	clr	a
   1143 F0                 5622 	movx	@dptr,a
                    090F   5623 	C$easyax5043.c$703$3$252 ==.
                           5624 ;	..\COMMON\easyax5043.c:703: default:
   1144                    5625 00133$:
                    090F   5626 	C$easyax5043.c$704$3$252 ==.
                           5627 ;	..\COMMON\easyax5043.c:704: ax5043_off();
   1144 12 14 7C           5628 	lcall	_ax5043_off
                    0912   5629 	C$easyax5043.c$706$2$248 ==.
                           5630 ;	..\COMMON\easyax5043.c:706: }
   1147                    5631 00134$:
                    0912   5632 	C$easyax5043.c$707$2$248 ==.
                           5633 ;	..\COMMON\easyax5043.c:707: if (axradio_mode != AXRADIO_MODE_SYNC_MASTER &&
   1147 74 20              5634 	mov	a,#0x20
   1149 B5 0A 02           5635 	cjne	a,_axradio_mode,00244$
   114C 80 1A              5636 	sjmp	00136$
   114E                    5637 00244$:
                    0919   5638 	C$easyax5043.c$708$2$248 ==.
                           5639 ;	..\COMMON\easyax5043.c:708: axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER &&
   114E 74 21              5640 	mov	a,#0x21
   1150 B5 0A 02           5641 	cjne	a,_axradio_mode,00245$
   1153 80 13              5642 	sjmp	00136$
   1155                    5643 00245$:
                    0920   5644 	C$easyax5043.c$709$2$248 ==.
                           5645 ;	..\COMMON\easyax5043.c:709: axradio_mode != AXRADIO_MODE_SYNC_SLAVE &&
   1155 74 22              5646 	mov	a,#0x22
   1157 B5 0A 02           5647 	cjne	a,_axradio_mode,00246$
   115A 80 0C              5648 	sjmp	00136$
   115C                    5649 00246$:
                    0927   5650 	C$easyax5043.c$710$2$248 ==.
                           5651 ;	..\COMMON\easyax5043.c:710: axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   115C 74 23              5652 	mov	a,#0x23
   115E B5 0A 02           5653 	cjne	a,_axradio_mode,00247$
   1161 80 05              5654 	sjmp	00136$
   1163                    5655 00247$:
                    092E   5656 	C$easyax5043.c$711$2$248 ==.
                           5657 ;	..\COMMON\easyax5043.c:711: axradio_syncstate = syncstate_off;
   1163 90 00 04           5658 	mov	dptr,#_axradio_syncstate
   1166 E4                 5659 	clr	a
   1167 F0                 5660 	movx	@dptr,a
   1168                    5661 00136$:
                    0933   5662 	C$easyax5043.c$712$2$248 ==.
                           5663 ;	..\COMMON\easyax5043.c:712: update_timeanchor();
   1168 12 08 35           5664 	lcall	_update_timeanchor
                    0936   5665 	C$easyax5043.c$713$2$248 ==.
                           5666 ;	..\COMMON\easyax5043.c:713: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   116B 90 02 75           5667 	mov	dptr,#_axradio_cb_transmitend
   116E 12 4B 64           5668 	lcall	_wtimer_remove_callback
                    093C   5669 	C$easyax5043.c$714$2$248 ==.
                           5670 ;	..\COMMON\easyax5043.c:714: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   1171 90 02 7A           5671 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1174 E4                 5672 	clr	a
   1175 F0                 5673 	movx	@dptr,a
                    0941   5674 	C$easyax5043.c$715$2$248 ==.
                           5675 ;	..\COMMON\easyax5043.c:715: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   1176 74 12              5676 	mov	a,#0x12
   1178 B5 0A 02           5677 	cjne	a,_axradio_mode,00248$
   117B 80 0C              5678 	sjmp	00140$
   117D                    5679 00248$:
                    0948   5680 	C$easyax5043.c$716$2$248 ==.
                           5681 ;	..\COMMON\easyax5043.c:716: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   117D 74 13              5682 	mov	a,#0x13
   117F B5 0A 02           5683 	cjne	a,_axradio_mode,00249$
   1182 80 05              5684 	sjmp	00140$
   1184                    5685 00249$:
                    094F   5686 	C$easyax5043.c$717$2$248 ==.
                           5687 ;	..\COMMON\easyax5043.c:717: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   1184 74 21              5688 	mov	a,#0x21
   1186 B5 0A 06           5689 	cjne	a,_axradio_mode,00141$
   1189                    5690 00140$:
                    0954   5691 	C$easyax5043.c$718$2$248 ==.
                           5692 ;	..\COMMON\easyax5043.c:718: axradio_cb_transmitend.st.error = AXRADIO_ERR_BUSY;
   1189 90 02 7A           5693 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   118C 74 02              5694 	mov	a,#0x02
   118E F0                 5695 	movx	@dptr,a
   118F                    5696 00141$:
                    095A   5697 	C$easyax5043.c$719$2$248 ==.
                           5698 ;	..\COMMON\easyax5043.c:719: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   118F 90 00 1A           5699 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1192 E0                 5700 	movx	a,@dptr
   1193 FC                 5701 	mov	r4,a
   1194 A3                 5702 	inc	dptr
   1195 E0                 5703 	movx	a,@dptr
   1196 FD                 5704 	mov	r5,a
   1197 A3                 5705 	inc	dptr
   1198 E0                 5706 	movx	a,@dptr
   1199 FE                 5707 	mov	r6,a
   119A A3                 5708 	inc	dptr
   119B E0                 5709 	movx	a,@dptr
   119C FF                 5710 	mov	r7,a
   119D 90 02 7B           5711 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   11A0 EC                 5712 	mov	a,r4
   11A1 F0                 5713 	movx	@dptr,a
   11A2 A3                 5714 	inc	dptr
   11A3 ED                 5715 	mov	a,r5
   11A4 F0                 5716 	movx	@dptr,a
   11A5 A3                 5717 	inc	dptr
   11A6 EE                 5718 	mov	a,r6
   11A7 F0                 5719 	movx	@dptr,a
   11A8 A3                 5720 	inc	dptr
   11A9 EF                 5721 	mov	a,r7
   11AA F0                 5722 	movx	@dptr,a
                    0976   5723 	C$easyax5043.c$720$2$248 ==.
                           5724 ;	..\COMMON\easyax5043.c:720: wtimer_add_callback(&axradio_cb_transmitend.cb);
   11AB 90 02 75           5725 	mov	dptr,#_axradio_cb_transmitend
   11AE 12 3F BF           5726 	lcall	_wtimer_add_callback
                    097C   5727 	C$easyax5043.c$721$2$248 ==.
                           5728 ;	..\COMMON\easyax5043.c:721: break;
   11B1 02 13 1A           5729 	ljmp	00164$
                    097F   5730 	C$easyax5043.c$724$2$248 ==.
                           5731 ;	..\COMMON\easyax5043.c:724: case trxstate_txcw_xtalwait:
   11B4                    5732 00144$:
                    097F   5733 	C$easyax5043.c$725$2$248 ==.
                           5734 ;	..\COMMON\easyax5043.c:725: AX5043_IRQMASK1 = 0x00;
   11B4 90 40 06           5735 	mov	dptr,#_AX5043_IRQMASK1
                    0982   5736 	C$easyax5043.c$726$2$248 ==.
                           5737 ;	..\COMMON\easyax5043.c:726: AX5043_IRQMASK0 = 0x00;
   11B7 E4                 5738 	clr	a
   11B8 F0                 5739 	movx	@dptr,a
   11B9 90 40 07           5740 	mov	dptr,#_AX5043_IRQMASK0
   11BC F0                 5741 	movx	@dptr,a
                    0988   5742 	C$easyax5043.c$727$2$248 ==.
                           5743 ;	..\COMMON\easyax5043.c:727: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   11BD 90 40 02           5744 	mov	dptr,#_AX5043_PWRMODE
   11C0 74 0D              5745 	mov	a,#0x0D
   11C2 F0                 5746 	movx	@dptr,a
                    098E   5747 	C$easyax5043.c$728$2$248 ==.
                           5748 ;	..\COMMON\easyax5043.c:728: axradio_trxstate = trxstate_off;
   11C3 75 0B 00           5749 	mov	_axradio_trxstate,#0x00
                    0991   5750 	C$easyax5043.c$729$2$248 ==.
                           5751 ;	..\COMMON\easyax5043.c:729: update_timeanchor();
   11C6 12 08 35           5752 	lcall	_update_timeanchor
                    0994   5753 	C$easyax5043.c$730$2$248 ==.
                           5754 ;	..\COMMON\easyax5043.c:730: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   11C9 90 02 6B           5755 	mov	dptr,#_axradio_cb_transmitstart
   11CC 12 4B 64           5756 	lcall	_wtimer_remove_callback
                    099A   5757 	C$easyax5043.c$731$2$248 ==.
                           5758 ;	..\COMMON\easyax5043.c:731: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   11CF 90 02 70           5759 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   11D2 E4                 5760 	clr	a
   11D3 F0                 5761 	movx	@dptr,a
                    099F   5762 	C$easyax5043.c$732$2$248 ==.
                           5763 ;	..\COMMON\easyax5043.c:732: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   11D4 90 00 1A           5764 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   11D7 E0                 5765 	movx	a,@dptr
   11D8 FC                 5766 	mov	r4,a
   11D9 A3                 5767 	inc	dptr
   11DA E0                 5768 	movx	a,@dptr
   11DB FD                 5769 	mov	r5,a
   11DC A3                 5770 	inc	dptr
   11DD E0                 5771 	movx	a,@dptr
   11DE FE                 5772 	mov	r6,a
   11DF A3                 5773 	inc	dptr
   11E0 E0                 5774 	movx	a,@dptr
   11E1 FF                 5775 	mov	r7,a
   11E2 90 02 71           5776 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   11E5 EC                 5777 	mov	a,r4
   11E6 F0                 5778 	movx	@dptr,a
   11E7 A3                 5779 	inc	dptr
   11E8 ED                 5780 	mov	a,r5
   11E9 F0                 5781 	movx	@dptr,a
   11EA A3                 5782 	inc	dptr
   11EB EE                 5783 	mov	a,r6
   11EC F0                 5784 	movx	@dptr,a
   11ED A3                 5785 	inc	dptr
   11EE EF                 5786 	mov	a,r7
   11EF F0                 5787 	movx	@dptr,a
                    09BB   5788 	C$easyax5043.c$733$2$248 ==.
                           5789 ;	..\COMMON\easyax5043.c:733: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   11F0 90 02 6B           5790 	mov	dptr,#_axradio_cb_transmitstart
   11F3 12 3F BF           5791 	lcall	_wtimer_add_callback
                    09C1   5792 	C$easyax5043.c$734$2$248 ==.
                           5793 ;	..\COMMON\easyax5043.c:734: break;
   11F6 02 13 1A           5794 	ljmp	00164$
                    09C4   5795 	C$easyax5043.c$736$2$248 ==.
                           5796 ;	..\COMMON\easyax5043.c:736: case trxstate_txstream_xtalwait:
   11F9                    5797 00145$:
                    09C4   5798 	C$easyax5043.c$737$2$248 ==.
                           5799 ;	..\COMMON\easyax5043.c:737: if (AX5043_IRQREQUEST1 & 0x01) {
   11F9 90 40 0C           5800 	mov	dptr,#_AX5043_IRQREQUEST1
   11FC E0                 5801 	movx	a,@dptr
   11FD FF                 5802 	mov	r7,a
   11FE 20 E0 03           5803 	jb	acc.0,00252$
   1201 02 12 96           5804 	ljmp	00155$
   1204                    5805 00252$:
                    09CF   5806 	C$easyax5043.c$738$3$255 ==.
                           5807 ;	..\COMMON\easyax5043.c:738: AX5043_RADIOEVENTMASK0 = 0x03; // enable PLL settled and done event
   1204 90 40 09           5808 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1207 74 03              5809 	mov	a,#0x03
   1209 F0                 5810 	movx	@dptr,a
                    09D5   5811 	C$easyax5043.c$739$3$255 ==.
                           5812 ;	..\COMMON\easyax5043.c:739: AX5043_IRQMASK1 = 0x00;
   120A 90 40 06           5813 	mov	dptr,#_AX5043_IRQMASK1
   120D E4                 5814 	clr	a
   120E F0                 5815 	movx	@dptr,a
                    09DA   5816 	C$easyax5043.c$740$3$255 ==.
                           5817 ;	..\COMMON\easyax5043.c:740: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   120F 90 40 07           5818 	mov	dptr,#_AX5043_IRQMASK0
   1212 74 40              5819 	mov	a,#0x40
   1214 F0                 5820 	movx	@dptr,a
                    09E0   5821 	C$easyax5043.c$741$3$255 ==.
                           5822 ;	..\COMMON\easyax5043.c:741: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1215 90 40 02           5823 	mov	dptr,#_AX5043_PWRMODE
   1218 74 0D              5824 	mov	a,#0x0D
   121A F0                 5825 	movx	@dptr,a
                    09E6   5826 	C$easyax5043.c$742$3$255 ==.
                           5827 ;	..\COMMON\easyax5043.c:742: axradio_trxstate = trxstate_txstream;
   121B 75 0B 10           5828 	mov	_axradio_trxstate,#0x10
                    09E9   5829 	C$easyax5043.c$744$2$248 ==.
                           5830 ;	..\COMMON\easyax5043.c:744: goto txstreamdatacb;
                    09E9   5831 	C$easyax5043.c$746$2$248 ==.
                           5832 ;	..\COMMON\easyax5043.c:746: case trxstate_txstream:
   121E 80 76              5833 	sjmp	00155$
   1220                    5834 00148$:
                    09EB   5835 	C$easyax5043.c$748$3$248 ==.
                           5836 ;	..\COMMON\easyax5043.c:748: uint8_t __autodata evt = AX5043_RADIOEVENTREQ0;
   1220 90 40 0F           5837 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1223 E0                 5838 	movx	a,@dptr
                    09EF   5839 	C$easyax5043.c$749$3$256 ==.
                           5840 ;	..\COMMON\easyax5043.c:749: if (evt & 0x03)
   1224 FF                 5841 	mov	r7,a
   1225 54 03              5842 	anl	a,#0x03
   1227 60 07              5843 	jz	00150$
                    09F4   5844 	C$easyax5043.c$750$3$256 ==.
                           5845 ;	..\COMMON\easyax5043.c:750: update_timeanchor();
   1229 C0 07              5846 	push	ar7
   122B 12 08 35           5847 	lcall	_update_timeanchor
   122E D0 07              5848 	pop	ar7
   1230                    5849 00150$:
                    09FB   5850 	C$easyax5043.c$751$3$256 ==.
                           5851 ;	..\COMMON\easyax5043.c:751: if (evt & 0x01) {
   1230 EF                 5852 	mov	a,r7
   1231 30 E0 31           5853 	jnb	acc.0,00152$
                    09FF   5854 	C$easyax5043.c$752$4$257 ==.
                           5855 ;	..\COMMON\easyax5043.c:752: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1234 90 02 75           5856 	mov	dptr,#_axradio_cb_transmitend
   1237 C0 07              5857 	push	ar7
   1239 12 4B 64           5858 	lcall	_wtimer_remove_callback
                    0A07   5859 	C$easyax5043.c$753$4$257 ==.
                           5860 ;	..\COMMON\easyax5043.c:753: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   123C 90 02 7A           5861 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   123F E4                 5862 	clr	a
   1240 F0                 5863 	movx	@dptr,a
                    0A0C   5864 	C$easyax5043.c$754$4$257 ==.
                           5865 ;	..\COMMON\easyax5043.c:754: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1241 90 00 1A           5866 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1244 E0                 5867 	movx	a,@dptr
   1245 FB                 5868 	mov	r3,a
   1246 A3                 5869 	inc	dptr
   1247 E0                 5870 	movx	a,@dptr
   1248 FC                 5871 	mov	r4,a
   1249 A3                 5872 	inc	dptr
   124A E0                 5873 	movx	a,@dptr
   124B FD                 5874 	mov	r5,a
   124C A3                 5875 	inc	dptr
   124D E0                 5876 	movx	a,@dptr
   124E FE                 5877 	mov	r6,a
   124F 90 02 7B           5878 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1252 EB                 5879 	mov	a,r3
   1253 F0                 5880 	movx	@dptr,a
   1254 A3                 5881 	inc	dptr
   1255 EC                 5882 	mov	a,r4
   1256 F0                 5883 	movx	@dptr,a
   1257 A3                 5884 	inc	dptr
   1258 ED                 5885 	mov	a,r5
   1259 F0                 5886 	movx	@dptr,a
   125A A3                 5887 	inc	dptr
   125B EE                 5888 	mov	a,r6
   125C F0                 5889 	movx	@dptr,a
                    0A28   5890 	C$easyax5043.c$755$4$257 ==.
                           5891 ;	..\COMMON\easyax5043.c:755: wtimer_add_callback(&axradio_cb_transmitend.cb);
   125D 90 02 75           5892 	mov	dptr,#_axradio_cb_transmitend
   1260 12 3F BF           5893 	lcall	_wtimer_add_callback
   1263 D0 07              5894 	pop	ar7
   1265                    5895 00152$:
                    0A30   5896 	C$easyax5043.c$757$3$256 ==.
                           5897 ;	..\COMMON\easyax5043.c:757: if (evt & 0x02) {
   1265 EF                 5898 	mov	a,r7
   1266 30 E1 2D           5899 	jnb	acc.1,00155$
                    0A34   5900 	C$easyax5043.c$758$4$258 ==.
                           5901 ;	..\COMMON\easyax5043.c:758: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1269 90 02 6B           5902 	mov	dptr,#_axradio_cb_transmitstart
   126C 12 4B 64           5903 	lcall	_wtimer_remove_callback
                    0A3A   5904 	C$easyax5043.c$759$4$258 ==.
                           5905 ;	..\COMMON\easyax5043.c:759: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   126F 90 02 70           5906 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1272 E4                 5907 	clr	a
   1273 F0                 5908 	movx	@dptr,a
                    0A3F   5909 	C$easyax5043.c$760$4$258 ==.
                           5910 ;	..\COMMON\easyax5043.c:760: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1274 90 00 1A           5911 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1277 E0                 5912 	movx	a,@dptr
   1278 FC                 5913 	mov	r4,a
   1279 A3                 5914 	inc	dptr
   127A E0                 5915 	movx	a,@dptr
   127B FD                 5916 	mov	r5,a
   127C A3                 5917 	inc	dptr
   127D E0                 5918 	movx	a,@dptr
   127E FE                 5919 	mov	r6,a
   127F A3                 5920 	inc	dptr
   1280 E0                 5921 	movx	a,@dptr
   1281 FF                 5922 	mov	r7,a
   1282 90 02 71           5923 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1285 EC                 5924 	mov	a,r4
   1286 F0                 5925 	movx	@dptr,a
   1287 A3                 5926 	inc	dptr
   1288 ED                 5927 	mov	a,r5
   1289 F0                 5928 	movx	@dptr,a
   128A A3                 5929 	inc	dptr
   128B EE                 5930 	mov	a,r6
   128C F0                 5931 	movx	@dptr,a
   128D A3                 5932 	inc	dptr
   128E EF                 5933 	mov	a,r7
   128F F0                 5934 	movx	@dptr,a
                    0A5B   5935 	C$easyax5043.c$761$4$258 ==.
                           5936 ;	..\COMMON\easyax5043.c:761: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1290 90 02 6B           5937 	mov	dptr,#_axradio_cb_transmitstart
   1293 12 3F BF           5938 	lcall	_wtimer_add_callback
                    0A61   5939 	C$easyax5043.c$764$2$248 ==.
                           5940 ;	..\COMMON\easyax5043.c:764: txstreamdatacb:
   1296                    5941 00155$:
                    0A61   5942 	C$easyax5043.c$765$2$248 ==.
                           5943 ;	..\COMMON\easyax5043.c:765: if (AX5043_IRQREQUEST0 & AX5043_IRQMASK0 & 0x08) {
   1296 90 40 0D           5944 	mov	dptr,#_AX5043_IRQREQUEST0
   1299 E0                 5945 	movx	a,@dptr
   129A FF                 5946 	mov	r7,a
   129B 90 40 07           5947 	mov	dptr,#_AX5043_IRQMASK0
   129E E0                 5948 	movx	a,@dptr
   129F FE                 5949 	mov	r6,a
   12A0 5F                 5950 	anl	a,r7
   12A1 30 E3 76           5951 	jnb	acc.3,00164$
                    0A6F   5952 	C$easyax5043.c$766$3$259 ==.
                           5953 ;	..\COMMON\easyax5043.c:766: AX5043_IRQMASK0 &= (uint8_t)~0x08;
   12A4 90 40 07           5954 	mov	dptr,#_AX5043_IRQMASK0
   12A7 E0                 5955 	movx	a,@dptr
   12A8 54 F7              5956 	anl	a,#0xF7
   12AA F0                 5957 	movx	@dptr,a
                    0A76   5958 	C$easyax5043.c$767$3$259 ==.
                           5959 ;	..\COMMON\easyax5043.c:767: update_timeanchor();
   12AB 12 08 35           5960 	lcall	_update_timeanchor
                    0A79   5961 	C$easyax5043.c$768$3$259 ==.
                           5962 ;	..\COMMON\easyax5043.c:768: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   12AE 90 02 7F           5963 	mov	dptr,#_axradio_cb_transmitdata
   12B1 12 4B 64           5964 	lcall	_wtimer_remove_callback
                    0A7F   5965 	C$easyax5043.c$769$3$259 ==.
                           5966 ;	..\COMMON\easyax5043.c:769: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   12B4 90 02 84           5967 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   12B7 E4                 5968 	clr	a
   12B8 F0                 5969 	movx	@dptr,a
                    0A84   5970 	C$easyax5043.c$770$3$259 ==.
                           5971 ;	..\COMMON\easyax5043.c:770: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   12B9 90 00 1A           5972 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   12BC E0                 5973 	movx	a,@dptr
   12BD FC                 5974 	mov	r4,a
   12BE A3                 5975 	inc	dptr
   12BF E0                 5976 	movx	a,@dptr
   12C0 FD                 5977 	mov	r5,a
   12C1 A3                 5978 	inc	dptr
   12C2 E0                 5979 	movx	a,@dptr
   12C3 FE                 5980 	mov	r6,a
   12C4 A3                 5981 	inc	dptr
   12C5 E0                 5982 	movx	a,@dptr
   12C6 FF                 5983 	mov	r7,a
   12C7 90 02 85           5984 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   12CA EC                 5985 	mov	a,r4
   12CB F0                 5986 	movx	@dptr,a
   12CC A3                 5987 	inc	dptr
   12CD ED                 5988 	mov	a,r5
   12CE F0                 5989 	movx	@dptr,a
   12CF A3                 5990 	inc	dptr
   12D0 EE                 5991 	mov	a,r6
   12D1 F0                 5992 	movx	@dptr,a
   12D2 A3                 5993 	inc	dptr
   12D3 EF                 5994 	mov	a,r7
   12D4 F0                 5995 	movx	@dptr,a
                    0AA0   5996 	C$easyax5043.c$771$3$259 ==.
                           5997 ;	..\COMMON\easyax5043.c:771: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   12D5 90 02 7F           5998 	mov	dptr,#_axradio_cb_transmitdata
   12D8 12 3F BF           5999 	lcall	_wtimer_add_callback
                    0AA6   6000 	C$easyax5043.c$773$2$248 ==.
                           6001 ;	..\COMMON\easyax5043.c:773: break;
                    0AA6   6002 	C$easyax5043.c$775$2$248 ==.
                           6003 ;	..\COMMON\easyax5043.c:775: case trxstate_rxwor:
   12DB 80 3D              6004 	sjmp	00164$
   12DD                    6005 00158$:
                    0AA8   6006 	C$easyax5043.c$776$2$248 ==.
                           6007 ;	..\COMMON\easyax5043.c:776: if( AX5043_IRQREQUEST1 & 0x01 ) // XTAL ready
   12DD 90 40 0C           6008 	mov	dptr,#_AX5043_IRQREQUEST1
   12E0 E0                 6009 	movx	a,@dptr
   12E1 FF                 6010 	mov	r7,a
   12E2 30 E0 0A           6011 	jnb	acc.0,00160$
                    0AB0   6012 	C$easyax5043.c$778$3$260 ==.
                           6013 ;	..\COMMON\easyax5043.c:778: AX5043_IRQINVERSION1 |= 0x01; // invert the xtal ready irq so it does not fire continuously
   12E5 90 40 0A           6014 	mov	dptr,#_AX5043_IRQINVERSION1
   12E8 E0                 6015 	movx	a,@dptr
   12E9 FF                 6016 	mov	r7,a
   12EA 44 01              6017 	orl	a,#0x01
   12EC F0                 6018 	movx	@dptr,a
   12ED 80 28              6019 	sjmp	00162$
   12EF                    6020 00160$:
                    0ABA   6021 	C$easyax5043.c$782$3$261 ==.
                           6022 ;	..\COMMON\easyax5043.c:782: AX5043_IRQINVERSION1 &= ~0x01; // drop xtal ready irq inversion --> armed again for next wake-up
   12EF 90 40 0A           6023 	mov	dptr,#_AX5043_IRQINVERSION1
   12F2 E0                 6024 	movx	a,@dptr
   12F3 54 FE              6025 	anl	a,#0xFE
   12F5 F0                 6026 	movx	@dptr,a
                    0AC1   6027 	C$easyax5043.c$783$3$261 ==.
                           6028 ;	..\COMMON\easyax5043.c:783: AX5043_0xF30 = f30_saved;
   12F6 90 04 41           6029 	mov	dptr,#_f30_saved
   12F9 E0                 6030 	movx	a,@dptr
   12FA 90 4F 30           6031 	mov	dptr,#_AX5043_0xF30
   12FD F0                 6032 	movx	@dptr,a
                    0AC9   6033 	C$easyax5043.c$784$3$261 ==.
                           6034 ;	..\COMMON\easyax5043.c:784: AX5043_0xF31 = f31_saved;
   12FE 90 04 42           6035 	mov	dptr,#_f31_saved
   1301 E0                 6036 	movx	a,@dptr
   1302 90 4F 31           6037 	mov	dptr,#_AX5043_0xF31
   1305 F0                 6038 	movx	@dptr,a
                    0AD1   6039 	C$easyax5043.c$785$3$261 ==.
                           6040 ;	..\COMMON\easyax5043.c:785: AX5043_0xF32 = f32_saved;
   1306 90 04 43           6041 	mov	dptr,#_f32_saved
   1309 E0                 6042 	movx	a,@dptr
   130A 90 4F 32           6043 	mov	dptr,#_AX5043_0xF32
   130D F0                 6044 	movx	@dptr,a
                    0AD9   6045 	C$easyax5043.c$786$3$261 ==.
                           6046 ;	..\COMMON\easyax5043.c:786: AX5043_0xF33 = f33_saved;
   130E 90 04 44           6047 	mov	dptr,#_f33_saved
   1311 E0                 6048 	movx	a,@dptr
   1312 FF                 6049 	mov	r7,a
   1313 90 4F 33           6050 	mov	dptr,#_AX5043_0xF33
   1316 F0                 6051 	movx	@dptr,a
                    0AE2   6052 	C$easyax5043.c$790$2$248 ==.
                           6053 ;	..\COMMON\easyax5043.c:790: case trxstate_rx:
   1317                    6054 00162$:
                    0AE2   6055 	C$easyax5043.c$791$2$248 ==.
                           6056 ;	..\COMMON\easyax5043.c:791: receive_isr();
   1317 12 09 37           6057 	lcall	_receive_isr
                    0AE5   6058 	C$easyax5043.c$794$1$247 ==.
                           6059 ;	..\COMMON\easyax5043.c:794: } // end switch(axradio_trxstate)
   131A                    6060 00164$:
   131A D0 D0              6061 	pop	psw
   131C D0 00              6062 	pop	(0+0)
   131E D0 01              6063 	pop	(0+1)
   1320 D0 02              6064 	pop	(0+2)
   1322 D0 03              6065 	pop	(0+3)
   1324 D0 04              6066 	pop	(0+4)
   1326 D0 05              6067 	pop	(0+5)
   1328 D0 06              6068 	pop	(0+6)
   132A D0 07              6069 	pop	(0+7)
   132C D0 83              6070 	pop	dph
   132E D0 82              6071 	pop	dpl
   1330 D0 F0              6072 	pop	b
   1332 D0 E0              6073 	pop	acc
   1334 D0 20              6074 	pop	bits
                    0B01   6075 	C$easyax5043.c$795$1$247 ==.
                    0B01   6076 	XG$axradio_isr$0$0 ==.
   1336 32                 6077 	reti
                           6078 ;------------------------------------------------------------
                           6079 ;Allocation info for local variables in function 'ax5043_receiver_on_continuous'
                           6080 ;------------------------------------------------------------
                           6081 ;rschanged_int             Allocated to registers r7 
                           6082 ;------------------------------------------------------------
                    0B02   6083 	G$ax5043_receiver_on_continuous$0$0 ==.
                    0B02   6084 	C$easyax5043.c$798$1$247 ==.
                           6085 ;	..\COMMON\easyax5043.c:798: __reentrantb void ax5043_receiver_on_continuous(void) __reentrant
                           6086 ;	-----------------------------------------
                           6087 ;	 function ax5043_receiver_on_continuous
                           6088 ;	-----------------------------------------
   1337                    6089 _ax5043_receiver_on_continuous:
                    0B02   6090 	C$easyax5043.c$800$1$263 ==.
                           6091 ;	..\COMMON\easyax5043.c:800: uint8_t rschanged_int = (axradio_framing_enable_sfdcallback | (axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) | (axradio_mode == AXRADIO_MODE_SYNC_SLAVE) );
   1337 74 23              6092 	mov	a,#0x23
   1339 B5 0A 04           6093 	cjne	a,_axradio_mode,00127$
   133C 74 01              6094 	mov	a,#0x01
   133E 80 01              6095 	sjmp	00128$
   1340                    6096 00127$:
   1340 E4                 6097 	clr	a
   1341                    6098 00128$:
   1341 FF                 6099 	mov	r7,a
   1342 90 4F 2D           6100 	mov	dptr,#_axradio_framing_enable_sfdcallback
   1345 E4                 6101 	clr	a
   1346 93                 6102 	movc	a,@a+dptr
   1347 FE                 6103 	mov	r6,a
   1348 42 07              6104 	orl	ar7,a
   134A 74 22              6105 	mov	a,#0x22
   134C B5 0A 04           6106 	cjne	a,_axradio_mode,00129$
   134F 74 01              6107 	mov	a,#0x01
   1351 80 01              6108 	sjmp	00130$
   1353                    6109 00129$:
   1353 E4                 6110 	clr	a
   1354                    6111 00130$:
   1354 FE                 6112 	mov	r6,a
   1355 42 07              6113 	orl	ar7,a
                    0B22   6114 	C$easyax5043.c$801$1$263 ==.
                           6115 ;	..\COMMON\easyax5043.c:801: if(rschanged_int)
   1357 EF                 6116 	mov	a,r7
   1358 60 06              6117 	jz	00102$
                    0B25   6118 	C$easyax5043.c$802$1$263 ==.
                           6119 ;	..\COMMON\easyax5043.c:802: AX5043_RADIOEVENTMASK0 = 0x04;
   135A 90 40 09           6120 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   135D 74 04              6121 	mov	a,#0x04
   135F F0                 6122 	movx	@dptr,a
   1360                    6123 00102$:
                    0B2B   6124 	C$easyax5043.c$803$1$263 ==.
                           6125 ;	..\COMMON\easyax5043.c:803: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   1360 90 4F 0A           6126 	mov	dptr,#_axradio_phy_rssireference
   1363 E4                 6127 	clr	a
   1364 93                 6128 	movc	a,@a+dptr
   1365 FE                 6129 	mov	r6,a
   1366 90 42 2C           6130 	mov	dptr,#_AX5043_RSSIREFERENCE
   1369 F0                 6131 	movx	@dptr,a
                    0B35   6132 	C$easyax5043.c$804$1$263 ==.
                           6133 ;	..\COMMON\easyax5043.c:804: if (axradio_mode == AXRADIO_MODE_ASYNC_RECEIVE ||
   136A 74 18              6134 	mov	a,#0x18
   136C B5 0A 02           6135 	cjne	a,_axradio_mode,00132$
   136F 80 1A              6136 	sjmp	00103$
   1371                    6137 00132$:
                    0B3C   6138 	C$easyax5043.c$805$1$263 ==.
                           6139 ;	..\COMMON\easyax5043.c:805: axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   1371 74 1A              6140 	mov	a,#0x1A
   1373 B5 0A 02           6141 	cjne	a,_axradio_mode,00133$
   1376 80 13              6142 	sjmp	00103$
   1378                    6143 00133$:
                    0B43   6144 	C$easyax5043.c$806$1$263 ==.
                           6145 ;	..\COMMON\easyax5043.c:806: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   1378 74 1C              6146 	mov	a,#0x1C
   137A B5 0A 02           6147 	cjne	a,_axradio_mode,00134$
   137D 80 0C              6148 	sjmp	00103$
   137F                    6149 00134$:
                    0B4A   6150 	C$easyax5043.c$807$1$263 ==.
                           6151 ;	..\COMMON\easyax5043.c:807: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   137F 74 1D              6152 	mov	a,#0x1D
   1381 B5 0A 02           6153 	cjne	a,_axradio_mode,00135$
   1384 80 05              6154 	sjmp	00103$
   1386                    6155 00135$:
                    0B51   6156 	C$easyax5043.c$808$1$263 ==.
                           6157 ;	..\COMMON\easyax5043.c:808: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   1386 74 1E              6158 	mov	a,#0x1E
   1388 B5 0A 13           6159 	cjne	a,_axradio_mode,00104$
   138B                    6160 00103$:
                    0B56   6161 	C$easyax5043.c$809$2$264 ==.
                           6162 ;	..\COMMON\easyax5043.c:809: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_cont;
   138B 90 4F 12           6163 	mov	dptr,#_axradio_phy_tmgrxpreamble1_cont
   138E E4                 6164 	clr	a
   138F 93                 6165 	movc	a,@a+dptr
   1390 90 42 29           6166 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   1393 F0                 6167 	movx	@dptr,a
                    0B5F   6168 	C$easyax5043.c$810$2$264 ==.
                           6169 ;	..\COMMON\easyax5043.c:810: AX5043_PKTSTOREFLAGS |= 0x40;
   1394 90 42 32           6170 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1397 E0                 6171 	movx	a,@dptr
   1398 FE                 6172 	mov	r6,a
   1399 44 40              6173 	orl	a,#0x40
   139B F0                 6174 	movx	@dptr,a
   139C 80 0D              6175 	sjmp	00105$
   139E                    6176 00104$:
                    0B69   6177 	C$easyax5043.c$812$2$265 ==.
                           6178 ;	..\COMMON\easyax5043.c:812: AX5043_TMGRXPREAMBLE1 = 0x00;
   139E 90 42 29           6179 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   13A1 E4                 6180 	clr	a
   13A2 F0                 6181 	movx	@dptr,a
                    0B6E   6182 	C$easyax5043.c$813$2$265 ==.
                           6183 ;	..\COMMON\easyax5043.c:813: AX5043_PKTSTOREFLAGS &= (uint8_t)~0x40;
   13A3 90 42 32           6184 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   13A6 E0                 6185 	movx	a,@dptr
   13A7 FE                 6186 	mov	r6,a
   13A8 54 BF              6187 	anl	a,#0xBF
   13AA F0                 6188 	movx	@dptr,a
   13AB                    6189 00105$:
                    0B76   6190 	C$easyax5043.c$815$1$263 ==.
                           6191 ;	..\COMMON\easyax5043.c:815: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13AB 90 40 28           6192 	mov	dptr,#_AX5043_FIFOSTAT
   13AE 74 03              6193 	mov	a,#0x03
   13B0 F0                 6194 	movx	@dptr,a
                    0B7C   6195 	C$easyax5043.c$816$1$263 ==.
                           6196 ;	..\COMMON\easyax5043.c:816: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   13B1 90 40 02           6197 	mov	dptr,#_AX5043_PWRMODE
   13B4 74 09              6198 	mov	a,#0x09
   13B6 F0                 6199 	movx	@dptr,a
                    0B82   6200 	C$easyax5043.c$817$1$263 ==.
                           6201 ;	..\COMMON\easyax5043.c:817: axradio_trxstate = trxstate_rx;
   13B7 75 0B 01           6202 	mov	_axradio_trxstate,#0x01
                    0B85   6203 	C$easyax5043.c$818$1$263 ==.
                           6204 ;	..\COMMON\easyax5043.c:818: if(rschanged_int)
   13BA EF                 6205 	mov	a,r7
   13BB 60 08              6206 	jz	00111$
                    0B88   6207 	C$easyax5043.c$819$1$263 ==.
                           6208 ;	..\COMMON\easyax5043.c:819: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   13BD 90 40 07           6209 	mov	dptr,#_AX5043_IRQMASK0
   13C0 74 41              6210 	mov	a,#0x41
   13C2 F0                 6211 	movx	@dptr,a
   13C3 80 06              6212 	sjmp	00112$
   13C5                    6213 00111$:
                    0B90   6214 	C$easyax5043.c$821$1$263 ==.
                           6215 ;	..\COMMON\easyax5043.c:821: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   13C5 90 40 07           6216 	mov	dptr,#_AX5043_IRQMASK0
   13C8 74 01              6217 	mov	a,#0x01
   13CA F0                 6218 	movx	@dptr,a
   13CB                    6219 00112$:
                    0B96   6220 	C$easyax5043.c$822$1$263 ==.
                           6221 ;	..\COMMON\easyax5043.c:822: AX5043_IRQMASK1 = 0x00;
   13CB 90 40 06           6222 	mov	dptr,#_AX5043_IRQMASK1
   13CE E4                 6223 	clr	a
   13CF F0                 6224 	movx	@dptr,a
                    0B9B   6225 	C$easyax5043.c$823$1$263 ==.
                    0B9B   6226 	XG$ax5043_receiver_on_continuous$0$0 ==.
   13D0 22                 6227 	ret
                           6228 ;------------------------------------------------------------
                           6229 ;Allocation info for local variables in function 'ax5043_receiver_on_wor'
                           6230 ;------------------------------------------------------------
                           6231 ;wp                        Allocated to registers r6 r7 
                           6232 ;------------------------------------------------------------
                    0B9C   6233 	G$ax5043_receiver_on_wor$0$0 ==.
                    0B9C   6234 	C$easyax5043.c$825$1$263 ==.
                           6235 ;	..\COMMON\easyax5043.c:825: __reentrantb void ax5043_receiver_on_wor(void) __reentrant
                           6236 ;	-----------------------------------------
                           6237 ;	 function ax5043_receiver_on_wor
                           6238 ;	-----------------------------------------
   13D1                    6239 _ax5043_receiver_on_wor:
                    0B9C   6240 	C$easyax5043.c$827$1$267 ==.
                           6241 ;	..\COMMON\easyax5043.c:827: AX5043_BGNDRSSIGAIN = 0x02;
   13D1 90 42 2E           6242 	mov	dptr,#_AX5043_BGNDRSSIGAIN
   13D4 74 02              6243 	mov	a,#0x02
   13D6 F0                 6244 	movx	@dptr,a
                    0BA2   6245 	C$easyax5043.c$828$1$267 ==.
                           6246 ;	..\COMMON\easyax5043.c:828: if(axradio_framing_enable_sfdcallback)
   13D7 90 4F 2D           6247 	mov	dptr,#_axradio_framing_enable_sfdcallback
   13DA E4                 6248 	clr	a
   13DB 93                 6249 	movc	a,@a+dptr
   13DC FF                 6250 	mov	r7,a
   13DD 60 06              6251 	jz	00102$
                    0BAA   6252 	C$easyax5043.c$829$1$267 ==.
                           6253 ;	..\COMMON\easyax5043.c:829: AX5043_RADIOEVENTMASK0 = 0x04;
   13DF 90 40 09           6254 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   13E2 74 04              6255 	mov	a,#0x04
   13E4 F0                 6256 	movx	@dptr,a
   13E5                    6257 00102$:
                    0BB0   6258 	C$easyax5043.c$830$1$267 ==.
                           6259 ;	..\COMMON\easyax5043.c:830: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13E5 90 40 28           6260 	mov	dptr,#_AX5043_FIFOSTAT
   13E8 74 03              6261 	mov	a,#0x03
   13EA F0                 6262 	movx	@dptr,a
                    0BB6   6263 	C$easyax5043.c$831$1$267 ==.
                           6264 ;	..\COMMON\easyax5043.c:831: AX5043_LPOSCCONFIG = 0x01; // start LPOSC, slow mode
   13EB 90 43 10           6265 	mov	dptr,#_AX5043_LPOSCCONFIG
   13EE 74 01              6266 	mov	a,#0x01
   13F0 F0                 6267 	movx	@dptr,a
                    0BBC   6268 	C$easyax5043.c$832$1$267 ==.
                           6269 ;	..\COMMON\easyax5043.c:832: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_wor;
   13F1 90 4F 11           6270 	mov	dptr,#_axradio_phy_tmgrxpreamble1_wor
   13F4 E4                 6271 	clr	a
   13F5 93                 6272 	movc	a,@a+dptr
   13F6 90 42 29           6273 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   13F9 F0                 6274 	movx	@dptr,a
                    0BC5   6275 	C$easyax5043.c$833$1$267 ==.
                           6276 ;	..\COMMON\easyax5043.c:833: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   13FA 90 4F 0A           6277 	mov	dptr,#_axradio_phy_rssireference
   13FD E4                 6278 	clr	a
   13FE 93                 6279 	movc	a,@a+dptr
   13FF FE                 6280 	mov	r6,a
   1400 90 42 2C           6281 	mov	dptr,#_AX5043_RSSIREFERENCE
   1403 F0                 6282 	movx	@dptr,a
                    0BCF   6283 	C$easyax5043.c$834$1$267 ==.
                           6284 ;	..\COMMON\easyax5043.c:834: AX5043_PWRMODE = AX5043_PWRSTATE_WOR_RX;
   1404 90 40 02           6285 	mov	dptr,#_AX5043_PWRMODE
   1407 74 0B              6286 	mov	a,#0x0B
   1409 F0                 6287 	movx	@dptr,a
                    0BD5   6288 	C$easyax5043.c$835$1$267 ==.
                           6289 ;	..\COMMON\easyax5043.c:835: axradio_trxstate = trxstate_rxwor;
   140A 75 0B 02           6290 	mov	_axradio_trxstate,#0x02
                    0BD8   6291 	C$easyax5043.c$836$1$267 ==.
                           6292 ;	..\COMMON\easyax5043.c:836: if(axradio_framing_enable_sfdcallback)
   140D EF                 6293 	mov	a,r7
   140E 60 08              6294 	jz	00104$
                    0BDB   6295 	C$easyax5043.c$837$1$267 ==.
                           6296 ;	..\COMMON\easyax5043.c:837: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   1410 90 40 07           6297 	mov	dptr,#_AX5043_IRQMASK0
   1413 74 41              6298 	mov	a,#0x41
   1415 F0                 6299 	movx	@dptr,a
   1416 80 06              6300 	sjmp	00105$
   1418                    6301 00104$:
                    0BE3   6302 	C$easyax5043.c$839$1$267 ==.
                           6303 ;	..\COMMON\easyax5043.c:839: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   1418 90 40 07           6304 	mov	dptr,#_AX5043_IRQMASK0
   141B 74 01              6305 	mov	a,#0x01
   141D F0                 6306 	movx	@dptr,a
   141E                    6307 00105$:
                    0BE9   6308 	C$easyax5043.c$840$1$267 ==.
                           6309 ;	..\COMMON\easyax5043.c:840: AX5043_IRQMASK1 = 0x01; // xtal ready
   141E 90 40 06           6310 	mov	dptr,#_AX5043_IRQMASK1
   1421 74 01              6311 	mov	a,#0x01
   1423 F0                 6312 	movx	@dptr,a
                    0BEF   6313 	C$easyax5043.c$842$2$267 ==.
                           6314 ;	..\COMMON\easyax5043.c:842: uint16_t wp = axradio_wor_period;
   1424 90 4F 39           6315 	mov	dptr,#_axradio_wor_period
   1427 E4                 6316 	clr	a
   1428 93                 6317 	movc	a,@a+dptr
   1429 FE                 6318 	mov	r6,a
   142A 74 01              6319 	mov	a,#0x01
   142C 93                 6320 	movc	a,@a+dptr
                    0BF8   6321 	C$easyax5043.c$843$2$268 ==.
                           6322 ;	..\COMMON\easyax5043.c:843: AX5043_WAKEUPFREQ1 = (wp >> 8) & 0xFF;
   142D FF                 6323 	mov	r7,a
   142E FD                 6324 	mov	r5,a
   142F 90 40 6C           6325 	mov	dptr,#_AX5043_WAKEUPFREQ1
   1432 ED                 6326 	mov	a,r5
   1433 F0                 6327 	movx	@dptr,a
                    0BFF   6328 	C$easyax5043.c$844$2$268 ==.
                           6329 ;	..\COMMON\easyax5043.c:844: AX5043_WAKEUPFREQ0 = (wp >> 0) & 0xFF;  // actually wakeup period measured in LP OSC cycles
   1434 8E 05              6330 	mov	ar5,r6
   1436 90 40 6D           6331 	mov	dptr,#_AX5043_WAKEUPFREQ0
   1439 ED                 6332 	mov	a,r5
   143A F0                 6333 	movx	@dptr,a
                    0C06   6334 	C$easyax5043.c$845$2$268 ==.
                           6335 ;	..\COMMON\easyax5043.c:845: wp += radio_read16((uint16_t)&AX5043_WAKEUPTIMER1);
   143B 90 40 68           6336 	mov	dptr,#_AX5043_WAKEUPTIMER1
   143E 12 42 51           6337 	lcall	_radio_read16
   1441 AC 82              6338 	mov	r4,dpl
   1443 AD 83              6339 	mov	r5,dph
   1445 EC                 6340 	mov	a,r4
   1446 2E                 6341 	add	a,r6
   1447 FE                 6342 	mov	r6,a
   1448 ED                 6343 	mov	a,r5
   1449 3F                 6344 	addc	a,r7
                    0C15   6345 	C$easyax5043.c$846$2$268 ==.
                           6346 ;	..\COMMON\easyax5043.c:846: AX5043_WAKEUP1 = (wp >> 8) & 0xFF;
   144A FD                 6347 	mov	r5,a
   144B 90 40 6A           6348 	mov	dptr,#_AX5043_WAKEUP1
   144E ED                 6349 	mov	a,r5
   144F F0                 6350 	movx	@dptr,a
                    0C1B   6351 	C$easyax5043.c$847$2$268 ==.
                           6352 ;	..\COMMON\easyax5043.c:847: AX5043_WAKEUP0 = (wp >> 0) & 0xFF;
   1450 90 40 6B           6353 	mov	dptr,#_AX5043_WAKEUP0
   1453 EE                 6354 	mov	a,r6
   1454 F0                 6355 	movx	@dptr,a
                    0C20   6356 	C$easyax5043.c$849$2$268 ==.
                    0C20   6357 	XG$ax5043_receiver_on_wor$0$0 ==.
   1455 22                 6358 	ret
                           6359 ;------------------------------------------------------------
                           6360 ;Allocation info for local variables in function 'ax5043_prepare_tx'
                           6361 ;------------------------------------------------------------
                    0C21   6362 	G$ax5043_prepare_tx$0$0 ==.
                    0C21   6363 	C$easyax5043.c$850$2$268 ==.
                           6364 ;	..\COMMON\easyax5043.c:850: __reentrantb void ax5043_prepare_tx(void) __reentrant
                           6365 ;	-----------------------------------------
                           6366 ;	 function ax5043_prepare_tx
                           6367 ;	-----------------------------------------
   1456                    6368 _ax5043_prepare_tx:
                    0C21   6369 	C$easyax5043.c$852$1$270 ==.
                           6370 ;	..\COMMON\easyax5043.c:852: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
                    0C21   6371 	C$easyax5043.c$853$1$270 ==.
                           6372 ;	..\COMMON\easyax5043.c:853: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   1456 90 40 02           6373 	mov	dptr,#_AX5043_PWRMODE
   1459 74 05              6374 	mov	a,#0x05
   145B F0                 6375 	movx	@dptr,a
   145C 74 07              6376 	mov	a,#0x07
   145E F0                 6377 	movx	@dptr,a
                    0C2A   6378 	C$easyax5043.c$854$1$270 ==.
                           6379 ;	..\COMMON\easyax5043.c:854: ax5043_init_registers_tx();
   145F 12 08 CB           6380 	lcall	_ax5043_init_registers_tx
                    0C2D   6381 	C$easyax5043.c$855$1$270 ==.
                           6382 ;	..\COMMON\easyax5043.c:855: AX5043_FIFOTHRESH1 = 0;
   1462 90 40 2E           6383 	mov	dptr,#_AX5043_FIFOTHRESH1
   1465 E4                 6384 	clr	a
   1466 F0                 6385 	movx	@dptr,a
                    0C32   6386 	C$easyax5043.c$856$1$270 ==.
                           6387 ;	..\COMMON\easyax5043.c:856: AX5043_FIFOTHRESH0 = 0x80;
   1467 90 40 2F           6388 	mov	dptr,#_AX5043_FIFOTHRESH0
   146A 74 80              6389 	mov	a,#0x80
   146C F0                 6390 	movx	@dptr,a
                    0C38   6391 	C$easyax5043.c$857$1$270 ==.
                           6392 ;	..\COMMON\easyax5043.c:857: axradio_trxstate = trxstate_tx_xtalwait;
   146D 75 0B 09           6393 	mov	_axradio_trxstate,#0x09
                    0C3B   6394 	C$easyax5043.c$858$1$270 ==.
                           6395 ;	..\COMMON\easyax5043.c:858: AX5043_IRQMASK0 = 0x00;
   1470 90 40 07           6396 	mov	dptr,#_AX5043_IRQMASK0
   1473 E4                 6397 	clr	a
   1474 F0                 6398 	movx	@dptr,a
                    0C40   6399 	C$easyax5043.c$859$1$270 ==.
                           6400 ;	..\COMMON\easyax5043.c:859: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   1475 90 40 06           6401 	mov	dptr,#_AX5043_IRQMASK1
   1478 74 01              6402 	mov	a,#0x01
   147A F0                 6403 	movx	@dptr,a
                    0C46   6404 	C$easyax5043.c$860$1$270 ==.
                    0C46   6405 	XG$ax5043_prepare_tx$0$0 ==.
   147B 22                 6406 	ret
                           6407 ;------------------------------------------------------------
                           6408 ;Allocation info for local variables in function 'ax5043_off'
                           6409 ;------------------------------------------------------------
                    0C47   6410 	G$ax5043_off$0$0 ==.
                    0C47   6411 	C$easyax5043.c$862$1$270 ==.
                           6412 ;	..\COMMON\easyax5043.c:862: __reentrantb void ax5043_off(void) __reentrant
                           6413 ;	-----------------------------------------
                           6414 ;	 function ax5043_off
                           6415 ;	-----------------------------------------
   147C                    6416 _ax5043_off:
                    0C47   6417 	C$easyax5043.c$864$1$272 ==.
                           6418 ;	..\COMMON\easyax5043.c:864: ax5043_off_xtal();
   147C 12 14 85           6419 	lcall	_ax5043_off_xtal
                    0C4A   6420 	C$easyax5043.c$865$1$272 ==.
                           6421 ;	..\COMMON\easyax5043.c:865: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   147F 90 40 02           6422 	mov	dptr,#_AX5043_PWRMODE
   1482 E4                 6423 	clr	a
   1483 F0                 6424 	movx	@dptr,a
                    0C4F   6425 	C$easyax5043.c$866$1$272 ==.
                    0C4F   6426 	XG$ax5043_off$0$0 ==.
   1484 22                 6427 	ret
                           6428 ;------------------------------------------------------------
                           6429 ;Allocation info for local variables in function 'ax5043_off_xtal'
                           6430 ;------------------------------------------------------------
                    0C50   6431 	G$ax5043_off_xtal$0$0 ==.
                    0C50   6432 	C$easyax5043.c$868$1$272 ==.
                           6433 ;	..\COMMON\easyax5043.c:868: __reentrantb void ax5043_off_xtal(void) __reentrant
                           6434 ;	-----------------------------------------
                           6435 ;	 function ax5043_off_xtal
                           6436 ;	-----------------------------------------
   1485                    6437 _ax5043_off_xtal:
                    0C50   6438 	C$easyax5043.c$870$1$274 ==.
                           6439 ;	..\COMMON\easyax5043.c:870: AX5043_IRQMASK0 = 0x00; // IRQ off
   1485 90 40 07           6440 	mov	dptr,#_AX5043_IRQMASK0
                    0C53   6441 	C$easyax5043.c$871$1$274 ==.
                           6442 ;	..\COMMON\easyax5043.c:871: AX5043_IRQMASK1 = 0x00;
   1488 E4                 6443 	clr	a
   1489 F0                 6444 	movx	@dptr,a
   148A 90 40 06           6445 	mov	dptr,#_AX5043_IRQMASK1
   148D F0                 6446 	movx	@dptr,a
                    0C59   6447 	C$easyax5043.c$872$1$274 ==.
                           6448 ;	..\COMMON\easyax5043.c:872: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   148E 90 40 02           6449 	mov	dptr,#_AX5043_PWRMODE
   1491 74 05              6450 	mov	a,#0x05
   1493 F0                 6451 	movx	@dptr,a
                    0C5F   6452 	C$easyax5043.c$873$1$274 ==.
                           6453 ;	..\COMMON\easyax5043.c:873: AX5043_LPOSCCONFIG = 0x00; // LPOSC off
   1494 90 43 10           6454 	mov	dptr,#_AX5043_LPOSCCONFIG
   1497 E4                 6455 	clr	a
   1498 F0                 6456 	movx	@dptr,a
                    0C64   6457 	C$easyax5043.c$874$1$274 ==.
                           6458 ;	..\COMMON\easyax5043.c:874: axradio_trxstate = trxstate_off;
   1499 75 0B 00           6459 	mov	_axradio_trxstate,#0x00
                    0C67   6460 	C$easyax5043.c$875$1$274 ==.
                    0C67   6461 	XG$ax5043_off_xtal$0$0 ==.
   149C 22                 6462 	ret
                           6463 ;------------------------------------------------------------
                           6464 ;Allocation info for local variables in function 'axradio_wait_for_xtal'
                           6465 ;------------------------------------------------------------
                           6466 ;iesave                    Allocated to registers r7 
                           6467 ;------------------------------------------------------------
                    0C68   6468 	G$axradio_wait_for_xtal$0$0 ==.
                    0C68   6469 	C$easyax5043.c$877$1$274 ==.
                           6470 ;	..\COMMON\easyax5043.c:877: void axradio_wait_for_xtal(void)
                           6471 ;	-----------------------------------------
                           6472 ;	 function axradio_wait_for_xtal
                           6473 ;	-----------------------------------------
   149D                    6474 _axradio_wait_for_xtal:
                    0C68   6475 	C$easyax5043.c$879$1$276 ==.
                           6476 ;	..\COMMON\easyax5043.c:879: uint8_t __autodata iesave = IE & 0x80;
   149D 74 80              6477 	mov	a,#0x80
   149F 55 A8              6478 	anl	a,_IE
   14A1 FF                 6479 	mov	r7,a
                    0C6D   6480 	C$easyax5043.c$880$1$276 ==.
                           6481 ;	..\COMMON\easyax5043.c:880: EA = 0;
   14A2 C2 AF              6482 	clr	_EA
                    0C6F   6483 	C$easyax5043.c$881$1$276 ==.
                           6484 ;	..\COMMON\easyax5043.c:881: axradio_trxstate = trxstate_wait_xtal;
   14A4 75 0B 03           6485 	mov	_axradio_trxstate,#0x03
                    0C72   6486 	C$easyax5043.c$882$1$276 ==.
                           6487 ;	..\COMMON\easyax5043.c:882: AX5043_IRQMASK1 |= 0x01; // enable xtal ready interrupt
   14A7 90 40 06           6488 	mov	dptr,#_AX5043_IRQMASK1
   14AA E0                 6489 	movx	a,@dptr
   14AB FE                 6490 	mov	r6,a
   14AC 44 01              6491 	orl	a,#0x01
   14AE F0                 6492 	movx	@dptr,a
   14AF                    6493 00104$:
                    0C7A   6494 	C$easyax5043.c$884$2$277 ==.
                           6495 ;	..\COMMON\easyax5043.c:884: EA = 0;
   14AF C2 AF              6496 	clr	_EA
                    0C7C   6497 	C$easyax5043.c$885$2$277 ==.
                           6498 ;	..\COMMON\easyax5043.c:885: if (axradio_trxstate == trxstate_xtal_ready)
   14B1 74 04              6499 	mov	a,#0x04
   14B3 B5 0B 02           6500 	cjne	a,_axradio_trxstate,00112$
   14B6 80 11              6501 	sjmp	00105$
   14B8                    6502 00112$:
                    0C83   6503 	C$easyax5043.c$887$2$277 ==.
                           6504 ;	..\COMMON\easyax5043.c:887: wtimer_idle(WTFLAG_CANSTANDBY);
   14B8 75 82 02           6505 	mov	dpl,#0x02
   14BB C0 07              6506 	push	ar7
   14BD 12 3E CC           6507 	lcall	_wtimer_idle
                    0C8B   6508 	C$easyax5043.c$888$2$277 ==.
                           6509 ;	..\COMMON\easyax5043.c:888: EA = 1;
   14C0 D2 AF              6510 	setb	_EA
                    0C8D   6511 	C$easyax5043.c$889$2$277 ==.
                           6512 ;	..\COMMON\easyax5043.c:889: wtimer_runcallbacks();
   14C2 12 3E 48           6513 	lcall	_wtimer_runcallbacks
   14C5 D0 07              6514 	pop	ar7
   14C7 80 E6              6515 	sjmp	00104$
   14C9                    6516 00105$:
                    0C94   6517 	C$easyax5043.c$891$1$276 ==.
                           6518 ;	..\COMMON\easyax5043.c:891: IE |= iesave;
   14C9 EF                 6519 	mov	a,r7
   14CA 42 A8              6520 	orl	_IE,a
                    0C97   6521 	C$easyax5043.c$892$1$276 ==.
                    0C97   6522 	XG$axradio_wait_for_xtal$0$0 ==.
   14CC 22                 6523 	ret
                           6524 ;------------------------------------------------------------
                           6525 ;Allocation info for local variables in function 'axradio_setaddrregs'
                           6526 ;------------------------------------------------------------
                           6527 ;pn                        Allocated to registers r6 r7 
                           6528 ;inv                       Allocated to registers r5 
                           6529 ;------------------------------------------------------------
                    0C98   6530 	Feasyax5043$axradio_setaddrregs$0$0 ==.
                    0C98   6531 	C$easyax5043.c$894$1$276 ==.
                           6532 ;	..\COMMON\easyax5043.c:894: static void axradio_setaddrregs(void)
                           6533 ;	-----------------------------------------
                           6534 ;	 function axradio_setaddrregs
                           6535 ;	-----------------------------------------
   14CD                    6536 _axradio_setaddrregs:
                    0C98   6537 	C$easyax5043.c$896$1$279 ==.
                           6538 ;	..\COMMON\easyax5043.c:896: AX5043_PKTADDR0 = axradio_localaddr.addr[0];
   14CD 90 00 1E           6539 	mov	dptr,#_axradio_localaddr
   14D0 E0                 6540 	movx	a,@dptr
   14D1 90 42 07           6541 	mov	dptr,#_AX5043_PKTADDR0
   14D4 F0                 6542 	movx	@dptr,a
                    0CA0   6543 	C$easyax5043.c$897$1$279 ==.
                           6544 ;	..\COMMON\easyax5043.c:897: AX5043_PKTADDR1 = axradio_localaddr.addr[1];
   14D5 90 00 1F           6545 	mov	dptr,#(_axradio_localaddr + 0x0001)
   14D8 E0                 6546 	movx	a,@dptr
   14D9 90 42 06           6547 	mov	dptr,#_AX5043_PKTADDR1
   14DC F0                 6548 	movx	@dptr,a
                    0CA8   6549 	C$easyax5043.c$898$1$279 ==.
                           6550 ;	..\COMMON\easyax5043.c:898: AX5043_PKTADDR2 = axradio_localaddr.addr[2];
   14DD 90 00 20           6551 	mov	dptr,#(_axradio_localaddr + 0x0002)
   14E0 E0                 6552 	movx	a,@dptr
   14E1 90 42 05           6553 	mov	dptr,#_AX5043_PKTADDR2
   14E4 F0                 6554 	movx	@dptr,a
                    0CB0   6555 	C$easyax5043.c$899$1$279 ==.
                           6556 ;	..\COMMON\easyax5043.c:899: AX5043_PKTADDR3 = axradio_localaddr.addr[3];
   14E5 90 00 21           6557 	mov	dptr,#(_axradio_localaddr + 0x0003)
   14E8 E0                 6558 	movx	a,@dptr
   14E9 90 42 04           6559 	mov	dptr,#_AX5043_PKTADDR3
   14EC F0                 6560 	movx	@dptr,a
                    0CB8   6561 	C$easyax5043.c$901$1$279 ==.
                           6562 ;	..\COMMON\easyax5043.c:901: AX5043_PKTADDRMASK0 = axradio_localaddr.mask[0];
   14ED 90 00 22           6563 	mov	dptr,#(_axradio_localaddr + 0x0004)
   14F0 E0                 6564 	movx	a,@dptr
   14F1 90 42 0B           6565 	mov	dptr,#_AX5043_PKTADDRMASK0
   14F4 F0                 6566 	movx	@dptr,a
                    0CC0   6567 	C$easyax5043.c$902$1$279 ==.
                           6568 ;	..\COMMON\easyax5043.c:902: AX5043_PKTADDRMASK1 = axradio_localaddr.mask[1];
   14F5 90 00 23           6569 	mov	dptr,#(_axradio_localaddr + 0x0005)
   14F8 E0                 6570 	movx	a,@dptr
   14F9 90 42 0A           6571 	mov	dptr,#_AX5043_PKTADDRMASK1
   14FC F0                 6572 	movx	@dptr,a
                    0CC8   6573 	C$easyax5043.c$903$1$279 ==.
                           6574 ;	..\COMMON\easyax5043.c:903: AX5043_PKTADDRMASK2 = axradio_localaddr.mask[2];
   14FD 90 00 24           6575 	mov	dptr,#(_axradio_localaddr + 0x0006)
   1500 E0                 6576 	movx	a,@dptr
   1501 90 42 09           6577 	mov	dptr,#_AX5043_PKTADDRMASK2
   1504 F0                 6578 	movx	@dptr,a
                    0CD0   6579 	C$easyax5043.c$904$1$279 ==.
                           6580 ;	..\COMMON\easyax5043.c:904: AX5043_PKTADDRMASK3 = axradio_localaddr.mask[3];
   1505 90 00 25           6581 	mov	dptr,#(_axradio_localaddr + 0x0007)
   1508 E0                 6582 	movx	a,@dptr
   1509 90 42 08           6583 	mov	dptr,#_AX5043_PKTADDRMASK3
   150C F0                 6584 	movx	@dptr,a
                    0CD8   6585 	C$easyax5043.c$906$1$279 ==.
                           6586 ;	..\COMMON\easyax5043.c:906: if (axradio_phy_pn9 && axradio_framing_addrlen) {
   150D 90 4E FE           6587 	mov	dptr,#_axradio_phy_pn9
   1510 E4                 6588 	clr	a
   1511 93                 6589 	movc	a,@a+dptr
   1512 FF                 6590 	mov	r7,a
   1513 70 03              6591 	jnz	00114$
   1515 02 15 F7           6592 	ljmp	00106$
   1518                    6593 00114$:
   1518 90 4F 20           6594 	mov	dptr,#_axradio_framing_addrlen
   151B E4                 6595 	clr	a
   151C 93                 6596 	movc	a,@a+dptr
   151D FF                 6597 	mov	r7,a
   151E 70 03              6598 	jnz	00115$
   1520 02 15 F7           6599 	ljmp	00106$
   1523                    6600 00115$:
                    0CEE   6601 	C$easyax5043.c$907$2$279 ==.
                           6602 ;	..\COMMON\easyax5043.c:907: uint16_t __autodata pn = 0x1ff;
   1523 7E FF              6603 	mov	r6,#0xFF
   1525 7F 01              6604 	mov	r7,#0x01
                    0CF2   6605 	C$easyax5043.c$908$2$280 ==.
                           6606 ;	..\COMMON\easyax5043.c:908: uint8_t __autodata inv = -(AX5043_ENCODING & 0x01);
   1527 90 40 11           6607 	mov	dptr,#_AX5043_ENCODING
   152A E0                 6608 	movx	a,@dptr
   152B FD                 6609 	mov	r5,a
   152C 53 05 01           6610 	anl	ar5,#0x01
   152F C3                 6611 	clr	c
   1530 E4                 6612 	clr	a
   1531 9D                 6613 	subb	a,r5
   1532 FD                 6614 	mov	r5,a
                    0CFE   6615 	C$easyax5043.c$909$2$280 ==.
                           6616 ;	..\COMMON\easyax5043.c:909: if (axradio_framing_destaddrpos != 0xff)
   1533 90 4F 21           6617 	mov	dptr,#_axradio_framing_destaddrpos
   1536 E4                 6618 	clr	a
   1537 93                 6619 	movc	a,@a+dptr
   1538 FC                 6620 	mov	r4,a
   1539 BC FF 02           6621 	cjne	r4,#0xFF,00116$
   153C 80 25              6622 	sjmp	00102$
   153E                    6623 00116$:
                    0D09   6624 	C$easyax5043.c$910$2$280 ==.
                           6625 ;	..\COMMON\easyax5043.c:910: pn = pn9_advance_bits(pn, axradio_framing_destaddrpos << 3);
   153E E4                 6626 	clr	a
   153F 03                 6627 	rr	a
   1540 54 F8              6628 	anl	a,#0xF8
   1542 CC                 6629 	xch	a,r4
   1543 C4                 6630 	swap	a
   1544 03                 6631 	rr	a
   1545 CC                 6632 	xch	a,r4
   1546 6C                 6633 	xrl	a,r4
   1547 CC                 6634 	xch	a,r4
   1548 54 F8              6635 	anl	a,#0xF8
   154A CC                 6636 	xch	a,r4
   154B 6C                 6637 	xrl	a,r4
   154C FB                 6638 	mov	r3,a
   154D C0 05              6639 	push	ar5
   154F C0 04              6640 	push	ar4
   1551 C0 03              6641 	push	ar3
   1553 90 01 FF           6642 	mov	dptr,#0x01FF
   1556 12 4C 55           6643 	lcall	_pn9_advance_bits
   1559 AE 82              6644 	mov	r6,dpl
   155B AF 83              6645 	mov	r7,dph
   155D 15 81              6646 	dec	sp
   155F 15 81              6647 	dec	sp
   1561 D0 05              6648 	pop	ar5
   1563                    6649 00102$:
                    0D2E   6650 	C$easyax5043.c$911$2$280 ==.
                           6651 ;	..\COMMON\easyax5043.c:911: AX5043_PKTADDR0 ^= pn ^ inv;
   1563 7C 00              6652 	mov	r4,#0x00
   1565 ED                 6653 	mov	a,r5
   1566 6E                 6654 	xrl	a,r6
   1567 FA                 6655 	mov	r2,a
   1568 EC                 6656 	mov	a,r4
   1569 6F                 6657 	xrl	a,r7
   156A FB                 6658 	mov	r3,a
   156B 90 42 07           6659 	mov	dptr,#_AX5043_PKTADDR0
   156E E0                 6660 	movx	a,@dptr
   156F 79 00              6661 	mov	r1,#0x00
   1571 62 02              6662 	xrl	ar2,a
   1573 E9                 6663 	mov	a,r1
   1574 62 03              6664 	xrl	ar3,a
   1576 90 42 07           6665 	mov	dptr,#_AX5043_PKTADDR0
   1579 EA                 6666 	mov	a,r2
   157A F0                 6667 	movx	@dptr,a
                    0D46   6668 	C$easyax5043.c$912$2$280 ==.
                           6669 ;	..\COMMON\easyax5043.c:912: pn = pn9_advance_byte(pn);
   157B 8E 82              6670 	mov	dpl,r6
   157D 8F 83              6671 	mov	dph,r7
   157F C0 05              6672 	push	ar5
   1581 C0 04              6673 	push	ar4
   1583 12 4C 7B           6674 	lcall	_pn9_advance_byte
   1586 AE 82              6675 	mov	r6,dpl
   1588 AF 83              6676 	mov	r7,dph
   158A D0 04              6677 	pop	ar4
   158C D0 05              6678 	pop	ar5
                    0D59   6679 	C$easyax5043.c$913$2$280 ==.
                           6680 ;	..\COMMON\easyax5043.c:913: AX5043_PKTADDR1 ^= pn ^ inv;
   158E ED                 6681 	mov	a,r5
   158F 6E                 6682 	xrl	a,r6
   1590 FA                 6683 	mov	r2,a
   1591 EC                 6684 	mov	a,r4
   1592 6F                 6685 	xrl	a,r7
   1593 FB                 6686 	mov	r3,a
   1594 90 42 06           6687 	mov	dptr,#_AX5043_PKTADDR1
   1597 E0                 6688 	movx	a,@dptr
   1598 79 00              6689 	mov	r1,#0x00
   159A 62 02              6690 	xrl	ar2,a
   159C E9                 6691 	mov	a,r1
   159D 62 03              6692 	xrl	ar3,a
   159F 90 42 06           6693 	mov	dptr,#_AX5043_PKTADDR1
   15A2 EA                 6694 	mov	a,r2
   15A3 F0                 6695 	movx	@dptr,a
                    0D6F   6696 	C$easyax5043.c$914$2$280 ==.
                           6697 ;	..\COMMON\easyax5043.c:914: pn = pn9_advance_byte(pn);
   15A4 8E 82              6698 	mov	dpl,r6
   15A6 8F 83              6699 	mov	dph,r7
   15A8 C0 05              6700 	push	ar5
   15AA C0 04              6701 	push	ar4
   15AC 12 4C 7B           6702 	lcall	_pn9_advance_byte
   15AF AE 82              6703 	mov	r6,dpl
   15B1 AF 83              6704 	mov	r7,dph
   15B3 D0 04              6705 	pop	ar4
   15B5 D0 05              6706 	pop	ar5
                    0D82   6707 	C$easyax5043.c$915$2$280 ==.
                           6708 ;	..\COMMON\easyax5043.c:915: AX5043_PKTADDR2 ^= pn ^ inv;
   15B7 ED                 6709 	mov	a,r5
   15B8 6E                 6710 	xrl	a,r6
   15B9 FA                 6711 	mov	r2,a
   15BA EC                 6712 	mov	a,r4
   15BB 6F                 6713 	xrl	a,r7
   15BC FB                 6714 	mov	r3,a
   15BD 90 42 05           6715 	mov	dptr,#_AX5043_PKTADDR2
   15C0 E0                 6716 	movx	a,@dptr
   15C1 79 00              6717 	mov	r1,#0x00
   15C3 62 02              6718 	xrl	ar2,a
   15C5 E9                 6719 	mov	a,r1
   15C6 62 03              6720 	xrl	ar3,a
   15C8 90 42 05           6721 	mov	dptr,#_AX5043_PKTADDR2
   15CB EA                 6722 	mov	a,r2
   15CC F0                 6723 	movx	@dptr,a
                    0D98   6724 	C$easyax5043.c$916$2$280 ==.
                           6725 ;	..\COMMON\easyax5043.c:916: pn = pn9_advance_byte(pn);
   15CD 8E 82              6726 	mov	dpl,r6
   15CF 8F 83              6727 	mov	dph,r7
   15D1 C0 05              6728 	push	ar5
   15D3 C0 04              6729 	push	ar4
   15D5 12 4C 7B           6730 	lcall	_pn9_advance_byte
   15D8 AE 82              6731 	mov	r6,dpl
   15DA AF 83              6732 	mov	r7,dph
   15DC D0 04              6733 	pop	ar4
   15DE D0 05              6734 	pop	ar5
                    0DAB   6735 	C$easyax5043.c$917$2$280 ==.
                           6736 ;	..\COMMON\easyax5043.c:917: AX5043_PKTADDR3 ^= pn ^ inv;
   15E0 ED                 6737 	mov	a,r5
   15E1 62 06              6738 	xrl	ar6,a
   15E3 EC                 6739 	mov	a,r4
   15E4 62 07              6740 	xrl	ar7,a
   15E6 90 42 04           6741 	mov	dptr,#_AX5043_PKTADDR3
   15E9 E0                 6742 	movx	a,@dptr
   15EA FD                 6743 	mov	r5,a
   15EB 7C 00              6744 	mov	r4,#0x00
   15ED 62 06              6745 	xrl	ar6,a
   15EF EC                 6746 	mov	a,r4
   15F0 62 07              6747 	xrl	ar7,a
   15F2 90 42 04           6748 	mov	dptr,#_AX5043_PKTADDR3
   15F5 EE                 6749 	mov	a,r6
   15F6 F0                 6750 	movx	@dptr,a
   15F7                    6751 00106$:
                    0DC2   6752 	C$easyax5043.c$919$1$279 ==.
                    0DC2   6753 	XFeasyax5043$axradio_setaddrregs$0$0 ==.
   15F7 22                 6754 	ret
                           6755 ;------------------------------------------------------------
                           6756 ;Allocation info for local variables in function 'ax5043_init_registers'
                           6757 ;------------------------------------------------------------
                    0DC3   6758 	Feasyax5043$ax5043_init_registers$0$0 ==.
                    0DC3   6759 	C$easyax5043.c$921$1$279 ==.
                           6760 ;	..\COMMON\easyax5043.c:921: static void ax5043_init_registers(void)
                           6761 ;	-----------------------------------------
                           6762 ;	 function ax5043_init_registers
                           6763 ;	-----------------------------------------
   15F8                    6764 _ax5043_init_registers:
                    0DC3   6765 	C$easyax5043.c$923$1$282 ==.
                           6766 ;	..\COMMON\easyax5043.c:923: ax5043_set_registers();
   15F8 12 01 38           6767 	lcall	_ax5043_set_registers
                    0DC6   6768 	C$easyax5043.c$928$1$282 ==.
                           6769 ;	..\COMMON\easyax5043.c:928: AX5043_PKTLENOFFSET += axradio_framing_swcrclen; // add len offs for software CRC16 (used for both, fixed and variable length packets
   15FB 90 4F 26           6770 	mov	dptr,#_axradio_framing_swcrclen
   15FE E4                 6771 	clr	a
   15FF 93                 6772 	movc	a,@a+dptr
   1600 FF                 6773 	mov	r7,a
   1601 90 42 02           6774 	mov	dptr,#_AX5043_PKTLENOFFSET
   1604 E0                 6775 	movx	a,@dptr
   1605 FE                 6776 	mov	r6,a
   1606 90 42 02           6777 	mov	dptr,#_AX5043_PKTLENOFFSET
   1609 EF                 6778 	mov	a,r7
   160A 2E                 6779 	add	a,r6
   160B F0                 6780 	movx	@dptr,a
                    0DD7   6781 	C$easyax5043.c$929$1$282 ==.
                           6782 ;	..\COMMON\easyax5043.c:929: AX5043_PINFUNCIRQ = 0x03; // use as IRQ pin
   160C 90 40 24           6783 	mov	dptr,#_AX5043_PINFUNCIRQ
   160F 74 03              6784 	mov	a,#0x03
   1611 F0                 6785 	movx	@dptr,a
                    0DDD   6786 	C$easyax5043.c$930$1$282 ==.
                           6787 ;	..\COMMON\easyax5043.c:930: AX5043_PKTSTOREFLAGS = 0x15; // store RF offset, RSSI and delimiter timing
   1612 90 42 32           6788 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1615 74 15              6789 	mov	a,#0x15
   1617 F0                 6790 	movx	@dptr,a
                    0DE3   6791 	C$easyax5043.c$931$1$282 ==.
                           6792 ;	..\COMMON\easyax5043.c:931: axradio_setaddrregs();
   1618 12 14 CD           6793 	lcall	_axradio_setaddrregs
                    0DE6   6794 	C$easyax5043.c$932$1$282 ==.
                    0DE6   6795 	XFeasyax5043$ax5043_init_registers$0$0 ==.
   161B 22                 6796 	ret
                           6797 ;------------------------------------------------------------
                           6798 ;Allocation info for local variables in function 'axradio_sync_addtime'
                           6799 ;------------------------------------------------------------
                           6800 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6801 ;------------------------------------------------------------
                    0DE7   6802 	Feasyax5043$axradio_sync_addtime$0$0 ==.
                    0DE7   6803 	C$easyax5043.c$938$1$282 ==.
                           6804 ;	..\COMMON\easyax5043.c:938: static __reentrantb void axradio_sync_addtime(uint32_t dt) __reentrant
                           6805 ;	-----------------------------------------
                           6806 ;	 function axradio_sync_addtime
                           6807 ;	-----------------------------------------
   161C                    6808 _axradio_sync_addtime:
   161C AC 82              6809 	mov	r4,dpl
   161E AD 83              6810 	mov	r5,dph
   1620 AE F0              6811 	mov	r6,b
   1622 FF                 6812 	mov	r7,a
                    0DEE   6813 	C$easyax5043.c$940$1$284 ==.
                           6814 ;	..\COMMON\easyax5043.c:940: axradio_sync_time += dt;
   1623 90 00 10           6815 	mov	dptr,#_axradio_sync_time
   1626 E0                 6816 	movx	a,@dptr
   1627 F8                 6817 	mov	r0,a
   1628 A3                 6818 	inc	dptr
   1629 E0                 6819 	movx	a,@dptr
   162A F9                 6820 	mov	r1,a
   162B A3                 6821 	inc	dptr
   162C E0                 6822 	movx	a,@dptr
   162D FA                 6823 	mov	r2,a
   162E A3                 6824 	inc	dptr
   162F E0                 6825 	movx	a,@dptr
   1630 FB                 6826 	mov	r3,a
   1631 90 00 10           6827 	mov	dptr,#_axradio_sync_time
   1634 EC                 6828 	mov	a,r4
   1635 28                 6829 	add	a,r0
   1636 F0                 6830 	movx	@dptr,a
   1637 ED                 6831 	mov	a,r5
   1638 39                 6832 	addc	a,r1
   1639 A3                 6833 	inc	dptr
   163A F0                 6834 	movx	@dptr,a
   163B EE                 6835 	mov	a,r6
   163C 3A                 6836 	addc	a,r2
   163D A3                 6837 	inc	dptr
   163E F0                 6838 	movx	@dptr,a
   163F EF                 6839 	mov	a,r7
   1640 3B                 6840 	addc	a,r3
   1641 A3                 6841 	inc	dptr
   1642 F0                 6842 	movx	@dptr,a
                    0E0E   6843 	C$easyax5043.c$941$1$284 ==.
                    0E0E   6844 	XFeasyax5043$axradio_sync_addtime$0$0 ==.
   1643 22                 6845 	ret
                           6846 ;------------------------------------------------------------
                           6847 ;Allocation info for local variables in function 'axradio_sync_subtime'
                           6848 ;------------------------------------------------------------
                           6849 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6850 ;------------------------------------------------------------
                    0E0F   6851 	Feasyax5043$axradio_sync_subtime$0$0 ==.
                    0E0F   6852 	C$easyax5043.c$943$1$284 ==.
                           6853 ;	..\COMMON\easyax5043.c:943: static __reentrantb void axradio_sync_subtime(uint32_t dt) __reentrant
                           6854 ;	-----------------------------------------
                           6855 ;	 function axradio_sync_subtime
                           6856 ;	-----------------------------------------
   1644                    6857 _axradio_sync_subtime:
   1644 AC 82              6858 	mov	r4,dpl
   1646 AD 83              6859 	mov	r5,dph
   1648 AE F0              6860 	mov	r6,b
   164A FF                 6861 	mov	r7,a
                    0E16   6862 	C$easyax5043.c$945$1$286 ==.
                           6863 ;	..\COMMON\easyax5043.c:945: axradio_sync_time -= dt;
   164B 90 00 10           6864 	mov	dptr,#_axradio_sync_time
   164E E0                 6865 	movx	a,@dptr
   164F F8                 6866 	mov	r0,a
   1650 A3                 6867 	inc	dptr
   1651 E0                 6868 	movx	a,@dptr
   1652 F9                 6869 	mov	r1,a
   1653 A3                 6870 	inc	dptr
   1654 E0                 6871 	movx	a,@dptr
   1655 FA                 6872 	mov	r2,a
   1656 A3                 6873 	inc	dptr
   1657 E0                 6874 	movx	a,@dptr
   1658 FB                 6875 	mov	r3,a
   1659 90 00 10           6876 	mov	dptr,#_axradio_sync_time
   165C E8                 6877 	mov	a,r0
   165D C3                 6878 	clr	c
   165E 9C                 6879 	subb	a,r4
   165F F0                 6880 	movx	@dptr,a
   1660 E9                 6881 	mov	a,r1
   1661 9D                 6882 	subb	a,r5
   1662 A3                 6883 	inc	dptr
   1663 F0                 6884 	movx	@dptr,a
   1664 EA                 6885 	mov	a,r2
   1665 9E                 6886 	subb	a,r6
   1666 A3                 6887 	inc	dptr
   1667 F0                 6888 	movx	@dptr,a
   1668 EB                 6889 	mov	a,r3
   1669 9F                 6890 	subb	a,r7
   166A A3                 6891 	inc	dptr
   166B F0                 6892 	movx	@dptr,a
                    0E37   6893 	C$easyax5043.c$946$1$286 ==.
                    0E37   6894 	XFeasyax5043$axradio_sync_subtime$0$0 ==.
   166C 22                 6895 	ret
                           6896 ;------------------------------------------------------------
                           6897 ;Allocation info for local variables in function 'axradio_sync_settimeradv'
                           6898 ;------------------------------------------------------------
                           6899 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6900 ;------------------------------------------------------------
                    0E38   6901 	Feasyax5043$axradio_sync_settimeradv$0$0 ==.
                    0E38   6902 	C$easyax5043.c$948$1$286 ==.
                           6903 ;	..\COMMON\easyax5043.c:948: static __reentrantb void axradio_sync_settimeradv(uint32_t dt) __reentrant
                           6904 ;	-----------------------------------------
                           6905 ;	 function axradio_sync_settimeradv
                           6906 ;	-----------------------------------------
   166D                    6907 _axradio_sync_settimeradv:
   166D AC 82              6908 	mov	r4,dpl
   166F AD 83              6909 	mov	r5,dph
   1671 AE F0              6910 	mov	r6,b
   1673 FF                 6911 	mov	r7,a
                    0E3F   6912 	C$easyax5043.c$950$1$288 ==.
                           6913 ;	..\COMMON\easyax5043.c:950: axradio_timer.time = axradio_sync_time;
   1674 90 00 10           6914 	mov	dptr,#_axradio_sync_time
   1677 E0                 6915 	movx	a,@dptr
   1678 F8                 6916 	mov	r0,a
   1679 A3                 6917 	inc	dptr
   167A E0                 6918 	movx	a,@dptr
   167B F9                 6919 	mov	r1,a
   167C A3                 6920 	inc	dptr
   167D E0                 6921 	movx	a,@dptr
   167E FA                 6922 	mov	r2,a
   167F A3                 6923 	inc	dptr
   1680 E0                 6924 	movx	a,@dptr
   1681 FB                 6925 	mov	r3,a
   1682 90 02 8D           6926 	mov	dptr,#(_axradio_timer + 0x0004)
   1685 E8                 6927 	mov	a,r0
   1686 F0                 6928 	movx	@dptr,a
   1687 A3                 6929 	inc	dptr
   1688 E9                 6930 	mov	a,r1
   1689 F0                 6931 	movx	@dptr,a
   168A A3                 6932 	inc	dptr
   168B EA                 6933 	mov	a,r2
   168C F0                 6934 	movx	@dptr,a
   168D A3                 6935 	inc	dptr
   168E EB                 6936 	mov	a,r3
   168F F0                 6937 	movx	@dptr,a
                    0E5B   6938 	C$easyax5043.c$951$1$288 ==.
                           6939 ;	..\COMMON\easyax5043.c:951: axradio_timer.time -= dt;
   1690 E8                 6940 	mov	a,r0
   1691 C3                 6941 	clr	c
   1692 9C                 6942 	subb	a,r4
   1693 FC                 6943 	mov	r4,a
   1694 E9                 6944 	mov	a,r1
   1695 9D                 6945 	subb	a,r5
   1696 FD                 6946 	mov	r5,a
   1697 EA                 6947 	mov	a,r2
   1698 9E                 6948 	subb	a,r6
   1699 FE                 6949 	mov	r6,a
   169A EB                 6950 	mov	a,r3
   169B 9F                 6951 	subb	a,r7
   169C FF                 6952 	mov	r7,a
   169D 90 02 8D           6953 	mov	dptr,#(_axradio_timer + 0x0004)
   16A0 EC                 6954 	mov	a,r4
   16A1 F0                 6955 	movx	@dptr,a
   16A2 A3                 6956 	inc	dptr
   16A3 ED                 6957 	mov	a,r5
   16A4 F0                 6958 	movx	@dptr,a
   16A5 A3                 6959 	inc	dptr
   16A6 EE                 6960 	mov	a,r6
   16A7 F0                 6961 	movx	@dptr,a
   16A8 A3                 6962 	inc	dptr
   16A9 EF                 6963 	mov	a,r7
   16AA F0                 6964 	movx	@dptr,a
                    0E76   6965 	C$easyax5043.c$952$1$288 ==.
                    0E76   6966 	XFeasyax5043$axradio_sync_settimeradv$0$0 ==.
   16AB 22                 6967 	ret
                           6968 ;------------------------------------------------------------
                           6969 ;Allocation info for local variables in function 'axradio_sync_adjustperiodcorr'
                           6970 ;------------------------------------------------------------
                           6971 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6972 ;------------------------------------------------------------
                    0E77   6973 	Feasyax5043$axradio_sync_adjustperiodcorr$0$0 ==.
                    0E77   6974 	C$easyax5043.c$954$1$288 ==.
                           6975 ;	..\COMMON\easyax5043.c:954: static void axradio_sync_adjustperiodcorr(void)
                           6976 ;	-----------------------------------------
                           6977 ;	 function axradio_sync_adjustperiodcorr
                           6978 ;	-----------------------------------------
   16AC                    6979 _axradio_sync_adjustperiodcorr:
                    0E77   6980 	C$easyax5043.c$956$1$290 ==.
                           6981 ;	..\COMMON\easyax5043.c:956: int32_t __autodata dt = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t) - axradio_sync_time;
   16AC 90 02 38           6982 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   16AF E0                 6983 	movx	a,@dptr
   16B0 FC                 6984 	mov	r4,a
   16B1 A3                 6985 	inc	dptr
   16B2 E0                 6986 	movx	a,@dptr
   16B3 FD                 6987 	mov	r5,a
   16B4 A3                 6988 	inc	dptr
   16B5 E0                 6989 	movx	a,@dptr
   16B6 FE                 6990 	mov	r6,a
   16B7 A3                 6991 	inc	dptr
   16B8 E0                 6992 	movx	a,@dptr
   16B9 8C 82              6993 	mov	dpl,r4
   16BB 8D 83              6994 	mov	dph,r5
   16BD 8E F0              6995 	mov	b,r6
   16BF 12 08 77           6996 	lcall	_axradio_conv_time_totimer0
   16C2 AC 82              6997 	mov	r4,dpl
   16C4 AD 83              6998 	mov	r5,dph
   16C6 AE F0              6999 	mov	r6,b
   16C8 FF                 7000 	mov	r7,a
   16C9 90 00 10           7001 	mov	dptr,#_axradio_sync_time
   16CC E0                 7002 	movx	a,@dptr
   16CD F8                 7003 	mov	r0,a
   16CE A3                 7004 	inc	dptr
   16CF E0                 7005 	movx	a,@dptr
   16D0 F9                 7006 	mov	r1,a
   16D1 A3                 7007 	inc	dptr
   16D2 E0                 7008 	movx	a,@dptr
   16D3 FA                 7009 	mov	r2,a
   16D4 A3                 7010 	inc	dptr
   16D5 E0                 7011 	movx	a,@dptr
   16D6 FB                 7012 	mov	r3,a
   16D7 EC                 7013 	mov	a,r4
   16D8 C3                 7014 	clr	c
   16D9 98                 7015 	subb	a,r0
   16DA FC                 7016 	mov	r4,a
   16DB ED                 7017 	mov	a,r5
   16DC 99                 7018 	subb	a,r1
   16DD FD                 7019 	mov	r5,a
   16DE EE                 7020 	mov	a,r6
   16DF 9A                 7021 	subb	a,r2
   16E0 FE                 7022 	mov	r6,a
   16E1 EF                 7023 	mov	a,r7
   16E2 9B                 7024 	subb	a,r3
   16E3 FF                 7025 	mov	r7,a
                    0EAF   7026 	C$easyax5043.c$957$1$290 ==.
                           7027 ;	..\COMMON\easyax5043.c:957: axradio_cb_receive.st.rx.phy.timeoffset = dt;
   16E4 8C 02              7028 	mov	ar2,r4
   16E6 8D 03              7029 	mov	ar3,r5
   16E8 90 02 42           7030 	mov	dptr,#(_axradio_cb_receive + 0x0010)
   16EB EA                 7031 	mov	a,r2
   16EC F0                 7032 	movx	@dptr,a
   16ED A3                 7033 	inc	dptr
   16EE EB                 7034 	mov	a,r3
   16EF F0                 7035 	movx	@dptr,a
                    0EBB   7036 	C$easyax5043.c$958$1$290 ==.
                           7037 ;	..\COMMON\easyax5043.c:958: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod)) {
   16F0 90 00 14           7038 	mov	dptr,#_axradio_sync_periodcorr
   16F3 E0                 7039 	movx	a,@dptr
   16F4 FA                 7040 	mov	r2,a
   16F5 A3                 7041 	inc	dptr
   16F6 E0                 7042 	movx	a,@dptr
   16F7 FB                 7043 	mov	r3,a
   16F8 90 4F 4F           7044 	mov	dptr,#_axradio_sync_slave_maxperiod
   16FB E4                 7045 	clr	a
   16FC 93                 7046 	movc	a,@a+dptr
   16FD C0 E0              7047 	push	acc
   16FF 74 01              7048 	mov	a,#0x01
   1701 93                 7049 	movc	a,@a+dptr
   1702 C0 E0              7050 	push	acc
   1704 8A 82              7051 	mov	dpl,r2
   1706 8B 83              7052 	mov	dph,r3
   1708 12 47 80           7053 	lcall	_checksignedlimit16
   170B AB 82              7054 	mov	r3,dpl
   170D 15 81              7055 	dec	sp
   170F 15 81              7056 	dec	sp
   1711 EB                 7057 	mov	a,r3
   1712 70 4B              7058 	jnz	00102$
                    0EDF   7059 	C$easyax5043.c$959$2$291 ==.
                           7060 ;	..\COMMON\easyax5043.c:959: axradio_sync_addtime(dt);
   1714 8C 82              7061 	mov	dpl,r4
   1716 8D 83              7062 	mov	dph,r5
   1718 8E F0              7063 	mov	b,r6
   171A EF                 7064 	mov	a,r7
   171B C0 07              7065 	push	ar7
   171D C0 06              7066 	push	ar6
   171F C0 05              7067 	push	ar5
   1721 C0 04              7068 	push	ar4
   1723 12 16 1C           7069 	lcall	_axradio_sync_addtime
   1726 D0 04              7070 	pop	ar4
   1728 D0 05              7071 	pop	ar5
   172A D0 06              7072 	pop	ar6
   172C D0 07              7073 	pop	ar7
                    0EF9   7074 	C$easyax5043.c$960$2$291 ==.
                           7075 ;	..\COMMON\easyax5043.c:960: dt <<= SYNC_K1;
   172E EF                 7076 	mov	a,r7
   172F C4                 7077 	swap	a
   1730 23                 7078 	rl	a
   1731 54 E0              7079 	anl	a,#0xE0
   1733 CE                 7080 	xch	a,r6
   1734 C4                 7081 	swap	a
   1735 23                 7082 	rl	a
   1736 CE                 7083 	xch	a,r6
   1737 6E                 7084 	xrl	a,r6
   1738 CE                 7085 	xch	a,r6
   1739 54 E0              7086 	anl	a,#0xE0
   173B CE                 7087 	xch	a,r6
   173C 6E                 7088 	xrl	a,r6
   173D FF                 7089 	mov	r7,a
   173E ED                 7090 	mov	a,r5
   173F C4                 7091 	swap	a
   1740 23                 7092 	rl	a
   1741 54 1F              7093 	anl	a,#0x1F
   1743 4E                 7094 	orl	a,r6
   1744 FE                 7095 	mov	r6,a
   1745 ED                 7096 	mov	a,r5
   1746 C4                 7097 	swap	a
   1747 23                 7098 	rl	a
   1748 54 E0              7099 	anl	a,#0xE0
   174A CC                 7100 	xch	a,r4
   174B C4                 7101 	swap	a
   174C 23                 7102 	rl	a
   174D CC                 7103 	xch	a,r4
   174E 6C                 7104 	xrl	a,r4
   174F CC                 7105 	xch	a,r4
   1750 54 E0              7106 	anl	a,#0xE0
   1752 CC                 7107 	xch	a,r4
   1753 6C                 7108 	xrl	a,r4
   1754 FD                 7109 	mov	r5,a
                    0F20   7110 	C$easyax5043.c$961$2$291 ==.
                           7111 ;	..\COMMON\easyax5043.c:961: axradio_sync_periodcorr = dt;
   1755 90 00 14           7112 	mov	dptr,#_axradio_sync_periodcorr
   1758 EC                 7113 	mov	a,r4
   1759 F0                 7114 	movx	@dptr,a
   175A A3                 7115 	inc	dptr
   175B ED                 7116 	mov	a,r5
   175C F0                 7117 	movx	@dptr,a
   175D 80 48              7118 	sjmp	00103$
   175F                    7119 00102$:
                    0F2A   7120 	C$easyax5043.c$963$2$292 ==.
                           7121 ;	..\COMMON\easyax5043.c:963: axradio_sync_periodcorr += dt;
   175F 90 00 14           7122 	mov	dptr,#_axradio_sync_periodcorr
   1762 E0                 7123 	movx	a,@dptr
   1763 FA                 7124 	mov	r2,a
   1764 A3                 7125 	inc	dptr
   1765 E0                 7126 	movx	a,@dptr
   1766 FB                 7127 	mov	r3,a
   1767 8A 00              7128 	mov	ar0,r2
   1769 EB                 7129 	mov	a,r3
   176A F9                 7130 	mov	r1,a
   176B 33                 7131 	rlc	a
   176C 95 E0              7132 	subb	a,acc
   176E FA                 7133 	mov	r2,a
   176F FB                 7134 	mov	r3,a
   1770 EC                 7135 	mov	a,r4
   1771 28                 7136 	add	a,r0
   1772 F8                 7137 	mov	r0,a
   1773 ED                 7138 	mov	a,r5
   1774 39                 7139 	addc	a,r1
   1775 F9                 7140 	mov	r1,a
   1776 EE                 7141 	mov	a,r6
   1777 3A                 7142 	addc	a,r2
   1778 EF                 7143 	mov	a,r7
   1779 3B                 7144 	addc	a,r3
   177A 90 00 14           7145 	mov	dptr,#_axradio_sync_periodcorr
   177D E8                 7146 	mov	a,r0
   177E F0                 7147 	movx	@dptr,a
   177F A3                 7148 	inc	dptr
   1780 E9                 7149 	mov	a,r1
   1781 F0                 7150 	movx	@dptr,a
                    0F4D   7151 	C$easyax5043.c$964$2$292 ==.
                           7152 ;	..\COMMON\easyax5043.c:964: dt >>= SYNC_K0;
   1782 EF                 7153 	mov	a,r7
   1783 A2 E7              7154 	mov	c,acc.7
   1785 13                 7155 	rrc	a
   1786 FF                 7156 	mov	r7,a
   1787 EE                 7157 	mov	a,r6
   1788 13                 7158 	rrc	a
   1789 FE                 7159 	mov	r6,a
   178A ED                 7160 	mov	a,r5
   178B 13                 7161 	rrc	a
   178C FD                 7162 	mov	r5,a
   178D EC                 7163 	mov	a,r4
   178E 13                 7164 	rrc	a
   178F FC                 7165 	mov	r4,a
   1790 EF                 7166 	mov	a,r7
   1791 A2 E7              7167 	mov	c,acc.7
   1793 13                 7168 	rrc	a
   1794 FF                 7169 	mov	r7,a
   1795 EE                 7170 	mov	a,r6
   1796 13                 7171 	rrc	a
   1797 FE                 7172 	mov	r6,a
   1798 ED                 7173 	mov	a,r5
   1799 13                 7174 	rrc	a
   179A FD                 7175 	mov	r5,a
   179B EC                 7176 	mov	a,r4
   179C 13                 7177 	rrc	a
                    0F68   7178 	C$easyax5043.c$965$2$292 ==.
                           7179 ;	..\COMMON\easyax5043.c:965: axradio_sync_addtime(dt);
   179D F5 82              7180 	mov	dpl,a
   179F 8D 83              7181 	mov	dph,r5
   17A1 8E F0              7182 	mov	b,r6
   17A3 EF                 7183 	mov	a,r7
   17A4 12 16 1C           7184 	lcall	_axradio_sync_addtime
   17A7                    7185 00103$:
                    0F72   7186 	C$easyax5043.c$967$1$290 ==.
                           7187 ;	..\COMMON\easyax5043.c:967: axradio_sync_periodcorr = signedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod);
   17A7 90 00 14           7188 	mov	dptr,#_axradio_sync_periodcorr
   17AA E0                 7189 	movx	a,@dptr
   17AB FE                 7190 	mov	r6,a
   17AC A3                 7191 	inc	dptr
   17AD E0                 7192 	movx	a,@dptr
   17AE FF                 7193 	mov	r7,a
   17AF 90 4F 4F           7194 	mov	dptr,#_axradio_sync_slave_maxperiod
   17B2 E4                 7195 	clr	a
   17B3 93                 7196 	movc	a,@a+dptr
   17B4 C0 E0              7197 	push	acc
   17B6 74 01              7198 	mov	a,#0x01
   17B8 93                 7199 	movc	a,@a+dptr
   17B9 C0 E0              7200 	push	acc
   17BB 8E 82              7201 	mov	dpl,r6
   17BD 8F 83              7202 	mov	dph,r7
   17BF 12 48 58           7203 	lcall	_signedlimit16
   17C2 AE 82              7204 	mov	r6,dpl
   17C4 AF 83              7205 	mov	r7,dph
   17C6 15 81              7206 	dec	sp
   17C8 15 81              7207 	dec	sp
   17CA 90 00 14           7208 	mov	dptr,#_axradio_sync_periodcorr
   17CD EE                 7209 	mov	a,r6
   17CE F0                 7210 	movx	@dptr,a
   17CF A3                 7211 	inc	dptr
   17D0 EF                 7212 	mov	a,r7
   17D1 F0                 7213 	movx	@dptr,a
                    0F9D   7214 	C$easyax5043.c$968$1$290 ==.
                    0F9D   7215 	XFeasyax5043$axradio_sync_adjustperiodcorr$0$0 ==.
   17D2 22                 7216 	ret
                           7217 ;------------------------------------------------------------
                           7218 ;Allocation info for local variables in function 'axradio_sync_slave_nextperiod'
                           7219 ;------------------------------------------------------------
                           7220 ;c                         Allocated to registers r6 r7 
                           7221 ;------------------------------------------------------------
                    0F9E   7222 	Feasyax5043$axradio_sync_slave_nextperiod$0$0 ==.
                    0F9E   7223 	C$easyax5043.c$970$1$290 ==.
                           7224 ;	..\COMMON\easyax5043.c:970: static void axradio_sync_slave_nextperiod()
                           7225 ;	-----------------------------------------
                           7226 ;	 function axradio_sync_slave_nextperiod
                           7227 ;	-----------------------------------------
   17D3                    7228 _axradio_sync_slave_nextperiod:
                    0F9E   7229 	C$easyax5043.c$972$1$293 ==.
                           7230 ;	..\COMMON\easyax5043.c:972: axradio_sync_addtime(axradio_sync_period);
   17D3 90 4F 3B           7231 	mov	dptr,#_axradio_sync_period
   17D6 E4                 7232 	clr	a
   17D7 93                 7233 	movc	a,@a+dptr
   17D8 FC                 7234 	mov	r4,a
   17D9 74 01              7235 	mov	a,#0x01
   17DB 93                 7236 	movc	a,@a+dptr
   17DC FD                 7237 	mov	r5,a
   17DD 74 02              7238 	mov	a,#0x02
   17DF 93                 7239 	movc	a,@a+dptr
   17E0 FE                 7240 	mov	r6,a
   17E1 74 03              7241 	mov	a,#0x03
   17E3 93                 7242 	movc	a,@a+dptr
   17E4 8C 82              7243 	mov	dpl,r4
   17E6 8D 83              7244 	mov	dph,r5
   17E8 8E F0              7245 	mov	b,r6
   17EA 12 16 1C           7246 	lcall	_axradio_sync_addtime
                    0FB8   7247 	C$easyax5043.c$973$1$293 ==.
                           7248 ;	..\COMMON\easyax5043.c:973: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod))
   17ED 90 00 14           7249 	mov	dptr,#_axradio_sync_periodcorr
   17F0 E0                 7250 	movx	a,@dptr
   17F1 FE                 7251 	mov	r6,a
   17F2 A3                 7252 	inc	dptr
   17F3 E0                 7253 	movx	a,@dptr
   17F4 FF                 7254 	mov	r7,a
   17F5 90 4F 4F           7255 	mov	dptr,#_axradio_sync_slave_maxperiod
   17F8 E4                 7256 	clr	a
   17F9 93                 7257 	movc	a,@a+dptr
   17FA C0 E0              7258 	push	acc
   17FC 74 01              7259 	mov	a,#0x01
   17FE 93                 7260 	movc	a,@a+dptr
   17FF C0 E0              7261 	push	acc
   1801 8E 82              7262 	mov	dpl,r6
   1803 8F 83              7263 	mov	dph,r7
   1805 12 47 80           7264 	lcall	_checksignedlimit16
   1808 AF 82              7265 	mov	r7,dpl
   180A 15 81              7266 	dec	sp
   180C 15 81              7267 	dec	sp
   180E EF                 7268 	mov	a,r7
   180F 70 02              7269 	jnz	00102$
                    0FDC   7270 	C$easyax5043.c$974$1$293 ==.
                           7271 ;	..\COMMON\easyax5043.c:974: return;
   1811 80 29              7272 	sjmp	00103$
   1813                    7273 00102$:
                    0FDE   7274 	C$easyax5043.c$976$2$293 ==.
                           7275 ;	..\COMMON\easyax5043.c:976: int16_t __autodata c = axradio_sync_periodcorr;
   1813 90 00 14           7276 	mov	dptr,#_axradio_sync_periodcorr
   1816 E0                 7277 	movx	a,@dptr
   1817 FE                 7278 	mov	r6,a
   1818 A3                 7279 	inc	dptr
   1819 E0                 7280 	movx	a,@dptr
                    0FE5   7281 	C$easyax5043.c$977$2$294 ==.
                           7282 ;	..\COMMON\easyax5043.c:977: axradio_sync_addtime(c >> SYNC_K1);
   181A FF                 7283 	mov	r7,a
   181B C4                 7284 	swap	a
   181C 03                 7285 	rr	a
   181D CE                 7286 	xch	a,r6
   181E C4                 7287 	swap	a
   181F 03                 7288 	rr	a
   1820 54 07              7289 	anl	a,#0x07
   1822 6E                 7290 	xrl	a,r6
   1823 CE                 7291 	xch	a,r6
   1824 54 07              7292 	anl	a,#0x07
   1826 CE                 7293 	xch	a,r6
   1827 6E                 7294 	xrl	a,r6
   1828 CE                 7295 	xch	a,r6
   1829 30 E2 02           7296 	jnb	acc.2,00108$
   182C 44 F8              7297 	orl	a,#0xF8
   182E                    7298 00108$:
   182E FF                 7299 	mov	r7,a
   182F 33                 7300 	rlc	a
   1830 95 E0              7301 	subb	a,acc
   1832 FD                 7302 	mov	r5,a
   1833 8E 82              7303 	mov	dpl,r6
   1835 8F 83              7304 	mov	dph,r7
   1837 8D F0              7305 	mov	b,r5
   1839 12 16 1C           7306 	lcall	_axradio_sync_addtime
   183C                    7307 00103$:
                    1007   7308 	C$easyax5043.c$979$2$294 ==.
                    1007   7309 	XFeasyax5043$axradio_sync_slave_nextperiod$0$0 ==.
   183C 22                 7310 	ret
                           7311 ;------------------------------------------------------------
                           7312 ;Allocation info for local variables in function 'axradio_timer_callback'
                           7313 ;------------------------------------------------------------
                           7314 ;desc                      Allocated to registers 
                           7315 ;r                         Allocated to registers r7 
                           7316 ;idx                       Allocated to registers r7 
                           7317 ;idx                       Allocated to registers r7 
                           7318 ;------------------------------------------------------------
                    1008   7319 	Feasyax5043$axradio_timer_callback$0$0 ==.
                    1008   7320 	C$easyax5043.c$983$2$294 ==.
                           7321 ;	..\COMMON\easyax5043.c:983: static void axradio_timer_callback(struct wtimer_desc __xdata *desc)
                           7322 ;	-----------------------------------------
                           7323 ;	 function axradio_timer_callback
                           7324 ;	-----------------------------------------
   183D                    7325 _axradio_timer_callback:
                    1008   7326 	C$easyax5043.c$986$1$296 ==.
                           7327 ;	..\COMMON\easyax5043.c:986: switch (axradio_mode) {
   183D AF 0A              7328 	mov	r7,_axradio_mode
   183F BF 10 00           7329 	cjne	r7,#0x10,00231$
   1842                    7330 00231$:
   1842 50 03              7331 	jnc	00232$
   1844 02 20 6A           7332 	ljmp	00173$
   1847                    7333 00232$:
   1847 EF                 7334 	mov	a,r7
   1848 24 DC              7335 	add	a,#0xff - 0x23
   184A 50 03              7336 	jnc	00233$
   184C 02 20 6A           7337 	ljmp	00173$
   184F                    7338 00233$:
   184F EF                 7339 	mov	a,r7
   1850 24 F0              7340 	add	a,#0xF0
   1852 FF                 7341 	mov	r7,a
   1853 24 09              7342 	add	a,#(00234$-3-.)
   1855 83                 7343 	movc	a,@a+pc
   1856 C0 E0              7344 	push	acc
   1858 EF                 7345 	mov	a,r7
   1859 24 17              7346 	add	a,#(00235$-3-.)
   185B 83                 7347 	movc	a,@a+pc
   185C C0 E0              7348 	push	acc
   185E 22                 7349 	ret
   185F                    7350 00234$:
   185F 28                 7351 	.db	00110$
   1860 28                 7352 	.db	00111$
   1861 C1                 7353 	.db	00121$
   1862 C1                 7354 	.db	00122$
   1863 6A                 7355 	.db	00171$
   1864 6A                 7356 	.db	00171$
   1865 6A                 7357 	.db	00171$
   1866 6A                 7358 	.db	00171$
   1867 87                 7359 	.db	00104$
   1868 87                 7360 	.db	00105$
   1869 28                 7361 	.db	00127$
   186A 28                 7362 	.db	00128$
   186B 87                 7363 	.db	00101$
   186C 87                 7364 	.db	00102$
   186D 87                 7365 	.db	00103$
   186E 6A                 7366 	.db	00171$
   186F C1                 7367 	.db	00137$
   1870 C1                 7368 	.db	00138$
   1871 68                 7369 	.db	00150$
   1872 68                 7370 	.db	00151$
   1873                    7371 00235$:
   1873 19                 7372 	.db	00110$>>8
   1874 19                 7373 	.db	00111$>>8
   1875 19                 7374 	.db	00121$>>8
   1876 19                 7375 	.db	00122$>>8
   1877 20                 7376 	.db	00171$>>8
   1878 20                 7377 	.db	00171$>>8
   1879 20                 7378 	.db	00171$>>8
   187A 20                 7379 	.db	00171$>>8
   187B 18                 7380 	.db	00104$>>8
   187C 18                 7381 	.db	00105$>>8
   187D 1A                 7382 	.db	00127$>>8
   187E 1A                 7383 	.db	00128$>>8
   187F 18                 7384 	.db	00101$>>8
   1880 18                 7385 	.db	00102$>>8
   1881 18                 7386 	.db	00103$>>8
   1882 20                 7387 	.db	00171$>>8
   1883 1A                 7388 	.db	00137$>>8
   1884 1A                 7389 	.db	00138$>>8
   1885 1C                 7390 	.db	00150$>>8
   1886 1C                 7391 	.db	00151$>>8
                    1052   7392 	C$easyax5043.c$987$2$297 ==.
                           7393 ;	..\COMMON\easyax5043.c:987: case AXRADIO_MODE_STREAM_RECEIVE:
   1887                    7394 00101$:
                    1052   7395 	C$easyax5043.c$988$2$297 ==.
                           7396 ;	..\COMMON\easyax5043.c:988: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   1887                    7397 00102$:
                    1052   7398 	C$easyax5043.c$989$2$297 ==.
                           7399 ;	..\COMMON\easyax5043.c:989: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   1887                    7400 00103$:
                    1052   7401 	C$easyax5043.c$990$2$297 ==.
                           7402 ;	..\COMMON\easyax5043.c:990: case AXRADIO_MODE_ASYNC_RECEIVE:
   1887                    7403 00104$:
                    1052   7404 	C$easyax5043.c$991$2$297 ==.
                           7405 ;	..\COMMON\easyax5043.c:991: case AXRADIO_MODE_WOR_RECEIVE:
   1887                    7406 00105$:
                    1052   7407 	C$easyax5043.c$992$2$297 ==.
                           7408 ;	..\COMMON\easyax5043.c:992: if (axradio_syncstate == syncstate_asynctx)
   1887 90 00 04           7409 	mov	dptr,#_axradio_syncstate
   188A E0                 7410 	movx	a,@dptr
   188B FF                 7411 	mov	r7,a
   188C BF 02 03           7412 	cjne	r7,#0x02,00236$
   188F 02 19 28           7413 	ljmp	00112$
   1892                    7414 00236$:
                    105D   7415 	C$easyax5043.c$994$2$297 ==.
                           7416 ;	..\COMMON\easyax5043.c:994: wtimer_remove(&axradio_timer);
   1892 90 02 89           7417 	mov	dptr,#_axradio_timer
   1895 12 49 5A           7418 	lcall	_wtimer_remove
                    1063   7419 	C$easyax5043.c$995$2$297 ==.
                           7420 ;	..\COMMON\easyax5043.c:995: rearmcstimer:
   1898                    7421 00108$:
                    1063   7422 	C$easyax5043.c$996$2$297 ==.
                           7423 ;	..\COMMON\easyax5043.c:996: axradio_timer.time = axradio_phy_cs_period;
   1898 90 4F 0C           7424 	mov	dptr,#_axradio_phy_cs_period
   189B E4                 7425 	clr	a
   189C 93                 7426 	movc	a,@a+dptr
   189D FE                 7427 	mov	r6,a
   189E 74 01              7428 	mov	a,#0x01
   18A0 93                 7429 	movc	a,@a+dptr
   18A1 FF                 7430 	mov	r7,a
   18A2 7D 00              7431 	mov	r5,#0x00
   18A4 7C 00              7432 	mov	r4,#0x00
   18A6 90 02 8D           7433 	mov	dptr,#(_axradio_timer + 0x0004)
   18A9 EE                 7434 	mov	a,r6
   18AA F0                 7435 	movx	@dptr,a
   18AB A3                 7436 	inc	dptr
   18AC EF                 7437 	mov	a,r7
   18AD F0                 7438 	movx	@dptr,a
   18AE A3                 7439 	inc	dptr
   18AF ED                 7440 	mov	a,r5
   18B0 F0                 7441 	movx	@dptr,a
   18B1 A3                 7442 	inc	dptr
   18B2 EC                 7443 	mov	a,r4
   18B3 F0                 7444 	movx	@dptr,a
                    107F   7445 	C$easyax5043.c$997$2$297 ==.
                           7446 ;	..\COMMON\easyax5043.c:997: wtimer0_addrelative(&axradio_timer);
   18B4 90 02 89           7447 	mov	dptr,#_axradio_timer
   18B7 12 3F D9           7448 	lcall	_wtimer0_addrelative
                    1085   7449 	C$easyax5043.c$998$2$297 ==.
                           7450 ;	..\COMMON\easyax5043.c:998: chanstatecb:
   18BA                    7451 00109$:
                    1085   7452 	C$easyax5043.c$999$2$297 ==.
                           7453 ;	..\COMMON\easyax5043.c:999: update_timeanchor();
   18BA 12 08 35           7454 	lcall	_update_timeanchor
                    1088   7455 	C$easyax5043.c$1000$2$297 ==.
                           7456 ;	..\COMMON\easyax5043.c:1000: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   18BD 90 02 5E           7457 	mov	dptr,#_axradio_cb_channelstate
   18C0 12 4B 64           7458 	lcall	_wtimer_remove_callback
                    108E   7459 	C$easyax5043.c$1001$2$297 ==.
                           7460 ;	..\COMMON\easyax5043.c:1001: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   18C3 90 02 63           7461 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   18C6 E4                 7462 	clr	a
   18C7 F0                 7463 	movx	@dptr,a
                    1093   7464 	C$easyax5043.c$1003$3$297 ==.
                           7465 ;	..\COMMON\easyax5043.c:1003: int8_t __autodata r = AX5043_RSSI;
   18C8 90 40 40           7466 	mov	dptr,#_AX5043_RSSI
   18CB E0                 7467 	movx	a,@dptr
                    1097   7468 	C$easyax5043.c$1004$3$298 ==.
                           7469 ;	..\COMMON\easyax5043.c:1004: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   18CC FF                 7470 	mov	r7,a
   18CD FD                 7471 	mov	r5,a
   18CE 33                 7472 	rlc	a
   18CF 95 E0              7473 	subb	a,acc
   18D1 FE                 7474 	mov	r6,a
   18D2 90 4F 09           7475 	mov	dptr,#_axradio_phy_rssioffset
   18D5 E4                 7476 	clr	a
   18D6 93                 7477 	movc	a,@a+dptr
   18D7 FC                 7478 	mov	r4,a
   18D8 33                 7479 	rlc	a
   18D9 95 E0              7480 	subb	a,acc
   18DB FB                 7481 	mov	r3,a
   18DC ED                 7482 	mov	a,r5
   18DD C3                 7483 	clr	c
   18DE 9C                 7484 	subb	a,r4
   18DF FD                 7485 	mov	r5,a
   18E0 EE                 7486 	mov	a,r6
   18E1 9B                 7487 	subb	a,r3
   18E2 FE                 7488 	mov	r6,a
   18E3 90 02 68           7489 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   18E6 ED                 7490 	mov	a,r5
   18E7 F0                 7491 	movx	@dptr,a
   18E8 A3                 7492 	inc	dptr
   18E9 EE                 7493 	mov	a,r6
   18EA F0                 7494 	movx	@dptr,a
                    10B6   7495 	C$easyax5043.c$1005$3$298 ==.
                           7496 ;	..\COMMON\easyax5043.c:1005: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   18EB 90 4F 0B           7497 	mov	dptr,#_axradio_phy_channelbusy
   18EE E4                 7498 	clr	a
   18EF 93                 7499 	movc	a,@a+dptr
   18F0 FE                 7500 	mov	r6,a
   18F1 C3                 7501 	clr	c
   18F2 EF                 7502 	mov	a,r7
   18F3 64 80              7503 	xrl	a,#0x80
   18F5 8E F0              7504 	mov	b,r6
   18F7 63 F0 80           7505 	xrl	b,#0x80
   18FA 95 F0              7506 	subb	a,b
   18FC B3                 7507 	cpl	c
   18FD E4                 7508 	clr	a
   18FE 33                 7509 	rlc	a
   18FF 90 02 6A           7510 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   1902 F0                 7511 	movx	@dptr,a
                    10CE   7512 	C$easyax5043.c$1007$2$297 ==.
                           7513 ;	..\COMMON\easyax5043.c:1007: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   1903 90 00 1A           7514 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1906 E0                 7515 	movx	a,@dptr
   1907 FC                 7516 	mov	r4,a
   1908 A3                 7517 	inc	dptr
   1909 E0                 7518 	movx	a,@dptr
   190A FD                 7519 	mov	r5,a
   190B A3                 7520 	inc	dptr
   190C E0                 7521 	movx	a,@dptr
   190D FE                 7522 	mov	r6,a
   190E A3                 7523 	inc	dptr
   190F E0                 7524 	movx	a,@dptr
   1910 FF                 7525 	mov	r7,a
   1911 90 02 64           7526 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   1914 EC                 7527 	mov	a,r4
   1915 F0                 7528 	movx	@dptr,a
   1916 A3                 7529 	inc	dptr
   1917 ED                 7530 	mov	a,r5
   1918 F0                 7531 	movx	@dptr,a
   1919 A3                 7532 	inc	dptr
   191A EE                 7533 	mov	a,r6
   191B F0                 7534 	movx	@dptr,a
   191C A3                 7535 	inc	dptr
   191D EF                 7536 	mov	a,r7
   191E F0                 7537 	movx	@dptr,a
                    10EA   7538 	C$easyax5043.c$1008$2$297 ==.
                           7539 ;	..\COMMON\easyax5043.c:1008: wtimer_add_callback(&axradio_cb_channelstate.cb);
   191F 90 02 5E           7540 	mov	dptr,#_axradio_cb_channelstate
   1922 12 3F BF           7541 	lcall	_wtimer_add_callback
                    10F0   7542 	C$easyax5043.c$1009$2$297 ==.
                           7543 ;	..\COMMON\easyax5043.c:1009: break;
   1925 02 20 6A           7544 	ljmp	00173$
                    10F3   7545 	C$easyax5043.c$1011$2$297 ==.
                           7546 ;	..\COMMON\easyax5043.c:1011: case AXRADIO_MODE_ASYNC_TRANSMIT:
   1928                    7547 00110$:
                    10F3   7548 	C$easyax5043.c$1012$2$297 ==.
                           7549 ;	..\COMMON\easyax5043.c:1012: case AXRADIO_MODE_WOR_TRANSMIT:
   1928                    7550 00111$:
                    10F3   7551 	C$easyax5043.c$1013$2$297 ==.
                           7552 ;	..\COMMON\easyax5043.c:1013: transmitcs:
   1928                    7553 00112$:
                    10F3   7554 	C$easyax5043.c$1014$2$297 ==.
                           7555 ;	..\COMMON\easyax5043.c:1014: if (axradio_ack_count)
   1928 90 00 0E           7556 	mov	dptr,#_axradio_ack_count
   192B E0                 7557 	movx	a,@dptr
   192C FF                 7558 	mov	r7,a
   192D 60 06              7559 	jz	00114$
                    10FA   7560 	C$easyax5043.c$1015$2$297 ==.
                           7561 ;	..\COMMON\easyax5043.c:1015: --axradio_ack_count;
   192F EF                 7562 	mov	a,r7
   1930 14                 7563 	dec	a
   1931 90 00 0E           7564 	mov	dptr,#_axradio_ack_count
   1934 F0                 7565 	movx	@dptr,a
   1935                    7566 00114$:
                    1100   7567 	C$easyax5043.c$1016$2$297 ==.
                           7568 ;	..\COMMON\easyax5043.c:1016: wtimer_remove(&axradio_timer);
   1935 90 02 89           7569 	mov	dptr,#_axradio_timer
   1938 12 49 5A           7570 	lcall	_wtimer_remove
                    1106   7571 	C$easyax5043.c$1017$2$297 ==.
                           7572 ;	..\COMMON\easyax5043.c:1017: if ((int8_t)AX5043_RSSI < axradio_phy_channelbusy ||
   193B 90 40 40           7573 	mov	dptr,#_AX5043_RSSI
   193E E0                 7574 	movx	a,@dptr
   193F FF                 7575 	mov	r7,a
   1940 90 4F 0B           7576 	mov	dptr,#_axradio_phy_channelbusy
   1943 E4                 7577 	clr	a
   1944 93                 7578 	movc	a,@a+dptr
   1945 FE                 7579 	mov	r6,a
   1946 C3                 7580 	clr	c
   1947 EF                 7581 	mov	a,r7
   1948 64 80              7582 	xrl	a,#0x80
   194A 8E F0              7583 	mov	b,r6
   194C 63 F0 80           7584 	xrl	b,#0x80
   194F 95 F0              7585 	subb	a,b
   1951 40 0F              7586 	jc	00115$
                    111E   7587 	C$easyax5043.c$1018$2$297 ==.
                           7588 ;	..\COMMON\easyax5043.c:1018: (!axradio_ack_count && axradio_phy_lbt_forcetx)) {
   1953 90 00 0E           7589 	mov	dptr,#_axradio_ack_count
   1956 E0                 7590 	movx	a,@dptr
   1957 FF                 7591 	mov	r7,a
   1958 70 25              7592 	jnz	00116$
   195A 90 4F 10           7593 	mov	dptr,#_axradio_phy_lbt_forcetx
   195D E4                 7594 	clr	a
   195E 93                 7595 	movc	a,@a+dptr
   195F FE                 7596 	mov	r6,a
   1960 60 1D              7597 	jz	00116$
   1962                    7598 00115$:
                    112D   7599 	C$easyax5043.c$1019$3$299 ==.
                           7600 ;	..\COMMON\easyax5043.c:1019: axradio_syncstate = syncstate_off;
   1962 90 00 04           7601 	mov	dptr,#_axradio_syncstate
   1965 E4                 7602 	clr	a
   1966 F0                 7603 	movx	@dptr,a
                    1132   7604 	C$easyax5043.c$1020$3$299 ==.
                           7605 ;	..\COMMON\easyax5043.c:1020: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1967 90 4F 17           7606 	mov	dptr,#_axradio_phy_preamble_longlen
   196A E4                 7607 	clr	a
   196B 93                 7608 	movc	a,@a+dptr
   196C FD                 7609 	mov	r5,a
   196D 74 01              7610 	mov	a,#0x01
   196F 93                 7611 	movc	a,@a+dptr
   1970 FE                 7612 	mov	r6,a
   1971 90 00 07           7613 	mov	dptr,#_axradio_txbuffer_cnt
   1974 ED                 7614 	mov	a,r5
   1975 F0                 7615 	movx	@dptr,a
   1976 A3                 7616 	inc	dptr
   1977 EE                 7617 	mov	a,r6
   1978 F0                 7618 	movx	@dptr,a
                    1144   7619 	C$easyax5043.c$1021$3$299 ==.
                           7620 ;	..\COMMON\easyax5043.c:1021: ax5043_prepare_tx();
   1979 12 14 56           7621 	lcall	_ax5043_prepare_tx
                    1147   7622 	C$easyax5043.c$1022$3$299 ==.
                           7623 ;	..\COMMON\easyax5043.c:1022: goto chanstatecb;
   197C 02 18 BA           7624 	ljmp	00109$
   197F                    7625 00116$:
                    114A   7626 	C$easyax5043.c$1024$2$297 ==.
                           7627 ;	..\COMMON\easyax5043.c:1024: if (axradio_ack_count)
   197F EF                 7628 	mov	a,r7
   1980 60 03              7629 	jz	00242$
   1982 02 18 98           7630 	ljmp	00108$
   1985                    7631 00242$:
                    1150   7632 	C$easyax5043.c$1026$2$297 ==.
                           7633 ;	..\COMMON\easyax5043.c:1026: update_timeanchor();
   1985 12 08 35           7634 	lcall	_update_timeanchor
                    1153   7635 	C$easyax5043.c$1027$2$297 ==.
                           7636 ;	..\COMMON\easyax5043.c:1027: axradio_syncstate = syncstate_off;
   1988 90 00 04           7637 	mov	dptr,#_axradio_syncstate
   198B E4                 7638 	clr	a
   198C F0                 7639 	movx	@dptr,a
                    1158   7640 	C$easyax5043.c$1028$2$297 ==.
                           7641 ;	..\COMMON\easyax5043.c:1028: ax5043_off();
   198D 12 14 7C           7642 	lcall	_ax5043_off
                    115B   7643 	C$easyax5043.c$1029$2$297 ==.
                           7644 ;	..\COMMON\easyax5043.c:1029: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1990 90 02 6B           7645 	mov	dptr,#_axradio_cb_transmitstart
   1993 12 4B 64           7646 	lcall	_wtimer_remove_callback
                    1161   7647 	C$easyax5043.c$1030$2$297 ==.
                           7648 ;	..\COMMON\easyax5043.c:1030: axradio_cb_transmitstart.st.error = AXRADIO_ERR_TIMEOUT;
   1996 90 02 70           7649 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1999 74 03              7650 	mov	a,#0x03
   199B F0                 7651 	movx	@dptr,a
                    1167   7652 	C$easyax5043.c$1031$2$297 ==.
                           7653 ;	..\COMMON\easyax5043.c:1031: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   199C 90 00 1A           7654 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   199F E0                 7655 	movx	a,@dptr
   19A0 FC                 7656 	mov	r4,a
   19A1 A3                 7657 	inc	dptr
   19A2 E0                 7658 	movx	a,@dptr
   19A3 FD                 7659 	mov	r5,a
   19A4 A3                 7660 	inc	dptr
   19A5 E0                 7661 	movx	a,@dptr
   19A6 FE                 7662 	mov	r6,a
   19A7 A3                 7663 	inc	dptr
   19A8 E0                 7664 	movx	a,@dptr
   19A9 FF                 7665 	mov	r7,a
   19AA 90 02 71           7666 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   19AD EC                 7667 	mov	a,r4
   19AE F0                 7668 	movx	@dptr,a
   19AF A3                 7669 	inc	dptr
   19B0 ED                 7670 	mov	a,r5
   19B1 F0                 7671 	movx	@dptr,a
   19B2 A3                 7672 	inc	dptr
   19B3 EE                 7673 	mov	a,r6
   19B4 F0                 7674 	movx	@dptr,a
   19B5 A3                 7675 	inc	dptr
   19B6 EF                 7676 	mov	a,r7
   19B7 F0                 7677 	movx	@dptr,a
                    1183   7678 	C$easyax5043.c$1032$2$297 ==.
                           7679 ;	..\COMMON\easyax5043.c:1032: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   19B8 90 02 6B           7680 	mov	dptr,#_axradio_cb_transmitstart
   19BB 12 3F BF           7681 	lcall	_wtimer_add_callback
                    1189   7682 	C$easyax5043.c$1033$2$297 ==.
                           7683 ;	..\COMMON\easyax5043.c:1033: break;
   19BE 02 20 6A           7684 	ljmp	00173$
                    118C   7685 	C$easyax5043.c$1035$2$297 ==.
                           7686 ;	..\COMMON\easyax5043.c:1035: case AXRADIO_MODE_ACK_TRANSMIT:
   19C1                    7687 00121$:
                    118C   7688 	C$easyax5043.c$1036$2$297 ==.
                           7689 ;	..\COMMON\easyax5043.c:1036: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   19C1                    7690 00122$:
                    118C   7691 	C$easyax5043.c$1037$2$297 ==.
                           7692 ;	..\COMMON\easyax5043.c:1037: if (axradio_syncstate == syncstate_lbt)
   19C1 90 00 04           7693 	mov	dptr,#_axradio_syncstate
   19C4 E0                 7694 	movx	a,@dptr
   19C5 FF                 7695 	mov	r7,a
   19C6 BF 01 03           7696 	cjne	r7,#0x01,00243$
   19C9 02 19 28           7697 	ljmp	00112$
   19CC                    7698 00243$:
                    1197   7699 	C$easyax5043.c$1039$2$297 ==.
                           7700 ;	..\COMMON\easyax5043.c:1039: ax5043_off();
   19CC 12 14 7C           7701 	lcall	_ax5043_off
                    119A   7702 	C$easyax5043.c$1040$2$297 ==.
                           7703 ;	..\COMMON\easyax5043.c:1040: if (!axradio_ack_count) {
   19CF 90 00 0E           7704 	mov	dptr,#_axradio_ack_count
   19D2 E0                 7705 	movx	a,@dptr
   19D3 FF                 7706 	mov	r7,a
   19D4 70 34              7707 	jnz	00126$
                    11A1   7708 	C$easyax5043.c$1041$3$300 ==.
                           7709 ;	..\COMMON\easyax5043.c:1041: update_timeanchor();
   19D6 12 08 35           7710 	lcall	_update_timeanchor
                    11A4   7711 	C$easyax5043.c$1042$3$300 ==.
                           7712 ;	..\COMMON\easyax5043.c:1042: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   19D9 90 02 75           7713 	mov	dptr,#_axradio_cb_transmitend
   19DC 12 4B 64           7714 	lcall	_wtimer_remove_callback
                    11AA   7715 	C$easyax5043.c$1043$3$300 ==.
                           7716 ;	..\COMMON\easyax5043.c:1043: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   19DF 90 02 7A           7717 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   19E2 74 03              7718 	mov	a,#0x03
   19E4 F0                 7719 	movx	@dptr,a
                    11B0   7720 	C$easyax5043.c$1044$3$300 ==.
                           7721 ;	..\COMMON\easyax5043.c:1044: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   19E5 90 00 1A           7722 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   19E8 E0                 7723 	movx	a,@dptr
   19E9 FB                 7724 	mov	r3,a
   19EA A3                 7725 	inc	dptr
   19EB E0                 7726 	movx	a,@dptr
   19EC FC                 7727 	mov	r4,a
   19ED A3                 7728 	inc	dptr
   19EE E0                 7729 	movx	a,@dptr
   19EF FD                 7730 	mov	r5,a
   19F0 A3                 7731 	inc	dptr
   19F1 E0                 7732 	movx	a,@dptr
   19F2 FE                 7733 	mov	r6,a
   19F3 90 02 7B           7734 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   19F6 EB                 7735 	mov	a,r3
   19F7 F0                 7736 	movx	@dptr,a
   19F8 A3                 7737 	inc	dptr
   19F9 EC                 7738 	mov	a,r4
   19FA F0                 7739 	movx	@dptr,a
   19FB A3                 7740 	inc	dptr
   19FC ED                 7741 	mov	a,r5
   19FD F0                 7742 	movx	@dptr,a
   19FE A3                 7743 	inc	dptr
   19FF EE                 7744 	mov	a,r6
   1A00 F0                 7745 	movx	@dptr,a
                    11CC   7746 	C$easyax5043.c$1045$3$300 ==.
                           7747 ;	..\COMMON\easyax5043.c:1045: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1A01 90 02 75           7748 	mov	dptr,#_axradio_cb_transmitend
   1A04 12 3F BF           7749 	lcall	_wtimer_add_callback
                    11D2   7750 	C$easyax5043.c$1046$3$300 ==.
                           7751 ;	..\COMMON\easyax5043.c:1046: break;
   1A07 02 20 6A           7752 	ljmp	00173$
   1A0A                    7753 00126$:
                    11D5   7754 	C$easyax5043.c$1048$2$297 ==.
                           7755 ;	..\COMMON\easyax5043.c:1048: --axradio_ack_count;
   1A0A EF                 7756 	mov	a,r7
   1A0B 14                 7757 	dec	a
   1A0C 90 00 0E           7758 	mov	dptr,#_axradio_ack_count
   1A0F F0                 7759 	movx	@dptr,a
                    11DB   7760 	C$easyax5043.c$1049$2$297 ==.
                           7761 ;	..\COMMON\easyax5043.c:1049: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A10 90 4F 17           7762 	mov	dptr,#_axradio_phy_preamble_longlen
   1A13 E4                 7763 	clr	a
   1A14 93                 7764 	movc	a,@a+dptr
   1A15 FE                 7765 	mov	r6,a
   1A16 74 01              7766 	mov	a,#0x01
   1A18 93                 7767 	movc	a,@a+dptr
   1A19 FF                 7768 	mov	r7,a
   1A1A 90 00 07           7769 	mov	dptr,#_axradio_txbuffer_cnt
   1A1D EE                 7770 	mov	a,r6
   1A1E F0                 7771 	movx	@dptr,a
   1A1F A3                 7772 	inc	dptr
   1A20 EF                 7773 	mov	a,r7
   1A21 F0                 7774 	movx	@dptr,a
                    11ED   7775 	C$easyax5043.c$1050$2$297 ==.
                           7776 ;	..\COMMON\easyax5043.c:1050: ax5043_prepare_tx();
   1A22 12 14 56           7777 	lcall	_ax5043_prepare_tx
                    11F0   7778 	C$easyax5043.c$1051$2$297 ==.
                           7779 ;	..\COMMON\easyax5043.c:1051: break;
   1A25 02 20 6A           7780 	ljmp	00173$
                    11F3   7781 	C$easyax5043.c$1053$2$297 ==.
                           7782 ;	..\COMMON\easyax5043.c:1053: case AXRADIO_MODE_ACK_RECEIVE:
   1A28                    7783 00127$:
                    11F3   7784 	C$easyax5043.c$1054$2$297 ==.
                           7785 ;	..\COMMON\easyax5043.c:1054: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   1A28                    7786 00128$:
                    11F3   7787 	C$easyax5043.c$1055$2$297 ==.
                           7788 ;	..\COMMON\easyax5043.c:1055: if (axradio_syncstate == syncstate_lbt)
   1A28 90 00 04           7789 	mov	dptr,#_axradio_syncstate
   1A2B E0                 7790 	movx	a,@dptr
   1A2C FF                 7791 	mov	r7,a
   1A2D BF 01 03           7792 	cjne	r7,#0x01,00245$
   1A30 02 19 28           7793 	ljmp	00112$
   1A33                    7794 00245$:
                    11FE   7795 	C$easyax5043.c$1057$2$297 ==.
                           7796 ;	..\COMMON\easyax5043.c:1057: transmitack:
   1A33                    7797 00131$:
                    11FE   7798 	C$easyax5043.c$1058$2$297 ==.
                           7799 ;	..\COMMON\easyax5043.c:1058: AX5043_FIFOSTAT = 3;
   1A33 90 40 28           7800 	mov	dptr,#_AX5043_FIFOSTAT
   1A36 74 03              7801 	mov	a,#0x03
   1A38 F0                 7802 	movx	@dptr,a
                    1204   7803 	C$easyax5043.c$1059$2$297 ==.
                           7804 ;	..\COMMON\easyax5043.c:1059: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1A39 90 40 02           7805 	mov	dptr,#_AX5043_PWRMODE
   1A3C 74 0D              7806 	mov	a,#0x0D
   1A3E F0                 7807 	movx	@dptr,a
                    120A   7808 	C$easyax5043.c$1060$2$297 ==.
                           7809 ;	..\COMMON\easyax5043.c:1060: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1A3F                    7810 00132$:
   1A3F 90 40 03           7811 	mov	dptr,#_AX5043_POWSTAT
   1A42 E0                 7812 	movx	a,@dptr
   1A43 FF                 7813 	mov	r7,a
   1A44 30 E3 F8           7814 	jnb	acc.3,00132$
                    1212   7815 	C$easyax5043.c$1061$2$297 ==.
                           7816 ;	..\COMMON\easyax5043.c:1061: ax5043_init_registers_tx();
   1A47 12 08 CB           7817 	lcall	_ax5043_init_registers_tx
                    1215   7818 	C$easyax5043.c$1062$2$297 ==.
                           7819 ;	..\COMMON\easyax5043.c:1062: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1A4A 90 40 0F           7820 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1A4D E0                 7821 	movx	a,@dptr
                    1219   7822 	C$easyax5043.c$1063$2$297 ==.
                           7823 ;	..\COMMON\easyax5043.c:1063: AX5043_FIFOTHRESH1 = 0;
   1A4E 90 40 2E           7824 	mov	dptr,#_AX5043_FIFOTHRESH1
   1A51 E4                 7825 	clr	a
   1A52 F0                 7826 	movx	@dptr,a
                    121E   7827 	C$easyax5043.c$1064$2$297 ==.
                           7828 ;	..\COMMON\easyax5043.c:1064: AX5043_FIFOTHRESH0 = 0x80;
   1A53 90 40 2F           7829 	mov	dptr,#_AX5043_FIFOTHRESH0
   1A56 74 80              7830 	mov	a,#0x80
   1A58 F0                 7831 	movx	@dptr,a
                    1224   7832 	C$easyax5043.c$1065$2$297 ==.
                           7833 ;	..\COMMON\easyax5043.c:1065: axradio_trxstate = trxstate_tx_longpreamble;
   1A59 75 0B 0A           7834 	mov	_axradio_trxstate,#0x0A
                    1227   7835 	C$easyax5043.c$1066$2$297 ==.
                           7836 ;	..\COMMON\easyax5043.c:1066: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A5C 90 4F 17           7837 	mov	dptr,#_axradio_phy_preamble_longlen
   1A5F E4                 7838 	clr	a
   1A60 93                 7839 	movc	a,@a+dptr
   1A61 FE                 7840 	mov	r6,a
   1A62 74 01              7841 	mov	a,#0x01
   1A64 93                 7842 	movc	a,@a+dptr
   1A65 FF                 7843 	mov	r7,a
   1A66 90 00 07           7844 	mov	dptr,#_axradio_txbuffer_cnt
   1A69 EE                 7845 	mov	a,r6
   1A6A F0                 7846 	movx	@dptr,a
   1A6B A3                 7847 	inc	dptr
   1A6C EF                 7848 	mov	a,r7
   1A6D F0                 7849 	movx	@dptr,a
                    1239   7850 	C$easyax5043.c$1068$2$297 ==.
                           7851 ;	..\COMMON\easyax5043.c:1068: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1A6E 90 40 10           7852 	mov	dptr,#_AX5043_MODULATION
   1A71 E0                 7853 	movx	a,@dptr
   1A72 FF                 7854 	mov	r7,a
   1A73 53 07 0F           7855 	anl	ar7,#0x0F
   1A76 BF 09 0F           7856 	cjne	r7,#0x09,00136$
                    1244   7857 	C$easyax5043.c$1069$3$301 ==.
                           7858 ;	..\COMMON\easyax5043.c:1069: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    1244   7859 	C$easyax5043.c$1070$3$301 ==.
                           7860 ;	..\COMMON\easyax5043.c:1070: AX5043_FIFODATA = 2;  // length (including flags)
                    1244   7861 	C$easyax5043.c$1071$3$301 ==.
                           7862 ;	..\COMMON\easyax5043.c:1071: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                    1244   7863 	C$easyax5043.c$1072$3$301 ==.
                           7864 ;	..\COMMON\easyax5043.c:1072: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1A79 90 40 29           7865 	mov	dptr,#_AX5043_FIFODATA
   1A7C 74 E1              7866 	mov	a,#0xE1
   1A7E F0                 7867 	movx	@dptr,a
   1A7F 74 02              7868 	mov	a,#0x02
   1A81 F0                 7869 	movx	@dptr,a
   1A82 74 01              7870 	mov	a,#0x01
   1A84 F0                 7871 	movx	@dptr,a
   1A85 74 11              7872 	mov	a,#0x11
   1A87 F0                 7873 	movx	@dptr,a
   1A88                    7874 00136$:
                    1253   7875 	C$easyax5043.c$1079$2$297 ==.
                           7876 ;	..\COMMON\easyax5043.c:1079: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1A88 90 40 07           7877 	mov	dptr,#_AX5043_IRQMASK0
   1A8B 74 08              7878 	mov	a,#0x08
   1A8D F0                 7879 	movx	@dptr,a
                    1259   7880 	C$easyax5043.c$1080$2$297 ==.
                           7881 ;	..\COMMON\easyax5043.c:1080: update_timeanchor();
   1A8E 12 08 35           7882 	lcall	_update_timeanchor
                    125C   7883 	C$easyax5043.c$1081$2$297 ==.
                           7884 ;	..\COMMON\easyax5043.c:1081: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1A91 90 02 6B           7885 	mov	dptr,#_axradio_cb_transmitstart
   1A94 12 4B 64           7886 	lcall	_wtimer_remove_callback
                    1262   7887 	C$easyax5043.c$1082$2$297 ==.
                           7888 ;	..\COMMON\easyax5043.c:1082: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1A97 90 02 70           7889 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1A9A E4                 7890 	clr	a
   1A9B F0                 7891 	movx	@dptr,a
                    1267   7892 	C$easyax5043.c$1083$2$297 ==.
                           7893 ;	..\COMMON\easyax5043.c:1083: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1A9C 90 00 1A           7894 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1A9F E0                 7895 	movx	a,@dptr
   1AA0 FC                 7896 	mov	r4,a
   1AA1 A3                 7897 	inc	dptr
   1AA2 E0                 7898 	movx	a,@dptr
   1AA3 FD                 7899 	mov	r5,a
   1AA4 A3                 7900 	inc	dptr
   1AA5 E0                 7901 	movx	a,@dptr
   1AA6 FE                 7902 	mov	r6,a
   1AA7 A3                 7903 	inc	dptr
   1AA8 E0                 7904 	movx	a,@dptr
   1AA9 FF                 7905 	mov	r7,a
   1AAA 90 02 71           7906 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1AAD EC                 7907 	mov	a,r4
   1AAE F0                 7908 	movx	@dptr,a
   1AAF A3                 7909 	inc	dptr
   1AB0 ED                 7910 	mov	a,r5
   1AB1 F0                 7911 	movx	@dptr,a
   1AB2 A3                 7912 	inc	dptr
   1AB3 EE                 7913 	mov	a,r6
   1AB4 F0                 7914 	movx	@dptr,a
   1AB5 A3                 7915 	inc	dptr
   1AB6 EF                 7916 	mov	a,r7
   1AB7 F0                 7917 	movx	@dptr,a
                    1283   7918 	C$easyax5043.c$1084$2$297 ==.
                           7919 ;	..\COMMON\easyax5043.c:1084: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1AB8 90 02 6B           7920 	mov	dptr,#_axradio_cb_transmitstart
   1ABB 12 3F BF           7921 	lcall	_wtimer_add_callback
                    1289   7922 	C$easyax5043.c$1085$2$297 ==.
                           7923 ;	..\COMMON\easyax5043.c:1085: break;
   1ABE 02 20 6A           7924 	ljmp	00173$
                    128C   7925 	C$easyax5043.c$1087$2$297 ==.
                           7926 ;	..\COMMON\easyax5043.c:1087: case AXRADIO_MODE_SYNC_MASTER:
   1AC1                    7927 00137$:
                    128C   7928 	C$easyax5043.c$1088$2$297 ==.
                           7929 ;	..\COMMON\easyax5043.c:1088: case AXRADIO_MODE_SYNC_ACK_MASTER:
   1AC1                    7930 00138$:
                    128C   7931 	C$easyax5043.c$1089$2$297 ==.
                           7932 ;	..\COMMON\easyax5043.c:1089: switch (axradio_syncstate) {
   1AC1 90 00 04           7933 	mov	dptr,#_axradio_syncstate
   1AC4 E0                 7934 	movx	a,@dptr
   1AC5 FF                 7935 	mov	r7,a
   1AC6 BF 04 02           7936 	cjne	r7,#0x04,00249$
   1AC9 80 5C              7937 	sjmp	00140$
   1ACB                    7938 00249$:
   1ACB BF 05 03           7939 	cjne	r7,#0x05,00250$
   1ACE 02 1C 05           7940 	ljmp	00148$
   1AD1                    7941 00250$:
                    129C   7942 	C$easyax5043.c$1091$3$302 ==.
                           7943 ;	..\COMMON\easyax5043.c:1091: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1AD1 90 40 02           7944 	mov	dptr,#_AX5043_PWRMODE
   1AD4 74 05              7945 	mov	a,#0x05
   1AD6 F0                 7946 	movx	@dptr,a
                    12A2   7947 	C$easyax5043.c$1092$3$302 ==.
                           7948 ;	..\COMMON\easyax5043.c:1092: ax5043_init_registers_tx();
   1AD7 12 08 CB           7949 	lcall	_ax5043_init_registers_tx
                    12A5   7950 	C$easyax5043.c$1093$3$302 ==.
                           7951 ;	..\COMMON\easyax5043.c:1093: axradio_syncstate = syncstate_master_xostartup;
   1ADA 90 00 04           7952 	mov	dptr,#_axradio_syncstate
   1ADD 74 04              7953 	mov	a,#0x04
   1ADF F0                 7954 	movx	@dptr,a
                    12AB   7955 	C$easyax5043.c$1094$3$302 ==.
                           7956 ;	..\COMMON\easyax5043.c:1094: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   1AE0 90 02 7F           7957 	mov	dptr,#_axradio_cb_transmitdata
   1AE3 12 4B 64           7958 	lcall	_wtimer_remove_callback
                    12B1   7959 	C$easyax5043.c$1095$3$302 ==.
                           7960 ;	..\COMMON\easyax5043.c:1095: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   1AE6 90 02 84           7961 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
                    12B4   7962 	C$easyax5043.c$1096$3$302 ==.
                           7963 ;	..\COMMON\easyax5043.c:1096: axradio_cb_transmitdata.st.time.t = 0;
   1AE9 E4                 7964 	clr	a
   1AEA F0                 7965 	movx	@dptr,a
   1AEB 90 02 85           7966 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   1AEE F0                 7967 	movx	@dptr,a
   1AEF A3                 7968 	inc	dptr
   1AF0 E4                 7969 	clr	a
   1AF1 F0                 7970 	movx	@dptr,a
   1AF2 A3                 7971 	inc	dptr
   1AF3 F0                 7972 	movx	@dptr,a
   1AF4 A3                 7973 	inc	dptr
   1AF5 F0                 7974 	movx	@dptr,a
                    12C1   7975 	C$easyax5043.c$1097$3$302 ==.
                           7976 ;	..\COMMON\easyax5043.c:1097: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   1AF6 90 02 7F           7977 	mov	dptr,#_axradio_cb_transmitdata
   1AF9 12 3F BF           7978 	lcall	_wtimer_add_callback
                    12C7   7979 	C$easyax5043.c$1098$3$302 ==.
                           7980 ;	..\COMMON\easyax5043.c:1098: wtimer_remove(&axradio_timer);
   1AFC 90 02 89           7981 	mov	dptr,#_axradio_timer
   1AFF 12 49 5A           7982 	lcall	_wtimer_remove
                    12CD   7983 	C$easyax5043.c$1099$3$302 ==.
                           7984 ;	..\COMMON\easyax5043.c:1099: axradio_timer.time = axradio_sync_time;
   1B02 90 00 10           7985 	mov	dptr,#_axradio_sync_time
   1B05 E0                 7986 	movx	a,@dptr
   1B06 FC                 7987 	mov	r4,a
   1B07 A3                 7988 	inc	dptr
   1B08 E0                 7989 	movx	a,@dptr
   1B09 FD                 7990 	mov	r5,a
   1B0A A3                 7991 	inc	dptr
   1B0B E0                 7992 	movx	a,@dptr
   1B0C FE                 7993 	mov	r6,a
   1B0D A3                 7994 	inc	dptr
   1B0E E0                 7995 	movx	a,@dptr
   1B0F FF                 7996 	mov	r7,a
   1B10 90 02 8D           7997 	mov	dptr,#(_axradio_timer + 0x0004)
   1B13 EC                 7998 	mov	a,r4
   1B14 F0                 7999 	movx	@dptr,a
   1B15 A3                 8000 	inc	dptr
   1B16 ED                 8001 	mov	a,r5
   1B17 F0                 8002 	movx	@dptr,a
   1B18 A3                 8003 	inc	dptr
   1B19 EE                 8004 	mov	a,r6
   1B1A F0                 8005 	movx	@dptr,a
   1B1B A3                 8006 	inc	dptr
   1B1C EF                 8007 	mov	a,r7
   1B1D F0                 8008 	movx	@dptr,a
                    12E9   8009 	C$easyax5043.c$1100$3$302 ==.
                           8010 ;	..\COMMON\easyax5043.c:1100: wtimer0_addabsolute(&axradio_timer);
   1B1E 90 02 89           8011 	mov	dptr,#_axradio_timer
   1B21 12 40 EC           8012 	lcall	_wtimer0_addabsolute
                    12EF   8013 	C$easyax5043.c$1101$3$302 ==.
                           8014 ;	..\COMMON\easyax5043.c:1101: break;
   1B24 02 20 6A           8015 	ljmp	00173$
                    12F2   8016 	C$easyax5043.c$1103$3$302 ==.
                           8017 ;	..\COMMON\easyax5043.c:1103: case syncstate_master_xostartup:
   1B27                    8018 00140$:
                    12F2   8019 	C$easyax5043.c$1104$3$302 ==.
                           8020 ;	..\COMMON\easyax5043.c:1104: AX5043_FIFOSTAT = 3;
   1B27 90 40 28           8021 	mov	dptr,#_AX5043_FIFOSTAT
   1B2A 74 03              8022 	mov	a,#0x03
   1B2C F0                 8023 	movx	@dptr,a
                    12F8   8024 	C$easyax5043.c$1105$3$302 ==.
                           8025 ;	..\COMMON\easyax5043.c:1105: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1B2D 90 40 02           8026 	mov	dptr,#_AX5043_PWRMODE
   1B30 74 0D              8027 	mov	a,#0x0D
   1B32 F0                 8028 	movx	@dptr,a
                    12FE   8029 	C$easyax5043.c$1106$3$302 ==.
                           8030 ;	..\COMMON\easyax5043.c:1106: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1B33                    8031 00141$:
   1B33 90 40 03           8032 	mov	dptr,#_AX5043_POWSTAT
   1B36 E0                 8033 	movx	a,@dptr
   1B37 FF                 8034 	mov	r7,a
   1B38 30 E3 F8           8035 	jnb	acc.3,00141$
                    1306   8036 	C$easyax5043.c$1107$3$302 ==.
                           8037 ;	..\COMMON\easyax5043.c:1107: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1B3B 90 40 0F           8038 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1B3E E0                 8039 	movx	a,@dptr
                    130A   8040 	C$easyax5043.c$1108$3$302 ==.
                           8041 ;	..\COMMON\easyax5043.c:1108: AX5043_FIFOTHRESH1 = 0;
   1B3F 90 40 2E           8042 	mov	dptr,#_AX5043_FIFOTHRESH1
   1B42 E4                 8043 	clr	a
   1B43 F0                 8044 	movx	@dptr,a
                    130F   8045 	C$easyax5043.c$1109$3$302 ==.
                           8046 ;	..\COMMON\easyax5043.c:1109: AX5043_FIFOTHRESH0 = 0x80;
   1B44 90 40 2F           8047 	mov	dptr,#_AX5043_FIFOTHRESH0
   1B47 74 80              8048 	mov	a,#0x80
   1B49 F0                 8049 	movx	@dptr,a
                    1315   8050 	C$easyax5043.c$1110$3$302 ==.
                           8051 ;	..\COMMON\easyax5043.c:1110: axradio_trxstate = trxstate_tx_longpreamble;
   1B4A 75 0B 0A           8052 	mov	_axradio_trxstate,#0x0A
                    1318   8053 	C$easyax5043.c$1111$3$302 ==.
                           8054 ;	..\COMMON\easyax5043.c:1111: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1B4D 90 4F 17           8055 	mov	dptr,#_axradio_phy_preamble_longlen
   1B50 E4                 8056 	clr	a
   1B51 93                 8057 	movc	a,@a+dptr
   1B52 FE                 8058 	mov	r6,a
   1B53 74 01              8059 	mov	a,#0x01
   1B55 93                 8060 	movc	a,@a+dptr
   1B56 FF                 8061 	mov	r7,a
   1B57 90 00 07           8062 	mov	dptr,#_axradio_txbuffer_cnt
   1B5A EE                 8063 	mov	a,r6
   1B5B F0                 8064 	movx	@dptr,a
   1B5C A3                 8065 	inc	dptr
   1B5D EF                 8066 	mov	a,r7
   1B5E F0                 8067 	movx	@dptr,a
                    132A   8068 	C$easyax5043.c$1113$3$302 ==.
                           8069 ;	..\COMMON\easyax5043.c:1113: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1B5F 90 40 10           8070 	mov	dptr,#_AX5043_MODULATION
   1B62 E0                 8071 	movx	a,@dptr
   1B63 FF                 8072 	mov	r7,a
   1B64 53 07 0F           8073 	anl	ar7,#0x0F
   1B67 BF 09 0F           8074 	cjne	r7,#0x09,00145$
                    1335   8075 	C$easyax5043.c$1114$4$303 ==.
                           8076 ;	..\COMMON\easyax5043.c:1114: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    1335   8077 	C$easyax5043.c$1115$4$303 ==.
                           8078 ;	..\COMMON\easyax5043.c:1115: AX5043_FIFODATA = 2;  // length (including flags)
                    1335   8079 	C$easyax5043.c$1116$4$303 ==.
                           8080 ;	..\COMMON\easyax5043.c:1116: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                    1335   8081 	C$easyax5043.c$1117$4$303 ==.
                           8082 ;	..\COMMON\easyax5043.c:1117: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1B6A 90 40 29           8083 	mov	dptr,#_AX5043_FIFODATA
   1B6D 74 E1              8084 	mov	a,#0xE1
   1B6F F0                 8085 	movx	@dptr,a
   1B70 74 02              8086 	mov	a,#0x02
   1B72 F0                 8087 	movx	@dptr,a
   1B73 74 01              8088 	mov	a,#0x01
   1B75 F0                 8089 	movx	@dptr,a
   1B76 74 11              8090 	mov	a,#0x11
   1B78 F0                 8091 	movx	@dptr,a
   1B79                    8092 00145$:
                    1344   8093 	C$easyax5043.c$1124$3$302 ==.
                           8094 ;	..\COMMON\easyax5043.c:1124: wtimer_remove(&axradio_timer);
   1B79 90 02 89           8095 	mov	dptr,#_axradio_timer
   1B7C 12 49 5A           8096 	lcall	_wtimer_remove
                    134A   8097 	C$easyax5043.c$1125$3$302 ==.
                           8098 ;	..\COMMON\easyax5043.c:1125: update_timeanchor();
   1B7F 12 08 35           8099 	lcall	_update_timeanchor
                    134D   8100 	C$easyax5043.c$1126$3$302 ==.
                           8101 ;	..\COMMON\easyax5043.c:1126: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1B82 90 40 07           8102 	mov	dptr,#_AX5043_IRQMASK0
   1B85 74 08              8103 	mov	a,#0x08
   1B87 F0                 8104 	movx	@dptr,a
                    1353   8105 	C$easyax5043.c$1127$3$302 ==.
                           8106 ;	..\COMMON\easyax5043.c:1127: axradio_sync_addtime(axradio_sync_period);
   1B88 90 4F 3B           8107 	mov	dptr,#_axradio_sync_period
   1B8B E4                 8108 	clr	a
   1B8C 93                 8109 	movc	a,@a+dptr
   1B8D FC                 8110 	mov	r4,a
   1B8E 74 01              8111 	mov	a,#0x01
   1B90 93                 8112 	movc	a,@a+dptr
   1B91 FD                 8113 	mov	r5,a
   1B92 74 02              8114 	mov	a,#0x02
   1B94 93                 8115 	movc	a,@a+dptr
   1B95 FE                 8116 	mov	r6,a
   1B96 74 03              8117 	mov	a,#0x03
   1B98 93                 8118 	movc	a,@a+dptr
   1B99 8C 82              8119 	mov	dpl,r4
   1B9B 8D 83              8120 	mov	dph,r5
   1B9D 8E F0              8121 	mov	b,r6
   1B9F 12 16 1C           8122 	lcall	_axradio_sync_addtime
                    136D   8123 	C$easyax5043.c$1128$3$302 ==.
                           8124 ;	..\COMMON\easyax5043.c:1128: axradio_syncstate = syncstate_master_waitack;
   1BA2 90 00 04           8125 	mov	dptr,#_axradio_syncstate
   1BA5 74 05              8126 	mov	a,#0x05
   1BA7 F0                 8127 	movx	@dptr,a
                    1373   8128 	C$easyax5043.c$1129$3$302 ==.
                           8129 ;	..\COMMON\easyax5043.c:1129: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER) {
   1BA8 74 21              8130 	mov	a,#0x21
   1BAA B5 0A 02           8131 	cjne	a,_axradio_mode,00254$
   1BAD 80 26              8132 	sjmp	00147$
   1BAF                    8133 00254$:
                    137A   8134 	C$easyax5043.c$1130$4$304 ==.
                           8135 ;	..\COMMON\easyax5043.c:1130: axradio_syncstate = syncstate_master_normal;
   1BAF 90 00 04           8136 	mov	dptr,#_axradio_syncstate
   1BB2 74 03              8137 	mov	a,#0x03
   1BB4 F0                 8138 	movx	@dptr,a
                    1380   8139 	C$easyax5043.c$1131$4$304 ==.
                           8140 ;	..\COMMON\easyax5043.c:1131: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1BB5 90 4F 3F           8141 	mov	dptr,#_axradio_sync_xoscstartup
   1BB8 E4                 8142 	clr	a
   1BB9 93                 8143 	movc	a,@a+dptr
   1BBA FC                 8144 	mov	r4,a
   1BBB 74 01              8145 	mov	a,#0x01
   1BBD 93                 8146 	movc	a,@a+dptr
   1BBE FD                 8147 	mov	r5,a
   1BBF 74 02              8148 	mov	a,#0x02
   1BC1 93                 8149 	movc	a,@a+dptr
   1BC2 FE                 8150 	mov	r6,a
   1BC3 74 03              8151 	mov	a,#0x03
   1BC5 93                 8152 	movc	a,@a+dptr
   1BC6 8C 82              8153 	mov	dpl,r4
   1BC8 8D 83              8154 	mov	dph,r5
   1BCA 8E F0              8155 	mov	b,r6
   1BCC 12 16 6D           8156 	lcall	_axradio_sync_settimeradv
                    139A   8157 	C$easyax5043.c$1132$4$304 ==.
                           8158 ;	..\COMMON\easyax5043.c:1132: wtimer0_addabsolute(&axradio_timer);
   1BCF 90 02 89           8159 	mov	dptr,#_axradio_timer
   1BD2 12 40 EC           8160 	lcall	_wtimer0_addabsolute
   1BD5                    8161 00147$:
                    13A0   8162 	C$easyax5043.c$1134$3$302 ==.
                           8163 ;	..\COMMON\easyax5043.c:1134: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1BD5 90 02 6B           8164 	mov	dptr,#_axradio_cb_transmitstart
   1BD8 12 4B 64           8165 	lcall	_wtimer_remove_callback
                    13A6   8166 	C$easyax5043.c$1135$3$302 ==.
                           8167 ;	..\COMMON\easyax5043.c:1135: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1BDB 90 02 70           8168 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1BDE E4                 8169 	clr	a
   1BDF F0                 8170 	movx	@dptr,a
                    13AB   8171 	C$easyax5043.c$1136$3$302 ==.
                           8172 ;	..\COMMON\easyax5043.c:1136: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1BE0 90 00 1A           8173 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1BE3 E0                 8174 	movx	a,@dptr
   1BE4 FC                 8175 	mov	r4,a
   1BE5 A3                 8176 	inc	dptr
   1BE6 E0                 8177 	movx	a,@dptr
   1BE7 FD                 8178 	mov	r5,a
   1BE8 A3                 8179 	inc	dptr
   1BE9 E0                 8180 	movx	a,@dptr
   1BEA FE                 8181 	mov	r6,a
   1BEB A3                 8182 	inc	dptr
   1BEC E0                 8183 	movx	a,@dptr
   1BED FF                 8184 	mov	r7,a
   1BEE 90 02 71           8185 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1BF1 EC                 8186 	mov	a,r4
   1BF2 F0                 8187 	movx	@dptr,a
   1BF3 A3                 8188 	inc	dptr
   1BF4 ED                 8189 	mov	a,r5
   1BF5 F0                 8190 	movx	@dptr,a
   1BF6 A3                 8191 	inc	dptr
   1BF7 EE                 8192 	mov	a,r6
   1BF8 F0                 8193 	movx	@dptr,a
   1BF9 A3                 8194 	inc	dptr
   1BFA EF                 8195 	mov	a,r7
   1BFB F0                 8196 	movx	@dptr,a
                    13C7   8197 	C$easyax5043.c$1137$3$302 ==.
                           8198 ;	..\COMMON\easyax5043.c:1137: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1BFC 90 02 6B           8199 	mov	dptr,#_axradio_cb_transmitstart
   1BFF 12 3F BF           8200 	lcall	_wtimer_add_callback
                    13CD   8201 	C$easyax5043.c$1138$3$302 ==.
                           8202 ;	..\COMMON\easyax5043.c:1138: break;
   1C02 02 20 6A           8203 	ljmp	00173$
                    13D0   8204 	C$easyax5043.c$1140$3$302 ==.
                           8205 ;	..\COMMON\easyax5043.c:1140: case syncstate_master_waitack:
   1C05                    8206 00148$:
                    13D0   8207 	C$easyax5043.c$1141$3$302 ==.
                           8208 ;	..\COMMON\easyax5043.c:1141: ax5043_off();
   1C05 12 14 7C           8209 	lcall	_ax5043_off
                    13D3   8210 	C$easyax5043.c$1142$3$302 ==.
                           8211 ;	..\COMMON\easyax5043.c:1142: axradio_syncstate = syncstate_master_normal;
   1C08 90 00 04           8212 	mov	dptr,#_axradio_syncstate
   1C0B 74 03              8213 	mov	a,#0x03
   1C0D F0                 8214 	movx	@dptr,a
                    13D9   8215 	C$easyax5043.c$1143$3$302 ==.
                           8216 ;	..\COMMON\easyax5043.c:1143: wtimer_remove(&axradio_timer);
   1C0E 90 02 89           8217 	mov	dptr,#_axradio_timer
   1C11 12 49 5A           8218 	lcall	_wtimer_remove
                    13DF   8219 	C$easyax5043.c$1144$3$302 ==.
                           8220 ;	..\COMMON\easyax5043.c:1144: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1C14 90 4F 3F           8221 	mov	dptr,#_axradio_sync_xoscstartup
   1C17 E4                 8222 	clr	a
   1C18 93                 8223 	movc	a,@a+dptr
   1C19 FC                 8224 	mov	r4,a
   1C1A 74 01              8225 	mov	a,#0x01
   1C1C 93                 8226 	movc	a,@a+dptr
   1C1D FD                 8227 	mov	r5,a
   1C1E 74 02              8228 	mov	a,#0x02
   1C20 93                 8229 	movc	a,@a+dptr
   1C21 FE                 8230 	mov	r6,a
   1C22 74 03              8231 	mov	a,#0x03
   1C24 93                 8232 	movc	a,@a+dptr
   1C25 8C 82              8233 	mov	dpl,r4
   1C27 8D 83              8234 	mov	dph,r5
   1C29 8E F0              8235 	mov	b,r6
   1C2B 12 16 6D           8236 	lcall	_axradio_sync_settimeradv
                    13F9   8237 	C$easyax5043.c$1145$3$302 ==.
                           8238 ;	..\COMMON\easyax5043.c:1145: wtimer0_addabsolute(&axradio_timer);
   1C2E 90 02 89           8239 	mov	dptr,#_axradio_timer
   1C31 12 40 EC           8240 	lcall	_wtimer0_addabsolute
                    13FF   8241 	C$easyax5043.c$1146$3$302 ==.
                           8242 ;	..\COMMON\easyax5043.c:1146: update_timeanchor();
   1C34 12 08 35           8243 	lcall	_update_timeanchor
                    1402   8244 	C$easyax5043.c$1147$3$302 ==.
                           8245 ;	..\COMMON\easyax5043.c:1147: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1C37 90 02 75           8246 	mov	dptr,#_axradio_cb_transmitend
   1C3A 12 4B 64           8247 	lcall	_wtimer_remove_callback
                    1408   8248 	C$easyax5043.c$1148$3$302 ==.
                           8249 ;	..\COMMON\easyax5043.c:1148: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   1C3D 90 02 7A           8250 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1C40 74 03              8251 	mov	a,#0x03
   1C42 F0                 8252 	movx	@dptr,a
                    140E   8253 	C$easyax5043.c$1149$3$302 ==.
                           8254 ;	..\COMMON\easyax5043.c:1149: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1C43 90 00 1A           8255 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1C46 E0                 8256 	movx	a,@dptr
   1C47 FC                 8257 	mov	r4,a
   1C48 A3                 8258 	inc	dptr
   1C49 E0                 8259 	movx	a,@dptr
   1C4A FD                 8260 	mov	r5,a
   1C4B A3                 8261 	inc	dptr
   1C4C E0                 8262 	movx	a,@dptr
   1C4D FE                 8263 	mov	r6,a
   1C4E A3                 8264 	inc	dptr
   1C4F E0                 8265 	movx	a,@dptr
   1C50 FF                 8266 	mov	r7,a
   1C51 90 02 7B           8267 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1C54 EC                 8268 	mov	a,r4
   1C55 F0                 8269 	movx	@dptr,a
   1C56 A3                 8270 	inc	dptr
   1C57 ED                 8271 	mov	a,r5
   1C58 F0                 8272 	movx	@dptr,a
   1C59 A3                 8273 	inc	dptr
   1C5A EE                 8274 	mov	a,r6
   1C5B F0                 8275 	movx	@dptr,a
   1C5C A3                 8276 	inc	dptr
   1C5D EF                 8277 	mov	a,r7
   1C5E F0                 8278 	movx	@dptr,a
                    142A   8279 	C$easyax5043.c$1150$3$302 ==.
                           8280 ;	..\COMMON\easyax5043.c:1150: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1C5F 90 02 75           8281 	mov	dptr,#_axradio_cb_transmitend
   1C62 12 3F BF           8282 	lcall	_wtimer_add_callback
                    1430   8283 	C$easyax5043.c$1153$2$297 ==.
                           8284 ;	..\COMMON\easyax5043.c:1153: break;
   1C65 02 20 6A           8285 	ljmp	00173$
                    1433   8286 	C$easyax5043.c$1155$2$297 ==.
                           8287 ;	..\COMMON\easyax5043.c:1155: case AXRADIO_MODE_SYNC_SLAVE:
   1C68                    8288 00150$:
                    1433   8289 	C$easyax5043.c$1156$2$297 ==.
                           8290 ;	..\COMMON\easyax5043.c:1156: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   1C68                    8291 00151$:
                    1433   8292 	C$easyax5043.c$1157$2$297 ==.
                           8293 ;	..\COMMON\easyax5043.c:1157: switch (axradio_syncstate) {
   1C68 90 00 04           8294 	mov	dptr,#_axradio_syncstate
   1C6B E0                 8295 	movx	a,@dptr
   1C6C FF                 8296 	mov  r7,a
   1C6D 24 F3              8297 	add	a,#0xff - 0x0C
   1C6F 40 2E              8298 	jc	00153$
   1C71 EF                 8299 	mov	a,r7
   1C72 2F                 8300 	add	a,r7
   1C73 2F                 8301 	add	a,r7
   1C74 90 1C 78           8302 	mov	dptr,#00256$
   1C77 73                 8303 	jmp	@a+dptr
   1C78                    8304 00256$:
   1C78 02 1C 9F           8305 	ljmp	00152$
   1C7B 02 1C 9F           8306 	ljmp	00152$
   1C7E 02 1C 9F           8307 	ljmp	00152$
   1C81 02 1C 9F           8308 	ljmp	00152$
   1C84 02 1C 9F           8309 	ljmp	00152$
   1C87 02 1C 9F           8310 	ljmp	00152$
   1C8A 02 1C 9F           8311 	ljmp	00153$
   1C8D 02 1D 2D           8312 	ljmp	00154$
   1C90 02 1D BE           8313 	ljmp	00155$
   1C93 02 1E 13           8314 	ljmp	00156$
   1C96 02 1E C7           8315 	ljmp	00159$
   1C99 02 1F 22           8316 	ljmp	00162$
   1C9C 02 20 3B           8317 	ljmp	00169$
                    146A   8318 	C$easyax5043.c$1158$3$305 ==.
                           8319 ;	..\COMMON\easyax5043.c:1158: default:
   1C9F                    8320 00152$:
                    146A   8321 	C$easyax5043.c$1159$3$305 ==.
                           8322 ;	..\COMMON\easyax5043.c:1159: case syncstate_slave_synchunt:
   1C9F                    8323 00153$:
                    146A   8324 	C$easyax5043.c$1160$3$305 ==.
                           8325 ;	..\COMMON\easyax5043.c:1160: ax5043_off();
   1C9F 12 14 7C           8326 	lcall	_ax5043_off
                    146D   8327 	C$easyax5043.c$1161$3$305 ==.
                           8328 ;	..\COMMON\easyax5043.c:1161: axradio_syncstate = syncstate_slave_syncpause;
   1CA2 90 00 04           8329 	mov	dptr,#_axradio_syncstate
   1CA5 74 07              8330 	mov	a,#0x07
   1CA7 F0                 8331 	movx	@dptr,a
                    1473   8332 	C$easyax5043.c$1162$3$305 ==.
                           8333 ;	..\COMMON\easyax5043.c:1162: axradio_sync_addtime(axradio_sync_slave_syncpause);
   1CA8 90 4F 4B           8334 	mov	dptr,#_axradio_sync_slave_syncpause
   1CAB E4                 8335 	clr	a
   1CAC 93                 8336 	movc	a,@a+dptr
   1CAD FC                 8337 	mov	r4,a
   1CAE 74 01              8338 	mov	a,#0x01
   1CB0 93                 8339 	movc	a,@a+dptr
   1CB1 FD                 8340 	mov	r5,a
   1CB2 74 02              8341 	mov	a,#0x02
   1CB4 93                 8342 	movc	a,@a+dptr
   1CB5 FE                 8343 	mov	r6,a
   1CB6 74 03              8344 	mov	a,#0x03
   1CB8 93                 8345 	movc	a,@a+dptr
   1CB9 8C 82              8346 	mov	dpl,r4
   1CBB 8D 83              8347 	mov	dph,r5
   1CBD 8E F0              8348 	mov	b,r6
   1CBF 12 16 1C           8349 	lcall	_axradio_sync_addtime
                    148D   8350 	C$easyax5043.c$1163$3$305 ==.
                           8351 ;	..\COMMON\easyax5043.c:1163: wtimer_remove(&axradio_timer);
   1CC2 90 02 89           8352 	mov	dptr,#_axradio_timer
   1CC5 12 49 5A           8353 	lcall	_wtimer_remove
                    1493   8354 	C$easyax5043.c$1164$3$305 ==.
                           8355 ;	..\COMMON\easyax5043.c:1164: axradio_timer.time = axradio_sync_time;
   1CC8 90 00 10           8356 	mov	dptr,#_axradio_sync_time
   1CCB E0                 8357 	movx	a,@dptr
   1CCC FC                 8358 	mov	r4,a
   1CCD A3                 8359 	inc	dptr
   1CCE E0                 8360 	movx	a,@dptr
   1CCF FD                 8361 	mov	r5,a
   1CD0 A3                 8362 	inc	dptr
   1CD1 E0                 8363 	movx	a,@dptr
   1CD2 FE                 8364 	mov	r6,a
   1CD3 A3                 8365 	inc	dptr
   1CD4 E0                 8366 	movx	a,@dptr
   1CD5 FF                 8367 	mov	r7,a
   1CD6 90 02 8D           8368 	mov	dptr,#(_axradio_timer + 0x0004)
   1CD9 EC                 8369 	mov	a,r4
   1CDA F0                 8370 	movx	@dptr,a
   1CDB A3                 8371 	inc	dptr
   1CDC ED                 8372 	mov	a,r5
   1CDD F0                 8373 	movx	@dptr,a
   1CDE A3                 8374 	inc	dptr
   1CDF EE                 8375 	mov	a,r6
   1CE0 F0                 8376 	movx	@dptr,a
   1CE1 A3                 8377 	inc	dptr
   1CE2 EF                 8378 	mov	a,r7
   1CE3 F0                 8379 	movx	@dptr,a
                    14AF   8380 	C$easyax5043.c$1165$3$305 ==.
                           8381 ;	..\COMMON\easyax5043.c:1165: wtimer0_addabsolute(&axradio_timer);
   1CE4 90 02 89           8382 	mov	dptr,#_axradio_timer
   1CE7 12 40 EC           8383 	lcall	_wtimer0_addabsolute
                    14B5   8384 	C$easyax5043.c$1166$3$305 ==.
                           8385 ;	..\COMMON\easyax5043.c:1166: wtimer_remove_callback(&axradio_cb_receive.cb);
   1CEA 90 02 32           8386 	mov	dptr,#_axradio_cb_receive
   1CED 12 4B 64           8387 	lcall	_wtimer_remove_callback
                    14BB   8388 	C$easyax5043.c$1167$3$305 ==.
                           8389 ;	..\COMMON\easyax5043.c:1167: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1CF0 75 27 00           8390 	mov	_memset_PARM_2,#0x00
   1CF3 75 28 1E           8391 	mov	_memset_PARM_3,#0x1E
   1CF6 75 29 00           8392 	mov	(_memset_PARM_3 + 1),#0x00
   1CF9 90 02 36           8393 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1CFC 75 F0 00           8394 	mov	b,#0x00
   1CFF 12 3F 4B           8395 	lcall	_memset
                    14CD   8396 	C$easyax5043.c$1168$3$305 ==.
                           8397 ;	..\COMMON\easyax5043.c:1168: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D02 90 00 1A           8398 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1D05 E0                 8399 	movx	a,@dptr
   1D06 FC                 8400 	mov	r4,a
   1D07 A3                 8401 	inc	dptr
   1D08 E0                 8402 	movx	a,@dptr
   1D09 FD                 8403 	mov	r5,a
   1D0A A3                 8404 	inc	dptr
   1D0B E0                 8405 	movx	a,@dptr
   1D0C FE                 8406 	mov	r6,a
   1D0D A3                 8407 	inc	dptr
   1D0E E0                 8408 	movx	a,@dptr
   1D0F FF                 8409 	mov	r7,a
   1D10 90 02 38           8410 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1D13 EC                 8411 	mov	a,r4
   1D14 F0                 8412 	movx	@dptr,a
   1D15 A3                 8413 	inc	dptr
   1D16 ED                 8414 	mov	a,r5
   1D17 F0                 8415 	movx	@dptr,a
   1D18 A3                 8416 	inc	dptr
   1D19 EE                 8417 	mov	a,r6
   1D1A F0                 8418 	movx	@dptr,a
   1D1B A3                 8419 	inc	dptr
   1D1C EF                 8420 	mov	a,r7
   1D1D F0                 8421 	movx	@dptr,a
                    14E9   8422 	C$easyax5043.c$1169$3$305 ==.
                           8423 ;	..\COMMON\easyax5043.c:1169: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNCTIMEOUT;
   1D1E 90 02 37           8424 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1D21 74 0A              8425 	mov	a,#0x0A
   1D23 F0                 8426 	movx	@dptr,a
                    14EF   8427 	C$easyax5043.c$1170$3$305 ==.
                           8428 ;	..\COMMON\easyax5043.c:1170: wtimer_add_callback(&axradio_cb_receive.cb);
   1D24 90 02 32           8429 	mov	dptr,#_axradio_cb_receive
   1D27 12 3F BF           8430 	lcall	_wtimer_add_callback
                    14F5   8431 	C$easyax5043.c$1171$3$305 ==.
                           8432 ;	..\COMMON\easyax5043.c:1171: break;
   1D2A 02 20 6A           8433 	ljmp	00173$
                    14F8   8434 	C$easyax5043.c$1173$3$305 ==.
                           8435 ;	..\COMMON\easyax5043.c:1173: case syncstate_slave_syncpause:
   1D2D                    8436 00154$:
                    14F8   8437 	C$easyax5043.c$1174$3$305 ==.
                           8438 ;	..\COMMON\easyax5043.c:1174: ax5043_receiver_on_continuous();
   1D2D 12 13 37           8439 	lcall	_ax5043_receiver_on_continuous
                    14FB   8440 	C$easyax5043.c$1175$3$305 ==.
                           8441 ;	..\COMMON\easyax5043.c:1175: axradio_syncstate = syncstate_slave_synchunt;
   1D30 90 00 04           8442 	mov	dptr,#_axradio_syncstate
   1D33 74 06              8443 	mov	a,#0x06
   1D35 F0                 8444 	movx	@dptr,a
                    1501   8445 	C$easyax5043.c$1176$3$305 ==.
                           8446 ;	..\COMMON\easyax5043.c:1176: axradio_sync_addtime(axradio_sync_slave_syncwindow);
   1D36 90 4F 43           8447 	mov	dptr,#_axradio_sync_slave_syncwindow
   1D39 E4                 8448 	clr	a
   1D3A 93                 8449 	movc	a,@a+dptr
   1D3B FC                 8450 	mov	r4,a
   1D3C 74 01              8451 	mov	a,#0x01
   1D3E 93                 8452 	movc	a,@a+dptr
   1D3F FD                 8453 	mov	r5,a
   1D40 74 02              8454 	mov	a,#0x02
   1D42 93                 8455 	movc	a,@a+dptr
   1D43 FE                 8456 	mov	r6,a
   1D44 74 03              8457 	mov	a,#0x03
   1D46 93                 8458 	movc	a,@a+dptr
   1D47 8C 82              8459 	mov	dpl,r4
   1D49 8D 83              8460 	mov	dph,r5
   1D4B 8E F0              8461 	mov	b,r6
   1D4D 12 16 1C           8462 	lcall	_axradio_sync_addtime
                    151B   8463 	C$easyax5043.c$1177$3$305 ==.
                           8464 ;	..\COMMON\easyax5043.c:1177: wtimer_remove(&axradio_timer);
   1D50 90 02 89           8465 	mov	dptr,#_axradio_timer
   1D53 12 49 5A           8466 	lcall	_wtimer_remove
                    1521   8467 	C$easyax5043.c$1178$3$305 ==.
                           8468 ;	..\COMMON\easyax5043.c:1178: axradio_timer.time = axradio_sync_time;
   1D56 90 00 10           8469 	mov	dptr,#_axradio_sync_time
   1D59 E0                 8470 	movx	a,@dptr
   1D5A FC                 8471 	mov	r4,a
   1D5B A3                 8472 	inc	dptr
   1D5C E0                 8473 	movx	a,@dptr
   1D5D FD                 8474 	mov	r5,a
   1D5E A3                 8475 	inc	dptr
   1D5F E0                 8476 	movx	a,@dptr
   1D60 FE                 8477 	mov	r6,a
   1D61 A3                 8478 	inc	dptr
   1D62 E0                 8479 	movx	a,@dptr
   1D63 FF                 8480 	mov	r7,a
   1D64 90 02 8D           8481 	mov	dptr,#(_axradio_timer + 0x0004)
   1D67 EC                 8482 	mov	a,r4
   1D68 F0                 8483 	movx	@dptr,a
   1D69 A3                 8484 	inc	dptr
   1D6A ED                 8485 	mov	a,r5
   1D6B F0                 8486 	movx	@dptr,a
   1D6C A3                 8487 	inc	dptr
   1D6D EE                 8488 	mov	a,r6
   1D6E F0                 8489 	movx	@dptr,a
   1D6F A3                 8490 	inc	dptr
   1D70 EF                 8491 	mov	a,r7
   1D71 F0                 8492 	movx	@dptr,a
                    153D   8493 	C$easyax5043.c$1179$3$305 ==.
                           8494 ;	..\COMMON\easyax5043.c:1179: wtimer0_addabsolute(&axradio_timer);
   1D72 90 02 89           8495 	mov	dptr,#_axradio_timer
   1D75 12 40 EC           8496 	lcall	_wtimer0_addabsolute
                    1543   8497 	C$easyax5043.c$1180$3$305 ==.
                           8498 ;	..\COMMON\easyax5043.c:1180: update_timeanchor();
   1D78 12 08 35           8499 	lcall	_update_timeanchor
                    1546   8500 	C$easyax5043.c$1181$3$305 ==.
                           8501 ;	..\COMMON\easyax5043.c:1181: wtimer_remove_callback(&axradio_cb_receive.cb);
   1D7B 90 02 32           8502 	mov	dptr,#_axradio_cb_receive
   1D7E 12 4B 64           8503 	lcall	_wtimer_remove_callback
                    154C   8504 	C$easyax5043.c$1182$3$305 ==.
                           8505 ;	..\COMMON\easyax5043.c:1182: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1D81 75 27 00           8506 	mov	_memset_PARM_2,#0x00
   1D84 75 28 1E           8507 	mov	_memset_PARM_3,#0x1E
   1D87 75 29 00           8508 	mov	(_memset_PARM_3 + 1),#0x00
   1D8A 90 02 36           8509 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1D8D 75 F0 00           8510 	mov	b,#0x00
   1D90 12 3F 4B           8511 	lcall	_memset
                    155E   8512 	C$easyax5043.c$1183$3$305 ==.
                           8513 ;	..\COMMON\easyax5043.c:1183: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D93 90 00 1A           8514 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1D96 E0                 8515 	movx	a,@dptr
   1D97 FC                 8516 	mov	r4,a
   1D98 A3                 8517 	inc	dptr
   1D99 E0                 8518 	movx	a,@dptr
   1D9A FD                 8519 	mov	r5,a
   1D9B A3                 8520 	inc	dptr
   1D9C E0                 8521 	movx	a,@dptr
   1D9D FE                 8522 	mov	r6,a
   1D9E A3                 8523 	inc	dptr
   1D9F E0                 8524 	movx	a,@dptr
   1DA0 FF                 8525 	mov	r7,a
   1DA1 90 02 38           8526 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1DA4 EC                 8527 	mov	a,r4
   1DA5 F0                 8528 	movx	@dptr,a
   1DA6 A3                 8529 	inc	dptr
   1DA7 ED                 8530 	mov	a,r5
   1DA8 F0                 8531 	movx	@dptr,a
   1DA9 A3                 8532 	inc	dptr
   1DAA EE                 8533 	mov	a,r6
   1DAB F0                 8534 	movx	@dptr,a
   1DAC A3                 8535 	inc	dptr
   1DAD EF                 8536 	mov	a,r7
   1DAE F0                 8537 	movx	@dptr,a
                    157A   8538 	C$easyax5043.c$1184$3$305 ==.
                           8539 ;	..\COMMON\easyax5043.c:1184: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1DAF 90 02 37           8540 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1DB2 74 09              8541 	mov	a,#0x09
   1DB4 F0                 8542 	movx	@dptr,a
                    1580   8543 	C$easyax5043.c$1185$3$305 ==.
                           8544 ;	..\COMMON\easyax5043.c:1185: wtimer_add_callback(&axradio_cb_receive.cb);
   1DB5 90 02 32           8545 	mov	dptr,#_axradio_cb_receive
   1DB8 12 3F BF           8546 	lcall	_wtimer_add_callback
                    1586   8547 	C$easyax5043.c$1186$3$305 ==.
                           8548 ;	..\COMMON\easyax5043.c:1186: break;
   1DBB 02 20 6A           8549 	ljmp	00173$
                    1589   8550 	C$easyax5043.c$1188$3$305 ==.
                           8551 ;	..\COMMON\easyax5043.c:1188: case syncstate_slave_rxidle:
   1DBE                    8552 00155$:
                    1589   8553 	C$easyax5043.c$1189$3$305 ==.
                           8554 ;	..\COMMON\easyax5043.c:1189: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1DBE 90 40 02           8555 	mov	dptr,#_AX5043_PWRMODE
   1DC1 74 05              8556 	mov	a,#0x05
   1DC3 F0                 8557 	movx	@dptr,a
                    158F   8558 	C$easyax5043.c$1190$3$305 ==.
                           8559 ;	..\COMMON\easyax5043.c:1190: axradio_syncstate = syncstate_slave_rxxosc;
   1DC4 90 00 04           8560 	mov	dptr,#_axradio_syncstate
   1DC7 74 09              8561 	mov	a,#0x09
   1DC9 F0                 8562 	movx	@dptr,a
                    1595   8563 	C$easyax5043.c$1191$3$305 ==.
                           8564 ;	..\COMMON\easyax5043.c:1191: wtimer_remove(&axradio_timer);
   1DCA 90 02 89           8565 	mov	dptr,#_axradio_timer
   1DCD 12 49 5A           8566 	lcall	_wtimer_remove
                    159B   8567 	C$easyax5043.c$1192$3$305 ==.
                           8568 ;	..\COMMON\easyax5043.c:1192: axradio_timer.time += axradio_sync_xoscstartup;
   1DD0 90 02 8D           8569 	mov	dptr,#(_axradio_timer + 0x0004)
   1DD3 E0                 8570 	movx	a,@dptr
   1DD4 FC                 8571 	mov	r4,a
   1DD5 A3                 8572 	inc	dptr
   1DD6 E0                 8573 	movx	a,@dptr
   1DD7 FD                 8574 	mov	r5,a
   1DD8 A3                 8575 	inc	dptr
   1DD9 E0                 8576 	movx	a,@dptr
   1DDA FE                 8577 	mov	r6,a
   1DDB A3                 8578 	inc	dptr
   1DDC E0                 8579 	movx	a,@dptr
   1DDD FF                 8580 	mov	r7,a
   1DDE 90 4F 3F           8581 	mov	dptr,#_axradio_sync_xoscstartup
   1DE1 E4                 8582 	clr	a
   1DE2 93                 8583 	movc	a,@a+dptr
   1DE3 F8                 8584 	mov	r0,a
   1DE4 74 01              8585 	mov	a,#0x01
   1DE6 93                 8586 	movc	a,@a+dptr
   1DE7 F9                 8587 	mov	r1,a
   1DE8 74 02              8588 	mov	a,#0x02
   1DEA 93                 8589 	movc	a,@a+dptr
   1DEB FA                 8590 	mov	r2,a
   1DEC 74 03              8591 	mov	a,#0x03
   1DEE 93                 8592 	movc	a,@a+dptr
   1DEF FB                 8593 	mov	r3,a
   1DF0 E8                 8594 	mov	a,r0
   1DF1 2C                 8595 	add	a,r4
   1DF2 FC                 8596 	mov	r4,a
   1DF3 E9                 8597 	mov	a,r1
   1DF4 3D                 8598 	addc	a,r5
   1DF5 FD                 8599 	mov	r5,a
   1DF6 EA                 8600 	mov	a,r2
   1DF7 3E                 8601 	addc	a,r6
   1DF8 FE                 8602 	mov	r6,a
   1DF9 EB                 8603 	mov	a,r3
   1DFA 3F                 8604 	addc	a,r7
   1DFB FF                 8605 	mov	r7,a
   1DFC 90 02 8D           8606 	mov	dptr,#(_axradio_timer + 0x0004)
   1DFF EC                 8607 	mov	a,r4
   1E00 F0                 8608 	movx	@dptr,a
   1E01 A3                 8609 	inc	dptr
   1E02 ED                 8610 	mov	a,r5
   1E03 F0                 8611 	movx	@dptr,a
   1E04 A3                 8612 	inc	dptr
   1E05 EE                 8613 	mov	a,r6
   1E06 F0                 8614 	movx	@dptr,a
   1E07 A3                 8615 	inc	dptr
   1E08 EF                 8616 	mov	a,r7
   1E09 F0                 8617 	movx	@dptr,a
                    15D5   8618 	C$easyax5043.c$1193$3$305 ==.
                           8619 ;	..\COMMON\easyax5043.c:1193: wtimer0_addabsolute(&axradio_timer);
   1E0A 90 02 89           8620 	mov	dptr,#_axradio_timer
   1E0D 12 40 EC           8621 	lcall	_wtimer0_addabsolute
                    15DB   8622 	C$easyax5043.c$1194$3$305 ==.
                           8623 ;	..\COMMON\easyax5043.c:1194: break;
   1E10 02 20 6A           8624 	ljmp	00173$
                    15DE   8625 	C$easyax5043.c$1196$3$305 ==.
                           8626 ;	..\COMMON\easyax5043.c:1196: case syncstate_slave_rxxosc:
   1E13                    8627 00156$:
                    15DE   8628 	C$easyax5043.c$1197$3$305 ==.
                           8629 ;	..\COMMON\easyax5043.c:1197: ax5043_receiver_on_continuous();
   1E13 12 13 37           8630 	lcall	_ax5043_receiver_on_continuous
                    15E1   8631 	C$easyax5043.c$1198$3$305 ==.
                           8632 ;	..\COMMON\easyax5043.c:1198: axradio_syncstate = syncstate_slave_rxsfdwindow;
   1E16 90 00 04           8633 	mov	dptr,#_axradio_syncstate
   1E19 74 0A              8634 	mov	a,#0x0A
   1E1B F0                 8635 	movx	@dptr,a
                    15E7   8636 	C$easyax5043.c$1199$3$305 ==.
                           8637 ;	..\COMMON\easyax5043.c:1199: update_timeanchor();
   1E1C 12 08 35           8638 	lcall	_update_timeanchor
                    15EA   8639 	C$easyax5043.c$1200$3$305 ==.
                           8640 ;	..\COMMON\easyax5043.c:1200: wtimer_remove_callback(&axradio_cb_receive.cb);
   1E1F 90 02 32           8641 	mov	dptr,#_axradio_cb_receive
   1E22 12 4B 64           8642 	lcall	_wtimer_remove_callback
                    15F0   8643 	C$easyax5043.c$1201$3$305 ==.
                           8644 ;	..\COMMON\easyax5043.c:1201: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1E25 75 27 00           8645 	mov	_memset_PARM_2,#0x00
   1E28 75 28 1E           8646 	mov	_memset_PARM_3,#0x1E
   1E2B 75 29 00           8647 	mov	(_memset_PARM_3 + 1),#0x00
   1E2E 90 02 36           8648 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1E31 75 F0 00           8649 	mov	b,#0x00
   1E34 12 3F 4B           8650 	lcall	_memset
                    1602   8651 	C$easyax5043.c$1202$3$305 ==.
                           8652 ;	..\COMMON\easyax5043.c:1202: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1E37 90 00 1A           8653 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1E3A E0                 8654 	movx	a,@dptr
   1E3B FC                 8655 	mov	r4,a
   1E3C A3                 8656 	inc	dptr
   1E3D E0                 8657 	movx	a,@dptr
   1E3E FD                 8658 	mov	r5,a
   1E3F A3                 8659 	inc	dptr
   1E40 E0                 8660 	movx	a,@dptr
   1E41 FE                 8661 	mov	r6,a
   1E42 A3                 8662 	inc	dptr
   1E43 E0                 8663 	movx	a,@dptr
   1E44 FF                 8664 	mov	r7,a
   1E45 90 02 38           8665 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1E48 EC                 8666 	mov	a,r4
   1E49 F0                 8667 	movx	@dptr,a
   1E4A A3                 8668 	inc	dptr
   1E4B ED                 8669 	mov	a,r5
   1E4C F0                 8670 	movx	@dptr,a
   1E4D A3                 8671 	inc	dptr
   1E4E EE                 8672 	mov	a,r6
   1E4F F0                 8673 	movx	@dptr,a
   1E50 A3                 8674 	inc	dptr
   1E51 EF                 8675 	mov	a,r7
   1E52 F0                 8676 	movx	@dptr,a
                    161E   8677 	C$easyax5043.c$1203$3$305 ==.
                           8678 ;	..\COMMON\easyax5043.c:1203: axradio_cb_receive.st.error = AXRADIO_ERR_RECEIVESTART;
   1E53 90 02 37           8679 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1E56 74 0B              8680 	mov	a,#0x0B
   1E58 F0                 8681 	movx	@dptr,a
                    1624   8682 	C$easyax5043.c$1204$3$305 ==.
                           8683 ;	..\COMMON\easyax5043.c:1204: wtimer_add_callback(&axradio_cb_receive.cb);
   1E59 90 02 32           8684 	mov	dptr,#_axradio_cb_receive
   1E5C 12 3F BF           8685 	lcall	_wtimer_add_callback
                    162A   8686 	C$easyax5043.c$1205$3$305 ==.
                           8687 ;	..\COMMON\easyax5043.c:1205: wtimer_remove(&axradio_timer);
   1E5F 90 02 89           8688 	mov	dptr,#_axradio_timer
   1E62 12 49 5A           8689 	lcall	_wtimer_remove
                    1630   8690 	C$easyax5043.c$1207$4$305 ==.
                           8691 ;	..\COMMON\easyax5043.c:1207: uint8_t __autodata idx = axradio_sync_seqnr;
   1E65 90 00 0F           8692 	mov	dptr,#_axradio_ack_seqnr
   1E68 E0                 8693 	movx	a,@dptr
   1E69 FF                 8694 	mov	r7,a
                    1635   8695 	C$easyax5043.c$1208$4$306 ==.
                           8696 ;	..\COMMON\easyax5043.c:1208: if (idx >= axradio_sync_slave_nrrx)
   1E6A 90 4F 52           8697 	mov	dptr,#_axradio_sync_slave_nrrx
   1E6D E4                 8698 	clr	a
   1E6E 93                 8699 	movc	a,@a+dptr
   1E6F FE                 8700 	mov	r6,a
   1E70 C3                 8701 	clr	c
   1E71 EF                 8702 	mov	a,r7
   1E72 9E                 8703 	subb	a,r6
   1E73 40 03              8704 	jc	00158$
                    1640   8705 	C$easyax5043.c$1209$4$306 ==.
                           8706 ;	..\COMMON\easyax5043.c:1209: idx = axradio_sync_slave_nrrx - 1;
   1E75 EE                 8707 	mov	a,r6
   1E76 14                 8708 	dec	a
   1E77 FF                 8709 	mov	r7,a
   1E78                    8710 00158$:
                    1643   8711 	C$easyax5043.c$1210$4$306 ==.
                           8712 ;	..\COMMON\easyax5043.c:1210: axradio_timer.time += axradio_sync_slave_rxwindow[idx];
   1E78 90 02 8D           8713 	mov	dptr,#(_axradio_timer + 0x0004)
   1E7B E0                 8714 	movx	a,@dptr
   1E7C FB                 8715 	mov	r3,a
   1E7D A3                 8716 	inc	dptr
   1E7E E0                 8717 	movx	a,@dptr
   1E7F FC                 8718 	mov	r4,a
   1E80 A3                 8719 	inc	dptr
   1E81 E0                 8720 	movx	a,@dptr
   1E82 FD                 8721 	mov	r5,a
   1E83 A3                 8722 	inc	dptr
   1E84 E0                 8723 	movx	a,@dptr
   1E85 FE                 8724 	mov	r6,a
   1E86 EF                 8725 	mov	a,r7
   1E87 75 F0 04           8726 	mov	b,#0x04
   1E8A A4                 8727 	mul	ab
   1E8B 24 5F              8728 	add	a,#_axradio_sync_slave_rxwindow
   1E8D F5 82              8729 	mov	dpl,a
   1E8F 74 4F              8730 	mov	a,#(_axradio_sync_slave_rxwindow >> 8)
   1E91 35 F0              8731 	addc	a,b
   1E93 F5 83              8732 	mov	dph,a
   1E95 E4                 8733 	clr	a
   1E96 93                 8734 	movc	a,@a+dptr
   1E97 F8                 8735 	mov	r0,a
   1E98 A3                 8736 	inc	dptr
   1E99 E4                 8737 	clr	a
   1E9A 93                 8738 	movc	a,@a+dptr
   1E9B F9                 8739 	mov	r1,a
   1E9C A3                 8740 	inc	dptr
   1E9D E4                 8741 	clr	a
   1E9E 93                 8742 	movc	a,@a+dptr
   1E9F FA                 8743 	mov	r2,a
   1EA0 A3                 8744 	inc	dptr
   1EA1 E4                 8745 	clr	a
   1EA2 93                 8746 	movc	a,@a+dptr
   1EA3 FF                 8747 	mov	r7,a
   1EA4 E8                 8748 	mov	a,r0
   1EA5 2B                 8749 	add	a,r3
   1EA6 FB                 8750 	mov	r3,a
   1EA7 E9                 8751 	mov	a,r1
   1EA8 3C                 8752 	addc	a,r4
   1EA9 FC                 8753 	mov	r4,a
   1EAA EA                 8754 	mov	a,r2
   1EAB 3D                 8755 	addc	a,r5
   1EAC FD                 8756 	mov	r5,a
   1EAD EF                 8757 	mov	a,r7
   1EAE 3E                 8758 	addc	a,r6
   1EAF FE                 8759 	mov	r6,a
   1EB0 90 02 8D           8760 	mov	dptr,#(_axradio_timer + 0x0004)
   1EB3 EB                 8761 	mov	a,r3
   1EB4 F0                 8762 	movx	@dptr,a
   1EB5 A3                 8763 	inc	dptr
   1EB6 EC                 8764 	mov	a,r4
   1EB7 F0                 8765 	movx	@dptr,a
   1EB8 A3                 8766 	inc	dptr
   1EB9 ED                 8767 	mov	a,r5
   1EBA F0                 8768 	movx	@dptr,a
   1EBB A3                 8769 	inc	dptr
   1EBC EE                 8770 	mov	a,r6
   1EBD F0                 8771 	movx	@dptr,a
                    1689   8772 	C$easyax5043.c$1212$3$305 ==.
                           8773 ;	..\COMMON\easyax5043.c:1212: wtimer0_addabsolute(&axradio_timer);
   1EBE 90 02 89           8774 	mov	dptr,#_axradio_timer
   1EC1 12 40 EC           8775 	lcall	_wtimer0_addabsolute
                    168F   8776 	C$easyax5043.c$1213$3$305 ==.
                           8777 ;	..\COMMON\easyax5043.c:1213: break;
   1EC4 02 20 6A           8778 	ljmp	00173$
                    1692   8779 	C$easyax5043.c$1215$3$305 ==.
                           8780 ;	..\COMMON\easyax5043.c:1215: case syncstate_slave_rxsfdwindow:
   1EC7                    8781 00159$:
                    1692   8782 	C$easyax5043.c$1216$3$305 ==.
                           8783 ;	..\COMMON\easyax5043.c:1216: if (!(0x0F & (uint8_t)~AX5043_RADIOSTATE)) {
   1EC7 90 40 1C           8784 	mov	dptr,#_AX5043_RADIOSTATE
   1ECA E0                 8785 	movx	a,@dptr
   1ECB F4                 8786 	cpl	a
   1ECC FF                 8787 	mov	r7,a
   1ECD 54 0F              8788 	anl	a,#0x0F
   1ECF 60 02              8789 	jz	00259$
   1ED1 80 4F              8790 	sjmp	00162$
   1ED3                    8791 00259$:
                    169E   8792 	C$easyax5043.c$1217$4$307 ==.
                           8793 ;	..\COMMON\easyax5043.c:1217: axradio_syncstate = syncstate_slave_rxpacket;
   1ED3 90 00 04           8794 	mov	dptr,#_axradio_syncstate
   1ED6 74 0B              8795 	mov	a,#0x0B
   1ED8 F0                 8796 	movx	@dptr,a
                    16A4   8797 	C$easyax5043.c$1218$4$307 ==.
                           8798 ;	..\COMMON\easyax5043.c:1218: wtimer_remove(&axradio_timer);
   1ED9 90 02 89           8799 	mov	dptr,#_axradio_timer
   1EDC 12 49 5A           8800 	lcall	_wtimer_remove
                    16AA   8801 	C$easyax5043.c$1219$4$307 ==.
                           8802 ;	..\COMMON\easyax5043.c:1219: axradio_timer.time += axradio_sync_slave_rxtimeout;
   1EDF 90 02 8D           8803 	mov	dptr,#(_axradio_timer + 0x0004)
   1EE2 E0                 8804 	movx	a,@dptr
   1EE3 FC                 8805 	mov	r4,a
   1EE4 A3                 8806 	inc	dptr
   1EE5 E0                 8807 	movx	a,@dptr
   1EE6 FD                 8808 	mov	r5,a
   1EE7 A3                 8809 	inc	dptr
   1EE8 E0                 8810 	movx	a,@dptr
   1EE9 FE                 8811 	mov	r6,a
   1EEA A3                 8812 	inc	dptr
   1EEB E0                 8813 	movx	a,@dptr
   1EEC FF                 8814 	mov	r7,a
   1EED 90 4F 6B           8815 	mov	dptr,#_axradio_sync_slave_rxtimeout
   1EF0 E4                 8816 	clr	a
   1EF1 93                 8817 	movc	a,@a+dptr
   1EF2 F8                 8818 	mov	r0,a
   1EF3 74 01              8819 	mov	a,#0x01
   1EF5 93                 8820 	movc	a,@a+dptr
   1EF6 F9                 8821 	mov	r1,a
   1EF7 74 02              8822 	mov	a,#0x02
   1EF9 93                 8823 	movc	a,@a+dptr
   1EFA FA                 8824 	mov	r2,a
   1EFB 74 03              8825 	mov	a,#0x03
   1EFD 93                 8826 	movc	a,@a+dptr
   1EFE FB                 8827 	mov	r3,a
   1EFF E8                 8828 	mov	a,r0
   1F00 2C                 8829 	add	a,r4
   1F01 FC                 8830 	mov	r4,a
   1F02 E9                 8831 	mov	a,r1
   1F03 3D                 8832 	addc	a,r5
   1F04 FD                 8833 	mov	r5,a
   1F05 EA                 8834 	mov	a,r2
   1F06 3E                 8835 	addc	a,r6
   1F07 FE                 8836 	mov	r6,a
   1F08 EB                 8837 	mov	a,r3
   1F09 3F                 8838 	addc	a,r7
   1F0A FF                 8839 	mov	r7,a
   1F0B 90 02 8D           8840 	mov	dptr,#(_axradio_timer + 0x0004)
   1F0E EC                 8841 	mov	a,r4
   1F0F F0                 8842 	movx	@dptr,a
   1F10 A3                 8843 	inc	dptr
   1F11 ED                 8844 	mov	a,r5
   1F12 F0                 8845 	movx	@dptr,a
   1F13 A3                 8846 	inc	dptr
   1F14 EE                 8847 	mov	a,r6
   1F15 F0                 8848 	movx	@dptr,a
   1F16 A3                 8849 	inc	dptr
   1F17 EF                 8850 	mov	a,r7
   1F18 F0                 8851 	movx	@dptr,a
                    16E4   8852 	C$easyax5043.c$1220$4$307 ==.
                           8853 ;	..\COMMON\easyax5043.c:1220: wtimer0_addabsolute(&axradio_timer);
   1F19 90 02 89           8854 	mov	dptr,#_axradio_timer
   1F1C 12 40 EC           8855 	lcall	_wtimer0_addabsolute
                    16EA   8856 	C$easyax5043.c$1221$4$307 ==.
                           8857 ;	..\COMMON\easyax5043.c:1221: break;
   1F1F 02 20 6A           8858 	ljmp	00173$
                    16ED   8859 	C$easyax5043.c$1225$3$305 ==.
                           8860 ;	..\COMMON\easyax5043.c:1225: case syncstate_slave_rxpacket:
   1F22                    8861 00162$:
                    16ED   8862 	C$easyax5043.c$1226$3$305 ==.
                           8863 ;	..\COMMON\easyax5043.c:1226: ax5043_off();
   1F22 12 14 7C           8864 	lcall	_ax5043_off
                    16F0   8865 	C$easyax5043.c$1227$3$305 ==.
                           8866 ;	..\COMMON\easyax5043.c:1227: if (!axradio_sync_seqnr)
   1F25 90 00 0F           8867 	mov	dptr,#_axradio_ack_seqnr
   1F28 E0                 8868 	movx	a,@dptr
   1F29 FF                 8869 	mov	r7,a
   1F2A 70 06              8870 	jnz	00164$
                    16F7   8871 	C$easyax5043.c$1228$3$305 ==.
                           8872 ;	..\COMMON\easyax5043.c:1228: axradio_sync_seqnr = 1;
   1F2C 90 00 0F           8873 	mov	dptr,#_axradio_ack_seqnr
   1F2F 74 01              8874 	mov	a,#0x01
   1F31 F0                 8875 	movx	@dptr,a
   1F32                    8876 00164$:
                    16FD   8877 	C$easyax5043.c$1229$3$305 ==.
                           8878 ;	..\COMMON\easyax5043.c:1229: ++axradio_sync_seqnr;
   1F32 90 00 0F           8879 	mov	dptr,#_axradio_ack_seqnr
   1F35 E0                 8880 	movx	a,@dptr
   1F36 24 01              8881 	add	a,#0x01
   1F38 F0                 8882 	movx	@dptr,a
                    1704   8883 	C$easyax5043.c$1230$3$305 ==.
                           8884 ;	..\COMMON\easyax5043.c:1230: update_timeanchor();
   1F39 12 08 35           8885 	lcall	_update_timeanchor
                    1707   8886 	C$easyax5043.c$1231$3$305 ==.
                           8887 ;	..\COMMON\easyax5043.c:1231: wtimer_remove_callback(&axradio_cb_receive.cb);
   1F3C 90 02 32           8888 	mov	dptr,#_axradio_cb_receive
   1F3F 12 4B 64           8889 	lcall	_wtimer_remove_callback
                    170D   8890 	C$easyax5043.c$1232$3$305 ==.
                           8891 ;	..\COMMON\easyax5043.c:1232: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1F42 75 27 00           8892 	mov	_memset_PARM_2,#0x00
   1F45 75 28 1E           8893 	mov	_memset_PARM_3,#0x1E
   1F48 75 29 00           8894 	mov	(_memset_PARM_3 + 1),#0x00
   1F4B 90 02 36           8895 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1F4E 75 F0 00           8896 	mov	b,#0x00
   1F51 12 3F 4B           8897 	lcall	_memset
                    171F   8898 	C$easyax5043.c$1233$3$305 ==.
                           8899 ;	..\COMMON\easyax5043.c:1233: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1F54 90 00 1A           8900 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1F57 E0                 8901 	movx	a,@dptr
   1F58 FC                 8902 	mov	r4,a
   1F59 A3                 8903 	inc	dptr
   1F5A E0                 8904 	movx	a,@dptr
   1F5B FD                 8905 	mov	r5,a
   1F5C A3                 8906 	inc	dptr
   1F5D E0                 8907 	movx	a,@dptr
   1F5E FE                 8908 	mov	r6,a
   1F5F A3                 8909 	inc	dptr
   1F60 E0                 8910 	movx	a,@dptr
   1F61 FF                 8911 	mov	r7,a
   1F62 90 02 38           8912 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1F65 EC                 8913 	mov	a,r4
   1F66 F0                 8914 	movx	@dptr,a
   1F67 A3                 8915 	inc	dptr
   1F68 ED                 8916 	mov	a,r5
   1F69 F0                 8917 	movx	@dptr,a
   1F6A A3                 8918 	inc	dptr
   1F6B EE                 8919 	mov	a,r6
   1F6C F0                 8920 	movx	@dptr,a
   1F6D A3                 8921 	inc	dptr
   1F6E EF                 8922 	mov	a,r7
   1F6F F0                 8923 	movx	@dptr,a
                    173B   8924 	C$easyax5043.c$1234$3$305 ==.
                           8925 ;	..\COMMON\easyax5043.c:1234: axradio_cb_receive.st.error = AXRADIO_ERR_TIMEOUT;
   1F70 90 02 37           8926 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1F73 74 03              8927 	mov	a,#0x03
   1F75 F0                 8928 	movx	@dptr,a
                    1741   8929 	C$easyax5043.c$1235$3$305 ==.
                           8930 ;	..\COMMON\easyax5043.c:1235: if (axradio_sync_seqnr <= axradio_sync_slave_resyncloss) {
   1F76 90 00 0F           8931 	mov	dptr,#_axradio_ack_seqnr
   1F79 E0                 8932 	movx	a,@dptr
   1F7A FF                 8933 	mov	r7,a
   1F7B 90 4F 51           8934 	mov	dptr,#_axradio_sync_slave_resyncloss
   1F7E E4                 8935 	clr	a
   1F7F 93                 8936 	movc	a,@a+dptr
   1F80 FE                 8937 	mov	r6,a
   1F81 C3                 8938 	clr	c
   1F82 9F                 8939 	subb	a,r7
   1F83 40 57              8940 	jc	00168$
                    1750   8941 	C$easyax5043.c$1236$4$308 ==.
                           8942 ;	..\COMMON\easyax5043.c:1236: wtimer_add_callback(&axradio_cb_receive.cb);
   1F85 90 02 32           8943 	mov	dptr,#_axradio_cb_receive
   1F88 12 3F BF           8944 	lcall	_wtimer_add_callback
                    1756   8945 	C$easyax5043.c$1237$4$308 ==.
                           8946 ;	..\COMMON\easyax5043.c:1237: axradio_sync_slave_nextperiod();
   1F8B 12 17 D3           8947 	lcall	_axradio_sync_slave_nextperiod
                    1759   8948 	C$easyax5043.c$1238$4$308 ==.
                           8949 ;	..\COMMON\easyax5043.c:1238: axradio_syncstate = syncstate_slave_rxidle;
   1F8E 90 00 04           8950 	mov	dptr,#_axradio_syncstate
   1F91 74 08              8951 	mov	a,#0x08
   1F93 F0                 8952 	movx	@dptr,a
                    175F   8953 	C$easyax5043.c$1239$4$308 ==.
                           8954 ;	..\COMMON\easyax5043.c:1239: wtimer_remove(&axradio_timer);
   1F94 90 02 89           8955 	mov	dptr,#_axradio_timer
   1F97 12 49 5A           8956 	lcall	_wtimer_remove
                    1765   8957 	C$easyax5043.c$1241$5$308 ==.
                           8958 ;	..\COMMON\easyax5043.c:1241: uint8_t __autodata idx = axradio_sync_seqnr;
   1F9A 90 00 0F           8959 	mov	dptr,#_axradio_ack_seqnr
   1F9D E0                 8960 	movx	a,@dptr
   1F9E FF                 8961 	mov	r7,a
                    176A   8962 	C$easyax5043.c$1242$5$309 ==.
                           8963 ;	..\COMMON\easyax5043.c:1242: if (idx >= axradio_sync_slave_nrrx)
   1F9F 90 4F 52           8964 	mov	dptr,#_axradio_sync_slave_nrrx
   1FA2 E4                 8965 	clr	a
   1FA3 93                 8966 	movc	a,@a+dptr
   1FA4 FE                 8967 	mov	r6,a
   1FA5 C3                 8968 	clr	c
   1FA6 EF                 8969 	mov	a,r7
   1FA7 9E                 8970 	subb	a,r6
   1FA8 40 03              8971 	jc	00166$
                    1775   8972 	C$easyax5043.c$1243$5$309 ==.
                           8973 ;	..\COMMON\easyax5043.c:1243: idx = axradio_sync_slave_nrrx - 1;
   1FAA EE                 8974 	mov	a,r6
   1FAB 14                 8975 	dec	a
   1FAC FF                 8976 	mov	r7,a
   1FAD                    8977 00166$:
                    1778   8978 	C$easyax5043.c$1244$5$309 ==.
                           8979 ;	..\COMMON\easyax5043.c:1244: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[idx]);
   1FAD EF                 8980 	mov	a,r7
   1FAE 75 F0 04           8981 	mov	b,#0x04
   1FB1 A4                 8982 	mul	ab
   1FB2 24 53              8983 	add	a,#_axradio_sync_slave_rxadvance
   1FB4 F5 82              8984 	mov	dpl,a
   1FB6 74 4F              8985 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   1FB8 35 F0              8986 	addc	a,b
   1FBA F5 83              8987 	mov	dph,a
   1FBC E4                 8988 	clr	a
   1FBD 93                 8989 	movc	a,@a+dptr
   1FBE FC                 8990 	mov	r4,a
   1FBF A3                 8991 	inc	dptr
   1FC0 E4                 8992 	clr	a
   1FC1 93                 8993 	movc	a,@a+dptr
   1FC2 FD                 8994 	mov	r5,a
   1FC3 A3                 8995 	inc	dptr
   1FC4 E4                 8996 	clr	a
   1FC5 93                 8997 	movc	a,@a+dptr
   1FC6 FE                 8998 	mov	r6,a
   1FC7 A3                 8999 	inc	dptr
   1FC8 E4                 9000 	clr	a
   1FC9 93                 9001 	movc	a,@a+dptr
   1FCA 8C 82              9002 	mov	dpl,r4
   1FCC 8D 83              9003 	mov	dph,r5
   1FCE 8E F0              9004 	mov	b,r6
   1FD0 12 16 6D           9005 	lcall	_axradio_sync_settimeradv
                    179E   9006 	C$easyax5043.c$1246$4$308 ==.
                           9007 ;	..\COMMON\easyax5043.c:1246: wtimer0_addabsolute(&axradio_timer);
   1FD3 90 02 89           9008 	mov	dptr,#_axradio_timer
   1FD6 12 40 EC           9009 	lcall	_wtimer0_addabsolute
                    17A4   9010 	C$easyax5043.c$1247$4$308 ==.
                           9011 ;	..\COMMON\easyax5043.c:1247: break;
   1FD9 02 20 6A           9012 	ljmp	00173$
   1FDC                    9013 00168$:
                    17A7   9014 	C$easyax5043.c$1249$3$305 ==.
                           9015 ;	..\COMMON\easyax5043.c:1249: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1FDC 90 02 37           9016 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1FDF 74 09              9017 	mov	a,#0x09
   1FE1 F0                 9018 	movx	@dptr,a
                    17AD   9019 	C$easyax5043.c$1250$3$305 ==.
                           9020 ;	..\COMMON\easyax5043.c:1250: wtimer_add_callback(&axradio_cb_receive.cb);
   1FE2 90 02 32           9021 	mov	dptr,#_axradio_cb_receive
   1FE5 12 3F BF           9022 	lcall	_wtimer_add_callback
                    17B3   9023 	C$easyax5043.c$1251$3$305 ==.
                           9024 ;	..\COMMON\easyax5043.c:1251: ax5043_receiver_on_continuous();
   1FE8 12 13 37           9025 	lcall	_ax5043_receiver_on_continuous
                    17B6   9026 	C$easyax5043.c$1252$3$305 ==.
                           9027 ;	..\COMMON\easyax5043.c:1252: axradio_syncstate = syncstate_slave_synchunt;
   1FEB 90 00 04           9028 	mov	dptr,#_axradio_syncstate
   1FEE 74 06              9029 	mov	a,#0x06
   1FF0 F0                 9030 	movx	@dptr,a
                    17BC   9031 	C$easyax5043.c$1253$3$305 ==.
                           9032 ;	..\COMMON\easyax5043.c:1253: wtimer_remove(&axradio_timer);
   1FF1 90 02 89           9033 	mov	dptr,#_axradio_timer
   1FF4 12 49 5A           9034 	lcall	_wtimer_remove
                    17C2   9035 	C$easyax5043.c$1254$3$305 ==.
                           9036 ;	..\COMMON\easyax5043.c:1254: axradio_timer.time = axradio_sync_slave_syncwindow;
   1FF7 90 4F 43           9037 	mov	dptr,#_axradio_sync_slave_syncwindow
   1FFA E4                 9038 	clr	a
   1FFB 93                 9039 	movc	a,@a+dptr
   1FFC FC                 9040 	mov	r4,a
   1FFD 74 01              9041 	mov	a,#0x01
   1FFF 93                 9042 	movc	a,@a+dptr
   2000 FD                 9043 	mov	r5,a
   2001 74 02              9044 	mov	a,#0x02
   2003 93                 9045 	movc	a,@a+dptr
   2004 FE                 9046 	mov	r6,a
   2005 74 03              9047 	mov	a,#0x03
   2007 93                 9048 	movc	a,@a+dptr
   2008 FF                 9049 	mov	r7,a
   2009 90 02 8D           9050 	mov	dptr,#(_axradio_timer + 0x0004)
   200C EC                 9051 	mov	a,r4
   200D F0                 9052 	movx	@dptr,a
   200E A3                 9053 	inc	dptr
   200F ED                 9054 	mov	a,r5
   2010 F0                 9055 	movx	@dptr,a
   2011 A3                 9056 	inc	dptr
   2012 EE                 9057 	mov	a,r6
   2013 F0                 9058 	movx	@dptr,a
   2014 A3                 9059 	inc	dptr
   2015 EF                 9060 	mov	a,r7
   2016 F0                 9061 	movx	@dptr,a
                    17E2   9062 	C$easyax5043.c$1255$3$305 ==.
                           9063 ;	..\COMMON\easyax5043.c:1255: wtimer0_addrelative(&axradio_timer);
   2017 90 02 89           9064 	mov	dptr,#_axradio_timer
   201A 12 3F D9           9065 	lcall	_wtimer0_addrelative
                    17E8   9066 	C$easyax5043.c$1256$3$305 ==.
                           9067 ;	..\COMMON\easyax5043.c:1256: axradio_sync_time = axradio_timer.time;
   201D 90 02 8D           9068 	mov	dptr,#(_axradio_timer + 0x0004)
   2020 E0                 9069 	movx	a,@dptr
   2021 FC                 9070 	mov	r4,a
   2022 A3                 9071 	inc	dptr
   2023 E0                 9072 	movx	a,@dptr
   2024 FD                 9073 	mov	r5,a
   2025 A3                 9074 	inc	dptr
   2026 E0                 9075 	movx	a,@dptr
   2027 FE                 9076 	mov	r6,a
   2028 A3                 9077 	inc	dptr
   2029 E0                 9078 	movx	a,@dptr
   202A FF                 9079 	mov	r7,a
   202B 90 00 10           9080 	mov	dptr,#_axradio_sync_time
   202E EC                 9081 	mov	a,r4
   202F F0                 9082 	movx	@dptr,a
   2030 A3                 9083 	inc	dptr
   2031 ED                 9084 	mov	a,r5
   2032 F0                 9085 	movx	@dptr,a
   2033 A3                 9086 	inc	dptr
   2034 EE                 9087 	mov	a,r6
   2035 F0                 9088 	movx	@dptr,a
   2036 A3                 9089 	inc	dptr
   2037 EF                 9090 	mov	a,r7
   2038 F0                 9091 	movx	@dptr,a
                    1804   9092 	C$easyax5043.c$1257$3$305 ==.
                           9093 ;	..\COMMON\easyax5043.c:1257: break;
                    1804   9094 	C$easyax5043.c$1259$3$305 ==.
                           9095 ;	..\COMMON\easyax5043.c:1259: case syncstate_slave_rxack:
   2039 80 2F              9096 	sjmp	00173$
   203B                    9097 00169$:
                    1806   9098 	C$easyax5043.c$1260$3$305 ==.
                           9099 ;	..\COMMON\easyax5043.c:1260: axradio_syncstate = syncstate_slave_rxidle;
   203B 90 00 04           9100 	mov	dptr,#_axradio_syncstate
   203E 74 08              9101 	mov	a,#0x08
   2040 F0                 9102 	movx	@dptr,a
                    180C   9103 	C$easyax5043.c$1261$3$305 ==.
                           9104 ;	..\COMMON\easyax5043.c:1261: wtimer_remove(&axradio_timer);
   2041 90 02 89           9105 	mov	dptr,#_axradio_timer
   2044 12 49 5A           9106 	lcall	_wtimer_remove
                    1812   9107 	C$easyax5043.c$1262$3$305 ==.
                           9108 ;	..\COMMON\easyax5043.c:1262: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[1]);
   2047 90 4F 57           9109 	mov	dptr,#(_axradio_sync_slave_rxadvance + 0x0004)
   204A E4                 9110 	clr	a
   204B 93                 9111 	movc	a,@a+dptr
   204C FC                 9112 	mov	r4,a
   204D A3                 9113 	inc	dptr
   204E E4                 9114 	clr	a
   204F 93                 9115 	movc	a,@a+dptr
   2050 FD                 9116 	mov	r5,a
   2051 A3                 9117 	inc	dptr
   2052 E4                 9118 	clr	a
   2053 93                 9119 	movc	a,@a+dptr
   2054 FE                 9120 	mov	r6,a
   2055 A3                 9121 	inc	dptr
   2056 E4                 9122 	clr	a
   2057 93                 9123 	movc	a,@a+dptr
   2058 8C 82              9124 	mov	dpl,r4
   205A 8D 83              9125 	mov	dph,r5
   205C 8E F0              9126 	mov	b,r6
   205E 12 16 6D           9127 	lcall	_axradio_sync_settimeradv
                    182C   9128 	C$easyax5043.c$1263$3$305 ==.
                           9129 ;	..\COMMON\easyax5043.c:1263: wtimer0_addabsolute(&axradio_timer);
   2061 90 02 89           9130 	mov	dptr,#_axradio_timer
   2064 12 40 EC           9131 	lcall	_wtimer0_addabsolute
                    1832   9132 	C$easyax5043.c$1264$3$305 ==.
                           9133 ;	..\COMMON\easyax5043.c:1264: goto transmitack;
   2067 02 1A 33           9134 	ljmp	00131$
                    1835   9135 	C$easyax5043.c$1268$2$297 ==.
                           9136 ;	..\COMMON\easyax5043.c:1268: default:
   206A                    9137 00171$:
                    1835   9138 	C$easyax5043.c$1270$1$296 ==.
                           9139 ;	..\COMMON\easyax5043.c:1270: }
   206A                    9140 00173$:
                    1835   9141 	C$easyax5043.c$1271$1$296 ==.
                    1835   9142 	XFeasyax5043$axradio_timer_callback$0$0 ==.
   206A 22                 9143 	ret
                           9144 ;------------------------------------------------------------
                           9145 ;Allocation info for local variables in function 'axradio_callback_fwd'
                           9146 ;------------------------------------------------------------
                           9147 ;desc                      Allocated to registers r6 r7 
                           9148 ;------------------------------------------------------------
                    1836   9149 	Feasyax5043$axradio_callback_fwd$0$0 ==.
                    1836   9150 	C$easyax5043.c$1273$1$296 ==.
                           9151 ;	..\COMMON\easyax5043.c:1273: static __reentrantb void axradio_callback_fwd(struct wtimer_callback __xdata *desc) __reentrant
                           9152 ;	-----------------------------------------
                           9153 ;	 function axradio_callback_fwd
                           9154 ;	-----------------------------------------
   206B                    9155 _axradio_callback_fwd:
   206B AE 82              9156 	mov	r6,dpl
   206D AF 83              9157 	mov	r7,dph
                    183A   9158 	C$easyax5043.c$1275$1$311 ==.
                           9159 ;	..\COMMON\easyax5043.c:1275: axradio_statuschange((struct axradio_status __xdata *)(desc + 1));
   206F 74 04              9160 	mov	a,#0x04
   2071 2E                 9161 	add	a,r6
   2072 FE                 9162 	mov	r6,a
   2073 E4                 9163 	clr	a
   2074 3F                 9164 	addc	a,r7
   2075 FF                 9165 	mov	r7,a
   2076 8E 82              9166 	mov	dpl,r6
   2078 8F 83              9167 	mov	dph,r7
   207A 12 34 D6           9168 	lcall	_axradio_statuschange
                    1848   9169 	C$easyax5043.c$1276$1$311 ==.
                    1848   9170 	XFeasyax5043$axradio_callback_fwd$0$0 ==.
   207D 22                 9171 	ret
                           9172 ;------------------------------------------------------------
                           9173 ;Allocation info for local variables in function 'axradio_receive_callback_fwd'
                           9174 ;------------------------------------------------------------
                           9175 ;desc                      Allocated to registers 
                           9176 ;len                       Allocated to registers r6 r7 
                           9177 ;len                       Allocated to registers r6 r7 
                           9178 ;seqnr                     Allocated to registers r6 
                           9179 ;len_byte                  Allocated to registers r6 
                           9180 ;trxst                     Allocated to registers r6 
                           9181 ;iesave                    Allocated to registers r7 
                           9182 ;------------------------------------------------------------
                    1849   9183 	Feasyax5043$axradio_receive_callback_fwd$0$0 ==.
                    1849   9184 	C$easyax5043.c$1278$1$311 ==.
                           9185 ;	..\COMMON\easyax5043.c:1278: static void axradio_receive_callback_fwd(struct wtimer_callback __xdata *desc)
                           9186 ;	-----------------------------------------
                           9187 ;	 function axradio_receive_callback_fwd
                           9188 ;	-----------------------------------------
   207E                    9189 _axradio_receive_callback_fwd:
                    1849   9190 	C$easyax5043.c$1284$1$313 ==.
                           9191 ;	..\COMMON\easyax5043.c:1284: if (DBGLNKSTAT & 0x10)
   207E E5 E2              9192 	mov	a,_DBGLNKSTAT
   2080 30 E4 09           9193 	jnb	acc.4,00102$
                    184E   9194 	C$easyax5043.c$1285$1$313 ==.
                           9195 ;	..\COMMON\easyax5043.c:1285: dbglink_writestr("RX\n");
   2083 90 50 03           9196 	mov	dptr,#__str_0
   2086 75 F0 80           9197 	mov	b,#0x80
   2089 12 47 09           9198 	lcall	_dbglink_writestr
   208C                    9199 00102$:
                    1857   9200 	C$easyax5043.c$1288$1$313 ==.
                           9201 ;	..\COMMON\easyax5043.c:1288: if (axradio_cb_receive.st.error != AXRADIO_ERR_NOERROR) {
   208C 90 02 37           9202 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   208F E0                 9203 	movx	a,@dptr
   2090 60 09              9204 	jz	00104$
                    185D   9205 	C$easyax5043.c$1289$2$314 ==.
                           9206 ;	..\COMMON\easyax5043.c:1289: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   2092 90 02 36           9207 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2095 12 34 D6           9208 	lcall	_axradio_statuschange
                    1863   9209 	C$easyax5043.c$1290$2$314 ==.
                           9210 ;	..\COMMON\easyax5043.c:1290: return;
   2098 02 25 9F           9211 	ljmp	00182$
   209B                    9212 00104$:
                    1866   9213 	C$easyax5043.c$1292$1$313 ==.
                           9214 ;	..\COMMON\easyax5043.c:1292: if (axradio_phy_pn9 && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   209B 90 4E FE           9215 	mov	dptr,#_axradio_phy_pn9
   209E E4                 9216 	clr	a
   209F 93                 9217 	movc	a,@a+dptr
   20A0 FF                 9218 	mov	r7,a
   20A1 60 5C              9219 	jz	00106$
   20A3 74 1C              9220 	mov	a,#0x1C
   20A5 B5 0A 02           9221 	cjne	a,_axradio_mode,00265$
   20A8 80 55              9222 	sjmp	00106$
   20AA                    9223 00265$:
                    1875   9224 	C$easyax5043.c$1293$1$313 ==.
                           9225 ;	..\COMMON\easyax5043.c:1293: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   20AA 74 1D              9226 	mov	a,#0x1D
   20AC B5 0A 02           9227 	cjne	a,_axradio_mode,00266$
   20AF 80 4E              9228 	sjmp	00106$
   20B1                    9229 00266$:
                    187C   9230 	C$easyax5043.c$1294$1$313 ==.
                           9231 ;	..\COMMON\easyax5043.c:1294: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   20B1 74 1E              9232 	mov	a,#0x1E
   20B3 B5 0A 02           9233 	cjne	a,_axradio_mode,00267$
   20B6 80 47              9234 	sjmp	00106$
   20B8                    9235 00267$:
                    1883   9236 	C$easyax5043.c$1295$2$315 ==.
                           9237 ;	..\COMMON\easyax5043.c:1295: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   20B8 90 02 52           9238 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   20BB E0                 9239 	movx	a,@dptr
   20BC FE                 9240 	mov	r6,a
   20BD A3                 9241 	inc	dptr
   20BE E0                 9242 	movx	a,@dptr
   20BF FF                 9243 	mov	r7,a
                    188B   9244 	C$easyax5043.c$1296$2$315 ==.
                           9245 ;	..\COMMON\easyax5043.c:1296: len += axradio_framing_maclen;
   20C0 90 4F 1F           9246 	mov	dptr,#_axradio_framing_maclen
   20C3 E4                 9247 	clr	a
   20C4 93                 9248 	movc	a,@a+dptr
   20C5 7C 00              9249 	mov	r4,#0x00
   20C7 2E                 9250 	add	a,r6
   20C8 FE                 9251 	mov	r6,a
   20C9 EC                 9252 	mov	a,r4
   20CA 3F                 9253 	addc	a,r7
   20CB FF                 9254 	mov	r7,a
                    1897   9255 	C$easyax5043.c$1297$2$315 ==.
                           9256 ;	..\COMMON\easyax5043.c:1297: pn9_buffer((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len, 0x1ff, -(AX5043_ENCODING & 0x01));
   20CC 90 40 11           9257 	mov	dptr,#_AX5043_ENCODING
   20CF E0                 9258 	movx	a,@dptr
   20D0 FD                 9259 	mov	r5,a
   20D1 53 05 01           9260 	anl	ar5,#0x01
   20D4 C3                 9261 	clr	c
   20D5 E4                 9262 	clr	a
   20D6 9D                 9263 	subb	a,r5
   20D7 FD                 9264 	mov	r5,a
   20D8 90 02 4E           9265 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   20DB E0                 9266 	movx	a,@dptr
   20DC FB                 9267 	mov	r3,a
   20DD A3                 9268 	inc	dptr
   20DE E0                 9269 	movx	a,@dptr
   20DF FC                 9270 	mov	r4,a
   20E0 7A 00              9271 	mov	r2,#0x00
   20E2 C0 05              9272 	push	ar5
   20E4 74 FF              9273 	mov	a,#0xFF
   20E6 C0 E0              9274 	push	acc
   20E8 74 01              9275 	mov	a,#0x01
   20EA C0 E0              9276 	push	acc
   20EC C0 06              9277 	push	ar6
   20EE C0 07              9278 	push	ar7
   20F0 8B 82              9279 	mov	dpl,r3
   20F2 8C 83              9280 	mov	dph,r4
   20F4 8A F0              9281 	mov	b,r2
   20F6 12 41 3F           9282 	lcall	_pn9_buffer
   20F9 E5 81              9283 	mov	a,sp
   20FB 24 FB              9284 	add	a,#0xfb
   20FD F5 81              9285 	mov	sp,a
   20FF                    9286 00106$:
                    18CA   9287 	C$easyax5043.c$1299$1$313 ==.
                           9288 ;	..\COMMON\easyax5043.c:1299: if (axradio_framing_swcrclen && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   20FF 90 4F 26           9289 	mov	dptr,#_axradio_framing_swcrclen
   2102 E4                 9290 	clr	a
   2103 93                 9291 	movc	a,@a+dptr
   2104 FF                 9292 	mov	r7,a
   2105 60 67              9293 	jz	00113$
   2107 74 1C              9294 	mov	a,#0x1C
   2109 B5 0A 02           9295 	cjne	a,_axradio_mode,00269$
   210C 80 60              9296 	sjmp	00113$
   210E                    9297 00269$:
                    18D9   9298 	C$easyax5043.c$1300$1$313 ==.
                           9299 ;	..\COMMON\easyax5043.c:1300: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   210E 74 1D              9300 	mov	a,#0x1D
   2110 B5 0A 02           9301 	cjne	a,_axradio_mode,00270$
   2113 80 59              9302 	sjmp	00113$
   2115                    9303 00270$:
                    18E0   9304 	C$easyax5043.c$1301$1$313 ==.
                           9305 ;	..\COMMON\easyax5043.c:1301: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   2115 74 1E              9306 	mov	a,#0x1E
   2117 B5 0A 02           9307 	cjne	a,_axradio_mode,00271$
   211A 80 52              9308 	sjmp	00113$
   211C                    9309 00271$:
                    18E7   9310 	C$easyax5043.c$1302$2$316 ==.
                           9311 ;	..\COMMON\easyax5043.c:1302: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   211C 90 02 52           9312 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   211F E0                 9313 	movx	a,@dptr
   2120 FE                 9314 	mov	r6,a
   2121 A3                 9315 	inc	dptr
   2122 E0                 9316 	movx	a,@dptr
   2123 FF                 9317 	mov	r7,a
                    18EF   9318 	C$easyax5043.c$1303$2$316 ==.
                           9319 ;	..\COMMON\easyax5043.c:1303: len += axradio_framing_maclen;
   2124 90 4F 1F           9320 	mov	dptr,#_axradio_framing_maclen
   2127 E4                 9321 	clr	a
   2128 93                 9322 	movc	a,@a+dptr
   2129 7C 00              9323 	mov	r4,#0x00
   212B 2E                 9324 	add	a,r6
   212C FE                 9325 	mov	r6,a
   212D EC                 9326 	mov	a,r4
   212E 3F                 9327 	addc	a,r7
   212F FF                 9328 	mov	r7,a
                    18FB   9329 	C$easyax5043.c$1304$2$316 ==.
                           9330 ;	..\COMMON\easyax5043.c:1304: if (!axradio_framing_check_crc((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len)) {
   2130 90 02 4E           9331 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2133 E0                 9332 	movx	a,@dptr
   2134 FC                 9333 	mov	r4,a
   2135 A3                 9334 	inc	dptr
   2136 E0                 9335 	movx	a,@dptr
   2137 FD                 9336 	mov	r5,a
   2138 C0 06              9337 	push	ar6
   213A C0 07              9338 	push	ar7
   213C 8C 82              9339 	mov	dpl,r4
   213E 8D 83              9340 	mov	dph,r5
   2140 12 06 2D           9341 	lcall	_axradio_framing_check_crc
   2143 AF 82              9342 	mov	r7,dpl
   2145 15 81              9343 	dec	sp
   2147 15 81              9344 	dec	sp
   2149 EF                 9345 	mov	a,r7
   214A 70 03              9346 	jnz	00272$
   214C 02 25 53           9347 	ljmp	00165$
   214F                    9348 00272$:
                    191A   9349 	C$easyax5043.c$1308$2$316 ==.
                           9350 ;	..\COMMON\easyax5043.c:1308: axradio_cb_receive.st.rx.pktlen -= axradio_framing_swcrclen; // drop crc
   214F 90 02 52           9351 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2152 E0                 9352 	movx	a,@dptr
   2153 FE                 9353 	mov	r6,a
   2154 A3                 9354 	inc	dptr
   2155 E0                 9355 	movx	a,@dptr
   2156 FF                 9356 	mov	r7,a
   2157 90 4F 26           9357 	mov	dptr,#_axradio_framing_swcrclen
   215A E4                 9358 	clr	a
   215B 93                 9359 	movc	a,@a+dptr
   215C FD                 9360 	mov	r5,a
   215D 7C 00              9361 	mov	r4,#0x00
   215F EE                 9362 	mov	a,r6
   2160 C3                 9363 	clr	c
   2161 9D                 9364 	subb	a,r5
   2162 FE                 9365 	mov	r6,a
   2163 EF                 9366 	mov	a,r7
   2164 9C                 9367 	subb	a,r4
   2165 FF                 9368 	mov	r7,a
   2166 90 02 52           9369 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2169 EE                 9370 	mov	a,r6
   216A F0                 9371 	movx	@dptr,a
   216B A3                 9372 	inc	dptr
   216C EF                 9373 	mov	a,r7
   216D F0                 9374 	movx	@dptr,a
   216E                    9375 00113$:
                    1939   9376 	C$easyax5043.c$1312$1$313 ==.
                           9377 ;	..\COMMON\easyax5043.c:1312: axradio_cb_receive.st.rx.phy.timeoffset = 0;
   216E 90 02 42           9378 	mov	dptr,#(_axradio_cb_receive + 0x0010)
                    193C   9379 	C$easyax5043.c$1313$1$313 ==.
                           9380 ;	..\COMMON\easyax5043.c:1313: axradio_cb_receive.st.rx.phy.period = 0;
   2171 E4                 9381 	clr	a
   2172 F0                 9382 	movx	@dptr,a
   2173 A3                 9383 	inc	dptr
   2174 F0                 9384 	movx	@dptr,a
   2175 90 02 44           9385 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   2178 F0                 9386 	movx	@dptr,a
   2179 A3                 9387 	inc	dptr
   217A E4                 9388 	clr	a
   217B F0                 9389 	movx	@dptr,a
                    1947   9390 	C$easyax5043.c$1314$1$313 ==.
                           9391 ;	..\COMMON\easyax5043.c:1314: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   217C 74 12              9392 	mov	a,#0x12
   217E B5 0A 02           9393 	cjne	a,_axradio_mode,00273$
   2181 80 0C              9394 	sjmp	00119$
   2183                    9395 00273$:
                    194E   9396 	C$easyax5043.c$1315$1$313 ==.
                           9397 ;	..\COMMON\easyax5043.c:1315: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   2183 74 13              9398 	mov	a,#0x13
   2185 B5 0A 02           9399 	cjne	a,_axradio_mode,00274$
   2188 80 05              9400 	sjmp	00119$
   218A                    9401 00274$:
                    1955   9402 	C$easyax5043.c$1316$1$313 ==.
                           9403 ;	..\COMMON\easyax5043.c:1316: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   218A 74 21              9404 	mov	a,#0x21
   218C B5 0A 60           9405 	cjne	a,_axradio_mode,00120$
   218F                    9406 00119$:
                    195A   9407 	C$easyax5043.c$1317$2$318 ==.
                           9408 ;	..\COMMON\easyax5043.c:1317: ax5043_off();
   218F 12 14 7C           9409 	lcall	_ax5043_off
                    195D   9410 	C$easyax5043.c$1318$2$318 ==.
                           9411 ;	..\COMMON\easyax5043.c:1318: wtimer_remove(&axradio_timer);
   2192 90 02 89           9412 	mov	dptr,#_axradio_timer
   2195 12 49 5A           9413 	lcall	_wtimer_remove
                    1963   9414 	C$easyax5043.c$1319$2$318 ==.
                           9415 ;	..\COMMON\easyax5043.c:1319: if (axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   2198 74 21              9416 	mov	a,#0x21
   219A B5 0A 26           9417 	cjne	a,_axradio_mode,00118$
                    1968   9418 	C$easyax5043.c$1320$3$319 ==.
                           9419 ;	..\COMMON\easyax5043.c:1320: axradio_syncstate = syncstate_master_normal;
   219D 90 00 04           9420 	mov	dptr,#_axradio_syncstate
   21A0 74 03              9421 	mov	a,#0x03
   21A2 F0                 9422 	movx	@dptr,a
                    196E   9423 	C$easyax5043.c$1321$3$319 ==.
                           9424 ;	..\COMMON\easyax5043.c:1321: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   21A3 90 4F 3F           9425 	mov	dptr,#_axradio_sync_xoscstartup
   21A6 E4                 9426 	clr	a
   21A7 93                 9427 	movc	a,@a+dptr
   21A8 FC                 9428 	mov	r4,a
   21A9 74 01              9429 	mov	a,#0x01
   21AB 93                 9430 	movc	a,@a+dptr
   21AC FD                 9431 	mov	r5,a
   21AD 74 02              9432 	mov	a,#0x02
   21AF 93                 9433 	movc	a,@a+dptr
   21B0 FE                 9434 	mov	r6,a
   21B1 74 03              9435 	mov	a,#0x03
   21B3 93                 9436 	movc	a,@a+dptr
   21B4 8C 82              9437 	mov	dpl,r4
   21B6 8D 83              9438 	mov	dph,r5
   21B8 8E F0              9439 	mov	b,r6
   21BA 12 16 6D           9440 	lcall	_axradio_sync_settimeradv
                    1988   9441 	C$easyax5043.c$1322$3$319 ==.
                           9442 ;	..\COMMON\easyax5043.c:1322: wtimer0_addabsolute(&axradio_timer);
   21BD 90 02 89           9443 	mov	dptr,#_axradio_timer
   21C0 12 40 EC           9444 	lcall	_wtimer0_addabsolute
   21C3                    9445 00118$:
                    198E   9446 	C$easyax5043.c$1324$2$318 ==.
                           9447 ;	..\COMMON\easyax5043.c:1324: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   21C3 90 02 75           9448 	mov	dptr,#_axradio_cb_transmitend
   21C6 12 4B 64           9449 	lcall	_wtimer_remove_callback
                    1994   9450 	C$easyax5043.c$1325$2$318 ==.
                           9451 ;	..\COMMON\easyax5043.c:1325: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   21C9 90 02 7A           9452 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   21CC E4                 9453 	clr	a
   21CD F0                 9454 	movx	@dptr,a
                    1999   9455 	C$easyax5043.c$1326$2$318 ==.
                           9456 ;	..\COMMON\easyax5043.c:1326: axradio_cb_transmitend.st.time.t = radio_read24((uint16_t)&AX5043_TIMER2);
   21CE 90 40 59           9457 	mov	dptr,#_AX5043_TIMER2
   21D1 12 41 18           9458 	lcall	_radio_read24
   21D4 AC 82              9459 	mov	r4,dpl
   21D6 AD 83              9460 	mov	r5,dph
   21D8 AE F0              9461 	mov	r6,b
   21DA FF                 9462 	mov	r7,a
   21DB 90 02 7B           9463 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   21DE EC                 9464 	mov	a,r4
   21DF F0                 9465 	movx	@dptr,a
   21E0 A3                 9466 	inc	dptr
   21E1 ED                 9467 	mov	a,r5
   21E2 F0                 9468 	movx	@dptr,a
   21E3 A3                 9469 	inc	dptr
   21E4 EE                 9470 	mov	a,r6
   21E5 F0                 9471 	movx	@dptr,a
   21E6 A3                 9472 	inc	dptr
   21E7 EF                 9473 	mov	a,r7
   21E8 F0                 9474 	movx	@dptr,a
                    19B4   9475 	C$easyax5043.c$1327$2$318 ==.
                           9476 ;	..\COMMON\easyax5043.c:1327: wtimer_add_callback(&axradio_cb_transmitend.cb);
   21E9 90 02 75           9477 	mov	dptr,#_axradio_cb_transmitend
   21EC 12 3F BF           9478 	lcall	_wtimer_add_callback
   21EF                    9479 00120$:
                    19BA   9480 	C$easyax5043.c$1329$1$313 ==.
                           9481 ;	..\COMMON\easyax5043.c:1329: if (axradio_framing_destaddrpos != 0xff)
   21EF 90 4F 21           9482 	mov	dptr,#_axradio_framing_destaddrpos
   21F2 E4                 9483 	clr	a
   21F3 93                 9484 	movc	a,@a+dptr
   21F4 FF                 9485 	mov	r7,a
   21F5 BF FF 02           9486 	cjne	r7,#0xFF,00279$
   21F8 80 29              9487 	sjmp	00124$
   21FA                    9488 00279$:
                    19C5   9489 	C$easyax5043.c$1330$1$313 ==.
                           9490 ;	..\COMMON\easyax5043.c:1330: memcpy_xdata(&axradio_cb_receive.st.rx.mac.localaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_destaddrpos], axradio_framing_addrlen);
   21FA 90 02 4E           9491 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   21FD E0                 9492 	movx	a,@dptr
   21FE FD                 9493 	mov	r5,a
   21FF A3                 9494 	inc	dptr
   2200 E0                 9495 	movx	a,@dptr
   2201 FE                 9496 	mov	r6,a
   2202 EF                 9497 	mov	a,r7
   2203 2D                 9498 	add	a,r5
   2204 FF                 9499 	mov	r7,a
   2205 E4                 9500 	clr	a
   2206 3E                 9501 	addc	a,r6
   2207 FC                 9502 	mov	r4,a
   2208 8F 27              9503 	mov	_memcpy_PARM_2,r7
   220A 8C 28              9504 	mov	(_memcpy_PARM_2 + 1),r4
   220C 75 29 00           9505 	mov	(_memcpy_PARM_2 + 2),#0x00
   220F 90 4F 20           9506 	mov	dptr,#_axradio_framing_addrlen
   2212 E4                 9507 	clr	a
   2213 93                 9508 	movc	a,@a+dptr
   2214 FF                 9509 	mov	r7,a
   2215 8F 2A              9510 	mov	_memcpy_PARM_3,r7
   2217 75 2B 00           9511 	mov	(_memcpy_PARM_3 + 1),#0x00
   221A 90 02 4A           9512 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   221D 75 F0 00           9513 	mov	b,#0x00
   2220 12 3F 6A           9514 	lcall	_memcpy
   2223                    9515 00124$:
                    19EE   9516 	C$easyax5043.c$1331$1$313 ==.
                           9517 ;	..\COMMON\easyax5043.c:1331: if (axradio_framing_sourceaddrpos != 0xff)
   2223 90 4F 22           9518 	mov	dptr,#_axradio_framing_sourceaddrpos
   2226 E4                 9519 	clr	a
   2227 93                 9520 	movc	a,@a+dptr
   2228 FF                 9521 	mov	r7,a
   2229 BF FF 02           9522 	cjne	r7,#0xFF,00280$
   222C 80 29              9523 	sjmp	00126$
   222E                    9524 00280$:
                    19F9   9525 	C$easyax5043.c$1332$1$313 ==.
                           9526 ;	..\COMMON\easyax5043.c:1332: memcpy_xdata(&axradio_cb_receive.st.rx.mac.remoteaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_sourceaddrpos], axradio_framing_addrlen);
   222E 90 02 4E           9527 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2231 E0                 9528 	movx	a,@dptr
   2232 FD                 9529 	mov	r5,a
   2233 A3                 9530 	inc	dptr
   2234 E0                 9531 	movx	a,@dptr
   2235 FE                 9532 	mov	r6,a
   2236 EF                 9533 	mov	a,r7
   2237 2D                 9534 	add	a,r5
   2238 FF                 9535 	mov	r7,a
   2239 E4                 9536 	clr	a
   223A 3E                 9537 	addc	a,r6
   223B FC                 9538 	mov	r4,a
   223C 8F 27              9539 	mov	_memcpy_PARM_2,r7
   223E 8C 28              9540 	mov	(_memcpy_PARM_2 + 1),r4
   2240 75 29 00           9541 	mov	(_memcpy_PARM_2 + 2),#0x00
   2243 90 4F 20           9542 	mov	dptr,#_axradio_framing_addrlen
   2246 E4                 9543 	clr	a
   2247 93                 9544 	movc	a,@a+dptr
   2248 FF                 9545 	mov	r7,a
   2249 8F 2A              9546 	mov	_memcpy_PARM_3,r7
   224B 75 2B 00           9547 	mov	(_memcpy_PARM_3 + 1),#0x00
   224E 90 02 46           9548 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   2251 75 F0 00           9549 	mov	b,#0x00
   2254 12 3F 6A           9550 	lcall	_memcpy
   2257                    9551 00126$:
                    1A22   9552 	C$easyax5043.c$1333$1$313 ==.
                           9553 ;	..\COMMON\easyax5043.c:1333: if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   2257 74 1A              9554 	mov	a,#0x1A
   2259 B5 0A 02           9555 	cjne	a,_axradio_mode,00281$
   225C 80 11              9556 	sjmp	00148$
   225E                    9557 00281$:
                    1A29   9558 	C$easyax5043.c$1334$1$313 ==.
                           9559 ;	..\COMMON\easyax5043.c:1334: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE ||
   225E 74 1B              9560 	mov	a,#0x1B
   2260 B5 0A 02           9561 	cjne	a,_axradio_mode,00282$
   2263 80 0A              9562 	sjmp	00148$
   2265                    9563 00282$:
                    1A30   9564 	C$easyax5043.c$1335$1$313 ==.
                           9565 ;	..\COMMON\easyax5043.c:1335: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2265 74 23              9566 	mov	a,#0x23
   2267 B5 0A 02           9567 	cjne	a,_axradio_mode,00283$
   226A 80 03              9568 	sjmp	00284$
   226C                    9569 00283$:
   226C 02 24 69           9570 	ljmp	00149$
   226F                    9571 00284$:
   226F                    9572 00148$:
                    1A3A   9573 	C$easyax5043.c$1336$2$320 ==.
                           9574 ;	..\COMMON\easyax5043.c:1336: axradio_ack_count = 0;
   226F 90 00 0E           9575 	mov	dptr,#_axradio_ack_count
   2272 E4                 9576 	clr	a
   2273 F0                 9577 	movx	@dptr,a
                    1A3F   9578 	C$easyax5043.c$1337$2$320 ==.
                           9579 ;	..\COMMON\easyax5043.c:1337: axradio_txbuffer_len = axradio_framing_maclen + axradio_framing_minpayloadlen;
   2274 90 4F 1F           9580 	mov	dptr,#_axradio_framing_maclen
   2277 E4                 9581 	clr	a
   2278 93                 9582 	movc	a,@a+dptr
   2279 FF                 9583 	mov	r7,a
   227A FD                 9584 	mov	r5,a
   227B 7E 00              9585 	mov	r6,#0x00
   227D 90 4F 38           9586 	mov	dptr,#_axradio_framing_minpayloadlen
   2280 E4                 9587 	clr	a
   2281 93                 9588 	movc	a,@a+dptr
   2282 FC                 9589 	mov	r4,a
   2283 7B 00              9590 	mov	r3,#0x00
   2285 90 00 05           9591 	mov	dptr,#_axradio_txbuffer_len
   2288 EC                 9592 	mov	a,r4
   2289 2D                 9593 	add	a,r5
   228A F0                 9594 	movx	@dptr,a
   228B EB                 9595 	mov	a,r3
   228C 3E                 9596 	addc	a,r6
   228D A3                 9597 	inc	dptr
   228E F0                 9598 	movx	@dptr,a
                    1A5A   9599 	C$easyax5043.c$1338$2$320 ==.
                           9600 ;	..\COMMON\easyax5043.c:1338: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   228F 8F 28              9601 	mov	_memset_PARM_3,r7
   2291 75 29 00           9602 	mov	(_memset_PARM_3 + 1),#0x00
   2294 75 27 00           9603 	mov	_memset_PARM_2,#0x00
   2297 90 00 2A           9604 	mov	dptr,#_axradio_txbuffer
   229A 75 F0 00           9605 	mov	b,#0x00
   229D 12 3F 4B           9606 	lcall	_memset
                    1A6B   9607 	C$easyax5043.c$1339$2$320 ==.
                           9608 ;	..\COMMON\easyax5043.c:1339: if (axradio_framing_ack_seqnrpos != 0xff) {
   22A0 90 4F 37           9609 	mov	dptr,#_axradio_framing_ack_seqnrpos
   22A3 E4                 9610 	clr	a
   22A4 93                 9611 	movc	a,@a+dptr
   22A5 FF                 9612 	mov	r7,a
   22A6 BF FF 02           9613 	cjne	r7,#0xFF,00285$
   22A9 80 35              9614 	sjmp	00131$
   22AB                    9615 00285$:
                    1A76   9616 	C$easyax5043.c$1340$3$321 ==.
                           9617 ;	..\COMMON\easyax5043.c:1340: uint8_t seqnr = axradio_cb_receive.st.rx.mac.raw[axradio_framing_ack_seqnrpos];
   22AB 90 02 4E           9618 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   22AE E0                 9619 	movx	a,@dptr
   22AF FD                 9620 	mov	r5,a
   22B0 A3                 9621 	inc	dptr
   22B1 E0                 9622 	movx	a,@dptr
   22B2 FE                 9623 	mov	r6,a
   22B3 EF                 9624 	mov	a,r7
   22B4 2D                 9625 	add	a,r5
   22B5 F5 82              9626 	mov	dpl,a
   22B7 E4                 9627 	clr	a
   22B8 3E                 9628 	addc	a,r6
   22B9 F5 83              9629 	mov	dph,a
   22BB E0                 9630 	movx	a,@dptr
   22BC FE                 9631 	mov	r6,a
                    1A88   9632 	C$easyax5043.c$1341$3$321 ==.
                           9633 ;	..\COMMON\easyax5043.c:1341: axradio_txbuffer[axradio_framing_ack_seqnrpos] = seqnr;
   22BD EF                 9634 	mov	a,r7
   22BE 24 2A              9635 	add	a,#_axradio_txbuffer
   22C0 F5 82              9636 	mov	dpl,a
   22C2 E4                 9637 	clr	a
   22C3 34 00              9638 	addc	a,#(_axradio_txbuffer >> 8)
   22C5 F5 83              9639 	mov	dph,a
   22C7 EE                 9640 	mov	a,r6
   22C8 F0                 9641 	movx	@dptr,a
                    1A94   9642 	C$easyax5043.c$1342$3$321 ==.
                           9643 ;	..\COMMON\easyax5043.c:1342: if (axradio_ack_seqnr != seqnr)
   22C9 90 00 0F           9644 	mov	dptr,#_axradio_ack_seqnr
   22CC E0                 9645 	movx	a,@dptr
   22CD FF                 9646 	mov	r7,a
   22CE B5 06 02           9647 	cjne	a,ar6,00286$
   22D1 80 07              9648 	sjmp	00128$
   22D3                    9649 00286$:
                    1A9E   9650 	C$easyax5043.c$1343$3$321 ==.
                           9651 ;	..\COMMON\easyax5043.c:1343: axradio_ack_seqnr = seqnr;
   22D3 90 00 0F           9652 	mov	dptr,#_axradio_ack_seqnr
   22D6 EE                 9653 	mov	a,r6
   22D7 F0                 9654 	movx	@dptr,a
   22D8 80 06              9655 	sjmp	00131$
   22DA                    9656 00128$:
                    1AA5   9657 	C$easyax5043.c$1345$3$321 ==.
                           9658 ;	..\COMMON\easyax5043.c:1345: axradio_cb_receive.st.error = AXRADIO_ERR_RETRANSMISSION;
   22DA 90 02 37           9659 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   22DD 74 08              9660 	mov	a,#0x08
   22DF F0                 9661 	movx	@dptr,a
   22E0                    9662 00131$:
                    1AAB   9663 	C$easyax5043.c$1347$2$320 ==.
                           9664 ;	..\COMMON\easyax5043.c:1347: if (axradio_framing_destaddrpos != 0xff) {
   22E0 90 4F 21           9665 	mov	dptr,#_axradio_framing_destaddrpos
   22E3 E4                 9666 	clr	a
   22E4 93                 9667 	movc	a,@a+dptr
   22E5 FF                 9668 	mov	r7,a
   22E6 BF FF 02           9669 	cjne	r7,#0xFF,00287$
   22E9 80 5B              9670 	sjmp	00136$
   22EB                    9671 00287$:
                    1AB6   9672 	C$easyax5043.c$1348$3$322 ==.
                           9673 ;	..\COMMON\easyax5043.c:1348: if (axradio_framing_sourceaddrpos != 0xff)
   22EB 90 4F 22           9674 	mov	dptr,#_axradio_framing_sourceaddrpos
   22EE E4                 9675 	clr	a
   22EF 93                 9676 	movc	a,@a+dptr
   22F0 FE                 9677 	mov	r6,a
   22F1 BE FF 02           9678 	cjne	r6,#0xFF,00288$
   22F4 80 29              9679 	sjmp	00133$
   22F6                    9680 00288$:
                    1AC1   9681 	C$easyax5043.c$1349$3$322 ==.
                           9682 ;	..\COMMON\easyax5043.c:1349: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_cb_receive.st.rx.mac.remoteaddr, axradio_framing_addrlen);
   22F6 EF                 9683 	mov	a,r7
   22F7 24 2A              9684 	add	a,#_axradio_txbuffer
   22F9 FD                 9685 	mov	r5,a
   22FA E4                 9686 	clr	a
   22FB 34 00              9687 	addc	a,#(_axradio_txbuffer >> 8)
   22FD FE                 9688 	mov	r6,a
   22FE 7C 00              9689 	mov	r4,#0x00
   2300 75 27 46           9690 	mov	_memcpy_PARM_2,#(_axradio_cb_receive + 0x0014)
   2303 75 28 02           9691 	mov	(_memcpy_PARM_2 + 1),#((_axradio_cb_receive + 0x0014) >> 8)
   2306 75 29 00           9692 	mov	(_memcpy_PARM_2 + 2),#0x00
   2309 90 4F 20           9693 	mov	dptr,#_axradio_framing_addrlen
   230C E4                 9694 	clr	a
   230D 93                 9695 	movc	a,@a+dptr
   230E FB                 9696 	mov	r3,a
   230F 8B 2A              9697 	mov	_memcpy_PARM_3,r3
   2311 75 2B 00           9698 	mov	(_memcpy_PARM_3 + 1),#0x00
   2314 8D 82              9699 	mov	dpl,r5
   2316 8E 83              9700 	mov	dph,r6
   2318 8C F0              9701 	mov	b,r4
   231A 12 3F 6A           9702 	lcall	_memcpy
   231D 80 27              9703 	sjmp	00136$
   231F                    9704 00133$:
                    1AEA   9705 	C$easyax5043.c$1351$3$322 ==.
                           9706 ;	..\COMMON\easyax5043.c:1351: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_default_remoteaddr, axradio_framing_addrlen);
   231F EF                 9707 	mov	a,r7
   2320 24 2A              9708 	add	a,#_axradio_txbuffer
   2322 FF                 9709 	mov	r7,a
   2323 E4                 9710 	clr	a
   2324 34 00              9711 	addc	a,#(_axradio_txbuffer >> 8)
   2326 FE                 9712 	mov	r6,a
   2327 7D 00              9713 	mov	r5,#0x00
   2329 75 27 26           9714 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   232C 75 28 00           9715 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   232F 75 29 00           9716 	mov	(_memcpy_PARM_2 + 2),#0x00
   2332 90 4F 20           9717 	mov	dptr,#_axradio_framing_addrlen
   2335 E4                 9718 	clr	a
   2336 93                 9719 	movc	a,@a+dptr
   2337 FC                 9720 	mov	r4,a
   2338 8C 2A              9721 	mov	_memcpy_PARM_3,r4
   233A 75 2B 00           9722 	mov	(_memcpy_PARM_3 + 1),#0x00
   233D 8F 82              9723 	mov	dpl,r7
   233F 8E 83              9724 	mov	dph,r6
   2341 8D F0              9725 	mov	b,r5
   2343 12 3F 6A           9726 	lcall	_memcpy
   2346                    9727 00136$:
                    1B11   9728 	C$easyax5043.c$1353$2$320 ==.
                           9729 ;	..\COMMON\easyax5043.c:1353: if (axradio_framing_sourceaddrpos != 0xff)
   2346 90 4F 22           9730 	mov	dptr,#_axradio_framing_sourceaddrpos
   2349 E4                 9731 	clr	a
   234A 93                 9732 	movc	a,@a+dptr
   234B FF                 9733 	mov	r7,a
   234C BF FF 02           9734 	cjne	r7,#0xFF,00289$
   234F 80 27              9735 	sjmp	00138$
   2351                    9736 00289$:
                    1B1C   9737 	C$easyax5043.c$1354$2$320 ==.
                           9738 ;	..\COMMON\easyax5043.c:1354: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   2351 EF                 9739 	mov	a,r7
   2352 24 2A              9740 	add	a,#_axradio_txbuffer
   2354 FF                 9741 	mov	r7,a
   2355 E4                 9742 	clr	a
   2356 34 00              9743 	addc	a,#(_axradio_txbuffer >> 8)
   2358 FE                 9744 	mov	r6,a
   2359 7D 00              9745 	mov	r5,#0x00
   235B 75 27 1E           9746 	mov	_memcpy_PARM_2,#_axradio_localaddr
   235E 75 28 00           9747 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2361 75 29 00           9748 	mov	(_memcpy_PARM_2 + 2),#0x00
   2364 90 4F 20           9749 	mov	dptr,#_axradio_framing_addrlen
   2367 E4                 9750 	clr	a
   2368 93                 9751 	movc	a,@a+dptr
   2369 FC                 9752 	mov	r4,a
   236A 8C 2A              9753 	mov	_memcpy_PARM_3,r4
   236C 75 2B 00           9754 	mov	(_memcpy_PARM_3 + 1),#0x00
   236F 8F 82              9755 	mov	dpl,r7
   2371 8E 83              9756 	mov	dph,r6
   2373 8D F0              9757 	mov	b,r5
   2375 12 3F 6A           9758 	lcall	_memcpy
   2378                    9759 00138$:
                    1B43   9760 	C$easyax5043.c$1355$2$320 ==.
                           9761 ;	..\COMMON\easyax5043.c:1355: if (axradio_framing_lenmask) {
   2378 90 4F 25           9762 	mov	dptr,#_axradio_framing_lenmask
   237B E4                 9763 	clr	a
   237C 93                 9764 	movc	a,@a+dptr
   237D FF                 9765 	mov	r7,a
   237E 60 30              9766 	jz	00140$
                    1B4B   9767 	C$easyax5043.c$1356$3$323 ==.
                           9768 ;	..\COMMON\easyax5043.c:1356: uint8_t len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   2380 90 00 05           9769 	mov	dptr,#_axradio_txbuffer_len
   2383 E0                 9770 	movx	a,@dptr
   2384 FD                 9771 	mov	r5,a
   2385 A3                 9772 	inc	dptr
   2386 E0                 9773 	movx	a,@dptr
   2387 90 4F 24           9774 	mov	dptr,#_axradio_framing_lenoffs
   238A E4                 9775 	clr	a
   238B 93                 9776 	movc	a,@a+dptr
   238C FE                 9777 	mov	r6,a
   238D ED                 9778 	mov	a,r5
   238E C3                 9779 	clr	c
   238F 9E                 9780 	subb	a,r6
   2390 5F                 9781 	anl	a,r7
   2391 FE                 9782 	mov	r6,a
                    1B5D   9783 	C$easyax5043.c$1357$3$323 ==.
                           9784 ;	..\COMMON\easyax5043.c:1357: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   2392 90 4F 23           9785 	mov	dptr,#_axradio_framing_lenpos
   2395 E4                 9786 	clr	a
   2396 93                 9787 	movc	a,@a+dptr
   2397 24 2A              9788 	add	a,#_axradio_txbuffer
   2399 FD                 9789 	mov	r5,a
   239A E4                 9790 	clr	a
   239B 34 00              9791 	addc	a,#(_axradio_txbuffer >> 8)
   239D FC                 9792 	mov	r4,a
   239E 8D 82              9793 	mov	dpl,r5
   23A0 8C 83              9794 	mov	dph,r4
   23A2 E0                 9795 	movx	a,@dptr
   23A3 FB                 9796 	mov	r3,a
   23A4 EF                 9797 	mov	a,r7
   23A5 F4                 9798 	cpl	a
   23A6 FF                 9799 	mov	r7,a
   23A7 5B                 9800 	anl	a,r3
   23A8 42 06              9801 	orl	ar6,a
   23AA 8D 82              9802 	mov	dpl,r5
   23AC 8C 83              9803 	mov	dph,r4
   23AE EE                 9804 	mov	a,r6
   23AF F0                 9805 	movx	@dptr,a
   23B0                    9806 00140$:
                    1B7B   9807 	C$easyax5043.c$1359$2$320 ==.
                           9808 ;	..\COMMON\easyax5043.c:1359: if (axradio_framing_swcrclen) {
   23B0 90 4F 26           9809 	mov	dptr,#_axradio_framing_swcrclen
   23B3 E4                 9810 	clr	a
   23B4 93                 9811 	movc	a,@a+dptr
   23B5 FF                 9812 	mov	r7,a
   23B6 60 2E              9813 	jz	00142$
                    1B83   9814 	C$easyax5043.c$1360$3$324 ==.
                           9815 ;	..\COMMON\easyax5043.c:1360: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   23B8 90 00 05           9816 	mov	dptr,#_axradio_txbuffer_len
   23BB E0                 9817 	movx	a,@dptr
   23BC C0 E0              9818 	push	acc
   23BE A3                 9819 	inc	dptr
   23BF E0                 9820 	movx	a,@dptr
   23C0 C0 E0              9821 	push	acc
   23C2 90 00 2A           9822 	mov	dptr,#_axradio_txbuffer
   23C5 12 06 6A           9823 	lcall	_axradio_framing_append_crc
   23C8 15 81              9824 	dec	sp
   23CA 15 81              9825 	dec	sp
                    1B97   9826 	C$easyax5043.c$1361$3$324 ==.
                           9827 ;	..\COMMON\easyax5043.c:1361: axradio_txbuffer_len += axradio_framing_swcrclen;
   23CC 90 4F 26           9828 	mov	dptr,#_axradio_framing_swcrclen
   23CF E4                 9829 	clr	a
   23D0 93                 9830 	movc	a,@a+dptr
   23D1 FF                 9831 	mov	r7,a
   23D2 7E 00              9832 	mov	r6,#0x00
   23D4 90 00 05           9833 	mov	dptr,#_axradio_txbuffer_len
   23D7 E0                 9834 	movx	a,@dptr
   23D8 FC                 9835 	mov	r4,a
   23D9 A3                 9836 	inc	dptr
   23DA E0                 9837 	movx	a,@dptr
   23DB FD                 9838 	mov	r5,a
   23DC 90 00 05           9839 	mov	dptr,#_axradio_txbuffer_len
   23DF EF                 9840 	mov	a,r7
   23E0 2C                 9841 	add	a,r4
   23E1 F0                 9842 	movx	@dptr,a
   23E2 EE                 9843 	mov	a,r6
   23E3 3D                 9844 	addc	a,r5
   23E4 A3                 9845 	inc	dptr
   23E5 F0                 9846 	movx	@dptr,a
   23E6                    9847 00142$:
                    1BB1   9848 	C$easyax5043.c$1363$2$320 ==.
                           9849 ;	..\COMMON\easyax5043.c:1363: if (axradio_phy_pn9) {
   23E6 90 4E FE           9850 	mov	dptr,#_axradio_phy_pn9
   23E9 E4                 9851 	clr	a
   23EA 93                 9852 	movc	a,@a+dptr
   23EB FF                 9853 	mov	r7,a
   23EC 60 2F              9854 	jz	00144$
                    1BB9   9855 	C$easyax5043.c$1364$3$325 ==.
                           9856 ;	..\COMMON\easyax5043.c:1364: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   23EE 90 40 11           9857 	mov	dptr,#_AX5043_ENCODING
   23F1 E0                 9858 	movx	a,@dptr
   23F2 FF                 9859 	mov	r7,a
   23F3 53 07 01           9860 	anl	ar7,#0x01
   23F6 C3                 9861 	clr	c
   23F7 E4                 9862 	clr	a
   23F8 9F                 9863 	subb	a,r7
   23F9 FF                 9864 	mov	r7,a
   23FA C0 07              9865 	push	ar7
   23FC 74 FF              9866 	mov	a,#0xFF
   23FE C0 E0              9867 	push	acc
   2400 74 01              9868 	mov	a,#0x01
   2402 C0 E0              9869 	push	acc
   2404 90 00 05           9870 	mov	dptr,#_axradio_txbuffer_len
   2407 E0                 9871 	movx	a,@dptr
   2408 C0 E0              9872 	push	acc
   240A A3                 9873 	inc	dptr
   240B E0                 9874 	movx	a,@dptr
   240C C0 E0              9875 	push	acc
   240E 90 00 2A           9876 	mov	dptr,#_axradio_txbuffer
   2411 75 F0 00           9877 	mov	b,#0x00
   2414 12 41 3F           9878 	lcall	_pn9_buffer
   2417 E5 81              9879 	mov	a,sp
   2419 24 FB              9880 	add	a,#0xfb
   241B F5 81              9881 	mov	sp,a
   241D                    9882 00144$:
                    1BE8   9883 	C$easyax5043.c$1366$2$320 ==.
                           9884 ;	..\COMMON\easyax5043.c:1366: AX5043_IRQMASK1 = 0x00;
   241D 90 40 06           9885 	mov	dptr,#_AX5043_IRQMASK1
                    1BEB   9886 	C$easyax5043.c$1367$2$320 ==.
                           9887 ;	..\COMMON\easyax5043.c:1367: AX5043_IRQMASK0 = 0x00;
   2420 E4                 9888 	clr	a
   2421 F0                 9889 	movx	@dptr,a
   2422 90 40 07           9890 	mov	dptr,#_AX5043_IRQMASK0
   2425 F0                 9891 	movx	@dptr,a
                    1BF1   9892 	C$easyax5043.c$1368$2$320 ==.
                           9893 ;	..\COMMON\easyax5043.c:1368: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   2426 90 40 02           9894 	mov	dptr,#_AX5043_PWRMODE
   2429 74 05              9895 	mov	a,#0x05
   242B F0                 9896 	movx	@dptr,a
                    1BF7   9897 	C$easyax5043.c$1369$2$320 ==.
                           9898 ;	..\COMMON\easyax5043.c:1369: AX5043_FIFOSTAT = 3;
   242C 90 40 28           9899 	mov	dptr,#_AX5043_FIFOSTAT
   242F 74 03              9900 	mov	a,#0x03
   2431 F0                 9901 	movx	@dptr,a
                    1BFD   9902 	C$easyax5043.c$1370$2$320 ==.
                           9903 ;	..\COMMON\easyax5043.c:1370: axradio_trxstate = trxstate_tx_longpreamble; // ensure that trxstate != off, otherwise we would prematurely enable the receiver, see below
   2432 75 0B 0A           9904 	mov	_axradio_trxstate,#0x0A
                    1C00   9905 	C$easyax5043.c$1371$2$320 ==.
                           9906 ;	..\COMMON\easyax5043.c:1371: while (AX5043_POWSTAT & 0x08);
   2435                    9907 00145$:
   2435 90 40 03           9908 	mov	dptr,#_AX5043_POWSTAT
   2438 E0                 9909 	movx	a,@dptr
   2439 FF                 9910 	mov	r7,a
   243A 20 E3 F8           9911 	jb	acc.3,00145$
                    1C08   9912 	C$easyax5043.c$1372$2$320 ==.
                           9913 ;	..\COMMON\easyax5043.c:1372: wtimer_remove(&axradio_timer);
   243D 90 02 89           9914 	mov	dptr,#_axradio_timer
   2440 12 49 5A           9915 	lcall	_wtimer_remove
                    1C0E   9916 	C$easyax5043.c$1373$2$320 ==.
                           9917 ;	..\COMMON\easyax5043.c:1373: axradio_timer.time = axradio_framing_ack_delay;
   2443 90 4F 32           9918 	mov	dptr,#_axradio_framing_ack_delay
   2446 E4                 9919 	clr	a
   2447 93                 9920 	movc	a,@a+dptr
   2448 FC                 9921 	mov	r4,a
   2449 74 01              9922 	mov	a,#0x01
   244B 93                 9923 	movc	a,@a+dptr
   244C FD                 9924 	mov	r5,a
   244D 74 02              9925 	mov	a,#0x02
   244F 93                 9926 	movc	a,@a+dptr
   2450 FE                 9927 	mov	r6,a
   2451 74 03              9928 	mov	a,#0x03
   2453 93                 9929 	movc	a,@a+dptr
   2454 FF                 9930 	mov	r7,a
   2455 90 02 8D           9931 	mov	dptr,#(_axradio_timer + 0x0004)
   2458 EC                 9932 	mov	a,r4
   2459 F0                 9933 	movx	@dptr,a
   245A A3                 9934 	inc	dptr
   245B ED                 9935 	mov	a,r5
   245C F0                 9936 	movx	@dptr,a
   245D A3                 9937 	inc	dptr
   245E EE                 9938 	mov	a,r6
   245F F0                 9939 	movx	@dptr,a
   2460 A3                 9940 	inc	dptr
   2461 EF                 9941 	mov	a,r7
   2462 F0                 9942 	movx	@dptr,a
                    1C2E   9943 	C$easyax5043.c$1374$2$320 ==.
                           9944 ;	..\COMMON\easyax5043.c:1374: wtimer1_addrelative(&axradio_timer);
   2463 90 02 89           9945 	mov	dptr,#_axradio_timer
   2466 12 40 20           9946 	lcall	_wtimer1_addrelative
   2469                    9947 00149$:
                    1C34   9948 	C$easyax5043.c$1376$1$313 ==.
                           9949 ;	..\COMMON\easyax5043.c:1376: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   2469 74 22              9950 	mov	a,#0x22
   246B B5 0A 02           9951 	cjne	a,_axradio_mode,00294$
   246E 80 0A              9952 	sjmp	00162$
   2470                    9953 00294$:
                    1C3B   9954 	C$easyax5043.c$1377$1$313 ==.
                           9955 ;	..\COMMON\easyax5043.c:1377: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2470 74 23              9956 	mov	a,#0x23
   2472 B5 0A 02           9957 	cjne	a,_axradio_mode,00295$
   2475 80 03              9958 	sjmp	00296$
   2477                    9959 00295$:
   2477 02 25 4D           9960 	ljmp	00163$
   247A                    9961 00296$:
   247A                    9962 00162$:
                    1C45   9963 	C$easyax5043.c$1378$2$326 ==.
                           9964 ;	..\COMMON\easyax5043.c:1378: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   247A 74 23              9965 	mov	a,#0x23
   247C B5 0A 02           9966 	cjne	a,_axradio_mode,00297$
   247F 80 03              9967 	sjmp	00153$
   2481                    9968 00297$:
                    1C4C   9969 	C$easyax5043.c$1379$2$326 ==.
                           9970 ;	..\COMMON\easyax5043.c:1379: ax5043_off();
   2481 12 14 7C           9971 	lcall	_ax5043_off
   2484                    9972 00153$:
                    1C4F   9973 	C$easyax5043.c$1380$2$326 ==.
                           9974 ;	..\COMMON\easyax5043.c:1380: switch (axradio_syncstate) {
   2484 90 00 04           9975 	mov	dptr,#_axradio_syncstate
   2487 E0                 9976 	movx	a,@dptr
   2488 FF                 9977 	mov	r7,a
   2489 BF 08 02           9978 	cjne	r7,#0x08,00298$
   248C 80 45              9979 	sjmp	00157$
   248E                    9980 00298$:
   248E BF 0A 02           9981 	cjne	r7,#0x0A,00299$
   2491 80 40              9982 	sjmp	00157$
   2493                    9983 00299$:
   2493 BF 0B 02           9984 	cjne	r7,#0x0B,00300$
   2496 80 3B              9985 	sjmp	00157$
   2498                    9986 00300$:
                    1C63   9987 	C$easyax5043.c$1384$3$327 ==.
                           9988 ;	..\COMMON\easyax5043.c:1384: axradio_sync_time = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t);
   2498 90 02 38           9989 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   249B E0                 9990 	movx	a,@dptr
   249C FC                 9991 	mov	r4,a
   249D A3                 9992 	inc	dptr
   249E E0                 9993 	movx	a,@dptr
   249F FD                 9994 	mov	r5,a
   24A0 A3                 9995 	inc	dptr
   24A1 E0                 9996 	movx	a,@dptr
   24A2 FE                 9997 	mov	r6,a
   24A3 A3                 9998 	inc	dptr
   24A4 E0                 9999 	movx	a,@dptr
   24A5 8C 82             10000 	mov	dpl,r4
   24A7 8D 83             10001 	mov	dph,r5
   24A9 8E F0             10002 	mov	b,r6
   24AB 12 08 77          10003 	lcall	_axradio_conv_time_totimer0
   24AE AC 82             10004 	mov	r4,dpl
   24B0 AD 83             10005 	mov	r5,dph
   24B2 AE F0             10006 	mov	r6,b
   24B4 FF                10007 	mov	r7,a
   24B5 90 00 10          10008 	mov	dptr,#_axradio_sync_time
   24B8 EC                10009 	mov	a,r4
   24B9 F0                10010 	movx	@dptr,a
   24BA A3                10011 	inc	dptr
   24BB ED                10012 	mov	a,r5
   24BC F0                10013 	movx	@dptr,a
   24BD A3                10014 	inc	dptr
   24BE EE                10015 	mov	a,r6
   24BF F0                10016 	movx	@dptr,a
   24C0 A3                10017 	inc	dptr
   24C1 EF                10018 	mov	a,r7
   24C2 F0                10019 	movx	@dptr,a
                    1C8E  10020 	C$easyax5043.c$1385$3$327 ==.
                          10021 ;	..\COMMON\easyax5043.c:1385: axradio_sync_periodcorr = -32768;
   24C3 90 00 14          10022 	mov	dptr,#_axradio_sync_periodcorr
   24C6 E4                10023 	clr	a
   24C7 F0                10024 	movx	@dptr,a
   24C8 A3                10025 	inc	dptr
   24C9 74 80             10026 	mov	a,#0x80
   24CB F0                10027 	movx	@dptr,a
                    1C97  10028 	C$easyax5043.c$1386$3$327 ==.
                          10029 ;	..\COMMON\easyax5043.c:1386: axradio_sync_seqnr = 0;
   24CC 90 00 0F          10030 	mov	dptr,#_axradio_ack_seqnr
   24CF E4                10031 	clr	a
   24D0 F0                10032 	movx	@dptr,a
                    1C9C  10033 	C$easyax5043.c$1387$3$327 ==.
                          10034 ;	..\COMMON\easyax5043.c:1387: break;
                    1C9C  10035 	C$easyax5043.c$1391$3$327 ==.
                          10036 ;	..\COMMON\easyax5043.c:1391: case syncstate_slave_rxpacket:
   24D1 80 2D             10037 	sjmp	00158$
   24D3                   10038 00157$:
                    1C9E  10039 	C$easyax5043.c$1392$3$327 ==.
                          10040 ;	..\COMMON\easyax5043.c:1392: axradio_sync_adjustperiodcorr();
   24D3 12 16 AC          10041 	lcall	_axradio_sync_adjustperiodcorr
                    1CA1  10042 	C$easyax5043.c$1393$3$327 ==.
                          10043 ;	..\COMMON\easyax5043.c:1393: axradio_cb_receive.st.rx.phy.period = axradio_sync_periodcorr >> SYNC_K1;
   24D6 90 00 14          10044 	mov	dptr,#_axradio_sync_periodcorr
   24D9 E0                10045 	movx	a,@dptr
   24DA FE                10046 	mov	r6,a
   24DB A3                10047 	inc	dptr
   24DC E0                10048 	movx	a,@dptr
   24DD FF                10049 	mov	r7,a
   24DE C4                10050 	swap	a
   24DF 03                10051 	rr	a
   24E0 CE                10052 	xch	a,r6
   24E1 C4                10053 	swap	a
   24E2 03                10054 	rr	a
   24E3 54 07             10055 	anl	a,#0x07
   24E5 6E                10056 	xrl	a,r6
   24E6 CE                10057 	xch	a,r6
   24E7 54 07             10058 	anl	a,#0x07
   24E9 CE                10059 	xch	a,r6
   24EA 6E                10060 	xrl	a,r6
   24EB CE                10061 	xch	a,r6
   24EC 30 E2 02          10062 	jnb	acc.2,00301$
   24EF 44 F8             10063 	orl	a,#0xF8
   24F1                   10064 00301$:
   24F1 FF                10065 	mov	r7,a
   24F2 90 02 44          10066 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   24F5 EE                10067 	mov	a,r6
   24F6 F0                10068 	movx	@dptr,a
   24F7 A3                10069 	inc	dptr
   24F8 EF                10070 	mov	a,r7
   24F9 F0                10071 	movx	@dptr,a
                    1CC5  10072 	C$easyax5043.c$1394$3$327 ==.
                          10073 ;	..\COMMON\easyax5043.c:1394: axradio_sync_seqnr = 1;
   24FA 90 00 0F          10074 	mov	dptr,#_axradio_ack_seqnr
   24FD 74 01             10075 	mov	a,#0x01
   24FF F0                10076 	movx	@dptr,a
                    1CCB  10077 	C$easyax5043.c$1396$2$326 ==.
                          10078 ;	..\COMMON\easyax5043.c:1396: };
   2500                   10079 00158$:
                    1CCB  10080 	C$easyax5043.c$1397$2$326 ==.
                          10081 ;	..\COMMON\easyax5043.c:1397: axradio_sync_slave_nextperiod();
   2500 12 17 D3          10082 	lcall	_axradio_sync_slave_nextperiod
                    1CCE  10083 	C$easyax5043.c$1398$2$326 ==.
                          10084 ;	..\COMMON\easyax5043.c:1398: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2503 74 23             10085 	mov	a,#0x23
   2505 B5 0A 02          10086 	cjne	a,_axradio_mode,00302$
   2508 80 3D             10087 	sjmp	00160$
   250A                   10088 00302$:
                    1CD5  10089 	C$easyax5043.c$1399$3$328 ==.
                          10090 ;	..\COMMON\easyax5043.c:1399: axradio_syncstate = syncstate_slave_rxidle;
   250A 90 00 04          10091 	mov	dptr,#_axradio_syncstate
   250D 74 08             10092 	mov	a,#0x08
   250F F0                10093 	movx	@dptr,a
                    1CDB  10094 	C$easyax5043.c$1400$3$328 ==.
                          10095 ;	..\COMMON\easyax5043.c:1400: wtimer_remove(&axradio_timer);
   2510 90 02 89          10096 	mov	dptr,#_axradio_timer
   2513 12 49 5A          10097 	lcall	_wtimer_remove
                    1CE1  10098 	C$easyax5043.c$1401$3$328 ==.
                          10099 ;	..\COMMON\easyax5043.c:1401: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[axradio_sync_seqnr]);
   2516 90 00 0F          10100 	mov	dptr,#_axradio_ack_seqnr
   2519 E0                10101 	movx	a,@dptr
   251A 75 F0 04          10102 	mov	b,#0x04
   251D A4                10103 	mul	ab
   251E 24 53             10104 	add	a,#_axradio_sync_slave_rxadvance
   2520 F5 82             10105 	mov	dpl,a
   2522 74 4F             10106 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   2524 35 F0             10107 	addc	a,b
   2526 F5 83             10108 	mov	dph,a
   2528 E4                10109 	clr	a
   2529 93                10110 	movc	a,@a+dptr
   252A FC                10111 	mov	r4,a
   252B A3                10112 	inc	dptr
   252C E4                10113 	clr	a
   252D 93                10114 	movc	a,@a+dptr
   252E FD                10115 	mov	r5,a
   252F A3                10116 	inc	dptr
   2530 E4                10117 	clr	a
   2531 93                10118 	movc	a,@a+dptr
   2532 FE                10119 	mov	r6,a
   2533 A3                10120 	inc	dptr
   2534 E4                10121 	clr	a
   2535 93                10122 	movc	a,@a+dptr
   2536 8C 82             10123 	mov	dpl,r4
   2538 8D 83             10124 	mov	dph,r5
   253A 8E F0             10125 	mov	b,r6
   253C 12 16 6D          10126 	lcall	_axradio_sync_settimeradv
                    1D0A  10127 	C$easyax5043.c$1402$3$328 ==.
                          10128 ;	..\COMMON\easyax5043.c:1402: wtimer0_addabsolute(&axradio_timer);
   253F 90 02 89          10129 	mov	dptr,#_axradio_timer
   2542 12 40 EC          10130 	lcall	_wtimer0_addabsolute
   2545 80 06             10131 	sjmp	00163$
   2547                   10132 00160$:
                    1D12  10133 	C$easyax5043.c$1404$3$329 ==.
                          10134 ;	..\COMMON\easyax5043.c:1404: axradio_syncstate = syncstate_slave_rxack;
   2547 90 00 04          10135 	mov	dptr,#_axradio_syncstate
   254A 74 0C             10136 	mov	a,#0x0C
   254C F0                10137 	movx	@dptr,a
   254D                   10138 00163$:
                    1D18  10139 	C$easyax5043.c$1407$1$313 ==.
                          10140 ;	..\COMMON\easyax5043.c:1407: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   254D 90 02 36          10141 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2550 12 34 D6          10142 	lcall	_axradio_statuschange
                    1D1E  10143 	C$easyax5043.c$1408$1$313 ==.
                          10144 ;	..\COMMON\easyax5043.c:1408: endcb:
   2553                   10145 00165$:
                    1D1E  10146 	C$easyax5043.c$1409$1$313 ==.
                          10147 ;	..\COMMON\easyax5043.c:1409: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE) {
   2553 74 19             10148 	mov	a,#0x19
   2555 B5 0A 05          10149 	cjne	a,_axradio_mode,00180$
                    1D23  10150 	C$easyax5043.c$1410$2$330 ==.
                          10151 ;	..\COMMON\easyax5043.c:1410: ax5043_receiver_on_wor();
   2558 12 13 D1          10152 	lcall	_ax5043_receiver_on_wor
   255B 80 42             10153 	sjmp	00182$
   255D                   10154 00180$:
                    1D28  10155 	C$easyax5043.c$1411$1$313 ==.
                          10156 ;	..\COMMON\easyax5043.c:1411: } else if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   255D 74 1A             10157 	mov	a,#0x1A
   255F B5 0A 02          10158 	cjne	a,_axradio_mode,00305$
   2562 80 05             10159 	sjmp	00175$
   2564                   10160 00305$:
                    1D2F  10161 	C$easyax5043.c$1412$1$313 ==.
                          10162 ;	..\COMMON\easyax5043.c:1412: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE) {
   2564 74 1B             10163 	mov	a,#0x1B
   2566 B5 0A 24          10164 	cjne	a,_axradio_mode,00176$
   2569                   10165 00175$:
                    1D34  10166 	C$easyax5043.c$1415$3$332 ==.
                          10167 ;	..\COMMON\easyax5043.c:1415: uint8_t __autodata iesave = IE & 0x80;
   2569 74 80             10168 	mov	a,#0x80
   256B 55 A8             10169 	anl	a,_IE
   256D FF                10170 	mov	r7,a
                    1D39  10171 	C$easyax5043.c$1416$3$332 ==.
                          10172 ;	..\COMMON\easyax5043.c:1416: EA = 0;
   256E C2 AF             10173 	clr	_EA
                    1D3B  10174 	C$easyax5043.c$1417$3$332 ==.
                          10175 ;	..\COMMON\easyax5043.c:1417: trxst = axradio_trxstate;
   2570 AE 0B             10176 	mov	r6,_axradio_trxstate
                    1D3D  10177 	C$easyax5043.c$1418$3$332 ==.
                          10178 ;	..\COMMON\easyax5043.c:1418: axradio_cb_receive.st.error = AXRADIO_ERR_PACKETDONE;
   2572 90 02 37          10179 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2575 74 F0             10180 	mov	a,#0xF0
   2577 F0                10181 	movx	@dptr,a
                    1D43  10182 	C$easyax5043.c$1419$3$332 ==.
                          10183 ;	..\COMMON\easyax5043.c:1419: IE |= iesave;
   2578 EF                10184 	mov	a,r7
   2579 42 A8             10185 	orl	_IE,a
                    1D46  10186 	C$easyax5043.c$1421$2$331 ==.
                          10187 ;	..\COMMON\easyax5043.c:1421: if (trxst == trxstate_off) {
   257B EE                10188 	mov	a,r6
   257C 70 21             10189 	jnz	00182$
                    1D49  10190 	C$easyax5043.c$1422$3$333 ==.
                          10191 ;	..\COMMON\easyax5043.c:1422: if (axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   257E 74 1B             10192 	mov	a,#0x1B
   2580 B5 0A 05          10193 	cjne	a,_axradio_mode,00167$
                    1D4E  10194 	C$easyax5043.c$1423$3$333 ==.
                          10195 ;	..\COMMON\easyax5043.c:1423: ax5043_receiver_on_wor();
   2583 12 13 D1          10196 	lcall	_ax5043_receiver_on_wor
   2586 80 17             10197 	sjmp	00182$
   2588                   10198 00167$:
                    1D53  10199 	C$easyax5043.c$1425$3$333 ==.
                          10200 ;	..\COMMON\easyax5043.c:1425: ax5043_receiver_on_continuous();
   2588 12 13 37          10201 	lcall	_ax5043_receiver_on_continuous
   258B 80 12             10202 	sjmp	00182$
   258D                   10203 00176$:
                    1D58  10204 	C$easyax5043.c$1428$2$334 ==.
                          10205 ;	..\COMMON\easyax5043.c:1428: switch (axradio_trxstate) {
   258D AF 0B             10206 	mov	r7,_axradio_trxstate
   258F BF 01 02          10207 	cjne	r7,#0x01,00311$
   2592 80 03             10208 	sjmp	00172$
   2594                   10209 00311$:
   2594 BF 02 08          10210 	cjne	r7,#0x02,00182$
                    1D62  10211 	C$easyax5043.c$1430$3$335 ==.
                          10212 ;	..\COMMON\easyax5043.c:1430: case trxstate_rxwor:
   2597                   10213 00172$:
                    1D62  10214 	C$easyax5043.c$1431$3$335 ==.
                          10215 ;	..\COMMON\easyax5043.c:1431: AX5043_IRQMASK0 |= 0x01; // re-enable FIFO not empty irq
   2597 90 40 07          10216 	mov	dptr,#_AX5043_IRQMASK0
   259A E0                10217 	movx	a,@dptr
   259B FF                10218 	mov	r7,a
   259C 44 01             10219 	orl	a,#0x01
   259E F0                10220 	movx	@dptr,a
                    1D6A  10221 	C$easyax5043.c$1436$1$313 ==.
                          10222 ;	..\COMMON\easyax5043.c:1436: }
   259F                   10223 00182$:
                    1D6A  10224 	C$easyax5043.c$1438$1$313 ==.
                    1D6A  10225 	XFeasyax5043$axradio_receive_callback_fwd$0$0 ==.
   259F 22                10226 	ret
                          10227 ;------------------------------------------------------------
                          10228 ;Allocation info for local variables in function 'axradio_killallcb'
                          10229 ;------------------------------------------------------------
                    1D6B  10230 	Feasyax5043$axradio_killallcb$0$0 ==.
                    1D6B  10231 	C$easyax5043.c$1440$1$313 ==.
                          10232 ;	..\COMMON\easyax5043.c:1440: static void axradio_killallcb(void)
                          10233 ;	-----------------------------------------
                          10234 ;	 function axradio_killallcb
                          10235 ;	-----------------------------------------
   25A0                   10236 _axradio_killallcb:
                    1D6B  10237 	C$easyax5043.c$1442$1$337 ==.
                          10238 ;	..\COMMON\easyax5043.c:1442: wtimer_remove_callback(&axradio_cb_receive.cb);
   25A0 90 02 32          10239 	mov	dptr,#_axradio_cb_receive
   25A3 12 4B 64          10240 	lcall	_wtimer_remove_callback
                    1D71  10241 	C$easyax5043.c$1443$1$337 ==.
                          10242 ;	..\COMMON\easyax5043.c:1443: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   25A6 90 02 54          10243 	mov	dptr,#_axradio_cb_receivesfd
   25A9 12 4B 64          10244 	lcall	_wtimer_remove_callback
                    1D77  10245 	C$easyax5043.c$1444$1$337 ==.
                          10246 ;	..\COMMON\easyax5043.c:1444: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   25AC 90 02 5E          10247 	mov	dptr,#_axradio_cb_channelstate
   25AF 12 4B 64          10248 	lcall	_wtimer_remove_callback
                    1D7D  10249 	C$easyax5043.c$1445$1$337 ==.
                          10250 ;	..\COMMON\easyax5043.c:1445: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   25B2 90 02 6B          10251 	mov	dptr,#_axradio_cb_transmitstart
   25B5 12 4B 64          10252 	lcall	_wtimer_remove_callback
                    1D83  10253 	C$easyax5043.c$1446$1$337 ==.
                          10254 ;	..\COMMON\easyax5043.c:1446: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   25B8 90 02 75          10255 	mov	dptr,#_axradio_cb_transmitend
   25BB 12 4B 64          10256 	lcall	_wtimer_remove_callback
                    1D89  10257 	C$easyax5043.c$1447$1$337 ==.
                          10258 ;	..\COMMON\easyax5043.c:1447: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   25BE 90 02 7F          10259 	mov	dptr,#_axradio_cb_transmitdata
   25C1 12 4B 64          10260 	lcall	_wtimer_remove_callback
                    1D8F  10261 	C$easyax5043.c$1448$1$337 ==.
                          10262 ;	..\COMMON\easyax5043.c:1448: wtimer_remove(&axradio_timer);
   25C4 90 02 89          10263 	mov	dptr,#_axradio_timer
   25C7 12 49 5A          10264 	lcall	_wtimer_remove
                    1D95  10265 	C$easyax5043.c$1449$1$337 ==.
                    1D95  10266 	XFeasyax5043$axradio_killallcb$0$0 ==.
   25CA 22                10267 	ret
                          10268 ;------------------------------------------------------------
                          10269 ;Allocation info for local variables in function 'axradio_init'
                          10270 ;------------------------------------------------------------
                          10271 ;i                         Allocated to registers r5 
                          10272 ;pllloop_save              Allocated to registers r7 
                          10273 ;pllcpi_save               Allocated to registers r6 
                          10274 ;iesave                    Allocated to registers r4 
                          10275 ;f                         Allocated to registers r1 r2 r3 r4 
                          10276 ;r                         Allocated to registers r3 
                          10277 ;iesave                    Allocated to registers r4 
                          10278 ;r                         Allocated to registers r3 
                          10279 ;f                         Allocated to registers r2 r3 r4 r5 
                          10280 ;------------------------------------------------------------
                    1D96  10281 	G$axradio_init$0$0 ==.
                    1D96  10282 	C$easyax5043.c$1455$1$337 ==.
                          10283 ;	..\COMMON\easyax5043.c:1455: uint8_t axradio_init(void)
                          10284 ;	-----------------------------------------
                          10285 ;	 function axradio_init
                          10286 ;	-----------------------------------------
   25CB                   10287 _axradio_init:
                    1D96  10288 	C$easyax5043.c$1458$1$339 ==.
                          10289 ;	..\COMMON\easyax5043.c:1458: axradio_mode = AXRADIO_MODE_UNINIT;
   25CB 75 0A 00          10290 	mov	_axradio_mode,#0x00
                    1D99  10291 	C$easyax5043.c$1459$1$339 ==.
                          10292 ;	..\COMMON\easyax5043.c:1459: axradio_killallcb();
   25CE 12 25 A0          10293 	lcall	_axradio_killallcb
                    1D9C  10294 	C$easyax5043.c$1460$1$339 ==.
                          10295 ;	..\COMMON\easyax5043.c:1460: axradio_cb_receive.cb.handler = axradio_receive_callback_fwd;
   25D1 90 02 34          10296 	mov	dptr,#(_axradio_cb_receive + 0x0002)
   25D4 74 7E             10297 	mov	a,#_axradio_receive_callback_fwd
   25D6 F0                10298 	movx	@dptr,a
   25D7 A3                10299 	inc	dptr
   25D8 74 20             10300 	mov	a,#(_axradio_receive_callback_fwd >> 8)
   25DA F0                10301 	movx	@dptr,a
                    1DA6  10302 	C$easyax5043.c$1461$1$339 ==.
                          10303 ;	..\COMMON\easyax5043.c:1461: axradio_cb_receive.st.status = AXRADIO_STAT_RECEIVE;
   25DB 90 02 36          10304 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   25DE E4                10305 	clr	a
   25DF F0                10306 	movx	@dptr,a
                    1DAB  10307 	C$easyax5043.c$1462$1$339 ==.
                          10308 ;	..\COMMON\easyax5043.c:1462: memset_xdata(axradio_cb_receive.st.rx.mac.remoteaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.remoteaddr));
   25E0 75 27 00          10309 	mov	_memset_PARM_2,#0x00
   25E3 75 28 04          10310 	mov	_memset_PARM_3,#0x04
   25E6 75 29 00          10311 	mov	(_memset_PARM_3 + 1),#0x00
   25E9 90 02 46          10312 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   25EC 75 F0 00          10313 	mov	b,#0x00
   25EF 12 3F 4B          10314 	lcall	_memset
                    1DBD  10315 	C$easyax5043.c$1463$1$339 ==.
                          10316 ;	..\COMMON\easyax5043.c:1463: memset_xdata(axradio_cb_receive.st.rx.mac.localaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.localaddr));
   25F2 75 27 00          10317 	mov	_memset_PARM_2,#0x00
   25F5 75 28 04          10318 	mov	_memset_PARM_3,#0x04
   25F8 75 29 00          10319 	mov	(_memset_PARM_3 + 1),#0x00
   25FB 90 02 4A          10320 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   25FE 75 F0 00          10321 	mov	b,#0x00
   2601 12 3F 4B          10322 	lcall	_memset
                    1DCF  10323 	C$easyax5043.c$1464$1$339 ==.
                          10324 ;	..\COMMON\easyax5043.c:1464: axradio_cb_receivesfd.cb.handler = axradio_callback_fwd;
   2604 90 02 56          10325 	mov	dptr,#(_axradio_cb_receivesfd + 0x0002)
   2607 74 6B             10326 	mov	a,#_axradio_callback_fwd
   2609 F0                10327 	movx	@dptr,a
   260A A3                10328 	inc	dptr
   260B 74 20             10329 	mov	a,#(_axradio_callback_fwd >> 8)
   260D F0                10330 	movx	@dptr,a
                    1DD9  10331 	C$easyax5043.c$1465$1$339 ==.
                          10332 ;	..\COMMON\easyax5043.c:1465: axradio_cb_receivesfd.st.status = AXRADIO_STAT_RECEIVESFD;
   260E 90 02 58          10333 	mov	dptr,#(_axradio_cb_receivesfd + 0x0004)
   2611 74 01             10334 	mov	a,#0x01
   2613 F0                10335 	movx	@dptr,a
                    1DDF  10336 	C$easyax5043.c$1466$1$339 ==.
                          10337 ;	..\COMMON\easyax5043.c:1466: axradio_cb_channelstate.cb.handler = axradio_callback_fwd;
   2614 90 02 60          10338 	mov	dptr,#(_axradio_cb_channelstate + 0x0002)
   2617 74 6B             10339 	mov	a,#_axradio_callback_fwd
   2619 F0                10340 	movx	@dptr,a
   261A A3                10341 	inc	dptr
   261B 74 20             10342 	mov	a,#(_axradio_callback_fwd >> 8)
   261D F0                10343 	movx	@dptr,a
                    1DE9  10344 	C$easyax5043.c$1467$1$339 ==.
                          10345 ;	..\COMMON\easyax5043.c:1467: axradio_cb_channelstate.st.status = AXRADIO_STAT_CHANNELSTATE;
   261E 90 02 62          10346 	mov	dptr,#(_axradio_cb_channelstate + 0x0004)
   2621 74 02             10347 	mov	a,#0x02
   2623 F0                10348 	movx	@dptr,a
                    1DEF  10349 	C$easyax5043.c$1468$1$339 ==.
                          10350 ;	..\COMMON\easyax5043.c:1468: axradio_cb_transmitstart.cb.handler = axradio_callback_fwd;
   2624 90 02 6D          10351 	mov	dptr,#(_axradio_cb_transmitstart + 0x0002)
   2627 74 6B             10352 	mov	a,#_axradio_callback_fwd
   2629 F0                10353 	movx	@dptr,a
   262A A3                10354 	inc	dptr
   262B 74 20             10355 	mov	a,#(_axradio_callback_fwd >> 8)
   262D F0                10356 	movx	@dptr,a
                    1DF9  10357 	C$easyax5043.c$1469$1$339 ==.
                          10358 ;	..\COMMON\easyax5043.c:1469: axradio_cb_transmitstart.st.status = AXRADIO_STAT_TRANSMITSTART;
   262E 90 02 6F          10359 	mov	dptr,#(_axradio_cb_transmitstart + 0x0004)
   2631 74 03             10360 	mov	a,#0x03
   2633 F0                10361 	movx	@dptr,a
                    1DFF  10362 	C$easyax5043.c$1470$1$339 ==.
                          10363 ;	..\COMMON\easyax5043.c:1470: axradio_cb_transmitend.cb.handler = axradio_callback_fwd;
   2634 90 02 77          10364 	mov	dptr,#(_axradio_cb_transmitend + 0x0002)
   2637 74 6B             10365 	mov	a,#_axradio_callback_fwd
   2639 F0                10366 	movx	@dptr,a
   263A A3                10367 	inc	dptr
   263B 74 20             10368 	mov	a,#(_axradio_callback_fwd >> 8)
   263D F0                10369 	movx	@dptr,a
                    1E09  10370 	C$easyax5043.c$1471$1$339 ==.
                          10371 ;	..\COMMON\easyax5043.c:1471: axradio_cb_transmitend.st.status = AXRADIO_STAT_TRANSMITEND;
   263E 90 02 79          10372 	mov	dptr,#(_axradio_cb_transmitend + 0x0004)
   2641 74 04             10373 	mov	a,#0x04
   2643 F0                10374 	movx	@dptr,a
                    1E0F  10375 	C$easyax5043.c$1472$1$339 ==.
                          10376 ;	..\COMMON\easyax5043.c:1472: axradio_cb_transmitdata.cb.handler = axradio_callback_fwd;
   2644 90 02 81          10377 	mov	dptr,#(_axradio_cb_transmitdata + 0x0002)
   2647 74 6B             10378 	mov	a,#_axradio_callback_fwd
   2649 F0                10379 	movx	@dptr,a
   264A A3                10380 	inc	dptr
   264B 74 20             10381 	mov	a,#(_axradio_callback_fwd >> 8)
   264D F0                10382 	movx	@dptr,a
                    1E19  10383 	C$easyax5043.c$1473$1$339 ==.
                          10384 ;	..\COMMON\easyax5043.c:1473: axradio_cb_transmitdata.st.status = AXRADIO_STAT_TRANSMITDATA;
   264E 90 02 83          10385 	mov	dptr,#(_axradio_cb_transmitdata + 0x0004)
   2651 74 05             10386 	mov	a,#0x05
   2653 F0                10387 	movx	@dptr,a
                    1E1F  10388 	C$easyax5043.c$1474$1$339 ==.
                          10389 ;	..\COMMON\easyax5043.c:1474: axradio_timer.handler = axradio_timer_callback;
   2654 90 02 8B          10390 	mov	dptr,#(_axradio_timer + 0x0002)
   2657 74 3D             10391 	mov	a,#_axradio_timer_callback
   2659 F0                10392 	movx	@dptr,a
   265A A3                10393 	inc	dptr
   265B 74 18             10394 	mov	a,#(_axradio_timer_callback >> 8)
   265D F0                10395 	movx	@dptr,a
                    1E29  10396 	C$easyax5043.c$1475$1$339 ==.
                          10397 ;	..\COMMON\easyax5043.c:1475: axradio_curchannel = 0;
   265E 90 00 09          10398 	mov	dptr,#_axradio_curchannel
                    1E2C  10399 	C$easyax5043.c$1476$1$339 ==.
                          10400 ;	..\COMMON\easyax5043.c:1476: axradio_curfreqoffset = 0;
   2661 E4                10401 	clr	a
   2662 F0                10402 	movx	@dptr,a
   2663 90 00 0A          10403 	mov	dptr,#_axradio_curfreqoffset
   2666 F0                10404 	movx	@dptr,a
   2667 A3                10405 	inc	dptr
   2668 E4                10406 	clr	a
   2669 F0                10407 	movx	@dptr,a
   266A A3                10408 	inc	dptr
   266B F0                10409 	movx	@dptr,a
   266C A3                10410 	inc	dptr
   266D F0                10411 	movx	@dptr,a
                    1E39  10412 	C$easyax5043.c$1477$1$339 ==.
                          10413 ;	..\COMMON\easyax5043.c:1477: IE_4 = 0;
   266E C2 AC             10414 	clr	_IE_4
                    1E3B  10415 	C$easyax5043.c$1478$1$339 ==.
                          10416 ;	..\COMMON\easyax5043.c:1478: axradio_trxstate = trxstate_off;
   2670 75 0B 00          10417 	mov	_axradio_trxstate,#0x00
                    1E3E  10418 	C$easyax5043.c$1479$1$339 ==.
                          10419 ;	..\COMMON\easyax5043.c:1479: if (ax5043_reset())
   2673 12 37 BC          10420 	lcall	_ax5043_reset
   2676 E5 82             10421 	mov	a,dpl
   2678 60 06             10422 	jz	00102$
                    1E45  10423 	C$easyax5043.c$1480$1$339 ==.
                          10424 ;	..\COMMON\easyax5043.c:1480: return AXRADIO_ERR_NOCHIP;
   267A 75 82 05          10425 	mov	dpl,#0x05
   267D 02 28 B8          10426 	ljmp	00139$
   2680                   10427 00102$:
                    1E4B  10428 	C$easyax5043.c$1481$1$339 ==.
                          10429 ;	..\COMMON\easyax5043.c:1481: ax5043_init_registers();
   2680 12 15 F8          10430 	lcall	_ax5043_init_registers
                    1E4E  10431 	C$easyax5043.c$1482$1$339 ==.
                          10432 ;	..\COMMON\easyax5043.c:1482: ax5043_set_registers_rx();
   2683 12 04 3E          10433 	lcall	_ax5043_set_registers_rx
                    1E51  10434 	C$easyax5043.c$1483$1$339 ==.
                          10435 ;	..\COMMON\easyax5043.c:1483: pllloop_save = AX5043_PLLLOOP;
   2686 90 40 30          10436 	mov	dptr,#_AX5043_PLLLOOP
   2689 E0                10437 	movx	a,@dptr
   268A FF                10438 	mov	r7,a
                    1E56  10439 	C$easyax5043.c$1484$1$339 ==.
                          10440 ;	..\COMMON\easyax5043.c:1484: pllcpi_save = AX5043_PLLCPI;
   268B 90 40 31          10441 	mov	dptr,#_AX5043_PLLCPI
   268E E0                10442 	movx	a,@dptr
   268F FE                10443 	mov	r6,a
                    1E5B  10444 	C$easyax5043.c$1485$1$339 ==.
                          10445 ;	..\COMMON\easyax5043.c:1485: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   2690 90 40 30          10446 	mov	dptr,#_AX5043_PLLLOOP
   2693 74 09             10447 	mov	a,#0x09
   2695 F0                10448 	movx	@dptr,a
                    1E61  10449 	C$easyax5043.c$1486$1$339 ==.
                          10450 ;	..\COMMON\easyax5043.c:1486: AX5043_PLLCPI = 0x08;
   2696 90 40 31          10451 	mov	dptr,#_AX5043_PLLCPI
   2699 74 08             10452 	mov	a,#0x08
   269B F0                10453 	movx	@dptr,a
                    1E67  10454 	C$easyax5043.c$1488$1$339 ==.
                          10455 ;	..\COMMON\easyax5043.c:1488: IE_4 = 1;
   269C D2 AC             10456 	setb	_IE_4
                    1E69  10457 	C$easyax5043.c$1490$1$339 ==.
                          10458 ;	..\COMMON\easyax5043.c:1490: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   269E 90 40 02          10459 	mov	dptr,#_AX5043_PWRMODE
   26A1 74 05             10460 	mov	a,#0x05
   26A3 F0                10461 	movx	@dptr,a
                    1E6F  10462 	C$easyax5043.c$1491$1$339 ==.
                          10463 ;	..\COMMON\easyax5043.c:1491: axradio_wait_for_xtal();
   26A4 C0 07             10464 	push	ar7
   26A6 C0 06             10465 	push	ar6
   26A8 12 14 9D          10466 	lcall	_axradio_wait_for_xtal
   26AB D0 06             10467 	pop	ar6
   26AD D0 07             10468 	pop	ar7
                    1E7A  10469 	C$easyax5043.c$1493$3$341 ==.
                          10470 ;	..\COMMON\easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   26AF 7D 00             10471 	mov	r5,#0x00
   26B1                   10472 00127$:
   26B1 90 4E FF          10473 	mov	dptr,#_axradio_phy_nrchannels
   26B4 E4                10474 	clr	a
   26B5 93                10475 	movc	a,@a+dptr
   26B6 FC                10476 	mov	r4,a
   26B7 C3                10477 	clr	c
   26B8 ED                10478 	mov	a,r5
   26B9 9C                10479 	subb	a,r4
   26BA 40 03             10480 	jc	00178$
   26BC 02 27 8C          10481 	ljmp	00130$
   26BF                   10482 00178$:
                    1E8A  10483 	C$easyax5043.c$1496$3$341 ==.
                          10484 ;	..\COMMON\easyax5043.c:1496: uint32_t __autodata f = axradio_phy_chanfreq[i];
   26BF ED                10485 	mov	a,r5
   26C0 75 F0 04          10486 	mov	b,#0x04
   26C3 A4                10487 	mul	ab
   26C4 24 00             10488 	add	a,#_axradio_phy_chanfreq
   26C6 F5 82             10489 	mov	dpl,a
   26C8 74 4F             10490 	mov	a,#(_axradio_phy_chanfreq >> 8)
   26CA 35 F0             10491 	addc	a,b
   26CC F5 83             10492 	mov	dph,a
   26CE E4                10493 	clr	a
   26CF 93                10494 	movc	a,@a+dptr
   26D0 F9                10495 	mov	r1,a
   26D1 A3                10496 	inc	dptr
   26D2 E4                10497 	clr	a
   26D3 93                10498 	movc	a,@a+dptr
   26D4 FA                10499 	mov	r2,a
   26D5 A3                10500 	inc	dptr
   26D6 E4                10501 	clr	a
   26D7 93                10502 	movc	a,@a+dptr
   26D8 FB                10503 	mov	r3,a
   26D9 A3                10504 	inc	dptr
   26DA E4                10505 	clr	a
   26DB 93                10506 	movc	a,@a+dptr
   26DC FC                10507 	mov	r4,a
                    1EA8  10508 	C$easyax5043.c$1497$3$341 ==.
                          10509 ;	..\COMMON\easyax5043.c:1497: AX5043_FREQA0 = f;
   26DD 90 40 37          10510 	mov	dptr,#_AX5043_FREQA0
   26E0 E9                10511 	mov	a,r1
   26E1 F0                10512 	movx	@dptr,a
                    1EAD  10513 	C$easyax5043.c$1498$3$341 ==.
                          10514 ;	..\COMMON\easyax5043.c:1498: AX5043_FREQA1 = f >> 8;
   26E2 90 40 36          10515 	mov	dptr,#_AX5043_FREQA1
   26E5 EA                10516 	mov	a,r2
   26E6 F0                10517 	movx	@dptr,a
                    1EB2  10518 	C$easyax5043.c$1499$3$341 ==.
                          10519 ;	..\COMMON\easyax5043.c:1499: AX5043_FREQA2 = f >> 16;
   26E7 90 40 35          10520 	mov	dptr,#_AX5043_FREQA2
   26EA EB                10521 	mov	a,r3
   26EB F0                10522 	movx	@dptr,a
                    1EB7  10523 	C$easyax5043.c$1500$3$341 ==.
                          10524 ;	..\COMMON\easyax5043.c:1500: AX5043_FREQA3 = f >> 24;
   26EC 90 40 34          10525 	mov	dptr,#_AX5043_FREQA3
   26EF EC                10526 	mov	a,r4
   26F0 F0                10527 	movx	@dptr,a
                    1EBC  10528 	C$easyax5043.c$1502$2$340 ==.
                          10529 ;	..\COMMON\easyax5043.c:1502: iesave = IE & 0x80;
   26F1 74 80             10530 	mov	a,#0x80
   26F3 55 A8             10531 	anl	a,_IE
   26F5 FC                10532 	mov	r4,a
                    1EC1  10533 	C$easyax5043.c$1503$2$340 ==.
                          10534 ;	..\COMMON\easyax5043.c:1503: EA = 0;
   26F6 C2 AF             10535 	clr	_EA
                    1EC3  10536 	C$easyax5043.c$1504$2$340 ==.
                          10537 ;	..\COMMON\easyax5043.c:1504: axradio_trxstate = trxstate_pll_ranging;
   26F8 75 0B 05          10538 	mov	_axradio_trxstate,#0x05
                    1EC6  10539 	C$easyax5043.c$1505$2$340 ==.
                          10540 ;	..\COMMON\easyax5043.c:1505: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   26FB 90 40 06          10541 	mov	dptr,#_AX5043_IRQMASK1
   26FE 74 10             10542 	mov	a,#0x10
   2700 F0                10543 	movx	@dptr,a
                    1ECC  10544 	C$easyax5043.c$1508$3$342 ==.
                          10545 ;	..\COMMON\easyax5043.c:1508: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   2701 90 4F 04          10546 	mov	dptr,#_axradio_phy_chanpllrnginit
   2704 E4                10547 	clr	a
   2705 93                10548 	movc	a,@a+dptr
   2706 FB                10549 	mov	r3,a
   2707 54 F0             10550 	anl	a,#0xF0
   2709 70 0B             10551 	jnz	00108$
                    1ED6  10552 	C$easyax5043.c$1509$4$343 ==.
                          10553 ;	..\COMMON\easyax5043.c:1509: r = axradio_phy_chanpllrnginit[i] | 0x10;
   270B ED                10554 	mov	a,r5
   270C 90 4F 04          10555 	mov	dptr,#_axradio_phy_chanpllrnginit
   270F 93                10556 	movc	a,@a+dptr
   2710 FB                10557 	mov	r3,a
   2711 43 03 10          10558 	orl	ar3,#0x10
   2714 80 25             10559 	sjmp	00109$
   2716                   10560 00108$:
                    1EE1  10561 	C$easyax5043.c$1512$4$344 ==.
                          10562 ;	..\COMMON\easyax5043.c:1512: r = 0x18;
   2716 7B 18             10563 	mov	r3,#0x18
                    1EE3  10564 	C$easyax5043.c$1513$4$344 ==.
                          10565 ;	..\COMMON\easyax5043.c:1513: if (i) {
   2718 ED                10566 	mov	a,r5
   2719 60 20             10567 	jz	00109$
                    1EE6  10568 	C$easyax5043.c$1514$5$345 ==.
                          10569 ;	..\COMMON\easyax5043.c:1514: r = axradio_phy_chanpllrng_rx[i - 1];
   271B 8D 01             10570 	mov	ar1,r5
   271D 7A 00             10571 	mov	r2,#0x00
   271F 19                10572 	dec	r1
   2720 B9 FF 01          10573 	cjne	r1,#0xFF,00182$
   2723 1A                10574 	dec	r2
   2724                   10575 00182$:
   2724 E9                10576 	mov	a,r1
   2725 24 00             10577 	add	a,#_axradio_phy_chanpllrng_rx
   2727 F5 82             10578 	mov	dpl,a
   2729 EA                10579 	mov	a,r2
   272A 34 00             10580 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   272C F5 83             10581 	mov	dph,a
   272E E0                10582 	movx	a,@dptr
                    1EFA  10583 	C$easyax5043.c$1515$5$345 ==.
                          10584 ;	..\COMMON\easyax5043.c:1515: if (r & 0x20)
   272F FB                10585 	mov	r3,a
   2730 30 E5 02          10586 	jnb	acc.5,00104$
                    1EFE  10587 	C$easyax5043.c$1516$5$345 ==.
                          10588 ;	..\COMMON\easyax5043.c:1516: r = 0x08;
   2733 7B 08             10589 	mov	r3,#0x08
   2735                   10590 00104$:
                    1F00  10591 	C$easyax5043.c$1517$5$345 ==.
                          10592 ;	..\COMMON\easyax5043.c:1517: r &= 0x0F;
   2735 53 03 0F          10593 	anl	ar3,#0x0F
                    1F03  10594 	C$easyax5043.c$1518$5$345 ==.
                          10595 ;	..\COMMON\easyax5043.c:1518: r |= 0x10;
   2738 43 03 10          10596 	orl	ar3,#0x10
   273B                   10597 00109$:
                    1F06  10598 	C$easyax5043.c$1521$3$342 ==.
                          10599 ;	..\COMMON\easyax5043.c:1521: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   273B 90 40 33          10600 	mov	dptr,#_AX5043_PLLRANGINGA
   273E EB                10601 	mov	a,r3
   273F F0                10602 	movx	@dptr,a
   2740                   10603 00113$:
                    1F0B  10604 	C$easyax5043.c$1524$3$346 ==.
                          10605 ;	..\COMMON\easyax5043.c:1524: EA = 0;
   2740 C2 AF             10606 	clr	_EA
                    1F0D  10607 	C$easyax5043.c$1525$3$346 ==.
                          10608 ;	..\COMMON\easyax5043.c:1525: if (axradio_trxstate == trxstate_pll_ranging_done)
   2742 74 06             10609 	mov	a,#0x06
   2744 B5 0B 02          10610 	cjne	a,_axradio_trxstate,00184$
   2747 80 22             10611 	sjmp	00114$
   2749                   10612 00184$:
                    1F14  10613 	C$easyax5043.c$1527$3$346 ==.
                          10614 ;	..\COMMON\easyax5043.c:1527: wtimer_idle(WTFLAG_CANSTANDBY);
   2749 75 82 02          10615 	mov	dpl,#0x02
   274C C0 07             10616 	push	ar7
   274E C0 06             10617 	push	ar6
   2750 C0 05             10618 	push	ar5
   2752 C0 04             10619 	push	ar4
   2754 12 3E CC          10620 	lcall	_wtimer_idle
   2757 D0 04             10621 	pop	ar4
                    1F24  10622 	C$easyax5043.c$1528$3$346 ==.
                          10623 ;	..\COMMON\easyax5043.c:1528: IE |= iesave;
   2759 EC                10624 	mov	a,r4
   275A 42 A8             10625 	orl	_IE,a
                    1F27  10626 	C$easyax5043.c$1529$3$346 ==.
                          10627 ;	..\COMMON\easyax5043.c:1529: wtimer_runcallbacks();
   275C C0 04             10628 	push	ar4
   275E 12 3E 48          10629 	lcall	_wtimer_runcallbacks
   2761 D0 04             10630 	pop	ar4
   2763 D0 05             10631 	pop	ar5
   2765 D0 06             10632 	pop	ar6
   2767 D0 07             10633 	pop	ar7
   2769 80 D5             10634 	sjmp	00113$
   276B                   10635 00114$:
                    1F36  10636 	C$easyax5043.c$1531$2$340 ==.
                          10637 ;	..\COMMON\easyax5043.c:1531: axradio_trxstate = trxstate_off;
   276B 75 0B 00          10638 	mov	_axradio_trxstate,#0x00
                    1F39  10639 	C$easyax5043.c$1532$2$340 ==.
                          10640 ;	..\COMMON\easyax5043.c:1532: AX5043_IRQMASK1 = 0x00;
   276E 90 40 06          10641 	mov	dptr,#_AX5043_IRQMASK1
   2771 E4                10642 	clr	a
   2772 F0                10643 	movx	@dptr,a
                    1F3E  10644 	C$easyax5043.c$1533$2$340 ==.
                          10645 ;	..\COMMON\easyax5043.c:1533: axradio_phy_chanpllrng_rx[i] = AX5043_PLLRANGINGA;
   2773 ED                10646 	mov	a,r5
   2774 24 00             10647 	add	a,#_axradio_phy_chanpllrng_rx
   2776 FA                10648 	mov	r2,a
   2777 E4                10649 	clr	a
   2778 34 00             10650 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   277A FB                10651 	mov	r3,a
   277B 90 40 33          10652 	mov	dptr,#_AX5043_PLLRANGINGA
   277E E0                10653 	movx	a,@dptr
   277F F9                10654 	mov	r1,a
   2780 8A 82             10655 	mov	dpl,r2
   2782 8B 83             10656 	mov	dph,r3
   2784 F0                10657 	movx	@dptr,a
                    1F50  10658 	C$easyax5043.c$1534$2$340 ==.
                          10659 ;	..\COMMON\easyax5043.c:1534: IE |= iesave;
   2785 EC                10660 	mov	a,r4
   2786 42 A8             10661 	orl	_IE,a
                    1F53  10662 	C$easyax5043.c$1493$1$339 ==.
                          10663 ;	..\COMMON\easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2788 0D                10664 	inc	r5
   2789 02 26 B1          10665 	ljmp	00127$
   278C                   10666 00130$:
                    1F57  10667 	C$easyax5043.c$1536$1$339 ==.
                          10668 ;	..\COMMON\easyax5043.c:1536: ax5043_set_registers_tx();
   278C C0 07             10669 	push	ar7
   278E C0 06             10670 	push	ar6
   2790 12 04 0D          10671 	lcall	_ax5043_set_registers_tx
   2793 D0 06             10672 	pop	ar6
   2795 D0 07             10673 	pop	ar7
                    1F62  10674 	C$easyax5043.c$1537$1$339 ==.
                          10675 ;	..\COMMON\easyax5043.c:1537: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   2797 90 40 30          10676 	mov	dptr,#_AX5043_PLLLOOP
   279A 74 09             10677 	mov	a,#0x09
   279C F0                10678 	movx	@dptr,a
                    1F68  10679 	C$easyax5043.c$1538$1$339 ==.
                          10680 ;	..\COMMON\easyax5043.c:1538: AX5043_PLLCPI = 0x08;
   279D 90 40 31          10681 	mov	dptr,#_AX5043_PLLCPI
   27A0 74 08             10682 	mov	a,#0x08
   27A2 F0                10683 	movx	@dptr,a
                    1F6E  10684 	C$easyax5043.c$1539$2$347 ==.
                          10685 ;	..\COMMON\easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   27A3 7D 00             10686 	mov	r5,#0x00
   27A5                   10687 00131$:
   27A5 90 4E FF          10688 	mov	dptr,#_axradio_phy_nrchannels
   27A8 E4                10689 	clr	a
   27A9 93                10690 	movc	a,@a+dptr
   27AA FC                10691 	mov	r4,a
   27AB C3                10692 	clr	c
   27AC ED                10693 	mov	a,r5
   27AD 9C                10694 	subb	a,r4
   27AE 40 03             10695 	jc	00185$
   27B0 02 28 40          10696 	ljmp	00134$
   27B3                   10697 00185$:
                    1F7E  10698 	C$easyax5043.c$1540$2$347 ==.
                          10699 ;	..\COMMON\easyax5043.c:1540: uint8_t __autodata iesave = IE & 0x80;
   27B3 74 80             10700 	mov	a,#0x80
   27B5 55 A8             10701 	anl	a,_IE
   27B7 FC                10702 	mov	r4,a
                    1F83  10703 	C$easyax5043.c$1541$2$347 ==.
                          10704 ;	..\COMMON\easyax5043.c:1541: EA = 0;
   27B8 C2 AF             10705 	clr	_EA
                    1F85  10706 	C$easyax5043.c$1542$2$347 ==.
                          10707 ;	..\COMMON\easyax5043.c:1542: axradio_trxstate = trxstate_pll_ranging;
   27BA 75 0B 05          10708 	mov	_axradio_trxstate,#0x05
                    1F88  10709 	C$easyax5043.c$1543$2$347 ==.
                          10710 ;	..\COMMON\easyax5043.c:1543: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   27BD 90 40 06          10711 	mov	dptr,#_AX5043_IRQMASK1
   27C0 74 10             10712 	mov	a,#0x10
   27C2 F0                10713 	movx	@dptr,a
                    1F8E  10714 	C$easyax5043.c$1546$3$348 ==.
                          10715 ;	..\COMMON\easyax5043.c:1546: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   27C3 90 4F 04          10716 	mov	dptr,#_axradio_phy_chanpllrnginit
   27C6 E4                10717 	clr	a
   27C7 93                10718 	movc	a,@a+dptr
   27C8 FB                10719 	mov	r3,a
   27C9 54 F0             10720 	anl	a,#0xF0
   27CB 70 0B             10721 	jnz	00118$
                    1F98  10722 	C$easyax5043.c$1547$4$349 ==.
                          10723 ;	..\COMMON\easyax5043.c:1547: r = axradio_phy_chanpllrnginit[i] | 0x10;
   27CD ED                10724 	mov	a,r5
   27CE 90 4F 04          10725 	mov	dptr,#_axradio_phy_chanpllrnginit
   27D1 93                10726 	movc	a,@a+dptr
   27D2 FB                10727 	mov	r3,a
   27D3 43 03 10          10728 	orl	ar3,#0x10
   27D6 80 17             10729 	sjmp	00119$
   27D8                   10730 00118$:
                    1FA3  10731 	C$easyax5043.c$1550$4$350 ==.
                          10732 ;	..\COMMON\easyax5043.c:1550: r = axradio_phy_chanpllrng_rx[i];
   27D8 ED                10733 	mov	a,r5
   27D9 24 00             10734 	add	a,#_axradio_phy_chanpllrng_rx
   27DB F5 82             10735 	mov	dpl,a
   27DD E4                10736 	clr	a
   27DE 34 00             10737 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   27E0 F5 83             10738 	mov	dph,a
   27E2 E0                10739 	movx	a,@dptr
                    1FAE  10740 	C$easyax5043.c$1551$4$350 ==.
                          10741 ;	..\COMMON\easyax5043.c:1551: if (r & 0x20)
   27E3 FB                10742 	mov	r3,a
   27E4 30 E5 02          10743 	jnb	acc.5,00116$
                    1FB2  10744 	C$easyax5043.c$1552$4$350 ==.
                          10745 ;	..\COMMON\easyax5043.c:1552: r = 0x08;
   27E7 7B 08             10746 	mov	r3,#0x08
   27E9                   10747 00116$:
                    1FB4  10748 	C$easyax5043.c$1553$4$350 ==.
                          10749 ;	..\COMMON\easyax5043.c:1553: r &= 0x0F;
   27E9 53 03 0F          10750 	anl	ar3,#0x0F
                    1FB7  10751 	C$easyax5043.c$1554$4$350 ==.
                          10752 ;	..\COMMON\easyax5043.c:1554: r |= 0x10;
   27EC 43 03 10          10753 	orl	ar3,#0x10
   27EF                   10754 00119$:
                    1FBA  10755 	C$easyax5043.c$1556$3$348 ==.
                          10756 ;	..\COMMON\easyax5043.c:1556: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   27EF 90 40 33          10757 	mov	dptr,#_AX5043_PLLRANGINGA
   27F2 EB                10758 	mov	a,r3
   27F3 F0                10759 	movx	@dptr,a
   27F4                   10760 00123$:
                    1FBF  10761 	C$easyax5043.c$1559$3$351 ==.
                          10762 ;	..\COMMON\easyax5043.c:1559: EA = 0;
   27F4 C2 AF             10763 	clr	_EA
                    1FC1  10764 	C$easyax5043.c$1560$3$351 ==.
                          10765 ;	..\COMMON\easyax5043.c:1560: if (axradio_trxstate == trxstate_pll_ranging_done)
   27F6 74 06             10766 	mov	a,#0x06
   27F8 B5 0B 02          10767 	cjne	a,_axradio_trxstate,00189$
   27FB 80 22             10768 	sjmp	00124$
   27FD                   10769 00189$:
                    1FC8  10770 	C$easyax5043.c$1562$3$351 ==.
                          10771 ;	..\COMMON\easyax5043.c:1562: wtimer_idle(WTFLAG_CANSTANDBY);
   27FD 75 82 02          10772 	mov	dpl,#0x02
   2800 C0 07             10773 	push	ar7
   2802 C0 06             10774 	push	ar6
   2804 C0 05             10775 	push	ar5
   2806 C0 04             10776 	push	ar4
   2808 12 3E CC          10777 	lcall	_wtimer_idle
   280B D0 04             10778 	pop	ar4
                    1FD8  10779 	C$easyax5043.c$1563$3$351 ==.
                          10780 ;	..\COMMON\easyax5043.c:1563: IE |= iesave;
   280D EC                10781 	mov	a,r4
   280E 42 A8             10782 	orl	_IE,a
                    1FDB  10783 	C$easyax5043.c$1564$3$351 ==.
                          10784 ;	..\COMMON\easyax5043.c:1564: wtimer_runcallbacks();
   2810 C0 04             10785 	push	ar4
   2812 12 3E 48          10786 	lcall	_wtimer_runcallbacks
   2815 D0 04             10787 	pop	ar4
   2817 D0 05             10788 	pop	ar5
   2819 D0 06             10789 	pop	ar6
   281B D0 07             10790 	pop	ar7
   281D 80 D5             10791 	sjmp	00123$
   281F                   10792 00124$:
                    1FEA  10793 	C$easyax5043.c$1566$2$347 ==.
                          10794 ;	..\COMMON\easyax5043.c:1566: axradio_trxstate = trxstate_off;
   281F 75 0B 00          10795 	mov	_axradio_trxstate,#0x00
                    1FED  10796 	C$easyax5043.c$1567$2$347 ==.
                          10797 ;	..\COMMON\easyax5043.c:1567: AX5043_IRQMASK1 = 0x00;
   2822 90 40 06          10798 	mov	dptr,#_AX5043_IRQMASK1
   2825 E4                10799 	clr	a
   2826 F0                10800 	movx	@dptr,a
                    1FF2  10801 	C$easyax5043.c$1568$2$347 ==.
                          10802 ;	..\COMMON\easyax5043.c:1568: axradio_phy_chanpllrng_tx[i] = AX5043_PLLRANGINGA;
   2827 ED                10803 	mov	a,r5
   2828 24 01             10804 	add	a,#_axradio_phy_chanpllrng_tx
   282A FA                10805 	mov	r2,a
   282B E4                10806 	clr	a
   282C 34 00             10807 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   282E FB                10808 	mov	r3,a
   282F 90 40 33          10809 	mov	dptr,#_AX5043_PLLRANGINGA
   2832 E0                10810 	movx	a,@dptr
   2833 F9                10811 	mov	r1,a
   2834 8A 82             10812 	mov	dpl,r2
   2836 8B 83             10813 	mov	dph,r3
   2838 F0                10814 	movx	@dptr,a
                    2004  10815 	C$easyax5043.c$1569$2$347 ==.
                          10816 ;	..\COMMON\easyax5043.c:1569: IE |= iesave;
   2839 EC                10817 	mov	a,r4
   283A 42 A8             10818 	orl	_IE,a
                    2007  10819 	C$easyax5043.c$1539$1$339 ==.
                          10820 ;	..\COMMON\easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   283C 0D                10821 	inc	r5
   283D 02 27 A5          10822 	ljmp	00131$
   2840                   10823 00134$:
                    200B  10824 	C$easyax5043.c$1571$1$339 ==.
                          10825 ;	..\COMMON\easyax5043.c:1571: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   2840 90 40 02          10826 	mov	dptr,#_AX5043_PWRMODE
   2843 E4                10827 	clr	a
   2844 F0                10828 	movx	@dptr,a
                    2010  10829 	C$easyax5043.c$1572$1$339 ==.
                          10830 ;	..\COMMON\easyax5043.c:1572: AX5043_PLLRANGINGA = axradio_phy_chanpllrng_rx[0] & 0x0F;
   2845 90 00 00          10831 	mov	dptr,#_axradio_phy_chanpllrng_rx
   2848 E0                10832 	movx	a,@dptr
   2849 FD                10833 	mov	r5,a
   284A 90 40 33          10834 	mov	dptr,#_AX5043_PLLRANGINGA
   284D 74 0F             10835 	mov	a,#0x0F
   284F 5D                10836 	anl	a,r5
   2850 F0                10837 	movx	@dptr,a
                    201C  10838 	C$easyax5043.c$1574$2$352 ==.
                          10839 ;	..\COMMON\easyax5043.c:1574: uint32_t __autodata f = axradio_phy_chanfreq[0];
   2851 90 4F 00          10840 	mov	dptr,#_axradio_phy_chanfreq
   2854 E4                10841 	clr	a
   2855 93                10842 	movc	a,@a+dptr
   2856 FA                10843 	mov	r2,a
   2857 A3                10844 	inc	dptr
   2858 E4                10845 	clr	a
   2859 93                10846 	movc	a,@a+dptr
   285A FB                10847 	mov	r3,a
   285B A3                10848 	inc	dptr
   285C E4                10849 	clr	a
   285D 93                10850 	movc	a,@a+dptr
   285E FC                10851 	mov	r4,a
   285F A3                10852 	inc	dptr
   2860 E4                10853 	clr	a
   2861 93                10854 	movc	a,@a+dptr
   2862 FD                10855 	mov	r5,a
                    202E  10856 	C$easyax5043.c$1575$2$352 ==.
                          10857 ;	..\COMMON\easyax5043.c:1575: AX5043_FREQA0 = f;
   2863 90 40 37          10858 	mov	dptr,#_AX5043_FREQA0
   2866 EA                10859 	mov	a,r2
   2867 F0                10860 	movx	@dptr,a
                    2033  10861 	C$easyax5043.c$1576$2$352 ==.
                          10862 ;	..\COMMON\easyax5043.c:1576: AX5043_FREQA1 = f >> 8;
   2868 90 40 36          10863 	mov	dptr,#_AX5043_FREQA1
   286B EB                10864 	mov	a,r3
   286C F0                10865 	movx	@dptr,a
                    2038  10866 	C$easyax5043.c$1577$2$352 ==.
                          10867 ;	..\COMMON\easyax5043.c:1577: AX5043_FREQA2 = f >> 16;
   286D 90 40 35          10868 	mov	dptr,#_AX5043_FREQA2
   2870 EC                10869 	mov	a,r4
   2871 F0                10870 	movx	@dptr,a
                    203D  10871 	C$easyax5043.c$1578$2$352 ==.
                          10872 ;	..\COMMON\easyax5043.c:1578: AX5043_FREQA3 = f >> 24;
   2872 90 40 34          10873 	mov	dptr,#_AX5043_FREQA3
   2875 ED                10874 	mov	a,r5
   2876 F0                10875 	movx	@dptr,a
                    2042  10876 	C$easyax5043.c$1580$1$339 ==.
                          10877 ;	..\COMMON\easyax5043.c:1580: AX5043_PLLLOOP = pllloop_save; // restore loop settings (works if they came from the common section, unimportant if the came from the rx / tx section)
   2877 90 40 30          10878 	mov	dptr,#_AX5043_PLLLOOP
   287A EF                10879 	mov	a,r7
   287B F0                10880 	movx	@dptr,a
                    2047  10881 	C$easyax5043.c$1581$1$339 ==.
                          10882 ;	..\COMMON\easyax5043.c:1581: AX5043_PLLCPI = pllcpi_save;
   287C 90 40 31          10883 	mov	dptr,#_AX5043_PLLCPI
   287F EE                10884 	mov	a,r6
   2880 F0                10885 	movx	@dptr,a
                    204C  10886 	C$easyax5043.c$1583$1$339 ==.
                          10887 ;	..\COMMON\easyax5043.c:1583: axradio_mode = AXRADIO_MODE_OFF;
   2881 75 0A 01          10888 	mov	_axradio_mode,#0x01
                    204F  10889 	C$easyax5043.c$1584$1$339 ==.
                          10890 ;	..\COMMON\easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   2884 7F 00             10891 	mov	r7,#0x00
   2886                   10892 00135$:
   2886 90 4E FF          10893 	mov	dptr,#_axradio_phy_nrchannels
   2889 E4                10894 	clr	a
   288A 93                10895 	movc	a,@a+dptr
   288B FE                10896 	mov	r6,a
   288C C3                10897 	clr	c
   288D EF                10898 	mov	a,r7
   288E 9E                10899 	subb	a,r6
   288F 50 24             10900 	jnc	00138$
                    205C  10901 	C$easyax5043.c$1585$1$339 ==.
                          10902 ;	..\COMMON\easyax5043.c:1585: if ((axradio_phy_chanpllrng_rx[i] | axradio_phy_chanpllrng_tx[i]) & 0x20)
   2891 EF                10903 	mov	a,r7
   2892 24 00             10904 	add	a,#_axradio_phy_chanpllrng_rx
   2894 F5 82             10905 	mov	dpl,a
   2896 E4                10906 	clr	a
   2897 34 00             10907 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2899 F5 83             10908 	mov	dph,a
   289B E0                10909 	movx	a,@dptr
   289C FE                10910 	mov	r6,a
   289D EF                10911 	mov	a,r7
   289E 24 01             10912 	add	a,#_axradio_phy_chanpllrng_tx
   28A0 F5 82             10913 	mov	dpl,a
   28A2 E4                10914 	clr	a
   28A3 34 00             10915 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   28A5 F5 83             10916 	mov	dph,a
   28A7 E0                10917 	movx	a,@dptr
   28A8 FD                10918 	mov	r5,a
   28A9 4E                10919 	orl	a,r6
   28AA 30 E5 05          10920 	jnb	acc.5,00137$
                    2078  10921 	C$easyax5043.c$1586$1$339 ==.
                          10922 ;	..\COMMON\easyax5043.c:1586: return AXRADIO_ERR_RANGING;
   28AD 75 82 06          10923 	mov	dpl,#0x06
   28B0 80 06             10924 	sjmp	00139$
   28B2                   10925 00137$:
                    207D  10926 	C$easyax5043.c$1584$1$339 ==.
                          10927 ;	..\COMMON\easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   28B2 0F                10928 	inc	r7
   28B3 80 D1             10929 	sjmp	00135$
   28B5                   10930 00138$:
                    2080  10931 	C$easyax5043.c$1588$1$339 ==.
                          10932 ;	..\COMMON\easyax5043.c:1588: return AXRADIO_ERR_NOERROR;
   28B5 75 82 00          10933 	mov	dpl,#0x00
   28B8                   10934 00139$:
                    2083  10935 	C$easyax5043.c$1589$1$339 ==.
                    2083  10936 	XG$axradio_init$0$0 ==.
   28B8 22                10937 	ret
                          10938 ;------------------------------------------------------------
                          10939 ;Allocation info for local variables in function 'axradio_cansleep'
                          10940 ;------------------------------------------------------------
                    2084  10941 	G$axradio_cansleep$0$0 ==.
                    2084  10942 	C$easyax5043.c$1591$1$339 ==.
                          10943 ;	..\COMMON\easyax5043.c:1591: __reentrantb uint8_t axradio_cansleep(void) __reentrant
                          10944 ;	-----------------------------------------
                          10945 ;	 function axradio_cansleep
                          10946 ;	-----------------------------------------
   28B9                   10947 _axradio_cansleep:
                    2084  10948 	C$easyax5043.c$1593$1$354 ==.
                          10949 ;	..\COMMON\easyax5043.c:1593: if (axradio_trxstate == trxstate_off || axradio_trxstate == trxstate_rxwor)
   28B9 E5 0B             10950 	mov	a,_axradio_trxstate
   28BB 60 05             10951 	jz	00101$
   28BD 74 02             10952 	mov	a,#0x02
   28BF B5 0B 05          10953 	cjne	a,_axradio_trxstate,00102$
   28C2                   10954 00101$:
                    208D  10955 	C$easyax5043.c$1594$1$354 ==.
                          10956 ;	..\COMMON\easyax5043.c:1594: return 1;
   28C2 75 82 01          10957 	mov	dpl,#0x01
   28C5 80 03             10958 	sjmp	00104$
   28C7                   10959 00102$:
                    2092  10960 	C$easyax5043.c$1595$1$354 ==.
                          10961 ;	..\COMMON\easyax5043.c:1595: return 0;
   28C7 75 82 00          10962 	mov	dpl,#0x00
   28CA                   10963 00104$:
                    2095  10964 	C$easyax5043.c$1596$1$354 ==.
                    2095  10965 	XG$axradio_cansleep$0$0 ==.
   28CA 22                10966 	ret
                          10967 ;------------------------------------------------------------
                          10968 ;Allocation info for local variables in function 'wtimer_cansleep_dummy'
                          10969 ;------------------------------------------------------------
                    2096  10970 	Feasyax5043$wtimer_cansleep_dummy$0$0 ==.
                    2096  10971 	C$easyax5043.c$1599$1$354 ==.
                          10972 ;	..\COMMON\easyax5043.c:1599: static void wtimer_cansleep_dummy(void) __naked
                          10973 ;	-----------------------------------------
                          10974 ;	 function wtimer_cansleep_dummy
                          10975 ;	-----------------------------------------
   28CB                   10976 _wtimer_cansleep_dummy:
                          10977 ;	naked function: no prologue.
                    2096  10978 	C$easyax5043.c$1613$1$356 ==.
                          10979 ;	..\COMMON\easyax5043.c:1613: __endasm;
                          10980 	.area WTCANSLP0 (CODE)
                          10981 	.area WTCANSLP1 (CODE)
                          10982 	.area WTCANSLP2 (CODE)
                          10983 	.area WTCANSLP1 (CODE)
   5340 12 28 B9          10984 	lcall _axradio_cansleep
   5343 E5 82             10985 	mov a,dpl
   5345 70 01             10986 	jnz 00000$
   5347 22                10987 	ret
   5348                   10988 	00000$:
                          10989 	.area CSEG (CODE)
                          10990 ;	naked function: no epilogue.
                    2096  10991 	C$easyax5043.c$1614$1$356 ==.
                    2096  10992 	XFeasyax5043$wtimer_cansleep_dummy$0$0 ==.
                          10993 ;------------------------------------------------------------
                          10994 ;Allocation info for local variables in function 'axradio_set_mode'
                          10995 ;------------------------------------------------------------
                          10996 ;mode                      Allocated to registers r7 
                          10997 ;r                         Allocated to registers r6 
                          10998 ;r                         Allocated to registers r6 
                          10999 ;iesave                    Allocated to registers r6 
                          11000 ;------------------------------------------------------------
                    2096  11001 	G$axradio_set_mode$0$0 ==.
                    2096  11002 	C$easyax5043.c$1617$1$356 ==.
                          11003 ;	..\COMMON\easyax5043.c:1617: uint8_t axradio_set_mode(uint8_t mode)
                          11004 ;	-----------------------------------------
                          11005 ;	 function axradio_set_mode
                          11006 ;	-----------------------------------------
   28CB                   11007 _axradio_set_mode:
                    2096  11008 	C$easyax5043.c$1619$1$358 ==.
                          11009 ;	..\COMMON\easyax5043.c:1619: if (mode == axradio_mode)
   28CB E5 82             11010 	mov	a,dpl
   28CD FF                11011 	mov	r7,a
   28CE B5 0A 06          11012 	cjne	a,_axradio_mode,00102$
                    209C  11013 	C$easyax5043.c$1620$1$358 ==.
                          11014 ;	..\COMMON\easyax5043.c:1620: return AXRADIO_ERR_NOERROR;
   28D1 75 82 00          11015 	mov	dpl,#0x00
   28D4 02 2C B6          11016 	ljmp	00161$
   28D7                   11017 00102$:
                    20A2  11018 	C$easyax5043.c$1621$1$358 ==.
                          11019 ;	..\COMMON\easyax5043.c:1621: switch (axradio_mode) {
   28D7 AE 0A             11020 	mov	r6,_axradio_mode
   28D9 BE 00 02          11021 	cjne	r6,#0x00,00213$
   28DC 80 2E             11022 	sjmp	00103$
   28DE                   11023 00213$:
   28DE BE 02 02          11024 	cjne	r6,#0x02,00214$
   28E1 80 3D             11025 	sjmp	00106$
   28E3                   11026 00214$:
   28E3 BE 03 02          11027 	cjne	r6,#0x03,00215$
   28E6 80 6C             11028 	sjmp	00114$
   28E8                   11029 00215$:
   28E8 BE 14 02          11030 	cjne	r6,#0x14,00216$
   28EB 80 67             11031 	sjmp	00114$
   28ED                   11032 00216$:
   28ED BE 15 02          11033 	cjne	r6,#0x15,00217$
   28F0 80 62             11034 	sjmp	00114$
   28F2                   11035 00217$:
   28F2 BE 16 02          11036 	cjne	r6,#0x16,00218$
   28F5 80 5D             11037 	sjmp	00114$
   28F7                   11038 00218$:
   28F7 BE 1C 03          11039 	cjne	r6,#0x1C,00219$
   28FA 02 29 AD          11040 	ljmp	00119$
   28FD                   11041 00219$:
   28FD BE 1D 03          11042 	cjne	r6,#0x1D,00220$
   2900 02 29 AD          11043 	ljmp	00119$
   2903                   11044 00220$:
   2903 BE 1E 03          11045 	cjne	r6,#0x1E,00221$
   2906 02 29 AD          11046 	ljmp	00119$
   2909                   11047 00221$:
   2909 02 29 BA          11048 	ljmp	00120$
                    20D7  11049 	C$easyax5043.c$1622$2$359 ==.
                          11050 ;	..\COMMON\easyax5043.c:1622: case AXRADIO_MODE_UNINIT:
   290C                   11051 00103$:
                    20D7  11052 	C$easyax5043.c$1624$3$360 ==.
                          11053 ;	..\COMMON\easyax5043.c:1624: uint8_t __autodata r = axradio_init();
   290C C0 07             11054 	push	ar7
   290E 12 25 CB          11055 	lcall	_axradio_init
   2911 AE 82             11056 	mov	r6,dpl
   2913 D0 07             11057 	pop	ar7
                    20E0  11058 	C$easyax5043.c$1625$3$360 ==.
                          11059 ;	..\COMMON\easyax5043.c:1625: if (r != AXRADIO_ERR_NOERROR)
   2915 EE                11060 	mov	a,r6
   2916 70 03             11061 	jnz	00222$
   2918 02 29 C4          11062 	ljmp	00121$
   291B                   11063 00222$:
                    20E6  11064 	C$easyax5043.c$1626$3$360 ==.
                          11065 ;	..\COMMON\easyax5043.c:1626: return r;
   291B 8E 82             11066 	mov	dpl,r6
   291D 02 2C B6          11067 	ljmp	00161$
                    20EB  11068 	C$easyax5043.c$1630$2$359 ==.
                          11069 ;	..\COMMON\easyax5043.c:1630: case AXRADIO_MODE_DEEPSLEEP:
   2920                   11070 00106$:
                    20EB  11071 	C$easyax5043.c$1632$3$361 ==.
                          11072 ;	..\COMMON\easyax5043.c:1632: uint8_t __autodata r = ax5043_wakeup_deepsleep();
   2920 C0 07             11073 	push	ar7
   2922 12 37 79          11074 	lcall	_ax5043_wakeup_deepsleep
   2925 AE 82             11075 	mov	r6,dpl
   2927 D0 07             11076 	pop	ar7
                    20F4  11077 	C$easyax5043.c$1633$3$361 ==.
                          11078 ;	..\COMMON\easyax5043.c:1633: if (r)
   2929 EE                11079 	mov	a,r6
   292A 60 06             11080 	jz	00108$
                    20F7  11081 	C$easyax5043.c$1634$3$361 ==.
                          11082 ;	..\COMMON\easyax5043.c:1634: return AXRADIO_ERR_NOCHIP;
   292C 75 82 05          11083 	mov	dpl,#0x05
   292F 02 2C B6          11084 	ljmp	00161$
   2932                   11085 00108$:
                    20FD  11086 	C$easyax5043.c$1635$3$361 ==.
                          11087 ;	..\COMMON\easyax5043.c:1635: ax5043_init_registers();
   2932 C0 07             11088 	push	ar7
   2934 12 15 F8          11089 	lcall	_ax5043_init_registers
                    2102  11090 	C$easyax5043.c$1636$3$361 ==.
                          11091 ;	..\COMMON\easyax5043.c:1636: r = axradio_set_channel(axradio_curchannel);
   2937 90 00 09          11092 	mov	dptr,#_axradio_curchannel
   293A E0                11093 	movx	a,@dptr
   293B F5 82             11094 	mov	dpl,a
   293D 12 2C BB          11095 	lcall	_axradio_set_channel
   2940 AE 82             11096 	mov	r6,dpl
   2942 D0 07             11097 	pop	ar7
                    210F  11098 	C$easyax5043.c$1637$3$361 ==.
                          11099 ;	..\COMMON\easyax5043.c:1637: if (r != AXRADIO_ERR_NOERROR)
   2944 EE                11100 	mov	a,r6
   2945 60 05             11101 	jz	00110$
                    2112  11102 	C$easyax5043.c$1638$3$361 ==.
                          11103 ;	..\COMMON\easyax5043.c:1638: return r;
   2947 8E 82             11104 	mov	dpl,r6
   2949 02 2C B6          11105 	ljmp	00161$
   294C                   11106 00110$:
                    2117  11107 	C$easyax5043.c$1639$3$361 ==.
                          11108 ;	..\COMMON\easyax5043.c:1639: axradio_trxstate = trxstate_off;
   294C 75 0B 00          11109 	mov	_axradio_trxstate,#0x00
                    211A  11110 	C$easyax5043.c$1640$3$361 ==.
                          11111 ;	..\COMMON\easyax5043.c:1640: axradio_mode = AXRADIO_MODE_OFF;
   294F 75 0A 01          11112 	mov	_axradio_mode,#0x01
                    211D  11113 	C$easyax5043.c$1641$3$361 ==.
                          11114 ;	..\COMMON\easyax5043.c:1641: break;
                    211D  11115 	C$easyax5043.c$1647$2$359 ==.
                          11116 ;	..\COMMON\easyax5043.c:1647: case AXRADIO_MODE_CW_TRANSMIT:
   2952 80 70             11117 	sjmp	00121$
   2954                   11118 00114$:
                    211F  11119 	C$easyax5043.c$1649$3$362 ==.
                          11120 ;	..\COMMON\easyax5043.c:1649: uint8_t __autodata iesave = IE & 0x80;
   2954 74 80             11121 	mov	a,#0x80
   2956 55 A8             11122 	anl	a,_IE
   2958 FE                11123 	mov	r6,a
                    2124  11124 	C$easyax5043.c$1650$3$362 ==.
                          11125 ;	..\COMMON\easyax5043.c:1650: EA = 0;
   2959 C2 AF             11126 	clr	_EA
                    2126  11127 	C$easyax5043.c$1651$3$362 ==.
                          11128 ;	..\COMMON\easyax5043.c:1651: if (axradio_trxstate == trxstate_off) {
   295B E5 0B             11129 	mov	a,_axradio_trxstate
   295D 70 38             11130 	jnz	00116$
                    212A  11131 	C$easyax5043.c$1652$4$363 ==.
                          11132 ;	..\COMMON\easyax5043.c:1652: update_timeanchor();
   295F C0 07             11133 	push	ar7
   2961 C0 06             11134 	push	ar6
   2963 12 08 35          11135 	lcall	_update_timeanchor
                    2131  11136 	C$easyax5043.c$1653$4$363 ==.
                          11137 ;	..\COMMON\easyax5043.c:1653: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   2966 90 02 75          11138 	mov	dptr,#_axradio_cb_transmitend
   2969 12 4B 64          11139 	lcall	_wtimer_remove_callback
                    2137  11140 	C$easyax5043.c$1654$4$363 ==.
                          11141 ;	..\COMMON\easyax5043.c:1654: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   296C 90 02 7A          11142 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   296F E4                11143 	clr	a
   2970 F0                11144 	movx	@dptr,a
                    213C  11145 	C$easyax5043.c$1655$4$363 ==.
                          11146 ;	..\COMMON\easyax5043.c:1655: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   2971 90 00 1A          11147 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2974 E0                11148 	movx	a,@dptr
   2975 FA                11149 	mov	r2,a
   2976 A3                11150 	inc	dptr
   2977 E0                11151 	movx	a,@dptr
   2978 FB                11152 	mov	r3,a
   2979 A3                11153 	inc	dptr
   297A E0                11154 	movx	a,@dptr
   297B FC                11155 	mov	r4,a
   297C A3                11156 	inc	dptr
   297D E0                11157 	movx	a,@dptr
   297E FD                11158 	mov	r5,a
   297F 90 02 7B          11159 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   2982 EA                11160 	mov	a,r2
   2983 F0                11161 	movx	@dptr,a
   2984 A3                11162 	inc	dptr
   2985 EB                11163 	mov	a,r3
   2986 F0                11164 	movx	@dptr,a
   2987 A3                11165 	inc	dptr
   2988 EC                11166 	mov	a,r4
   2989 F0                11167 	movx	@dptr,a
   298A A3                11168 	inc	dptr
   298B ED                11169 	mov	a,r5
   298C F0                11170 	movx	@dptr,a
                    2158  11171 	C$easyax5043.c$1656$4$363 ==.
                          11172 ;	..\COMMON\easyax5043.c:1656: wtimer_add_callback(&axradio_cb_transmitend.cb);
   298D 90 02 75          11173 	mov	dptr,#_axradio_cb_transmitend
   2990 12 3F BF          11174 	lcall	_wtimer_add_callback
   2993 D0 06             11175 	pop	ar6
   2995 D0 07             11176 	pop	ar7
   2997                   11177 00116$:
                    2162  11178 	C$easyax5043.c$1658$3$362 ==.
                          11179 ;	..\COMMON\easyax5043.c:1658: ax5043_off();
   2997 C0 07             11180 	push	ar7
   2999 C0 06             11181 	push	ar6
   299B 12 14 7C          11182 	lcall	_ax5043_off
   299E D0 06             11183 	pop	ar6
                    216B  11184 	C$easyax5043.c$1659$3$362 ==.
                          11185 ;	..\COMMON\easyax5043.c:1659: IE |= iesave;
   29A0 EE                11186 	mov	a,r6
   29A1 42 A8             11187 	orl	_IE,a
                    216E  11188 	C$easyax5043.c$1661$3$362 ==.
                          11189 ;	..\COMMON\easyax5043.c:1661: ax5043_init_registers();
   29A3 12 15 F8          11190 	lcall	_ax5043_init_registers
   29A6 D0 07             11191 	pop	ar7
                    2173  11192 	C$easyax5043.c$1662$3$362 ==.
                          11193 ;	..\COMMON\easyax5043.c:1662: axradio_mode = AXRADIO_MODE_OFF;
   29A8 75 0A 01          11194 	mov	_axradio_mode,#0x01
                    2176  11195 	C$easyax5043.c$1663$3$362 ==.
                          11196 ;	..\COMMON\easyax5043.c:1663: break;
                    2176  11197 	C$easyax5043.c$1668$2$359 ==.
                          11198 ;	..\COMMON\easyax5043.c:1668: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   29AB 80 17             11199 	sjmp	00121$
   29AD                   11200 00119$:
                    2178  11201 	C$easyax5043.c$1669$2$359 ==.
                          11202 ;	..\COMMON\easyax5043.c:1669: ax5043_off();
   29AD C0 07             11203 	push	ar7
   29AF 12 14 7C          11204 	lcall	_ax5043_off
                    217D  11205 	C$easyax5043.c$1670$2$359 ==.
                          11206 ;	..\COMMON\easyax5043.c:1670: ax5043_init_registers();
   29B2 12 15 F8          11207 	lcall	_ax5043_init_registers
   29B5 D0 07             11208 	pop	ar7
                    2182  11209 	C$easyax5043.c$1671$2$359 ==.
                          11210 ;	..\COMMON\easyax5043.c:1671: axradio_mode = AXRADIO_MODE_OFF;
   29B7 75 0A 01          11211 	mov	_axradio_mode,#0x01
                    2185  11212 	C$easyax5043.c$1673$2$359 ==.
                          11213 ;	..\COMMON\easyax5043.c:1673: default:
   29BA                   11214 00120$:
                    2185  11215 	C$easyax5043.c$1674$2$359 ==.
                          11216 ;	..\COMMON\easyax5043.c:1674: ax5043_off();
   29BA C0 07             11217 	push	ar7
   29BC 12 14 7C          11218 	lcall	_ax5043_off
   29BF D0 07             11219 	pop	ar7
                    218C  11220 	C$easyax5043.c$1675$2$359 ==.
                          11221 ;	..\COMMON\easyax5043.c:1675: axradio_mode = AXRADIO_MODE_OFF;
   29C1 75 0A 01          11222 	mov	_axradio_mode,#0x01
                    218F  11223 	C$easyax5043.c$1677$1$358 ==.
                          11224 ;	..\COMMON\easyax5043.c:1677: }
   29C4                   11225 00121$:
                    218F  11226 	C$easyax5043.c$1678$1$358 ==.
                          11227 ;	..\COMMON\easyax5043.c:1678: axradio_killallcb();
   29C4 C0 07             11228 	push	ar7
   29C6 12 25 A0          11229 	lcall	_axradio_killallcb
   29C9 D0 07             11230 	pop	ar7
                    2196  11231 	C$easyax5043.c$1679$1$358 ==.
                          11232 ;	..\COMMON\easyax5043.c:1679: if (mode == AXRADIO_MODE_UNINIT)
   29CB EF                11233 	mov	a,r7
   29CC 70 06             11234 	jnz	00123$
                    2199  11235 	C$easyax5043.c$1680$1$358 ==.
                          11236 ;	..\COMMON\easyax5043.c:1680: return AXRADIO_ERR_NOTSUPPORTED;
   29CE 75 82 01          11237 	mov	dpl,#0x01
   29D1 02 2C B6          11238 	ljmp	00161$
   29D4                   11239 00123$:
                    219F  11240 	C$easyax5043.c$1681$1$358 ==.
                          11241 ;	..\COMMON\easyax5043.c:1681: axradio_syncstate = syncstate_off;
   29D4 90 00 04          11242 	mov	dptr,#_axradio_syncstate
   29D7 E4                11243 	clr	a
   29D8 F0                11244 	movx	@dptr,a
                    21A4  11245 	C$easyax5043.c$1682$1$358 ==.
                          11246 ;	..\COMMON\easyax5043.c:1682: switch (mode) {
   29D9 EF                11247 	mov	a,r7
   29DA 24 DC             11248 	add	a,#0xff - 0x23
   29DC 50 03             11249 	jnc	00227$
   29DE 02 2C B3          11250 	ljmp	00159$
   29E1                   11251 00227$:
   29E1 EF                11252 	mov	a,r7
   29E2 24 09             11253 	add	a,#(00228$-3-.)
   29E4 83                11254 	movc	a,@a+pc
   29E5 C0 E0             11255 	push	acc
   29E7 EF                11256 	mov	a,r7
   29E8 24 27             11257 	add	a,#(00229$-3-.)
   29EA 83                11258 	movc	a,@a+pc
   29EB C0 E0             11259 	push	acc
   29ED 22                11260 	ret
   29EE                   11261 00228$:
   29EE B3                11262 	.db	00159$
   29EF 36                11263 	.db	00124$
   29F0 3C                11264 	.db	00125$
   29F1 73                11265 	.db	00154$
   29F2 B3                11266 	.db	00159$
   29F3 B3                11267 	.db	00159$
   29F4 B3                11268 	.db	00159$
   29F5 B3                11269 	.db	00159$
   29F6 B3                11270 	.db	00159$
   29F7 B3                11271 	.db	00159$
   29F8 B3                11272 	.db	00159$
   29F9 B3                11273 	.db	00159$
   29FA B3                11274 	.db	00159$
   29FB B3                11275 	.db	00159$
   29FC B3                11276 	.db	00159$
   29FD B3                11277 	.db	00159$
   29FE 48                11278 	.db	00126$
   29FF 5D                11279 	.db	00128$
   2A00 48                11280 	.db	00127$
   2A01 5D                11281 	.db	00129$
   2A02 D2                11282 	.db	00137$
   2A03 D2                11283 	.db	00138$
   2A04 D2                11284 	.db	00139$
   2A05 B3                11285 	.db	00159$
   2A06 72                11286 	.db	00130$
   2A07 BA                11287 	.db	00135$
   2A08 72                11288 	.db	00131$
   2A09 BA                11289 	.db	00136$
   2A0A 3F                11290 	.db	00147$
   2A0B 3F                11291 	.db	00148$
   2A0C 3F                11292 	.db	00149$
   2A0D B3                11293 	.db	00159$
   2A0E BB                11294 	.db	00155$
   2A0F BB                11295 	.db	00156$
   2A10 18                11296 	.db	00157$
   2A11 18                11297 	.db	00158$
   2A12                   11298 00229$:
   2A12 2C                11299 	.db	00159$>>8
   2A13 2A                11300 	.db	00124$>>8
   2A14 2A                11301 	.db	00125$>>8
   2A15 2B                11302 	.db	00154$>>8
   2A16 2C                11303 	.db	00159$>>8
   2A17 2C                11304 	.db	00159$>>8
   2A18 2C                11305 	.db	00159$>>8
   2A19 2C                11306 	.db	00159$>>8
   2A1A 2C                11307 	.db	00159$>>8
   2A1B 2C                11308 	.db	00159$>>8
   2A1C 2C                11309 	.db	00159$>>8
   2A1D 2C                11310 	.db	00159$>>8
   2A1E 2C                11311 	.db	00159$>>8
   2A1F 2C                11312 	.db	00159$>>8
   2A20 2C                11313 	.db	00159$>>8
   2A21 2C                11314 	.db	00159$>>8
   2A22 2A                11315 	.db	00126$>>8
   2A23 2A                11316 	.db	00128$>>8
   2A24 2A                11317 	.db	00127$>>8
   2A25 2A                11318 	.db	00129$>>8
   2A26 2A                11319 	.db	00137$>>8
   2A27 2A                11320 	.db	00138$>>8
   2A28 2A                11321 	.db	00139$>>8
   2A29 2C                11322 	.db	00159$>>8
   2A2A 2A                11323 	.db	00130$>>8
   2A2B 2A                11324 	.db	00135$>>8
   2A2C 2A                11325 	.db	00131$>>8
   2A2D 2A                11326 	.db	00136$>>8
   2A2E 2B                11327 	.db	00147$>>8
   2A2F 2B                11328 	.db	00148$>>8
   2A30 2B                11329 	.db	00149$>>8
   2A31 2C                11330 	.db	00159$>>8
   2A32 2B                11331 	.db	00155$>>8
   2A33 2B                11332 	.db	00156$>>8
   2A34 2C                11333 	.db	00157$>>8
   2A35 2C                11334 	.db	00158$>>8
                    2201  11335 	C$easyax5043.c$1683$2$364 ==.
                          11336 ;	..\COMMON\easyax5043.c:1683: case AXRADIO_MODE_OFF:
   2A36                   11337 00124$:
                    2201  11338 	C$easyax5043.c$1684$2$364 ==.
                          11339 ;	..\COMMON\easyax5043.c:1684: return AXRADIO_ERR_NOERROR;
   2A36 75 82 00          11340 	mov	dpl,#0x00
   2A39 02 2C B6          11341 	ljmp	00161$
                    2207  11342 	C$easyax5043.c$1686$2$364 ==.
                          11343 ;	..\COMMON\easyax5043.c:1686: case AXRADIO_MODE_DEEPSLEEP:
   2A3C                   11344 00125$:
                    2207  11345 	C$easyax5043.c$1687$2$364 ==.
                          11346 ;	..\COMMON\easyax5043.c:1687: ax5043_enter_deepsleep();
   2A3C 12 37 57          11347 	lcall	_ax5043_enter_deepsleep
                    220A  11348 	C$easyax5043.c$1688$2$364 ==.
                          11349 ;	..\COMMON\easyax5043.c:1688: axradio_mode = AXRADIO_MODE_DEEPSLEEP;
   2A3F 75 0A 02          11350 	mov	_axradio_mode,#0x02
                    220D  11351 	C$easyax5043.c$1689$2$364 ==.
                          11352 ;	..\COMMON\easyax5043.c:1689: return AXRADIO_ERR_NOERROR;
   2A42 75 82 00          11353 	mov	dpl,#0x00
   2A45 02 2C B6          11354 	ljmp	00161$
                    2213  11355 	C$easyax5043.c$1691$2$364 ==.
                          11356 ;	..\COMMON\easyax5043.c:1691: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2A48                   11357 00126$:
                    2213  11358 	C$easyax5043.c$1692$2$364 ==.
                          11359 ;	..\COMMON\easyax5043.c:1692: case AXRADIO_MODE_ACK_TRANSMIT:
   2A48                   11360 00127$:
                    2213  11361 	C$easyax5043.c$1693$2$364 ==.
                          11362 ;	..\COMMON\easyax5043.c:1693: ax5043_init_registers_tx();
   2A48 C0 07             11363 	push	ar7
   2A4A 12 08 CB          11364 	lcall	_ax5043_init_registers_tx
   2A4D D0 07             11365 	pop	ar7
                    221A  11366 	C$easyax5043.c$1694$2$364 ==.
                          11367 ;	..\COMMON\easyax5043.c:1694: axradio_ack_seqnr = 0xff;
   2A4F 90 00 0F          11368 	mov	dptr,#_axradio_ack_seqnr
   2A52 74 FF             11369 	mov	a,#0xFF
   2A54 F0                11370 	movx	@dptr,a
                    2220  11371 	C$easyax5043.c$1695$2$364 ==.
                          11372 ;	..\COMMON\easyax5043.c:1695: axradio_mode = mode;
   2A55 8F 0A             11373 	mov	_axradio_mode,r7
                    2222  11374 	C$easyax5043.c$1696$2$364 ==.
                          11375 ;	..\COMMON\easyax5043.c:1696: return AXRADIO_ERR_NOERROR;
   2A57 75 82 00          11376 	mov	dpl,#0x00
   2A5A 02 2C B6          11377 	ljmp	00161$
                    2228  11378 	C$easyax5043.c$1698$2$364 ==.
                          11379 ;	..\COMMON\easyax5043.c:1698: case AXRADIO_MODE_WOR_TRANSMIT:
   2A5D                   11380 00128$:
                    2228  11381 	C$easyax5043.c$1699$2$364 ==.
                          11382 ;	..\COMMON\easyax5043.c:1699: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2A5D                   11383 00129$:
                    2228  11384 	C$easyax5043.c$1700$2$364 ==.
                          11385 ;	..\COMMON\easyax5043.c:1700: ax5043_init_registers_tx();
   2A5D C0 07             11386 	push	ar7
   2A5F 12 08 CB          11387 	lcall	_ax5043_init_registers_tx
   2A62 D0 07             11388 	pop	ar7
                    222F  11389 	C$easyax5043.c$1701$2$364 ==.
                          11390 ;	..\COMMON\easyax5043.c:1701: axradio_ack_seqnr = 0xff;
   2A64 90 00 0F          11391 	mov	dptr,#_axradio_ack_seqnr
   2A67 74 FF             11392 	mov	a,#0xFF
   2A69 F0                11393 	movx	@dptr,a
                    2235  11394 	C$easyax5043.c$1702$2$364 ==.
                          11395 ;	..\COMMON\easyax5043.c:1702: axradio_mode = mode;
   2A6A 8F 0A             11396 	mov	_axradio_mode,r7
                    2237  11397 	C$easyax5043.c$1703$2$364 ==.
                          11398 ;	..\COMMON\easyax5043.c:1703: return AXRADIO_ERR_NOERROR;
   2A6C 75 82 00          11399 	mov	dpl,#0x00
   2A6F 02 2C B6          11400 	ljmp	00161$
                    223D  11401 	C$easyax5043.c$1705$2$364 ==.
                          11402 ;	..\COMMON\easyax5043.c:1705: case AXRADIO_MODE_ASYNC_RECEIVE:
   2A72                   11403 00130$:
                    223D  11404 	C$easyax5043.c$1706$2$364 ==.
                          11405 ;	..\COMMON\easyax5043.c:1706: case AXRADIO_MODE_ACK_RECEIVE:
   2A72                   11406 00131$:
                    223D  11407 	C$easyax5043.c$1707$2$364 ==.
                          11408 ;	..\COMMON\easyax5043.c:1707: ax5043_init_registers_rx();
   2A72 C0 07             11409 	push	ar7
   2A74 12 09 01          11410 	lcall	_ax5043_init_registers_rx
                    2242  11411 	C$easyax5043.c$1708$2$364 ==.
                          11412 ;	..\COMMON\easyax5043.c:1708: ax5043_receiver_on_continuous();
   2A77 12 13 37          11413 	lcall	_ax5043_receiver_on_continuous
   2A7A D0 07             11414 	pop	ar7
                    2247  11415 	C$easyax5043.c$1709$2$364 ==.
                          11416 ;	..\COMMON\easyax5043.c:1709: axradio_ack_seqnr = 0xff;
   2A7C 90 00 0F          11417 	mov	dptr,#_axradio_ack_seqnr
   2A7F 74 FF             11418 	mov	a,#0xFF
   2A81 F0                11419 	movx	@dptr,a
                    224D  11420 	C$easyax5043.c$1710$2$364 ==.
                          11421 ;	..\COMMON\easyax5043.c:1710: axradio_mode = mode;
   2A82 8F 0A             11422 	mov	_axradio_mode,r7
                    224F  11423 	C$easyax5043.c$1711$2$364 ==.
                          11424 ;	..\COMMON\easyax5043.c:1711: enablecs:
   2A84                   11425 00132$:
                    224F  11426 	C$easyax5043.c$1712$2$364 ==.
                          11427 ;	..\COMMON\easyax5043.c:1712: if (axradio_phy_cs_enabled) {
   2A84 90 4F 0E          11428 	mov	dptr,#_axradio_phy_cs_enabled
   2A87 E4                11429 	clr	a
   2A88 93                11430 	movc	a,@a+dptr
   2A89 FE                11431 	mov	r6,a
   2A8A 60 28             11432 	jz	00134$
                    2257  11433 	C$easyax5043.c$1713$3$365 ==.
                          11434 ;	..\COMMON\easyax5043.c:1713: wtimer_remove(&axradio_timer);
   2A8C 90 02 89          11435 	mov	dptr,#_axradio_timer
   2A8F 12 49 5A          11436 	lcall	_wtimer_remove
                    225D  11437 	C$easyax5043.c$1714$3$365 ==.
                          11438 ;	..\COMMON\easyax5043.c:1714: axradio_timer.time = axradio_phy_cs_period;
   2A92 90 4F 0C          11439 	mov	dptr,#_axradio_phy_cs_period
   2A95 E4                11440 	clr	a
   2A96 93                11441 	movc	a,@a+dptr
   2A97 FD                11442 	mov	r5,a
   2A98 74 01             11443 	mov	a,#0x01
   2A9A 93                11444 	movc	a,@a+dptr
   2A9B FE                11445 	mov	r6,a
   2A9C 7C 00             11446 	mov	r4,#0x00
   2A9E 7B 00             11447 	mov	r3,#0x00
   2AA0 90 02 8D          11448 	mov	dptr,#(_axradio_timer + 0x0004)
   2AA3 ED                11449 	mov	a,r5
   2AA4 F0                11450 	movx	@dptr,a
   2AA5 A3                11451 	inc	dptr
   2AA6 EE                11452 	mov	a,r6
   2AA7 F0                11453 	movx	@dptr,a
   2AA8 A3                11454 	inc	dptr
   2AA9 EC                11455 	mov	a,r4
   2AAA F0                11456 	movx	@dptr,a
   2AAB A3                11457 	inc	dptr
   2AAC EB                11458 	mov	a,r3
   2AAD F0                11459 	movx	@dptr,a
                    2279  11460 	C$easyax5043.c$1715$3$365 ==.
                          11461 ;	..\COMMON\easyax5043.c:1715: wtimer0_addrelative(&axradio_timer);
   2AAE 90 02 89          11462 	mov	dptr,#_axradio_timer
   2AB1 12 3F D9          11463 	lcall	_wtimer0_addrelative
   2AB4                   11464 00134$:
                    227F  11465 	C$easyax5043.c$1717$2$364 ==.
                          11466 ;	..\COMMON\easyax5043.c:1717: return AXRADIO_ERR_NOERROR;
   2AB4 75 82 00          11467 	mov	dpl,#0x00
   2AB7 02 2C B6          11468 	ljmp	00161$
                    2285  11469 	C$easyax5043.c$1719$2$364 ==.
                          11470 ;	..\COMMON\easyax5043.c:1719: case AXRADIO_MODE_WOR_RECEIVE:
   2ABA                   11471 00135$:
                    2285  11472 	C$easyax5043.c$1720$2$364 ==.
                          11473 ;	..\COMMON\easyax5043.c:1720: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   2ABA                   11474 00136$:
                    2285  11475 	C$easyax5043.c$1721$2$364 ==.
                          11476 ;	..\COMMON\easyax5043.c:1721: ax5043_init_registers_rx();
   2ABA C0 07             11477 	push	ar7
   2ABC 12 09 01          11478 	lcall	_ax5043_init_registers_rx
                    228A  11479 	C$easyax5043.c$1722$2$364 ==.
                          11480 ;	..\COMMON\easyax5043.c:1722: ax5043_receiver_on_wor();
   2ABF 12 13 D1          11481 	lcall	_ax5043_receiver_on_wor
   2AC2 D0 07             11482 	pop	ar7
                    228F  11483 	C$easyax5043.c$1723$2$364 ==.
                          11484 ;	..\COMMON\easyax5043.c:1723: axradio_ack_seqnr = 0xff;
   2AC4 90 00 0F          11485 	mov	dptr,#_axradio_ack_seqnr
   2AC7 74 FF             11486 	mov	a,#0xFF
   2AC9 F0                11487 	movx	@dptr,a
                    2295  11488 	C$easyax5043.c$1724$2$364 ==.
                          11489 ;	..\COMMON\easyax5043.c:1724: axradio_mode = mode;
   2ACA 8F 0A             11490 	mov	_axradio_mode,r7
                    2297  11491 	C$easyax5043.c$1725$2$364 ==.
                          11492 ;	..\COMMON\easyax5043.c:1725: return AXRADIO_ERR_NOERROR;
   2ACC 75 82 00          11493 	mov	dpl,#0x00
   2ACF 02 2C B6          11494 	ljmp	00161$
                    229D  11495 	C$easyax5043.c$1727$2$364 ==.
                          11496 ;	..\COMMON\easyax5043.c:1727: case AXRADIO_MODE_STREAM_TRANSMIT:
   2AD2                   11497 00137$:
                    229D  11498 	C$easyax5043.c$1728$2$364 ==.
                          11499 ;	..\COMMON\easyax5043.c:1728: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2AD2                   11500 00138$:
                    229D  11501 	C$easyax5043.c$1729$2$364 ==.
                          11502 ;	..\COMMON\easyax5043.c:1729: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2AD2                   11503 00139$:
                    229D  11504 	C$easyax5043.c$1730$2$364 ==.
                          11505 ;	..\COMMON\easyax5043.c:1730: axradio_mode = mode;
   2AD2 8F 0A             11506 	mov	_axradio_mode,r7
                    229F  11507 	C$easyax5043.c$1731$2$364 ==.
                          11508 ;	..\COMMON\easyax5043.c:1731: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_UNENC)
   2AD4 74 15             11509 	mov	a,#0x15
   2AD6 B5 0A 05          11510 	cjne	a,_axradio_mode,00141$
                    22A4  11511 	C$easyax5043.c$1732$2$364 ==.
                          11512 ;	..\COMMON\easyax5043.c:1732: AX5043_ENCODING = 0;
   2AD9 90 40 11          11513 	mov	dptr,#_AX5043_ENCODING
   2ADC E4                11514 	clr	a
   2ADD F0                11515 	movx	@dptr,a
   2ADE                   11516 00141$:
                    22A9  11517 	C$easyax5043.c$1733$2$364 ==.
                          11518 ;	..\COMMON\easyax5043.c:1733: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_SCRAM)
   2ADE 74 16             11519 	mov	a,#0x16
   2AE0 B5 0A 06          11520 	cjne	a,_axradio_mode,00143$
                    22AE  11521 	C$easyax5043.c$1734$2$364 ==.
                          11522 ;	..\COMMON\easyax5043.c:1734: AX5043_ENCODING = 4;
   2AE3 90 40 11          11523 	mov	dptr,#_AX5043_ENCODING
   2AE6 74 04             11524 	mov	a,#0x04
   2AE8 F0                11525 	movx	@dptr,a
   2AE9                   11526 00143$:
                    22B4  11527 	C$easyax5043.c$1735$2$364 ==.
                          11528 ;	..\COMMON\easyax5043.c:1735: ax5043_init_registers_tx();
   2AE9 12 08 CB          11529 	lcall	_ax5043_init_registers_tx
                    22B7  11530 	C$easyax5043.c$1736$2$364 ==.
                          11531 ;	..\COMMON\easyax5043.c:1736: AX5043_FRAMING = 0;
   2AEC 90 40 12          11532 	mov	dptr,#_AX5043_FRAMING
   2AEF E4                11533 	clr	a
   2AF0 F0                11534 	movx	@dptr,a
                    22BC  11535 	C$easyax5043.c$1737$2$364 ==.
                          11536 ;	..\COMMON\easyax5043.c:1737: ax5043_prepare_tx();
   2AF1 12 14 56          11537 	lcall	_ax5043_prepare_tx
                    22BF  11538 	C$easyax5043.c$1738$2$364 ==.
                          11539 ;	..\COMMON\easyax5043.c:1738: axradio_trxstate = trxstate_txstream_xtalwait;
   2AF4 75 0B 0F          11540 	mov	_axradio_trxstate,#0x0F
                    22C2  11541 	C$easyax5043.c$1739$2$364 ==.
                          11542 ;	..\COMMON\easyax5043.c:1739: while (!(AX5043_POWSTAT & 0x08)) {}; // wait for modem vdd so writing the FIFO is safe
   2AF7                   11543 00144$:
   2AF7 90 40 03          11544 	mov	dptr,#_AX5043_POWSTAT
   2AFA E0                11545 	movx	a,@dptr
   2AFB FE                11546 	mov	r6,a
   2AFC 30 E3 F8          11547 	jnb	acc.3,00144$
                    22CA  11548 	C$easyax5043.c$1740$2$364 ==.
                          11549 ;	..\COMMON\easyax5043.c:1740: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   2AFF 90 40 28          11550 	mov	dptr,#_AX5043_FIFOSTAT
   2B02 74 03             11551 	mov	a,#0x03
   2B04 F0                11552 	movx	@dptr,a
                    22D0  11553 	C$easyax5043.c$1741$2$364 ==.
                          11554 ;	..\COMMON\easyax5043.c:1741: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   2B05 90 40 0F          11555 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   2B08 E0                11556 	movx	a,@dptr
                    22D4  11557 	C$easyax5043.c$1742$2$364 ==.
                          11558 ;	..\COMMON\easyax5043.c:1742: update_timeanchor();
   2B09 12 08 35          11559 	lcall	_update_timeanchor
                    22D7  11560 	C$easyax5043.c$1743$2$364 ==.
                          11561 ;	..\COMMON\easyax5043.c:1743: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   2B0C 90 02 7F          11562 	mov	dptr,#_axradio_cb_transmitdata
   2B0F 12 4B 64          11563 	lcall	_wtimer_remove_callback
                    22DD  11564 	C$easyax5043.c$1744$2$364 ==.
                          11565 ;	..\COMMON\easyax5043.c:1744: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   2B12 90 02 84          11566 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   2B15 E4                11567 	clr	a
   2B16 F0                11568 	movx	@dptr,a
                    22E2  11569 	C$easyax5043.c$1745$2$364 ==.
                          11570 ;	..\COMMON\easyax5043.c:1745: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   2B17 90 00 1A          11571 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2B1A E0                11572 	movx	a,@dptr
   2B1B FB                11573 	mov	r3,a
   2B1C A3                11574 	inc	dptr
   2B1D E0                11575 	movx	a,@dptr
   2B1E FC                11576 	mov	r4,a
   2B1F A3                11577 	inc	dptr
   2B20 E0                11578 	movx	a,@dptr
   2B21 FD                11579 	mov	r5,a
   2B22 A3                11580 	inc	dptr
   2B23 E0                11581 	movx	a,@dptr
   2B24 FE                11582 	mov	r6,a
   2B25 90 02 85          11583 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   2B28 EB                11584 	mov	a,r3
   2B29 F0                11585 	movx	@dptr,a
   2B2A A3                11586 	inc	dptr
   2B2B EC                11587 	mov	a,r4
   2B2C F0                11588 	movx	@dptr,a
   2B2D A3                11589 	inc	dptr
   2B2E ED                11590 	mov	a,r5
   2B2F F0                11591 	movx	@dptr,a
   2B30 A3                11592 	inc	dptr
   2B31 EE                11593 	mov	a,r6
   2B32 F0                11594 	movx	@dptr,a
                    22FE  11595 	C$easyax5043.c$1746$2$364 ==.
                          11596 ;	..\COMMON\easyax5043.c:1746: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   2B33 90 02 7F          11597 	mov	dptr,#_axradio_cb_transmitdata
   2B36 12 3F BF          11598 	lcall	_wtimer_add_callback
                    2304  11599 	C$easyax5043.c$1747$2$364 ==.
                          11600 ;	..\COMMON\easyax5043.c:1747: return AXRADIO_ERR_NOERROR;
   2B39 75 82 00          11601 	mov	dpl,#0x00
   2B3C 02 2C B6          11602 	ljmp	00161$
                    230A  11603 	C$easyax5043.c$1749$2$364 ==.
                          11604 ;	..\COMMON\easyax5043.c:1749: case AXRADIO_MODE_STREAM_RECEIVE:
   2B3F                   11605 00147$:
                    230A  11606 	C$easyax5043.c$1750$2$364 ==.
                          11607 ;	..\COMMON\easyax5043.c:1750: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   2B3F                   11608 00148$:
                    230A  11609 	C$easyax5043.c$1751$2$364 ==.
                          11610 ;	..\COMMON\easyax5043.c:1751: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   2B3F                   11611 00149$:
                    230A  11612 	C$easyax5043.c$1752$2$364 ==.
                          11613 ;	..\COMMON\easyax5043.c:1752: ax5043_init_registers_rx();
   2B3F C0 07             11614 	push	ar7
   2B41 12 09 01          11615 	lcall	_ax5043_init_registers_rx
   2B44 D0 07             11616 	pop	ar7
                    2311  11617 	C$easyax5043.c$1753$2$364 ==.
                          11618 ;	..\COMMON\easyax5043.c:1753: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC)
   2B46 74 1D             11619 	mov	a,#0x1D
   2B48 B5 0A 05          11620 	cjne	a,_axradio_mode,00151$
                    2316  11621 	C$easyax5043.c$1754$2$364 ==.
                          11622 ;	..\COMMON\easyax5043.c:1754: AX5043_ENCODING = 0;
   2B4B 90 40 11          11623 	mov	dptr,#_AX5043_ENCODING
   2B4E E4                11624 	clr	a
   2B4F F0                11625 	movx	@dptr,a
   2B50                   11626 00151$:
                    231B  11627 	C$easyax5043.c$1755$2$364 ==.
                          11628 ;	..\COMMON\easyax5043.c:1755: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   2B50 74 1E             11629 	mov	a,#0x1E
   2B52 B5 0A 06          11630 	cjne	a,_axradio_mode,00153$
                    2320  11631 	C$easyax5043.c$1756$2$364 ==.
                          11632 ;	..\COMMON\easyax5043.c:1756: AX5043_ENCODING = 4;
   2B55 90 40 11          11633 	mov	dptr,#_AX5043_ENCODING
   2B58 74 04             11634 	mov	a,#0x04
   2B5A F0                11635 	movx	@dptr,a
   2B5B                   11636 00153$:
                    2326  11637 	C$easyax5043.c$1757$2$364 ==.
                          11638 ;	..\COMMON\easyax5043.c:1757: AX5043_FRAMING = 0;
   2B5B 90 40 12          11639 	mov	dptr,#_AX5043_FRAMING
   2B5E E4                11640 	clr	a
   2B5F F0                11641 	movx	@dptr,a
                    232B  11642 	C$easyax5043.c$1758$2$364 ==.
                          11643 ;	..\COMMON\easyax5043.c:1758: AX5043_PKTCHUNKSIZE = 8; // 64 byte
   2B60 90 42 30          11644 	mov	dptr,#_AX5043_PKTCHUNKSIZE
   2B63 74 08             11645 	mov	a,#0x08
   2B65 F0                11646 	movx	@dptr,a
                    2331  11647 	C$easyax5043.c$1759$2$364 ==.
                          11648 ;	..\COMMON\easyax5043.c:1759: AX5043_RXPARAMSETS = 0x00;
   2B66 90 41 17          11649 	mov	dptr,#_AX5043_RXPARAMSETS
   2B69 E4                11650 	clr	a
   2B6A F0                11651 	movx	@dptr,a
                    2336  11652 	C$easyax5043.c$1760$2$364 ==.
                          11653 ;	..\COMMON\easyax5043.c:1760: axradio_mode = mode;
   2B6B 8F 0A             11654 	mov	_axradio_mode,r7
                    2338  11655 	C$easyax5043.c$1761$2$364 ==.
                          11656 ;	..\COMMON\easyax5043.c:1761: ax5043_receiver_on_continuous();
   2B6D 12 13 37          11657 	lcall	_ax5043_receiver_on_continuous
                    233B  11658 	C$easyax5043.c$1762$2$364 ==.
                          11659 ;	..\COMMON\easyax5043.c:1762: goto enablecs;
   2B70 02 2A 84          11660 	ljmp	00132$
                    233E  11661 	C$easyax5043.c$1764$2$364 ==.
                          11662 ;	..\COMMON\easyax5043.c:1764: case AXRADIO_MODE_CW_TRANSMIT:
   2B73                   11663 00154$:
                    233E  11664 	C$easyax5043.c$1765$2$364 ==.
                          11665 ;	..\COMMON\easyax5043.c:1765: ax5043_init_registers_tx();
   2B73 12 08 CB          11666 	lcall	_ax5043_init_registers_tx
                    2341  11667 	C$easyax5043.c$1766$2$364 ==.
                          11668 ;	..\COMMON\easyax5043.c:1766: AX5043_MODULATION = 8;   // Set an FSK mode
   2B76 90 40 10          11669 	mov	dptr,#_AX5043_MODULATION
   2B79 74 08             11670 	mov	a,#0x08
   2B7B F0                11671 	movx	@dptr,a
                    2347  11672 	C$easyax5043.c$1767$2$364 ==.
                          11673 ;	..\COMMON\easyax5043.c:1767: AX5043_FSKDEV2 = 0x00;
   2B7C 90 41 61          11674 	mov	dptr,#_AX5043_FSKDEV2
                    234A  11675 	C$easyax5043.c$1768$2$364 ==.
                          11676 ;	..\COMMON\easyax5043.c:1768: AX5043_FSKDEV1 = 0x00;
                    234A  11677 	C$easyax5043.c$1769$2$364 ==.
                          11678 ;	..\COMMON\easyax5043.c:1769: AX5043_FSKDEV0 = 0x00;
                    234A  11679 	C$easyax5043.c$1770$2$364 ==.
                          11680 ;	..\COMMON\easyax5043.c:1770: AX5043_TXRATE2 = 0x00;
   2B7F E4                11681 	clr	a
   2B80 F0                11682 	movx	@dptr,a
   2B81 90 41 62          11683 	mov	dptr,#_AX5043_FSKDEV1
   2B84 F0                11684 	movx	@dptr,a
   2B85 90 41 63          11685 	mov	dptr,#_AX5043_FSKDEV0
   2B88 F0                11686 	movx	@dptr,a
   2B89 90 41 65          11687 	mov	dptr,#_AX5043_TXRATE2
   2B8C F0                11688 	movx	@dptr,a
                    2358  11689 	C$easyax5043.c$1771$2$364 ==.
                          11690 ;	..\COMMON\easyax5043.c:1771: AX5043_TXRATE1 = 0x00;
   2B8D 90 41 66          11691 	mov	dptr,#_AX5043_TXRATE1
   2B90 E4                11692 	clr	a
   2B91 F0                11693 	movx	@dptr,a
                    235D  11694 	C$easyax5043.c$1772$2$364 ==.
                          11695 ;	..\COMMON\easyax5043.c:1772: AX5043_TXRATE0 = 0x01;
   2B92 90 41 67          11696 	mov	dptr,#_AX5043_TXRATE0
   2B95 74 01             11697 	mov	a,#0x01
   2B97 F0                11698 	movx	@dptr,a
                    2363  11699 	C$easyax5043.c$1773$2$364 ==.
                          11700 ;	..\COMMON\easyax5043.c:1773: AX5043_PINFUNCDATA = 0x04;
   2B98 90 40 23          11701 	mov	dptr,#_AX5043_PINFUNCDATA
   2B9B 74 04             11702 	mov	a,#0x04
   2B9D F0                11703 	movx	@dptr,a
                    2369  11704 	C$easyax5043.c$1774$2$364 ==.
                          11705 ;	..\COMMON\easyax5043.c:1774: axradio_mode = AXRADIO_MODE_CW_TRANSMIT;
   2B9E 75 0A 03          11706 	mov	_axradio_mode,#0x03
                    236C  11707 	C$easyax5043.c$1775$2$364 ==.
                          11708 ;	..\COMMON\easyax5043.c:1775: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   2BA1 90 40 02          11709 	mov	dptr,#_AX5043_PWRMODE
   2BA4 74 07             11710 	mov	a,#0x07
   2BA6 F0                11711 	movx	@dptr,a
                    2372  11712 	C$easyax5043.c$1776$2$364 ==.
                          11713 ;	..\COMMON\easyax5043.c:1776: axradio_trxstate = trxstate_txcw_xtalwait;
   2BA7 75 0B 0E          11714 	mov	_axradio_trxstate,#0x0E
                    2375  11715 	C$easyax5043.c$1777$2$364 ==.
                          11716 ;	..\COMMON\easyax5043.c:1777: AX5043_IRQMASK0 = 0x00;
   2BAA 90 40 07          11717 	mov	dptr,#_AX5043_IRQMASK0
   2BAD E4                11718 	clr	a
   2BAE F0                11719 	movx	@dptr,a
                    237A  11720 	C$easyax5043.c$1778$2$364 ==.
                          11721 ;	..\COMMON\easyax5043.c:1778: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   2BAF 90 40 06          11722 	mov	dptr,#_AX5043_IRQMASK1
   2BB2 74 01             11723 	mov	a,#0x01
   2BB4 F0                11724 	movx	@dptr,a
                    2380  11725 	C$easyax5043.c$1779$2$364 ==.
                          11726 ;	..\COMMON\easyax5043.c:1779: return AXRADIO_ERR_NOERROR;
   2BB5 75 82 00          11727 	mov	dpl,#0x00
   2BB8 02 2C B6          11728 	ljmp	00161$
                    2386  11729 	C$easyax5043.c$1781$2$364 ==.
                          11730 ;	..\COMMON\easyax5043.c:1781: case AXRADIO_MODE_SYNC_MASTER:
   2BBB                   11731 00155$:
                    2386  11732 	C$easyax5043.c$1782$2$364 ==.
                          11733 ;	..\COMMON\easyax5043.c:1782: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2BBB                   11734 00156$:
                    2386  11735 	C$easyax5043.c$1783$2$364 ==.
                          11736 ;	..\COMMON\easyax5043.c:1783: axradio_mode = mode;
   2BBB 8F 0A             11737 	mov	_axradio_mode,r7
                    2388  11738 	C$easyax5043.c$1784$2$364 ==.
                          11739 ;	..\COMMON\easyax5043.c:1784: axradio_syncstate = syncstate_master_normal;
   2BBD 90 00 04          11740 	mov	dptr,#_axradio_syncstate
   2BC0 74 03             11741 	mov	a,#0x03
   2BC2 F0                11742 	movx	@dptr,a
                    238E  11743 	C$easyax5043.c$1786$2$364 ==.
                          11744 ;	..\COMMON\easyax5043.c:1786: wtimer_remove(&axradio_timer);
   2BC3 90 02 89          11745 	mov	dptr,#_axradio_timer
   2BC6 12 49 5A          11746 	lcall	_wtimer_remove
                    2394  11747 	C$easyax5043.c$1787$2$364 ==.
                          11748 ;	..\COMMON\easyax5043.c:1787: axradio_timer.time = 2;
   2BC9 90 02 8D          11749 	mov	dptr,#(_axradio_timer + 0x0004)
   2BCC 74 02             11750 	mov	a,#0x02
   2BCE F0                11751 	movx	@dptr,a
   2BCF A3                11752 	inc	dptr
   2BD0 E4                11753 	clr	a
   2BD1 F0                11754 	movx	@dptr,a
   2BD2 A3                11755 	inc	dptr
   2BD3 F0                11756 	movx	@dptr,a
   2BD4 A3                11757 	inc	dptr
   2BD5 F0                11758 	movx	@dptr,a
                    23A1  11759 	C$easyax5043.c$1788$2$364 ==.
                          11760 ;	..\COMMON\easyax5043.c:1788: wtimer0_addrelative(&axradio_timer);
   2BD6 90 02 89          11761 	mov	dptr,#_axradio_timer
   2BD9 12 3F D9          11762 	lcall	_wtimer0_addrelative
                    23A7  11763 	C$easyax5043.c$1789$2$364 ==.
                          11764 ;	..\COMMON\easyax5043.c:1789: axradio_sync_time = axradio_timer.time;
   2BDC 90 02 8D          11765 	mov	dptr,#(_axradio_timer + 0x0004)
   2BDF E0                11766 	movx	a,@dptr
   2BE0 FB                11767 	mov	r3,a
   2BE1 A3                11768 	inc	dptr
   2BE2 E0                11769 	movx	a,@dptr
   2BE3 FC                11770 	mov	r4,a
   2BE4 A3                11771 	inc	dptr
   2BE5 E0                11772 	movx	a,@dptr
   2BE6 FD                11773 	mov	r5,a
   2BE7 A3                11774 	inc	dptr
   2BE8 E0                11775 	movx	a,@dptr
   2BE9 FE                11776 	mov	r6,a
   2BEA 90 00 10          11777 	mov	dptr,#_axradio_sync_time
   2BED EB                11778 	mov	a,r3
   2BEE F0                11779 	movx	@dptr,a
   2BEF A3                11780 	inc	dptr
   2BF0 EC                11781 	mov	a,r4
   2BF1 F0                11782 	movx	@dptr,a
   2BF2 A3                11783 	inc	dptr
   2BF3 ED                11784 	mov	a,r5
   2BF4 F0                11785 	movx	@dptr,a
   2BF5 A3                11786 	inc	dptr
   2BF6 EE                11787 	mov	a,r6
   2BF7 F0                11788 	movx	@dptr,a
                    23C3  11789 	C$easyax5043.c$1790$2$364 ==.
                          11790 ;	..\COMMON\easyax5043.c:1790: axradio_sync_addtime(axradio_sync_xoscstartup);
   2BF8 90 4F 3F          11791 	mov	dptr,#_axradio_sync_xoscstartup
   2BFB E4                11792 	clr	a
   2BFC 93                11793 	movc	a,@a+dptr
   2BFD FB                11794 	mov	r3,a
   2BFE 74 01             11795 	mov	a,#0x01
   2C00 93                11796 	movc	a,@a+dptr
   2C01 FC                11797 	mov	r4,a
   2C02 74 02             11798 	mov	a,#0x02
   2C04 93                11799 	movc	a,@a+dptr
   2C05 FD                11800 	mov	r5,a
   2C06 74 03             11801 	mov	a,#0x03
   2C08 93                11802 	movc	a,@a+dptr
   2C09 8B 82             11803 	mov	dpl,r3
   2C0B 8C 83             11804 	mov	dph,r4
   2C0D 8D F0             11805 	mov	b,r5
   2C0F 12 16 1C          11806 	lcall	_axradio_sync_addtime
                    23DD  11807 	C$easyax5043.c$1791$2$364 ==.
                          11808 ;	..\COMMON\easyax5043.c:1791: return AXRADIO_ERR_NOERROR;
   2C12 75 82 00          11809 	mov	dpl,#0x00
   2C15 02 2C B6          11810 	ljmp	00161$
                    23E3  11811 	C$easyax5043.c$1793$2$364 ==.
                          11812 ;	..\COMMON\easyax5043.c:1793: case AXRADIO_MODE_SYNC_SLAVE:
   2C18                   11813 00157$:
                    23E3  11814 	C$easyax5043.c$1794$2$364 ==.
                          11815 ;	..\COMMON\easyax5043.c:1794: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   2C18                   11816 00158$:
                    23E3  11817 	C$easyax5043.c$1795$2$364 ==.
                          11818 ;	..\COMMON\easyax5043.c:1795: axradio_mode = mode;
   2C18 8F 0A             11819 	mov	_axradio_mode,r7
                    23E5  11820 	C$easyax5043.c$1796$2$364 ==.
                          11821 ;	..\COMMON\easyax5043.c:1796: ax5043_init_registers_rx();
   2C1A 12 09 01          11822 	lcall	_ax5043_init_registers_rx
                    23E8  11823 	C$easyax5043.c$1797$2$364 ==.
                          11824 ;	..\COMMON\easyax5043.c:1797: ax5043_receiver_on_continuous();
   2C1D 12 13 37          11825 	lcall	_ax5043_receiver_on_continuous
                    23EB  11826 	C$easyax5043.c$1798$2$364 ==.
                          11827 ;	..\COMMON\easyax5043.c:1798: axradio_syncstate = syncstate_slave_synchunt;
   2C20 90 00 04          11828 	mov	dptr,#_axradio_syncstate
   2C23 74 06             11829 	mov	a,#0x06
   2C25 F0                11830 	movx	@dptr,a
                    23F1  11831 	C$easyax5043.c$1799$2$364 ==.
                          11832 ;	..\COMMON\easyax5043.c:1799: wtimer_remove(&axradio_timer);
   2C26 90 02 89          11833 	mov	dptr,#_axradio_timer
   2C29 12 49 5A          11834 	lcall	_wtimer_remove
                    23F7  11835 	C$easyax5043.c$1800$2$364 ==.
                          11836 ;	..\COMMON\easyax5043.c:1800: axradio_timer.time = axradio_sync_slave_initialsyncwindow;
   2C2C 90 4F 47          11837 	mov	dptr,#_axradio_sync_slave_initialsyncwindow
   2C2F E4                11838 	clr	a
   2C30 93                11839 	movc	a,@a+dptr
   2C31 FC                11840 	mov	r4,a
   2C32 74 01             11841 	mov	a,#0x01
   2C34 93                11842 	movc	a,@a+dptr
   2C35 FD                11843 	mov	r5,a
   2C36 74 02             11844 	mov	a,#0x02
   2C38 93                11845 	movc	a,@a+dptr
   2C39 FE                11846 	mov	r6,a
   2C3A 74 03             11847 	mov	a,#0x03
   2C3C 93                11848 	movc	a,@a+dptr
   2C3D FF                11849 	mov	r7,a
   2C3E 90 02 8D          11850 	mov	dptr,#(_axradio_timer + 0x0004)
   2C41 EC                11851 	mov	a,r4
   2C42 F0                11852 	movx	@dptr,a
   2C43 A3                11853 	inc	dptr
   2C44 ED                11854 	mov	a,r5
   2C45 F0                11855 	movx	@dptr,a
   2C46 A3                11856 	inc	dptr
   2C47 EE                11857 	mov	a,r6
   2C48 F0                11858 	movx	@dptr,a
   2C49 A3                11859 	inc	dptr
   2C4A EF                11860 	mov	a,r7
   2C4B F0                11861 	movx	@dptr,a
                    2417  11862 	C$easyax5043.c$1801$2$364 ==.
                          11863 ;	..\COMMON\easyax5043.c:1801: wtimer0_addrelative(&axradio_timer);
   2C4C 90 02 89          11864 	mov	dptr,#_axradio_timer
   2C4F 12 3F D9          11865 	lcall	_wtimer0_addrelative
                    241D  11866 	C$easyax5043.c$1802$2$364 ==.
                          11867 ;	..\COMMON\easyax5043.c:1802: axradio_sync_time = axradio_timer.time;
   2C52 90 02 8D          11868 	mov	dptr,#(_axradio_timer + 0x0004)
   2C55 E0                11869 	movx	a,@dptr
   2C56 FC                11870 	mov	r4,a
   2C57 A3                11871 	inc	dptr
   2C58 E0                11872 	movx	a,@dptr
   2C59 FD                11873 	mov	r5,a
   2C5A A3                11874 	inc	dptr
   2C5B E0                11875 	movx	a,@dptr
   2C5C FE                11876 	mov	r6,a
   2C5D A3                11877 	inc	dptr
   2C5E E0                11878 	movx	a,@dptr
   2C5F FF                11879 	mov	r7,a
   2C60 90 00 10          11880 	mov	dptr,#_axradio_sync_time
   2C63 EC                11881 	mov	a,r4
   2C64 F0                11882 	movx	@dptr,a
   2C65 A3                11883 	inc	dptr
   2C66 ED                11884 	mov	a,r5
   2C67 F0                11885 	movx	@dptr,a
   2C68 A3                11886 	inc	dptr
   2C69 EE                11887 	mov	a,r6
   2C6A F0                11888 	movx	@dptr,a
   2C6B A3                11889 	inc	dptr
   2C6C EF                11890 	mov	a,r7
   2C6D F0                11891 	movx	@dptr,a
                    2439  11892 	C$easyax5043.c$1803$2$364 ==.
                          11893 ;	..\COMMON\easyax5043.c:1803: wtimer_remove_callback(&axradio_cb_receive.cb);
   2C6E 90 02 32          11894 	mov	dptr,#_axradio_cb_receive
   2C71 12 4B 64          11895 	lcall	_wtimer_remove_callback
                    243F  11896 	C$easyax5043.c$1804$2$364 ==.
                          11897 ;	..\COMMON\easyax5043.c:1804: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   2C74 75 27 00          11898 	mov	_memset_PARM_2,#0x00
   2C77 75 28 1E          11899 	mov	_memset_PARM_3,#0x1E
   2C7A 75 29 00          11900 	mov	(_memset_PARM_3 + 1),#0x00
   2C7D 90 02 36          11901 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2C80 75 F0 00          11902 	mov	b,#0x00
   2C83 12 3F 4B          11903 	lcall	_memset
                    2451  11904 	C$easyax5043.c$1805$2$364 ==.
                          11905 ;	..\COMMON\easyax5043.c:1805: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   2C86 90 00 1A          11906 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2C89 E0                11907 	movx	a,@dptr
   2C8A FC                11908 	mov	r4,a
   2C8B A3                11909 	inc	dptr
   2C8C E0                11910 	movx	a,@dptr
   2C8D FD                11911 	mov	r5,a
   2C8E A3                11912 	inc	dptr
   2C8F E0                11913 	movx	a,@dptr
   2C90 FE                11914 	mov	r6,a
   2C91 A3                11915 	inc	dptr
   2C92 E0                11916 	movx	a,@dptr
   2C93 FF                11917 	mov	r7,a
   2C94 90 02 38          11918 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   2C97 EC                11919 	mov	a,r4
   2C98 F0                11920 	movx	@dptr,a
   2C99 A3                11921 	inc	dptr
   2C9A ED                11922 	mov	a,r5
   2C9B F0                11923 	movx	@dptr,a
   2C9C A3                11924 	inc	dptr
   2C9D EE                11925 	mov	a,r6
   2C9E F0                11926 	movx	@dptr,a
   2C9F A3                11927 	inc	dptr
   2CA0 EF                11928 	mov	a,r7
   2CA1 F0                11929 	movx	@dptr,a
                    246D  11930 	C$easyax5043.c$1806$2$364 ==.
                          11931 ;	..\COMMON\easyax5043.c:1806: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   2CA2 90 02 37          11932 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2CA5 74 09             11933 	mov	a,#0x09
   2CA7 F0                11934 	movx	@dptr,a
                    2473  11935 	C$easyax5043.c$1807$2$364 ==.
                          11936 ;	..\COMMON\easyax5043.c:1807: wtimer_add_callback(&axradio_cb_receive.cb);
   2CA8 90 02 32          11937 	mov	dptr,#_axradio_cb_receive
   2CAB 12 3F BF          11938 	lcall	_wtimer_add_callback
                    2479  11939 	C$easyax5043.c$1808$2$364 ==.
                          11940 ;	..\COMMON\easyax5043.c:1808: return AXRADIO_ERR_NOERROR;
   2CAE 75 82 00          11941 	mov	dpl,#0x00
                    247C  11942 	C$easyax5043.c$1810$2$364 ==.
                          11943 ;	..\COMMON\easyax5043.c:1810: default:
   2CB1 80 03             11944 	sjmp	00161$
   2CB3                   11945 00159$:
                    247E  11946 	C$easyax5043.c$1811$2$364 ==.
                          11947 ;	..\COMMON\easyax5043.c:1811: return AXRADIO_ERR_NOTSUPPORTED;
   2CB3 75 82 01          11948 	mov	dpl,#0x01
                    2481  11949 	C$easyax5043.c$1812$1$358 ==.
                          11950 ;	..\COMMON\easyax5043.c:1812: }
   2CB6                   11951 00161$:
                    2481  11952 	C$easyax5043.c$1813$1$358 ==.
                    2481  11953 	XG$axradio_set_mode$0$0 ==.
   2CB6 22                11954 	ret
                          11955 ;------------------------------------------------------------
                          11956 ;Allocation info for local variables in function 'axradio_get_mode'
                          11957 ;------------------------------------------------------------
                    2482  11958 	G$axradio_get_mode$0$0 ==.
                    2482  11959 	C$easyax5043.c$1815$1$358 ==.
                          11960 ;	..\COMMON\easyax5043.c:1815: uint8_t axradio_get_mode(void)
                          11961 ;	-----------------------------------------
                          11962 ;	 function axradio_get_mode
                          11963 ;	-----------------------------------------
   2CB7                   11964 _axradio_get_mode:
                    2482  11965 	C$easyax5043.c$1817$1$368 ==.
                          11966 ;	..\COMMON\easyax5043.c:1817: return axradio_mode;
   2CB7 85 0A 82          11967 	mov	dpl,_axradio_mode
                    2485  11968 	C$easyax5043.c$1818$1$368 ==.
                    2485  11969 	XG$axradio_get_mode$0$0 ==.
   2CBA 22                11970 	ret
                          11971 ;------------------------------------------------------------
                          11972 ;Allocation info for local variables in function 'axradio_set_channel'
                          11973 ;------------------------------------------------------------
                          11974 ;chnum                     Allocated to registers r7 
                          11975 ;rng                       Allocated with name '_axradio_set_channel_rng_1_370'
                          11976 ;f                         Allocated to registers r3 r4 r5 r7 
                          11977 ;------------------------------------------------------------
                    2486  11978 	G$axradio_set_channel$0$0 ==.
                    2486  11979 	C$easyax5043.c$1820$1$368 ==.
                          11980 ;	..\COMMON\easyax5043.c:1820: uint8_t axradio_set_channel(uint8_t chnum)
                          11981 ;	-----------------------------------------
                          11982 ;	 function axradio_set_channel
                          11983 ;	-----------------------------------------
   2CBB                   11984 _axradio_set_channel:
   2CBB AF 82             11985 	mov	r7,dpl
                    2488  11986 	C$easyax5043.c$1823$1$370 ==.
                          11987 ;	..\COMMON\easyax5043.c:1823: if (chnum >= axradio_phy_nrchannels)
   2CBD 90 4E FF          11988 	mov	dptr,#_axradio_phy_nrchannels
   2CC0 E4                11989 	clr	a
   2CC1 93                11990 	movc	a,@a+dptr
   2CC2 FE                11991 	mov	r6,a
   2CC3 C3                11992 	clr	c
   2CC4 EF                11993 	mov	a,r7
   2CC5 9E                11994 	subb	a,r6
   2CC6 40 06             11995 	jc	00102$
                    2493  11996 	C$easyax5043.c$1824$1$370 ==.
                          11997 ;	..\COMMON\easyax5043.c:1824: return AXRADIO_ERR_INVALID;
   2CC8 75 82 04          11998 	mov	dpl,#0x04
   2CCB 02 2D 6E          11999 	ljmp	00108$
   2CCE                   12000 00102$:
                    2499  12001 	C$easyax5043.c$1825$1$370 ==.
                          12002 ;	..\COMMON\easyax5043.c:1825: axradio_curchannel = chnum;
   2CCE 90 00 09          12003 	mov	dptr,#_axradio_curchannel
   2CD1 EF                12004 	mov	a,r7
   2CD2 F0                12005 	movx	@dptr,a
                    249E  12006 	C$easyax5043.c$1826$1$370 ==.
                          12007 ;	..\COMMON\easyax5043.c:1826: rng = axradio_phy_chanpllrng_rx[chnum];
   2CD3 EF                12008 	mov	a,r7
   2CD4 24 00             12009 	add	a,#_axradio_phy_chanpllrng_rx
   2CD6 F5 82             12010 	mov	dpl,a
   2CD8 E4                12011 	clr	a
   2CD9 34 00             12012 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2CDB F5 83             12013 	mov	dph,a
   2CDD E0                12014 	movx	a,@dptr
                    24A9  12015 	C$easyax5043.c$1827$1$370 ==.
                          12016 ;	..\COMMON\easyax5043.c:1827: if (rng & 0x20)
   2CDE F5 27             12017 	mov	_axradio_set_channel_rng_1_370,a
   2CE0 30 E5 06          12018 	jnb	acc.5,00104$
                    24AE  12019 	C$easyax5043.c$1828$1$370 ==.
                          12020 ;	..\COMMON\easyax5043.c:1828: return AXRADIO_ERR_RANGING;
   2CE3 75 82 06          12021 	mov	dpl,#0x06
   2CE6 02 2D 6E          12022 	ljmp	00108$
   2CE9                   12023 00104$:
                    24B4  12024 	C$easyax5043.c$1830$2$371 ==.
                          12025 ;	..\COMMON\easyax5043.c:1830: uint32_t __autodata f = axradio_phy_chanfreq[chnum];
   2CE9 EF                12026 	mov	a,r7
   2CEA 75 F0 04          12027 	mov	b,#0x04
   2CED A4                12028 	mul	ab
   2CEE 24 00             12029 	add	a,#_axradio_phy_chanfreq
   2CF0 F5 82             12030 	mov	dpl,a
   2CF2 74 4F             12031 	mov	a,#(_axradio_phy_chanfreq >> 8)
   2CF4 35 F0             12032 	addc	a,b
   2CF6 F5 83             12033 	mov	dph,a
   2CF8 E4                12034 	clr	a
   2CF9 93                12035 	movc	a,@a+dptr
   2CFA FB                12036 	mov	r3,a
   2CFB A3                12037 	inc	dptr
   2CFC E4                12038 	clr	a
   2CFD 93                12039 	movc	a,@a+dptr
   2CFE FC                12040 	mov	r4,a
   2CFF A3                12041 	inc	dptr
   2D00 E4                12042 	clr	a
   2D01 93                12043 	movc	a,@a+dptr
   2D02 FD                12044 	mov	r5,a
   2D03 A3                12045 	inc	dptr
   2D04 E4                12046 	clr	a
   2D05 93                12047 	movc	a,@a+dptr
   2D06 FF                12048 	mov	r7,a
                    24D2  12049 	C$easyax5043.c$1831$2$371 ==.
                          12050 ;	..\COMMON\easyax5043.c:1831: f += axradio_curfreqoffset;
   2D07 90 00 0A          12051 	mov	dptr,#_axradio_curfreqoffset
   2D0A E0                12052 	movx	a,@dptr
   2D0B F8                12053 	mov	r0,a
   2D0C A3                12054 	inc	dptr
   2D0D E0                12055 	movx	a,@dptr
   2D0E F9                12056 	mov	r1,a
   2D0F A3                12057 	inc	dptr
   2D10 E0                12058 	movx	a,@dptr
   2D11 FA                12059 	mov	r2,a
   2D12 A3                12060 	inc	dptr
   2D13 E0                12061 	movx	a,@dptr
   2D14 FE                12062 	mov	r6,a
   2D15 E8                12063 	mov	a,r0
   2D16 2B                12064 	add	a,r3
   2D17 FB                12065 	mov	r3,a
   2D18 E9                12066 	mov	a,r1
   2D19 3C                12067 	addc	a,r4
   2D1A FC                12068 	mov	r4,a
   2D1B EA                12069 	mov	a,r2
   2D1C 3D                12070 	addc	a,r5
   2D1D FD                12071 	mov	r5,a
   2D1E EE                12072 	mov	a,r6
   2D1F 3F                12073 	addc	a,r7
   2D20 FF                12074 	mov	r7,a
                    24EC  12075 	C$easyax5043.c$1832$2$371 ==.
                          12076 ;	..\COMMON\easyax5043.c:1832: if (AX5043_PLLLOOP & 0x80) {
   2D21 90 40 30          12077 	mov	dptr,#_AX5043_PLLLOOP
   2D24 E0                12078 	movx	a,@dptr
   2D25 FE                12079 	mov	r6,a
   2D26 30 E7 1E          12080 	jnb	acc.7,00106$
                    24F4  12081 	C$easyax5043.c$1833$3$372 ==.
                          12082 ;	..\COMMON\easyax5043.c:1833: AX5043_PLLRANGINGA = rng & 0x0F;
   2D29 90 40 33          12083 	mov	dptr,#_AX5043_PLLRANGINGA
   2D2C 74 0F             12084 	mov	a,#0x0F
   2D2E 55 27             12085 	anl	a,_axradio_set_channel_rng_1_370
   2D30 F0                12086 	movx	@dptr,a
                    24FC  12087 	C$easyax5043.c$1834$3$372 ==.
                          12088 ;	..\COMMON\easyax5043.c:1834: AX5043_FREQA0 = f;
   2D31 90 40 37          12089 	mov	dptr,#_AX5043_FREQA0
   2D34 EB                12090 	mov	a,r3
   2D35 F0                12091 	movx	@dptr,a
                    2501  12092 	C$easyax5043.c$1835$3$372 ==.
                          12093 ;	..\COMMON\easyax5043.c:1835: AX5043_FREQA1 = f >> 8;
   2D36 90 40 36          12094 	mov	dptr,#_AX5043_FREQA1
   2D39 EC                12095 	mov	a,r4
   2D3A F0                12096 	movx	@dptr,a
                    2506  12097 	C$easyax5043.c$1836$3$372 ==.
                          12098 ;	..\COMMON\easyax5043.c:1836: AX5043_FREQA2 = f >> 16;
   2D3B 90 40 35          12099 	mov	dptr,#_AX5043_FREQA2
   2D3E ED                12100 	mov	a,r5
   2D3F F0                12101 	movx	@dptr,a
                    250B  12102 	C$easyax5043.c$1837$3$372 ==.
                          12103 ;	..\COMMON\easyax5043.c:1837: AX5043_FREQA3 = f >> 24;
   2D40 90 40 34          12104 	mov	dptr,#_AX5043_FREQA3
   2D43 EF                12105 	mov	a,r7
   2D44 F0                12106 	movx	@dptr,a
   2D45 80 1C             12107 	sjmp	00107$
   2D47                   12108 00106$:
                    2512  12109 	C$easyax5043.c$1839$3$373 ==.
                          12110 ;	..\COMMON\easyax5043.c:1839: AX5043_PLLRANGINGB = rng & 0x0F;
   2D47 90 40 3B          12111 	mov	dptr,#_AX5043_PLLRANGINGB
   2D4A 74 0F             12112 	mov	a,#0x0F
   2D4C 55 27             12113 	anl	a,_axradio_set_channel_rng_1_370
   2D4E F0                12114 	movx	@dptr,a
                    251A  12115 	C$easyax5043.c$1840$3$373 ==.
                          12116 ;	..\COMMON\easyax5043.c:1840: AX5043_FREQB0 = f;
   2D4F 90 40 3F          12117 	mov	dptr,#_AX5043_FREQB0
   2D52 EB                12118 	mov	a,r3
   2D53 F0                12119 	movx	@dptr,a
                    251F  12120 	C$easyax5043.c$1841$3$373 ==.
                          12121 ;	..\COMMON\easyax5043.c:1841: AX5043_FREQB1 = f >> 8;
   2D54 90 40 3E          12122 	mov	dptr,#_AX5043_FREQB1
   2D57 EC                12123 	mov	a,r4
   2D58 F0                12124 	movx	@dptr,a
                    2524  12125 	C$easyax5043.c$1842$3$373 ==.
                          12126 ;	..\COMMON\easyax5043.c:1842: AX5043_FREQB2 = f >> 16;
   2D59 90 40 3D          12127 	mov	dptr,#_AX5043_FREQB2
   2D5C ED                12128 	mov	a,r5
   2D5D F0                12129 	movx	@dptr,a
                    2529  12130 	C$easyax5043.c$1843$3$373 ==.
                          12131 ;	..\COMMON\easyax5043.c:1843: AX5043_FREQB3 = f >> 24;
   2D5E 90 40 3C          12132 	mov	dptr,#_AX5043_FREQB3
   2D61 EF                12133 	mov	a,r7
   2D62 F0                12134 	movx	@dptr,a
   2D63                   12135 00107$:
                    252E  12136 	C$easyax5043.c$1846$1$370 ==.
                          12137 ;	..\COMMON\easyax5043.c:1846: AX5043_PLLLOOP ^= 0x80;
   2D63 90 40 30          12138 	mov	dptr,#_AX5043_PLLLOOP
   2D66 E0                12139 	movx	a,@dptr
   2D67 FF                12140 	mov	r7,a
   2D68 64 80             12141 	xrl	a,#0x80
   2D6A F0                12142 	movx	@dptr,a
                    2536  12143 	C$easyax5043.c$1847$1$370 ==.
                          12144 ;	..\COMMON\easyax5043.c:1847: return AXRADIO_ERR_NOERROR;
   2D6B 75 82 00          12145 	mov	dpl,#0x00
   2D6E                   12146 00108$:
                    2539  12147 	C$easyax5043.c$1848$1$370 ==.
                    2539  12148 	XG$axradio_set_channel$0$0 ==.
   2D6E 22                12149 	ret
                          12150 ;------------------------------------------------------------
                          12151 ;Allocation info for local variables in function 'axradio_get_channel'
                          12152 ;------------------------------------------------------------
                    253A  12153 	G$axradio_get_channel$0$0 ==.
                    253A  12154 	C$easyax5043.c$1850$1$370 ==.
                          12155 ;	..\COMMON\easyax5043.c:1850: uint8_t axradio_get_channel(void)
                          12156 ;	-----------------------------------------
                          12157 ;	 function axradio_get_channel
                          12158 ;	-----------------------------------------
   2D6F                   12159 _axradio_get_channel:
                    253A  12160 	C$easyax5043.c$1852$1$375 ==.
                          12161 ;	..\COMMON\easyax5043.c:1852: return axradio_curchannel;
   2D6F 90 00 09          12162 	mov	dptr,#_axradio_curchannel
   2D72 E0                12163 	movx	a,@dptr
                    253E  12164 	C$easyax5043.c$1853$1$375 ==.
                    253E  12165 	XG$axradio_get_channel$0$0 ==.
   2D73 F5 82             12166 	mov	dpl,a
   2D75 22                12167 	ret
                          12168 ;------------------------------------------------------------
                          12169 ;Allocation info for local variables in function 'axradio_get_pllrange'
                          12170 ;------------------------------------------------------------
                    2541  12171 	G$axradio_get_pllrange$0$0 ==.
                    2541  12172 	C$easyax5043.c$1855$1$375 ==.
                          12173 ;	..\COMMON\easyax5043.c:1855: uint8_t axradio_get_pllrange(void)
                          12174 ;	-----------------------------------------
                          12175 ;	 function axradio_get_pllrange
                          12176 ;	-----------------------------------------
   2D76                   12177 _axradio_get_pllrange:
                    2541  12178 	C$easyax5043.c$1857$1$377 ==.
                          12179 ;	..\COMMON\easyax5043.c:1857: return axradio_phy_chanpllrng_rx[axradio_curchannel] & 0x0F;
   2D76 90 00 09          12180 	mov	dptr,#_axradio_curchannel
   2D79 E0                12181 	movx	a,@dptr
   2D7A 24 00             12182 	add	a,#_axradio_phy_chanpllrng_rx
   2D7C F5 82             12183 	mov	dpl,a
   2D7E E4                12184 	clr	a
   2D7F 34 00             12185 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2D81 F5 83             12186 	mov	dph,a
   2D83 E0                12187 	movx	a,@dptr
   2D84 FF                12188 	mov	r7,a
   2D85 74 0F             12189 	mov	a,#0x0F
   2D87 5F                12190 	anl	a,r7
   2D88 F5 82             12191 	mov	dpl,a
                    2555  12192 	C$easyax5043.c$1858$1$377 ==.
                    2555  12193 	XG$axradio_get_pllrange$0$0 ==.
   2D8A 22                12194 	ret
                          12195 ;------------------------------------------------------------
                          12196 ;Allocation info for local variables in function 'axradio_get_pllrange_tx'
                          12197 ;------------------------------------------------------------
                    2556  12198 	G$axradio_get_pllrange_tx$0$0 ==.
                    2556  12199 	C$easyax5043.c$1860$1$377 ==.
                          12200 ;	..\COMMON\easyax5043.c:1860: uint8_t axradio_get_pllrange_tx(void)
                          12201 ;	-----------------------------------------
                          12202 ;	 function axradio_get_pllrange_tx
                          12203 ;	-----------------------------------------
   2D8B                   12204 _axradio_get_pllrange_tx:
                    2556  12205 	C$easyax5043.c$1862$1$379 ==.
                          12206 ;	..\COMMON\easyax5043.c:1862: return axradio_phy_chanpllrng_tx[axradio_curchannel] & 0x0F;
   2D8B 90 00 09          12207 	mov	dptr,#_axradio_curchannel
   2D8E E0                12208 	movx	a,@dptr
   2D8F 24 01             12209 	add	a,#_axradio_phy_chanpllrng_tx
   2D91 F5 82             12210 	mov	dpl,a
   2D93 E4                12211 	clr	a
   2D94 34 00             12212 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   2D96 F5 83             12213 	mov	dph,a
   2D98 E0                12214 	movx	a,@dptr
   2D99 FF                12215 	mov	r7,a
   2D9A 74 0F             12216 	mov	a,#0x0F
   2D9C 5F                12217 	anl	a,r7
   2D9D F5 82             12218 	mov	dpl,a
                    256A  12219 	C$easyax5043.c$1863$1$379 ==.
                    256A  12220 	XG$axradio_get_pllrange_tx$0$0 ==.
   2D9F 22                12221 	ret
                          12222 ;------------------------------------------------------------
                          12223 ;Allocation info for local variables in function 'axradio_set_curfreqoffset'
                          12224 ;------------------------------------------------------------
                          12225 ;offs                      Allocated to registers r4 r5 r6 r7 
                          12226 ;------------------------------------------------------------
                    256B  12227 	Feasyax5043$axradio_set_curfreqoffset$0$0 ==.
                    256B  12228 	C$easyax5043.c$1865$1$379 ==.
                          12229 ;	..\COMMON\easyax5043.c:1865: static uint8_t axradio_set_curfreqoffset(int32_t offs)
                          12230 ;	-----------------------------------------
                          12231 ;	 function axradio_set_curfreqoffset
                          12232 ;	-----------------------------------------
   2DA0                   12233 _axradio_set_curfreqoffset:
   2DA0 AC 82             12234 	mov	r4,dpl
   2DA2 AD 83             12235 	mov	r5,dph
   2DA4 AE F0             12236 	mov	r6,b
   2DA6 FF                12237 	mov	r7,a
                    2572  12238 	C$easyax5043.c$1867$1$381 ==.
                          12239 ;	..\COMMON\easyax5043.c:1867: axradio_curfreqoffset = offs;
   2DA7 90 00 0A          12240 	mov	dptr,#_axradio_curfreqoffset
   2DAA EC                12241 	mov	a,r4
   2DAB F0                12242 	movx	@dptr,a
   2DAC A3                12243 	inc	dptr
   2DAD ED                12244 	mov	a,r5
   2DAE F0                12245 	movx	@dptr,a
   2DAF A3                12246 	inc	dptr
   2DB0 EE                12247 	mov	a,r6
   2DB1 F0                12248 	movx	@dptr,a
   2DB2 A3                12249 	inc	dptr
   2DB3 EF                12250 	mov	a,r7
   2DB4 F0                12251 	movx	@dptr,a
                    2580  12252 	C$easyax5043.c$1868$1$381 ==.
                          12253 ;	..\COMMON\easyax5043.c:1868: if (checksignedlimit32(offs, axradio_phy_maxfreqoffset))
   2DB5 90 4F 05          12254 	mov	dptr,#_axradio_phy_maxfreqoffset
   2DB8 E4                12255 	clr	a
   2DB9 93                12256 	movc	a,@a+dptr
   2DBA C0 E0             12257 	push	acc
   2DBC 74 01             12258 	mov	a,#0x01
   2DBE 93                12259 	movc	a,@a+dptr
   2DBF C0 E0             12260 	push	acc
   2DC1 74 02             12261 	mov	a,#0x02
   2DC3 93                12262 	movc	a,@a+dptr
   2DC4 C0 E0             12263 	push	acc
   2DC6 74 03             12264 	mov	a,#0x03
   2DC8 93                12265 	movc	a,@a+dptr
   2DC9 C0 E0             12266 	push	acc
   2DCB 8C 82             12267 	mov	dpl,r4
   2DCD 8D 83             12268 	mov	dph,r5
   2DCF 8E F0             12269 	mov	b,r6
   2DD1 EF                12270 	mov	a,r7
   2DD2 12 46 D0          12271 	lcall	_checksignedlimit32
   2DD5 AF 82             12272 	mov	r7,dpl
   2DD7 E5 81             12273 	mov	a,sp
   2DD9 24 FC             12274 	add	a,#0xfc
   2DDB F5 81             12275 	mov	sp,a
   2DDD EF                12276 	mov	a,r7
   2DDE 60 05             12277 	jz	00102$
                    25AB  12278 	C$easyax5043.c$1869$1$381 ==.
                          12279 ;	..\COMMON\easyax5043.c:1869: return AXRADIO_ERR_NOERROR;
   2DE0 75 82 00          12280 	mov	dpl,#0x00
   2DE3 80 5B             12281 	sjmp	00106$
   2DE5                   12282 00102$:
                    25B0  12283 	C$easyax5043.c$1870$1$381 ==.
                          12284 ;	..\COMMON\easyax5043.c:1870: if (axradio_curfreqoffset < 0)
   2DE5 90 00 0A          12285 	mov	dptr,#_axradio_curfreqoffset
   2DE8 E0                12286 	movx	a,@dptr
   2DE9 FC                12287 	mov	r4,a
   2DEA A3                12288 	inc	dptr
   2DEB E0                12289 	movx	a,@dptr
   2DEC FD                12290 	mov	r5,a
   2DED A3                12291 	inc	dptr
   2DEE E0                12292 	movx	a,@dptr
   2DEF FE                12293 	mov	r6,a
   2DF0 A3                12294 	inc	dptr
   2DF1 E0                12295 	movx	a,@dptr
   2DF2 FF                12296 	mov	r7,a
   2DF3 30 E7 27          12297 	jnb	acc.7,00104$
                    25C1  12298 	C$easyax5043.c$1871$1$381 ==.
                          12299 ;	..\COMMON\easyax5043.c:1871: axradio_curfreqoffset = -axradio_phy_maxfreqoffset;
   2DF6 90 4F 05          12300 	mov	dptr,#_axradio_phy_maxfreqoffset
   2DF9 E4                12301 	clr	a
   2DFA 93                12302 	movc	a,@a+dptr
   2DFB FC                12303 	mov	r4,a
   2DFC 74 01             12304 	mov	a,#0x01
   2DFE 93                12305 	movc	a,@a+dptr
   2DFF FD                12306 	mov	r5,a
   2E00 74 02             12307 	mov	a,#0x02
   2E02 93                12308 	movc	a,@a+dptr
   2E03 FE                12309 	mov	r6,a
   2E04 74 03             12310 	mov	a,#0x03
   2E06 93                12311 	movc	a,@a+dptr
   2E07 FF                12312 	mov	r7,a
   2E08 90 00 0A          12313 	mov	dptr,#_axradio_curfreqoffset
   2E0B C3                12314 	clr	c
   2E0C E4                12315 	clr	a
   2E0D 9C                12316 	subb	a,r4
   2E0E F0                12317 	movx	@dptr,a
   2E0F E4                12318 	clr	a
   2E10 9D                12319 	subb	a,r5
   2E11 A3                12320 	inc	dptr
   2E12 F0                12321 	movx	@dptr,a
   2E13 E4                12322 	clr	a
   2E14 9E                12323 	subb	a,r6
   2E15 A3                12324 	inc	dptr
   2E16 F0                12325 	movx	@dptr,a
   2E17 E4                12326 	clr	a
   2E18 9F                12327 	subb	a,r7
   2E19 A3                12328 	inc	dptr
   2E1A F0                12329 	movx	@dptr,a
   2E1B 80 20             12330 	sjmp	00105$
   2E1D                   12331 00104$:
                    25E8  12332 	C$easyax5043.c$1873$1$381 ==.
                          12333 ;	..\COMMON\easyax5043.c:1873: axradio_curfreqoffset = axradio_phy_maxfreqoffset;
   2E1D 90 4F 05          12334 	mov	dptr,#_axradio_phy_maxfreqoffset
   2E20 E4                12335 	clr	a
   2E21 93                12336 	movc	a,@a+dptr
   2E22 FC                12337 	mov	r4,a
   2E23 74 01             12338 	mov	a,#0x01
   2E25 93                12339 	movc	a,@a+dptr
   2E26 FD                12340 	mov	r5,a
   2E27 74 02             12341 	mov	a,#0x02
   2E29 93                12342 	movc	a,@a+dptr
   2E2A FE                12343 	mov	r6,a
   2E2B 74 03             12344 	mov	a,#0x03
   2E2D 93                12345 	movc	a,@a+dptr
   2E2E FF                12346 	mov	r7,a
   2E2F 90 00 0A          12347 	mov	dptr,#_axradio_curfreqoffset
   2E32 EC                12348 	mov	a,r4
   2E33 F0                12349 	movx	@dptr,a
   2E34 A3                12350 	inc	dptr
   2E35 ED                12351 	mov	a,r5
   2E36 F0                12352 	movx	@dptr,a
   2E37 A3                12353 	inc	dptr
   2E38 EE                12354 	mov	a,r6
   2E39 F0                12355 	movx	@dptr,a
   2E3A A3                12356 	inc	dptr
   2E3B EF                12357 	mov	a,r7
   2E3C F0                12358 	movx	@dptr,a
   2E3D                   12359 00105$:
                    2608  12360 	C$easyax5043.c$1874$1$381 ==.
                          12361 ;	..\COMMON\easyax5043.c:1874: return AXRADIO_ERR_INVALID;
   2E3D 75 82 04          12362 	mov	dpl,#0x04
   2E40                   12363 00106$:
                    260B  12364 	C$easyax5043.c$1875$1$381 ==.
                    260B  12365 	XFeasyax5043$axradio_set_curfreqoffset$0$0 ==.
   2E40 22                12366 	ret
                          12367 ;------------------------------------------------------------
                          12368 ;Allocation info for local variables in function 'axradio_set_freqoffset'
                          12369 ;------------------------------------------------------------
                          12370 ;offs                      Allocated to registers r4 r5 r6 r7 
                          12371 ;ret                       Allocated to registers r7 
                          12372 ;ret2                      Allocated to registers r6 
                          12373 ;------------------------------------------------------------
                    260C  12374 	G$axradio_set_freqoffset$0$0 ==.
                    260C  12375 	C$easyax5043.c$1877$1$381 ==.
                          12376 ;	..\COMMON\easyax5043.c:1877: uint8_t axradio_set_freqoffset(int32_t offs)
                          12377 ;	-----------------------------------------
                          12378 ;	 function axradio_set_freqoffset
                          12379 ;	-----------------------------------------
   2E41                   12380 _axradio_set_freqoffset:
                    260C  12381 	C$easyax5043.c$1879$1$383 ==.
                          12382 ;	..\COMMON\easyax5043.c:1879: uint8_t __autodata ret = axradio_set_curfreqoffset(offs);
   2E41 12 2D A0          12383 	lcall	_axradio_set_curfreqoffset
   2E44 AF 82             12384 	mov	r7,dpl
                    2611  12385 	C$easyax5043.c$1881$2$384 ==.
                          12386 ;	..\COMMON\easyax5043.c:1881: uint8_t __autodata ret2 = axradio_set_channel(axradio_curchannel);
   2E46 90 00 09          12387 	mov	dptr,#_axradio_curchannel
   2E49 E0                12388 	movx	a,@dptr
   2E4A F5 82             12389 	mov	dpl,a
   2E4C C0 07             12390 	push	ar7
   2E4E 12 2C BB          12391 	lcall	_axradio_set_channel
   2E51 AE 82             12392 	mov	r6,dpl
   2E53 D0 07             12393 	pop	ar7
                    2620  12394 	C$easyax5043.c$1882$2$384 ==.
                          12395 ;	..\COMMON\easyax5043.c:1882: if (ret == AXRADIO_ERR_NOERROR)
   2E55 EF                12396 	mov	a,r7
   2E56 70 02             12397 	jnz	00102$
                    2623  12398 	C$easyax5043.c$1883$2$384 ==.
                          12399 ;	..\COMMON\easyax5043.c:1883: ret = ret2;
   2E58 8E 07             12400 	mov	ar7,r6
   2E5A                   12401 00102$:
                    2625  12402 	C$easyax5043.c$1885$1$383 ==.
                          12403 ;	..\COMMON\easyax5043.c:1885: return ret;
   2E5A 8F 82             12404 	mov	dpl,r7
                    2627  12405 	C$easyax5043.c$1886$1$383 ==.
                    2627  12406 	XG$axradio_set_freqoffset$0$0 ==.
   2E5C 22                12407 	ret
                          12408 ;------------------------------------------------------------
                          12409 ;Allocation info for local variables in function 'axradio_get_freqoffset'
                          12410 ;------------------------------------------------------------
                    2628  12411 	G$axradio_get_freqoffset$0$0 ==.
                    2628  12412 	C$easyax5043.c$1888$1$383 ==.
                          12413 ;	..\COMMON\easyax5043.c:1888: int32_t axradio_get_freqoffset(void)
                          12414 ;	-----------------------------------------
                          12415 ;	 function axradio_get_freqoffset
                          12416 ;	-----------------------------------------
   2E5D                   12417 _axradio_get_freqoffset:
                    2628  12418 	C$easyax5043.c$1890$1$386 ==.
                          12419 ;	..\COMMON\easyax5043.c:1890: return axradio_curfreqoffset;
   2E5D 90 00 0A          12420 	mov	dptr,#_axradio_curfreqoffset
   2E60 E0                12421 	movx	a,@dptr
   2E61 FC                12422 	mov	r4,a
   2E62 A3                12423 	inc	dptr
   2E63 E0                12424 	movx	a,@dptr
   2E64 FD                12425 	mov	r5,a
   2E65 A3                12426 	inc	dptr
   2E66 E0                12427 	movx	a,@dptr
   2E67 FE                12428 	mov	r6,a
   2E68 A3                12429 	inc	dptr
   2E69 E0                12430 	movx	a,@dptr
   2E6A 8C 82             12431 	mov	dpl,r4
   2E6C 8D 83             12432 	mov	dph,r5
   2E6E 8E F0             12433 	mov	b,r6
                    263B  12434 	C$easyax5043.c$1891$1$386 ==.
                    263B  12435 	XG$axradio_get_freqoffset$0$0 ==.
   2E70 22                12436 	ret
                          12437 ;------------------------------------------------------------
                          12438 ;Allocation info for local variables in function 'axradio_set_local_address'
                          12439 ;------------------------------------------------------------
                          12440 ;addr                      Allocated to registers r5 r6 r7 
                          12441 ;------------------------------------------------------------
                    263C  12442 	G$axradio_set_local_address$0$0 ==.
                    263C  12443 	C$easyax5043.c$1893$1$386 ==.
                          12444 ;	..\COMMON\easyax5043.c:1893: void axradio_set_local_address(const struct axradio_address_mask *addr)
                          12445 ;	-----------------------------------------
                          12446 ;	 function axradio_set_local_address
                          12447 ;	-----------------------------------------
   2E71                   12448 _axradio_set_local_address:
   2E71 AD 82             12449 	mov	r5,dpl
   2E73 AE 83             12450 	mov	r6,dph
   2E75 AF F0             12451 	mov	r7,b
                    2642  12452 	C$easyax5043.c$1895$1$388 ==.
                          12453 ;	..\COMMON\easyax5043.c:1895: memcpy_xdatageneric(&axradio_localaddr, addr, sizeof(axradio_localaddr));
   2E77 8D 27             12454 	mov	_memcpy_PARM_2,r5
   2E79 8E 28             12455 	mov	(_memcpy_PARM_2 + 1),r6
   2E7B 8F 29             12456 	mov	(_memcpy_PARM_2 + 2),r7
   2E7D 75 2A 08          12457 	mov	_memcpy_PARM_3,#0x08
   2E80 75 2B 00          12458 	mov	(_memcpy_PARM_3 + 1),#0x00
   2E83 90 00 1E          12459 	mov	dptr,#_axradio_localaddr
   2E86 75 F0 00          12460 	mov	b,#0x00
   2E89 12 3F 6A          12461 	lcall	_memcpy
                    2657  12462 	C$easyax5043.c$1896$1$388 ==.
                          12463 ;	..\COMMON\easyax5043.c:1896: axradio_setaddrregs();
   2E8C 12 14 CD          12464 	lcall	_axradio_setaddrregs
                    265A  12465 	C$easyax5043.c$1897$1$388 ==.
                    265A  12466 	XG$axradio_set_local_address$0$0 ==.
   2E8F 22                12467 	ret
                          12468 ;------------------------------------------------------------
                          12469 ;Allocation info for local variables in function 'axradio_get_local_address'
                          12470 ;------------------------------------------------------------
                          12471 ;addr                      Allocated to registers r5 r6 r7 
                          12472 ;------------------------------------------------------------
                    265B  12473 	G$axradio_get_local_address$0$0 ==.
                    265B  12474 	C$easyax5043.c$1899$1$388 ==.
                          12475 ;	..\COMMON\easyax5043.c:1899: void axradio_get_local_address(struct axradio_address_mask *addr)
                          12476 ;	-----------------------------------------
                          12477 ;	 function axradio_get_local_address
                          12478 ;	-----------------------------------------
   2E90                   12479 _axradio_get_local_address:
   2E90 AD 82             12480 	mov	r5,dpl
   2E92 AE 83             12481 	mov	r6,dph
   2E94 AF F0             12482 	mov	r7,b
                    2661  12483 	C$easyax5043.c$1901$1$390 ==.
                          12484 ;	..\COMMON\easyax5043.c:1901: memcpy_genericxdata(addr, &axradio_localaddr, sizeof(axradio_localaddr));
   2E96 75 27 1E          12485 	mov	_memcpy_PARM_2,#_axradio_localaddr
   2E99 75 28 00          12486 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2E9C 75 29 00          12487 	mov	(_memcpy_PARM_2 + 2),#0x00
   2E9F 75 2A 08          12488 	mov	_memcpy_PARM_3,#0x08
   2EA2 75 2B 00          12489 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EA5 8D 82             12490 	mov	dpl,r5
   2EA7 8E 83             12491 	mov	dph,r6
   2EA9 8F F0             12492 	mov	b,r7
   2EAB 12 3F 6A          12493 	lcall	_memcpy
                    2679  12494 	C$easyax5043.c$1902$1$390 ==.
                    2679  12495 	XG$axradio_get_local_address$0$0 ==.
   2EAE 22                12496 	ret
                          12497 ;------------------------------------------------------------
                          12498 ;Allocation info for local variables in function 'axradio_set_default_remote_address'
                          12499 ;------------------------------------------------------------
                          12500 ;addr                      Allocated to registers r5 r6 r7 
                          12501 ;------------------------------------------------------------
                    267A  12502 	G$axradio_set_default_remote_address$0$0 ==.
                    267A  12503 	C$easyax5043.c$1904$1$390 ==.
                          12504 ;	..\COMMON\easyax5043.c:1904: void axradio_set_default_remote_address(const struct axradio_address *addr)
                          12505 ;	-----------------------------------------
                          12506 ;	 function axradio_set_default_remote_address
                          12507 ;	-----------------------------------------
   2EAF                   12508 _axradio_set_default_remote_address:
   2EAF AD 82             12509 	mov	r5,dpl
   2EB1 AE 83             12510 	mov	r6,dph
   2EB3 AF F0             12511 	mov	r7,b
                    2680  12512 	C$easyax5043.c$1906$1$392 ==.
                          12513 ;	..\COMMON\easyax5043.c:1906: memcpy_xdatageneric(&axradio_default_remoteaddr, addr, sizeof(axradio_default_remoteaddr));
   2EB5 8D 27             12514 	mov	_memcpy_PARM_2,r5
   2EB7 8E 28             12515 	mov	(_memcpy_PARM_2 + 1),r6
   2EB9 8F 29             12516 	mov	(_memcpy_PARM_2 + 2),r7
   2EBB 75 2A 04          12517 	mov	_memcpy_PARM_3,#0x04
   2EBE 75 2B 00          12518 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EC1 90 00 26          12519 	mov	dptr,#_axradio_default_remoteaddr
   2EC4 75 F0 00          12520 	mov	b,#0x00
   2EC7 12 3F 6A          12521 	lcall	_memcpy
                    2695  12522 	C$easyax5043.c$1907$1$392 ==.
                    2695  12523 	XG$axradio_set_default_remote_address$0$0 ==.
   2ECA 22                12524 	ret
                          12525 ;------------------------------------------------------------
                          12526 ;Allocation info for local variables in function 'axradio_get_default_remote_address'
                          12527 ;------------------------------------------------------------
                          12528 ;addr                      Allocated to registers r5 r6 r7 
                          12529 ;------------------------------------------------------------
                    2696  12530 	G$axradio_get_default_remote_address$0$0 ==.
                    2696  12531 	C$easyax5043.c$1909$1$392 ==.
                          12532 ;	..\COMMON\easyax5043.c:1909: void axradio_get_default_remote_address(struct axradio_address *addr)
                          12533 ;	-----------------------------------------
                          12534 ;	 function axradio_get_default_remote_address
                          12535 ;	-----------------------------------------
   2ECB                   12536 _axradio_get_default_remote_address:
   2ECB AD 82             12537 	mov	r5,dpl
   2ECD AE 83             12538 	mov	r6,dph
   2ECF AF F0             12539 	mov	r7,b
                    269C  12540 	C$easyax5043.c$1911$1$394 ==.
                          12541 ;	..\COMMON\easyax5043.c:1911: memcpy_genericxdata(addr, &axradio_default_remoteaddr, sizeof(axradio_default_remoteaddr));
   2ED1 75 27 26          12542 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   2ED4 75 28 00          12543 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   2ED7 75 29 00          12544 	mov	(_memcpy_PARM_2 + 2),#0x00
   2EDA 75 2A 04          12545 	mov	_memcpy_PARM_3,#0x04
   2EDD 75 2B 00          12546 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EE0 8D 82             12547 	mov	dpl,r5
   2EE2 8E 83             12548 	mov	dph,r6
   2EE4 8F F0             12549 	mov	b,r7
   2EE6 12 3F 6A          12550 	lcall	_memcpy
                    26B4  12551 	C$easyax5043.c$1912$1$394 ==.
                    26B4  12552 	XG$axradio_get_default_remote_address$0$0 ==.
   2EE9 22                12553 	ret
                          12554 ;------------------------------------------------------------
                          12555 ;Allocation info for local variables in function 'axradio_transmit'
                          12556 ;------------------------------------------------------------
                          12557 ;pkt                       Allocated with name '_axradio_transmit_PARM_2'
                          12558 ;pktlen                    Allocated with name '_axradio_transmit_PARM_3'
                          12559 ;addr                      Allocated to registers r5 r6 r7 
                          12560 ;fifofree                  Allocated to registers r3 r4 
                          12561 ;i                         Allocated to registers r4 
                          12562 ;iesave                    Allocated to registers r4 
                          12563 ;len_byte                  Allocated to registers r6 
                          12564 ;------------------------------------------------------------
                    26B5  12565 	G$axradio_transmit$0$0 ==.
                    26B5  12566 	C$easyax5043.c$1914$1$394 ==.
                          12567 ;	..\COMMON\easyax5043.c:1914: uint8_t axradio_transmit(const struct axradio_address *addr, const uint8_t *pkt, uint16_t pktlen)
                          12568 ;	-----------------------------------------
                          12569 ;	 function axradio_transmit
                          12570 ;	-----------------------------------------
   2EEA                   12571 _axradio_transmit:
   2EEA AD 82             12572 	mov	r5,dpl
   2EEC AE 83             12573 	mov	r6,dph
   2EEE AF F0             12574 	mov	r7,b
                    26BB  12575 	C$easyax5043.c$1916$1$396 ==.
                          12576 ;	..\COMMON\easyax5043.c:1916: switch (axradio_mode) {
   2EF0 AC 0A             12577 	mov	r4,_axradio_mode
   2EF2 BC 10 00          12578 	cjne	r4,#0x10,00217$
   2EF5                   12579 00217$:
   2EF5 50 03             12580 	jnc	00218$
   2EF7 02 32 60          12581 	ljmp	00160$
   2EFA                   12582 00218$:
   2EFA EC                12583 	mov	a,r4
   2EFB 24 DE             12584 	add	a,#0xff - 0x21
   2EFD 50 03             12585 	jnc	00219$
   2EFF 02 32 60          12586 	ljmp	00160$
   2F02                   12587 00219$:
   2F02 EC                12588 	mov	a,r4
   2F03 24 F0             12589 	add	a,#0xF0
   2F05 FC                12590 	mov	r4,a
   2F06 24 09             12591 	add	a,#(00220$-3-.)
   2F08 83                12592 	movc	a,@a+pc
   2F09 C0 E0             12593 	push	acc
   2F0B EC                12594 	mov	a,r4
   2F0C 24 15             12595 	add	a,#(00221$-3-.)
   2F0E 83                12596 	movc	a,@a+pc
   2F0F C0 E0             12597 	push	acc
   2F11 22                12598 	ret
   2F12                   12599 00220$:
   2F12 E4                12600 	.db	00120$
   2F13 E4                12601 	.db	00121$
   2F14 E4                12602 	.db	00122$
   2F15 E4                12603 	.db	00123$
   2F16 36                12604 	.db	00101$
   2F17 36                12605 	.db	00102$
   2F18 36                12606 	.db	00103$
   2F19 60                12607 	.db	00160$
   2F1A A9                12608 	.db	00113$
   2F1B A9                12609 	.db	00114$
   2F1C 60                12610 	.db	00160$
   2F1D 60                12611 	.db	00160$
   2F1E 60                12612 	.db	00160$
   2F1F 60                12613 	.db	00160$
   2F20 60                12614 	.db	00160$
   2F21 60                12615 	.db	00160$
   2F22 A7                12616 	.db	00111$
   2F23 A7                12617 	.db	00112$
   2F24                   12618 00221$:
   2F24 2F                12619 	.db	00120$>>8
   2F25 2F                12620 	.db	00121$>>8
   2F26 2F                12621 	.db	00122$>>8
   2F27 2F                12622 	.db	00123$>>8
   2F28 2F                12623 	.db	00101$>>8
   2F29 2F                12624 	.db	00102$>>8
   2F2A 2F                12625 	.db	00103$>>8
   2F2B 32                12626 	.db	00160$>>8
   2F2C 2F                12627 	.db	00113$>>8
   2F2D 2F                12628 	.db	00114$>>8
   2F2E 32                12629 	.db	00160$>>8
   2F2F 32                12630 	.db	00160$>>8
   2F30 32                12631 	.db	00160$>>8
   2F31 32                12632 	.db	00160$>>8
   2F32 32                12633 	.db	00160$>>8
   2F33 32                12634 	.db	00160$>>8
   2F34 2F                12635 	.db	00111$>>8
   2F35 2F                12636 	.db	00112$>>8
                    2701  12637 	C$easyax5043.c$1917$2$397 ==.
                          12638 ;	..\COMMON\easyax5043.c:1917: case AXRADIO_MODE_STREAM_TRANSMIT:
   2F36                   12639 00101$:
                    2701  12640 	C$easyax5043.c$1918$2$397 ==.
                          12641 ;	..\COMMON\easyax5043.c:1918: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2F36                   12642 00102$:
                    2701  12643 	C$easyax5043.c$1919$2$397 ==.
                          12644 ;	..\COMMON\easyax5043.c:1919: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2F36                   12645 00103$:
                    2701  12646 	C$easyax5043.c$1921$3$398 ==.
                          12647 ;	..\COMMON\easyax5043.c:1921: uint16_t __autodata fifofree = radio_read16((uint16_t)&AX5043_FIFOFREE1);
   2F36 90 40 2C          12648 	mov	dptr,#_AX5043_FIFOFREE1
   2F39 12 42 51          12649 	lcall	_radio_read16
   2F3C AB 82             12650 	mov	r3,dpl
   2F3E AC 83             12651 	mov	r4,dph
                    270B  12652 	C$easyax5043.c$1922$3$398 ==.
                          12653 ;	..\COMMON\easyax5043.c:1922: if (fifofree < pktlen + 3)
   2F40 74 03             12654 	mov	a,#0x03
   2F42 25 0F             12655 	add	a,_axradio_transmit_PARM_3
   2F44 F9                12656 	mov	r1,a
   2F45 E4                12657 	clr	a
   2F46 35 10             12658 	addc	a,(_axradio_transmit_PARM_3 + 1)
   2F48 FA                12659 	mov	r2,a
   2F49 C3                12660 	clr	c
   2F4A EB                12661 	mov	a,r3
   2F4B 99                12662 	subb	a,r1
   2F4C EC                12663 	mov	a,r4
   2F4D 9A                12664 	subb	a,r2
   2F4E 50 06             12665 	jnc	00105$
                    271B  12666 	C$easyax5043.c$1923$3$398 ==.
                          12667 ;	..\COMMON\easyax5043.c:1923: return AXRADIO_ERR_INVALID;
   2F50 75 82 04          12668 	mov	dpl,#0x04
   2F53 02 32 63          12669 	ljmp	00162$
   2F56                   12670 00105$:
                    2721  12671 	C$easyax5043.c$1925$2$397 ==.
                          12672 ;	..\COMMON\easyax5043.c:1925: if (pktlen) {
   2F56 E5 0F             12673 	mov	a,_axradio_transmit_PARM_3
   2F58 45 10             12674 	orl	a,(_axradio_transmit_PARM_3 + 1)
   2F5A 60 2D             12675 	jz	00110$
                    2727  12676 	C$easyax5043.c$1926$3$397 ==.
                          12677 ;	..\COMMON\easyax5043.c:1926: uint8_t __autodata i = pktlen;
   2F5C AC 0F             12678 	mov	r4,_axradio_transmit_PARM_3
                    2729  12679 	C$easyax5043.c$1927$3$399 ==.
                          12680 ;	..\COMMON\easyax5043.c:1927: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                    2729  12681 	C$easyax5043.c$1928$3$399 ==.
                          12682 ;	..\COMMON\easyax5043.c:1928: AX5043_FIFODATA = i + 1;
   2F5E 90 40 29          12683 	mov	dptr,#_AX5043_FIFODATA
   2F61 74 E1             12684 	mov	a,#0xE1
   2F63 F0                12685 	movx	@dptr,a
   2F64 EC                12686 	mov	a,r4
   2F65 04                12687 	inc	a
   2F66 F0                12688 	movx	@dptr,a
                    2732  12689 	C$easyax5043.c$1929$3$399 ==.
                          12690 ;	..\COMMON\easyax5043.c:1929: AX5043_FIFODATA = 0x08;
   2F67 90 40 29          12691 	mov	dptr,#_AX5043_FIFODATA
   2F6A 74 08             12692 	mov	a,#0x08
   2F6C F0                12693 	movx	@dptr,a
                    2738  12694 	C$easyax5043.c$1930$1$396 ==.
                          12695 ;	..\COMMON\easyax5043.c:1930: do {
   2F6D A9 0C             12696 	mov	r1,_axradio_transmit_PARM_2
   2F6F AA 0D             12697 	mov	r2,(_axradio_transmit_PARM_2 + 1)
   2F71 AB 0E             12698 	mov	r3,(_axradio_transmit_PARM_2 + 2)
   2F73                   12699 00106$:
                    273E  12700 	C$easyax5043.c$1931$4$400 ==.
                          12701 ;	..\COMMON\easyax5043.c:1931: AX5043_FIFODATA = *pkt++;
   2F73 89 82             12702 	mov	dpl,r1
   2F75 8A 83             12703 	mov	dph,r2
   2F77 8B F0             12704 	mov	b,r3
   2F79 12 4D B7          12705 	lcall	__gptrget
   2F7C F8                12706 	mov	r0,a
   2F7D A3                12707 	inc	dptr
   2F7E A9 82             12708 	mov	r1,dpl
   2F80 AA 83             12709 	mov	r2,dph
   2F82 90 40 29          12710 	mov	dptr,#_AX5043_FIFODATA
   2F85 E8                12711 	mov	a,r0
   2F86 F0                12712 	movx	@dptr,a
                    2752  12713 	C$easyax5043.c$1932$3$399 ==.
                          12714 ;	..\COMMON\easyax5043.c:1932: } while (--i);
   2F87 DC EA             12715 	djnz	r4,00106$
   2F89                   12716 00110$:
                    2754  12717 	C$easyax5043.c$1934$2$397 ==.
                          12718 ;	..\COMMON\easyax5043.c:1934: AX5043_FIFOSTAT =  4; // FIFO commit
   2F89 90 40 28          12719 	mov	dptr,#_AX5043_FIFOSTAT
   2F8C 74 04             12720 	mov	a,#0x04
   2F8E F0                12721 	movx	@dptr,a
                    275A  12722 	C$easyax5043.c$1936$3$401 ==.
                          12723 ;	..\COMMON\easyax5043.c:1936: uint8_t __autodata iesave = IE & 0x80;
   2F8F 74 80             12724 	mov	a,#0x80
   2F91 55 A8             12725 	anl	a,_IE
   2F93 FC                12726 	mov	r4,a
                    275F  12727 	C$easyax5043.c$1937$3$401 ==.
                          12728 ;	..\COMMON\easyax5043.c:1937: EA = 0;
   2F94 C2 AF             12729 	clr	_EA
                    2761  12730 	C$easyax5043.c$1938$3$401 ==.
                          12731 ;	..\COMMON\easyax5043.c:1938: AX5043_IRQMASK0 |= 0x08;
   2F96 90 40 07          12732 	mov	dptr,#_AX5043_IRQMASK0
   2F99 E0                12733 	movx	a,@dptr
   2F9A FB                12734 	mov	r3,a
   2F9B 44 08             12735 	orl	a,#0x08
   2F9D F0                12736 	movx	@dptr,a
                    2769  12737 	C$easyax5043.c$1939$3$401 ==.
                          12738 ;	..\COMMON\easyax5043.c:1939: IE |= iesave;
   2F9E EC                12739 	mov	a,r4
   2F9F 42 A8             12740 	orl	_IE,a
                    276C  12741 	C$easyax5043.c$1941$2$397 ==.
                          12742 ;	..\COMMON\easyax5043.c:1941: return AXRADIO_ERR_NOERROR;
   2FA1 75 82 00          12743 	mov	dpl,#0x00
   2FA4 02 32 63          12744 	ljmp	00162$
                    2772  12745 	C$easyax5043.c$1943$2$397 ==.
                          12746 ;	..\COMMON\easyax5043.c:1943: case AXRADIO_MODE_SYNC_MASTER:
   2FA7                   12747 00111$:
                    2772  12748 	C$easyax5043.c$1944$2$397 ==.
                          12749 ;	..\COMMON\easyax5043.c:1944: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2FA7                   12750 00112$:
                    2772  12751 	C$easyax5043.c$1945$2$397 ==.
                          12752 ;	..\COMMON\easyax5043.c:1945: goto dotx;
                    2772  12753 	C$easyax5043.c$1947$2$397 ==.
                          12754 ;	..\COMMON\easyax5043.c:1947: case AXRADIO_MODE_ASYNC_RECEIVE:
   2FA7 80 48             12755 	sjmp	00126$
   2FA9                   12756 00113$:
                    2774  12757 	C$easyax5043.c$1948$2$397 ==.
                          12758 ;	..\COMMON\easyax5043.c:1948: case AXRADIO_MODE_WOR_RECEIVE:
   2FA9                   12759 00114$:
                    2774  12760 	C$easyax5043.c$1949$2$397 ==.
                          12761 ;	..\COMMON\easyax5043.c:1949: if (axradio_syncstate != syncstate_off)
   2FA9 90 00 04          12762 	mov	dptr,#_axradio_syncstate
   2FAC E0                12763 	movx	a,@dptr
   2FAD FC                12764 	mov	r4,a
   2FAE 60 06             12765 	jz	00116$
                    277B  12766 	C$easyax5043.c$1950$2$397 ==.
                          12767 ;	..\COMMON\easyax5043.c:1950: return AXRADIO_ERR_BUSY;
   2FB0 75 82 02          12768 	mov	dpl,#0x02
   2FB3 02 32 63          12769 	ljmp	00162$
   2FB6                   12770 00116$:
                    2781  12771 	C$easyax5043.c$1951$2$397 ==.
                          12772 ;	..\COMMON\easyax5043.c:1951: AX5043_IRQMASK1 = 0x00;
   2FB6 90 40 06          12773 	mov	dptr,#_AX5043_IRQMASK1
                    2784  12774 	C$easyax5043.c$1952$2$397 ==.
                          12775 ;	..\COMMON\easyax5043.c:1952: AX5043_IRQMASK0 = 0x00;
   2FB9 E4                12776 	clr	a
   2FBA F0                12777 	movx	@dptr,a
   2FBB 90 40 07          12778 	mov	dptr,#_AX5043_IRQMASK0
   2FBE F0                12779 	movx	@dptr,a
                    278A  12780 	C$easyax5043.c$1953$2$397 ==.
                          12781 ;	..\COMMON\easyax5043.c:1953: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   2FBF 90 40 02          12782 	mov	dptr,#_AX5043_PWRMODE
   2FC2 74 05             12783 	mov	a,#0x05
   2FC4 F0                12784 	movx	@dptr,a
                    2790  12785 	C$easyax5043.c$1954$2$397 ==.
                          12786 ;	..\COMMON\easyax5043.c:1954: AX5043_FIFOSTAT = 3;
   2FC5 90 40 28          12787 	mov	dptr,#_AX5043_FIFOSTAT
   2FC8 74 03             12788 	mov	a,#0x03
   2FCA F0                12789 	movx	@dptr,a
                    2796  12790 	C$easyax5043.c$1955$2$397 ==.
                          12791 ;	..\COMMON\easyax5043.c:1955: while (AX5043_POWSTAT & 0x08);
   2FCB                   12792 00117$:
   2FCB 90 40 03          12793 	mov	dptr,#_AX5043_POWSTAT
   2FCE E0                12794 	movx	a,@dptr
   2FCF FC                12795 	mov	r4,a
   2FD0 20 E3 F8          12796 	jb	acc.3,00117$
                    279E  12797 	C$easyax5043.c$1956$2$397 ==.
                          12798 ;	..\COMMON\easyax5043.c:1956: ax5043_init_registers_tx();
   2FD3 C0 07             12799 	push	ar7
   2FD5 C0 06             12800 	push	ar6
   2FD7 C0 05             12801 	push	ar5
   2FD9 12 08 CB          12802 	lcall	_ax5043_init_registers_tx
   2FDC D0 05             12803 	pop	ar5
   2FDE D0 06             12804 	pop	ar6
   2FE0 D0 07             12805 	pop	ar7
                    27AD  12806 	C$easyax5043.c$1957$2$397 ==.
                          12807 ;	..\COMMON\easyax5043.c:1957: goto dotx;
                    27AD  12808 	C$easyax5043.c$1959$2$397 ==.
                          12809 ;	..\COMMON\easyax5043.c:1959: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2FE2 80 0D             12810 	sjmp	00126$
   2FE4                   12811 00120$:
                    27AF  12812 	C$easyax5043.c$1960$2$397 ==.
                          12813 ;	..\COMMON\easyax5043.c:1960: case AXRADIO_MODE_WOR_TRANSMIT:
   2FE4                   12814 00121$:
                    27AF  12815 	C$easyax5043.c$1961$2$397 ==.
                          12816 ;	..\COMMON\easyax5043.c:1961: case AXRADIO_MODE_ACK_TRANSMIT:
   2FE4                   12817 00122$:
                    27AF  12818 	C$easyax5043.c$1962$2$397 ==.
                          12819 ;	..\COMMON\easyax5043.c:1962: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2FE4                   12820 00123$:
                    27AF  12821 	C$easyax5043.c$1963$2$397 ==.
                          12822 ;	..\COMMON\easyax5043.c:1963: if (axradio_syncstate != syncstate_off)
   2FE4 90 00 04          12823 	mov	dptr,#_axradio_syncstate
   2FE7 E0                12824 	movx	a,@dptr
   2FE8 FC                12825 	mov	r4,a
   2FE9 60 06             12826 	jz	00126$
                    27B6  12827 	C$easyax5043.c$1964$2$397 ==.
                          12828 ;	..\COMMON\easyax5043.c:1964: return AXRADIO_ERR_BUSY;
   2FEB 75 82 02          12829 	mov	dpl,#0x02
   2FEE 02 32 63          12830 	ljmp	00162$
                    27BC  12831 	C$easyax5043.c$1965$2$397 ==.
                          12832 ;	..\COMMON\easyax5043.c:1965: dotx:
   2FF1                   12833 00126$:
                    27BC  12834 	C$easyax5043.c$1966$2$397 ==.
                          12835 ;	..\COMMON\easyax5043.c:1966: axradio_ack_count = axradio_framing_ack_retransmissions;
   2FF1 90 4F 36          12836 	mov	dptr,#_axradio_framing_ack_retransmissions
   2FF4 E4                12837 	clr	a
   2FF5 93                12838 	movc	a,@a+dptr
   2FF6 90 00 0E          12839 	mov	dptr,#_axradio_ack_count
   2FF9 F0                12840 	movx	@dptr,a
                    27C5  12841 	C$easyax5043.c$1967$2$397 ==.
                          12842 ;	..\COMMON\easyax5043.c:1967: ++axradio_ack_seqnr;
   2FFA 90 00 0F          12843 	mov	dptr,#_axradio_ack_seqnr
   2FFD E0                12844 	movx	a,@dptr
   2FFE 24 01             12845 	add	a,#0x01
   3000 F0                12846 	movx	@dptr,a
                    27CC  12847 	C$easyax5043.c$1968$2$397 ==.
                          12848 ;	..\COMMON\easyax5043.c:1968: axradio_txbuffer_len = pktlen + axradio_framing_maclen;
   3001 90 4F 1F          12849 	mov	dptr,#_axradio_framing_maclen
   3004 E4                12850 	clr	a
   3005 93                12851 	movc	a,@a+dptr
   3006 FC                12852 	mov	r4,a
   3007 7B 00             12853 	mov	r3,#0x00
   3009 25 0F             12854 	add	a,_axradio_transmit_PARM_3
   300B FA                12855 	mov	r2,a
   300C EB                12856 	mov	a,r3
   300D 35 10             12857 	addc	a,(_axradio_transmit_PARM_3 + 1)
   300F FB                12858 	mov	r3,a
   3010 90 00 05          12859 	mov	dptr,#_axradio_txbuffer_len
   3013 EA                12860 	mov	a,r2
   3014 F0                12861 	movx	@dptr,a
   3015 A3                12862 	inc	dptr
   3016 EB                12863 	mov	a,r3
   3017 F0                12864 	movx	@dptr,a
                    27E3  12865 	C$easyax5043.c$1969$2$397 ==.
                          12866 ;	..\COMMON\easyax5043.c:1969: if (axradio_txbuffer_len > sizeof(axradio_txbuffer))
   3018 C3                12867 	clr	c
   3019 74 04             12868 	mov	a,#0x04
   301B 9A                12869 	subb	a,r2
   301C 74 01             12870 	mov	a,#0x01
   301E 9B                12871 	subb	a,r3
   301F 50 06             12872 	jnc	00128$
                    27EC  12873 	C$easyax5043.c$1970$2$397 ==.
                          12874 ;	..\COMMON\easyax5043.c:1970: return AXRADIO_ERR_INVALID;
   3021 75 82 04          12875 	mov	dpl,#0x04
   3024 02 32 63          12876 	ljmp	00162$
   3027                   12877 00128$:
                    27F2  12878 	C$easyax5043.c$1971$2$397 ==.
                          12879 ;	..\COMMON\easyax5043.c:1971: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   3027 8C 28             12880 	mov	_memset_PARM_3,r4
   3029 75 29 00          12881 	mov	(_memset_PARM_3 + 1),#0x00
   302C 75 27 00          12882 	mov	_memset_PARM_2,#0x00
   302F 90 00 2A          12883 	mov	dptr,#_axradio_txbuffer
   3032 75 F0 00          12884 	mov	b,#0x00
   3035 C0 07             12885 	push	ar7
   3037 C0 06             12886 	push	ar6
   3039 C0 05             12887 	push	ar5
   303B 12 3F 4B          12888 	lcall	_memset
                    2809  12889 	C$easyax5043.c$1972$2$397 ==.
                          12890 ;	..\COMMON\easyax5043.c:1972: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_maclen], pkt, pktlen);
   303E 90 4F 1F          12891 	mov	dptr,#_axradio_framing_maclen
   3041 E4                12892 	clr	a
   3042 93                12893 	movc	a,@a+dptr
   3043 24 2A             12894 	add	a,#_axradio_txbuffer
   3045 FC                12895 	mov	r4,a
   3046 E4                12896 	clr	a
   3047 34 00             12897 	addc	a,#(_axradio_txbuffer >> 8)
   3049 FB                12898 	mov	r3,a
   304A 7A 00             12899 	mov	r2,#0x00
   304C 85 0C 27          12900 	mov	_memcpy_PARM_2,_axradio_transmit_PARM_2
   304F 85 0D 28          12901 	mov	(_memcpy_PARM_2 + 1),(_axradio_transmit_PARM_2 + 1)
   3052 85 0E 29          12902 	mov	(_memcpy_PARM_2 + 2),(_axradio_transmit_PARM_2 + 2)
   3055 85 0F 2A          12903 	mov	_memcpy_PARM_3,_axradio_transmit_PARM_3
   3058 85 10 2B          12904 	mov	(_memcpy_PARM_3 + 1),(_axradio_transmit_PARM_3 + 1)
   305B 8C 82             12905 	mov	dpl,r4
   305D 8B 83             12906 	mov	dph,r3
   305F 8A F0             12907 	mov	b,r2
   3061 12 3F 6A          12908 	lcall	_memcpy
   3064 D0 05             12909 	pop	ar5
   3066 D0 06             12910 	pop	ar6
   3068 D0 07             12911 	pop	ar7
                    2835  12912 	C$easyax5043.c$1973$2$397 ==.
                          12913 ;	..\COMMON\easyax5043.c:1973: if (axradio_framing_ack_seqnrpos != 0xff)
   306A 90 4F 37          12914 	mov	dptr,#_axradio_framing_ack_seqnrpos
   306D E4                12915 	clr	a
   306E 93                12916 	movc	a,@a+dptr
   306F FC                12917 	mov	r4,a
   3070 BC FF 02          12918 	cjne	r4,#0xFF,00230$
   3073 80 12             12919 	sjmp	00130$
   3075                   12920 00230$:
                    2840  12921 	C$easyax5043.c$1974$2$397 ==.
                          12922 ;	..\COMMON\easyax5043.c:1974: axradio_txbuffer[axradio_framing_ack_seqnrpos] = axradio_ack_seqnr;
   3075 EC                12923 	mov	a,r4
   3076 24 2A             12924 	add	a,#_axradio_txbuffer
   3078 FC                12925 	mov	r4,a
   3079 E4                12926 	clr	a
   307A 34 00             12927 	addc	a,#(_axradio_txbuffer >> 8)
   307C FB                12928 	mov	r3,a
   307D 90 00 0F          12929 	mov	dptr,#_axradio_ack_seqnr
   3080 E0                12930 	movx	a,@dptr
   3081 FA                12931 	mov	r2,a
   3082 8C 82             12932 	mov	dpl,r4
   3084 8B 83             12933 	mov	dph,r3
   3086 F0                12934 	movx	@dptr,a
   3087                   12935 00130$:
                    2852  12936 	C$easyax5043.c$1975$2$397 ==.
                          12937 ;	..\COMMON\easyax5043.c:1975: if (axradio_framing_destaddrpos != 0xff)
   3087 90 4F 21          12938 	mov	dptr,#_axradio_framing_destaddrpos
   308A E4                12939 	clr	a
   308B 93                12940 	movc	a,@a+dptr
   308C FC                12941 	mov	r4,a
   308D BC FF 02          12942 	cjne	r4,#0xFF,00231$
   3090 80 24             12943 	sjmp	00132$
   3092                   12944 00231$:
                    285D  12945 	C$easyax5043.c$1976$2$397 ==.
                          12946 ;	..\COMMON\easyax5043.c:1976: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_destaddrpos], &addr->addr, axradio_framing_addrlen);
   3092 EC                12947 	mov	a,r4
   3093 24 2A             12948 	add	a,#_axradio_txbuffer
   3095 FC                12949 	mov	r4,a
   3096 E4                12950 	clr	a
   3097 34 00             12951 	addc	a,#(_axradio_txbuffer >> 8)
   3099 FB                12952 	mov	r3,a
   309A 7A 00             12953 	mov	r2,#0x00
   309C 8D 27             12954 	mov	_memcpy_PARM_2,r5
   309E 8E 28             12955 	mov	(_memcpy_PARM_2 + 1),r6
   30A0 8F 29             12956 	mov	(_memcpy_PARM_2 + 2),r7
   30A2 90 4F 20          12957 	mov	dptr,#_axradio_framing_addrlen
   30A5 E4                12958 	clr	a
   30A6 93                12959 	movc	a,@a+dptr
   30A7 FF                12960 	mov	r7,a
   30A8 8F 2A             12961 	mov	_memcpy_PARM_3,r7
   30AA 75 2B 00          12962 	mov	(_memcpy_PARM_3 + 1),#0x00
   30AD 8C 82             12963 	mov	dpl,r4
   30AF 8B 83             12964 	mov	dph,r3
   30B1 8A F0             12965 	mov	b,r2
   30B3 12 3F 6A          12966 	lcall	_memcpy
   30B6                   12967 00132$:
                    2881  12968 	C$easyax5043.c$1977$2$397 ==.
                          12969 ;	..\COMMON\easyax5043.c:1977: if (axradio_framing_sourceaddrpos != 0xff)
   30B6 90 4F 22          12970 	mov	dptr,#_axradio_framing_sourceaddrpos
   30B9 E4                12971 	clr	a
   30BA 93                12972 	movc	a,@a+dptr
   30BB FF                12973 	mov	r7,a
   30BC BF FF 02          12974 	cjne	r7,#0xFF,00232$
   30BF 80 27             12975 	sjmp	00134$
   30C1                   12976 00232$:
                    288C  12977 	C$easyax5043.c$1978$2$397 ==.
                          12978 ;	..\COMMON\easyax5043.c:1978: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   30C1 EF                12979 	mov	a,r7
   30C2 24 2A             12980 	add	a,#_axradio_txbuffer
   30C4 FF                12981 	mov	r7,a
   30C5 E4                12982 	clr	a
   30C6 34 00             12983 	addc	a,#(_axradio_txbuffer >> 8)
   30C8 FE                12984 	mov	r6,a
   30C9 7D 00             12985 	mov	r5,#0x00
   30CB 75 27 1E          12986 	mov	_memcpy_PARM_2,#_axradio_localaddr
   30CE 75 28 00          12987 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   30D1 75 29 00          12988 	mov	(_memcpy_PARM_2 + 2),#0x00
   30D4 90 4F 20          12989 	mov	dptr,#_axradio_framing_addrlen
   30D7 E4                12990 	clr	a
   30D8 93                12991 	movc	a,@a+dptr
   30D9 FC                12992 	mov	r4,a
   30DA 8C 2A             12993 	mov	_memcpy_PARM_3,r4
   30DC 75 2B 00          12994 	mov	(_memcpy_PARM_3 + 1),#0x00
   30DF 8F 82             12995 	mov	dpl,r7
   30E1 8E 83             12996 	mov	dph,r6
   30E3 8D F0             12997 	mov	b,r5
   30E5 12 3F 6A          12998 	lcall	_memcpy
   30E8                   12999 00134$:
                    28B3  13000 	C$easyax5043.c$1979$2$397 ==.
                          13001 ;	..\COMMON\easyax5043.c:1979: if (axradio_framing_lenmask) {
   30E8 90 4F 25          13002 	mov	dptr,#_axradio_framing_lenmask
   30EB E4                13003 	clr	a
   30EC 93                13004 	movc	a,@a+dptr
   30ED FF                13005 	mov	r7,a
   30EE 60 30             13006 	jz	00136$
                    28BB  13007 	C$easyax5043.c$1980$3$402 ==.
                          13008 ;	..\COMMON\easyax5043.c:1980: uint8_t __autodata len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   30F0 90 00 05          13009 	mov	dptr,#_axradio_txbuffer_len
   30F3 E0                13010 	movx	a,@dptr
   30F4 FD                13011 	mov	r5,a
   30F5 A3                13012 	inc	dptr
   30F6 E0                13013 	movx	a,@dptr
   30F7 90 4F 24          13014 	mov	dptr,#_axradio_framing_lenoffs
   30FA E4                13015 	clr	a
   30FB 93                13016 	movc	a,@a+dptr
   30FC FE                13017 	mov	r6,a
   30FD ED                13018 	mov	a,r5
   30FE C3                13019 	clr	c
   30FF 9E                13020 	subb	a,r6
   3100 5F                13021 	anl	a,r7
   3101 FE                13022 	mov	r6,a
                    28CD  13023 	C$easyax5043.c$1981$3$402 ==.
                          13024 ;	..\COMMON\easyax5043.c:1981: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   3102 90 4F 23          13025 	mov	dptr,#_axradio_framing_lenpos
   3105 E4                13026 	clr	a
   3106 93                13027 	movc	a,@a+dptr
   3107 24 2A             13028 	add	a,#_axradio_txbuffer
   3109 FD                13029 	mov	r5,a
   310A E4                13030 	clr	a
   310B 34 00             13031 	addc	a,#(_axradio_txbuffer >> 8)
   310D FC                13032 	mov	r4,a
   310E 8D 82             13033 	mov	dpl,r5
   3110 8C 83             13034 	mov	dph,r4
   3112 E0                13035 	movx	a,@dptr
   3113 FB                13036 	mov	r3,a
   3114 EF                13037 	mov	a,r7
   3115 F4                13038 	cpl	a
   3116 FF                13039 	mov	r7,a
   3117 5B                13040 	anl	a,r3
   3118 42 06             13041 	orl	ar6,a
   311A 8D 82             13042 	mov	dpl,r5
   311C 8C 83             13043 	mov	dph,r4
   311E EE                13044 	mov	a,r6
   311F F0                13045 	movx	@dptr,a
   3120                   13046 00136$:
                    28EB  13047 	C$easyax5043.c$1983$2$397 ==.
                          13048 ;	..\COMMON\easyax5043.c:1983: if (axradio_framing_swcrclen) {
   3120 90 4F 26          13049 	mov	dptr,#_axradio_framing_swcrclen
   3123 E4                13050 	clr	a
   3124 93                13051 	movc	a,@a+dptr
   3125 FF                13052 	mov	r7,a
   3126 60 2E             13053 	jz	00138$
                    28F3  13054 	C$easyax5043.c$1984$3$403 ==.
                          13055 ;	..\COMMON\easyax5043.c:1984: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   3128 90 00 05          13056 	mov	dptr,#_axradio_txbuffer_len
   312B E0                13057 	movx	a,@dptr
   312C C0 E0             13058 	push	acc
   312E A3                13059 	inc	dptr
   312F E0                13060 	movx	a,@dptr
   3130 C0 E0             13061 	push	acc
   3132 90 00 2A          13062 	mov	dptr,#_axradio_txbuffer
   3135 12 06 6A          13063 	lcall	_axradio_framing_append_crc
   3138 15 81             13064 	dec	sp
   313A 15 81             13065 	dec	sp
                    2907  13066 	C$easyax5043.c$1985$3$403 ==.
                          13067 ;	..\COMMON\easyax5043.c:1985: axradio_txbuffer_len += axradio_framing_swcrclen;
   313C 90 4F 26          13068 	mov	dptr,#_axradio_framing_swcrclen
   313F E4                13069 	clr	a
   3140 93                13070 	movc	a,@a+dptr
   3141 FF                13071 	mov	r7,a
   3142 7E 00             13072 	mov	r6,#0x00
   3144 90 00 05          13073 	mov	dptr,#_axradio_txbuffer_len
   3147 E0                13074 	movx	a,@dptr
   3148 FC                13075 	mov	r4,a
   3149 A3                13076 	inc	dptr
   314A E0                13077 	movx	a,@dptr
   314B FD                13078 	mov	r5,a
   314C 90 00 05          13079 	mov	dptr,#_axradio_txbuffer_len
   314F EF                13080 	mov	a,r7
   3150 2C                13081 	add	a,r4
   3151 F0                13082 	movx	@dptr,a
   3152 EE                13083 	mov	a,r6
   3153 3D                13084 	addc	a,r5
   3154 A3                13085 	inc	dptr
   3155 F0                13086 	movx	@dptr,a
   3156                   13087 00138$:
                    2921  13088 	C$easyax5043.c$1987$2$397 ==.
                          13089 ;	..\COMMON\easyax5043.c:1987: if (axradio_phy_pn9)
   3156 90 4E FE          13090 	mov	dptr,#_axradio_phy_pn9
   3159 E4                13091 	clr	a
   315A 93                13092 	movc	a,@a+dptr
   315B FF                13093 	mov	r7,a
   315C 60 2F             13094 	jz	00140$
                    2929  13095 	C$easyax5043.c$1988$2$397 ==.
                          13096 ;	..\COMMON\easyax5043.c:1988: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   315E 90 40 11          13097 	mov	dptr,#_AX5043_ENCODING
   3161 E0                13098 	movx	a,@dptr
   3162 FF                13099 	mov	r7,a
   3163 53 07 01          13100 	anl	ar7,#0x01
   3166 C3                13101 	clr	c
   3167 E4                13102 	clr	a
   3168 9F                13103 	subb	a,r7
   3169 FF                13104 	mov	r7,a
   316A C0 07             13105 	push	ar7
   316C 74 FF             13106 	mov	a,#0xFF
   316E C0 E0             13107 	push	acc
   3170 74 01             13108 	mov	a,#0x01
   3172 C0 E0             13109 	push	acc
   3174 90 00 05          13110 	mov	dptr,#_axradio_txbuffer_len
   3177 E0                13111 	movx	a,@dptr
   3178 C0 E0             13112 	push	acc
   317A A3                13113 	inc	dptr
   317B E0                13114 	movx	a,@dptr
   317C C0 E0             13115 	push	acc
   317E 90 00 2A          13116 	mov	dptr,#_axradio_txbuffer
   3181 75 F0 00          13117 	mov	b,#0x00
   3184 12 41 3F          13118 	lcall	_pn9_buffer
   3187 E5 81             13119 	mov	a,sp
   3189 24 FB             13120 	add	a,#0xfb
   318B F5 81             13121 	mov	sp,a
   318D                   13122 00140$:
                    2958  13123 	C$easyax5043.c$1989$2$397 ==.
                          13124 ;	..\COMMON\easyax5043.c:1989: if (axradio_mode == AXRADIO_MODE_SYNC_MASTER ||
   318D 74 20             13125 	mov	a,#0x20
   318F B5 0A 02          13126 	cjne	a,_axradio_mode,00236$
   3192 80 05             13127 	sjmp	00141$
   3194                   13128 00236$:
                    295F  13129 	C$easyax5043.c$1990$2$397 ==.
                          13130 ;	..\COMMON\easyax5043.c:1990: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   3194 74 21             13131 	mov	a,#0x21
   3196 B5 0A 06          13132 	cjne	a,_axradio_mode,00142$
   3199                   13133 00141$:
                    2964  13134 	C$easyax5043.c$1991$2$397 ==.
                          13135 ;	..\COMMON\easyax5043.c:1991: return AXRADIO_ERR_NOERROR;
   3199 75 82 00          13136 	mov	dpl,#0x00
   319C 02 32 63          13137 	ljmp	00162$
   319F                   13138 00142$:
                    296A  13139 	C$easyax5043.c$1992$2$397 ==.
                          13140 ;	..\COMMON\easyax5043.c:1992: if (axradio_mode == AXRADIO_MODE_WOR_TRANSMIT ||
   319F 74 11             13141 	mov	a,#0x11
   31A1 B5 0A 02          13142 	cjne	a,_axradio_mode,00239$
   31A4 80 05             13143 	sjmp	00144$
   31A6                   13144 00239$:
                    2971  13145 	C$easyax5043.c$1993$2$397 ==.
                          13146 ;	..\COMMON\easyax5043.c:1993: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT)
   31A6 74 13             13147 	mov	a,#0x13
   31A8 B5 0A 14          13148 	cjne	a,_axradio_mode,00145$
   31AB                   13149 00144$:
                    2976  13150 	C$easyax5043.c$1994$2$397 ==.
                          13151 ;	..\COMMON\easyax5043.c:1994: axradio_txbuffer_cnt = axradio_phy_preamble_wor_longlen;
   31AB 90 4F 13          13152 	mov	dptr,#_axradio_phy_preamble_wor_longlen
   31AE E4                13153 	clr	a
   31AF 93                13154 	movc	a,@a+dptr
   31B0 FE                13155 	mov	r6,a
   31B1 74 01             13156 	mov	a,#0x01
   31B3 93                13157 	movc	a,@a+dptr
   31B4 FF                13158 	mov	r7,a
   31B5 90 00 07          13159 	mov	dptr,#_axradio_txbuffer_cnt
   31B8 EE                13160 	mov	a,r6
   31B9 F0                13161 	movx	@dptr,a
   31BA A3                13162 	inc	dptr
   31BB EF                13163 	mov	a,r7
   31BC F0                13164 	movx	@dptr,a
   31BD 80 12             13165 	sjmp	00146$
   31BF                   13166 00145$:
                    298A  13167 	C$easyax5043.c$1996$2$397 ==.
                          13168 ;	..\COMMON\easyax5043.c:1996: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   31BF 90 4F 17          13169 	mov	dptr,#_axradio_phy_preamble_longlen
   31C2 E4                13170 	clr	a
   31C3 93                13171 	movc	a,@a+dptr
   31C4 FE                13172 	mov	r6,a
   31C5 74 01             13173 	mov	a,#0x01
   31C7 93                13174 	movc	a,@a+dptr
   31C8 FF                13175 	mov	r7,a
   31C9 90 00 07          13176 	mov	dptr,#_axradio_txbuffer_cnt
   31CC EE                13177 	mov	a,r6
   31CD F0                13178 	movx	@dptr,a
   31CE A3                13179 	inc	dptr
   31CF EF                13180 	mov	a,r7
   31D0 F0                13181 	movx	@dptr,a
   31D1                   13182 00146$:
                    299C  13183 	C$easyax5043.c$1997$2$397 ==.
                          13184 ;	..\COMMON\easyax5043.c:1997: if (axradio_phy_lbt_retries) {
   31D1 90 4F 0F          13185 	mov	dptr,#_axradio_phy_lbt_retries
   31D4 E4                13186 	clr	a
   31D5 93                13187 	movc	a,@a+dptr
   31D6 FF                13188 	mov	r7,a
   31D7 60 79             13189 	jz	00159$
                    29A4  13190 	C$easyax5043.c$1998$3$404 ==.
                          13191 ;	..\COMMON\easyax5043.c:1998: switch (axradio_mode) {
   31D9 AF 0A             13192 	mov	r7,_axradio_mode
   31DB BF 10 02          13193 	cjne	r7,#0x10,00243$
   31DE 80 21             13194 	sjmp	00155$
   31E0                   13195 00243$:
   31E0 BF 11 02          13196 	cjne	r7,#0x11,00244$
   31E3 80 1C             13197 	sjmp	00155$
   31E5                   13198 00244$:
   31E5 BF 12 02          13199 	cjne	r7,#0x12,00245$
   31E8 80 17             13200 	sjmp	00155$
   31EA                   13201 00245$:
   31EA BF 13 02          13202 	cjne	r7,#0x13,00246$
   31ED 80 12             13203 	sjmp	00155$
   31EF                   13204 00246$:
   31EF BF 18 02          13205 	cjne	r7,#0x18,00247$
   31F2 80 0D             13206 	sjmp	00155$
   31F4                   13207 00247$:
   31F4 BF 19 02          13208 	cjne	r7,#0x19,00248$
   31F7 80 08             13209 	sjmp	00155$
   31F9                   13210 00248$:
   31F9 BF 1A 02          13211 	cjne	r7,#0x1A,00249$
   31FC 80 03             13212 	sjmp	00155$
   31FE                   13213 00249$:
   31FE BF 1B 51          13214 	cjne	r7,#0x1B,00159$
                    29CC  13215 	C$easyax5043.c$2006$4$405 ==.
                          13216 ;	..\COMMON\easyax5043.c:2006: case AXRADIO_MODE_ACK_RECEIVE:
   3201                   13217 00155$:
                    29CC  13218 	C$easyax5043.c$2007$4$405 ==.
                          13219 ;	..\COMMON\easyax5043.c:2007: ax5043_off_xtal();
   3201 12 14 85          13220 	lcall	_ax5043_off_xtal
                    29CF  13221 	C$easyax5043.c$2008$4$405 ==.
                          13222 ;	..\COMMON\easyax5043.c:2008: ax5043_init_registers_rx();
   3204 12 09 01          13223 	lcall	_ax5043_init_registers_rx
                    29D2  13224 	C$easyax5043.c$2009$4$405 ==.
                          13225 ;	..\COMMON\easyax5043.c:2009: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   3207 90 4F 0A          13226 	mov	dptr,#_axradio_phy_rssireference
   320A E4                13227 	clr	a
   320B 93                13228 	movc	a,@a+dptr
   320C 90 42 2C          13229 	mov	dptr,#_AX5043_RSSIREFERENCE
   320F F0                13230 	movx	@dptr,a
                    29DB  13231 	C$easyax5043.c$2010$4$405 ==.
                          13232 ;	..\COMMON\easyax5043.c:2010: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   3210 90 40 02          13233 	mov	dptr,#_AX5043_PWRMODE
   3213 74 09             13234 	mov	a,#0x09
   3215 F0                13235 	movx	@dptr,a
                    29E1  13236 	C$easyax5043.c$2011$4$405 ==.
                          13237 ;	..\COMMON\easyax5043.c:2011: axradio_ack_count = axradio_phy_lbt_retries;
   3216 90 4F 0F          13238 	mov	dptr,#_axradio_phy_lbt_retries
   3219 E4                13239 	clr	a
   321A 93                13240 	movc	a,@a+dptr
   321B 90 00 0E          13241 	mov	dptr,#_axradio_ack_count
   321E F0                13242 	movx	@dptr,a
                    29EA  13243 	C$easyax5043.c$2012$4$405 ==.
                          13244 ;	..\COMMON\easyax5043.c:2012: axradio_syncstate = syncstate_lbt;
   321F 90 00 04          13245 	mov	dptr,#_axradio_syncstate
   3222 74 01             13246 	mov	a,#0x01
   3224 F0                13247 	movx	@dptr,a
                    29F0  13248 	C$easyax5043.c$2013$4$405 ==.
                          13249 ;	..\COMMON\easyax5043.c:2013: wtimer_remove(&axradio_timer);
   3225 90 02 89          13250 	mov	dptr,#_axradio_timer
   3228 12 49 5A          13251 	lcall	_wtimer_remove
                    29F6  13252 	C$easyax5043.c$2014$4$405 ==.
                          13253 ;	..\COMMON\easyax5043.c:2014: axradio_timer.time = axradio_phy_cs_period;
   322B 90 4F 0C          13254 	mov	dptr,#_axradio_phy_cs_period
   322E E4                13255 	clr	a
   322F 93                13256 	movc	a,@a+dptr
   3230 FE                13257 	mov	r6,a
   3231 74 01             13258 	mov	a,#0x01
   3233 93                13259 	movc	a,@a+dptr
   3234 FF                13260 	mov	r7,a
   3235 7D 00             13261 	mov	r5,#0x00
   3237 7C 00             13262 	mov	r4,#0x00
   3239 90 02 8D          13263 	mov	dptr,#(_axradio_timer + 0x0004)
   323C EE                13264 	mov	a,r6
   323D F0                13265 	movx	@dptr,a
   323E A3                13266 	inc	dptr
   323F EF                13267 	mov	a,r7
   3240 F0                13268 	movx	@dptr,a
   3241 A3                13269 	inc	dptr
   3242 ED                13270 	mov	a,r5
   3243 F0                13271 	movx	@dptr,a
   3244 A3                13272 	inc	dptr
   3245 EC                13273 	mov	a,r4
   3246 F0                13274 	movx	@dptr,a
                    2A12  13275 	C$easyax5043.c$2015$4$405 ==.
                          13276 ;	..\COMMON\easyax5043.c:2015: wtimer0_addrelative(&axradio_timer);
   3247 90 02 89          13277 	mov	dptr,#_axradio_timer
   324A 12 3F D9          13278 	lcall	_wtimer0_addrelative
                    2A18  13279 	C$easyax5043.c$2016$4$405 ==.
                          13280 ;	..\COMMON\easyax5043.c:2016: return AXRADIO_ERR_NOERROR;
   324D 75 82 00          13281 	mov	dpl,#0x00
                    2A1B  13282 	C$easyax5043.c$2020$2$397 ==.
                          13283 ;	..\COMMON\easyax5043.c:2020: }
   3250 80 11             13284 	sjmp	00162$
   3252                   13285 00159$:
                    2A1D  13286 	C$easyax5043.c$2022$2$397 ==.
                          13287 ;	..\COMMON\easyax5043.c:2022: axradio_syncstate = syncstate_asynctx;
   3252 90 00 04          13288 	mov	dptr,#_axradio_syncstate
   3255 74 02             13289 	mov	a,#0x02
   3257 F0                13290 	movx	@dptr,a
                    2A23  13291 	C$easyax5043.c$2023$2$397 ==.
                          13292 ;	..\COMMON\easyax5043.c:2023: ax5043_prepare_tx();
   3258 12 14 56          13293 	lcall	_ax5043_prepare_tx
                    2A26  13294 	C$easyax5043.c$2024$2$397 ==.
                          13295 ;	..\COMMON\easyax5043.c:2024: return AXRADIO_ERR_NOERROR;
   325B 75 82 00          13296 	mov	dpl,#0x00
                    2A29  13297 	C$easyax5043.c$2026$2$397 ==.
                          13298 ;	..\COMMON\easyax5043.c:2026: default:
   325E 80 03             13299 	sjmp	00162$
   3260                   13300 00160$:
                    2A2B  13301 	C$easyax5043.c$2027$2$397 ==.
                          13302 ;	..\COMMON\easyax5043.c:2027: return AXRADIO_ERR_NOTSUPPORTED;
   3260 75 82 01          13303 	mov	dpl,#0x01
                    2A2E  13304 	C$easyax5043.c$2028$1$396 ==.
                          13305 ;	..\COMMON\easyax5043.c:2028: }
   3263                   13306 00162$:
                    2A2E  13307 	C$easyax5043.c$2029$1$396 ==.
                    2A2E  13308 	XG$axradio_transmit$0$0 ==.
   3263 22                13309 	ret
                          13310 ;------------------------------------------------------------
                          13311 ;Allocation info for local variables in function 'axradio_set_paramsets'
                          13312 ;------------------------------------------------------------
                          13313 ;val                       Allocated to registers r7 
                          13314 ;------------------------------------------------------------
                    2A2F  13315 	Feasyax5043$axradio_set_paramsets$0$0 ==.
                    2A2F  13316 	C$easyax5043.c$2031$1$396 ==.
                          13317 ;	..\COMMON\easyax5043.c:2031: static __reentrantb uint8_t axradio_set_paramsets(uint8_t val) __reentrant
                          13318 ;	-----------------------------------------
                          13319 ;	 function axradio_set_paramsets
                          13320 ;	-----------------------------------------
   3264                   13321 _axradio_set_paramsets:
   3264 AF 82             13322 	mov	r7,dpl
                    2A31  13323 	C$easyax5043.c$2033$1$407 ==.
                          13324 ;	..\COMMON\easyax5043.c:2033: if (axradio_mode != AXRADIO_MODE_STREAM_RECEIVE &&
   3266 74 1C             13325 	mov	a,#0x1C
   3268 B5 0A 02          13326 	cjne	a,_axradio_mode,00113$
   326B 80 13             13327 	sjmp	00102$
   326D                   13328 00113$:
                    2A38  13329 	C$easyax5043.c$2034$1$407 ==.
                          13330 ;	..\COMMON\easyax5043.c:2034: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_UNENC &&
   326D 74 1D             13331 	mov	a,#0x1D
   326F B5 0A 02          13332 	cjne	a,_axradio_mode,00114$
   3272 80 0C             13333 	sjmp	00102$
   3274                   13334 00114$:
                    2A3F  13335 	C$easyax5043.c$2035$1$407 ==.
                          13336 ;	..\COMMON\easyax5043.c:2035: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   3274 74 1E             13337 	mov	a,#0x1E
   3276 B5 0A 02          13338 	cjne	a,_axradio_mode,00115$
   3279 80 05             13339 	sjmp	00102$
   327B                   13340 00115$:
                    2A46  13341 	C$easyax5043.c$2036$1$407 ==.
                          13342 ;	..\COMMON\easyax5043.c:2036: return AXRADIO_ERR_NOTSUPPORTED;
   327B 75 82 01          13343 	mov	dpl,#0x01
   327E 80 08             13344 	sjmp	00105$
   3280                   13345 00102$:
                    2A4B  13346 	C$easyax5043.c$2037$1$407 ==.
                          13347 ;	..\COMMON\easyax5043.c:2037: AX5043_RXPARAMSETS = val;
   3280 90 41 17          13348 	mov	dptr,#_AX5043_RXPARAMSETS
   3283 EF                13349 	mov	a,r7
   3284 F0                13350 	movx	@dptr,a
                    2A50  13351 	C$easyax5043.c$2038$1$407 ==.
                          13352 ;	..\COMMON\easyax5043.c:2038: return AXRADIO_ERR_NOERROR;
   3285 75 82 00          13353 	mov	dpl,#0x00
   3288                   13354 00105$:
                    2A53  13355 	C$easyax5043.c$2039$1$407 ==.
                    2A53  13356 	XFeasyax5043$axradio_set_paramsets$0$0 ==.
   3288 22                13357 	ret
                          13358 ;------------------------------------------------------------
                          13359 ;Allocation info for local variables in function 'axradio_agc_freeze'
                          13360 ;------------------------------------------------------------
                    2A54  13361 	G$axradio_agc_freeze$0$0 ==.
                    2A54  13362 	C$easyax5043.c$2041$1$407 ==.
                          13363 ;	..\COMMON\easyax5043.c:2041: uint8_t axradio_agc_freeze(void)
                          13364 ;	-----------------------------------------
                          13365 ;	 function axradio_agc_freeze
                          13366 ;	-----------------------------------------
   3289                   13367 _axradio_agc_freeze:
                    2A54  13368 	C$easyax5043.c$2043$1$409 ==.
                          13369 ;	..\COMMON\easyax5043.c:2043: return axradio_set_paramsets(0xff);
   3289 75 82 FF          13370 	mov	dpl,#0xFF
   328C 12 32 64          13371 	lcall	_axradio_set_paramsets
                    2A5A  13372 	C$easyax5043.c$2044$1$409 ==.
                    2A5A  13373 	XG$axradio_agc_freeze$0$0 ==.
   328F 22                13374 	ret
                          13375 ;------------------------------------------------------------
                          13376 ;Allocation info for local variables in function 'axradio_agc_thaw'
                          13377 ;------------------------------------------------------------
                    2A5B  13378 	G$axradio_agc_thaw$0$0 ==.
                    2A5B  13379 	C$easyax5043.c$2046$1$409 ==.
                          13380 ;	..\COMMON\easyax5043.c:2046: uint8_t axradio_agc_thaw(void)
                          13381 ;	-----------------------------------------
                          13382 ;	 function axradio_agc_thaw
                          13383 ;	-----------------------------------------
   3290                   13384 _axradio_agc_thaw:
                    2A5B  13385 	C$easyax5043.c$2048$1$411 ==.
                          13386 ;	..\COMMON\easyax5043.c:2048: return axradio_set_paramsets(0x00);
   3290 75 82 00          13387 	mov	dpl,#0x00
   3293 12 32 64          13388 	lcall	_axradio_set_paramsets
                    2A61  13389 	C$easyax5043.c$2049$1$411 ==.
                    2A61  13390 	XG$axradio_agc_thaw$0$0 ==.
   3296 22                13391 	ret
                          13392 	.area CSEG    (CODE)
                          13393 	.area CONST   (CODE)
                    0000  13394 Feasyax5043$_str_0$0$0 == .
   5003                   13395 __str_0:
   5003 52 58             13396 	.ascii "RX"
   5005 0A                13397 	.db 0x0A
   5006 00                13398 	.db 0x00
                          13399 	.area XINIT   (CODE)
                    0000  13400 Feasyax5043$__xinit_f30_saved$0$0 == .
   532C                   13401 __xinit__f30_saved:
   532C 3F                13402 	.db #0x3F	; 63
                    0001  13403 Feasyax5043$__xinit_f31_saved$0$0 == .
   532D                   13404 __xinit__f31_saved:
   532D F0                13405 	.db #0xF0	; 240
                    0002  13406 Feasyax5043$__xinit_f32_saved$0$0 == .
   532E                   13407 __xinit__f32_saved:
   532E 3F                13408 	.db #0x3F	; 63
                    0003  13409 Feasyax5043$__xinit_f33_saved$0$0 == .
   532F                   13410 __xinit__f33_saved:
   532F F0                13411 	.db #0xF0	; 240
                          13412 	.area CABS    (ABS,CODE)
