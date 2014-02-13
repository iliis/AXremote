                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.3.0 #8604 (Sep  2 2013) (Linux)
                              4 ; This file was generated Thu Feb 13 19:16:50 2014
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
                     00E0  1144 G$ACC$0$0 == 0x00e0
                     00E0  1145 _ACC	=	0x00e0
                     00F0  1146 G$B$0$0 == 0x00f0
                     00F0  1147 _B	=	0x00f0
                     0083  1148 G$DPH$0$0 == 0x0083
                     0083  1149 _DPH	=	0x0083
                     0085  1150 G$DPH1$0$0 == 0x0085
                     0085  1151 _DPH1	=	0x0085
                     0082  1152 G$DPL$0$0 == 0x0082
                     0082  1153 _DPL	=	0x0082
                     0084  1154 G$DPL1$0$0 == 0x0084
                     0084  1155 _DPL1	=	0x0084
                     8382  1156 G$DPTR0$0$0 == 0x8382
                     8382  1157 _DPTR0	=	0x8382
                     8584  1158 G$DPTR1$0$0 == 0x8584
                     8584  1159 _DPTR1	=	0x8584
                     0086  1160 G$DPS$0$0 == 0x0086
                     0086  1161 _DPS	=	0x0086
                     00A0  1162 G$E2IE$0$0 == 0x00a0
                     00A0  1163 _E2IE	=	0x00a0
                     00C0  1164 G$E2IP$0$0 == 0x00c0
                     00C0  1165 _E2IP	=	0x00c0
                     0098  1166 G$EIE$0$0 == 0x0098
                     0098  1167 _EIE	=	0x0098
                     00B0  1168 G$EIP$0$0 == 0x00b0
                     00B0  1169 _EIP	=	0x00b0
                     00A8  1170 G$IE$0$0 == 0x00a8
                     00A8  1171 _IE	=	0x00a8
                     00B8  1172 G$IP$0$0 == 0x00b8
                     00B8  1173 _IP	=	0x00b8
                     0087  1174 G$PCON$0$0 == 0x0087
                     0087  1175 _PCON	=	0x0087
                     00D0  1176 G$PSW$0$0 == 0x00d0
                     00D0  1177 _PSW	=	0x00d0
                     0081  1178 G$SP$0$0 == 0x0081
                     0081  1179 _SP	=	0x0081
                     00D9  1180 G$XPAGE$0$0 == 0x00d9
                     00D9  1181 _XPAGE	=	0x00d9
                     00D9  1182 G$_XPAGE$0$0 == 0x00d9
                     00D9  1183 __XPAGE	=	0x00d9
                     00CA  1184 G$ADCCH0CONFIG$0$0 == 0x00ca
                     00CA  1185 _ADCCH0CONFIG	=	0x00ca
                     00CB  1186 G$ADCCH1CONFIG$0$0 == 0x00cb
                     00CB  1187 _ADCCH1CONFIG	=	0x00cb
                     00D2  1188 G$ADCCH2CONFIG$0$0 == 0x00d2
                     00D2  1189 _ADCCH2CONFIG	=	0x00d2
                     00D3  1190 G$ADCCH3CONFIG$0$0 == 0x00d3
                     00D3  1191 _ADCCH3CONFIG	=	0x00d3
                     00D1  1192 G$ADCCLKSRC$0$0 == 0x00d1
                     00D1  1193 _ADCCLKSRC	=	0x00d1
                     00C9  1194 G$ADCCONV$0$0 == 0x00c9
                     00C9  1195 _ADCCONV	=	0x00c9
                     00E1  1196 G$ANALOGCOMP$0$0 == 0x00e1
                     00E1  1197 _ANALOGCOMP	=	0x00e1
                     00C6  1198 G$CLKCON$0$0 == 0x00c6
                     00C6  1199 _CLKCON	=	0x00c6
                     00C7  1200 G$CLKSTAT$0$0 == 0x00c7
                     00C7  1201 _CLKSTAT	=	0x00c7
                     0097  1202 G$CODECONFIG$0$0 == 0x0097
                     0097  1203 _CODECONFIG	=	0x0097
                     00E3  1204 G$DBGLNKBUF$0$0 == 0x00e3
                     00E3  1205 _DBGLNKBUF	=	0x00e3
                     00E2  1206 G$DBGLNKSTAT$0$0 == 0x00e2
                     00E2  1207 _DBGLNKSTAT	=	0x00e2
                     0089  1208 G$DIRA$0$0 == 0x0089
                     0089  1209 _DIRA	=	0x0089
                     008A  1210 G$DIRB$0$0 == 0x008a
                     008A  1211 _DIRB	=	0x008a
                     008B  1212 G$DIRC$0$0 == 0x008b
                     008B  1213 _DIRC	=	0x008b
                     008E  1214 G$DIRR$0$0 == 0x008e
                     008E  1215 _DIRR	=	0x008e
                     00C8  1216 G$PINA$0$0 == 0x00c8
                     00C8  1217 _PINA	=	0x00c8
                     00E8  1218 G$PINB$0$0 == 0x00e8
                     00E8  1219 _PINB	=	0x00e8
                     00F8  1220 G$PINC$0$0 == 0x00f8
                     00F8  1221 _PINC	=	0x00f8
                     008D  1222 G$PINR$0$0 == 0x008d
                     008D  1223 _PINR	=	0x008d
                     0080  1224 G$PORTA$0$0 == 0x0080
                     0080  1225 _PORTA	=	0x0080
                     0088  1226 G$PORTB$0$0 == 0x0088
                     0088  1227 _PORTB	=	0x0088
                     0090  1228 G$PORTC$0$0 == 0x0090
                     0090  1229 _PORTC	=	0x0090
                     008C  1230 G$PORTR$0$0 == 0x008c
                     008C  1231 _PORTR	=	0x008c
                     00CE  1232 G$IC0CAPT0$0$0 == 0x00ce
                     00CE  1233 _IC0CAPT0	=	0x00ce
                     00CF  1234 G$IC0CAPT1$0$0 == 0x00cf
                     00CF  1235 _IC0CAPT1	=	0x00cf
                     CFCE  1236 G$IC0CAPT$0$0 == 0xcfce
                     CFCE  1237 _IC0CAPT	=	0xcfce
                     00CC  1238 G$IC0MODE$0$0 == 0x00cc
                     00CC  1239 _IC0MODE	=	0x00cc
                     00CD  1240 G$IC0STATUS$0$0 == 0x00cd
                     00CD  1241 _IC0STATUS	=	0x00cd
                     00D6  1242 G$IC1CAPT0$0$0 == 0x00d6
                     00D6  1243 _IC1CAPT0	=	0x00d6
                     00D7  1244 G$IC1CAPT1$0$0 == 0x00d7
                     00D7  1245 _IC1CAPT1	=	0x00d7
                     D7D6  1246 G$IC1CAPT$0$0 == 0xd7d6
                     D7D6  1247 _IC1CAPT	=	0xd7d6
                     00D4  1248 G$IC1MODE$0$0 == 0x00d4
                     00D4  1249 _IC1MODE	=	0x00d4
                     00D5  1250 G$IC1STATUS$0$0 == 0x00d5
                     00D5  1251 _IC1STATUS	=	0x00d5
                     0092  1252 G$NVADDR0$0$0 == 0x0092
                     0092  1253 _NVADDR0	=	0x0092
                     0093  1254 G$NVADDR1$0$0 == 0x0093
                     0093  1255 _NVADDR1	=	0x0093
                     9392  1256 G$NVADDR$0$0 == 0x9392
                     9392  1257 _NVADDR	=	0x9392
                     0094  1258 G$NVDATA0$0$0 == 0x0094
                     0094  1259 _NVDATA0	=	0x0094
                     0095  1260 G$NVDATA1$0$0 == 0x0095
                     0095  1261 _NVDATA1	=	0x0095
                     9594  1262 G$NVDATA$0$0 == 0x9594
                     9594  1263 _NVDATA	=	0x9594
                     0096  1264 G$NVKEY$0$0 == 0x0096
                     0096  1265 _NVKEY	=	0x0096
                     0091  1266 G$NVSTATUS$0$0 == 0x0091
                     0091  1267 _NVSTATUS	=	0x0091
                     00BC  1268 G$OC0COMP0$0$0 == 0x00bc
                     00BC  1269 _OC0COMP0	=	0x00bc
                     00BD  1270 G$OC0COMP1$0$0 == 0x00bd
                     00BD  1271 _OC0COMP1	=	0x00bd
                     BDBC  1272 G$OC0COMP$0$0 == 0xbdbc
                     BDBC  1273 _OC0COMP	=	0xbdbc
                     00B9  1274 G$OC0MODE$0$0 == 0x00b9
                     00B9  1275 _OC0MODE	=	0x00b9
                     00BA  1276 G$OC0PIN$0$0 == 0x00ba
                     00BA  1277 _OC0PIN	=	0x00ba
                     00BB  1278 G$OC0STATUS$0$0 == 0x00bb
                     00BB  1279 _OC0STATUS	=	0x00bb
                     00C4  1280 G$OC1COMP0$0$0 == 0x00c4
                     00C4  1281 _OC1COMP0	=	0x00c4
                     00C5  1282 G$OC1COMP1$0$0 == 0x00c5
                     00C5  1283 _OC1COMP1	=	0x00c5
                     C5C4  1284 G$OC1COMP$0$0 == 0xc5c4
                     C5C4  1285 _OC1COMP	=	0xc5c4
                     00C1  1286 G$OC1MODE$0$0 == 0x00c1
                     00C1  1287 _OC1MODE	=	0x00c1
                     00C2  1288 G$OC1PIN$0$0 == 0x00c2
                     00C2  1289 _OC1PIN	=	0x00c2
                     00C3  1290 G$OC1STATUS$0$0 == 0x00c3
                     00C3  1291 _OC1STATUS	=	0x00c3
                     00B1  1292 G$RADIOACC$0$0 == 0x00b1
                     00B1  1293 _RADIOACC	=	0x00b1
                     00B3  1294 G$RADIOADDR0$0$0 == 0x00b3
                     00B3  1295 _RADIOADDR0	=	0x00b3
                     00B2  1296 G$RADIOADDR1$0$0 == 0x00b2
                     00B2  1297 _RADIOADDR1	=	0x00b2
                     B2B3  1298 G$RADIOADDR$0$0 == 0xb2b3
                     B2B3  1299 _RADIOADDR	=	0xb2b3
                     00B7  1300 G$RADIODATA0$0$0 == 0x00b7
                     00B7  1301 _RADIODATA0	=	0x00b7
                     00B6  1302 G$RADIODATA1$0$0 == 0x00b6
                     00B6  1303 _RADIODATA1	=	0x00b6
                     00B5  1304 G$RADIODATA2$0$0 == 0x00b5
                     00B5  1305 _RADIODATA2	=	0x00b5
                     00B4  1306 G$RADIODATA3$0$0 == 0x00b4
                     00B4  1307 _RADIODATA3	=	0x00b4
                     B4B5B6B7  1308 G$RADIODATA$0$0 == 0xb4b5b6b7
                     B4B5B6B7  1309 _RADIODATA	=	0xb4b5b6b7
                     00BE  1310 G$RADIOSTAT0$0$0 == 0x00be
                     00BE  1311 _RADIOSTAT0	=	0x00be
                     00BF  1312 G$RADIOSTAT1$0$0 == 0x00bf
                     00BF  1313 _RADIOSTAT1	=	0x00bf
                     BFBE  1314 G$RADIOSTAT$0$0 == 0xbfbe
                     BFBE  1315 _RADIOSTAT	=	0xbfbe
                     00DF  1316 G$SPCLKSRC$0$0 == 0x00df
                     00DF  1317 _SPCLKSRC	=	0x00df
                     00DC  1318 G$SPMODE$0$0 == 0x00dc
                     00DC  1319 _SPMODE	=	0x00dc
                     00DE  1320 G$SPSHREG$0$0 == 0x00de
                     00DE  1321 _SPSHREG	=	0x00de
                     00DD  1322 G$SPSTATUS$0$0 == 0x00dd
                     00DD  1323 _SPSTATUS	=	0x00dd
                     009A  1324 G$T0CLKSRC$0$0 == 0x009a
                     009A  1325 _T0CLKSRC	=	0x009a
                     009C  1326 G$T0CNT0$0$0 == 0x009c
                     009C  1327 _T0CNT0	=	0x009c
                     009D  1328 G$T0CNT1$0$0 == 0x009d
                     009D  1329 _T0CNT1	=	0x009d
                     9D9C  1330 G$T0CNT$0$0 == 0x9d9c
                     9D9C  1331 _T0CNT	=	0x9d9c
                     0099  1332 G$T0MODE$0$0 == 0x0099
                     0099  1333 _T0MODE	=	0x0099
                     009E  1334 G$T0PERIOD0$0$0 == 0x009e
                     009E  1335 _T0PERIOD0	=	0x009e
                     009F  1336 G$T0PERIOD1$0$0 == 0x009f
                     009F  1337 _T0PERIOD1	=	0x009f
                     9F9E  1338 G$T0PERIOD$0$0 == 0x9f9e
                     9F9E  1339 _T0PERIOD	=	0x9f9e
                     009B  1340 G$T0STATUS$0$0 == 0x009b
                     009B  1341 _T0STATUS	=	0x009b
                     00A2  1342 G$T1CLKSRC$0$0 == 0x00a2
                     00A2  1343 _T1CLKSRC	=	0x00a2
                     00A4  1344 G$T1CNT0$0$0 == 0x00a4
                     00A4  1345 _T1CNT0	=	0x00a4
                     00A5  1346 G$T1CNT1$0$0 == 0x00a5
                     00A5  1347 _T1CNT1	=	0x00a5
                     A5A4  1348 G$T1CNT$0$0 == 0xa5a4
                     A5A4  1349 _T1CNT	=	0xa5a4
                     00A1  1350 G$T1MODE$0$0 == 0x00a1
                     00A1  1351 _T1MODE	=	0x00a1
                     00A6  1352 G$T1PERIOD0$0$0 == 0x00a6
                     00A6  1353 _T1PERIOD0	=	0x00a6
                     00A7  1354 G$T1PERIOD1$0$0 == 0x00a7
                     00A7  1355 _T1PERIOD1	=	0x00a7
                     A7A6  1356 G$T1PERIOD$0$0 == 0xa7a6
                     A7A6  1357 _T1PERIOD	=	0xa7a6
                     00A3  1358 G$T1STATUS$0$0 == 0x00a3
                     00A3  1359 _T1STATUS	=	0x00a3
                     00AA  1360 G$T2CLKSRC$0$0 == 0x00aa
                     00AA  1361 _T2CLKSRC	=	0x00aa
                     00AC  1362 G$T2CNT0$0$0 == 0x00ac
                     00AC  1363 _T2CNT0	=	0x00ac
                     00AD  1364 G$T2CNT1$0$0 == 0x00ad
                     00AD  1365 _T2CNT1	=	0x00ad
                     ADAC  1366 G$T2CNT$0$0 == 0xadac
                     ADAC  1367 _T2CNT	=	0xadac
                     00A9  1368 G$T2MODE$0$0 == 0x00a9
                     00A9  1369 _T2MODE	=	0x00a9
                     00AE  1370 G$T2PERIOD0$0$0 == 0x00ae
                     00AE  1371 _T2PERIOD0	=	0x00ae
                     00AF  1372 G$T2PERIOD1$0$0 == 0x00af
                     00AF  1373 _T2PERIOD1	=	0x00af
                     AFAE  1374 G$T2PERIOD$0$0 == 0xafae
                     AFAE  1375 _T2PERIOD	=	0xafae
                     00AB  1376 G$T2STATUS$0$0 == 0x00ab
                     00AB  1377 _T2STATUS	=	0x00ab
                     00E4  1378 G$U0CTRL$0$0 == 0x00e4
                     00E4  1379 _U0CTRL	=	0x00e4
                     00E7  1380 G$U0MODE$0$0 == 0x00e7
                     00E7  1381 _U0MODE	=	0x00e7
                     00E6  1382 G$U0SHREG$0$0 == 0x00e6
                     00E6  1383 _U0SHREG	=	0x00e6
                     00E5  1384 G$U0STATUS$0$0 == 0x00e5
                     00E5  1385 _U0STATUS	=	0x00e5
                     00EC  1386 G$U1CTRL$0$0 == 0x00ec
                     00EC  1387 _U1CTRL	=	0x00ec
                     00EF  1388 G$U1MODE$0$0 == 0x00ef
                     00EF  1389 _U1MODE	=	0x00ef
                     00EE  1390 G$U1SHREG$0$0 == 0x00ee
                     00EE  1391 _U1SHREG	=	0x00ee
                     00ED  1392 G$U1STATUS$0$0 == 0x00ed
                     00ED  1393 _U1STATUS	=	0x00ed
                     00DA  1394 G$WDTCFG$0$0 == 0x00da
                     00DA  1395 _WDTCFG	=	0x00da
                     00DB  1396 G$WDTRESET$0$0 == 0x00db
                     00DB  1397 _WDTRESET	=	0x00db
                     00F1  1398 G$WTCFGA$0$0 == 0x00f1
                     00F1  1399 _WTCFGA	=	0x00f1
                     00F9  1400 G$WTCFGB$0$0 == 0x00f9
                     00F9  1401 _WTCFGB	=	0x00f9
                     00F2  1402 G$WTCNTA0$0$0 == 0x00f2
                     00F2  1403 _WTCNTA0	=	0x00f2
                     00F3  1404 G$WTCNTA1$0$0 == 0x00f3
                     00F3  1405 _WTCNTA1	=	0x00f3
                     F3F2  1406 G$WTCNTA$0$0 == 0xf3f2
                     F3F2  1407 _WTCNTA	=	0xf3f2
                     00FA  1408 G$WTCNTB0$0$0 == 0x00fa
                     00FA  1409 _WTCNTB0	=	0x00fa
                     00FB  1410 G$WTCNTB1$0$0 == 0x00fb
                     00FB  1411 _WTCNTB1	=	0x00fb
                     FBFA  1412 G$WTCNTB$0$0 == 0xfbfa
                     FBFA  1413 _WTCNTB	=	0xfbfa
                     00EB  1414 G$WTCNTR1$0$0 == 0x00eb
                     00EB  1415 _WTCNTR1	=	0x00eb
                     00F4  1416 G$WTEVTA0$0$0 == 0x00f4
                     00F4  1417 _WTEVTA0	=	0x00f4
                     00F5  1418 G$WTEVTA1$0$0 == 0x00f5
                     00F5  1419 _WTEVTA1	=	0x00f5
                     F5F4  1420 G$WTEVTA$0$0 == 0xf5f4
                     F5F4  1421 _WTEVTA	=	0xf5f4
                     00F6  1422 G$WTEVTB0$0$0 == 0x00f6
                     00F6  1423 _WTEVTB0	=	0x00f6
                     00F7  1424 G$WTEVTB1$0$0 == 0x00f7
                     00F7  1425 _WTEVTB1	=	0x00f7
                     F7F6  1426 G$WTEVTB$0$0 == 0xf7f6
                     F7F6  1427 _WTEVTB	=	0xf7f6
                     00FC  1428 G$WTEVTC0$0$0 == 0x00fc
                     00FC  1429 _WTEVTC0	=	0x00fc
                     00FD  1430 G$WTEVTC1$0$0 == 0x00fd
                     00FD  1431 _WTEVTC1	=	0x00fd
                     FDFC  1432 G$WTEVTC$0$0 == 0xfdfc
                     FDFC  1433 _WTEVTC	=	0xfdfc
                     00FE  1434 G$WTEVTD0$0$0 == 0x00fe
                     00FE  1435 _WTEVTD0	=	0x00fe
                     00FF  1436 G$WTEVTD1$0$0 == 0x00ff
                     00FF  1437 _WTEVTD1	=	0x00ff
                     FFFE  1438 G$WTEVTD$0$0 == 0xfffe
                     FFFE  1439 _WTEVTD	=	0xfffe
                     00E9  1440 G$WTIRQEN$0$0 == 0x00e9
                     00E9  1441 _WTIRQEN	=	0x00e9
                     00EA  1442 G$WTSTAT$0$0 == 0x00ea
                     00EA  1443 _WTSTAT	=	0x00ea
                           1444 ;--------------------------------------------------------
                           1445 ; special function bits
                           1446 ;--------------------------------------------------------
                           1447 	.area RSEG    (ABS,DATA)
   0000                    1448 	.org 0x0000
                     00E0  1449 G$ACC_0$0$0 == 0x00e0
                     00E0  1450 _ACC_0	=	0x00e0
                     00E1  1451 G$ACC_1$0$0 == 0x00e1
                     00E1  1452 _ACC_1	=	0x00e1
                     00E2  1453 G$ACC_2$0$0 == 0x00e2
                     00E2  1454 _ACC_2	=	0x00e2
                     00E3  1455 G$ACC_3$0$0 == 0x00e3
                     00E3  1456 _ACC_3	=	0x00e3
                     00E4  1457 G$ACC_4$0$0 == 0x00e4
                     00E4  1458 _ACC_4	=	0x00e4
                     00E5  1459 G$ACC_5$0$0 == 0x00e5
                     00E5  1460 _ACC_5	=	0x00e5
                     00E6  1461 G$ACC_6$0$0 == 0x00e6
                     00E6  1462 _ACC_6	=	0x00e6
                     00E7  1463 G$ACC_7$0$0 == 0x00e7
                     00E7  1464 _ACC_7	=	0x00e7
                     00F0  1465 G$B_0$0$0 == 0x00f0
                     00F0  1466 _B_0	=	0x00f0
                     00F1  1467 G$B_1$0$0 == 0x00f1
                     00F1  1468 _B_1	=	0x00f1
                     00F2  1469 G$B_2$0$0 == 0x00f2
                     00F2  1470 _B_2	=	0x00f2
                     00F3  1471 G$B_3$0$0 == 0x00f3
                     00F3  1472 _B_3	=	0x00f3
                     00F4  1473 G$B_4$0$0 == 0x00f4
                     00F4  1474 _B_4	=	0x00f4
                     00F5  1475 G$B_5$0$0 == 0x00f5
                     00F5  1476 _B_5	=	0x00f5
                     00F6  1477 G$B_6$0$0 == 0x00f6
                     00F6  1478 _B_6	=	0x00f6
                     00F7  1479 G$B_7$0$0 == 0x00f7
                     00F7  1480 _B_7	=	0x00f7
                     00A0  1481 G$E2IE_0$0$0 == 0x00a0
                     00A0  1482 _E2IE_0	=	0x00a0
                     00A1  1483 G$E2IE_1$0$0 == 0x00a1
                     00A1  1484 _E2IE_1	=	0x00a1
                     00A2  1485 G$E2IE_2$0$0 == 0x00a2
                     00A2  1486 _E2IE_2	=	0x00a2
                     00A3  1487 G$E2IE_3$0$0 == 0x00a3
                     00A3  1488 _E2IE_3	=	0x00a3
                     00A4  1489 G$E2IE_4$0$0 == 0x00a4
                     00A4  1490 _E2IE_4	=	0x00a4
                     00A5  1491 G$E2IE_5$0$0 == 0x00a5
                     00A5  1492 _E2IE_5	=	0x00a5
                     00A6  1493 G$E2IE_6$0$0 == 0x00a6
                     00A6  1494 _E2IE_6	=	0x00a6
                     00A7  1495 G$E2IE_7$0$0 == 0x00a7
                     00A7  1496 _E2IE_7	=	0x00a7
                     00C0  1497 G$E2IP_0$0$0 == 0x00c0
                     00C0  1498 _E2IP_0	=	0x00c0
                     00C1  1499 G$E2IP_1$0$0 == 0x00c1
                     00C1  1500 _E2IP_1	=	0x00c1
                     00C2  1501 G$E2IP_2$0$0 == 0x00c2
                     00C2  1502 _E2IP_2	=	0x00c2
                     00C3  1503 G$E2IP_3$0$0 == 0x00c3
                     00C3  1504 _E2IP_3	=	0x00c3
                     00C4  1505 G$E2IP_4$0$0 == 0x00c4
                     00C4  1506 _E2IP_4	=	0x00c4
                     00C5  1507 G$E2IP_5$0$0 == 0x00c5
                     00C5  1508 _E2IP_5	=	0x00c5
                     00C6  1509 G$E2IP_6$0$0 == 0x00c6
                     00C6  1510 _E2IP_6	=	0x00c6
                     00C7  1511 G$E2IP_7$0$0 == 0x00c7
                     00C7  1512 _E2IP_7	=	0x00c7
                     0098  1513 G$EIE_0$0$0 == 0x0098
                     0098  1514 _EIE_0	=	0x0098
                     0099  1515 G$EIE_1$0$0 == 0x0099
                     0099  1516 _EIE_1	=	0x0099
                     009A  1517 G$EIE_2$0$0 == 0x009a
                     009A  1518 _EIE_2	=	0x009a
                     009B  1519 G$EIE_3$0$0 == 0x009b
                     009B  1520 _EIE_3	=	0x009b
                     009C  1521 G$EIE_4$0$0 == 0x009c
                     009C  1522 _EIE_4	=	0x009c
                     009D  1523 G$EIE_5$0$0 == 0x009d
                     009D  1524 _EIE_5	=	0x009d
                     009E  1525 G$EIE_6$0$0 == 0x009e
                     009E  1526 _EIE_6	=	0x009e
                     009F  1527 G$EIE_7$0$0 == 0x009f
                     009F  1528 _EIE_7	=	0x009f
                     00B0  1529 G$EIP_0$0$0 == 0x00b0
                     00B0  1530 _EIP_0	=	0x00b0
                     00B1  1531 G$EIP_1$0$0 == 0x00b1
                     00B1  1532 _EIP_1	=	0x00b1
                     00B2  1533 G$EIP_2$0$0 == 0x00b2
                     00B2  1534 _EIP_2	=	0x00b2
                     00B3  1535 G$EIP_3$0$0 == 0x00b3
                     00B3  1536 _EIP_3	=	0x00b3
                     00B4  1537 G$EIP_4$0$0 == 0x00b4
                     00B4  1538 _EIP_4	=	0x00b4
                     00B5  1539 G$EIP_5$0$0 == 0x00b5
                     00B5  1540 _EIP_5	=	0x00b5
                     00B6  1541 G$EIP_6$0$0 == 0x00b6
                     00B6  1542 _EIP_6	=	0x00b6
                     00B7  1543 G$EIP_7$0$0 == 0x00b7
                     00B7  1544 _EIP_7	=	0x00b7
                     00A8  1545 G$IE_0$0$0 == 0x00a8
                     00A8  1546 _IE_0	=	0x00a8
                     00A9  1547 G$IE_1$0$0 == 0x00a9
                     00A9  1548 _IE_1	=	0x00a9
                     00AA  1549 G$IE_2$0$0 == 0x00aa
                     00AA  1550 _IE_2	=	0x00aa
                     00AB  1551 G$IE_3$0$0 == 0x00ab
                     00AB  1552 _IE_3	=	0x00ab
                     00AC  1553 G$IE_4$0$0 == 0x00ac
                     00AC  1554 _IE_4	=	0x00ac
                     00AD  1555 G$IE_5$0$0 == 0x00ad
                     00AD  1556 _IE_5	=	0x00ad
                     00AE  1557 G$IE_6$0$0 == 0x00ae
                     00AE  1558 _IE_6	=	0x00ae
                     00AF  1559 G$IE_7$0$0 == 0x00af
                     00AF  1560 _IE_7	=	0x00af
                     00AF  1561 G$EA$0$0 == 0x00af
                     00AF  1562 _EA	=	0x00af
                     00B8  1563 G$IP_0$0$0 == 0x00b8
                     00B8  1564 _IP_0	=	0x00b8
                     00B9  1565 G$IP_1$0$0 == 0x00b9
                     00B9  1566 _IP_1	=	0x00b9
                     00BA  1567 G$IP_2$0$0 == 0x00ba
                     00BA  1568 _IP_2	=	0x00ba
                     00BB  1569 G$IP_3$0$0 == 0x00bb
                     00BB  1570 _IP_3	=	0x00bb
                     00BC  1571 G$IP_4$0$0 == 0x00bc
                     00BC  1572 _IP_4	=	0x00bc
                     00BD  1573 G$IP_5$0$0 == 0x00bd
                     00BD  1574 _IP_5	=	0x00bd
                     00BE  1575 G$IP_6$0$0 == 0x00be
                     00BE  1576 _IP_6	=	0x00be
                     00BF  1577 G$IP_7$0$0 == 0x00bf
                     00BF  1578 _IP_7	=	0x00bf
                     00D0  1579 G$P$0$0 == 0x00d0
                     00D0  1580 _P	=	0x00d0
                     00D1  1581 G$F1$0$0 == 0x00d1
                     00D1  1582 _F1	=	0x00d1
                     00D2  1583 G$OV$0$0 == 0x00d2
                     00D2  1584 _OV	=	0x00d2
                     00D3  1585 G$RS0$0$0 == 0x00d3
                     00D3  1586 _RS0	=	0x00d3
                     00D4  1587 G$RS1$0$0 == 0x00d4
                     00D4  1588 _RS1	=	0x00d4
                     00D5  1589 G$F0$0$0 == 0x00d5
                     00D5  1590 _F0	=	0x00d5
                     00D6  1591 G$AC$0$0 == 0x00d6
                     00D6  1592 _AC	=	0x00d6
                     00D7  1593 G$CY$0$0 == 0x00d7
                     00D7  1594 _CY	=	0x00d7
                     00C8  1595 G$PINA_0$0$0 == 0x00c8
                     00C8  1596 _PINA_0	=	0x00c8
                     00C9  1597 G$PINA_1$0$0 == 0x00c9
                     00C9  1598 _PINA_1	=	0x00c9
                     00CA  1599 G$PINA_2$0$0 == 0x00ca
                     00CA  1600 _PINA_2	=	0x00ca
                     00CB  1601 G$PINA_3$0$0 == 0x00cb
                     00CB  1602 _PINA_3	=	0x00cb
                     00CC  1603 G$PINA_4$0$0 == 0x00cc
                     00CC  1604 _PINA_4	=	0x00cc
                     00CD  1605 G$PINA_5$0$0 == 0x00cd
                     00CD  1606 _PINA_5	=	0x00cd
                     00CE  1607 G$PINA_6$0$0 == 0x00ce
                     00CE  1608 _PINA_6	=	0x00ce
                     00CF  1609 G$PINA_7$0$0 == 0x00cf
                     00CF  1610 _PINA_7	=	0x00cf
                     00E8  1611 G$PINB_0$0$0 == 0x00e8
                     00E8  1612 _PINB_0	=	0x00e8
                     00E9  1613 G$PINB_1$0$0 == 0x00e9
                     00E9  1614 _PINB_1	=	0x00e9
                     00EA  1615 G$PINB_2$0$0 == 0x00ea
                     00EA  1616 _PINB_2	=	0x00ea
                     00EB  1617 G$PINB_3$0$0 == 0x00eb
                     00EB  1618 _PINB_3	=	0x00eb
                     00EC  1619 G$PINB_4$0$0 == 0x00ec
                     00EC  1620 _PINB_4	=	0x00ec
                     00ED  1621 G$PINB_5$0$0 == 0x00ed
                     00ED  1622 _PINB_5	=	0x00ed
                     00EE  1623 G$PINB_6$0$0 == 0x00ee
                     00EE  1624 _PINB_6	=	0x00ee
                     00EF  1625 G$PINB_7$0$0 == 0x00ef
                     00EF  1626 _PINB_7	=	0x00ef
                     00F8  1627 G$PINC_0$0$0 == 0x00f8
                     00F8  1628 _PINC_0	=	0x00f8
                     00F9  1629 G$PINC_1$0$0 == 0x00f9
                     00F9  1630 _PINC_1	=	0x00f9
                     00FA  1631 G$PINC_2$0$0 == 0x00fa
                     00FA  1632 _PINC_2	=	0x00fa
                     00FB  1633 G$PINC_3$0$0 == 0x00fb
                     00FB  1634 _PINC_3	=	0x00fb
                     00FC  1635 G$PINC_4$0$0 == 0x00fc
                     00FC  1636 _PINC_4	=	0x00fc
                     00FD  1637 G$PINC_5$0$0 == 0x00fd
                     00FD  1638 _PINC_5	=	0x00fd
                     00FE  1639 G$PINC_6$0$0 == 0x00fe
                     00FE  1640 _PINC_6	=	0x00fe
                     00FF  1641 G$PINC_7$0$0 == 0x00ff
                     00FF  1642 _PINC_7	=	0x00ff
                     0080  1643 G$PORTA_0$0$0 == 0x0080
                     0080  1644 _PORTA_0	=	0x0080
                     0081  1645 G$PORTA_1$0$0 == 0x0081
                     0081  1646 _PORTA_1	=	0x0081
                     0082  1647 G$PORTA_2$0$0 == 0x0082
                     0082  1648 _PORTA_2	=	0x0082
                     0083  1649 G$PORTA_3$0$0 == 0x0083
                     0083  1650 _PORTA_3	=	0x0083
                     0084  1651 G$PORTA_4$0$0 == 0x0084
                     0084  1652 _PORTA_4	=	0x0084
                     0085  1653 G$PORTA_5$0$0 == 0x0085
                     0085  1654 _PORTA_5	=	0x0085
                     0086  1655 G$PORTA_6$0$0 == 0x0086
                     0086  1656 _PORTA_6	=	0x0086
                     0087  1657 G$PORTA_7$0$0 == 0x0087
                     0087  1658 _PORTA_7	=	0x0087
                     0088  1659 G$PORTB_0$0$0 == 0x0088
                     0088  1660 _PORTB_0	=	0x0088
                     0089  1661 G$PORTB_1$0$0 == 0x0089
                     0089  1662 _PORTB_1	=	0x0089
                     008A  1663 G$PORTB_2$0$0 == 0x008a
                     008A  1664 _PORTB_2	=	0x008a
                     008B  1665 G$PORTB_3$0$0 == 0x008b
                     008B  1666 _PORTB_3	=	0x008b
                     008C  1667 G$PORTB_4$0$0 == 0x008c
                     008C  1668 _PORTB_4	=	0x008c
                     008D  1669 G$PORTB_5$0$0 == 0x008d
                     008D  1670 _PORTB_5	=	0x008d
                     008E  1671 G$PORTB_6$0$0 == 0x008e
                     008E  1672 _PORTB_6	=	0x008e
                     008F  1673 G$PORTB_7$0$0 == 0x008f
                     008F  1674 _PORTB_7	=	0x008f
                     0090  1675 G$PORTC_0$0$0 == 0x0090
                     0090  1676 _PORTC_0	=	0x0090
                     0091  1677 G$PORTC_1$0$0 == 0x0091
                     0091  1678 _PORTC_1	=	0x0091
                     0092  1679 G$PORTC_2$0$0 == 0x0092
                     0092  1680 _PORTC_2	=	0x0092
                     0093  1681 G$PORTC_3$0$0 == 0x0093
                     0093  1682 _PORTC_3	=	0x0093
                     0094  1683 G$PORTC_4$0$0 == 0x0094
                     0094  1684 _PORTC_4	=	0x0094
                     0095  1685 G$PORTC_5$0$0 == 0x0095
                     0095  1686 _PORTC_5	=	0x0095
                     0096  1687 G$PORTC_6$0$0 == 0x0096
                     0096  1688 _PORTC_6	=	0x0096
                     0097  1689 G$PORTC_7$0$0 == 0x0097
                     0097  1690 _PORTC_7	=	0x0097
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
                     8000  1702 	b0 = bits[0]
                     8100  1703 	b1 = bits[1]
                     8200  1704 	b2 = bits[2]
                     8300  1705 	b3 = bits[3]
                     8400  1706 	b4 = bits[4]
                     8500  1707 	b5 = bits[5]
                     8600  1708 	b6 = bits[6]
                     8700  1709 	b7 = bits[7]
                           1710 ;--------------------------------------------------------
                           1711 ; internal ram data
                           1712 ;--------------------------------------------------------
                           1713 	.area DSEG    (DATA)
                     0000  1714 G$axradio_mode$0$0==.
   000A                    1715 _axradio_mode::
   000A                    1716 	.ds 1
                     0001  1717 G$axradio_trxstate$0$0==.
   000B                    1718 _axradio_trxstate::
   000B                    1719 	.ds 1
                     0002  1720 Leasyax5043.axradio_transmit$pkt$1$395==.
   000C                    1721 _axradio_transmit_PARM_2:
   000C                    1722 	.ds 3
                     0005  1723 Leasyax5043.axradio_transmit$pktlen$1$395==.
   000F                    1724 _axradio_transmit_PARM_3:
   000F                    1725 	.ds 2
                           1726 ;--------------------------------------------------------
                           1727 ; overlayable items in internal ram 
                           1728 ;--------------------------------------------------------
                           1729 	.area	OSEG    (OVR,DATA)
                     0000  1730 Leasyax5043.axradio_set_channel$rng$1$370==.
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
                     7020  1754 G$ADCCH0VAL0$0$0 == 0x7020
                     7020  1755 _ADCCH0VAL0	=	0x7020
                     7021  1756 G$ADCCH0VAL1$0$0 == 0x7021
                     7021  1757 _ADCCH0VAL1	=	0x7021
                     7020  1758 G$ADCCH0VAL$0$0 == 0x7020
                     7020  1759 _ADCCH0VAL	=	0x7020
                     7022  1760 G$ADCCH1VAL0$0$0 == 0x7022
                     7022  1761 _ADCCH1VAL0	=	0x7022
                     7023  1762 G$ADCCH1VAL1$0$0 == 0x7023
                     7023  1763 _ADCCH1VAL1	=	0x7023
                     7022  1764 G$ADCCH1VAL$0$0 == 0x7022
                     7022  1765 _ADCCH1VAL	=	0x7022
                     7024  1766 G$ADCCH2VAL0$0$0 == 0x7024
                     7024  1767 _ADCCH2VAL0	=	0x7024
                     7025  1768 G$ADCCH2VAL1$0$0 == 0x7025
                     7025  1769 _ADCCH2VAL1	=	0x7025
                     7024  1770 G$ADCCH2VAL$0$0 == 0x7024
                     7024  1771 _ADCCH2VAL	=	0x7024
                     7026  1772 G$ADCCH3VAL0$0$0 == 0x7026
                     7026  1773 _ADCCH3VAL0	=	0x7026
                     7027  1774 G$ADCCH3VAL1$0$0 == 0x7027
                     7027  1775 _ADCCH3VAL1	=	0x7027
                     7026  1776 G$ADCCH3VAL$0$0 == 0x7026
                     7026  1777 _ADCCH3VAL	=	0x7026
                     7028  1778 G$ADCTUNE0$0$0 == 0x7028
                     7028  1779 _ADCTUNE0	=	0x7028
                     7029  1780 G$ADCTUNE1$0$0 == 0x7029
                     7029  1781 _ADCTUNE1	=	0x7029
                     702A  1782 G$ADCTUNE2$0$0 == 0x702a
                     702A  1783 _ADCTUNE2	=	0x702a
                     7010  1784 G$DMA0ADDR0$0$0 == 0x7010
                     7010  1785 _DMA0ADDR0	=	0x7010
                     7011  1786 G$DMA0ADDR1$0$0 == 0x7011
                     7011  1787 _DMA0ADDR1	=	0x7011
                     7010  1788 G$DMA0ADDR$0$0 == 0x7010
                     7010  1789 _DMA0ADDR	=	0x7010
                     7014  1790 G$DMA0CONFIG$0$0 == 0x7014
                     7014  1791 _DMA0CONFIG	=	0x7014
                     7012  1792 G$DMA1ADDR0$0$0 == 0x7012
                     7012  1793 _DMA1ADDR0	=	0x7012
                     7013  1794 G$DMA1ADDR1$0$0 == 0x7013
                     7013  1795 _DMA1ADDR1	=	0x7013
                     7012  1796 G$DMA1ADDR$0$0 == 0x7012
                     7012  1797 _DMA1ADDR	=	0x7012
                     7015  1798 G$DMA1CONFIG$0$0 == 0x7015
                     7015  1799 _DMA1CONFIG	=	0x7015
                     7070  1800 G$FRCOSCCONFIG$0$0 == 0x7070
                     7070  1801 _FRCOSCCONFIG	=	0x7070
                     7071  1802 G$FRCOSCCTRL$0$0 == 0x7071
                     7071  1803 _FRCOSCCTRL	=	0x7071
                     7076  1804 G$FRCOSCFREQ0$0$0 == 0x7076
                     7076  1805 _FRCOSCFREQ0	=	0x7076
                     7077  1806 G$FRCOSCFREQ1$0$0 == 0x7077
                     7077  1807 _FRCOSCFREQ1	=	0x7077
                     7076  1808 G$FRCOSCFREQ$0$0 == 0x7076
                     7076  1809 _FRCOSCFREQ	=	0x7076
                     7072  1810 G$FRCOSCKFILT0$0$0 == 0x7072
                     7072  1811 _FRCOSCKFILT0	=	0x7072
                     7073  1812 G$FRCOSCKFILT1$0$0 == 0x7073
                     7073  1813 _FRCOSCKFILT1	=	0x7073
                     7072  1814 G$FRCOSCKFILT$0$0 == 0x7072
                     7072  1815 _FRCOSCKFILT	=	0x7072
                     7078  1816 G$FRCOSCPER0$0$0 == 0x7078
                     7078  1817 _FRCOSCPER0	=	0x7078
                     7079  1818 G$FRCOSCPER1$0$0 == 0x7079
                     7079  1819 _FRCOSCPER1	=	0x7079
                     7078  1820 G$FRCOSCPER$0$0 == 0x7078
                     7078  1821 _FRCOSCPER	=	0x7078
                     7074  1822 G$FRCOSCREF0$0$0 == 0x7074
                     7074  1823 _FRCOSCREF0	=	0x7074
                     7075  1824 G$FRCOSCREF1$0$0 == 0x7075
                     7075  1825 _FRCOSCREF1	=	0x7075
                     7074  1826 G$FRCOSCREF$0$0 == 0x7074
                     7074  1827 _FRCOSCREF	=	0x7074
                     7007  1828 G$ANALOGA$0$0 == 0x7007
                     7007  1829 _ANALOGA	=	0x7007
                     700C  1830 G$GPIOENABLE$0$0 == 0x700c
                     700C  1831 _GPIOENABLE	=	0x700c
                     7003  1832 G$EXTIRQ$0$0 == 0x7003
                     7003  1833 _EXTIRQ	=	0x7003
                     7000  1834 G$INTCHGA$0$0 == 0x7000
                     7000  1835 _INTCHGA	=	0x7000
                     7001  1836 G$INTCHGB$0$0 == 0x7001
                     7001  1837 _INTCHGB	=	0x7001
                     7002  1838 G$INTCHGC$0$0 == 0x7002
                     7002  1839 _INTCHGC	=	0x7002
                     7008  1840 G$PALTA$0$0 == 0x7008
                     7008  1841 _PALTA	=	0x7008
                     7009  1842 G$PALTB$0$0 == 0x7009
                     7009  1843 _PALTB	=	0x7009
                     700A  1844 G$PALTC$0$0 == 0x700a
                     700A  1845 _PALTC	=	0x700a
                     7046  1846 G$PALTRADIO$0$0 == 0x7046
                     7046  1847 _PALTRADIO	=	0x7046
                     7004  1848 G$PINCHGA$0$0 == 0x7004
                     7004  1849 _PINCHGA	=	0x7004
                     7005  1850 G$PINCHGB$0$0 == 0x7005
                     7005  1851 _PINCHGB	=	0x7005
                     7006  1852 G$PINCHGC$0$0 == 0x7006
                     7006  1853 _PINCHGC	=	0x7006
                     700B  1854 G$PINSEL$0$0 == 0x700b
                     700B  1855 _PINSEL	=	0x700b
                     7060  1856 G$LPOSCCONFIG$0$0 == 0x7060
                     7060  1857 _LPOSCCONFIG	=	0x7060
                     7066  1858 G$LPOSCFREQ0$0$0 == 0x7066
                     7066  1859 _LPOSCFREQ0	=	0x7066
                     7067  1860 G$LPOSCFREQ1$0$0 == 0x7067
                     7067  1861 _LPOSCFREQ1	=	0x7067
                     7066  1862 G$LPOSCFREQ$0$0 == 0x7066
                     7066  1863 _LPOSCFREQ	=	0x7066
                     7062  1864 G$LPOSCKFILT0$0$0 == 0x7062
                     7062  1865 _LPOSCKFILT0	=	0x7062
                     7063  1866 G$LPOSCKFILT1$0$0 == 0x7063
                     7063  1867 _LPOSCKFILT1	=	0x7063
                     7062  1868 G$LPOSCKFILT$0$0 == 0x7062
                     7062  1869 _LPOSCKFILT	=	0x7062
                     7068  1870 G$LPOSCPER0$0$0 == 0x7068
                     7068  1871 _LPOSCPER0	=	0x7068
                     7069  1872 G$LPOSCPER1$0$0 == 0x7069
                     7069  1873 _LPOSCPER1	=	0x7069
                     7068  1874 G$LPOSCPER$0$0 == 0x7068
                     7068  1875 _LPOSCPER	=	0x7068
                     7064  1876 G$LPOSCREF0$0$0 == 0x7064
                     7064  1877 _LPOSCREF0	=	0x7064
                     7065  1878 G$LPOSCREF1$0$0 == 0x7065
                     7065  1879 _LPOSCREF1	=	0x7065
                     7064  1880 G$LPOSCREF$0$0 == 0x7064
                     7064  1881 _LPOSCREF	=	0x7064
                     7054  1882 G$LPXOSCGM$0$0 == 0x7054
                     7054  1883 _LPXOSCGM	=	0x7054
                     7F01  1884 G$MISCCTRL$0$0 == 0x7f01
                     7F01  1885 _MISCCTRL	=	0x7f01
                     7053  1886 G$OSCCALIB$0$0 == 0x7053
                     7053  1887 _OSCCALIB	=	0x7053
                     7050  1888 G$OSCFORCERUN$0$0 == 0x7050
                     7050  1889 _OSCFORCERUN	=	0x7050
                     7052  1890 G$OSCREADY$0$0 == 0x7052
                     7052  1891 _OSCREADY	=	0x7052
                     7051  1892 G$OSCRUN$0$0 == 0x7051
                     7051  1893 _OSCRUN	=	0x7051
                     7040  1894 G$RADIOFDATAADDR0$0$0 == 0x7040
                     7040  1895 _RADIOFDATAADDR0	=	0x7040
                     7041  1896 G$RADIOFDATAADDR1$0$0 == 0x7041
                     7041  1897 _RADIOFDATAADDR1	=	0x7041
                     7040  1898 G$RADIOFDATAADDR$0$0 == 0x7040
                     7040  1899 _RADIOFDATAADDR	=	0x7040
                     7042  1900 G$RADIOFSTATADDR0$0$0 == 0x7042
                     7042  1901 _RADIOFSTATADDR0	=	0x7042
                     7043  1902 G$RADIOFSTATADDR1$0$0 == 0x7043
                     7043  1903 _RADIOFSTATADDR1	=	0x7043
                     7042  1904 G$RADIOFSTATADDR$0$0 == 0x7042
                     7042  1905 _RADIOFSTATADDR	=	0x7042
                     7044  1906 G$RADIOMUX$0$0 == 0x7044
                     7044  1907 _RADIOMUX	=	0x7044
                     7084  1908 G$SCRATCH0$0$0 == 0x7084
                     7084  1909 _SCRATCH0	=	0x7084
                     7085  1910 G$SCRATCH1$0$0 == 0x7085
                     7085  1911 _SCRATCH1	=	0x7085
                     7086  1912 G$SCRATCH2$0$0 == 0x7086
                     7086  1913 _SCRATCH2	=	0x7086
                     7087  1914 G$SCRATCH3$0$0 == 0x7087
                     7087  1915 _SCRATCH3	=	0x7087
                     7F00  1916 G$SILICONREV$0$0 == 0x7f00
                     7F00  1917 _SILICONREV	=	0x7f00
                     7F19  1918 G$XTALAMPL$0$0 == 0x7f19
                     7F19  1919 _XTALAMPL	=	0x7f19
                     7F18  1920 G$XTALOSC$0$0 == 0x7f18
                     7F18  1921 _XTALOSC	=	0x7f18
                     7F1A  1922 G$XTALREADY$0$0 == 0x7f1a
                     7F1A  1923 _XTALREADY	=	0x7f1a
                     3F82  1924 G$XDPTR0$0$0 == 0x3f82
                     3F82  1925 _XDPTR0	=	0x3f82
                     3F84  1926 G$XDPTR1$0$0 == 0x3f84
                     3F84  1927 _XDPTR1	=	0x3f84
                     3FA8  1928 G$XIE$0$0 == 0x3fa8
                     3FA8  1929 _XIE	=	0x3fa8
                     3FB8  1930 G$XIP$0$0 == 0x3fb8
                     3FB8  1931 _XIP	=	0x3fb8
                     3F87  1932 G$XPCON$0$0 == 0x3f87
                     3F87  1933 _XPCON	=	0x3f87
                     3FCA  1934 G$XADCCH0CONFIG$0$0 == 0x3fca
                     3FCA  1935 _XADCCH0CONFIG	=	0x3fca
                     3FCB  1936 G$XADCCH1CONFIG$0$0 == 0x3fcb
                     3FCB  1937 _XADCCH1CONFIG	=	0x3fcb
                     3FD2  1938 G$XADCCH2CONFIG$0$0 == 0x3fd2
                     3FD2  1939 _XADCCH2CONFIG	=	0x3fd2
                     3FD3  1940 G$XADCCH3CONFIG$0$0 == 0x3fd3
                     3FD3  1941 _XADCCH3CONFIG	=	0x3fd3
                     3FD1  1942 G$XADCCLKSRC$0$0 == 0x3fd1
                     3FD1  1943 _XADCCLKSRC	=	0x3fd1
                     3FC9  1944 G$XADCCONV$0$0 == 0x3fc9
                     3FC9  1945 _XADCCONV	=	0x3fc9
                     3FE1  1946 G$XANALOGCOMP$0$0 == 0x3fe1
                     3FE1  1947 _XANALOGCOMP	=	0x3fe1
                     3FC6  1948 G$XCLKCON$0$0 == 0x3fc6
                     3FC6  1949 _XCLKCON	=	0x3fc6
                     3FC7  1950 G$XCLKSTAT$0$0 == 0x3fc7
                     3FC7  1951 _XCLKSTAT	=	0x3fc7
                     3F97  1952 G$XCODECONFIG$0$0 == 0x3f97
                     3F97  1953 _XCODECONFIG	=	0x3f97
                     3FE3  1954 G$XDBGLNKBUF$0$0 == 0x3fe3
                     3FE3  1955 _XDBGLNKBUF	=	0x3fe3
                     3FE2  1956 G$XDBGLNKSTAT$0$0 == 0x3fe2
                     3FE2  1957 _XDBGLNKSTAT	=	0x3fe2
                     3F89  1958 G$XDIRA$0$0 == 0x3f89
                     3F89  1959 _XDIRA	=	0x3f89
                     3F8A  1960 G$XDIRB$0$0 == 0x3f8a
                     3F8A  1961 _XDIRB	=	0x3f8a
                     3F8B  1962 G$XDIRC$0$0 == 0x3f8b
                     3F8B  1963 _XDIRC	=	0x3f8b
                     3F8E  1964 G$XDIRR$0$0 == 0x3f8e
                     3F8E  1965 _XDIRR	=	0x3f8e
                     3FC8  1966 G$XPINA$0$0 == 0x3fc8
                     3FC8  1967 _XPINA	=	0x3fc8
                     3FE8  1968 G$XPINB$0$0 == 0x3fe8
                     3FE8  1969 _XPINB	=	0x3fe8
                     3FF8  1970 G$XPINC$0$0 == 0x3ff8
                     3FF8  1971 _XPINC	=	0x3ff8
                     3F8D  1972 G$XPINR$0$0 == 0x3f8d
                     3F8D  1973 _XPINR	=	0x3f8d
                     3F80  1974 G$XPORTA$0$0 == 0x3f80
                     3F80  1975 _XPORTA	=	0x3f80
                     3F88  1976 G$XPORTB$0$0 == 0x3f88
                     3F88  1977 _XPORTB	=	0x3f88
                     3F90  1978 G$XPORTC$0$0 == 0x3f90
                     3F90  1979 _XPORTC	=	0x3f90
                     3F8C  1980 G$XPORTR$0$0 == 0x3f8c
                     3F8C  1981 _XPORTR	=	0x3f8c
                     3FCE  1982 G$XIC0CAPT0$0$0 == 0x3fce
                     3FCE  1983 _XIC0CAPT0	=	0x3fce
                     3FCF  1984 G$XIC0CAPT1$0$0 == 0x3fcf
                     3FCF  1985 _XIC0CAPT1	=	0x3fcf
                     3FCE  1986 G$XIC0CAPT$0$0 == 0x3fce
                     3FCE  1987 _XIC0CAPT	=	0x3fce
                     3FCC  1988 G$XIC0MODE$0$0 == 0x3fcc
                     3FCC  1989 _XIC0MODE	=	0x3fcc
                     3FCD  1990 G$XIC0STATUS$0$0 == 0x3fcd
                     3FCD  1991 _XIC0STATUS	=	0x3fcd
                     3FD6  1992 G$XIC1CAPT0$0$0 == 0x3fd6
                     3FD6  1993 _XIC1CAPT0	=	0x3fd6
                     3FD7  1994 G$XIC1CAPT1$0$0 == 0x3fd7
                     3FD7  1995 _XIC1CAPT1	=	0x3fd7
                     3FD6  1996 G$XIC1CAPT$0$0 == 0x3fd6
                     3FD6  1997 _XIC1CAPT	=	0x3fd6
                     3FD4  1998 G$XIC1MODE$0$0 == 0x3fd4
                     3FD4  1999 _XIC1MODE	=	0x3fd4
                     3FD5  2000 G$XIC1STATUS$0$0 == 0x3fd5
                     3FD5  2001 _XIC1STATUS	=	0x3fd5
                     3F92  2002 G$XNVADDR0$0$0 == 0x3f92
                     3F92  2003 _XNVADDR0	=	0x3f92
                     3F93  2004 G$XNVADDR1$0$0 == 0x3f93
                     3F93  2005 _XNVADDR1	=	0x3f93
                     3F92  2006 G$XNVADDR$0$0 == 0x3f92
                     3F92  2007 _XNVADDR	=	0x3f92
                     3F94  2008 G$XNVDATA0$0$0 == 0x3f94
                     3F94  2009 _XNVDATA0	=	0x3f94
                     3F95  2010 G$XNVDATA1$0$0 == 0x3f95
                     3F95  2011 _XNVDATA1	=	0x3f95
                     3F94  2012 G$XNVDATA$0$0 == 0x3f94
                     3F94  2013 _XNVDATA	=	0x3f94
                     3F96  2014 G$XNVKEY$0$0 == 0x3f96
                     3F96  2015 _XNVKEY	=	0x3f96
                     3F91  2016 G$XNVSTATUS$0$0 == 0x3f91
                     3F91  2017 _XNVSTATUS	=	0x3f91
                     3FBC  2018 G$XOC0COMP0$0$0 == 0x3fbc
                     3FBC  2019 _XOC0COMP0	=	0x3fbc
                     3FBD  2020 G$XOC0COMP1$0$0 == 0x3fbd
                     3FBD  2021 _XOC0COMP1	=	0x3fbd
                     3FBC  2022 G$XOC0COMP$0$0 == 0x3fbc
                     3FBC  2023 _XOC0COMP	=	0x3fbc
                     3FB9  2024 G$XOC0MODE$0$0 == 0x3fb9
                     3FB9  2025 _XOC0MODE	=	0x3fb9
                     3FBA  2026 G$XOC0PIN$0$0 == 0x3fba
                     3FBA  2027 _XOC0PIN	=	0x3fba
                     3FBB  2028 G$XOC0STATUS$0$0 == 0x3fbb
                     3FBB  2029 _XOC0STATUS	=	0x3fbb
                     3FC4  2030 G$XOC1COMP0$0$0 == 0x3fc4
                     3FC4  2031 _XOC1COMP0	=	0x3fc4
                     3FC5  2032 G$XOC1COMP1$0$0 == 0x3fc5
                     3FC5  2033 _XOC1COMP1	=	0x3fc5
                     3FC4  2034 G$XOC1COMP$0$0 == 0x3fc4
                     3FC4  2035 _XOC1COMP	=	0x3fc4
                     3FC1  2036 G$XOC1MODE$0$0 == 0x3fc1
                     3FC1  2037 _XOC1MODE	=	0x3fc1
                     3FC2  2038 G$XOC1PIN$0$0 == 0x3fc2
                     3FC2  2039 _XOC1PIN	=	0x3fc2
                     3FC3  2040 G$XOC1STATUS$0$0 == 0x3fc3
                     3FC3  2041 _XOC1STATUS	=	0x3fc3
                     3FB1  2042 G$XRADIOACC$0$0 == 0x3fb1
                     3FB1  2043 _XRADIOACC	=	0x3fb1
                     3FB3  2044 G$XRADIOADDR0$0$0 == 0x3fb3
                     3FB3  2045 _XRADIOADDR0	=	0x3fb3
                     3FB2  2046 G$XRADIOADDR1$0$0 == 0x3fb2
                     3FB2  2047 _XRADIOADDR1	=	0x3fb2
                     3FB7  2048 G$XRADIODATA0$0$0 == 0x3fb7
                     3FB7  2049 _XRADIODATA0	=	0x3fb7
                     3FB6  2050 G$XRADIODATA1$0$0 == 0x3fb6
                     3FB6  2051 _XRADIODATA1	=	0x3fb6
                     3FB5  2052 G$XRADIODATA2$0$0 == 0x3fb5
                     3FB5  2053 _XRADIODATA2	=	0x3fb5
                     3FB4  2054 G$XRADIODATA3$0$0 == 0x3fb4
                     3FB4  2055 _XRADIODATA3	=	0x3fb4
                     3FBE  2056 G$XRADIOSTAT0$0$0 == 0x3fbe
                     3FBE  2057 _XRADIOSTAT0	=	0x3fbe
                     3FBF  2058 G$XRADIOSTAT1$0$0 == 0x3fbf
                     3FBF  2059 _XRADIOSTAT1	=	0x3fbf
                     3FBE  2060 G$XRADIOSTAT$0$0 == 0x3fbe
                     3FBE  2061 _XRADIOSTAT	=	0x3fbe
                     3FDF  2062 G$XSPCLKSRC$0$0 == 0x3fdf
                     3FDF  2063 _XSPCLKSRC	=	0x3fdf
                     3FDC  2064 G$XSPMODE$0$0 == 0x3fdc
                     3FDC  2065 _XSPMODE	=	0x3fdc
                     3FDE  2066 G$XSPSHREG$0$0 == 0x3fde
                     3FDE  2067 _XSPSHREG	=	0x3fde
                     3FDD  2068 G$XSPSTATUS$0$0 == 0x3fdd
                     3FDD  2069 _XSPSTATUS	=	0x3fdd
                     3F9A  2070 G$XT0CLKSRC$0$0 == 0x3f9a
                     3F9A  2071 _XT0CLKSRC	=	0x3f9a
                     3F9C  2072 G$XT0CNT0$0$0 == 0x3f9c
                     3F9C  2073 _XT0CNT0	=	0x3f9c
                     3F9D  2074 G$XT0CNT1$0$0 == 0x3f9d
                     3F9D  2075 _XT0CNT1	=	0x3f9d
                     3F9C  2076 G$XT0CNT$0$0 == 0x3f9c
                     3F9C  2077 _XT0CNT	=	0x3f9c
                     3F99  2078 G$XT0MODE$0$0 == 0x3f99
                     3F99  2079 _XT0MODE	=	0x3f99
                     3F9E  2080 G$XT0PERIOD0$0$0 == 0x3f9e
                     3F9E  2081 _XT0PERIOD0	=	0x3f9e
                     3F9F  2082 G$XT0PERIOD1$0$0 == 0x3f9f
                     3F9F  2083 _XT0PERIOD1	=	0x3f9f
                     3F9E  2084 G$XT0PERIOD$0$0 == 0x3f9e
                     3F9E  2085 _XT0PERIOD	=	0x3f9e
                     3F9B  2086 G$XT0STATUS$0$0 == 0x3f9b
                     3F9B  2087 _XT0STATUS	=	0x3f9b
                     3FA2  2088 G$XT1CLKSRC$0$0 == 0x3fa2
                     3FA2  2089 _XT1CLKSRC	=	0x3fa2
                     3FA4  2090 G$XT1CNT0$0$0 == 0x3fa4
                     3FA4  2091 _XT1CNT0	=	0x3fa4
                     3FA5  2092 G$XT1CNT1$0$0 == 0x3fa5
                     3FA5  2093 _XT1CNT1	=	0x3fa5
                     3FA4  2094 G$XT1CNT$0$0 == 0x3fa4
                     3FA4  2095 _XT1CNT	=	0x3fa4
                     3FA1  2096 G$XT1MODE$0$0 == 0x3fa1
                     3FA1  2097 _XT1MODE	=	0x3fa1
                     3FA6  2098 G$XT1PERIOD0$0$0 == 0x3fa6
                     3FA6  2099 _XT1PERIOD0	=	0x3fa6
                     3FA7  2100 G$XT1PERIOD1$0$0 == 0x3fa7
                     3FA7  2101 _XT1PERIOD1	=	0x3fa7
                     3FA6  2102 G$XT1PERIOD$0$0 == 0x3fa6
                     3FA6  2103 _XT1PERIOD	=	0x3fa6
                     3FA3  2104 G$XT1STATUS$0$0 == 0x3fa3
                     3FA3  2105 _XT1STATUS	=	0x3fa3
                     3FAA  2106 G$XT2CLKSRC$0$0 == 0x3faa
                     3FAA  2107 _XT2CLKSRC	=	0x3faa
                     3FAC  2108 G$XT2CNT0$0$0 == 0x3fac
                     3FAC  2109 _XT2CNT0	=	0x3fac
                     3FAD  2110 G$XT2CNT1$0$0 == 0x3fad
                     3FAD  2111 _XT2CNT1	=	0x3fad
                     3FAC  2112 G$XT2CNT$0$0 == 0x3fac
                     3FAC  2113 _XT2CNT	=	0x3fac
                     3FA9  2114 G$XT2MODE$0$0 == 0x3fa9
                     3FA9  2115 _XT2MODE	=	0x3fa9
                     3FAE  2116 G$XT2PERIOD0$0$0 == 0x3fae
                     3FAE  2117 _XT2PERIOD0	=	0x3fae
                     3FAF  2118 G$XT2PERIOD1$0$0 == 0x3faf
                     3FAF  2119 _XT2PERIOD1	=	0x3faf
                     3FAE  2120 G$XT2PERIOD$0$0 == 0x3fae
                     3FAE  2121 _XT2PERIOD	=	0x3fae
                     3FAB  2122 G$XT2STATUS$0$0 == 0x3fab
                     3FAB  2123 _XT2STATUS	=	0x3fab
                     3FE4  2124 G$XU0CTRL$0$0 == 0x3fe4
                     3FE4  2125 _XU0CTRL	=	0x3fe4
                     3FE7  2126 G$XU0MODE$0$0 == 0x3fe7
                     3FE7  2127 _XU0MODE	=	0x3fe7
                     3FE6  2128 G$XU0SHREG$0$0 == 0x3fe6
                     3FE6  2129 _XU0SHREG	=	0x3fe6
                     3FE5  2130 G$XU0STATUS$0$0 == 0x3fe5
                     3FE5  2131 _XU0STATUS	=	0x3fe5
                     3FEC  2132 G$XU1CTRL$0$0 == 0x3fec
                     3FEC  2133 _XU1CTRL	=	0x3fec
                     3FEF  2134 G$XU1MODE$0$0 == 0x3fef
                     3FEF  2135 _XU1MODE	=	0x3fef
                     3FEE  2136 G$XU1SHREG$0$0 == 0x3fee
                     3FEE  2137 _XU1SHREG	=	0x3fee
                     3FED  2138 G$XU1STATUS$0$0 == 0x3fed
                     3FED  2139 _XU1STATUS	=	0x3fed
                     3FDA  2140 G$XWDTCFG$0$0 == 0x3fda
                     3FDA  2141 _XWDTCFG	=	0x3fda
                     3FDB  2142 G$XWDTRESET$0$0 == 0x3fdb
                     3FDB  2143 _XWDTRESET	=	0x3fdb
                     3FF1  2144 G$XWTCFGA$0$0 == 0x3ff1
                     3FF1  2145 _XWTCFGA	=	0x3ff1
                     3FF9  2146 G$XWTCFGB$0$0 == 0x3ff9
                     3FF9  2147 _XWTCFGB	=	0x3ff9
                     3FF2  2148 G$XWTCNTA0$0$0 == 0x3ff2
                     3FF2  2149 _XWTCNTA0	=	0x3ff2
                     3FF3  2150 G$XWTCNTA1$0$0 == 0x3ff3
                     3FF3  2151 _XWTCNTA1	=	0x3ff3
                     3FF2  2152 G$XWTCNTA$0$0 == 0x3ff2
                     3FF2  2153 _XWTCNTA	=	0x3ff2
                     3FFA  2154 G$XWTCNTB0$0$0 == 0x3ffa
                     3FFA  2155 _XWTCNTB0	=	0x3ffa
                     3FFB  2156 G$XWTCNTB1$0$0 == 0x3ffb
                     3FFB  2157 _XWTCNTB1	=	0x3ffb
                     3FFA  2158 G$XWTCNTB$0$0 == 0x3ffa
                     3FFA  2159 _XWTCNTB	=	0x3ffa
                     3FEB  2160 G$XWTCNTR1$0$0 == 0x3feb
                     3FEB  2161 _XWTCNTR1	=	0x3feb
                     3FF4  2162 G$XWTEVTA0$0$0 == 0x3ff4
                     3FF4  2163 _XWTEVTA0	=	0x3ff4
                     3FF5  2164 G$XWTEVTA1$0$0 == 0x3ff5
                     3FF5  2165 _XWTEVTA1	=	0x3ff5
                     3FF4  2166 G$XWTEVTA$0$0 == 0x3ff4
                     3FF4  2167 _XWTEVTA	=	0x3ff4
                     3FF6  2168 G$XWTEVTB0$0$0 == 0x3ff6
                     3FF6  2169 _XWTEVTB0	=	0x3ff6
                     3FF7  2170 G$XWTEVTB1$0$0 == 0x3ff7
                     3FF7  2171 _XWTEVTB1	=	0x3ff7
                     3FF6  2172 G$XWTEVTB$0$0 == 0x3ff6
                     3FF6  2173 _XWTEVTB	=	0x3ff6
                     3FFC  2174 G$XWTEVTC0$0$0 == 0x3ffc
                     3FFC  2175 _XWTEVTC0	=	0x3ffc
                     3FFD  2176 G$XWTEVTC1$0$0 == 0x3ffd
                     3FFD  2177 _XWTEVTC1	=	0x3ffd
                     3FFC  2178 G$XWTEVTC$0$0 == 0x3ffc
                     3FFC  2179 _XWTEVTC	=	0x3ffc
                     3FFE  2180 G$XWTEVTD0$0$0 == 0x3ffe
                     3FFE  2181 _XWTEVTD0	=	0x3ffe
                     3FFF  2182 G$XWTEVTD1$0$0 == 0x3fff
                     3FFF  2183 _XWTEVTD1	=	0x3fff
                     3FFE  2184 G$XWTEVTD$0$0 == 0x3ffe
                     3FFE  2185 _XWTEVTD	=	0x3ffe
                     3FE9  2186 G$XWTIRQEN$0$0 == 0x3fe9
                     3FE9  2187 _XWTIRQEN	=	0x3fe9
                     3FEA  2188 G$XWTSTAT$0$0 == 0x3fea
                     3FEA  2189 _XWTSTAT	=	0x3fea
                     4114  2190 G$AX5043_AFSKCTRL$0$0 == 0x4114
                     4114  2191 _AX5043_AFSKCTRL	=	0x4114
                     4113  2192 G$AX5043_AFSKMARK0$0$0 == 0x4113
                     4113  2193 _AX5043_AFSKMARK0	=	0x4113
                     4112  2194 G$AX5043_AFSKMARK1$0$0 == 0x4112
                     4112  2195 _AX5043_AFSKMARK1	=	0x4112
                     4111  2196 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                     4111  2197 _AX5043_AFSKSPACE0	=	0x4111
                     4110  2198 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                     4110  2199 _AX5043_AFSKSPACE1	=	0x4110
                     4043  2200 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                     4043  2201 _AX5043_AGCCOUNTER	=	0x4043
                     4115  2202 G$AX5043_AMPLFILTER$0$0 == 0x4115
                     4115  2203 _AX5043_AMPLFILTER	=	0x4115
                     4189  2204 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                     4189  2205 _AX5043_BBOFFSCAP	=	0x4189
                     4188  2206 G$AX5043_BBTUNE$0$0 == 0x4188
                     4188  2207 _AX5043_BBTUNE	=	0x4188
                     4041  2208 G$AX5043_BGNDRSSI$0$0 == 0x4041
                     4041  2209 _AX5043_BGNDRSSI	=	0x4041
                     422E  2210 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                     422E  2211 _AX5043_BGNDRSSIGAIN	=	0x422e
                     422F  2212 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                     422F  2213 _AX5043_BGNDRSSITHR	=	0x422f
                     4017  2214 G$AX5043_CRCINIT0$0$0 == 0x4017
                     4017  2215 _AX5043_CRCINIT0	=	0x4017
                     4016  2216 G$AX5043_CRCINIT1$0$0 == 0x4016
                     4016  2217 _AX5043_CRCINIT1	=	0x4016
                     4015  2218 G$AX5043_CRCINIT2$0$0 == 0x4015
                     4015  2219 _AX5043_CRCINIT2	=	0x4015
                     4014  2220 G$AX5043_CRCINIT3$0$0 == 0x4014
                     4014  2221 _AX5043_CRCINIT3	=	0x4014
                     4332  2222 G$AX5043_DACCONFIG$0$0 == 0x4332
                     4332  2223 _AX5043_DACCONFIG	=	0x4332
                     4331  2224 G$AX5043_DACVALUE0$0$0 == 0x4331
                     4331  2225 _AX5043_DACVALUE0	=	0x4331
                     4330  2226 G$AX5043_DACVALUE1$0$0 == 0x4330
                     4330  2227 _AX5043_DACVALUE1	=	0x4330
                     4102  2228 G$AX5043_DECIMATION$0$0 == 0x4102
                     4102  2229 _AX5043_DECIMATION	=	0x4102
                     4042  2230 G$AX5043_DIVERSITY$0$0 == 0x4042
                     4042  2231 _AX5043_DIVERSITY	=	0x4042
                     4011  2232 G$AX5043_ENCODING$0$0 == 0x4011
                     4011  2233 _AX5043_ENCODING	=	0x4011
                     4018  2234 G$AX5043_FEC$0$0 == 0x4018
                     4018  2235 _AX5043_FEC	=	0x4018
                     401A  2236 G$AX5043_FECSTATUS$0$0 == 0x401a
                     401A  2237 _AX5043_FECSTATUS	=	0x401a
                     4019  2238 G$AX5043_FECSYNC$0$0 == 0x4019
                     4019  2239 _AX5043_FECSYNC	=	0x4019
                     402B  2240 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                     402B  2241 _AX5043_FIFOCOUNT0	=	0x402b
                     402A  2242 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                     402A  2243 _AX5043_FIFOCOUNT1	=	0x402a
                     4029  2244 G$AX5043_FIFODATA$0$0 == 0x4029
                     4029  2245 _AX5043_FIFODATA	=	0x4029
                     402D  2246 G$AX5043_FIFOFREE0$0$0 == 0x402d
                     402D  2247 _AX5043_FIFOFREE0	=	0x402d
                     402C  2248 G$AX5043_FIFOFREE1$0$0 == 0x402c
                     402C  2249 _AX5043_FIFOFREE1	=	0x402c
                     4028  2250 G$AX5043_FIFOSTAT$0$0 == 0x4028
                     4028  2251 _AX5043_FIFOSTAT	=	0x4028
                     402F  2252 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                     402F  2253 _AX5043_FIFOTHRESH0	=	0x402f
                     402E  2254 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                     402E  2255 _AX5043_FIFOTHRESH1	=	0x402e
                     4012  2256 G$AX5043_FRAMING$0$0 == 0x4012
                     4012  2257 _AX5043_FRAMING	=	0x4012
                     4037  2258 G$AX5043_FREQA0$0$0 == 0x4037
                     4037  2259 _AX5043_FREQA0	=	0x4037
                     4036  2260 G$AX5043_FREQA1$0$0 == 0x4036
                     4036  2261 _AX5043_FREQA1	=	0x4036
                     4035  2262 G$AX5043_FREQA2$0$0 == 0x4035
                     4035  2263 _AX5043_FREQA2	=	0x4035
                     4034  2264 G$AX5043_FREQA3$0$0 == 0x4034
                     4034  2265 _AX5043_FREQA3	=	0x4034
                     403F  2266 G$AX5043_FREQB0$0$0 == 0x403f
                     403F  2267 _AX5043_FREQB0	=	0x403f
                     403E  2268 G$AX5043_FREQB1$0$0 == 0x403e
                     403E  2269 _AX5043_FREQB1	=	0x403e
                     403D  2270 G$AX5043_FREQB2$0$0 == 0x403d
                     403D  2271 _AX5043_FREQB2	=	0x403d
                     403C  2272 G$AX5043_FREQB3$0$0 == 0x403c
                     403C  2273 _AX5043_FREQB3	=	0x403c
                     4163  2274 G$AX5043_FSKDEV0$0$0 == 0x4163
                     4163  2275 _AX5043_FSKDEV0	=	0x4163
                     4162  2276 G$AX5043_FSKDEV1$0$0 == 0x4162
                     4162  2277 _AX5043_FSKDEV1	=	0x4162
                     4161  2278 G$AX5043_FSKDEV2$0$0 == 0x4161
                     4161  2279 _AX5043_FSKDEV2	=	0x4161
                     410D  2280 G$AX5043_FSKDMAX0$0$0 == 0x410d
                     410D  2281 _AX5043_FSKDMAX0	=	0x410d
                     410C  2282 G$AX5043_FSKDMAX1$0$0 == 0x410c
                     410C  2283 _AX5043_FSKDMAX1	=	0x410c
                     410F  2284 G$AX5043_FSKDMIN0$0$0 == 0x410f
                     410F  2285 _AX5043_FSKDMIN0	=	0x410f
                     410E  2286 G$AX5043_FSKDMIN1$0$0 == 0x410e
                     410E  2287 _AX5043_FSKDMIN1	=	0x410e
                     4309  2288 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                     4309  2289 _AX5043_GPADC13VALUE0	=	0x4309
                     4308  2290 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                     4308  2291 _AX5043_GPADC13VALUE1	=	0x4308
                     4300  2292 G$AX5043_GPADCCTRL$0$0 == 0x4300
                     4300  2293 _AX5043_GPADCCTRL	=	0x4300
                     4301  2294 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                     4301  2295 _AX5043_GPADCPERIOD	=	0x4301
                     4101  2296 G$AX5043_IFFREQ0$0$0 == 0x4101
                     4101  2297 _AX5043_IFFREQ0	=	0x4101
                     4100  2298 G$AX5043_IFFREQ1$0$0 == 0x4100
                     4100  2299 _AX5043_IFFREQ1	=	0x4100
                     400B  2300 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                     400B  2301 _AX5043_IRQINVERSION0	=	0x400b
                     400A  2302 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                     400A  2303 _AX5043_IRQINVERSION1	=	0x400a
                     4007  2304 G$AX5043_IRQMASK0$0$0 == 0x4007
                     4007  2305 _AX5043_IRQMASK0	=	0x4007
                     4006  2306 G$AX5043_IRQMASK1$0$0 == 0x4006
                     4006  2307 _AX5043_IRQMASK1	=	0x4006
                     400D  2308 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                     400D  2309 _AX5043_IRQREQUEST0	=	0x400d
                     400C  2310 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                     400C  2311 _AX5043_IRQREQUEST1	=	0x400c
                     4310  2312 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                     4310  2313 _AX5043_LPOSCCONFIG	=	0x4310
                     4317  2314 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                     4317  2315 _AX5043_LPOSCFREQ0	=	0x4317
                     4316  2316 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                     4316  2317 _AX5043_LPOSCFREQ1	=	0x4316
                     4313  2318 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                     4313  2319 _AX5043_LPOSCKFILT0	=	0x4313
                     4312  2320 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                     4312  2321 _AX5043_LPOSCKFILT1	=	0x4312
                     4319  2322 G$AX5043_LPOSCPER0$0$0 == 0x4319
                     4319  2323 _AX5043_LPOSCPER0	=	0x4319
                     4318  2324 G$AX5043_LPOSCPER1$0$0 == 0x4318
                     4318  2325 _AX5043_LPOSCPER1	=	0x4318
                     4315  2326 G$AX5043_LPOSCREF0$0$0 == 0x4315
                     4315  2327 _AX5043_LPOSCREF0	=	0x4315
                     4314  2328 G$AX5043_LPOSCREF1$0$0 == 0x4314
                     4314  2329 _AX5043_LPOSCREF1	=	0x4314
                     4311  2330 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                     4311  2331 _AX5043_LPOSCSTATUS	=	0x4311
                     4214  2332 G$AX5043_MATCH0LEN$0$0 == 0x4214
                     4214  2333 _AX5043_MATCH0LEN	=	0x4214
                     4216  2334 G$AX5043_MATCH0MAX$0$0 == 0x4216
                     4216  2335 _AX5043_MATCH0MAX	=	0x4216
                     4215  2336 G$AX5043_MATCH0MIN$0$0 == 0x4215
                     4215  2337 _AX5043_MATCH0MIN	=	0x4215
                     4213  2338 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                     4213  2339 _AX5043_MATCH0PAT0	=	0x4213
                     4212  2340 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                     4212  2341 _AX5043_MATCH0PAT1	=	0x4212
                     4211  2342 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                     4211  2343 _AX5043_MATCH0PAT2	=	0x4211
                     4210  2344 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                     4210  2345 _AX5043_MATCH0PAT3	=	0x4210
                     421C  2346 G$AX5043_MATCH1LEN$0$0 == 0x421c
                     421C  2347 _AX5043_MATCH1LEN	=	0x421c
                     421E  2348 G$AX5043_MATCH1MAX$0$0 == 0x421e
                     421E  2349 _AX5043_MATCH1MAX	=	0x421e
                     421D  2350 G$AX5043_MATCH1MIN$0$0 == 0x421d
                     421D  2351 _AX5043_MATCH1MIN	=	0x421d
                     4219  2352 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                     4219  2353 _AX5043_MATCH1PAT0	=	0x4219
                     4218  2354 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                     4218  2355 _AX5043_MATCH1PAT1	=	0x4218
                     4108  2356 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                     4108  2357 _AX5043_MAXDROFFSET0	=	0x4108
                     4107  2358 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                     4107  2359 _AX5043_MAXDROFFSET1	=	0x4107
                     4106  2360 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                     4106  2361 _AX5043_MAXDROFFSET2	=	0x4106
                     410B  2362 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                     410B  2363 _AX5043_MAXRFOFFSET0	=	0x410b
                     410A  2364 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                     410A  2365 _AX5043_MAXRFOFFSET1	=	0x410a
                     4109  2366 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                     4109  2367 _AX5043_MAXRFOFFSET2	=	0x4109
                     4164  2368 G$AX5043_MODCFGA$0$0 == 0x4164
                     4164  2369 _AX5043_MODCFGA	=	0x4164
                     4160  2370 G$AX5043_MODCFGF$0$0 == 0x4160
                     4160  2371 _AX5043_MODCFGF	=	0x4160
                     4010  2372 G$AX5043_MODULATION$0$0 == 0x4010
                     4010  2373 _AX5043_MODULATION	=	0x4010
                     4025  2374 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                     4025  2375 _AX5043_PINFUNCANTSEL	=	0x4025
                     4023  2376 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                     4023  2377 _AX5043_PINFUNCDATA	=	0x4023
                     4022  2378 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                     4022  2379 _AX5043_PINFUNCDCLK	=	0x4022
                     4024  2380 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                     4024  2381 _AX5043_PINFUNCIRQ	=	0x4024
                     4026  2382 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                     4026  2383 _AX5043_PINFUNCPWRAMP	=	0x4026
                     4021  2384 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                     4021  2385 _AX5043_PINFUNCSYSCLK	=	0x4021
                     4020  2386 G$AX5043_PINSTATE$0$0 == 0x4020
                     4020  2387 _AX5043_PINSTATE	=	0x4020
                     4233  2388 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                     4233  2389 _AX5043_PKTACCEPTFLAGS	=	0x4233
                     4230  2390 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                     4230  2391 _AX5043_PKTCHUNKSIZE	=	0x4230
                     4231  2392 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                     4231  2393 _AX5043_PKTMISCFLAGS	=	0x4231
                     4232  2394 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                     4232  2395 _AX5043_PKTSTOREFLAGS	=	0x4232
                     4031  2396 G$AX5043_PLLCPI$0$0 == 0x4031
                     4031  2397 _AX5043_PLLCPI	=	0x4031
                     4039  2398 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                     4039  2399 _AX5043_PLLCPIBOOST	=	0x4039
                     4182  2400 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                     4182  2401 _AX5043_PLLLOCKDET	=	0x4182
                     4030  2402 G$AX5043_PLLLOOP$0$0 == 0x4030
                     4030  2403 _AX5043_PLLLOOP	=	0x4030
                     4038  2404 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                     4038  2405 _AX5043_PLLLOOPBOOST	=	0x4038
                     4033  2406 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                     4033  2407 _AX5043_PLLRANGINGA	=	0x4033
                     403B  2408 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                     403B  2409 _AX5043_PLLRANGINGB	=	0x403b
                     4183  2410 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                     4183  2411 _AX5043_PLLRNGCLK	=	0x4183
                     4032  2412 G$AX5043_PLLVCODIV$0$0 == 0x4032
                     4032  2413 _AX5043_PLLVCODIV	=	0x4032
                     4180  2414 G$AX5043_PLLVCOI$0$0 == 0x4180
                     4180  2415 _AX5043_PLLVCOI	=	0x4180
                     4181  2416 G$AX5043_PLLVCOIR$0$0 == 0x4181
                     4181  2417 _AX5043_PLLVCOIR	=	0x4181
                     4005  2418 G$AX5043_POWIRQMASK$0$0 == 0x4005
                     4005  2419 _AX5043_POWIRQMASK	=	0x4005
                     4003  2420 G$AX5043_POWSTAT$0$0 == 0x4003
                     4003  2421 _AX5043_POWSTAT	=	0x4003
                     4004  2422 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                     4004  2423 _AX5043_POWSTICKYSTAT	=	0x4004
                     4027  2424 G$AX5043_PWRAMP$0$0 == 0x4027
                     4027  2425 _AX5043_PWRAMP	=	0x4027
                     4002  2426 G$AX5043_PWRMODE$0$0 == 0x4002
                     4002  2427 _AX5043_PWRMODE	=	0x4002
                     4009  2428 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                     4009  2429 _AX5043_RADIOEVENTMASK0	=	0x4009
                     4008  2430 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                     4008  2431 _AX5043_RADIOEVENTMASK1	=	0x4008
                     400F  2432 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                     400F  2433 _AX5043_RADIOEVENTREQ0	=	0x400f
                     400E  2434 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                     400E  2435 _AX5043_RADIOEVENTREQ1	=	0x400e
                     401C  2436 G$AX5043_RADIOSTATE$0$0 == 0x401c
                     401C  2437 _AX5043_RADIOSTATE	=	0x401c
                     4040  2438 G$AX5043_RSSI$0$0 == 0x4040
                     4040  2439 _AX5043_RSSI	=	0x4040
                     422D  2440 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                     422D  2441 _AX5043_RSSIABSTHR	=	0x422d
                     422C  2442 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                     422C  2443 _AX5043_RSSIREFERENCE	=	0x422c
                     4105  2444 G$AX5043_RXDATARATE0$0$0 == 0x4105
                     4105  2445 _AX5043_RXDATARATE0	=	0x4105
                     4104  2446 G$AX5043_RXDATARATE1$0$0 == 0x4104
                     4104  2447 _AX5043_RXDATARATE1	=	0x4104
                     4103  2448 G$AX5043_RXDATARATE2$0$0 == 0x4103
                     4103  2449 _AX5043_RXDATARATE2	=	0x4103
                     4001  2450 G$AX5043_SCRATCH$0$0 == 0x4001
                     4001  2451 _AX5043_SCRATCH	=	0x4001
                     4000  2452 G$AX5043_SILICONREVISION$0$0 == 0x4000
                     4000  2453 _AX5043_SILICONREVISION	=	0x4000
                     405B  2454 G$AX5043_TIMER0$0$0 == 0x405b
                     405B  2455 _AX5043_TIMER0	=	0x405b
                     405A  2456 G$AX5043_TIMER1$0$0 == 0x405a
                     405A  2457 _AX5043_TIMER1	=	0x405a
                     4059  2458 G$AX5043_TIMER2$0$0 == 0x4059
                     4059  2459 _AX5043_TIMER2	=	0x4059
                     4227  2460 G$AX5043_TMGRXAGC$0$0 == 0x4227
                     4227  2461 _AX5043_TMGRXAGC	=	0x4227
                     4223  2462 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                     4223  2463 _AX5043_TMGRXBOOST	=	0x4223
                     4226  2464 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                     4226  2465 _AX5043_TMGRXCOARSEAGC	=	0x4226
                     4225  2466 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                     4225  2467 _AX5043_TMGRXOFFSACQ	=	0x4225
                     4229  2468 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                     4229  2469 _AX5043_TMGRXPREAMBLE1	=	0x4229
                     422A  2470 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                     422A  2471 _AX5043_TMGRXPREAMBLE2	=	0x422a
                     422B  2472 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                     422B  2473 _AX5043_TMGRXPREAMBLE3	=	0x422b
                     4228  2474 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                     4228  2475 _AX5043_TMGRXRSSI	=	0x4228
                     4224  2476 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                     4224  2477 _AX5043_TMGRXSETTLE	=	0x4224
                     4220  2478 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                     4220  2479 _AX5043_TMGTXBOOST	=	0x4220
                     4221  2480 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                     4221  2481 _AX5043_TMGTXSETTLE	=	0x4221
                     4055  2482 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                     4055  2483 _AX5043_TRKAFSKDEMOD0	=	0x4055
                     4054  2484 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                     4054  2485 _AX5043_TRKAFSKDEMOD1	=	0x4054
                     4049  2486 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                     4049  2487 _AX5043_TRKAMPLITUDE0	=	0x4049
                     4048  2488 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                     4048  2489 _AX5043_TRKAMPLITUDE1	=	0x4048
                     4047  2490 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                     4047  2491 _AX5043_TRKDATARATE0	=	0x4047
                     4046  2492 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                     4046  2493 _AX5043_TRKDATARATE1	=	0x4046
                     4045  2494 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                     4045  2495 _AX5043_TRKDATARATE2	=	0x4045
                     4051  2496 G$AX5043_TRKFREQ0$0$0 == 0x4051
                     4051  2497 _AX5043_TRKFREQ0	=	0x4051
                     4050  2498 G$AX5043_TRKFREQ1$0$0 == 0x4050
                     4050  2499 _AX5043_TRKFREQ1	=	0x4050
                     4053  2500 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                     4053  2501 _AX5043_TRKFSKDEMOD0	=	0x4053
                     4052  2502 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                     4052  2503 _AX5043_TRKFSKDEMOD1	=	0x4052
                     404B  2504 G$AX5043_TRKPHASE0$0$0 == 0x404b
                     404B  2505 _AX5043_TRKPHASE0	=	0x404b
                     404A  2506 G$AX5043_TRKPHASE1$0$0 == 0x404a
                     404A  2507 _AX5043_TRKPHASE1	=	0x404a
                     404F  2508 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                     404F  2509 _AX5043_TRKRFFREQ0	=	0x404f
                     404E  2510 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                     404E  2511 _AX5043_TRKRFFREQ1	=	0x404e
                     404D  2512 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                     404D  2513 _AX5043_TRKRFFREQ2	=	0x404d
                     4169  2514 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                     4169  2515 _AX5043_TXPWRCOEFFA0	=	0x4169
                     4168  2516 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                     4168  2517 _AX5043_TXPWRCOEFFA1	=	0x4168
                     416B  2518 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                     416B  2519 _AX5043_TXPWRCOEFFB0	=	0x416b
                     416A  2520 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                     416A  2521 _AX5043_TXPWRCOEFFB1	=	0x416a
                     416D  2522 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                     416D  2523 _AX5043_TXPWRCOEFFC0	=	0x416d
                     416C  2524 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                     416C  2525 _AX5043_TXPWRCOEFFC1	=	0x416c
                     416F  2526 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                     416F  2527 _AX5043_TXPWRCOEFFD0	=	0x416f
                     416E  2528 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                     416E  2529 _AX5043_TXPWRCOEFFD1	=	0x416e
                     4171  2530 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                     4171  2531 _AX5043_TXPWRCOEFFE0	=	0x4171
                     4170  2532 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                     4170  2533 _AX5043_TXPWRCOEFFE1	=	0x4170
                     4167  2534 G$AX5043_TXRATE0$0$0 == 0x4167
                     4167  2535 _AX5043_TXRATE0	=	0x4167
                     4166  2536 G$AX5043_TXRATE1$0$0 == 0x4166
                     4166  2537 _AX5043_TXRATE1	=	0x4166
                     4165  2538 G$AX5043_TXRATE2$0$0 == 0x4165
                     4165  2539 _AX5043_TXRATE2	=	0x4165
                     406B  2540 G$AX5043_WAKEUP0$0$0 == 0x406b
                     406B  2541 _AX5043_WAKEUP0	=	0x406b
                     406A  2542 G$AX5043_WAKEUP1$0$0 == 0x406a
                     406A  2543 _AX5043_WAKEUP1	=	0x406a
                     406D  2544 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                     406D  2545 _AX5043_WAKEUPFREQ0	=	0x406d
                     406C  2546 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                     406C  2547 _AX5043_WAKEUPFREQ1	=	0x406c
                     4069  2548 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                     4069  2549 _AX5043_WAKEUPTIMER0	=	0x4069
                     4068  2550 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                     4068  2551 _AX5043_WAKEUPTIMER1	=	0x4068
                     406E  2552 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                     406E  2553 _AX5043_WAKEUPXOEARLY	=	0x406e
                     4184  2554 G$AX5043_XTALCAP$0$0 == 0x4184
                     4184  2555 _AX5043_XTALCAP	=	0x4184
                     401D  2556 G$AX5043_XTALSTATUS$0$0 == 0x401d
                     401D  2557 _AX5043_XTALSTATUS	=	0x401d
                     4122  2558 G$AX5043_AGCAHYST0$0$0 == 0x4122
                     4122  2559 _AX5043_AGCAHYST0	=	0x4122
                     4132  2560 G$AX5043_AGCAHYST1$0$0 == 0x4132
                     4132  2561 _AX5043_AGCAHYST1	=	0x4132
                     4142  2562 G$AX5043_AGCAHYST2$0$0 == 0x4142
                     4142  2563 _AX5043_AGCAHYST2	=	0x4142
                     4152  2564 G$AX5043_AGCAHYST3$0$0 == 0x4152
                     4152  2565 _AX5043_AGCAHYST3	=	0x4152
                     4120  2566 G$AX5043_AGCGAIN0$0$0 == 0x4120
                     4120  2567 _AX5043_AGCGAIN0	=	0x4120
                     4130  2568 G$AX5043_AGCGAIN1$0$0 == 0x4130
                     4130  2569 _AX5043_AGCGAIN1	=	0x4130
                     4140  2570 G$AX5043_AGCGAIN2$0$0 == 0x4140
                     4140  2571 _AX5043_AGCGAIN2	=	0x4140
                     4150  2572 G$AX5043_AGCGAIN3$0$0 == 0x4150
                     4150  2573 _AX5043_AGCGAIN3	=	0x4150
                     4123  2574 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                     4123  2575 _AX5043_AGCMINMAX0	=	0x4123
                     4133  2576 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                     4133  2577 _AX5043_AGCMINMAX1	=	0x4133
                     4143  2578 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                     4143  2579 _AX5043_AGCMINMAX2	=	0x4143
                     4153  2580 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                     4153  2581 _AX5043_AGCMINMAX3	=	0x4153
                     4121  2582 G$AX5043_AGCTARGET0$0$0 == 0x4121
                     4121  2583 _AX5043_AGCTARGET0	=	0x4121
                     4131  2584 G$AX5043_AGCTARGET1$0$0 == 0x4131
                     4131  2585 _AX5043_AGCTARGET1	=	0x4131
                     4141  2586 G$AX5043_AGCTARGET2$0$0 == 0x4141
                     4141  2587 _AX5043_AGCTARGET2	=	0x4141
                     4151  2588 G$AX5043_AGCTARGET3$0$0 == 0x4151
                     4151  2589 _AX5043_AGCTARGET3	=	0x4151
                     412B  2590 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                     412B  2591 _AX5043_AMPLITUDEGAIN0	=	0x412b
                     413B  2592 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                     413B  2593 _AX5043_AMPLITUDEGAIN1	=	0x413b
                     414B  2594 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                     414B  2595 _AX5043_AMPLITUDEGAIN2	=	0x414b
                     415B  2596 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                     415B  2597 _AX5043_AMPLITUDEGAIN3	=	0x415b
                     412F  2598 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                     412F  2599 _AX5043_BBOFFSRES0	=	0x412f
                     413F  2600 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                     413F  2601 _AX5043_BBOFFSRES1	=	0x413f
                     414F  2602 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                     414F  2603 _AX5043_BBOFFSRES2	=	0x414f
                     415F  2604 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                     415F  2605 _AX5043_BBOFFSRES3	=	0x415f
                     4125  2606 G$AX5043_DRGAIN0$0$0 == 0x4125
                     4125  2607 _AX5043_DRGAIN0	=	0x4125
                     4135  2608 G$AX5043_DRGAIN1$0$0 == 0x4135
                     4135  2609 _AX5043_DRGAIN1	=	0x4135
                     4145  2610 G$AX5043_DRGAIN2$0$0 == 0x4145
                     4145  2611 _AX5043_DRGAIN2	=	0x4145
                     4155  2612 G$AX5043_DRGAIN3$0$0 == 0x4155
                     4155  2613 _AX5043_DRGAIN3	=	0x4155
                     412E  2614 G$AX5043_FOURFSK0$0$0 == 0x412e
                     412E  2615 _AX5043_FOURFSK0	=	0x412e
                     413E  2616 G$AX5043_FOURFSK1$0$0 == 0x413e
                     413E  2617 _AX5043_FOURFSK1	=	0x413e
                     414E  2618 G$AX5043_FOURFSK2$0$0 == 0x414e
                     414E  2619 _AX5043_FOURFSK2	=	0x414e
                     415E  2620 G$AX5043_FOURFSK3$0$0 == 0x415e
                     415E  2621 _AX5043_FOURFSK3	=	0x415e
                     412D  2622 G$AX5043_FREQDEV00$0$0 == 0x412d
                     412D  2623 _AX5043_FREQDEV00	=	0x412d
                     413D  2624 G$AX5043_FREQDEV01$0$0 == 0x413d
                     413D  2625 _AX5043_FREQDEV01	=	0x413d
                     414D  2626 G$AX5043_FREQDEV02$0$0 == 0x414d
                     414D  2627 _AX5043_FREQDEV02	=	0x414d
                     415D  2628 G$AX5043_FREQDEV03$0$0 == 0x415d
                     415D  2629 _AX5043_FREQDEV03	=	0x415d
                     412C  2630 G$AX5043_FREQDEV10$0$0 == 0x412c
                     412C  2631 _AX5043_FREQDEV10	=	0x412c
                     413C  2632 G$AX5043_FREQDEV11$0$0 == 0x413c
                     413C  2633 _AX5043_FREQDEV11	=	0x413c
                     414C  2634 G$AX5043_FREQDEV12$0$0 == 0x414c
                     414C  2635 _AX5043_FREQDEV12	=	0x414c
                     415C  2636 G$AX5043_FREQDEV13$0$0 == 0x415c
                     415C  2637 _AX5043_FREQDEV13	=	0x415c
                     4127  2638 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                     4127  2639 _AX5043_FREQUENCYGAINA0	=	0x4127
                     4137  2640 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                     4137  2641 _AX5043_FREQUENCYGAINA1	=	0x4137
                     4147  2642 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                     4147  2643 _AX5043_FREQUENCYGAINA2	=	0x4147
                     4157  2644 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                     4157  2645 _AX5043_FREQUENCYGAINA3	=	0x4157
                     4128  2646 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                     4128  2647 _AX5043_FREQUENCYGAINB0	=	0x4128
                     4138  2648 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                     4138  2649 _AX5043_FREQUENCYGAINB1	=	0x4138
                     4148  2650 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                     4148  2651 _AX5043_FREQUENCYGAINB2	=	0x4148
                     4158  2652 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                     4158  2653 _AX5043_FREQUENCYGAINB3	=	0x4158
                     4129  2654 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                     4129  2655 _AX5043_FREQUENCYGAINC0	=	0x4129
                     4139  2656 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                     4139  2657 _AX5043_FREQUENCYGAINC1	=	0x4139
                     4149  2658 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                     4149  2659 _AX5043_FREQUENCYGAINC2	=	0x4149
                     4159  2660 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                     4159  2661 _AX5043_FREQUENCYGAINC3	=	0x4159
                     412A  2662 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                     412A  2663 _AX5043_FREQUENCYGAIND0	=	0x412a
                     413A  2664 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                     413A  2665 _AX5043_FREQUENCYGAIND1	=	0x413a
                     414A  2666 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                     414A  2667 _AX5043_FREQUENCYGAIND2	=	0x414a
                     415A  2668 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                     415A  2669 _AX5043_FREQUENCYGAIND3	=	0x415a
                     4116  2670 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                     4116  2671 _AX5043_FREQUENCYLEAK	=	0x4116
                     4126  2672 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                     4126  2673 _AX5043_PHASEGAIN0	=	0x4126
                     4136  2674 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                     4136  2675 _AX5043_PHASEGAIN1	=	0x4136
                     4146  2676 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                     4146  2677 _AX5043_PHASEGAIN2	=	0x4146
                     4156  2678 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                     4156  2679 _AX5043_PHASEGAIN3	=	0x4156
                     4207  2680 G$AX5043_PKTADDR0$0$0 == 0x4207
                     4207  2681 _AX5043_PKTADDR0	=	0x4207
                     4206  2682 G$AX5043_PKTADDR1$0$0 == 0x4206
                     4206  2683 _AX5043_PKTADDR1	=	0x4206
                     4205  2684 G$AX5043_PKTADDR2$0$0 == 0x4205
                     4205  2685 _AX5043_PKTADDR2	=	0x4205
                     4204  2686 G$AX5043_PKTADDR3$0$0 == 0x4204
                     4204  2687 _AX5043_PKTADDR3	=	0x4204
                     4200  2688 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                     4200  2689 _AX5043_PKTADDRCFG	=	0x4200
                     420B  2690 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                     420B  2691 _AX5043_PKTADDRMASK0	=	0x420b
                     420A  2692 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                     420A  2693 _AX5043_PKTADDRMASK1	=	0x420a
                     4209  2694 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                     4209  2695 _AX5043_PKTADDRMASK2	=	0x4209
                     4208  2696 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                     4208  2697 _AX5043_PKTADDRMASK3	=	0x4208
                     4201  2698 G$AX5043_PKTLENCFG$0$0 == 0x4201
                     4201  2699 _AX5043_PKTLENCFG	=	0x4201
                     4202  2700 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                     4202  2701 _AX5043_PKTLENOFFSET	=	0x4202
                     4203  2702 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                     4203  2703 _AX5043_PKTMAXLEN	=	0x4203
                     4118  2704 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                     4118  2705 _AX5043_RXPARAMCURSET	=	0x4118
                     4117  2706 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                     4117  2707 _AX5043_RXPARAMSETS	=	0x4117
                     4124  2708 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                     4124  2709 _AX5043_TIMEGAIN0	=	0x4124
                     4134  2710 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                     4134  2711 _AX5043_TIMEGAIN1	=	0x4134
                     4144  2712 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                     4144  2713 _AX5043_TIMEGAIN2	=	0x4144
                     4154  2714 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                     4154  2715 _AX5043_TIMEGAIN3	=	0x4154
                     5114  2716 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                     5114  2717 _AX5043_AFSKCTRLNB	=	0x5114
                     5113  2718 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                     5113  2719 _AX5043_AFSKMARK0NB	=	0x5113
                     5112  2720 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                     5112  2721 _AX5043_AFSKMARK1NB	=	0x5112
                     5111  2722 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                     5111  2723 _AX5043_AFSKSPACE0NB	=	0x5111
                     5110  2724 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                     5110  2725 _AX5043_AFSKSPACE1NB	=	0x5110
                     5043  2726 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                     5043  2727 _AX5043_AGCCOUNTERNB	=	0x5043
                     5115  2728 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                     5115  2729 _AX5043_AMPLFILTERNB	=	0x5115
                     5189  2730 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                     5189  2731 _AX5043_BBOFFSCAPNB	=	0x5189
                     5188  2732 G$AX5043_BBTUNENB$0$0 == 0x5188
                     5188  2733 _AX5043_BBTUNENB	=	0x5188
                     5041  2734 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                     5041  2735 _AX5043_BGNDRSSINB	=	0x5041
                     522E  2736 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                     522E  2737 _AX5043_BGNDRSSIGAINNB	=	0x522e
                     522F  2738 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                     522F  2739 _AX5043_BGNDRSSITHRNB	=	0x522f
                     5017  2740 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                     5017  2741 _AX5043_CRCINIT0NB	=	0x5017
                     5016  2742 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                     5016  2743 _AX5043_CRCINIT1NB	=	0x5016
                     5015  2744 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                     5015  2745 _AX5043_CRCINIT2NB	=	0x5015
                     5014  2746 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                     5014  2747 _AX5043_CRCINIT3NB	=	0x5014
                     5332  2748 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                     5332  2749 _AX5043_DACCONFIGNB	=	0x5332
                     5331  2750 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                     5331  2751 _AX5043_DACVALUE0NB	=	0x5331
                     5330  2752 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                     5330  2753 _AX5043_DACVALUE1NB	=	0x5330
                     5102  2754 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                     5102  2755 _AX5043_DECIMATIONNB	=	0x5102
                     5042  2756 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                     5042  2757 _AX5043_DIVERSITYNB	=	0x5042
                     5011  2758 G$AX5043_ENCODINGNB$0$0 == 0x5011
                     5011  2759 _AX5043_ENCODINGNB	=	0x5011
                     5018  2760 G$AX5043_FECNB$0$0 == 0x5018
                     5018  2761 _AX5043_FECNB	=	0x5018
                     501A  2762 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                     501A  2763 _AX5043_FECSTATUSNB	=	0x501a
                     5019  2764 G$AX5043_FECSYNCNB$0$0 == 0x5019
                     5019  2765 _AX5043_FECSYNCNB	=	0x5019
                     502B  2766 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                     502B  2767 _AX5043_FIFOCOUNT0NB	=	0x502b
                     502A  2768 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                     502A  2769 _AX5043_FIFOCOUNT1NB	=	0x502a
                     5029  2770 G$AX5043_FIFODATANB$0$0 == 0x5029
                     5029  2771 _AX5043_FIFODATANB	=	0x5029
                     502D  2772 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                     502D  2773 _AX5043_FIFOFREE0NB	=	0x502d
                     502C  2774 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                     502C  2775 _AX5043_FIFOFREE1NB	=	0x502c
                     5028  2776 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                     5028  2777 _AX5043_FIFOSTATNB	=	0x5028
                     502F  2778 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                     502F  2779 _AX5043_FIFOTHRESH0NB	=	0x502f
                     502E  2780 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                     502E  2781 _AX5043_FIFOTHRESH1NB	=	0x502e
                     5012  2782 G$AX5043_FRAMINGNB$0$0 == 0x5012
                     5012  2783 _AX5043_FRAMINGNB	=	0x5012
                     5037  2784 G$AX5043_FREQA0NB$0$0 == 0x5037
                     5037  2785 _AX5043_FREQA0NB	=	0x5037
                     5036  2786 G$AX5043_FREQA1NB$0$0 == 0x5036
                     5036  2787 _AX5043_FREQA1NB	=	0x5036
                     5035  2788 G$AX5043_FREQA2NB$0$0 == 0x5035
                     5035  2789 _AX5043_FREQA2NB	=	0x5035
                     5034  2790 G$AX5043_FREQA3NB$0$0 == 0x5034
                     5034  2791 _AX5043_FREQA3NB	=	0x5034
                     503F  2792 G$AX5043_FREQB0NB$0$0 == 0x503f
                     503F  2793 _AX5043_FREQB0NB	=	0x503f
                     503E  2794 G$AX5043_FREQB1NB$0$0 == 0x503e
                     503E  2795 _AX5043_FREQB1NB	=	0x503e
                     503D  2796 G$AX5043_FREQB2NB$0$0 == 0x503d
                     503D  2797 _AX5043_FREQB2NB	=	0x503d
                     503C  2798 G$AX5043_FREQB3NB$0$0 == 0x503c
                     503C  2799 _AX5043_FREQB3NB	=	0x503c
                     5163  2800 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                     5163  2801 _AX5043_FSKDEV0NB	=	0x5163
                     5162  2802 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                     5162  2803 _AX5043_FSKDEV1NB	=	0x5162
                     5161  2804 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                     5161  2805 _AX5043_FSKDEV2NB	=	0x5161
                     510D  2806 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                     510D  2807 _AX5043_FSKDMAX0NB	=	0x510d
                     510C  2808 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                     510C  2809 _AX5043_FSKDMAX1NB	=	0x510c
                     510F  2810 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                     510F  2811 _AX5043_FSKDMIN0NB	=	0x510f
                     510E  2812 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                     510E  2813 _AX5043_FSKDMIN1NB	=	0x510e
                     5309  2814 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                     5309  2815 _AX5043_GPADC13VALUE0NB	=	0x5309
                     5308  2816 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                     5308  2817 _AX5043_GPADC13VALUE1NB	=	0x5308
                     5300  2818 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                     5300  2819 _AX5043_GPADCCTRLNB	=	0x5300
                     5301  2820 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                     5301  2821 _AX5043_GPADCPERIODNB	=	0x5301
                     5101  2822 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                     5101  2823 _AX5043_IFFREQ0NB	=	0x5101
                     5100  2824 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                     5100  2825 _AX5043_IFFREQ1NB	=	0x5100
                     500B  2826 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                     500B  2827 _AX5043_IRQINVERSION0NB	=	0x500b
                     500A  2828 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                     500A  2829 _AX5043_IRQINVERSION1NB	=	0x500a
                     5007  2830 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                     5007  2831 _AX5043_IRQMASK0NB	=	0x5007
                     5006  2832 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                     5006  2833 _AX5043_IRQMASK1NB	=	0x5006
                     500D  2834 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                     500D  2835 _AX5043_IRQREQUEST0NB	=	0x500d
                     500C  2836 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                     500C  2837 _AX5043_IRQREQUEST1NB	=	0x500c
                     5310  2838 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                     5310  2839 _AX5043_LPOSCCONFIGNB	=	0x5310
                     5317  2840 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                     5317  2841 _AX5043_LPOSCFREQ0NB	=	0x5317
                     5316  2842 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                     5316  2843 _AX5043_LPOSCFREQ1NB	=	0x5316
                     5313  2844 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                     5313  2845 _AX5043_LPOSCKFILT0NB	=	0x5313
                     5312  2846 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                     5312  2847 _AX5043_LPOSCKFILT1NB	=	0x5312
                     5319  2848 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                     5319  2849 _AX5043_LPOSCPER0NB	=	0x5319
                     5318  2850 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                     5318  2851 _AX5043_LPOSCPER1NB	=	0x5318
                     5315  2852 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                     5315  2853 _AX5043_LPOSCREF0NB	=	0x5315
                     5314  2854 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                     5314  2855 _AX5043_LPOSCREF1NB	=	0x5314
                     5311  2856 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                     5311  2857 _AX5043_LPOSCSTATUSNB	=	0x5311
                     5214  2858 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                     5214  2859 _AX5043_MATCH0LENNB	=	0x5214
                     5216  2860 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                     5216  2861 _AX5043_MATCH0MAXNB	=	0x5216
                     5215  2862 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                     5215  2863 _AX5043_MATCH0MINNB	=	0x5215
                     5213  2864 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                     5213  2865 _AX5043_MATCH0PAT0NB	=	0x5213
                     5212  2866 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                     5212  2867 _AX5043_MATCH0PAT1NB	=	0x5212
                     5211  2868 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                     5211  2869 _AX5043_MATCH0PAT2NB	=	0x5211
                     5210  2870 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                     5210  2871 _AX5043_MATCH0PAT3NB	=	0x5210
                     521C  2872 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                     521C  2873 _AX5043_MATCH1LENNB	=	0x521c
                     521E  2874 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                     521E  2875 _AX5043_MATCH1MAXNB	=	0x521e
                     521D  2876 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                     521D  2877 _AX5043_MATCH1MINNB	=	0x521d
                     5219  2878 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                     5219  2879 _AX5043_MATCH1PAT0NB	=	0x5219
                     5218  2880 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                     5218  2881 _AX5043_MATCH1PAT1NB	=	0x5218
                     5108  2882 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                     5108  2883 _AX5043_MAXDROFFSET0NB	=	0x5108
                     5107  2884 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                     5107  2885 _AX5043_MAXDROFFSET1NB	=	0x5107
                     5106  2886 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                     5106  2887 _AX5043_MAXDROFFSET2NB	=	0x5106
                     510B  2888 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                     510B  2889 _AX5043_MAXRFOFFSET0NB	=	0x510b
                     510A  2890 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                     510A  2891 _AX5043_MAXRFOFFSET1NB	=	0x510a
                     5109  2892 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                     5109  2893 _AX5043_MAXRFOFFSET2NB	=	0x5109
                     5164  2894 G$AX5043_MODCFGANB$0$0 == 0x5164
                     5164  2895 _AX5043_MODCFGANB	=	0x5164
                     5160  2896 G$AX5043_MODCFGFNB$0$0 == 0x5160
                     5160  2897 _AX5043_MODCFGFNB	=	0x5160
                     5010  2898 G$AX5043_MODULATIONNB$0$0 == 0x5010
                     5010  2899 _AX5043_MODULATIONNB	=	0x5010
                     5025  2900 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                     5025  2901 _AX5043_PINFUNCANTSELNB	=	0x5025
                     5023  2902 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                     5023  2903 _AX5043_PINFUNCDATANB	=	0x5023
                     5022  2904 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                     5022  2905 _AX5043_PINFUNCDCLKNB	=	0x5022
                     5024  2906 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                     5024  2907 _AX5043_PINFUNCIRQNB	=	0x5024
                     5026  2908 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                     5026  2909 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                     5021  2910 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                     5021  2911 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                     5020  2912 G$AX5043_PINSTATENB$0$0 == 0x5020
                     5020  2913 _AX5043_PINSTATENB	=	0x5020
                     5233  2914 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                     5233  2915 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                     5230  2916 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                     5230  2917 _AX5043_PKTCHUNKSIZENB	=	0x5230
                     5231  2918 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                     5231  2919 _AX5043_PKTMISCFLAGSNB	=	0x5231
                     5232  2920 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                     5232  2921 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                     5031  2922 G$AX5043_PLLCPINB$0$0 == 0x5031
                     5031  2923 _AX5043_PLLCPINB	=	0x5031
                     5039  2924 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                     5039  2925 _AX5043_PLLCPIBOOSTNB	=	0x5039
                     5182  2926 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                     5182  2927 _AX5043_PLLLOCKDETNB	=	0x5182
                     5030  2928 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                     5030  2929 _AX5043_PLLLOOPNB	=	0x5030
                     5038  2930 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                     5038  2931 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                     5033  2932 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                     5033  2933 _AX5043_PLLRANGINGANB	=	0x5033
                     503B  2934 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                     503B  2935 _AX5043_PLLRANGINGBNB	=	0x503b
                     5183  2936 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                     5183  2937 _AX5043_PLLRNGCLKNB	=	0x5183
                     5032  2938 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                     5032  2939 _AX5043_PLLVCODIVNB	=	0x5032
                     5180  2940 G$AX5043_PLLVCOINB$0$0 == 0x5180
                     5180  2941 _AX5043_PLLVCOINB	=	0x5180
                     5181  2942 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                     5181  2943 _AX5043_PLLVCOIRNB	=	0x5181
                     5005  2944 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                     5005  2945 _AX5043_POWIRQMASKNB	=	0x5005
                     5003  2946 G$AX5043_POWSTATNB$0$0 == 0x5003
                     5003  2947 _AX5043_POWSTATNB	=	0x5003
                     5004  2948 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                     5004  2949 _AX5043_POWSTICKYSTATNB	=	0x5004
                     5027  2950 G$AX5043_PWRAMPNB$0$0 == 0x5027
                     5027  2951 _AX5043_PWRAMPNB	=	0x5027
                     5002  2952 G$AX5043_PWRMODENB$0$0 == 0x5002
                     5002  2953 _AX5043_PWRMODENB	=	0x5002
                     5009  2954 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                     5009  2955 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                     5008  2956 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                     5008  2957 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                     500F  2958 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                     500F  2959 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                     500E  2960 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                     500E  2961 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                     501C  2962 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                     501C  2963 _AX5043_RADIOSTATENB	=	0x501c
                     5040  2964 G$AX5043_RSSINB$0$0 == 0x5040
                     5040  2965 _AX5043_RSSINB	=	0x5040
                     522D  2966 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                     522D  2967 _AX5043_RSSIABSTHRNB	=	0x522d
                     522C  2968 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                     522C  2969 _AX5043_RSSIREFERENCENB	=	0x522c
                     5105  2970 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                     5105  2971 _AX5043_RXDATARATE0NB	=	0x5105
                     5104  2972 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                     5104  2973 _AX5043_RXDATARATE1NB	=	0x5104
                     5103  2974 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                     5103  2975 _AX5043_RXDATARATE2NB	=	0x5103
                     5001  2976 G$AX5043_SCRATCHNB$0$0 == 0x5001
                     5001  2977 _AX5043_SCRATCHNB	=	0x5001
                     5000  2978 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                     5000  2979 _AX5043_SILICONREVISIONNB	=	0x5000
                     505B  2980 G$AX5043_TIMER0NB$0$0 == 0x505b
                     505B  2981 _AX5043_TIMER0NB	=	0x505b
                     505A  2982 G$AX5043_TIMER1NB$0$0 == 0x505a
                     505A  2983 _AX5043_TIMER1NB	=	0x505a
                     5059  2984 G$AX5043_TIMER2NB$0$0 == 0x5059
                     5059  2985 _AX5043_TIMER2NB	=	0x5059
                     5227  2986 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                     5227  2987 _AX5043_TMGRXAGCNB	=	0x5227
                     5223  2988 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                     5223  2989 _AX5043_TMGRXBOOSTNB	=	0x5223
                     5226  2990 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                     5226  2991 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                     5225  2992 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                     5225  2993 _AX5043_TMGRXOFFSACQNB	=	0x5225
                     5229  2994 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                     5229  2995 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                     522A  2996 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                     522A  2997 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                     522B  2998 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                     522B  2999 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                     5228  3000 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                     5228  3001 _AX5043_TMGRXRSSINB	=	0x5228
                     5224  3002 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                     5224  3003 _AX5043_TMGRXSETTLENB	=	0x5224
                     5220  3004 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                     5220  3005 _AX5043_TMGTXBOOSTNB	=	0x5220
                     5221  3006 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                     5221  3007 _AX5043_TMGTXSETTLENB	=	0x5221
                     5055  3008 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                     5055  3009 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                     5054  3010 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                     5054  3011 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                     5049  3012 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                     5049  3013 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                     5048  3014 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                     5048  3015 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                     5047  3016 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                     5047  3017 _AX5043_TRKDATARATE0NB	=	0x5047
                     5046  3018 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                     5046  3019 _AX5043_TRKDATARATE1NB	=	0x5046
                     5045  3020 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                     5045  3021 _AX5043_TRKDATARATE2NB	=	0x5045
                     5051  3022 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                     5051  3023 _AX5043_TRKFREQ0NB	=	0x5051
                     5050  3024 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                     5050  3025 _AX5043_TRKFREQ1NB	=	0x5050
                     5053  3026 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                     5053  3027 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                     5052  3028 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                     5052  3029 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                     504B  3030 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                     504B  3031 _AX5043_TRKPHASE0NB	=	0x504b
                     504A  3032 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                     504A  3033 _AX5043_TRKPHASE1NB	=	0x504a
                     504F  3034 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                     504F  3035 _AX5043_TRKRFFREQ0NB	=	0x504f
                     504E  3036 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                     504E  3037 _AX5043_TRKRFFREQ1NB	=	0x504e
                     504D  3038 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                     504D  3039 _AX5043_TRKRFFREQ2NB	=	0x504d
                     5169  3040 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                     5169  3041 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                     5168  3042 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                     5168  3043 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                     516B  3044 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                     516B  3045 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                     516A  3046 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                     516A  3047 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                     516D  3048 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                     516D  3049 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                     516C  3050 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                     516C  3051 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                     516F  3052 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                     516F  3053 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                     516E  3054 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                     516E  3055 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                     5171  3056 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                     5171  3057 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                     5170  3058 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                     5170  3059 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                     5167  3060 G$AX5043_TXRATE0NB$0$0 == 0x5167
                     5167  3061 _AX5043_TXRATE0NB	=	0x5167
                     5166  3062 G$AX5043_TXRATE1NB$0$0 == 0x5166
                     5166  3063 _AX5043_TXRATE1NB	=	0x5166
                     5165  3064 G$AX5043_TXRATE2NB$0$0 == 0x5165
                     5165  3065 _AX5043_TXRATE2NB	=	0x5165
                     506B  3066 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                     506B  3067 _AX5043_WAKEUP0NB	=	0x506b
                     506A  3068 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                     506A  3069 _AX5043_WAKEUP1NB	=	0x506a
                     506D  3070 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                     506D  3071 _AX5043_WAKEUPFREQ0NB	=	0x506d
                     506C  3072 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                     506C  3073 _AX5043_WAKEUPFREQ1NB	=	0x506c
                     5069  3074 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                     5069  3075 _AX5043_WAKEUPTIMER0NB	=	0x5069
                     5068  3076 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                     5068  3077 _AX5043_WAKEUPTIMER1NB	=	0x5068
                     506E  3078 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                     506E  3079 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                     5184  3080 G$AX5043_XTALCAPNB$0$0 == 0x5184
                     5184  3081 _AX5043_XTALCAPNB	=	0x5184
                     501D  3082 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                     501D  3083 _AX5043_XTALSTATUSNB	=	0x501d
                     5122  3084 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                     5122  3085 _AX5043_AGCAHYST0NB	=	0x5122
                     5132  3086 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                     5132  3087 _AX5043_AGCAHYST1NB	=	0x5132
                     5142  3088 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                     5142  3089 _AX5043_AGCAHYST2NB	=	0x5142
                     5152  3090 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                     5152  3091 _AX5043_AGCAHYST3NB	=	0x5152
                     5120  3092 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                     5120  3093 _AX5043_AGCGAIN0NB	=	0x5120
                     5130  3094 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                     5130  3095 _AX5043_AGCGAIN1NB	=	0x5130
                     5140  3096 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                     5140  3097 _AX5043_AGCGAIN2NB	=	0x5140
                     5150  3098 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                     5150  3099 _AX5043_AGCGAIN3NB	=	0x5150
                     5123  3100 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                     5123  3101 _AX5043_AGCMINMAX0NB	=	0x5123
                     5133  3102 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                     5133  3103 _AX5043_AGCMINMAX1NB	=	0x5133
                     5143  3104 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                     5143  3105 _AX5043_AGCMINMAX2NB	=	0x5143
                     5153  3106 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                     5153  3107 _AX5043_AGCMINMAX3NB	=	0x5153
                     5121  3108 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                     5121  3109 _AX5043_AGCTARGET0NB	=	0x5121
                     5131  3110 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                     5131  3111 _AX5043_AGCTARGET1NB	=	0x5131
                     5141  3112 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                     5141  3113 _AX5043_AGCTARGET2NB	=	0x5141
                     5151  3114 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                     5151  3115 _AX5043_AGCTARGET3NB	=	0x5151
                     512B  3116 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                     512B  3117 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                     513B  3118 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                     513B  3119 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                     514B  3120 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                     514B  3121 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                     515B  3122 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                     515B  3123 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                     512F  3124 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                     512F  3125 _AX5043_BBOFFSRES0NB	=	0x512f
                     513F  3126 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                     513F  3127 _AX5043_BBOFFSRES1NB	=	0x513f
                     514F  3128 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                     514F  3129 _AX5043_BBOFFSRES2NB	=	0x514f
                     515F  3130 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                     515F  3131 _AX5043_BBOFFSRES3NB	=	0x515f
                     5125  3132 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                     5125  3133 _AX5043_DRGAIN0NB	=	0x5125
                     5135  3134 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                     5135  3135 _AX5043_DRGAIN1NB	=	0x5135
                     5145  3136 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                     5145  3137 _AX5043_DRGAIN2NB	=	0x5145
                     5155  3138 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                     5155  3139 _AX5043_DRGAIN3NB	=	0x5155
                     512E  3140 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                     512E  3141 _AX5043_FOURFSK0NB	=	0x512e
                     513E  3142 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                     513E  3143 _AX5043_FOURFSK1NB	=	0x513e
                     514E  3144 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                     514E  3145 _AX5043_FOURFSK2NB	=	0x514e
                     515E  3146 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                     515E  3147 _AX5043_FOURFSK3NB	=	0x515e
                     512D  3148 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                     512D  3149 _AX5043_FREQDEV00NB	=	0x512d
                     513D  3150 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                     513D  3151 _AX5043_FREQDEV01NB	=	0x513d
                     514D  3152 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                     514D  3153 _AX5043_FREQDEV02NB	=	0x514d
                     515D  3154 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                     515D  3155 _AX5043_FREQDEV03NB	=	0x515d
                     512C  3156 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                     512C  3157 _AX5043_FREQDEV10NB	=	0x512c
                     513C  3158 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                     513C  3159 _AX5043_FREQDEV11NB	=	0x513c
                     514C  3160 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                     514C  3161 _AX5043_FREQDEV12NB	=	0x514c
                     515C  3162 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                     515C  3163 _AX5043_FREQDEV13NB	=	0x515c
                     5127  3164 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                     5127  3165 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                     5137  3166 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                     5137  3167 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                     5147  3168 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                     5147  3169 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                     5157  3170 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                     5157  3171 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                     5128  3172 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                     5128  3173 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                     5138  3174 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                     5138  3175 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                     5148  3176 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                     5148  3177 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                     5158  3178 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                     5158  3179 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                     5129  3180 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                     5129  3181 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                     5139  3182 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                     5139  3183 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                     5149  3184 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                     5149  3185 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                     5159  3186 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                     5159  3187 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                     512A  3188 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                     512A  3189 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                     513A  3190 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                     513A  3191 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                     514A  3192 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                     514A  3193 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                     515A  3194 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                     515A  3195 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                     5116  3196 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                     5116  3197 _AX5043_FREQUENCYLEAKNB	=	0x5116
                     5126  3198 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                     5126  3199 _AX5043_PHASEGAIN0NB	=	0x5126
                     5136  3200 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                     5136  3201 _AX5043_PHASEGAIN1NB	=	0x5136
                     5146  3202 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                     5146  3203 _AX5043_PHASEGAIN2NB	=	0x5146
                     5156  3204 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                     5156  3205 _AX5043_PHASEGAIN3NB	=	0x5156
                     5207  3206 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                     5207  3207 _AX5043_PKTADDR0NB	=	0x5207
                     5206  3208 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                     5206  3209 _AX5043_PKTADDR1NB	=	0x5206
                     5205  3210 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                     5205  3211 _AX5043_PKTADDR2NB	=	0x5205
                     5204  3212 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                     5204  3213 _AX5043_PKTADDR3NB	=	0x5204
                     5200  3214 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                     5200  3215 _AX5043_PKTADDRCFGNB	=	0x5200
                     520B  3216 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                     520B  3217 _AX5043_PKTADDRMASK0NB	=	0x520b
                     520A  3218 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                     520A  3219 _AX5043_PKTADDRMASK1NB	=	0x520a
                     5209  3220 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                     5209  3221 _AX5043_PKTADDRMASK2NB	=	0x5209
                     5208  3222 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                     5208  3223 _AX5043_PKTADDRMASK3NB	=	0x5208
                     5201  3224 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                     5201  3225 _AX5043_PKTLENCFGNB	=	0x5201
                     5202  3226 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                     5202  3227 _AX5043_PKTLENOFFSETNB	=	0x5202
                     5203  3228 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                     5203  3229 _AX5043_PKTMAXLENNB	=	0x5203
                     5118  3230 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                     5118  3231 _AX5043_RXPARAMCURSETNB	=	0x5118
                     5117  3232 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                     5117  3233 _AX5043_RXPARAMSETSNB	=	0x5117
                     5124  3234 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                     5124  3235 _AX5043_TIMEGAIN0NB	=	0x5124
                     5134  3236 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                     5134  3237 _AX5043_TIMEGAIN1NB	=	0x5134
                     5144  3238 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                     5144  3239 _AX5043_TIMEGAIN2NB	=	0x5144
                     5154  3240 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                     5154  3241 _AX5043_TIMEGAIN3NB	=	0x5154
                     4F00  3242 G$AX5043_0xF00$0$0 == 0x4f00
                     4F00  3243 _AX5043_0xF00	=	0x4f00
                     4F01  3244 G$AX5043_0xF01$0$0 == 0x4f01
                     4F01  3245 _AX5043_0xF01	=	0x4f01
                     4F0C  3246 G$AX5043_0xF0C$0$0 == 0x4f0c
                     4F0C  3247 _AX5043_0xF0C	=	0x4f0c
                     4F10  3248 G$AX5043_0xF10$0$0 == 0x4f10
                     4F10  3249 _AX5043_0xF10	=	0x4f10
                     4F11  3250 G$AX5043_0xF11$0$0 == 0x4f11
                     4F11  3251 _AX5043_0xF11	=	0x4f11
                     4F18  3252 G$AX5043_0xF18$0$0 == 0x4f18
                     4F18  3253 _AX5043_0xF18	=	0x4f18
                     4F1C  3254 G$AX5043_0xF1C$0$0 == 0x4f1c
                     4F1C  3255 _AX5043_0xF1C	=	0x4f1c
                     4F21  3256 G$AX5043_0xF21$0$0 == 0x4f21
                     4F21  3257 _AX5043_0xF21	=	0x4f21
                     4F22  3258 G$AX5043_0xF22$0$0 == 0x4f22
                     4F22  3259 _AX5043_0xF22	=	0x4f22
                     4F23  3260 G$AX5043_0xF23$0$0 == 0x4f23
                     4F23  3261 _AX5043_0xF23	=	0x4f23
                     4F26  3262 G$AX5043_0xF26$0$0 == 0x4f26
                     4F26  3263 _AX5043_0xF26	=	0x4f26
                     4F2F  3264 G$AX5043_0xF2F$0$0 == 0x4f2f
                     4F2F  3265 _AX5043_0xF2F	=	0x4f2f
                     4F30  3266 G$AX5043_0xF30$0$0 == 0x4f30
                     4F30  3267 _AX5043_0xF30	=	0x4f30
                     4F31  3268 G$AX5043_0xF31$0$0 == 0x4f31
                     4F31  3269 _AX5043_0xF31	=	0x4f31
                     4F32  3270 G$AX5043_0xF32$0$0 == 0x4f32
                     4F32  3271 _AX5043_0xF32	=	0x4f32
                     4F33  3272 G$AX5043_0xF33$0$0 == 0x4f33
                     4F33  3273 _AX5043_0xF33	=	0x4f33
                     4F34  3274 G$AX5043_0xF34$0$0 == 0x4f34
                     4F34  3275 _AX5043_0xF34	=	0x4f34
                     4F35  3276 G$AX5043_0xF35$0$0 == 0x4f35
                     4F35  3277 _AX5043_0xF35	=	0x4f35
                     4F44  3278 G$AX5043_0xF44$0$0 == 0x4f44
                     4F44  3279 _AX5043_0xF44	=	0x4f44
                     4F0D  3280 G$AX5043_REF$0$0 == 0x4f0d
                     4F0D  3281 _AX5043_REF	=	0x4f0d
                     4F08  3282 G$AX5043_POWCTRL1$0$0 == 0x4f08
                     4F08  3283 _AX5043_POWCTRL1	=	0x4f08
                     0000  3284 G$axradio_syncstate$0$0==.
   0004                    3285 _axradio_syncstate::
   0004                    3286 	.ds 1
                     0001  3287 G$axradio_txbuffer_len$0$0==.
   0005                    3288 _axradio_txbuffer_len::
   0005                    3289 	.ds 2
                     0003  3290 G$axradio_txbuffer_cnt$0$0==.
   0007                    3291 _axradio_txbuffer_cnt::
   0007                    3292 	.ds 2
                     0005  3293 G$axradio_curchannel$0$0==.
   0009                    3294 _axradio_curchannel::
   0009                    3295 	.ds 1
                     0006  3296 G$axradio_curfreqoffset$0$0==.
   000A                    3297 _axradio_curfreqoffset::
   000A                    3298 	.ds 4
                     000A  3299 G$axradio_ack_count$0$0==.
   000E                    3300 _axradio_ack_count::
   000E                    3301 	.ds 1
                     000B  3302 G$axradio_ack_seqnr$0$0==.
   000F                    3303 _axradio_ack_seqnr::
   000F                    3304 	.ds 1
                     000C  3305 G$axradio_sync_time$0$0==.
   0010                    3306 _axradio_sync_time::
   0010                    3307 	.ds 4
                     0010  3308 G$axradio_sync_periodcorr$0$0==.
   0014                    3309 _axradio_sync_periodcorr::
   0014                    3310 	.ds 2
                     0012  3311 G$axradio_timeanchor$0$0==.
   0016                    3312 _axradio_timeanchor::
   0016                    3313 	.ds 8
                     001A  3314 G$axradio_localaddr$0$0==.
   001E                    3315 _axradio_localaddr::
   001E                    3316 	.ds 8
                     0022  3317 G$axradio_default_remoteaddr$0$0==.
   0026                    3318 _axradio_default_remoteaddr::
   0026                    3319 	.ds 4
                     0026  3320 G$axradio_txbuffer$0$0==.
   002A                    3321 _axradio_txbuffer::
   002A                    3322 	.ds 260
                     012A  3323 G$axradio_rxbuffer$0$0==.
   012E                    3324 _axradio_rxbuffer::
   012E                    3325 	.ds 260
                     022E  3326 G$axradio_cb_receive$0$0==.
   0232                    3327 _axradio_cb_receive::
   0232                    3328 	.ds 34
                     0250  3329 G$axradio_cb_receivesfd$0$0==.
   0254                    3330 _axradio_cb_receivesfd::
   0254                    3331 	.ds 10
                     025A  3332 G$axradio_cb_channelstate$0$0==.
   025E                    3333 _axradio_cb_channelstate::
   025E                    3334 	.ds 13
                     0267  3335 G$axradio_cb_transmitstart$0$0==.
   026B                    3336 _axradio_cb_transmitstart::
   026B                    3337 	.ds 10
                     0271  3338 G$axradio_cb_transmitend$0$0==.
   0275                    3339 _axradio_cb_transmitend::
   0275                    3340 	.ds 10
                     027B  3341 G$axradio_cb_transmitdata$0$0==.
   027F                    3342 _axradio_cb_transmitdata::
   027F                    3343 	.ds 10
                     0285  3344 G$axradio_timer$0$0==.
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
                     0000  3355 G$f30_saved$0$0==.
   0441                    3356 _f30_saved::
   0441                    3357 	.ds 1
                     0001  3358 G$f31_saved$0$0==.
   0442                    3359 _f31_saved::
   0442                    3360 	.ds 1
                     0002  3361 G$f32_saved$0$0==.
   0443                    3362 _f32_saved::
   0443                    3363 	.ds 1
                     0003  3364 G$f33_saved$0$0==.
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
                     0000  3384 	C$easyax5043.c$55$1$411 ==.
                           3385 ;	../COMMON/easyax5043.c:55: volatile uint8_t __data axradio_mode = AXRADIO_MODE_UNINIT;
   012A 75 0A 00      [24] 3386 	mov	_axradio_mode,#0x00
                     0003  3387 	C$easyax5043.c$56$1$411 ==.
                           3388 ;	../COMMON/easyax5043.c:56: volatile axradio_trxstate_t __data axradio_trxstate = trxstate_off;
   012D 75 0B 00      [24] 3389 	mov	_axradio_trxstate,#0x00
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
                     0000  3404 	Feasyax5043$update_timeanchor$0$0 ==.
                     0000  3405 	C$easyax5043.c$234$0$0 ==.
                           3406 ;	../COMMON/easyax5043.c:234: static __reentrantb void update_timeanchor(void) __reentrant
                           3407 ;	-----------------------------------------
                           3408 ;	 function update_timeanchor
                           3409 ;	-----------------------------------------
   0833                    3410 _update_timeanchor:
                     0007  3411 	ar7 = 0x07
                     0006  3412 	ar6 = 0x06
                     0005  3413 	ar5 = 0x05
                     0004  3414 	ar4 = 0x04
                     0003  3415 	ar3 = 0x03
                     0002  3416 	ar2 = 0x02
                     0001  3417 	ar1 = 0x01
                     0000  3418 	ar0 = 0x00
                     0000  3419 	C$easyax5043.c$236$1$203 ==.
                           3420 ;	../COMMON/easyax5043.c:236: uint8_t iesave = IE & 0x80;
   0833 74 80         [12] 3421 	mov	a,#0x80
   0835 55 A8         [12] 3422 	anl	a,_IE
   0837 FF            [12] 3423 	mov	r7,a
                     0005  3424 	C$easyax5043.c$237$1$203 ==.
                           3425 ;	../COMMON/easyax5043.c:237: EA = 0;
   0838 C2 AF         [12] 3426 	clr	_EA
                     0007  3427 	C$easyax5043.c$238$1$203 ==.
                           3428 ;	../COMMON/easyax5043.c:238: axradio_timeanchor.timer0 = wtimer0_curtime();
   083A C0 07         [24] 3429 	push	ar7
   083C 12 51 53      [24] 3430 	lcall	_wtimer0_curtime
   083F AB 82         [24] 3431 	mov	r3,dpl
   0841 AC 83         [24] 3432 	mov	r4,dph
   0843 AD F0         [24] 3433 	mov	r5,b
   0845 FE            [12] 3434 	mov	r6,a
   0846 D0 07         [24] 3435 	pop	ar7
   0848 90 00 16      [24] 3436 	mov	dptr,#_axradio_timeanchor
   084B EB            [12] 3437 	mov	a,r3
   084C F0            [24] 3438 	movx	@dptr,a
   084D EC            [12] 3439 	mov	a,r4
   084E A3            [24] 3440 	inc	dptr
   084F F0            [24] 3441 	movx	@dptr,a
   0850 ED            [12] 3442 	mov	a,r5
   0851 A3            [24] 3443 	inc	dptr
   0852 F0            [24] 3444 	movx	@dptr,a
   0853 EE            [12] 3445 	mov	a,r6
   0854 A3            [24] 3446 	inc	dptr
   0855 F0            [24] 3447 	movx	@dptr,a
                     0023  3448 	C$easyax5043.c$239$1$203 ==.
                           3449 ;	../COMMON/easyax5043.c:239: axradio_timeanchor.radiotimer = radio_read24((uint16_t)&AX5043_TIMER2);
   0856 90 40 59      [24] 3450 	mov	dptr,#_AX5043_TIMER2
   0859 12 44 90      [24] 3451 	lcall	_radio_read24
   085C AB 82         [24] 3452 	mov	r3,dpl
   085E AC 83         [24] 3453 	mov	r4,dph
   0860 AD F0         [24] 3454 	mov	r5,b
   0862 FE            [12] 3455 	mov	r6,a
   0863 90 00 1A      [24] 3456 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0866 EB            [12] 3457 	mov	a,r3
   0867 F0            [24] 3458 	movx	@dptr,a
   0868 EC            [12] 3459 	mov	a,r4
   0869 A3            [24] 3460 	inc	dptr
   086A F0            [24] 3461 	movx	@dptr,a
   086B ED            [12] 3462 	mov	a,r5
   086C A3            [24] 3463 	inc	dptr
   086D F0            [24] 3464 	movx	@dptr,a
   086E EE            [12] 3465 	mov	a,r6
   086F A3            [24] 3466 	inc	dptr
   0870 F0            [24] 3467 	movx	@dptr,a
                     003E  3468 	C$easyax5043.c$240$1$203 ==.
                           3469 ;	../COMMON/easyax5043.c:240: IE |= iesave;
   0871 EF            [12] 3470 	mov	a,r7
   0872 42 A8         [12] 3471 	orl	_IE,a
                     0041  3472 	C$easyax5043.c$241$1$203 ==.
                     0041  3473 	XFeasyax5043$update_timeanchor$0$0 ==.
   0874 22            [24] 3474 	ret
                           3475 ;------------------------------------------------------------
                           3476 ;Allocation info for local variables in function 'axradio_conv_time_totimer0'
                           3477 ;------------------------------------------------------------
                           3478 ;dt                        Allocated to registers r4 r5 r6 r7 
                           3479 ;------------------------------------------------------------
                     0042  3480 	G$axradio_conv_time_totimer0$0$0 ==.
                     0042  3481 	C$easyax5043.c$243$1$203 ==.
                           3482 ;	../COMMON/easyax5043.c:243: __reentrantb uint32_t axradio_conv_time_totimer0(uint32_t dt) __reentrant
                           3483 ;	-----------------------------------------
                           3484 ;	 function axradio_conv_time_totimer0
                           3485 ;	-----------------------------------------
   0875                    3486 _axradio_conv_time_totimer0:
   0875 AC 82         [24] 3487 	mov	r4,dpl
   0877 AD 83         [24] 3488 	mov	r5,dph
   0879 AE F0         [24] 3489 	mov	r6,b
   087B FF            [12] 3490 	mov	r7,a
                     0049  3491 	C$easyax5043.c$245$1$205 ==.
                           3492 ;	../COMMON/easyax5043.c:245: dt -= axradio_timeanchor.radiotimer;
   087C 90 00 1A      [24] 3493 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   087F E0            [24] 3494 	movx	a,@dptr
   0880 F8            [12] 3495 	mov	r0,a
   0881 A3            [24] 3496 	inc	dptr
   0882 E0            [24] 3497 	movx	a,@dptr
   0883 F9            [12] 3498 	mov	r1,a
   0884 A3            [24] 3499 	inc	dptr
   0885 E0            [24] 3500 	movx	a,@dptr
   0886 FA            [12] 3501 	mov	r2,a
   0887 A3            [24] 3502 	inc	dptr
   0888 E0            [24] 3503 	movx	a,@dptr
   0889 FB            [12] 3504 	mov	r3,a
   088A EC            [12] 3505 	mov	a,r4
   088B C3            [12] 3506 	clr	c
   088C 98            [12] 3507 	subb	a,r0
   088D FC            [12] 3508 	mov	r4,a
   088E ED            [12] 3509 	mov	a,r5
   088F 99            [12] 3510 	subb	a,r1
   0890 FD            [12] 3511 	mov	r5,a
   0891 EE            [12] 3512 	mov	a,r6
   0892 9A            [12] 3513 	subb	a,r2
   0893 FE            [12] 3514 	mov	r6,a
   0894 EF            [12] 3515 	mov	a,r7
   0895 9B            [12] 3516 	subb	a,r3
                     0063  3517 	C$easyax5043.c$246$1$205 ==.
                           3518 ;	../COMMON/easyax5043.c:246: dt = axradio_conv_timeinterval_totimer0(signextend24(dt));
   0896 8C 82         [24] 3519 	mov	dpl,r4
   0898 8D 83         [24] 3520 	mov	dph,r5
   089A 8E F0         [24] 3521 	mov	b,r6
   089C 12 51 4D      [24] 3522 	lcall	_signextend24
   089F 12 05 4D      [24] 3523 	lcall	_axradio_conv_timeinterval_totimer0
   08A2 AC 82         [24] 3524 	mov	r4,dpl
   08A4 AD 83         [24] 3525 	mov	r5,dph
   08A6 AE F0         [24] 3526 	mov	r6,b
   08A8 FF            [12] 3527 	mov	r7,a
                     0076  3528 	C$easyax5043.c$247$1$205 ==.
                           3529 ;	../COMMON/easyax5043.c:247: dt += axradio_timeanchor.timer0;
   08A9 90 00 16      [24] 3530 	mov	dptr,#_axradio_timeanchor
   08AC E0            [24] 3531 	movx	a,@dptr
   08AD F8            [12] 3532 	mov	r0,a
   08AE A3            [24] 3533 	inc	dptr
   08AF E0            [24] 3534 	movx	a,@dptr
   08B0 F9            [12] 3535 	mov	r1,a
   08B1 A3            [24] 3536 	inc	dptr
   08B2 E0            [24] 3537 	movx	a,@dptr
   08B3 FA            [12] 3538 	mov	r2,a
   08B4 A3            [24] 3539 	inc	dptr
   08B5 E0            [24] 3540 	movx	a,@dptr
   08B6 FB            [12] 3541 	mov	r3,a
   08B7 E8            [12] 3542 	mov	a,r0
   08B8 2C            [12] 3543 	add	a,r4
   08B9 FC            [12] 3544 	mov	r4,a
   08BA E9            [12] 3545 	mov	a,r1
   08BB 3D            [12] 3546 	addc	a,r5
   08BC FD            [12] 3547 	mov	r5,a
   08BD EA            [12] 3548 	mov	a,r2
   08BE 3E            [12] 3549 	addc	a,r6
   08BF FE            [12] 3550 	mov	r6,a
   08C0 EB            [12] 3551 	mov	a,r3
   08C1 3F            [12] 3552 	addc	a,r7
                     008F  3553 	C$easyax5043.c$248$1$205 ==.
                           3554 ;	../COMMON/easyax5043.c:248: return dt;
   08C2 8C 82         [24] 3555 	mov	dpl,r4
   08C4 8D 83         [24] 3556 	mov	dph,r5
   08C6 8E F0         [24] 3557 	mov	b,r6
                     0095  3558 	C$easyax5043.c$249$1$205 ==.
                     0095  3559 	XG$axradio_conv_time_totimer0$0$0 ==.
   08C8 22            [24] 3560 	ret
                           3561 ;------------------------------------------------------------
                           3562 ;Allocation info for local variables in function 'ax5043_init_registers_tx'
                           3563 ;------------------------------------------------------------
                           3564 ;rng                       Allocated to registers r7 
                           3565 ;------------------------------------------------------------
                     0096  3566 	G$ax5043_init_registers_tx$0$0 ==.
                     0096  3567 	C$easyax5043.c$251$1$205 ==.
                           3568 ;	../COMMON/easyax5043.c:251: __reentrantb uint8_t ax5043_init_registers_tx(void) __reentrant
                           3569 ;	-----------------------------------------
                           3570 ;	 function ax5043_init_registers_tx
                           3571 ;	-----------------------------------------
   08C9                    3572 _ax5043_init_registers_tx:
                     0096  3573 	C$easyax5043.c$254$1$207 ==.
                           3574 ;	../COMMON/easyax5043.c:254: ax5043_set_registers_tx();
   08C9 12 04 0B      [24] 3575 	lcall	_ax5043_set_registers_tx
                     0099  3576 	C$easyax5043.c$255$1$207 ==.
                           3577 ;	../COMMON/easyax5043.c:255: rng = axradio_phy_chanpllrng_tx[axradio_curchannel];
   08CC 90 00 09      [24] 3578 	mov	dptr,#_axradio_curchannel
   08CF E0            [24] 3579 	movx	a,@dptr
   08D0 24 01         [12] 3580 	add	a,#_axradio_phy_chanpllrng_tx
   08D2 F5 82         [12] 3581 	mov	dpl,a
   08D4 E4            [12] 3582 	clr	a
   08D5 34 00         [12] 3583 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   08D7 F5 83         [12] 3584 	mov	dph,a
   08D9 E0            [24] 3585 	movx	a,@dptr
                     00A7  3586 	C$easyax5043.c$256$1$207 ==.
                           3587 ;	../COMMON/easyax5043.c:256: if (rng & 0x20)
   08DA FF            [12] 3588 	mov	r7,a
   08DB 30 E5 05      [24] 3589 	jnb	acc.5,00102$
                     00AB  3590 	C$easyax5043.c$257$1$207 ==.
                           3591 ;	../COMMON/easyax5043.c:257: return AXRADIO_ERR_RANGING;
   08DE 75 82 06      [24] 3592 	mov	dpl,#0x06
   08E1 80 1B         [24] 3593 	sjmp	00106$
   08E3                    3594 00102$:
                     00B0  3595 	C$easyax5043.c$258$1$207 ==.
                           3596 ;	../COMMON/easyax5043.c:258: if (AX5043_PLLLOOP & 0x80) {
   08E3 90 40 30      [24] 3597 	mov	dptr,#_AX5043_PLLLOOP
   08E6 E0            [24] 3598 	movx	a,@dptr
   08E7 FE            [12] 3599 	mov	r6,a
   08E8 30 E7 09      [24] 3600 	jnb	acc.7,00104$
                     00B8  3601 	C$easyax5043.c$259$2$208 ==.
                           3602 ;	../COMMON/easyax5043.c:259: AX5043_PLLRANGINGB = rng & 0x0F;
   08EB 90 40 3B      [24] 3603 	mov	dptr,#_AX5043_PLLRANGINGB
   08EE 74 0F         [12] 3604 	mov	a,#0x0F
   08F0 5F            [12] 3605 	anl	a,r7
   08F1 F0            [24] 3606 	movx	@dptr,a
   08F2 80 07         [24] 3607 	sjmp	00105$
   08F4                    3608 00104$:
                     00C1  3609 	C$easyax5043.c$261$2$209 ==.
                           3610 ;	../COMMON/easyax5043.c:261: AX5043_PLLRANGINGA = rng & 0x0F;
   08F4 90 40 33      [24] 3611 	mov	dptr,#_AX5043_PLLRANGINGA
   08F7 74 0F         [12] 3612 	mov	a,#0x0F
   08F9 5F            [12] 3613 	anl	a,r7
   08FA F0            [24] 3614 	movx	@dptr,a
   08FB                    3615 00105$:
                     00C8  3616 	C$easyax5043.c$263$1$207 ==.
                           3617 ;	../COMMON/easyax5043.c:263: return AXRADIO_ERR_NOERROR;
   08FB 75 82 00      [24] 3618 	mov	dpl,#0x00
   08FE                    3619 00106$:
                     00CB  3620 	C$easyax5043.c$264$1$207 ==.
                     00CB  3621 	XG$ax5043_init_registers_tx$0$0 ==.
   08FE 22            [24] 3622 	ret
                           3623 ;------------------------------------------------------------
                           3624 ;Allocation info for local variables in function 'ax5043_init_registers_rx'
                           3625 ;------------------------------------------------------------
                           3626 ;rng                       Allocated to registers r7 
                           3627 ;------------------------------------------------------------
                     00CC  3628 	G$ax5043_init_registers_rx$0$0 ==.
                     00CC  3629 	C$easyax5043.c$266$1$207 ==.
                           3630 ;	../COMMON/easyax5043.c:266: __reentrantb uint8_t ax5043_init_registers_rx(void) __reentrant
                           3631 ;	-----------------------------------------
                           3632 ;	 function ax5043_init_registers_rx
                           3633 ;	-----------------------------------------
   08FF                    3634 _ax5043_init_registers_rx:
                     00CC  3635 	C$easyax5043.c$269$1$211 ==.
                           3636 ;	../COMMON/easyax5043.c:269: ax5043_set_registers_rx();
   08FF 12 04 3C      [24] 3637 	lcall	_ax5043_set_registers_rx
                     00CF  3638 	C$easyax5043.c$270$1$211 ==.
                           3639 ;	../COMMON/easyax5043.c:270: rng = axradio_phy_chanpllrng_rx[axradio_curchannel];
   0902 90 00 09      [24] 3640 	mov	dptr,#_axradio_curchannel
   0905 E0            [24] 3641 	movx	a,@dptr
   0906 24 00         [12] 3642 	add	a,#_axradio_phy_chanpllrng_rx
   0908 F5 82         [12] 3643 	mov	dpl,a
   090A E4            [12] 3644 	clr	a
   090B 34 00         [12] 3645 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   090D F5 83         [12] 3646 	mov	dph,a
   090F E0            [24] 3647 	movx	a,@dptr
                     00DD  3648 	C$easyax5043.c$271$1$211 ==.
                           3649 ;	../COMMON/easyax5043.c:271: if (rng & 0x20)
   0910 FF            [12] 3650 	mov	r7,a
   0911 30 E5 05      [24] 3651 	jnb	acc.5,00102$
                     00E1  3652 	C$easyax5043.c$272$1$211 ==.
                           3653 ;	../COMMON/easyax5043.c:272: return AXRADIO_ERR_RANGING;
   0914 75 82 06      [24] 3654 	mov	dpl,#0x06
   0917 80 1B         [24] 3655 	sjmp	00106$
   0919                    3656 00102$:
                     00E6  3657 	C$easyax5043.c$273$1$211 ==.
                           3658 ;	../COMMON/easyax5043.c:273: if (AX5043_PLLLOOP & 0x80) {
   0919 90 40 30      [24] 3659 	mov	dptr,#_AX5043_PLLLOOP
   091C E0            [24] 3660 	movx	a,@dptr
   091D FE            [12] 3661 	mov	r6,a
   091E 30 E7 09      [24] 3662 	jnb	acc.7,00104$
                     00EE  3663 	C$easyax5043.c$274$2$212 ==.
                           3664 ;	../COMMON/easyax5043.c:274: AX5043_PLLRANGINGB = rng & 0x0F;
   0921 90 40 3B      [24] 3665 	mov	dptr,#_AX5043_PLLRANGINGB
   0924 74 0F         [12] 3666 	mov	a,#0x0F
   0926 5F            [12] 3667 	anl	a,r7
   0927 F0            [24] 3668 	movx	@dptr,a
   0928 80 07         [24] 3669 	sjmp	00105$
   092A                    3670 00104$:
                     00F7  3671 	C$easyax5043.c$276$2$213 ==.
                           3672 ;	../COMMON/easyax5043.c:276: AX5043_PLLRANGINGA = rng & 0x0F;
   092A 90 40 33      [24] 3673 	mov	dptr,#_AX5043_PLLRANGINGA
   092D 74 0F         [12] 3674 	mov	a,#0x0F
   092F 5F            [12] 3675 	anl	a,r7
   0930 F0            [24] 3676 	movx	@dptr,a
   0931                    3677 00105$:
                     00FE  3678 	C$easyax5043.c$278$1$211 ==.
                           3679 ;	../COMMON/easyax5043.c:278: return AXRADIO_ERR_NOERROR;
   0931 75 82 00      [24] 3680 	mov	dpl,#0x00
   0934                    3681 00106$:
                     0101  3682 	C$easyax5043.c$279$1$211 ==.
                     0101  3683 	XG$ax5043_init_registers_rx$0$0 ==.
   0934 22            [24] 3684 	ret
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
                     0102  3696 	Feasyax5043$receive_isr$0$0 ==.
                     0102  3697 	C$easyax5043.c$281$1$211 ==.
                           3698 ;	../COMMON/easyax5043.c:281: static __reentrantb void receive_isr(void) __reentrant
                           3699 ;	-----------------------------------------
                           3700 ;	 function receive_isr
                           3701 ;	-----------------------------------------
   0935                    3702 _receive_isr:
                     0102  3703 	C$easyax5043.c$285$1$211 ==.
                           3704 ;	../COMMON/easyax5043.c:285: uint8_t len = AX5043_RADIOEVENTREQ0; // clear request so interrupt does not fire again. sync_rx enables interrupt on radio state changed in order to wake up on SDF detected
   0935 90 40 0F      [24] 3705 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   0938 E0            [24] 3706 	movx	a,@dptr
                     0106  3707 	C$easyax5043.c$287$1$215 ==.
                           3708 ;	../COMMON/easyax5043.c:287: if ((len & 0x04) && AX5043_RADIOSTATE == 0x0F) {
   0939 FF            [12] 3709 	mov	r7,a
   093A 30 E2 40      [24] 3710 	jnb	acc.2,00164$
   093D 90 40 1C      [24] 3711 	mov	dptr,#_AX5043_RADIOSTATE
   0940 E0            [24] 3712 	movx	a,@dptr
   0941 FE            [12] 3713 	mov	r6,a
   0942 BE 0F 38      [24] 3714 	cjne	r6,#0x0F,00164$
                     0112  3715 	C$easyax5043.c$289$2$216 ==.
                           3716 ;	../COMMON/easyax5043.c:289: update_timeanchor();
   0945 12 08 33      [24] 3717 	lcall	_update_timeanchor
                     0115  3718 	C$easyax5043.c$290$2$216 ==.
                           3719 ;	../COMMON/easyax5043.c:290: if(axradio_framing_enable_sfdcallback)
   0948 90 52 A7      [24] 3720 	mov	dptr,#_axradio_framing_enable_sfdcallback
   094B E4            [12] 3721 	clr	a
   094C 93            [24] 3722 	movc	a,@a+dptr
   094D FE            [12] 3723 	mov	r6,a
   094E 60 2D         [24] 3724 	jz	00164$
                     011D  3725 	C$easyax5043.c$292$3$217 ==.
                           3726 ;	../COMMON/easyax5043.c:292: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   0950 90 02 54      [24] 3727 	mov	dptr,#_axradio_cb_receivesfd
   0953 12 4E DE      [24] 3728 	lcall	_wtimer_remove_callback
                     0123  3729 	C$easyax5043.c$293$3$217 ==.
                           3730 ;	../COMMON/easyax5043.c:293: axradio_cb_receivesfd.st.error = AXRADIO_ERR_NOERROR;
   0956 90 02 59      [24] 3731 	mov	dptr,#(_axradio_cb_receivesfd + 0x0005)
   0959 E4            [12] 3732 	clr	a
   095A F0            [24] 3733 	movx	@dptr,a
                     0128  3734 	C$easyax5043.c$294$3$217 ==.
                           3735 ;	../COMMON/easyax5043.c:294: axradio_cb_receivesfd.st.time.t = axradio_timeanchor.radiotimer;
   095B 90 00 1A      [24] 3736 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   095E E0            [24] 3737 	movx	a,@dptr
   095F FB            [12] 3738 	mov	r3,a
   0960 A3            [24] 3739 	inc	dptr
   0961 E0            [24] 3740 	movx	a,@dptr
   0962 FC            [12] 3741 	mov	r4,a
   0963 A3            [24] 3742 	inc	dptr
   0964 E0            [24] 3743 	movx	a,@dptr
   0965 FD            [12] 3744 	mov	r5,a
   0966 A3            [24] 3745 	inc	dptr
   0967 E0            [24] 3746 	movx	a,@dptr
   0968 FE            [12] 3747 	mov	r6,a
   0969 90 02 5A      [24] 3748 	mov	dptr,#(_axradio_cb_receivesfd + 0x0006)
   096C EB            [12] 3749 	mov	a,r3
   096D F0            [24] 3750 	movx	@dptr,a
   096E EC            [12] 3751 	mov	a,r4
   096F A3            [24] 3752 	inc	dptr
   0970 F0            [24] 3753 	movx	@dptr,a
   0971 ED            [12] 3754 	mov	a,r5
   0972 A3            [24] 3755 	inc	dptr
   0973 F0            [24] 3756 	movx	@dptr,a
   0974 EE            [12] 3757 	mov	a,r6
   0975 A3            [24] 3758 	inc	dptr
   0976 F0            [24] 3759 	movx	@dptr,a
                     0144  3760 	C$easyax5043.c$295$3$217 ==.
                           3761 ;	../COMMON/easyax5043.c:295: wtimer_add_callback(&axradio_cb_receivesfd.cb);
   0977 90 02 54      [24] 3762 	mov	dptr,#_axradio_cb_receivesfd
   097A 12 43 37      [24] 3763 	lcall	_wtimer_add_callback
                     014A  3764 	C$easyax5043.c$307$1$215 ==.
                           3765 ;	../COMMON/easyax5043.c:307: while (AX5043_IRQREQUEST0 & 0x01) {    // while fifo not empty
   097D                    3766 00164$:
   097D                    3767 00149$:
   097D 90 40 0D      [24] 3768 	mov	dptr,#_AX5043_IRQREQUEST0
   0980 E0            [24] 3769 	movx	a,@dptr
   0981 FE            [12] 3770 	mov	r6,a
   0982 20 E0 03      [24] 3771 	jb	acc.0,00237$
   0985 02 0C 21      [24] 3772 	ljmp	00152$
   0988                    3773 00237$:
                     0155  3774 	C$easyax5043.c$308$2$218 ==.
                           3775 ;	../COMMON/easyax5043.c:308: fifo_cmd = AX5043_FIFODATA; // read command
   0988 90 40 29      [24] 3776 	mov	dptr,#_AX5043_FIFODATA
   098B E0            [24] 3777 	movx	a,@dptr
   098C FE            [12] 3778 	mov	r6,a
                     015A  3779 	C$easyax5043.c$309$2$218 ==.
                           3780 ;	../COMMON/easyax5043.c:309: len = (fifo_cmd & 0xE0) >> 5; // top 3 bits encode payload len
   098D 74 E0         [12] 3781 	mov	a,#0xE0
   098F 5E            [12] 3782 	anl	a,r6
   0990 FD            [12] 3783 	mov	r5,a
   0991 C4            [12] 3784 	swap	a
   0992 03            [12] 3785 	rr	a
   0993 54 07         [12] 3786 	anl	a,#0x07
   0995 FF            [12] 3787 	mov	r7,a
                     0163  3788 	C$easyax5043.c$310$2$218 ==.
                           3789 ;	../COMMON/easyax5043.c:310: if (len == 7)
   0996 BF 07 06      [24] 3790 	cjne	r7,#0x07,00107$
                     0166  3791 	C$easyax5043.c$311$2$218 ==.
                           3792 ;	../COMMON/easyax5043.c:311: len = AX5043_FIFODATA; // 7 means variable length, -> get length byte
   0999 90 40 29      [24] 3793 	mov	dptr,#_AX5043_FIFODATA
   099C E0            [24] 3794 	movx	a,@dptr
   099D FD            [12] 3795 	mov	r5,a
   099E FF            [12] 3796 	mov	r7,a
   099F                    3797 00107$:
                     016C  3798 	C$easyax5043.c$312$2$218 ==.
                           3799 ;	../COMMON/easyax5043.c:312: fifo_cmd &= 0x1F;
   099F 53 06 1F      [24] 3800 	anl	ar6,#0x1F
                     016F  3801 	C$easyax5043.c$313$2$218 ==.
                           3802 ;	../COMMON/easyax5043.c:313: switch (fifo_cmd) {
   09A2 BE 01 02      [24] 3803 	cjne	r6,#0x01,00240$
   09A5 80 1B         [24] 3804 	sjmp	00108$
   09A7                    3805 00240$:
   09A7 BE 10 03      [24] 3806 	cjne	r6,#0x10,00241$
   09AA 02 0B 73      [24] 3807 	ljmp	00135$
   09AD                    3808 00241$:
   09AD BE 11 03      [24] 3809 	cjne	r6,#0x11,00242$
   09B0 02 0B 46      [24] 3810 	ljmp	00132$
   09B3                    3811 00242$:
   09B3 BE 13 03      [24] 3812 	cjne	r6,#0x13,00243$
   09B6 02 0B 09      [24] 3813 	ljmp	00129$
   09B9                    3814 00243$:
   09B9 BE 15 03      [24] 3815 	cjne	r6,#0x15,00244$
   09BC 02 0B 9C      [24] 3816 	ljmp	00138$
   09BF                    3817 00244$:
   09BF 02 0C 12      [24] 3818 	ljmp	00142$
                     018F  3819 	C$easyax5043.c$314$3$219 ==.
                           3820 ;	../COMMON/easyax5043.c:314: case AX5043_FIFOCMD_DATA:
   09C2                    3821 00108$:
                     018F  3822 	C$easyax5043.c$315$3$219 ==.
                           3823 ;	../COMMON/easyax5043.c:315: if (!len)
   09C2 EF            [12] 3824 	mov	a,r7
   09C3 60 B8         [24] 3825 	jz	00149$
                     0192  3826 	C$easyax5043.c$319$3$219 ==.
                           3827 ;	../COMMON/easyax5043.c:319: if (DBGLNKSTAT & 0x10)
   09C5 E5 E2         [12] 3828 	mov	a,_DBGLNKSTAT
   09C7 30 E4 06      [24] 3829 	jnb	acc.4,00112$
                     0197  3830 	C$easyax5043.c$320$3$219 ==.
                           3831 ;	../COMMON/easyax5043.c:320: dbglink_tx('.');
   09CA 75 82 2E      [24] 3832 	mov	dpl,#0x2E
   09CD 12 3A B2      [24] 3833 	lcall	_dbglink_tx
   09D0                    3834 00112$:
                     019D  3835 	C$easyax5043.c$323$3$219 ==.
                           3836 ;	../COMMON/easyax5043.c:323: flags = AX5043_FIFODATA;
   09D0 90 40 29      [24] 3837 	mov	dptr,#_AX5043_FIFODATA
   09D3 E0            [24] 3838 	movx	a,@dptr
                     01A1  3839 	C$easyax5043.c$324$3$219 ==.
                           3840 ;	../COMMON/easyax5043.c:324: --len;
   09D4 1F            [12] 3841 	dec	r7
                     01A2  3842 	C$easyax5043.c$325$3$219 ==.
                           3843 ;	../COMMON/easyax5043.c:325: ax5043_readfifo(axradio_rxbuffer, len);
   09D5 C0 07         [24] 3844 	push	ar7
   09D7 C0 07         [24] 3845 	push	ar7
   09D9 90 01 2E      [24] 3846 	mov	dptr,#_axradio_rxbuffer
   09DC 75 F0 00      [24] 3847 	mov	b,#0x00
   09DF 12 4C 80      [24] 3848 	lcall	_ax5043_readfifo
   09E2 15 81         [12] 3849 	dec	sp
   09E4 D0 07         [24] 3850 	pop	ar7
                     01B3  3851 	C$easyax5043.c$326$3$219 ==.
                           3852 ;	../COMMON/easyax5043.c:326: if(axradio_mode == AXRADIO_MODE_WOR_RECEIVE || axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   09E6 74 19         [12] 3853 	mov	a,#0x19
   09E8 B5 0A 02      [24] 3854 	cjne	a,_axradio_mode,00247$
   09EB 80 05         [24] 3855 	sjmp	00113$
   09ED                    3856 00247$:
   09ED 74 1B         [12] 3857 	mov	a,#0x1B
   09EF B5 0A 21      [24] 3858 	cjne	a,_axradio_mode,00114$
   09F2                    3859 00113$:
                     01BF  3860 	C$easyax5043.c$328$4$220 ==.
                           3861 ;	../COMMON/easyax5043.c:328: f30_saved = AX5043_0xF30;
   09F2 90 4F 30      [24] 3862 	mov	dptr,#_AX5043_0xF30
   09F5 E0            [24] 3863 	movx	a,@dptr
   09F6 90 04 41      [24] 3864 	mov	dptr,#_f30_saved
   09F9 F0            [24] 3865 	movx	@dptr,a
                     01C7  3866 	C$easyax5043.c$329$4$220 ==.
                           3867 ;	../COMMON/easyax5043.c:329: f31_saved = AX5043_0xF31;
   09FA 90 4F 31      [24] 3868 	mov	dptr,#_AX5043_0xF31
   09FD E0            [24] 3869 	movx	a,@dptr
   09FE 90 04 42      [24] 3870 	mov	dptr,#_f31_saved
   0A01 F0            [24] 3871 	movx	@dptr,a
                     01CF  3872 	C$easyax5043.c$330$4$220 ==.
                           3873 ;	../COMMON/easyax5043.c:330: f32_saved = AX5043_0xF32;
   0A02 90 4F 32      [24] 3874 	mov	dptr,#_AX5043_0xF32
   0A05 E0            [24] 3875 	movx	a,@dptr
   0A06 90 04 43      [24] 3876 	mov	dptr,#_f32_saved
   0A09 F0            [24] 3877 	movx	@dptr,a
                     01D7  3878 	C$easyax5043.c$331$4$220 ==.
                           3879 ;	../COMMON/easyax5043.c:331: f33_saved = AX5043_0xF33;
   0A0A 90 4F 33      [24] 3880 	mov	dptr,#_AX5043_0xF33
   0A0D E0            [24] 3881 	movx	a,@dptr
   0A0E FE            [12] 3882 	mov	r6,a
   0A0F 90 04 44      [24] 3883 	mov	dptr,#_f33_saved
   0A12 F0            [24] 3884 	movx	@dptr,a
   0A13                    3885 00114$:
                     01E0  3886 	C$easyax5043.c$333$3$219 ==.
                           3887 ;	../COMMON/easyax5043.c:333: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE ||
   0A13 74 19         [12] 3888 	mov	a,#0x19
   0A15 B5 0A 02      [24] 3889 	cjne	a,_axradio_mode,00250$
   0A18 80 05         [24] 3890 	sjmp	00116$
   0A1A                    3891 00250$:
                     01E7  3892 	C$easyax5043.c$334$3$219 ==.
                           3893 ;	../COMMON/easyax5043.c:334: axradio_mode == AXRADIO_MODE_SYNC_SLAVE)
   0A1A 74 22         [12] 3894 	mov	a,#0x22
   0A1C B5 0A 05      [24] 3895 	cjne	a,_axradio_mode,00117$
   0A1F                    3896 00116$:
                     01EC  3897 	C$easyax5043.c$335$3$219 ==.
                           3898 ;	../COMMON/easyax5043.c:335: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   0A1F 90 40 02      [24] 3899 	mov	dptr,#_AX5043_PWRMODE
   0A22 E4            [12] 3900 	clr	a
   0A23 F0            [24] 3901 	movx	@dptr,a
   0A24                    3902 00117$:
                     01F1  3903 	C$easyax5043.c$336$3$219 ==.
                           3904 ;	../COMMON/easyax5043.c:336: AX5043_IRQMASK0 &= (uint8_t)~0x01; // disable FIFO not empty irq
   0A24 90 40 07      [24] 3905 	mov	dptr,#_AX5043_IRQMASK0
   0A27 E0            [24] 3906 	movx	a,@dptr
   0A28 54 FE         [12] 3907 	anl	a,#0xFE
   0A2A F0            [24] 3908 	movx	@dptr,a
                     01F8  3909 	C$easyax5043.c$337$3$219 ==.
                           3910 ;	../COMMON/easyax5043.c:337: wtimer_remove_callback(&axradio_cb_receive.cb);
   0A2B 90 02 32      [24] 3911 	mov	dptr,#_axradio_cb_receive
   0A2E C0 07         [24] 3912 	push	ar7
   0A30 12 4E DE      [24] 3913 	lcall	_wtimer_remove_callback
   0A33 D0 07         [24] 3914 	pop	ar7
                     0202  3915 	C$easyax5043.c$338$3$219 ==.
                           3916 ;	../COMMON/easyax5043.c:338: axradio_cb_receive.st.error = AXRADIO_ERR_NOERROR;
   0A35 90 02 37      [24] 3917 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   0A38 E4            [12] 3918 	clr	a
   0A39 F0            [24] 3919 	movx	@dptr,a
                     0207  3920 	C$easyax5043.c$339$3$219 ==.
                           3921 ;	../COMMON/easyax5043.c:339: axradio_cb_receive.st.rx.mac.raw = axradio_rxbuffer;
   0A3A 90 02 4E      [24] 3922 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   0A3D 74 2E         [12] 3923 	mov	a,#_axradio_rxbuffer
   0A3F F0            [24] 3924 	movx	@dptr,a
   0A40 74 01         [12] 3925 	mov	a,#(_axradio_rxbuffer >> 8)
   0A42 A3            [24] 3926 	inc	dptr
   0A43 F0            [24] 3927 	movx	@dptr,a
                     0211  3928 	C$easyax5043.c$340$3$219 ==.
                           3929 ;	../COMMON/easyax5043.c:340: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   0A44 74 1C         [12] 3930 	mov	a,#0x1C
   0A46 B5 0A 02      [24] 3931 	cjne	a,_axradio_mode,00253$
   0A49 80 0C         [24] 3932 	sjmp	00119$
   0A4B                    3933 00253$:
                     0218  3934 	C$easyax5043.c$341$3$219 ==.
                           3935 ;	../COMMON/easyax5043.c:341: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   0A4B 74 1D         [12] 3936 	mov	a,#0x1D
   0A4D B5 0A 02      [24] 3937 	cjne	a,_axradio_mode,00254$
   0A50 80 05         [24] 3938 	sjmp	00119$
   0A52                    3939 00254$:
                     021F  3940 	C$easyax5043.c$342$3$219 ==.
                           3941 ;	../COMMON/easyax5043.c:342: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   0A52 74 1E         [12] 3942 	mov	a,#0x1E
   0A54 B5 0A 5F      [24] 3943 	cjne	a,_axradio_mode,00120$
   0A57                    3944 00119$:
                     0224  3945 	C$easyax5043.c$343$4$221 ==.
                           3946 ;	../COMMON/easyax5043.c:343: axradio_cb_receive.st.rx.pktdata = axradio_rxbuffer;
   0A57 90 02 50      [24] 3947 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0A5A 74 2E         [12] 3948 	mov	a,#_axradio_rxbuffer
   0A5C F0            [24] 3949 	movx	@dptr,a
   0A5D 74 01         [12] 3950 	mov	a,#(_axradio_rxbuffer >> 8)
   0A5F A3            [24] 3951 	inc	dptr
   0A60 F0            [24] 3952 	movx	@dptr,a
                     022E  3953 	C$easyax5043.c$344$4$221 ==.
                           3954 ;	../COMMON/easyax5043.c:344: axradio_cb_receive.st.rx.pktlen = len;
   0A61 8F 05         [24] 3955 	mov	ar5,r7
   0A63 7E 00         [12] 3956 	mov	r6,#0x00
   0A65 90 02 52      [24] 3957 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0A68 ED            [12] 3958 	mov	a,r5
   0A69 F0            [24] 3959 	movx	@dptr,a
   0A6A EE            [12] 3960 	mov	a,r6
   0A6B A3            [24] 3961 	inc	dptr
   0A6C F0            [24] 3962 	movx	@dptr,a
                     023A  3963 	C$easyax5043.c$346$5$221 ==.
                           3964 ;	../COMMON/easyax5043.c:346: int8_t r = AX5043_RSSI;
   0A6D 90 40 40      [24] 3965 	mov	dptr,#_AX5043_RSSI
   0A70 E0            [24] 3966 	movx	a,@dptr
                     023E  3967 	C$easyax5043.c$347$5$222 ==.
                           3968 ;	../COMMON/easyax5043.c:347: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0A71 FE            [12] 3969 	mov	r6,a
   0A72 33            [12] 3970 	rlc	a
   0A73 95 E0         [12] 3971 	subb	a,acc
   0A75 FD            [12] 3972 	mov	r5,a
   0A76 90 52 83      [24] 3973 	mov	dptr,#_axradio_phy_rssioffset
   0A79 E4            [12] 3974 	clr	a
   0A7A 93            [24] 3975 	movc	a,@a+dptr
   0A7B FC            [12] 3976 	mov	r4,a
   0A7C 33            [12] 3977 	rlc	a
   0A7D 95 E0         [12] 3978 	subb	a,acc
   0A7F FB            [12] 3979 	mov	r3,a
   0A80 EE            [12] 3980 	mov	a,r6
   0A81 C3            [12] 3981 	clr	c
   0A82 9C            [12] 3982 	subb	a,r4
   0A83 FE            [12] 3983 	mov	r6,a
   0A84 ED            [12] 3984 	mov	a,r5
   0A85 9B            [12] 3985 	subb	a,r3
   0A86 FD            [12] 3986 	mov	r5,a
   0A87 90 02 3C      [24] 3987 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0A8A EE            [12] 3988 	mov	a,r6
   0A8B F0            [24] 3989 	movx	@dptr,a
   0A8C ED            [12] 3990 	mov	a,r5
   0A8D A3            [24] 3991 	inc	dptr
   0A8E F0            [24] 3992 	movx	@dptr,a
                     025C  3993 	C$easyax5043.c$349$4$221 ==.
                           3994 ;	../COMMON/easyax5043.c:349: axradio_cb_receive.st.rx.phy.offset.o = signextend20(radio_read24((uint16_t)&AX5043_TRKRFFREQ2));
   0A8F 90 40 4D      [24] 3995 	mov	dptr,#_AX5043_TRKRFFREQ2
   0A92 12 44 90      [24] 3996 	lcall	_radio_read24
   0A95 12 50 29      [24] 3997 	lcall	_signextend20
   0A98 AB 82         [24] 3998 	mov	r3,dpl
   0A9A AC 83         [24] 3999 	mov	r4,dph
   0A9C AD F0         [24] 4000 	mov	r5,b
   0A9E FE            [12] 4001 	mov	r6,a
   0A9F 90 02 3E      [24] 4002 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0AA2 EB            [12] 4003 	mov	a,r3
   0AA3 F0            [24] 4004 	movx	@dptr,a
   0AA4 EC            [12] 4005 	mov	a,r4
   0AA5 A3            [24] 4006 	inc	dptr
   0AA6 F0            [24] 4007 	movx	@dptr,a
   0AA7 ED            [12] 4008 	mov	a,r5
   0AA8 A3            [24] 4009 	inc	dptr
   0AA9 F0            [24] 4010 	movx	@dptr,a
   0AAA EE            [12] 4011 	mov	a,r6
   0AAB A3            [24] 4012 	inc	dptr
   0AAC F0            [24] 4013 	movx	@dptr,a
                     027A  4014 	C$easyax5043.c$350$4$221 ==.
                           4015 ;	../COMMON/easyax5043.c:350: wtimer_add_callback(&axradio_cb_receive.cb);
   0AAD 90 02 32      [24] 4016 	mov	dptr,#_axradio_cb_receive
   0AB0 12 43 37      [24] 4017 	lcall	_wtimer_add_callback
                     0280  4018 	C$easyax5043.c$351$4$221 ==.
                           4019 ;	../COMMON/easyax5043.c:351: break;
   0AB3 02 09 7D      [24] 4020 	ljmp	00149$
   0AB6                    4021 00120$:
                     0283  4022 	C$easyax5043.c$353$3$219 ==.
                           4023 ;	../COMMON/easyax5043.c:353: axradio_cb_receive.st.rx.pktdata = &axradio_rxbuffer[axradio_framing_maclen];
   0AB6 90 52 99      [24] 4024 	mov	dptr,#_axradio_framing_maclen
   0AB9 E4            [12] 4025 	clr	a
   0ABA 93            [24] 4026 	movc	a,@a+dptr
   0ABB FE            [12] 4027 	mov	r6,a
   0ABC 24 2E         [12] 4028 	add	a,#_axradio_rxbuffer
   0ABE FC            [12] 4029 	mov	r4,a
   0ABF E4            [12] 4030 	clr	a
   0AC0 34 01         [12] 4031 	addc	a,#(_axradio_rxbuffer >> 8)
   0AC2 FD            [12] 4032 	mov	r5,a
   0AC3 90 02 50      [24] 4033 	mov	dptr,#(_axradio_cb_receive + 0x001e)
   0AC6 EC            [12] 4034 	mov	a,r4
   0AC7 F0            [24] 4035 	movx	@dptr,a
   0AC8 ED            [12] 4036 	mov	a,r5
   0AC9 A3            [24] 4037 	inc	dptr
   0ACA F0            [24] 4038 	movx	@dptr,a
                     0298  4039 	C$easyax5043.c$354$3$219 ==.
                           4040 ;	../COMMON/easyax5043.c:354: if (len < axradio_framing_maclen) {
   0ACB C3            [12] 4041 	clr	c
   0ACC EF            [12] 4042 	mov	a,r7
   0ACD 9E            [12] 4043 	subb	a,r6
   0ACE 50 0B         [24] 4044 	jnc	00127$
                     029D  4045 	C$easyax5043.c$356$4$223 ==.
                           4046 ;	../COMMON/easyax5043.c:356: axradio_cb_receive.st.rx.pktlen = 0;
   0AD0 90 02 52      [24] 4047 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AD3 E4            [12] 4048 	clr	a
   0AD4 F0            [24] 4049 	movx	@dptr,a
   0AD5 E4            [12] 4050 	clr	a
   0AD6 A3            [24] 4051 	inc	dptr
   0AD7 F0            [24] 4052 	movx	@dptr,a
   0AD8 02 09 7D      [24] 4053 	ljmp	00149$
   0ADB                    4054 00127$:
                     02A8  4055 	C$easyax5043.c$358$4$224 ==.
                           4056 ;	../COMMON/easyax5043.c:358: len -= axradio_framing_maclen;
   0ADB EF            [12] 4057 	mov	a,r7
   0ADC C3            [12] 4058 	clr	c
   0ADD 9E            [12] 4059 	subb	a,r6
                     02AB  4060 	C$easyax5043.c$359$4$224 ==.
                           4061 ;	../COMMON/easyax5043.c:359: axradio_cb_receive.st.rx.pktlen = len;
   0ADE FD            [12] 4062 	mov	r5,a
   0ADF 7E 00         [12] 4063 	mov	r6,#0x00
   0AE1 90 02 52      [24] 4064 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   0AE4 ED            [12] 4065 	mov	a,r5
   0AE5 F0            [24] 4066 	movx	@dptr,a
   0AE6 EE            [12] 4067 	mov	a,r6
   0AE7 A3            [24] 4068 	inc	dptr
   0AE8 F0            [24] 4069 	movx	@dptr,a
                     02B6  4070 	C$easyax5043.c$360$4$224 ==.
                           4071 ;	../COMMON/easyax5043.c:360: wtimer_add_callback(&axradio_cb_receive.cb);
   0AE9 90 02 32      [24] 4072 	mov	dptr,#_axradio_cb_receive
   0AEC 12 43 37      [24] 4073 	lcall	_wtimer_add_callback
                     02BC  4074 	C$easyax5043.c$361$4$224 ==.
                           4075 ;	../COMMON/easyax5043.c:361: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   0AEF 74 22         [12] 4076 	mov	a,#0x22
   0AF1 B5 0A 02      [24] 4077 	cjne	a,_axradio_mode,00258$
   0AF4 80 0A         [24] 4078 	sjmp	00123$
   0AF6                    4079 00258$:
                     02C3  4080 	C$easyax5043.c$362$4$224 ==.
                           4081 ;	../COMMON/easyax5043.c:362: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE)
   0AF6 74 23         [12] 4082 	mov	a,#0x23
   0AF8 B5 0A 02      [24] 4083 	cjne	a,_axradio_mode,00259$
   0AFB 80 03         [24] 4084 	sjmp	00260$
   0AFD                    4085 00259$:
   0AFD 02 09 7D      [24] 4086 	ljmp	00149$
   0B00                    4087 00260$:
   0B00                    4088 00123$:
                     02CD  4089 	C$easyax5043.c$363$4$224 ==.
                           4090 ;	../COMMON/easyax5043.c:363: wtimer_remove(&axradio_timer);
   0B00 90 02 89      [24] 4091 	mov	dptr,#_axradio_timer
   0B03 12 4C D4      [24] 4092 	lcall	_wtimer_remove
                     02D3  4093 	C$easyax5043.c$365$3$219 ==.
                           4094 ;	../COMMON/easyax5043.c:365: break;
   0B06 02 09 7D      [24] 4095 	ljmp	00149$
                     02D6  4096 	C$easyax5043.c$367$3$219 ==.
                           4097 ;	../COMMON/easyax5043.c:367: case AX5043_FIFOCMD_RFFREQOFFS:
   0B09                    4098 00129$:
                     02D6  4099 	C$easyax5043.c$368$3$219 ==.
                           4100 ;	../COMMON/easyax5043.c:368: if (len != 3)
   0B09 BF 03 02      [24] 4101 	cjne	r7,#0x03,00261$
   0B0C 80 03         [24] 4102 	sjmp	00262$
   0B0E                    4103 00261$:
   0B0E 02 0C 12      [24] 4104 	ljmp	00142$
   0B11                    4105 00262$:
                     02DE  4106 	C$easyax5043.c$370$3$219 ==.
                           4107 ;	../COMMON/easyax5043.c:370: i = AX5043_FIFODATA;
   0B11 90 40 29      [24] 4108 	mov	dptr,#_AX5043_FIFODATA
   0B14 E0            [24] 4109 	movx	a,@dptr
   0B15 FE            [12] 4110 	mov	r6,a
                     02E3  4111 	C$easyax5043.c$371$3$219 ==.
                           4112 ;	../COMMON/easyax5043.c:371: i &= 0x0F;
   0B16 53 06 0F      [24] 4113 	anl	ar6,#0x0F
                     02E6  4114 	C$easyax5043.c$372$3$219 ==.
                           4115 ;	../COMMON/easyax5043.c:372: i |= 1 + (uint8_t)~(i & 0x08);
   0B19 74 08         [12] 4116 	mov	a,#0x08
   0B1B 5E            [12] 4117 	anl	a,r6
   0B1C F4            [12] 4118 	cpl	a
   0B1D FD            [12] 4119 	mov	r5,a
   0B1E 0D            [12] 4120 	inc	r5
   0B1F ED            [12] 4121 	mov	a,r5
   0B20 42 06         [12] 4122 	orl	ar6,a
                     02EF  4123 	C$easyax5043.c$373$3$219 ==.
                           4124 ;	../COMMON/easyax5043.c:373: axradio_cb_receive.st.rx.phy.offset.b.b3 = ((int8_t)i) >> 8;
   0B22 8E 05         [24] 4125 	mov	ar5,r6
   0B24 ED            [12] 4126 	mov	a,r5
   0B25 33            [12] 4127 	rlc	a
   0B26 95 E0         [12] 4128 	subb	a,acc
   0B28 FD            [12] 4129 	mov	r5,a
   0B29 90 02 41      [24] 4130 	mov	dptr,#(_axradio_cb_receive + 0x000f)
   0B2C F0            [24] 4131 	movx	@dptr,a
                     02FA  4132 	C$easyax5043.c$374$3$219 ==.
                           4133 ;	../COMMON/easyax5043.c:374: axradio_cb_receive.st.rx.phy.offset.b.b2 = i;
   0B2D 90 02 40      [24] 4134 	mov	dptr,#(_axradio_cb_receive + 0x000e)
   0B30 EE            [12] 4135 	mov	a,r6
   0B31 F0            [24] 4136 	movx	@dptr,a
                     02FF  4137 	C$easyax5043.c$375$3$219 ==.
                           4138 ;	../COMMON/easyax5043.c:375: axradio_cb_receive.st.rx.phy.offset.b.b1 = AX5043_FIFODATA;
   0B32 90 40 29      [24] 4139 	mov	dptr,#_AX5043_FIFODATA
   0B35 E0            [24] 4140 	movx	a,@dptr
   0B36 90 02 3F      [24] 4141 	mov	dptr,#(_axradio_cb_receive + 0x000d)
   0B39 F0            [24] 4142 	movx	@dptr,a
                     0307  4143 	C$easyax5043.c$376$3$219 ==.
                           4144 ;	../COMMON/easyax5043.c:376: axradio_cb_receive.st.rx.phy.offset.b.b0 = AX5043_FIFODATA;
   0B3A 90 40 29      [24] 4145 	mov	dptr,#_AX5043_FIFODATA
   0B3D E0            [24] 4146 	movx	a,@dptr
   0B3E FE            [12] 4147 	mov	r6,a
   0B3F 90 02 3E      [24] 4148 	mov	dptr,#(_axradio_cb_receive + 0x000c)
   0B42 F0            [24] 4149 	movx	@dptr,a
                     0310  4150 	C$easyax5043.c$377$3$219 ==.
                           4151 ;	../COMMON/easyax5043.c:377: break;
   0B43 02 09 7D      [24] 4152 	ljmp	00149$
                     0313  4153 	C$easyax5043.c$379$3$219 ==.
                           4154 ;	../COMMON/easyax5043.c:379: case AX5043_FIFOCMD_RSSI:
   0B46                    4155 00132$:
                     0313  4156 	C$easyax5043.c$380$3$219 ==.
                           4157 ;	../COMMON/easyax5043.c:380: if (len != 1)
   0B46 BF 01 02      [24] 4158 	cjne	r7,#0x01,00263$
   0B49 80 03         [24] 4159 	sjmp	00264$
   0B4B                    4160 00263$:
   0B4B 02 0C 12      [24] 4161 	ljmp	00142$
   0B4E                    4162 00264$:
                     031B  4163 	C$easyax5043.c$383$4$219 ==.
                           4164 ;	../COMMON/easyax5043.c:383: int8_t r = AX5043_FIFODATA;
   0B4E 90 40 29      [24] 4165 	mov	dptr,#_AX5043_FIFODATA
   0B51 E0            [24] 4166 	movx	a,@dptr
                     031F  4167 	C$easyax5043.c$384$4$225 ==.
                           4168 ;	../COMMON/easyax5043.c:384: axradio_cb_receive.st.rx.phy.rssi = r - (int16_t)axradio_phy_rssioffset;
   0B52 FE            [12] 4169 	mov	r6,a
   0B53 33            [12] 4170 	rlc	a
   0B54 95 E0         [12] 4171 	subb	a,acc
   0B56 FD            [12] 4172 	mov	r5,a
   0B57 90 52 83      [24] 4173 	mov	dptr,#_axradio_phy_rssioffset
   0B5A E4            [12] 4174 	clr	a
   0B5B 93            [24] 4175 	movc	a,@a+dptr
   0B5C FC            [12] 4176 	mov	r4,a
   0B5D 33            [12] 4177 	rlc	a
   0B5E 95 E0         [12] 4178 	subb	a,acc
   0B60 FB            [12] 4179 	mov	r3,a
   0B61 EE            [12] 4180 	mov	a,r6
   0B62 C3            [12] 4181 	clr	c
   0B63 9C            [12] 4182 	subb	a,r4
   0B64 FE            [12] 4183 	mov	r6,a
   0B65 ED            [12] 4184 	mov	a,r5
   0B66 9B            [12] 4185 	subb	a,r3
   0B67 FD            [12] 4186 	mov	r5,a
   0B68 90 02 3C      [24] 4187 	mov	dptr,#(_axradio_cb_receive + 0x000a)
   0B6B EE            [12] 4188 	mov	a,r6
   0B6C F0            [24] 4189 	movx	@dptr,a
   0B6D ED            [12] 4190 	mov	a,r5
   0B6E A3            [24] 4191 	inc	dptr
   0B6F F0            [24] 4192 	movx	@dptr,a
                     033D  4193 	C$easyax5043.c$386$3$219 ==.
                           4194 ;	../COMMON/easyax5043.c:386: break;
   0B70 02 09 7D      [24] 4195 	ljmp	00149$
                     0340  4196 	C$easyax5043.c$388$3$219 ==.
                           4197 ;	../COMMON/easyax5043.c:388: case AX5043_FIFOCMD_TIMER:
   0B73                    4198 00135$:
                     0340  4199 	C$easyax5043.c$389$3$219 ==.
                           4200 ;	../COMMON/easyax5043.c:389: if (len != 3)
   0B73 BF 03 02      [24] 4201 	cjne	r7,#0x03,00265$
   0B76 80 03         [24] 4202 	sjmp	00266$
   0B78                    4203 00265$:
   0B78 02 0C 12      [24] 4204 	ljmp	00142$
   0B7B                    4205 00266$:
                     0348  4206 	C$easyax5043.c$393$3$219 ==.
                           4207 ;	../COMMON/easyax5043.c:393: axradio_cb_receive.st.time.b.b3 = 0;
   0B7B 90 02 3B      [24] 4208 	mov	dptr,#(_axradio_cb_receive + 0x0009)
   0B7E E4            [12] 4209 	clr	a
   0B7F F0            [24] 4210 	movx	@dptr,a
                     034D  4211 	C$easyax5043.c$394$3$219 ==.
                           4212 ;	../COMMON/easyax5043.c:394: axradio_cb_receive.st.time.b.b2 = AX5043_FIFODATA;
   0B80 90 40 29      [24] 4213 	mov	dptr,#_AX5043_FIFODATA
   0B83 E0            [24] 4214 	movx	a,@dptr
   0B84 90 02 3A      [24] 4215 	mov	dptr,#(_axradio_cb_receive + 0x0008)
   0B87 F0            [24] 4216 	movx	@dptr,a
                     0355  4217 	C$easyax5043.c$395$3$219 ==.
                           4218 ;	../COMMON/easyax5043.c:395: axradio_cb_receive.st.time.b.b1 = AX5043_FIFODATA;
   0B88 90 40 29      [24] 4219 	mov	dptr,#_AX5043_FIFODATA
   0B8B E0            [24] 4220 	movx	a,@dptr
   0B8C 90 02 39      [24] 4221 	mov	dptr,#(_axradio_cb_receive + 0x0007)
   0B8F F0            [24] 4222 	movx	@dptr,a
                     035D  4223 	C$easyax5043.c$396$3$219 ==.
                           4224 ;	../COMMON/easyax5043.c:396: axradio_cb_receive.st.time.b.b0 = AX5043_FIFODATA;
   0B90 90 40 29      [24] 4225 	mov	dptr,#_AX5043_FIFODATA
   0B93 E0            [24] 4226 	movx	a,@dptr
   0B94 FE            [12] 4227 	mov	r6,a
   0B95 90 02 38      [24] 4228 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   0B98 F0            [24] 4229 	movx	@dptr,a
                     0366  4230 	C$easyax5043.c$397$3$219 ==.
                           4231 ;	../COMMON/easyax5043.c:397: break;
   0B99 02 09 7D      [24] 4232 	ljmp	00149$
                     0369  4233 	C$easyax5043.c$399$3$219 ==.
                           4234 ;	../COMMON/easyax5043.c:399: case AX5043_FIFOCMD_ANTRSSI:
   0B9C                    4235 00138$:
                     0369  4236 	C$easyax5043.c$400$3$219 ==.
                           4237 ;	../COMMON/easyax5043.c:400: if (!len)
   0B9C EF            [12] 4238 	mov	a,r7
   0B9D 70 03         [24] 4239 	jnz	00267$
   0B9F 02 09 7D      [24] 4240 	ljmp	00149$
   0BA2                    4241 00267$:
                     036F  4242 	C$easyax5043.c$402$3$219 ==.
                           4243 ;	../COMMON/easyax5043.c:402: update_timeanchor();
   0BA2 C0 07         [24] 4244 	push	ar7
   0BA4 12 08 33      [24] 4245 	lcall	_update_timeanchor
                     0374  4246 	C$easyax5043.c$403$3$219 ==.
                           4247 ;	../COMMON/easyax5043.c:403: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   0BA7 90 02 5E      [24] 4248 	mov	dptr,#_axradio_cb_channelstate
   0BAA 12 4E DE      [24] 4249 	lcall	_wtimer_remove_callback
                     037A  4250 	C$easyax5043.c$404$3$219 ==.
                           4251 ;	../COMMON/easyax5043.c:404: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   0BAD 90 02 63      [24] 4252 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   0BB0 E4            [12] 4253 	clr	a
   0BB1 F0            [24] 4254 	movx	@dptr,a
                     037F  4255 	C$easyax5043.c$406$4$219 ==.
                           4256 ;	../COMMON/easyax5043.c:406: int8_t r = AX5043_FIFODATA;
   0BB2 90 40 29      [24] 4257 	mov	dptr,#_AX5043_FIFODATA
   0BB5 E0            [24] 4258 	movx	a,@dptr
                     0383  4259 	C$easyax5043.c$407$4$226 ==.
                           4260 ;	../COMMON/easyax5043.c:407: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   0BB6 FE            [12] 4261 	mov	r6,a
   0BB7 FC            [12] 4262 	mov	r4,a
   0BB8 33            [12] 4263 	rlc	a
   0BB9 95 E0         [12] 4264 	subb	a,acc
   0BBB FD            [12] 4265 	mov	r5,a
   0BBC 90 52 83      [24] 4266 	mov	dptr,#_axradio_phy_rssioffset
   0BBF E4            [12] 4267 	clr	a
   0BC0 93            [24] 4268 	movc	a,@a+dptr
   0BC1 FB            [12] 4269 	mov	r3,a
   0BC2 33            [12] 4270 	rlc	a
   0BC3 95 E0         [12] 4271 	subb	a,acc
   0BC5 FA            [12] 4272 	mov	r2,a
   0BC6 EC            [12] 4273 	mov	a,r4
   0BC7 C3            [12] 4274 	clr	c
   0BC8 9B            [12] 4275 	subb	a,r3
   0BC9 FC            [12] 4276 	mov	r4,a
   0BCA ED            [12] 4277 	mov	a,r5
   0BCB 9A            [12] 4278 	subb	a,r2
   0BCC FD            [12] 4279 	mov	r5,a
   0BCD 90 02 68      [24] 4280 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   0BD0 EC            [12] 4281 	mov	a,r4
   0BD1 F0            [24] 4282 	movx	@dptr,a
   0BD2 ED            [12] 4283 	mov	a,r5
   0BD3 A3            [24] 4284 	inc	dptr
   0BD4 F0            [24] 4285 	movx	@dptr,a
                     03A2  4286 	C$easyax5043.c$408$4$226 ==.
                           4287 ;	../COMMON/easyax5043.c:408: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   0BD5 90 52 85      [24] 4288 	mov	dptr,#_axradio_phy_channelbusy
   0BD8 E4            [12] 4289 	clr	a
   0BD9 93            [24] 4290 	movc	a,@a+dptr
   0BDA FD            [12] 4291 	mov	r5,a
   0BDB C3            [12] 4292 	clr	c
   0BDC EE            [12] 4293 	mov	a,r6
   0BDD 64 80         [12] 4294 	xrl	a,#0x80
   0BDF 8D F0         [24] 4295 	mov	b,r5
   0BE1 63 F0 80      [24] 4296 	xrl	b,#0x80
   0BE4 95 F0         [12] 4297 	subb	a,b
   0BE6 B3            [12] 4298 	cpl	c
   0BE7 E4            [12] 4299 	clr	a
   0BE8 33            [12] 4300 	rlc	a
   0BE9 90 02 6A      [24] 4301 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   0BEC F0            [24] 4302 	movx	@dptr,a
                     03BA  4303 	C$easyax5043.c$410$3$219 ==.
                           4304 ;	../COMMON/easyax5043.c:410: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   0BED 90 00 1A      [24] 4305 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   0BF0 E0            [24] 4306 	movx	a,@dptr
   0BF1 FB            [12] 4307 	mov	r3,a
   0BF2 A3            [24] 4308 	inc	dptr
   0BF3 E0            [24] 4309 	movx	a,@dptr
   0BF4 FC            [12] 4310 	mov	r4,a
   0BF5 A3            [24] 4311 	inc	dptr
   0BF6 E0            [24] 4312 	movx	a,@dptr
   0BF7 FD            [12] 4313 	mov	r5,a
   0BF8 A3            [24] 4314 	inc	dptr
   0BF9 E0            [24] 4315 	movx	a,@dptr
   0BFA FE            [12] 4316 	mov	r6,a
   0BFB 90 02 64      [24] 4317 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   0BFE EB            [12] 4318 	mov	a,r3
   0BFF F0            [24] 4319 	movx	@dptr,a
   0C00 EC            [12] 4320 	mov	a,r4
   0C01 A3            [24] 4321 	inc	dptr
   0C02 F0            [24] 4322 	movx	@dptr,a
   0C03 ED            [12] 4323 	mov	a,r5
   0C04 A3            [24] 4324 	inc	dptr
   0C05 F0            [24] 4325 	movx	@dptr,a
   0C06 EE            [12] 4326 	mov	a,r6
   0C07 A3            [24] 4327 	inc	dptr
   0C08 F0            [24] 4328 	movx	@dptr,a
                     03D6  4329 	C$easyax5043.c$411$3$219 ==.
                           4330 ;	../COMMON/easyax5043.c:411: wtimer_add_callback(&axradio_cb_channelstate.cb);
   0C09 90 02 5E      [24] 4331 	mov	dptr,#_axradio_cb_channelstate
   0C0C 12 43 37      [24] 4332 	lcall	_wtimer_add_callback
   0C0F D0 07         [24] 4333 	pop	ar7
                     03DE  4334 	C$easyax5043.c$412$3$219 ==.
                           4335 ;	../COMMON/easyax5043.c:412: --len;
   0C11 1F            [12] 4336 	dec	r7
                     03DF  4337 	C$easyax5043.c$417$3$219 ==.
                           4338 ;	../COMMON/easyax5043.c:417: dropchunk:
   0C12                    4339 00142$:
                     03DF  4340 	C$easyax5043.c$418$3$219 ==.
                           4341 ;	../COMMON/easyax5043.c:418: if (!len)
   0C12 EF            [12] 4342 	mov	a,r7
   0C13 70 03         [24] 4343 	jnz	00269$
   0C15 02 09 7D      [24] 4344 	ljmp	00149$
   0C18                    4345 00269$:
                     03E5  4346 	C$easyax5043.c$421$1$215 ==.
                           4347 ;	../COMMON/easyax5043.c:421: do {
   0C18                    4348 00145$:
                     03E5  4349 	C$easyax5043.c$422$4$227 ==.
                           4350 ;	../COMMON/easyax5043.c:422: AX5043_FIFODATA;        // purge FIFO
   0C18 90 40 29      [24] 4351 	mov	dptr,#_AX5043_FIFODATA
   0C1B E0            [24] 4352 	movx	a,@dptr
                     03E9  4353 	C$easyax5043.c$424$3$219 ==.
                           4354 ;	../COMMON/easyax5043.c:424: while (--i);
   0C1C DF FA         [24] 4355 	djnz	r7,00145$
                     03EB  4356 	C$easyax5043.c$426$1$215 ==.
                           4357 ;	../COMMON/easyax5043.c:426: } // end switch(fifo_cmd)
   0C1E 02 09 7D      [24] 4358 	ljmp	00149$
   0C21                    4359 00152$:
                     03EE  4360 	C$easyax5043.c$428$1$215 ==.
                     03EE  4361 	XFeasyax5043$receive_isr$0$0 ==.
   0C21 22            [24] 4362 	ret
                           4363 ;------------------------------------------------------------
                           4364 ;Allocation info for local variables in function 'transmit_isr'
                           4365 ;------------------------------------------------------------
                           4366 ;cnt                       Allocated to registers r7 
                           4367 ;byte                      Allocated to registers r7 
                           4368 ;len_byte                  Allocated to registers r4 
                           4369 ;i                         Allocated to registers r3 
                           4370 ;byte                      Allocated to registers r6 
                           4371 ;flags                     Allocated to registers r6 
                           4372 ;len                       Allocated to registers r4 r5 
                           4373 ;------------------------------------------------------------
                     03EF  4374 	Feasyax5043$transmit_isr$0$0 ==.
                     03EF  4375 	C$easyax5043.c$430$1$215 ==.
                           4376 ;	../COMMON/easyax5043.c:430: static __reentrantb void transmit_isr(void) __reentrant
                           4377 ;	-----------------------------------------
                           4378 ;	 function transmit_isr
                           4379 ;	-----------------------------------------
   0C22                    4380 _transmit_isr:
                     03EF  4381 	C$easyax5043.c$569$6$238 ==.
                           4382 ;	../COMMON/easyax5043.c:569: axradio_trxstate = trxstate_tx_waitdone;
   0C22                    4383 00157$:
                     03EF  4384 	C$easyax5043.c$433$2$229 ==.
                           4385 ;	../COMMON/easyax5043.c:433: uint8_t cnt = AX5043_FIFOFREE0;
   0C22 90 40 2D      [24] 4386 	mov	dptr,#_AX5043_FIFOFREE0
   0C25 E0            [24] 4387 	movx	a,@dptr
   0C26 FF            [12] 4388 	mov	r7,a
                     03F4  4389 	C$easyax5043.c$434$2$230 ==.
                           4390 ;	../COMMON/easyax5043.c:434: if (AX5043_FIFOFREE1)
   0C27 90 40 2C      [24] 4391 	mov	dptr,#_AX5043_FIFOFREE1
   0C2A E0            [24] 4392 	movx	a,@dptr
   0C2B FE            [12] 4393 	mov	r6,a
   0C2C 60 02         [24] 4394 	jz	00102$
                     03FB  4395 	C$easyax5043.c$435$2$230 ==.
                           4396 ;	../COMMON/easyax5043.c:435: cnt = 0xff;
   0C2E 7F FF         [12] 4397 	mov	r7,#0xFF
   0C30                    4398 00102$:
                     03FD  4399 	C$easyax5043.c$436$2$230 ==.
                           4400 ;	../COMMON/easyax5043.c:436: switch (axradio_trxstate) {
   0C30 AE 0B         [24] 4401 	mov	r6,_axradio_trxstate
   0C32 BE 0A 02      [24] 4402 	cjne	r6,#0x0A,00246$
   0C35 80 0F         [24] 4403 	sjmp	00103$
   0C37                    4404 00246$:
   0C37 BE 0B 03      [24] 4405 	cjne	r6,#0x0B,00247$
   0C3A 02 0C DB      [24] 4406 	ljmp	00115$
   0C3D                    4407 00247$:
   0C3D BE 0C 03      [24] 4408 	cjne	r6,#0x0C,00248$
   0C40 02 0E B2      [24] 4409 	ljmp	00138$
   0C43                    4410 00248$:
   0C43 02 0F 48      [24] 4411 	ljmp	00149$
                     0413  4412 	C$easyax5043.c$437$3$231 ==.
                           4413 ;	../COMMON/easyax5043.c:437: case trxstate_tx_longpreamble:
   0C46                    4414 00103$:
                     0413  4415 	C$easyax5043.c$438$3$231 ==.
                           4416 ;	../COMMON/easyax5043.c:438: if (!axradio_txbuffer_cnt) {
   0C46 90 00 07      [24] 4417 	mov	dptr,#_axradio_txbuffer_cnt
   0C49 E0            [24] 4418 	movx	a,@dptr
   0C4A FD            [12] 4419 	mov	r5,a
   0C4B A3            [24] 4420 	inc	dptr
   0C4C E0            [24] 4421 	movx	a,@dptr
   0C4D FE            [12] 4422 	mov	r6,a
   0C4E 4D            [12] 4423 	orl	a,r5
   0C4F 70 37         [24] 4424 	jnz	00109$
                     041E  4425 	C$easyax5043.c$439$4$232 ==.
                           4426 ;	../COMMON/easyax5043.c:439: axradio_trxstate = trxstate_tx_shortpreamble;
   0C51 75 0B 0B      [24] 4427 	mov	_axradio_trxstate,#0x0B
                     0421  4428 	C$easyax5043.c$440$4$232 ==.
                           4429 ;	../COMMON/easyax5043.c:440: if( axradio_mode == AXRADIO_MODE_WOR_TRANSMIT || axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT )
   0C54 74 11         [12] 4430 	mov	a,#0x11
   0C56 B5 0A 02      [24] 4431 	cjne	a,_axradio_mode,00250$
   0C59 80 05         [24] 4432 	sjmp	00104$
   0C5B                    4433 00250$:
   0C5B 74 13         [12] 4434 	mov	a,#0x13
   0C5D B5 0A 14      [24] 4435 	cjne	a,_axradio_mode,00105$
   0C60                    4436 00104$:
                     042D  4437 	C$easyax5043.c$441$4$232 ==.
                           4438 ;	../COMMON/easyax5043.c:441: axradio_txbuffer_cnt = axradio_phy_preamble_wor_len;
   0C60 90 52 8F      [24] 4439 	mov	dptr,#_axradio_phy_preamble_wor_len
   0C63 E4            [12] 4440 	clr	a
   0C64 93            [24] 4441 	movc	a,@a+dptr
   0C65 FB            [12] 4442 	mov	r3,a
   0C66 74 01         [12] 4443 	mov	a,#0x01
   0C68 93            [24] 4444 	movc	a,@a+dptr
   0C69 FC            [12] 4445 	mov	r4,a
   0C6A 90 00 07      [24] 4446 	mov	dptr,#_axradio_txbuffer_cnt
   0C6D EB            [12] 4447 	mov	a,r3
   0C6E F0            [24] 4448 	movx	@dptr,a
   0C6F EC            [12] 4449 	mov	a,r4
   0C70 A3            [24] 4450 	inc	dptr
   0C71 F0            [24] 4451 	movx	@dptr,a
   0C72 80 67         [24] 4452 	sjmp	00115$
   0C74                    4453 00105$:
                     0441  4454 	C$easyax5043.c$443$4$232 ==.
                           4455 ;	../COMMON/easyax5043.c:443: axradio_txbuffer_cnt = axradio_phy_preamble_len;
   0C74 90 52 93      [24] 4456 	mov	dptr,#_axradio_phy_preamble_len
   0C77 E4            [12] 4457 	clr	a
   0C78 93            [24] 4458 	movc	a,@a+dptr
   0C79 FB            [12] 4459 	mov	r3,a
   0C7A 74 01         [12] 4460 	mov	a,#0x01
   0C7C 93            [24] 4461 	movc	a,@a+dptr
   0C7D FC            [12] 4462 	mov	r4,a
   0C7E 90 00 07      [24] 4463 	mov	dptr,#_axradio_txbuffer_cnt
   0C81 EB            [12] 4464 	mov	a,r3
   0C82 F0            [24] 4465 	movx	@dptr,a
   0C83 EC            [12] 4466 	mov	a,r4
   0C84 A3            [24] 4467 	inc	dptr
   0C85 F0            [24] 4468 	movx	@dptr,a
                     0453  4469 	C$easyax5043.c$444$4$232 ==.
                           4470 ;	../COMMON/easyax5043.c:444: goto shortpreamble;
   0C86 80 53         [24] 4471 	sjmp	00115$
   0C88                    4472 00109$:
                     0455  4473 	C$easyax5043.c$446$3$231 ==.
                           4474 ;	../COMMON/easyax5043.c:446: if (cnt < 4)
   0C88 BF 04 00      [24] 4475 	cjne	r7,#0x04,00253$
   0C8B                    4476 00253$:
   0C8B 50 03         [24] 4477 	jnc	00254$
   0C8D 02 0F 59      [24] 4478 	ljmp	00153$
   0C90                    4479 00254$:
                     045D  4480 	C$easyax5043.c$448$3$231 ==.
                           4481 ;	../COMMON/easyax5043.c:448: cnt = 7;
   0C90 7F 07         [12] 4482 	mov	r7,#0x07
                     045F  4483 	C$easyax5043.c$449$3$231 ==.
                           4484 ;	../COMMON/easyax5043.c:449: if (axradio_txbuffer_cnt < 7)
   0C92 C3            [12] 4485 	clr	c
   0C93 ED            [12] 4486 	mov	a,r5
   0C94 94 07         [12] 4487 	subb	a,#0x07
   0C96 EE            [12] 4488 	mov	a,r6
   0C97 94 00         [12] 4489 	subb	a,#0x00
   0C99 50 02         [24] 4490 	jnc	00113$
                     0468  4491 	C$easyax5043.c$450$3$231 ==.
                           4492 ;	../COMMON/easyax5043.c:450: cnt = axradio_txbuffer_cnt;
   0C9B 8D 07         [24] 4493 	mov	ar7,r5
   0C9D                    4494 00113$:
                     046A  4495 	C$easyax5043.c$451$3$231 ==.
                           4496 ;	../COMMON/easyax5043.c:451: axradio_txbuffer_cnt -= cnt;
   0C9D 8F 05         [24] 4497 	mov	ar5,r7
   0C9F 7E 00         [12] 4498 	mov	r6,#0x00
   0CA1 90 00 07      [24] 4499 	mov	dptr,#_axradio_txbuffer_cnt
   0CA4 E0            [24] 4500 	movx	a,@dptr
   0CA5 FB            [12] 4501 	mov	r3,a
   0CA6 A3            [24] 4502 	inc	dptr
   0CA7 E0            [24] 4503 	movx	a,@dptr
   0CA8 FC            [12] 4504 	mov	r4,a
   0CA9 90 00 07      [24] 4505 	mov	dptr,#_axradio_txbuffer_cnt
   0CAC EB            [12] 4506 	mov	a,r3
   0CAD C3            [12] 4507 	clr	c
   0CAE 9D            [12] 4508 	subb	a,r5
   0CAF F0            [24] 4509 	movx	@dptr,a
   0CB0 EC            [12] 4510 	mov	a,r4
   0CB1 9E            [12] 4511 	subb	a,r6
   0CB2 A3            [24] 4512 	inc	dptr
   0CB3 F0            [24] 4513 	movx	@dptr,a
                     0481  4514 	C$easyax5043.c$452$3$231 ==.
                           4515 ;	../COMMON/easyax5043.c:452: cnt <<= 5;
   0CB4 EF            [12] 4516 	mov	a,r7
   0CB5 C4            [12] 4517 	swap	a
   0CB6 23            [12] 4518 	rl	a
   0CB7 54 E0         [12] 4519 	anl	a,#0xE0
   0CB9 FF            [12] 4520 	mov	r7,a
                     0487  4521 	C$easyax5043.c$453$3$231 ==.
                           4522 ;	../COMMON/easyax5043.c:453: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0CBA 90 40 29      [24] 4523 	mov	dptr,#_AX5043_FIFODATA
   0CBD 74 62         [12] 4524 	mov	a,#0x62
   0CBF F0            [24] 4525 	movx	@dptr,a
                     048D  4526 	C$easyax5043.c$454$3$231 ==.
                           4527 ;	../COMMON/easyax5043.c:454: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0CC0 90 52 96      [24] 4528 	mov	dptr,#_axradio_phy_preamble_flags
   0CC3 E4            [12] 4529 	clr	a
   0CC4 93            [24] 4530 	movc	a,@a+dptr
   0CC5 90 40 29      [24] 4531 	mov	dptr,#_AX5043_FIFODATA
   0CC8 F0            [24] 4532 	movx	@dptr,a
                     0496  4533 	C$easyax5043.c$455$3$231 ==.
                           4534 ;	../COMMON/easyax5043.c:455: AX5043_FIFODATA = cnt;
   0CC9 90 40 29      [24] 4535 	mov	dptr,#_AX5043_FIFODATA
   0CCC EF            [12] 4536 	mov	a,r7
   0CCD F0            [24] 4537 	movx	@dptr,a
                     049B  4538 	C$easyax5043.c$456$3$231 ==.
                           4539 ;	../COMMON/easyax5043.c:456: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0CCE 90 52 95      [24] 4540 	mov	dptr,#_axradio_phy_preamble_byte
   0CD1 E4            [12] 4541 	clr	a
   0CD2 93            [24] 4542 	movc	a,@a+dptr
   0CD3 FE            [12] 4543 	mov	r6,a
   0CD4 90 40 29      [24] 4544 	mov	dptr,#_AX5043_FIFODATA
   0CD7 F0            [24] 4545 	movx	@dptr,a
                     04A5  4546 	C$easyax5043.c$457$3$231 ==.
                           4547 ;	../COMMON/easyax5043.c:457: break;
   0CD8 02 0C 22      [24] 4548 	ljmp	00157$
                     04A8  4549 	C$easyax5043.c$460$3$231 ==.
                           4550 ;	../COMMON/easyax5043.c:460: shortpreamble:
   0CDB                    4551 00115$:
                     04A8  4552 	C$easyax5043.c$461$3$231 ==.
                           4553 ;	../COMMON/easyax5043.c:461: if (!axradio_txbuffer_cnt) {
   0CDB 90 00 07      [24] 4554 	mov	dptr,#_axradio_txbuffer_cnt
   0CDE E0            [24] 4555 	movx	a,@dptr
   0CDF FD            [12] 4556 	mov	r5,a
   0CE0 A3            [24] 4557 	inc	dptr
   0CE1 E0            [24] 4558 	movx	a,@dptr
   0CE2 FE            [12] 4559 	mov	r6,a
   0CE3 4D            [12] 4560 	orl	a,r5
   0CE4 60 03         [24] 4561 	jz	00256$
   0CE6 02 0D C1      [24] 4562 	ljmp	00128$
   0CE9                    4563 00256$:
                     04B6  4564 	C$easyax5043.c$462$4$233 ==.
                           4565 ;	../COMMON/easyax5043.c:462: if (cnt < 15)
   0CE9 BF 0F 00      [24] 4566 	cjne	r7,#0x0F,00257$
   0CEC                    4567 00257$:
   0CEC 50 03         [24] 4568 	jnc	00258$
   0CEE 02 0F 59      [24] 4569 	ljmp	00153$
   0CF1                    4570 00258$:
                     04BE  4571 	C$easyax5043.c$464$4$233 ==.
                           4572 ;	../COMMON/easyax5043.c:464: if (axradio_phy_preamble_appendbits) {
   0CF1 90 52 97      [24] 4573 	mov	dptr,#_axradio_phy_preamble_appendbits
   0CF4 E4            [12] 4574 	clr	a
   0CF5 93            [24] 4575 	movc	a,@a+dptr
   0CF6 FC            [12] 4576 	mov	r4,a
   0CF7 60 6F         [24] 4577 	jz	00122$
                     04C6  4578 	C$easyax5043.c$466$5$234 ==.
                           4579 ;	../COMMON/easyax5043.c:466: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                     04C6  4580 	C$easyax5043.c$467$5$234 ==.
                           4581 ;	../COMMON/easyax5043.c:467: AX5043_FIFODATA = 0x1C;
   0CF9 90 40 29      [24] 4582 	mov	dptr,#_AX5043_FIFODATA
   0CFC 74 41         [12] 4583 	mov	a,#0x41
   0CFE F0            [24] 4584 	movx	@dptr,a
   0CFF 74 1C         [12] 4585 	mov	a,#0x1C
   0D01 F0            [24] 4586 	movx	@dptr,a
                     04CF  4587 	C$easyax5043.c$468$5$234 ==.
                           4588 ;	../COMMON/easyax5043.c:468: byte = axradio_phy_preamble_appendpattern;
   0D02 90 52 98      [24] 4589 	mov	dptr,#_axradio_phy_preamble_appendpattern
   0D05 E4            [12] 4590 	clr	a
   0D06 93            [24] 4591 	movc	a,@a+dptr
   0D07 FB            [12] 4592 	mov	r3,a
   0D08 FF            [12] 4593 	mov	r7,a
                     04D6  4594 	C$easyax5043.c$469$5$234 ==.
                           4595 ;	../COMMON/easyax5043.c:469: if (AX5043_PKTADDRCFG & 0x80) {
   0D09 90 42 00      [24] 4596 	mov	dptr,#_AX5043_PKTADDRCFG
   0D0C E0            [24] 4597 	movx	a,@dptr
   0D0D FA            [12] 4598 	mov	r2,a
   0D0E 30 E7 26      [24] 4599 	jnb	acc.7,00119$
                     04DE  4600 	C$easyax5043.c$471$6$235 ==.
                           4601 ;	../COMMON/easyax5043.c:471: byte &= 0xFF << (8-axradio_phy_preamble_appendbits);
   0D11 74 08         [12] 4602 	mov	a,#0x08
   0D13 C3            [12] 4603 	clr	c
   0D14 9C            [12] 4604 	subb	a,r4
   0D15 F5 F0         [12] 4605 	mov	b,a
   0D17 05 F0         [12] 4606 	inc	b
   0D19 74 FF         [12] 4607 	mov	a,#0xFF
   0D1B 80 02         [24] 4608 	sjmp	00263$
   0D1D                    4609 00261$:
   0D1D 25 E0         [12] 4610 	add	a,acc
   0D1F                    4611 00263$:
   0D1F D5 F0 FB      [24] 4612 	djnz	b,00261$
   0D22 FA            [12] 4613 	mov	r2,a
   0D23 52 07         [12] 4614 	anl	ar7,a
                     04F2  4615 	C$easyax5043.c$472$6$235 ==.
                           4616 ;	../COMMON/easyax5043.c:472: byte |= 0x80 >> axradio_phy_preamble_appendbits;
   0D25 8C F0         [24] 4617 	mov	b,r4
   0D27 05 F0         [12] 4618 	inc	b
   0D29 74 80         [12] 4619 	mov	a,#0x80
   0D2B 80 02         [24] 4620 	sjmp	00265$
   0D2D                    4621 00264$:
   0D2D C3            [12] 4622 	clr	c
   0D2E 13            [12] 4623 	rrc	a
   0D2F                    4624 00265$:
   0D2F D5 F0 FB      [24] 4625 	djnz	b,00264$
   0D32 FA            [12] 4626 	mov	r2,a
   0D33 42 07         [12] 4627 	orl	ar7,a
   0D35 80 2C         [24] 4628 	sjmp	00120$
   0D37                    4629 00119$:
                     0504  4630 	C$easyax5043.c$475$6$236 ==.
                           4631 ;	../COMMON/easyax5043.c:475: byte &= 0xFF >> (8-axradio_phy_preamble_appendbits);
   0D37 8C 02         [24] 4632 	mov	ar2,r4
   0D39 7B 00         [12] 4633 	mov	r3,#0x00
   0D3B 74 08         [12] 4634 	mov	a,#0x08
   0D3D C3            [12] 4635 	clr	c
   0D3E 9A            [12] 4636 	subb	a,r2
   0D3F FA            [12] 4637 	mov	r2,a
   0D40 E4            [12] 4638 	clr	a
   0D41 9B            [12] 4639 	subb	a,r3
   0D42 FB            [12] 4640 	mov	r3,a
   0D43 8A F0         [24] 4641 	mov	b,r2
   0D45 05 F0         [12] 4642 	inc	b
   0D47 74 FF         [12] 4643 	mov	a,#0xFF
   0D49 80 02         [24] 4644 	sjmp	00267$
   0D4B                    4645 00266$:
   0D4B C3            [12] 4646 	clr	c
   0D4C 13            [12] 4647 	rrc	a
   0D4D                    4648 00267$:
   0D4D D5 F0 FB      [24] 4649 	djnz	b,00266$
   0D50 FA            [12] 4650 	mov	r2,a
   0D51 52 07         [12] 4651 	anl	ar7,a
                     0520  4652 	C$easyax5043.c$476$6$236 ==.
                           4653 ;	../COMMON/easyax5043.c:476: byte |= 0x01 << axradio_phy_preamble_appendbits;
   0D53 8C F0         [24] 4654 	mov	b,r4
   0D55 05 F0         [12] 4655 	inc	b
   0D57 74 01         [12] 4656 	mov	a,#0x01
   0D59 80 02         [24] 4657 	sjmp	00270$
   0D5B                    4658 00268$:
   0D5B 25 E0         [12] 4659 	add	a,acc
   0D5D                    4660 00270$:
   0D5D D5 F0 FB      [24] 4661 	djnz	b,00268$
   0D60 FC            [12] 4662 	mov	r4,a
   0D61 42 07         [12] 4663 	orl	ar7,a
   0D63                    4664 00120$:
                     0530  4665 	C$easyax5043.c$478$5$234 ==.
                           4666 ;	../COMMON/easyax5043.c:478: AX5043_FIFODATA = byte;
   0D63 90 40 29      [24] 4667 	mov	dptr,#_AX5043_FIFODATA
   0D66 EF            [12] 4668 	mov	a,r7
   0D67 F0            [24] 4669 	movx	@dptr,a
   0D68                    4670 00122$:
                     0535  4671 	C$easyax5043.c$484$4$233 ==.
                           4672 ;	../COMMON/easyax5043.c:484: if ((AX5043_FRAMING & 0x0E) == 0x06 && axradio_framing_synclen) {
   0D68 90 40 12      [24] 4673 	mov	dptr,#_AX5043_FRAMING
   0D6B E0            [24] 4674 	movx	a,@dptr
   0D6C FC            [12] 4675 	mov	r4,a
   0D6D 53 04 0E      [24] 4676 	anl	ar4,#0x0E
   0D70 BC 06 48      [24] 4677 	cjne	r4,#0x06,00125$
   0D73 90 52 A1      [24] 4678 	mov	dptr,#_axradio_framing_synclen
   0D76 E4            [12] 4679 	clr	a
   0D77 93            [24] 4680 	movc	a,@a+dptr
   0D78 FC            [12] 4681 	mov	r4,a
   0D79 60 40         [24] 4682 	jz	00125$
                     0548  4683 	C$easyax5043.c$486$5$233 ==.
                           4684 ;	../COMMON/easyax5043.c:486: uint8_t len_byte = axradio_framing_synclen;
                     0548  4685 	C$easyax5043.c$487$5$237 ==.
                           4686 ;	../COMMON/easyax5043.c:487: uint8_t i = (len_byte & 0x07) ? 0x04 : 0;
   0D7B EC            [12] 4687 	mov	a,r4
   0D7C 54 07         [12] 4688 	anl	a,#0x07
   0D7E 60 04         [24] 4689 	jz	00161$
   0D80 7B 04         [12] 4690 	mov	r3,#0x04
   0D82 80 02         [24] 4691 	sjmp	00162$
   0D84                    4692 00161$:
   0D84 7B 00         [12] 4693 	mov	r3,#0x00
   0D86                    4694 00162$:
                     0553  4695 	C$easyax5043.c$489$5$237 ==.
                           4696 ;	../COMMON/easyax5043.c:489: len_byte += 7;
   0D86 74 07         [12] 4697 	mov	a,#0x07
   0D88 2C            [12] 4698 	add	a,r4
                     0556  4699 	C$easyax5043.c$490$5$237 ==.
                           4700 ;	../COMMON/easyax5043.c:490: len_byte >>= 3;
   0D89 C4            [12] 4701 	swap	a
   0D8A 23            [12] 4702 	rl	a
   0D8B 54 1F         [12] 4703 	anl	a,#0x1F
                     055A  4704 	C$easyax5043.c$491$5$237 ==.
                           4705 ;	../COMMON/easyax5043.c:491: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | ((len_byte + 1) << 5);
   0D8D FC            [12] 4706 	mov	r4,a
   0D8E 04            [12] 4707 	inc	a
   0D8F C4            [12] 4708 	swap	a
   0D90 23            [12] 4709 	rl	a
   0D91 54 E0         [12] 4710 	anl	a,#0xE0
   0D93 FA            [12] 4711 	mov	r2,a
   0D94 90 40 29      [24] 4712 	mov	dptr,#_AX5043_FIFODATA
   0D97 74 01         [12] 4713 	mov	a,#0x01
   0D99 4A            [12] 4714 	orl	a,r2
   0D9A F0            [24] 4715 	movx	@dptr,a
                     0568  4716 	C$easyax5043.c$492$5$237 ==.
                           4717 ;	../COMMON/easyax5043.c:492: AX5043_FIFODATA = axradio_framing_syncflags | i;
   0D9B 90 52 A6      [24] 4718 	mov	dptr,#_axradio_framing_syncflags
   0D9E E4            [12] 4719 	clr	a
   0D9F 93            [24] 4720 	movc	a,@a+dptr
   0DA0 FA            [12] 4721 	mov	r2,a
   0DA1 90 40 29      [24] 4722 	mov	dptr,#_AX5043_FIFODATA
   0DA4 EB            [12] 4723 	mov	a,r3
   0DA5 4A            [12] 4724 	orl	a,r2
   0DA6 F0            [24] 4725 	movx	@dptr,a
                     0574  4726 	C$easyax5043.c$493$1$229 ==.
                           4727 ;	../COMMON/easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DA7 7B 00         [12] 4728 	mov	r3,#0x00
   0DA9                    4729 00155$:
   0DA9 C3            [12] 4730 	clr	c
   0DAA EB            [12] 4731 	mov	a,r3
   0DAB 9C            [12] 4732 	subb	a,r4
   0DAC 50 0D         [24] 4733 	jnc	00125$
                     057B  4734 	C$easyax5043.c$495$6$238 ==.
                           4735 ;	../COMMON/easyax5043.c:495: AX5043_FIFODATA = axradio_framing_syncword[i];
   0DAE EB            [12] 4736 	mov	a,r3
   0DAF 90 52 A2      [24] 4737 	mov	dptr,#_axradio_framing_syncword
   0DB2 93            [24] 4738 	movc	a,@a+dptr
   0DB3 FA            [12] 4739 	mov	r2,a
   0DB4 90 40 29      [24] 4740 	mov	dptr,#_AX5043_FIFODATA
   0DB7 F0            [24] 4741 	movx	@dptr,a
                     0585  4742 	C$easyax5043.c$493$5$237 ==.
                           4743 ;	../COMMON/easyax5043.c:493: for (i = 0; i < len_byte; ++i) {
   0DB8 0B            [12] 4744 	inc	r3
   0DB9 80 EE         [24] 4745 	sjmp	00155$
   0DBB                    4746 00125$:
                     0588  4747 	C$easyax5043.c$502$4$233 ==.
                           4748 ;	../COMMON/easyax5043.c:502: axradio_trxstate = trxstate_tx_packet;
   0DBB 75 0B 0C      [24] 4749 	mov	_axradio_trxstate,#0x0C
                     058B  4750 	C$easyax5043.c$503$4$233 ==.
                           4751 ;	../COMMON/easyax5043.c:503: break;
   0DBE 02 0C 22      [24] 4752 	ljmp	00157$
   0DC1                    4753 00128$:
                     058E  4754 	C$easyax5043.c$505$3$231 ==.
                           4755 ;	../COMMON/easyax5043.c:505: if (cnt < 4)
   0DC1 BF 04 00      [24] 4756 	cjne	r7,#0x04,00276$
   0DC4                    4757 00276$:
   0DC4 50 03         [24] 4758 	jnc	00277$
   0DC6 02 0F 59      [24] 4759 	ljmp	00153$
   0DC9                    4760 00277$:
                     0596  4761 	C$easyax5043.c$507$3$231 ==.
                           4762 ;	../COMMON/easyax5043.c:507: cnt = 255;
   0DC9 7F FF         [12] 4763 	mov	r7,#0xFF
                     0598  4764 	C$easyax5043.c$508$3$231 ==.
                           4765 ;	../COMMON/easyax5043.c:508: if (axradio_txbuffer_cnt < 255*8)
   0DCB C3            [12] 4766 	clr	c
   0DCC ED            [12] 4767 	mov	a,r5
   0DCD 94 F8         [12] 4768 	subb	a,#0xF8
   0DCF EE            [12] 4769 	mov	a,r6
   0DD0 94 07         [12] 4770 	subb	a,#0x07
   0DD2 50 12         [24] 4771 	jnc	00132$
                     05A1  4772 	C$easyax5043.c$509$3$231 ==.
                           4773 ;	../COMMON/easyax5043.c:509: cnt = axradio_txbuffer_cnt >> 3;
   0DD4 EE            [12] 4774 	mov	a,r6
   0DD5 C4            [12] 4775 	swap	a
   0DD6 23            [12] 4776 	rl	a
   0DD7 CD            [12] 4777 	xch	a,r5
   0DD8 C4            [12] 4778 	swap	a
   0DD9 23            [12] 4779 	rl	a
   0DDA 54 1F         [12] 4780 	anl	a,#0x1F
   0DDC 6D            [12] 4781 	xrl	a,r5
   0DDD CD            [12] 4782 	xch	a,r5
   0DDE 54 1F         [12] 4783 	anl	a,#0x1F
   0DE0 CD            [12] 4784 	xch	a,r5
   0DE1 6D            [12] 4785 	xrl	a,r5
   0DE2 CD            [12] 4786 	xch	a,r5
   0DE3 FE            [12] 4787 	mov	r6,a
   0DE4 8D 07         [24] 4788 	mov	ar7,r5
   0DE6                    4789 00132$:
                     05B3  4790 	C$easyax5043.c$510$3$231 ==.
                           4791 ;	../COMMON/easyax5043.c:510: if (cnt) {
   0DE6 EF            [12] 4792 	mov	a,r7
   0DE7 60 46         [24] 4793 	jz	00134$
                     05B6  4794 	C$easyax5043.c$511$4$239 ==.
                           4795 ;	../COMMON/easyax5043.c:511: axradio_txbuffer_cnt -= ((uint16_t)cnt) << 3;
   0DE9 8F 05         [24] 4796 	mov	ar5,r7
   0DEB E4            [12] 4797 	clr	a
   0DEC C4            [12] 4798 	swap	a
   0DED 03            [12] 4799 	rr	a
   0DEE 54 F8         [12] 4800 	anl	a,#0xF8
   0DF0 CD            [12] 4801 	xch	a,r5
   0DF1 C4            [12] 4802 	swap	a
   0DF2 03            [12] 4803 	rr	a
   0DF3 CD            [12] 4804 	xch	a,r5
   0DF4 6D            [12] 4805 	xrl	a,r5
   0DF5 CD            [12] 4806 	xch	a,r5
   0DF6 54 F8         [12] 4807 	anl	a,#0xF8
   0DF8 CD            [12] 4808 	xch	a,r5
   0DF9 6D            [12] 4809 	xrl	a,r5
   0DFA FE            [12] 4810 	mov	r6,a
   0DFB 90 00 07      [24] 4811 	mov	dptr,#_axradio_txbuffer_cnt
   0DFE E0            [24] 4812 	movx	a,@dptr
   0DFF FB            [12] 4813 	mov	r3,a
   0E00 A3            [24] 4814 	inc	dptr
   0E01 E0            [24] 4815 	movx	a,@dptr
   0E02 FC            [12] 4816 	mov	r4,a
   0E03 90 00 07      [24] 4817 	mov	dptr,#_axradio_txbuffer_cnt
   0E06 EB            [12] 4818 	mov	a,r3
   0E07 C3            [12] 4819 	clr	c
   0E08 9D            [12] 4820 	subb	a,r5
   0E09 F0            [24] 4821 	movx	@dptr,a
   0E0A EC            [12] 4822 	mov	a,r4
   0E0B 9E            [12] 4823 	subb	a,r6
   0E0C A3            [24] 4824 	inc	dptr
   0E0D F0            [24] 4825 	movx	@dptr,a
                     05DB  4826 	C$easyax5043.c$512$4$239 ==.
                           4827 ;	../COMMON/easyax5043.c:512: AX5043_FIFODATA = AX5043_FIFOCMD_REPEATDATA | (3 << 5);
   0E0E 90 40 29      [24] 4828 	mov	dptr,#_AX5043_FIFODATA
   0E11 74 62         [12] 4829 	mov	a,#0x62
   0E13 F0            [24] 4830 	movx	@dptr,a
                     05E1  4831 	C$easyax5043.c$513$4$239 ==.
                           4832 ;	../COMMON/easyax5043.c:513: AX5043_FIFODATA = axradio_phy_preamble_flags;
   0E14 90 52 96      [24] 4833 	mov	dptr,#_axradio_phy_preamble_flags
   0E17 E4            [12] 4834 	clr	a
   0E18 93            [24] 4835 	movc	a,@a+dptr
   0E19 90 40 29      [24] 4836 	mov	dptr,#_AX5043_FIFODATA
   0E1C F0            [24] 4837 	movx	@dptr,a
                     05EA  4838 	C$easyax5043.c$514$4$239 ==.
                           4839 ;	../COMMON/easyax5043.c:514: AX5043_FIFODATA = cnt;
   0E1D 90 40 29      [24] 4840 	mov	dptr,#_AX5043_FIFODATA
   0E20 EF            [12] 4841 	mov	a,r7
   0E21 F0            [24] 4842 	movx	@dptr,a
                     05EF  4843 	C$easyax5043.c$515$4$239 ==.
                           4844 ;	../COMMON/easyax5043.c:515: AX5043_FIFODATA = axradio_phy_preamble_byte;
   0E22 90 52 95      [24] 4845 	mov	dptr,#_axradio_phy_preamble_byte
   0E25 E4            [12] 4846 	clr	a
   0E26 93            [24] 4847 	movc	a,@a+dptr
   0E27 FE            [12] 4848 	mov	r6,a
   0E28 90 40 29      [24] 4849 	mov	dptr,#_AX5043_FIFODATA
   0E2B F0            [24] 4850 	movx	@dptr,a
                     05F9  4851 	C$easyax5043.c$516$4$239 ==.
                           4852 ;	../COMMON/easyax5043.c:516: break;
   0E2C 02 0C 22      [24] 4853 	ljmp	00157$
   0E2F                    4854 00134$:
                     05FC  4855 	C$easyax5043.c$519$4$231 ==.
                           4856 ;	../COMMON/easyax5043.c:519: uint8_t byte = axradio_phy_preamble_byte;
   0E2F 90 52 95      [24] 4857 	mov	dptr,#_axradio_phy_preamble_byte
   0E32 E4            [12] 4858 	clr	a
   0E33 93            [24] 4859 	movc	a,@a+dptr
   0E34 FE            [12] 4860 	mov	r6,a
                     0602  4861 	C$easyax5043.c$520$4$240 ==.
                           4862 ;	../COMMON/easyax5043.c:520: cnt = axradio_txbuffer_cnt;
   0E35 90 00 07      [24] 4863 	mov	dptr,#_axradio_txbuffer_cnt
   0E38 E0            [24] 4864 	movx	a,@dptr
   0E39 FC            [12] 4865 	mov	r4,a
   0E3A A3            [24] 4866 	inc	dptr
   0E3B E0            [24] 4867 	movx	a,@dptr
   0E3C 8C 07         [24] 4868 	mov	ar7,r4
                     060B  4869 	C$easyax5043.c$521$4$240 ==.
                           4870 ;	../COMMON/easyax5043.c:521: axradio_txbuffer_cnt = 0;
   0E3E 90 00 07      [24] 4871 	mov	dptr,#_axradio_txbuffer_cnt
   0E41 E4            [12] 4872 	clr	a
   0E42 F0            [24] 4873 	movx	@dptr,a
   0E43 E4            [12] 4874 	clr	a
   0E44 A3            [24] 4875 	inc	dptr
   0E45 F0            [24] 4876 	movx	@dptr,a
                     0613  4877 	C$easyax5043.c$522$4$240 ==.
                           4878 ;	../COMMON/easyax5043.c:522: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (2 << 5);
                     0613  4879 	C$easyax5043.c$523$4$240 ==.
                           4880 ;	../COMMON/easyax5043.c:523: AX5043_FIFODATA = 0x1C;
   0E46 90 40 29      [24] 4881 	mov	dptr,#_AX5043_FIFODATA
   0E49 74 41         [12] 4882 	mov	a,#0x41
   0E4B F0            [24] 4883 	movx	@dptr,a
   0E4C 74 1C         [12] 4884 	mov	a,#0x1C
   0E4E F0            [24] 4885 	movx	@dptr,a
                     061C  4886 	C$easyax5043.c$524$4$240 ==.
                           4887 ;	../COMMON/easyax5043.c:524: if (AX5043_PKTADDRCFG & 0x80) {
   0E4F 90 42 00      [24] 4888 	mov	dptr,#_AX5043_PKTADDRCFG
   0E52 E0            [24] 4889 	movx	a,@dptr
   0E53 FD            [12] 4890 	mov	r5,a
   0E54 30 E7 27      [24] 4891 	jnb	acc.7,00136$
                     0624  4892 	C$easyax5043.c$526$5$241 ==.
                           4893 ;	../COMMON/easyax5043.c:526: byte &= 0xFF << (8-cnt);
   0E57 74 08         [12] 4894 	mov	a,#0x08
   0E59 C3            [12] 4895 	clr	c
   0E5A 9F            [12] 4896 	subb	a,r7
   0E5B FD            [12] 4897 	mov	r5,a
   0E5C 8D F0         [24] 4898 	mov	b,r5
   0E5E 05 F0         [12] 4899 	inc	b
   0E60 74 FF         [12] 4900 	mov	a,#0xFF
   0E62 80 02         [24] 4901 	sjmp	00283$
   0E64                    4902 00281$:
   0E64 25 E0         [12] 4903 	add	a,acc
   0E66                    4904 00283$:
   0E66 D5 F0 FB      [24] 4905 	djnz	b,00281$
   0E69 FD            [12] 4906 	mov	r5,a
   0E6A 52 06         [12] 4907 	anl	ar6,a
                     0639  4908 	C$easyax5043.c$527$5$241 ==.
                           4909 ;	../COMMON/easyax5043.c:527: byte |= 0x80 >> cnt;
   0E6C 8F F0         [24] 4910 	mov	b,r7
   0E6E 05 F0         [12] 4911 	inc	b
   0E70 74 80         [12] 4912 	mov	a,#0x80
   0E72 80 02         [24] 4913 	sjmp	00285$
   0E74                    4914 00284$:
   0E74 C3            [12] 4915 	clr	c
   0E75 13            [12] 4916 	rrc	a
   0E76                    4917 00285$:
   0E76 D5 F0 FB      [24] 4918 	djnz	b,00284$
   0E79 FD            [12] 4919 	mov	r5,a
   0E7A 42 06         [12] 4920 	orl	ar6,a
   0E7C 80 2C         [24] 4921 	sjmp	00137$
   0E7E                    4922 00136$:
                     064B  4923 	C$easyax5043.c$530$5$242 ==.
                           4924 ;	../COMMON/easyax5043.c:530: byte &= 0xFF >> (8-cnt);
   0E7E 8F 04         [24] 4925 	mov	ar4,r7
   0E80 7D 00         [12] 4926 	mov	r5,#0x00
   0E82 74 08         [12] 4927 	mov	a,#0x08
   0E84 C3            [12] 4928 	clr	c
   0E85 9C            [12] 4929 	subb	a,r4
   0E86 FC            [12] 4930 	mov	r4,a
   0E87 E4            [12] 4931 	clr	a
   0E88 9D            [12] 4932 	subb	a,r5
   0E89 FD            [12] 4933 	mov	r5,a
   0E8A 8C F0         [24] 4934 	mov	b,r4
   0E8C 05 F0         [12] 4935 	inc	b
   0E8E 74 FF         [12] 4936 	mov	a,#0xFF
   0E90 80 02         [24] 4937 	sjmp	00287$
   0E92                    4938 00286$:
   0E92 C3            [12] 4939 	clr	c
   0E93 13            [12] 4940 	rrc	a
   0E94                    4941 00287$:
   0E94 D5 F0 FB      [24] 4942 	djnz	b,00286$
   0E97 FC            [12] 4943 	mov	r4,a
   0E98 52 06         [12] 4944 	anl	ar6,a
                     0667  4945 	C$easyax5043.c$531$5$242 ==.
                           4946 ;	../COMMON/easyax5043.c:531: byte |= 0x01 << cnt;
   0E9A 8F F0         [24] 4947 	mov	b,r7
   0E9C 05 F0         [12] 4948 	inc	b
   0E9E 74 01         [12] 4949 	mov	a,#0x01
   0EA0 80 02         [24] 4950 	sjmp	00290$
   0EA2                    4951 00288$:
   0EA2 25 E0         [12] 4952 	add	a,acc
   0EA4                    4953 00290$:
   0EA4 D5 F0 FB      [24] 4954 	djnz	b,00288$
   0EA7 FD            [12] 4955 	mov	r5,a
   0EA8 42 06         [12] 4956 	orl	ar6,a
   0EAA                    4957 00137$:
                     0677  4958 	C$easyax5043.c$533$4$240 ==.
                           4959 ;	../COMMON/easyax5043.c:533: AX5043_FIFODATA = byte;
   0EAA 90 40 29      [24] 4960 	mov	dptr,#_AX5043_FIFODATA
   0EAD EE            [12] 4961 	mov	a,r6
   0EAE F0            [24] 4962 	movx	@dptr,a
                     067C  4963 	C$easyax5043.c$535$3$231 ==.
                           4964 ;	../COMMON/easyax5043.c:535: break;
   0EAF 02 0C 22      [24] 4965 	ljmp	00157$
                     067F  4966 	C$easyax5043.c$537$3$231 ==.
                           4967 ;	../COMMON/easyax5043.c:537: case trxstate_tx_packet:
   0EB2                    4968 00138$:
                     067F  4969 	C$easyax5043.c$538$3$231 ==.
                           4970 ;	../COMMON/easyax5043.c:538: if (cnt < 11)
   0EB2 BF 0B 00      [24] 4971 	cjne	r7,#0x0B,00291$
   0EB5                    4972 00291$:
   0EB5 50 03         [24] 4973 	jnc	00292$
   0EB7 02 0F 59      [24] 4974 	ljmp	00153$
   0EBA                    4975 00292$:
                     0687  4976 	C$easyax5043.c$541$4$231 ==.
                           4977 ;	../COMMON/easyax5043.c:541: uint8_t flags = 0;
   0EBA 7E 00         [12] 4978 	mov	r6,#0x00
                     0689  4979 	C$easyax5043.c$542$4$243 ==.
                           4980 ;	../COMMON/easyax5043.c:542: if (!axradio_txbuffer_cnt)
   0EBC 90 00 07      [24] 4981 	mov	dptr,#_axradio_txbuffer_cnt
   0EBF E0            [24] 4982 	movx	a,@dptr
   0EC0 FC            [12] 4983 	mov	r4,a
   0EC1 A3            [24] 4984 	inc	dptr
   0EC2 E0            [24] 4985 	movx	a,@dptr
   0EC3 FD            [12] 4986 	mov	r5,a
   0EC4 4C            [12] 4987 	orl	a,r4
   0EC5 70 02         [24] 4988 	jnz	00142$
                     0694  4989 	C$easyax5043.c$543$4$243 ==.
                           4990 ;	../COMMON/easyax5043.c:543: flags |= 0x01; // flag byte: pkt_start
   0EC7 7E 01         [12] 4991 	mov	r6,#0x01
   0EC9                    4992 00142$:
                     0696  4993 	C$easyax5043.c$545$5$244 ==.
                           4994 ;	../COMMON/easyax5043.c:545: uint16_t len = axradio_txbuffer_len - axradio_txbuffer_cnt;
   0EC9 90 00 07      [24] 4995 	mov	dptr,#_axradio_txbuffer_cnt
   0ECC E0            [24] 4996 	movx	a,@dptr
   0ECD FC            [12] 4997 	mov	r4,a
   0ECE A3            [24] 4998 	inc	dptr
   0ECF E0            [24] 4999 	movx	a,@dptr
   0ED0 FD            [12] 5000 	mov	r5,a
   0ED1 90 00 05      [24] 5001 	mov	dptr,#_axradio_txbuffer_len
   0ED4 E0            [24] 5002 	movx	a,@dptr
   0ED5 FA            [12] 5003 	mov	r2,a
   0ED6 A3            [24] 5004 	inc	dptr
   0ED7 E0            [24] 5005 	movx	a,@dptr
   0ED8 FB            [12] 5006 	mov	r3,a
   0ED9 EA            [12] 5007 	mov	a,r2
   0EDA C3            [12] 5008 	clr	c
   0EDB 9C            [12] 5009 	subb	a,r4
   0EDC FC            [12] 5010 	mov	r4,a
   0EDD EB            [12] 5011 	mov	a,r3
   0EDE 9D            [12] 5012 	subb	a,r5
   0EDF FD            [12] 5013 	mov	r5,a
                     06AD  5014 	C$easyax5043.c$546$5$244 ==.
                           5015 ;	../COMMON/easyax5043.c:546: cnt -= 3;
   0EE0 1F            [12] 5016 	dec	r7
   0EE1 1F            [12] 5017 	dec	r7
   0EE2 1F            [12] 5018 	dec	r7
                     06B0  5019 	C$easyax5043.c$547$5$244 ==.
                           5020 ;	../COMMON/easyax5043.c:547: if (cnt >= len) {
   0EE3 8F 02         [24] 5021 	mov	ar2,r7
   0EE5 7B 00         [12] 5022 	mov	r3,#0x00
   0EE7 C3            [12] 5023 	clr	c
   0EE8 EA            [12] 5024 	mov	a,r2
   0EE9 9C            [12] 5025 	subb	a,r4
   0EEA EB            [12] 5026 	mov	a,r3
   0EEB 9D            [12] 5027 	subb	a,r5
   0EEC 40 05         [24] 5028 	jc	00144$
                     06BB  5029 	C$easyax5043.c$548$6$245 ==.
                           5030 ;	../COMMON/easyax5043.c:548: cnt = len;
   0EEE 8C 07         [24] 5031 	mov	ar7,r4
                     06BD  5032 	C$easyax5043.c$549$6$245 ==.
                           5033 ;	../COMMON/easyax5043.c:549: flags |= 0x02; // flag byte: pkt_end
   0EF0 43 06 02      [24] 5034 	orl	ar6,#0x02
   0EF3                    5035 00144$:
                     06C0  5036 	C$easyax5043.c$552$4$243 ==.
                           5037 ;	../COMMON/easyax5043.c:552: if (!cnt)
   0EF3 EF            [12] 5038 	mov	a,r7
   0EF4 60 54         [24] 5039 	jz	00152$
                     06C3  5040 	C$easyax5043.c$554$4$243 ==.
                           5041 ;	../COMMON/easyax5043.c:554: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                     06C3  5042 	C$easyax5043.c$555$4$243 ==.
                           5043 ;	../COMMON/easyax5043.c:555: AX5043_FIFODATA = cnt + 1; // write FIFO chunk length byte (length includes the flag byte, thus the +1)
   0EF6 90 40 29      [24] 5044 	mov	dptr,#_AX5043_FIFODATA
   0EF9 74 E1         [12] 5045 	mov	a,#0xE1
   0EFB F0            [24] 5046 	movx	@dptr,a
   0EFC EF            [12] 5047 	mov	a,r7
   0EFD 04            [12] 5048 	inc	a
   0EFE F0            [24] 5049 	movx	@dptr,a
                     06CC  5050 	C$easyax5043.c$556$4$243 ==.
                           5051 ;	../COMMON/easyax5043.c:556: AX5043_FIFODATA = flags;
   0EFF 90 40 29      [24] 5052 	mov	dptr,#_AX5043_FIFODATA
   0F02 EE            [12] 5053 	mov	a,r6
   0F03 F0            [24] 5054 	movx	@dptr,a
                     06D1  5055 	C$easyax5043.c$557$4$243 ==.
                           5056 ;	../COMMON/easyax5043.c:557: ax5043_writefifo(&axradio_txbuffer[axradio_txbuffer_cnt], cnt);
   0F04 90 00 07      [24] 5057 	mov	dptr,#_axradio_txbuffer_cnt
   0F07 E0            [24] 5058 	movx	a,@dptr
   0F08 FC            [12] 5059 	mov	r4,a
   0F09 A3            [24] 5060 	inc	dptr
   0F0A E0            [24] 5061 	movx	a,@dptr
   0F0B FD            [12] 5062 	mov	r5,a
   0F0C EC            [12] 5063 	mov	a,r4
   0F0D 24 2A         [12] 5064 	add	a,#_axradio_txbuffer
   0F0F FC            [12] 5065 	mov	r4,a
   0F10 ED            [12] 5066 	mov	a,r5
   0F11 34 00         [12] 5067 	addc	a,#(_axradio_txbuffer >> 8)
   0F13 FD            [12] 5068 	mov	r5,a
   0F14 7B 00         [12] 5069 	mov	r3,#0x00
   0F16 C0 07         [24] 5070 	push	ar7
   0F18 C0 06         [24] 5071 	push	ar6
   0F1A C0 07         [24] 5072 	push	ar7
   0F1C 8C 82         [24] 5073 	mov	dpl,r4
   0F1E 8D 83         [24] 5074 	mov	dph,r5
   0F20 8B F0         [24] 5075 	mov	b,r3
   0F22 12 4E FC      [24] 5076 	lcall	_ax5043_writefifo
   0F25 15 81         [12] 5077 	dec	sp
   0F27 D0 06         [24] 5078 	pop	ar6
   0F29 D0 07         [24] 5079 	pop	ar7
                     06F8  5080 	C$easyax5043.c$558$4$243 ==.
                           5081 ;	../COMMON/easyax5043.c:558: axradio_txbuffer_cnt += cnt;
   0F2B 7D 00         [12] 5082 	mov	r5,#0x00
   0F2D 90 00 07      [24] 5083 	mov	dptr,#_axradio_txbuffer_cnt
   0F30 E0            [24] 5084 	movx	a,@dptr
   0F31 FB            [12] 5085 	mov	r3,a
   0F32 A3            [24] 5086 	inc	dptr
   0F33 E0            [24] 5087 	movx	a,@dptr
   0F34 FC            [12] 5088 	mov	r4,a
   0F35 90 00 07      [24] 5089 	mov	dptr,#_axradio_txbuffer_cnt
   0F38 EF            [12] 5090 	mov	a,r7
   0F39 2B            [12] 5091 	add	a,r3
   0F3A F0            [24] 5092 	movx	@dptr,a
   0F3B ED            [12] 5093 	mov	a,r5
   0F3C 3C            [12] 5094 	addc	a,r4
   0F3D A3            [24] 5095 	inc	dptr
   0F3E F0            [24] 5096 	movx	@dptr,a
                     070C  5097 	C$easyax5043.c$559$4$243 ==.
                           5098 ;	../COMMON/easyax5043.c:559: if (flags & 0x02)
   0F3F EE            [12] 5099 	mov	a,r6
   0F40 20 E1 03      [24] 5100 	jb	acc.1,00296$
   0F43 02 0C 22      [24] 5101 	ljmp	00157$
   0F46                    5102 00296$:
                     0713  5103 	C$easyax5043.c$560$4$243 ==.
                           5104 ;	../COMMON/easyax5043.c:560: goto pktend;
                     0713  5105 	C$easyax5043.c$564$3$231 ==.
                           5106 ;	../COMMON/easyax5043.c:564: default:
   0F46 80 02         [24] 5107 	sjmp	00152$
   0F48                    5108 00149$:
                     0715  5109 	C$easyax5043.c$565$3$231 ==.
                           5110 ;	../COMMON/easyax5043.c:565: return;
                     0715  5111 	C$easyax5043.c$568$1$229 ==.
                           5112 ;	../COMMON/easyax5043.c:568: pktend:
   0F48 80 15         [24] 5113 	sjmp	00159$
   0F4A                    5114 00152$:
                     0717  5115 	C$easyax5043.c$569$1$229 ==.
                           5116 ;	../COMMON/easyax5043.c:569: axradio_trxstate = trxstate_tx_waitdone;
   0F4A 75 0B 0D      [24] 5117 	mov	_axradio_trxstate,#0x0D
                     071A  5118 	C$easyax5043.c$570$1$229 ==.
                           5119 ;	../COMMON/easyax5043.c:570: AX5043_RADIOEVENTMASK0 = 0x01; // enable REVRDONE event
   0F4D 90 40 09      [24] 5120 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0F50 74 01         [12] 5121 	mov	a,#0x01
   0F52 F0            [24] 5122 	movx	@dptr,a
                     0720  5123 	C$easyax5043.c$571$1$229 ==.
                           5124 ;	../COMMON/easyax5043.c:571: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   0F53 90 40 07      [24] 5125 	mov	dptr,#_AX5043_IRQMASK0
   0F56 74 40         [12] 5126 	mov	a,#0x40
   0F58 F0            [24] 5127 	movx	@dptr,a
                     0726  5128 	C$easyax5043.c$572$1$229 ==.
                           5129 ;	../COMMON/easyax5043.c:572: fifocommit:
   0F59                    5130 00153$:
                     0726  5131 	C$easyax5043.c$573$1$229 ==.
                           5132 ;	../COMMON/easyax5043.c:573: AX5043_FIFOSTAT = 4; // commit
   0F59 90 40 28      [24] 5133 	mov	dptr,#_AX5043_FIFOSTAT
   0F5C 74 04         [12] 5134 	mov	a,#0x04
   0F5E F0            [24] 5135 	movx	@dptr,a
   0F5F                    5136 00159$:
                     072C  5137 	C$easyax5043.c$574$1$229 ==.
                     072C  5138 	XFeasyax5043$transmit_isr$0$0 ==.
   0F5F 22            [24] 5139 	ret
                           5140 ;------------------------------------------------------------
                           5141 ;Allocation info for local variables in function 'axradio_isr'
                           5142 ;------------------------------------------------------------
                           5143 ;evt                       Allocated to registers r7 
                           5144 ;------------------------------------------------------------
                     072D  5145 	G$axradio_isr$0$0 ==.
                     072D  5146 	C$easyax5043.c$577$1$229 ==.
                           5147 ;	../COMMON/easyax5043.c:577: void axradio_isr(void) __interrupt INT_RADIO
                           5148 ;	-----------------------------------------
                           5149 ;	 function axradio_isr
                           5150 ;	-----------------------------------------
   0F60                    5151 _axradio_isr:
   0F60 C0 20         [24] 5152 	push	bits
   0F62 C0 E0         [24] 5153 	push	acc
   0F64 C0 F0         [24] 5154 	push	b
   0F66 C0 82         [24] 5155 	push	dpl
   0F68 C0 83         [24] 5156 	push	dph
   0F6A C0 07         [24] 5157 	push	(0+7)
   0F6C C0 06         [24] 5158 	push	(0+6)
   0F6E C0 05         [24] 5159 	push	(0+5)
   0F70 C0 04         [24] 5160 	push	(0+4)
   0F72 C0 03         [24] 5161 	push	(0+3)
   0F74 C0 02         [24] 5162 	push	(0+2)
   0F76 C0 01         [24] 5163 	push	(0+1)
   0F78 C0 00         [24] 5164 	push	(0+0)
   0F7A C0 D0         [24] 5165 	push	psw
   0F7C 75 D0 00      [24] 5166 	mov	psw,#0x00
                     074C  5167 	C$easyax5043.c$587$1$247 ==.
                           5168 ;	../COMMON/easyax5043.c:587: switch (axradio_trxstate) {
   0F7F E5 0B         [12] 5169 	mov	a,_axradio_trxstate
   0F81 FF            [12] 5170 	mov	r7,a
   0F82 24 EF         [12] 5171 	add	a,#0xff - 0x10
   0F84 50 03         [24] 5172 	jnc	00250$
   0F86 02 0F BC      [24] 5173 	ljmp	00101$
   0F89                    5174 00250$:
   0F89 EF            [12] 5175 	mov	a,r7
   0F8A F5 F0         [12] 5176 	mov	b,a
   0F8C 24 0B         [12] 5177 	add	a,#(00251$-3-.)
   0F8E 83            [24] 5178 	movc	a,@a+pc
   0F8F F5 82         [12] 5179 	mov	dpl,a
   0F91 E5 F0         [12] 5180 	mov	a,b
   0F93 24 15         [12] 5181 	add	a,#(00252$-3-.)
   0F95 83            [24] 5182 	movc	a,@a+pc
   0F96 F5 83         [12] 5183 	mov	dph,a
   0F98 E4            [12] 5184 	clr	a
   0F99 73            [24] 5185 	jmp	@a+dptr
   0F9A                    5186 00251$:
   0F9A BC                 5187 	.db	00101$
   0F9B 18                 5188 	.db	00162$
   0F9C DE                 5189 	.db	00158$
   0F9D C8                 5190 	.db	00102$
   0F9E BC                 5191 	.db	00101$
   0F9F D3                 5192 	.db	00103$
   0FA0 BC                 5193 	.db	00101$
   0FA1 DE                 5194 	.db	00104$
   0FA2 BC                 5195 	.db	00101$
   0FA3 E9                 5196 	.db	00105$
   0FA4 7A                 5197 	.db	00114$
   0FA5 7A                 5198 	.db	00115$
   0FA6 7A                 5199 	.db	00116$
   0FA7 80                 5200 	.db	00117$
   0FA8 B5                 5201 	.db	00144$
   0FA9 FA                 5202 	.db	00145$
   0FAA 21                 5203 	.db	00148$
   0FAB                    5204 00252$:
   0FAB 0F                 5205 	.db	00101$>>8
   0FAC 13                 5206 	.db	00162$>>8
   0FAD 12                 5207 	.db	00158$>>8
   0FAE 0F                 5208 	.db	00102$>>8
   0FAF 0F                 5209 	.db	00101$>>8
   0FB0 0F                 5210 	.db	00103$>>8
   0FB1 0F                 5211 	.db	00101$>>8
   0FB2 0F                 5212 	.db	00104$>>8
   0FB3 0F                 5213 	.db	00101$>>8
   0FB4 0F                 5214 	.db	00105$>>8
   0FB5 10                 5215 	.db	00114$>>8
   0FB6 10                 5216 	.db	00115$>>8
   0FB7 10                 5217 	.db	00116$>>8
   0FB8 10                 5218 	.db	00117$>>8
   0FB9 11                 5219 	.db	00144$>>8
   0FBA 11                 5220 	.db	00145$>>8
   0FBB 12                 5221 	.db	00148$>>8
                     0789  5222 	C$easyax5043.c$588$2$248 ==.
                           5223 ;	../COMMON/easyax5043.c:588: default:
   0FBC                    5224 00101$:
                     0789  5225 	C$easyax5043.c$589$2$248 ==.
                           5226 ;	../COMMON/easyax5043.c:589: AX5043_IRQMASK1 = 0x00;
   0FBC 90 40 06      [24] 5227 	mov	dptr,#_AX5043_IRQMASK1
                     078C  5228 	C$easyax5043.c$590$2$248 ==.
                           5229 ;	../COMMON/easyax5043.c:590: AX5043_IRQMASK0 = 0x00;
   0FBF E4            [12] 5230 	clr	a
   0FC0 F0            [24] 5231 	movx	@dptr,a
   0FC1 90 40 07      [24] 5232 	mov	dptr,#_AX5043_IRQMASK0
   0FC4 F0            [24] 5233 	movx	@dptr,a
                     0792  5234 	C$easyax5043.c$591$2$248 ==.
                           5235 ;	../COMMON/easyax5043.c:591: break;
   0FC5 02 13 1B      [24] 5236 	ljmp	00164$
                     0795  5237 	C$easyax5043.c$593$2$248 ==.
                           5238 ;	../COMMON/easyax5043.c:593: case trxstate_wait_xtal:
   0FC8                    5239 00102$:
                     0795  5240 	C$easyax5043.c$594$2$248 ==.
                           5241 ;	../COMMON/easyax5043.c:594: AX5043_IRQMASK1 = 0x00; // otherwise crystal ready will fire all over again
   0FC8 90 40 06      [24] 5242 	mov	dptr,#_AX5043_IRQMASK1
   0FCB E4            [12] 5243 	clr	a
   0FCC F0            [24] 5244 	movx	@dptr,a
                     079A  5245 	C$easyax5043.c$595$2$248 ==.
                           5246 ;	../COMMON/easyax5043.c:595: axradio_trxstate = trxstate_xtal_ready;
   0FCD 75 0B 04      [24] 5247 	mov	_axradio_trxstate,#0x04
                     079D  5248 	C$easyax5043.c$596$2$248 ==.
                           5249 ;	../COMMON/easyax5043.c:596: break;
   0FD0 02 13 1B      [24] 5250 	ljmp	00164$
                     07A0  5251 	C$easyax5043.c$598$2$248 ==.
                           5252 ;	../COMMON/easyax5043.c:598: case trxstate_pll_ranging:
   0FD3                    5253 00103$:
                     07A0  5254 	C$easyax5043.c$599$2$248 ==.
                           5255 ;	../COMMON/easyax5043.c:599: AX5043_IRQMASK1 = 0x00; // otherwise autoranging done will fire all over again
   0FD3 90 40 06      [24] 5256 	mov	dptr,#_AX5043_IRQMASK1
   0FD6 E4            [12] 5257 	clr	a
   0FD7 F0            [24] 5258 	movx	@dptr,a
                     07A5  5259 	C$easyax5043.c$600$2$248 ==.
                           5260 ;	../COMMON/easyax5043.c:600: axradio_trxstate = trxstate_pll_ranging_done;
   0FD8 75 0B 06      [24] 5261 	mov	_axradio_trxstate,#0x06
                     07A8  5262 	C$easyax5043.c$601$2$248 ==.
                           5263 ;	../COMMON/easyax5043.c:601: break;
   0FDB 02 13 1B      [24] 5264 	ljmp	00164$
                     07AB  5265 	C$easyax5043.c$603$2$248 ==.
                           5266 ;	../COMMON/easyax5043.c:603: case trxstate_pll_settling:
   0FDE                    5267 00104$:
                     07AB  5268 	C$easyax5043.c$604$2$248 ==.
                           5269 ;	../COMMON/easyax5043.c:604: AX5043_RADIOEVENTMASK0 = 0x00;
   0FDE 90 40 09      [24] 5270 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   0FE1 E4            [12] 5271 	clr	a
   0FE2 F0            [24] 5272 	movx	@dptr,a
                     07B0  5273 	C$easyax5043.c$605$2$248 ==.
                           5274 ;	../COMMON/easyax5043.c:605: axradio_trxstate = trxstate_pll_settled;
   0FE3 75 0B 08      [24] 5275 	mov	_axradio_trxstate,#0x08
                     07B3  5276 	C$easyax5043.c$606$2$248 ==.
                           5277 ;	../COMMON/easyax5043.c:606: break;
   0FE6 02 13 1B      [24] 5278 	ljmp	00164$
                     07B6  5279 	C$easyax5043.c$608$2$248 ==.
                           5280 ;	../COMMON/easyax5043.c:608: case trxstate_tx_xtalwait:
   0FE9                    5281 00105$:
                     07B6  5282 	C$easyax5043.c$609$2$248 ==.
                           5283 ;	../COMMON/easyax5043.c:609: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   0FE9 90 40 0F      [24] 5284 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   0FEC E0            [24] 5285 	movx	a,@dptr
                     07BA  5286 	C$easyax5043.c$610$2$248 ==.
                           5287 ;	../COMMON/easyax5043.c:610: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   0FED 90 40 28      [24] 5288 	mov	dptr,#_AX5043_FIFOSTAT
   0FF0 74 03         [12] 5289 	mov	a,#0x03
   0FF2 F0            [24] 5290 	movx	@dptr,a
                     07C0  5291 	C$easyax5043.c$611$2$248 ==.
                           5292 ;	../COMMON/easyax5043.c:611: AX5043_IRQMASK1 = 0x00;
   0FF3 90 40 06      [24] 5293 	mov	dptr,#_AX5043_IRQMASK1
   0FF6 E4            [12] 5294 	clr	a
   0FF7 F0            [24] 5295 	movx	@dptr,a
                     07C5  5296 	C$easyax5043.c$612$2$248 ==.
                           5297 ;	../COMMON/easyax5043.c:612: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   0FF8 90 40 07      [24] 5298 	mov	dptr,#_AX5043_IRQMASK0
   0FFB 74 08         [12] 5299 	mov	a,#0x08
   0FFD F0            [24] 5300 	movx	@dptr,a
                     07CB  5301 	C$easyax5043.c$613$2$248 ==.
                           5302 ;	../COMMON/easyax5043.c:613: axradio_trxstate = trxstate_tx_longpreamble;
   0FFE 75 0B 0A      [24] 5303 	mov	_axradio_trxstate,#0x0A
                     07CE  5304 	C$easyax5043.c$615$2$248 ==.
                           5305 ;	../COMMON/easyax5043.c:615: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1001 90 40 10      [24] 5306 	mov	dptr,#_AX5043_MODULATION
   1004 E0            [24] 5307 	movx	a,@dptr
   1005 FF            [12] 5308 	mov	r7,a
   1006 53 07 0F      [24] 5309 	anl	ar7,#0x0F
   1009 BF 09 0F      [24] 5310 	cjne	r7,#0x09,00107$
                     07D9  5311 	C$easyax5043.c$616$3$249 ==.
                           5312 ;	../COMMON/easyax5043.c:616: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                     07D9  5313 	C$easyax5043.c$617$3$249 ==.
                           5314 ;	../COMMON/easyax5043.c:617: AX5043_FIFODATA = 2;  // length (including flags)
                     07D9  5315 	C$easyax5043.c$618$3$249 ==.
                           5316 ;	../COMMON/easyax5043.c:618: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                     07D9  5317 	C$easyax5043.c$619$3$249 ==.
                           5318 ;	../COMMON/easyax5043.c:619: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   100C 90 40 29      [24] 5319 	mov	dptr,#_AX5043_FIFODATA
   100F 74 E1         [12] 5320 	mov	a,#0xE1
   1011 F0            [24] 5321 	movx	@dptr,a
   1012 74 02         [12] 5322 	mov	a,#0x02
   1014 F0            [24] 5323 	movx	@dptr,a
   1015 74 01         [12] 5324 	mov	a,#0x01
   1017 F0            [24] 5325 	movx	@dptr,a
   1018 74 11         [12] 5326 	mov	a,#0x11
   101A F0            [24] 5327 	movx	@dptr,a
   101B                    5328 00107$:
                     07E8  5329 	C$easyax5043.c$626$2$248 ==.
                           5330 ;	../COMMON/easyax5043.c:626: transmit_isr();
   101B 12 0C 22      [24] 5331 	lcall	_transmit_isr
                     07EB  5332 	C$easyax5043.c$627$2$248 ==.
                           5333 ;	../COMMON/easyax5043.c:627: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   101E 90 40 02      [24] 5334 	mov	dptr,#_AX5043_PWRMODE
   1021 74 0D         [12] 5335 	mov	a,#0x0D
   1023 F0            [24] 5336 	movx	@dptr,a
                     07F1  5337 	C$easyax5043.c$628$2$248 ==.
                           5338 ;	../COMMON/easyax5043.c:628: update_timeanchor();
   1024 12 08 33      [24] 5339 	lcall	_update_timeanchor
                     07F4  5340 	C$easyax5043.c$629$2$248 ==.
                           5341 ;	../COMMON/easyax5043.c:629: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1027 90 02 6B      [24] 5342 	mov	dptr,#_axradio_cb_transmitstart
   102A 12 4E DE      [24] 5343 	lcall	_wtimer_remove_callback
                     07FA  5344 	C$easyax5043.c$630$2$248 ==.
                           5345 ;	../COMMON/easyax5043.c:630: switch (axradio_mode) {
   102D AF 0A         [24] 5346 	mov	r7,_axradio_mode
   102F BF 12 02      [24] 5347 	cjne	r7,#0x12,00255$
   1032 80 03         [24] 5348 	sjmp	00109$
   1034                    5349 00255$:
   1034 BF 13 19      [24] 5350 	cjne	r7,#0x13,00112$
                     0804  5351 	C$easyax5043.c$632$3$250 ==.
                           5352 ;	../COMMON/easyax5043.c:632: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   1037                    5353 00109$:
                     0804  5354 	C$easyax5043.c$633$3$250 ==.
                           5355 ;	../COMMON/easyax5043.c:633: if (axradio_ack_count != axradio_framing_ack_retransmissions) {
   1037 90 00 0E      [24] 5356 	mov	dptr,#_axradio_ack_count
   103A E0            [24] 5357 	movx	a,@dptr
   103B FF            [12] 5358 	mov	r7,a
   103C 90 52 B0      [24] 5359 	mov	dptr,#_axradio_framing_ack_retransmissions
   103F E4            [12] 5360 	clr	a
   1040 93            [24] 5361 	movc	a,@a+dptr
   1041 FE            [12] 5362 	mov	r6,a
   1042 EF            [12] 5363 	mov	a,r7
   1043 B5 06 02      [24] 5364 	cjne	a,ar6,00258$
   1046 80 08         [24] 5365 	sjmp	00112$
   1048                    5366 00258$:
                     0815  5367 	C$easyax5043.c$634$4$251 ==.
                           5368 ;	../COMMON/easyax5043.c:634: axradio_cb_transmitstart.st.error = AXRADIO_ERR_RETRANSMISSION;
   1048 90 02 70      [24] 5369 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   104B 74 08         [12] 5370 	mov	a,#0x08
   104D F0            [24] 5371 	movx	@dptr,a
                     081B  5372 	C$easyax5043.c$635$4$251 ==.
                           5373 ;	../COMMON/easyax5043.c:635: break;
                     081B  5374 	C$easyax5043.c$638$3$250 ==.
                           5375 ;	../COMMON/easyax5043.c:638: default:
   104E 80 05         [24] 5376 	sjmp	00113$
   1050                    5377 00112$:
                     081D  5378 	C$easyax5043.c$639$3$250 ==.
                           5379 ;	../COMMON/easyax5043.c:639: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1050 90 02 70      [24] 5380 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1053 E4            [12] 5381 	clr	a
   1054 F0            [24] 5382 	movx	@dptr,a
                     0822  5383 	C$easyax5043.c$641$2$248 ==.
                           5384 ;	../COMMON/easyax5043.c:641: }
   1055                    5385 00113$:
                     0822  5386 	C$easyax5043.c$642$2$248 ==.
                           5387 ;	../COMMON/easyax5043.c:642: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1055 90 00 1A      [24] 5388 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1058 E0            [24] 5389 	movx	a,@dptr
   1059 FC            [12] 5390 	mov	r4,a
   105A A3            [24] 5391 	inc	dptr
   105B E0            [24] 5392 	movx	a,@dptr
   105C FD            [12] 5393 	mov	r5,a
   105D A3            [24] 5394 	inc	dptr
   105E E0            [24] 5395 	movx	a,@dptr
   105F FE            [12] 5396 	mov	r6,a
   1060 A3            [24] 5397 	inc	dptr
   1061 E0            [24] 5398 	movx	a,@dptr
   1062 FF            [12] 5399 	mov	r7,a
   1063 90 02 71      [24] 5400 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1066 EC            [12] 5401 	mov	a,r4
   1067 F0            [24] 5402 	movx	@dptr,a
   1068 ED            [12] 5403 	mov	a,r5
   1069 A3            [24] 5404 	inc	dptr
   106A F0            [24] 5405 	movx	@dptr,a
   106B EE            [12] 5406 	mov	a,r6
   106C A3            [24] 5407 	inc	dptr
   106D F0            [24] 5408 	movx	@dptr,a
   106E EF            [12] 5409 	mov	a,r7
   106F A3            [24] 5410 	inc	dptr
   1070 F0            [24] 5411 	movx	@dptr,a
                     083E  5412 	C$easyax5043.c$643$2$248 ==.
                           5413 ;	../COMMON/easyax5043.c:643: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1071 90 02 6B      [24] 5414 	mov	dptr,#_axradio_cb_transmitstart
   1074 12 43 37      [24] 5415 	lcall	_wtimer_add_callback
                     0844  5416 	C$easyax5043.c$644$2$248 ==.
                           5417 ;	../COMMON/easyax5043.c:644: break;
   1077 02 13 1B      [24] 5418 	ljmp	00164$
                     0847  5419 	C$easyax5043.c$646$2$248 ==.
                           5420 ;	../COMMON/easyax5043.c:646: case trxstate_tx_longpreamble:
   107A                    5421 00114$:
                     0847  5422 	C$easyax5043.c$647$2$248 ==.
                           5423 ;	../COMMON/easyax5043.c:647: case trxstate_tx_shortpreamble:
   107A                    5424 00115$:
                     0847  5425 	C$easyax5043.c$648$2$248 ==.
                           5426 ;	../COMMON/easyax5043.c:648: case trxstate_tx_packet:
   107A                    5427 00116$:
                     0847  5428 	C$easyax5043.c$649$2$248 ==.
                           5429 ;	../COMMON/easyax5043.c:649: transmit_isr();
   107A 12 0C 22      [24] 5430 	lcall	_transmit_isr
                     084A  5431 	C$easyax5043.c$650$2$248 ==.
                           5432 ;	../COMMON/easyax5043.c:650: break;
   107D 02 13 1B      [24] 5433 	ljmp	00164$
                     084D  5434 	C$easyax5043.c$652$2$248 ==.
                           5435 ;	../COMMON/easyax5043.c:652: case trxstate_tx_waitdone:
   1080                    5436 00117$:
                     084D  5437 	C$easyax5043.c$653$2$248 ==.
                           5438 ;	../COMMON/easyax5043.c:653: AX5043_RADIOEVENTREQ0;
   1080 90 40 0F      [24] 5439 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1083 E0            [24] 5440 	movx	a,@dptr
                     0851  5441 	C$easyax5043.c$654$2$248 ==.
                           5442 ;	../COMMON/easyax5043.c:654: if (AX5043_RADIOSTATE != 0)
   1084 90 40 1C      [24] 5443 	mov	dptr,#_AX5043_RADIOSTATE
   1087 E0            [24] 5444 	movx	a,@dptr
   1088 FF            [12] 5445 	mov	r7,a
   1089 60 03         [24] 5446 	jz	00259$
   108B 02 13 1B      [24] 5447 	ljmp	00164$
   108E                    5448 00259$:
                     085B  5449 	C$easyax5043.c$656$2$248 ==.
                           5450 ;	../COMMON/easyax5043.c:656: AX5043_RADIOEVENTMASK0 = 0x00;
   108E 90 40 09      [24] 5451 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1091 E4            [12] 5452 	clr	a
   1092 F0            [24] 5453 	movx	@dptr,a
                     0860  5454 	C$easyax5043.c$657$2$248 ==.
                           5455 ;	../COMMON/easyax5043.c:657: switch (axradio_mode) {
   1093 AF 0A         [24] 5456 	mov	r7,_axradio_mode
   1095 BF 12 02      [24] 5457 	cjne	r7,#0x12,00260$
   1098 80 6A         [24] 5458 	sjmp	00131$
   109A                    5459 00260$:
   109A BF 13 02      [24] 5460 	cjne	r7,#0x13,00261$
   109D 80 65         [24] 5461 	sjmp	00131$
   109F                    5462 00261$:
   109F BF 18 02      [24] 5463 	cjne	r7,#0x18,00262$
   10A2 80 1D         [24] 5464 	sjmp	00120$
   10A4                    5465 00262$:
   10A4 BF 19 02      [24] 5466 	cjne	r7,#0x19,00263$
   10A7 80 36         [24] 5467 	sjmp	00125$
   10A9                    5468 00263$:
   10A9 BF 1A 02      [24] 5469 	cjne	r7,#0x1A,00264$
   10AC 80 1C         [24] 5470 	sjmp	00121$
   10AE                    5471 00264$:
   10AE BF 1B 02      [24] 5472 	cjne	r7,#0x1B,00265$
   10B1 80 3C         [24] 5473 	sjmp	00128$
   10B3                    5474 00265$:
   10B3 BF 20 03      [24] 5475 	cjne	r7,#0x20,00266$
   10B6 02 11 38      [24] 5476 	ljmp	00132$
   10B9                    5477 00266$:
   10B9 BF 21 02      [24] 5478 	cjne	r7,#0x21,00267$
   10BC 80 39         [24] 5479 	sjmp	00129$
   10BE                    5480 00267$:
   10BE 02 11 45      [24] 5481 	ljmp	00133$
                     088E  5482 	C$easyax5043.c$658$3$252 ==.
                           5483 ;	../COMMON/easyax5043.c:658: case AXRADIO_MODE_ASYNC_RECEIVE:
   10C1                    5484 00120$:
                     088E  5485 	C$easyax5043.c$659$3$252 ==.
                           5486 ;	../COMMON/easyax5043.c:659: ax5043_init_registers_rx();
   10C1 12 08 FF      [24] 5487 	lcall	_ax5043_init_registers_rx
                     0891  5488 	C$easyax5043.c$660$3$252 ==.
                           5489 ;	../COMMON/easyax5043.c:660: ax5043_receiver_on_continuous();
   10C4 12 13 38      [24] 5490 	lcall	_ax5043_receiver_on_continuous
                     0894  5491 	C$easyax5043.c$661$3$252 ==.
                           5492 ;	../COMMON/easyax5043.c:661: break;
   10C7 02 11 48      [24] 5493 	ljmp	00134$
                     0897  5494 	C$easyax5043.c$663$3$252 ==.
                           5495 ;	../COMMON/easyax5043.c:663: case AXRADIO_MODE_ACK_RECEIVE:
   10CA                    5496 00121$:
                     0897  5497 	C$easyax5043.c$664$3$252 ==.
                           5498 ;	../COMMON/easyax5043.c:664: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10CA 90 02 37      [24] 5499 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10CD E0            [24] 5500 	movx	a,@dptr
   10CE FF            [12] 5501 	mov	r7,a
   10CF BF F0 08      [24] 5502 	cjne	r7,#0xF0,00124$
                     089F  5503 	C$easyax5043.c$665$4$253 ==.
                           5504 ;	../COMMON/easyax5043.c:665: ax5043_init_registers_rx();
   10D2 12 08 FF      [24] 5505 	lcall	_ax5043_init_registers_rx
                     08A2  5506 	C$easyax5043.c$666$4$253 ==.
                           5507 ;	../COMMON/easyax5043.c:666: ax5043_receiver_on_continuous();
   10D5 12 13 38      [24] 5508 	lcall	_ax5043_receiver_on_continuous
                     08A5  5509 	C$easyax5043.c$667$4$253 ==.
                           5510 ;	../COMMON/easyax5043.c:667: break;
                     08A5  5511 	C$easyax5043.c$669$3$252 ==.
                           5512 ;	../COMMON/easyax5043.c:669: offxtal:
   10D8 80 6E         [24] 5513 	sjmp	00134$
   10DA                    5514 00124$:
                     08A7  5515 	C$easyax5043.c$670$3$252 ==.
                           5516 ;	../COMMON/easyax5043.c:670: ax5043_off_xtal();
   10DA 12 14 86      [24] 5517 	lcall	_ax5043_off_xtal
                     08AA  5518 	C$easyax5043.c$671$3$252 ==.
                           5519 ;	../COMMON/easyax5043.c:671: break;
                     08AA  5520 	C$easyax5043.c$673$3$252 ==.
                           5521 ;	../COMMON/easyax5043.c:673: case AXRADIO_MODE_WOR_RECEIVE:
   10DD 80 69         [24] 5522 	sjmp	00134$
   10DF                    5523 00125$:
                     08AC  5524 	C$easyax5043.c$674$3$252 ==.
                           5525 ;	../COMMON/easyax5043.c:674: if (axradio_cb_receive.st.error == AXRADIO_ERR_PACKETDONE) {
   10DF 90 02 37      [24] 5526 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   10E2 E0            [24] 5527 	movx	a,@dptr
   10E3 FF            [12] 5528 	mov	r7,a
   10E4 BF F0 F3      [24] 5529 	cjne	r7,#0xF0,00124$
                     08B4  5530 	C$easyax5043.c$675$4$254 ==.
                           5531 ;	../COMMON/easyax5043.c:675: ax5043_init_registers_rx();
   10E7 12 08 FF      [24] 5532 	lcall	_ax5043_init_registers_rx
                     08B7  5533 	C$easyax5043.c$676$4$254 ==.
                           5534 ;	../COMMON/easyax5043.c:676: ax5043_receiver_on_wor();
   10EA 12 13 D2      [24] 5535 	lcall	_ax5043_receiver_on_wor
                     08BA  5536 	C$easyax5043.c$677$4$254 ==.
                           5537 ;	../COMMON/easyax5043.c:677: break;
                     08BA  5538 	C$easyax5043.c$681$3$252 ==.
                           5539 ;	../COMMON/easyax5043.c:681: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   10ED 80 59         [24] 5540 	sjmp	00134$
   10EF                    5541 00128$:
                     08BC  5542 	C$easyax5043.c$682$3$252 ==.
                           5543 ;	../COMMON/easyax5043.c:682: ax5043_init_registers_rx();
   10EF 12 08 FF      [24] 5544 	lcall	_ax5043_init_registers_rx
                     08BF  5545 	C$easyax5043.c$683$3$252 ==.
                           5546 ;	../COMMON/easyax5043.c:683: ax5043_receiver_on_wor();
   10F2 12 13 D2      [24] 5547 	lcall	_ax5043_receiver_on_wor
                     08C2  5548 	C$easyax5043.c$684$3$252 ==.
                           5549 ;	../COMMON/easyax5043.c:684: break;
                     08C2  5550 	C$easyax5043.c$686$3$252 ==.
                           5551 ;	../COMMON/easyax5043.c:686: case AXRADIO_MODE_SYNC_ACK_MASTER:
   10F5 80 51         [24] 5552 	sjmp	00134$
   10F7                    5553 00129$:
                     08C4  5554 	C$easyax5043.c$687$3$252 ==.
                           5555 ;	../COMMON/easyax5043.c:687: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   10F7 90 52 B2      [24] 5556 	mov	dptr,#_axradio_framing_minpayloadlen
   10FA E4            [12] 5557 	clr	a
   10FB 93            [24] 5558 	movc	a,@a+dptr
   10FC FF            [12] 5559 	mov	r7,a
   10FD 90 00 05      [24] 5560 	mov	dptr,#_axradio_txbuffer_len
   1100 F0            [24] 5561 	movx	@dptr,a
   1101 E4            [12] 5562 	clr	a
   1102 A3            [24] 5563 	inc	dptr
   1103 F0            [24] 5564 	movx	@dptr,a
                     08D1  5565 	C$easyax5043.c$691$3$252 ==.
                           5566 ;	../COMMON/easyax5043.c:691: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   1104                    5567 00131$:
                     08D1  5568 	C$easyax5043.c$692$3$252 ==.
                           5569 ;	../COMMON/easyax5043.c:692: ax5043_init_registers_rx();
   1104 12 08 FF      [24] 5570 	lcall	_ax5043_init_registers_rx
                     08D4  5571 	C$easyax5043.c$693$3$252 ==.
                           5572 ;	../COMMON/easyax5043.c:693: ax5043_receiver_on_continuous();
   1107 12 13 38      [24] 5573 	lcall	_ax5043_receiver_on_continuous
                     08D7  5574 	C$easyax5043.c$694$3$252 ==.
                           5575 ;	../COMMON/easyax5043.c:694: wtimer_remove(&axradio_timer);
   110A 90 02 89      [24] 5576 	mov	dptr,#_axradio_timer
   110D 12 4C D4      [24] 5577 	lcall	_wtimer_remove
                     08DD  5578 	C$easyax5043.c$695$3$252 ==.
                           5579 ;	../COMMON/easyax5043.c:695: axradio_timer.time = axradio_framing_ack_timeout;
   1110 90 52 A8      [24] 5580 	mov	dptr,#_axradio_framing_ack_timeout
   1113 E4            [12] 5581 	clr	a
   1114 93            [24] 5582 	movc	a,@a+dptr
   1115 FC            [12] 5583 	mov	r4,a
   1116 74 01         [12] 5584 	mov	a,#0x01
   1118 93            [24] 5585 	movc	a,@a+dptr
   1119 FD            [12] 5586 	mov	r5,a
   111A 74 02         [12] 5587 	mov	a,#0x02
   111C 93            [24] 5588 	movc	a,@a+dptr
   111D FE            [12] 5589 	mov	r6,a
   111E 74 03         [12] 5590 	mov	a,#0x03
   1120 93            [24] 5591 	movc	a,@a+dptr
   1121 FF            [12] 5592 	mov	r7,a
   1122 90 02 8D      [24] 5593 	mov	dptr,#(_axradio_timer + 0x0004)
   1125 EC            [12] 5594 	mov	a,r4
   1126 F0            [24] 5595 	movx	@dptr,a
   1127 ED            [12] 5596 	mov	a,r5
   1128 A3            [24] 5597 	inc	dptr
   1129 F0            [24] 5598 	movx	@dptr,a
   112A EE            [12] 5599 	mov	a,r6
   112B A3            [24] 5600 	inc	dptr
   112C F0            [24] 5601 	movx	@dptr,a
   112D EF            [12] 5602 	mov	a,r7
   112E A3            [24] 5603 	inc	dptr
   112F F0            [24] 5604 	movx	@dptr,a
                     08FD  5605 	C$easyax5043.c$696$3$252 ==.
                           5606 ;	../COMMON/easyax5043.c:696: wtimer0_addrelative(&axradio_timer);
   1130 90 02 89      [24] 5607 	mov	dptr,#_axradio_timer
   1133 12 43 51      [24] 5608 	lcall	_wtimer0_addrelative
                     0903  5609 	C$easyax5043.c$697$3$252 ==.
                           5610 ;	../COMMON/easyax5043.c:697: break;
                     0903  5611 	C$easyax5043.c$699$3$252 ==.
                           5612 ;	../COMMON/easyax5043.c:699: case AXRADIO_MODE_SYNC_MASTER:
   1136 80 10         [24] 5613 	sjmp	00134$
   1138                    5614 00132$:
                     0905  5615 	C$easyax5043.c$700$3$252 ==.
                           5616 ;	../COMMON/easyax5043.c:700: axradio_txbuffer_len = axradio_framing_minpayloadlen;
   1138 90 52 B2      [24] 5617 	mov	dptr,#_axradio_framing_minpayloadlen
   113B E4            [12] 5618 	clr	a
   113C 93            [24] 5619 	movc	a,@a+dptr
   113D FF            [12] 5620 	mov	r7,a
   113E 90 00 05      [24] 5621 	mov	dptr,#_axradio_txbuffer_len
   1141 F0            [24] 5622 	movx	@dptr,a
   1142 E4            [12] 5623 	clr	a
   1143 A3            [24] 5624 	inc	dptr
   1144 F0            [24] 5625 	movx	@dptr,a
                     0912  5626 	C$easyax5043.c$703$3$252 ==.
                           5627 ;	../COMMON/easyax5043.c:703: default:
   1145                    5628 00133$:
                     0912  5629 	C$easyax5043.c$704$3$252 ==.
                           5630 ;	../COMMON/easyax5043.c:704: ax5043_off();
   1145 12 14 7D      [24] 5631 	lcall	_ax5043_off
                     0915  5632 	C$easyax5043.c$706$2$248 ==.
                           5633 ;	../COMMON/easyax5043.c:706: }
   1148                    5634 00134$:
                     0915  5635 	C$easyax5043.c$707$2$248 ==.
                           5636 ;	../COMMON/easyax5043.c:707: if (axradio_mode != AXRADIO_MODE_SYNC_MASTER &&
   1148 74 20         [12] 5637 	mov	a,#0x20
   114A B5 0A 02      [24] 5638 	cjne	a,_axradio_mode,00272$
   114D 80 1A         [24] 5639 	sjmp	00136$
   114F                    5640 00272$:
                     091C  5641 	C$easyax5043.c$708$2$248 ==.
                           5642 ;	../COMMON/easyax5043.c:708: axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER &&
   114F 74 21         [12] 5643 	mov	a,#0x21
   1151 B5 0A 02      [24] 5644 	cjne	a,_axradio_mode,00273$
   1154 80 13         [24] 5645 	sjmp	00136$
   1156                    5646 00273$:
                     0923  5647 	C$easyax5043.c$709$2$248 ==.
                           5648 ;	../COMMON/easyax5043.c:709: axradio_mode != AXRADIO_MODE_SYNC_SLAVE &&
   1156 74 22         [12] 5649 	mov	a,#0x22
   1158 B5 0A 02      [24] 5650 	cjne	a,_axradio_mode,00274$
   115B 80 0C         [24] 5651 	sjmp	00136$
   115D                    5652 00274$:
                     092A  5653 	C$easyax5043.c$710$2$248 ==.
                           5654 ;	../COMMON/easyax5043.c:710: axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   115D 74 23         [12] 5655 	mov	a,#0x23
   115F B5 0A 02      [24] 5656 	cjne	a,_axradio_mode,00275$
   1162 80 05         [24] 5657 	sjmp	00136$
   1164                    5658 00275$:
                     0931  5659 	C$easyax5043.c$711$2$248 ==.
                           5660 ;	../COMMON/easyax5043.c:711: axradio_syncstate = syncstate_off;
   1164 90 00 04      [24] 5661 	mov	dptr,#_axradio_syncstate
   1167 E4            [12] 5662 	clr	a
   1168 F0            [24] 5663 	movx	@dptr,a
   1169                    5664 00136$:
                     0936  5665 	C$easyax5043.c$712$2$248 ==.
                           5666 ;	../COMMON/easyax5043.c:712: update_timeanchor();
   1169 12 08 33      [24] 5667 	lcall	_update_timeanchor
                     0939  5668 	C$easyax5043.c$713$2$248 ==.
                           5669 ;	../COMMON/easyax5043.c:713: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   116C 90 02 75      [24] 5670 	mov	dptr,#_axradio_cb_transmitend
   116F 12 4E DE      [24] 5671 	lcall	_wtimer_remove_callback
                     093F  5672 	C$easyax5043.c$714$2$248 ==.
                           5673 ;	../COMMON/easyax5043.c:714: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   1172 90 02 7A      [24] 5674 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1175 E4            [12] 5675 	clr	a
   1176 F0            [24] 5676 	movx	@dptr,a
                     0944  5677 	C$easyax5043.c$715$2$248 ==.
                           5678 ;	../COMMON/easyax5043.c:715: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   1177 74 12         [12] 5679 	mov	a,#0x12
   1179 B5 0A 02      [24] 5680 	cjne	a,_axradio_mode,00276$
   117C 80 0C         [24] 5681 	sjmp	00140$
   117E                    5682 00276$:
                     094B  5683 	C$easyax5043.c$716$2$248 ==.
                           5684 ;	../COMMON/easyax5043.c:716: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   117E 74 13         [12] 5685 	mov	a,#0x13
   1180 B5 0A 02      [24] 5686 	cjne	a,_axradio_mode,00277$
   1183 80 05         [24] 5687 	sjmp	00140$
   1185                    5688 00277$:
                     0952  5689 	C$easyax5043.c$717$2$248 ==.
                           5690 ;	../COMMON/easyax5043.c:717: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   1185 74 21         [12] 5691 	mov	a,#0x21
   1187 B5 0A 06      [24] 5692 	cjne	a,_axradio_mode,00141$
   118A                    5693 00140$:
                     0957  5694 	C$easyax5043.c$718$2$248 ==.
                           5695 ;	../COMMON/easyax5043.c:718: axradio_cb_transmitend.st.error = AXRADIO_ERR_BUSY;
   118A 90 02 7A      [24] 5696 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   118D 74 02         [12] 5697 	mov	a,#0x02
   118F F0            [24] 5698 	movx	@dptr,a
   1190                    5699 00141$:
                     095D  5700 	C$easyax5043.c$719$2$248 ==.
                           5701 ;	../COMMON/easyax5043.c:719: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1190 90 00 1A      [24] 5702 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1193 E0            [24] 5703 	movx	a,@dptr
   1194 FC            [12] 5704 	mov	r4,a
   1195 A3            [24] 5705 	inc	dptr
   1196 E0            [24] 5706 	movx	a,@dptr
   1197 FD            [12] 5707 	mov	r5,a
   1198 A3            [24] 5708 	inc	dptr
   1199 E0            [24] 5709 	movx	a,@dptr
   119A FE            [12] 5710 	mov	r6,a
   119B A3            [24] 5711 	inc	dptr
   119C E0            [24] 5712 	movx	a,@dptr
   119D FF            [12] 5713 	mov	r7,a
   119E 90 02 7B      [24] 5714 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   11A1 EC            [12] 5715 	mov	a,r4
   11A2 F0            [24] 5716 	movx	@dptr,a
   11A3 ED            [12] 5717 	mov	a,r5
   11A4 A3            [24] 5718 	inc	dptr
   11A5 F0            [24] 5719 	movx	@dptr,a
   11A6 EE            [12] 5720 	mov	a,r6
   11A7 A3            [24] 5721 	inc	dptr
   11A8 F0            [24] 5722 	movx	@dptr,a
   11A9 EF            [12] 5723 	mov	a,r7
   11AA A3            [24] 5724 	inc	dptr
   11AB F0            [24] 5725 	movx	@dptr,a
                     0979  5726 	C$easyax5043.c$720$2$248 ==.
                           5727 ;	../COMMON/easyax5043.c:720: wtimer_add_callback(&axradio_cb_transmitend.cb);
   11AC 90 02 75      [24] 5728 	mov	dptr,#_axradio_cb_transmitend
   11AF 12 43 37      [24] 5729 	lcall	_wtimer_add_callback
                     097F  5730 	C$easyax5043.c$721$2$248 ==.
                           5731 ;	../COMMON/easyax5043.c:721: break;
   11B2 02 13 1B      [24] 5732 	ljmp	00164$
                     0982  5733 	C$easyax5043.c$724$2$248 ==.
                           5734 ;	../COMMON/easyax5043.c:724: case trxstate_txcw_xtalwait:
   11B5                    5735 00144$:
                     0982  5736 	C$easyax5043.c$725$2$248 ==.
                           5737 ;	../COMMON/easyax5043.c:725: AX5043_IRQMASK1 = 0x00;
   11B5 90 40 06      [24] 5738 	mov	dptr,#_AX5043_IRQMASK1
                     0985  5739 	C$easyax5043.c$726$2$248 ==.
                           5740 ;	../COMMON/easyax5043.c:726: AX5043_IRQMASK0 = 0x00;
   11B8 E4            [12] 5741 	clr	a
   11B9 F0            [24] 5742 	movx	@dptr,a
   11BA 90 40 07      [24] 5743 	mov	dptr,#_AX5043_IRQMASK0
   11BD F0            [24] 5744 	movx	@dptr,a
                     098B  5745 	C$easyax5043.c$727$2$248 ==.
                           5746 ;	../COMMON/easyax5043.c:727: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   11BE 90 40 02      [24] 5747 	mov	dptr,#_AX5043_PWRMODE
   11C1 74 0D         [12] 5748 	mov	a,#0x0D
   11C3 F0            [24] 5749 	movx	@dptr,a
                     0991  5750 	C$easyax5043.c$728$2$248 ==.
                           5751 ;	../COMMON/easyax5043.c:728: axradio_trxstate = trxstate_off;
   11C4 75 0B 00      [24] 5752 	mov	_axradio_trxstate,#0x00
                     0994  5753 	C$easyax5043.c$729$2$248 ==.
                           5754 ;	../COMMON/easyax5043.c:729: update_timeanchor();
   11C7 12 08 33      [24] 5755 	lcall	_update_timeanchor
                     0997  5756 	C$easyax5043.c$730$2$248 ==.
                           5757 ;	../COMMON/easyax5043.c:730: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   11CA 90 02 6B      [24] 5758 	mov	dptr,#_axradio_cb_transmitstart
   11CD 12 4E DE      [24] 5759 	lcall	_wtimer_remove_callback
                     099D  5760 	C$easyax5043.c$731$2$248 ==.
                           5761 ;	../COMMON/easyax5043.c:731: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   11D0 90 02 70      [24] 5762 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   11D3 E4            [12] 5763 	clr	a
   11D4 F0            [24] 5764 	movx	@dptr,a
                     09A2  5765 	C$easyax5043.c$732$2$248 ==.
                           5766 ;	../COMMON/easyax5043.c:732: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   11D5 90 00 1A      [24] 5767 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   11D8 E0            [24] 5768 	movx	a,@dptr
   11D9 FC            [12] 5769 	mov	r4,a
   11DA A3            [24] 5770 	inc	dptr
   11DB E0            [24] 5771 	movx	a,@dptr
   11DC FD            [12] 5772 	mov	r5,a
   11DD A3            [24] 5773 	inc	dptr
   11DE E0            [24] 5774 	movx	a,@dptr
   11DF FE            [12] 5775 	mov	r6,a
   11E0 A3            [24] 5776 	inc	dptr
   11E1 E0            [24] 5777 	movx	a,@dptr
   11E2 FF            [12] 5778 	mov	r7,a
   11E3 90 02 71      [24] 5779 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   11E6 EC            [12] 5780 	mov	a,r4
   11E7 F0            [24] 5781 	movx	@dptr,a
   11E8 ED            [12] 5782 	mov	a,r5
   11E9 A3            [24] 5783 	inc	dptr
   11EA F0            [24] 5784 	movx	@dptr,a
   11EB EE            [12] 5785 	mov	a,r6
   11EC A3            [24] 5786 	inc	dptr
   11ED F0            [24] 5787 	movx	@dptr,a
   11EE EF            [12] 5788 	mov	a,r7
   11EF A3            [24] 5789 	inc	dptr
   11F0 F0            [24] 5790 	movx	@dptr,a
                     09BE  5791 	C$easyax5043.c$733$2$248 ==.
                           5792 ;	../COMMON/easyax5043.c:733: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   11F1 90 02 6B      [24] 5793 	mov	dptr,#_axradio_cb_transmitstart
   11F4 12 43 37      [24] 5794 	lcall	_wtimer_add_callback
                     09C4  5795 	C$easyax5043.c$734$2$248 ==.
                           5796 ;	../COMMON/easyax5043.c:734: break;
   11F7 02 13 1B      [24] 5797 	ljmp	00164$
                     09C7  5798 	C$easyax5043.c$736$2$248 ==.
                           5799 ;	../COMMON/easyax5043.c:736: case trxstate_txstream_xtalwait:
   11FA                    5800 00145$:
                     09C7  5801 	C$easyax5043.c$737$2$248 ==.
                           5802 ;	../COMMON/easyax5043.c:737: if (AX5043_IRQREQUEST1 & 0x01) {
   11FA 90 40 0C      [24] 5803 	mov	dptr,#_AX5043_IRQREQUEST1
   11FD E0            [24] 5804 	movx	a,@dptr
   11FE FF            [12] 5805 	mov	r7,a
   11FF 20 E0 03      [24] 5806 	jb	acc.0,00280$
   1202 02 12 97      [24] 5807 	ljmp	00155$
   1205                    5808 00280$:
                     09D2  5809 	C$easyax5043.c$738$3$255 ==.
                           5810 ;	../COMMON/easyax5043.c:738: AX5043_RADIOEVENTMASK0 = 0x03; // enable PLL settled and done event
   1205 90 40 09      [24] 5811 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   1208 74 03         [12] 5812 	mov	a,#0x03
   120A F0            [24] 5813 	movx	@dptr,a
                     09D8  5814 	C$easyax5043.c$739$3$255 ==.
                           5815 ;	../COMMON/easyax5043.c:739: AX5043_IRQMASK1 = 0x00;
   120B 90 40 06      [24] 5816 	mov	dptr,#_AX5043_IRQMASK1
   120E E4            [12] 5817 	clr	a
   120F F0            [24] 5818 	movx	@dptr,a
                     09DD  5819 	C$easyax5043.c$740$3$255 ==.
                           5820 ;	../COMMON/easyax5043.c:740: AX5043_IRQMASK0 = 0x40; // enable radio controller irq
   1210 90 40 07      [24] 5821 	mov	dptr,#_AX5043_IRQMASK0
   1213 74 40         [12] 5822 	mov	a,#0x40
   1215 F0            [24] 5823 	movx	@dptr,a
                     09E3  5824 	C$easyax5043.c$741$3$255 ==.
                           5825 ;	../COMMON/easyax5043.c:741: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1216 90 40 02      [24] 5826 	mov	dptr,#_AX5043_PWRMODE
   1219 74 0D         [12] 5827 	mov	a,#0x0D
   121B F0            [24] 5828 	movx	@dptr,a
                     09E9  5829 	C$easyax5043.c$742$3$255 ==.
                           5830 ;	../COMMON/easyax5043.c:742: axradio_trxstate = trxstate_txstream;
   121C 75 0B 10      [24] 5831 	mov	_axradio_trxstate,#0x10
                     09EC  5832 	C$easyax5043.c$744$2$248 ==.
                           5833 ;	../COMMON/easyax5043.c:744: goto txstreamdatacb;
                     09EC  5834 	C$easyax5043.c$746$2$248 ==.
                           5835 ;	../COMMON/easyax5043.c:746: case trxstate_txstream:
   121F 80 76         [24] 5836 	sjmp	00155$
   1221                    5837 00148$:
                     09EE  5838 	C$easyax5043.c$748$3$248 ==.
                           5839 ;	../COMMON/easyax5043.c:748: uint8_t __autodata evt = AX5043_RADIOEVENTREQ0;
   1221 90 40 0F      [24] 5840 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1224 E0            [24] 5841 	movx	a,@dptr
                     09F2  5842 	C$easyax5043.c$749$3$256 ==.
                           5843 ;	../COMMON/easyax5043.c:749: if (evt & 0x03)
   1225 FF            [12] 5844 	mov	r7,a
   1226 54 03         [12] 5845 	anl	a,#0x03
   1228 60 07         [24] 5846 	jz	00150$
                     09F7  5847 	C$easyax5043.c$750$3$256 ==.
                           5848 ;	../COMMON/easyax5043.c:750: update_timeanchor();
   122A C0 07         [24] 5849 	push	ar7
   122C 12 08 33      [24] 5850 	lcall	_update_timeanchor
   122F D0 07         [24] 5851 	pop	ar7
   1231                    5852 00150$:
                     09FE  5853 	C$easyax5043.c$751$3$256 ==.
                           5854 ;	../COMMON/easyax5043.c:751: if (evt & 0x01) {
   1231 EF            [12] 5855 	mov	a,r7
   1232 30 E0 31      [24] 5856 	jnb	acc.0,00152$
                     0A02  5857 	C$easyax5043.c$752$4$257 ==.
                           5858 ;	../COMMON/easyax5043.c:752: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1235 90 02 75      [24] 5859 	mov	dptr,#_axradio_cb_transmitend
   1238 C0 07         [24] 5860 	push	ar7
   123A 12 4E DE      [24] 5861 	lcall	_wtimer_remove_callback
                     0A0A  5862 	C$easyax5043.c$753$4$257 ==.
                           5863 ;	../COMMON/easyax5043.c:753: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   123D 90 02 7A      [24] 5864 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1240 E4            [12] 5865 	clr	a
   1241 F0            [24] 5866 	movx	@dptr,a
                     0A0F  5867 	C$easyax5043.c$754$4$257 ==.
                           5868 ;	../COMMON/easyax5043.c:754: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1242 90 00 1A      [24] 5869 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1245 E0            [24] 5870 	movx	a,@dptr
   1246 FB            [12] 5871 	mov	r3,a
   1247 A3            [24] 5872 	inc	dptr
   1248 E0            [24] 5873 	movx	a,@dptr
   1249 FC            [12] 5874 	mov	r4,a
   124A A3            [24] 5875 	inc	dptr
   124B E0            [24] 5876 	movx	a,@dptr
   124C FD            [12] 5877 	mov	r5,a
   124D A3            [24] 5878 	inc	dptr
   124E E0            [24] 5879 	movx	a,@dptr
   124F FE            [12] 5880 	mov	r6,a
   1250 90 02 7B      [24] 5881 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1253 EB            [12] 5882 	mov	a,r3
   1254 F0            [24] 5883 	movx	@dptr,a
   1255 EC            [12] 5884 	mov	a,r4
   1256 A3            [24] 5885 	inc	dptr
   1257 F0            [24] 5886 	movx	@dptr,a
   1258 ED            [12] 5887 	mov	a,r5
   1259 A3            [24] 5888 	inc	dptr
   125A F0            [24] 5889 	movx	@dptr,a
   125B EE            [12] 5890 	mov	a,r6
   125C A3            [24] 5891 	inc	dptr
   125D F0            [24] 5892 	movx	@dptr,a
                     0A2B  5893 	C$easyax5043.c$755$4$257 ==.
                           5894 ;	../COMMON/easyax5043.c:755: wtimer_add_callback(&axradio_cb_transmitend.cb);
   125E 90 02 75      [24] 5895 	mov	dptr,#_axradio_cb_transmitend
   1261 12 43 37      [24] 5896 	lcall	_wtimer_add_callback
   1264 D0 07         [24] 5897 	pop	ar7
   1266                    5898 00152$:
                     0A33  5899 	C$easyax5043.c$757$3$256 ==.
                           5900 ;	../COMMON/easyax5043.c:757: if (evt & 0x02) {
   1266 EF            [12] 5901 	mov	a,r7
   1267 30 E1 2D      [24] 5902 	jnb	acc.1,00155$
                     0A37  5903 	C$easyax5043.c$758$4$258 ==.
                           5904 ;	../COMMON/easyax5043.c:758: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   126A 90 02 6B      [24] 5905 	mov	dptr,#_axradio_cb_transmitstart
   126D 12 4E DE      [24] 5906 	lcall	_wtimer_remove_callback
                     0A3D  5907 	C$easyax5043.c$759$4$258 ==.
                           5908 ;	../COMMON/easyax5043.c:759: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1270 90 02 70      [24] 5909 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1273 E4            [12] 5910 	clr	a
   1274 F0            [24] 5911 	movx	@dptr,a
                     0A42  5912 	C$easyax5043.c$760$4$258 ==.
                           5913 ;	../COMMON/easyax5043.c:760: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1275 90 00 1A      [24] 5914 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1278 E0            [24] 5915 	movx	a,@dptr
   1279 FC            [12] 5916 	mov	r4,a
   127A A3            [24] 5917 	inc	dptr
   127B E0            [24] 5918 	movx	a,@dptr
   127C FD            [12] 5919 	mov	r5,a
   127D A3            [24] 5920 	inc	dptr
   127E E0            [24] 5921 	movx	a,@dptr
   127F FE            [12] 5922 	mov	r6,a
   1280 A3            [24] 5923 	inc	dptr
   1281 E0            [24] 5924 	movx	a,@dptr
   1282 FF            [12] 5925 	mov	r7,a
   1283 90 02 71      [24] 5926 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1286 EC            [12] 5927 	mov	a,r4
   1287 F0            [24] 5928 	movx	@dptr,a
   1288 ED            [12] 5929 	mov	a,r5
   1289 A3            [24] 5930 	inc	dptr
   128A F0            [24] 5931 	movx	@dptr,a
   128B EE            [12] 5932 	mov	a,r6
   128C A3            [24] 5933 	inc	dptr
   128D F0            [24] 5934 	movx	@dptr,a
   128E EF            [12] 5935 	mov	a,r7
   128F A3            [24] 5936 	inc	dptr
   1290 F0            [24] 5937 	movx	@dptr,a
                     0A5E  5938 	C$easyax5043.c$761$4$258 ==.
                           5939 ;	../COMMON/easyax5043.c:761: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1291 90 02 6B      [24] 5940 	mov	dptr,#_axradio_cb_transmitstart
   1294 12 43 37      [24] 5941 	lcall	_wtimer_add_callback
                     0A64  5942 	C$easyax5043.c$764$2$248 ==.
                           5943 ;	../COMMON/easyax5043.c:764: txstreamdatacb:
   1297                    5944 00155$:
                     0A64  5945 	C$easyax5043.c$765$2$248 ==.
                           5946 ;	../COMMON/easyax5043.c:765: if (AX5043_IRQREQUEST0 & AX5043_IRQMASK0 & 0x08) {
   1297 90 40 0D      [24] 5947 	mov	dptr,#_AX5043_IRQREQUEST0
   129A E0            [24] 5948 	movx	a,@dptr
   129B FF            [12] 5949 	mov	r7,a
   129C 90 40 07      [24] 5950 	mov	dptr,#_AX5043_IRQMASK0
   129F E0            [24] 5951 	movx	a,@dptr
   12A0 FE            [12] 5952 	mov	r6,a
   12A1 5F            [12] 5953 	anl	a,r7
   12A2 30 E3 76      [24] 5954 	jnb	acc.3,00164$
                     0A72  5955 	C$easyax5043.c$766$3$259 ==.
                           5956 ;	../COMMON/easyax5043.c:766: AX5043_IRQMASK0 &= (uint8_t)~0x08;
   12A5 90 40 07      [24] 5957 	mov	dptr,#_AX5043_IRQMASK0
   12A8 E0            [24] 5958 	movx	a,@dptr
   12A9 54 F7         [12] 5959 	anl	a,#0xF7
   12AB F0            [24] 5960 	movx	@dptr,a
                     0A79  5961 	C$easyax5043.c$767$3$259 ==.
                           5962 ;	../COMMON/easyax5043.c:767: update_timeanchor();
   12AC 12 08 33      [24] 5963 	lcall	_update_timeanchor
                     0A7C  5964 	C$easyax5043.c$768$3$259 ==.
                           5965 ;	../COMMON/easyax5043.c:768: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   12AF 90 02 7F      [24] 5966 	mov	dptr,#_axradio_cb_transmitdata
   12B2 12 4E DE      [24] 5967 	lcall	_wtimer_remove_callback
                     0A82  5968 	C$easyax5043.c$769$3$259 ==.
                           5969 ;	../COMMON/easyax5043.c:769: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   12B5 90 02 84      [24] 5970 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   12B8 E4            [12] 5971 	clr	a
   12B9 F0            [24] 5972 	movx	@dptr,a
                     0A87  5973 	C$easyax5043.c$770$3$259 ==.
                           5974 ;	../COMMON/easyax5043.c:770: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   12BA 90 00 1A      [24] 5975 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   12BD E0            [24] 5976 	movx	a,@dptr
   12BE FC            [12] 5977 	mov	r4,a
   12BF A3            [24] 5978 	inc	dptr
   12C0 E0            [24] 5979 	movx	a,@dptr
   12C1 FD            [12] 5980 	mov	r5,a
   12C2 A3            [24] 5981 	inc	dptr
   12C3 E0            [24] 5982 	movx	a,@dptr
   12C4 FE            [12] 5983 	mov	r6,a
   12C5 A3            [24] 5984 	inc	dptr
   12C6 E0            [24] 5985 	movx	a,@dptr
   12C7 FF            [12] 5986 	mov	r7,a
   12C8 90 02 85      [24] 5987 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   12CB EC            [12] 5988 	mov	a,r4
   12CC F0            [24] 5989 	movx	@dptr,a
   12CD ED            [12] 5990 	mov	a,r5
   12CE A3            [24] 5991 	inc	dptr
   12CF F0            [24] 5992 	movx	@dptr,a
   12D0 EE            [12] 5993 	mov	a,r6
   12D1 A3            [24] 5994 	inc	dptr
   12D2 F0            [24] 5995 	movx	@dptr,a
   12D3 EF            [12] 5996 	mov	a,r7
   12D4 A3            [24] 5997 	inc	dptr
   12D5 F0            [24] 5998 	movx	@dptr,a
                     0AA3  5999 	C$easyax5043.c$771$3$259 ==.
                           6000 ;	../COMMON/easyax5043.c:771: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   12D6 90 02 7F      [24] 6001 	mov	dptr,#_axradio_cb_transmitdata
   12D9 12 43 37      [24] 6002 	lcall	_wtimer_add_callback
                     0AA9  6003 	C$easyax5043.c$773$2$248 ==.
                           6004 ;	../COMMON/easyax5043.c:773: break;
                     0AA9  6005 	C$easyax5043.c$775$2$248 ==.
                           6006 ;	../COMMON/easyax5043.c:775: case trxstate_rxwor:
   12DC 80 3D         [24] 6007 	sjmp	00164$
   12DE                    6008 00158$:
                     0AAB  6009 	C$easyax5043.c$776$2$248 ==.
                           6010 ;	../COMMON/easyax5043.c:776: if( AX5043_IRQREQUEST1 & 0x01 ) // XTAL ready
   12DE 90 40 0C      [24] 6011 	mov	dptr,#_AX5043_IRQREQUEST1
   12E1 E0            [24] 6012 	movx	a,@dptr
   12E2 FF            [12] 6013 	mov	r7,a
   12E3 30 E0 0A      [24] 6014 	jnb	acc.0,00160$
                     0AB3  6015 	C$easyax5043.c$778$3$260 ==.
                           6016 ;	../COMMON/easyax5043.c:778: AX5043_IRQINVERSION1 |= 0x01; // invert the xtal ready irq so it does not fire continuously
   12E6 90 40 0A      [24] 6017 	mov	dptr,#_AX5043_IRQINVERSION1
   12E9 E0            [24] 6018 	movx	a,@dptr
   12EA FF            [12] 6019 	mov	r7,a
   12EB 44 01         [12] 6020 	orl	a,#0x01
   12ED F0            [24] 6021 	movx	@dptr,a
   12EE 80 28         [24] 6022 	sjmp	00162$
   12F0                    6023 00160$:
                     0ABD  6024 	C$easyax5043.c$782$3$261 ==.
                           6025 ;	../COMMON/easyax5043.c:782: AX5043_IRQINVERSION1 &= ~0x01; // drop xtal ready irq inversion --> armed again for next wake-up
   12F0 90 40 0A      [24] 6026 	mov	dptr,#_AX5043_IRQINVERSION1
   12F3 E0            [24] 6027 	movx	a,@dptr
   12F4 54 FE         [12] 6028 	anl	a,#0xFE
   12F6 F0            [24] 6029 	movx	@dptr,a
                     0AC4  6030 	C$easyax5043.c$783$3$261 ==.
                           6031 ;	../COMMON/easyax5043.c:783: AX5043_0xF30 = f30_saved;
   12F7 90 04 41      [24] 6032 	mov	dptr,#_f30_saved
   12FA E0            [24] 6033 	movx	a,@dptr
   12FB 90 4F 30      [24] 6034 	mov	dptr,#_AX5043_0xF30
   12FE F0            [24] 6035 	movx	@dptr,a
                     0ACC  6036 	C$easyax5043.c$784$3$261 ==.
                           6037 ;	../COMMON/easyax5043.c:784: AX5043_0xF31 = f31_saved;
   12FF 90 04 42      [24] 6038 	mov	dptr,#_f31_saved
   1302 E0            [24] 6039 	movx	a,@dptr
   1303 90 4F 31      [24] 6040 	mov	dptr,#_AX5043_0xF31
   1306 F0            [24] 6041 	movx	@dptr,a
                     0AD4  6042 	C$easyax5043.c$785$3$261 ==.
                           6043 ;	../COMMON/easyax5043.c:785: AX5043_0xF32 = f32_saved;
   1307 90 04 43      [24] 6044 	mov	dptr,#_f32_saved
   130A E0            [24] 6045 	movx	a,@dptr
   130B 90 4F 32      [24] 6046 	mov	dptr,#_AX5043_0xF32
   130E F0            [24] 6047 	movx	@dptr,a
                     0ADC  6048 	C$easyax5043.c$786$3$261 ==.
                           6049 ;	../COMMON/easyax5043.c:786: AX5043_0xF33 = f33_saved;
   130F 90 04 44      [24] 6050 	mov	dptr,#_f33_saved
   1312 E0            [24] 6051 	movx	a,@dptr
   1313 FF            [12] 6052 	mov	r7,a
   1314 90 4F 33      [24] 6053 	mov	dptr,#_AX5043_0xF33
   1317 F0            [24] 6054 	movx	@dptr,a
                     0AE5  6055 	C$easyax5043.c$790$2$248 ==.
                           6056 ;	../COMMON/easyax5043.c:790: case trxstate_rx:
   1318                    6057 00162$:
                     0AE5  6058 	C$easyax5043.c$791$2$248 ==.
                           6059 ;	../COMMON/easyax5043.c:791: receive_isr();
   1318 12 09 35      [24] 6060 	lcall	_receive_isr
                     0AE8  6061 	C$easyax5043.c$794$1$247 ==.
                           6062 ;	../COMMON/easyax5043.c:794: } // end switch(axradio_trxstate)
   131B                    6063 00164$:
   131B D0 D0         [24] 6064 	pop	psw
   131D D0 00         [24] 6065 	pop	(0+0)
   131F D0 01         [24] 6066 	pop	(0+1)
   1321 D0 02         [24] 6067 	pop	(0+2)
   1323 D0 03         [24] 6068 	pop	(0+3)
   1325 D0 04         [24] 6069 	pop	(0+4)
   1327 D0 05         [24] 6070 	pop	(0+5)
   1329 D0 06         [24] 6071 	pop	(0+6)
   132B D0 07         [24] 6072 	pop	(0+7)
   132D D0 83         [24] 6073 	pop	dph
   132F D0 82         [24] 6074 	pop	dpl
   1331 D0 F0         [24] 6075 	pop	b
   1333 D0 E0         [24] 6076 	pop	acc
   1335 D0 20         [24] 6077 	pop	bits
                     0B04  6078 	C$easyax5043.c$795$1$247 ==.
                     0B04  6079 	XG$axradio_isr$0$0 ==.
   1337 32            [24] 6080 	reti
                           6081 ;------------------------------------------------------------
                           6082 ;Allocation info for local variables in function 'ax5043_receiver_on_continuous'
                           6083 ;------------------------------------------------------------
                           6084 ;rschanged_int             Allocated to registers r7 
                           6085 ;------------------------------------------------------------
                     0B05  6086 	G$ax5043_receiver_on_continuous$0$0 ==.
                     0B05  6087 	C$easyax5043.c$798$1$247 ==.
                           6088 ;	../COMMON/easyax5043.c:798: __reentrantb void ax5043_receiver_on_continuous(void) __reentrant
                           6089 ;	-----------------------------------------
                           6090 ;	 function ax5043_receiver_on_continuous
                           6091 ;	-----------------------------------------
   1338                    6092 _ax5043_receiver_on_continuous:
                     0B05  6093 	C$easyax5043.c$800$1$263 ==.
                           6094 ;	../COMMON/easyax5043.c:800: uint8_t rschanged_int = (axradio_framing_enable_sfdcallback | (axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) | (axradio_mode == AXRADIO_MODE_SYNC_SLAVE) );
   1338 74 23         [12] 6095 	mov	a,#0x23
   133A B5 0A 04      [24] 6096 	cjne	a,_axradio_mode,00133$
   133D 74 01         [12] 6097 	mov	a,#0x01
   133F 80 01         [24] 6098 	sjmp	00134$
   1341                    6099 00133$:
   1341 E4            [12] 6100 	clr	a
   1342                    6101 00134$:
   1342 FF            [12] 6102 	mov	r7,a
   1343 90 52 A7      [24] 6103 	mov	dptr,#_axradio_framing_enable_sfdcallback
   1346 E4            [12] 6104 	clr	a
   1347 93            [24] 6105 	movc	a,@a+dptr
   1348 FE            [12] 6106 	mov	r6,a
   1349 42 07         [12] 6107 	orl	ar7,a
   134B 74 22         [12] 6108 	mov	a,#0x22
   134D B5 0A 04      [24] 6109 	cjne	a,_axradio_mode,00135$
   1350 74 01         [12] 6110 	mov	a,#0x01
   1352 80 01         [24] 6111 	sjmp	00136$
   1354                    6112 00135$:
   1354 E4            [12] 6113 	clr	a
   1355                    6114 00136$:
   1355 FE            [12] 6115 	mov	r6,a
   1356 42 07         [12] 6116 	orl	ar7,a
                     0B25  6117 	C$easyax5043.c$801$1$263 ==.
                           6118 ;	../COMMON/easyax5043.c:801: if(rschanged_int)
   1358 EF            [12] 6119 	mov	a,r7
   1359 60 06         [24] 6120 	jz	00102$
                     0B28  6121 	C$easyax5043.c$802$1$263 ==.
                           6122 ;	../COMMON/easyax5043.c:802: AX5043_RADIOEVENTMASK0 = 0x04;
   135B 90 40 09      [24] 6123 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   135E 74 04         [12] 6124 	mov	a,#0x04
   1360 F0            [24] 6125 	movx	@dptr,a
   1361                    6126 00102$:
                     0B2E  6127 	C$easyax5043.c$803$1$263 ==.
                           6128 ;	../COMMON/easyax5043.c:803: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   1361 90 52 84      [24] 6129 	mov	dptr,#_axradio_phy_rssireference
   1364 E4            [12] 6130 	clr	a
   1365 93            [24] 6131 	movc	a,@a+dptr
   1366 FE            [12] 6132 	mov	r6,a
   1367 90 42 2C      [24] 6133 	mov	dptr,#_AX5043_RSSIREFERENCE
   136A F0            [24] 6134 	movx	@dptr,a
                     0B38  6135 	C$easyax5043.c$804$1$263 ==.
                           6136 ;	../COMMON/easyax5043.c:804: if (axradio_mode == AXRADIO_MODE_ASYNC_RECEIVE ||
   136B 74 18         [12] 6137 	mov	a,#0x18
   136D B5 0A 02      [24] 6138 	cjne	a,_axradio_mode,00138$
   1370 80 1A         [24] 6139 	sjmp	00103$
   1372                    6140 00138$:
                     0B3F  6141 	C$easyax5043.c$805$1$263 ==.
                           6142 ;	../COMMON/easyax5043.c:805: axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   1372 74 1A         [12] 6143 	mov	a,#0x1A
   1374 B5 0A 02      [24] 6144 	cjne	a,_axradio_mode,00139$
   1377 80 13         [24] 6145 	sjmp	00103$
   1379                    6146 00139$:
                     0B46  6147 	C$easyax5043.c$806$1$263 ==.
                           6148 ;	../COMMON/easyax5043.c:806: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   1379 74 1C         [12] 6149 	mov	a,#0x1C
   137B B5 0A 02      [24] 6150 	cjne	a,_axradio_mode,00140$
   137E 80 0C         [24] 6151 	sjmp	00103$
   1380                    6152 00140$:
                     0B4D  6153 	C$easyax5043.c$807$1$263 ==.
                           6154 ;	../COMMON/easyax5043.c:807: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   1380 74 1D         [12] 6155 	mov	a,#0x1D
   1382 B5 0A 02      [24] 6156 	cjne	a,_axradio_mode,00141$
   1385 80 05         [24] 6157 	sjmp	00103$
   1387                    6158 00141$:
                     0B54  6159 	C$easyax5043.c$808$1$263 ==.
                           6160 ;	../COMMON/easyax5043.c:808: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM) {
   1387 74 1E         [12] 6161 	mov	a,#0x1E
   1389 B5 0A 13      [24] 6162 	cjne	a,_axradio_mode,00104$
   138C                    6163 00103$:
                     0B59  6164 	C$easyax5043.c$809$2$264 ==.
                           6165 ;	../COMMON/easyax5043.c:809: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_cont;
   138C 90 52 8C      [24] 6166 	mov	dptr,#_axradio_phy_tmgrxpreamble1_cont
   138F E4            [12] 6167 	clr	a
   1390 93            [24] 6168 	movc	a,@a+dptr
   1391 90 42 29      [24] 6169 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   1394 F0            [24] 6170 	movx	@dptr,a
                     0B62  6171 	C$easyax5043.c$810$2$264 ==.
                           6172 ;	../COMMON/easyax5043.c:810: AX5043_PKTSTOREFLAGS |= 0x40;
   1395 90 42 32      [24] 6173 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1398 E0            [24] 6174 	movx	a,@dptr
   1399 FE            [12] 6175 	mov	r6,a
   139A 44 40         [12] 6176 	orl	a,#0x40
   139C F0            [24] 6177 	movx	@dptr,a
   139D 80 0D         [24] 6178 	sjmp	00105$
   139F                    6179 00104$:
                     0B6C  6180 	C$easyax5043.c$812$2$265 ==.
                           6181 ;	../COMMON/easyax5043.c:812: AX5043_TMGRXPREAMBLE1 = 0x00;
   139F 90 42 29      [24] 6182 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   13A2 E4            [12] 6183 	clr	a
   13A3 F0            [24] 6184 	movx	@dptr,a
                     0B71  6185 	C$easyax5043.c$813$2$265 ==.
                           6186 ;	../COMMON/easyax5043.c:813: AX5043_PKTSTOREFLAGS &= (uint8_t)~0x40;
   13A4 90 42 32      [24] 6187 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   13A7 E0            [24] 6188 	movx	a,@dptr
   13A8 FE            [12] 6189 	mov	r6,a
   13A9 54 BF         [12] 6190 	anl	a,#0xBF
   13AB F0            [24] 6191 	movx	@dptr,a
   13AC                    6192 00105$:
                     0B79  6193 	C$easyax5043.c$815$1$263 ==.
                           6194 ;	../COMMON/easyax5043.c:815: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13AC 90 40 28      [24] 6195 	mov	dptr,#_AX5043_FIFOSTAT
   13AF 74 03         [12] 6196 	mov	a,#0x03
   13B1 F0            [24] 6197 	movx	@dptr,a
                     0B7F  6198 	C$easyax5043.c$816$1$263 ==.
                           6199 ;	../COMMON/easyax5043.c:816: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   13B2 90 40 02      [24] 6200 	mov	dptr,#_AX5043_PWRMODE
   13B5 74 09         [12] 6201 	mov	a,#0x09
   13B7 F0            [24] 6202 	movx	@dptr,a
                     0B85  6203 	C$easyax5043.c$817$1$263 ==.
                           6204 ;	../COMMON/easyax5043.c:817: axradio_trxstate = trxstate_rx;
   13B8 75 0B 01      [24] 6205 	mov	_axradio_trxstate,#0x01
                     0B88  6206 	C$easyax5043.c$818$1$263 ==.
                           6207 ;	../COMMON/easyax5043.c:818: if(rschanged_int)
   13BB EF            [12] 6208 	mov	a,r7
   13BC 60 08         [24] 6209 	jz	00111$
                     0B8B  6210 	C$easyax5043.c$819$1$263 ==.
                           6211 ;	../COMMON/easyax5043.c:819: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   13BE 90 40 07      [24] 6212 	mov	dptr,#_AX5043_IRQMASK0
   13C1 74 41         [12] 6213 	mov	a,#0x41
   13C3 F0            [24] 6214 	movx	@dptr,a
   13C4 80 06         [24] 6215 	sjmp	00112$
   13C6                    6216 00111$:
                     0B93  6217 	C$easyax5043.c$821$1$263 ==.
                           6218 ;	../COMMON/easyax5043.c:821: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   13C6 90 40 07      [24] 6219 	mov	dptr,#_AX5043_IRQMASK0
   13C9 74 01         [12] 6220 	mov	a,#0x01
   13CB F0            [24] 6221 	movx	@dptr,a
   13CC                    6222 00112$:
                     0B99  6223 	C$easyax5043.c$822$1$263 ==.
                           6224 ;	../COMMON/easyax5043.c:822: AX5043_IRQMASK1 = 0x00;
   13CC 90 40 06      [24] 6225 	mov	dptr,#_AX5043_IRQMASK1
   13CF E4            [12] 6226 	clr	a
   13D0 F0            [24] 6227 	movx	@dptr,a
                     0B9E  6228 	C$easyax5043.c$823$1$263 ==.
                     0B9E  6229 	XG$ax5043_receiver_on_continuous$0$0 ==.
   13D1 22            [24] 6230 	ret
                           6231 ;------------------------------------------------------------
                           6232 ;Allocation info for local variables in function 'ax5043_receiver_on_wor'
                           6233 ;------------------------------------------------------------
                           6234 ;wp                        Allocated to registers r6 r7 
                           6235 ;------------------------------------------------------------
                     0B9F  6236 	G$ax5043_receiver_on_wor$0$0 ==.
                     0B9F  6237 	C$easyax5043.c$825$1$263 ==.
                           6238 ;	../COMMON/easyax5043.c:825: __reentrantb void ax5043_receiver_on_wor(void) __reentrant
                           6239 ;	-----------------------------------------
                           6240 ;	 function ax5043_receiver_on_wor
                           6241 ;	-----------------------------------------
   13D2                    6242 _ax5043_receiver_on_wor:
                     0B9F  6243 	C$easyax5043.c$827$1$267 ==.
                           6244 ;	../COMMON/easyax5043.c:827: AX5043_BGNDRSSIGAIN = 0x02;
   13D2 90 42 2E      [24] 6245 	mov	dptr,#_AX5043_BGNDRSSIGAIN
   13D5 74 02         [12] 6246 	mov	a,#0x02
   13D7 F0            [24] 6247 	movx	@dptr,a
                     0BA5  6248 	C$easyax5043.c$828$1$267 ==.
                           6249 ;	../COMMON/easyax5043.c:828: if(axradio_framing_enable_sfdcallback)
   13D8 90 52 A7      [24] 6250 	mov	dptr,#_axradio_framing_enable_sfdcallback
   13DB E4            [12] 6251 	clr	a
   13DC 93            [24] 6252 	movc	a,@a+dptr
   13DD FF            [12] 6253 	mov	r7,a
   13DE 60 06         [24] 6254 	jz	00102$
                     0BAD  6255 	C$easyax5043.c$829$1$267 ==.
                           6256 ;	../COMMON/easyax5043.c:829: AX5043_RADIOEVENTMASK0 = 0x04;
   13E0 90 40 09      [24] 6257 	mov	dptr,#_AX5043_RADIOEVENTMASK0
   13E3 74 04         [12] 6258 	mov	a,#0x04
   13E5 F0            [24] 6259 	movx	@dptr,a
   13E6                    6260 00102$:
                     0BB3  6261 	C$easyax5043.c$830$1$267 ==.
                           6262 ;	../COMMON/easyax5043.c:830: AX5043_FIFOSTAT = 3; // clear FIFO data & flags
   13E6 90 40 28      [24] 6263 	mov	dptr,#_AX5043_FIFOSTAT
   13E9 74 03         [12] 6264 	mov	a,#0x03
   13EB F0            [24] 6265 	movx	@dptr,a
                     0BB9  6266 	C$easyax5043.c$831$1$267 ==.
                           6267 ;	../COMMON/easyax5043.c:831: AX5043_LPOSCCONFIG = 0x01; // start LPOSC, slow mode
   13EC 90 43 10      [24] 6268 	mov	dptr,#_AX5043_LPOSCCONFIG
   13EF 74 01         [12] 6269 	mov	a,#0x01
   13F1 F0            [24] 6270 	movx	@dptr,a
                     0BBF  6271 	C$easyax5043.c$832$1$267 ==.
                           6272 ;	../COMMON/easyax5043.c:832: AX5043_TMGRXPREAMBLE1 = axradio_phy_tmgrxpreamble1_wor;
   13F2 90 52 8B      [24] 6273 	mov	dptr,#_axradio_phy_tmgrxpreamble1_wor
   13F5 E4            [12] 6274 	clr	a
   13F6 93            [24] 6275 	movc	a,@a+dptr
   13F7 90 42 29      [24] 6276 	mov	dptr,#_AX5043_TMGRXPREAMBLE1
   13FA F0            [24] 6277 	movx	@dptr,a
                     0BC8  6278 	C$easyax5043.c$833$1$267 ==.
                           6279 ;	../COMMON/easyax5043.c:833: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   13FB 90 52 84      [24] 6280 	mov	dptr,#_axradio_phy_rssireference
   13FE E4            [12] 6281 	clr	a
   13FF 93            [24] 6282 	movc	a,@a+dptr
   1400 FE            [12] 6283 	mov	r6,a
   1401 90 42 2C      [24] 6284 	mov	dptr,#_AX5043_RSSIREFERENCE
   1404 F0            [24] 6285 	movx	@dptr,a
                     0BD2  6286 	C$easyax5043.c$834$1$267 ==.
                           6287 ;	../COMMON/easyax5043.c:834: AX5043_PWRMODE = AX5043_PWRSTATE_WOR_RX;
   1405 90 40 02      [24] 6288 	mov	dptr,#_AX5043_PWRMODE
   1408 74 0B         [12] 6289 	mov	a,#0x0B
   140A F0            [24] 6290 	movx	@dptr,a
                     0BD8  6291 	C$easyax5043.c$835$1$267 ==.
                           6292 ;	../COMMON/easyax5043.c:835: axradio_trxstate = trxstate_rxwor;
   140B 75 0B 02      [24] 6293 	mov	_axradio_trxstate,#0x02
                     0BDB  6294 	C$easyax5043.c$836$1$267 ==.
                           6295 ;	../COMMON/easyax5043.c:836: if(axradio_framing_enable_sfdcallback)
   140E EF            [12] 6296 	mov	a,r7
   140F 60 08         [24] 6297 	jz	00104$
                     0BDE  6298 	C$easyax5043.c$837$1$267 ==.
                           6299 ;	../COMMON/easyax5043.c:837: AX5043_IRQMASK0 = 0x41; //  enable FIFO not empty / radio controller irq
   1411 90 40 07      [24] 6300 	mov	dptr,#_AX5043_IRQMASK0
   1414 74 41         [12] 6301 	mov	a,#0x41
   1416 F0            [24] 6302 	movx	@dptr,a
   1417 80 06         [24] 6303 	sjmp	00105$
   1419                    6304 00104$:
                     0BE6  6305 	C$easyax5043.c$839$1$267 ==.
                           6306 ;	../COMMON/easyax5043.c:839: AX5043_IRQMASK0 = 0x01; //  enable FIFO not empty
   1419 90 40 07      [24] 6307 	mov	dptr,#_AX5043_IRQMASK0
   141C 74 01         [12] 6308 	mov	a,#0x01
   141E F0            [24] 6309 	movx	@dptr,a
   141F                    6310 00105$:
                     0BEC  6311 	C$easyax5043.c$840$1$267 ==.
                           6312 ;	../COMMON/easyax5043.c:840: AX5043_IRQMASK1 = 0x01; // xtal ready
   141F 90 40 06      [24] 6313 	mov	dptr,#_AX5043_IRQMASK1
   1422 74 01         [12] 6314 	mov	a,#0x01
   1424 F0            [24] 6315 	movx	@dptr,a
                     0BF2  6316 	C$easyax5043.c$842$2$267 ==.
                           6317 ;	../COMMON/easyax5043.c:842: uint16_t wp = axradio_wor_period;
   1425 90 52 B3      [24] 6318 	mov	dptr,#_axradio_wor_period
   1428 E4            [12] 6319 	clr	a
   1429 93            [24] 6320 	movc	a,@a+dptr
   142A FE            [12] 6321 	mov	r6,a
   142B 74 01         [12] 6322 	mov	a,#0x01
   142D 93            [24] 6323 	movc	a,@a+dptr
                     0BFB  6324 	C$easyax5043.c$843$2$268 ==.
                           6325 ;	../COMMON/easyax5043.c:843: AX5043_WAKEUPFREQ1 = (wp >> 8) & 0xFF;
   142E FF            [12] 6326 	mov	r7,a
   142F FD            [12] 6327 	mov	r5,a
   1430 90 40 6C      [24] 6328 	mov	dptr,#_AX5043_WAKEUPFREQ1
   1433 ED            [12] 6329 	mov	a,r5
   1434 F0            [24] 6330 	movx	@dptr,a
                     0C02  6331 	C$easyax5043.c$844$2$268 ==.
                           6332 ;	../COMMON/easyax5043.c:844: AX5043_WAKEUPFREQ0 = (wp >> 0) & 0xFF;  // actually wakeup period measured in LP OSC cycles
   1435 8E 05         [24] 6333 	mov	ar5,r6
   1437 90 40 6D      [24] 6334 	mov	dptr,#_AX5043_WAKEUPFREQ0
   143A ED            [12] 6335 	mov	a,r5
   143B F0            [24] 6336 	movx	@dptr,a
                     0C09  6337 	C$easyax5043.c$845$2$268 ==.
                           6338 ;	../COMMON/easyax5043.c:845: wp += radio_read16((uint16_t)&AX5043_WAKEUPTIMER1);
   143C 90 40 68      [24] 6339 	mov	dptr,#_AX5043_WAKEUPTIMER1
   143F 12 45 C9      [24] 6340 	lcall	_radio_read16
   1442 AC 82         [24] 6341 	mov	r4,dpl
   1444 AD 83         [24] 6342 	mov	r5,dph
   1446 EC            [12] 6343 	mov	a,r4
   1447 2E            [12] 6344 	add	a,r6
   1448 FE            [12] 6345 	mov	r6,a
   1449 ED            [12] 6346 	mov	a,r5
   144A 3F            [12] 6347 	addc	a,r7
                     0C18  6348 	C$easyax5043.c$846$2$268 ==.
                           6349 ;	../COMMON/easyax5043.c:846: AX5043_WAKEUP1 = (wp >> 8) & 0xFF;
   144B FD            [12] 6350 	mov	r5,a
   144C 90 40 6A      [24] 6351 	mov	dptr,#_AX5043_WAKEUP1
   144F ED            [12] 6352 	mov	a,r5
   1450 F0            [24] 6353 	movx	@dptr,a
                     0C1E  6354 	C$easyax5043.c$847$2$268 ==.
                           6355 ;	../COMMON/easyax5043.c:847: AX5043_WAKEUP0 = (wp >> 0) & 0xFF;
   1451 90 40 6B      [24] 6356 	mov	dptr,#_AX5043_WAKEUP0
   1454 EE            [12] 6357 	mov	a,r6
   1455 F0            [24] 6358 	movx	@dptr,a
                     0C23  6359 	C$easyax5043.c$849$2$268 ==.
                     0C23  6360 	XG$ax5043_receiver_on_wor$0$0 ==.
   1456 22            [24] 6361 	ret
                           6362 ;------------------------------------------------------------
                           6363 ;Allocation info for local variables in function 'ax5043_prepare_tx'
                           6364 ;------------------------------------------------------------
                     0C24  6365 	G$ax5043_prepare_tx$0$0 ==.
                     0C24  6366 	C$easyax5043.c$850$2$268 ==.
                           6367 ;	../COMMON/easyax5043.c:850: __reentrantb void ax5043_prepare_tx(void) __reentrant
                           6368 ;	-----------------------------------------
                           6369 ;	 function ax5043_prepare_tx
                           6370 ;	-----------------------------------------
   1457                    6371 _ax5043_prepare_tx:
                     0C24  6372 	C$easyax5043.c$852$1$270 ==.
                           6373 ;	../COMMON/easyax5043.c:852: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
                     0C24  6374 	C$easyax5043.c$853$1$270 ==.
                           6375 ;	../COMMON/easyax5043.c:853: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   1457 90 40 02      [24] 6376 	mov	dptr,#_AX5043_PWRMODE
   145A 74 05         [12] 6377 	mov	a,#0x05
   145C F0            [24] 6378 	movx	@dptr,a
   145D 74 07         [12] 6379 	mov	a,#0x07
   145F F0            [24] 6380 	movx	@dptr,a
                     0C2D  6381 	C$easyax5043.c$854$1$270 ==.
                           6382 ;	../COMMON/easyax5043.c:854: ax5043_init_registers_tx();
   1460 12 08 C9      [24] 6383 	lcall	_ax5043_init_registers_tx
                     0C30  6384 	C$easyax5043.c$855$1$270 ==.
                           6385 ;	../COMMON/easyax5043.c:855: AX5043_FIFOTHRESH1 = 0;
   1463 90 40 2E      [24] 6386 	mov	dptr,#_AX5043_FIFOTHRESH1
   1466 E4            [12] 6387 	clr	a
   1467 F0            [24] 6388 	movx	@dptr,a
                     0C35  6389 	C$easyax5043.c$856$1$270 ==.
                           6390 ;	../COMMON/easyax5043.c:856: AX5043_FIFOTHRESH0 = 0x80;
   1468 90 40 2F      [24] 6391 	mov	dptr,#_AX5043_FIFOTHRESH0
   146B 74 80         [12] 6392 	mov	a,#0x80
   146D F0            [24] 6393 	movx	@dptr,a
                     0C3B  6394 	C$easyax5043.c$857$1$270 ==.
                           6395 ;	../COMMON/easyax5043.c:857: axradio_trxstate = trxstate_tx_xtalwait;
   146E 75 0B 09      [24] 6396 	mov	_axradio_trxstate,#0x09
                     0C3E  6397 	C$easyax5043.c$858$1$270 ==.
                           6398 ;	../COMMON/easyax5043.c:858: AX5043_IRQMASK0 = 0x00;
   1471 90 40 07      [24] 6399 	mov	dptr,#_AX5043_IRQMASK0
   1474 E4            [12] 6400 	clr	a
   1475 F0            [24] 6401 	movx	@dptr,a
                     0C43  6402 	C$easyax5043.c$859$1$270 ==.
                           6403 ;	../COMMON/easyax5043.c:859: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   1476 90 40 06      [24] 6404 	mov	dptr,#_AX5043_IRQMASK1
   1479 74 01         [12] 6405 	mov	a,#0x01
   147B F0            [24] 6406 	movx	@dptr,a
                     0C49  6407 	C$easyax5043.c$860$1$270 ==.
                     0C49  6408 	XG$ax5043_prepare_tx$0$0 ==.
   147C 22            [24] 6409 	ret
                           6410 ;------------------------------------------------------------
                           6411 ;Allocation info for local variables in function 'ax5043_off'
                           6412 ;------------------------------------------------------------
                     0C4A  6413 	G$ax5043_off$0$0 ==.
                     0C4A  6414 	C$easyax5043.c$862$1$270 ==.
                           6415 ;	../COMMON/easyax5043.c:862: __reentrantb void ax5043_off(void) __reentrant
                           6416 ;	-----------------------------------------
                           6417 ;	 function ax5043_off
                           6418 ;	-----------------------------------------
   147D                    6419 _ax5043_off:
                     0C4A  6420 	C$easyax5043.c$864$1$272 ==.
                           6421 ;	../COMMON/easyax5043.c:864: ax5043_off_xtal();
   147D 12 14 86      [24] 6422 	lcall	_ax5043_off_xtal
                     0C4D  6423 	C$easyax5043.c$865$1$272 ==.
                           6424 ;	../COMMON/easyax5043.c:865: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   1480 90 40 02      [24] 6425 	mov	dptr,#_AX5043_PWRMODE
   1483 E4            [12] 6426 	clr	a
   1484 F0            [24] 6427 	movx	@dptr,a
                     0C52  6428 	C$easyax5043.c$866$1$272 ==.
                     0C52  6429 	XG$ax5043_off$0$0 ==.
   1485 22            [24] 6430 	ret
                           6431 ;------------------------------------------------------------
                           6432 ;Allocation info for local variables in function 'ax5043_off_xtal'
                           6433 ;------------------------------------------------------------
                     0C53  6434 	G$ax5043_off_xtal$0$0 ==.
                     0C53  6435 	C$easyax5043.c$868$1$272 ==.
                           6436 ;	../COMMON/easyax5043.c:868: __reentrantb void ax5043_off_xtal(void) __reentrant
                           6437 ;	-----------------------------------------
                           6438 ;	 function ax5043_off_xtal
                           6439 ;	-----------------------------------------
   1486                    6440 _ax5043_off_xtal:
                     0C53  6441 	C$easyax5043.c$870$1$274 ==.
                           6442 ;	../COMMON/easyax5043.c:870: AX5043_IRQMASK0 = 0x00; // IRQ off
   1486 90 40 07      [24] 6443 	mov	dptr,#_AX5043_IRQMASK0
                     0C56  6444 	C$easyax5043.c$871$1$274 ==.
                           6445 ;	../COMMON/easyax5043.c:871: AX5043_IRQMASK1 = 0x00;
   1489 E4            [12] 6446 	clr	a
   148A F0            [24] 6447 	movx	@dptr,a
   148B 90 40 06      [24] 6448 	mov	dptr,#_AX5043_IRQMASK1
   148E F0            [24] 6449 	movx	@dptr,a
                     0C5C  6450 	C$easyax5043.c$872$1$274 ==.
                           6451 ;	../COMMON/easyax5043.c:872: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   148F 90 40 02      [24] 6452 	mov	dptr,#_AX5043_PWRMODE
   1492 74 05         [12] 6453 	mov	a,#0x05
   1494 F0            [24] 6454 	movx	@dptr,a
                     0C62  6455 	C$easyax5043.c$873$1$274 ==.
                           6456 ;	../COMMON/easyax5043.c:873: AX5043_LPOSCCONFIG = 0x00; // LPOSC off
   1495 90 43 10      [24] 6457 	mov	dptr,#_AX5043_LPOSCCONFIG
   1498 E4            [12] 6458 	clr	a
   1499 F0            [24] 6459 	movx	@dptr,a
                     0C67  6460 	C$easyax5043.c$874$1$274 ==.
                           6461 ;	../COMMON/easyax5043.c:874: axradio_trxstate = trxstate_off;
   149A 75 0B 00      [24] 6462 	mov	_axradio_trxstate,#0x00
                     0C6A  6463 	C$easyax5043.c$875$1$274 ==.
                     0C6A  6464 	XG$ax5043_off_xtal$0$0 ==.
   149D 22            [24] 6465 	ret
                           6466 ;------------------------------------------------------------
                           6467 ;Allocation info for local variables in function 'axradio_wait_for_xtal'
                           6468 ;------------------------------------------------------------
                           6469 ;iesave                    Allocated to registers r7 
                           6470 ;------------------------------------------------------------
                     0C6B  6471 	G$axradio_wait_for_xtal$0$0 ==.
                     0C6B  6472 	C$easyax5043.c$877$1$274 ==.
                           6473 ;	../COMMON/easyax5043.c:877: void axradio_wait_for_xtal(void)
                           6474 ;	-----------------------------------------
                           6475 ;	 function axradio_wait_for_xtal
                           6476 ;	-----------------------------------------
   149E                    6477 _axradio_wait_for_xtal:
                     0C6B  6478 	C$easyax5043.c$879$1$276 ==.
                           6479 ;	../COMMON/easyax5043.c:879: uint8_t __autodata iesave = IE & 0x80;
   149E 74 80         [12] 6480 	mov	a,#0x80
   14A0 55 A8         [12] 6481 	anl	a,_IE
   14A2 FF            [12] 6482 	mov	r7,a
                     0C70  6483 	C$easyax5043.c$880$1$276 ==.
                           6484 ;	../COMMON/easyax5043.c:880: EA = 0;
   14A3 C2 AF         [12] 6485 	clr	_EA
                     0C72  6486 	C$easyax5043.c$881$1$276 ==.
                           6487 ;	../COMMON/easyax5043.c:881: axradio_trxstate = trxstate_wait_xtal;
   14A5 75 0B 03      [24] 6488 	mov	_axradio_trxstate,#0x03
                     0C75  6489 	C$easyax5043.c$882$1$276 ==.
                           6490 ;	../COMMON/easyax5043.c:882: AX5043_IRQMASK1 |= 0x01; // enable xtal ready interrupt
   14A8 90 40 06      [24] 6491 	mov	dptr,#_AX5043_IRQMASK1
   14AB E0            [24] 6492 	movx	a,@dptr
   14AC FE            [12] 6493 	mov	r6,a
   14AD 44 01         [12] 6494 	orl	a,#0x01
   14AF F0            [24] 6495 	movx	@dptr,a
   14B0                    6496 00104$:
                     0C7D  6497 	C$easyax5043.c$884$2$277 ==.
                           6498 ;	../COMMON/easyax5043.c:884: EA = 0;
   14B0 C2 AF         [12] 6499 	clr	_EA
                     0C7F  6500 	C$easyax5043.c$885$2$277 ==.
                           6501 ;	../COMMON/easyax5043.c:885: if (axradio_trxstate == trxstate_xtal_ready)
   14B2 74 04         [12] 6502 	mov	a,#0x04
   14B4 B5 0B 02      [24] 6503 	cjne	a,_axradio_trxstate,00114$
   14B7 80 11         [24] 6504 	sjmp	00103$
   14B9                    6505 00114$:
                     0C86  6506 	C$easyax5043.c$887$2$277 ==.
                           6507 ;	../COMMON/easyax5043.c:887: wtimer_idle(WTFLAG_CANSTANDBY);
   14B9 75 82 02      [24] 6508 	mov	dpl,#0x02
   14BC C0 07         [24] 6509 	push	ar7
   14BE 12 42 44      [24] 6510 	lcall	_wtimer_idle
                     0C8E  6511 	C$easyax5043.c$888$2$277 ==.
                           6512 ;	../COMMON/easyax5043.c:888: EA = 1;
   14C1 D2 AF         [12] 6513 	setb	_EA
                     0C90  6514 	C$easyax5043.c$889$2$277 ==.
                           6515 ;	../COMMON/easyax5043.c:889: wtimer_runcallbacks();
   14C3 12 41 C0      [24] 6516 	lcall	_wtimer_runcallbacks
   14C6 D0 07         [24] 6517 	pop	ar7
   14C8 80 E6         [24] 6518 	sjmp	00104$
   14CA                    6519 00103$:
                     0C97  6520 	C$easyax5043.c$891$1$276 ==.
                           6521 ;	../COMMON/easyax5043.c:891: IE |= iesave;
   14CA EF            [12] 6522 	mov	a,r7
   14CB 42 A8         [12] 6523 	orl	_IE,a
                     0C9A  6524 	C$easyax5043.c$892$1$276 ==.
                     0C9A  6525 	XG$axradio_wait_for_xtal$0$0 ==.
   14CD 22            [24] 6526 	ret
                           6527 ;------------------------------------------------------------
                           6528 ;Allocation info for local variables in function 'axradio_setaddrregs'
                           6529 ;------------------------------------------------------------
                           6530 ;pn                        Allocated to registers r6 r7 
                           6531 ;inv                       Allocated to registers r5 
                           6532 ;------------------------------------------------------------
                     0C9B  6533 	Feasyax5043$axradio_setaddrregs$0$0 ==.
                     0C9B  6534 	C$easyax5043.c$894$1$276 ==.
                           6535 ;	../COMMON/easyax5043.c:894: static void axradio_setaddrregs(void)
                           6536 ;	-----------------------------------------
                           6537 ;	 function axradio_setaddrregs
                           6538 ;	-----------------------------------------
   14CE                    6539 _axradio_setaddrregs:
                     0C9B  6540 	C$easyax5043.c$896$1$279 ==.
                           6541 ;	../COMMON/easyax5043.c:896: AX5043_PKTADDR0 = axradio_localaddr.addr[0];
   14CE 90 00 1E      [24] 6542 	mov	dptr,#_axradio_localaddr
   14D1 E0            [24] 6543 	movx	a,@dptr
   14D2 90 42 07      [24] 6544 	mov	dptr,#_AX5043_PKTADDR0
   14D5 F0            [24] 6545 	movx	@dptr,a
                     0CA3  6546 	C$easyax5043.c$897$1$279 ==.
                           6547 ;	../COMMON/easyax5043.c:897: AX5043_PKTADDR1 = axradio_localaddr.addr[1];
   14D6 90 00 1F      [24] 6548 	mov	dptr,#(_axradio_localaddr + 0x0001)
   14D9 E0            [24] 6549 	movx	a,@dptr
   14DA 90 42 06      [24] 6550 	mov	dptr,#_AX5043_PKTADDR1
   14DD F0            [24] 6551 	movx	@dptr,a
                     0CAB  6552 	C$easyax5043.c$898$1$279 ==.
                           6553 ;	../COMMON/easyax5043.c:898: AX5043_PKTADDR2 = axradio_localaddr.addr[2];
   14DE 90 00 20      [24] 6554 	mov	dptr,#(_axradio_localaddr + 0x0002)
   14E1 E0            [24] 6555 	movx	a,@dptr
   14E2 90 42 05      [24] 6556 	mov	dptr,#_AX5043_PKTADDR2
   14E5 F0            [24] 6557 	movx	@dptr,a
                     0CB3  6558 	C$easyax5043.c$899$1$279 ==.
                           6559 ;	../COMMON/easyax5043.c:899: AX5043_PKTADDR3 = axradio_localaddr.addr[3];
   14E6 90 00 21      [24] 6560 	mov	dptr,#(_axradio_localaddr + 0x0003)
   14E9 E0            [24] 6561 	movx	a,@dptr
   14EA 90 42 04      [24] 6562 	mov	dptr,#_AX5043_PKTADDR3
   14ED F0            [24] 6563 	movx	@dptr,a
                     0CBB  6564 	C$easyax5043.c$901$1$279 ==.
                           6565 ;	../COMMON/easyax5043.c:901: AX5043_PKTADDRMASK0 = axradio_localaddr.mask[0];
   14EE 90 00 22      [24] 6566 	mov	dptr,#(_axradio_localaddr + 0x0004)
   14F1 E0            [24] 6567 	movx	a,@dptr
   14F2 90 42 0B      [24] 6568 	mov	dptr,#_AX5043_PKTADDRMASK0
   14F5 F0            [24] 6569 	movx	@dptr,a
                     0CC3  6570 	C$easyax5043.c$902$1$279 ==.
                           6571 ;	../COMMON/easyax5043.c:902: AX5043_PKTADDRMASK1 = axradio_localaddr.mask[1];
   14F6 90 00 23      [24] 6572 	mov	dptr,#(_axradio_localaddr + 0x0005)
   14F9 E0            [24] 6573 	movx	a,@dptr
   14FA 90 42 0A      [24] 6574 	mov	dptr,#_AX5043_PKTADDRMASK1
   14FD F0            [24] 6575 	movx	@dptr,a
                     0CCB  6576 	C$easyax5043.c$903$1$279 ==.
                           6577 ;	../COMMON/easyax5043.c:903: AX5043_PKTADDRMASK2 = axradio_localaddr.mask[2];
   14FE 90 00 24      [24] 6578 	mov	dptr,#(_axradio_localaddr + 0x0006)
   1501 E0            [24] 6579 	movx	a,@dptr
   1502 90 42 09      [24] 6580 	mov	dptr,#_AX5043_PKTADDRMASK2
   1505 F0            [24] 6581 	movx	@dptr,a
                     0CD3  6582 	C$easyax5043.c$904$1$279 ==.
                           6583 ;	../COMMON/easyax5043.c:904: AX5043_PKTADDRMASK3 = axradio_localaddr.mask[3];
   1506 90 00 25      [24] 6584 	mov	dptr,#(_axradio_localaddr + 0x0007)
   1509 E0            [24] 6585 	movx	a,@dptr
   150A 90 42 08      [24] 6586 	mov	dptr,#_AX5043_PKTADDRMASK3
   150D F0            [24] 6587 	movx	@dptr,a
                     0CDB  6588 	C$easyax5043.c$906$1$279 ==.
                           6589 ;	../COMMON/easyax5043.c:906: if (axradio_phy_pn9 && axradio_framing_addrlen) {
   150E 90 52 78      [24] 6590 	mov	dptr,#_axradio_phy_pn9
   1511 E4            [12] 6591 	clr	a
   1512 93            [24] 6592 	movc	a,@a+dptr
   1513 FF            [12] 6593 	mov	r7,a
   1514 70 03         [24] 6594 	jnz	00117$
   1516 02 15 F8      [24] 6595 	ljmp	00106$
   1519                    6596 00117$:
   1519 90 52 9A      [24] 6597 	mov	dptr,#_axradio_framing_addrlen
   151C E4            [12] 6598 	clr	a
   151D 93            [24] 6599 	movc	a,@a+dptr
   151E FF            [12] 6600 	mov	r7,a
   151F 70 03         [24] 6601 	jnz	00118$
   1521 02 15 F8      [24] 6602 	ljmp	00106$
   1524                    6603 00118$:
                     0CF1  6604 	C$easyax5043.c$907$2$279 ==.
                           6605 ;	../COMMON/easyax5043.c:907: uint16_t __autodata pn = 0x1ff;
   1524 7E FF         [12] 6606 	mov	r6,#0xFF
   1526 7F 01         [12] 6607 	mov	r7,#0x01
                     0CF5  6608 	C$easyax5043.c$908$2$280 ==.
                           6609 ;	../COMMON/easyax5043.c:908: uint8_t __autodata inv = -(AX5043_ENCODING & 0x01);
   1528 90 40 11      [24] 6610 	mov	dptr,#_AX5043_ENCODING
   152B E0            [24] 6611 	movx	a,@dptr
   152C FD            [12] 6612 	mov	r5,a
   152D 53 05 01      [24] 6613 	anl	ar5,#0x01
   1530 C3            [12] 6614 	clr	c
   1531 E4            [12] 6615 	clr	a
   1532 9D            [12] 6616 	subb	a,r5
   1533 FD            [12] 6617 	mov	r5,a
                     0D01  6618 	C$easyax5043.c$909$2$280 ==.
                           6619 ;	../COMMON/easyax5043.c:909: if (axradio_framing_destaddrpos != 0xff)
   1534 90 52 9B      [24] 6620 	mov	dptr,#_axradio_framing_destaddrpos
   1537 E4            [12] 6621 	clr	a
   1538 93            [24] 6622 	movc	a,@a+dptr
   1539 FC            [12] 6623 	mov	r4,a
   153A BC FF 02      [24] 6624 	cjne	r4,#0xFF,00119$
   153D 80 25         [24] 6625 	sjmp	00102$
   153F                    6626 00119$:
                     0D0C  6627 	C$easyax5043.c$910$2$280 ==.
                           6628 ;	../COMMON/easyax5043.c:910: pn = pn9_advance_bits(pn, axradio_framing_destaddrpos << 3);
   153F E4            [12] 6629 	clr	a
   1540 03            [12] 6630 	rr	a
   1541 54 F8         [12] 6631 	anl	a,#0xF8
   1543 CC            [12] 6632 	xch	a,r4
   1544 C4            [12] 6633 	swap	a
   1545 03            [12] 6634 	rr	a
   1546 CC            [12] 6635 	xch	a,r4
   1547 6C            [12] 6636 	xrl	a,r4
   1548 CC            [12] 6637 	xch	a,r4
   1549 54 F8         [12] 6638 	anl	a,#0xF8
   154B CC            [12] 6639 	xch	a,r4
   154C 6C            [12] 6640 	xrl	a,r4
   154D FB            [12] 6641 	mov	r3,a
   154E C0 05         [24] 6642 	push	ar5
   1550 C0 04         [24] 6643 	push	ar4
   1552 C0 03         [24] 6644 	push	ar3
   1554 90 01 FF      [24] 6645 	mov	dptr,#0x01FF
   1557 12 4F CF      [24] 6646 	lcall	_pn9_advance_bits
   155A AE 82         [24] 6647 	mov	r6,dpl
   155C AF 83         [24] 6648 	mov	r7,dph
   155E 15 81         [12] 6649 	dec	sp
   1560 15 81         [12] 6650 	dec	sp
   1562 D0 05         [24] 6651 	pop	ar5
   1564                    6652 00102$:
                     0D31  6653 	C$easyax5043.c$911$2$280 ==.
                           6654 ;	../COMMON/easyax5043.c:911: AX5043_PKTADDR0 ^= pn ^ inv;
   1564 7C 00         [12] 6655 	mov	r4,#0x00
   1566 ED            [12] 6656 	mov	a,r5
   1567 6E            [12] 6657 	xrl	a,r6
   1568 FA            [12] 6658 	mov	r2,a
   1569 EC            [12] 6659 	mov	a,r4
   156A 6F            [12] 6660 	xrl	a,r7
   156B FB            [12] 6661 	mov	r3,a
   156C 90 42 07      [24] 6662 	mov	dptr,#_AX5043_PKTADDR0
   156F E0            [24] 6663 	movx	a,@dptr
   1570 79 00         [12] 6664 	mov	r1,#0x00
   1572 62 02         [12] 6665 	xrl	ar2,a
   1574 E9            [12] 6666 	mov	a,r1
   1575 62 03         [12] 6667 	xrl	ar3,a
   1577 90 42 07      [24] 6668 	mov	dptr,#_AX5043_PKTADDR0
   157A EA            [12] 6669 	mov	a,r2
   157B F0            [24] 6670 	movx	@dptr,a
                     0D49  6671 	C$easyax5043.c$912$2$280 ==.
                           6672 ;	../COMMON/easyax5043.c:912: pn = pn9_advance_byte(pn);
   157C 8E 82         [24] 6673 	mov	dpl,r6
   157E 8F 83         [24] 6674 	mov	dph,r7
   1580 C0 05         [24] 6675 	push	ar5
   1582 C0 04         [24] 6676 	push	ar4
   1584 12 4F F5      [24] 6677 	lcall	_pn9_advance_byte
   1587 AE 82         [24] 6678 	mov	r6,dpl
   1589 AF 83         [24] 6679 	mov	r7,dph
   158B D0 04         [24] 6680 	pop	ar4
   158D D0 05         [24] 6681 	pop	ar5
                     0D5C  6682 	C$easyax5043.c$913$2$280 ==.
                           6683 ;	../COMMON/easyax5043.c:913: AX5043_PKTADDR1 ^= pn ^ inv;
   158F ED            [12] 6684 	mov	a,r5
   1590 6E            [12] 6685 	xrl	a,r6
   1591 FA            [12] 6686 	mov	r2,a
   1592 EC            [12] 6687 	mov	a,r4
   1593 6F            [12] 6688 	xrl	a,r7
   1594 FB            [12] 6689 	mov	r3,a
   1595 90 42 06      [24] 6690 	mov	dptr,#_AX5043_PKTADDR1
   1598 E0            [24] 6691 	movx	a,@dptr
   1599 79 00         [12] 6692 	mov	r1,#0x00
   159B 62 02         [12] 6693 	xrl	ar2,a
   159D E9            [12] 6694 	mov	a,r1
   159E 62 03         [12] 6695 	xrl	ar3,a
   15A0 90 42 06      [24] 6696 	mov	dptr,#_AX5043_PKTADDR1
   15A3 EA            [12] 6697 	mov	a,r2
   15A4 F0            [24] 6698 	movx	@dptr,a
                     0D72  6699 	C$easyax5043.c$914$2$280 ==.
                           6700 ;	../COMMON/easyax5043.c:914: pn = pn9_advance_byte(pn);
   15A5 8E 82         [24] 6701 	mov	dpl,r6
   15A7 8F 83         [24] 6702 	mov	dph,r7
   15A9 C0 05         [24] 6703 	push	ar5
   15AB C0 04         [24] 6704 	push	ar4
   15AD 12 4F F5      [24] 6705 	lcall	_pn9_advance_byte
   15B0 AE 82         [24] 6706 	mov	r6,dpl
   15B2 AF 83         [24] 6707 	mov	r7,dph
   15B4 D0 04         [24] 6708 	pop	ar4
   15B6 D0 05         [24] 6709 	pop	ar5
                     0D85  6710 	C$easyax5043.c$915$2$280 ==.
                           6711 ;	../COMMON/easyax5043.c:915: AX5043_PKTADDR2 ^= pn ^ inv;
   15B8 ED            [12] 6712 	mov	a,r5
   15B9 6E            [12] 6713 	xrl	a,r6
   15BA FA            [12] 6714 	mov	r2,a
   15BB EC            [12] 6715 	mov	a,r4
   15BC 6F            [12] 6716 	xrl	a,r7
   15BD FB            [12] 6717 	mov	r3,a
   15BE 90 42 05      [24] 6718 	mov	dptr,#_AX5043_PKTADDR2
   15C1 E0            [24] 6719 	movx	a,@dptr
   15C2 79 00         [12] 6720 	mov	r1,#0x00
   15C4 62 02         [12] 6721 	xrl	ar2,a
   15C6 E9            [12] 6722 	mov	a,r1
   15C7 62 03         [12] 6723 	xrl	ar3,a
   15C9 90 42 05      [24] 6724 	mov	dptr,#_AX5043_PKTADDR2
   15CC EA            [12] 6725 	mov	a,r2
   15CD F0            [24] 6726 	movx	@dptr,a
                     0D9B  6727 	C$easyax5043.c$916$2$280 ==.
                           6728 ;	../COMMON/easyax5043.c:916: pn = pn9_advance_byte(pn);
   15CE 8E 82         [24] 6729 	mov	dpl,r6
   15D0 8F 83         [24] 6730 	mov	dph,r7
   15D2 C0 05         [24] 6731 	push	ar5
   15D4 C0 04         [24] 6732 	push	ar4
   15D6 12 4F F5      [24] 6733 	lcall	_pn9_advance_byte
   15D9 AE 82         [24] 6734 	mov	r6,dpl
   15DB AF 83         [24] 6735 	mov	r7,dph
   15DD D0 04         [24] 6736 	pop	ar4
   15DF D0 05         [24] 6737 	pop	ar5
                     0DAE  6738 	C$easyax5043.c$917$2$280 ==.
                           6739 ;	../COMMON/easyax5043.c:917: AX5043_PKTADDR3 ^= pn ^ inv;
   15E1 ED            [12] 6740 	mov	a,r5
   15E2 62 06         [12] 6741 	xrl	ar6,a
   15E4 EC            [12] 6742 	mov	a,r4
   15E5 62 07         [12] 6743 	xrl	ar7,a
   15E7 90 42 04      [24] 6744 	mov	dptr,#_AX5043_PKTADDR3
   15EA E0            [24] 6745 	movx	a,@dptr
   15EB FD            [12] 6746 	mov	r5,a
   15EC 7C 00         [12] 6747 	mov	r4,#0x00
   15EE 62 06         [12] 6748 	xrl	ar6,a
   15F0 EC            [12] 6749 	mov	a,r4
   15F1 62 07         [12] 6750 	xrl	ar7,a
   15F3 90 42 04      [24] 6751 	mov	dptr,#_AX5043_PKTADDR3
   15F6 EE            [12] 6752 	mov	a,r6
   15F7 F0            [24] 6753 	movx	@dptr,a
   15F8                    6754 00106$:
                     0DC5  6755 	C$easyax5043.c$919$1$279 ==.
                     0DC5  6756 	XFeasyax5043$axradio_setaddrregs$0$0 ==.
   15F8 22            [24] 6757 	ret
                           6758 ;------------------------------------------------------------
                           6759 ;Allocation info for local variables in function 'ax5043_init_registers'
                           6760 ;------------------------------------------------------------
                     0DC6  6761 	Feasyax5043$ax5043_init_registers$0$0 ==.
                     0DC6  6762 	C$easyax5043.c$921$1$279 ==.
                           6763 ;	../COMMON/easyax5043.c:921: static void ax5043_init_registers(void)
                           6764 ;	-----------------------------------------
                           6765 ;	 function ax5043_init_registers
                           6766 ;	-----------------------------------------
   15F9                    6767 _ax5043_init_registers:
                     0DC6  6768 	C$easyax5043.c$923$1$282 ==.
                           6769 ;	../COMMON/easyax5043.c:923: ax5043_set_registers();
   15F9 12 01 36      [24] 6770 	lcall	_ax5043_set_registers
                     0DC9  6771 	C$easyax5043.c$928$1$282 ==.
                           6772 ;	../COMMON/easyax5043.c:928: AX5043_PKTLENOFFSET += axradio_framing_swcrclen; // add len offs for software CRC16 (used for both, fixed and variable length packets
   15FC 90 52 A0      [24] 6773 	mov	dptr,#_axradio_framing_swcrclen
   15FF E4            [12] 6774 	clr	a
   1600 93            [24] 6775 	movc	a,@a+dptr
   1601 FF            [12] 6776 	mov	r7,a
   1602 90 42 02      [24] 6777 	mov	dptr,#_AX5043_PKTLENOFFSET
   1605 E0            [24] 6778 	movx	a,@dptr
   1606 FE            [12] 6779 	mov	r6,a
   1607 90 42 02      [24] 6780 	mov	dptr,#_AX5043_PKTLENOFFSET
   160A EF            [12] 6781 	mov	a,r7
   160B 2E            [12] 6782 	add	a,r6
   160C F0            [24] 6783 	movx	@dptr,a
                     0DDA  6784 	C$easyax5043.c$929$1$282 ==.
                           6785 ;	../COMMON/easyax5043.c:929: AX5043_PINFUNCIRQ = 0x03; // use as IRQ pin
   160D 90 40 24      [24] 6786 	mov	dptr,#_AX5043_PINFUNCIRQ
   1610 74 03         [12] 6787 	mov	a,#0x03
   1612 F0            [24] 6788 	movx	@dptr,a
                     0DE0  6789 	C$easyax5043.c$930$1$282 ==.
                           6790 ;	../COMMON/easyax5043.c:930: AX5043_PKTSTOREFLAGS = 0x15; // store RF offset, RSSI and delimiter timing
   1613 90 42 32      [24] 6791 	mov	dptr,#_AX5043_PKTSTOREFLAGS
   1616 74 15         [12] 6792 	mov	a,#0x15
   1618 F0            [24] 6793 	movx	@dptr,a
                     0DE6  6794 	C$easyax5043.c$931$1$282 ==.
                           6795 ;	../COMMON/easyax5043.c:931: axradio_setaddrregs();
   1619 12 14 CE      [24] 6796 	lcall	_axradio_setaddrregs
                     0DE9  6797 	C$easyax5043.c$932$1$282 ==.
                     0DE9  6798 	XFeasyax5043$ax5043_init_registers$0$0 ==.
   161C 22            [24] 6799 	ret
                           6800 ;------------------------------------------------------------
                           6801 ;Allocation info for local variables in function 'axradio_sync_addtime'
                           6802 ;------------------------------------------------------------
                           6803 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6804 ;------------------------------------------------------------
                     0DEA  6805 	Feasyax5043$axradio_sync_addtime$0$0 ==.
                     0DEA  6806 	C$easyax5043.c$938$1$282 ==.
                           6807 ;	../COMMON/easyax5043.c:938: static __reentrantb void axradio_sync_addtime(uint32_t dt) __reentrant
                           6808 ;	-----------------------------------------
                           6809 ;	 function axradio_sync_addtime
                           6810 ;	-----------------------------------------
   161D                    6811 _axradio_sync_addtime:
   161D AC 82         [24] 6812 	mov	r4,dpl
   161F AD 83         [24] 6813 	mov	r5,dph
   1621 AE F0         [24] 6814 	mov	r6,b
   1623 FF            [12] 6815 	mov	r7,a
                     0DF1  6816 	C$easyax5043.c$940$1$284 ==.
                           6817 ;	../COMMON/easyax5043.c:940: axradio_sync_time += dt;
   1624 90 00 10      [24] 6818 	mov	dptr,#_axradio_sync_time
   1627 E0            [24] 6819 	movx	a,@dptr
   1628 F8            [12] 6820 	mov	r0,a
   1629 A3            [24] 6821 	inc	dptr
   162A E0            [24] 6822 	movx	a,@dptr
   162B F9            [12] 6823 	mov	r1,a
   162C A3            [24] 6824 	inc	dptr
   162D E0            [24] 6825 	movx	a,@dptr
   162E FA            [12] 6826 	mov	r2,a
   162F A3            [24] 6827 	inc	dptr
   1630 E0            [24] 6828 	movx	a,@dptr
   1631 FB            [12] 6829 	mov	r3,a
   1632 90 00 10      [24] 6830 	mov	dptr,#_axradio_sync_time
   1635 EC            [12] 6831 	mov	a,r4
   1636 28            [12] 6832 	add	a,r0
   1637 F0            [24] 6833 	movx	@dptr,a
   1638 ED            [12] 6834 	mov	a,r5
   1639 39            [12] 6835 	addc	a,r1
   163A A3            [24] 6836 	inc	dptr
   163B F0            [24] 6837 	movx	@dptr,a
   163C EE            [12] 6838 	mov	a,r6
   163D 3A            [12] 6839 	addc	a,r2
   163E A3            [24] 6840 	inc	dptr
   163F F0            [24] 6841 	movx	@dptr,a
   1640 EF            [12] 6842 	mov	a,r7
   1641 3B            [12] 6843 	addc	a,r3
   1642 A3            [24] 6844 	inc	dptr
   1643 F0            [24] 6845 	movx	@dptr,a
                     0E11  6846 	C$easyax5043.c$941$1$284 ==.
                     0E11  6847 	XFeasyax5043$axradio_sync_addtime$0$0 ==.
   1644 22            [24] 6848 	ret
                           6849 ;------------------------------------------------------------
                           6850 ;Allocation info for local variables in function 'axradio_sync_subtime'
                           6851 ;------------------------------------------------------------
                           6852 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6853 ;------------------------------------------------------------
                     0E12  6854 	Feasyax5043$axradio_sync_subtime$0$0 ==.
                     0E12  6855 	C$easyax5043.c$943$1$284 ==.
                           6856 ;	../COMMON/easyax5043.c:943: static __reentrantb void axradio_sync_subtime(uint32_t dt) __reentrant
                           6857 ;	-----------------------------------------
                           6858 ;	 function axradio_sync_subtime
                           6859 ;	-----------------------------------------
   1645                    6860 _axradio_sync_subtime:
   1645 AC 82         [24] 6861 	mov	r4,dpl
   1647 AD 83         [24] 6862 	mov	r5,dph
   1649 AE F0         [24] 6863 	mov	r6,b
   164B FF            [12] 6864 	mov	r7,a
                     0E19  6865 	C$easyax5043.c$945$1$286 ==.
                           6866 ;	../COMMON/easyax5043.c:945: axradio_sync_time -= dt;
   164C 90 00 10      [24] 6867 	mov	dptr,#_axradio_sync_time
   164F E0            [24] 6868 	movx	a,@dptr
   1650 F8            [12] 6869 	mov	r0,a
   1651 A3            [24] 6870 	inc	dptr
   1652 E0            [24] 6871 	movx	a,@dptr
   1653 F9            [12] 6872 	mov	r1,a
   1654 A3            [24] 6873 	inc	dptr
   1655 E0            [24] 6874 	movx	a,@dptr
   1656 FA            [12] 6875 	mov	r2,a
   1657 A3            [24] 6876 	inc	dptr
   1658 E0            [24] 6877 	movx	a,@dptr
   1659 FB            [12] 6878 	mov	r3,a
   165A 90 00 10      [24] 6879 	mov	dptr,#_axradio_sync_time
   165D E8            [12] 6880 	mov	a,r0
   165E C3            [12] 6881 	clr	c
   165F 9C            [12] 6882 	subb	a,r4
   1660 F0            [24] 6883 	movx	@dptr,a
   1661 E9            [12] 6884 	mov	a,r1
   1662 9D            [12] 6885 	subb	a,r5
   1663 A3            [24] 6886 	inc	dptr
   1664 F0            [24] 6887 	movx	@dptr,a
   1665 EA            [12] 6888 	mov	a,r2
   1666 9E            [12] 6889 	subb	a,r6
   1667 A3            [24] 6890 	inc	dptr
   1668 F0            [24] 6891 	movx	@dptr,a
   1669 EB            [12] 6892 	mov	a,r3
   166A 9F            [12] 6893 	subb	a,r7
   166B A3            [24] 6894 	inc	dptr
   166C F0            [24] 6895 	movx	@dptr,a
                     0E3A  6896 	C$easyax5043.c$946$1$286 ==.
                     0E3A  6897 	XFeasyax5043$axradio_sync_subtime$0$0 ==.
   166D 22            [24] 6898 	ret
                           6899 ;------------------------------------------------------------
                           6900 ;Allocation info for local variables in function 'axradio_sync_settimeradv'
                           6901 ;------------------------------------------------------------
                           6902 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6903 ;------------------------------------------------------------
                     0E3B  6904 	Feasyax5043$axradio_sync_settimeradv$0$0 ==.
                     0E3B  6905 	C$easyax5043.c$948$1$286 ==.
                           6906 ;	../COMMON/easyax5043.c:948: static __reentrantb void axradio_sync_settimeradv(uint32_t dt) __reentrant
                           6907 ;	-----------------------------------------
                           6908 ;	 function axradio_sync_settimeradv
                           6909 ;	-----------------------------------------
   166E                    6910 _axradio_sync_settimeradv:
   166E AC 82         [24] 6911 	mov	r4,dpl
   1670 AD 83         [24] 6912 	mov	r5,dph
   1672 AE F0         [24] 6913 	mov	r6,b
   1674 FF            [12] 6914 	mov	r7,a
                     0E42  6915 	C$easyax5043.c$950$1$288 ==.
                           6916 ;	../COMMON/easyax5043.c:950: axradio_timer.time = axradio_sync_time;
   1675 90 00 10      [24] 6917 	mov	dptr,#_axradio_sync_time
   1678 E0            [24] 6918 	movx	a,@dptr
   1679 F8            [12] 6919 	mov	r0,a
   167A A3            [24] 6920 	inc	dptr
   167B E0            [24] 6921 	movx	a,@dptr
   167C F9            [12] 6922 	mov	r1,a
   167D A3            [24] 6923 	inc	dptr
   167E E0            [24] 6924 	movx	a,@dptr
   167F FA            [12] 6925 	mov	r2,a
   1680 A3            [24] 6926 	inc	dptr
   1681 E0            [24] 6927 	movx	a,@dptr
   1682 FB            [12] 6928 	mov	r3,a
   1683 90 02 8D      [24] 6929 	mov	dptr,#(_axradio_timer + 0x0004)
   1686 E8            [12] 6930 	mov	a,r0
   1687 F0            [24] 6931 	movx	@dptr,a
   1688 E9            [12] 6932 	mov	a,r1
   1689 A3            [24] 6933 	inc	dptr
   168A F0            [24] 6934 	movx	@dptr,a
   168B EA            [12] 6935 	mov	a,r2
   168C A3            [24] 6936 	inc	dptr
   168D F0            [24] 6937 	movx	@dptr,a
   168E EB            [12] 6938 	mov	a,r3
   168F A3            [24] 6939 	inc	dptr
   1690 F0            [24] 6940 	movx	@dptr,a
                     0E5E  6941 	C$easyax5043.c$951$1$288 ==.
                           6942 ;	../COMMON/easyax5043.c:951: axradio_timer.time -= dt;
   1691 E8            [12] 6943 	mov	a,r0
   1692 C3            [12] 6944 	clr	c
   1693 9C            [12] 6945 	subb	a,r4
   1694 FC            [12] 6946 	mov	r4,a
   1695 E9            [12] 6947 	mov	a,r1
   1696 9D            [12] 6948 	subb	a,r5
   1697 FD            [12] 6949 	mov	r5,a
   1698 EA            [12] 6950 	mov	a,r2
   1699 9E            [12] 6951 	subb	a,r6
   169A FE            [12] 6952 	mov	r6,a
   169B EB            [12] 6953 	mov	a,r3
   169C 9F            [12] 6954 	subb	a,r7
   169D FF            [12] 6955 	mov	r7,a
   169E 90 02 8D      [24] 6956 	mov	dptr,#(_axradio_timer + 0x0004)
   16A1 EC            [12] 6957 	mov	a,r4
   16A2 F0            [24] 6958 	movx	@dptr,a
   16A3 ED            [12] 6959 	mov	a,r5
   16A4 A3            [24] 6960 	inc	dptr
   16A5 F0            [24] 6961 	movx	@dptr,a
   16A6 EE            [12] 6962 	mov	a,r6
   16A7 A3            [24] 6963 	inc	dptr
   16A8 F0            [24] 6964 	movx	@dptr,a
   16A9 EF            [12] 6965 	mov	a,r7
   16AA A3            [24] 6966 	inc	dptr
   16AB F0            [24] 6967 	movx	@dptr,a
                     0E79  6968 	C$easyax5043.c$952$1$288 ==.
                     0E79  6969 	XFeasyax5043$axradio_sync_settimeradv$0$0 ==.
   16AC 22            [24] 6970 	ret
                           6971 ;------------------------------------------------------------
                           6972 ;Allocation info for local variables in function 'axradio_sync_adjustperiodcorr'
                           6973 ;------------------------------------------------------------
                           6974 ;dt                        Allocated to registers r4 r5 r6 r7 
                           6975 ;------------------------------------------------------------
                     0E7A  6976 	Feasyax5043$axradio_sync_adjustperiodcorr$0$0 ==.
                     0E7A  6977 	C$easyax5043.c$954$1$288 ==.
                           6978 ;	../COMMON/easyax5043.c:954: static void axradio_sync_adjustperiodcorr(void)
                           6979 ;	-----------------------------------------
                           6980 ;	 function axradio_sync_adjustperiodcorr
                           6981 ;	-----------------------------------------
   16AD                    6982 _axradio_sync_adjustperiodcorr:
                     0E7A  6983 	C$easyax5043.c$956$1$290 ==.
                           6984 ;	../COMMON/easyax5043.c:956: int32_t __autodata dt = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t) - axradio_sync_time;
   16AD 90 02 38      [24] 6985 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   16B0 E0            [24] 6986 	movx	a,@dptr
   16B1 FC            [12] 6987 	mov	r4,a
   16B2 A3            [24] 6988 	inc	dptr
   16B3 E0            [24] 6989 	movx	a,@dptr
   16B4 FD            [12] 6990 	mov	r5,a
   16B5 A3            [24] 6991 	inc	dptr
   16B6 E0            [24] 6992 	movx	a,@dptr
   16B7 FE            [12] 6993 	mov	r6,a
   16B8 A3            [24] 6994 	inc	dptr
   16B9 E0            [24] 6995 	movx	a,@dptr
   16BA 8C 82         [24] 6996 	mov	dpl,r4
   16BC 8D 83         [24] 6997 	mov	dph,r5
   16BE 8E F0         [24] 6998 	mov	b,r6
   16C0 12 08 75      [24] 6999 	lcall	_axradio_conv_time_totimer0
   16C3 AC 82         [24] 7000 	mov	r4,dpl
   16C5 AD 83         [24] 7001 	mov	r5,dph
   16C7 AE F0         [24] 7002 	mov	r6,b
   16C9 FF            [12] 7003 	mov	r7,a
   16CA 90 00 10      [24] 7004 	mov	dptr,#_axradio_sync_time
   16CD E0            [24] 7005 	movx	a,@dptr
   16CE F8            [12] 7006 	mov	r0,a
   16CF A3            [24] 7007 	inc	dptr
   16D0 E0            [24] 7008 	movx	a,@dptr
   16D1 F9            [12] 7009 	mov	r1,a
   16D2 A3            [24] 7010 	inc	dptr
   16D3 E0            [24] 7011 	movx	a,@dptr
   16D4 FA            [12] 7012 	mov	r2,a
   16D5 A3            [24] 7013 	inc	dptr
   16D6 E0            [24] 7014 	movx	a,@dptr
   16D7 FB            [12] 7015 	mov	r3,a
   16D8 EC            [12] 7016 	mov	a,r4
   16D9 C3            [12] 7017 	clr	c
   16DA 98            [12] 7018 	subb	a,r0
   16DB FC            [12] 7019 	mov	r4,a
   16DC ED            [12] 7020 	mov	a,r5
   16DD 99            [12] 7021 	subb	a,r1
   16DE FD            [12] 7022 	mov	r5,a
   16DF EE            [12] 7023 	mov	a,r6
   16E0 9A            [12] 7024 	subb	a,r2
   16E1 FE            [12] 7025 	mov	r6,a
   16E2 EF            [12] 7026 	mov	a,r7
   16E3 9B            [12] 7027 	subb	a,r3
   16E4 FF            [12] 7028 	mov	r7,a
                     0EB2  7029 	C$easyax5043.c$957$1$290 ==.
                           7030 ;	../COMMON/easyax5043.c:957: axradio_cb_receive.st.rx.phy.timeoffset = dt;
   16E5 8C 02         [24] 7031 	mov	ar2,r4
   16E7 8D 03         [24] 7032 	mov	ar3,r5
   16E9 90 02 42      [24] 7033 	mov	dptr,#(_axradio_cb_receive + 0x0010)
   16EC EA            [12] 7034 	mov	a,r2
   16ED F0            [24] 7035 	movx	@dptr,a
   16EE EB            [12] 7036 	mov	a,r3
   16EF A3            [24] 7037 	inc	dptr
   16F0 F0            [24] 7038 	movx	@dptr,a
                     0EBE  7039 	C$easyax5043.c$958$1$290 ==.
                           7040 ;	../COMMON/easyax5043.c:958: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod)) {
   16F1 90 00 14      [24] 7041 	mov	dptr,#_axradio_sync_periodcorr
   16F4 E0            [24] 7042 	movx	a,@dptr
   16F5 FA            [12] 7043 	mov	r2,a
   16F6 A3            [24] 7044 	inc	dptr
   16F7 E0            [24] 7045 	movx	a,@dptr
   16F8 FB            [12] 7046 	mov	r3,a
   16F9 90 52 C9      [24] 7047 	mov	dptr,#_axradio_sync_slave_maxperiod
   16FC E4            [12] 7048 	clr	a
   16FD 93            [24] 7049 	movc	a,@a+dptr
   16FE C0 E0         [24] 7050 	push	acc
   1700 74 01         [12] 7051 	mov	a,#0x01
   1702 93            [24] 7052 	movc	a,@a+dptr
   1703 C0 E0         [24] 7053 	push	acc
   1705 8A 82         [24] 7054 	mov	dpl,r2
   1707 8B 83         [24] 7055 	mov	dph,r3
   1709 12 4A FA      [24] 7056 	lcall	_checksignedlimit16
   170C AB 82         [24] 7057 	mov	r3,dpl
   170E 15 81         [12] 7058 	dec	sp
   1710 15 81         [12] 7059 	dec	sp
   1712 EB            [12] 7060 	mov	a,r3
   1713 70 4B         [24] 7061 	jnz	00102$
                     0EE2  7062 	C$easyax5043.c$959$2$291 ==.
                           7063 ;	../COMMON/easyax5043.c:959: axradio_sync_addtime(dt);
   1715 8C 82         [24] 7064 	mov	dpl,r4
   1717 8D 83         [24] 7065 	mov	dph,r5
   1719 8E F0         [24] 7066 	mov	b,r6
   171B EF            [12] 7067 	mov	a,r7
   171C C0 07         [24] 7068 	push	ar7
   171E C0 06         [24] 7069 	push	ar6
   1720 C0 05         [24] 7070 	push	ar5
   1722 C0 04         [24] 7071 	push	ar4
   1724 12 16 1D      [24] 7072 	lcall	_axradio_sync_addtime
   1727 D0 04         [24] 7073 	pop	ar4
   1729 D0 05         [24] 7074 	pop	ar5
   172B D0 06         [24] 7075 	pop	ar6
   172D D0 07         [24] 7076 	pop	ar7
                     0EFC  7077 	C$easyax5043.c$960$2$291 ==.
                           7078 ;	../COMMON/easyax5043.c:960: dt <<= SYNC_K1;
   172F EF            [12] 7079 	mov	a,r7
   1730 C4            [12] 7080 	swap	a
   1731 23            [12] 7081 	rl	a
   1732 54 E0         [12] 7082 	anl	a,#0xE0
   1734 CE            [12] 7083 	xch	a,r6
   1735 C4            [12] 7084 	swap	a
   1736 23            [12] 7085 	rl	a
   1737 CE            [12] 7086 	xch	a,r6
   1738 6E            [12] 7087 	xrl	a,r6
   1739 CE            [12] 7088 	xch	a,r6
   173A 54 E0         [12] 7089 	anl	a,#0xE0
   173C CE            [12] 7090 	xch	a,r6
   173D 6E            [12] 7091 	xrl	a,r6
   173E FF            [12] 7092 	mov	r7,a
   173F ED            [12] 7093 	mov	a,r5
   1740 C4            [12] 7094 	swap	a
   1741 23            [12] 7095 	rl	a
   1742 54 1F         [12] 7096 	anl	a,#0x1F
   1744 4E            [12] 7097 	orl	a,r6
   1745 FE            [12] 7098 	mov	r6,a
   1746 ED            [12] 7099 	mov	a,r5
   1747 C4            [12] 7100 	swap	a
   1748 23            [12] 7101 	rl	a
   1749 54 E0         [12] 7102 	anl	a,#0xE0
   174B CC            [12] 7103 	xch	a,r4
   174C C4            [12] 7104 	swap	a
   174D 23            [12] 7105 	rl	a
   174E CC            [12] 7106 	xch	a,r4
   174F 6C            [12] 7107 	xrl	a,r4
   1750 CC            [12] 7108 	xch	a,r4
   1751 54 E0         [12] 7109 	anl	a,#0xE0
   1753 CC            [12] 7110 	xch	a,r4
   1754 6C            [12] 7111 	xrl	a,r4
   1755 FD            [12] 7112 	mov	r5,a
                     0F23  7113 	C$easyax5043.c$961$2$291 ==.
                           7114 ;	../COMMON/easyax5043.c:961: axradio_sync_periodcorr = dt;
   1756 90 00 14      [24] 7115 	mov	dptr,#_axradio_sync_periodcorr
   1759 EC            [12] 7116 	mov	a,r4
   175A F0            [24] 7117 	movx	@dptr,a
   175B ED            [12] 7118 	mov	a,r5
   175C A3            [24] 7119 	inc	dptr
   175D F0            [24] 7120 	movx	@dptr,a
   175E 80 48         [24] 7121 	sjmp	00103$
   1760                    7122 00102$:
                     0F2D  7123 	C$easyax5043.c$963$2$292 ==.
                           7124 ;	../COMMON/easyax5043.c:963: axradio_sync_periodcorr += dt;
   1760 90 00 14      [24] 7125 	mov	dptr,#_axradio_sync_periodcorr
   1763 E0            [24] 7126 	movx	a,@dptr
   1764 FA            [12] 7127 	mov	r2,a
   1765 A3            [24] 7128 	inc	dptr
   1766 E0            [24] 7129 	movx	a,@dptr
   1767 FB            [12] 7130 	mov	r3,a
   1768 8A 00         [24] 7131 	mov	ar0,r2
   176A EB            [12] 7132 	mov	a,r3
   176B F9            [12] 7133 	mov	r1,a
   176C 33            [12] 7134 	rlc	a
   176D 95 E0         [12] 7135 	subb	a,acc
   176F FA            [12] 7136 	mov	r2,a
   1770 FB            [12] 7137 	mov	r3,a
   1771 EC            [12] 7138 	mov	a,r4
   1772 28            [12] 7139 	add	a,r0
   1773 F8            [12] 7140 	mov	r0,a
   1774 ED            [12] 7141 	mov	a,r5
   1775 39            [12] 7142 	addc	a,r1
   1776 F9            [12] 7143 	mov	r1,a
   1777 EE            [12] 7144 	mov	a,r6
   1778 3A            [12] 7145 	addc	a,r2
   1779 EF            [12] 7146 	mov	a,r7
   177A 3B            [12] 7147 	addc	a,r3
   177B 90 00 14      [24] 7148 	mov	dptr,#_axradio_sync_periodcorr
   177E E8            [12] 7149 	mov	a,r0
   177F F0            [24] 7150 	movx	@dptr,a
   1780 E9            [12] 7151 	mov	a,r1
   1781 A3            [24] 7152 	inc	dptr
   1782 F0            [24] 7153 	movx	@dptr,a
                     0F50  7154 	C$easyax5043.c$964$2$292 ==.
                           7155 ;	../COMMON/easyax5043.c:964: dt >>= SYNC_K0;
   1783 EF            [12] 7156 	mov	a,r7
   1784 A2 E7         [12] 7157 	mov	c,acc.7
   1786 13            [12] 7158 	rrc	a
   1787 FF            [12] 7159 	mov	r7,a
   1788 EE            [12] 7160 	mov	a,r6
   1789 13            [12] 7161 	rrc	a
   178A FE            [12] 7162 	mov	r6,a
   178B ED            [12] 7163 	mov	a,r5
   178C 13            [12] 7164 	rrc	a
   178D FD            [12] 7165 	mov	r5,a
   178E EC            [12] 7166 	mov	a,r4
   178F 13            [12] 7167 	rrc	a
   1790 FC            [12] 7168 	mov	r4,a
   1791 EF            [12] 7169 	mov	a,r7
   1792 A2 E7         [12] 7170 	mov	c,acc.7
   1794 13            [12] 7171 	rrc	a
   1795 FF            [12] 7172 	mov	r7,a
   1796 EE            [12] 7173 	mov	a,r6
   1797 13            [12] 7174 	rrc	a
   1798 FE            [12] 7175 	mov	r6,a
   1799 ED            [12] 7176 	mov	a,r5
   179A 13            [12] 7177 	rrc	a
   179B FD            [12] 7178 	mov	r5,a
   179C EC            [12] 7179 	mov	a,r4
   179D 13            [12] 7180 	rrc	a
                     0F6B  7181 	C$easyax5043.c$965$2$292 ==.
                           7182 ;	../COMMON/easyax5043.c:965: axradio_sync_addtime(dt);
   179E F5 82         [12] 7183 	mov	dpl,a
   17A0 8D 83         [24] 7184 	mov	dph,r5
   17A2 8E F0         [24] 7185 	mov	b,r6
   17A4 EF            [12] 7186 	mov	a,r7
   17A5 12 16 1D      [24] 7187 	lcall	_axradio_sync_addtime
   17A8                    7188 00103$:
                     0F75  7189 	C$easyax5043.c$967$1$290 ==.
                           7190 ;	../COMMON/easyax5043.c:967: axradio_sync_periodcorr = signedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod);
   17A8 90 00 14      [24] 7191 	mov	dptr,#_axradio_sync_periodcorr
   17AB E0            [24] 7192 	movx	a,@dptr
   17AC FE            [12] 7193 	mov	r6,a
   17AD A3            [24] 7194 	inc	dptr
   17AE E0            [24] 7195 	movx	a,@dptr
   17AF FF            [12] 7196 	mov	r7,a
   17B0 90 52 C9      [24] 7197 	mov	dptr,#_axradio_sync_slave_maxperiod
   17B3 E4            [12] 7198 	clr	a
   17B4 93            [24] 7199 	movc	a,@a+dptr
   17B5 C0 E0         [24] 7200 	push	acc
   17B7 74 01         [12] 7201 	mov	a,#0x01
   17B9 93            [24] 7202 	movc	a,@a+dptr
   17BA C0 E0         [24] 7203 	push	acc
   17BC 8E 82         [24] 7204 	mov	dpl,r6
   17BE 8F 83         [24] 7205 	mov	dph,r7
   17C0 12 4B D2      [24] 7206 	lcall	_signedlimit16
   17C3 AE 82         [24] 7207 	mov	r6,dpl
   17C5 AF 83         [24] 7208 	mov	r7,dph
   17C7 15 81         [12] 7209 	dec	sp
   17C9 15 81         [12] 7210 	dec	sp
   17CB 90 00 14      [24] 7211 	mov	dptr,#_axradio_sync_periodcorr
   17CE EE            [12] 7212 	mov	a,r6
   17CF F0            [24] 7213 	movx	@dptr,a
   17D0 EF            [12] 7214 	mov	a,r7
   17D1 A3            [24] 7215 	inc	dptr
   17D2 F0            [24] 7216 	movx	@dptr,a
                     0FA0  7217 	C$easyax5043.c$968$1$290 ==.
                     0FA0  7218 	XFeasyax5043$axradio_sync_adjustperiodcorr$0$0 ==.
   17D3 22            [24] 7219 	ret
                           7220 ;------------------------------------------------------------
                           7221 ;Allocation info for local variables in function 'axradio_sync_slave_nextperiod'
                           7222 ;------------------------------------------------------------
                           7223 ;c                         Allocated to registers r6 r7 
                           7224 ;------------------------------------------------------------
                     0FA1  7225 	Feasyax5043$axradio_sync_slave_nextperiod$0$0 ==.
                     0FA1  7226 	C$easyax5043.c$970$1$290 ==.
                           7227 ;	../COMMON/easyax5043.c:970: static void axradio_sync_slave_nextperiod()
                           7228 ;	-----------------------------------------
                           7229 ;	 function axradio_sync_slave_nextperiod
                           7230 ;	-----------------------------------------
   17D4                    7231 _axradio_sync_slave_nextperiod:
                     0FA1  7232 	C$easyax5043.c$972$1$293 ==.
                           7233 ;	../COMMON/easyax5043.c:972: axradio_sync_addtime(axradio_sync_period);
   17D4 90 52 B5      [24] 7234 	mov	dptr,#_axradio_sync_period
   17D7 E4            [12] 7235 	clr	a
   17D8 93            [24] 7236 	movc	a,@a+dptr
   17D9 FC            [12] 7237 	mov	r4,a
   17DA 74 01         [12] 7238 	mov	a,#0x01
   17DC 93            [24] 7239 	movc	a,@a+dptr
   17DD FD            [12] 7240 	mov	r5,a
   17DE 74 02         [12] 7241 	mov	a,#0x02
   17E0 93            [24] 7242 	movc	a,@a+dptr
   17E1 FE            [12] 7243 	mov	r6,a
   17E2 74 03         [12] 7244 	mov	a,#0x03
   17E4 93            [24] 7245 	movc	a,@a+dptr
   17E5 8C 82         [24] 7246 	mov	dpl,r4
   17E7 8D 83         [24] 7247 	mov	dph,r5
   17E9 8E F0         [24] 7248 	mov	b,r6
   17EB 12 16 1D      [24] 7249 	lcall	_axradio_sync_addtime
                     0FBB  7250 	C$easyax5043.c$973$1$293 ==.
                           7251 ;	../COMMON/easyax5043.c:973: if (!checksignedlimit16(axradio_sync_periodcorr, axradio_sync_slave_maxperiod))
   17EE 90 00 14      [24] 7252 	mov	dptr,#_axradio_sync_periodcorr
   17F1 E0            [24] 7253 	movx	a,@dptr
   17F2 FE            [12] 7254 	mov	r6,a
   17F3 A3            [24] 7255 	inc	dptr
   17F4 E0            [24] 7256 	movx	a,@dptr
   17F5 FF            [12] 7257 	mov	r7,a
   17F6 90 52 C9      [24] 7258 	mov	dptr,#_axradio_sync_slave_maxperiod
   17F9 E4            [12] 7259 	clr	a
   17FA 93            [24] 7260 	movc	a,@a+dptr
   17FB C0 E0         [24] 7261 	push	acc
   17FD 74 01         [12] 7262 	mov	a,#0x01
   17FF 93            [24] 7263 	movc	a,@a+dptr
   1800 C0 E0         [24] 7264 	push	acc
   1802 8E 82         [24] 7265 	mov	dpl,r6
   1804 8F 83         [24] 7266 	mov	dph,r7
   1806 12 4A FA      [24] 7267 	lcall	_checksignedlimit16
   1809 AF 82         [24] 7268 	mov	r7,dpl
   180B 15 81         [12] 7269 	dec	sp
   180D 15 81         [12] 7270 	dec	sp
   180F EF            [12] 7271 	mov	a,r7
   1810 70 02         [24] 7272 	jnz	00102$
                     0FDF  7273 	C$easyax5043.c$974$1$293 ==.
                           7274 ;	../COMMON/easyax5043.c:974: return;
   1812 80 29         [24] 7275 	sjmp	00103$
   1814                    7276 00102$:
                     0FE1  7277 	C$easyax5043.c$976$2$293 ==.
                           7278 ;	../COMMON/easyax5043.c:976: int16_t __autodata c = axradio_sync_periodcorr;
   1814 90 00 14      [24] 7279 	mov	dptr,#_axradio_sync_periodcorr
   1817 E0            [24] 7280 	movx	a,@dptr
   1818 FE            [12] 7281 	mov	r6,a
   1819 A3            [24] 7282 	inc	dptr
   181A E0            [24] 7283 	movx	a,@dptr
                     0FE8  7284 	C$easyax5043.c$977$2$294 ==.
                           7285 ;	../COMMON/easyax5043.c:977: axradio_sync_addtime(c >> SYNC_K1);
   181B FF            [12] 7286 	mov	r7,a
   181C C4            [12] 7287 	swap	a
   181D 03            [12] 7288 	rr	a
   181E CE            [12] 7289 	xch	a,r6
   181F C4            [12] 7290 	swap	a
   1820 03            [12] 7291 	rr	a
   1821 54 07         [12] 7292 	anl	a,#0x07
   1823 6E            [12] 7293 	xrl	a,r6
   1824 CE            [12] 7294 	xch	a,r6
   1825 54 07         [12] 7295 	anl	a,#0x07
   1827 CE            [12] 7296 	xch	a,r6
   1828 6E            [12] 7297 	xrl	a,r6
   1829 CE            [12] 7298 	xch	a,r6
   182A 30 E2 02      [24] 7299 	jnb	acc.2,00109$
   182D 44 F8         [12] 7300 	orl	a,#0xF8
   182F                    7301 00109$:
   182F FF            [12] 7302 	mov	r7,a
   1830 33            [12] 7303 	rlc	a
   1831 95 E0         [12] 7304 	subb	a,acc
   1833 FD            [12] 7305 	mov	r5,a
   1834 8E 82         [24] 7306 	mov	dpl,r6
   1836 8F 83         [24] 7307 	mov	dph,r7
   1838 8D F0         [24] 7308 	mov	b,r5
   183A 12 16 1D      [24] 7309 	lcall	_axradio_sync_addtime
   183D                    7310 00103$:
                     100A  7311 	C$easyax5043.c$979$2$294 ==.
                     100A  7312 	XFeasyax5043$axradio_sync_slave_nextperiod$0$0 ==.
   183D 22            [24] 7313 	ret
                           7314 ;------------------------------------------------------------
                           7315 ;Allocation info for local variables in function 'axradio_timer_callback'
                           7316 ;------------------------------------------------------------
                           7317 ;desc                      Allocated to registers 
                           7318 ;r                         Allocated to registers r7 
                           7319 ;idx                       Allocated to registers r7 
                           7320 ;idx                       Allocated to registers r7 
                           7321 ;------------------------------------------------------------
                     100B  7322 	Feasyax5043$axradio_timer_callback$0$0 ==.
                     100B  7323 	C$easyax5043.c$983$2$294 ==.
                           7324 ;	../COMMON/easyax5043.c:983: static void axradio_timer_callback(struct wtimer_desc __xdata *desc)
                           7325 ;	-----------------------------------------
                           7326 ;	 function axradio_timer_callback
                           7327 ;	-----------------------------------------
   183E                    7328 _axradio_timer_callback:
                     100B  7329 	C$easyax5043.c$986$1$296 ==.
                           7330 ;	../COMMON/easyax5043.c:986: switch (axradio_mode) {
   183E AF 0A         [24] 7331 	mov	r7,_axradio_mode
   1840 BF 10 00      [24] 7332 	cjne	r7,#0x10,00259$
   1843                    7333 00259$:
   1843 50 03         [24] 7334 	jnc	00260$
   1845 02 20 6E      [24] 7335 	ljmp	00173$
   1848                    7336 00260$:
   1848 EF            [12] 7337 	mov	a,r7
   1849 24 DC         [12] 7338 	add	a,#0xff - 0x23
   184B 50 03         [24] 7339 	jnc	00261$
   184D 02 20 6E      [24] 7340 	ljmp	00173$
   1850                    7341 00261$:
   1850 EF            [12] 7342 	mov	a,r7
   1851 24 F0         [12] 7343 	add	a,#0xF0
   1853 FF            [12] 7344 	mov	r7,a
   1854 24 0A         [12] 7345 	add	a,#(00262$-3-.)
   1856 83            [24] 7346 	movc	a,@a+pc
   1857 F5 82         [12] 7347 	mov	dpl,a
   1859 EF            [12] 7348 	mov	a,r7
   185A 24 18         [12] 7349 	add	a,#(00263$-3-.)
   185C 83            [24] 7350 	movc	a,@a+pc
   185D F5 83         [12] 7351 	mov	dph,a
   185F E4            [12] 7352 	clr	a
   1860 73            [24] 7353 	jmp	@a+dptr
   1861                    7354 00262$:
   1861 2A                 7355 	.db	00110$
   1862 2A                 7356 	.db	00111$
   1863 C3                 7357 	.db	00121$
   1864 C3                 7358 	.db	00122$
   1865 6E                 7359 	.db	00171$
   1866 6E                 7360 	.db	00171$
   1867 6E                 7361 	.db	00171$
   1868 6E                 7362 	.db	00171$
   1869 89                 7363 	.db	00104$
   186A 89                 7364 	.db	00105$
   186B 2A                 7365 	.db	00127$
   186C 2A                 7366 	.db	00128$
   186D 89                 7367 	.db	00101$
   186E 89                 7368 	.db	00102$
   186F 89                 7369 	.db	00103$
   1870 6E                 7370 	.db	00171$
   1871 C3                 7371 	.db	00137$
   1872 C3                 7372 	.db	00138$
   1873 6C                 7373 	.db	00150$
   1874 6C                 7374 	.db	00151$
   1875                    7375 00263$:
   1875 19                 7376 	.db	00110$>>8
   1876 19                 7377 	.db	00111$>>8
   1877 19                 7378 	.db	00121$>>8
   1878 19                 7379 	.db	00122$>>8
   1879 20                 7380 	.db	00171$>>8
   187A 20                 7381 	.db	00171$>>8
   187B 20                 7382 	.db	00171$>>8
   187C 20                 7383 	.db	00171$>>8
   187D 18                 7384 	.db	00104$>>8
   187E 18                 7385 	.db	00105$>>8
   187F 1A                 7386 	.db	00127$>>8
   1880 1A                 7387 	.db	00128$>>8
   1881 18                 7388 	.db	00101$>>8
   1882 18                 7389 	.db	00102$>>8
   1883 18                 7390 	.db	00103$>>8
   1884 20                 7391 	.db	00171$>>8
   1885 1A                 7392 	.db	00137$>>8
   1886 1A                 7393 	.db	00138$>>8
   1887 1C                 7394 	.db	00150$>>8
   1888 1C                 7395 	.db	00151$>>8
                     1056  7396 	C$easyax5043.c$987$2$297 ==.
                           7397 ;	../COMMON/easyax5043.c:987: case AXRADIO_MODE_STREAM_RECEIVE:
   1889                    7398 00101$:
                     1056  7399 	C$easyax5043.c$988$2$297 ==.
                           7400 ;	../COMMON/easyax5043.c:988: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   1889                    7401 00102$:
                     1056  7402 	C$easyax5043.c$989$2$297 ==.
                           7403 ;	../COMMON/easyax5043.c:989: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   1889                    7404 00103$:
                     1056  7405 	C$easyax5043.c$990$2$297 ==.
                           7406 ;	../COMMON/easyax5043.c:990: case AXRADIO_MODE_ASYNC_RECEIVE:
   1889                    7407 00104$:
                     1056  7408 	C$easyax5043.c$991$2$297 ==.
                           7409 ;	../COMMON/easyax5043.c:991: case AXRADIO_MODE_WOR_RECEIVE:
   1889                    7410 00105$:
                     1056  7411 	C$easyax5043.c$992$2$297 ==.
                           7412 ;	../COMMON/easyax5043.c:992: if (axradio_syncstate == syncstate_asynctx)
   1889 90 00 04      [24] 7413 	mov	dptr,#_axradio_syncstate
   188C E0            [24] 7414 	movx	a,@dptr
   188D FF            [12] 7415 	mov	r7,a
   188E BF 02 03      [24] 7416 	cjne	r7,#0x02,00264$
   1891 02 19 2A      [24] 7417 	ljmp	00112$
   1894                    7418 00264$:
                     1061  7419 	C$easyax5043.c$994$2$297 ==.
                           7420 ;	../COMMON/easyax5043.c:994: wtimer_remove(&axradio_timer);
   1894 90 02 89      [24] 7421 	mov	dptr,#_axradio_timer
   1897 12 4C D4      [24] 7422 	lcall	_wtimer_remove
                     1067  7423 	C$easyax5043.c$995$2$297 ==.
                           7424 ;	../COMMON/easyax5043.c:995: rearmcstimer:
   189A                    7425 00108$:
                     1067  7426 	C$easyax5043.c$996$2$297 ==.
                           7427 ;	../COMMON/easyax5043.c:996: axradio_timer.time = axradio_phy_cs_period;
   189A 90 52 86      [24] 7428 	mov	dptr,#_axradio_phy_cs_period
   189D E4            [12] 7429 	clr	a
   189E 93            [24] 7430 	movc	a,@a+dptr
   189F FE            [12] 7431 	mov	r6,a
   18A0 74 01         [12] 7432 	mov	a,#0x01
   18A2 93            [24] 7433 	movc	a,@a+dptr
   18A3 FF            [12] 7434 	mov	r7,a
   18A4 7D 00         [12] 7435 	mov	r5,#0x00
   18A6 7C 00         [12] 7436 	mov	r4,#0x00
   18A8 90 02 8D      [24] 7437 	mov	dptr,#(_axradio_timer + 0x0004)
   18AB EE            [12] 7438 	mov	a,r6
   18AC F0            [24] 7439 	movx	@dptr,a
   18AD EF            [12] 7440 	mov	a,r7
   18AE A3            [24] 7441 	inc	dptr
   18AF F0            [24] 7442 	movx	@dptr,a
   18B0 ED            [12] 7443 	mov	a,r5
   18B1 A3            [24] 7444 	inc	dptr
   18B2 F0            [24] 7445 	movx	@dptr,a
   18B3 EC            [12] 7446 	mov	a,r4
   18B4 A3            [24] 7447 	inc	dptr
   18B5 F0            [24] 7448 	movx	@dptr,a
                     1083  7449 	C$easyax5043.c$997$2$297 ==.
                           7450 ;	../COMMON/easyax5043.c:997: wtimer0_addrelative(&axradio_timer);
   18B6 90 02 89      [24] 7451 	mov	dptr,#_axradio_timer
   18B9 12 43 51      [24] 7452 	lcall	_wtimer0_addrelative
                     1089  7453 	C$easyax5043.c$998$2$297 ==.
                           7454 ;	../COMMON/easyax5043.c:998: chanstatecb:
   18BC                    7455 00109$:
                     1089  7456 	C$easyax5043.c$999$2$297 ==.
                           7457 ;	../COMMON/easyax5043.c:999: update_timeanchor();
   18BC 12 08 33      [24] 7458 	lcall	_update_timeanchor
                     108C  7459 	C$easyax5043.c$1000$2$297 ==.
                           7460 ;	../COMMON/easyax5043.c:1000: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   18BF 90 02 5E      [24] 7461 	mov	dptr,#_axradio_cb_channelstate
   18C2 12 4E DE      [24] 7462 	lcall	_wtimer_remove_callback
                     1092  7463 	C$easyax5043.c$1001$2$297 ==.
                           7464 ;	../COMMON/easyax5043.c:1001: axradio_cb_channelstate.st.error = AXRADIO_ERR_NOERROR;
   18C5 90 02 63      [24] 7465 	mov	dptr,#(_axradio_cb_channelstate + 0x0005)
   18C8 E4            [12] 7466 	clr	a
   18C9 F0            [24] 7467 	movx	@dptr,a
                     1097  7468 	C$easyax5043.c$1003$3$297 ==.
                           7469 ;	../COMMON/easyax5043.c:1003: int8_t __autodata r = AX5043_RSSI;
   18CA 90 40 40      [24] 7470 	mov	dptr,#_AX5043_RSSI
   18CD E0            [24] 7471 	movx	a,@dptr
                     109B  7472 	C$easyax5043.c$1004$3$298 ==.
                           7473 ;	../COMMON/easyax5043.c:1004: axradio_cb_channelstate.st.cs.rssi = r - (int16_t)axradio_phy_rssioffset;
   18CE FF            [12] 7474 	mov	r7,a
   18CF FD            [12] 7475 	mov	r5,a
   18D0 33            [12] 7476 	rlc	a
   18D1 95 E0         [12] 7477 	subb	a,acc
   18D3 FE            [12] 7478 	mov	r6,a
   18D4 90 52 83      [24] 7479 	mov	dptr,#_axradio_phy_rssioffset
   18D7 E4            [12] 7480 	clr	a
   18D8 93            [24] 7481 	movc	a,@a+dptr
   18D9 FC            [12] 7482 	mov	r4,a
   18DA 33            [12] 7483 	rlc	a
   18DB 95 E0         [12] 7484 	subb	a,acc
   18DD FB            [12] 7485 	mov	r3,a
   18DE ED            [12] 7486 	mov	a,r5
   18DF C3            [12] 7487 	clr	c
   18E0 9C            [12] 7488 	subb	a,r4
   18E1 FD            [12] 7489 	mov	r5,a
   18E2 EE            [12] 7490 	mov	a,r6
   18E3 9B            [12] 7491 	subb	a,r3
   18E4 FE            [12] 7492 	mov	r6,a
   18E5 90 02 68      [24] 7493 	mov	dptr,#(_axradio_cb_channelstate + 0x000a)
   18E8 ED            [12] 7494 	mov	a,r5
   18E9 F0            [24] 7495 	movx	@dptr,a
   18EA EE            [12] 7496 	mov	a,r6
   18EB A3            [24] 7497 	inc	dptr
   18EC F0            [24] 7498 	movx	@dptr,a
                     10BA  7499 	C$easyax5043.c$1005$3$298 ==.
                           7500 ;	../COMMON/easyax5043.c:1005: axradio_cb_channelstate.st.cs.busy = r >= axradio_phy_channelbusy;
   18ED 90 52 85      [24] 7501 	mov	dptr,#_axradio_phy_channelbusy
   18F0 E4            [12] 7502 	clr	a
   18F1 93            [24] 7503 	movc	a,@a+dptr
   18F2 FE            [12] 7504 	mov	r6,a
   18F3 C3            [12] 7505 	clr	c
   18F4 EF            [12] 7506 	mov	a,r7
   18F5 64 80         [12] 7507 	xrl	a,#0x80
   18F7 8E F0         [24] 7508 	mov	b,r6
   18F9 63 F0 80      [24] 7509 	xrl	b,#0x80
   18FC 95 F0         [12] 7510 	subb	a,b
   18FE B3            [12] 7511 	cpl	c
   18FF E4            [12] 7512 	clr	a
   1900 33            [12] 7513 	rlc	a
   1901 90 02 6A      [24] 7514 	mov	dptr,#(_axradio_cb_channelstate + 0x000c)
   1904 F0            [24] 7515 	movx	@dptr,a
                     10D2  7516 	C$easyax5043.c$1007$2$297 ==.
                           7517 ;	../COMMON/easyax5043.c:1007: axradio_cb_channelstate.st.time.t = axradio_timeanchor.radiotimer;
   1905 90 00 1A      [24] 7518 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1908 E0            [24] 7519 	movx	a,@dptr
   1909 FC            [12] 7520 	mov	r4,a
   190A A3            [24] 7521 	inc	dptr
   190B E0            [24] 7522 	movx	a,@dptr
   190C FD            [12] 7523 	mov	r5,a
   190D A3            [24] 7524 	inc	dptr
   190E E0            [24] 7525 	movx	a,@dptr
   190F FE            [12] 7526 	mov	r6,a
   1910 A3            [24] 7527 	inc	dptr
   1911 E0            [24] 7528 	movx	a,@dptr
   1912 FF            [12] 7529 	mov	r7,a
   1913 90 02 64      [24] 7530 	mov	dptr,#(_axradio_cb_channelstate + 0x0006)
   1916 EC            [12] 7531 	mov	a,r4
   1917 F0            [24] 7532 	movx	@dptr,a
   1918 ED            [12] 7533 	mov	a,r5
   1919 A3            [24] 7534 	inc	dptr
   191A F0            [24] 7535 	movx	@dptr,a
   191B EE            [12] 7536 	mov	a,r6
   191C A3            [24] 7537 	inc	dptr
   191D F0            [24] 7538 	movx	@dptr,a
   191E EF            [12] 7539 	mov	a,r7
   191F A3            [24] 7540 	inc	dptr
   1920 F0            [24] 7541 	movx	@dptr,a
                     10EE  7542 	C$easyax5043.c$1008$2$297 ==.
                           7543 ;	../COMMON/easyax5043.c:1008: wtimer_add_callback(&axradio_cb_channelstate.cb);
   1921 90 02 5E      [24] 7544 	mov	dptr,#_axradio_cb_channelstate
   1924 12 43 37      [24] 7545 	lcall	_wtimer_add_callback
                     10F4  7546 	C$easyax5043.c$1009$2$297 ==.
                           7547 ;	../COMMON/easyax5043.c:1009: break;
   1927 02 20 6E      [24] 7548 	ljmp	00173$
                     10F7  7549 	C$easyax5043.c$1011$2$297 ==.
                           7550 ;	../COMMON/easyax5043.c:1011: case AXRADIO_MODE_ASYNC_TRANSMIT:
   192A                    7551 00110$:
                     10F7  7552 	C$easyax5043.c$1012$2$297 ==.
                           7553 ;	../COMMON/easyax5043.c:1012: case AXRADIO_MODE_WOR_TRANSMIT:
   192A                    7554 00111$:
                     10F7  7555 	C$easyax5043.c$1013$2$297 ==.
                           7556 ;	../COMMON/easyax5043.c:1013: transmitcs:
   192A                    7557 00112$:
                     10F7  7558 	C$easyax5043.c$1014$2$297 ==.
                           7559 ;	../COMMON/easyax5043.c:1014: if (axradio_ack_count)
   192A 90 00 0E      [24] 7560 	mov	dptr,#_axradio_ack_count
   192D E0            [24] 7561 	movx	a,@dptr
   192E FF            [12] 7562 	mov	r7,a
   192F 60 06         [24] 7563 	jz	00114$
                     10FE  7564 	C$easyax5043.c$1015$2$297 ==.
                           7565 ;	../COMMON/easyax5043.c:1015: --axradio_ack_count;
   1931 EF            [12] 7566 	mov	a,r7
   1932 14            [12] 7567 	dec	a
   1933 90 00 0E      [24] 7568 	mov	dptr,#_axradio_ack_count
   1936 F0            [24] 7569 	movx	@dptr,a
   1937                    7570 00114$:
                     1104  7571 	C$easyax5043.c$1016$2$297 ==.
                           7572 ;	../COMMON/easyax5043.c:1016: wtimer_remove(&axradio_timer);
   1937 90 02 89      [24] 7573 	mov	dptr,#_axradio_timer
   193A 12 4C D4      [24] 7574 	lcall	_wtimer_remove
                     110A  7575 	C$easyax5043.c$1017$2$297 ==.
                           7576 ;	../COMMON/easyax5043.c:1017: if ((int8_t)AX5043_RSSI < axradio_phy_channelbusy ||
   193D 90 40 40      [24] 7577 	mov	dptr,#_AX5043_RSSI
   1940 E0            [24] 7578 	movx	a,@dptr
   1941 FF            [12] 7579 	mov	r7,a
   1942 90 52 85      [24] 7580 	mov	dptr,#_axradio_phy_channelbusy
   1945 E4            [12] 7581 	clr	a
   1946 93            [24] 7582 	movc	a,@a+dptr
   1947 FE            [12] 7583 	mov	r6,a
   1948 C3            [12] 7584 	clr	c
   1949 EF            [12] 7585 	mov	a,r7
   194A 64 80         [12] 7586 	xrl	a,#0x80
   194C 8E F0         [24] 7587 	mov	b,r6
   194E 63 F0 80      [24] 7588 	xrl	b,#0x80
   1951 95 F0         [12] 7589 	subb	a,b
   1953 40 0F         [24] 7590 	jc	00115$
                     1122  7591 	C$easyax5043.c$1018$2$297 ==.
                           7592 ;	../COMMON/easyax5043.c:1018: (!axradio_ack_count && axradio_phy_lbt_forcetx)) {
   1955 90 00 0E      [24] 7593 	mov	dptr,#_axradio_ack_count
   1958 E0            [24] 7594 	movx	a,@dptr
   1959 FF            [12] 7595 	mov	r7,a
   195A 70 25         [24] 7596 	jnz	00116$
   195C 90 52 8A      [24] 7597 	mov	dptr,#_axradio_phy_lbt_forcetx
   195F E4            [12] 7598 	clr	a
   1960 93            [24] 7599 	movc	a,@a+dptr
   1961 FE            [12] 7600 	mov	r6,a
   1962 60 1D         [24] 7601 	jz	00116$
   1964                    7602 00115$:
                     1131  7603 	C$easyax5043.c$1019$3$299 ==.
                           7604 ;	../COMMON/easyax5043.c:1019: axradio_syncstate = syncstate_off;
   1964 90 00 04      [24] 7605 	mov	dptr,#_axradio_syncstate
   1967 E4            [12] 7606 	clr	a
   1968 F0            [24] 7607 	movx	@dptr,a
                     1136  7608 	C$easyax5043.c$1020$3$299 ==.
                           7609 ;	../COMMON/easyax5043.c:1020: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1969 90 52 91      [24] 7610 	mov	dptr,#_axradio_phy_preamble_longlen
   196C E4            [12] 7611 	clr	a
   196D 93            [24] 7612 	movc	a,@a+dptr
   196E FD            [12] 7613 	mov	r5,a
   196F 74 01         [12] 7614 	mov	a,#0x01
   1971 93            [24] 7615 	movc	a,@a+dptr
   1972 FE            [12] 7616 	mov	r6,a
   1973 90 00 07      [24] 7617 	mov	dptr,#_axradio_txbuffer_cnt
   1976 ED            [12] 7618 	mov	a,r5
   1977 F0            [24] 7619 	movx	@dptr,a
   1978 EE            [12] 7620 	mov	a,r6
   1979 A3            [24] 7621 	inc	dptr
   197A F0            [24] 7622 	movx	@dptr,a
                     1148  7623 	C$easyax5043.c$1021$3$299 ==.
                           7624 ;	../COMMON/easyax5043.c:1021: ax5043_prepare_tx();
   197B 12 14 57      [24] 7625 	lcall	_ax5043_prepare_tx
                     114B  7626 	C$easyax5043.c$1022$3$299 ==.
                           7627 ;	../COMMON/easyax5043.c:1022: goto chanstatecb;
   197E 02 18 BC      [24] 7628 	ljmp	00109$
   1981                    7629 00116$:
                     114E  7630 	C$easyax5043.c$1024$2$297 ==.
                           7631 ;	../COMMON/easyax5043.c:1024: if (axradio_ack_count)
   1981 EF            [12] 7632 	mov	a,r7
   1982 60 03         [24] 7633 	jz	00270$
   1984 02 18 9A      [24] 7634 	ljmp	00108$
   1987                    7635 00270$:
                     1154  7636 	C$easyax5043.c$1026$2$297 ==.
                           7637 ;	../COMMON/easyax5043.c:1026: update_timeanchor();
   1987 12 08 33      [24] 7638 	lcall	_update_timeanchor
                     1157  7639 	C$easyax5043.c$1027$2$297 ==.
                           7640 ;	../COMMON/easyax5043.c:1027: axradio_syncstate = syncstate_off;
   198A 90 00 04      [24] 7641 	mov	dptr,#_axradio_syncstate
   198D E4            [12] 7642 	clr	a
   198E F0            [24] 7643 	movx	@dptr,a
                     115C  7644 	C$easyax5043.c$1028$2$297 ==.
                           7645 ;	../COMMON/easyax5043.c:1028: ax5043_off();
   198F 12 14 7D      [24] 7646 	lcall	_ax5043_off
                     115F  7647 	C$easyax5043.c$1029$2$297 ==.
                           7648 ;	../COMMON/easyax5043.c:1029: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1992 90 02 6B      [24] 7649 	mov	dptr,#_axradio_cb_transmitstart
   1995 12 4E DE      [24] 7650 	lcall	_wtimer_remove_callback
                     1165  7651 	C$easyax5043.c$1030$2$297 ==.
                           7652 ;	../COMMON/easyax5043.c:1030: axradio_cb_transmitstart.st.error = AXRADIO_ERR_TIMEOUT;
   1998 90 02 70      [24] 7653 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   199B 74 03         [12] 7654 	mov	a,#0x03
   199D F0            [24] 7655 	movx	@dptr,a
                     116B  7656 	C$easyax5043.c$1031$2$297 ==.
                           7657 ;	../COMMON/easyax5043.c:1031: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   199E 90 00 1A      [24] 7658 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   19A1 E0            [24] 7659 	movx	a,@dptr
   19A2 FC            [12] 7660 	mov	r4,a
   19A3 A3            [24] 7661 	inc	dptr
   19A4 E0            [24] 7662 	movx	a,@dptr
   19A5 FD            [12] 7663 	mov	r5,a
   19A6 A3            [24] 7664 	inc	dptr
   19A7 E0            [24] 7665 	movx	a,@dptr
   19A8 FE            [12] 7666 	mov	r6,a
   19A9 A3            [24] 7667 	inc	dptr
   19AA E0            [24] 7668 	movx	a,@dptr
   19AB FF            [12] 7669 	mov	r7,a
   19AC 90 02 71      [24] 7670 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   19AF EC            [12] 7671 	mov	a,r4
   19B0 F0            [24] 7672 	movx	@dptr,a
   19B1 ED            [12] 7673 	mov	a,r5
   19B2 A3            [24] 7674 	inc	dptr
   19B3 F0            [24] 7675 	movx	@dptr,a
   19B4 EE            [12] 7676 	mov	a,r6
   19B5 A3            [24] 7677 	inc	dptr
   19B6 F0            [24] 7678 	movx	@dptr,a
   19B7 EF            [12] 7679 	mov	a,r7
   19B8 A3            [24] 7680 	inc	dptr
   19B9 F0            [24] 7681 	movx	@dptr,a
                     1187  7682 	C$easyax5043.c$1032$2$297 ==.
                           7683 ;	../COMMON/easyax5043.c:1032: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   19BA 90 02 6B      [24] 7684 	mov	dptr,#_axradio_cb_transmitstart
   19BD 12 43 37      [24] 7685 	lcall	_wtimer_add_callback
                     118D  7686 	C$easyax5043.c$1033$2$297 ==.
                           7687 ;	../COMMON/easyax5043.c:1033: break;
   19C0 02 20 6E      [24] 7688 	ljmp	00173$
                     1190  7689 	C$easyax5043.c$1035$2$297 ==.
                           7690 ;	../COMMON/easyax5043.c:1035: case AXRADIO_MODE_ACK_TRANSMIT:
   19C3                    7691 00121$:
                     1190  7692 	C$easyax5043.c$1036$2$297 ==.
                           7693 ;	../COMMON/easyax5043.c:1036: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   19C3                    7694 00122$:
                     1190  7695 	C$easyax5043.c$1037$2$297 ==.
                           7696 ;	../COMMON/easyax5043.c:1037: if (axradio_syncstate == syncstate_lbt)
   19C3 90 00 04      [24] 7697 	mov	dptr,#_axradio_syncstate
   19C6 E0            [24] 7698 	movx	a,@dptr
   19C7 FF            [12] 7699 	mov	r7,a
   19C8 BF 01 03      [24] 7700 	cjne	r7,#0x01,00271$
   19CB 02 19 2A      [24] 7701 	ljmp	00112$
   19CE                    7702 00271$:
                     119B  7703 	C$easyax5043.c$1039$2$297 ==.
                           7704 ;	../COMMON/easyax5043.c:1039: ax5043_off();
   19CE 12 14 7D      [24] 7705 	lcall	_ax5043_off
                     119E  7706 	C$easyax5043.c$1040$2$297 ==.
                           7707 ;	../COMMON/easyax5043.c:1040: if (!axradio_ack_count) {
   19D1 90 00 0E      [24] 7708 	mov	dptr,#_axradio_ack_count
   19D4 E0            [24] 7709 	movx	a,@dptr
   19D5 FF            [12] 7710 	mov	r7,a
   19D6 70 34         [24] 7711 	jnz	00126$
                     11A5  7712 	C$easyax5043.c$1041$3$300 ==.
                           7713 ;	../COMMON/easyax5043.c:1041: update_timeanchor();
   19D8 12 08 33      [24] 7714 	lcall	_update_timeanchor
                     11A8  7715 	C$easyax5043.c$1042$3$300 ==.
                           7716 ;	../COMMON/easyax5043.c:1042: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   19DB 90 02 75      [24] 7717 	mov	dptr,#_axradio_cb_transmitend
   19DE 12 4E DE      [24] 7718 	lcall	_wtimer_remove_callback
                     11AE  7719 	C$easyax5043.c$1043$3$300 ==.
                           7720 ;	../COMMON/easyax5043.c:1043: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   19E1 90 02 7A      [24] 7721 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   19E4 74 03         [12] 7722 	mov	a,#0x03
   19E6 F0            [24] 7723 	movx	@dptr,a
                     11B4  7724 	C$easyax5043.c$1044$3$300 ==.
                           7725 ;	../COMMON/easyax5043.c:1044: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   19E7 90 00 1A      [24] 7726 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   19EA E0            [24] 7727 	movx	a,@dptr
   19EB FB            [12] 7728 	mov	r3,a
   19EC A3            [24] 7729 	inc	dptr
   19ED E0            [24] 7730 	movx	a,@dptr
   19EE FC            [12] 7731 	mov	r4,a
   19EF A3            [24] 7732 	inc	dptr
   19F0 E0            [24] 7733 	movx	a,@dptr
   19F1 FD            [12] 7734 	mov	r5,a
   19F2 A3            [24] 7735 	inc	dptr
   19F3 E0            [24] 7736 	movx	a,@dptr
   19F4 FE            [12] 7737 	mov	r6,a
   19F5 90 02 7B      [24] 7738 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   19F8 EB            [12] 7739 	mov	a,r3
   19F9 F0            [24] 7740 	movx	@dptr,a
   19FA EC            [12] 7741 	mov	a,r4
   19FB A3            [24] 7742 	inc	dptr
   19FC F0            [24] 7743 	movx	@dptr,a
   19FD ED            [12] 7744 	mov	a,r5
   19FE A3            [24] 7745 	inc	dptr
   19FF F0            [24] 7746 	movx	@dptr,a
   1A00 EE            [12] 7747 	mov	a,r6
   1A01 A3            [24] 7748 	inc	dptr
   1A02 F0            [24] 7749 	movx	@dptr,a
                     11D0  7750 	C$easyax5043.c$1045$3$300 ==.
                           7751 ;	../COMMON/easyax5043.c:1045: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1A03 90 02 75      [24] 7752 	mov	dptr,#_axradio_cb_transmitend
   1A06 12 43 37      [24] 7753 	lcall	_wtimer_add_callback
                     11D6  7754 	C$easyax5043.c$1046$3$300 ==.
                           7755 ;	../COMMON/easyax5043.c:1046: break;
   1A09 02 20 6E      [24] 7756 	ljmp	00173$
   1A0C                    7757 00126$:
                     11D9  7758 	C$easyax5043.c$1048$2$297 ==.
                           7759 ;	../COMMON/easyax5043.c:1048: --axradio_ack_count;
   1A0C EF            [12] 7760 	mov	a,r7
   1A0D 14            [12] 7761 	dec	a
   1A0E 90 00 0E      [24] 7762 	mov	dptr,#_axradio_ack_count
   1A11 F0            [24] 7763 	movx	@dptr,a
                     11DF  7764 	C$easyax5043.c$1049$2$297 ==.
                           7765 ;	../COMMON/easyax5043.c:1049: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A12 90 52 91      [24] 7766 	mov	dptr,#_axradio_phy_preamble_longlen
   1A15 E4            [12] 7767 	clr	a
   1A16 93            [24] 7768 	movc	a,@a+dptr
   1A17 FE            [12] 7769 	mov	r6,a
   1A18 74 01         [12] 7770 	mov	a,#0x01
   1A1A 93            [24] 7771 	movc	a,@a+dptr
   1A1B FF            [12] 7772 	mov	r7,a
   1A1C 90 00 07      [24] 7773 	mov	dptr,#_axradio_txbuffer_cnt
   1A1F EE            [12] 7774 	mov	a,r6
   1A20 F0            [24] 7775 	movx	@dptr,a
   1A21 EF            [12] 7776 	mov	a,r7
   1A22 A3            [24] 7777 	inc	dptr
   1A23 F0            [24] 7778 	movx	@dptr,a
                     11F1  7779 	C$easyax5043.c$1050$2$297 ==.
                           7780 ;	../COMMON/easyax5043.c:1050: ax5043_prepare_tx();
   1A24 12 14 57      [24] 7781 	lcall	_ax5043_prepare_tx
                     11F4  7782 	C$easyax5043.c$1051$2$297 ==.
                           7783 ;	../COMMON/easyax5043.c:1051: break;
   1A27 02 20 6E      [24] 7784 	ljmp	00173$
                     11F7  7785 	C$easyax5043.c$1053$2$297 ==.
                           7786 ;	../COMMON/easyax5043.c:1053: case AXRADIO_MODE_ACK_RECEIVE:
   1A2A                    7787 00127$:
                     11F7  7788 	C$easyax5043.c$1054$2$297 ==.
                           7789 ;	../COMMON/easyax5043.c:1054: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   1A2A                    7790 00128$:
                     11F7  7791 	C$easyax5043.c$1055$2$297 ==.
                           7792 ;	../COMMON/easyax5043.c:1055: if (axradio_syncstate == syncstate_lbt)
   1A2A 90 00 04      [24] 7793 	mov	dptr,#_axradio_syncstate
   1A2D E0            [24] 7794 	movx	a,@dptr
   1A2E FF            [12] 7795 	mov	r7,a
   1A2F BF 01 03      [24] 7796 	cjne	r7,#0x01,00273$
   1A32 02 19 2A      [24] 7797 	ljmp	00112$
   1A35                    7798 00273$:
                     1202  7799 	C$easyax5043.c$1057$2$297 ==.
                           7800 ;	../COMMON/easyax5043.c:1057: transmitack:
   1A35                    7801 00131$:
                     1202  7802 	C$easyax5043.c$1058$2$297 ==.
                           7803 ;	../COMMON/easyax5043.c:1058: AX5043_FIFOSTAT = 3;
   1A35 90 40 28      [24] 7804 	mov	dptr,#_AX5043_FIFOSTAT
   1A38 74 03         [12] 7805 	mov	a,#0x03
   1A3A F0            [24] 7806 	movx	@dptr,a
                     1208  7807 	C$easyax5043.c$1059$2$297 ==.
                           7808 ;	../COMMON/easyax5043.c:1059: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1A3B 90 40 02      [24] 7809 	mov	dptr,#_AX5043_PWRMODE
   1A3E 74 0D         [12] 7810 	mov	a,#0x0D
   1A40 F0            [24] 7811 	movx	@dptr,a
                     120E  7812 	C$easyax5043.c$1060$2$297 ==.
                           7813 ;	../COMMON/easyax5043.c:1060: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1A41                    7814 00132$:
   1A41 90 40 03      [24] 7815 	mov	dptr,#_AX5043_POWSTAT
   1A44 E0            [24] 7816 	movx	a,@dptr
   1A45 FF            [12] 7817 	mov	r7,a
   1A46 30 E3 F8      [24] 7818 	jnb	acc.3,00132$
                     1216  7819 	C$easyax5043.c$1061$2$297 ==.
                           7820 ;	../COMMON/easyax5043.c:1061: ax5043_init_registers_tx();
   1A49 12 08 C9      [24] 7821 	lcall	_ax5043_init_registers_tx
                     1219  7822 	C$easyax5043.c$1062$2$297 ==.
                           7823 ;	../COMMON/easyax5043.c:1062: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1A4C 90 40 0F      [24] 7824 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1A4F E0            [24] 7825 	movx	a,@dptr
                     121D  7826 	C$easyax5043.c$1063$2$297 ==.
                           7827 ;	../COMMON/easyax5043.c:1063: AX5043_FIFOTHRESH1 = 0;
   1A50 90 40 2E      [24] 7828 	mov	dptr,#_AX5043_FIFOTHRESH1
   1A53 E4            [12] 7829 	clr	a
   1A54 F0            [24] 7830 	movx	@dptr,a
                     1222  7831 	C$easyax5043.c$1064$2$297 ==.
                           7832 ;	../COMMON/easyax5043.c:1064: AX5043_FIFOTHRESH0 = 0x80;
   1A55 90 40 2F      [24] 7833 	mov	dptr,#_AX5043_FIFOTHRESH0
   1A58 74 80         [12] 7834 	mov	a,#0x80
   1A5A F0            [24] 7835 	movx	@dptr,a
                     1228  7836 	C$easyax5043.c$1065$2$297 ==.
                           7837 ;	../COMMON/easyax5043.c:1065: axradio_trxstate = trxstate_tx_longpreamble;
   1A5B 75 0B 0A      [24] 7838 	mov	_axradio_trxstate,#0x0A
                     122B  7839 	C$easyax5043.c$1066$2$297 ==.
                           7840 ;	../COMMON/easyax5043.c:1066: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1A5E 90 52 91      [24] 7841 	mov	dptr,#_axradio_phy_preamble_longlen
   1A61 E4            [12] 7842 	clr	a
   1A62 93            [24] 7843 	movc	a,@a+dptr
   1A63 FE            [12] 7844 	mov	r6,a
   1A64 74 01         [12] 7845 	mov	a,#0x01
   1A66 93            [24] 7846 	movc	a,@a+dptr
   1A67 FF            [12] 7847 	mov	r7,a
   1A68 90 00 07      [24] 7848 	mov	dptr,#_axradio_txbuffer_cnt
   1A6B EE            [12] 7849 	mov	a,r6
   1A6C F0            [24] 7850 	movx	@dptr,a
   1A6D EF            [12] 7851 	mov	a,r7
   1A6E A3            [24] 7852 	inc	dptr
   1A6F F0            [24] 7853 	movx	@dptr,a
                     123D  7854 	C$easyax5043.c$1068$2$297 ==.
                           7855 ;	../COMMON/easyax5043.c:1068: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1A70 90 40 10      [24] 7856 	mov	dptr,#_AX5043_MODULATION
   1A73 E0            [24] 7857 	movx	a,@dptr
   1A74 FF            [12] 7858 	mov	r7,a
   1A75 53 07 0F      [24] 7859 	anl	ar7,#0x0F
   1A78 BF 09 0F      [24] 7860 	cjne	r7,#0x09,00136$
                     1248  7861 	C$easyax5043.c$1069$3$301 ==.
                           7862 ;	../COMMON/easyax5043.c:1069: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                     1248  7863 	C$easyax5043.c$1070$3$301 ==.
                           7864 ;	../COMMON/easyax5043.c:1070: AX5043_FIFODATA = 2;  // length (including flags)
                     1248  7865 	C$easyax5043.c$1071$3$301 ==.
                           7866 ;	../COMMON/easyax5043.c:1071: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                     1248  7867 	C$easyax5043.c$1072$3$301 ==.
                           7868 ;	../COMMON/easyax5043.c:1072: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1A7B 90 40 29      [24] 7869 	mov	dptr,#_AX5043_FIFODATA
   1A7E 74 E1         [12] 7870 	mov	a,#0xE1
   1A80 F0            [24] 7871 	movx	@dptr,a
   1A81 74 02         [12] 7872 	mov	a,#0x02
   1A83 F0            [24] 7873 	movx	@dptr,a
   1A84 74 01         [12] 7874 	mov	a,#0x01
   1A86 F0            [24] 7875 	movx	@dptr,a
   1A87 74 11         [12] 7876 	mov	a,#0x11
   1A89 F0            [24] 7877 	movx	@dptr,a
   1A8A                    7878 00136$:
                     1257  7879 	C$easyax5043.c$1079$2$297 ==.
                           7880 ;	../COMMON/easyax5043.c:1079: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1A8A 90 40 07      [24] 7881 	mov	dptr,#_AX5043_IRQMASK0
   1A8D 74 08         [12] 7882 	mov	a,#0x08
   1A8F F0            [24] 7883 	movx	@dptr,a
                     125D  7884 	C$easyax5043.c$1080$2$297 ==.
                           7885 ;	../COMMON/easyax5043.c:1080: update_timeanchor();
   1A90 12 08 33      [24] 7886 	lcall	_update_timeanchor
                     1260  7887 	C$easyax5043.c$1081$2$297 ==.
                           7888 ;	../COMMON/easyax5043.c:1081: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1A93 90 02 6B      [24] 7889 	mov	dptr,#_axradio_cb_transmitstart
   1A96 12 4E DE      [24] 7890 	lcall	_wtimer_remove_callback
                     1266  7891 	C$easyax5043.c$1082$2$297 ==.
                           7892 ;	../COMMON/easyax5043.c:1082: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1A99 90 02 70      [24] 7893 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1A9C E4            [12] 7894 	clr	a
   1A9D F0            [24] 7895 	movx	@dptr,a
                     126B  7896 	C$easyax5043.c$1083$2$297 ==.
                           7897 ;	../COMMON/easyax5043.c:1083: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1A9E 90 00 1A      [24] 7898 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1AA1 E0            [24] 7899 	movx	a,@dptr
   1AA2 FC            [12] 7900 	mov	r4,a
   1AA3 A3            [24] 7901 	inc	dptr
   1AA4 E0            [24] 7902 	movx	a,@dptr
   1AA5 FD            [12] 7903 	mov	r5,a
   1AA6 A3            [24] 7904 	inc	dptr
   1AA7 E0            [24] 7905 	movx	a,@dptr
   1AA8 FE            [12] 7906 	mov	r6,a
   1AA9 A3            [24] 7907 	inc	dptr
   1AAA E0            [24] 7908 	movx	a,@dptr
   1AAB FF            [12] 7909 	mov	r7,a
   1AAC 90 02 71      [24] 7910 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1AAF EC            [12] 7911 	mov	a,r4
   1AB0 F0            [24] 7912 	movx	@dptr,a
   1AB1 ED            [12] 7913 	mov	a,r5
   1AB2 A3            [24] 7914 	inc	dptr
   1AB3 F0            [24] 7915 	movx	@dptr,a
   1AB4 EE            [12] 7916 	mov	a,r6
   1AB5 A3            [24] 7917 	inc	dptr
   1AB6 F0            [24] 7918 	movx	@dptr,a
   1AB7 EF            [12] 7919 	mov	a,r7
   1AB8 A3            [24] 7920 	inc	dptr
   1AB9 F0            [24] 7921 	movx	@dptr,a
                     1287  7922 	C$easyax5043.c$1084$2$297 ==.
                           7923 ;	../COMMON/easyax5043.c:1084: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1ABA 90 02 6B      [24] 7924 	mov	dptr,#_axradio_cb_transmitstart
   1ABD 12 43 37      [24] 7925 	lcall	_wtimer_add_callback
                     128D  7926 	C$easyax5043.c$1085$2$297 ==.
                           7927 ;	../COMMON/easyax5043.c:1085: break;
   1AC0 02 20 6E      [24] 7928 	ljmp	00173$
                     1290  7929 	C$easyax5043.c$1087$2$297 ==.
                           7930 ;	../COMMON/easyax5043.c:1087: case AXRADIO_MODE_SYNC_MASTER:
   1AC3                    7931 00137$:
                     1290  7932 	C$easyax5043.c$1088$2$297 ==.
                           7933 ;	../COMMON/easyax5043.c:1088: case AXRADIO_MODE_SYNC_ACK_MASTER:
   1AC3                    7934 00138$:
                     1290  7935 	C$easyax5043.c$1089$2$297 ==.
                           7936 ;	../COMMON/easyax5043.c:1089: switch (axradio_syncstate) {
   1AC3 90 00 04      [24] 7937 	mov	dptr,#_axradio_syncstate
   1AC6 E0            [24] 7938 	movx	a,@dptr
   1AC7 FF            [12] 7939 	mov	r7,a
   1AC8 BF 04 02      [24] 7940 	cjne	r7,#0x04,00277$
   1ACB 80 5E         [24] 7941 	sjmp	00140$
   1ACD                    7942 00277$:
   1ACD BF 05 03      [24] 7943 	cjne	r7,#0x05,00278$
   1AD0 02 1C 09      [24] 7944 	ljmp	00148$
   1AD3                    7945 00278$:
                     12A0  7946 	C$easyax5043.c$1091$3$302 ==.
                           7947 ;	../COMMON/easyax5043.c:1091: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1AD3 90 40 02      [24] 7948 	mov	dptr,#_AX5043_PWRMODE
   1AD6 74 05         [12] 7949 	mov	a,#0x05
   1AD8 F0            [24] 7950 	movx	@dptr,a
                     12A6  7951 	C$easyax5043.c$1092$3$302 ==.
                           7952 ;	../COMMON/easyax5043.c:1092: ax5043_init_registers_tx();
   1AD9 12 08 C9      [24] 7953 	lcall	_ax5043_init_registers_tx
                     12A9  7954 	C$easyax5043.c$1093$3$302 ==.
                           7955 ;	../COMMON/easyax5043.c:1093: axradio_syncstate = syncstate_master_xostartup;
   1ADC 90 00 04      [24] 7956 	mov	dptr,#_axradio_syncstate
   1ADF 74 04         [12] 7957 	mov	a,#0x04
   1AE1 F0            [24] 7958 	movx	@dptr,a
                     12AF  7959 	C$easyax5043.c$1094$3$302 ==.
                           7960 ;	../COMMON/easyax5043.c:1094: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   1AE2 90 02 7F      [24] 7961 	mov	dptr,#_axradio_cb_transmitdata
   1AE5 12 4E DE      [24] 7962 	lcall	_wtimer_remove_callback
                     12B5  7963 	C$easyax5043.c$1095$3$302 ==.
                           7964 ;	../COMMON/easyax5043.c:1095: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   1AE8 90 02 84      [24] 7965 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
                     12B8  7966 	C$easyax5043.c$1096$3$302 ==.
                           7967 ;	../COMMON/easyax5043.c:1096: axradio_cb_transmitdata.st.time.t = 0;
   1AEB E4            [12] 7968 	clr	a
   1AEC F0            [24] 7969 	movx	@dptr,a
   1AED 90 02 85      [24] 7970 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   1AF0 F0            [24] 7971 	movx	@dptr,a
   1AF1 E4            [12] 7972 	clr	a
   1AF2 A3            [24] 7973 	inc	dptr
   1AF3 F0            [24] 7974 	movx	@dptr,a
   1AF4 E4            [12] 7975 	clr	a
   1AF5 A3            [24] 7976 	inc	dptr
   1AF6 F0            [24] 7977 	movx	@dptr,a
   1AF7 E4            [12] 7978 	clr	a
   1AF8 A3            [24] 7979 	inc	dptr
   1AF9 F0            [24] 7980 	movx	@dptr,a
                     12C7  7981 	C$easyax5043.c$1097$3$302 ==.
                           7982 ;	../COMMON/easyax5043.c:1097: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   1AFA 90 02 7F      [24] 7983 	mov	dptr,#_axradio_cb_transmitdata
   1AFD 12 43 37      [24] 7984 	lcall	_wtimer_add_callback
                     12CD  7985 	C$easyax5043.c$1098$3$302 ==.
                           7986 ;	../COMMON/easyax5043.c:1098: wtimer_remove(&axradio_timer);
   1B00 90 02 89      [24] 7987 	mov	dptr,#_axradio_timer
   1B03 12 4C D4      [24] 7988 	lcall	_wtimer_remove
                     12D3  7989 	C$easyax5043.c$1099$3$302 ==.
                           7990 ;	../COMMON/easyax5043.c:1099: axradio_timer.time = axradio_sync_time;
   1B06 90 00 10      [24] 7991 	mov	dptr,#_axradio_sync_time
   1B09 E0            [24] 7992 	movx	a,@dptr
   1B0A FC            [12] 7993 	mov	r4,a
   1B0B A3            [24] 7994 	inc	dptr
   1B0C E0            [24] 7995 	movx	a,@dptr
   1B0D FD            [12] 7996 	mov	r5,a
   1B0E A3            [24] 7997 	inc	dptr
   1B0F E0            [24] 7998 	movx	a,@dptr
   1B10 FE            [12] 7999 	mov	r6,a
   1B11 A3            [24] 8000 	inc	dptr
   1B12 E0            [24] 8001 	movx	a,@dptr
   1B13 FF            [12] 8002 	mov	r7,a
   1B14 90 02 8D      [24] 8003 	mov	dptr,#(_axradio_timer + 0x0004)
   1B17 EC            [12] 8004 	mov	a,r4
   1B18 F0            [24] 8005 	movx	@dptr,a
   1B19 ED            [12] 8006 	mov	a,r5
   1B1A A3            [24] 8007 	inc	dptr
   1B1B F0            [24] 8008 	movx	@dptr,a
   1B1C EE            [12] 8009 	mov	a,r6
   1B1D A3            [24] 8010 	inc	dptr
   1B1E F0            [24] 8011 	movx	@dptr,a
   1B1F EF            [12] 8012 	mov	a,r7
   1B20 A3            [24] 8013 	inc	dptr
   1B21 F0            [24] 8014 	movx	@dptr,a
                     12EF  8015 	C$easyax5043.c$1100$3$302 ==.
                           8016 ;	../COMMON/easyax5043.c:1100: wtimer0_addabsolute(&axradio_timer);
   1B22 90 02 89      [24] 8017 	mov	dptr,#_axradio_timer
   1B25 12 44 64      [24] 8018 	lcall	_wtimer0_addabsolute
                     12F5  8019 	C$easyax5043.c$1101$3$302 ==.
                           8020 ;	../COMMON/easyax5043.c:1101: break;
   1B28 02 20 6E      [24] 8021 	ljmp	00173$
                     12F8  8022 	C$easyax5043.c$1103$3$302 ==.
                           8023 ;	../COMMON/easyax5043.c:1103: case syncstate_master_xostartup:
   1B2B                    8024 00140$:
                     12F8  8025 	C$easyax5043.c$1104$3$302 ==.
                           8026 ;	../COMMON/easyax5043.c:1104: AX5043_FIFOSTAT = 3;
   1B2B 90 40 28      [24] 8027 	mov	dptr,#_AX5043_FIFOSTAT
   1B2E 74 03         [12] 8028 	mov	a,#0x03
   1B30 F0            [24] 8029 	movx	@dptr,a
                     12FE  8030 	C$easyax5043.c$1105$3$302 ==.
                           8031 ;	../COMMON/easyax5043.c:1105: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_TX;
   1B31 90 40 02      [24] 8032 	mov	dptr,#_AX5043_PWRMODE
   1B34 74 0D         [12] 8033 	mov	a,#0x0D
   1B36 F0            [24] 8034 	movx	@dptr,a
                     1304  8035 	C$easyax5043.c$1106$3$302 ==.
                           8036 ;	../COMMON/easyax5043.c:1106: while (!(AX5043_POWSTAT & 0x08)); // wait for modem vdd so writing the FIFO is safe
   1B37                    8037 00141$:
   1B37 90 40 03      [24] 8038 	mov	dptr,#_AX5043_POWSTAT
   1B3A E0            [24] 8039 	movx	a,@dptr
   1B3B FF            [12] 8040 	mov	r7,a
   1B3C 30 E3 F8      [24] 8041 	jnb	acc.3,00141$
                     130C  8042 	C$easyax5043.c$1107$3$302 ==.
                           8043 ;	../COMMON/easyax5043.c:1107: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   1B3F 90 40 0F      [24] 8044 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   1B42 E0            [24] 8045 	movx	a,@dptr
                     1310  8046 	C$easyax5043.c$1108$3$302 ==.
                           8047 ;	../COMMON/easyax5043.c:1108: AX5043_FIFOTHRESH1 = 0;
   1B43 90 40 2E      [24] 8048 	mov	dptr,#_AX5043_FIFOTHRESH1
   1B46 E4            [12] 8049 	clr	a
   1B47 F0            [24] 8050 	movx	@dptr,a
                     1315  8051 	C$easyax5043.c$1109$3$302 ==.
                           8052 ;	../COMMON/easyax5043.c:1109: AX5043_FIFOTHRESH0 = 0x80;
   1B48 90 40 2F      [24] 8053 	mov	dptr,#_AX5043_FIFOTHRESH0
   1B4B 74 80         [12] 8054 	mov	a,#0x80
   1B4D F0            [24] 8055 	movx	@dptr,a
                     131B  8056 	C$easyax5043.c$1110$3$302 ==.
                           8057 ;	../COMMON/easyax5043.c:1110: axradio_trxstate = trxstate_tx_longpreamble;
   1B4E 75 0B 0A      [24] 8058 	mov	_axradio_trxstate,#0x0A
                     131E  8059 	C$easyax5043.c$1111$3$302 ==.
                           8060 ;	../COMMON/easyax5043.c:1111: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   1B51 90 52 91      [24] 8061 	mov	dptr,#_axradio_phy_preamble_longlen
   1B54 E4            [12] 8062 	clr	a
   1B55 93            [24] 8063 	movc	a,@a+dptr
   1B56 FE            [12] 8064 	mov	r6,a
   1B57 74 01         [12] 8065 	mov	a,#0x01
   1B59 93            [24] 8066 	movc	a,@a+dptr
   1B5A FF            [12] 8067 	mov	r7,a
   1B5B 90 00 07      [24] 8068 	mov	dptr,#_axradio_txbuffer_cnt
   1B5E EE            [12] 8069 	mov	a,r6
   1B5F F0            [24] 8070 	movx	@dptr,a
   1B60 EF            [12] 8071 	mov	a,r7
   1B61 A3            [24] 8072 	inc	dptr
   1B62 F0            [24] 8073 	movx	@dptr,a
                     1330  8074 	C$easyax5043.c$1113$3$302 ==.
                           8075 ;	../COMMON/easyax5043.c:1113: if ((AX5043_MODULATION & 0x0F) == 9) { // 4-FSK
   1B63 90 40 10      [24] 8076 	mov	dptr,#_AX5043_MODULATION
   1B66 E0            [24] 8077 	movx	a,@dptr
   1B67 FF            [12] 8078 	mov	r7,a
   1B68 53 07 0F      [24] 8079 	anl	ar7,#0x0F
   1B6B BF 09 0F      [24] 8080 	cjne	r7,#0x09,00145$
                     133B  8081 	C$easyax5043.c$1114$4$303 ==.
                           8082 ;	../COMMON/easyax5043.c:1114: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                     133B  8083 	C$easyax5043.c$1115$4$303 ==.
                           8084 ;	../COMMON/easyax5043.c:1115: AX5043_FIFODATA = 2;  // length (including flags)
                     133B  8085 	C$easyax5043.c$1116$4$303 ==.
                           8086 ;	../COMMON/easyax5043.c:1116: AX5043_FIFODATA = 0x01;  // flag PKTSTART -> dibit sync
                     133B  8087 	C$easyax5043.c$1117$4$303 ==.
                           8088 ;	../COMMON/easyax5043.c:1117: AX5043_FIFODATA = 0x11; // dummy byte for forcing dibit sync
   1B6E 90 40 29      [24] 8089 	mov	dptr,#_AX5043_FIFODATA
   1B71 74 E1         [12] 8090 	mov	a,#0xE1
   1B73 F0            [24] 8091 	movx	@dptr,a
   1B74 74 02         [12] 8092 	mov	a,#0x02
   1B76 F0            [24] 8093 	movx	@dptr,a
   1B77 74 01         [12] 8094 	mov	a,#0x01
   1B79 F0            [24] 8095 	movx	@dptr,a
   1B7A 74 11         [12] 8096 	mov	a,#0x11
   1B7C F0            [24] 8097 	movx	@dptr,a
   1B7D                    8098 00145$:
                     134A  8099 	C$easyax5043.c$1124$3$302 ==.
                           8100 ;	../COMMON/easyax5043.c:1124: wtimer_remove(&axradio_timer);
   1B7D 90 02 89      [24] 8101 	mov	dptr,#_axradio_timer
   1B80 12 4C D4      [24] 8102 	lcall	_wtimer_remove
                     1350  8103 	C$easyax5043.c$1125$3$302 ==.
                           8104 ;	../COMMON/easyax5043.c:1125: update_timeanchor();
   1B83 12 08 33      [24] 8105 	lcall	_update_timeanchor
                     1353  8106 	C$easyax5043.c$1126$3$302 ==.
                           8107 ;	../COMMON/easyax5043.c:1126: AX5043_IRQMASK0 = 0x08; // enable fifo free threshold
   1B86 90 40 07      [24] 8108 	mov	dptr,#_AX5043_IRQMASK0
   1B89 74 08         [12] 8109 	mov	a,#0x08
   1B8B F0            [24] 8110 	movx	@dptr,a
                     1359  8111 	C$easyax5043.c$1127$3$302 ==.
                           8112 ;	../COMMON/easyax5043.c:1127: axradio_sync_addtime(axradio_sync_period);
   1B8C 90 52 B5      [24] 8113 	mov	dptr,#_axradio_sync_period
   1B8F E4            [12] 8114 	clr	a
   1B90 93            [24] 8115 	movc	a,@a+dptr
   1B91 FC            [12] 8116 	mov	r4,a
   1B92 74 01         [12] 8117 	mov	a,#0x01
   1B94 93            [24] 8118 	movc	a,@a+dptr
   1B95 FD            [12] 8119 	mov	r5,a
   1B96 74 02         [12] 8120 	mov	a,#0x02
   1B98 93            [24] 8121 	movc	a,@a+dptr
   1B99 FE            [12] 8122 	mov	r6,a
   1B9A 74 03         [12] 8123 	mov	a,#0x03
   1B9C 93            [24] 8124 	movc	a,@a+dptr
   1B9D 8C 82         [24] 8125 	mov	dpl,r4
   1B9F 8D 83         [24] 8126 	mov	dph,r5
   1BA1 8E F0         [24] 8127 	mov	b,r6
   1BA3 12 16 1D      [24] 8128 	lcall	_axradio_sync_addtime
                     1373  8129 	C$easyax5043.c$1128$3$302 ==.
                           8130 ;	../COMMON/easyax5043.c:1128: axradio_syncstate = syncstate_master_waitack;
   1BA6 90 00 04      [24] 8131 	mov	dptr,#_axradio_syncstate
   1BA9 74 05         [12] 8132 	mov	a,#0x05
   1BAB F0            [24] 8133 	movx	@dptr,a
                     1379  8134 	C$easyax5043.c$1129$3$302 ==.
                           8135 ;	../COMMON/easyax5043.c:1129: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_MASTER) {
   1BAC 74 21         [12] 8136 	mov	a,#0x21
   1BAE B5 0A 02      [24] 8137 	cjne	a,_axradio_mode,00282$
   1BB1 80 26         [24] 8138 	sjmp	00147$
   1BB3                    8139 00282$:
                     1380  8140 	C$easyax5043.c$1130$4$304 ==.
                           8141 ;	../COMMON/easyax5043.c:1130: axradio_syncstate = syncstate_master_normal;
   1BB3 90 00 04      [24] 8142 	mov	dptr,#_axradio_syncstate
   1BB6 74 03         [12] 8143 	mov	a,#0x03
   1BB8 F0            [24] 8144 	movx	@dptr,a
                     1386  8145 	C$easyax5043.c$1131$4$304 ==.
                           8146 ;	../COMMON/easyax5043.c:1131: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1BB9 90 52 B9      [24] 8147 	mov	dptr,#_axradio_sync_xoscstartup
   1BBC E4            [12] 8148 	clr	a
   1BBD 93            [24] 8149 	movc	a,@a+dptr
   1BBE FC            [12] 8150 	mov	r4,a
   1BBF 74 01         [12] 8151 	mov	a,#0x01
   1BC1 93            [24] 8152 	movc	a,@a+dptr
   1BC2 FD            [12] 8153 	mov	r5,a
   1BC3 74 02         [12] 8154 	mov	a,#0x02
   1BC5 93            [24] 8155 	movc	a,@a+dptr
   1BC6 FE            [12] 8156 	mov	r6,a
   1BC7 74 03         [12] 8157 	mov	a,#0x03
   1BC9 93            [24] 8158 	movc	a,@a+dptr
   1BCA 8C 82         [24] 8159 	mov	dpl,r4
   1BCC 8D 83         [24] 8160 	mov	dph,r5
   1BCE 8E F0         [24] 8161 	mov	b,r6
   1BD0 12 16 6E      [24] 8162 	lcall	_axradio_sync_settimeradv
                     13A0  8163 	C$easyax5043.c$1132$4$304 ==.
                           8164 ;	../COMMON/easyax5043.c:1132: wtimer0_addabsolute(&axradio_timer);
   1BD3 90 02 89      [24] 8165 	mov	dptr,#_axradio_timer
   1BD6 12 44 64      [24] 8166 	lcall	_wtimer0_addabsolute
   1BD9                    8167 00147$:
                     13A6  8168 	C$easyax5043.c$1134$3$302 ==.
                           8169 ;	../COMMON/easyax5043.c:1134: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   1BD9 90 02 6B      [24] 8170 	mov	dptr,#_axradio_cb_transmitstart
   1BDC 12 4E DE      [24] 8171 	lcall	_wtimer_remove_callback
                     13AC  8172 	C$easyax5043.c$1135$3$302 ==.
                           8173 ;	../COMMON/easyax5043.c:1135: axradio_cb_transmitstart.st.error = AXRADIO_ERR_NOERROR;
   1BDF 90 02 70      [24] 8174 	mov	dptr,#(_axradio_cb_transmitstart + 0x0005)
   1BE2 E4            [12] 8175 	clr	a
   1BE3 F0            [24] 8176 	movx	@dptr,a
                     13B1  8177 	C$easyax5043.c$1136$3$302 ==.
                           8178 ;	../COMMON/easyax5043.c:1136: axradio_cb_transmitstart.st.time.t = axradio_timeanchor.radiotimer;
   1BE4 90 00 1A      [24] 8179 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1BE7 E0            [24] 8180 	movx	a,@dptr
   1BE8 FC            [12] 8181 	mov	r4,a
   1BE9 A3            [24] 8182 	inc	dptr
   1BEA E0            [24] 8183 	movx	a,@dptr
   1BEB FD            [12] 8184 	mov	r5,a
   1BEC A3            [24] 8185 	inc	dptr
   1BED E0            [24] 8186 	movx	a,@dptr
   1BEE FE            [12] 8187 	mov	r6,a
   1BEF A3            [24] 8188 	inc	dptr
   1BF0 E0            [24] 8189 	movx	a,@dptr
   1BF1 FF            [12] 8190 	mov	r7,a
   1BF2 90 02 71      [24] 8191 	mov	dptr,#(_axradio_cb_transmitstart + 0x0006)
   1BF5 EC            [12] 8192 	mov	a,r4
   1BF6 F0            [24] 8193 	movx	@dptr,a
   1BF7 ED            [12] 8194 	mov	a,r5
   1BF8 A3            [24] 8195 	inc	dptr
   1BF9 F0            [24] 8196 	movx	@dptr,a
   1BFA EE            [12] 8197 	mov	a,r6
   1BFB A3            [24] 8198 	inc	dptr
   1BFC F0            [24] 8199 	movx	@dptr,a
   1BFD EF            [12] 8200 	mov	a,r7
   1BFE A3            [24] 8201 	inc	dptr
   1BFF F0            [24] 8202 	movx	@dptr,a
                     13CD  8203 	C$easyax5043.c$1137$3$302 ==.
                           8204 ;	../COMMON/easyax5043.c:1137: wtimer_add_callback(&axradio_cb_transmitstart.cb);
   1C00 90 02 6B      [24] 8205 	mov	dptr,#_axradio_cb_transmitstart
   1C03 12 43 37      [24] 8206 	lcall	_wtimer_add_callback
                     13D3  8207 	C$easyax5043.c$1138$3$302 ==.
                           8208 ;	../COMMON/easyax5043.c:1138: break;
   1C06 02 20 6E      [24] 8209 	ljmp	00173$
                     13D6  8210 	C$easyax5043.c$1140$3$302 ==.
                           8211 ;	../COMMON/easyax5043.c:1140: case syncstate_master_waitack:
   1C09                    8212 00148$:
                     13D6  8213 	C$easyax5043.c$1141$3$302 ==.
                           8214 ;	../COMMON/easyax5043.c:1141: ax5043_off();
   1C09 12 14 7D      [24] 8215 	lcall	_ax5043_off
                     13D9  8216 	C$easyax5043.c$1142$3$302 ==.
                           8217 ;	../COMMON/easyax5043.c:1142: axradio_syncstate = syncstate_master_normal;
   1C0C 90 00 04      [24] 8218 	mov	dptr,#_axradio_syncstate
   1C0F 74 03         [12] 8219 	mov	a,#0x03
   1C11 F0            [24] 8220 	movx	@dptr,a
                     13DF  8221 	C$easyax5043.c$1143$3$302 ==.
                           8222 ;	../COMMON/easyax5043.c:1143: wtimer_remove(&axradio_timer);
   1C12 90 02 89      [24] 8223 	mov	dptr,#_axradio_timer
   1C15 12 4C D4      [24] 8224 	lcall	_wtimer_remove
                     13E5  8225 	C$easyax5043.c$1144$3$302 ==.
                           8226 ;	../COMMON/easyax5043.c:1144: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   1C18 90 52 B9      [24] 8227 	mov	dptr,#_axradio_sync_xoscstartup
   1C1B E4            [12] 8228 	clr	a
   1C1C 93            [24] 8229 	movc	a,@a+dptr
   1C1D FC            [12] 8230 	mov	r4,a
   1C1E 74 01         [12] 8231 	mov	a,#0x01
   1C20 93            [24] 8232 	movc	a,@a+dptr
   1C21 FD            [12] 8233 	mov	r5,a
   1C22 74 02         [12] 8234 	mov	a,#0x02
   1C24 93            [24] 8235 	movc	a,@a+dptr
   1C25 FE            [12] 8236 	mov	r6,a
   1C26 74 03         [12] 8237 	mov	a,#0x03
   1C28 93            [24] 8238 	movc	a,@a+dptr
   1C29 8C 82         [24] 8239 	mov	dpl,r4
   1C2B 8D 83         [24] 8240 	mov	dph,r5
   1C2D 8E F0         [24] 8241 	mov	b,r6
   1C2F 12 16 6E      [24] 8242 	lcall	_axradio_sync_settimeradv
                     13FF  8243 	C$easyax5043.c$1145$3$302 ==.
                           8244 ;	../COMMON/easyax5043.c:1145: wtimer0_addabsolute(&axradio_timer);
   1C32 90 02 89      [24] 8245 	mov	dptr,#_axradio_timer
   1C35 12 44 64      [24] 8246 	lcall	_wtimer0_addabsolute
                     1405  8247 	C$easyax5043.c$1146$3$302 ==.
                           8248 ;	../COMMON/easyax5043.c:1146: update_timeanchor();
   1C38 12 08 33      [24] 8249 	lcall	_update_timeanchor
                     1408  8250 	C$easyax5043.c$1147$3$302 ==.
                           8251 ;	../COMMON/easyax5043.c:1147: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   1C3B 90 02 75      [24] 8252 	mov	dptr,#_axradio_cb_transmitend
   1C3E 12 4E DE      [24] 8253 	lcall	_wtimer_remove_callback
                     140E  8254 	C$easyax5043.c$1148$3$302 ==.
                           8255 ;	../COMMON/easyax5043.c:1148: axradio_cb_transmitend.st.error = AXRADIO_ERR_TIMEOUT;
   1C41 90 02 7A      [24] 8256 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   1C44 74 03         [12] 8257 	mov	a,#0x03
   1C46 F0            [24] 8258 	movx	@dptr,a
                     1414  8259 	C$easyax5043.c$1149$3$302 ==.
                           8260 ;	../COMMON/easyax5043.c:1149: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   1C47 90 00 1A      [24] 8261 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1C4A E0            [24] 8262 	movx	a,@dptr
   1C4B FC            [12] 8263 	mov	r4,a
   1C4C A3            [24] 8264 	inc	dptr
   1C4D E0            [24] 8265 	movx	a,@dptr
   1C4E FD            [12] 8266 	mov	r5,a
   1C4F A3            [24] 8267 	inc	dptr
   1C50 E0            [24] 8268 	movx	a,@dptr
   1C51 FE            [12] 8269 	mov	r6,a
   1C52 A3            [24] 8270 	inc	dptr
   1C53 E0            [24] 8271 	movx	a,@dptr
   1C54 FF            [12] 8272 	mov	r7,a
   1C55 90 02 7B      [24] 8273 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   1C58 EC            [12] 8274 	mov	a,r4
   1C59 F0            [24] 8275 	movx	@dptr,a
   1C5A ED            [12] 8276 	mov	a,r5
   1C5B A3            [24] 8277 	inc	dptr
   1C5C F0            [24] 8278 	movx	@dptr,a
   1C5D EE            [12] 8279 	mov	a,r6
   1C5E A3            [24] 8280 	inc	dptr
   1C5F F0            [24] 8281 	movx	@dptr,a
   1C60 EF            [12] 8282 	mov	a,r7
   1C61 A3            [24] 8283 	inc	dptr
   1C62 F0            [24] 8284 	movx	@dptr,a
                     1430  8285 	C$easyax5043.c$1150$3$302 ==.
                           8286 ;	../COMMON/easyax5043.c:1150: wtimer_add_callback(&axradio_cb_transmitend.cb);
   1C63 90 02 75      [24] 8287 	mov	dptr,#_axradio_cb_transmitend
   1C66 12 43 37      [24] 8288 	lcall	_wtimer_add_callback
                     1436  8289 	C$easyax5043.c$1153$2$297 ==.
                           8290 ;	../COMMON/easyax5043.c:1153: break;
   1C69 02 20 6E      [24] 8291 	ljmp	00173$
                     1439  8292 	C$easyax5043.c$1155$2$297 ==.
                           8293 ;	../COMMON/easyax5043.c:1155: case AXRADIO_MODE_SYNC_SLAVE:
   1C6C                    8294 00150$:
                     1439  8295 	C$easyax5043.c$1156$2$297 ==.
                           8296 ;	../COMMON/easyax5043.c:1156: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   1C6C                    8297 00151$:
                     1439  8298 	C$easyax5043.c$1157$2$297 ==.
                           8299 ;	../COMMON/easyax5043.c:1157: switch (axradio_syncstate) {
   1C6C 90 00 04      [24] 8300 	mov	dptr,#_axradio_syncstate
   1C6F E0            [24] 8301 	movx	a,@dptr
   1C70 FF            [12] 8302 	mov  r7,a
   1C71 24 F3         [12] 8303 	add	a,#0xff - 0x0C
   1C73 50 03         [24] 8304 	jnc	00283$
   1C75 02 1C A3      [24] 8305 	ljmp	00153$
   1C78                    8306 00283$:
   1C78 EF            [12] 8307 	mov	a,r7
   1C79 F5 F0         [12] 8308 	mov	b,a
   1C7B 24 0B         [12] 8309 	add	a,#(00284$-3-.)
   1C7D 83            [24] 8310 	movc	a,@a+pc
   1C7E F5 82         [12] 8311 	mov	dpl,a
   1C80 E5 F0         [12] 8312 	mov	a,b
   1C82 24 11         [12] 8313 	add	a,#(00285$-3-.)
   1C84 83            [24] 8314 	movc	a,@a+pc
   1C85 F5 83         [12] 8315 	mov	dph,a
   1C87 E4            [12] 8316 	clr	a
   1C88 73            [24] 8317 	jmp	@a+dptr
   1C89                    8318 00284$:
   1C89 A3                 8319 	.db	00152$
   1C8A A3                 8320 	.db	00152$
   1C8B A3                 8321 	.db	00152$
   1C8C A3                 8322 	.db	00152$
   1C8D A3                 8323 	.db	00152$
   1C8E A3                 8324 	.db	00152$
   1C8F A3                 8325 	.db	00153$
   1C90 31                 8326 	.db	00154$
   1C91 C2                 8327 	.db	00155$
   1C92 17                 8328 	.db	00156$
   1C93 CB                 8329 	.db	00159$
   1C94 26                 8330 	.db	00162$
   1C95 3F                 8331 	.db	00169$
   1C96                    8332 00285$:
   1C96 1C                 8333 	.db	00152$>>8
   1C97 1C                 8334 	.db	00152$>>8
   1C98 1C                 8335 	.db	00152$>>8
   1C99 1C                 8336 	.db	00152$>>8
   1C9A 1C                 8337 	.db	00152$>>8
   1C9B 1C                 8338 	.db	00152$>>8
   1C9C 1C                 8339 	.db	00153$>>8
   1C9D 1D                 8340 	.db	00154$>>8
   1C9E 1D                 8341 	.db	00155$>>8
   1C9F 1E                 8342 	.db	00156$>>8
   1CA0 1E                 8343 	.db	00159$>>8
   1CA1 1F                 8344 	.db	00162$>>8
   1CA2 20                 8345 	.db	00169$>>8
                     1470  8346 	C$easyax5043.c$1158$3$305 ==.
                           8347 ;	../COMMON/easyax5043.c:1158: default:
   1CA3                    8348 00152$:
                     1470  8349 	C$easyax5043.c$1159$3$305 ==.
                           8350 ;	../COMMON/easyax5043.c:1159: case syncstate_slave_synchunt:
   1CA3                    8351 00153$:
                     1470  8352 	C$easyax5043.c$1160$3$305 ==.
                           8353 ;	../COMMON/easyax5043.c:1160: ax5043_off();
   1CA3 12 14 7D      [24] 8354 	lcall	_ax5043_off
                     1473  8355 	C$easyax5043.c$1161$3$305 ==.
                           8356 ;	../COMMON/easyax5043.c:1161: axradio_syncstate = syncstate_slave_syncpause;
   1CA6 90 00 04      [24] 8357 	mov	dptr,#_axradio_syncstate
   1CA9 74 07         [12] 8358 	mov	a,#0x07
   1CAB F0            [24] 8359 	movx	@dptr,a
                     1479  8360 	C$easyax5043.c$1162$3$305 ==.
                           8361 ;	../COMMON/easyax5043.c:1162: axradio_sync_addtime(axradio_sync_slave_syncpause);
   1CAC 90 52 C5      [24] 8362 	mov	dptr,#_axradio_sync_slave_syncpause
   1CAF E4            [12] 8363 	clr	a
   1CB0 93            [24] 8364 	movc	a,@a+dptr
   1CB1 FC            [12] 8365 	mov	r4,a
   1CB2 74 01         [12] 8366 	mov	a,#0x01
   1CB4 93            [24] 8367 	movc	a,@a+dptr
   1CB5 FD            [12] 8368 	mov	r5,a
   1CB6 74 02         [12] 8369 	mov	a,#0x02
   1CB8 93            [24] 8370 	movc	a,@a+dptr
   1CB9 FE            [12] 8371 	mov	r6,a
   1CBA 74 03         [12] 8372 	mov	a,#0x03
   1CBC 93            [24] 8373 	movc	a,@a+dptr
   1CBD 8C 82         [24] 8374 	mov	dpl,r4
   1CBF 8D 83         [24] 8375 	mov	dph,r5
   1CC1 8E F0         [24] 8376 	mov	b,r6
   1CC3 12 16 1D      [24] 8377 	lcall	_axradio_sync_addtime
                     1493  8378 	C$easyax5043.c$1163$3$305 ==.
                           8379 ;	../COMMON/easyax5043.c:1163: wtimer_remove(&axradio_timer);
   1CC6 90 02 89      [24] 8380 	mov	dptr,#_axradio_timer
   1CC9 12 4C D4      [24] 8381 	lcall	_wtimer_remove
                     1499  8382 	C$easyax5043.c$1164$3$305 ==.
                           8383 ;	../COMMON/easyax5043.c:1164: axradio_timer.time = axradio_sync_time;
   1CCC 90 00 10      [24] 8384 	mov	dptr,#_axradio_sync_time
   1CCF E0            [24] 8385 	movx	a,@dptr
   1CD0 FC            [12] 8386 	mov	r4,a
   1CD1 A3            [24] 8387 	inc	dptr
   1CD2 E0            [24] 8388 	movx	a,@dptr
   1CD3 FD            [12] 8389 	mov	r5,a
   1CD4 A3            [24] 8390 	inc	dptr
   1CD5 E0            [24] 8391 	movx	a,@dptr
   1CD6 FE            [12] 8392 	mov	r6,a
   1CD7 A3            [24] 8393 	inc	dptr
   1CD8 E0            [24] 8394 	movx	a,@dptr
   1CD9 FF            [12] 8395 	mov	r7,a
   1CDA 90 02 8D      [24] 8396 	mov	dptr,#(_axradio_timer + 0x0004)
   1CDD EC            [12] 8397 	mov	a,r4
   1CDE F0            [24] 8398 	movx	@dptr,a
   1CDF ED            [12] 8399 	mov	a,r5
   1CE0 A3            [24] 8400 	inc	dptr
   1CE1 F0            [24] 8401 	movx	@dptr,a
   1CE2 EE            [12] 8402 	mov	a,r6
   1CE3 A3            [24] 8403 	inc	dptr
   1CE4 F0            [24] 8404 	movx	@dptr,a
   1CE5 EF            [12] 8405 	mov	a,r7
   1CE6 A3            [24] 8406 	inc	dptr
   1CE7 F0            [24] 8407 	movx	@dptr,a
                     14B5  8408 	C$easyax5043.c$1165$3$305 ==.
                           8409 ;	../COMMON/easyax5043.c:1165: wtimer0_addabsolute(&axradio_timer);
   1CE8 90 02 89      [24] 8410 	mov	dptr,#_axradio_timer
   1CEB 12 44 64      [24] 8411 	lcall	_wtimer0_addabsolute
                     14BB  8412 	C$easyax5043.c$1166$3$305 ==.
                           8413 ;	../COMMON/easyax5043.c:1166: wtimer_remove_callback(&axradio_cb_receive.cb);
   1CEE 90 02 32      [24] 8414 	mov	dptr,#_axradio_cb_receive
   1CF1 12 4E DE      [24] 8415 	lcall	_wtimer_remove_callback
                     14C1  8416 	C$easyax5043.c$1167$3$305 ==.
                           8417 ;	../COMMON/easyax5043.c:1167: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1CF4 75 27 00      [24] 8418 	mov	_memset_PARM_2,#0x00
   1CF7 75 28 1E      [24] 8419 	mov	_memset_PARM_3,#0x1E
   1CFA 75 29 00      [24] 8420 	mov	(_memset_PARM_3 + 1),#0x00
   1CFD 90 02 36      [24] 8421 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1D00 75 F0 00      [24] 8422 	mov	b,#0x00
   1D03 12 42 C3      [24] 8423 	lcall	_memset
                     14D3  8424 	C$easyax5043.c$1168$3$305 ==.
                           8425 ;	../COMMON/easyax5043.c:1168: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D06 90 00 1A      [24] 8426 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1D09 E0            [24] 8427 	movx	a,@dptr
   1D0A FC            [12] 8428 	mov	r4,a
   1D0B A3            [24] 8429 	inc	dptr
   1D0C E0            [24] 8430 	movx	a,@dptr
   1D0D FD            [12] 8431 	mov	r5,a
   1D0E A3            [24] 8432 	inc	dptr
   1D0F E0            [24] 8433 	movx	a,@dptr
   1D10 FE            [12] 8434 	mov	r6,a
   1D11 A3            [24] 8435 	inc	dptr
   1D12 E0            [24] 8436 	movx	a,@dptr
   1D13 FF            [12] 8437 	mov	r7,a
   1D14 90 02 38      [24] 8438 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1D17 EC            [12] 8439 	mov	a,r4
   1D18 F0            [24] 8440 	movx	@dptr,a
   1D19 ED            [12] 8441 	mov	a,r5
   1D1A A3            [24] 8442 	inc	dptr
   1D1B F0            [24] 8443 	movx	@dptr,a
   1D1C EE            [12] 8444 	mov	a,r6
   1D1D A3            [24] 8445 	inc	dptr
   1D1E F0            [24] 8446 	movx	@dptr,a
   1D1F EF            [12] 8447 	mov	a,r7
   1D20 A3            [24] 8448 	inc	dptr
   1D21 F0            [24] 8449 	movx	@dptr,a
                     14EF  8450 	C$easyax5043.c$1169$3$305 ==.
                           8451 ;	../COMMON/easyax5043.c:1169: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNCTIMEOUT;
   1D22 90 02 37      [24] 8452 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1D25 74 0A         [12] 8453 	mov	a,#0x0A
   1D27 F0            [24] 8454 	movx	@dptr,a
                     14F5  8455 	C$easyax5043.c$1170$3$305 ==.
                           8456 ;	../COMMON/easyax5043.c:1170: wtimer_add_callback(&axradio_cb_receive.cb);
   1D28 90 02 32      [24] 8457 	mov	dptr,#_axradio_cb_receive
   1D2B 12 43 37      [24] 8458 	lcall	_wtimer_add_callback
                     14FB  8459 	C$easyax5043.c$1171$3$305 ==.
                           8460 ;	../COMMON/easyax5043.c:1171: break;
   1D2E 02 20 6E      [24] 8461 	ljmp	00173$
                     14FE  8462 	C$easyax5043.c$1173$3$305 ==.
                           8463 ;	../COMMON/easyax5043.c:1173: case syncstate_slave_syncpause:
   1D31                    8464 00154$:
                     14FE  8465 	C$easyax5043.c$1174$3$305 ==.
                           8466 ;	../COMMON/easyax5043.c:1174: ax5043_receiver_on_continuous();
   1D31 12 13 38      [24] 8467 	lcall	_ax5043_receiver_on_continuous
                     1501  8468 	C$easyax5043.c$1175$3$305 ==.
                           8469 ;	../COMMON/easyax5043.c:1175: axradio_syncstate = syncstate_slave_synchunt;
   1D34 90 00 04      [24] 8470 	mov	dptr,#_axradio_syncstate
   1D37 74 06         [12] 8471 	mov	a,#0x06
   1D39 F0            [24] 8472 	movx	@dptr,a
                     1507  8473 	C$easyax5043.c$1176$3$305 ==.
                           8474 ;	../COMMON/easyax5043.c:1176: axradio_sync_addtime(axradio_sync_slave_syncwindow);
   1D3A 90 52 BD      [24] 8475 	mov	dptr,#_axradio_sync_slave_syncwindow
   1D3D E4            [12] 8476 	clr	a
   1D3E 93            [24] 8477 	movc	a,@a+dptr
   1D3F FC            [12] 8478 	mov	r4,a
   1D40 74 01         [12] 8479 	mov	a,#0x01
   1D42 93            [24] 8480 	movc	a,@a+dptr
   1D43 FD            [12] 8481 	mov	r5,a
   1D44 74 02         [12] 8482 	mov	a,#0x02
   1D46 93            [24] 8483 	movc	a,@a+dptr
   1D47 FE            [12] 8484 	mov	r6,a
   1D48 74 03         [12] 8485 	mov	a,#0x03
   1D4A 93            [24] 8486 	movc	a,@a+dptr
   1D4B 8C 82         [24] 8487 	mov	dpl,r4
   1D4D 8D 83         [24] 8488 	mov	dph,r5
   1D4F 8E F0         [24] 8489 	mov	b,r6
   1D51 12 16 1D      [24] 8490 	lcall	_axradio_sync_addtime
                     1521  8491 	C$easyax5043.c$1177$3$305 ==.
                           8492 ;	../COMMON/easyax5043.c:1177: wtimer_remove(&axradio_timer);
   1D54 90 02 89      [24] 8493 	mov	dptr,#_axradio_timer
   1D57 12 4C D4      [24] 8494 	lcall	_wtimer_remove
                     1527  8495 	C$easyax5043.c$1178$3$305 ==.
                           8496 ;	../COMMON/easyax5043.c:1178: axradio_timer.time = axradio_sync_time;
   1D5A 90 00 10      [24] 8497 	mov	dptr,#_axradio_sync_time
   1D5D E0            [24] 8498 	movx	a,@dptr
   1D5E FC            [12] 8499 	mov	r4,a
   1D5F A3            [24] 8500 	inc	dptr
   1D60 E0            [24] 8501 	movx	a,@dptr
   1D61 FD            [12] 8502 	mov	r5,a
   1D62 A3            [24] 8503 	inc	dptr
   1D63 E0            [24] 8504 	movx	a,@dptr
   1D64 FE            [12] 8505 	mov	r6,a
   1D65 A3            [24] 8506 	inc	dptr
   1D66 E0            [24] 8507 	movx	a,@dptr
   1D67 FF            [12] 8508 	mov	r7,a
   1D68 90 02 8D      [24] 8509 	mov	dptr,#(_axradio_timer + 0x0004)
   1D6B EC            [12] 8510 	mov	a,r4
   1D6C F0            [24] 8511 	movx	@dptr,a
   1D6D ED            [12] 8512 	mov	a,r5
   1D6E A3            [24] 8513 	inc	dptr
   1D6F F0            [24] 8514 	movx	@dptr,a
   1D70 EE            [12] 8515 	mov	a,r6
   1D71 A3            [24] 8516 	inc	dptr
   1D72 F0            [24] 8517 	movx	@dptr,a
   1D73 EF            [12] 8518 	mov	a,r7
   1D74 A3            [24] 8519 	inc	dptr
   1D75 F0            [24] 8520 	movx	@dptr,a
                     1543  8521 	C$easyax5043.c$1179$3$305 ==.
                           8522 ;	../COMMON/easyax5043.c:1179: wtimer0_addabsolute(&axradio_timer);
   1D76 90 02 89      [24] 8523 	mov	dptr,#_axradio_timer
   1D79 12 44 64      [24] 8524 	lcall	_wtimer0_addabsolute
                     1549  8525 	C$easyax5043.c$1180$3$305 ==.
                           8526 ;	../COMMON/easyax5043.c:1180: update_timeanchor();
   1D7C 12 08 33      [24] 8527 	lcall	_update_timeanchor
                     154C  8528 	C$easyax5043.c$1181$3$305 ==.
                           8529 ;	../COMMON/easyax5043.c:1181: wtimer_remove_callback(&axradio_cb_receive.cb);
   1D7F 90 02 32      [24] 8530 	mov	dptr,#_axradio_cb_receive
   1D82 12 4E DE      [24] 8531 	lcall	_wtimer_remove_callback
                     1552  8532 	C$easyax5043.c$1182$3$305 ==.
                           8533 ;	../COMMON/easyax5043.c:1182: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1D85 75 27 00      [24] 8534 	mov	_memset_PARM_2,#0x00
   1D88 75 28 1E      [24] 8535 	mov	_memset_PARM_3,#0x1E
   1D8B 75 29 00      [24] 8536 	mov	(_memset_PARM_3 + 1),#0x00
   1D8E 90 02 36      [24] 8537 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1D91 75 F0 00      [24] 8538 	mov	b,#0x00
   1D94 12 42 C3      [24] 8539 	lcall	_memset
                     1564  8540 	C$easyax5043.c$1183$3$305 ==.
                           8541 ;	../COMMON/easyax5043.c:1183: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1D97 90 00 1A      [24] 8542 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1D9A E0            [24] 8543 	movx	a,@dptr
   1D9B FC            [12] 8544 	mov	r4,a
   1D9C A3            [24] 8545 	inc	dptr
   1D9D E0            [24] 8546 	movx	a,@dptr
   1D9E FD            [12] 8547 	mov	r5,a
   1D9F A3            [24] 8548 	inc	dptr
   1DA0 E0            [24] 8549 	movx	a,@dptr
   1DA1 FE            [12] 8550 	mov	r6,a
   1DA2 A3            [24] 8551 	inc	dptr
   1DA3 E0            [24] 8552 	movx	a,@dptr
   1DA4 FF            [12] 8553 	mov	r7,a
   1DA5 90 02 38      [24] 8554 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1DA8 EC            [12] 8555 	mov	a,r4
   1DA9 F0            [24] 8556 	movx	@dptr,a
   1DAA ED            [12] 8557 	mov	a,r5
   1DAB A3            [24] 8558 	inc	dptr
   1DAC F0            [24] 8559 	movx	@dptr,a
   1DAD EE            [12] 8560 	mov	a,r6
   1DAE A3            [24] 8561 	inc	dptr
   1DAF F0            [24] 8562 	movx	@dptr,a
   1DB0 EF            [12] 8563 	mov	a,r7
   1DB1 A3            [24] 8564 	inc	dptr
   1DB2 F0            [24] 8565 	movx	@dptr,a
                     1580  8566 	C$easyax5043.c$1184$3$305 ==.
                           8567 ;	../COMMON/easyax5043.c:1184: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1DB3 90 02 37      [24] 8568 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1DB6 74 09         [12] 8569 	mov	a,#0x09
   1DB8 F0            [24] 8570 	movx	@dptr,a
                     1586  8571 	C$easyax5043.c$1185$3$305 ==.
                           8572 ;	../COMMON/easyax5043.c:1185: wtimer_add_callback(&axradio_cb_receive.cb);
   1DB9 90 02 32      [24] 8573 	mov	dptr,#_axradio_cb_receive
   1DBC 12 43 37      [24] 8574 	lcall	_wtimer_add_callback
                     158C  8575 	C$easyax5043.c$1186$3$305 ==.
                           8576 ;	../COMMON/easyax5043.c:1186: break;
   1DBF 02 20 6E      [24] 8577 	ljmp	00173$
                     158F  8578 	C$easyax5043.c$1188$3$305 ==.
                           8579 ;	../COMMON/easyax5043.c:1188: case syncstate_slave_rxidle:
   1DC2                    8580 00155$:
                     158F  8581 	C$easyax5043.c$1189$3$305 ==.
                           8582 ;	../COMMON/easyax5043.c:1189: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   1DC2 90 40 02      [24] 8583 	mov	dptr,#_AX5043_PWRMODE
   1DC5 74 05         [12] 8584 	mov	a,#0x05
   1DC7 F0            [24] 8585 	movx	@dptr,a
                     1595  8586 	C$easyax5043.c$1190$3$305 ==.
                           8587 ;	../COMMON/easyax5043.c:1190: axradio_syncstate = syncstate_slave_rxxosc;
   1DC8 90 00 04      [24] 8588 	mov	dptr,#_axradio_syncstate
   1DCB 74 09         [12] 8589 	mov	a,#0x09
   1DCD F0            [24] 8590 	movx	@dptr,a
                     159B  8591 	C$easyax5043.c$1191$3$305 ==.
                           8592 ;	../COMMON/easyax5043.c:1191: wtimer_remove(&axradio_timer);
   1DCE 90 02 89      [24] 8593 	mov	dptr,#_axradio_timer
   1DD1 12 4C D4      [24] 8594 	lcall	_wtimer_remove
                     15A1  8595 	C$easyax5043.c$1192$3$305 ==.
                           8596 ;	../COMMON/easyax5043.c:1192: axradio_timer.time += axradio_sync_xoscstartup;
   1DD4 90 02 8D      [24] 8597 	mov	dptr,#(_axradio_timer + 0x0004)
   1DD7 E0            [24] 8598 	movx	a,@dptr
   1DD8 FC            [12] 8599 	mov	r4,a
   1DD9 A3            [24] 8600 	inc	dptr
   1DDA E0            [24] 8601 	movx	a,@dptr
   1DDB FD            [12] 8602 	mov	r5,a
   1DDC A3            [24] 8603 	inc	dptr
   1DDD E0            [24] 8604 	movx	a,@dptr
   1DDE FE            [12] 8605 	mov	r6,a
   1DDF A3            [24] 8606 	inc	dptr
   1DE0 E0            [24] 8607 	movx	a,@dptr
   1DE1 FF            [12] 8608 	mov	r7,a
   1DE2 90 52 B9      [24] 8609 	mov	dptr,#_axradio_sync_xoscstartup
   1DE5 E4            [12] 8610 	clr	a
   1DE6 93            [24] 8611 	movc	a,@a+dptr
   1DE7 F8            [12] 8612 	mov	r0,a
   1DE8 74 01         [12] 8613 	mov	a,#0x01
   1DEA 93            [24] 8614 	movc	a,@a+dptr
   1DEB F9            [12] 8615 	mov	r1,a
   1DEC 74 02         [12] 8616 	mov	a,#0x02
   1DEE 93            [24] 8617 	movc	a,@a+dptr
   1DEF FA            [12] 8618 	mov	r2,a
   1DF0 74 03         [12] 8619 	mov	a,#0x03
   1DF2 93            [24] 8620 	movc	a,@a+dptr
   1DF3 FB            [12] 8621 	mov	r3,a
   1DF4 E8            [12] 8622 	mov	a,r0
   1DF5 2C            [12] 8623 	add	a,r4
   1DF6 FC            [12] 8624 	mov	r4,a
   1DF7 E9            [12] 8625 	mov	a,r1
   1DF8 3D            [12] 8626 	addc	a,r5
   1DF9 FD            [12] 8627 	mov	r5,a
   1DFA EA            [12] 8628 	mov	a,r2
   1DFB 3E            [12] 8629 	addc	a,r6
   1DFC FE            [12] 8630 	mov	r6,a
   1DFD EB            [12] 8631 	mov	a,r3
   1DFE 3F            [12] 8632 	addc	a,r7
   1DFF FF            [12] 8633 	mov	r7,a
   1E00 90 02 8D      [24] 8634 	mov	dptr,#(_axradio_timer + 0x0004)
   1E03 EC            [12] 8635 	mov	a,r4
   1E04 F0            [24] 8636 	movx	@dptr,a
   1E05 ED            [12] 8637 	mov	a,r5
   1E06 A3            [24] 8638 	inc	dptr
   1E07 F0            [24] 8639 	movx	@dptr,a
   1E08 EE            [12] 8640 	mov	a,r6
   1E09 A3            [24] 8641 	inc	dptr
   1E0A F0            [24] 8642 	movx	@dptr,a
   1E0B EF            [12] 8643 	mov	a,r7
   1E0C A3            [24] 8644 	inc	dptr
   1E0D F0            [24] 8645 	movx	@dptr,a
                     15DB  8646 	C$easyax5043.c$1193$3$305 ==.
                           8647 ;	../COMMON/easyax5043.c:1193: wtimer0_addabsolute(&axradio_timer);
   1E0E 90 02 89      [24] 8648 	mov	dptr,#_axradio_timer
   1E11 12 44 64      [24] 8649 	lcall	_wtimer0_addabsolute
                     15E1  8650 	C$easyax5043.c$1194$3$305 ==.
                           8651 ;	../COMMON/easyax5043.c:1194: break;
   1E14 02 20 6E      [24] 8652 	ljmp	00173$
                     15E4  8653 	C$easyax5043.c$1196$3$305 ==.
                           8654 ;	../COMMON/easyax5043.c:1196: case syncstate_slave_rxxosc:
   1E17                    8655 00156$:
                     15E4  8656 	C$easyax5043.c$1197$3$305 ==.
                           8657 ;	../COMMON/easyax5043.c:1197: ax5043_receiver_on_continuous();
   1E17 12 13 38      [24] 8658 	lcall	_ax5043_receiver_on_continuous
                     15E7  8659 	C$easyax5043.c$1198$3$305 ==.
                           8660 ;	../COMMON/easyax5043.c:1198: axradio_syncstate = syncstate_slave_rxsfdwindow;
   1E1A 90 00 04      [24] 8661 	mov	dptr,#_axradio_syncstate
   1E1D 74 0A         [12] 8662 	mov	a,#0x0A
   1E1F F0            [24] 8663 	movx	@dptr,a
                     15ED  8664 	C$easyax5043.c$1199$3$305 ==.
                           8665 ;	../COMMON/easyax5043.c:1199: update_timeanchor();
   1E20 12 08 33      [24] 8666 	lcall	_update_timeanchor
                     15F0  8667 	C$easyax5043.c$1200$3$305 ==.
                           8668 ;	../COMMON/easyax5043.c:1200: wtimer_remove_callback(&axradio_cb_receive.cb);
   1E23 90 02 32      [24] 8669 	mov	dptr,#_axradio_cb_receive
   1E26 12 4E DE      [24] 8670 	lcall	_wtimer_remove_callback
                     15F6  8671 	C$easyax5043.c$1201$3$305 ==.
                           8672 ;	../COMMON/easyax5043.c:1201: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1E29 75 27 00      [24] 8673 	mov	_memset_PARM_2,#0x00
   1E2C 75 28 1E      [24] 8674 	mov	_memset_PARM_3,#0x1E
   1E2F 75 29 00      [24] 8675 	mov	(_memset_PARM_3 + 1),#0x00
   1E32 90 02 36      [24] 8676 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1E35 75 F0 00      [24] 8677 	mov	b,#0x00
   1E38 12 42 C3      [24] 8678 	lcall	_memset
                     1608  8679 	C$easyax5043.c$1202$3$305 ==.
                           8680 ;	../COMMON/easyax5043.c:1202: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1E3B 90 00 1A      [24] 8681 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1E3E E0            [24] 8682 	movx	a,@dptr
   1E3F FC            [12] 8683 	mov	r4,a
   1E40 A3            [24] 8684 	inc	dptr
   1E41 E0            [24] 8685 	movx	a,@dptr
   1E42 FD            [12] 8686 	mov	r5,a
   1E43 A3            [24] 8687 	inc	dptr
   1E44 E0            [24] 8688 	movx	a,@dptr
   1E45 FE            [12] 8689 	mov	r6,a
   1E46 A3            [24] 8690 	inc	dptr
   1E47 E0            [24] 8691 	movx	a,@dptr
   1E48 FF            [12] 8692 	mov	r7,a
   1E49 90 02 38      [24] 8693 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1E4C EC            [12] 8694 	mov	a,r4
   1E4D F0            [24] 8695 	movx	@dptr,a
   1E4E ED            [12] 8696 	mov	a,r5
   1E4F A3            [24] 8697 	inc	dptr
   1E50 F0            [24] 8698 	movx	@dptr,a
   1E51 EE            [12] 8699 	mov	a,r6
   1E52 A3            [24] 8700 	inc	dptr
   1E53 F0            [24] 8701 	movx	@dptr,a
   1E54 EF            [12] 8702 	mov	a,r7
   1E55 A3            [24] 8703 	inc	dptr
   1E56 F0            [24] 8704 	movx	@dptr,a
                     1624  8705 	C$easyax5043.c$1203$3$305 ==.
                           8706 ;	../COMMON/easyax5043.c:1203: axradio_cb_receive.st.error = AXRADIO_ERR_RECEIVESTART;
   1E57 90 02 37      [24] 8707 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1E5A 74 0B         [12] 8708 	mov	a,#0x0B
   1E5C F0            [24] 8709 	movx	@dptr,a
                     162A  8710 	C$easyax5043.c$1204$3$305 ==.
                           8711 ;	../COMMON/easyax5043.c:1204: wtimer_add_callback(&axradio_cb_receive.cb);
   1E5D 90 02 32      [24] 8712 	mov	dptr,#_axradio_cb_receive
   1E60 12 43 37      [24] 8713 	lcall	_wtimer_add_callback
                     1630  8714 	C$easyax5043.c$1205$3$305 ==.
                           8715 ;	../COMMON/easyax5043.c:1205: wtimer_remove(&axradio_timer);
   1E63 90 02 89      [24] 8716 	mov	dptr,#_axradio_timer
   1E66 12 4C D4      [24] 8717 	lcall	_wtimer_remove
                     1636  8718 	C$easyax5043.c$1207$4$305 ==.
                           8719 ;	../COMMON/easyax5043.c:1207: uint8_t __autodata idx = axradio_sync_seqnr;
   1E69 90 00 0F      [24] 8720 	mov	dptr,#_axradio_ack_seqnr
   1E6C E0            [24] 8721 	movx	a,@dptr
   1E6D FF            [12] 8722 	mov	r7,a
                     163B  8723 	C$easyax5043.c$1208$4$306 ==.
                           8724 ;	../COMMON/easyax5043.c:1208: if (idx >= axradio_sync_slave_nrrx)
   1E6E 90 52 CC      [24] 8725 	mov	dptr,#_axradio_sync_slave_nrrx
   1E71 E4            [12] 8726 	clr	a
   1E72 93            [24] 8727 	movc	a,@a+dptr
   1E73 FE            [12] 8728 	mov	r6,a
   1E74 C3            [12] 8729 	clr	c
   1E75 EF            [12] 8730 	mov	a,r7
   1E76 9E            [12] 8731 	subb	a,r6
   1E77 40 03         [24] 8732 	jc	00158$
                     1646  8733 	C$easyax5043.c$1209$4$306 ==.
                           8734 ;	../COMMON/easyax5043.c:1209: idx = axradio_sync_slave_nrrx - 1;
   1E79 EE            [12] 8735 	mov	a,r6
   1E7A 14            [12] 8736 	dec	a
   1E7B FF            [12] 8737 	mov	r7,a
   1E7C                    8738 00158$:
                     1649  8739 	C$easyax5043.c$1210$4$306 ==.
                           8740 ;	../COMMON/easyax5043.c:1210: axradio_timer.time += axradio_sync_slave_rxwindow[idx];
   1E7C 90 02 8D      [24] 8741 	mov	dptr,#(_axradio_timer + 0x0004)
   1E7F E0            [24] 8742 	movx	a,@dptr
   1E80 FB            [12] 8743 	mov	r3,a
   1E81 A3            [24] 8744 	inc	dptr
   1E82 E0            [24] 8745 	movx	a,@dptr
   1E83 FC            [12] 8746 	mov	r4,a
   1E84 A3            [24] 8747 	inc	dptr
   1E85 E0            [24] 8748 	movx	a,@dptr
   1E86 FD            [12] 8749 	mov	r5,a
   1E87 A3            [24] 8750 	inc	dptr
   1E88 E0            [24] 8751 	movx	a,@dptr
   1E89 FE            [12] 8752 	mov	r6,a
   1E8A EF            [12] 8753 	mov	a,r7
   1E8B 75 F0 04      [24] 8754 	mov	b,#0x04
   1E8E A4            [48] 8755 	mul	ab
   1E8F 24 D9         [12] 8756 	add	a,#_axradio_sync_slave_rxwindow
   1E91 F5 82         [12] 8757 	mov	dpl,a
   1E93 74 52         [12] 8758 	mov	a,#(_axradio_sync_slave_rxwindow >> 8)
   1E95 35 F0         [12] 8759 	addc	a,b
   1E97 F5 83         [12] 8760 	mov	dph,a
   1E99 E4            [12] 8761 	clr	a
   1E9A 93            [24] 8762 	movc	a,@a+dptr
   1E9B F8            [12] 8763 	mov	r0,a
   1E9C A3            [24] 8764 	inc	dptr
   1E9D E4            [12] 8765 	clr	a
   1E9E 93            [24] 8766 	movc	a,@a+dptr
   1E9F F9            [12] 8767 	mov	r1,a
   1EA0 A3            [24] 8768 	inc	dptr
   1EA1 E4            [12] 8769 	clr	a
   1EA2 93            [24] 8770 	movc	a,@a+dptr
   1EA3 FA            [12] 8771 	mov	r2,a
   1EA4 A3            [24] 8772 	inc	dptr
   1EA5 E4            [12] 8773 	clr	a
   1EA6 93            [24] 8774 	movc	a,@a+dptr
   1EA7 FF            [12] 8775 	mov	r7,a
   1EA8 E8            [12] 8776 	mov	a,r0
   1EA9 2B            [12] 8777 	add	a,r3
   1EAA FB            [12] 8778 	mov	r3,a
   1EAB E9            [12] 8779 	mov	a,r1
   1EAC 3C            [12] 8780 	addc	a,r4
   1EAD FC            [12] 8781 	mov	r4,a
   1EAE EA            [12] 8782 	mov	a,r2
   1EAF 3D            [12] 8783 	addc	a,r5
   1EB0 FD            [12] 8784 	mov	r5,a
   1EB1 EF            [12] 8785 	mov	a,r7
   1EB2 3E            [12] 8786 	addc	a,r6
   1EB3 FE            [12] 8787 	mov	r6,a
   1EB4 90 02 8D      [24] 8788 	mov	dptr,#(_axradio_timer + 0x0004)
   1EB7 EB            [12] 8789 	mov	a,r3
   1EB8 F0            [24] 8790 	movx	@dptr,a
   1EB9 EC            [12] 8791 	mov	a,r4
   1EBA A3            [24] 8792 	inc	dptr
   1EBB F0            [24] 8793 	movx	@dptr,a
   1EBC ED            [12] 8794 	mov	a,r5
   1EBD A3            [24] 8795 	inc	dptr
   1EBE F0            [24] 8796 	movx	@dptr,a
   1EBF EE            [12] 8797 	mov	a,r6
   1EC0 A3            [24] 8798 	inc	dptr
   1EC1 F0            [24] 8799 	movx	@dptr,a
                     168F  8800 	C$easyax5043.c$1212$3$305 ==.
                           8801 ;	../COMMON/easyax5043.c:1212: wtimer0_addabsolute(&axradio_timer);
   1EC2 90 02 89      [24] 8802 	mov	dptr,#_axradio_timer
   1EC5 12 44 64      [24] 8803 	lcall	_wtimer0_addabsolute
                     1695  8804 	C$easyax5043.c$1213$3$305 ==.
                           8805 ;	../COMMON/easyax5043.c:1213: break;
   1EC8 02 20 6E      [24] 8806 	ljmp	00173$
                     1698  8807 	C$easyax5043.c$1215$3$305 ==.
                           8808 ;	../COMMON/easyax5043.c:1215: case syncstate_slave_rxsfdwindow:
   1ECB                    8809 00159$:
                     1698  8810 	C$easyax5043.c$1216$3$305 ==.
                           8811 ;	../COMMON/easyax5043.c:1216: if (!(0x0F & (uint8_t)~AX5043_RADIOSTATE)) {
   1ECB 90 40 1C      [24] 8812 	mov	dptr,#_AX5043_RADIOSTATE
   1ECE E0            [24] 8813 	movx	a,@dptr
   1ECF F4            [12] 8814 	cpl	a
   1ED0 FF            [12] 8815 	mov	r7,a
   1ED1 54 0F         [12] 8816 	anl	a,#0x0F
   1ED3 60 02         [24] 8817 	jz	00288$
   1ED5 80 4F         [24] 8818 	sjmp	00162$
   1ED7                    8819 00288$:
                     16A4  8820 	C$easyax5043.c$1217$4$307 ==.
                           8821 ;	../COMMON/easyax5043.c:1217: axradio_syncstate = syncstate_slave_rxpacket;
   1ED7 90 00 04      [24] 8822 	mov	dptr,#_axradio_syncstate
   1EDA 74 0B         [12] 8823 	mov	a,#0x0B
   1EDC F0            [24] 8824 	movx	@dptr,a
                     16AA  8825 	C$easyax5043.c$1218$4$307 ==.
                           8826 ;	../COMMON/easyax5043.c:1218: wtimer_remove(&axradio_timer);
   1EDD 90 02 89      [24] 8827 	mov	dptr,#_axradio_timer
   1EE0 12 4C D4      [24] 8828 	lcall	_wtimer_remove
                     16B0  8829 	C$easyax5043.c$1219$4$307 ==.
                           8830 ;	../COMMON/easyax5043.c:1219: axradio_timer.time += axradio_sync_slave_rxtimeout;
   1EE3 90 02 8D      [24] 8831 	mov	dptr,#(_axradio_timer + 0x0004)
   1EE6 E0            [24] 8832 	movx	a,@dptr
   1EE7 FC            [12] 8833 	mov	r4,a
   1EE8 A3            [24] 8834 	inc	dptr
   1EE9 E0            [24] 8835 	movx	a,@dptr
   1EEA FD            [12] 8836 	mov	r5,a
   1EEB A3            [24] 8837 	inc	dptr
   1EEC E0            [24] 8838 	movx	a,@dptr
   1EED FE            [12] 8839 	mov	r6,a
   1EEE A3            [24] 8840 	inc	dptr
   1EEF E0            [24] 8841 	movx	a,@dptr
   1EF0 FF            [12] 8842 	mov	r7,a
   1EF1 90 52 E5      [24] 8843 	mov	dptr,#_axradio_sync_slave_rxtimeout
   1EF4 E4            [12] 8844 	clr	a
   1EF5 93            [24] 8845 	movc	a,@a+dptr
   1EF6 F8            [12] 8846 	mov	r0,a
   1EF7 74 01         [12] 8847 	mov	a,#0x01
   1EF9 93            [24] 8848 	movc	a,@a+dptr
   1EFA F9            [12] 8849 	mov	r1,a
   1EFB 74 02         [12] 8850 	mov	a,#0x02
   1EFD 93            [24] 8851 	movc	a,@a+dptr
   1EFE FA            [12] 8852 	mov	r2,a
   1EFF 74 03         [12] 8853 	mov	a,#0x03
   1F01 93            [24] 8854 	movc	a,@a+dptr
   1F02 FB            [12] 8855 	mov	r3,a
   1F03 E8            [12] 8856 	mov	a,r0
   1F04 2C            [12] 8857 	add	a,r4
   1F05 FC            [12] 8858 	mov	r4,a
   1F06 E9            [12] 8859 	mov	a,r1
   1F07 3D            [12] 8860 	addc	a,r5
   1F08 FD            [12] 8861 	mov	r5,a
   1F09 EA            [12] 8862 	mov	a,r2
   1F0A 3E            [12] 8863 	addc	a,r6
   1F0B FE            [12] 8864 	mov	r6,a
   1F0C EB            [12] 8865 	mov	a,r3
   1F0D 3F            [12] 8866 	addc	a,r7
   1F0E FF            [12] 8867 	mov	r7,a
   1F0F 90 02 8D      [24] 8868 	mov	dptr,#(_axradio_timer + 0x0004)
   1F12 EC            [12] 8869 	mov	a,r4
   1F13 F0            [24] 8870 	movx	@dptr,a
   1F14 ED            [12] 8871 	mov	a,r5
   1F15 A3            [24] 8872 	inc	dptr
   1F16 F0            [24] 8873 	movx	@dptr,a
   1F17 EE            [12] 8874 	mov	a,r6
   1F18 A3            [24] 8875 	inc	dptr
   1F19 F0            [24] 8876 	movx	@dptr,a
   1F1A EF            [12] 8877 	mov	a,r7
   1F1B A3            [24] 8878 	inc	dptr
   1F1C F0            [24] 8879 	movx	@dptr,a
                     16EA  8880 	C$easyax5043.c$1220$4$307 ==.
                           8881 ;	../COMMON/easyax5043.c:1220: wtimer0_addabsolute(&axradio_timer);
   1F1D 90 02 89      [24] 8882 	mov	dptr,#_axradio_timer
   1F20 12 44 64      [24] 8883 	lcall	_wtimer0_addabsolute
                     16F0  8884 	C$easyax5043.c$1221$4$307 ==.
                           8885 ;	../COMMON/easyax5043.c:1221: break;
   1F23 02 20 6E      [24] 8886 	ljmp	00173$
                     16F3  8887 	C$easyax5043.c$1225$3$305 ==.
                           8888 ;	../COMMON/easyax5043.c:1225: case syncstate_slave_rxpacket:
   1F26                    8889 00162$:
                     16F3  8890 	C$easyax5043.c$1226$3$305 ==.
                           8891 ;	../COMMON/easyax5043.c:1226: ax5043_off();
   1F26 12 14 7D      [24] 8892 	lcall	_ax5043_off
                     16F6  8893 	C$easyax5043.c$1227$3$305 ==.
                           8894 ;	../COMMON/easyax5043.c:1227: if (!axradio_sync_seqnr)
   1F29 90 00 0F      [24] 8895 	mov	dptr,#_axradio_ack_seqnr
   1F2C E0            [24] 8896 	movx	a,@dptr
   1F2D FF            [12] 8897 	mov	r7,a
   1F2E 70 06         [24] 8898 	jnz	00164$
                     16FD  8899 	C$easyax5043.c$1228$3$305 ==.
                           8900 ;	../COMMON/easyax5043.c:1228: axradio_sync_seqnr = 1;
   1F30 90 00 0F      [24] 8901 	mov	dptr,#_axradio_ack_seqnr
   1F33 74 01         [12] 8902 	mov	a,#0x01
   1F35 F0            [24] 8903 	movx	@dptr,a
   1F36                    8904 00164$:
                     1703  8905 	C$easyax5043.c$1229$3$305 ==.
                           8906 ;	../COMMON/easyax5043.c:1229: ++axradio_sync_seqnr;
   1F36 90 00 0F      [24] 8907 	mov	dptr,#_axradio_ack_seqnr
   1F39 E0            [24] 8908 	movx	a,@dptr
   1F3A 24 01         [12] 8909 	add	a,#0x01
   1F3C F0            [24] 8910 	movx	@dptr,a
                     170A  8911 	C$easyax5043.c$1230$3$305 ==.
                           8912 ;	../COMMON/easyax5043.c:1230: update_timeanchor();
   1F3D 12 08 33      [24] 8913 	lcall	_update_timeanchor
                     170D  8914 	C$easyax5043.c$1231$3$305 ==.
                           8915 ;	../COMMON/easyax5043.c:1231: wtimer_remove_callback(&axradio_cb_receive.cb);
   1F40 90 02 32      [24] 8916 	mov	dptr,#_axradio_cb_receive
   1F43 12 4E DE      [24] 8917 	lcall	_wtimer_remove_callback
                     1713  8918 	C$easyax5043.c$1232$3$305 ==.
                           8919 ;	../COMMON/easyax5043.c:1232: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   1F46 75 27 00      [24] 8920 	mov	_memset_PARM_2,#0x00
   1F49 75 28 1E      [24] 8921 	mov	_memset_PARM_3,#0x1E
   1F4C 75 29 00      [24] 8922 	mov	(_memset_PARM_3 + 1),#0x00
   1F4F 90 02 36      [24] 8923 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   1F52 75 F0 00      [24] 8924 	mov	b,#0x00
   1F55 12 42 C3      [24] 8925 	lcall	_memset
                     1725  8926 	C$easyax5043.c$1233$3$305 ==.
                           8927 ;	../COMMON/easyax5043.c:1233: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   1F58 90 00 1A      [24] 8928 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   1F5B E0            [24] 8929 	movx	a,@dptr
   1F5C FC            [12] 8930 	mov	r4,a
   1F5D A3            [24] 8931 	inc	dptr
   1F5E E0            [24] 8932 	movx	a,@dptr
   1F5F FD            [12] 8933 	mov	r5,a
   1F60 A3            [24] 8934 	inc	dptr
   1F61 E0            [24] 8935 	movx	a,@dptr
   1F62 FE            [12] 8936 	mov	r6,a
   1F63 A3            [24] 8937 	inc	dptr
   1F64 E0            [24] 8938 	movx	a,@dptr
   1F65 FF            [12] 8939 	mov	r7,a
   1F66 90 02 38      [24] 8940 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   1F69 EC            [12] 8941 	mov	a,r4
   1F6A F0            [24] 8942 	movx	@dptr,a
   1F6B ED            [12] 8943 	mov	a,r5
   1F6C A3            [24] 8944 	inc	dptr
   1F6D F0            [24] 8945 	movx	@dptr,a
   1F6E EE            [12] 8946 	mov	a,r6
   1F6F A3            [24] 8947 	inc	dptr
   1F70 F0            [24] 8948 	movx	@dptr,a
   1F71 EF            [12] 8949 	mov	a,r7
   1F72 A3            [24] 8950 	inc	dptr
   1F73 F0            [24] 8951 	movx	@dptr,a
                     1741  8952 	C$easyax5043.c$1234$3$305 ==.
                           8953 ;	../COMMON/easyax5043.c:1234: axradio_cb_receive.st.error = AXRADIO_ERR_TIMEOUT;
   1F74 90 02 37      [24] 8954 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1F77 74 03         [12] 8955 	mov	a,#0x03
   1F79 F0            [24] 8956 	movx	@dptr,a
                     1747  8957 	C$easyax5043.c$1235$3$305 ==.
                           8958 ;	../COMMON/easyax5043.c:1235: if (axradio_sync_seqnr <= axradio_sync_slave_resyncloss) {
   1F7A 90 00 0F      [24] 8959 	mov	dptr,#_axradio_ack_seqnr
   1F7D E0            [24] 8960 	movx	a,@dptr
   1F7E FF            [12] 8961 	mov	r7,a
   1F7F 90 52 CB      [24] 8962 	mov	dptr,#_axradio_sync_slave_resyncloss
   1F82 E4            [12] 8963 	clr	a
   1F83 93            [24] 8964 	movc	a,@a+dptr
   1F84 FE            [12] 8965 	mov	r6,a
   1F85 C3            [12] 8966 	clr	c
   1F86 9F            [12] 8967 	subb	a,r7
   1F87 40 57         [24] 8968 	jc	00168$
                     1756  8969 	C$easyax5043.c$1236$4$308 ==.
                           8970 ;	../COMMON/easyax5043.c:1236: wtimer_add_callback(&axradio_cb_receive.cb);
   1F89 90 02 32      [24] 8971 	mov	dptr,#_axradio_cb_receive
   1F8C 12 43 37      [24] 8972 	lcall	_wtimer_add_callback
                     175C  8973 	C$easyax5043.c$1237$4$308 ==.
                           8974 ;	../COMMON/easyax5043.c:1237: axradio_sync_slave_nextperiod();
   1F8F 12 17 D4      [24] 8975 	lcall	_axradio_sync_slave_nextperiod
                     175F  8976 	C$easyax5043.c$1238$4$308 ==.
                           8977 ;	../COMMON/easyax5043.c:1238: axradio_syncstate = syncstate_slave_rxidle;
   1F92 90 00 04      [24] 8978 	mov	dptr,#_axradio_syncstate
   1F95 74 08         [12] 8979 	mov	a,#0x08
   1F97 F0            [24] 8980 	movx	@dptr,a
                     1765  8981 	C$easyax5043.c$1239$4$308 ==.
                           8982 ;	../COMMON/easyax5043.c:1239: wtimer_remove(&axradio_timer);
   1F98 90 02 89      [24] 8983 	mov	dptr,#_axradio_timer
   1F9B 12 4C D4      [24] 8984 	lcall	_wtimer_remove
                     176B  8985 	C$easyax5043.c$1241$5$308 ==.
                           8986 ;	../COMMON/easyax5043.c:1241: uint8_t __autodata idx = axradio_sync_seqnr;
   1F9E 90 00 0F      [24] 8987 	mov	dptr,#_axradio_ack_seqnr
   1FA1 E0            [24] 8988 	movx	a,@dptr
   1FA2 FF            [12] 8989 	mov	r7,a
                     1770  8990 	C$easyax5043.c$1242$5$309 ==.
                           8991 ;	../COMMON/easyax5043.c:1242: if (idx >= axradio_sync_slave_nrrx)
   1FA3 90 52 CC      [24] 8992 	mov	dptr,#_axradio_sync_slave_nrrx
   1FA6 E4            [12] 8993 	clr	a
   1FA7 93            [24] 8994 	movc	a,@a+dptr
   1FA8 FE            [12] 8995 	mov	r6,a
   1FA9 C3            [12] 8996 	clr	c
   1FAA EF            [12] 8997 	mov	a,r7
   1FAB 9E            [12] 8998 	subb	a,r6
   1FAC 40 03         [24] 8999 	jc	00166$
                     177B  9000 	C$easyax5043.c$1243$5$309 ==.
                           9001 ;	../COMMON/easyax5043.c:1243: idx = axradio_sync_slave_nrrx - 1;
   1FAE EE            [12] 9002 	mov	a,r6
   1FAF 14            [12] 9003 	dec	a
   1FB0 FF            [12] 9004 	mov	r7,a
   1FB1                    9005 00166$:
                     177E  9006 	C$easyax5043.c$1244$5$309 ==.
                           9007 ;	../COMMON/easyax5043.c:1244: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[idx]);
   1FB1 EF            [12] 9008 	mov	a,r7
   1FB2 75 F0 04      [24] 9009 	mov	b,#0x04
   1FB5 A4            [48] 9010 	mul	ab
   1FB6 24 CD         [12] 9011 	add	a,#_axradio_sync_slave_rxadvance
   1FB8 F5 82         [12] 9012 	mov	dpl,a
   1FBA 74 52         [12] 9013 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   1FBC 35 F0         [12] 9014 	addc	a,b
   1FBE F5 83         [12] 9015 	mov	dph,a
   1FC0 E4            [12] 9016 	clr	a
   1FC1 93            [24] 9017 	movc	a,@a+dptr
   1FC2 FC            [12] 9018 	mov	r4,a
   1FC3 A3            [24] 9019 	inc	dptr
   1FC4 E4            [12] 9020 	clr	a
   1FC5 93            [24] 9021 	movc	a,@a+dptr
   1FC6 FD            [12] 9022 	mov	r5,a
   1FC7 A3            [24] 9023 	inc	dptr
   1FC8 E4            [12] 9024 	clr	a
   1FC9 93            [24] 9025 	movc	a,@a+dptr
   1FCA FE            [12] 9026 	mov	r6,a
   1FCB A3            [24] 9027 	inc	dptr
   1FCC E4            [12] 9028 	clr	a
   1FCD 93            [24] 9029 	movc	a,@a+dptr
   1FCE 8C 82         [24] 9030 	mov	dpl,r4
   1FD0 8D 83         [24] 9031 	mov	dph,r5
   1FD2 8E F0         [24] 9032 	mov	b,r6
   1FD4 12 16 6E      [24] 9033 	lcall	_axradio_sync_settimeradv
                     17A4  9034 	C$easyax5043.c$1246$4$308 ==.
                           9035 ;	../COMMON/easyax5043.c:1246: wtimer0_addabsolute(&axradio_timer);
   1FD7 90 02 89      [24] 9036 	mov	dptr,#_axradio_timer
   1FDA 12 44 64      [24] 9037 	lcall	_wtimer0_addabsolute
                     17AA  9038 	C$easyax5043.c$1247$4$308 ==.
                           9039 ;	../COMMON/easyax5043.c:1247: break;
   1FDD 02 20 6E      [24] 9040 	ljmp	00173$
   1FE0                    9041 00168$:
                     17AD  9042 	C$easyax5043.c$1249$3$305 ==.
                           9043 ;	../COMMON/easyax5043.c:1249: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   1FE0 90 02 37      [24] 9044 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   1FE3 74 09         [12] 9045 	mov	a,#0x09
   1FE5 F0            [24] 9046 	movx	@dptr,a
                     17B3  9047 	C$easyax5043.c$1250$3$305 ==.
                           9048 ;	../COMMON/easyax5043.c:1250: wtimer_add_callback(&axradio_cb_receive.cb);
   1FE6 90 02 32      [24] 9049 	mov	dptr,#_axradio_cb_receive
   1FE9 12 43 37      [24] 9050 	lcall	_wtimer_add_callback
                     17B9  9051 	C$easyax5043.c$1251$3$305 ==.
                           9052 ;	../COMMON/easyax5043.c:1251: ax5043_receiver_on_continuous();
   1FEC 12 13 38      [24] 9053 	lcall	_ax5043_receiver_on_continuous
                     17BC  9054 	C$easyax5043.c$1252$3$305 ==.
                           9055 ;	../COMMON/easyax5043.c:1252: axradio_syncstate = syncstate_slave_synchunt;
   1FEF 90 00 04      [24] 9056 	mov	dptr,#_axradio_syncstate
   1FF2 74 06         [12] 9057 	mov	a,#0x06
   1FF4 F0            [24] 9058 	movx	@dptr,a
                     17C2  9059 	C$easyax5043.c$1253$3$305 ==.
                           9060 ;	../COMMON/easyax5043.c:1253: wtimer_remove(&axradio_timer);
   1FF5 90 02 89      [24] 9061 	mov	dptr,#_axradio_timer
   1FF8 12 4C D4      [24] 9062 	lcall	_wtimer_remove
                     17C8  9063 	C$easyax5043.c$1254$3$305 ==.
                           9064 ;	../COMMON/easyax5043.c:1254: axradio_timer.time = axradio_sync_slave_syncwindow;
   1FFB 90 52 BD      [24] 9065 	mov	dptr,#_axradio_sync_slave_syncwindow
   1FFE E4            [12] 9066 	clr	a
   1FFF 93            [24] 9067 	movc	a,@a+dptr
   2000 FC            [12] 9068 	mov	r4,a
   2001 74 01         [12] 9069 	mov	a,#0x01
   2003 93            [24] 9070 	movc	a,@a+dptr
   2004 FD            [12] 9071 	mov	r5,a
   2005 74 02         [12] 9072 	mov	a,#0x02
   2007 93            [24] 9073 	movc	a,@a+dptr
   2008 FE            [12] 9074 	mov	r6,a
   2009 74 03         [12] 9075 	mov	a,#0x03
   200B 93            [24] 9076 	movc	a,@a+dptr
   200C FF            [12] 9077 	mov	r7,a
   200D 90 02 8D      [24] 9078 	mov	dptr,#(_axradio_timer + 0x0004)
   2010 EC            [12] 9079 	mov	a,r4
   2011 F0            [24] 9080 	movx	@dptr,a
   2012 ED            [12] 9081 	mov	a,r5
   2013 A3            [24] 9082 	inc	dptr
   2014 F0            [24] 9083 	movx	@dptr,a
   2015 EE            [12] 9084 	mov	a,r6
   2016 A3            [24] 9085 	inc	dptr
   2017 F0            [24] 9086 	movx	@dptr,a
   2018 EF            [12] 9087 	mov	a,r7
   2019 A3            [24] 9088 	inc	dptr
   201A F0            [24] 9089 	movx	@dptr,a
                     17E8  9090 	C$easyax5043.c$1255$3$305 ==.
                           9091 ;	../COMMON/easyax5043.c:1255: wtimer0_addrelative(&axradio_timer);
   201B 90 02 89      [24] 9092 	mov	dptr,#_axradio_timer
   201E 12 43 51      [24] 9093 	lcall	_wtimer0_addrelative
                     17EE  9094 	C$easyax5043.c$1256$3$305 ==.
                           9095 ;	../COMMON/easyax5043.c:1256: axradio_sync_time = axradio_timer.time;
   2021 90 02 8D      [24] 9096 	mov	dptr,#(_axradio_timer + 0x0004)
   2024 E0            [24] 9097 	movx	a,@dptr
   2025 FC            [12] 9098 	mov	r4,a
   2026 A3            [24] 9099 	inc	dptr
   2027 E0            [24] 9100 	movx	a,@dptr
   2028 FD            [12] 9101 	mov	r5,a
   2029 A3            [24] 9102 	inc	dptr
   202A E0            [24] 9103 	movx	a,@dptr
   202B FE            [12] 9104 	mov	r6,a
   202C A3            [24] 9105 	inc	dptr
   202D E0            [24] 9106 	movx	a,@dptr
   202E FF            [12] 9107 	mov	r7,a
   202F 90 00 10      [24] 9108 	mov	dptr,#_axradio_sync_time
   2032 EC            [12] 9109 	mov	a,r4
   2033 F0            [24] 9110 	movx	@dptr,a
   2034 ED            [12] 9111 	mov	a,r5
   2035 A3            [24] 9112 	inc	dptr
   2036 F0            [24] 9113 	movx	@dptr,a
   2037 EE            [12] 9114 	mov	a,r6
   2038 A3            [24] 9115 	inc	dptr
   2039 F0            [24] 9116 	movx	@dptr,a
   203A EF            [12] 9117 	mov	a,r7
   203B A3            [24] 9118 	inc	dptr
   203C F0            [24] 9119 	movx	@dptr,a
                     180A  9120 	C$easyax5043.c$1257$3$305 ==.
                           9121 ;	../COMMON/easyax5043.c:1257: break;
                     180A  9122 	C$easyax5043.c$1259$3$305 ==.
                           9123 ;	../COMMON/easyax5043.c:1259: case syncstate_slave_rxack:
   203D 80 2F         [24] 9124 	sjmp	00173$
   203F                    9125 00169$:
                     180C  9126 	C$easyax5043.c$1260$3$305 ==.
                           9127 ;	../COMMON/easyax5043.c:1260: axradio_syncstate = syncstate_slave_rxidle;
   203F 90 00 04      [24] 9128 	mov	dptr,#_axradio_syncstate
   2042 74 08         [12] 9129 	mov	a,#0x08
   2044 F0            [24] 9130 	movx	@dptr,a
                     1812  9131 	C$easyax5043.c$1261$3$305 ==.
                           9132 ;	../COMMON/easyax5043.c:1261: wtimer_remove(&axradio_timer);
   2045 90 02 89      [24] 9133 	mov	dptr,#_axradio_timer
   2048 12 4C D4      [24] 9134 	lcall	_wtimer_remove
                     1818  9135 	C$easyax5043.c$1262$3$305 ==.
                           9136 ;	../COMMON/easyax5043.c:1262: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[1]);
   204B 90 52 D1      [24] 9137 	mov	dptr,#(_axradio_sync_slave_rxadvance + 0x0004)
   204E E4            [12] 9138 	clr	a
   204F 93            [24] 9139 	movc	a,@a+dptr
   2050 FC            [12] 9140 	mov	r4,a
   2051 A3            [24] 9141 	inc	dptr
   2052 E4            [12] 9142 	clr	a
   2053 93            [24] 9143 	movc	a,@a+dptr
   2054 FD            [12] 9144 	mov	r5,a
   2055 A3            [24] 9145 	inc	dptr
   2056 E4            [12] 9146 	clr	a
   2057 93            [24] 9147 	movc	a,@a+dptr
   2058 FE            [12] 9148 	mov	r6,a
   2059 A3            [24] 9149 	inc	dptr
   205A E4            [12] 9150 	clr	a
   205B 93            [24] 9151 	movc	a,@a+dptr
   205C 8C 82         [24] 9152 	mov	dpl,r4
   205E 8D 83         [24] 9153 	mov	dph,r5
   2060 8E F0         [24] 9154 	mov	b,r6
   2062 12 16 6E      [24] 9155 	lcall	_axradio_sync_settimeradv
                     1832  9156 	C$easyax5043.c$1263$3$305 ==.
                           9157 ;	../COMMON/easyax5043.c:1263: wtimer0_addabsolute(&axradio_timer);
   2065 90 02 89      [24] 9158 	mov	dptr,#_axradio_timer
   2068 12 44 64      [24] 9159 	lcall	_wtimer0_addabsolute
                     1838  9160 	C$easyax5043.c$1264$3$305 ==.
                           9161 ;	../COMMON/easyax5043.c:1264: goto transmitack;
   206B 02 1A 35      [24] 9162 	ljmp	00131$
                     183B  9163 	C$easyax5043.c$1268$2$297 ==.
                           9164 ;	../COMMON/easyax5043.c:1268: default:
   206E                    9165 00171$:
                     183B  9166 	C$easyax5043.c$1270$1$296 ==.
                           9167 ;	../COMMON/easyax5043.c:1270: }
   206E                    9168 00173$:
                     183B  9169 	C$easyax5043.c$1271$1$296 ==.
                     183B  9170 	XFeasyax5043$axradio_timer_callback$0$0 ==.
   206E 22            [24] 9171 	ret
                           9172 ;------------------------------------------------------------
                           9173 ;Allocation info for local variables in function 'axradio_callback_fwd'
                           9174 ;------------------------------------------------------------
                           9175 ;desc                      Allocated to registers r6 r7 
                           9176 ;------------------------------------------------------------
                     183C  9177 	Feasyax5043$axradio_callback_fwd$0$0 ==.
                     183C  9178 	C$easyax5043.c$1273$1$296 ==.
                           9179 ;	../COMMON/easyax5043.c:1273: static __reentrantb void axradio_callback_fwd(struct wtimer_callback __xdata *desc) __reentrant
                           9180 ;	-----------------------------------------
                           9181 ;	 function axradio_callback_fwd
                           9182 ;	-----------------------------------------
   206F                    9183 _axradio_callback_fwd:
   206F AE 82         [24] 9184 	mov	r6,dpl
   2071 AF 83         [24] 9185 	mov	r7,dph
                     1840  9186 	C$easyax5043.c$1275$1$311 ==.
                           9187 ;	../COMMON/easyax5043.c:1275: axradio_statuschange((struct axradio_status __xdata *)(desc + 1));
   2073 74 04         [12] 9188 	mov	a,#0x04
   2075 2E            [12] 9189 	add	a,r6
   2076 FE            [12] 9190 	mov	r6,a
   2077 E4            [12] 9191 	clr	a
   2078 3F            [12] 9192 	addc	a,r7
   2079 FF            [12] 9193 	mov	r7,a
   207A 8E 82         [24] 9194 	mov	dpl,r6
   207C 8F 83         [24] 9195 	mov	dph,r7
   207E 12 37 ED      [24] 9196 	lcall	_axradio_statuschange
                     184E  9197 	C$easyax5043.c$1276$1$311 ==.
                     184E  9198 	XFeasyax5043$axradio_callback_fwd$0$0 ==.
   2081 22            [24] 9199 	ret
                           9200 ;------------------------------------------------------------
                           9201 ;Allocation info for local variables in function 'axradio_receive_callback_fwd'
                           9202 ;------------------------------------------------------------
                           9203 ;desc                      Allocated to registers 
                           9204 ;len                       Allocated to registers r6 r7 
                           9205 ;len                       Allocated to registers r6 r7 
                           9206 ;seqnr                     Allocated to registers r6 
                           9207 ;len_byte                  Allocated to registers r6 
                           9208 ;trxst                     Allocated to registers r6 
                           9209 ;iesave                    Allocated to registers r7 
                           9210 ;------------------------------------------------------------
                     184F  9211 	Feasyax5043$axradio_receive_callback_fwd$0$0 ==.
                     184F  9212 	C$easyax5043.c$1278$1$311 ==.
                           9213 ;	../COMMON/easyax5043.c:1278: static void axradio_receive_callback_fwd(struct wtimer_callback __xdata *desc)
                           9214 ;	-----------------------------------------
                           9215 ;	 function axradio_receive_callback_fwd
                           9216 ;	-----------------------------------------
   2082                    9217 _axradio_receive_callback_fwd:
                     184F  9218 	C$easyax5043.c$1284$1$313 ==.
                           9219 ;	../COMMON/easyax5043.c:1284: if (DBGLNKSTAT & 0x10)
   2082 E5 E2         [12] 9220 	mov	a,_DBGLNKSTAT
   2084 30 E4 09      [24] 9221 	jnb	acc.4,00102$
                     1854  9222 	C$easyax5043.c$1285$1$313 ==.
                           9223 ;	../COMMON/easyax5043.c:1285: dbglink_writestr("RX\n");
   2087 90 53 7D      [24] 9224 	mov	dptr,#__str_0
   208A 75 F0 80      [24] 9225 	mov	b,#0x80
   208D 12 4A 83      [24] 9226 	lcall	_dbglink_writestr
   2090                    9227 00102$:
                     185D  9228 	C$easyax5043.c$1288$1$313 ==.
                           9229 ;	../COMMON/easyax5043.c:1288: if (axradio_cb_receive.st.error != AXRADIO_ERR_NOERROR) {
   2090 90 02 37      [24] 9230 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2093 E0            [24] 9231 	movx	a,@dptr
   2094 60 09         [24] 9232 	jz	00104$
                     1863  9233 	C$easyax5043.c$1289$2$314 ==.
                           9234 ;	../COMMON/easyax5043.c:1289: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   2096 90 02 36      [24] 9235 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2099 12 37 ED      [24] 9236 	lcall	_axradio_statuschange
                     1869  9237 	C$easyax5043.c$1290$2$314 ==.
                           9238 ;	../COMMON/easyax5043.c:1290: return;
   209C 02 25 A5      [24] 9239 	ljmp	00182$
   209F                    9240 00104$:
                     186C  9241 	C$easyax5043.c$1292$1$313 ==.
                           9242 ;	../COMMON/easyax5043.c:1292: if (axradio_phy_pn9 && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   209F 90 52 78      [24] 9243 	mov	dptr,#_axradio_phy_pn9
   20A2 E4            [12] 9244 	clr	a
   20A3 93            [24] 9245 	movc	a,@a+dptr
   20A4 FF            [12] 9246 	mov	r7,a
   20A5 60 5C         [24] 9247 	jz	00106$
   20A7 74 1C         [12] 9248 	mov	a,#0x1C
   20A9 B5 0A 02      [24] 9249 	cjne	a,_axradio_mode,00304$
   20AC 80 55         [24] 9250 	sjmp	00106$
   20AE                    9251 00304$:
                     187B  9252 	C$easyax5043.c$1293$1$313 ==.
                           9253 ;	../COMMON/easyax5043.c:1293: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   20AE 74 1D         [12] 9254 	mov	a,#0x1D
   20B0 B5 0A 02      [24] 9255 	cjne	a,_axradio_mode,00305$
   20B3 80 4E         [24] 9256 	sjmp	00106$
   20B5                    9257 00305$:
                     1882  9258 	C$easyax5043.c$1294$1$313 ==.
                           9259 ;	../COMMON/easyax5043.c:1294: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   20B5 74 1E         [12] 9260 	mov	a,#0x1E
   20B7 B5 0A 02      [24] 9261 	cjne	a,_axradio_mode,00306$
   20BA 80 47         [24] 9262 	sjmp	00106$
   20BC                    9263 00306$:
                     1889  9264 	C$easyax5043.c$1295$2$315 ==.
                           9265 ;	../COMMON/easyax5043.c:1295: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   20BC 90 02 52      [24] 9266 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   20BF E0            [24] 9267 	movx	a,@dptr
   20C0 FE            [12] 9268 	mov	r6,a
   20C1 A3            [24] 9269 	inc	dptr
   20C2 E0            [24] 9270 	movx	a,@dptr
   20C3 FF            [12] 9271 	mov	r7,a
                     1891  9272 	C$easyax5043.c$1296$2$315 ==.
                           9273 ;	../COMMON/easyax5043.c:1296: len += axradio_framing_maclen;
   20C4 90 52 99      [24] 9274 	mov	dptr,#_axradio_framing_maclen
   20C7 E4            [12] 9275 	clr	a
   20C8 93            [24] 9276 	movc	a,@a+dptr
   20C9 7C 00         [12] 9277 	mov	r4,#0x00
   20CB 2E            [12] 9278 	add	a,r6
   20CC FE            [12] 9279 	mov	r6,a
   20CD EC            [12] 9280 	mov	a,r4
   20CE 3F            [12] 9281 	addc	a,r7
   20CF FF            [12] 9282 	mov	r7,a
                     189D  9283 	C$easyax5043.c$1297$2$315 ==.
                           9284 ;	../COMMON/easyax5043.c:1297: pn9_buffer((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len, 0x1ff, -(AX5043_ENCODING & 0x01));
   20D0 90 40 11      [24] 9285 	mov	dptr,#_AX5043_ENCODING
   20D3 E0            [24] 9286 	movx	a,@dptr
   20D4 FD            [12] 9287 	mov	r5,a
   20D5 53 05 01      [24] 9288 	anl	ar5,#0x01
   20D8 C3            [12] 9289 	clr	c
   20D9 E4            [12] 9290 	clr	a
   20DA 9D            [12] 9291 	subb	a,r5
   20DB FD            [12] 9292 	mov	r5,a
   20DC 90 02 4E      [24] 9293 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   20DF E0            [24] 9294 	movx	a,@dptr
   20E0 FB            [12] 9295 	mov	r3,a
   20E1 A3            [24] 9296 	inc	dptr
   20E2 E0            [24] 9297 	movx	a,@dptr
   20E3 FC            [12] 9298 	mov	r4,a
   20E4 7A 00         [12] 9299 	mov	r2,#0x00
   20E6 C0 05         [24] 9300 	push	ar5
   20E8 74 FF         [12] 9301 	mov	a,#0xFF
   20EA C0 E0         [24] 9302 	push	acc
   20EC 74 01         [12] 9303 	mov	a,#0x01
   20EE C0 E0         [24] 9304 	push	acc
   20F0 C0 06         [24] 9305 	push	ar6
   20F2 C0 07         [24] 9306 	push	ar7
   20F4 8B 82         [24] 9307 	mov	dpl,r3
   20F6 8C 83         [24] 9308 	mov	dph,r4
   20F8 8A F0         [24] 9309 	mov	b,r2
   20FA 12 44 B7      [24] 9310 	lcall	_pn9_buffer
   20FD E5 81         [12] 9311 	mov	a,sp
   20FF 24 FB         [12] 9312 	add	a,#0xfb
   2101 F5 81         [12] 9313 	mov	sp,a
   2103                    9314 00106$:
                     18D0  9315 	C$easyax5043.c$1299$1$313 ==.
                           9316 ;	../COMMON/easyax5043.c:1299: if (axradio_framing_swcrclen && !(axradio_mode == AXRADIO_MODE_STREAM_RECEIVE ||
   2103 90 52 A0      [24] 9317 	mov	dptr,#_axradio_framing_swcrclen
   2106 E4            [12] 9318 	clr	a
   2107 93            [24] 9319 	movc	a,@a+dptr
   2108 FF            [12] 9320 	mov	r7,a
   2109 60 67         [24] 9321 	jz	00113$
   210B 74 1C         [12] 9322 	mov	a,#0x1C
   210D B5 0A 02      [24] 9323 	cjne	a,_axradio_mode,00308$
   2110 80 60         [24] 9324 	sjmp	00113$
   2112                    9325 00308$:
                     18DF  9326 	C$easyax5043.c$1300$1$313 ==.
                           9327 ;	../COMMON/easyax5043.c:1300: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC ||
   2112 74 1D         [12] 9328 	mov	a,#0x1D
   2114 B5 0A 02      [24] 9329 	cjne	a,_axradio_mode,00309$
   2117 80 59         [24] 9330 	sjmp	00113$
   2119                    9331 00309$:
                     18E6  9332 	C$easyax5043.c$1301$1$313 ==.
                           9333 ;	../COMMON/easyax5043.c:1301: axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)) {
   2119 74 1E         [12] 9334 	mov	a,#0x1E
   211B B5 0A 02      [24] 9335 	cjne	a,_axradio_mode,00310$
   211E 80 52         [24] 9336 	sjmp	00113$
   2120                    9337 00310$:
                     18ED  9338 	C$easyax5043.c$1302$2$316 ==.
                           9339 ;	../COMMON/easyax5043.c:1302: uint16_t __autodata len = axradio_cb_receive.st.rx.pktlen;
   2120 90 02 52      [24] 9340 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2123 E0            [24] 9341 	movx	a,@dptr
   2124 FE            [12] 9342 	mov	r6,a
   2125 A3            [24] 9343 	inc	dptr
   2126 E0            [24] 9344 	movx	a,@dptr
   2127 FF            [12] 9345 	mov	r7,a
                     18F5  9346 	C$easyax5043.c$1303$2$316 ==.
                           9347 ;	../COMMON/easyax5043.c:1303: len += axradio_framing_maclen;
   2128 90 52 99      [24] 9348 	mov	dptr,#_axradio_framing_maclen
   212B E4            [12] 9349 	clr	a
   212C 93            [24] 9350 	movc	a,@a+dptr
   212D 7C 00         [12] 9351 	mov	r4,#0x00
   212F 2E            [12] 9352 	add	a,r6
   2130 FE            [12] 9353 	mov	r6,a
   2131 EC            [12] 9354 	mov	a,r4
   2132 3F            [12] 9355 	addc	a,r7
   2133 FF            [12] 9356 	mov	r7,a
                     1901  9357 	C$easyax5043.c$1304$2$316 ==.
                           9358 ;	../COMMON/easyax5043.c:1304: if (!axradio_framing_check_crc((__xdata uint8_t *)axradio_cb_receive.st.rx.mac.raw, len)) {
   2134 90 02 4E      [24] 9359 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2137 E0            [24] 9360 	movx	a,@dptr
   2138 FC            [12] 9361 	mov	r4,a
   2139 A3            [24] 9362 	inc	dptr
   213A E0            [24] 9363 	movx	a,@dptr
   213B FD            [12] 9364 	mov	r5,a
   213C C0 06         [24] 9365 	push	ar6
   213E C0 07         [24] 9366 	push	ar7
   2140 8C 82         [24] 9367 	mov	dpl,r4
   2142 8D 83         [24] 9368 	mov	dph,r5
   2144 12 06 2B      [24] 9369 	lcall	_axradio_framing_check_crc
   2147 AF 82         [24] 9370 	mov	r7,dpl
   2149 15 81         [12] 9371 	dec	sp
   214B 15 81         [12] 9372 	dec	sp
   214D EF            [12] 9373 	mov	a,r7
   214E 70 03         [24] 9374 	jnz	00311$
   2150 02 25 59      [24] 9375 	ljmp	00165$
   2153                    9376 00311$:
                     1920  9377 	C$easyax5043.c$1308$2$316 ==.
                           9378 ;	../COMMON/easyax5043.c:1308: axradio_cb_receive.st.rx.pktlen -= axradio_framing_swcrclen; // drop crc
   2153 90 02 52      [24] 9379 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   2156 E0            [24] 9380 	movx	a,@dptr
   2157 FE            [12] 9381 	mov	r6,a
   2158 A3            [24] 9382 	inc	dptr
   2159 E0            [24] 9383 	movx	a,@dptr
   215A FF            [12] 9384 	mov	r7,a
   215B 90 52 A0      [24] 9385 	mov	dptr,#_axradio_framing_swcrclen
   215E E4            [12] 9386 	clr	a
   215F 93            [24] 9387 	movc	a,@a+dptr
   2160 FD            [12] 9388 	mov	r5,a
   2161 7C 00         [12] 9389 	mov	r4,#0x00
   2163 EE            [12] 9390 	mov	a,r6
   2164 C3            [12] 9391 	clr	c
   2165 9D            [12] 9392 	subb	a,r5
   2166 FE            [12] 9393 	mov	r6,a
   2167 EF            [12] 9394 	mov	a,r7
   2168 9C            [12] 9395 	subb	a,r4
   2169 FF            [12] 9396 	mov	r7,a
   216A 90 02 52      [24] 9397 	mov	dptr,#(_axradio_cb_receive + 0x0020)
   216D EE            [12] 9398 	mov	a,r6
   216E F0            [24] 9399 	movx	@dptr,a
   216F EF            [12] 9400 	mov	a,r7
   2170 A3            [24] 9401 	inc	dptr
   2171 F0            [24] 9402 	movx	@dptr,a
   2172                    9403 00113$:
                     193F  9404 	C$easyax5043.c$1312$1$313 ==.
                           9405 ;	../COMMON/easyax5043.c:1312: axradio_cb_receive.st.rx.phy.timeoffset = 0;
   2172 90 02 42      [24] 9406 	mov	dptr,#(_axradio_cb_receive + 0x0010)
   2175 E4            [12] 9407 	clr	a
   2176 F0            [24] 9408 	movx	@dptr,a
   2177 E4            [12] 9409 	clr	a
   2178 A3            [24] 9410 	inc	dptr
   2179 F0            [24] 9411 	movx	@dptr,a
                     1947  9412 	C$easyax5043.c$1313$1$313 ==.
                           9413 ;	../COMMON/easyax5043.c:1313: axradio_cb_receive.st.rx.phy.period = 0;
   217A 90 02 44      [24] 9414 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   217D E4            [12] 9415 	clr	a
   217E F0            [24] 9416 	movx	@dptr,a
   217F E4            [12] 9417 	clr	a
   2180 A3            [24] 9418 	inc	dptr
   2181 F0            [24] 9419 	movx	@dptr,a
                     194F  9420 	C$easyax5043.c$1314$1$313 ==.
                           9421 ;	../COMMON/easyax5043.c:1314: if (axradio_mode == AXRADIO_MODE_ACK_TRANSMIT ||
   2182 74 12         [12] 9422 	mov	a,#0x12
   2184 B5 0A 02      [24] 9423 	cjne	a,_axradio_mode,00312$
   2187 80 0C         [24] 9424 	sjmp	00119$
   2189                    9425 00312$:
                     1956  9426 	C$easyax5043.c$1315$1$313 ==.
                           9427 ;	../COMMON/easyax5043.c:1315: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT ||
   2189 74 13         [12] 9428 	mov	a,#0x13
   218B B5 0A 02      [24] 9429 	cjne	a,_axradio_mode,00313$
   218E 80 05         [24] 9430 	sjmp	00119$
   2190                    9431 00313$:
                     195D  9432 	C$easyax5043.c$1316$1$313 ==.
                           9433 ;	../COMMON/easyax5043.c:1316: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   2190 74 21         [12] 9434 	mov	a,#0x21
   2192 B5 0A 60      [24] 9435 	cjne	a,_axradio_mode,00120$
   2195                    9436 00119$:
                     1962  9437 	C$easyax5043.c$1317$2$318 ==.
                           9438 ;	../COMMON/easyax5043.c:1317: ax5043_off();
   2195 12 14 7D      [24] 9439 	lcall	_ax5043_off
                     1965  9440 	C$easyax5043.c$1318$2$318 ==.
                           9441 ;	../COMMON/easyax5043.c:1318: wtimer_remove(&axradio_timer);
   2198 90 02 89      [24] 9442 	mov	dptr,#_axradio_timer
   219B 12 4C D4      [24] 9443 	lcall	_wtimer_remove
                     196B  9444 	C$easyax5043.c$1319$2$318 ==.
                           9445 ;	../COMMON/easyax5043.c:1319: if (axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER) {
   219E 74 21         [12] 9446 	mov	a,#0x21
   21A0 B5 0A 26      [24] 9447 	cjne	a,_axradio_mode,00118$
                     1970  9448 	C$easyax5043.c$1320$3$319 ==.
                           9449 ;	../COMMON/easyax5043.c:1320: axradio_syncstate = syncstate_master_normal;
   21A3 90 00 04      [24] 9450 	mov	dptr,#_axradio_syncstate
   21A6 74 03         [12] 9451 	mov	a,#0x03
   21A8 F0            [24] 9452 	movx	@dptr,a
                     1976  9453 	C$easyax5043.c$1321$3$319 ==.
                           9454 ;	../COMMON/easyax5043.c:1321: axradio_sync_settimeradv(axradio_sync_xoscstartup);
   21A9 90 52 B9      [24] 9455 	mov	dptr,#_axradio_sync_xoscstartup
   21AC E4            [12] 9456 	clr	a
   21AD 93            [24] 9457 	movc	a,@a+dptr
   21AE FC            [12] 9458 	mov	r4,a
   21AF 74 01         [12] 9459 	mov	a,#0x01
   21B1 93            [24] 9460 	movc	a,@a+dptr
   21B2 FD            [12] 9461 	mov	r5,a
   21B3 74 02         [12] 9462 	mov	a,#0x02
   21B5 93            [24] 9463 	movc	a,@a+dptr
   21B6 FE            [12] 9464 	mov	r6,a
   21B7 74 03         [12] 9465 	mov	a,#0x03
   21B9 93            [24] 9466 	movc	a,@a+dptr
   21BA 8C 82         [24] 9467 	mov	dpl,r4
   21BC 8D 83         [24] 9468 	mov	dph,r5
   21BE 8E F0         [24] 9469 	mov	b,r6
   21C0 12 16 6E      [24] 9470 	lcall	_axradio_sync_settimeradv
                     1990  9471 	C$easyax5043.c$1322$3$319 ==.
                           9472 ;	../COMMON/easyax5043.c:1322: wtimer0_addabsolute(&axradio_timer);
   21C3 90 02 89      [24] 9473 	mov	dptr,#_axradio_timer
   21C6 12 44 64      [24] 9474 	lcall	_wtimer0_addabsolute
   21C9                    9475 00118$:
                     1996  9476 	C$easyax5043.c$1324$2$318 ==.
                           9477 ;	../COMMON/easyax5043.c:1324: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   21C9 90 02 75      [24] 9478 	mov	dptr,#_axradio_cb_transmitend
   21CC 12 4E DE      [24] 9479 	lcall	_wtimer_remove_callback
                     199C  9480 	C$easyax5043.c$1325$2$318 ==.
                           9481 ;	../COMMON/easyax5043.c:1325: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   21CF 90 02 7A      [24] 9482 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   21D2 E4            [12] 9483 	clr	a
   21D3 F0            [24] 9484 	movx	@dptr,a
                     19A1  9485 	C$easyax5043.c$1326$2$318 ==.
                           9486 ;	../COMMON/easyax5043.c:1326: axradio_cb_transmitend.st.time.t = radio_read24((uint16_t)&AX5043_TIMER2);
   21D4 90 40 59      [24] 9487 	mov	dptr,#_AX5043_TIMER2
   21D7 12 44 90      [24] 9488 	lcall	_radio_read24
   21DA AC 82         [24] 9489 	mov	r4,dpl
   21DC AD 83         [24] 9490 	mov	r5,dph
   21DE AE F0         [24] 9491 	mov	r6,b
   21E0 FF            [12] 9492 	mov	r7,a
   21E1 90 02 7B      [24] 9493 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   21E4 EC            [12] 9494 	mov	a,r4
   21E5 F0            [24] 9495 	movx	@dptr,a
   21E6 ED            [12] 9496 	mov	a,r5
   21E7 A3            [24] 9497 	inc	dptr
   21E8 F0            [24] 9498 	movx	@dptr,a
   21E9 EE            [12] 9499 	mov	a,r6
   21EA A3            [24] 9500 	inc	dptr
   21EB F0            [24] 9501 	movx	@dptr,a
   21EC EF            [12] 9502 	mov	a,r7
   21ED A3            [24] 9503 	inc	dptr
   21EE F0            [24] 9504 	movx	@dptr,a
                     19BC  9505 	C$easyax5043.c$1327$2$318 ==.
                           9506 ;	../COMMON/easyax5043.c:1327: wtimer_add_callback(&axradio_cb_transmitend.cb);
   21EF 90 02 75      [24] 9507 	mov	dptr,#_axradio_cb_transmitend
   21F2 12 43 37      [24] 9508 	lcall	_wtimer_add_callback
   21F5                    9509 00120$:
                     19C2  9510 	C$easyax5043.c$1329$1$313 ==.
                           9511 ;	../COMMON/easyax5043.c:1329: if (axradio_framing_destaddrpos != 0xff)
   21F5 90 52 9B      [24] 9512 	mov	dptr,#_axradio_framing_destaddrpos
   21F8 E4            [12] 9513 	clr	a
   21F9 93            [24] 9514 	movc	a,@a+dptr
   21FA FF            [12] 9515 	mov	r7,a
   21FB BF FF 02      [24] 9516 	cjne	r7,#0xFF,00318$
   21FE 80 29         [24] 9517 	sjmp	00124$
   2200                    9518 00318$:
                     19CD  9519 	C$easyax5043.c$1330$1$313 ==.
                           9520 ;	../COMMON/easyax5043.c:1330: memcpy_xdata(&axradio_cb_receive.st.rx.mac.localaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_destaddrpos], axradio_framing_addrlen);
   2200 90 02 4E      [24] 9521 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2203 E0            [24] 9522 	movx	a,@dptr
   2204 FD            [12] 9523 	mov	r5,a
   2205 A3            [24] 9524 	inc	dptr
   2206 E0            [24] 9525 	movx	a,@dptr
   2207 FE            [12] 9526 	mov	r6,a
   2208 EF            [12] 9527 	mov	a,r7
   2209 2D            [12] 9528 	add	a,r5
   220A FF            [12] 9529 	mov	r7,a
   220B E4            [12] 9530 	clr	a
   220C 3E            [12] 9531 	addc	a,r6
   220D FC            [12] 9532 	mov	r4,a
   220E 8F 27         [24] 9533 	mov	_memcpy_PARM_2,r7
   2210 8C 28         [24] 9534 	mov	(_memcpy_PARM_2 + 1),r4
   2212 75 29 00      [24] 9535 	mov	(_memcpy_PARM_2 + 2),#0x00
   2215 90 52 9A      [24] 9536 	mov	dptr,#_axradio_framing_addrlen
   2218 E4            [12] 9537 	clr	a
   2219 93            [24] 9538 	movc	a,@a+dptr
   221A FF            [12] 9539 	mov	r7,a
   221B 8F 2A         [24] 9540 	mov	_memcpy_PARM_3,r7
   221D 75 2B 00      [24] 9541 	mov	(_memcpy_PARM_3 + 1),#0x00
   2220 90 02 4A      [24] 9542 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   2223 75 F0 00      [24] 9543 	mov	b,#0x00
   2226 12 42 E2      [24] 9544 	lcall	_memcpy
   2229                    9545 00124$:
                     19F6  9546 	C$easyax5043.c$1331$1$313 ==.
                           9547 ;	../COMMON/easyax5043.c:1331: if (axradio_framing_sourceaddrpos != 0xff)
   2229 90 52 9C      [24] 9548 	mov	dptr,#_axradio_framing_sourceaddrpos
   222C E4            [12] 9549 	clr	a
   222D 93            [24] 9550 	movc	a,@a+dptr
   222E FF            [12] 9551 	mov	r7,a
   222F BF FF 02      [24] 9552 	cjne	r7,#0xFF,00319$
   2232 80 29         [24] 9553 	sjmp	00126$
   2234                    9554 00319$:
                     1A01  9555 	C$easyax5043.c$1332$1$313 ==.
                           9556 ;	../COMMON/easyax5043.c:1332: memcpy_xdata(&axradio_cb_receive.st.rx.mac.remoteaddr, &axradio_cb_receive.st.rx.mac.raw[axradio_framing_sourceaddrpos], axradio_framing_addrlen);
   2234 90 02 4E      [24] 9557 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   2237 E0            [24] 9558 	movx	a,@dptr
   2238 FD            [12] 9559 	mov	r5,a
   2239 A3            [24] 9560 	inc	dptr
   223A E0            [24] 9561 	movx	a,@dptr
   223B FE            [12] 9562 	mov	r6,a
   223C EF            [12] 9563 	mov	a,r7
   223D 2D            [12] 9564 	add	a,r5
   223E FF            [12] 9565 	mov	r7,a
   223F E4            [12] 9566 	clr	a
   2240 3E            [12] 9567 	addc	a,r6
   2241 FC            [12] 9568 	mov	r4,a
   2242 8F 27         [24] 9569 	mov	_memcpy_PARM_2,r7
   2244 8C 28         [24] 9570 	mov	(_memcpy_PARM_2 + 1),r4
   2246 75 29 00      [24] 9571 	mov	(_memcpy_PARM_2 + 2),#0x00
   2249 90 52 9A      [24] 9572 	mov	dptr,#_axradio_framing_addrlen
   224C E4            [12] 9573 	clr	a
   224D 93            [24] 9574 	movc	a,@a+dptr
   224E FF            [12] 9575 	mov	r7,a
   224F 8F 2A         [24] 9576 	mov	_memcpy_PARM_3,r7
   2251 75 2B 00      [24] 9577 	mov	(_memcpy_PARM_3 + 1),#0x00
   2254 90 02 46      [24] 9578 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   2257 75 F0 00      [24] 9579 	mov	b,#0x00
   225A 12 42 E2      [24] 9580 	lcall	_memcpy
   225D                    9581 00126$:
                     1A2A  9582 	C$easyax5043.c$1333$1$313 ==.
                           9583 ;	../COMMON/easyax5043.c:1333: if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   225D 74 1A         [12] 9584 	mov	a,#0x1A
   225F B5 0A 02      [24] 9585 	cjne	a,_axradio_mode,00320$
   2262 80 11         [24] 9586 	sjmp	00148$
   2264                    9587 00320$:
                     1A31  9588 	C$easyax5043.c$1334$1$313 ==.
                           9589 ;	../COMMON/easyax5043.c:1334: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE ||
   2264 74 1B         [12] 9590 	mov	a,#0x1B
   2266 B5 0A 02      [24] 9591 	cjne	a,_axradio_mode,00321$
   2269 80 0A         [24] 9592 	sjmp	00148$
   226B                    9593 00321$:
                     1A38  9594 	C$easyax5043.c$1335$1$313 ==.
                           9595 ;	../COMMON/easyax5043.c:1335: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   226B 74 23         [12] 9596 	mov	a,#0x23
   226D B5 0A 02      [24] 9597 	cjne	a,_axradio_mode,00322$
   2270 80 03         [24] 9598 	sjmp	00323$
   2272                    9599 00322$:
   2272 02 24 6F      [24] 9600 	ljmp	00149$
   2275                    9601 00323$:
   2275                    9602 00148$:
                     1A42  9603 	C$easyax5043.c$1336$2$320 ==.
                           9604 ;	../COMMON/easyax5043.c:1336: axradio_ack_count = 0;
   2275 90 00 0E      [24] 9605 	mov	dptr,#_axradio_ack_count
   2278 E4            [12] 9606 	clr	a
   2279 F0            [24] 9607 	movx	@dptr,a
                     1A47  9608 	C$easyax5043.c$1337$2$320 ==.
                           9609 ;	../COMMON/easyax5043.c:1337: axradio_txbuffer_len = axradio_framing_maclen + axradio_framing_minpayloadlen;
   227A 90 52 99      [24] 9610 	mov	dptr,#_axradio_framing_maclen
   227D E4            [12] 9611 	clr	a
   227E 93            [24] 9612 	movc	a,@a+dptr
   227F FF            [12] 9613 	mov	r7,a
   2280 FD            [12] 9614 	mov	r5,a
   2281 7E 00         [12] 9615 	mov	r6,#0x00
   2283 90 52 B2      [24] 9616 	mov	dptr,#_axradio_framing_minpayloadlen
   2286 E4            [12] 9617 	clr	a
   2287 93            [24] 9618 	movc	a,@a+dptr
   2288 FC            [12] 9619 	mov	r4,a
   2289 7B 00         [12] 9620 	mov	r3,#0x00
   228B 90 00 05      [24] 9621 	mov	dptr,#_axradio_txbuffer_len
   228E EC            [12] 9622 	mov	a,r4
   228F 2D            [12] 9623 	add	a,r5
   2290 F0            [24] 9624 	movx	@dptr,a
   2291 EB            [12] 9625 	mov	a,r3
   2292 3E            [12] 9626 	addc	a,r6
   2293 A3            [24] 9627 	inc	dptr
   2294 F0            [24] 9628 	movx	@dptr,a
                     1A62  9629 	C$easyax5043.c$1338$2$320 ==.
                           9630 ;	../COMMON/easyax5043.c:1338: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   2295 8F 28         [24] 9631 	mov	_memset_PARM_3,r7
   2297 75 29 00      [24] 9632 	mov	(_memset_PARM_3 + 1),#0x00
   229A 75 27 00      [24] 9633 	mov	_memset_PARM_2,#0x00
   229D 90 00 2A      [24] 9634 	mov	dptr,#_axradio_txbuffer
   22A0 75 F0 00      [24] 9635 	mov	b,#0x00
   22A3 12 42 C3      [24] 9636 	lcall	_memset
                     1A73  9637 	C$easyax5043.c$1339$2$320 ==.
                           9638 ;	../COMMON/easyax5043.c:1339: if (axradio_framing_ack_seqnrpos != 0xff) {
   22A6 90 52 B1      [24] 9639 	mov	dptr,#_axradio_framing_ack_seqnrpos
   22A9 E4            [12] 9640 	clr	a
   22AA 93            [24] 9641 	movc	a,@a+dptr
   22AB FF            [12] 9642 	mov	r7,a
   22AC BF FF 02      [24] 9643 	cjne	r7,#0xFF,00324$
   22AF 80 35         [24] 9644 	sjmp	00131$
   22B1                    9645 00324$:
                     1A7E  9646 	C$easyax5043.c$1340$3$321 ==.
                           9647 ;	../COMMON/easyax5043.c:1340: uint8_t seqnr = axradio_cb_receive.st.rx.mac.raw[axradio_framing_ack_seqnrpos];
   22B1 90 02 4E      [24] 9648 	mov	dptr,#(_axradio_cb_receive + 0x001c)
   22B4 E0            [24] 9649 	movx	a,@dptr
   22B5 FD            [12] 9650 	mov	r5,a
   22B6 A3            [24] 9651 	inc	dptr
   22B7 E0            [24] 9652 	movx	a,@dptr
   22B8 FE            [12] 9653 	mov	r6,a
   22B9 EF            [12] 9654 	mov	a,r7
   22BA 2D            [12] 9655 	add	a,r5
   22BB F5 82         [12] 9656 	mov	dpl,a
   22BD E4            [12] 9657 	clr	a
   22BE 3E            [12] 9658 	addc	a,r6
   22BF F5 83         [12] 9659 	mov	dph,a
   22C1 E0            [24] 9660 	movx	a,@dptr
   22C2 FE            [12] 9661 	mov	r6,a
                     1A90  9662 	C$easyax5043.c$1341$3$321 ==.
                           9663 ;	../COMMON/easyax5043.c:1341: axradio_txbuffer[axradio_framing_ack_seqnrpos] = seqnr;
   22C3 EF            [12] 9664 	mov	a,r7
   22C4 24 2A         [12] 9665 	add	a,#_axradio_txbuffer
   22C6 F5 82         [12] 9666 	mov	dpl,a
   22C8 E4            [12] 9667 	clr	a
   22C9 34 00         [12] 9668 	addc	a,#(_axradio_txbuffer >> 8)
   22CB F5 83         [12] 9669 	mov	dph,a
   22CD EE            [12] 9670 	mov	a,r6
   22CE F0            [24] 9671 	movx	@dptr,a
                     1A9C  9672 	C$easyax5043.c$1342$3$321 ==.
                           9673 ;	../COMMON/easyax5043.c:1342: if (axradio_ack_seqnr != seqnr)
   22CF 90 00 0F      [24] 9674 	mov	dptr,#_axradio_ack_seqnr
   22D2 E0            [24] 9675 	movx	a,@dptr
   22D3 FF            [12] 9676 	mov	r7,a
   22D4 B5 06 02      [24] 9677 	cjne	a,ar6,00325$
   22D7 80 07         [24] 9678 	sjmp	00128$
   22D9                    9679 00325$:
                     1AA6  9680 	C$easyax5043.c$1343$3$321 ==.
                           9681 ;	../COMMON/easyax5043.c:1343: axradio_ack_seqnr = seqnr;
   22D9 90 00 0F      [24] 9682 	mov	dptr,#_axradio_ack_seqnr
   22DC EE            [12] 9683 	mov	a,r6
   22DD F0            [24] 9684 	movx	@dptr,a
   22DE 80 06         [24] 9685 	sjmp	00131$
   22E0                    9686 00128$:
                     1AAD  9687 	C$easyax5043.c$1345$3$321 ==.
                           9688 ;	../COMMON/easyax5043.c:1345: axradio_cb_receive.st.error = AXRADIO_ERR_RETRANSMISSION;
   22E0 90 02 37      [24] 9689 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   22E3 74 08         [12] 9690 	mov	a,#0x08
   22E5 F0            [24] 9691 	movx	@dptr,a
   22E6                    9692 00131$:
                     1AB3  9693 	C$easyax5043.c$1347$2$320 ==.
                           9694 ;	../COMMON/easyax5043.c:1347: if (axradio_framing_destaddrpos != 0xff) {
   22E6 90 52 9B      [24] 9695 	mov	dptr,#_axradio_framing_destaddrpos
   22E9 E4            [12] 9696 	clr	a
   22EA 93            [24] 9697 	movc	a,@a+dptr
   22EB FF            [12] 9698 	mov	r7,a
   22EC BF FF 02      [24] 9699 	cjne	r7,#0xFF,00326$
   22EF 80 5B         [24] 9700 	sjmp	00136$
   22F1                    9701 00326$:
                     1ABE  9702 	C$easyax5043.c$1348$3$322 ==.
                           9703 ;	../COMMON/easyax5043.c:1348: if (axradio_framing_sourceaddrpos != 0xff)
   22F1 90 52 9C      [24] 9704 	mov	dptr,#_axradio_framing_sourceaddrpos
   22F4 E4            [12] 9705 	clr	a
   22F5 93            [24] 9706 	movc	a,@a+dptr
   22F6 FE            [12] 9707 	mov	r6,a
   22F7 BE FF 02      [24] 9708 	cjne	r6,#0xFF,00327$
   22FA 80 29         [24] 9709 	sjmp	00133$
   22FC                    9710 00327$:
                     1AC9  9711 	C$easyax5043.c$1349$3$322 ==.
                           9712 ;	../COMMON/easyax5043.c:1349: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_cb_receive.st.rx.mac.remoteaddr, axradio_framing_addrlen);
   22FC EF            [12] 9713 	mov	a,r7
   22FD 24 2A         [12] 9714 	add	a,#_axradio_txbuffer
   22FF FD            [12] 9715 	mov	r5,a
   2300 E4            [12] 9716 	clr	a
   2301 34 00         [12] 9717 	addc	a,#(_axradio_txbuffer >> 8)
   2303 FE            [12] 9718 	mov	r6,a
   2304 7C 00         [12] 9719 	mov	r4,#0x00
   2306 75 27 46      [24] 9720 	mov	_memcpy_PARM_2,#(_axradio_cb_receive + 0x0014)
   2309 75 28 02      [24] 9721 	mov	(_memcpy_PARM_2 + 1),#((_axradio_cb_receive + 0x0014) >> 8)
   230C 75 29 00      [24] 9722 	mov	(_memcpy_PARM_2 + 2),#0x00
   230F 90 52 9A      [24] 9723 	mov	dptr,#_axradio_framing_addrlen
   2312 E4            [12] 9724 	clr	a
   2313 93            [24] 9725 	movc	a,@a+dptr
   2314 FB            [12] 9726 	mov	r3,a
   2315 8B 2A         [24] 9727 	mov	_memcpy_PARM_3,r3
   2317 75 2B 00      [24] 9728 	mov	(_memcpy_PARM_3 + 1),#0x00
   231A 8D 82         [24] 9729 	mov	dpl,r5
   231C 8E 83         [24] 9730 	mov	dph,r6
   231E 8C F0         [24] 9731 	mov	b,r4
   2320 12 42 E2      [24] 9732 	lcall	_memcpy
   2323 80 27         [24] 9733 	sjmp	00136$
   2325                    9734 00133$:
                     1AF2  9735 	C$easyax5043.c$1351$3$322 ==.
                           9736 ;	../COMMON/easyax5043.c:1351: memcpy_xdata(&axradio_txbuffer[axradio_framing_destaddrpos], &axradio_default_remoteaddr, axradio_framing_addrlen);
   2325 EF            [12] 9737 	mov	a,r7
   2326 24 2A         [12] 9738 	add	a,#_axradio_txbuffer
   2328 FF            [12] 9739 	mov	r7,a
   2329 E4            [12] 9740 	clr	a
   232A 34 00         [12] 9741 	addc	a,#(_axradio_txbuffer >> 8)
   232C FE            [12] 9742 	mov	r6,a
   232D 7D 00         [12] 9743 	mov	r5,#0x00
   232F 75 27 26      [24] 9744 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   2332 75 28 00      [24] 9745 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   2335 75 29 00      [24] 9746 	mov	(_memcpy_PARM_2 + 2),#0x00
   2338 90 52 9A      [24] 9747 	mov	dptr,#_axradio_framing_addrlen
   233B E4            [12] 9748 	clr	a
   233C 93            [24] 9749 	movc	a,@a+dptr
   233D FC            [12] 9750 	mov	r4,a
   233E 8C 2A         [24] 9751 	mov	_memcpy_PARM_3,r4
   2340 75 2B 00      [24] 9752 	mov	(_memcpy_PARM_3 + 1),#0x00
   2343 8F 82         [24] 9753 	mov	dpl,r7
   2345 8E 83         [24] 9754 	mov	dph,r6
   2347 8D F0         [24] 9755 	mov	b,r5
   2349 12 42 E2      [24] 9756 	lcall	_memcpy
   234C                    9757 00136$:
                     1B19  9758 	C$easyax5043.c$1353$2$320 ==.
                           9759 ;	../COMMON/easyax5043.c:1353: if (axradio_framing_sourceaddrpos != 0xff)
   234C 90 52 9C      [24] 9760 	mov	dptr,#_axradio_framing_sourceaddrpos
   234F E4            [12] 9761 	clr	a
   2350 93            [24] 9762 	movc	a,@a+dptr
   2351 FF            [12] 9763 	mov	r7,a
   2352 BF FF 02      [24] 9764 	cjne	r7,#0xFF,00328$
   2355 80 27         [24] 9765 	sjmp	00138$
   2357                    9766 00328$:
                     1B24  9767 	C$easyax5043.c$1354$2$320 ==.
                           9768 ;	../COMMON/easyax5043.c:1354: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   2357 EF            [12] 9769 	mov	a,r7
   2358 24 2A         [12] 9770 	add	a,#_axradio_txbuffer
   235A FF            [12] 9771 	mov	r7,a
   235B E4            [12] 9772 	clr	a
   235C 34 00         [12] 9773 	addc	a,#(_axradio_txbuffer >> 8)
   235E FE            [12] 9774 	mov	r6,a
   235F 7D 00         [12] 9775 	mov	r5,#0x00
   2361 75 27 1E      [24] 9776 	mov	_memcpy_PARM_2,#_axradio_localaddr
   2364 75 28 00      [24] 9777 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2367 75 29 00      [24] 9778 	mov	(_memcpy_PARM_2 + 2),#0x00
   236A 90 52 9A      [24] 9779 	mov	dptr,#_axradio_framing_addrlen
   236D E4            [12] 9780 	clr	a
   236E 93            [24] 9781 	movc	a,@a+dptr
   236F FC            [12] 9782 	mov	r4,a
   2370 8C 2A         [24] 9783 	mov	_memcpy_PARM_3,r4
   2372 75 2B 00      [24] 9784 	mov	(_memcpy_PARM_3 + 1),#0x00
   2375 8F 82         [24] 9785 	mov	dpl,r7
   2377 8E 83         [24] 9786 	mov	dph,r6
   2379 8D F0         [24] 9787 	mov	b,r5
   237B 12 42 E2      [24] 9788 	lcall	_memcpy
   237E                    9789 00138$:
                     1B4B  9790 	C$easyax5043.c$1355$2$320 ==.
                           9791 ;	../COMMON/easyax5043.c:1355: if (axradio_framing_lenmask) {
   237E 90 52 9F      [24] 9792 	mov	dptr,#_axradio_framing_lenmask
   2381 E4            [12] 9793 	clr	a
   2382 93            [24] 9794 	movc	a,@a+dptr
   2383 FF            [12] 9795 	mov	r7,a
   2384 60 30         [24] 9796 	jz	00140$
                     1B53  9797 	C$easyax5043.c$1356$3$323 ==.
                           9798 ;	../COMMON/easyax5043.c:1356: uint8_t len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   2386 90 00 05      [24] 9799 	mov	dptr,#_axradio_txbuffer_len
   2389 E0            [24] 9800 	movx	a,@dptr
   238A FD            [12] 9801 	mov	r5,a
   238B A3            [24] 9802 	inc	dptr
   238C E0            [24] 9803 	movx	a,@dptr
   238D 90 52 9E      [24] 9804 	mov	dptr,#_axradio_framing_lenoffs
   2390 E4            [12] 9805 	clr	a
   2391 93            [24] 9806 	movc	a,@a+dptr
   2392 FE            [12] 9807 	mov	r6,a
   2393 ED            [12] 9808 	mov	a,r5
   2394 C3            [12] 9809 	clr	c
   2395 9E            [12] 9810 	subb	a,r6
   2396 5F            [12] 9811 	anl	a,r7
   2397 FE            [12] 9812 	mov	r6,a
                     1B65  9813 	C$easyax5043.c$1357$3$323 ==.
                           9814 ;	../COMMON/easyax5043.c:1357: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   2398 90 52 9D      [24] 9815 	mov	dptr,#_axradio_framing_lenpos
   239B E4            [12] 9816 	clr	a
   239C 93            [24] 9817 	movc	a,@a+dptr
   239D 24 2A         [12] 9818 	add	a,#_axradio_txbuffer
   239F FD            [12] 9819 	mov	r5,a
   23A0 E4            [12] 9820 	clr	a
   23A1 34 00         [12] 9821 	addc	a,#(_axradio_txbuffer >> 8)
   23A3 FC            [12] 9822 	mov	r4,a
   23A4 8D 82         [24] 9823 	mov	dpl,r5
   23A6 8C 83         [24] 9824 	mov	dph,r4
   23A8 E0            [24] 9825 	movx	a,@dptr
   23A9 FB            [12] 9826 	mov	r3,a
   23AA EF            [12] 9827 	mov	a,r7
   23AB F4            [12] 9828 	cpl	a
   23AC FF            [12] 9829 	mov	r7,a
   23AD 5B            [12] 9830 	anl	a,r3
   23AE 42 06         [12] 9831 	orl	ar6,a
   23B0 8D 82         [24] 9832 	mov	dpl,r5
   23B2 8C 83         [24] 9833 	mov	dph,r4
   23B4 EE            [12] 9834 	mov	a,r6
   23B5 F0            [24] 9835 	movx	@dptr,a
   23B6                    9836 00140$:
                     1B83  9837 	C$easyax5043.c$1359$2$320 ==.
                           9838 ;	../COMMON/easyax5043.c:1359: if (axradio_framing_swcrclen) {
   23B6 90 52 A0      [24] 9839 	mov	dptr,#_axradio_framing_swcrclen
   23B9 E4            [12] 9840 	clr	a
   23BA 93            [24] 9841 	movc	a,@a+dptr
   23BB FF            [12] 9842 	mov	r7,a
   23BC 60 2E         [24] 9843 	jz	00142$
                     1B8B  9844 	C$easyax5043.c$1360$3$324 ==.
                           9845 ;	../COMMON/easyax5043.c:1360: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   23BE 90 00 05      [24] 9846 	mov	dptr,#_axradio_txbuffer_len
   23C1 E0            [24] 9847 	movx	a,@dptr
   23C2 C0 E0         [24] 9848 	push	acc
   23C4 A3            [24] 9849 	inc	dptr
   23C5 E0            [24] 9850 	movx	a,@dptr
   23C6 C0 E0         [24] 9851 	push	acc
   23C8 90 00 2A      [24] 9852 	mov	dptr,#_axradio_txbuffer
   23CB 12 06 68      [24] 9853 	lcall	_axradio_framing_append_crc
   23CE 15 81         [12] 9854 	dec	sp
   23D0 15 81         [12] 9855 	dec	sp
                     1B9F  9856 	C$easyax5043.c$1361$3$324 ==.
                           9857 ;	../COMMON/easyax5043.c:1361: axradio_txbuffer_len += axradio_framing_swcrclen;
   23D2 90 52 A0      [24] 9858 	mov	dptr,#_axradio_framing_swcrclen
   23D5 E4            [12] 9859 	clr	a
   23D6 93            [24] 9860 	movc	a,@a+dptr
   23D7 FF            [12] 9861 	mov	r7,a
   23D8 7E 00         [12] 9862 	mov	r6,#0x00
   23DA 90 00 05      [24] 9863 	mov	dptr,#_axradio_txbuffer_len
   23DD E0            [24] 9864 	movx	a,@dptr
   23DE FC            [12] 9865 	mov	r4,a
   23DF A3            [24] 9866 	inc	dptr
   23E0 E0            [24] 9867 	movx	a,@dptr
   23E1 FD            [12] 9868 	mov	r5,a
   23E2 90 00 05      [24] 9869 	mov	dptr,#_axradio_txbuffer_len
   23E5 EF            [12] 9870 	mov	a,r7
   23E6 2C            [12] 9871 	add	a,r4
   23E7 F0            [24] 9872 	movx	@dptr,a
   23E8 EE            [12] 9873 	mov	a,r6
   23E9 3D            [12] 9874 	addc	a,r5
   23EA A3            [24] 9875 	inc	dptr
   23EB F0            [24] 9876 	movx	@dptr,a
   23EC                    9877 00142$:
                     1BB9  9878 	C$easyax5043.c$1363$2$320 ==.
                           9879 ;	../COMMON/easyax5043.c:1363: if (axradio_phy_pn9) {
   23EC 90 52 78      [24] 9880 	mov	dptr,#_axradio_phy_pn9
   23EF E4            [12] 9881 	clr	a
   23F0 93            [24] 9882 	movc	a,@a+dptr
   23F1 FF            [12] 9883 	mov	r7,a
   23F2 60 2F         [24] 9884 	jz	00144$
                     1BC1  9885 	C$easyax5043.c$1364$3$325 ==.
                           9886 ;	../COMMON/easyax5043.c:1364: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   23F4 90 40 11      [24] 9887 	mov	dptr,#_AX5043_ENCODING
   23F7 E0            [24] 9888 	movx	a,@dptr
   23F8 FF            [12] 9889 	mov	r7,a
   23F9 53 07 01      [24] 9890 	anl	ar7,#0x01
   23FC C3            [12] 9891 	clr	c
   23FD E4            [12] 9892 	clr	a
   23FE 9F            [12] 9893 	subb	a,r7
   23FF FF            [12] 9894 	mov	r7,a
   2400 C0 07         [24] 9895 	push	ar7
   2402 74 FF         [12] 9896 	mov	a,#0xFF
   2404 C0 E0         [24] 9897 	push	acc
   2406 74 01         [12] 9898 	mov	a,#0x01
   2408 C0 E0         [24] 9899 	push	acc
   240A 90 00 05      [24] 9900 	mov	dptr,#_axradio_txbuffer_len
   240D E0            [24] 9901 	movx	a,@dptr
   240E C0 E0         [24] 9902 	push	acc
   2410 A3            [24] 9903 	inc	dptr
   2411 E0            [24] 9904 	movx	a,@dptr
   2412 C0 E0         [24] 9905 	push	acc
   2414 90 00 2A      [24] 9906 	mov	dptr,#_axradio_txbuffer
   2417 75 F0 00      [24] 9907 	mov	b,#0x00
   241A 12 44 B7      [24] 9908 	lcall	_pn9_buffer
   241D E5 81         [12] 9909 	mov	a,sp
   241F 24 FB         [12] 9910 	add	a,#0xfb
   2421 F5 81         [12] 9911 	mov	sp,a
   2423                    9912 00144$:
                     1BF0  9913 	C$easyax5043.c$1366$2$320 ==.
                           9914 ;	../COMMON/easyax5043.c:1366: AX5043_IRQMASK1 = 0x00;
   2423 90 40 06      [24] 9915 	mov	dptr,#_AX5043_IRQMASK1
                     1BF3  9916 	C$easyax5043.c$1367$2$320 ==.
                           9917 ;	../COMMON/easyax5043.c:1367: AX5043_IRQMASK0 = 0x00;
   2426 E4            [12] 9918 	clr	a
   2427 F0            [24] 9919 	movx	@dptr,a
   2428 90 40 07      [24] 9920 	mov	dptr,#_AX5043_IRQMASK0
   242B F0            [24] 9921 	movx	@dptr,a
                     1BF9  9922 	C$easyax5043.c$1368$2$320 ==.
                           9923 ;	../COMMON/easyax5043.c:1368: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   242C 90 40 02      [24] 9924 	mov	dptr,#_AX5043_PWRMODE
   242F 74 05         [12] 9925 	mov	a,#0x05
   2431 F0            [24] 9926 	movx	@dptr,a
                     1BFF  9927 	C$easyax5043.c$1369$2$320 ==.
                           9928 ;	../COMMON/easyax5043.c:1369: AX5043_FIFOSTAT = 3;
   2432 90 40 28      [24] 9929 	mov	dptr,#_AX5043_FIFOSTAT
   2435 74 03         [12] 9930 	mov	a,#0x03
   2437 F0            [24] 9931 	movx	@dptr,a
                     1C05  9932 	C$easyax5043.c$1370$2$320 ==.
                           9933 ;	../COMMON/easyax5043.c:1370: axradio_trxstate = trxstate_tx_longpreamble; // ensure that trxstate != off, otherwise we would prematurely enable the receiver, see below
   2438 75 0B 0A      [24] 9934 	mov	_axradio_trxstate,#0x0A
                     1C08  9935 	C$easyax5043.c$1371$2$320 ==.
                           9936 ;	../COMMON/easyax5043.c:1371: while (AX5043_POWSTAT & 0x08);
   243B                    9937 00145$:
   243B 90 40 03      [24] 9938 	mov	dptr,#_AX5043_POWSTAT
   243E E0            [24] 9939 	movx	a,@dptr
   243F FF            [12] 9940 	mov	r7,a
   2440 20 E3 F8      [24] 9941 	jb	acc.3,00145$
                     1C10  9942 	C$easyax5043.c$1372$2$320 ==.
                           9943 ;	../COMMON/easyax5043.c:1372: wtimer_remove(&axradio_timer);
   2443 90 02 89      [24] 9944 	mov	dptr,#_axradio_timer
   2446 12 4C D4      [24] 9945 	lcall	_wtimer_remove
                     1C16  9946 	C$easyax5043.c$1373$2$320 ==.
                           9947 ;	../COMMON/easyax5043.c:1373: axradio_timer.time = axradio_framing_ack_delay;
   2449 90 52 AC      [24] 9948 	mov	dptr,#_axradio_framing_ack_delay
   244C E4            [12] 9949 	clr	a
   244D 93            [24] 9950 	movc	a,@a+dptr
   244E FC            [12] 9951 	mov	r4,a
   244F 74 01         [12] 9952 	mov	a,#0x01
   2451 93            [24] 9953 	movc	a,@a+dptr
   2452 FD            [12] 9954 	mov	r5,a
   2453 74 02         [12] 9955 	mov	a,#0x02
   2455 93            [24] 9956 	movc	a,@a+dptr
   2456 FE            [12] 9957 	mov	r6,a
   2457 74 03         [12] 9958 	mov	a,#0x03
   2459 93            [24] 9959 	movc	a,@a+dptr
   245A FF            [12] 9960 	mov	r7,a
   245B 90 02 8D      [24] 9961 	mov	dptr,#(_axradio_timer + 0x0004)
   245E EC            [12] 9962 	mov	a,r4
   245F F0            [24] 9963 	movx	@dptr,a
   2460 ED            [12] 9964 	mov	a,r5
   2461 A3            [24] 9965 	inc	dptr
   2462 F0            [24] 9966 	movx	@dptr,a
   2463 EE            [12] 9967 	mov	a,r6
   2464 A3            [24] 9968 	inc	dptr
   2465 F0            [24] 9969 	movx	@dptr,a
   2466 EF            [12] 9970 	mov	a,r7
   2467 A3            [24] 9971 	inc	dptr
   2468 F0            [24] 9972 	movx	@dptr,a
                     1C36  9973 	C$easyax5043.c$1374$2$320 ==.
                           9974 ;	../COMMON/easyax5043.c:1374: wtimer1_addrelative(&axradio_timer);
   2469 90 02 89      [24] 9975 	mov	dptr,#_axradio_timer
   246C 12 43 98      [24] 9976 	lcall	_wtimer1_addrelative
   246F                    9977 00149$:
                     1C3C  9978 	C$easyax5043.c$1376$1$313 ==.
                           9979 ;	../COMMON/easyax5043.c:1376: if (axradio_mode == AXRADIO_MODE_SYNC_SLAVE ||
   246F 74 22         [12] 9980 	mov	a,#0x22
   2471 B5 0A 02      [24] 9981 	cjne	a,_axradio_mode,00333$
   2474 80 0A         [24] 9982 	sjmp	00162$
   2476                    9983 00333$:
                     1C43  9984 	C$easyax5043.c$1377$1$313 ==.
                           9985 ;	../COMMON/easyax5043.c:1377: axradio_mode == AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2476 74 23         [12] 9986 	mov	a,#0x23
   2478 B5 0A 02      [24] 9987 	cjne	a,_axradio_mode,00334$
   247B 80 03         [24] 9988 	sjmp	00335$
   247D                    9989 00334$:
   247D 02 25 53      [24] 9990 	ljmp	00163$
   2480                    9991 00335$:
   2480                    9992 00162$:
                     1C4D  9993 	C$easyax5043.c$1378$2$326 ==.
                           9994 ;	../COMMON/easyax5043.c:1378: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE)
   2480 74 23         [12] 9995 	mov	a,#0x23
   2482 B5 0A 02      [24] 9996 	cjne	a,_axradio_mode,00336$
   2485 80 03         [24] 9997 	sjmp	00153$
   2487                    9998 00336$:
                     1C54  9999 	C$easyax5043.c$1379$2$326 ==.
                          10000 ;	../COMMON/easyax5043.c:1379: ax5043_off();
   2487 12 14 7D      [24]10001 	lcall	_ax5043_off
   248A                   10002 00153$:
                     1C57 10003 	C$easyax5043.c$1380$2$326 ==.
                          10004 ;	../COMMON/easyax5043.c:1380: switch (axradio_syncstate) {
   248A 90 00 04      [24]10005 	mov	dptr,#_axradio_syncstate
   248D E0            [24]10006 	movx	a,@dptr
   248E FF            [12]10007 	mov	r7,a
   248F BF 08 02      [24]10008 	cjne	r7,#0x08,00337$
   2492 80 45         [24]10009 	sjmp	00157$
   2494                   10010 00337$:
   2494 BF 0A 02      [24]10011 	cjne	r7,#0x0A,00338$
   2497 80 40         [24]10012 	sjmp	00157$
   2499                   10013 00338$:
   2499 BF 0B 02      [24]10014 	cjne	r7,#0x0B,00339$
   249C 80 3B         [24]10015 	sjmp	00157$
   249E                   10016 00339$:
                     1C6B 10017 	C$easyax5043.c$1384$3$327 ==.
                          10018 ;	../COMMON/easyax5043.c:1384: axradio_sync_time = axradio_conv_time_totimer0(axradio_cb_receive.st.time.t);
   249E 90 02 38      [24]10019 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   24A1 E0            [24]10020 	movx	a,@dptr
   24A2 FC            [12]10021 	mov	r4,a
   24A3 A3            [24]10022 	inc	dptr
   24A4 E0            [24]10023 	movx	a,@dptr
   24A5 FD            [12]10024 	mov	r5,a
   24A6 A3            [24]10025 	inc	dptr
   24A7 E0            [24]10026 	movx	a,@dptr
   24A8 FE            [12]10027 	mov	r6,a
   24A9 A3            [24]10028 	inc	dptr
   24AA E0            [24]10029 	movx	a,@dptr
   24AB 8C 82         [24]10030 	mov	dpl,r4
   24AD 8D 83         [24]10031 	mov	dph,r5
   24AF 8E F0         [24]10032 	mov	b,r6
   24B1 12 08 75      [24]10033 	lcall	_axradio_conv_time_totimer0
   24B4 AC 82         [24]10034 	mov	r4,dpl
   24B6 AD 83         [24]10035 	mov	r5,dph
   24B8 AE F0         [24]10036 	mov	r6,b
   24BA FF            [12]10037 	mov	r7,a
   24BB 90 00 10      [24]10038 	mov	dptr,#_axradio_sync_time
   24BE EC            [12]10039 	mov	a,r4
   24BF F0            [24]10040 	movx	@dptr,a
   24C0 ED            [12]10041 	mov	a,r5
   24C1 A3            [24]10042 	inc	dptr
   24C2 F0            [24]10043 	movx	@dptr,a
   24C3 EE            [12]10044 	mov	a,r6
   24C4 A3            [24]10045 	inc	dptr
   24C5 F0            [24]10046 	movx	@dptr,a
   24C6 EF            [12]10047 	mov	a,r7
   24C7 A3            [24]10048 	inc	dptr
   24C8 F0            [24]10049 	movx	@dptr,a
                     1C96 10050 	C$easyax5043.c$1385$3$327 ==.
                          10051 ;	../COMMON/easyax5043.c:1385: axradio_sync_periodcorr = -32768;
   24C9 90 00 14      [24]10052 	mov	dptr,#_axradio_sync_periodcorr
   24CC E4            [12]10053 	clr	a
   24CD F0            [24]10054 	movx	@dptr,a
   24CE 74 80         [12]10055 	mov	a,#0x80
   24D0 A3            [24]10056 	inc	dptr
   24D1 F0            [24]10057 	movx	@dptr,a
                     1C9F 10058 	C$easyax5043.c$1386$3$327 ==.
                          10059 ;	../COMMON/easyax5043.c:1386: axradio_sync_seqnr = 0;
   24D2 90 00 0F      [24]10060 	mov	dptr,#_axradio_ack_seqnr
   24D5 E4            [12]10061 	clr	a
   24D6 F0            [24]10062 	movx	@dptr,a
                     1CA4 10063 	C$easyax5043.c$1387$3$327 ==.
                          10064 ;	../COMMON/easyax5043.c:1387: break;
                     1CA4 10065 	C$easyax5043.c$1391$3$327 ==.
                          10066 ;	../COMMON/easyax5043.c:1391: case syncstate_slave_rxpacket:
   24D7 80 2D         [24]10067 	sjmp	00158$
   24D9                   10068 00157$:
                     1CA6 10069 	C$easyax5043.c$1392$3$327 ==.
                          10070 ;	../COMMON/easyax5043.c:1392: axradio_sync_adjustperiodcorr();
   24D9 12 16 AD      [24]10071 	lcall	_axradio_sync_adjustperiodcorr
                     1CA9 10072 	C$easyax5043.c$1393$3$327 ==.
                          10073 ;	../COMMON/easyax5043.c:1393: axradio_cb_receive.st.rx.phy.period = axradio_sync_periodcorr >> SYNC_K1;
   24DC 90 00 14      [24]10074 	mov	dptr,#_axradio_sync_periodcorr
   24DF E0            [24]10075 	movx	a,@dptr
   24E0 FE            [12]10076 	mov	r6,a
   24E1 A3            [24]10077 	inc	dptr
   24E2 E0            [24]10078 	movx	a,@dptr
   24E3 FF            [12]10079 	mov	r7,a
   24E4 C4            [12]10080 	swap	a
   24E5 03            [12]10081 	rr	a
   24E6 CE            [12]10082 	xch	a,r6
   24E7 C4            [12]10083 	swap	a
   24E8 03            [12]10084 	rr	a
   24E9 54 07         [12]10085 	anl	a,#0x07
   24EB 6E            [12]10086 	xrl	a,r6
   24EC CE            [12]10087 	xch	a,r6
   24ED 54 07         [12]10088 	anl	a,#0x07
   24EF CE            [12]10089 	xch	a,r6
   24F0 6E            [12]10090 	xrl	a,r6
   24F1 CE            [12]10091 	xch	a,r6
   24F2 30 E2 02      [24]10092 	jnb	acc.2,00340$
   24F5 44 F8         [12]10093 	orl	a,#0xF8
   24F7                   10094 00340$:
   24F7 FF            [12]10095 	mov	r7,a
   24F8 90 02 44      [24]10096 	mov	dptr,#(_axradio_cb_receive + 0x0012)
   24FB EE            [12]10097 	mov	a,r6
   24FC F0            [24]10098 	movx	@dptr,a
   24FD EF            [12]10099 	mov	a,r7
   24FE A3            [24]10100 	inc	dptr
   24FF F0            [24]10101 	movx	@dptr,a
                     1CCD 10102 	C$easyax5043.c$1394$3$327 ==.
                          10103 ;	../COMMON/easyax5043.c:1394: axradio_sync_seqnr = 1;
   2500 90 00 0F      [24]10104 	mov	dptr,#_axradio_ack_seqnr
   2503 74 01         [12]10105 	mov	a,#0x01
   2505 F0            [24]10106 	movx	@dptr,a
                     1CD3 10107 	C$easyax5043.c$1396$2$326 ==.
                          10108 ;	../COMMON/easyax5043.c:1396: };
   2506                   10109 00158$:
                     1CD3 10110 	C$easyax5043.c$1397$2$326 ==.
                          10111 ;	../COMMON/easyax5043.c:1397: axradio_sync_slave_nextperiod();
   2506 12 17 D4      [24]10112 	lcall	_axradio_sync_slave_nextperiod
                     1CD6 10113 	C$easyax5043.c$1398$2$326 ==.
                          10114 ;	../COMMON/easyax5043.c:1398: if (axradio_mode != AXRADIO_MODE_SYNC_ACK_SLAVE) {
   2509 74 23         [12]10115 	mov	a,#0x23
   250B B5 0A 02      [24]10116 	cjne	a,_axradio_mode,00341$
   250E 80 3D         [24]10117 	sjmp	00160$
   2510                   10118 00341$:
                     1CDD 10119 	C$easyax5043.c$1399$3$328 ==.
                          10120 ;	../COMMON/easyax5043.c:1399: axradio_syncstate = syncstate_slave_rxidle;
   2510 90 00 04      [24]10121 	mov	dptr,#_axradio_syncstate
   2513 74 08         [12]10122 	mov	a,#0x08
   2515 F0            [24]10123 	movx	@dptr,a
                     1CE3 10124 	C$easyax5043.c$1400$3$328 ==.
                          10125 ;	../COMMON/easyax5043.c:1400: wtimer_remove(&axradio_timer);
   2516 90 02 89      [24]10126 	mov	dptr,#_axradio_timer
   2519 12 4C D4      [24]10127 	lcall	_wtimer_remove
                     1CE9 10128 	C$easyax5043.c$1401$3$328 ==.
                          10129 ;	../COMMON/easyax5043.c:1401: axradio_sync_settimeradv(axradio_sync_slave_rxadvance[axradio_sync_seqnr]);
   251C 90 00 0F      [24]10130 	mov	dptr,#_axradio_ack_seqnr
   251F E0            [24]10131 	movx	a,@dptr
   2520 75 F0 04      [24]10132 	mov	b,#0x04
   2523 A4            [48]10133 	mul	ab
   2524 24 CD         [12]10134 	add	a,#_axradio_sync_slave_rxadvance
   2526 F5 82         [12]10135 	mov	dpl,a
   2528 74 52         [12]10136 	mov	a,#(_axradio_sync_slave_rxadvance >> 8)
   252A 35 F0         [12]10137 	addc	a,b
   252C F5 83         [12]10138 	mov	dph,a
   252E E4            [12]10139 	clr	a
   252F 93            [24]10140 	movc	a,@a+dptr
   2530 FC            [12]10141 	mov	r4,a
   2531 A3            [24]10142 	inc	dptr
   2532 E4            [12]10143 	clr	a
   2533 93            [24]10144 	movc	a,@a+dptr
   2534 FD            [12]10145 	mov	r5,a
   2535 A3            [24]10146 	inc	dptr
   2536 E4            [12]10147 	clr	a
   2537 93            [24]10148 	movc	a,@a+dptr
   2538 FE            [12]10149 	mov	r6,a
   2539 A3            [24]10150 	inc	dptr
   253A E4            [12]10151 	clr	a
   253B 93            [24]10152 	movc	a,@a+dptr
   253C 8C 82         [24]10153 	mov	dpl,r4
   253E 8D 83         [24]10154 	mov	dph,r5
   2540 8E F0         [24]10155 	mov	b,r6
   2542 12 16 6E      [24]10156 	lcall	_axradio_sync_settimeradv
                     1D12 10157 	C$easyax5043.c$1402$3$328 ==.
                          10158 ;	../COMMON/easyax5043.c:1402: wtimer0_addabsolute(&axradio_timer);
   2545 90 02 89      [24]10159 	mov	dptr,#_axradio_timer
   2548 12 44 64      [24]10160 	lcall	_wtimer0_addabsolute
   254B 80 06         [24]10161 	sjmp	00163$
   254D                   10162 00160$:
                     1D1A 10163 	C$easyax5043.c$1404$3$329 ==.
                          10164 ;	../COMMON/easyax5043.c:1404: axradio_syncstate = syncstate_slave_rxack;
   254D 90 00 04      [24]10165 	mov	dptr,#_axradio_syncstate
   2550 74 0C         [12]10166 	mov	a,#0x0C
   2552 F0            [24]10167 	movx	@dptr,a
   2553                   10168 00163$:
                     1D20 10169 	C$easyax5043.c$1407$1$313 ==.
                          10170 ;	../COMMON/easyax5043.c:1407: axradio_statuschange((struct axradio_status __xdata *)&axradio_cb_receive.st);
   2553 90 02 36      [24]10171 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2556 12 37 ED      [24]10172 	lcall	_axradio_statuschange
                     1D26 10173 	C$easyax5043.c$1408$1$313 ==.
                          10174 ;	../COMMON/easyax5043.c:1408: endcb:
   2559                   10175 00165$:
                     1D26 10176 	C$easyax5043.c$1409$1$313 ==.
                          10177 ;	../COMMON/easyax5043.c:1409: if (axradio_mode == AXRADIO_MODE_WOR_RECEIVE) {
   2559 74 19         [12]10178 	mov	a,#0x19
   255B B5 0A 05      [24]10179 	cjne	a,_axradio_mode,00180$
                     1D2B 10180 	C$easyax5043.c$1410$2$330 ==.
                          10181 ;	../COMMON/easyax5043.c:1410: ax5043_receiver_on_wor();
   255E 12 13 D2      [24]10182 	lcall	_ax5043_receiver_on_wor
   2561 80 42         [24]10183 	sjmp	00182$
   2563                   10184 00180$:
                     1D30 10185 	C$easyax5043.c$1411$1$313 ==.
                          10186 ;	../COMMON/easyax5043.c:1411: } else if (axradio_mode == AXRADIO_MODE_ACK_RECEIVE ||
   2563 74 1A         [12]10187 	mov	a,#0x1A
   2565 B5 0A 02      [24]10188 	cjne	a,_axradio_mode,00344$
   2568 80 05         [24]10189 	sjmp	00175$
   256A                   10190 00344$:
                     1D37 10191 	C$easyax5043.c$1412$1$313 ==.
                          10192 ;	../COMMON/easyax5043.c:1412: axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE) {
   256A 74 1B         [12]10193 	mov	a,#0x1B
   256C B5 0A 24      [24]10194 	cjne	a,_axradio_mode,00176$
   256F                   10195 00175$:
                     1D3C 10196 	C$easyax5043.c$1415$3$332 ==.
                          10197 ;	../COMMON/easyax5043.c:1415: uint8_t __autodata iesave = IE & 0x80;
   256F 74 80         [12]10198 	mov	a,#0x80
   2571 55 A8         [12]10199 	anl	a,_IE
   2573 FF            [12]10200 	mov	r7,a
                     1D41 10201 	C$easyax5043.c$1416$3$332 ==.
                          10202 ;	../COMMON/easyax5043.c:1416: EA = 0;
   2574 C2 AF         [12]10203 	clr	_EA
                     1D43 10204 	C$easyax5043.c$1417$3$332 ==.
                          10205 ;	../COMMON/easyax5043.c:1417: trxst = axradio_trxstate;
   2576 AE 0B         [24]10206 	mov	r6,_axradio_trxstate
                     1D45 10207 	C$easyax5043.c$1418$3$332 ==.
                          10208 ;	../COMMON/easyax5043.c:1418: axradio_cb_receive.st.error = AXRADIO_ERR_PACKETDONE;
   2578 90 02 37      [24]10209 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   257B 74 F0         [12]10210 	mov	a,#0xF0
   257D F0            [24]10211 	movx	@dptr,a
                     1D4B 10212 	C$easyax5043.c$1419$3$332 ==.
                          10213 ;	../COMMON/easyax5043.c:1419: IE |= iesave;
   257E EF            [12]10214 	mov	a,r7
   257F 42 A8         [12]10215 	orl	_IE,a
                     1D4E 10216 	C$easyax5043.c$1421$2$331 ==.
                          10217 ;	../COMMON/easyax5043.c:1421: if (trxst == trxstate_off) {
   2581 EE            [12]10218 	mov	a,r6
   2582 70 21         [24]10219 	jnz	00182$
                     1D51 10220 	C$easyax5043.c$1422$3$333 ==.
                          10221 ;	../COMMON/easyax5043.c:1422: if (axradio_mode == AXRADIO_MODE_WOR_ACK_RECEIVE)
   2584 74 1B         [12]10222 	mov	a,#0x1B
   2586 B5 0A 05      [24]10223 	cjne	a,_axradio_mode,00167$
                     1D56 10224 	C$easyax5043.c$1423$3$333 ==.
                          10225 ;	../COMMON/easyax5043.c:1423: ax5043_receiver_on_wor();
   2589 12 13 D2      [24]10226 	lcall	_ax5043_receiver_on_wor
   258C 80 17         [24]10227 	sjmp	00182$
   258E                   10228 00167$:
                     1D5B 10229 	C$easyax5043.c$1425$3$333 ==.
                          10230 ;	../COMMON/easyax5043.c:1425: ax5043_receiver_on_continuous();
   258E 12 13 38      [24]10231 	lcall	_ax5043_receiver_on_continuous
   2591 80 12         [24]10232 	sjmp	00182$
   2593                   10233 00176$:
                     1D60 10234 	C$easyax5043.c$1428$2$334 ==.
                          10235 ;	../COMMON/easyax5043.c:1428: switch (axradio_trxstate) {
   2593 AF 0B         [24]10236 	mov	r7,_axradio_trxstate
   2595 BF 01 02      [24]10237 	cjne	r7,#0x01,00350$
   2598 80 03         [24]10238 	sjmp	00172$
   259A                   10239 00350$:
   259A BF 02 08      [24]10240 	cjne	r7,#0x02,00182$
                     1D6A 10241 	C$easyax5043.c$1430$3$335 ==.
                          10242 ;	../COMMON/easyax5043.c:1430: case trxstate_rxwor:
   259D                   10243 00172$:
                     1D6A 10244 	C$easyax5043.c$1431$3$335 ==.
                          10245 ;	../COMMON/easyax5043.c:1431: AX5043_IRQMASK0 |= 0x01; // re-enable FIFO not empty irq
   259D 90 40 07      [24]10246 	mov	dptr,#_AX5043_IRQMASK0
   25A0 E0            [24]10247 	movx	a,@dptr
   25A1 FF            [12]10248 	mov	r7,a
   25A2 44 01         [12]10249 	orl	a,#0x01
   25A4 F0            [24]10250 	movx	@dptr,a
                     1D72 10251 	C$easyax5043.c$1436$1$313 ==.
                          10252 ;	../COMMON/easyax5043.c:1436: }
   25A5                   10253 00182$:
                     1D72 10254 	C$easyax5043.c$1438$1$313 ==.
                     1D72 10255 	XFeasyax5043$axradio_receive_callback_fwd$0$0 ==.
   25A5 22            [24]10256 	ret
                          10257 ;------------------------------------------------------------
                          10258 ;Allocation info for local variables in function 'axradio_killallcb'
                          10259 ;------------------------------------------------------------
                     1D73 10260 	Feasyax5043$axradio_killallcb$0$0 ==.
                     1D73 10261 	C$easyax5043.c$1440$1$313 ==.
                          10262 ;	../COMMON/easyax5043.c:1440: static void axradio_killallcb(void)
                          10263 ;	-----------------------------------------
                          10264 ;	 function axradio_killallcb
                          10265 ;	-----------------------------------------
   25A6                   10266 _axradio_killallcb:
                     1D73 10267 	C$easyax5043.c$1442$1$337 ==.
                          10268 ;	../COMMON/easyax5043.c:1442: wtimer_remove_callback(&axradio_cb_receive.cb);
   25A6 90 02 32      [24]10269 	mov	dptr,#_axradio_cb_receive
   25A9 12 4E DE      [24]10270 	lcall	_wtimer_remove_callback
                     1D79 10271 	C$easyax5043.c$1443$1$337 ==.
                          10272 ;	../COMMON/easyax5043.c:1443: wtimer_remove_callback(&axradio_cb_receivesfd.cb);
   25AC 90 02 54      [24]10273 	mov	dptr,#_axradio_cb_receivesfd
   25AF 12 4E DE      [24]10274 	lcall	_wtimer_remove_callback
                     1D7F 10275 	C$easyax5043.c$1444$1$337 ==.
                          10276 ;	../COMMON/easyax5043.c:1444: wtimer_remove_callback(&axradio_cb_channelstate.cb);
   25B2 90 02 5E      [24]10277 	mov	dptr,#_axradio_cb_channelstate
   25B5 12 4E DE      [24]10278 	lcall	_wtimer_remove_callback
                     1D85 10279 	C$easyax5043.c$1445$1$337 ==.
                          10280 ;	../COMMON/easyax5043.c:1445: wtimer_remove_callback(&axradio_cb_transmitstart.cb);
   25B8 90 02 6B      [24]10281 	mov	dptr,#_axradio_cb_transmitstart
   25BB 12 4E DE      [24]10282 	lcall	_wtimer_remove_callback
                     1D8B 10283 	C$easyax5043.c$1446$1$337 ==.
                          10284 ;	../COMMON/easyax5043.c:1446: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   25BE 90 02 75      [24]10285 	mov	dptr,#_axradio_cb_transmitend
   25C1 12 4E DE      [24]10286 	lcall	_wtimer_remove_callback
                     1D91 10287 	C$easyax5043.c$1447$1$337 ==.
                          10288 ;	../COMMON/easyax5043.c:1447: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   25C4 90 02 7F      [24]10289 	mov	dptr,#_axradio_cb_transmitdata
   25C7 12 4E DE      [24]10290 	lcall	_wtimer_remove_callback
                     1D97 10291 	C$easyax5043.c$1448$1$337 ==.
                          10292 ;	../COMMON/easyax5043.c:1448: wtimer_remove(&axradio_timer);
   25CA 90 02 89      [24]10293 	mov	dptr,#_axradio_timer
   25CD 12 4C D4      [24]10294 	lcall	_wtimer_remove
                     1D9D 10295 	C$easyax5043.c$1449$1$337 ==.
                     1D9D 10296 	XFeasyax5043$axradio_killallcb$0$0 ==.
   25D0 22            [24]10297 	ret
                          10298 ;------------------------------------------------------------
                          10299 ;Allocation info for local variables in function 'axradio_init'
                          10300 ;------------------------------------------------------------
                          10301 ;i                         Allocated to registers r5 
                          10302 ;pllloop_save              Allocated to registers r7 
                          10303 ;pllcpi_save               Allocated to registers r6 
                          10304 ;iesave                    Allocated to registers r4 
                          10305 ;f                         Allocated to registers r1 r2 r3 r4 
                          10306 ;r                         Allocated to registers r3 
                          10307 ;iesave                    Allocated to registers r4 
                          10308 ;r                         Allocated to registers r3 
                          10309 ;f                         Allocated to registers r2 r3 r4 r5 
                          10310 ;------------------------------------------------------------
                     1D9E 10311 	G$axradio_init$0$0 ==.
                     1D9E 10312 	C$easyax5043.c$1455$1$337 ==.
                          10313 ;	../COMMON/easyax5043.c:1455: uint8_t axradio_init(void)
                          10314 ;	-----------------------------------------
                          10315 ;	 function axradio_init
                          10316 ;	-----------------------------------------
   25D1                   10317 _axradio_init:
                     1D9E 10318 	C$easyax5043.c$1458$1$339 ==.
                          10319 ;	../COMMON/easyax5043.c:1458: axradio_mode = AXRADIO_MODE_UNINIT;
   25D1 75 0A 00      [24]10320 	mov	_axradio_mode,#0x00
                     1DA1 10321 	C$easyax5043.c$1459$1$339 ==.
                          10322 ;	../COMMON/easyax5043.c:1459: axradio_killallcb();
   25D4 12 25 A6      [24]10323 	lcall	_axradio_killallcb
                     1DA4 10324 	C$easyax5043.c$1460$1$339 ==.
                          10325 ;	../COMMON/easyax5043.c:1460: axradio_cb_receive.cb.handler = axradio_receive_callback_fwd;
   25D7 90 02 34      [24]10326 	mov	dptr,#(_axradio_cb_receive + 0x0002)
   25DA 74 82         [12]10327 	mov	a,#_axradio_receive_callback_fwd
   25DC F0            [24]10328 	movx	@dptr,a
   25DD 74 20         [12]10329 	mov	a,#(_axradio_receive_callback_fwd >> 8)
   25DF A3            [24]10330 	inc	dptr
   25E0 F0            [24]10331 	movx	@dptr,a
                     1DAE 10332 	C$easyax5043.c$1461$1$339 ==.
                          10333 ;	../COMMON/easyax5043.c:1461: axradio_cb_receive.st.status = AXRADIO_STAT_RECEIVE;
   25E1 90 02 36      [24]10334 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   25E4 E4            [12]10335 	clr	a
   25E5 F0            [24]10336 	movx	@dptr,a
                     1DB3 10337 	C$easyax5043.c$1462$1$339 ==.
                          10338 ;	../COMMON/easyax5043.c:1462: memset_xdata(axradio_cb_receive.st.rx.mac.remoteaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.remoteaddr));
   25E6 75 27 00      [24]10339 	mov	_memset_PARM_2,#0x00
   25E9 75 28 04      [24]10340 	mov	_memset_PARM_3,#0x04
   25EC 75 29 00      [24]10341 	mov	(_memset_PARM_3 + 1),#0x00
   25EF 90 02 46      [24]10342 	mov	dptr,#(_axradio_cb_receive + 0x0014)
   25F2 75 F0 00      [24]10343 	mov	b,#0x00
   25F5 12 42 C3      [24]10344 	lcall	_memset
                     1DC5 10345 	C$easyax5043.c$1463$1$339 ==.
                          10346 ;	../COMMON/easyax5043.c:1463: memset_xdata(axradio_cb_receive.st.rx.mac.localaddr, 0, sizeof(axradio_cb_receive.st.rx.mac.localaddr));
   25F8 75 27 00      [24]10347 	mov	_memset_PARM_2,#0x00
   25FB 75 28 04      [24]10348 	mov	_memset_PARM_3,#0x04
   25FE 75 29 00      [24]10349 	mov	(_memset_PARM_3 + 1),#0x00
   2601 90 02 4A      [24]10350 	mov	dptr,#(_axradio_cb_receive + 0x0018)
   2604 75 F0 00      [24]10351 	mov	b,#0x00
   2607 12 42 C3      [24]10352 	lcall	_memset
                     1DD7 10353 	C$easyax5043.c$1464$1$339 ==.
                          10354 ;	../COMMON/easyax5043.c:1464: axradio_cb_receivesfd.cb.handler = axradio_callback_fwd;
   260A 90 02 56      [24]10355 	mov	dptr,#(_axradio_cb_receivesfd + 0x0002)
   260D 74 6F         [12]10356 	mov	a,#_axradio_callback_fwd
   260F F0            [24]10357 	movx	@dptr,a
   2610 74 20         [12]10358 	mov	a,#(_axradio_callback_fwd >> 8)
   2612 A3            [24]10359 	inc	dptr
   2613 F0            [24]10360 	movx	@dptr,a
                     1DE1 10361 	C$easyax5043.c$1465$1$339 ==.
                          10362 ;	../COMMON/easyax5043.c:1465: axradio_cb_receivesfd.st.status = AXRADIO_STAT_RECEIVESFD;
   2614 90 02 58      [24]10363 	mov	dptr,#(_axradio_cb_receivesfd + 0x0004)
   2617 74 01         [12]10364 	mov	a,#0x01
   2619 F0            [24]10365 	movx	@dptr,a
                     1DE7 10366 	C$easyax5043.c$1466$1$339 ==.
                          10367 ;	../COMMON/easyax5043.c:1466: axradio_cb_channelstate.cb.handler = axradio_callback_fwd;
   261A 90 02 60      [24]10368 	mov	dptr,#(_axradio_cb_channelstate + 0x0002)
   261D 74 6F         [12]10369 	mov	a,#_axradio_callback_fwd
   261F F0            [24]10370 	movx	@dptr,a
   2620 74 20         [12]10371 	mov	a,#(_axradio_callback_fwd >> 8)
   2622 A3            [24]10372 	inc	dptr
   2623 F0            [24]10373 	movx	@dptr,a
                     1DF1 10374 	C$easyax5043.c$1467$1$339 ==.
                          10375 ;	../COMMON/easyax5043.c:1467: axradio_cb_channelstate.st.status = AXRADIO_STAT_CHANNELSTATE;
   2624 90 02 62      [24]10376 	mov	dptr,#(_axradio_cb_channelstate + 0x0004)
   2627 74 02         [12]10377 	mov	a,#0x02
   2629 F0            [24]10378 	movx	@dptr,a
                     1DF7 10379 	C$easyax5043.c$1468$1$339 ==.
                          10380 ;	../COMMON/easyax5043.c:1468: axradio_cb_transmitstart.cb.handler = axradio_callback_fwd;
   262A 90 02 6D      [24]10381 	mov	dptr,#(_axradio_cb_transmitstart + 0x0002)
   262D 74 6F         [12]10382 	mov	a,#_axradio_callback_fwd
   262F F0            [24]10383 	movx	@dptr,a
   2630 74 20         [12]10384 	mov	a,#(_axradio_callback_fwd >> 8)
   2632 A3            [24]10385 	inc	dptr
   2633 F0            [24]10386 	movx	@dptr,a
                     1E01 10387 	C$easyax5043.c$1469$1$339 ==.
                          10388 ;	../COMMON/easyax5043.c:1469: axradio_cb_transmitstart.st.status = AXRADIO_STAT_TRANSMITSTART;
   2634 90 02 6F      [24]10389 	mov	dptr,#(_axradio_cb_transmitstart + 0x0004)
   2637 74 03         [12]10390 	mov	a,#0x03
   2639 F0            [24]10391 	movx	@dptr,a
                     1E07 10392 	C$easyax5043.c$1470$1$339 ==.
                          10393 ;	../COMMON/easyax5043.c:1470: axradio_cb_transmitend.cb.handler = axradio_callback_fwd;
   263A 90 02 77      [24]10394 	mov	dptr,#(_axradio_cb_transmitend + 0x0002)
   263D 74 6F         [12]10395 	mov	a,#_axradio_callback_fwd
   263F F0            [24]10396 	movx	@dptr,a
   2640 74 20         [12]10397 	mov	a,#(_axradio_callback_fwd >> 8)
   2642 A3            [24]10398 	inc	dptr
   2643 F0            [24]10399 	movx	@dptr,a
                     1E11 10400 	C$easyax5043.c$1471$1$339 ==.
                          10401 ;	../COMMON/easyax5043.c:1471: axradio_cb_transmitend.st.status = AXRADIO_STAT_TRANSMITEND;
   2644 90 02 79      [24]10402 	mov	dptr,#(_axradio_cb_transmitend + 0x0004)
   2647 74 04         [12]10403 	mov	a,#0x04
   2649 F0            [24]10404 	movx	@dptr,a
                     1E17 10405 	C$easyax5043.c$1472$1$339 ==.
                          10406 ;	../COMMON/easyax5043.c:1472: axradio_cb_transmitdata.cb.handler = axradio_callback_fwd;
   264A 90 02 81      [24]10407 	mov	dptr,#(_axradio_cb_transmitdata + 0x0002)
   264D 74 6F         [12]10408 	mov	a,#_axradio_callback_fwd
   264F F0            [24]10409 	movx	@dptr,a
   2650 74 20         [12]10410 	mov	a,#(_axradio_callback_fwd >> 8)
   2652 A3            [24]10411 	inc	dptr
   2653 F0            [24]10412 	movx	@dptr,a
                     1E21 10413 	C$easyax5043.c$1473$1$339 ==.
                          10414 ;	../COMMON/easyax5043.c:1473: axradio_cb_transmitdata.st.status = AXRADIO_STAT_TRANSMITDATA;
   2654 90 02 83      [24]10415 	mov	dptr,#(_axradio_cb_transmitdata + 0x0004)
   2657 74 05         [12]10416 	mov	a,#0x05
   2659 F0            [24]10417 	movx	@dptr,a
                     1E27 10418 	C$easyax5043.c$1474$1$339 ==.
                          10419 ;	../COMMON/easyax5043.c:1474: axradio_timer.handler = axradio_timer_callback;
   265A 90 02 8B      [24]10420 	mov	dptr,#(_axradio_timer + 0x0002)
   265D 74 3E         [12]10421 	mov	a,#_axradio_timer_callback
   265F F0            [24]10422 	movx	@dptr,a
   2660 74 18         [12]10423 	mov	a,#(_axradio_timer_callback >> 8)
   2662 A3            [24]10424 	inc	dptr
   2663 F0            [24]10425 	movx	@dptr,a
                     1E31 10426 	C$easyax5043.c$1475$1$339 ==.
                          10427 ;	../COMMON/easyax5043.c:1475: axradio_curchannel = 0;
   2664 90 00 09      [24]10428 	mov	dptr,#_axradio_curchannel
                     1E34 10429 	C$easyax5043.c$1476$1$339 ==.
                          10430 ;	../COMMON/easyax5043.c:1476: axradio_curfreqoffset = 0;
   2667 E4            [12]10431 	clr	a
   2668 F0            [24]10432 	movx	@dptr,a
   2669 90 00 0A      [24]10433 	mov	dptr,#_axradio_curfreqoffset
   266C F0            [24]10434 	movx	@dptr,a
   266D E4            [12]10435 	clr	a
   266E A3            [24]10436 	inc	dptr
   266F F0            [24]10437 	movx	@dptr,a
   2670 E4            [12]10438 	clr	a
   2671 A3            [24]10439 	inc	dptr
   2672 F0            [24]10440 	movx	@dptr,a
   2673 E4            [12]10441 	clr	a
   2674 A3            [24]10442 	inc	dptr
   2675 F0            [24]10443 	movx	@dptr,a
                     1E43 10444 	C$easyax5043.c$1477$1$339 ==.
                          10445 ;	../COMMON/easyax5043.c:1477: IE_4 = 0;
   2676 C2 AC         [12]10446 	clr	_IE_4
                     1E45 10447 	C$easyax5043.c$1478$1$339 ==.
                          10448 ;	../COMMON/easyax5043.c:1478: axradio_trxstate = trxstate_off;
   2678 75 0B 00      [24]10449 	mov	_axradio_trxstate,#0x00
                     1E48 10450 	C$easyax5043.c$1479$1$339 ==.
                          10451 ;	../COMMON/easyax5043.c:1479: if (ax5043_reset())
   267B 12 3B 34      [24]10452 	lcall	_ax5043_reset
   267E E5 82         [12]10453 	mov	a,dpl
   2680 60 06         [24]10454 	jz	00102$
                     1E4F 10455 	C$easyax5043.c$1480$1$339 ==.
                          10456 ;	../COMMON/easyax5043.c:1480: return AXRADIO_ERR_NOCHIP;
   2682 75 82 05      [24]10457 	mov	dpl,#0x05
   2685 02 28 C0      [24]10458 	ljmp	00139$
   2688                   10459 00102$:
                     1E55 10460 	C$easyax5043.c$1481$1$339 ==.
                          10461 ;	../COMMON/easyax5043.c:1481: ax5043_init_registers();
   2688 12 15 F9      [24]10462 	lcall	_ax5043_init_registers
                     1E58 10463 	C$easyax5043.c$1482$1$339 ==.
                          10464 ;	../COMMON/easyax5043.c:1482: ax5043_set_registers_rx();
   268B 12 04 3C      [24]10465 	lcall	_ax5043_set_registers_rx
                     1E5B 10466 	C$easyax5043.c$1483$1$339 ==.
                          10467 ;	../COMMON/easyax5043.c:1483: pllloop_save = AX5043_PLLLOOP;
   268E 90 40 30      [24]10468 	mov	dptr,#_AX5043_PLLLOOP
   2691 E0            [24]10469 	movx	a,@dptr
   2692 FF            [12]10470 	mov	r7,a
                     1E60 10471 	C$easyax5043.c$1484$1$339 ==.
                          10472 ;	../COMMON/easyax5043.c:1484: pllcpi_save = AX5043_PLLCPI;
   2693 90 40 31      [24]10473 	mov	dptr,#_AX5043_PLLCPI
   2696 E0            [24]10474 	movx	a,@dptr
   2697 FE            [12]10475 	mov	r6,a
                     1E65 10476 	C$easyax5043.c$1485$1$339 ==.
                          10477 ;	../COMMON/easyax5043.c:1485: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   2698 90 40 30      [24]10478 	mov	dptr,#_AX5043_PLLLOOP
   269B 74 09         [12]10479 	mov	a,#0x09
   269D F0            [24]10480 	movx	@dptr,a
                     1E6B 10481 	C$easyax5043.c$1486$1$339 ==.
                          10482 ;	../COMMON/easyax5043.c:1486: AX5043_PLLCPI = 0x08;
   269E 90 40 31      [24]10483 	mov	dptr,#_AX5043_PLLCPI
   26A1 74 08         [12]10484 	mov	a,#0x08
   26A3 F0            [24]10485 	movx	@dptr,a
                     1E71 10486 	C$easyax5043.c$1488$1$339 ==.
                          10487 ;	../COMMON/easyax5043.c:1488: IE_4 = 1;
   26A4 D2 AC         [12]10488 	setb	_IE_4
                     1E73 10489 	C$easyax5043.c$1490$1$339 ==.
                          10490 ;	../COMMON/easyax5043.c:1490: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   26A6 90 40 02      [24]10491 	mov	dptr,#_AX5043_PWRMODE
   26A9 74 05         [12]10492 	mov	a,#0x05
   26AB F0            [24]10493 	movx	@dptr,a
                     1E79 10494 	C$easyax5043.c$1491$1$339 ==.
                          10495 ;	../COMMON/easyax5043.c:1491: axradio_wait_for_xtal();
   26AC C0 07         [24]10496 	push	ar7
   26AE C0 06         [24]10497 	push	ar6
   26B0 12 14 9E      [24]10498 	lcall	_axradio_wait_for_xtal
   26B3 D0 06         [24]10499 	pop	ar6
   26B5 D0 07         [24]10500 	pop	ar7
                     1E84 10501 	C$easyax5043.c$1493$3$341 ==.
                          10502 ;	../COMMON/easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   26B7 7D 00         [12]10503 	mov	r5,#0x00
   26B9                   10504 00129$:
   26B9 90 52 79      [24]10505 	mov	dptr,#_axradio_phy_nrchannels
   26BC E4            [12]10506 	clr	a
   26BD 93            [24]10507 	movc	a,@a+dptr
   26BE FC            [12]10508 	mov	r4,a
   26BF C3            [12]10509 	clr	c
   26C0 ED            [12]10510 	mov	a,r5
   26C1 9C            [12]10511 	subb	a,r4
   26C2 40 03         [24]10512 	jc	00195$
   26C4 02 27 94      [24]10513 	ljmp	00113$
   26C7                   10514 00195$:
                     1E94 10515 	C$easyax5043.c$1496$3$341 ==.
                          10516 ;	../COMMON/easyax5043.c:1496: uint32_t __autodata f = axradio_phy_chanfreq[i];
   26C7 ED            [12]10517 	mov	a,r5
   26C8 75 F0 04      [24]10518 	mov	b,#0x04
   26CB A4            [48]10519 	mul	ab
   26CC 24 7A         [12]10520 	add	a,#_axradio_phy_chanfreq
   26CE F5 82         [12]10521 	mov	dpl,a
   26D0 74 52         [12]10522 	mov	a,#(_axradio_phy_chanfreq >> 8)
   26D2 35 F0         [12]10523 	addc	a,b
   26D4 F5 83         [12]10524 	mov	dph,a
   26D6 E4            [12]10525 	clr	a
   26D7 93            [24]10526 	movc	a,@a+dptr
   26D8 F9            [12]10527 	mov	r1,a
   26D9 A3            [24]10528 	inc	dptr
   26DA E4            [12]10529 	clr	a
   26DB 93            [24]10530 	movc	a,@a+dptr
   26DC FA            [12]10531 	mov	r2,a
   26DD A3            [24]10532 	inc	dptr
   26DE E4            [12]10533 	clr	a
   26DF 93            [24]10534 	movc	a,@a+dptr
   26E0 FB            [12]10535 	mov	r3,a
   26E1 A3            [24]10536 	inc	dptr
   26E2 E4            [12]10537 	clr	a
   26E3 93            [24]10538 	movc	a,@a+dptr
   26E4 FC            [12]10539 	mov	r4,a
                     1EB2 10540 	C$easyax5043.c$1497$3$341 ==.
                          10541 ;	../COMMON/easyax5043.c:1497: AX5043_FREQA0 = f;
   26E5 90 40 37      [24]10542 	mov	dptr,#_AX5043_FREQA0
   26E8 E9            [12]10543 	mov	a,r1
   26E9 F0            [24]10544 	movx	@dptr,a
                     1EB7 10545 	C$easyax5043.c$1498$3$341 ==.
                          10546 ;	../COMMON/easyax5043.c:1498: AX5043_FREQA1 = f >> 8;
   26EA 90 40 36      [24]10547 	mov	dptr,#_AX5043_FREQA1
   26ED EA            [12]10548 	mov	a,r2
   26EE F0            [24]10549 	movx	@dptr,a
                     1EBC 10550 	C$easyax5043.c$1499$3$341 ==.
                          10551 ;	../COMMON/easyax5043.c:1499: AX5043_FREQA2 = f >> 16;
   26EF 90 40 35      [24]10552 	mov	dptr,#_AX5043_FREQA2
   26F2 EB            [12]10553 	mov	a,r3
   26F3 F0            [24]10554 	movx	@dptr,a
                     1EC1 10555 	C$easyax5043.c$1500$3$341 ==.
                          10556 ;	../COMMON/easyax5043.c:1500: AX5043_FREQA3 = f >> 24;
   26F4 90 40 34      [24]10557 	mov	dptr,#_AX5043_FREQA3
   26F7 EC            [12]10558 	mov	a,r4
   26F8 F0            [24]10559 	movx	@dptr,a
                     1EC6 10560 	C$easyax5043.c$1502$2$340 ==.
                          10561 ;	../COMMON/easyax5043.c:1502: iesave = IE & 0x80;
   26F9 74 80         [12]10562 	mov	a,#0x80
   26FB 55 A8         [12]10563 	anl	a,_IE
   26FD FC            [12]10564 	mov	r4,a
                     1ECB 10565 	C$easyax5043.c$1503$2$340 ==.
                          10566 ;	../COMMON/easyax5043.c:1503: EA = 0;
   26FE C2 AF         [12]10567 	clr	_EA
                     1ECD 10568 	C$easyax5043.c$1504$2$340 ==.
                          10569 ;	../COMMON/easyax5043.c:1504: axradio_trxstate = trxstate_pll_ranging;
   2700 75 0B 05      [24]10570 	mov	_axradio_trxstate,#0x05
                     1ED0 10571 	C$easyax5043.c$1505$2$340 ==.
                          10572 ;	../COMMON/easyax5043.c:1505: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   2703 90 40 06      [24]10573 	mov	dptr,#_AX5043_IRQMASK1
   2706 74 10         [12]10574 	mov	a,#0x10
   2708 F0            [24]10575 	movx	@dptr,a
                     1ED6 10576 	C$easyax5043.c$1508$3$342 ==.
                          10577 ;	../COMMON/easyax5043.c:1508: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   2709 90 52 7E      [24]10578 	mov	dptr,#_axradio_phy_chanpllrnginit
   270C E4            [12]10579 	clr	a
   270D 93            [24]10580 	movc	a,@a+dptr
   270E FB            [12]10581 	mov	r3,a
   270F 54 F0         [12]10582 	anl	a,#0xF0
   2711 70 0B         [24]10583 	jnz	00108$
                     1EE0 10584 	C$easyax5043.c$1509$4$343 ==.
                          10585 ;	../COMMON/easyax5043.c:1509: r = axradio_phy_chanpllrnginit[i] | 0x10;
   2713 ED            [12]10586 	mov	a,r5
   2714 90 52 7E      [24]10587 	mov	dptr,#_axradio_phy_chanpllrnginit
   2717 93            [24]10588 	movc	a,@a+dptr
   2718 FB            [12]10589 	mov	r3,a
   2719 43 03 10      [24]10590 	orl	ar3,#0x10
   271C 80 25         [24]10591 	sjmp	00109$
   271E                   10592 00108$:
                     1EEB 10593 	C$easyax5043.c$1512$4$344 ==.
                          10594 ;	../COMMON/easyax5043.c:1512: r = 0x18;
   271E 7B 18         [12]10595 	mov	r3,#0x18
                     1EED 10596 	C$easyax5043.c$1513$4$344 ==.
                          10597 ;	../COMMON/easyax5043.c:1513: if (i) {
   2720 ED            [12]10598 	mov	a,r5
   2721 60 20         [24]10599 	jz	00109$
                     1EF0 10600 	C$easyax5043.c$1514$5$345 ==.
                          10601 ;	../COMMON/easyax5043.c:1514: r = axradio_phy_chanpllrng_rx[i - 1];
   2723 8D 01         [24]10602 	mov	ar1,r5
   2725 7A 00         [12]10603 	mov	r2,#0x00
   2727 19            [12]10604 	dec	r1
   2728 B9 FF 01      [24]10605 	cjne	r1,#0xFF,00199$
   272B 1A            [12]10606 	dec	r2
   272C                   10607 00199$:
   272C E9            [12]10608 	mov	a,r1
   272D 24 00         [12]10609 	add	a,#_axradio_phy_chanpllrng_rx
   272F F5 82         [12]10610 	mov	dpl,a
   2731 EA            [12]10611 	mov	a,r2
   2732 34 00         [12]10612 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2734 F5 83         [12]10613 	mov	dph,a
   2736 E0            [24]10614 	movx	a,@dptr
                     1F04 10615 	C$easyax5043.c$1515$5$345 ==.
                          10616 ;	../COMMON/easyax5043.c:1515: if (r & 0x20)
   2737 FB            [12]10617 	mov	r3,a
   2738 30 E5 02      [24]10618 	jnb	acc.5,00104$
                     1F08 10619 	C$easyax5043.c$1516$5$345 ==.
                          10620 ;	../COMMON/easyax5043.c:1516: r = 0x08;
   273B 7B 08         [12]10621 	mov	r3,#0x08
   273D                   10622 00104$:
                     1F0A 10623 	C$easyax5043.c$1517$5$345 ==.
                          10624 ;	../COMMON/easyax5043.c:1517: r &= 0x0F;
   273D 53 03 0F      [24]10625 	anl	ar3,#0x0F
                     1F0D 10626 	C$easyax5043.c$1518$5$345 ==.
                          10627 ;	../COMMON/easyax5043.c:1518: r |= 0x10;
   2740 43 03 10      [24]10628 	orl	ar3,#0x10
   2743                   10629 00109$:
                     1F10 10630 	C$easyax5043.c$1521$3$342 ==.
                          10631 ;	../COMMON/easyax5043.c:1521: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   2743 90 40 33      [24]10632 	mov	dptr,#_AX5043_PLLRANGINGA
   2746 EB            [12]10633 	mov	a,r3
   2747 F0            [24]10634 	movx	@dptr,a
   2748                   10635 00126$:
                     1F15 10636 	C$easyax5043.c$1524$3$346 ==.
                          10637 ;	../COMMON/easyax5043.c:1524: EA = 0;
   2748 C2 AF         [12]10638 	clr	_EA
                     1F17 10639 	C$easyax5043.c$1525$3$346 ==.
                          10640 ;	../COMMON/easyax5043.c:1525: if (axradio_trxstate == trxstate_pll_ranging_done)
   274A 74 06         [12]10641 	mov	a,#0x06
   274C B5 0B 02      [24]10642 	cjne	a,_axradio_trxstate,00201$
   274F 80 22         [24]10643 	sjmp	00112$
   2751                   10644 00201$:
                     1F1E 10645 	C$easyax5043.c$1527$3$346 ==.
                          10646 ;	../COMMON/easyax5043.c:1527: wtimer_idle(WTFLAG_CANSTANDBY);
   2751 75 82 02      [24]10647 	mov	dpl,#0x02
   2754 C0 07         [24]10648 	push	ar7
   2756 C0 06         [24]10649 	push	ar6
   2758 C0 05         [24]10650 	push	ar5
   275A C0 04         [24]10651 	push	ar4
   275C 12 42 44      [24]10652 	lcall	_wtimer_idle
   275F D0 04         [24]10653 	pop	ar4
                     1F2E 10654 	C$easyax5043.c$1528$3$346 ==.
                          10655 ;	../COMMON/easyax5043.c:1528: IE |= iesave;
   2761 EC            [12]10656 	mov	a,r4
   2762 42 A8         [12]10657 	orl	_IE,a
                     1F31 10658 	C$easyax5043.c$1529$3$346 ==.
                          10659 ;	../COMMON/easyax5043.c:1529: wtimer_runcallbacks();
   2764 C0 04         [24]10660 	push	ar4
   2766 12 41 C0      [24]10661 	lcall	_wtimer_runcallbacks
   2769 D0 04         [24]10662 	pop	ar4
   276B D0 05         [24]10663 	pop	ar5
   276D D0 06         [24]10664 	pop	ar6
   276F D0 07         [24]10665 	pop	ar7
   2771 80 D5         [24]10666 	sjmp	00126$
   2773                   10667 00112$:
                     1F40 10668 	C$easyax5043.c$1531$2$340 ==.
                          10669 ;	../COMMON/easyax5043.c:1531: axradio_trxstate = trxstate_off;
   2773 75 0B 00      [24]10670 	mov	_axradio_trxstate,#0x00
                     1F43 10671 	C$easyax5043.c$1532$2$340 ==.
                          10672 ;	../COMMON/easyax5043.c:1532: AX5043_IRQMASK1 = 0x00;
   2776 90 40 06      [24]10673 	mov	dptr,#_AX5043_IRQMASK1
   2779 E4            [12]10674 	clr	a
   277A F0            [24]10675 	movx	@dptr,a
                     1F48 10676 	C$easyax5043.c$1533$2$340 ==.
                          10677 ;	../COMMON/easyax5043.c:1533: axradio_phy_chanpllrng_rx[i] = AX5043_PLLRANGINGA;
   277B ED            [12]10678 	mov	a,r5
   277C 24 00         [12]10679 	add	a,#_axradio_phy_chanpllrng_rx
   277E FA            [12]10680 	mov	r2,a
   277F E4            [12]10681 	clr	a
   2780 34 00         [12]10682 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2782 FB            [12]10683 	mov	r3,a
   2783 90 40 33      [24]10684 	mov	dptr,#_AX5043_PLLRANGINGA
   2786 E0            [24]10685 	movx	a,@dptr
   2787 F9            [12]10686 	mov	r1,a
   2788 8A 82         [24]10687 	mov	dpl,r2
   278A 8B 83         [24]10688 	mov	dph,r3
   278C F0            [24]10689 	movx	@dptr,a
                     1F5A 10690 	C$easyax5043.c$1534$2$340 ==.
                          10691 ;	../COMMON/easyax5043.c:1534: IE |= iesave;
   278D EC            [12]10692 	mov	a,r4
   278E 42 A8         [12]10693 	orl	_IE,a
                     1F5D 10694 	C$easyax5043.c$1493$1$339 ==.
                          10695 ;	../COMMON/easyax5043.c:1493: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2790 0D            [12]10696 	inc	r5
   2791 02 26 B9      [24]10697 	ljmp	00129$
   2794                   10698 00113$:
                     1F61 10699 	C$easyax5043.c$1536$1$339 ==.
                          10700 ;	../COMMON/easyax5043.c:1536: ax5043_set_registers_tx();
   2794 C0 07         [24]10701 	push	ar7
   2796 C0 06         [24]10702 	push	ar6
   2798 12 04 0B      [24]10703 	lcall	_ax5043_set_registers_tx
   279B D0 06         [24]10704 	pop	ar6
   279D D0 07         [24]10705 	pop	ar7
                     1F6C 10706 	C$easyax5043.c$1537$1$339 ==.
                          10707 ;	../COMMON/easyax5043.c:1537: AX5043_PLLLOOP = 0x09; // default 100kHz loop BW for ranging
   279F 90 40 30      [24]10708 	mov	dptr,#_AX5043_PLLLOOP
   27A2 74 09         [12]10709 	mov	a,#0x09
   27A4 F0            [24]10710 	movx	@dptr,a
                     1F72 10711 	C$easyax5043.c$1538$1$339 ==.
                          10712 ;	../COMMON/easyax5043.c:1538: AX5043_PLLCPI = 0x08;
   27A5 90 40 31      [24]10713 	mov	dptr,#_AX5043_PLLCPI
   27A8 74 08         [12]10714 	mov	a,#0x08
   27AA F0            [24]10715 	movx	@dptr,a
                     1F78 10716 	C$easyax5043.c$1539$2$347 ==.
                          10717 ;	../COMMON/easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   27AB 7D 00         [12]10718 	mov	r5,#0x00
   27AD                   10719 00134$:
   27AD 90 52 79      [24]10720 	mov	dptr,#_axradio_phy_nrchannels
   27B0 E4            [12]10721 	clr	a
   27B1 93            [24]10722 	movc	a,@a+dptr
   27B2 FC            [12]10723 	mov	r4,a
   27B3 C3            [12]10724 	clr	c
   27B4 ED            [12]10725 	mov	a,r5
   27B5 9C            [12]10726 	subb	a,r4
   27B6 40 03         [24]10727 	jc	00202$
   27B8 02 28 48      [24]10728 	ljmp	00122$
   27BB                   10729 00202$:
                     1F88 10730 	C$easyax5043.c$1540$2$347 ==.
                          10731 ;	../COMMON/easyax5043.c:1540: uint8_t __autodata iesave = IE & 0x80;
   27BB 74 80         [12]10732 	mov	a,#0x80
   27BD 55 A8         [12]10733 	anl	a,_IE
   27BF FC            [12]10734 	mov	r4,a
                     1F8D 10735 	C$easyax5043.c$1541$2$347 ==.
                          10736 ;	../COMMON/easyax5043.c:1541: EA = 0;
   27C0 C2 AF         [12]10737 	clr	_EA
                     1F8F 10738 	C$easyax5043.c$1542$2$347 ==.
                          10739 ;	../COMMON/easyax5043.c:1542: axradio_trxstate = trxstate_pll_ranging;
   27C2 75 0B 05      [24]10740 	mov	_axradio_trxstate,#0x05
                     1F92 10741 	C$easyax5043.c$1543$2$347 ==.
                          10742 ;	../COMMON/easyax5043.c:1543: AX5043_IRQMASK1 = 0x10; // enable pll autoranging done interrupt
   27C5 90 40 06      [24]10743 	mov	dptr,#_AX5043_IRQMASK1
   27C8 74 10         [12]10744 	mov	a,#0x10
   27CA F0            [24]10745 	movx	@dptr,a
                     1F98 10746 	C$easyax5043.c$1546$3$348 ==.
                          10747 ;	../COMMON/easyax5043.c:1546: if( !(axradio_phy_chanpllrnginit[0] & 0xF0) ) { // start values for ranging available
   27CB 90 52 7E      [24]10748 	mov	dptr,#_axradio_phy_chanpllrnginit
   27CE E4            [12]10749 	clr	a
   27CF 93            [24]10750 	movc	a,@a+dptr
   27D0 FB            [12]10751 	mov	r3,a
   27D1 54 F0         [12]10752 	anl	a,#0xF0
   27D3 70 0B         [24]10753 	jnz	00117$
                     1FA2 10754 	C$easyax5043.c$1547$4$349 ==.
                          10755 ;	../COMMON/easyax5043.c:1547: r = axradio_phy_chanpllrnginit[i] | 0x10;
   27D5 ED            [12]10756 	mov	a,r5
   27D6 90 52 7E      [24]10757 	mov	dptr,#_axradio_phy_chanpllrnginit
   27D9 93            [24]10758 	movc	a,@a+dptr
   27DA FB            [12]10759 	mov	r3,a
   27DB 43 03 10      [24]10760 	orl	ar3,#0x10
   27DE 80 17         [24]10761 	sjmp	00118$
   27E0                   10762 00117$:
                     1FAD 10763 	C$easyax5043.c$1550$4$350 ==.
                          10764 ;	../COMMON/easyax5043.c:1550: r = axradio_phy_chanpllrng_rx[i];
   27E0 ED            [12]10765 	mov	a,r5
   27E1 24 00         [12]10766 	add	a,#_axradio_phy_chanpllrng_rx
   27E3 F5 82         [12]10767 	mov	dpl,a
   27E5 E4            [12]10768 	clr	a
   27E6 34 00         [12]10769 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   27E8 F5 83         [12]10770 	mov	dph,a
   27EA E0            [24]10771 	movx	a,@dptr
                     1FB8 10772 	C$easyax5043.c$1551$4$350 ==.
                          10773 ;	../COMMON/easyax5043.c:1551: if (r & 0x20)
   27EB FB            [12]10774 	mov	r3,a
   27EC 30 E5 02      [24]10775 	jnb	acc.5,00115$
                     1FBC 10776 	C$easyax5043.c$1552$4$350 ==.
                          10777 ;	../COMMON/easyax5043.c:1552: r = 0x08;
   27EF 7B 08         [12]10778 	mov	r3,#0x08
   27F1                   10779 00115$:
                     1FBE 10780 	C$easyax5043.c$1553$4$350 ==.
                          10781 ;	../COMMON/easyax5043.c:1553: r &= 0x0F;
   27F1 53 03 0F      [24]10782 	anl	ar3,#0x0F
                     1FC1 10783 	C$easyax5043.c$1554$4$350 ==.
                          10784 ;	../COMMON/easyax5043.c:1554: r |= 0x10;
   27F4 43 03 10      [24]10785 	orl	ar3,#0x10
   27F7                   10786 00118$:
                     1FC4 10787 	C$easyax5043.c$1556$3$348 ==.
                          10788 ;	../COMMON/easyax5043.c:1556: AX5043_PLLRANGINGA = r; // init ranging process starting from "range"
   27F7 90 40 33      [24]10789 	mov	dptr,#_AX5043_PLLRANGINGA
   27FA EB            [12]10790 	mov	a,r3
   27FB F0            [24]10791 	movx	@dptr,a
   27FC                   10792 00131$:
                     1FC9 10793 	C$easyax5043.c$1559$3$351 ==.
                          10794 ;	../COMMON/easyax5043.c:1559: EA = 0;
   27FC C2 AF         [12]10795 	clr	_EA
                     1FCB 10796 	C$easyax5043.c$1560$3$351 ==.
                          10797 ;	../COMMON/easyax5043.c:1560: if (axradio_trxstate == trxstate_pll_ranging_done)
   27FE 74 06         [12]10798 	mov	a,#0x06
   2800 B5 0B 02      [24]10799 	cjne	a,_axradio_trxstate,00206$
   2803 80 22         [24]10800 	sjmp	00121$
   2805                   10801 00206$:
                     1FD2 10802 	C$easyax5043.c$1562$3$351 ==.
                          10803 ;	../COMMON/easyax5043.c:1562: wtimer_idle(WTFLAG_CANSTANDBY);
   2805 75 82 02      [24]10804 	mov	dpl,#0x02
   2808 C0 07         [24]10805 	push	ar7
   280A C0 06         [24]10806 	push	ar6
   280C C0 05         [24]10807 	push	ar5
   280E C0 04         [24]10808 	push	ar4
   2810 12 42 44      [24]10809 	lcall	_wtimer_idle
   2813 D0 04         [24]10810 	pop	ar4
                     1FE2 10811 	C$easyax5043.c$1563$3$351 ==.
                          10812 ;	../COMMON/easyax5043.c:1563: IE |= iesave;
   2815 EC            [12]10813 	mov	a,r4
   2816 42 A8         [12]10814 	orl	_IE,a
                     1FE5 10815 	C$easyax5043.c$1564$3$351 ==.
                          10816 ;	../COMMON/easyax5043.c:1564: wtimer_runcallbacks();
   2818 C0 04         [24]10817 	push	ar4
   281A 12 41 C0      [24]10818 	lcall	_wtimer_runcallbacks
   281D D0 04         [24]10819 	pop	ar4
   281F D0 05         [24]10820 	pop	ar5
   2821 D0 06         [24]10821 	pop	ar6
   2823 D0 07         [24]10822 	pop	ar7
   2825 80 D5         [24]10823 	sjmp	00131$
   2827                   10824 00121$:
                     1FF4 10825 	C$easyax5043.c$1566$2$347 ==.
                          10826 ;	../COMMON/easyax5043.c:1566: axradio_trxstate = trxstate_off;
   2827 75 0B 00      [24]10827 	mov	_axradio_trxstate,#0x00
                     1FF7 10828 	C$easyax5043.c$1567$2$347 ==.
                          10829 ;	../COMMON/easyax5043.c:1567: AX5043_IRQMASK1 = 0x00;
   282A 90 40 06      [24]10830 	mov	dptr,#_AX5043_IRQMASK1
   282D E4            [12]10831 	clr	a
   282E F0            [24]10832 	movx	@dptr,a
                     1FFC 10833 	C$easyax5043.c$1568$2$347 ==.
                          10834 ;	../COMMON/easyax5043.c:1568: axradio_phy_chanpllrng_tx[i] = AX5043_PLLRANGINGA;
   282F ED            [12]10835 	mov	a,r5
   2830 24 01         [12]10836 	add	a,#_axradio_phy_chanpllrng_tx
   2832 FA            [12]10837 	mov	r2,a
   2833 E4            [12]10838 	clr	a
   2834 34 00         [12]10839 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   2836 FB            [12]10840 	mov	r3,a
   2837 90 40 33      [24]10841 	mov	dptr,#_AX5043_PLLRANGINGA
   283A E0            [24]10842 	movx	a,@dptr
   283B F9            [12]10843 	mov	r1,a
   283C 8A 82         [24]10844 	mov	dpl,r2
   283E 8B 83         [24]10845 	mov	dph,r3
   2840 F0            [24]10846 	movx	@dptr,a
                     200E 10847 	C$easyax5043.c$1569$2$347 ==.
                          10848 ;	../COMMON/easyax5043.c:1569: IE |= iesave;
   2841 EC            [12]10849 	mov	a,r4
   2842 42 A8         [12]10850 	orl	_IE,a
                     2011 10851 	C$easyax5043.c$1539$1$339 ==.
                          10852 ;	../COMMON/easyax5043.c:1539: for (i = 0; i < axradio_phy_nrchannels; ++i) {
   2844 0D            [12]10853 	inc	r5
   2845 02 27 AD      [24]10854 	ljmp	00134$
   2848                   10855 00122$:
                     2015 10856 	C$easyax5043.c$1571$1$339 ==.
                          10857 ;	../COMMON/easyax5043.c:1571: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   2848 90 40 02      [24]10858 	mov	dptr,#_AX5043_PWRMODE
   284B E4            [12]10859 	clr	a
   284C F0            [24]10860 	movx	@dptr,a
                     201A 10861 	C$easyax5043.c$1572$1$339 ==.
                          10862 ;	../COMMON/easyax5043.c:1572: AX5043_PLLRANGINGA = axradio_phy_chanpllrng_rx[0] & 0x0F;
   284D 90 00 00      [24]10863 	mov	dptr,#_axradio_phy_chanpllrng_rx
   2850 E0            [24]10864 	movx	a,@dptr
   2851 FD            [12]10865 	mov	r5,a
   2852 90 40 33      [24]10866 	mov	dptr,#_AX5043_PLLRANGINGA
   2855 74 0F         [12]10867 	mov	a,#0x0F
   2857 5D            [12]10868 	anl	a,r5
   2858 F0            [24]10869 	movx	@dptr,a
                     2026 10870 	C$easyax5043.c$1574$2$352 ==.
                          10871 ;	../COMMON/easyax5043.c:1574: uint32_t __autodata f = axradio_phy_chanfreq[0];
   2859 90 52 7A      [24]10872 	mov	dptr,#_axradio_phy_chanfreq
   285C E4            [12]10873 	clr	a
   285D 93            [24]10874 	movc	a,@a+dptr
   285E FA            [12]10875 	mov	r2,a
   285F A3            [24]10876 	inc	dptr
   2860 E4            [12]10877 	clr	a
   2861 93            [24]10878 	movc	a,@a+dptr
   2862 FB            [12]10879 	mov	r3,a
   2863 A3            [24]10880 	inc	dptr
   2864 E4            [12]10881 	clr	a
   2865 93            [24]10882 	movc	a,@a+dptr
   2866 FC            [12]10883 	mov	r4,a
   2867 A3            [24]10884 	inc	dptr
   2868 E4            [12]10885 	clr	a
   2869 93            [24]10886 	movc	a,@a+dptr
   286A FD            [12]10887 	mov	r5,a
                     2038 10888 	C$easyax5043.c$1575$2$352 ==.
                          10889 ;	../COMMON/easyax5043.c:1575: AX5043_FREQA0 = f;
   286B 90 40 37      [24]10890 	mov	dptr,#_AX5043_FREQA0
   286E EA            [12]10891 	mov	a,r2
   286F F0            [24]10892 	movx	@dptr,a
                     203D 10893 	C$easyax5043.c$1576$2$352 ==.
                          10894 ;	../COMMON/easyax5043.c:1576: AX5043_FREQA1 = f >> 8;
   2870 90 40 36      [24]10895 	mov	dptr,#_AX5043_FREQA1
   2873 EB            [12]10896 	mov	a,r3
   2874 F0            [24]10897 	movx	@dptr,a
                     2042 10898 	C$easyax5043.c$1577$2$352 ==.
                          10899 ;	../COMMON/easyax5043.c:1577: AX5043_FREQA2 = f >> 16;
   2875 90 40 35      [24]10900 	mov	dptr,#_AX5043_FREQA2
   2878 EC            [12]10901 	mov	a,r4
   2879 F0            [24]10902 	movx	@dptr,a
                     2047 10903 	C$easyax5043.c$1578$2$352 ==.
                          10904 ;	../COMMON/easyax5043.c:1578: AX5043_FREQA3 = f >> 24;
   287A 90 40 34      [24]10905 	mov	dptr,#_AX5043_FREQA3
   287D ED            [12]10906 	mov	a,r5
   287E F0            [24]10907 	movx	@dptr,a
                     204C 10908 	C$easyax5043.c$1580$1$339 ==.
                          10909 ;	../COMMON/easyax5043.c:1580: AX5043_PLLLOOP = pllloop_save; // restore loop settings (works if they came from the common section, unimportant if the came from the rx / tx section)
   287F 90 40 30      [24]10910 	mov	dptr,#_AX5043_PLLLOOP
   2882 EF            [12]10911 	mov	a,r7
   2883 F0            [24]10912 	movx	@dptr,a
                     2051 10913 	C$easyax5043.c$1581$1$339 ==.
                          10914 ;	../COMMON/easyax5043.c:1581: AX5043_PLLCPI = pllcpi_save;
   2884 90 40 31      [24]10915 	mov	dptr,#_AX5043_PLLCPI
   2887 EE            [12]10916 	mov	a,r6
   2888 F0            [24]10917 	movx	@dptr,a
                     2056 10918 	C$easyax5043.c$1583$1$339 ==.
                          10919 ;	../COMMON/easyax5043.c:1583: axradio_mode = AXRADIO_MODE_OFF;
   2889 75 0A 01      [24]10920 	mov	_axradio_mode,#0x01
                     2059 10921 	C$easyax5043.c$1584$1$339 ==.
                          10922 ;	../COMMON/easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   288C 7F 00         [12]10923 	mov	r7,#0x00
   288E                   10924 00137$:
   288E 90 52 79      [24]10925 	mov	dptr,#_axradio_phy_nrchannels
   2891 E4            [12]10926 	clr	a
   2892 93            [24]10927 	movc	a,@a+dptr
   2893 FE            [12]10928 	mov	r6,a
   2894 C3            [12]10929 	clr	c
   2895 EF            [12]10930 	mov	a,r7
   2896 9E            [12]10931 	subb	a,r6
   2897 50 24         [24]10932 	jnc	00125$
                     2066 10933 	C$easyax5043.c$1585$1$339 ==.
                          10934 ;	../COMMON/easyax5043.c:1585: if ((axradio_phy_chanpllrng_rx[i] | axradio_phy_chanpllrng_tx[i]) & 0x20)
   2899 EF            [12]10935 	mov	a,r7
   289A 24 00         [12]10936 	add	a,#_axradio_phy_chanpllrng_rx
   289C F5 82         [12]10937 	mov	dpl,a
   289E E4            [12]10938 	clr	a
   289F 34 00         [12]10939 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   28A1 F5 83         [12]10940 	mov	dph,a
   28A3 E0            [24]10941 	movx	a,@dptr
   28A4 FE            [12]10942 	mov	r6,a
   28A5 EF            [12]10943 	mov	a,r7
   28A6 24 01         [12]10944 	add	a,#_axradio_phy_chanpllrng_tx
   28A8 F5 82         [12]10945 	mov	dpl,a
   28AA E4            [12]10946 	clr	a
   28AB 34 00         [12]10947 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   28AD F5 83         [12]10948 	mov	dph,a
   28AF E0            [24]10949 	movx	a,@dptr
   28B0 FD            [12]10950 	mov	r5,a
   28B1 4E            [12]10951 	orl	a,r6
   28B2 30 E5 05      [24]10952 	jnb	acc.5,00138$
                     2082 10953 	C$easyax5043.c$1586$1$339 ==.
                          10954 ;	../COMMON/easyax5043.c:1586: return AXRADIO_ERR_RANGING;
   28B5 75 82 06      [24]10955 	mov	dpl,#0x06
   28B8 80 06         [24]10956 	sjmp	00139$
   28BA                   10957 00138$:
                     2087 10958 	C$easyax5043.c$1584$1$339 ==.
                          10959 ;	../COMMON/easyax5043.c:1584: for (i = 0; i < axradio_phy_nrchannels; ++i)
   28BA 0F            [12]10960 	inc	r7
   28BB 80 D1         [24]10961 	sjmp	00137$
   28BD                   10962 00125$:
                     208A 10963 	C$easyax5043.c$1588$1$339 ==.
                          10964 ;	../COMMON/easyax5043.c:1588: return AXRADIO_ERR_NOERROR;
   28BD 75 82 00      [24]10965 	mov	dpl,#0x00
   28C0                   10966 00139$:
                     208D 10967 	C$easyax5043.c$1589$1$339 ==.
                     208D 10968 	XG$axradio_init$0$0 ==.
   28C0 22            [24]10969 	ret
                          10970 ;------------------------------------------------------------
                          10971 ;Allocation info for local variables in function 'axradio_cansleep'
                          10972 ;------------------------------------------------------------
                     208E 10973 	G$axradio_cansleep$0$0 ==.
                     208E 10974 	C$easyax5043.c$1591$1$339 ==.
                          10975 ;	../COMMON/easyax5043.c:1591: __reentrantb uint8_t axradio_cansleep(void) __reentrant
                          10976 ;	-----------------------------------------
                          10977 ;	 function axradio_cansleep
                          10978 ;	-----------------------------------------
   28C1                   10979 _axradio_cansleep:
                     208E 10980 	C$easyax5043.c$1593$1$354 ==.
                          10981 ;	../COMMON/easyax5043.c:1593: if (axradio_trxstate == trxstate_off || axradio_trxstate == trxstate_rxwor)
   28C1 E5 0B         [12]10982 	mov	a,_axradio_trxstate
   28C3 60 05         [24]10983 	jz	00101$
   28C5 74 02         [12]10984 	mov	a,#0x02
   28C7 B5 0B 05      [24]10985 	cjne	a,_axradio_trxstate,00102$
   28CA                   10986 00101$:
                     2097 10987 	C$easyax5043.c$1594$1$354 ==.
                          10988 ;	../COMMON/easyax5043.c:1594: return 1;
   28CA 75 82 01      [24]10989 	mov	dpl,#0x01
   28CD 80 03         [24]10990 	sjmp	00104$
   28CF                   10991 00102$:
                     209C 10992 	C$easyax5043.c$1595$1$354 ==.
                          10993 ;	../COMMON/easyax5043.c:1595: return 0;
   28CF 75 82 00      [24]10994 	mov	dpl,#0x00
   28D2                   10995 00104$:
                     209F 10996 	C$easyax5043.c$1596$1$354 ==.
                     209F 10997 	XG$axradio_cansleep$0$0 ==.
   28D2 22            [24]10998 	ret
                          10999 ;------------------------------------------------------------
                          11000 ;Allocation info for local variables in function 'wtimer_cansleep_dummy'
                          11001 ;------------------------------------------------------------
                     20A0 11002 	Feasyax5043$wtimer_cansleep_dummy$0$0 ==.
                     20A0 11003 	C$easyax5043.c$1599$1$354 ==.
                          11004 ;	../COMMON/easyax5043.c:1599: static void wtimer_cansleep_dummy(void) __naked
                          11005 ;	-----------------------------------------
                          11006 ;	 function wtimer_cansleep_dummy
                          11007 ;	-----------------------------------------
   28D3                   11008 _wtimer_cansleep_dummy:
                          11009 ;	naked function: no prologue.
                     20A0 11010 	C$easyax5043.c$1613$1$356 ==.
                          11011 ;	../COMMON/easyax5043.c:1613: __endasm;
                          11012 	.area WTCANSLP0 (CODE)
                          11013 	.area WTCANSLP1 (CODE)
                          11014 	.area WTCANSLP2 (CODE)
                          11015 	.area WTCANSLP1 (CODE)
   56BA 12 28 C1      [24]11016 	lcall _axradio_cansleep
   56BD E5 82         [12]11017 	mov a,dpl
   56BF 70 01         [24]11018 	jnz 00000$
   56C1 22            [24]11019 	ret
   56C2                   11020 	00000$:
                          11021 	.area CSEG (CODE)
                          11022 ;	naked function: no epilogue.
                     20A0 11023 	C$easyax5043.c$1614$1$356 ==.
                     20A0 11024 	XFeasyax5043$wtimer_cansleep_dummy$0$0 ==.
                          11025 ;------------------------------------------------------------
                          11026 ;Allocation info for local variables in function 'axradio_set_mode'
                          11027 ;------------------------------------------------------------
                          11028 ;mode                      Allocated to registers r7 
                          11029 ;r                         Allocated to registers r6 
                          11030 ;r                         Allocated to registers r6 
                          11031 ;iesave                    Allocated to registers r6 
                          11032 ;------------------------------------------------------------
                     20A0 11033 	G$axradio_set_mode$0$0 ==.
                     20A0 11034 	C$easyax5043.c$1617$1$356 ==.
                          11035 ;	../COMMON/easyax5043.c:1617: uint8_t axradio_set_mode(uint8_t mode)
                          11036 ;	-----------------------------------------
                          11037 ;	 function axradio_set_mode
                          11038 ;	-----------------------------------------
   28D3                   11039 _axradio_set_mode:
                     20A0 11040 	C$easyax5043.c$1619$1$358 ==.
                          11041 ;	../COMMON/easyax5043.c:1619: if (mode == axradio_mode)
   28D3 E5 82         [12]11042 	mov	a,dpl
   28D5 FF            [12]11043 	mov	r7,a
   28D6 B5 0A 06      [24]11044 	cjne	a,_axradio_mode,00102$
                     20A6 11045 	C$easyax5043.c$1620$1$358 ==.
                          11046 ;	../COMMON/easyax5043.c:1620: return AXRADIO_ERR_NOERROR;
   28D9 75 82 00      [24]11047 	mov	dpl,#0x00
   28DC 02 2C C1      [24]11048 	ljmp	00161$
   28DF                   11049 00102$:
                     20AC 11050 	C$easyax5043.c$1621$1$358 ==.
                          11051 ;	../COMMON/easyax5043.c:1621: switch (axradio_mode) {
   28DF AE 0A         [24]11052 	mov	r6,_axradio_mode
   28E1 BE 00 02      [24]11053 	cjne	r6,#0x00,00237$
   28E4 80 2E         [24]11054 	sjmp	00103$
   28E6                   11055 00237$:
   28E6 BE 02 02      [24]11056 	cjne	r6,#0x02,00238$
   28E9 80 3D         [24]11057 	sjmp	00106$
   28EB                   11058 00238$:
   28EB BE 03 02      [24]11059 	cjne	r6,#0x03,00239$
   28EE 80 6C         [24]11060 	sjmp	00114$
   28F0                   11061 00239$:
   28F0 BE 14 02      [24]11062 	cjne	r6,#0x14,00240$
   28F3 80 67         [24]11063 	sjmp	00114$
   28F5                   11064 00240$:
   28F5 BE 15 02      [24]11065 	cjne	r6,#0x15,00241$
   28F8 80 62         [24]11066 	sjmp	00114$
   28FA                   11067 00241$:
   28FA BE 16 02      [24]11068 	cjne	r6,#0x16,00242$
   28FD 80 5D         [24]11069 	sjmp	00114$
   28FF                   11070 00242$:
   28FF BE 1C 03      [24]11071 	cjne	r6,#0x1C,00243$
   2902 02 29 B5      [24]11072 	ljmp	00119$
   2905                   11073 00243$:
   2905 BE 1D 03      [24]11074 	cjne	r6,#0x1D,00244$
   2908 02 29 B5      [24]11075 	ljmp	00119$
   290B                   11076 00244$:
   290B BE 1E 03      [24]11077 	cjne	r6,#0x1E,00245$
   290E 02 29 B5      [24]11078 	ljmp	00119$
   2911                   11079 00245$:
   2911 02 29 C2      [24]11080 	ljmp	00120$
                     20E1 11081 	C$easyax5043.c$1622$2$359 ==.
                          11082 ;	../COMMON/easyax5043.c:1622: case AXRADIO_MODE_UNINIT:
   2914                   11083 00103$:
                     20E1 11084 	C$easyax5043.c$1624$3$360 ==.
                          11085 ;	../COMMON/easyax5043.c:1624: uint8_t __autodata r = axradio_init();
   2914 C0 07         [24]11086 	push	ar7
   2916 12 25 D1      [24]11087 	lcall	_axradio_init
   2919 AE 82         [24]11088 	mov	r6,dpl
   291B D0 07         [24]11089 	pop	ar7
                     20EA 11090 	C$easyax5043.c$1625$3$360 ==.
                          11091 ;	../COMMON/easyax5043.c:1625: if (r != AXRADIO_ERR_NOERROR)
   291D EE            [12]11092 	mov	a,r6
   291E 70 03         [24]11093 	jnz	00246$
   2920 02 29 CC      [24]11094 	ljmp	00121$
   2923                   11095 00246$:
                     20F0 11096 	C$easyax5043.c$1626$3$360 ==.
                          11097 ;	../COMMON/easyax5043.c:1626: return r;
   2923 8E 82         [24]11098 	mov	dpl,r6
   2925 02 2C C1      [24]11099 	ljmp	00161$
                     20F5 11100 	C$easyax5043.c$1630$2$359 ==.
                          11101 ;	../COMMON/easyax5043.c:1630: case AXRADIO_MODE_DEEPSLEEP:
   2928                   11102 00106$:
                     20F5 11103 	C$easyax5043.c$1632$3$361 ==.
                          11104 ;	../COMMON/easyax5043.c:1632: uint8_t __autodata r = ax5043_wakeup_deepsleep();
   2928 C0 07         [24]11105 	push	ar7
   292A 12 3A F1      [24]11106 	lcall	_ax5043_wakeup_deepsleep
   292D AE 82         [24]11107 	mov	r6,dpl
   292F D0 07         [24]11108 	pop	ar7
                     20FE 11109 	C$easyax5043.c$1633$3$361 ==.
                          11110 ;	../COMMON/easyax5043.c:1633: if (r)
   2931 EE            [12]11111 	mov	a,r6
   2932 60 06         [24]11112 	jz	00108$
                     2101 11113 	C$easyax5043.c$1634$3$361 ==.
                          11114 ;	../COMMON/easyax5043.c:1634: return AXRADIO_ERR_NOCHIP;
   2934 75 82 05      [24]11115 	mov	dpl,#0x05
   2937 02 2C C1      [24]11116 	ljmp	00161$
   293A                   11117 00108$:
                     2107 11118 	C$easyax5043.c$1635$3$361 ==.
                          11119 ;	../COMMON/easyax5043.c:1635: ax5043_init_registers();
   293A C0 07         [24]11120 	push	ar7
   293C 12 15 F9      [24]11121 	lcall	_ax5043_init_registers
                     210C 11122 	C$easyax5043.c$1636$3$361 ==.
                          11123 ;	../COMMON/easyax5043.c:1636: r = axradio_set_channel(axradio_curchannel);
   293F 90 00 09      [24]11124 	mov	dptr,#_axradio_curchannel
   2942 E0            [24]11125 	movx	a,@dptr
   2943 F5 82         [12]11126 	mov	dpl,a
   2945 12 2C C6      [24]11127 	lcall	_axradio_set_channel
   2948 AE 82         [24]11128 	mov	r6,dpl
   294A D0 07         [24]11129 	pop	ar7
                     2119 11130 	C$easyax5043.c$1637$3$361 ==.
                          11131 ;	../COMMON/easyax5043.c:1637: if (r != AXRADIO_ERR_NOERROR)
   294C EE            [12]11132 	mov	a,r6
   294D 60 05         [24]11133 	jz	00110$
                     211C 11134 	C$easyax5043.c$1638$3$361 ==.
                          11135 ;	../COMMON/easyax5043.c:1638: return r;
   294F 8E 82         [24]11136 	mov	dpl,r6
   2951 02 2C C1      [24]11137 	ljmp	00161$
   2954                   11138 00110$:
                     2121 11139 	C$easyax5043.c$1639$3$361 ==.
                          11140 ;	../COMMON/easyax5043.c:1639: axradio_trxstate = trxstate_off;
   2954 75 0B 00      [24]11141 	mov	_axradio_trxstate,#0x00
                     2124 11142 	C$easyax5043.c$1640$3$361 ==.
                          11143 ;	../COMMON/easyax5043.c:1640: axradio_mode = AXRADIO_MODE_OFF;
   2957 75 0A 01      [24]11144 	mov	_axradio_mode,#0x01
                     2127 11145 	C$easyax5043.c$1641$3$361 ==.
                          11146 ;	../COMMON/easyax5043.c:1641: break;
                     2127 11147 	C$easyax5043.c$1647$2$359 ==.
                          11148 ;	../COMMON/easyax5043.c:1647: case AXRADIO_MODE_CW_TRANSMIT:
   295A 80 70         [24]11149 	sjmp	00121$
   295C                   11150 00114$:
                     2129 11151 	C$easyax5043.c$1649$3$362 ==.
                          11152 ;	../COMMON/easyax5043.c:1649: uint8_t __autodata iesave = IE & 0x80;
   295C 74 80         [12]11153 	mov	a,#0x80
   295E 55 A8         [12]11154 	anl	a,_IE
   2960 FE            [12]11155 	mov	r6,a
                     212E 11156 	C$easyax5043.c$1650$3$362 ==.
                          11157 ;	../COMMON/easyax5043.c:1650: EA = 0;
   2961 C2 AF         [12]11158 	clr	_EA
                     2130 11159 	C$easyax5043.c$1651$3$362 ==.
                          11160 ;	../COMMON/easyax5043.c:1651: if (axradio_trxstate == trxstate_off) {
   2963 E5 0B         [12]11161 	mov	a,_axradio_trxstate
   2965 70 38         [24]11162 	jnz	00116$
                     2134 11163 	C$easyax5043.c$1652$4$363 ==.
                          11164 ;	../COMMON/easyax5043.c:1652: update_timeanchor();
   2967 C0 07         [24]11165 	push	ar7
   2969 C0 06         [24]11166 	push	ar6
   296B 12 08 33      [24]11167 	lcall	_update_timeanchor
                     213B 11168 	C$easyax5043.c$1653$4$363 ==.
                          11169 ;	../COMMON/easyax5043.c:1653: wtimer_remove_callback(&axradio_cb_transmitend.cb);
   296E 90 02 75      [24]11170 	mov	dptr,#_axradio_cb_transmitend
   2971 12 4E DE      [24]11171 	lcall	_wtimer_remove_callback
                     2141 11172 	C$easyax5043.c$1654$4$363 ==.
                          11173 ;	../COMMON/easyax5043.c:1654: axradio_cb_transmitend.st.error = AXRADIO_ERR_NOERROR;
   2974 90 02 7A      [24]11174 	mov	dptr,#(_axradio_cb_transmitend + 0x0005)
   2977 E4            [12]11175 	clr	a
   2978 F0            [24]11176 	movx	@dptr,a
                     2146 11177 	C$easyax5043.c$1655$4$363 ==.
                          11178 ;	../COMMON/easyax5043.c:1655: axradio_cb_transmitend.st.time.t = axradio_timeanchor.radiotimer;
   2979 90 00 1A      [24]11179 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   297C E0            [24]11180 	movx	a,@dptr
   297D FA            [12]11181 	mov	r2,a
   297E A3            [24]11182 	inc	dptr
   297F E0            [24]11183 	movx	a,@dptr
   2980 FB            [12]11184 	mov	r3,a
   2981 A3            [24]11185 	inc	dptr
   2982 E0            [24]11186 	movx	a,@dptr
   2983 FC            [12]11187 	mov	r4,a
   2984 A3            [24]11188 	inc	dptr
   2985 E0            [24]11189 	movx	a,@dptr
   2986 FD            [12]11190 	mov	r5,a
   2987 90 02 7B      [24]11191 	mov	dptr,#(_axradio_cb_transmitend + 0x0006)
   298A EA            [12]11192 	mov	a,r2
   298B F0            [24]11193 	movx	@dptr,a
   298C EB            [12]11194 	mov	a,r3
   298D A3            [24]11195 	inc	dptr
   298E F0            [24]11196 	movx	@dptr,a
   298F EC            [12]11197 	mov	a,r4
   2990 A3            [24]11198 	inc	dptr
   2991 F0            [24]11199 	movx	@dptr,a
   2992 ED            [12]11200 	mov	a,r5
   2993 A3            [24]11201 	inc	dptr
   2994 F0            [24]11202 	movx	@dptr,a
                     2162 11203 	C$easyax5043.c$1656$4$363 ==.
                          11204 ;	../COMMON/easyax5043.c:1656: wtimer_add_callback(&axradio_cb_transmitend.cb);
   2995 90 02 75      [24]11205 	mov	dptr,#_axradio_cb_transmitend
   2998 12 43 37      [24]11206 	lcall	_wtimer_add_callback
   299B D0 06         [24]11207 	pop	ar6
   299D D0 07         [24]11208 	pop	ar7
   299F                   11209 00116$:
                     216C 11210 	C$easyax5043.c$1658$3$362 ==.
                          11211 ;	../COMMON/easyax5043.c:1658: ax5043_off();
   299F C0 07         [24]11212 	push	ar7
   29A1 C0 06         [24]11213 	push	ar6
   29A3 12 14 7D      [24]11214 	lcall	_ax5043_off
   29A6 D0 06         [24]11215 	pop	ar6
                     2175 11216 	C$easyax5043.c$1659$3$362 ==.
                          11217 ;	../COMMON/easyax5043.c:1659: IE |= iesave;
   29A8 EE            [12]11218 	mov	a,r6
   29A9 42 A8         [12]11219 	orl	_IE,a
                     2178 11220 	C$easyax5043.c$1661$3$362 ==.
                          11221 ;	../COMMON/easyax5043.c:1661: ax5043_init_registers();
   29AB 12 15 F9      [24]11222 	lcall	_ax5043_init_registers
   29AE D0 07         [24]11223 	pop	ar7
                     217D 11224 	C$easyax5043.c$1662$3$362 ==.
                          11225 ;	../COMMON/easyax5043.c:1662: axradio_mode = AXRADIO_MODE_OFF;
   29B0 75 0A 01      [24]11226 	mov	_axradio_mode,#0x01
                     2180 11227 	C$easyax5043.c$1663$3$362 ==.
                          11228 ;	../COMMON/easyax5043.c:1663: break;
                     2180 11229 	C$easyax5043.c$1668$2$359 ==.
                          11230 ;	../COMMON/easyax5043.c:1668: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   29B3 80 17         [24]11231 	sjmp	00121$
   29B5                   11232 00119$:
                     2182 11233 	C$easyax5043.c$1669$2$359 ==.
                          11234 ;	../COMMON/easyax5043.c:1669: ax5043_off();
   29B5 C0 07         [24]11235 	push	ar7
   29B7 12 14 7D      [24]11236 	lcall	_ax5043_off
                     2187 11237 	C$easyax5043.c$1670$2$359 ==.
                          11238 ;	../COMMON/easyax5043.c:1670: ax5043_init_registers();
   29BA 12 15 F9      [24]11239 	lcall	_ax5043_init_registers
   29BD D0 07         [24]11240 	pop	ar7
                     218C 11241 	C$easyax5043.c$1671$2$359 ==.
                          11242 ;	../COMMON/easyax5043.c:1671: axradio_mode = AXRADIO_MODE_OFF;
   29BF 75 0A 01      [24]11243 	mov	_axradio_mode,#0x01
                     218F 11244 	C$easyax5043.c$1673$2$359 ==.
                          11245 ;	../COMMON/easyax5043.c:1673: default:
   29C2                   11246 00120$:
                     218F 11247 	C$easyax5043.c$1674$2$359 ==.
                          11248 ;	../COMMON/easyax5043.c:1674: ax5043_off();
   29C2 C0 07         [24]11249 	push	ar7
   29C4 12 14 7D      [24]11250 	lcall	_ax5043_off
   29C7 D0 07         [24]11251 	pop	ar7
                     2196 11252 	C$easyax5043.c$1675$2$359 ==.
                          11253 ;	../COMMON/easyax5043.c:1675: axradio_mode = AXRADIO_MODE_OFF;
   29C9 75 0A 01      [24]11254 	mov	_axradio_mode,#0x01
                     2199 11255 	C$easyax5043.c$1677$1$358 ==.
                          11256 ;	../COMMON/easyax5043.c:1677: }
   29CC                   11257 00121$:
                     2199 11258 	C$easyax5043.c$1678$1$358 ==.
                          11259 ;	../COMMON/easyax5043.c:1678: axradio_killallcb();
   29CC C0 07         [24]11260 	push	ar7
   29CE 12 25 A6      [24]11261 	lcall	_axradio_killallcb
   29D1 D0 07         [24]11262 	pop	ar7
                     21A0 11263 	C$easyax5043.c$1679$1$358 ==.
                          11264 ;	../COMMON/easyax5043.c:1679: if (mode == AXRADIO_MODE_UNINIT)
   29D3 EF            [12]11265 	mov	a,r7
   29D4 70 06         [24]11266 	jnz	00123$
                     21A3 11267 	C$easyax5043.c$1680$1$358 ==.
                          11268 ;	../COMMON/easyax5043.c:1680: return AXRADIO_ERR_NOTSUPPORTED;
   29D6 75 82 01      [24]11269 	mov	dpl,#0x01
   29D9 02 2C C1      [24]11270 	ljmp	00161$
   29DC                   11271 00123$:
                     21A9 11272 	C$easyax5043.c$1681$1$358 ==.
                          11273 ;	../COMMON/easyax5043.c:1681: axradio_syncstate = syncstate_off;
   29DC 90 00 04      [24]11274 	mov	dptr,#_axradio_syncstate
   29DF E4            [12]11275 	clr	a
   29E0 F0            [24]11276 	movx	@dptr,a
                     21AE 11277 	C$easyax5043.c$1682$1$358 ==.
                          11278 ;	../COMMON/easyax5043.c:1682: switch (mode) {
   29E1 EF            [12]11279 	mov	a,r7
   29E2 24 DC         [12]11280 	add	a,#0xff - 0x23
   29E4 50 03         [24]11281 	jnc	00251$
   29E6 02 2C BE      [24]11282 	ljmp	00159$
   29E9                   11283 00251$:
   29E9 EF            [12]11284 	mov	a,r7
   29EA 24 0A         [12]11285 	add	a,#(00252$-3-.)
   29EC 83            [24]11286 	movc	a,@a+pc
   29ED F5 82         [12]11287 	mov	dpl,a
   29EF EF            [12]11288 	mov	a,r7
   29F0 24 28         [12]11289 	add	a,#(00253$-3-.)
   29F2 83            [24]11290 	movc	a,@a+pc
   29F3 F5 83         [12]11291 	mov	dph,a
   29F5 E4            [12]11292 	clr	a
   29F6 73            [24]11293 	jmp	@a+dptr
   29F7                   11294 00252$:
   29F7 BE                11295 	.db	00159$
   29F8 3F                11296 	.db	00124$
   29F9 45                11297 	.db	00125$
   29FA 7C                11298 	.db	00154$
   29FB BE                11299 	.db	00159$
   29FC BE                11300 	.db	00159$
   29FD BE                11301 	.db	00159$
   29FE BE                11302 	.db	00159$
   29FF BE                11303 	.db	00159$
   2A00 BE                11304 	.db	00159$
   2A01 BE                11305 	.db	00159$
   2A02 BE                11306 	.db	00159$
   2A03 BE                11307 	.db	00159$
   2A04 BE                11308 	.db	00159$
   2A05 BE                11309 	.db	00159$
   2A06 BE                11310 	.db	00159$
   2A07 51                11311 	.db	00126$
   2A08 66                11312 	.db	00128$
   2A09 51                11313 	.db	00127$
   2A0A 66                11314 	.db	00129$
   2A0B DB                11315 	.db	00137$
   2A0C DB                11316 	.db	00138$
   2A0D DB                11317 	.db	00139$
   2A0E BE                11318 	.db	00159$
   2A0F 7B                11319 	.db	00130$
   2A10 C3                11320 	.db	00135$
   2A11 7B                11321 	.db	00131$
   2A12 C3                11322 	.db	00136$
   2A13 48                11323 	.db	00147$
   2A14 48                11324 	.db	00148$
   2A15 48                11325 	.db	00149$
   2A16 BE                11326 	.db	00159$
   2A17 C4                11327 	.db	00155$
   2A18 C4                11328 	.db	00156$
   2A19 23                11329 	.db	00157$
   2A1A 23                11330 	.db	00158$
   2A1B                   11331 00253$:
   2A1B 2C                11332 	.db	00159$>>8
   2A1C 2A                11333 	.db	00124$>>8
   2A1D 2A                11334 	.db	00125$>>8
   2A1E 2B                11335 	.db	00154$>>8
   2A1F 2C                11336 	.db	00159$>>8
   2A20 2C                11337 	.db	00159$>>8
   2A21 2C                11338 	.db	00159$>>8
   2A22 2C                11339 	.db	00159$>>8
   2A23 2C                11340 	.db	00159$>>8
   2A24 2C                11341 	.db	00159$>>8
   2A25 2C                11342 	.db	00159$>>8
   2A26 2C                11343 	.db	00159$>>8
   2A27 2C                11344 	.db	00159$>>8
   2A28 2C                11345 	.db	00159$>>8
   2A29 2C                11346 	.db	00159$>>8
   2A2A 2C                11347 	.db	00159$>>8
   2A2B 2A                11348 	.db	00126$>>8
   2A2C 2A                11349 	.db	00128$>>8
   2A2D 2A                11350 	.db	00127$>>8
   2A2E 2A                11351 	.db	00129$>>8
   2A2F 2A                11352 	.db	00137$>>8
   2A30 2A                11353 	.db	00138$>>8
   2A31 2A                11354 	.db	00139$>>8
   2A32 2C                11355 	.db	00159$>>8
   2A33 2A                11356 	.db	00130$>>8
   2A34 2A                11357 	.db	00135$>>8
   2A35 2A                11358 	.db	00131$>>8
   2A36 2A                11359 	.db	00136$>>8
   2A37 2B                11360 	.db	00147$>>8
   2A38 2B                11361 	.db	00148$>>8
   2A39 2B                11362 	.db	00149$>>8
   2A3A 2C                11363 	.db	00159$>>8
   2A3B 2B                11364 	.db	00155$>>8
   2A3C 2B                11365 	.db	00156$>>8
   2A3D 2C                11366 	.db	00157$>>8
   2A3E 2C                11367 	.db	00158$>>8
                     220C 11368 	C$easyax5043.c$1683$2$364 ==.
                          11369 ;	../COMMON/easyax5043.c:1683: case AXRADIO_MODE_OFF:
   2A3F                   11370 00124$:
                     220C 11371 	C$easyax5043.c$1684$2$364 ==.
                          11372 ;	../COMMON/easyax5043.c:1684: return AXRADIO_ERR_NOERROR;
   2A3F 75 82 00      [24]11373 	mov	dpl,#0x00
   2A42 02 2C C1      [24]11374 	ljmp	00161$
                     2212 11375 	C$easyax5043.c$1686$2$364 ==.
                          11376 ;	../COMMON/easyax5043.c:1686: case AXRADIO_MODE_DEEPSLEEP:
   2A45                   11377 00125$:
                     2212 11378 	C$easyax5043.c$1687$2$364 ==.
                          11379 ;	../COMMON/easyax5043.c:1687: ax5043_enter_deepsleep();
   2A45 12 3A CF      [24]11380 	lcall	_ax5043_enter_deepsleep
                     2215 11381 	C$easyax5043.c$1688$2$364 ==.
                          11382 ;	../COMMON/easyax5043.c:1688: axradio_mode = AXRADIO_MODE_DEEPSLEEP;
   2A48 75 0A 02      [24]11383 	mov	_axradio_mode,#0x02
                     2218 11384 	C$easyax5043.c$1689$2$364 ==.
                          11385 ;	../COMMON/easyax5043.c:1689: return AXRADIO_ERR_NOERROR;
   2A4B 75 82 00      [24]11386 	mov	dpl,#0x00
   2A4E 02 2C C1      [24]11387 	ljmp	00161$
                     221E 11388 	C$easyax5043.c$1691$2$364 ==.
                          11389 ;	../COMMON/easyax5043.c:1691: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2A51                   11390 00126$:
                     221E 11391 	C$easyax5043.c$1692$2$364 ==.
                          11392 ;	../COMMON/easyax5043.c:1692: case AXRADIO_MODE_ACK_TRANSMIT:
   2A51                   11393 00127$:
                     221E 11394 	C$easyax5043.c$1693$2$364 ==.
                          11395 ;	../COMMON/easyax5043.c:1693: ax5043_init_registers_tx();
   2A51 C0 07         [24]11396 	push	ar7
   2A53 12 08 C9      [24]11397 	lcall	_ax5043_init_registers_tx
   2A56 D0 07         [24]11398 	pop	ar7
                     2225 11399 	C$easyax5043.c$1694$2$364 ==.
                          11400 ;	../COMMON/easyax5043.c:1694: axradio_ack_seqnr = 0xff;
   2A58 90 00 0F      [24]11401 	mov	dptr,#_axradio_ack_seqnr
   2A5B 74 FF         [12]11402 	mov	a,#0xFF
   2A5D F0            [24]11403 	movx	@dptr,a
                     222B 11404 	C$easyax5043.c$1695$2$364 ==.
                          11405 ;	../COMMON/easyax5043.c:1695: axradio_mode = mode;
   2A5E 8F 0A         [24]11406 	mov	_axradio_mode,r7
                     222D 11407 	C$easyax5043.c$1696$2$364 ==.
                          11408 ;	../COMMON/easyax5043.c:1696: return AXRADIO_ERR_NOERROR;
   2A60 75 82 00      [24]11409 	mov	dpl,#0x00
   2A63 02 2C C1      [24]11410 	ljmp	00161$
                     2233 11411 	C$easyax5043.c$1698$2$364 ==.
                          11412 ;	../COMMON/easyax5043.c:1698: case AXRADIO_MODE_WOR_TRANSMIT:
   2A66                   11413 00128$:
                     2233 11414 	C$easyax5043.c$1699$2$364 ==.
                          11415 ;	../COMMON/easyax5043.c:1699: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2A66                   11416 00129$:
                     2233 11417 	C$easyax5043.c$1700$2$364 ==.
                          11418 ;	../COMMON/easyax5043.c:1700: ax5043_init_registers_tx();
   2A66 C0 07         [24]11419 	push	ar7
   2A68 12 08 C9      [24]11420 	lcall	_ax5043_init_registers_tx
   2A6B D0 07         [24]11421 	pop	ar7
                     223A 11422 	C$easyax5043.c$1701$2$364 ==.
                          11423 ;	../COMMON/easyax5043.c:1701: axradio_ack_seqnr = 0xff;
   2A6D 90 00 0F      [24]11424 	mov	dptr,#_axradio_ack_seqnr
   2A70 74 FF         [12]11425 	mov	a,#0xFF
   2A72 F0            [24]11426 	movx	@dptr,a
                     2240 11427 	C$easyax5043.c$1702$2$364 ==.
                          11428 ;	../COMMON/easyax5043.c:1702: axradio_mode = mode;
   2A73 8F 0A         [24]11429 	mov	_axradio_mode,r7
                     2242 11430 	C$easyax5043.c$1703$2$364 ==.
                          11431 ;	../COMMON/easyax5043.c:1703: return AXRADIO_ERR_NOERROR;
   2A75 75 82 00      [24]11432 	mov	dpl,#0x00
   2A78 02 2C C1      [24]11433 	ljmp	00161$
                     2248 11434 	C$easyax5043.c$1705$2$364 ==.
                          11435 ;	../COMMON/easyax5043.c:1705: case AXRADIO_MODE_ASYNC_RECEIVE:
   2A7B                   11436 00130$:
                     2248 11437 	C$easyax5043.c$1706$2$364 ==.
                          11438 ;	../COMMON/easyax5043.c:1706: case AXRADIO_MODE_ACK_RECEIVE:
   2A7B                   11439 00131$:
                     2248 11440 	C$easyax5043.c$1707$2$364 ==.
                          11441 ;	../COMMON/easyax5043.c:1707: ax5043_init_registers_rx();
   2A7B C0 07         [24]11442 	push	ar7
   2A7D 12 08 FF      [24]11443 	lcall	_ax5043_init_registers_rx
                     224D 11444 	C$easyax5043.c$1708$2$364 ==.
                          11445 ;	../COMMON/easyax5043.c:1708: ax5043_receiver_on_continuous();
   2A80 12 13 38      [24]11446 	lcall	_ax5043_receiver_on_continuous
   2A83 D0 07         [24]11447 	pop	ar7
                     2252 11448 	C$easyax5043.c$1709$2$364 ==.
                          11449 ;	../COMMON/easyax5043.c:1709: axradio_ack_seqnr = 0xff;
   2A85 90 00 0F      [24]11450 	mov	dptr,#_axradio_ack_seqnr
   2A88 74 FF         [12]11451 	mov	a,#0xFF
   2A8A F0            [24]11452 	movx	@dptr,a
                     2258 11453 	C$easyax5043.c$1710$2$364 ==.
                          11454 ;	../COMMON/easyax5043.c:1710: axradio_mode = mode;
   2A8B 8F 0A         [24]11455 	mov	_axradio_mode,r7
                     225A 11456 	C$easyax5043.c$1711$2$364 ==.
                          11457 ;	../COMMON/easyax5043.c:1711: enablecs:
   2A8D                   11458 00132$:
                     225A 11459 	C$easyax5043.c$1712$2$364 ==.
                          11460 ;	../COMMON/easyax5043.c:1712: if (axradio_phy_cs_enabled) {
   2A8D 90 52 88      [24]11461 	mov	dptr,#_axradio_phy_cs_enabled
   2A90 E4            [12]11462 	clr	a
   2A91 93            [24]11463 	movc	a,@a+dptr
   2A92 FE            [12]11464 	mov	r6,a
   2A93 60 28         [24]11465 	jz	00134$
                     2262 11466 	C$easyax5043.c$1713$3$365 ==.
                          11467 ;	../COMMON/easyax5043.c:1713: wtimer_remove(&axradio_timer);
   2A95 90 02 89      [24]11468 	mov	dptr,#_axradio_timer
   2A98 12 4C D4      [24]11469 	lcall	_wtimer_remove
                     2268 11470 	C$easyax5043.c$1714$3$365 ==.
                          11471 ;	../COMMON/easyax5043.c:1714: axradio_timer.time = axradio_phy_cs_period;
   2A9B 90 52 86      [24]11472 	mov	dptr,#_axradio_phy_cs_period
   2A9E E4            [12]11473 	clr	a
   2A9F 93            [24]11474 	movc	a,@a+dptr
   2AA0 FD            [12]11475 	mov	r5,a
   2AA1 74 01         [12]11476 	mov	a,#0x01
   2AA3 93            [24]11477 	movc	a,@a+dptr
   2AA4 FE            [12]11478 	mov	r6,a
   2AA5 7C 00         [12]11479 	mov	r4,#0x00
   2AA7 7B 00         [12]11480 	mov	r3,#0x00
   2AA9 90 02 8D      [24]11481 	mov	dptr,#(_axradio_timer + 0x0004)
   2AAC ED            [12]11482 	mov	a,r5
   2AAD F0            [24]11483 	movx	@dptr,a
   2AAE EE            [12]11484 	mov	a,r6
   2AAF A3            [24]11485 	inc	dptr
   2AB0 F0            [24]11486 	movx	@dptr,a
   2AB1 EC            [12]11487 	mov	a,r4
   2AB2 A3            [24]11488 	inc	dptr
   2AB3 F0            [24]11489 	movx	@dptr,a
   2AB4 EB            [12]11490 	mov	a,r3
   2AB5 A3            [24]11491 	inc	dptr
   2AB6 F0            [24]11492 	movx	@dptr,a
                     2284 11493 	C$easyax5043.c$1715$3$365 ==.
                          11494 ;	../COMMON/easyax5043.c:1715: wtimer0_addrelative(&axradio_timer);
   2AB7 90 02 89      [24]11495 	mov	dptr,#_axradio_timer
   2ABA 12 43 51      [24]11496 	lcall	_wtimer0_addrelative
   2ABD                   11497 00134$:
                     228A 11498 	C$easyax5043.c$1717$2$364 ==.
                          11499 ;	../COMMON/easyax5043.c:1717: return AXRADIO_ERR_NOERROR;
   2ABD 75 82 00      [24]11500 	mov	dpl,#0x00
   2AC0 02 2C C1      [24]11501 	ljmp	00161$
                     2290 11502 	C$easyax5043.c$1719$2$364 ==.
                          11503 ;	../COMMON/easyax5043.c:1719: case AXRADIO_MODE_WOR_RECEIVE:
   2AC3                   11504 00135$:
                     2290 11505 	C$easyax5043.c$1720$2$364 ==.
                          11506 ;	../COMMON/easyax5043.c:1720: case AXRADIO_MODE_WOR_ACK_RECEIVE:
   2AC3                   11507 00136$:
                     2290 11508 	C$easyax5043.c$1721$2$364 ==.
                          11509 ;	../COMMON/easyax5043.c:1721: ax5043_init_registers_rx();
   2AC3 C0 07         [24]11510 	push	ar7
   2AC5 12 08 FF      [24]11511 	lcall	_ax5043_init_registers_rx
                     2295 11512 	C$easyax5043.c$1722$2$364 ==.
                          11513 ;	../COMMON/easyax5043.c:1722: ax5043_receiver_on_wor();
   2AC8 12 13 D2      [24]11514 	lcall	_ax5043_receiver_on_wor
   2ACB D0 07         [24]11515 	pop	ar7
                     229A 11516 	C$easyax5043.c$1723$2$364 ==.
                          11517 ;	../COMMON/easyax5043.c:1723: axradio_ack_seqnr = 0xff;
   2ACD 90 00 0F      [24]11518 	mov	dptr,#_axradio_ack_seqnr
   2AD0 74 FF         [12]11519 	mov	a,#0xFF
   2AD2 F0            [24]11520 	movx	@dptr,a
                     22A0 11521 	C$easyax5043.c$1724$2$364 ==.
                          11522 ;	../COMMON/easyax5043.c:1724: axradio_mode = mode;
   2AD3 8F 0A         [24]11523 	mov	_axradio_mode,r7
                     22A2 11524 	C$easyax5043.c$1725$2$364 ==.
                          11525 ;	../COMMON/easyax5043.c:1725: return AXRADIO_ERR_NOERROR;
   2AD5 75 82 00      [24]11526 	mov	dpl,#0x00
   2AD8 02 2C C1      [24]11527 	ljmp	00161$
                     22A8 11528 	C$easyax5043.c$1727$2$364 ==.
                          11529 ;	../COMMON/easyax5043.c:1727: case AXRADIO_MODE_STREAM_TRANSMIT:
   2ADB                   11530 00137$:
                     22A8 11531 	C$easyax5043.c$1728$2$364 ==.
                          11532 ;	../COMMON/easyax5043.c:1728: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2ADB                   11533 00138$:
                     22A8 11534 	C$easyax5043.c$1729$2$364 ==.
                          11535 ;	../COMMON/easyax5043.c:1729: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2ADB                   11536 00139$:
                     22A8 11537 	C$easyax5043.c$1730$2$364 ==.
                          11538 ;	../COMMON/easyax5043.c:1730: axradio_mode = mode;
   2ADB 8F 0A         [24]11539 	mov	_axradio_mode,r7
                     22AA 11540 	C$easyax5043.c$1731$2$364 ==.
                          11541 ;	../COMMON/easyax5043.c:1731: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_UNENC)
   2ADD 74 15         [12]11542 	mov	a,#0x15
   2ADF B5 0A 05      [24]11543 	cjne	a,_axradio_mode,00141$
                     22AF 11544 	C$easyax5043.c$1732$2$364 ==.
                          11545 ;	../COMMON/easyax5043.c:1732: AX5043_ENCODING = 0;
   2AE2 90 40 11      [24]11546 	mov	dptr,#_AX5043_ENCODING
   2AE5 E4            [12]11547 	clr	a
   2AE6 F0            [24]11548 	movx	@dptr,a
   2AE7                   11549 00141$:
                     22B4 11550 	C$easyax5043.c$1733$2$364 ==.
                          11551 ;	../COMMON/easyax5043.c:1733: if (axradio_mode == AXRADIO_MODE_STREAM_TRANSMIT_SCRAM)
   2AE7 74 16         [12]11552 	mov	a,#0x16
   2AE9 B5 0A 06      [24]11553 	cjne	a,_axradio_mode,00143$
                     22B9 11554 	C$easyax5043.c$1734$2$364 ==.
                          11555 ;	../COMMON/easyax5043.c:1734: AX5043_ENCODING = 4;
   2AEC 90 40 11      [24]11556 	mov	dptr,#_AX5043_ENCODING
   2AEF 74 04         [12]11557 	mov	a,#0x04
   2AF1 F0            [24]11558 	movx	@dptr,a
   2AF2                   11559 00143$:
                     22BF 11560 	C$easyax5043.c$1735$2$364 ==.
                          11561 ;	../COMMON/easyax5043.c:1735: ax5043_init_registers_tx();
   2AF2 12 08 C9      [24]11562 	lcall	_ax5043_init_registers_tx
                     22C2 11563 	C$easyax5043.c$1736$2$364 ==.
                          11564 ;	../COMMON/easyax5043.c:1736: AX5043_FRAMING = 0;
   2AF5 90 40 12      [24]11565 	mov	dptr,#_AX5043_FRAMING
   2AF8 E4            [12]11566 	clr	a
   2AF9 F0            [24]11567 	movx	@dptr,a
                     22C7 11568 	C$easyax5043.c$1737$2$364 ==.
                          11569 ;	../COMMON/easyax5043.c:1737: ax5043_prepare_tx();
   2AFA 12 14 57      [24]11570 	lcall	_ax5043_prepare_tx
                     22CA 11571 	C$easyax5043.c$1738$2$364 ==.
                          11572 ;	../COMMON/easyax5043.c:1738: axradio_trxstate = trxstate_txstream_xtalwait;
   2AFD 75 0B 0F      [24]11573 	mov	_axradio_trxstate,#0x0F
                     22CD 11574 	C$easyax5043.c$1739$2$364 ==.
                          11575 ;	../COMMON/easyax5043.c:1739: while (!(AX5043_POWSTAT & 0x08)) {}; // wait for modem vdd so writing the FIFO is safe
   2B00                   11576 00144$:
   2B00 90 40 03      [24]11577 	mov	dptr,#_AX5043_POWSTAT
   2B03 E0            [24]11578 	movx	a,@dptr
   2B04 FE            [12]11579 	mov	r6,a
   2B05 30 E3 F8      [24]11580 	jnb	acc.3,00144$
                     22D5 11581 	C$easyax5043.c$1740$2$364 ==.
                          11582 ;	../COMMON/easyax5043.c:1740: AX5043_FIFOSTAT = 3; // clear FIFO data & flags (prevent transmitting anything left over in the FIFO, this has no effect if the FIFO is not powerered, in this case it is reset any way)
   2B08 90 40 28      [24]11583 	mov	dptr,#_AX5043_FIFOSTAT
   2B0B 74 03         [12]11584 	mov	a,#0x03
   2B0D F0            [24]11585 	movx	@dptr,a
                     22DB 11586 	C$easyax5043.c$1741$2$364 ==.
                          11587 ;	../COMMON/easyax5043.c:1741: AX5043_RADIOEVENTREQ0; // make sure REVRDONE bit is cleared, so it is a reliable indicator that the packet is out
   2B0E 90 40 0F      [24]11588 	mov	dptr,#_AX5043_RADIOEVENTREQ0
   2B11 E0            [24]11589 	movx	a,@dptr
                     22DF 11590 	C$easyax5043.c$1742$2$364 ==.
                          11591 ;	../COMMON/easyax5043.c:1742: update_timeanchor();
   2B12 12 08 33      [24]11592 	lcall	_update_timeanchor
                     22E2 11593 	C$easyax5043.c$1743$2$364 ==.
                          11594 ;	../COMMON/easyax5043.c:1743: wtimer_remove_callback(&axradio_cb_transmitdata.cb);
   2B15 90 02 7F      [24]11595 	mov	dptr,#_axradio_cb_transmitdata
   2B18 12 4E DE      [24]11596 	lcall	_wtimer_remove_callback
                     22E8 11597 	C$easyax5043.c$1744$2$364 ==.
                          11598 ;	../COMMON/easyax5043.c:1744: axradio_cb_transmitdata.st.error = AXRADIO_ERR_NOERROR;
   2B1B 90 02 84      [24]11599 	mov	dptr,#(_axradio_cb_transmitdata + 0x0005)
   2B1E E4            [12]11600 	clr	a
   2B1F F0            [24]11601 	movx	@dptr,a
                     22ED 11602 	C$easyax5043.c$1745$2$364 ==.
                          11603 ;	../COMMON/easyax5043.c:1745: axradio_cb_transmitdata.st.time.t = axradio_timeanchor.radiotimer;
   2B20 90 00 1A      [24]11604 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2B23 E0            [24]11605 	movx	a,@dptr
   2B24 FB            [12]11606 	mov	r3,a
   2B25 A3            [24]11607 	inc	dptr
   2B26 E0            [24]11608 	movx	a,@dptr
   2B27 FC            [12]11609 	mov	r4,a
   2B28 A3            [24]11610 	inc	dptr
   2B29 E0            [24]11611 	movx	a,@dptr
   2B2A FD            [12]11612 	mov	r5,a
   2B2B A3            [24]11613 	inc	dptr
   2B2C E0            [24]11614 	movx	a,@dptr
   2B2D FE            [12]11615 	mov	r6,a
   2B2E 90 02 85      [24]11616 	mov	dptr,#(_axradio_cb_transmitdata + 0x0006)
   2B31 EB            [12]11617 	mov	a,r3
   2B32 F0            [24]11618 	movx	@dptr,a
   2B33 EC            [12]11619 	mov	a,r4
   2B34 A3            [24]11620 	inc	dptr
   2B35 F0            [24]11621 	movx	@dptr,a
   2B36 ED            [12]11622 	mov	a,r5
   2B37 A3            [24]11623 	inc	dptr
   2B38 F0            [24]11624 	movx	@dptr,a
   2B39 EE            [12]11625 	mov	a,r6
   2B3A A3            [24]11626 	inc	dptr
   2B3B F0            [24]11627 	movx	@dptr,a
                     2309 11628 	C$easyax5043.c$1746$2$364 ==.
                          11629 ;	../COMMON/easyax5043.c:1746: wtimer_add_callback(&axradio_cb_transmitdata.cb);
   2B3C 90 02 7F      [24]11630 	mov	dptr,#_axradio_cb_transmitdata
   2B3F 12 43 37      [24]11631 	lcall	_wtimer_add_callback
                     230F 11632 	C$easyax5043.c$1747$2$364 ==.
                          11633 ;	../COMMON/easyax5043.c:1747: return AXRADIO_ERR_NOERROR;
   2B42 75 82 00      [24]11634 	mov	dpl,#0x00
   2B45 02 2C C1      [24]11635 	ljmp	00161$
                     2315 11636 	C$easyax5043.c$1749$2$364 ==.
                          11637 ;	../COMMON/easyax5043.c:1749: case AXRADIO_MODE_STREAM_RECEIVE:
   2B48                   11638 00147$:
                     2315 11639 	C$easyax5043.c$1750$2$364 ==.
                          11640 ;	../COMMON/easyax5043.c:1750: case AXRADIO_MODE_STREAM_RECEIVE_UNENC:
   2B48                   11641 00148$:
                     2315 11642 	C$easyax5043.c$1751$2$364 ==.
                          11643 ;	../COMMON/easyax5043.c:1751: case AXRADIO_MODE_STREAM_RECEIVE_SCRAM:
   2B48                   11644 00149$:
                     2315 11645 	C$easyax5043.c$1752$2$364 ==.
                          11646 ;	../COMMON/easyax5043.c:1752: ax5043_init_registers_rx();
   2B48 C0 07         [24]11647 	push	ar7
   2B4A 12 08 FF      [24]11648 	lcall	_ax5043_init_registers_rx
   2B4D D0 07         [24]11649 	pop	ar7
                     231C 11650 	C$easyax5043.c$1753$2$364 ==.
                          11651 ;	../COMMON/easyax5043.c:1753: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_UNENC)
   2B4F 74 1D         [12]11652 	mov	a,#0x1D
   2B51 B5 0A 05      [24]11653 	cjne	a,_axradio_mode,00151$
                     2321 11654 	C$easyax5043.c$1754$2$364 ==.
                          11655 ;	../COMMON/easyax5043.c:1754: AX5043_ENCODING = 0;
   2B54 90 40 11      [24]11656 	mov	dptr,#_AX5043_ENCODING
   2B57 E4            [12]11657 	clr	a
   2B58 F0            [24]11658 	movx	@dptr,a
   2B59                   11659 00151$:
                     2326 11660 	C$easyax5043.c$1755$2$364 ==.
                          11661 ;	../COMMON/easyax5043.c:1755: if (axradio_mode == AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   2B59 74 1E         [12]11662 	mov	a,#0x1E
   2B5B B5 0A 06      [24]11663 	cjne	a,_axradio_mode,00153$
                     232B 11664 	C$easyax5043.c$1756$2$364 ==.
                          11665 ;	../COMMON/easyax5043.c:1756: AX5043_ENCODING = 4;
   2B5E 90 40 11      [24]11666 	mov	dptr,#_AX5043_ENCODING
   2B61 74 04         [12]11667 	mov	a,#0x04
   2B63 F0            [24]11668 	movx	@dptr,a
   2B64                   11669 00153$:
                     2331 11670 	C$easyax5043.c$1757$2$364 ==.
                          11671 ;	../COMMON/easyax5043.c:1757: AX5043_FRAMING = 0;
   2B64 90 40 12      [24]11672 	mov	dptr,#_AX5043_FRAMING
   2B67 E4            [12]11673 	clr	a
   2B68 F0            [24]11674 	movx	@dptr,a
                     2336 11675 	C$easyax5043.c$1758$2$364 ==.
                          11676 ;	../COMMON/easyax5043.c:1758: AX5043_PKTCHUNKSIZE = 8; // 64 byte
   2B69 90 42 30      [24]11677 	mov	dptr,#_AX5043_PKTCHUNKSIZE
   2B6C 74 08         [12]11678 	mov	a,#0x08
   2B6E F0            [24]11679 	movx	@dptr,a
                     233C 11680 	C$easyax5043.c$1759$2$364 ==.
                          11681 ;	../COMMON/easyax5043.c:1759: AX5043_RXPARAMSETS = 0x00;
   2B6F 90 41 17      [24]11682 	mov	dptr,#_AX5043_RXPARAMSETS
   2B72 E4            [12]11683 	clr	a
   2B73 F0            [24]11684 	movx	@dptr,a
                     2341 11685 	C$easyax5043.c$1760$2$364 ==.
                          11686 ;	../COMMON/easyax5043.c:1760: axradio_mode = mode;
   2B74 8F 0A         [24]11687 	mov	_axradio_mode,r7
                     2343 11688 	C$easyax5043.c$1761$2$364 ==.
                          11689 ;	../COMMON/easyax5043.c:1761: ax5043_receiver_on_continuous();
   2B76 12 13 38      [24]11690 	lcall	_ax5043_receiver_on_continuous
                     2346 11691 	C$easyax5043.c$1762$2$364 ==.
                          11692 ;	../COMMON/easyax5043.c:1762: goto enablecs;
   2B79 02 2A 8D      [24]11693 	ljmp	00132$
                     2349 11694 	C$easyax5043.c$1764$2$364 ==.
                          11695 ;	../COMMON/easyax5043.c:1764: case AXRADIO_MODE_CW_TRANSMIT:
   2B7C                   11696 00154$:
                     2349 11697 	C$easyax5043.c$1765$2$364 ==.
                          11698 ;	../COMMON/easyax5043.c:1765: ax5043_init_registers_tx();
   2B7C 12 08 C9      [24]11699 	lcall	_ax5043_init_registers_tx
                     234C 11700 	C$easyax5043.c$1766$2$364 ==.
                          11701 ;	../COMMON/easyax5043.c:1766: AX5043_MODULATION = 8;   // Set an FSK mode
   2B7F 90 40 10      [24]11702 	mov	dptr,#_AX5043_MODULATION
   2B82 74 08         [12]11703 	mov	a,#0x08
   2B84 F0            [24]11704 	movx	@dptr,a
                     2352 11705 	C$easyax5043.c$1767$2$364 ==.
                          11706 ;	../COMMON/easyax5043.c:1767: AX5043_FSKDEV2 = 0x00;
   2B85 90 41 61      [24]11707 	mov	dptr,#_AX5043_FSKDEV2
                     2355 11708 	C$easyax5043.c$1768$2$364 ==.
                          11709 ;	../COMMON/easyax5043.c:1768: AX5043_FSKDEV1 = 0x00;
                     2355 11710 	C$easyax5043.c$1769$2$364 ==.
                          11711 ;	../COMMON/easyax5043.c:1769: AX5043_FSKDEV0 = 0x00;
                     2355 11712 	C$easyax5043.c$1770$2$364 ==.
                          11713 ;	../COMMON/easyax5043.c:1770: AX5043_TXRATE2 = 0x00;
   2B88 E4            [12]11714 	clr	a
   2B89 F0            [24]11715 	movx	@dptr,a
   2B8A 90 41 62      [24]11716 	mov	dptr,#_AX5043_FSKDEV1
   2B8D F0            [24]11717 	movx	@dptr,a
   2B8E 90 41 63      [24]11718 	mov	dptr,#_AX5043_FSKDEV0
   2B91 F0            [24]11719 	movx	@dptr,a
   2B92 90 41 65      [24]11720 	mov	dptr,#_AX5043_TXRATE2
   2B95 F0            [24]11721 	movx	@dptr,a
                     2363 11722 	C$easyax5043.c$1771$2$364 ==.
                          11723 ;	../COMMON/easyax5043.c:1771: AX5043_TXRATE1 = 0x00;
   2B96 90 41 66      [24]11724 	mov	dptr,#_AX5043_TXRATE1
   2B99 E4            [12]11725 	clr	a
   2B9A F0            [24]11726 	movx	@dptr,a
                     2368 11727 	C$easyax5043.c$1772$2$364 ==.
                          11728 ;	../COMMON/easyax5043.c:1772: AX5043_TXRATE0 = 0x01;
   2B9B 90 41 67      [24]11729 	mov	dptr,#_AX5043_TXRATE0
   2B9E 74 01         [12]11730 	mov	a,#0x01
   2BA0 F0            [24]11731 	movx	@dptr,a
                     236E 11732 	C$easyax5043.c$1773$2$364 ==.
                          11733 ;	../COMMON/easyax5043.c:1773: AX5043_PINFUNCDATA = 0x04;
   2BA1 90 40 23      [24]11734 	mov	dptr,#_AX5043_PINFUNCDATA
   2BA4 74 04         [12]11735 	mov	a,#0x04
   2BA6 F0            [24]11736 	movx	@dptr,a
                     2374 11737 	C$easyax5043.c$1774$2$364 ==.
                          11738 ;	../COMMON/easyax5043.c:1774: axradio_mode = AXRADIO_MODE_CW_TRANSMIT;
   2BA7 75 0A 03      [24]11739 	mov	_axradio_mode,#0x03
                     2377 11740 	C$easyax5043.c$1775$2$364 ==.
                          11741 ;	../COMMON/easyax5043.c:1775: AX5043_PWRMODE = AX5043_PWRSTATE_FIFO_ON;
   2BAA 90 40 02      [24]11742 	mov	dptr,#_AX5043_PWRMODE
   2BAD 74 07         [12]11743 	mov	a,#0x07
   2BAF F0            [24]11744 	movx	@dptr,a
                     237D 11745 	C$easyax5043.c$1776$2$364 ==.
                          11746 ;	../COMMON/easyax5043.c:1776: axradio_trxstate = trxstate_txcw_xtalwait;
   2BB0 75 0B 0E      [24]11747 	mov	_axradio_trxstate,#0x0E
                     2380 11748 	C$easyax5043.c$1777$2$364 ==.
                          11749 ;	../COMMON/easyax5043.c:1777: AX5043_IRQMASK0 = 0x00;
   2BB3 90 40 07      [24]11750 	mov	dptr,#_AX5043_IRQMASK0
   2BB6 E4            [12]11751 	clr	a
   2BB7 F0            [24]11752 	movx	@dptr,a
                     2385 11753 	C$easyax5043.c$1778$2$364 ==.
                          11754 ;	../COMMON/easyax5043.c:1778: AX5043_IRQMASK1 = 0x01; // enable xtal ready interrupt
   2BB8 90 40 06      [24]11755 	mov	dptr,#_AX5043_IRQMASK1
   2BBB 74 01         [12]11756 	mov	a,#0x01
   2BBD F0            [24]11757 	movx	@dptr,a
                     238B 11758 	C$easyax5043.c$1779$2$364 ==.
                          11759 ;	../COMMON/easyax5043.c:1779: return AXRADIO_ERR_NOERROR;
   2BBE 75 82 00      [24]11760 	mov	dpl,#0x00
   2BC1 02 2C C1      [24]11761 	ljmp	00161$
                     2391 11762 	C$easyax5043.c$1781$2$364 ==.
                          11763 ;	../COMMON/easyax5043.c:1781: case AXRADIO_MODE_SYNC_MASTER:
   2BC4                   11764 00155$:
                     2391 11765 	C$easyax5043.c$1782$2$364 ==.
                          11766 ;	../COMMON/easyax5043.c:1782: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2BC4                   11767 00156$:
                     2391 11768 	C$easyax5043.c$1783$2$364 ==.
                          11769 ;	../COMMON/easyax5043.c:1783: axradio_mode = mode;
   2BC4 8F 0A         [24]11770 	mov	_axradio_mode,r7
                     2393 11771 	C$easyax5043.c$1784$2$364 ==.
                          11772 ;	../COMMON/easyax5043.c:1784: axradio_syncstate = syncstate_master_normal;
   2BC6 90 00 04      [24]11773 	mov	dptr,#_axradio_syncstate
   2BC9 74 03         [12]11774 	mov	a,#0x03
   2BCB F0            [24]11775 	movx	@dptr,a
                     2399 11776 	C$easyax5043.c$1786$2$364 ==.
                          11777 ;	../COMMON/easyax5043.c:1786: wtimer_remove(&axradio_timer);
   2BCC 90 02 89      [24]11778 	mov	dptr,#_axradio_timer
   2BCF 12 4C D4      [24]11779 	lcall	_wtimer_remove
                     239F 11780 	C$easyax5043.c$1787$2$364 ==.
                          11781 ;	../COMMON/easyax5043.c:1787: axradio_timer.time = 2;
   2BD2 90 02 8D      [24]11782 	mov	dptr,#(_axradio_timer + 0x0004)
   2BD5 74 02         [12]11783 	mov	a,#0x02
   2BD7 F0            [24]11784 	movx	@dptr,a
   2BD8 E4            [12]11785 	clr	a
   2BD9 A3            [24]11786 	inc	dptr
   2BDA F0            [24]11787 	movx	@dptr,a
   2BDB E4            [12]11788 	clr	a
   2BDC A3            [24]11789 	inc	dptr
   2BDD F0            [24]11790 	movx	@dptr,a
   2BDE E4            [12]11791 	clr	a
   2BDF A3            [24]11792 	inc	dptr
   2BE0 F0            [24]11793 	movx	@dptr,a
                     23AE 11794 	C$easyax5043.c$1788$2$364 ==.
                          11795 ;	../COMMON/easyax5043.c:1788: wtimer0_addrelative(&axradio_timer);
   2BE1 90 02 89      [24]11796 	mov	dptr,#_axradio_timer
   2BE4 12 43 51      [24]11797 	lcall	_wtimer0_addrelative
                     23B4 11798 	C$easyax5043.c$1789$2$364 ==.
                          11799 ;	../COMMON/easyax5043.c:1789: axradio_sync_time = axradio_timer.time;
   2BE7 90 02 8D      [24]11800 	mov	dptr,#(_axradio_timer + 0x0004)
   2BEA E0            [24]11801 	movx	a,@dptr
   2BEB FB            [12]11802 	mov	r3,a
   2BEC A3            [24]11803 	inc	dptr
   2BED E0            [24]11804 	movx	a,@dptr
   2BEE FC            [12]11805 	mov	r4,a
   2BEF A3            [24]11806 	inc	dptr
   2BF0 E0            [24]11807 	movx	a,@dptr
   2BF1 FD            [12]11808 	mov	r5,a
   2BF2 A3            [24]11809 	inc	dptr
   2BF3 E0            [24]11810 	movx	a,@dptr
   2BF4 FE            [12]11811 	mov	r6,a
   2BF5 90 00 10      [24]11812 	mov	dptr,#_axradio_sync_time
   2BF8 EB            [12]11813 	mov	a,r3
   2BF9 F0            [24]11814 	movx	@dptr,a
   2BFA EC            [12]11815 	mov	a,r4
   2BFB A3            [24]11816 	inc	dptr
   2BFC F0            [24]11817 	movx	@dptr,a
   2BFD ED            [12]11818 	mov	a,r5
   2BFE A3            [24]11819 	inc	dptr
   2BFF F0            [24]11820 	movx	@dptr,a
   2C00 EE            [12]11821 	mov	a,r6
   2C01 A3            [24]11822 	inc	dptr
   2C02 F0            [24]11823 	movx	@dptr,a
                     23D0 11824 	C$easyax5043.c$1790$2$364 ==.
                          11825 ;	../COMMON/easyax5043.c:1790: axradio_sync_addtime(axradio_sync_xoscstartup);
   2C03 90 52 B9      [24]11826 	mov	dptr,#_axradio_sync_xoscstartup
   2C06 E4            [12]11827 	clr	a
   2C07 93            [24]11828 	movc	a,@a+dptr
   2C08 FB            [12]11829 	mov	r3,a
   2C09 74 01         [12]11830 	mov	a,#0x01
   2C0B 93            [24]11831 	movc	a,@a+dptr
   2C0C FC            [12]11832 	mov	r4,a
   2C0D 74 02         [12]11833 	mov	a,#0x02
   2C0F 93            [24]11834 	movc	a,@a+dptr
   2C10 FD            [12]11835 	mov	r5,a
   2C11 74 03         [12]11836 	mov	a,#0x03
   2C13 93            [24]11837 	movc	a,@a+dptr
   2C14 8B 82         [24]11838 	mov	dpl,r3
   2C16 8C 83         [24]11839 	mov	dph,r4
   2C18 8D F0         [24]11840 	mov	b,r5
   2C1A 12 16 1D      [24]11841 	lcall	_axradio_sync_addtime
                     23EA 11842 	C$easyax5043.c$1791$2$364 ==.
                          11843 ;	../COMMON/easyax5043.c:1791: return AXRADIO_ERR_NOERROR;
   2C1D 75 82 00      [24]11844 	mov	dpl,#0x00
   2C20 02 2C C1      [24]11845 	ljmp	00161$
                     23F0 11846 	C$easyax5043.c$1793$2$364 ==.
                          11847 ;	../COMMON/easyax5043.c:1793: case AXRADIO_MODE_SYNC_SLAVE:
   2C23                   11848 00157$:
                     23F0 11849 	C$easyax5043.c$1794$2$364 ==.
                          11850 ;	../COMMON/easyax5043.c:1794: case AXRADIO_MODE_SYNC_ACK_SLAVE:
   2C23                   11851 00158$:
                     23F0 11852 	C$easyax5043.c$1795$2$364 ==.
                          11853 ;	../COMMON/easyax5043.c:1795: axradio_mode = mode;
   2C23 8F 0A         [24]11854 	mov	_axradio_mode,r7
                     23F2 11855 	C$easyax5043.c$1796$2$364 ==.
                          11856 ;	../COMMON/easyax5043.c:1796: ax5043_init_registers_rx();
   2C25 12 08 FF      [24]11857 	lcall	_ax5043_init_registers_rx
                     23F5 11858 	C$easyax5043.c$1797$2$364 ==.
                          11859 ;	../COMMON/easyax5043.c:1797: ax5043_receiver_on_continuous();
   2C28 12 13 38      [24]11860 	lcall	_ax5043_receiver_on_continuous
                     23F8 11861 	C$easyax5043.c$1798$2$364 ==.
                          11862 ;	../COMMON/easyax5043.c:1798: axradio_syncstate = syncstate_slave_synchunt;
   2C2B 90 00 04      [24]11863 	mov	dptr,#_axradio_syncstate
   2C2E 74 06         [12]11864 	mov	a,#0x06
   2C30 F0            [24]11865 	movx	@dptr,a
                     23FE 11866 	C$easyax5043.c$1799$2$364 ==.
                          11867 ;	../COMMON/easyax5043.c:1799: wtimer_remove(&axradio_timer);
   2C31 90 02 89      [24]11868 	mov	dptr,#_axradio_timer
   2C34 12 4C D4      [24]11869 	lcall	_wtimer_remove
                     2404 11870 	C$easyax5043.c$1800$2$364 ==.
                          11871 ;	../COMMON/easyax5043.c:1800: axradio_timer.time = axradio_sync_slave_initialsyncwindow;
   2C37 90 52 C1      [24]11872 	mov	dptr,#_axradio_sync_slave_initialsyncwindow
   2C3A E4            [12]11873 	clr	a
   2C3B 93            [24]11874 	movc	a,@a+dptr
   2C3C FC            [12]11875 	mov	r4,a
   2C3D 74 01         [12]11876 	mov	a,#0x01
   2C3F 93            [24]11877 	movc	a,@a+dptr
   2C40 FD            [12]11878 	mov	r5,a
   2C41 74 02         [12]11879 	mov	a,#0x02
   2C43 93            [24]11880 	movc	a,@a+dptr
   2C44 FE            [12]11881 	mov	r6,a
   2C45 74 03         [12]11882 	mov	a,#0x03
   2C47 93            [24]11883 	movc	a,@a+dptr
   2C48 FF            [12]11884 	mov	r7,a
   2C49 90 02 8D      [24]11885 	mov	dptr,#(_axradio_timer + 0x0004)
   2C4C EC            [12]11886 	mov	a,r4
   2C4D F0            [24]11887 	movx	@dptr,a
   2C4E ED            [12]11888 	mov	a,r5
   2C4F A3            [24]11889 	inc	dptr
   2C50 F0            [24]11890 	movx	@dptr,a
   2C51 EE            [12]11891 	mov	a,r6
   2C52 A3            [24]11892 	inc	dptr
   2C53 F0            [24]11893 	movx	@dptr,a
   2C54 EF            [12]11894 	mov	a,r7
   2C55 A3            [24]11895 	inc	dptr
   2C56 F0            [24]11896 	movx	@dptr,a
                     2424 11897 	C$easyax5043.c$1801$2$364 ==.
                          11898 ;	../COMMON/easyax5043.c:1801: wtimer0_addrelative(&axradio_timer);
   2C57 90 02 89      [24]11899 	mov	dptr,#_axradio_timer
   2C5A 12 43 51      [24]11900 	lcall	_wtimer0_addrelative
                     242A 11901 	C$easyax5043.c$1802$2$364 ==.
                          11902 ;	../COMMON/easyax5043.c:1802: axradio_sync_time = axradio_timer.time;
   2C5D 90 02 8D      [24]11903 	mov	dptr,#(_axradio_timer + 0x0004)
   2C60 E0            [24]11904 	movx	a,@dptr
   2C61 FC            [12]11905 	mov	r4,a
   2C62 A3            [24]11906 	inc	dptr
   2C63 E0            [24]11907 	movx	a,@dptr
   2C64 FD            [12]11908 	mov	r5,a
   2C65 A3            [24]11909 	inc	dptr
   2C66 E0            [24]11910 	movx	a,@dptr
   2C67 FE            [12]11911 	mov	r6,a
   2C68 A3            [24]11912 	inc	dptr
   2C69 E0            [24]11913 	movx	a,@dptr
   2C6A FF            [12]11914 	mov	r7,a
   2C6B 90 00 10      [24]11915 	mov	dptr,#_axradio_sync_time
   2C6E EC            [12]11916 	mov	a,r4
   2C6F F0            [24]11917 	movx	@dptr,a
   2C70 ED            [12]11918 	mov	a,r5
   2C71 A3            [24]11919 	inc	dptr
   2C72 F0            [24]11920 	movx	@dptr,a
   2C73 EE            [12]11921 	mov	a,r6
   2C74 A3            [24]11922 	inc	dptr
   2C75 F0            [24]11923 	movx	@dptr,a
   2C76 EF            [12]11924 	mov	a,r7
   2C77 A3            [24]11925 	inc	dptr
   2C78 F0            [24]11926 	movx	@dptr,a
                     2446 11927 	C$easyax5043.c$1803$2$364 ==.
                          11928 ;	../COMMON/easyax5043.c:1803: wtimer_remove_callback(&axradio_cb_receive.cb);
   2C79 90 02 32      [24]11929 	mov	dptr,#_axradio_cb_receive
   2C7C 12 4E DE      [24]11930 	lcall	_wtimer_remove_callback
                     244C 11931 	C$easyax5043.c$1804$2$364 ==.
                          11932 ;	../COMMON/easyax5043.c:1804: memset_xdata(&axradio_cb_receive.st, 0, sizeof(axradio_cb_receive.st));
   2C7F 75 27 00      [24]11933 	mov	_memset_PARM_2,#0x00
   2C82 75 28 1E      [24]11934 	mov	_memset_PARM_3,#0x1E
   2C85 75 29 00      [24]11935 	mov	(_memset_PARM_3 + 1),#0x00
   2C88 90 02 36      [24]11936 	mov	dptr,#(_axradio_cb_receive + 0x0004)
   2C8B 75 F0 00      [24]11937 	mov	b,#0x00
   2C8E 12 42 C3      [24]11938 	lcall	_memset
                     245E 11939 	C$easyax5043.c$1805$2$364 ==.
                          11940 ;	../COMMON/easyax5043.c:1805: axradio_cb_receive.st.time.t = axradio_timeanchor.radiotimer;
   2C91 90 00 1A      [24]11941 	mov	dptr,#(_axradio_timeanchor + 0x0004)
   2C94 E0            [24]11942 	movx	a,@dptr
   2C95 FC            [12]11943 	mov	r4,a
   2C96 A3            [24]11944 	inc	dptr
   2C97 E0            [24]11945 	movx	a,@dptr
   2C98 FD            [12]11946 	mov	r5,a
   2C99 A3            [24]11947 	inc	dptr
   2C9A E0            [24]11948 	movx	a,@dptr
   2C9B FE            [12]11949 	mov	r6,a
   2C9C A3            [24]11950 	inc	dptr
   2C9D E0            [24]11951 	movx	a,@dptr
   2C9E FF            [12]11952 	mov	r7,a
   2C9F 90 02 38      [24]11953 	mov	dptr,#(_axradio_cb_receive + 0x0006)
   2CA2 EC            [12]11954 	mov	a,r4
   2CA3 F0            [24]11955 	movx	@dptr,a
   2CA4 ED            [12]11956 	mov	a,r5
   2CA5 A3            [24]11957 	inc	dptr
   2CA6 F0            [24]11958 	movx	@dptr,a
   2CA7 EE            [12]11959 	mov	a,r6
   2CA8 A3            [24]11960 	inc	dptr
   2CA9 F0            [24]11961 	movx	@dptr,a
   2CAA EF            [12]11962 	mov	a,r7
   2CAB A3            [24]11963 	inc	dptr
   2CAC F0            [24]11964 	movx	@dptr,a
                     247A 11965 	C$easyax5043.c$1806$2$364 ==.
                          11966 ;	../COMMON/easyax5043.c:1806: axradio_cb_receive.st.error = AXRADIO_ERR_RESYNC;
   2CAD 90 02 37      [24]11967 	mov	dptr,#(_axradio_cb_receive + 0x0005)
   2CB0 74 09         [12]11968 	mov	a,#0x09
   2CB2 F0            [24]11969 	movx	@dptr,a
                     2480 11970 	C$easyax5043.c$1807$2$364 ==.
                          11971 ;	../COMMON/easyax5043.c:1807: wtimer_add_callback(&axradio_cb_receive.cb);
   2CB3 90 02 32      [24]11972 	mov	dptr,#_axradio_cb_receive
   2CB6 12 43 37      [24]11973 	lcall	_wtimer_add_callback
                     2486 11974 	C$easyax5043.c$1808$2$364 ==.
                          11975 ;	../COMMON/easyax5043.c:1808: return AXRADIO_ERR_NOERROR;
   2CB9 75 82 00      [24]11976 	mov	dpl,#0x00
                     2489 11977 	C$easyax5043.c$1810$2$364 ==.
                          11978 ;	../COMMON/easyax5043.c:1810: default:
   2CBC 80 03         [24]11979 	sjmp	00161$
   2CBE                   11980 00159$:
                     248B 11981 	C$easyax5043.c$1811$2$364 ==.
                          11982 ;	../COMMON/easyax5043.c:1811: return AXRADIO_ERR_NOTSUPPORTED;
   2CBE 75 82 01      [24]11983 	mov	dpl,#0x01
                     248E 11984 	C$easyax5043.c$1812$1$358 ==.
                          11985 ;	../COMMON/easyax5043.c:1812: }
   2CC1                   11986 00161$:
                     248E 11987 	C$easyax5043.c$1813$1$358 ==.
                     248E 11988 	XG$axradio_set_mode$0$0 ==.
   2CC1 22            [24]11989 	ret
                          11990 ;------------------------------------------------------------
                          11991 ;Allocation info for local variables in function 'axradio_get_mode'
                          11992 ;------------------------------------------------------------
                     248F 11993 	G$axradio_get_mode$0$0 ==.
                     248F 11994 	C$easyax5043.c$1815$1$358 ==.
                          11995 ;	../COMMON/easyax5043.c:1815: uint8_t axradio_get_mode(void)
                          11996 ;	-----------------------------------------
                          11997 ;	 function axradio_get_mode
                          11998 ;	-----------------------------------------
   2CC2                   11999 _axradio_get_mode:
                     248F 12000 	C$easyax5043.c$1817$1$368 ==.
                          12001 ;	../COMMON/easyax5043.c:1817: return axradio_mode;
   2CC2 85 0A 82      [24]12002 	mov	dpl,_axradio_mode
                     2492 12003 	C$easyax5043.c$1818$1$368 ==.
                     2492 12004 	XG$axradio_get_mode$0$0 ==.
   2CC5 22            [24]12005 	ret
                          12006 ;------------------------------------------------------------
                          12007 ;Allocation info for local variables in function 'axradio_set_channel'
                          12008 ;------------------------------------------------------------
                          12009 ;chnum                     Allocated to registers r7 
                          12010 ;rng                       Allocated with name '_axradio_set_channel_rng_1_370'
                          12011 ;f                         Allocated to registers r3 r4 r5 r7 
                          12012 ;------------------------------------------------------------
                     2493 12013 	G$axradio_set_channel$0$0 ==.
                     2493 12014 	C$easyax5043.c$1820$1$368 ==.
                          12015 ;	../COMMON/easyax5043.c:1820: uint8_t axradio_set_channel(uint8_t chnum)
                          12016 ;	-----------------------------------------
                          12017 ;	 function axradio_set_channel
                          12018 ;	-----------------------------------------
   2CC6                   12019 _axradio_set_channel:
   2CC6 AF 82         [24]12020 	mov	r7,dpl
                     2495 12021 	C$easyax5043.c$1823$1$370 ==.
                          12022 ;	../COMMON/easyax5043.c:1823: if (chnum >= axradio_phy_nrchannels)
   2CC8 90 52 79      [24]12023 	mov	dptr,#_axradio_phy_nrchannels
   2CCB E4            [12]12024 	clr	a
   2CCC 93            [24]12025 	movc	a,@a+dptr
   2CCD FE            [12]12026 	mov	r6,a
   2CCE C3            [12]12027 	clr	c
   2CCF EF            [12]12028 	mov	a,r7
   2CD0 9E            [12]12029 	subb	a,r6
   2CD1 40 06         [24]12030 	jc	00102$
                     24A0 12031 	C$easyax5043.c$1824$1$370 ==.
                          12032 ;	../COMMON/easyax5043.c:1824: return AXRADIO_ERR_INVALID;
   2CD3 75 82 04      [24]12033 	mov	dpl,#0x04
   2CD6 02 2D 79      [24]12034 	ljmp	00108$
   2CD9                   12035 00102$:
                     24A6 12036 	C$easyax5043.c$1825$1$370 ==.
                          12037 ;	../COMMON/easyax5043.c:1825: axradio_curchannel = chnum;
   2CD9 90 00 09      [24]12038 	mov	dptr,#_axradio_curchannel
   2CDC EF            [12]12039 	mov	a,r7
   2CDD F0            [24]12040 	movx	@dptr,a
                     24AB 12041 	C$easyax5043.c$1826$1$370 ==.
                          12042 ;	../COMMON/easyax5043.c:1826: rng = axradio_phy_chanpllrng_rx[chnum];
   2CDE EF            [12]12043 	mov	a,r7
   2CDF 24 00         [12]12044 	add	a,#_axradio_phy_chanpllrng_rx
   2CE1 F5 82         [12]12045 	mov	dpl,a
   2CE3 E4            [12]12046 	clr	a
   2CE4 34 00         [12]12047 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2CE6 F5 83         [12]12048 	mov	dph,a
   2CE8 E0            [24]12049 	movx	a,@dptr
                     24B6 12050 	C$easyax5043.c$1827$1$370 ==.
                          12051 ;	../COMMON/easyax5043.c:1827: if (rng & 0x20)
   2CE9 F5 27         [12]12052 	mov	_axradio_set_channel_rng_1_370,a
   2CEB 30 E5 06      [24]12053 	jnb	acc.5,00104$
                     24BB 12054 	C$easyax5043.c$1828$1$370 ==.
                          12055 ;	../COMMON/easyax5043.c:1828: return AXRADIO_ERR_RANGING;
   2CEE 75 82 06      [24]12056 	mov	dpl,#0x06
   2CF1 02 2D 79      [24]12057 	ljmp	00108$
   2CF4                   12058 00104$:
                     24C1 12059 	C$easyax5043.c$1830$2$371 ==.
                          12060 ;	../COMMON/easyax5043.c:1830: uint32_t __autodata f = axradio_phy_chanfreq[chnum];
   2CF4 EF            [12]12061 	mov	a,r7
   2CF5 75 F0 04      [24]12062 	mov	b,#0x04
   2CF8 A4            [48]12063 	mul	ab
   2CF9 24 7A         [12]12064 	add	a,#_axradio_phy_chanfreq
   2CFB F5 82         [12]12065 	mov	dpl,a
   2CFD 74 52         [12]12066 	mov	a,#(_axradio_phy_chanfreq >> 8)
   2CFF 35 F0         [12]12067 	addc	a,b
   2D01 F5 83         [12]12068 	mov	dph,a
   2D03 E4            [12]12069 	clr	a
   2D04 93            [24]12070 	movc	a,@a+dptr
   2D05 FB            [12]12071 	mov	r3,a
   2D06 A3            [24]12072 	inc	dptr
   2D07 E4            [12]12073 	clr	a
   2D08 93            [24]12074 	movc	a,@a+dptr
   2D09 FC            [12]12075 	mov	r4,a
   2D0A A3            [24]12076 	inc	dptr
   2D0B E4            [12]12077 	clr	a
   2D0C 93            [24]12078 	movc	a,@a+dptr
   2D0D FD            [12]12079 	mov	r5,a
   2D0E A3            [24]12080 	inc	dptr
   2D0F E4            [12]12081 	clr	a
   2D10 93            [24]12082 	movc	a,@a+dptr
   2D11 FF            [12]12083 	mov	r7,a
                     24DF 12084 	C$easyax5043.c$1831$2$371 ==.
                          12085 ;	../COMMON/easyax5043.c:1831: f += axradio_curfreqoffset;
   2D12 90 00 0A      [24]12086 	mov	dptr,#_axradio_curfreqoffset
   2D15 E0            [24]12087 	movx	a,@dptr
   2D16 F8            [12]12088 	mov	r0,a
   2D17 A3            [24]12089 	inc	dptr
   2D18 E0            [24]12090 	movx	a,@dptr
   2D19 F9            [12]12091 	mov	r1,a
   2D1A A3            [24]12092 	inc	dptr
   2D1B E0            [24]12093 	movx	a,@dptr
   2D1C FA            [12]12094 	mov	r2,a
   2D1D A3            [24]12095 	inc	dptr
   2D1E E0            [24]12096 	movx	a,@dptr
   2D1F FE            [12]12097 	mov	r6,a
   2D20 E8            [12]12098 	mov	a,r0
   2D21 2B            [12]12099 	add	a,r3
   2D22 FB            [12]12100 	mov	r3,a
   2D23 E9            [12]12101 	mov	a,r1
   2D24 3C            [12]12102 	addc	a,r4
   2D25 FC            [12]12103 	mov	r4,a
   2D26 EA            [12]12104 	mov	a,r2
   2D27 3D            [12]12105 	addc	a,r5
   2D28 FD            [12]12106 	mov	r5,a
   2D29 EE            [12]12107 	mov	a,r6
   2D2A 3F            [12]12108 	addc	a,r7
   2D2B FF            [12]12109 	mov	r7,a
                     24F9 12110 	C$easyax5043.c$1832$2$371 ==.
                          12111 ;	../COMMON/easyax5043.c:1832: if (AX5043_PLLLOOP & 0x80) {
   2D2C 90 40 30      [24]12112 	mov	dptr,#_AX5043_PLLLOOP
   2D2F E0            [24]12113 	movx	a,@dptr
   2D30 FE            [12]12114 	mov	r6,a
   2D31 30 E7 1E      [24]12115 	jnb	acc.7,00106$
                     2501 12116 	C$easyax5043.c$1833$3$372 ==.
                          12117 ;	../COMMON/easyax5043.c:1833: AX5043_PLLRANGINGA = rng & 0x0F;
   2D34 90 40 33      [24]12118 	mov	dptr,#_AX5043_PLLRANGINGA
   2D37 74 0F         [12]12119 	mov	a,#0x0F
   2D39 55 27         [12]12120 	anl	a,_axradio_set_channel_rng_1_370
   2D3B F0            [24]12121 	movx	@dptr,a
                     2509 12122 	C$easyax5043.c$1834$3$372 ==.
                          12123 ;	../COMMON/easyax5043.c:1834: AX5043_FREQA0 = f;
   2D3C 90 40 37      [24]12124 	mov	dptr,#_AX5043_FREQA0
   2D3F EB            [12]12125 	mov	a,r3
   2D40 F0            [24]12126 	movx	@dptr,a
                     250E 12127 	C$easyax5043.c$1835$3$372 ==.
                          12128 ;	../COMMON/easyax5043.c:1835: AX5043_FREQA1 = f >> 8;
   2D41 90 40 36      [24]12129 	mov	dptr,#_AX5043_FREQA1
   2D44 EC            [12]12130 	mov	a,r4
   2D45 F0            [24]12131 	movx	@dptr,a
                     2513 12132 	C$easyax5043.c$1836$3$372 ==.
                          12133 ;	../COMMON/easyax5043.c:1836: AX5043_FREQA2 = f >> 16;
   2D46 90 40 35      [24]12134 	mov	dptr,#_AX5043_FREQA2
   2D49 ED            [12]12135 	mov	a,r5
   2D4A F0            [24]12136 	movx	@dptr,a
                     2518 12137 	C$easyax5043.c$1837$3$372 ==.
                          12138 ;	../COMMON/easyax5043.c:1837: AX5043_FREQA3 = f >> 24;
   2D4B 90 40 34      [24]12139 	mov	dptr,#_AX5043_FREQA3
   2D4E EF            [12]12140 	mov	a,r7
   2D4F F0            [24]12141 	movx	@dptr,a
   2D50 80 1C         [24]12142 	sjmp	00107$
   2D52                   12143 00106$:
                     251F 12144 	C$easyax5043.c$1839$3$373 ==.
                          12145 ;	../COMMON/easyax5043.c:1839: AX5043_PLLRANGINGB = rng & 0x0F;
   2D52 90 40 3B      [24]12146 	mov	dptr,#_AX5043_PLLRANGINGB
   2D55 74 0F         [12]12147 	mov	a,#0x0F
   2D57 55 27         [12]12148 	anl	a,_axradio_set_channel_rng_1_370
   2D59 F0            [24]12149 	movx	@dptr,a
                     2527 12150 	C$easyax5043.c$1840$3$373 ==.
                          12151 ;	../COMMON/easyax5043.c:1840: AX5043_FREQB0 = f;
   2D5A 90 40 3F      [24]12152 	mov	dptr,#_AX5043_FREQB0
   2D5D EB            [12]12153 	mov	a,r3
   2D5E F0            [24]12154 	movx	@dptr,a
                     252C 12155 	C$easyax5043.c$1841$3$373 ==.
                          12156 ;	../COMMON/easyax5043.c:1841: AX5043_FREQB1 = f >> 8;
   2D5F 90 40 3E      [24]12157 	mov	dptr,#_AX5043_FREQB1
   2D62 EC            [12]12158 	mov	a,r4
   2D63 F0            [24]12159 	movx	@dptr,a
                     2531 12160 	C$easyax5043.c$1842$3$373 ==.
                          12161 ;	../COMMON/easyax5043.c:1842: AX5043_FREQB2 = f >> 16;
   2D64 90 40 3D      [24]12162 	mov	dptr,#_AX5043_FREQB2
   2D67 ED            [12]12163 	mov	a,r5
   2D68 F0            [24]12164 	movx	@dptr,a
                     2536 12165 	C$easyax5043.c$1843$3$373 ==.
                          12166 ;	../COMMON/easyax5043.c:1843: AX5043_FREQB3 = f >> 24;
   2D69 90 40 3C      [24]12167 	mov	dptr,#_AX5043_FREQB3
   2D6C EF            [12]12168 	mov	a,r7
   2D6D F0            [24]12169 	movx	@dptr,a
   2D6E                   12170 00107$:
                     253B 12171 	C$easyax5043.c$1846$1$370 ==.
                          12172 ;	../COMMON/easyax5043.c:1846: AX5043_PLLLOOP ^= 0x80;
   2D6E 90 40 30      [24]12173 	mov	dptr,#_AX5043_PLLLOOP
   2D71 E0            [24]12174 	movx	a,@dptr
   2D72 FF            [12]12175 	mov	r7,a
   2D73 64 80         [12]12176 	xrl	a,#0x80
   2D75 F0            [24]12177 	movx	@dptr,a
                     2543 12178 	C$easyax5043.c$1847$1$370 ==.
                          12179 ;	../COMMON/easyax5043.c:1847: return AXRADIO_ERR_NOERROR;
   2D76 75 82 00      [24]12180 	mov	dpl,#0x00
   2D79                   12181 00108$:
                     2546 12182 	C$easyax5043.c$1848$1$370 ==.
                     2546 12183 	XG$axradio_set_channel$0$0 ==.
   2D79 22            [24]12184 	ret
                          12185 ;------------------------------------------------------------
                          12186 ;Allocation info for local variables in function 'axradio_get_channel'
                          12187 ;------------------------------------------------------------
                     2547 12188 	G$axradio_get_channel$0$0 ==.
                     2547 12189 	C$easyax5043.c$1850$1$370 ==.
                          12190 ;	../COMMON/easyax5043.c:1850: uint8_t axradio_get_channel(void)
                          12191 ;	-----------------------------------------
                          12192 ;	 function axradio_get_channel
                          12193 ;	-----------------------------------------
   2D7A                   12194 _axradio_get_channel:
                     2547 12195 	C$easyax5043.c$1852$1$375 ==.
                          12196 ;	../COMMON/easyax5043.c:1852: return axradio_curchannel;
   2D7A 90 00 09      [24]12197 	mov	dptr,#_axradio_curchannel
   2D7D E0            [24]12198 	movx	a,@dptr
                     254B 12199 	C$easyax5043.c$1853$1$375 ==.
                     254B 12200 	XG$axradio_get_channel$0$0 ==.
   2D7E F5 82         [12]12201 	mov	dpl,a
   2D80 22            [24]12202 	ret
                          12203 ;------------------------------------------------------------
                          12204 ;Allocation info for local variables in function 'axradio_get_pllrange'
                          12205 ;------------------------------------------------------------
                     254E 12206 	G$axradio_get_pllrange$0$0 ==.
                     254E 12207 	C$easyax5043.c$1855$1$375 ==.
                          12208 ;	../COMMON/easyax5043.c:1855: uint8_t axradio_get_pllrange(void)
                          12209 ;	-----------------------------------------
                          12210 ;	 function axradio_get_pllrange
                          12211 ;	-----------------------------------------
   2D81                   12212 _axradio_get_pllrange:
                     254E 12213 	C$easyax5043.c$1857$1$377 ==.
                          12214 ;	../COMMON/easyax5043.c:1857: return axradio_phy_chanpllrng_rx[axradio_curchannel] & 0x0F;
   2D81 90 00 09      [24]12215 	mov	dptr,#_axradio_curchannel
   2D84 E0            [24]12216 	movx	a,@dptr
   2D85 24 00         [12]12217 	add	a,#_axradio_phy_chanpllrng_rx
   2D87 F5 82         [12]12218 	mov	dpl,a
   2D89 E4            [12]12219 	clr	a
   2D8A 34 00         [12]12220 	addc	a,#(_axradio_phy_chanpllrng_rx >> 8)
   2D8C F5 83         [12]12221 	mov	dph,a
   2D8E E0            [24]12222 	movx	a,@dptr
   2D8F FF            [12]12223 	mov	r7,a
   2D90 74 0F         [12]12224 	mov	a,#0x0F
   2D92 5F            [12]12225 	anl	a,r7
   2D93 F5 82         [12]12226 	mov	dpl,a
                     2562 12227 	C$easyax5043.c$1858$1$377 ==.
                     2562 12228 	XG$axradio_get_pllrange$0$0 ==.
   2D95 22            [24]12229 	ret
                          12230 ;------------------------------------------------------------
                          12231 ;Allocation info for local variables in function 'axradio_get_pllrange_tx'
                          12232 ;------------------------------------------------------------
                     2563 12233 	G$axradio_get_pllrange_tx$0$0 ==.
                     2563 12234 	C$easyax5043.c$1860$1$377 ==.
                          12235 ;	../COMMON/easyax5043.c:1860: uint8_t axradio_get_pllrange_tx(void)
                          12236 ;	-----------------------------------------
                          12237 ;	 function axradio_get_pllrange_tx
                          12238 ;	-----------------------------------------
   2D96                   12239 _axradio_get_pllrange_tx:
                     2563 12240 	C$easyax5043.c$1862$1$379 ==.
                          12241 ;	../COMMON/easyax5043.c:1862: return axradio_phy_chanpllrng_tx[axradio_curchannel] & 0x0F;
   2D96 90 00 09      [24]12242 	mov	dptr,#_axradio_curchannel
   2D99 E0            [24]12243 	movx	a,@dptr
   2D9A 24 01         [12]12244 	add	a,#_axradio_phy_chanpllrng_tx
   2D9C F5 82         [12]12245 	mov	dpl,a
   2D9E E4            [12]12246 	clr	a
   2D9F 34 00         [12]12247 	addc	a,#(_axradio_phy_chanpllrng_tx >> 8)
   2DA1 F5 83         [12]12248 	mov	dph,a
   2DA3 E0            [24]12249 	movx	a,@dptr
   2DA4 FF            [12]12250 	mov	r7,a
   2DA5 74 0F         [12]12251 	mov	a,#0x0F
   2DA7 5F            [12]12252 	anl	a,r7
   2DA8 F5 82         [12]12253 	mov	dpl,a
                     2577 12254 	C$easyax5043.c$1863$1$379 ==.
                     2577 12255 	XG$axradio_get_pllrange_tx$0$0 ==.
   2DAA 22            [24]12256 	ret
                          12257 ;------------------------------------------------------------
                          12258 ;Allocation info for local variables in function 'axradio_set_curfreqoffset'
                          12259 ;------------------------------------------------------------
                          12260 ;offs                      Allocated to registers r4 r5 r6 r7 
                          12261 ;------------------------------------------------------------
                     2578 12262 	Feasyax5043$axradio_set_curfreqoffset$0$0 ==.
                     2578 12263 	C$easyax5043.c$1865$1$379 ==.
                          12264 ;	../COMMON/easyax5043.c:1865: static uint8_t axradio_set_curfreqoffset(int32_t offs)
                          12265 ;	-----------------------------------------
                          12266 ;	 function axradio_set_curfreqoffset
                          12267 ;	-----------------------------------------
   2DAB                   12268 _axradio_set_curfreqoffset:
   2DAB AC 82         [24]12269 	mov	r4,dpl
   2DAD AD 83         [24]12270 	mov	r5,dph
   2DAF AE F0         [24]12271 	mov	r6,b
   2DB1 FF            [12]12272 	mov	r7,a
                     257F 12273 	C$easyax5043.c$1867$1$381 ==.
                          12274 ;	../COMMON/easyax5043.c:1867: axradio_curfreqoffset = offs;
   2DB2 90 00 0A      [24]12275 	mov	dptr,#_axradio_curfreqoffset
   2DB5 EC            [12]12276 	mov	a,r4
   2DB6 F0            [24]12277 	movx	@dptr,a
   2DB7 ED            [12]12278 	mov	a,r5
   2DB8 A3            [24]12279 	inc	dptr
   2DB9 F0            [24]12280 	movx	@dptr,a
   2DBA EE            [12]12281 	mov	a,r6
   2DBB A3            [24]12282 	inc	dptr
   2DBC F0            [24]12283 	movx	@dptr,a
   2DBD EF            [12]12284 	mov	a,r7
   2DBE A3            [24]12285 	inc	dptr
   2DBF F0            [24]12286 	movx	@dptr,a
                     258D 12287 	C$easyax5043.c$1868$1$381 ==.
                          12288 ;	../COMMON/easyax5043.c:1868: if (checksignedlimit32(offs, axradio_phy_maxfreqoffset))
   2DC0 90 52 7F      [24]12289 	mov	dptr,#_axradio_phy_maxfreqoffset
   2DC3 E4            [12]12290 	clr	a
   2DC4 93            [24]12291 	movc	a,@a+dptr
   2DC5 C0 E0         [24]12292 	push	acc
   2DC7 74 01         [12]12293 	mov	a,#0x01
   2DC9 93            [24]12294 	movc	a,@a+dptr
   2DCA C0 E0         [24]12295 	push	acc
   2DCC 74 02         [12]12296 	mov	a,#0x02
   2DCE 93            [24]12297 	movc	a,@a+dptr
   2DCF C0 E0         [24]12298 	push	acc
   2DD1 74 03         [12]12299 	mov	a,#0x03
   2DD3 93            [24]12300 	movc	a,@a+dptr
   2DD4 C0 E0         [24]12301 	push	acc
   2DD6 8C 82         [24]12302 	mov	dpl,r4
   2DD8 8D 83         [24]12303 	mov	dph,r5
   2DDA 8E F0         [24]12304 	mov	b,r6
   2DDC EF            [12]12305 	mov	a,r7
   2DDD 12 4A 4A      [24]12306 	lcall	_checksignedlimit32
   2DE0 AF 82         [24]12307 	mov	r7,dpl
   2DE2 E5 81         [12]12308 	mov	a,sp
   2DE4 24 FC         [12]12309 	add	a,#0xfc
   2DE6 F5 81         [12]12310 	mov	sp,a
   2DE8 EF            [12]12311 	mov	a,r7
   2DE9 60 05         [24]12312 	jz	00102$
                     25B8 12313 	C$easyax5043.c$1869$1$381 ==.
                          12314 ;	../COMMON/easyax5043.c:1869: return AXRADIO_ERR_NOERROR;
   2DEB 75 82 00      [24]12315 	mov	dpl,#0x00
   2DEE 80 5B         [24]12316 	sjmp	00106$
   2DF0                   12317 00102$:
                     25BD 12318 	C$easyax5043.c$1870$1$381 ==.
                          12319 ;	../COMMON/easyax5043.c:1870: if (axradio_curfreqoffset < 0)
   2DF0 90 00 0A      [24]12320 	mov	dptr,#_axradio_curfreqoffset
   2DF3 E0            [24]12321 	movx	a,@dptr
   2DF4 FC            [12]12322 	mov	r4,a
   2DF5 A3            [24]12323 	inc	dptr
   2DF6 E0            [24]12324 	movx	a,@dptr
   2DF7 FD            [12]12325 	mov	r5,a
   2DF8 A3            [24]12326 	inc	dptr
   2DF9 E0            [24]12327 	movx	a,@dptr
   2DFA FE            [12]12328 	mov	r6,a
   2DFB A3            [24]12329 	inc	dptr
   2DFC E0            [24]12330 	movx	a,@dptr
   2DFD FF            [12]12331 	mov	r7,a
   2DFE 30 E7 27      [24]12332 	jnb	acc.7,00104$
                     25CE 12333 	C$easyax5043.c$1871$1$381 ==.
                          12334 ;	../COMMON/easyax5043.c:1871: axradio_curfreqoffset = -axradio_phy_maxfreqoffset;
   2E01 90 52 7F      [24]12335 	mov	dptr,#_axradio_phy_maxfreqoffset
   2E04 E4            [12]12336 	clr	a
   2E05 93            [24]12337 	movc	a,@a+dptr
   2E06 FC            [12]12338 	mov	r4,a
   2E07 74 01         [12]12339 	mov	a,#0x01
   2E09 93            [24]12340 	movc	a,@a+dptr
   2E0A FD            [12]12341 	mov	r5,a
   2E0B 74 02         [12]12342 	mov	a,#0x02
   2E0D 93            [24]12343 	movc	a,@a+dptr
   2E0E FE            [12]12344 	mov	r6,a
   2E0F 74 03         [12]12345 	mov	a,#0x03
   2E11 93            [24]12346 	movc	a,@a+dptr
   2E12 FF            [12]12347 	mov	r7,a
   2E13 90 00 0A      [24]12348 	mov	dptr,#_axradio_curfreqoffset
   2E16 C3            [12]12349 	clr	c
   2E17 E4            [12]12350 	clr	a
   2E18 9C            [12]12351 	subb	a,r4
   2E19 F0            [24]12352 	movx	@dptr,a
   2E1A E4            [12]12353 	clr	a
   2E1B 9D            [12]12354 	subb	a,r5
   2E1C A3            [24]12355 	inc	dptr
   2E1D F0            [24]12356 	movx	@dptr,a
   2E1E E4            [12]12357 	clr	a
   2E1F 9E            [12]12358 	subb	a,r6
   2E20 A3            [24]12359 	inc	dptr
   2E21 F0            [24]12360 	movx	@dptr,a
   2E22 E4            [12]12361 	clr	a
   2E23 9F            [12]12362 	subb	a,r7
   2E24 A3            [24]12363 	inc	dptr
   2E25 F0            [24]12364 	movx	@dptr,a
   2E26 80 20         [24]12365 	sjmp	00105$
   2E28                   12366 00104$:
                     25F5 12367 	C$easyax5043.c$1873$1$381 ==.
                          12368 ;	../COMMON/easyax5043.c:1873: axradio_curfreqoffset = axradio_phy_maxfreqoffset;
   2E28 90 52 7F      [24]12369 	mov	dptr,#_axradio_phy_maxfreqoffset
   2E2B E4            [12]12370 	clr	a
   2E2C 93            [24]12371 	movc	a,@a+dptr
   2E2D FC            [12]12372 	mov	r4,a
   2E2E 74 01         [12]12373 	mov	a,#0x01
   2E30 93            [24]12374 	movc	a,@a+dptr
   2E31 FD            [12]12375 	mov	r5,a
   2E32 74 02         [12]12376 	mov	a,#0x02
   2E34 93            [24]12377 	movc	a,@a+dptr
   2E35 FE            [12]12378 	mov	r6,a
   2E36 74 03         [12]12379 	mov	a,#0x03
   2E38 93            [24]12380 	movc	a,@a+dptr
   2E39 FF            [12]12381 	mov	r7,a
   2E3A 90 00 0A      [24]12382 	mov	dptr,#_axradio_curfreqoffset
   2E3D EC            [12]12383 	mov	a,r4
   2E3E F0            [24]12384 	movx	@dptr,a
   2E3F ED            [12]12385 	mov	a,r5
   2E40 A3            [24]12386 	inc	dptr
   2E41 F0            [24]12387 	movx	@dptr,a
   2E42 EE            [12]12388 	mov	a,r6
   2E43 A3            [24]12389 	inc	dptr
   2E44 F0            [24]12390 	movx	@dptr,a
   2E45 EF            [12]12391 	mov	a,r7
   2E46 A3            [24]12392 	inc	dptr
   2E47 F0            [24]12393 	movx	@dptr,a
   2E48                   12394 00105$:
                     2615 12395 	C$easyax5043.c$1874$1$381 ==.
                          12396 ;	../COMMON/easyax5043.c:1874: return AXRADIO_ERR_INVALID;
   2E48 75 82 04      [24]12397 	mov	dpl,#0x04
   2E4B                   12398 00106$:
                     2618 12399 	C$easyax5043.c$1875$1$381 ==.
                     2618 12400 	XFeasyax5043$axradio_set_curfreqoffset$0$0 ==.
   2E4B 22            [24]12401 	ret
                          12402 ;------------------------------------------------------------
                          12403 ;Allocation info for local variables in function 'axradio_set_freqoffset'
                          12404 ;------------------------------------------------------------
                          12405 ;offs                      Allocated to registers r4 r5 r6 r7 
                          12406 ;ret                       Allocated to registers r7 
                          12407 ;ret2                      Allocated to registers r6 
                          12408 ;------------------------------------------------------------
                     2619 12409 	G$axradio_set_freqoffset$0$0 ==.
                     2619 12410 	C$easyax5043.c$1877$1$381 ==.
                          12411 ;	../COMMON/easyax5043.c:1877: uint8_t axradio_set_freqoffset(int32_t offs)
                          12412 ;	-----------------------------------------
                          12413 ;	 function axradio_set_freqoffset
                          12414 ;	-----------------------------------------
   2E4C                   12415 _axradio_set_freqoffset:
                     2619 12416 	C$easyax5043.c$1879$1$383 ==.
                          12417 ;	../COMMON/easyax5043.c:1879: uint8_t __autodata ret = axradio_set_curfreqoffset(offs);
   2E4C 12 2D AB      [24]12418 	lcall	_axradio_set_curfreqoffset
   2E4F AF 82         [24]12419 	mov	r7,dpl
                     261E 12420 	C$easyax5043.c$1881$2$384 ==.
                          12421 ;	../COMMON/easyax5043.c:1881: uint8_t __autodata ret2 = axradio_set_channel(axradio_curchannel);
   2E51 90 00 09      [24]12422 	mov	dptr,#_axradio_curchannel
   2E54 E0            [24]12423 	movx	a,@dptr
   2E55 F5 82         [12]12424 	mov	dpl,a
   2E57 C0 07         [24]12425 	push	ar7
   2E59 12 2C C6      [24]12426 	lcall	_axradio_set_channel
   2E5C AE 82         [24]12427 	mov	r6,dpl
   2E5E D0 07         [24]12428 	pop	ar7
                     262D 12429 	C$easyax5043.c$1882$2$384 ==.
                          12430 ;	../COMMON/easyax5043.c:1882: if (ret == AXRADIO_ERR_NOERROR)
   2E60 EF            [12]12431 	mov	a,r7
   2E61 70 02         [24]12432 	jnz	00102$
                     2630 12433 	C$easyax5043.c$1883$2$384 ==.
                          12434 ;	../COMMON/easyax5043.c:1883: ret = ret2;
   2E63 8E 07         [24]12435 	mov	ar7,r6
   2E65                   12436 00102$:
                     2632 12437 	C$easyax5043.c$1885$1$383 ==.
                          12438 ;	../COMMON/easyax5043.c:1885: return ret;
   2E65 8F 82         [24]12439 	mov	dpl,r7
                     2634 12440 	C$easyax5043.c$1886$1$383 ==.
                     2634 12441 	XG$axradio_set_freqoffset$0$0 ==.
   2E67 22            [24]12442 	ret
                          12443 ;------------------------------------------------------------
                          12444 ;Allocation info for local variables in function 'axradio_get_freqoffset'
                          12445 ;------------------------------------------------------------
                     2635 12446 	G$axradio_get_freqoffset$0$0 ==.
                     2635 12447 	C$easyax5043.c$1888$1$383 ==.
                          12448 ;	../COMMON/easyax5043.c:1888: int32_t axradio_get_freqoffset(void)
                          12449 ;	-----------------------------------------
                          12450 ;	 function axradio_get_freqoffset
                          12451 ;	-----------------------------------------
   2E68                   12452 _axradio_get_freqoffset:
                     2635 12453 	C$easyax5043.c$1890$1$386 ==.
                          12454 ;	../COMMON/easyax5043.c:1890: return axradio_curfreqoffset;
   2E68 90 00 0A      [24]12455 	mov	dptr,#_axradio_curfreqoffset
   2E6B E0            [24]12456 	movx	a,@dptr
   2E6C FC            [12]12457 	mov	r4,a
   2E6D A3            [24]12458 	inc	dptr
   2E6E E0            [24]12459 	movx	a,@dptr
   2E6F FD            [12]12460 	mov	r5,a
   2E70 A3            [24]12461 	inc	dptr
   2E71 E0            [24]12462 	movx	a,@dptr
   2E72 FE            [12]12463 	mov	r6,a
   2E73 A3            [24]12464 	inc	dptr
   2E74 E0            [24]12465 	movx	a,@dptr
   2E75 8C 82         [24]12466 	mov	dpl,r4
   2E77 8D 83         [24]12467 	mov	dph,r5
   2E79 8E F0         [24]12468 	mov	b,r6
                     2648 12469 	C$easyax5043.c$1891$1$386 ==.
                     2648 12470 	XG$axradio_get_freqoffset$0$0 ==.
   2E7B 22            [24]12471 	ret
                          12472 ;------------------------------------------------------------
                          12473 ;Allocation info for local variables in function 'axradio_set_local_address'
                          12474 ;------------------------------------------------------------
                          12475 ;addr                      Allocated to registers r5 r6 r7 
                          12476 ;------------------------------------------------------------
                     2649 12477 	G$axradio_set_local_address$0$0 ==.
                     2649 12478 	C$easyax5043.c$1893$1$386 ==.
                          12479 ;	../COMMON/easyax5043.c:1893: void axradio_set_local_address(const struct axradio_address_mask *addr)
                          12480 ;	-----------------------------------------
                          12481 ;	 function axradio_set_local_address
                          12482 ;	-----------------------------------------
   2E7C                   12483 _axradio_set_local_address:
   2E7C AD 82         [24]12484 	mov	r5,dpl
   2E7E AE 83         [24]12485 	mov	r6,dph
   2E80 AF F0         [24]12486 	mov	r7,b
                     264F 12487 	C$easyax5043.c$1895$1$388 ==.
                          12488 ;	../COMMON/easyax5043.c:1895: memcpy_xdatageneric(&axradio_localaddr, addr, sizeof(axradio_localaddr));
   2E82 8D 27         [24]12489 	mov	_memcpy_PARM_2,r5
   2E84 8E 28         [24]12490 	mov	(_memcpy_PARM_2 + 1),r6
   2E86 8F 29         [24]12491 	mov	(_memcpy_PARM_2 + 2),r7
   2E88 75 2A 08      [24]12492 	mov	_memcpy_PARM_3,#0x08
   2E8B 75 2B 00      [24]12493 	mov	(_memcpy_PARM_3 + 1),#0x00
   2E8E 90 00 1E      [24]12494 	mov	dptr,#_axradio_localaddr
   2E91 75 F0 00      [24]12495 	mov	b,#0x00
   2E94 12 42 E2      [24]12496 	lcall	_memcpy
                     2664 12497 	C$easyax5043.c$1896$1$388 ==.
                          12498 ;	../COMMON/easyax5043.c:1896: axradio_setaddrregs();
   2E97 12 14 CE      [24]12499 	lcall	_axradio_setaddrregs
                     2667 12500 	C$easyax5043.c$1897$1$388 ==.
                     2667 12501 	XG$axradio_set_local_address$0$0 ==.
   2E9A 22            [24]12502 	ret
                          12503 ;------------------------------------------------------------
                          12504 ;Allocation info for local variables in function 'axradio_get_local_address'
                          12505 ;------------------------------------------------------------
                          12506 ;addr                      Allocated to registers r5 r6 r7 
                          12507 ;------------------------------------------------------------
                     2668 12508 	G$axradio_get_local_address$0$0 ==.
                     2668 12509 	C$easyax5043.c$1899$1$388 ==.
                          12510 ;	../COMMON/easyax5043.c:1899: void axradio_get_local_address(struct axradio_address_mask *addr)
                          12511 ;	-----------------------------------------
                          12512 ;	 function axradio_get_local_address
                          12513 ;	-----------------------------------------
   2E9B                   12514 _axradio_get_local_address:
   2E9B AD 82         [24]12515 	mov	r5,dpl
   2E9D AE 83         [24]12516 	mov	r6,dph
   2E9F AF F0         [24]12517 	mov	r7,b
                     266E 12518 	C$easyax5043.c$1901$1$390 ==.
                          12519 ;	../COMMON/easyax5043.c:1901: memcpy_genericxdata(addr, &axradio_localaddr, sizeof(axradio_localaddr));
   2EA1 75 27 1E      [24]12520 	mov	_memcpy_PARM_2,#_axradio_localaddr
   2EA4 75 28 00      [24]12521 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   2EA7 75 29 00      [24]12522 	mov	(_memcpy_PARM_2 + 2),#0x00
   2EAA 75 2A 08      [24]12523 	mov	_memcpy_PARM_3,#0x08
   2EAD 75 2B 00      [24]12524 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EB0 8D 82         [24]12525 	mov	dpl,r5
   2EB2 8E 83         [24]12526 	mov	dph,r6
   2EB4 8F F0         [24]12527 	mov	b,r7
   2EB6 12 42 E2      [24]12528 	lcall	_memcpy
                     2686 12529 	C$easyax5043.c$1902$1$390 ==.
                     2686 12530 	XG$axradio_get_local_address$0$0 ==.
   2EB9 22            [24]12531 	ret
                          12532 ;------------------------------------------------------------
                          12533 ;Allocation info for local variables in function 'axradio_set_default_remote_address'
                          12534 ;------------------------------------------------------------
                          12535 ;addr                      Allocated to registers r5 r6 r7 
                          12536 ;------------------------------------------------------------
                     2687 12537 	G$axradio_set_default_remote_address$0$0 ==.
                     2687 12538 	C$easyax5043.c$1904$1$390 ==.
                          12539 ;	../COMMON/easyax5043.c:1904: void axradio_set_default_remote_address(const struct axradio_address *addr)
                          12540 ;	-----------------------------------------
                          12541 ;	 function axradio_set_default_remote_address
                          12542 ;	-----------------------------------------
   2EBA                   12543 _axradio_set_default_remote_address:
   2EBA AD 82         [24]12544 	mov	r5,dpl
   2EBC AE 83         [24]12545 	mov	r6,dph
   2EBE AF F0         [24]12546 	mov	r7,b
                     268D 12547 	C$easyax5043.c$1906$1$392 ==.
                          12548 ;	../COMMON/easyax5043.c:1906: memcpy_xdatageneric(&axradio_default_remoteaddr, addr, sizeof(axradio_default_remoteaddr));
   2EC0 8D 27         [24]12549 	mov	_memcpy_PARM_2,r5
   2EC2 8E 28         [24]12550 	mov	(_memcpy_PARM_2 + 1),r6
   2EC4 8F 29         [24]12551 	mov	(_memcpy_PARM_2 + 2),r7
   2EC6 75 2A 04      [24]12552 	mov	_memcpy_PARM_3,#0x04
   2EC9 75 2B 00      [24]12553 	mov	(_memcpy_PARM_3 + 1),#0x00
   2ECC 90 00 26      [24]12554 	mov	dptr,#_axradio_default_remoteaddr
   2ECF 75 F0 00      [24]12555 	mov	b,#0x00
   2ED2 12 42 E2      [24]12556 	lcall	_memcpy
                     26A2 12557 	C$easyax5043.c$1907$1$392 ==.
                     26A2 12558 	XG$axradio_set_default_remote_address$0$0 ==.
   2ED5 22            [24]12559 	ret
                          12560 ;------------------------------------------------------------
                          12561 ;Allocation info for local variables in function 'axradio_get_default_remote_address'
                          12562 ;------------------------------------------------------------
                          12563 ;addr                      Allocated to registers r5 r6 r7 
                          12564 ;------------------------------------------------------------
                     26A3 12565 	G$axradio_get_default_remote_address$0$0 ==.
                     26A3 12566 	C$easyax5043.c$1909$1$392 ==.
                          12567 ;	../COMMON/easyax5043.c:1909: void axradio_get_default_remote_address(struct axradio_address *addr)
                          12568 ;	-----------------------------------------
                          12569 ;	 function axradio_get_default_remote_address
                          12570 ;	-----------------------------------------
   2ED6                   12571 _axradio_get_default_remote_address:
   2ED6 AD 82         [24]12572 	mov	r5,dpl
   2ED8 AE 83         [24]12573 	mov	r6,dph
   2EDA AF F0         [24]12574 	mov	r7,b
                     26A9 12575 	C$easyax5043.c$1911$1$394 ==.
                          12576 ;	../COMMON/easyax5043.c:1911: memcpy_genericxdata(addr, &axradio_default_remoteaddr, sizeof(axradio_default_remoteaddr));
   2EDC 75 27 26      [24]12577 	mov	_memcpy_PARM_2,#_axradio_default_remoteaddr
   2EDF 75 28 00      [24]12578 	mov	(_memcpy_PARM_2 + 1),#(_axradio_default_remoteaddr >> 8)
   2EE2 75 29 00      [24]12579 	mov	(_memcpy_PARM_2 + 2),#0x00
   2EE5 75 2A 04      [24]12580 	mov	_memcpy_PARM_3,#0x04
   2EE8 75 2B 00      [24]12581 	mov	(_memcpy_PARM_3 + 1),#0x00
   2EEB 8D 82         [24]12582 	mov	dpl,r5
   2EED 8E 83         [24]12583 	mov	dph,r6
   2EEF 8F F0         [24]12584 	mov	b,r7
   2EF1 12 42 E2      [24]12585 	lcall	_memcpy
                     26C1 12586 	C$easyax5043.c$1912$1$394 ==.
                     26C1 12587 	XG$axradio_get_default_remote_address$0$0 ==.
   2EF4 22            [24]12588 	ret
                          12589 ;------------------------------------------------------------
                          12590 ;Allocation info for local variables in function 'axradio_transmit'
                          12591 ;------------------------------------------------------------
                          12592 ;pkt                       Allocated with name '_axradio_transmit_PARM_2'
                          12593 ;pktlen                    Allocated with name '_axradio_transmit_PARM_3'
                          12594 ;addr                      Allocated to registers r5 r6 r7 
                          12595 ;fifofree                  Allocated to registers r3 r4 
                          12596 ;i                         Allocated to registers r4 
                          12597 ;iesave                    Allocated to registers r4 
                          12598 ;len_byte                  Allocated to registers r6 
                          12599 ;------------------------------------------------------------
                     26C2 12600 	G$axradio_transmit$0$0 ==.
                     26C2 12601 	C$easyax5043.c$1914$1$394 ==.
                          12602 ;	../COMMON/easyax5043.c:1914: uint8_t axradio_transmit(const struct axradio_address *addr, const uint8_t *pkt, uint16_t pktlen)
                          12603 ;	-----------------------------------------
                          12604 ;	 function axradio_transmit
                          12605 ;	-----------------------------------------
   2EF5                   12606 _axradio_transmit:
   2EF5 AD 82         [24]12607 	mov	r5,dpl
   2EF7 AE 83         [24]12608 	mov	r6,dph
   2EF9 AF F0         [24]12609 	mov	r7,b
                     26C8 12610 	C$easyax5043.c$1916$1$396 ==.
                          12611 ;	../COMMON/easyax5043.c:1916: switch (axradio_mode) {
   2EFB AC 0A         [24]12612 	mov	r4,_axradio_mode
   2EFD BC 10 00      [24]12613 	cjne	r4,#0x10,00243$
   2F00                   12614 00243$:
   2F00 50 03         [24]12615 	jnc	00244$
   2F02 02 32 6C      [24]12616 	ljmp	00160$
   2F05                   12617 00244$:
   2F05 EC            [12]12618 	mov	a,r4
   2F06 24 DE         [12]12619 	add	a,#0xff - 0x21
   2F08 50 03         [24]12620 	jnc	00245$
   2F0A 02 32 6C      [24]12621 	ljmp	00160$
   2F0D                   12622 00245$:
   2F0D EC            [12]12623 	mov	a,r4
   2F0E 24 F0         [12]12624 	add	a,#0xF0
   2F10 FC            [12]12625 	mov	r4,a
   2F11 24 0A         [12]12626 	add	a,#(00246$-3-.)
   2F13 83            [24]12627 	movc	a,@a+pc
   2F14 F5 82         [12]12628 	mov	dpl,a
   2F16 EC            [12]12629 	mov	a,r4
   2F17 24 16         [12]12630 	add	a,#(00247$-3-.)
   2F19 83            [24]12631 	movc	a,@a+pc
   2F1A F5 83         [12]12632 	mov	dph,a
   2F1C E4            [12]12633 	clr	a
   2F1D 73            [24]12634 	jmp	@a+dptr
   2F1E                   12635 00246$:
   2F1E F0                12636 	.db	00120$
   2F1F F0                12637 	.db	00121$
   2F20 F0                12638 	.db	00122$
   2F21 F0                12639 	.db	00123$
   2F22 42                12640 	.db	00101$
   2F23 42                12641 	.db	00102$
   2F24 42                12642 	.db	00103$
   2F25 6C                12643 	.db	00160$
   2F26 B5                12644 	.db	00113$
   2F27 B5                12645 	.db	00114$
   2F28 6C                12646 	.db	00160$
   2F29 6C                12647 	.db	00160$
   2F2A 6C                12648 	.db	00160$
   2F2B 6C                12649 	.db	00160$
   2F2C 6C                12650 	.db	00160$
   2F2D 6C                12651 	.db	00160$
   2F2E B3                12652 	.db	00111$
   2F2F B3                12653 	.db	00112$
   2F30                   12654 00247$:
   2F30 2F                12655 	.db	00120$>>8
   2F31 2F                12656 	.db	00121$>>8
   2F32 2F                12657 	.db	00122$>>8
   2F33 2F                12658 	.db	00123$>>8
   2F34 2F                12659 	.db	00101$>>8
   2F35 2F                12660 	.db	00102$>>8
   2F36 2F                12661 	.db	00103$>>8
   2F37 32                12662 	.db	00160$>>8
   2F38 2F                12663 	.db	00113$>>8
   2F39 2F                12664 	.db	00114$>>8
   2F3A 32                12665 	.db	00160$>>8
   2F3B 32                12666 	.db	00160$>>8
   2F3C 32                12667 	.db	00160$>>8
   2F3D 32                12668 	.db	00160$>>8
   2F3E 32                12669 	.db	00160$>>8
   2F3F 32                12670 	.db	00160$>>8
   2F40 2F                12671 	.db	00111$>>8
   2F41 2F                12672 	.db	00112$>>8
                     270F 12673 	C$easyax5043.c$1917$2$397 ==.
                          12674 ;	../COMMON/easyax5043.c:1917: case AXRADIO_MODE_STREAM_TRANSMIT:
   2F42                   12675 00101$:
                     270F 12676 	C$easyax5043.c$1918$2$397 ==.
                          12677 ;	../COMMON/easyax5043.c:1918: case AXRADIO_MODE_STREAM_TRANSMIT_UNENC:
   2F42                   12678 00102$:
                     270F 12679 	C$easyax5043.c$1919$2$397 ==.
                          12680 ;	../COMMON/easyax5043.c:1919: case AXRADIO_MODE_STREAM_TRANSMIT_SCRAM:
   2F42                   12681 00103$:
                     270F 12682 	C$easyax5043.c$1921$3$398 ==.
                          12683 ;	../COMMON/easyax5043.c:1921: uint16_t __autodata fifofree = radio_read16((uint16_t)&AX5043_FIFOFREE1);
   2F42 90 40 2C      [24]12684 	mov	dptr,#_AX5043_FIFOFREE1
   2F45 12 45 C9      [24]12685 	lcall	_radio_read16
   2F48 AB 82         [24]12686 	mov	r3,dpl
   2F4A AC 83         [24]12687 	mov	r4,dph
                     2719 12688 	C$easyax5043.c$1922$3$398 ==.
                          12689 ;	../COMMON/easyax5043.c:1922: if (fifofree < pktlen + 3)
   2F4C 74 03         [12]12690 	mov	a,#0x03
   2F4E 25 0F         [12]12691 	add	a,_axradio_transmit_PARM_3
   2F50 F9            [12]12692 	mov	r1,a
   2F51 E4            [12]12693 	clr	a
   2F52 35 10         [12]12694 	addc	a,(_axradio_transmit_PARM_3 + 1)
   2F54 FA            [12]12695 	mov	r2,a
   2F55 C3            [12]12696 	clr	c
   2F56 EB            [12]12697 	mov	a,r3
   2F57 99            [12]12698 	subb	a,r1
   2F58 EC            [12]12699 	mov	a,r4
   2F59 9A            [12]12700 	subb	a,r2
   2F5A 50 06         [24]12701 	jnc	00105$
                     2729 12702 	C$easyax5043.c$1923$3$398 ==.
                          12703 ;	../COMMON/easyax5043.c:1923: return AXRADIO_ERR_INVALID;
   2F5C 75 82 04      [24]12704 	mov	dpl,#0x04
   2F5F 02 32 6F      [24]12705 	ljmp	00162$
   2F62                   12706 00105$:
                     272F 12707 	C$easyax5043.c$1925$2$397 ==.
                          12708 ;	../COMMON/easyax5043.c:1925: if (pktlen) {
   2F62 E5 0F         [12]12709 	mov	a,_axradio_transmit_PARM_3
   2F64 45 10         [12]12710 	orl	a,(_axradio_transmit_PARM_3 + 1)
   2F66 60 2D         [24]12711 	jz	00110$
                     2735 12712 	C$easyax5043.c$1926$3$397 ==.
                          12713 ;	../COMMON/easyax5043.c:1926: uint8_t __autodata i = pktlen;
   2F68 AC 0F         [24]12714 	mov	r4,_axradio_transmit_PARM_3
                     2737 12715 	C$easyax5043.c$1927$3$399 ==.
                          12716 ;	../COMMON/easyax5043.c:1927: AX5043_FIFODATA = AX5043_FIFOCMD_DATA | (7 << 5);
                     2737 12717 	C$easyax5043.c$1928$3$399 ==.
                          12718 ;	../COMMON/easyax5043.c:1928: AX5043_FIFODATA = i + 1;
   2F6A 90 40 29      [24]12719 	mov	dptr,#_AX5043_FIFODATA
   2F6D 74 E1         [12]12720 	mov	a,#0xE1
   2F6F F0            [24]12721 	movx	@dptr,a
   2F70 EC            [12]12722 	mov	a,r4
   2F71 04            [12]12723 	inc	a
   2F72 F0            [24]12724 	movx	@dptr,a
                     2740 12725 	C$easyax5043.c$1929$3$399 ==.
                          12726 ;	../COMMON/easyax5043.c:1929: AX5043_FIFODATA = 0x08;
   2F73 90 40 29      [24]12727 	mov	dptr,#_AX5043_FIFODATA
   2F76 74 08         [12]12728 	mov	a,#0x08
   2F78 F0            [24]12729 	movx	@dptr,a
                     2746 12730 	C$easyax5043.c$1930$1$396 ==.
                          12731 ;	../COMMON/easyax5043.c:1930: do {
   2F79 A9 0C         [24]12732 	mov	r1,_axradio_transmit_PARM_2
   2F7B AA 0D         [24]12733 	mov	r2,(_axradio_transmit_PARM_2 + 1)
   2F7D AB 0E         [24]12734 	mov	r3,(_axradio_transmit_PARM_2 + 2)
   2F7F                   12735 00106$:
                     274C 12736 	C$easyax5043.c$1931$4$400 ==.
                          12737 ;	../COMMON/easyax5043.c:1931: AX5043_FIFODATA = *pkt++;
   2F7F 89 82         [24]12738 	mov	dpl,r1
   2F81 8A 83         [24]12739 	mov	dph,r2
   2F83 8B F0         [24]12740 	mov	b,r3
   2F85 12 51 31      [24]12741 	lcall	__gptrget
   2F88 F8            [12]12742 	mov	r0,a
   2F89 A3            [24]12743 	inc	dptr
   2F8A A9 82         [24]12744 	mov	r1,dpl
   2F8C AA 83         [24]12745 	mov	r2,dph
   2F8E 90 40 29      [24]12746 	mov	dptr,#_AX5043_FIFODATA
   2F91 E8            [12]12747 	mov	a,r0
   2F92 F0            [24]12748 	movx	@dptr,a
                     2760 12749 	C$easyax5043.c$1932$3$399 ==.
                          12750 ;	../COMMON/easyax5043.c:1932: } while (--i);
   2F93 DC EA         [24]12751 	djnz	r4,00106$
   2F95                   12752 00110$:
                     2762 12753 	C$easyax5043.c$1934$2$397 ==.
                          12754 ;	../COMMON/easyax5043.c:1934: AX5043_FIFOSTAT =  4; // FIFO commit
   2F95 90 40 28      [24]12755 	mov	dptr,#_AX5043_FIFOSTAT
   2F98 74 04         [12]12756 	mov	a,#0x04
   2F9A F0            [24]12757 	movx	@dptr,a
                     2768 12758 	C$easyax5043.c$1936$3$401 ==.
                          12759 ;	../COMMON/easyax5043.c:1936: uint8_t __autodata iesave = IE & 0x80;
   2F9B 74 80         [12]12760 	mov	a,#0x80
   2F9D 55 A8         [12]12761 	anl	a,_IE
   2F9F FC            [12]12762 	mov	r4,a
                     276D 12763 	C$easyax5043.c$1937$3$401 ==.
                          12764 ;	../COMMON/easyax5043.c:1937: EA = 0;
   2FA0 C2 AF         [12]12765 	clr	_EA
                     276F 12766 	C$easyax5043.c$1938$3$401 ==.
                          12767 ;	../COMMON/easyax5043.c:1938: AX5043_IRQMASK0 |= 0x08;
   2FA2 90 40 07      [24]12768 	mov	dptr,#_AX5043_IRQMASK0
   2FA5 E0            [24]12769 	movx	a,@dptr
   2FA6 FB            [12]12770 	mov	r3,a
   2FA7 44 08         [12]12771 	orl	a,#0x08
   2FA9 F0            [24]12772 	movx	@dptr,a
                     2777 12773 	C$easyax5043.c$1939$3$401 ==.
                          12774 ;	../COMMON/easyax5043.c:1939: IE |= iesave;
   2FAA EC            [12]12775 	mov	a,r4
   2FAB 42 A8         [12]12776 	orl	_IE,a
                     277A 12777 	C$easyax5043.c$1941$2$397 ==.
                          12778 ;	../COMMON/easyax5043.c:1941: return AXRADIO_ERR_NOERROR;
   2FAD 75 82 00      [24]12779 	mov	dpl,#0x00
   2FB0 02 32 6F      [24]12780 	ljmp	00162$
                     2780 12781 	C$easyax5043.c$1943$2$397 ==.
                          12782 ;	../COMMON/easyax5043.c:1943: case AXRADIO_MODE_SYNC_MASTER:
   2FB3                   12783 00111$:
                     2780 12784 	C$easyax5043.c$1944$2$397 ==.
                          12785 ;	../COMMON/easyax5043.c:1944: case AXRADIO_MODE_SYNC_ACK_MASTER:
   2FB3                   12786 00112$:
                     2780 12787 	C$easyax5043.c$1945$2$397 ==.
                          12788 ;	../COMMON/easyax5043.c:1945: goto dotx;
                     2780 12789 	C$easyax5043.c$1947$2$397 ==.
                          12790 ;	../COMMON/easyax5043.c:1947: case AXRADIO_MODE_ASYNC_RECEIVE:
   2FB3 80 48         [24]12791 	sjmp	00126$
   2FB5                   12792 00113$:
                     2782 12793 	C$easyax5043.c$1948$2$397 ==.
                          12794 ;	../COMMON/easyax5043.c:1948: case AXRADIO_MODE_WOR_RECEIVE:
   2FB5                   12795 00114$:
                     2782 12796 	C$easyax5043.c$1949$2$397 ==.
                          12797 ;	../COMMON/easyax5043.c:1949: if (axradio_syncstate != syncstate_off)
   2FB5 90 00 04      [24]12798 	mov	dptr,#_axradio_syncstate
   2FB8 E0            [24]12799 	movx	a,@dptr
   2FB9 FC            [12]12800 	mov	r4,a
   2FBA 60 06         [24]12801 	jz	00116$
                     2789 12802 	C$easyax5043.c$1950$2$397 ==.
                          12803 ;	../COMMON/easyax5043.c:1950: return AXRADIO_ERR_BUSY;
   2FBC 75 82 02      [24]12804 	mov	dpl,#0x02
   2FBF 02 32 6F      [24]12805 	ljmp	00162$
   2FC2                   12806 00116$:
                     278F 12807 	C$easyax5043.c$1951$2$397 ==.
                          12808 ;	../COMMON/easyax5043.c:1951: AX5043_IRQMASK1 = 0x00;
   2FC2 90 40 06      [24]12809 	mov	dptr,#_AX5043_IRQMASK1
                     2792 12810 	C$easyax5043.c$1952$2$397 ==.
                          12811 ;	../COMMON/easyax5043.c:1952: AX5043_IRQMASK0 = 0x00;
   2FC5 E4            [12]12812 	clr	a
   2FC6 F0            [24]12813 	movx	@dptr,a
   2FC7 90 40 07      [24]12814 	mov	dptr,#_AX5043_IRQMASK0
   2FCA F0            [24]12815 	movx	@dptr,a
                     2798 12816 	C$easyax5043.c$1953$2$397 ==.
                          12817 ;	../COMMON/easyax5043.c:1953: AX5043_PWRMODE = AX5043_PWRSTATE_XTAL_ON;
   2FCB 90 40 02      [24]12818 	mov	dptr,#_AX5043_PWRMODE
   2FCE 74 05         [12]12819 	mov	a,#0x05
   2FD0 F0            [24]12820 	movx	@dptr,a
                     279E 12821 	C$easyax5043.c$1954$2$397 ==.
                          12822 ;	../COMMON/easyax5043.c:1954: AX5043_FIFOSTAT = 3;
   2FD1 90 40 28      [24]12823 	mov	dptr,#_AX5043_FIFOSTAT
   2FD4 74 03         [12]12824 	mov	a,#0x03
   2FD6 F0            [24]12825 	movx	@dptr,a
                     27A4 12826 	C$easyax5043.c$1955$2$397 ==.
                          12827 ;	../COMMON/easyax5043.c:1955: while (AX5043_POWSTAT & 0x08);
   2FD7                   12828 00117$:
   2FD7 90 40 03      [24]12829 	mov	dptr,#_AX5043_POWSTAT
   2FDA E0            [24]12830 	movx	a,@dptr
   2FDB FC            [12]12831 	mov	r4,a
   2FDC 20 E3 F8      [24]12832 	jb	acc.3,00117$
                     27AC 12833 	C$easyax5043.c$1956$2$397 ==.
                          12834 ;	../COMMON/easyax5043.c:1956: ax5043_init_registers_tx();
   2FDF C0 07         [24]12835 	push	ar7
   2FE1 C0 06         [24]12836 	push	ar6
   2FE3 C0 05         [24]12837 	push	ar5
   2FE5 12 08 C9      [24]12838 	lcall	_ax5043_init_registers_tx
   2FE8 D0 05         [24]12839 	pop	ar5
   2FEA D0 06         [24]12840 	pop	ar6
   2FEC D0 07         [24]12841 	pop	ar7
                     27BB 12842 	C$easyax5043.c$1957$2$397 ==.
                          12843 ;	../COMMON/easyax5043.c:1957: goto dotx;
                     27BB 12844 	C$easyax5043.c$1959$2$397 ==.
                          12845 ;	../COMMON/easyax5043.c:1959: case AXRADIO_MODE_ASYNC_TRANSMIT:
   2FEE 80 0D         [24]12846 	sjmp	00126$
   2FF0                   12847 00120$:
                     27BD 12848 	C$easyax5043.c$1960$2$397 ==.
                          12849 ;	../COMMON/easyax5043.c:1960: case AXRADIO_MODE_WOR_TRANSMIT:
   2FF0                   12850 00121$:
                     27BD 12851 	C$easyax5043.c$1961$2$397 ==.
                          12852 ;	../COMMON/easyax5043.c:1961: case AXRADIO_MODE_ACK_TRANSMIT:
   2FF0                   12853 00122$:
                     27BD 12854 	C$easyax5043.c$1962$2$397 ==.
                          12855 ;	../COMMON/easyax5043.c:1962: case AXRADIO_MODE_WOR_ACK_TRANSMIT:
   2FF0                   12856 00123$:
                     27BD 12857 	C$easyax5043.c$1963$2$397 ==.
                          12858 ;	../COMMON/easyax5043.c:1963: if (axradio_syncstate != syncstate_off)
   2FF0 90 00 04      [24]12859 	mov	dptr,#_axradio_syncstate
   2FF3 E0            [24]12860 	movx	a,@dptr
   2FF4 FC            [12]12861 	mov	r4,a
   2FF5 60 06         [24]12862 	jz	00126$
                     27C4 12863 	C$easyax5043.c$1964$2$397 ==.
                          12864 ;	../COMMON/easyax5043.c:1964: return AXRADIO_ERR_BUSY;
   2FF7 75 82 02      [24]12865 	mov	dpl,#0x02
   2FFA 02 32 6F      [24]12866 	ljmp	00162$
                     27CA 12867 	C$easyax5043.c$1965$2$397 ==.
                          12868 ;	../COMMON/easyax5043.c:1965: dotx:
   2FFD                   12869 00126$:
                     27CA 12870 	C$easyax5043.c$1966$2$397 ==.
                          12871 ;	../COMMON/easyax5043.c:1966: axradio_ack_count = axradio_framing_ack_retransmissions;
   2FFD 90 52 B0      [24]12872 	mov	dptr,#_axradio_framing_ack_retransmissions
   3000 E4            [12]12873 	clr	a
   3001 93            [24]12874 	movc	a,@a+dptr
   3002 90 00 0E      [24]12875 	mov	dptr,#_axradio_ack_count
   3005 F0            [24]12876 	movx	@dptr,a
                     27D3 12877 	C$easyax5043.c$1967$2$397 ==.
                          12878 ;	../COMMON/easyax5043.c:1967: ++axradio_ack_seqnr;
   3006 90 00 0F      [24]12879 	mov	dptr,#_axradio_ack_seqnr
   3009 E0            [24]12880 	movx	a,@dptr
   300A 24 01         [12]12881 	add	a,#0x01
   300C F0            [24]12882 	movx	@dptr,a
                     27DA 12883 	C$easyax5043.c$1968$2$397 ==.
                          12884 ;	../COMMON/easyax5043.c:1968: axradio_txbuffer_len = pktlen + axradio_framing_maclen;
   300D 90 52 99      [24]12885 	mov	dptr,#_axradio_framing_maclen
   3010 E4            [12]12886 	clr	a
   3011 93            [24]12887 	movc	a,@a+dptr
   3012 FC            [12]12888 	mov	r4,a
   3013 7B 00         [12]12889 	mov	r3,#0x00
   3015 25 0F         [12]12890 	add	a,_axradio_transmit_PARM_3
   3017 FA            [12]12891 	mov	r2,a
   3018 EB            [12]12892 	mov	a,r3
   3019 35 10         [12]12893 	addc	a,(_axradio_transmit_PARM_3 + 1)
   301B FB            [12]12894 	mov	r3,a
   301C 90 00 05      [24]12895 	mov	dptr,#_axradio_txbuffer_len
   301F EA            [12]12896 	mov	a,r2
   3020 F0            [24]12897 	movx	@dptr,a
   3021 EB            [12]12898 	mov	a,r3
   3022 A3            [24]12899 	inc	dptr
   3023 F0            [24]12900 	movx	@dptr,a
                     27F1 12901 	C$easyax5043.c$1969$2$397 ==.
                          12902 ;	../COMMON/easyax5043.c:1969: if (axradio_txbuffer_len > sizeof(axradio_txbuffer))
   3024 C3            [12]12903 	clr	c
   3025 74 04         [12]12904 	mov	a,#0x04
   3027 9A            [12]12905 	subb	a,r2
   3028 74 01         [12]12906 	mov	a,#0x01
   302A 9B            [12]12907 	subb	a,r3
   302B 50 06         [24]12908 	jnc	00128$
                     27FA 12909 	C$easyax5043.c$1970$2$397 ==.
                          12910 ;	../COMMON/easyax5043.c:1970: return AXRADIO_ERR_INVALID;
   302D 75 82 04      [24]12911 	mov	dpl,#0x04
   3030 02 32 6F      [24]12912 	ljmp	00162$
   3033                   12913 00128$:
                     2800 12914 	C$easyax5043.c$1971$2$397 ==.
                          12915 ;	../COMMON/easyax5043.c:1971: memset_xdata(axradio_txbuffer, 0, axradio_framing_maclen);
   3033 8C 28         [24]12916 	mov	_memset_PARM_3,r4
   3035 75 29 00      [24]12917 	mov	(_memset_PARM_3 + 1),#0x00
   3038 75 27 00      [24]12918 	mov	_memset_PARM_2,#0x00
   303B 90 00 2A      [24]12919 	mov	dptr,#_axradio_txbuffer
   303E 75 F0 00      [24]12920 	mov	b,#0x00
   3041 C0 07         [24]12921 	push	ar7
   3043 C0 06         [24]12922 	push	ar6
   3045 C0 05         [24]12923 	push	ar5
   3047 12 42 C3      [24]12924 	lcall	_memset
                     2817 12925 	C$easyax5043.c$1972$2$397 ==.
                          12926 ;	../COMMON/easyax5043.c:1972: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_maclen], pkt, pktlen);
   304A 90 52 99      [24]12927 	mov	dptr,#_axradio_framing_maclen
   304D E4            [12]12928 	clr	a
   304E 93            [24]12929 	movc	a,@a+dptr
   304F 24 2A         [12]12930 	add	a,#_axradio_txbuffer
   3051 FC            [12]12931 	mov	r4,a
   3052 E4            [12]12932 	clr	a
   3053 34 00         [12]12933 	addc	a,#(_axradio_txbuffer >> 8)
   3055 FB            [12]12934 	mov	r3,a
   3056 7A 00         [12]12935 	mov	r2,#0x00
   3058 85 0C 27      [24]12936 	mov	_memcpy_PARM_2,_axradio_transmit_PARM_2
   305B 85 0D 28      [24]12937 	mov	(_memcpy_PARM_2 + 1),(_axradio_transmit_PARM_2 + 1)
   305E 85 0E 29      [24]12938 	mov	(_memcpy_PARM_2 + 2),(_axradio_transmit_PARM_2 + 2)
   3061 85 0F 2A      [24]12939 	mov	_memcpy_PARM_3,_axradio_transmit_PARM_3
   3064 85 10 2B      [24]12940 	mov	(_memcpy_PARM_3 + 1),(_axradio_transmit_PARM_3 + 1)
   3067 8C 82         [24]12941 	mov	dpl,r4
   3069 8B 83         [24]12942 	mov	dph,r3
   306B 8A F0         [24]12943 	mov	b,r2
   306D 12 42 E2      [24]12944 	lcall	_memcpy
   3070 D0 05         [24]12945 	pop	ar5
   3072 D0 06         [24]12946 	pop	ar6
   3074 D0 07         [24]12947 	pop	ar7
                     2843 12948 	C$easyax5043.c$1973$2$397 ==.
                          12949 ;	../COMMON/easyax5043.c:1973: if (axradio_framing_ack_seqnrpos != 0xff)
   3076 90 52 B1      [24]12950 	mov	dptr,#_axradio_framing_ack_seqnrpos
   3079 E4            [12]12951 	clr	a
   307A 93            [24]12952 	movc	a,@a+dptr
   307B FC            [12]12953 	mov	r4,a
   307C BC FF 02      [24]12954 	cjne	r4,#0xFF,00256$
   307F 80 12         [24]12955 	sjmp	00130$
   3081                   12956 00256$:
                     284E 12957 	C$easyax5043.c$1974$2$397 ==.
                          12958 ;	../COMMON/easyax5043.c:1974: axradio_txbuffer[axradio_framing_ack_seqnrpos] = axradio_ack_seqnr;
   3081 EC            [12]12959 	mov	a,r4
   3082 24 2A         [12]12960 	add	a,#_axradio_txbuffer
   3084 FC            [12]12961 	mov	r4,a
   3085 E4            [12]12962 	clr	a
   3086 34 00         [12]12963 	addc	a,#(_axradio_txbuffer >> 8)
   3088 FB            [12]12964 	mov	r3,a
   3089 90 00 0F      [24]12965 	mov	dptr,#_axradio_ack_seqnr
   308C E0            [24]12966 	movx	a,@dptr
   308D FA            [12]12967 	mov	r2,a
   308E 8C 82         [24]12968 	mov	dpl,r4
   3090 8B 83         [24]12969 	mov	dph,r3
   3092 F0            [24]12970 	movx	@dptr,a
   3093                   12971 00130$:
                     2860 12972 	C$easyax5043.c$1975$2$397 ==.
                          12973 ;	../COMMON/easyax5043.c:1975: if (axradio_framing_destaddrpos != 0xff)
   3093 90 52 9B      [24]12974 	mov	dptr,#_axradio_framing_destaddrpos
   3096 E4            [12]12975 	clr	a
   3097 93            [24]12976 	movc	a,@a+dptr
   3098 FC            [12]12977 	mov	r4,a
   3099 BC FF 02      [24]12978 	cjne	r4,#0xFF,00257$
   309C 80 24         [24]12979 	sjmp	00132$
   309E                   12980 00257$:
                     286B 12981 	C$easyax5043.c$1976$2$397 ==.
                          12982 ;	../COMMON/easyax5043.c:1976: memcpy_xdatageneric(&axradio_txbuffer[axradio_framing_destaddrpos], &addr->addr, axradio_framing_addrlen);
   309E EC            [12]12983 	mov	a,r4
   309F 24 2A         [12]12984 	add	a,#_axradio_txbuffer
   30A1 FC            [12]12985 	mov	r4,a
   30A2 E4            [12]12986 	clr	a
   30A3 34 00         [12]12987 	addc	a,#(_axradio_txbuffer >> 8)
   30A5 FB            [12]12988 	mov	r3,a
   30A6 7A 00         [12]12989 	mov	r2,#0x00
   30A8 8D 27         [24]12990 	mov	_memcpy_PARM_2,r5
   30AA 8E 28         [24]12991 	mov	(_memcpy_PARM_2 + 1),r6
   30AC 8F 29         [24]12992 	mov	(_memcpy_PARM_2 + 2),r7
   30AE 90 52 9A      [24]12993 	mov	dptr,#_axradio_framing_addrlen
   30B1 E4            [12]12994 	clr	a
   30B2 93            [24]12995 	movc	a,@a+dptr
   30B3 FF            [12]12996 	mov	r7,a
   30B4 8F 2A         [24]12997 	mov	_memcpy_PARM_3,r7
   30B6 75 2B 00      [24]12998 	mov	(_memcpy_PARM_3 + 1),#0x00
   30B9 8C 82         [24]12999 	mov	dpl,r4
   30BB 8B 83         [24]13000 	mov	dph,r3
   30BD 8A F0         [24]13001 	mov	b,r2
   30BF 12 42 E2      [24]13002 	lcall	_memcpy
   30C2                   13003 00132$:
                     288F 13004 	C$easyax5043.c$1977$2$397 ==.
                          13005 ;	../COMMON/easyax5043.c:1977: if (axradio_framing_sourceaddrpos != 0xff)
   30C2 90 52 9C      [24]13006 	mov	dptr,#_axradio_framing_sourceaddrpos
   30C5 E4            [12]13007 	clr	a
   30C6 93            [24]13008 	movc	a,@a+dptr
   30C7 FF            [12]13009 	mov	r7,a
   30C8 BF FF 02      [24]13010 	cjne	r7,#0xFF,00258$
   30CB 80 27         [24]13011 	sjmp	00134$
   30CD                   13012 00258$:
                     289A 13013 	C$easyax5043.c$1978$2$397 ==.
                          13014 ;	../COMMON/easyax5043.c:1978: memcpy_xdata(&axradio_txbuffer[axradio_framing_sourceaddrpos], &axradio_localaddr.addr, axradio_framing_addrlen);
   30CD EF            [12]13015 	mov	a,r7
   30CE 24 2A         [12]13016 	add	a,#_axradio_txbuffer
   30D0 FF            [12]13017 	mov	r7,a
   30D1 E4            [12]13018 	clr	a
   30D2 34 00         [12]13019 	addc	a,#(_axradio_txbuffer >> 8)
   30D4 FE            [12]13020 	mov	r6,a
   30D5 7D 00         [12]13021 	mov	r5,#0x00
   30D7 75 27 1E      [24]13022 	mov	_memcpy_PARM_2,#_axradio_localaddr
   30DA 75 28 00      [24]13023 	mov	(_memcpy_PARM_2 + 1),#(_axradio_localaddr >> 8)
   30DD 75 29 00      [24]13024 	mov	(_memcpy_PARM_2 + 2),#0x00
   30E0 90 52 9A      [24]13025 	mov	dptr,#_axradio_framing_addrlen
   30E3 E4            [12]13026 	clr	a
   30E4 93            [24]13027 	movc	a,@a+dptr
   30E5 FC            [12]13028 	mov	r4,a
   30E6 8C 2A         [24]13029 	mov	_memcpy_PARM_3,r4
   30E8 75 2B 00      [24]13030 	mov	(_memcpy_PARM_3 + 1),#0x00
   30EB 8F 82         [24]13031 	mov	dpl,r7
   30ED 8E 83         [24]13032 	mov	dph,r6
   30EF 8D F0         [24]13033 	mov	b,r5
   30F1 12 42 E2      [24]13034 	lcall	_memcpy
   30F4                   13035 00134$:
                     28C1 13036 	C$easyax5043.c$1979$2$397 ==.
                          13037 ;	../COMMON/easyax5043.c:1979: if (axradio_framing_lenmask) {
   30F4 90 52 9F      [24]13038 	mov	dptr,#_axradio_framing_lenmask
   30F7 E4            [12]13039 	clr	a
   30F8 93            [24]13040 	movc	a,@a+dptr
   30F9 FF            [12]13041 	mov	r7,a
   30FA 60 30         [24]13042 	jz	00136$
                     28C9 13043 	C$easyax5043.c$1980$3$402 ==.
                          13044 ;	../COMMON/easyax5043.c:1980: uint8_t __autodata len_byte = (uint8_t)(axradio_txbuffer_len - axradio_framing_lenoffs) & axradio_framing_lenmask; // if you prefer not counting the len byte itself, set LENOFFS = 1
   30FC 90 00 05      [24]13045 	mov	dptr,#_axradio_txbuffer_len
   30FF E0            [24]13046 	movx	a,@dptr
   3100 FD            [12]13047 	mov	r5,a
   3101 A3            [24]13048 	inc	dptr
   3102 E0            [24]13049 	movx	a,@dptr
   3103 90 52 9E      [24]13050 	mov	dptr,#_axradio_framing_lenoffs
   3106 E4            [12]13051 	clr	a
   3107 93            [24]13052 	movc	a,@a+dptr
   3108 FE            [12]13053 	mov	r6,a
   3109 ED            [12]13054 	mov	a,r5
   310A C3            [12]13055 	clr	c
   310B 9E            [12]13056 	subb	a,r6
   310C 5F            [12]13057 	anl	a,r7
   310D FE            [12]13058 	mov	r6,a
                     28DB 13059 	C$easyax5043.c$1981$3$402 ==.
                          13060 ;	../COMMON/easyax5043.c:1981: axradio_txbuffer[axradio_framing_lenpos] = (axradio_txbuffer[axradio_framing_lenpos] & (uint8_t)~axradio_framing_lenmask) | len_byte;
   310E 90 52 9D      [24]13061 	mov	dptr,#_axradio_framing_lenpos
   3111 E4            [12]13062 	clr	a
   3112 93            [24]13063 	movc	a,@a+dptr
   3113 24 2A         [12]13064 	add	a,#_axradio_txbuffer
   3115 FD            [12]13065 	mov	r5,a
   3116 E4            [12]13066 	clr	a
   3117 34 00         [12]13067 	addc	a,#(_axradio_txbuffer >> 8)
   3119 FC            [12]13068 	mov	r4,a
   311A 8D 82         [24]13069 	mov	dpl,r5
   311C 8C 83         [24]13070 	mov	dph,r4
   311E E0            [24]13071 	movx	a,@dptr
   311F FB            [12]13072 	mov	r3,a
   3120 EF            [12]13073 	mov	a,r7
   3121 F4            [12]13074 	cpl	a
   3122 FF            [12]13075 	mov	r7,a
   3123 5B            [12]13076 	anl	a,r3
   3124 42 06         [12]13077 	orl	ar6,a
   3126 8D 82         [24]13078 	mov	dpl,r5
   3128 8C 83         [24]13079 	mov	dph,r4
   312A EE            [12]13080 	mov	a,r6
   312B F0            [24]13081 	movx	@dptr,a
   312C                   13082 00136$:
                     28F9 13083 	C$easyax5043.c$1983$2$397 ==.
                          13084 ;	../COMMON/easyax5043.c:1983: if (axradio_framing_swcrclen) {
   312C 90 52 A0      [24]13085 	mov	dptr,#_axradio_framing_swcrclen
   312F E4            [12]13086 	clr	a
   3130 93            [24]13087 	movc	a,@a+dptr
   3131 FF            [12]13088 	mov	r7,a
   3132 60 2E         [24]13089 	jz	00138$
                     2901 13090 	C$easyax5043.c$1984$3$403 ==.
                          13091 ;	../COMMON/easyax5043.c:1984: axradio_framing_append_crc(axradio_txbuffer, axradio_txbuffer_len);
   3134 90 00 05      [24]13092 	mov	dptr,#_axradio_txbuffer_len
   3137 E0            [24]13093 	movx	a,@dptr
   3138 C0 E0         [24]13094 	push	acc
   313A A3            [24]13095 	inc	dptr
   313B E0            [24]13096 	movx	a,@dptr
   313C C0 E0         [24]13097 	push	acc
   313E 90 00 2A      [24]13098 	mov	dptr,#_axradio_txbuffer
   3141 12 06 68      [24]13099 	lcall	_axradio_framing_append_crc
   3144 15 81         [12]13100 	dec	sp
   3146 15 81         [12]13101 	dec	sp
                     2915 13102 	C$easyax5043.c$1985$3$403 ==.
                          13103 ;	../COMMON/easyax5043.c:1985: axradio_txbuffer_len += axradio_framing_swcrclen;
   3148 90 52 A0      [24]13104 	mov	dptr,#_axradio_framing_swcrclen
   314B E4            [12]13105 	clr	a
   314C 93            [24]13106 	movc	a,@a+dptr
   314D FF            [12]13107 	mov	r7,a
   314E 7E 00         [12]13108 	mov	r6,#0x00
   3150 90 00 05      [24]13109 	mov	dptr,#_axradio_txbuffer_len
   3153 E0            [24]13110 	movx	a,@dptr
   3154 FC            [12]13111 	mov	r4,a
   3155 A3            [24]13112 	inc	dptr
   3156 E0            [24]13113 	movx	a,@dptr
   3157 FD            [12]13114 	mov	r5,a
   3158 90 00 05      [24]13115 	mov	dptr,#_axradio_txbuffer_len
   315B EF            [12]13116 	mov	a,r7
   315C 2C            [12]13117 	add	a,r4
   315D F0            [24]13118 	movx	@dptr,a
   315E EE            [12]13119 	mov	a,r6
   315F 3D            [12]13120 	addc	a,r5
   3160 A3            [24]13121 	inc	dptr
   3161 F0            [24]13122 	movx	@dptr,a
   3162                   13123 00138$:
                     292F 13124 	C$easyax5043.c$1987$2$397 ==.
                          13125 ;	../COMMON/easyax5043.c:1987: if (axradio_phy_pn9)
   3162 90 52 78      [24]13126 	mov	dptr,#_axradio_phy_pn9
   3165 E4            [12]13127 	clr	a
   3166 93            [24]13128 	movc	a,@a+dptr
   3167 FF            [12]13129 	mov	r7,a
   3168 60 2F         [24]13130 	jz	00140$
                     2937 13131 	C$easyax5043.c$1988$2$397 ==.
                          13132 ;	../COMMON/easyax5043.c:1988: pn9_buffer(axradio_txbuffer, axradio_txbuffer_len, 0x1ff, -(AX5043_ENCODING & 0x01));
   316A 90 40 11      [24]13133 	mov	dptr,#_AX5043_ENCODING
   316D E0            [24]13134 	movx	a,@dptr
   316E FF            [12]13135 	mov	r7,a
   316F 53 07 01      [24]13136 	anl	ar7,#0x01
   3172 C3            [12]13137 	clr	c
   3173 E4            [12]13138 	clr	a
   3174 9F            [12]13139 	subb	a,r7
   3175 FF            [12]13140 	mov	r7,a
   3176 C0 07         [24]13141 	push	ar7
   3178 74 FF         [12]13142 	mov	a,#0xFF
   317A C0 E0         [24]13143 	push	acc
   317C 74 01         [12]13144 	mov	a,#0x01
   317E C0 E0         [24]13145 	push	acc
   3180 90 00 05      [24]13146 	mov	dptr,#_axradio_txbuffer_len
   3183 E0            [24]13147 	movx	a,@dptr
   3184 C0 E0         [24]13148 	push	acc
   3186 A3            [24]13149 	inc	dptr
   3187 E0            [24]13150 	movx	a,@dptr
   3188 C0 E0         [24]13151 	push	acc
   318A 90 00 2A      [24]13152 	mov	dptr,#_axradio_txbuffer
   318D 75 F0 00      [24]13153 	mov	b,#0x00
   3190 12 44 B7      [24]13154 	lcall	_pn9_buffer
   3193 E5 81         [12]13155 	mov	a,sp
   3195 24 FB         [12]13156 	add	a,#0xfb
   3197 F5 81         [12]13157 	mov	sp,a
   3199                   13158 00140$:
                     2966 13159 	C$easyax5043.c$1989$2$397 ==.
                          13160 ;	../COMMON/easyax5043.c:1989: if (axradio_mode == AXRADIO_MODE_SYNC_MASTER ||
   3199 74 20         [12]13161 	mov	a,#0x20
   319B B5 0A 02      [24]13162 	cjne	a,_axradio_mode,00262$
   319E 80 05         [24]13163 	sjmp	00141$
   31A0                   13164 00262$:
                     296D 13165 	C$easyax5043.c$1990$2$397 ==.
                          13166 ;	../COMMON/easyax5043.c:1990: axradio_mode == AXRADIO_MODE_SYNC_ACK_MASTER)
   31A0 74 21         [12]13167 	mov	a,#0x21
   31A2 B5 0A 06      [24]13168 	cjne	a,_axradio_mode,00142$
   31A5                   13169 00141$:
                     2972 13170 	C$easyax5043.c$1991$2$397 ==.
                          13171 ;	../COMMON/easyax5043.c:1991: return AXRADIO_ERR_NOERROR;
   31A5 75 82 00      [24]13172 	mov	dpl,#0x00
   31A8 02 32 6F      [24]13173 	ljmp	00162$
   31AB                   13174 00142$:
                     2978 13175 	C$easyax5043.c$1992$2$397 ==.
                          13176 ;	../COMMON/easyax5043.c:1992: if (axradio_mode == AXRADIO_MODE_WOR_TRANSMIT ||
   31AB 74 11         [12]13177 	mov	a,#0x11
   31AD B5 0A 02      [24]13178 	cjne	a,_axradio_mode,00265$
   31B0 80 05         [24]13179 	sjmp	00144$
   31B2                   13180 00265$:
                     297F 13181 	C$easyax5043.c$1993$2$397 ==.
                          13182 ;	../COMMON/easyax5043.c:1993: axradio_mode == AXRADIO_MODE_WOR_ACK_TRANSMIT)
   31B2 74 13         [12]13183 	mov	a,#0x13
   31B4 B5 0A 14      [24]13184 	cjne	a,_axradio_mode,00145$
   31B7                   13185 00144$:
                     2984 13186 	C$easyax5043.c$1994$2$397 ==.
                          13187 ;	../COMMON/easyax5043.c:1994: axradio_txbuffer_cnt = axradio_phy_preamble_wor_longlen;
   31B7 90 52 8D      [24]13188 	mov	dptr,#_axradio_phy_preamble_wor_longlen
   31BA E4            [12]13189 	clr	a
   31BB 93            [24]13190 	movc	a,@a+dptr
   31BC FE            [12]13191 	mov	r6,a
   31BD 74 01         [12]13192 	mov	a,#0x01
   31BF 93            [24]13193 	movc	a,@a+dptr
   31C0 FF            [12]13194 	mov	r7,a
   31C1 90 00 07      [24]13195 	mov	dptr,#_axradio_txbuffer_cnt
   31C4 EE            [12]13196 	mov	a,r6
   31C5 F0            [24]13197 	movx	@dptr,a
   31C6 EF            [12]13198 	mov	a,r7
   31C7 A3            [24]13199 	inc	dptr
   31C8 F0            [24]13200 	movx	@dptr,a
   31C9 80 12         [24]13201 	sjmp	00146$
   31CB                   13202 00145$:
                     2998 13203 	C$easyax5043.c$1996$2$397 ==.
                          13204 ;	../COMMON/easyax5043.c:1996: axradio_txbuffer_cnt = axradio_phy_preamble_longlen;
   31CB 90 52 91      [24]13205 	mov	dptr,#_axradio_phy_preamble_longlen
   31CE E4            [12]13206 	clr	a
   31CF 93            [24]13207 	movc	a,@a+dptr
   31D0 FE            [12]13208 	mov	r6,a
   31D1 74 01         [12]13209 	mov	a,#0x01
   31D3 93            [24]13210 	movc	a,@a+dptr
   31D4 FF            [12]13211 	mov	r7,a
   31D5 90 00 07      [24]13212 	mov	dptr,#_axradio_txbuffer_cnt
   31D8 EE            [12]13213 	mov	a,r6
   31D9 F0            [24]13214 	movx	@dptr,a
   31DA EF            [12]13215 	mov	a,r7
   31DB A3            [24]13216 	inc	dptr
   31DC F0            [24]13217 	movx	@dptr,a
   31DD                   13218 00146$:
                     29AA 13219 	C$easyax5043.c$1997$2$397 ==.
                          13220 ;	../COMMON/easyax5043.c:1997: if (axradio_phy_lbt_retries) {
   31DD 90 52 89      [24]13221 	mov	dptr,#_axradio_phy_lbt_retries
   31E0 E4            [12]13222 	clr	a
   31E1 93            [24]13223 	movc	a,@a+dptr
   31E2 FF            [12]13224 	mov	r7,a
   31E3 60 79         [24]13225 	jz	00159$
                     29B2 13226 	C$easyax5043.c$1998$3$404 ==.
                          13227 ;	../COMMON/easyax5043.c:1998: switch (axradio_mode) {
   31E5 AF 0A         [24]13228 	mov	r7,_axradio_mode
   31E7 BF 10 02      [24]13229 	cjne	r7,#0x10,00269$
   31EA 80 21         [24]13230 	sjmp	00155$
   31EC                   13231 00269$:
   31EC BF 11 02      [24]13232 	cjne	r7,#0x11,00270$
   31EF 80 1C         [24]13233 	sjmp	00155$
   31F1                   13234 00270$:
   31F1 BF 12 02      [24]13235 	cjne	r7,#0x12,00271$
   31F4 80 17         [24]13236 	sjmp	00155$
   31F6                   13237 00271$:
   31F6 BF 13 02      [24]13238 	cjne	r7,#0x13,00272$
   31F9 80 12         [24]13239 	sjmp	00155$
   31FB                   13240 00272$:
   31FB BF 18 02      [24]13241 	cjne	r7,#0x18,00273$
   31FE 80 0D         [24]13242 	sjmp	00155$
   3200                   13243 00273$:
   3200 BF 19 02      [24]13244 	cjne	r7,#0x19,00274$
   3203 80 08         [24]13245 	sjmp	00155$
   3205                   13246 00274$:
   3205 BF 1A 02      [24]13247 	cjne	r7,#0x1A,00275$
   3208 80 03         [24]13248 	sjmp	00155$
   320A                   13249 00275$:
   320A BF 1B 51      [24]13250 	cjne	r7,#0x1B,00159$
                     29DA 13251 	C$easyax5043.c$2006$4$405 ==.
                          13252 ;	../COMMON/easyax5043.c:2006: case AXRADIO_MODE_ACK_RECEIVE:
   320D                   13253 00155$:
                     29DA 13254 	C$easyax5043.c$2007$4$405 ==.
                          13255 ;	../COMMON/easyax5043.c:2007: ax5043_off_xtal();
   320D 12 14 86      [24]13256 	lcall	_ax5043_off_xtal
                     29DD 13257 	C$easyax5043.c$2008$4$405 ==.
                          13258 ;	../COMMON/easyax5043.c:2008: ax5043_init_registers_rx();
   3210 12 08 FF      [24]13259 	lcall	_ax5043_init_registers_rx
                     29E0 13260 	C$easyax5043.c$2009$4$405 ==.
                          13261 ;	../COMMON/easyax5043.c:2009: AX5043_RSSIREFERENCE = axradio_phy_rssireference;
   3213 90 52 84      [24]13262 	mov	dptr,#_axradio_phy_rssireference
   3216 E4            [12]13263 	clr	a
   3217 93            [24]13264 	movc	a,@a+dptr
   3218 90 42 2C      [24]13265 	mov	dptr,#_AX5043_RSSIREFERENCE
   321B F0            [24]13266 	movx	@dptr,a
                     29E9 13267 	C$easyax5043.c$2010$4$405 ==.
                          13268 ;	../COMMON/easyax5043.c:2010: AX5043_PWRMODE = AX5043_PWRSTATE_FULL_RX;
   321C 90 40 02      [24]13269 	mov	dptr,#_AX5043_PWRMODE
   321F 74 09         [12]13270 	mov	a,#0x09
   3221 F0            [24]13271 	movx	@dptr,a
                     29EF 13272 	C$easyax5043.c$2011$4$405 ==.
                          13273 ;	../COMMON/easyax5043.c:2011: axradio_ack_count = axradio_phy_lbt_retries;
   3222 90 52 89      [24]13274 	mov	dptr,#_axradio_phy_lbt_retries
   3225 E4            [12]13275 	clr	a
   3226 93            [24]13276 	movc	a,@a+dptr
   3227 90 00 0E      [24]13277 	mov	dptr,#_axradio_ack_count
   322A F0            [24]13278 	movx	@dptr,a
                     29F8 13279 	C$easyax5043.c$2012$4$405 ==.
                          13280 ;	../COMMON/easyax5043.c:2012: axradio_syncstate = syncstate_lbt;
   322B 90 00 04      [24]13281 	mov	dptr,#_axradio_syncstate
   322E 74 01         [12]13282 	mov	a,#0x01
   3230 F0            [24]13283 	movx	@dptr,a
                     29FE 13284 	C$easyax5043.c$2013$4$405 ==.
                          13285 ;	../COMMON/easyax5043.c:2013: wtimer_remove(&axradio_timer);
   3231 90 02 89      [24]13286 	mov	dptr,#_axradio_timer
   3234 12 4C D4      [24]13287 	lcall	_wtimer_remove
                     2A04 13288 	C$easyax5043.c$2014$4$405 ==.
                          13289 ;	../COMMON/easyax5043.c:2014: axradio_timer.time = axradio_phy_cs_period;
   3237 90 52 86      [24]13290 	mov	dptr,#_axradio_phy_cs_period
   323A E4            [12]13291 	clr	a
   323B 93            [24]13292 	movc	a,@a+dptr
   323C FE            [12]13293 	mov	r6,a
   323D 74 01         [12]13294 	mov	a,#0x01
   323F 93            [24]13295 	movc	a,@a+dptr
   3240 FF            [12]13296 	mov	r7,a
   3241 7D 00         [12]13297 	mov	r5,#0x00
   3243 7C 00         [12]13298 	mov	r4,#0x00
   3245 90 02 8D      [24]13299 	mov	dptr,#(_axradio_timer + 0x0004)
   3248 EE            [12]13300 	mov	a,r6
   3249 F0            [24]13301 	movx	@dptr,a
   324A EF            [12]13302 	mov	a,r7
   324B A3            [24]13303 	inc	dptr
   324C F0            [24]13304 	movx	@dptr,a
   324D ED            [12]13305 	mov	a,r5
   324E A3            [24]13306 	inc	dptr
   324F F0            [24]13307 	movx	@dptr,a
   3250 EC            [12]13308 	mov	a,r4
   3251 A3            [24]13309 	inc	dptr
   3252 F0            [24]13310 	movx	@dptr,a
                     2A20 13311 	C$easyax5043.c$2015$4$405 ==.
                          13312 ;	../COMMON/easyax5043.c:2015: wtimer0_addrelative(&axradio_timer);
   3253 90 02 89      [24]13313 	mov	dptr,#_axradio_timer
   3256 12 43 51      [24]13314 	lcall	_wtimer0_addrelative
                     2A26 13315 	C$easyax5043.c$2016$4$405 ==.
                          13316 ;	../COMMON/easyax5043.c:2016: return AXRADIO_ERR_NOERROR;
   3259 75 82 00      [24]13317 	mov	dpl,#0x00
                     2A29 13318 	C$easyax5043.c$2020$2$397 ==.
                          13319 ;	../COMMON/easyax5043.c:2020: }
   325C 80 11         [24]13320 	sjmp	00162$
   325E                   13321 00159$:
                     2A2B 13322 	C$easyax5043.c$2022$2$397 ==.
                          13323 ;	../COMMON/easyax5043.c:2022: axradio_syncstate = syncstate_asynctx;
   325E 90 00 04      [24]13324 	mov	dptr,#_axradio_syncstate
   3261 74 02         [12]13325 	mov	a,#0x02
   3263 F0            [24]13326 	movx	@dptr,a
                     2A31 13327 	C$easyax5043.c$2023$2$397 ==.
                          13328 ;	../COMMON/easyax5043.c:2023: ax5043_prepare_tx();
   3264 12 14 57      [24]13329 	lcall	_ax5043_prepare_tx
                     2A34 13330 	C$easyax5043.c$2024$2$397 ==.
                          13331 ;	../COMMON/easyax5043.c:2024: return AXRADIO_ERR_NOERROR;
   3267 75 82 00      [24]13332 	mov	dpl,#0x00
                     2A37 13333 	C$easyax5043.c$2026$2$397 ==.
                          13334 ;	../COMMON/easyax5043.c:2026: default:
   326A 80 03         [24]13335 	sjmp	00162$
   326C                   13336 00160$:
                     2A39 13337 	C$easyax5043.c$2027$2$397 ==.
                          13338 ;	../COMMON/easyax5043.c:2027: return AXRADIO_ERR_NOTSUPPORTED;
   326C 75 82 01      [24]13339 	mov	dpl,#0x01
                     2A3C 13340 	C$easyax5043.c$2028$1$396 ==.
                          13341 ;	../COMMON/easyax5043.c:2028: }
   326F                   13342 00162$:
                     2A3C 13343 	C$easyax5043.c$2029$1$396 ==.
                     2A3C 13344 	XG$axradio_transmit$0$0 ==.
   326F 22            [24]13345 	ret
                          13346 ;------------------------------------------------------------
                          13347 ;Allocation info for local variables in function 'axradio_set_paramsets'
                          13348 ;------------------------------------------------------------
                          13349 ;val                       Allocated to registers r7 
                          13350 ;------------------------------------------------------------
                     2A3D 13351 	Feasyax5043$axradio_set_paramsets$0$0 ==.
                     2A3D 13352 	C$easyax5043.c$2031$1$396 ==.
                          13353 ;	../COMMON/easyax5043.c:2031: static __reentrantb uint8_t axradio_set_paramsets(uint8_t val) __reentrant
                          13354 ;	-----------------------------------------
                          13355 ;	 function axradio_set_paramsets
                          13356 ;	-----------------------------------------
   3270                   13357 _axradio_set_paramsets:
   3270 AF 82         [24]13358 	mov	r7,dpl
                     2A3F 13359 	C$easyax5043.c$2033$1$407 ==.
                          13360 ;	../COMMON/easyax5043.c:2033: if (axradio_mode != AXRADIO_MODE_STREAM_RECEIVE &&
   3272 74 1C         [12]13361 	mov	a,#0x1C
   3274 B5 0A 02      [24]13362 	cjne	a,_axradio_mode,00116$
   3277 80 13         [24]13363 	sjmp	00102$
   3279                   13364 00116$:
                     2A46 13365 	C$easyax5043.c$2034$1$407 ==.
                          13366 ;	../COMMON/easyax5043.c:2034: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_UNENC &&
   3279 74 1D         [12]13367 	mov	a,#0x1D
   327B B5 0A 02      [24]13368 	cjne	a,_axradio_mode,00117$
   327E 80 0C         [24]13369 	sjmp	00102$
   3280                   13370 00117$:
                     2A4D 13371 	C$easyax5043.c$2035$1$407 ==.
                          13372 ;	../COMMON/easyax5043.c:2035: axradio_mode != AXRADIO_MODE_STREAM_RECEIVE_SCRAM)
   3280 74 1E         [12]13373 	mov	a,#0x1E
   3282 B5 0A 02      [24]13374 	cjne	a,_axradio_mode,00118$
   3285 80 05         [24]13375 	sjmp	00102$
   3287                   13376 00118$:
                     2A54 13377 	C$easyax5043.c$2036$1$407 ==.
                          13378 ;	../COMMON/easyax5043.c:2036: return AXRADIO_ERR_NOTSUPPORTED;
   3287 75 82 01      [24]13379 	mov	dpl,#0x01
   328A 80 08         [24]13380 	sjmp	00105$
   328C                   13381 00102$:
                     2A59 13382 	C$easyax5043.c$2037$1$407 ==.
                          13383 ;	../COMMON/easyax5043.c:2037: AX5043_RXPARAMSETS = val;
   328C 90 41 17      [24]13384 	mov	dptr,#_AX5043_RXPARAMSETS
   328F EF            [12]13385 	mov	a,r7
   3290 F0            [24]13386 	movx	@dptr,a
                     2A5E 13387 	C$easyax5043.c$2038$1$407 ==.
                          13388 ;	../COMMON/easyax5043.c:2038: return AXRADIO_ERR_NOERROR;
   3291 75 82 00      [24]13389 	mov	dpl,#0x00
   3294                   13390 00105$:
                     2A61 13391 	C$easyax5043.c$2039$1$407 ==.
                     2A61 13392 	XFeasyax5043$axradio_set_paramsets$0$0 ==.
   3294 22            [24]13393 	ret
                          13394 ;------------------------------------------------------------
                          13395 ;Allocation info for local variables in function 'axradio_agc_freeze'
                          13396 ;------------------------------------------------------------
                     2A62 13397 	G$axradio_agc_freeze$0$0 ==.
                     2A62 13398 	C$easyax5043.c$2041$1$407 ==.
                          13399 ;	../COMMON/easyax5043.c:2041: uint8_t axradio_agc_freeze(void)
                          13400 ;	-----------------------------------------
                          13401 ;	 function axradio_agc_freeze
                          13402 ;	-----------------------------------------
   3295                   13403 _axradio_agc_freeze:
                     2A62 13404 	C$easyax5043.c$2043$1$409 ==.
                          13405 ;	../COMMON/easyax5043.c:2043: return axradio_set_paramsets(0xff);
   3295 75 82 FF      [24]13406 	mov	dpl,#0xFF
   3298 12 32 70      [24]13407 	lcall	_axradio_set_paramsets
                     2A68 13408 	C$easyax5043.c$2044$1$409 ==.
                     2A68 13409 	XG$axradio_agc_freeze$0$0 ==.
   329B 22            [24]13410 	ret
                          13411 ;------------------------------------------------------------
                          13412 ;Allocation info for local variables in function 'axradio_agc_thaw'
                          13413 ;------------------------------------------------------------
                     2A69 13414 	G$axradio_agc_thaw$0$0 ==.
                     2A69 13415 	C$easyax5043.c$2046$1$409 ==.
                          13416 ;	../COMMON/easyax5043.c:2046: uint8_t axradio_agc_thaw(void)
                          13417 ;	-----------------------------------------
                          13418 ;	 function axradio_agc_thaw
                          13419 ;	-----------------------------------------
   329C                   13420 _axradio_agc_thaw:
                     2A69 13421 	C$easyax5043.c$2048$1$411 ==.
                          13422 ;	../COMMON/easyax5043.c:2048: return axradio_set_paramsets(0x00);
   329C 75 82 00      [24]13423 	mov	dpl,#0x00
   329F 12 32 70      [24]13424 	lcall	_axradio_set_paramsets
                     2A6F 13425 	C$easyax5043.c$2049$1$411 ==.
                     2A6F 13426 	XG$axradio_agc_thaw$0$0 ==.
   32A2 22            [24]13427 	ret
                          13428 	.area CSEG    (CODE)
                          13429 	.area CONST   (CODE)
                     0000 13430 Feasyax5043$_str_0$0$0 == .
   537D                   13431 __str_0:
   537D 52 58             13432 	.ascii "RX"
   537F 0A                13433 	.db 0x0A
   5380 00                13434 	.db 0x00
                          13435 	.area XINIT   (CODE)
                     0000 13436 Feasyax5043$__xinit_f30_saved$0$0 == .
   56A6                   13437 __xinit__f30_saved:
   56A6 3F                13438 	.db #0x3F	; 63
                     0001 13439 Feasyax5043$__xinit_f31_saved$0$0 == .
   56A7                   13440 __xinit__f31_saved:
   56A7 F0                13441 	.db #0xF0	; 240
                     0002 13442 Feasyax5043$__xinit_f32_saved$0$0 == .
   56A8                   13443 __xinit__f32_saved:
   56A8 3F                13444 	.db #0x3F	; 63
                     0003 13445 Feasyax5043$__xinit_f33_saved$0$0 == .
   56A9                   13446 __xinit__f33_saved:
   56A9 F0                13447 	.db #0xF0	; 240
                          13448 	.area CABS    (ABS,CODE)
