                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Sat Dec 21 22:34:10 2013
                              5 ;--------------------------------------------------------
                              6 	.module display
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _dbglink_writenum32
                             13 	.globl _dbglink_writehex16
                             14 	.globl _dbglink_writenum16
                             15 	.globl _dbglink_writestr
                             16 	.globl _dbglink_tx
                             17 	.globl _dbglink_txfree
                             18 	.globl _wtimer_runcallbacks
                             19 	.globl _wtimer_idle
                             20 	.globl _axradio_conv_freq_tohz
                             21 	.globl _axradio_get_freqoffset
                             22 	.globl _PORTC_7
                             23 	.globl _PORTC_6
                             24 	.globl _PORTC_5
                             25 	.globl _PORTC_4
                             26 	.globl _PORTC_3
                             27 	.globl _PORTC_2
                             28 	.globl _PORTC_1
                             29 	.globl _PORTC_0
                             30 	.globl _PORTB_7
                             31 	.globl _PORTB_6
                             32 	.globl _PORTB_5
                             33 	.globl _PORTB_4
                             34 	.globl _PORTB_3
                             35 	.globl _PORTB_2
                             36 	.globl _PORTB_1
                             37 	.globl _PORTB_0
                             38 	.globl _PORTA_7
                             39 	.globl _PORTA_6
                             40 	.globl _PORTA_5
                             41 	.globl _PORTA_4
                             42 	.globl _PORTA_3
                             43 	.globl _PORTA_2
                             44 	.globl _PORTA_1
                             45 	.globl _PORTA_0
                             46 	.globl _PINC_7
                             47 	.globl _PINC_6
                             48 	.globl _PINC_5
                             49 	.globl _PINC_4
                             50 	.globl _PINC_3
                             51 	.globl _PINC_2
                             52 	.globl _PINC_1
                             53 	.globl _PINC_0
                             54 	.globl _PINB_7
                             55 	.globl _PINB_6
                             56 	.globl _PINB_5
                             57 	.globl _PINB_4
                             58 	.globl _PINB_3
                             59 	.globl _PINB_2
                             60 	.globl _PINB_1
                             61 	.globl _PINB_0
                             62 	.globl _PINA_7
                             63 	.globl _PINA_6
                             64 	.globl _PINA_5
                             65 	.globl _PINA_4
                             66 	.globl _PINA_3
                             67 	.globl _PINA_2
                             68 	.globl _PINA_1
                             69 	.globl _PINA_0
                             70 	.globl _CY
                             71 	.globl _AC
                             72 	.globl _F0
                             73 	.globl _RS1
                             74 	.globl _RS0
                             75 	.globl _OV
                             76 	.globl _F1
                             77 	.globl _P
                             78 	.globl _IP_7
                             79 	.globl _IP_6
                             80 	.globl _IP_5
                             81 	.globl _IP_4
                             82 	.globl _IP_3
                             83 	.globl _IP_2
                             84 	.globl _IP_1
                             85 	.globl _IP_0
                             86 	.globl _EA
                             87 	.globl _IE_7
                             88 	.globl _IE_6
                             89 	.globl _IE_5
                             90 	.globl _IE_4
                             91 	.globl _IE_3
                             92 	.globl _IE_2
                             93 	.globl _IE_1
                             94 	.globl _IE_0
                             95 	.globl _EIP_7
                             96 	.globl _EIP_6
                             97 	.globl _EIP_5
                             98 	.globl _EIP_4
                             99 	.globl _EIP_3
                            100 	.globl _EIP_2
                            101 	.globl _EIP_1
                            102 	.globl _EIP_0
                            103 	.globl _EIE_7
                            104 	.globl _EIE_6
                            105 	.globl _EIE_5
                            106 	.globl _EIE_4
                            107 	.globl _EIE_3
                            108 	.globl _EIE_2
                            109 	.globl _EIE_1
                            110 	.globl _EIE_0
                            111 	.globl _E2IP_7
                            112 	.globl _E2IP_6
                            113 	.globl _E2IP_5
                            114 	.globl _E2IP_4
                            115 	.globl _E2IP_3
                            116 	.globl _E2IP_2
                            117 	.globl _E2IP_1
                            118 	.globl _E2IP_0
                            119 	.globl _E2IE_7
                            120 	.globl _E2IE_6
                            121 	.globl _E2IE_5
                            122 	.globl _E2IE_4
                            123 	.globl _E2IE_3
                            124 	.globl _E2IE_2
                            125 	.globl _E2IE_1
                            126 	.globl _E2IE_0
                            127 	.globl _B_7
                            128 	.globl _B_6
                            129 	.globl _B_5
                            130 	.globl _B_4
                            131 	.globl _B_3
                            132 	.globl _B_2
                            133 	.globl _B_1
                            134 	.globl _B_0
                            135 	.globl _ACC_7
                            136 	.globl _ACC_6
                            137 	.globl _ACC_5
                            138 	.globl _ACC_4
                            139 	.globl _ACC_3
                            140 	.globl _ACC_2
                            141 	.globl _ACC_1
                            142 	.globl _ACC_0
                            143 	.globl _WTSTAT
                            144 	.globl _WTIRQEN
                            145 	.globl _WTEVTD
                            146 	.globl _WTEVTD1
                            147 	.globl _WTEVTD0
                            148 	.globl _WTEVTC
                            149 	.globl _WTEVTC1
                            150 	.globl _WTEVTC0
                            151 	.globl _WTEVTB
                            152 	.globl _WTEVTB1
                            153 	.globl _WTEVTB0
                            154 	.globl _WTEVTA
                            155 	.globl _WTEVTA1
                            156 	.globl _WTEVTA0
                            157 	.globl _WTCNTR1
                            158 	.globl _WTCNTB
                            159 	.globl _WTCNTB1
                            160 	.globl _WTCNTB0
                            161 	.globl _WTCNTA
                            162 	.globl _WTCNTA1
                            163 	.globl _WTCNTA0
                            164 	.globl _WTCFGB
                            165 	.globl _WTCFGA
                            166 	.globl _WDTRESET
                            167 	.globl _WDTCFG
                            168 	.globl _U1STATUS
                            169 	.globl _U1SHREG
                            170 	.globl _U1MODE
                            171 	.globl _U1CTRL
                            172 	.globl _U0STATUS
                            173 	.globl _U0SHREG
                            174 	.globl _U0MODE
                            175 	.globl _U0CTRL
                            176 	.globl _T2STATUS
                            177 	.globl _T2PERIOD
                            178 	.globl _T2PERIOD1
                            179 	.globl _T2PERIOD0
                            180 	.globl _T2MODE
                            181 	.globl _T2CNT
                            182 	.globl _T2CNT1
                            183 	.globl _T2CNT0
                            184 	.globl _T2CLKSRC
                            185 	.globl _T1STATUS
                            186 	.globl _T1PERIOD
                            187 	.globl _T1PERIOD1
                            188 	.globl _T1PERIOD0
                            189 	.globl _T1MODE
                            190 	.globl _T1CNT
                            191 	.globl _T1CNT1
                            192 	.globl _T1CNT0
                            193 	.globl _T1CLKSRC
                            194 	.globl _T0STATUS
                            195 	.globl _T0PERIOD
                            196 	.globl _T0PERIOD1
                            197 	.globl _T0PERIOD0
                            198 	.globl _T0MODE
                            199 	.globl _T0CNT
                            200 	.globl _T0CNT1
                            201 	.globl _T0CNT0
                            202 	.globl _T0CLKSRC
                            203 	.globl _SPSTATUS
                            204 	.globl _SPSHREG
                            205 	.globl _SPMODE
                            206 	.globl _SPCLKSRC
                            207 	.globl _RADIOSTAT
                            208 	.globl _RADIOSTAT1
                            209 	.globl _RADIOSTAT0
                            210 	.globl _RADIODATA
                            211 	.globl _RADIODATA3
                            212 	.globl _RADIODATA2
                            213 	.globl _RADIODATA1
                            214 	.globl _RADIODATA0
                            215 	.globl _RADIOADDR
                            216 	.globl _RADIOADDR1
                            217 	.globl _RADIOADDR0
                            218 	.globl _RADIOACC
                            219 	.globl _OC1STATUS
                            220 	.globl _OC1PIN
                            221 	.globl _OC1MODE
                            222 	.globl _OC1COMP
                            223 	.globl _OC1COMP1
                            224 	.globl _OC1COMP0
                            225 	.globl _OC0STATUS
                            226 	.globl _OC0PIN
                            227 	.globl _OC0MODE
                            228 	.globl _OC0COMP
                            229 	.globl _OC0COMP1
                            230 	.globl _OC0COMP0
                            231 	.globl _NVSTATUS
                            232 	.globl _NVKEY
                            233 	.globl _NVDATA
                            234 	.globl _NVDATA1
                            235 	.globl _NVDATA0
                            236 	.globl _NVADDR
                            237 	.globl _NVADDR1
                            238 	.globl _NVADDR0
                            239 	.globl _IC1STATUS
                            240 	.globl _IC1MODE
                            241 	.globl _IC1CAPT
                            242 	.globl _IC1CAPT1
                            243 	.globl _IC1CAPT0
                            244 	.globl _IC0STATUS
                            245 	.globl _IC0MODE
                            246 	.globl _IC0CAPT
                            247 	.globl _IC0CAPT1
                            248 	.globl _IC0CAPT0
                            249 	.globl _PORTR
                            250 	.globl _PORTC
                            251 	.globl _PORTB
                            252 	.globl _PORTA
                            253 	.globl _PINR
                            254 	.globl _PINC
                            255 	.globl _PINB
                            256 	.globl _PINA
                            257 	.globl _DIRR
                            258 	.globl _DIRC
                            259 	.globl _DIRB
                            260 	.globl _DIRA
                            261 	.globl _DBGLNKSTAT
                            262 	.globl _DBGLNKBUF
                            263 	.globl _CODECONFIG
                            264 	.globl _CLKSTAT
                            265 	.globl _CLKCON
                            266 	.globl _ANALOGCOMP
                            267 	.globl _ADCCONV
                            268 	.globl _ADCCLKSRC
                            269 	.globl _ADCCH3CONFIG
                            270 	.globl _ADCCH2CONFIG
                            271 	.globl _ADCCH1CONFIG
                            272 	.globl _ADCCH0CONFIG
                            273 	.globl __XPAGE
                            274 	.globl _XPAGE
                            275 	.globl _SP
                            276 	.globl _PSW
                            277 	.globl _PCON
                            278 	.globl _IP
                            279 	.globl _IE
                            280 	.globl _EIP
                            281 	.globl _EIE
                            282 	.globl _E2IP
                            283 	.globl _E2IE
                            284 	.globl _DPS
                            285 	.globl _DPTR1
                            286 	.globl _DPTR0
                            287 	.globl _DPL1
                            288 	.globl _DPL
                            289 	.globl _DPH1
                            290 	.globl _DPH
                            291 	.globl _B
                            292 	.globl _ACC
                            293 	.globl _XWTSTAT
                            294 	.globl _XWTIRQEN
                            295 	.globl _XWTEVTD
                            296 	.globl _XWTEVTD1
                            297 	.globl _XWTEVTD0
                            298 	.globl _XWTEVTC
                            299 	.globl _XWTEVTC1
                            300 	.globl _XWTEVTC0
                            301 	.globl _XWTEVTB
                            302 	.globl _XWTEVTB1
                            303 	.globl _XWTEVTB0
                            304 	.globl _XWTEVTA
                            305 	.globl _XWTEVTA1
                            306 	.globl _XWTEVTA0
                            307 	.globl _XWTCNTR1
                            308 	.globl _XWTCNTB
                            309 	.globl _XWTCNTB1
                            310 	.globl _XWTCNTB0
                            311 	.globl _XWTCNTA
                            312 	.globl _XWTCNTA1
                            313 	.globl _XWTCNTA0
                            314 	.globl _XWTCFGB
                            315 	.globl _XWTCFGA
                            316 	.globl _XWDTRESET
                            317 	.globl _XWDTCFG
                            318 	.globl _XU1STATUS
                            319 	.globl _XU1SHREG
                            320 	.globl _XU1MODE
                            321 	.globl _XU1CTRL
                            322 	.globl _XU0STATUS
                            323 	.globl _XU0SHREG
                            324 	.globl _XU0MODE
                            325 	.globl _XU0CTRL
                            326 	.globl _XT2STATUS
                            327 	.globl _XT2PERIOD
                            328 	.globl _XT2PERIOD1
                            329 	.globl _XT2PERIOD0
                            330 	.globl _XT2MODE
                            331 	.globl _XT2CNT
                            332 	.globl _XT2CNT1
                            333 	.globl _XT2CNT0
                            334 	.globl _XT2CLKSRC
                            335 	.globl _XT1STATUS
                            336 	.globl _XT1PERIOD
                            337 	.globl _XT1PERIOD1
                            338 	.globl _XT1PERIOD0
                            339 	.globl _XT1MODE
                            340 	.globl _XT1CNT
                            341 	.globl _XT1CNT1
                            342 	.globl _XT1CNT0
                            343 	.globl _XT1CLKSRC
                            344 	.globl _XT0STATUS
                            345 	.globl _XT0PERIOD
                            346 	.globl _XT0PERIOD1
                            347 	.globl _XT0PERIOD0
                            348 	.globl _XT0MODE
                            349 	.globl _XT0CNT
                            350 	.globl _XT0CNT1
                            351 	.globl _XT0CNT0
                            352 	.globl _XT0CLKSRC
                            353 	.globl _XSPSTATUS
                            354 	.globl _XSPSHREG
                            355 	.globl _XSPMODE
                            356 	.globl _XSPCLKSRC
                            357 	.globl _XRADIOSTAT
                            358 	.globl _XRADIOSTAT1
                            359 	.globl _XRADIOSTAT0
                            360 	.globl _XRADIODATA3
                            361 	.globl _XRADIODATA2
                            362 	.globl _XRADIODATA1
                            363 	.globl _XRADIODATA0
                            364 	.globl _XRADIOADDR1
                            365 	.globl _XRADIOADDR0
                            366 	.globl _XRADIOACC
                            367 	.globl _XOC1STATUS
                            368 	.globl _XOC1PIN
                            369 	.globl _XOC1MODE
                            370 	.globl _XOC1COMP
                            371 	.globl _XOC1COMP1
                            372 	.globl _XOC1COMP0
                            373 	.globl _XOC0STATUS
                            374 	.globl _XOC0PIN
                            375 	.globl _XOC0MODE
                            376 	.globl _XOC0COMP
                            377 	.globl _XOC0COMP1
                            378 	.globl _XOC0COMP0
                            379 	.globl _XNVSTATUS
                            380 	.globl _XNVKEY
                            381 	.globl _XNVDATA
                            382 	.globl _XNVDATA1
                            383 	.globl _XNVDATA0
                            384 	.globl _XNVADDR
                            385 	.globl _XNVADDR1
                            386 	.globl _XNVADDR0
                            387 	.globl _XIC1STATUS
                            388 	.globl _XIC1MODE
                            389 	.globl _XIC1CAPT
                            390 	.globl _XIC1CAPT1
                            391 	.globl _XIC1CAPT0
                            392 	.globl _XIC0STATUS
                            393 	.globl _XIC0MODE
                            394 	.globl _XIC0CAPT
                            395 	.globl _XIC0CAPT1
                            396 	.globl _XIC0CAPT0
                            397 	.globl _XPORTR
                            398 	.globl _XPORTC
                            399 	.globl _XPORTB
                            400 	.globl _XPORTA
                            401 	.globl _XPINR
                            402 	.globl _XPINC
                            403 	.globl _XPINB
                            404 	.globl _XPINA
                            405 	.globl _XDIRR
                            406 	.globl _XDIRC
                            407 	.globl _XDIRB
                            408 	.globl _XDIRA
                            409 	.globl _XDBGLNKSTAT
                            410 	.globl _XDBGLNKBUF
                            411 	.globl _XCODECONFIG
                            412 	.globl _XCLKSTAT
                            413 	.globl _XCLKCON
                            414 	.globl _XANALOGCOMP
                            415 	.globl _XADCCONV
                            416 	.globl _XADCCLKSRC
                            417 	.globl _XADCCH3CONFIG
                            418 	.globl _XADCCH2CONFIG
                            419 	.globl _XADCCH1CONFIG
                            420 	.globl _XADCCH0CONFIG
                            421 	.globl _XPCON
                            422 	.globl _XIP
                            423 	.globl _XIE
                            424 	.globl _XDPTR1
                            425 	.globl _XDPTR0
                            426 	.globl _XTALREADY
                            427 	.globl _XTALOSC
                            428 	.globl _XTALAMPL
                            429 	.globl _SILICONREV
                            430 	.globl _SCRATCH3
                            431 	.globl _SCRATCH2
                            432 	.globl _SCRATCH1
                            433 	.globl _SCRATCH0
                            434 	.globl _RADIOMUX
                            435 	.globl _RADIOFSTATADDR
                            436 	.globl _RADIOFSTATADDR1
                            437 	.globl _RADIOFSTATADDR0
                            438 	.globl _RADIOFDATAADDR
                            439 	.globl _RADIOFDATAADDR1
                            440 	.globl _RADIOFDATAADDR0
                            441 	.globl _OSCRUN
                            442 	.globl _OSCREADY
                            443 	.globl _OSCFORCERUN
                            444 	.globl _OSCCALIB
                            445 	.globl _MISCCTRL
                            446 	.globl _LPXOSCGM
                            447 	.globl _LPOSCREF
                            448 	.globl _LPOSCREF1
                            449 	.globl _LPOSCREF0
                            450 	.globl _LPOSCPER
                            451 	.globl _LPOSCPER1
                            452 	.globl _LPOSCPER0
                            453 	.globl _LPOSCKFILT
                            454 	.globl _LPOSCKFILT1
                            455 	.globl _LPOSCKFILT0
                            456 	.globl _LPOSCFREQ
                            457 	.globl _LPOSCFREQ1
                            458 	.globl _LPOSCFREQ0
                            459 	.globl _LPOSCCONFIG
                            460 	.globl _PINSEL
                            461 	.globl _PINCHGC
                            462 	.globl _PINCHGB
                            463 	.globl _PINCHGA
                            464 	.globl _PALTC
                            465 	.globl _PALTB
                            466 	.globl _PALTA
                            467 	.globl _INTCHGC
                            468 	.globl _INTCHGB
                            469 	.globl _INTCHGA
                            470 	.globl _EXTIRQ
                            471 	.globl _GPIOENABLE
                            472 	.globl _ANALOGA
                            473 	.globl _FRCOSCREF
                            474 	.globl _FRCOSCREF1
                            475 	.globl _FRCOSCREF0
                            476 	.globl _FRCOSCPER
                            477 	.globl _FRCOSCPER1
                            478 	.globl _FRCOSCPER0
                            479 	.globl _FRCOSCKFILT
                            480 	.globl _FRCOSCKFILT1
                            481 	.globl _FRCOSCKFILT0
                            482 	.globl _FRCOSCFREQ
                            483 	.globl _FRCOSCFREQ1
                            484 	.globl _FRCOSCFREQ0
                            485 	.globl _FRCOSCCTRL
                            486 	.globl _FRCOSCCONFIG
                            487 	.globl _DMA1CONFIG
                            488 	.globl _DMA1ADDR
                            489 	.globl _DMA1ADDR1
                            490 	.globl _DMA1ADDR0
                            491 	.globl _DMA0CONFIG
                            492 	.globl _DMA0ADDR
                            493 	.globl _DMA0ADDR1
                            494 	.globl _DMA0ADDR0
                            495 	.globl _ADCTUNE2
                            496 	.globl _ADCTUNE1
                            497 	.globl _ADCTUNE0
                            498 	.globl _ADCCH3VAL
                            499 	.globl _ADCCH3VAL1
                            500 	.globl _ADCCH3VAL0
                            501 	.globl _ADCCH2VAL
                            502 	.globl _ADCCH2VAL1
                            503 	.globl _ADCCH2VAL0
                            504 	.globl _ADCCH1VAL
                            505 	.globl _ADCCH1VAL1
                            506 	.globl _ADCCH1VAL0
                            507 	.globl _ADCCH0VAL
                            508 	.globl _ADCCH0VAL1
                            509 	.globl _ADCCH0VAL0
                            510 	.globl _display_timing
                            511 	.globl _per_test_counter_previous
                            512 	.globl _per_test_counter
                            513 	.globl _display_received_packet
                            514 	.globl _dbglink_received_packet
                            515 ;--------------------------------------------------------
                            516 ; special function registers
                            517 ;--------------------------------------------------------
                            518 	.area RSEG    (ABS,DATA)
   0000                     519 	.org 0x0000
                    00E0    520 G$ACC$0$0 == 0x00e0
                    00E0    521 _ACC	=	0x00e0
                    00F0    522 G$B$0$0 == 0x00f0
                    00F0    523 _B	=	0x00f0
                    0083    524 G$DPH$0$0 == 0x0083
                    0083    525 _DPH	=	0x0083
                    0085    526 G$DPH1$0$0 == 0x0085
                    0085    527 _DPH1	=	0x0085
                    0082    528 G$DPL$0$0 == 0x0082
                    0082    529 _DPL	=	0x0082
                    0084    530 G$DPL1$0$0 == 0x0084
                    0084    531 _DPL1	=	0x0084
                    8382    532 G$DPTR0$0$0 == 0x8382
                    8382    533 _DPTR0	=	0x8382
                    8584    534 G$DPTR1$0$0 == 0x8584
                    8584    535 _DPTR1	=	0x8584
                    0086    536 G$DPS$0$0 == 0x0086
                    0086    537 _DPS	=	0x0086
                    00A0    538 G$E2IE$0$0 == 0x00a0
                    00A0    539 _E2IE	=	0x00a0
                    00C0    540 G$E2IP$0$0 == 0x00c0
                    00C0    541 _E2IP	=	0x00c0
                    0098    542 G$EIE$0$0 == 0x0098
                    0098    543 _EIE	=	0x0098
                    00B0    544 G$EIP$0$0 == 0x00b0
                    00B0    545 _EIP	=	0x00b0
                    00A8    546 G$IE$0$0 == 0x00a8
                    00A8    547 _IE	=	0x00a8
                    00B8    548 G$IP$0$0 == 0x00b8
                    00B8    549 _IP	=	0x00b8
                    0087    550 G$PCON$0$0 == 0x0087
                    0087    551 _PCON	=	0x0087
                    00D0    552 G$PSW$0$0 == 0x00d0
                    00D0    553 _PSW	=	0x00d0
                    0081    554 G$SP$0$0 == 0x0081
                    0081    555 _SP	=	0x0081
                    00D9    556 G$XPAGE$0$0 == 0x00d9
                    00D9    557 _XPAGE	=	0x00d9
                    00D9    558 G$_XPAGE$0$0 == 0x00d9
                    00D9    559 __XPAGE	=	0x00d9
                    00CA    560 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA    561 _ADCCH0CONFIG	=	0x00ca
                    00CB    562 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB    563 _ADCCH1CONFIG	=	0x00cb
                    00D2    564 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2    565 _ADCCH2CONFIG	=	0x00d2
                    00D3    566 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3    567 _ADCCH3CONFIG	=	0x00d3
                    00D1    568 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1    569 _ADCCLKSRC	=	0x00d1
                    00C9    570 G$ADCCONV$0$0 == 0x00c9
                    00C9    571 _ADCCONV	=	0x00c9
                    00E1    572 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1    573 _ANALOGCOMP	=	0x00e1
                    00C6    574 G$CLKCON$0$0 == 0x00c6
                    00C6    575 _CLKCON	=	0x00c6
                    00C7    576 G$CLKSTAT$0$0 == 0x00c7
                    00C7    577 _CLKSTAT	=	0x00c7
                    0097    578 G$CODECONFIG$0$0 == 0x0097
                    0097    579 _CODECONFIG	=	0x0097
                    00E3    580 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3    581 _DBGLNKBUF	=	0x00e3
                    00E2    582 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2    583 _DBGLNKSTAT	=	0x00e2
                    0089    584 G$DIRA$0$0 == 0x0089
                    0089    585 _DIRA	=	0x0089
                    008A    586 G$DIRB$0$0 == 0x008a
                    008A    587 _DIRB	=	0x008a
                    008B    588 G$DIRC$0$0 == 0x008b
                    008B    589 _DIRC	=	0x008b
                    008E    590 G$DIRR$0$0 == 0x008e
                    008E    591 _DIRR	=	0x008e
                    00C8    592 G$PINA$0$0 == 0x00c8
                    00C8    593 _PINA	=	0x00c8
                    00E8    594 G$PINB$0$0 == 0x00e8
                    00E8    595 _PINB	=	0x00e8
                    00F8    596 G$PINC$0$0 == 0x00f8
                    00F8    597 _PINC	=	0x00f8
                    008D    598 G$PINR$0$0 == 0x008d
                    008D    599 _PINR	=	0x008d
                    0080    600 G$PORTA$0$0 == 0x0080
                    0080    601 _PORTA	=	0x0080
                    0088    602 G$PORTB$0$0 == 0x0088
                    0088    603 _PORTB	=	0x0088
                    0090    604 G$PORTC$0$0 == 0x0090
                    0090    605 _PORTC	=	0x0090
                    008C    606 G$PORTR$0$0 == 0x008c
                    008C    607 _PORTR	=	0x008c
                    00CE    608 G$IC0CAPT0$0$0 == 0x00ce
                    00CE    609 _IC0CAPT0	=	0x00ce
                    00CF    610 G$IC0CAPT1$0$0 == 0x00cf
                    00CF    611 _IC0CAPT1	=	0x00cf
                    CFCE    612 G$IC0CAPT$0$0 == 0xcfce
                    CFCE    613 _IC0CAPT	=	0xcfce
                    00CC    614 G$IC0MODE$0$0 == 0x00cc
                    00CC    615 _IC0MODE	=	0x00cc
                    00CD    616 G$IC0STATUS$0$0 == 0x00cd
                    00CD    617 _IC0STATUS	=	0x00cd
                    00D6    618 G$IC1CAPT0$0$0 == 0x00d6
                    00D6    619 _IC1CAPT0	=	0x00d6
                    00D7    620 G$IC1CAPT1$0$0 == 0x00d7
                    00D7    621 _IC1CAPT1	=	0x00d7
                    D7D6    622 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6    623 _IC1CAPT	=	0xd7d6
                    00D4    624 G$IC1MODE$0$0 == 0x00d4
                    00D4    625 _IC1MODE	=	0x00d4
                    00D5    626 G$IC1STATUS$0$0 == 0x00d5
                    00D5    627 _IC1STATUS	=	0x00d5
                    0092    628 G$NVADDR0$0$0 == 0x0092
                    0092    629 _NVADDR0	=	0x0092
                    0093    630 G$NVADDR1$0$0 == 0x0093
                    0093    631 _NVADDR1	=	0x0093
                    9392    632 G$NVADDR$0$0 == 0x9392
                    9392    633 _NVADDR	=	0x9392
                    0094    634 G$NVDATA0$0$0 == 0x0094
                    0094    635 _NVDATA0	=	0x0094
                    0095    636 G$NVDATA1$0$0 == 0x0095
                    0095    637 _NVDATA1	=	0x0095
                    9594    638 G$NVDATA$0$0 == 0x9594
                    9594    639 _NVDATA	=	0x9594
                    0096    640 G$NVKEY$0$0 == 0x0096
                    0096    641 _NVKEY	=	0x0096
                    0091    642 G$NVSTATUS$0$0 == 0x0091
                    0091    643 _NVSTATUS	=	0x0091
                    00BC    644 G$OC0COMP0$0$0 == 0x00bc
                    00BC    645 _OC0COMP0	=	0x00bc
                    00BD    646 G$OC0COMP1$0$0 == 0x00bd
                    00BD    647 _OC0COMP1	=	0x00bd
                    BDBC    648 G$OC0COMP$0$0 == 0xbdbc
                    BDBC    649 _OC0COMP	=	0xbdbc
                    00B9    650 G$OC0MODE$0$0 == 0x00b9
                    00B9    651 _OC0MODE	=	0x00b9
                    00BA    652 G$OC0PIN$0$0 == 0x00ba
                    00BA    653 _OC0PIN	=	0x00ba
                    00BB    654 G$OC0STATUS$0$0 == 0x00bb
                    00BB    655 _OC0STATUS	=	0x00bb
                    00C4    656 G$OC1COMP0$0$0 == 0x00c4
                    00C4    657 _OC1COMP0	=	0x00c4
                    00C5    658 G$OC1COMP1$0$0 == 0x00c5
                    00C5    659 _OC1COMP1	=	0x00c5
                    C5C4    660 G$OC1COMP$0$0 == 0xc5c4
                    C5C4    661 _OC1COMP	=	0xc5c4
                    00C1    662 G$OC1MODE$0$0 == 0x00c1
                    00C1    663 _OC1MODE	=	0x00c1
                    00C2    664 G$OC1PIN$0$0 == 0x00c2
                    00C2    665 _OC1PIN	=	0x00c2
                    00C3    666 G$OC1STATUS$0$0 == 0x00c3
                    00C3    667 _OC1STATUS	=	0x00c3
                    00B1    668 G$RADIOACC$0$0 == 0x00b1
                    00B1    669 _RADIOACC	=	0x00b1
                    00B3    670 G$RADIOADDR0$0$0 == 0x00b3
                    00B3    671 _RADIOADDR0	=	0x00b3
                    00B2    672 G$RADIOADDR1$0$0 == 0x00b2
                    00B2    673 _RADIOADDR1	=	0x00b2
                    B2B3    674 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3    675 _RADIOADDR	=	0xb2b3
                    00B7    676 G$RADIODATA0$0$0 == 0x00b7
                    00B7    677 _RADIODATA0	=	0x00b7
                    00B6    678 G$RADIODATA1$0$0 == 0x00b6
                    00B6    679 _RADIODATA1	=	0x00b6
                    00B5    680 G$RADIODATA2$0$0 == 0x00b5
                    00B5    681 _RADIODATA2	=	0x00b5
                    00B4    682 G$RADIODATA3$0$0 == 0x00b4
                    00B4    683 _RADIODATA3	=	0x00b4
                    B4B5B6B7    684 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7    685 _RADIODATA	=	0xb4b5b6b7
                    00BE    686 G$RADIOSTAT0$0$0 == 0x00be
                    00BE    687 _RADIOSTAT0	=	0x00be
                    00BF    688 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF    689 _RADIOSTAT1	=	0x00bf
                    BFBE    690 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE    691 _RADIOSTAT	=	0xbfbe
                    00DF    692 G$SPCLKSRC$0$0 == 0x00df
                    00DF    693 _SPCLKSRC	=	0x00df
                    00DC    694 G$SPMODE$0$0 == 0x00dc
                    00DC    695 _SPMODE	=	0x00dc
                    00DE    696 G$SPSHREG$0$0 == 0x00de
                    00DE    697 _SPSHREG	=	0x00de
                    00DD    698 G$SPSTATUS$0$0 == 0x00dd
                    00DD    699 _SPSTATUS	=	0x00dd
                    009A    700 G$T0CLKSRC$0$0 == 0x009a
                    009A    701 _T0CLKSRC	=	0x009a
                    009C    702 G$T0CNT0$0$0 == 0x009c
                    009C    703 _T0CNT0	=	0x009c
                    009D    704 G$T0CNT1$0$0 == 0x009d
                    009D    705 _T0CNT1	=	0x009d
                    9D9C    706 G$T0CNT$0$0 == 0x9d9c
                    9D9C    707 _T0CNT	=	0x9d9c
                    0099    708 G$T0MODE$0$0 == 0x0099
                    0099    709 _T0MODE	=	0x0099
                    009E    710 G$T0PERIOD0$0$0 == 0x009e
                    009E    711 _T0PERIOD0	=	0x009e
                    009F    712 G$T0PERIOD1$0$0 == 0x009f
                    009F    713 _T0PERIOD1	=	0x009f
                    9F9E    714 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E    715 _T0PERIOD	=	0x9f9e
                    009B    716 G$T0STATUS$0$0 == 0x009b
                    009B    717 _T0STATUS	=	0x009b
                    00A2    718 G$T1CLKSRC$0$0 == 0x00a2
                    00A2    719 _T1CLKSRC	=	0x00a2
                    00A4    720 G$T1CNT0$0$0 == 0x00a4
                    00A4    721 _T1CNT0	=	0x00a4
                    00A5    722 G$T1CNT1$0$0 == 0x00a5
                    00A5    723 _T1CNT1	=	0x00a5
                    A5A4    724 G$T1CNT$0$0 == 0xa5a4
                    A5A4    725 _T1CNT	=	0xa5a4
                    00A1    726 G$T1MODE$0$0 == 0x00a1
                    00A1    727 _T1MODE	=	0x00a1
                    00A6    728 G$T1PERIOD0$0$0 == 0x00a6
                    00A6    729 _T1PERIOD0	=	0x00a6
                    00A7    730 G$T1PERIOD1$0$0 == 0x00a7
                    00A7    731 _T1PERIOD1	=	0x00a7
                    A7A6    732 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6    733 _T1PERIOD	=	0xa7a6
                    00A3    734 G$T1STATUS$0$0 == 0x00a3
                    00A3    735 _T1STATUS	=	0x00a3
                    00AA    736 G$T2CLKSRC$0$0 == 0x00aa
                    00AA    737 _T2CLKSRC	=	0x00aa
                    00AC    738 G$T2CNT0$0$0 == 0x00ac
                    00AC    739 _T2CNT0	=	0x00ac
                    00AD    740 G$T2CNT1$0$0 == 0x00ad
                    00AD    741 _T2CNT1	=	0x00ad
                    ADAC    742 G$T2CNT$0$0 == 0xadac
                    ADAC    743 _T2CNT	=	0xadac
                    00A9    744 G$T2MODE$0$0 == 0x00a9
                    00A9    745 _T2MODE	=	0x00a9
                    00AE    746 G$T2PERIOD0$0$0 == 0x00ae
                    00AE    747 _T2PERIOD0	=	0x00ae
                    00AF    748 G$T2PERIOD1$0$0 == 0x00af
                    00AF    749 _T2PERIOD1	=	0x00af
                    AFAE    750 G$T2PERIOD$0$0 == 0xafae
                    AFAE    751 _T2PERIOD	=	0xafae
                    00AB    752 G$T2STATUS$0$0 == 0x00ab
                    00AB    753 _T2STATUS	=	0x00ab
                    00E4    754 G$U0CTRL$0$0 == 0x00e4
                    00E4    755 _U0CTRL	=	0x00e4
                    00E7    756 G$U0MODE$0$0 == 0x00e7
                    00E7    757 _U0MODE	=	0x00e7
                    00E6    758 G$U0SHREG$0$0 == 0x00e6
                    00E6    759 _U0SHREG	=	0x00e6
                    00E5    760 G$U0STATUS$0$0 == 0x00e5
                    00E5    761 _U0STATUS	=	0x00e5
                    00EC    762 G$U1CTRL$0$0 == 0x00ec
                    00EC    763 _U1CTRL	=	0x00ec
                    00EF    764 G$U1MODE$0$0 == 0x00ef
                    00EF    765 _U1MODE	=	0x00ef
                    00EE    766 G$U1SHREG$0$0 == 0x00ee
                    00EE    767 _U1SHREG	=	0x00ee
                    00ED    768 G$U1STATUS$0$0 == 0x00ed
                    00ED    769 _U1STATUS	=	0x00ed
                    00DA    770 G$WDTCFG$0$0 == 0x00da
                    00DA    771 _WDTCFG	=	0x00da
                    00DB    772 G$WDTRESET$0$0 == 0x00db
                    00DB    773 _WDTRESET	=	0x00db
                    00F1    774 G$WTCFGA$0$0 == 0x00f1
                    00F1    775 _WTCFGA	=	0x00f1
                    00F9    776 G$WTCFGB$0$0 == 0x00f9
                    00F9    777 _WTCFGB	=	0x00f9
                    00F2    778 G$WTCNTA0$0$0 == 0x00f2
                    00F2    779 _WTCNTA0	=	0x00f2
                    00F3    780 G$WTCNTA1$0$0 == 0x00f3
                    00F3    781 _WTCNTA1	=	0x00f3
                    F3F2    782 G$WTCNTA$0$0 == 0xf3f2
                    F3F2    783 _WTCNTA	=	0xf3f2
                    00FA    784 G$WTCNTB0$0$0 == 0x00fa
                    00FA    785 _WTCNTB0	=	0x00fa
                    00FB    786 G$WTCNTB1$0$0 == 0x00fb
                    00FB    787 _WTCNTB1	=	0x00fb
                    FBFA    788 G$WTCNTB$0$0 == 0xfbfa
                    FBFA    789 _WTCNTB	=	0xfbfa
                    00EB    790 G$WTCNTR1$0$0 == 0x00eb
                    00EB    791 _WTCNTR1	=	0x00eb
                    00F4    792 G$WTEVTA0$0$0 == 0x00f4
                    00F4    793 _WTEVTA0	=	0x00f4
                    00F5    794 G$WTEVTA1$0$0 == 0x00f5
                    00F5    795 _WTEVTA1	=	0x00f5
                    F5F4    796 G$WTEVTA$0$0 == 0xf5f4
                    F5F4    797 _WTEVTA	=	0xf5f4
                    00F6    798 G$WTEVTB0$0$0 == 0x00f6
                    00F6    799 _WTEVTB0	=	0x00f6
                    00F7    800 G$WTEVTB1$0$0 == 0x00f7
                    00F7    801 _WTEVTB1	=	0x00f7
                    F7F6    802 G$WTEVTB$0$0 == 0xf7f6
                    F7F6    803 _WTEVTB	=	0xf7f6
                    00FC    804 G$WTEVTC0$0$0 == 0x00fc
                    00FC    805 _WTEVTC0	=	0x00fc
                    00FD    806 G$WTEVTC1$0$0 == 0x00fd
                    00FD    807 _WTEVTC1	=	0x00fd
                    FDFC    808 G$WTEVTC$0$0 == 0xfdfc
                    FDFC    809 _WTEVTC	=	0xfdfc
                    00FE    810 G$WTEVTD0$0$0 == 0x00fe
                    00FE    811 _WTEVTD0	=	0x00fe
                    00FF    812 G$WTEVTD1$0$0 == 0x00ff
                    00FF    813 _WTEVTD1	=	0x00ff
                    FFFE    814 G$WTEVTD$0$0 == 0xfffe
                    FFFE    815 _WTEVTD	=	0xfffe
                    00E9    816 G$WTIRQEN$0$0 == 0x00e9
                    00E9    817 _WTIRQEN	=	0x00e9
                    00EA    818 G$WTSTAT$0$0 == 0x00ea
                    00EA    819 _WTSTAT	=	0x00ea
                            820 ;--------------------------------------------------------
                            821 ; special function bits
                            822 ;--------------------------------------------------------
                            823 	.area RSEG    (ABS,DATA)
   0000                     824 	.org 0x0000
                    00E0    825 G$ACC_0$0$0 == 0x00e0
                    00E0    826 _ACC_0	=	0x00e0
                    00E1    827 G$ACC_1$0$0 == 0x00e1
                    00E1    828 _ACC_1	=	0x00e1
                    00E2    829 G$ACC_2$0$0 == 0x00e2
                    00E2    830 _ACC_2	=	0x00e2
                    00E3    831 G$ACC_3$0$0 == 0x00e3
                    00E3    832 _ACC_3	=	0x00e3
                    00E4    833 G$ACC_4$0$0 == 0x00e4
                    00E4    834 _ACC_4	=	0x00e4
                    00E5    835 G$ACC_5$0$0 == 0x00e5
                    00E5    836 _ACC_5	=	0x00e5
                    00E6    837 G$ACC_6$0$0 == 0x00e6
                    00E6    838 _ACC_6	=	0x00e6
                    00E7    839 G$ACC_7$0$0 == 0x00e7
                    00E7    840 _ACC_7	=	0x00e7
                    00F0    841 G$B_0$0$0 == 0x00f0
                    00F0    842 _B_0	=	0x00f0
                    00F1    843 G$B_1$0$0 == 0x00f1
                    00F1    844 _B_1	=	0x00f1
                    00F2    845 G$B_2$0$0 == 0x00f2
                    00F2    846 _B_2	=	0x00f2
                    00F3    847 G$B_3$0$0 == 0x00f3
                    00F3    848 _B_3	=	0x00f3
                    00F4    849 G$B_4$0$0 == 0x00f4
                    00F4    850 _B_4	=	0x00f4
                    00F5    851 G$B_5$0$0 == 0x00f5
                    00F5    852 _B_5	=	0x00f5
                    00F6    853 G$B_6$0$0 == 0x00f6
                    00F6    854 _B_6	=	0x00f6
                    00F7    855 G$B_7$0$0 == 0x00f7
                    00F7    856 _B_7	=	0x00f7
                    00A0    857 G$E2IE_0$0$0 == 0x00a0
                    00A0    858 _E2IE_0	=	0x00a0
                    00A1    859 G$E2IE_1$0$0 == 0x00a1
                    00A1    860 _E2IE_1	=	0x00a1
                    00A2    861 G$E2IE_2$0$0 == 0x00a2
                    00A2    862 _E2IE_2	=	0x00a2
                    00A3    863 G$E2IE_3$0$0 == 0x00a3
                    00A3    864 _E2IE_3	=	0x00a3
                    00A4    865 G$E2IE_4$0$0 == 0x00a4
                    00A4    866 _E2IE_4	=	0x00a4
                    00A5    867 G$E2IE_5$0$0 == 0x00a5
                    00A5    868 _E2IE_5	=	0x00a5
                    00A6    869 G$E2IE_6$0$0 == 0x00a6
                    00A6    870 _E2IE_6	=	0x00a6
                    00A7    871 G$E2IE_7$0$0 == 0x00a7
                    00A7    872 _E2IE_7	=	0x00a7
                    00C0    873 G$E2IP_0$0$0 == 0x00c0
                    00C0    874 _E2IP_0	=	0x00c0
                    00C1    875 G$E2IP_1$0$0 == 0x00c1
                    00C1    876 _E2IP_1	=	0x00c1
                    00C2    877 G$E2IP_2$0$0 == 0x00c2
                    00C2    878 _E2IP_2	=	0x00c2
                    00C3    879 G$E2IP_3$0$0 == 0x00c3
                    00C3    880 _E2IP_3	=	0x00c3
                    00C4    881 G$E2IP_4$0$0 == 0x00c4
                    00C4    882 _E2IP_4	=	0x00c4
                    00C5    883 G$E2IP_5$0$0 == 0x00c5
                    00C5    884 _E2IP_5	=	0x00c5
                    00C6    885 G$E2IP_6$0$0 == 0x00c6
                    00C6    886 _E2IP_6	=	0x00c6
                    00C7    887 G$E2IP_7$0$0 == 0x00c7
                    00C7    888 _E2IP_7	=	0x00c7
                    0098    889 G$EIE_0$0$0 == 0x0098
                    0098    890 _EIE_0	=	0x0098
                    0099    891 G$EIE_1$0$0 == 0x0099
                    0099    892 _EIE_1	=	0x0099
                    009A    893 G$EIE_2$0$0 == 0x009a
                    009A    894 _EIE_2	=	0x009a
                    009B    895 G$EIE_3$0$0 == 0x009b
                    009B    896 _EIE_3	=	0x009b
                    009C    897 G$EIE_4$0$0 == 0x009c
                    009C    898 _EIE_4	=	0x009c
                    009D    899 G$EIE_5$0$0 == 0x009d
                    009D    900 _EIE_5	=	0x009d
                    009E    901 G$EIE_6$0$0 == 0x009e
                    009E    902 _EIE_6	=	0x009e
                    009F    903 G$EIE_7$0$0 == 0x009f
                    009F    904 _EIE_7	=	0x009f
                    00B0    905 G$EIP_0$0$0 == 0x00b0
                    00B0    906 _EIP_0	=	0x00b0
                    00B1    907 G$EIP_1$0$0 == 0x00b1
                    00B1    908 _EIP_1	=	0x00b1
                    00B2    909 G$EIP_2$0$0 == 0x00b2
                    00B2    910 _EIP_2	=	0x00b2
                    00B3    911 G$EIP_3$0$0 == 0x00b3
                    00B3    912 _EIP_3	=	0x00b3
                    00B4    913 G$EIP_4$0$0 == 0x00b4
                    00B4    914 _EIP_4	=	0x00b4
                    00B5    915 G$EIP_5$0$0 == 0x00b5
                    00B5    916 _EIP_5	=	0x00b5
                    00B6    917 G$EIP_6$0$0 == 0x00b6
                    00B6    918 _EIP_6	=	0x00b6
                    00B7    919 G$EIP_7$0$0 == 0x00b7
                    00B7    920 _EIP_7	=	0x00b7
                    00A8    921 G$IE_0$0$0 == 0x00a8
                    00A8    922 _IE_0	=	0x00a8
                    00A9    923 G$IE_1$0$0 == 0x00a9
                    00A9    924 _IE_1	=	0x00a9
                    00AA    925 G$IE_2$0$0 == 0x00aa
                    00AA    926 _IE_2	=	0x00aa
                    00AB    927 G$IE_3$0$0 == 0x00ab
                    00AB    928 _IE_3	=	0x00ab
                    00AC    929 G$IE_4$0$0 == 0x00ac
                    00AC    930 _IE_4	=	0x00ac
                    00AD    931 G$IE_5$0$0 == 0x00ad
                    00AD    932 _IE_5	=	0x00ad
                    00AE    933 G$IE_6$0$0 == 0x00ae
                    00AE    934 _IE_6	=	0x00ae
                    00AF    935 G$IE_7$0$0 == 0x00af
                    00AF    936 _IE_7	=	0x00af
                    00AF    937 G$EA$0$0 == 0x00af
                    00AF    938 _EA	=	0x00af
                    00B8    939 G$IP_0$0$0 == 0x00b8
                    00B8    940 _IP_0	=	0x00b8
                    00B9    941 G$IP_1$0$0 == 0x00b9
                    00B9    942 _IP_1	=	0x00b9
                    00BA    943 G$IP_2$0$0 == 0x00ba
                    00BA    944 _IP_2	=	0x00ba
                    00BB    945 G$IP_3$0$0 == 0x00bb
                    00BB    946 _IP_3	=	0x00bb
                    00BC    947 G$IP_4$0$0 == 0x00bc
                    00BC    948 _IP_4	=	0x00bc
                    00BD    949 G$IP_5$0$0 == 0x00bd
                    00BD    950 _IP_5	=	0x00bd
                    00BE    951 G$IP_6$0$0 == 0x00be
                    00BE    952 _IP_6	=	0x00be
                    00BF    953 G$IP_7$0$0 == 0x00bf
                    00BF    954 _IP_7	=	0x00bf
                    00D0    955 G$P$0$0 == 0x00d0
                    00D0    956 _P	=	0x00d0
                    00D1    957 G$F1$0$0 == 0x00d1
                    00D1    958 _F1	=	0x00d1
                    00D2    959 G$OV$0$0 == 0x00d2
                    00D2    960 _OV	=	0x00d2
                    00D3    961 G$RS0$0$0 == 0x00d3
                    00D3    962 _RS0	=	0x00d3
                    00D4    963 G$RS1$0$0 == 0x00d4
                    00D4    964 _RS1	=	0x00d4
                    00D5    965 G$F0$0$0 == 0x00d5
                    00D5    966 _F0	=	0x00d5
                    00D6    967 G$AC$0$0 == 0x00d6
                    00D6    968 _AC	=	0x00d6
                    00D7    969 G$CY$0$0 == 0x00d7
                    00D7    970 _CY	=	0x00d7
                    00C8    971 G$PINA_0$0$0 == 0x00c8
                    00C8    972 _PINA_0	=	0x00c8
                    00C9    973 G$PINA_1$0$0 == 0x00c9
                    00C9    974 _PINA_1	=	0x00c9
                    00CA    975 G$PINA_2$0$0 == 0x00ca
                    00CA    976 _PINA_2	=	0x00ca
                    00CB    977 G$PINA_3$0$0 == 0x00cb
                    00CB    978 _PINA_3	=	0x00cb
                    00CC    979 G$PINA_4$0$0 == 0x00cc
                    00CC    980 _PINA_4	=	0x00cc
                    00CD    981 G$PINA_5$0$0 == 0x00cd
                    00CD    982 _PINA_5	=	0x00cd
                    00CE    983 G$PINA_6$0$0 == 0x00ce
                    00CE    984 _PINA_6	=	0x00ce
                    00CF    985 G$PINA_7$0$0 == 0x00cf
                    00CF    986 _PINA_7	=	0x00cf
                    00E8    987 G$PINB_0$0$0 == 0x00e8
                    00E8    988 _PINB_0	=	0x00e8
                    00E9    989 G$PINB_1$0$0 == 0x00e9
                    00E9    990 _PINB_1	=	0x00e9
                    00EA    991 G$PINB_2$0$0 == 0x00ea
                    00EA    992 _PINB_2	=	0x00ea
                    00EB    993 G$PINB_3$0$0 == 0x00eb
                    00EB    994 _PINB_3	=	0x00eb
                    00EC    995 G$PINB_4$0$0 == 0x00ec
                    00EC    996 _PINB_4	=	0x00ec
                    00ED    997 G$PINB_5$0$0 == 0x00ed
                    00ED    998 _PINB_5	=	0x00ed
                    00EE    999 G$PINB_6$0$0 == 0x00ee
                    00EE   1000 _PINB_6	=	0x00ee
                    00EF   1001 G$PINB_7$0$0 == 0x00ef
                    00EF   1002 _PINB_7	=	0x00ef
                    00F8   1003 G$PINC_0$0$0 == 0x00f8
                    00F8   1004 _PINC_0	=	0x00f8
                    00F9   1005 G$PINC_1$0$0 == 0x00f9
                    00F9   1006 _PINC_1	=	0x00f9
                    00FA   1007 G$PINC_2$0$0 == 0x00fa
                    00FA   1008 _PINC_2	=	0x00fa
                    00FB   1009 G$PINC_3$0$0 == 0x00fb
                    00FB   1010 _PINC_3	=	0x00fb
                    00FC   1011 G$PINC_4$0$0 == 0x00fc
                    00FC   1012 _PINC_4	=	0x00fc
                    00FD   1013 G$PINC_5$0$0 == 0x00fd
                    00FD   1014 _PINC_5	=	0x00fd
                    00FE   1015 G$PINC_6$0$0 == 0x00fe
                    00FE   1016 _PINC_6	=	0x00fe
                    00FF   1017 G$PINC_7$0$0 == 0x00ff
                    00FF   1018 _PINC_7	=	0x00ff
                    0080   1019 G$PORTA_0$0$0 == 0x0080
                    0080   1020 _PORTA_0	=	0x0080
                    0081   1021 G$PORTA_1$0$0 == 0x0081
                    0081   1022 _PORTA_1	=	0x0081
                    0082   1023 G$PORTA_2$0$0 == 0x0082
                    0082   1024 _PORTA_2	=	0x0082
                    0083   1025 G$PORTA_3$0$0 == 0x0083
                    0083   1026 _PORTA_3	=	0x0083
                    0084   1027 G$PORTA_4$0$0 == 0x0084
                    0084   1028 _PORTA_4	=	0x0084
                    0085   1029 G$PORTA_5$0$0 == 0x0085
                    0085   1030 _PORTA_5	=	0x0085
                    0086   1031 G$PORTA_6$0$0 == 0x0086
                    0086   1032 _PORTA_6	=	0x0086
                    0087   1033 G$PORTA_7$0$0 == 0x0087
                    0087   1034 _PORTA_7	=	0x0087
                    0088   1035 G$PORTB_0$0$0 == 0x0088
                    0088   1036 _PORTB_0	=	0x0088
                    0089   1037 G$PORTB_1$0$0 == 0x0089
                    0089   1038 _PORTB_1	=	0x0089
                    008A   1039 G$PORTB_2$0$0 == 0x008a
                    008A   1040 _PORTB_2	=	0x008a
                    008B   1041 G$PORTB_3$0$0 == 0x008b
                    008B   1042 _PORTB_3	=	0x008b
                    008C   1043 G$PORTB_4$0$0 == 0x008c
                    008C   1044 _PORTB_4	=	0x008c
                    008D   1045 G$PORTB_5$0$0 == 0x008d
                    008D   1046 _PORTB_5	=	0x008d
                    008E   1047 G$PORTB_6$0$0 == 0x008e
                    008E   1048 _PORTB_6	=	0x008e
                    008F   1049 G$PORTB_7$0$0 == 0x008f
                    008F   1050 _PORTB_7	=	0x008f
                    0090   1051 G$PORTC_0$0$0 == 0x0090
                    0090   1052 _PORTC_0	=	0x0090
                    0091   1053 G$PORTC_1$0$0 == 0x0091
                    0091   1054 _PORTC_1	=	0x0091
                    0092   1055 G$PORTC_2$0$0 == 0x0092
                    0092   1056 _PORTC_2	=	0x0092
                    0093   1057 G$PORTC_3$0$0 == 0x0093
                    0093   1058 _PORTC_3	=	0x0093
                    0094   1059 G$PORTC_4$0$0 == 0x0094
                    0094   1060 _PORTC_4	=	0x0094
                    0095   1061 G$PORTC_5$0$0 == 0x0095
                    0095   1062 _PORTC_5	=	0x0095
                    0096   1063 G$PORTC_6$0$0 == 0x0096
                    0096   1064 _PORTC_6	=	0x0096
                    0097   1065 G$PORTC_7$0$0 == 0x0097
                    0097   1066 _PORTC_7	=	0x0097
                           1067 ;--------------------------------------------------------
                           1068 ; overlayable register banks
                           1069 ;--------------------------------------------------------
                           1070 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1071 	.ds 8
                           1072 ;--------------------------------------------------------
                           1073 ; internal ram data
                           1074 ;--------------------------------------------------------
                           1075 	.area DSEG    (DATA)
                    0000   1076 G$per_test_counter$0$0==.
   0011                    1077 _per_test_counter::
   0011                    1078 	.ds 2
                    0002   1079 G$per_test_counter_previous$0$0==.
   0013                    1080 _per_test_counter_previous::
   0013                    1081 	.ds 2
                    0004   1082 G$display_timing$0$0==.
   0015                    1083 _display_timing::
   0015                    1084 	.ds 1
                    0005   1085 Fdisplay$dbglink_semaphore$0$0==.
   0016                    1086 _dbglink_semaphore:
   0016                    1087 	.ds 1
                           1088 ;--------------------------------------------------------
                           1089 ; overlayable items in internal ram 
                           1090 ;--------------------------------------------------------
                           1091 	.area	OSEG    (OVR,DATA)
                           1092 ;--------------------------------------------------------
                           1093 ; indirectly addressable internal ram data
                           1094 ;--------------------------------------------------------
                           1095 	.area ISEG    (DATA)
                           1096 ;--------------------------------------------------------
                           1097 ; absolute internal ram data
                           1098 ;--------------------------------------------------------
                           1099 	.area IABS    (ABS,DATA)
                           1100 	.area IABS    (ABS,DATA)
                           1101 ;--------------------------------------------------------
                           1102 ; bit data
                           1103 ;--------------------------------------------------------
                           1104 	.area BSEG    (BIT)
                           1105 ;--------------------------------------------------------
                           1106 ; paged external ram data
                           1107 ;--------------------------------------------------------
                           1108 	.area PSEG    (PAG,XDATA)
                           1109 ;--------------------------------------------------------
                           1110 ; external ram data
                           1111 ;--------------------------------------------------------
                           1112 	.area XSEG    (XDATA)
                    7020   1113 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1114 _ADCCH0VAL0	=	0x7020
                    7021   1115 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1116 _ADCCH0VAL1	=	0x7021
                    7020   1117 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1118 _ADCCH0VAL	=	0x7020
                    7022   1119 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1120 _ADCCH1VAL0	=	0x7022
                    7023   1121 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1122 _ADCCH1VAL1	=	0x7023
                    7022   1123 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1124 _ADCCH1VAL	=	0x7022
                    7024   1125 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1126 _ADCCH2VAL0	=	0x7024
                    7025   1127 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1128 _ADCCH2VAL1	=	0x7025
                    7024   1129 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1130 _ADCCH2VAL	=	0x7024
                    7026   1131 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1132 _ADCCH3VAL0	=	0x7026
                    7027   1133 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1134 _ADCCH3VAL1	=	0x7027
                    7026   1135 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1136 _ADCCH3VAL	=	0x7026
                    7028   1137 G$ADCTUNE0$0$0 == 0x7028
                    7028   1138 _ADCTUNE0	=	0x7028
                    7029   1139 G$ADCTUNE1$0$0 == 0x7029
                    7029   1140 _ADCTUNE1	=	0x7029
                    702A   1141 G$ADCTUNE2$0$0 == 0x702a
                    702A   1142 _ADCTUNE2	=	0x702a
                    7010   1143 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1144 _DMA0ADDR0	=	0x7010
                    7011   1145 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1146 _DMA0ADDR1	=	0x7011
                    7010   1147 G$DMA0ADDR$0$0 == 0x7010
                    7010   1148 _DMA0ADDR	=	0x7010
                    7014   1149 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1150 _DMA0CONFIG	=	0x7014
                    7012   1151 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1152 _DMA1ADDR0	=	0x7012
                    7013   1153 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1154 _DMA1ADDR1	=	0x7013
                    7012   1155 G$DMA1ADDR$0$0 == 0x7012
                    7012   1156 _DMA1ADDR	=	0x7012
                    7015   1157 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1158 _DMA1CONFIG	=	0x7015
                    7070   1159 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1160 _FRCOSCCONFIG	=	0x7070
                    7071   1161 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1162 _FRCOSCCTRL	=	0x7071
                    7076   1163 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1164 _FRCOSCFREQ0	=	0x7076
                    7077   1165 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1166 _FRCOSCFREQ1	=	0x7077
                    7076   1167 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1168 _FRCOSCFREQ	=	0x7076
                    7072   1169 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1170 _FRCOSCKFILT0	=	0x7072
                    7073   1171 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1172 _FRCOSCKFILT1	=	0x7073
                    7072   1173 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1174 _FRCOSCKFILT	=	0x7072
                    7078   1175 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1176 _FRCOSCPER0	=	0x7078
                    7079   1177 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1178 _FRCOSCPER1	=	0x7079
                    7078   1179 G$FRCOSCPER$0$0 == 0x7078
                    7078   1180 _FRCOSCPER	=	0x7078
                    7074   1181 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1182 _FRCOSCREF0	=	0x7074
                    7075   1183 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1184 _FRCOSCREF1	=	0x7075
                    7074   1185 G$FRCOSCREF$0$0 == 0x7074
                    7074   1186 _FRCOSCREF	=	0x7074
                    7007   1187 G$ANALOGA$0$0 == 0x7007
                    7007   1188 _ANALOGA	=	0x7007
                    700C   1189 G$GPIOENABLE$0$0 == 0x700c
                    700C   1190 _GPIOENABLE	=	0x700c
                    7003   1191 G$EXTIRQ$0$0 == 0x7003
                    7003   1192 _EXTIRQ	=	0x7003
                    7000   1193 G$INTCHGA$0$0 == 0x7000
                    7000   1194 _INTCHGA	=	0x7000
                    7001   1195 G$INTCHGB$0$0 == 0x7001
                    7001   1196 _INTCHGB	=	0x7001
                    7002   1197 G$INTCHGC$0$0 == 0x7002
                    7002   1198 _INTCHGC	=	0x7002
                    7008   1199 G$PALTA$0$0 == 0x7008
                    7008   1200 _PALTA	=	0x7008
                    7009   1201 G$PALTB$0$0 == 0x7009
                    7009   1202 _PALTB	=	0x7009
                    700A   1203 G$PALTC$0$0 == 0x700a
                    700A   1204 _PALTC	=	0x700a
                    7004   1205 G$PINCHGA$0$0 == 0x7004
                    7004   1206 _PINCHGA	=	0x7004
                    7005   1207 G$PINCHGB$0$0 == 0x7005
                    7005   1208 _PINCHGB	=	0x7005
                    7006   1209 G$PINCHGC$0$0 == 0x7006
                    7006   1210 _PINCHGC	=	0x7006
                    700B   1211 G$PINSEL$0$0 == 0x700b
                    700B   1212 _PINSEL	=	0x700b
                    7060   1213 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1214 _LPOSCCONFIG	=	0x7060
                    7066   1215 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1216 _LPOSCFREQ0	=	0x7066
                    7067   1217 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1218 _LPOSCFREQ1	=	0x7067
                    7066   1219 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1220 _LPOSCFREQ	=	0x7066
                    7062   1221 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1222 _LPOSCKFILT0	=	0x7062
                    7063   1223 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1224 _LPOSCKFILT1	=	0x7063
                    7062   1225 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1226 _LPOSCKFILT	=	0x7062
                    7068   1227 G$LPOSCPER0$0$0 == 0x7068
                    7068   1228 _LPOSCPER0	=	0x7068
                    7069   1229 G$LPOSCPER1$0$0 == 0x7069
                    7069   1230 _LPOSCPER1	=	0x7069
                    7068   1231 G$LPOSCPER$0$0 == 0x7068
                    7068   1232 _LPOSCPER	=	0x7068
                    7064   1233 G$LPOSCREF0$0$0 == 0x7064
                    7064   1234 _LPOSCREF0	=	0x7064
                    7065   1235 G$LPOSCREF1$0$0 == 0x7065
                    7065   1236 _LPOSCREF1	=	0x7065
                    7064   1237 G$LPOSCREF$0$0 == 0x7064
                    7064   1238 _LPOSCREF	=	0x7064
                    7054   1239 G$LPXOSCGM$0$0 == 0x7054
                    7054   1240 _LPXOSCGM	=	0x7054
                    7F01   1241 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1242 _MISCCTRL	=	0x7f01
                    7053   1243 G$OSCCALIB$0$0 == 0x7053
                    7053   1244 _OSCCALIB	=	0x7053
                    7050   1245 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1246 _OSCFORCERUN	=	0x7050
                    7052   1247 G$OSCREADY$0$0 == 0x7052
                    7052   1248 _OSCREADY	=	0x7052
                    7051   1249 G$OSCRUN$0$0 == 0x7051
                    7051   1250 _OSCRUN	=	0x7051
                    7040   1251 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1252 _RADIOFDATAADDR0	=	0x7040
                    7041   1253 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1254 _RADIOFDATAADDR1	=	0x7041
                    7040   1255 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1256 _RADIOFDATAADDR	=	0x7040
                    7042   1257 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1258 _RADIOFSTATADDR0	=	0x7042
                    7043   1259 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1260 _RADIOFSTATADDR1	=	0x7043
                    7042   1261 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1262 _RADIOFSTATADDR	=	0x7042
                    7044   1263 G$RADIOMUX$0$0 == 0x7044
                    7044   1264 _RADIOMUX	=	0x7044
                    7084   1265 G$SCRATCH0$0$0 == 0x7084
                    7084   1266 _SCRATCH0	=	0x7084
                    7085   1267 G$SCRATCH1$0$0 == 0x7085
                    7085   1268 _SCRATCH1	=	0x7085
                    7086   1269 G$SCRATCH2$0$0 == 0x7086
                    7086   1270 _SCRATCH2	=	0x7086
                    7087   1271 G$SCRATCH3$0$0 == 0x7087
                    7087   1272 _SCRATCH3	=	0x7087
                    7F00   1273 G$SILICONREV$0$0 == 0x7f00
                    7F00   1274 _SILICONREV	=	0x7f00
                    7F19   1275 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1276 _XTALAMPL	=	0x7f19
                    7F18   1277 G$XTALOSC$0$0 == 0x7f18
                    7F18   1278 _XTALOSC	=	0x7f18
                    7F1A   1279 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1280 _XTALREADY	=	0x7f1a
                    3F82   1281 G$XDPTR0$0$0 == 0x3f82
                    3F82   1282 _XDPTR0	=	0x3f82
                    3F84   1283 G$XDPTR1$0$0 == 0x3f84
                    3F84   1284 _XDPTR1	=	0x3f84
                    3FA8   1285 G$XIE$0$0 == 0x3fa8
                    3FA8   1286 _XIE	=	0x3fa8
                    3FB8   1287 G$XIP$0$0 == 0x3fb8
                    3FB8   1288 _XIP	=	0x3fb8
                    3F87   1289 G$XPCON$0$0 == 0x3f87
                    3F87   1290 _XPCON	=	0x3f87
                    3FCA   1291 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1292 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1293 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1294 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1295 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1296 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1297 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1298 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1299 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1300 _XADCCLKSRC	=	0x3fd1
                    3FC9   1301 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1302 _XADCCONV	=	0x3fc9
                    3FE1   1303 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1304 _XANALOGCOMP	=	0x3fe1
                    3FC6   1305 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1306 _XCLKCON	=	0x3fc6
                    3FC7   1307 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1308 _XCLKSTAT	=	0x3fc7
                    3F97   1309 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1310 _XCODECONFIG	=	0x3f97
                    3FE3   1311 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1312 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1313 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1314 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1315 G$XDIRA$0$0 == 0x3f89
                    3F89   1316 _XDIRA	=	0x3f89
                    3F8A   1317 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1318 _XDIRB	=	0x3f8a
                    3F8B   1319 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1320 _XDIRC	=	0x3f8b
                    3F8E   1321 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1322 _XDIRR	=	0x3f8e
                    3FC8   1323 G$XPINA$0$0 == 0x3fc8
                    3FC8   1324 _XPINA	=	0x3fc8
                    3FE8   1325 G$XPINB$0$0 == 0x3fe8
                    3FE8   1326 _XPINB	=	0x3fe8
                    3FF8   1327 G$XPINC$0$0 == 0x3ff8
                    3FF8   1328 _XPINC	=	0x3ff8
                    3F8D   1329 G$XPINR$0$0 == 0x3f8d
                    3F8D   1330 _XPINR	=	0x3f8d
                    3F80   1331 G$XPORTA$0$0 == 0x3f80
                    3F80   1332 _XPORTA	=	0x3f80
                    3F88   1333 G$XPORTB$0$0 == 0x3f88
                    3F88   1334 _XPORTB	=	0x3f88
                    3F90   1335 G$XPORTC$0$0 == 0x3f90
                    3F90   1336 _XPORTC	=	0x3f90
                    3F8C   1337 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1338 _XPORTR	=	0x3f8c
                    3FCE   1339 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1340 _XIC0CAPT0	=	0x3fce
                    3FCF   1341 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1342 _XIC0CAPT1	=	0x3fcf
                    3FCE   1343 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1344 _XIC0CAPT	=	0x3fce
                    3FCC   1345 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1346 _XIC0MODE	=	0x3fcc
                    3FCD   1347 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1348 _XIC0STATUS	=	0x3fcd
                    3FD6   1349 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1350 _XIC1CAPT0	=	0x3fd6
                    3FD7   1351 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1352 _XIC1CAPT1	=	0x3fd7
                    3FD6   1353 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1354 _XIC1CAPT	=	0x3fd6
                    3FD4   1355 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1356 _XIC1MODE	=	0x3fd4
                    3FD5   1357 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   1358 _XIC1STATUS	=	0x3fd5
                    3F92   1359 G$XNVADDR0$0$0 == 0x3f92
                    3F92   1360 _XNVADDR0	=	0x3f92
                    3F93   1361 G$XNVADDR1$0$0 == 0x3f93
                    3F93   1362 _XNVADDR1	=	0x3f93
                    3F92   1363 G$XNVADDR$0$0 == 0x3f92
                    3F92   1364 _XNVADDR	=	0x3f92
                    3F94   1365 G$XNVDATA0$0$0 == 0x3f94
                    3F94   1366 _XNVDATA0	=	0x3f94
                    3F95   1367 G$XNVDATA1$0$0 == 0x3f95
                    3F95   1368 _XNVDATA1	=	0x3f95
                    3F94   1369 G$XNVDATA$0$0 == 0x3f94
                    3F94   1370 _XNVDATA	=	0x3f94
                    3F96   1371 G$XNVKEY$0$0 == 0x3f96
                    3F96   1372 _XNVKEY	=	0x3f96
                    3F91   1373 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   1374 _XNVSTATUS	=	0x3f91
                    3FBC   1375 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   1376 _XOC0COMP0	=	0x3fbc
                    3FBD   1377 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   1378 _XOC0COMP1	=	0x3fbd
                    3FBC   1379 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   1380 _XOC0COMP	=	0x3fbc
                    3FB9   1381 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   1382 _XOC0MODE	=	0x3fb9
                    3FBA   1383 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   1384 _XOC0PIN	=	0x3fba
                    3FBB   1385 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   1386 _XOC0STATUS	=	0x3fbb
                    3FC4   1387 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   1388 _XOC1COMP0	=	0x3fc4
                    3FC5   1389 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   1390 _XOC1COMP1	=	0x3fc5
                    3FC4   1391 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   1392 _XOC1COMP	=	0x3fc4
                    3FC1   1393 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   1394 _XOC1MODE	=	0x3fc1
                    3FC2   1395 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   1396 _XOC1PIN	=	0x3fc2
                    3FC3   1397 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   1398 _XOC1STATUS	=	0x3fc3
                    3FB1   1399 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   1400 _XRADIOACC	=	0x3fb1
                    3FB3   1401 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   1402 _XRADIOADDR0	=	0x3fb3
                    3FB2   1403 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   1404 _XRADIOADDR1	=	0x3fb2
                    3FB7   1405 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   1406 _XRADIODATA0	=	0x3fb7
                    3FB6   1407 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   1408 _XRADIODATA1	=	0x3fb6
                    3FB5   1409 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   1410 _XRADIODATA2	=	0x3fb5
                    3FB4   1411 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   1412 _XRADIODATA3	=	0x3fb4
                    3FBE   1413 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   1414 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1415 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   1416 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1417 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   1418 _XRADIOSTAT	=	0x3fbe
                    3FDF   1419 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   1420 _XSPCLKSRC	=	0x3fdf
                    3FDC   1421 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   1422 _XSPMODE	=	0x3fdc
                    3FDE   1423 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   1424 _XSPSHREG	=	0x3fde
                    3FDD   1425 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   1426 _XSPSTATUS	=	0x3fdd
                    3F9A   1427 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   1428 _XT0CLKSRC	=	0x3f9a
                    3F9C   1429 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   1430 _XT0CNT0	=	0x3f9c
                    3F9D   1431 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   1432 _XT0CNT1	=	0x3f9d
                    3F9C   1433 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   1434 _XT0CNT	=	0x3f9c
                    3F99   1435 G$XT0MODE$0$0 == 0x3f99
                    3F99   1436 _XT0MODE	=	0x3f99
                    3F9E   1437 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   1438 _XT0PERIOD0	=	0x3f9e
                    3F9F   1439 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   1440 _XT0PERIOD1	=	0x3f9f
                    3F9E   1441 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   1442 _XT0PERIOD	=	0x3f9e
                    3F9B   1443 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   1444 _XT0STATUS	=	0x3f9b
                    3FA2   1445 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   1446 _XT1CLKSRC	=	0x3fa2
                    3FA4   1447 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   1448 _XT1CNT0	=	0x3fa4
                    3FA5   1449 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   1450 _XT1CNT1	=	0x3fa5
                    3FA4   1451 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   1452 _XT1CNT	=	0x3fa4
                    3FA1   1453 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   1454 _XT1MODE	=	0x3fa1
                    3FA6   1455 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   1456 _XT1PERIOD0	=	0x3fa6
                    3FA7   1457 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   1458 _XT1PERIOD1	=	0x3fa7
                    3FA6   1459 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   1460 _XT1PERIOD	=	0x3fa6
                    3FA3   1461 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   1462 _XT1STATUS	=	0x3fa3
                    3FAA   1463 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   1464 _XT2CLKSRC	=	0x3faa
                    3FAC   1465 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   1466 _XT2CNT0	=	0x3fac
                    3FAD   1467 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   1468 _XT2CNT1	=	0x3fad
                    3FAC   1469 G$XT2CNT$0$0 == 0x3fac
                    3FAC   1470 _XT2CNT	=	0x3fac
                    3FA9   1471 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   1472 _XT2MODE	=	0x3fa9
                    3FAE   1473 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   1474 _XT2PERIOD0	=	0x3fae
                    3FAF   1475 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   1476 _XT2PERIOD1	=	0x3faf
                    3FAE   1477 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   1478 _XT2PERIOD	=	0x3fae
                    3FAB   1479 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   1480 _XT2STATUS	=	0x3fab
                    3FE4   1481 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   1482 _XU0CTRL	=	0x3fe4
                    3FE7   1483 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   1484 _XU0MODE	=	0x3fe7
                    3FE6   1485 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   1486 _XU0SHREG	=	0x3fe6
                    3FE5   1487 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   1488 _XU0STATUS	=	0x3fe5
                    3FEC   1489 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   1490 _XU1CTRL	=	0x3fec
                    3FEF   1491 G$XU1MODE$0$0 == 0x3fef
                    3FEF   1492 _XU1MODE	=	0x3fef
                    3FEE   1493 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   1494 _XU1SHREG	=	0x3fee
                    3FED   1495 G$XU1STATUS$0$0 == 0x3fed
                    3FED   1496 _XU1STATUS	=	0x3fed
                    3FDA   1497 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   1498 _XWDTCFG	=	0x3fda
                    3FDB   1499 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   1500 _XWDTRESET	=	0x3fdb
                    3FF1   1501 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   1502 _XWTCFGA	=	0x3ff1
                    3FF9   1503 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   1504 _XWTCFGB	=	0x3ff9
                    3FF2   1505 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   1506 _XWTCNTA0	=	0x3ff2
                    3FF3   1507 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   1508 _XWTCNTA1	=	0x3ff3
                    3FF2   1509 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   1510 _XWTCNTA	=	0x3ff2
                    3FFA   1511 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   1512 _XWTCNTB0	=	0x3ffa
                    3FFB   1513 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   1514 _XWTCNTB1	=	0x3ffb
                    3FFA   1515 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   1516 _XWTCNTB	=	0x3ffa
                    3FEB   1517 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   1518 _XWTCNTR1	=	0x3feb
                    3FF4   1519 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   1520 _XWTEVTA0	=	0x3ff4
                    3FF5   1521 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   1522 _XWTEVTA1	=	0x3ff5
                    3FF4   1523 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   1524 _XWTEVTA	=	0x3ff4
                    3FF6   1525 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   1526 _XWTEVTB0	=	0x3ff6
                    3FF7   1527 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   1528 _XWTEVTB1	=	0x3ff7
                    3FF6   1529 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   1530 _XWTEVTB	=	0x3ff6
                    3FFC   1531 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   1532 _XWTEVTC0	=	0x3ffc
                    3FFD   1533 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   1534 _XWTEVTC1	=	0x3ffd
                    3FFC   1535 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   1536 _XWTEVTC	=	0x3ffc
                    3FFE   1537 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   1538 _XWTEVTD0	=	0x3ffe
                    3FFF   1539 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   1540 _XWTEVTD1	=	0x3fff
                    3FFE   1541 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   1542 _XWTEVTD	=	0x3ffe
                    3FE9   1543 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   1544 _XWTIRQEN	=	0x3fe9
                    3FEA   1545 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   1546 _XWTSTAT	=	0x3fea
                    FC06   1547 Fdisplay$flash_deviceid$0$0 == 0xfc06
                    FC06   1548 _flash_deviceid	=	0xfc06
                    FC00   1549 Fdisplay$flash_calsector$0$0 == 0xfc00
                    FC00   1550 _flash_calsector	=	0xfc00
                           1551 ;--------------------------------------------------------
                           1552 ; absolute external ram data
                           1553 ;--------------------------------------------------------
                           1554 	.area XABS    (ABS,XDATA)
                           1555 ;--------------------------------------------------------
                           1556 ; external initialized ram data
                           1557 ;--------------------------------------------------------
                           1558 	.area XISEG   (XDATA)
                           1559 	.area HOME    (CODE)
                           1560 	.area GSINIT0 (CODE)
                           1561 	.area GSINIT1 (CODE)
                           1562 	.area GSINIT2 (CODE)
                           1563 	.area GSINIT3 (CODE)
                           1564 	.area GSINIT4 (CODE)
                           1565 	.area GSINIT5 (CODE)
                           1566 	.area GSINIT  (CODE)
                           1567 	.area GSFINAL (CODE)
                           1568 	.area CSEG    (CODE)
                           1569 ;--------------------------------------------------------
                           1570 ; global & static initialisations
                           1571 ;--------------------------------------------------------
                           1572 	.area HOME    (CODE)
                           1573 	.area GSINIT  (CODE)
                           1574 	.area GSFINAL (CODE)
                           1575 	.area GSINIT  (CODE)
                    0000   1576 	C$display.c$57$1$240 ==.
                           1577 ;	display.c:57: uint16_t __data per_test_counter = 0, per_test_counter_previous = 0;
   0132 E4                 1578 	clr	a
   0133 F5 11              1579 	mov	_per_test_counter,a
   0135 F5 12              1580 	mov	(_per_test_counter + 1),a
                    0005   1581 	C$display.c$57$1$240 ==.
                           1582 ;	display.c:57: extern uint16_t __data pkts_received, pkts_missing;
   0137 E4                 1583 	clr	a
   0138 F5 13              1584 	mov	_per_test_counter_previous,a
   013A F5 14              1585 	mov	(_per_test_counter_previous + 1),a
                    000A   1586 	C$display.c$59$1$240 ==.
                           1587 ;	display.c:59: uint8_t __data display_timing = 2;
   013C 75 15 02           1588 	mov	_display_timing,#0x02
                    000D   1589 	C$display.c$121$1$240 ==.
                           1590 ;	display.c:121: static volatile uint8_t dbglink_semaphore = 0;
   013F 75 16 00           1591 	mov	_dbglink_semaphore,#0x00
                           1592 ;--------------------------------------------------------
                           1593 ; Home
                           1594 ;--------------------------------------------------------
                           1595 	.area HOME    (CODE)
                           1596 	.area HOME    (CODE)
                           1597 ;--------------------------------------------------------
                           1598 ; code
                           1599 ;--------------------------------------------------------
                           1600 	.area CSEG    (CODE)
                           1601 ;------------------------------------------------------------
                           1602 ;Allocation info for local variables in function 'display_received_packet'
                           1603 ;------------------------------------------------------------
                           1604 ;st                        Allocated to registers r6 r7 
                           1605 ;retran                    Allocated to registers r5 
                           1606 ;------------------------------------------------------------
                    0000   1607 	G$display_received_packet$0$0 ==.
                    0000   1608 	C$display.c$61$0$0 ==.
                           1609 ;	display.c:61: uint8_t display_received_packet(struct axradio_status __xdata *st)
                           1610 ;	-----------------------------------------
                           1611 ;	 function display_received_packet
                           1612 ;	-----------------------------------------
   347D                    1613 _display_received_packet:
                    0007   1614 	ar7 = 0x07
                    0006   1615 	ar6 = 0x06
                    0005   1616 	ar5 = 0x05
                    0004   1617 	ar4 = 0x04
                    0003   1618 	ar3 = 0x03
                    0002   1619 	ar2 = 0x02
                    0001   1620 	ar1 = 0x01
                    0000   1621 	ar0 = 0x00
   347D AE 82              1622 	mov	r6,dpl
   347F AF 83              1623 	mov	r7,dph
                    0004   1624 	C$display.c$63$1$0 ==.
                           1625 ;	display.c:63: uint8_t retran = 0;
   3481 7D 00              1626 	mov	r5,#0x00
                    0006   1627 	C$display.c$70$1$217 ==.
                           1628 ;	display.c:70: if (display_timing & 0x02) {
   3483 E5 15              1629 	mov	a,_display_timing
   3485 30 E1 03           1630 	jnb	acc.1,00107$
                    000B   1631 	C$display.c$71$2$218 ==.
                           1632 ;	display.c:71: display_timing &= 0x01;
   3488 53 15 01           1633 	anl	_display_timing,#0x01
                    000E   1634 	C$display.c$75$1$217 ==.
                           1635 ;	display.c:75: display_setpos(0x03);
   348B                    1636 00107$:
                    000E   1637 	C$display.c$100$1$217 ==.
                           1638 ;	display.c:100: if (framing_insert_counter) {
   348B 90 56 8C           1639 	mov	dptr,#_framing_insert_counter
   348E E4                 1640 	clr	a
   348F 93                 1641 	movc	a,@a+dptr
   3490 FC                 1642 	mov	r4,a
   3491 60 7B              1643 	jz	00134$
                    0016   1644 	C$display.c$101$2$229 ==.
                           1645 ;	display.c:101: per_test_counter_previous = per_test_counter;
   3493 85 11 13           1646 	mov	_per_test_counter_previous,_per_test_counter
   3496 85 12 14           1647 	mov	(_per_test_counter_previous + 1),(_per_test_counter + 1)
                    001C   1648 	C$display.c$102$2$229 ==.
                           1649 ;	display.c:102: per_test_counter = ((st->u.rx.pktdata[framing_counter_pos+1])<<8) | st->u.rx.pktdata[framing_counter_pos];
   3499 74 06              1650 	mov	a,#0x06
   349B 2E                 1651 	add	a,r6
   349C FE                 1652 	mov	r6,a
   349D E4                 1653 	clr	a
   349E 3F                 1654 	addc	a,r7
   349F FF                 1655 	mov	r7,a
   34A0 74 14              1656 	mov	a,#0x14
   34A2 2E                 1657 	add	a,r6
   34A3 F5 82              1658 	mov	dpl,a
   34A5 E4                 1659 	clr	a
   34A6 3F                 1660 	addc	a,r7
   34A7 F5 83              1661 	mov	dph,a
   34A9 E0                 1662 	movx	a,@dptr
   34AA FE                 1663 	mov	r6,a
   34AB A3                 1664 	inc	dptr
   34AC E0                 1665 	movx	a,@dptr
   34AD FF                 1666 	mov	r7,a
   34AE 90 56 8D           1667 	mov	dptr,#_framing_counter_pos
   34B1 E4                 1668 	clr	a
   34B2 93                 1669 	movc	a,@a+dptr
   34B3 FC                 1670 	mov	r4,a
   34B4 FA                 1671 	mov	r2,a
   34B5 7B 00              1672 	mov	r3,#0x00
   34B7 0A                 1673 	inc	r2
   34B8 BA 00 01           1674 	cjne	r2,#0x00,00147$
   34BB 0B                 1675 	inc	r3
   34BC                    1676 00147$:
   34BC EA                 1677 	mov	a,r2
   34BD 2E                 1678 	add	a,r6
   34BE F5 82              1679 	mov	dpl,a
   34C0 EB                 1680 	mov	a,r3
   34C1 3F                 1681 	addc	a,r7
   34C2 F5 83              1682 	mov	dph,a
   34C4 E0                 1683 	movx	a,@dptr
   34C5 FA                 1684 	mov	r2,a
   34C6 7B 00              1685 	mov	r3,#0x00
   34C8 EC                 1686 	mov	a,r4
   34C9 2E                 1687 	add	a,r6
   34CA F5 82              1688 	mov	dpl,a
   34CC E4                 1689 	clr	a
   34CD 3F                 1690 	addc	a,r7
   34CE F5 83              1691 	mov	dph,a
   34D0 E0                 1692 	movx	a,@dptr
   34D1 FF                 1693 	mov	r7,a
   34D2 7E 00              1694 	mov	r6,#0x00
   34D4 4B                 1695 	orl	a,r3
   34D5 F5 11              1696 	mov	_per_test_counter,a
   34D7 EE                 1697 	mov	a,r6
   34D8 4A                 1698 	orl	a,r2
   34D9 F5 12              1699 	mov	(_per_test_counter + 1),a
                    005E   1700 	C$display.c$103$2$229 ==.
                           1701 ;	display.c:103: if (pkts_received != 1) {
   34DB 74 01              1702 	mov	a,#0x01
   34DD B5 22 06           1703 	cjne	a,_pkts_received,00148$
   34E0 E4                 1704 	clr	a
   34E1 B5 23 02           1705 	cjne	a,(_pkts_received + 1),00148$
   34E4 80 28              1706 	sjmp	00134$
   34E6                    1707 00148$:
                    0069   1708 	C$display.c$104$3$230 ==.
                           1709 ;	display.c:104: if (per_test_counter == per_test_counter_previous)
   34E6 E5 13              1710 	mov	a,_per_test_counter_previous
   34E8 B5 11 09           1711 	cjne	a,_per_test_counter,00120$
   34EB E5 14              1712 	mov	a,(_per_test_counter_previous + 1)
   34ED B5 12 04           1713 	cjne	a,(_per_test_counter + 1),00120$
                    0073   1714 	C$display.c$105$3$230 ==.
                           1715 ;	display.c:105: retran = 1;
   34F0 7D 01              1716 	mov	r5,#0x01
   34F2 80 1A              1717 	sjmp	00134$
   34F4                    1718 00120$:
                    0077   1719 	C$display.c$107$3$230 ==.
                           1720 ;	display.c:107: pkts_missing += per_test_counter - per_test_counter_previous - 1;
   34F4 E5 11              1721 	mov	a,_per_test_counter
   34F6 C3                 1722 	clr	c
   34F7 95 13              1723 	subb	a,_per_test_counter_previous
   34F9 FE                 1724 	mov	r6,a
   34FA E5 12              1725 	mov	a,(_per_test_counter + 1)
   34FC 95 14              1726 	subb	a,(_per_test_counter_previous + 1)
   34FE FF                 1727 	mov	r7,a
   34FF 1E                 1728 	dec	r6
   3500 BE FF 01           1729 	cjne	r6,#0xFF,00151$
   3503 1F                 1730 	dec	r7
   3504                    1731 00151$:
   3504 EE                 1732 	mov	a,r6
   3505 25 24              1733 	add	a,_pkts_missing
   3507 F5 24              1734 	mov	_pkts_missing,a
   3509 EF                 1735 	mov	a,r7
   350A 35 25              1736 	addc	a,(_pkts_missing + 1)
   350C F5 25              1737 	mov	(_pkts_missing + 1),a
                    0091   1738 	C$display.c$115$1$217 ==.
                           1739 ;	display.c:115: display_writestr("?");
   350E                    1740 00134$:
                    0091   1741 	C$display.c$117$1$217 ==.
                           1742 ;	display.c:117: return retran;
   350E 8D 82              1743 	mov	dpl,r5
                    0093   1744 	C$display.c$118$1$217 ==.
                    0093   1745 	XG$display_received_packet$0$0 ==.
   3510 22                 1746 	ret
                           1747 ;------------------------------------------------------------
                           1748 ;Allocation info for local variables in function 'wait_dbglink_free'
                           1749 ;------------------------------------------------------------
                    0094   1750 	Fdisplay$wait_dbglink_free$0$0 ==.
                    0094   1751 	C$display.c$123$1$217 ==.
                           1752 ;	display.c:123: static void wait_dbglink_free(void)
                           1753 ;	-----------------------------------------
                           1754 ;	 function wait_dbglink_free
                           1755 ;	-----------------------------------------
   3511                    1756 _wait_dbglink_free:
   3511                    1757 00104$:
                    0094   1758 	C$display.c$126$2$238 ==.
                           1759 ;	display.c:126: if (dbglink_txfree() >= 56)
   3511 12 5C 6B           1760 	lcall	_dbglink_txfree
   3514 AF 82              1761 	mov	r7,dpl
   3516 BF 38 00           1762 	cjne	r7,#0x38,00112$
   3519                    1763 00112$:
   3519 50 0B              1764 	jnc	00106$
                    009E   1765 	C$display.c$128$2$238 ==.
                           1766 ;	display.c:128: wtimer_runcallbacks();
   351B 12 42 D3           1767 	lcall	_wtimer_runcallbacks
                    00A1   1768 	C$display.c$129$2$238 ==.
                           1769 ;	display.c:129: wtimer_idle(WTFLAG_CANSTANDBY);
   351E 75 82 02           1770 	mov	dpl,#0x02
   3521 12 43 57           1771 	lcall	_wtimer_idle
   3524 80 EB              1772 	sjmp	00104$
   3526                    1773 00106$:
                    00A9   1774 	C$display.c$131$1$237 ==.
                    00A9   1775 	XFdisplay$wait_dbglink_free$0$0 ==.
   3526 22                 1776 	ret
                           1777 ;------------------------------------------------------------
                           1778 ;Allocation info for local variables in function 'dbglink_received_packet'
                           1779 ;------------------------------------------------------------
                           1780 ;st                        Allocated to registers r6 r7 
                           1781 ;pktlen                    Allocated to registers r4 r5 
                           1782 ;i                         Allocated to registers r2 r3 
                           1783 ;pktdata                   Allocated to registers r6 r7 
                           1784 ;------------------------------------------------------------
                    00AA   1785 	G$dbglink_received_packet$0$0 ==.
                    00AA   1786 	C$display.c$134$1$237 ==.
                           1787 ;	display.c:134: void dbglink_received_packet(struct axradio_status __xdata *st)
                           1788 ;	-----------------------------------------
                           1789 ;	 function dbglink_received_packet
                           1790 ;	-----------------------------------------
   3527                    1791 _dbglink_received_packet:
   3527 AE 82              1792 	mov	r6,dpl
   3529 AF 83              1793 	mov	r7,dph
                    00AE   1794 	C$display.c$138$1$240 ==.
                           1795 ;	display.c:138: if (!(DBGLNKSTAT & 0x10))
   352B E5 E2              1796 	mov	a,_DBGLNKSTAT
   352D 20 E4 03           1797 	jb	acc.4,00102$
                    00B3   1798 	C$display.c$139$1$240 ==.
                           1799 ;	display.c:139: return;
   3530 02 37 3C           1800 	ljmp	00111$
   3533                    1801 00102$:
                    00B6   1802 	C$display.c$140$1$240 ==.
                           1803 ;	display.c:140: ++dbglink_semaphore;
   3533 05 16              1804 	inc	_dbglink_semaphore
                    00B8   1805 	C$display.c$141$1$240 ==.
                           1806 ;	display.c:141: if (dbglink_semaphore != 1) {
   3535 74 01              1807 	mov	a,#0x01
   3537 B5 16 02           1808 	cjne	a,_dbglink_semaphore,00125$
   353A 80 05              1809 	sjmp	00104$
   353C                    1810 00125$:
                    00BF   1811 	C$display.c$142$2$241 ==.
                           1812 ;	display.c:142: --dbglink_semaphore;
   353C 15 16              1813 	dec	_dbglink_semaphore
                    00C1   1814 	C$display.c$143$2$241 ==.
                           1815 ;	display.c:143: return;
   353E 02 37 3C           1816 	ljmp	00111$
   3541                    1817 00104$:
                    00C4   1818 	C$display.c$145$1$240 ==.
                           1819 ;	display.c:145: pktlen = st->u.rx.pktlen + axradio_framing_maclen;
   3541 74 06              1820 	mov	a,#0x06
   3543 2E                 1821 	add	a,r6
   3544 FE                 1822 	mov	r6,a
   3545 E4                 1823 	clr	a
   3546 3F                 1824 	addc	a,r7
   3547 FF                 1825 	mov	r7,a
   3548 74 16              1826 	mov	a,#0x16
   354A 2E                 1827 	add	a,r6
   354B F5 82              1828 	mov	dpl,a
   354D E4                 1829 	clr	a
   354E 3F                 1830 	addc	a,r7
   354F F5 83              1831 	mov	dph,a
   3551 E0                 1832 	movx	a,@dptr
   3552 FC                 1833 	mov	r4,a
   3553 A3                 1834 	inc	dptr
   3554 E0                 1835 	movx	a,@dptr
   3555 FD                 1836 	mov	r5,a
   3556 90 56 30           1837 	mov	dptr,#_axradio_framing_maclen
   3559 E4                 1838 	clr	a
   355A 93                 1839 	movc	a,@a+dptr
   355B 7A 00              1840 	mov	r2,#0x00
   355D 2C                 1841 	add	a,r4
   355E FC                 1842 	mov	r4,a
   355F EA                 1843 	mov	a,r2
   3560 3D                 1844 	addc	a,r5
   3561 FD                 1845 	mov	r5,a
                    00E5   1846 	C$display.c$146$1$240 ==.
                           1847 ;	display.c:146: wait_dbglink_free();
   3562 C0 07              1848 	push	ar7
   3564 C0 06              1849 	push	ar6
   3566 C0 05              1850 	push	ar5
   3568 C0 04              1851 	push	ar4
   356A 12 35 11           1852 	lcall	_wait_dbglink_free
                    00F0   1853 	C$display.c$147$1$240 ==.
                           1854 ;	display.c:147: dbglink_writestr("RX counter=");
   356D 90 57 80           1855 	mov	dptr,#__str_0
   3570 75 F0 80           1856 	mov	b,#0x80
   3573 12 4B 5A           1857 	lcall	_dbglink_writestr
                    00F9   1858 	C$display.c$148$1$240 ==.
                           1859 ;	display.c:148: dbglink_writenum16(pkts_received, 5, 0);
   3576 E4                 1860 	clr	a
   3577 C0 E0              1861 	push	acc
   3579 74 05              1862 	mov	a,#0x05
   357B C0 E0              1863 	push	acc
   357D 85 22 82           1864 	mov	dpl,_pkts_received
   3580 85 23 83           1865 	mov	dph,(_pkts_received + 1)
   3583 12 53 4B           1866 	lcall	_dbglink_writenum16
   3586 15 81              1867 	dec	sp
   3588 15 81              1868 	dec	sp
                    010D   1869 	C$display.c$149$1$240 ==.
                           1870 ;	display.c:149: dbglink_writestr(" length=");
   358A 90 57 8C           1871 	mov	dptr,#__str_1
   358D 75 F0 80           1872 	mov	b,#0x80
   3590 12 4B 5A           1873 	lcall	_dbglink_writestr
   3593 D0 04              1874 	pop	ar4
   3595 D0 05              1875 	pop	ar5
                    011A   1876 	C$display.c$150$1$240 ==.
                           1877 ;	display.c:150: dbglink_writenum16(pktlen, 3, 0);
   3597 C0 05              1878 	push	ar5
   3599 C0 04              1879 	push	ar4
   359B E4                 1880 	clr	a
   359C C0 E0              1881 	push	acc
   359E 74 03              1882 	mov	a,#0x03
   35A0 C0 E0              1883 	push	acc
   35A2 8C 82              1884 	mov	dpl,r4
   35A4 8D 83              1885 	mov	dph,r5
   35A6 12 53 4B           1886 	lcall	_dbglink_writenum16
   35A9 15 81              1887 	dec	sp
   35AB 15 81              1888 	dec	sp
                    0130   1889 	C$display.c$151$1$240 ==.
                           1890 ;	display.c:151: wait_dbglink_free();
   35AD 12 35 11           1891 	lcall	_wait_dbglink_free
                    0133   1892 	C$display.c$152$1$240 ==.
                           1893 ;	display.c:152: dbglink_writestr(" RSSI=");
   35B0 90 57 95           1894 	mov	dptr,#__str_2
   35B3 75 F0 80           1895 	mov	b,#0x80
   35B6 12 4B 5A           1896 	lcall	_dbglink_writestr
   35B9 D0 04              1897 	pop	ar4
   35BB D0 05              1898 	pop	ar5
   35BD D0 06              1899 	pop	ar6
   35BF D0 07              1900 	pop	ar7
                    0144   1901 	C$display.c$153$1$240 ==.
                           1902 ;	display.c:153: dbglink_writenum16(st->u.rx.phy.rssi, 3, WRNUM_SIGNED);
   35C1 8E 82              1903 	mov	dpl,r6
   35C3 8F 83              1904 	mov	dph,r7
   35C5 E0                 1905 	movx	a,@dptr
   35C6 FA                 1906 	mov	r2,a
   35C7 A3                 1907 	inc	dptr
   35C8 E0                 1908 	movx	a,@dptr
   35C9 FB                 1909 	mov	r3,a
   35CA C0 07              1910 	push	ar7
   35CC C0 06              1911 	push	ar6
   35CE C0 05              1912 	push	ar5
   35D0 C0 04              1913 	push	ar4
   35D2 74 01              1914 	mov	a,#0x01
   35D4 C0 E0              1915 	push	acc
   35D6 74 03              1916 	mov	a,#0x03
   35D8 C0 E0              1917 	push	acc
   35DA 8A 82              1918 	mov	dpl,r2
   35DC 8B 83              1919 	mov	dph,r3
   35DE 12 53 4B           1920 	lcall	_dbglink_writenum16
   35E1 15 81              1921 	dec	sp
   35E3 15 81              1922 	dec	sp
                    0168   1923 	C$display.c$154$1$240 ==.
                           1924 ;	display.c:154: dbglink_tx('\n');
   35E5 75 82 0A           1925 	mov	dpl,#0x0A
   35E8 12 3B C5           1926 	lcall	_dbglink_tx
                    016E   1927 	C$display.c$155$1$240 ==.
                           1928 ;	display.c:155: wait_dbglink_free();
   35EB 12 35 11           1929 	lcall	_wait_dbglink_free
                    0171   1930 	C$display.c$156$1$240 ==.
                           1931 ;	display.c:156: dbglink_writestr("  freqoffset=");
   35EE 90 57 9C           1932 	mov	dptr,#__str_3
   35F1 75 F0 80           1933 	mov	b,#0x80
   35F4 12 4B 5A           1934 	lcall	_dbglink_writestr
   35F7 D0 04              1935 	pop	ar4
   35F9 D0 05              1936 	pop	ar5
   35FB D0 06              1937 	pop	ar6
   35FD D0 07              1938 	pop	ar7
                    0182   1939 	C$display.c$157$1$240 ==.
                           1940 ;	display.c:157: dbglink_writenum32(axradio_conv_freq_tohz(st->u.rx.phy.offset), 7, WRNUM_SIGNED);
   35FF 8E 82              1941 	mov	dpl,r6
   3601 8F 83              1942 	mov	dph,r7
   3603 A3                 1943 	inc	dptr
   3604 A3                 1944 	inc	dptr
   3605 E0                 1945 	movx	a,@dptr
   3606 F8                 1946 	mov	r0,a
   3607 A3                 1947 	inc	dptr
   3608 E0                 1948 	movx	a,@dptr
   3609 F9                 1949 	mov	r1,a
   360A A3                 1950 	inc	dptr
   360B E0                 1951 	movx	a,@dptr
   360C FA                 1952 	mov	r2,a
   360D A3                 1953 	inc	dptr
   360E E0                 1954 	movx	a,@dptr
   360F 88 82              1955 	mov	dpl,r0
   3611 89 83              1956 	mov	dph,r1
   3613 8A F0              1957 	mov	b,r2
   3615 C0 07              1958 	push	ar7
   3617 C0 06              1959 	push	ar6
   3619 C0 05              1960 	push	ar5
   361B C0 04              1961 	push	ar4
   361D 12 04 F7           1962 	lcall	_axradio_conv_freq_tohz
   3620 A8 82              1963 	mov	r0,dpl
   3622 A9 83              1964 	mov	r1,dph
   3624 AA F0              1965 	mov	r2,b
   3626 FB                 1966 	mov	r3,a
   3627 74 01              1967 	mov	a,#0x01
   3629 C0 E0              1968 	push	acc
   362B 74 07              1969 	mov	a,#0x07
   362D C0 E0              1970 	push	acc
   362F 88 82              1971 	mov	dpl,r0
   3631 89 83              1972 	mov	dph,r1
   3633 8A F0              1973 	mov	b,r2
   3635 EB                 1974 	mov	a,r3
   3636 12 51 DD           1975 	lcall	_dbglink_writenum32
   3639 15 81              1976 	dec	sp
   363B 15 81              1977 	dec	sp
                    01C0   1978 	C$display.c$158$1$240 ==.
                           1979 ;	display.c:158: dbglink_writestr("Hz/");
   363D 90 57 AA           1980 	mov	dptr,#__str_4
   3640 75 F0 80           1981 	mov	b,#0x80
   3643 12 4B 5A           1982 	lcall	_dbglink_writestr
                    01C9   1983 	C$display.c$159$1$240 ==.
                           1984 ;	display.c:159: dbglink_writenum32(axradio_conv_freq_tohz(axradio_get_freqoffset()), 7, WRNUM_SIGNED);
   3646 12 2E 59           1985 	lcall	_axradio_get_freqoffset
   3649 12 04 F7           1986 	lcall	_axradio_conv_freq_tohz
   364C A8 82              1987 	mov	r0,dpl
   364E A9 83              1988 	mov	r1,dph
   3650 AA F0              1989 	mov	r2,b
   3652 FB                 1990 	mov	r3,a
   3653 74 01              1991 	mov	a,#0x01
   3655 C0 E0              1992 	push	acc
   3657 74 07              1993 	mov	a,#0x07
   3659 C0 E0              1994 	push	acc
   365B 88 82              1995 	mov	dpl,r0
   365D 89 83              1996 	mov	dph,r1
   365F 8A F0              1997 	mov	b,r2
   3661 EB                 1998 	mov	a,r3
   3662 12 51 DD           1999 	lcall	_dbglink_writenum32
   3665 15 81              2000 	dec	sp
   3667 15 81              2001 	dec	sp
                    01EC   2002 	C$display.c$160$1$240 ==.
                           2003 ;	display.c:160: dbglink_writestr("Hz");
   3669 90 57 AE           2004 	mov	dptr,#__str_5
   366C 75 F0 80           2005 	mov	b,#0x80
   366F 12 4B 5A           2006 	lcall	_dbglink_writestr
                    01F5   2007 	C$display.c$161$1$240 ==.
                           2008 ;	display.c:161: dbglink_tx('\n');
   3672 75 82 0A           2009 	mov	dpl,#0x0A
   3675 12 3B C5           2010 	lcall	_dbglink_tx
                    01FB   2011 	C$display.c$162$1$240 ==.
                           2012 ;	display.c:162: wait_dbglink_free();
   3678 12 35 11           2013 	lcall	_wait_dbglink_free
                    01FE   2014 	C$display.c$170$1$240 ==.
                           2015 ;	display.c:170: wait_dbglink_free();
   367B 12 35 11           2016 	lcall	_wait_dbglink_free
   367E D0 04              2017 	pop	ar4
   3680 D0 05              2018 	pop	ar5
   3682 D0 06              2019 	pop	ar6
   3684 D0 07              2020 	pop	ar7
                    0209   2021 	C$display.c$173$2$242 ==.
                           2022 ;	display.c:173: const uint8_t __xdata *pktdata = st->u.rx.mac.raw;
   3686 74 12              2023 	mov	a,#0x12
   3688 2E                 2024 	add	a,r6
   3689 F5 82              2025 	mov	dpl,a
   368B E4                 2026 	clr	a
   368C 3F                 2027 	addc	a,r7
   368D F5 83              2028 	mov	dph,a
   368F E0                 2029 	movx	a,@dptr
   3690 FE                 2030 	mov	r6,a
   3691 A3                 2031 	inc	dptr
   3692 E0                 2032 	movx	a,@dptr
   3693 FF                 2033 	mov	r7,a
                    0217   2034 	C$display.c$174$4$244 ==.
                           2035 ;	display.c:174: for (i=0; i < pktlen; ++i) {
   3694 7A 00              2036 	mov	r2,#0x00
   3696 7B 00              2037 	mov	r3,#0x00
   3698                    2038 00107$:
   3698 C3                 2039 	clr	c
   3699 EA                 2040 	mov	a,r2
   369A 9C                 2041 	subb	a,r4
   369B EB                 2042 	mov	a,r3
   369C 9D                 2043 	subb	a,r5
   369D 40 03              2044 	jc	00126$
   369F 02 37 31           2045 	ljmp	00110$
   36A2                    2046 00126$:
                    0225   2047 	C$display.c$175$3$243 ==.
                           2048 ;	display.c:175: if (!(i & 0x000F)) {
   36A2 EA                 2049 	mov	a,r2
   36A3 54 0F              2050 	anl	a,#0x0F
   36A5 70 45              2051 	jnz	00106$
                    022A   2052 	C$display.c$176$4$244 ==.
                           2053 ;	display.c:176: dbglink_tx('\n');
   36A7 75 82 0A           2054 	mov	dpl,#0x0A
   36AA 12 3B C5           2055 	lcall	_dbglink_tx
                    0230   2056 	C$display.c$177$4$244 ==.
                           2057 ;	display.c:177: wait_dbglink_free();
   36AD C0 07              2058 	push	ar7
   36AF C0 06              2059 	push	ar6
   36B1 C0 05              2060 	push	ar5
   36B3 C0 04              2061 	push	ar4
   36B5 C0 03              2062 	push	ar3
   36B7 C0 02              2063 	push	ar2
   36B9 12 35 11           2064 	lcall	_wait_dbglink_free
   36BC D0 02              2065 	pop	ar2
   36BE D0 03              2066 	pop	ar3
                    0243   2067 	C$display.c$178$4$244 ==.
                           2068 ;	display.c:178: dbglink_writehex16(i, 3, WRNUM_PADZERO);
   36C0 C0 03              2069 	push	ar3
   36C2 C0 02              2070 	push	ar2
   36C4 74 08              2071 	mov	a,#0x08
   36C6 C0 E0              2072 	push	acc
   36C8 74 03              2073 	mov	a,#0x03
   36CA C0 E0              2074 	push	acc
   36CC 8A 82              2075 	mov	dpl,r2
   36CE 8B 83              2076 	mov	dph,r3
   36D0 12 4F 64           2077 	lcall	_dbglink_writehex16
   36D3 15 81              2078 	dec	sp
   36D5 15 81              2079 	dec	sp
                    025A   2080 	C$display.c$179$4$244 ==.
                           2081 ;	display.c:179: dbglink_writestr(": ");
   36D7 90 57 B1           2082 	mov	dptr,#__str_6
   36DA 75 F0 80           2083 	mov	b,#0x80
   36DD 12 4B 5A           2084 	lcall	_dbglink_writestr
   36E0 D0 02              2085 	pop	ar2
   36E2 D0 03              2086 	pop	ar3
   36E4 D0 04              2087 	pop	ar4
   36E6 D0 05              2088 	pop	ar5
   36E8 D0 06              2089 	pop	ar6
   36EA D0 07              2090 	pop	ar7
   36EC                    2091 00106$:
                    026F   2092 	C$display.c$181$3$243 ==.
                           2093 ;	display.c:181: dbglink_writehex16(pktdata[i], 2, WRNUM_PADZERO);
   36EC EA                 2094 	mov	a,r2
   36ED 2E                 2095 	add	a,r6
   36EE F5 82              2096 	mov	dpl,a
   36F0 EB                 2097 	mov	a,r3
   36F1 3F                 2098 	addc	a,r7
   36F2 F5 83              2099 	mov	dph,a
   36F4 E0                 2100 	movx	a,@dptr
   36F5 F8                 2101 	mov	r0,a
   36F6 79 00              2102 	mov	r1,#0x00
   36F8 C0 07              2103 	push	ar7
   36FA C0 06              2104 	push	ar6
   36FC C0 05              2105 	push	ar5
   36FE C0 04              2106 	push	ar4
   3700 C0 03              2107 	push	ar3
   3702 C0 02              2108 	push	ar2
   3704 74 08              2109 	mov	a,#0x08
   3706 C0 E0              2110 	push	acc
   3708 74 02              2111 	mov	a,#0x02
   370A C0 E0              2112 	push	acc
   370C 88 82              2113 	mov	dpl,r0
   370E 89 83              2114 	mov	dph,r1
   3710 12 4F 64           2115 	lcall	_dbglink_writehex16
   3713 15 81              2116 	dec	sp
   3715 15 81              2117 	dec	sp
   3717 D0 02              2118 	pop	ar2
   3719 D0 03              2119 	pop	ar3
   371B D0 04              2120 	pop	ar4
   371D D0 05              2121 	pop	ar5
   371F D0 06              2122 	pop	ar6
   3721 D0 07              2123 	pop	ar7
                    02A6   2124 	C$display.c$182$3$243 ==.
                           2125 ;	display.c:182: dbglink_tx(' ');
   3723 75 82 20           2126 	mov	dpl,#0x20
   3726 12 3B C5           2127 	lcall	_dbglink_tx
                    02AC   2128 	C$display.c$174$2$242 ==.
                           2129 ;	display.c:174: for (i=0; i < pktlen; ++i) {
   3729 0A                 2130 	inc	r2
   372A BA 00 01           2131 	cjne	r2,#0x00,00129$
   372D 0B                 2132 	inc	r3
   372E                    2133 00129$:
   372E 02 36 98           2134 	ljmp	00107$
   3731                    2135 00110$:
                    02B4   2136 	C$display.c$185$1$240 ==.
                           2137 ;	display.c:185: dbglink_writestr("\n\n");
   3731 90 57 B4           2138 	mov	dptr,#__str_7
   3734 75 F0 80           2139 	mov	b,#0x80
   3737 12 4B 5A           2140 	lcall	_dbglink_writestr
                    02BD   2141 	C$display.c$186$1$240 ==.
                           2142 ;	display.c:186: --dbglink_semaphore;
   373A 15 16              2143 	dec	_dbglink_semaphore
   373C                    2144 00111$:
                    02BF   2145 	C$display.c$188$1$240 ==.
                    02BF   2146 	XG$dbglink_received_packet$0$0 ==.
   373C 22                 2147 	ret
                           2148 	.area CSEG    (CODE)
                           2149 	.area CONST   (CODE)
                    0000   2150 Fdisplay$_str_0$0$0 == .
   5780                    2151 __str_0:
   5780 52 58 20 63 6F 75  2152 	.ascii "RX counter="
        6E 74 65 72 3D
   578B 00                 2153 	.db 0x00
                    000C   2154 Fdisplay$_str_1$0$0 == .
   578C                    2155 __str_1:
   578C 20 6C 65 6E 67 74  2156 	.ascii " length="
        68 3D
   5794 00                 2157 	.db 0x00
                    0015   2158 Fdisplay$_str_2$0$0 == .
   5795                    2159 __str_2:
   5795 20 52 53 53 49 3D  2160 	.ascii " RSSI="
   579B 00                 2161 	.db 0x00
                    001C   2162 Fdisplay$_str_3$0$0 == .
   579C                    2163 __str_3:
   579C 20 20 66 72 65 71  2164 	.ascii "  freqoffset="
        6F 66 66 73 65 74
        3D
   57A9 00                 2165 	.db 0x00
                    002A   2166 Fdisplay$_str_4$0$0 == .
   57AA                    2167 __str_4:
   57AA 48 7A 2F           2168 	.ascii "Hz/"
   57AD 00                 2169 	.db 0x00
                    002E   2170 Fdisplay$_str_5$0$0 == .
   57AE                    2171 __str_5:
   57AE 48 7A              2172 	.ascii "Hz"
   57B0 00                 2173 	.db 0x00
                    0031   2174 Fdisplay$_str_6$0$0 == .
   57B1                    2175 __str_6:
   57B1 3A 20              2176 	.ascii ": "
   57B3 00                 2177 	.db 0x00
                    0034   2178 Fdisplay$_str_7$0$0 == .
   57B4                    2179 __str_7:
   57B4 0A                 2180 	.db 0x0A
   57B5 0A                 2181 	.db 0x0A
   57B6 00                 2182 	.db 0x00
                           2183 	.area XINIT   (CODE)
                           2184 	.area CABS    (ABS,CODE)
