                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Mon Dec 23 14:41:51 2013
                              5 ;--------------------------------------------------------
                              6 	.module misc
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _lcd2_writestr
                             13 	.globl _lcd2_setpos
                             14 	.globl _lcd2_wait_txdone
                             15 	.globl _wtimer_remove
                             16 	.globl _wtimer1_addrelative
                             17 	.globl _wtimer_runcallbacks
                             18 	.globl _wtimer_idle
                             19 	.globl _enter_sleep
                             20 	.globl _PORTC_7
                             21 	.globl _PORTC_6
                             22 	.globl _PORTC_5
                             23 	.globl _PORTC_4
                             24 	.globl _PORTC_3
                             25 	.globl _PORTC_2
                             26 	.globl _PORTC_1
                             27 	.globl _PORTC_0
                             28 	.globl _PORTB_7
                             29 	.globl _PORTB_6
                             30 	.globl _PORTB_5
                             31 	.globl _PORTB_4
                             32 	.globl _PORTB_3
                             33 	.globl _PORTB_2
                             34 	.globl _PORTB_1
                             35 	.globl _PORTB_0
                             36 	.globl _PORTA_7
                             37 	.globl _PORTA_6
                             38 	.globl _PORTA_5
                             39 	.globl _PORTA_4
                             40 	.globl _PORTA_3
                             41 	.globl _PORTA_2
                             42 	.globl _PORTA_1
                             43 	.globl _PORTA_0
                             44 	.globl _PINC_7
                             45 	.globl _PINC_6
                             46 	.globl _PINC_5
                             47 	.globl _PINC_4
                             48 	.globl _PINC_3
                             49 	.globl _PINC_2
                             50 	.globl _PINC_1
                             51 	.globl _PINC_0
                             52 	.globl _PINB_7
                             53 	.globl _PINB_6
                             54 	.globl _PINB_5
                             55 	.globl _PINB_4
                             56 	.globl _PINB_3
                             57 	.globl _PINB_2
                             58 	.globl _PINB_1
                             59 	.globl _PINB_0
                             60 	.globl _PINA_7
                             61 	.globl _PINA_6
                             62 	.globl _PINA_5
                             63 	.globl _PINA_4
                             64 	.globl _PINA_3
                             65 	.globl _PINA_2
                             66 	.globl _PINA_1
                             67 	.globl _PINA_0
                             68 	.globl _CY
                             69 	.globl _AC
                             70 	.globl _F0
                             71 	.globl _RS1
                             72 	.globl _RS0
                             73 	.globl _OV
                             74 	.globl _F1
                             75 	.globl _P
                             76 	.globl _IP_7
                             77 	.globl _IP_6
                             78 	.globl _IP_5
                             79 	.globl _IP_4
                             80 	.globl _IP_3
                             81 	.globl _IP_2
                             82 	.globl _IP_1
                             83 	.globl _IP_0
                             84 	.globl _EA
                             85 	.globl _IE_7
                             86 	.globl _IE_6
                             87 	.globl _IE_5
                             88 	.globl _IE_4
                             89 	.globl _IE_3
                             90 	.globl _IE_2
                             91 	.globl _IE_1
                             92 	.globl _IE_0
                             93 	.globl _EIP_7
                             94 	.globl _EIP_6
                             95 	.globl _EIP_5
                             96 	.globl _EIP_4
                             97 	.globl _EIP_3
                             98 	.globl _EIP_2
                             99 	.globl _EIP_1
                            100 	.globl _EIP_0
                            101 	.globl _EIE_7
                            102 	.globl _EIE_6
                            103 	.globl _EIE_5
                            104 	.globl _EIE_4
                            105 	.globl _EIE_3
                            106 	.globl _EIE_2
                            107 	.globl _EIE_1
                            108 	.globl _EIE_0
                            109 	.globl _E2IP_7
                            110 	.globl _E2IP_6
                            111 	.globl _E2IP_5
                            112 	.globl _E2IP_4
                            113 	.globl _E2IP_3
                            114 	.globl _E2IP_2
                            115 	.globl _E2IP_1
                            116 	.globl _E2IP_0
                            117 	.globl _E2IE_7
                            118 	.globl _E2IE_6
                            119 	.globl _E2IE_5
                            120 	.globl _E2IE_4
                            121 	.globl _E2IE_3
                            122 	.globl _E2IE_2
                            123 	.globl _E2IE_1
                            124 	.globl _E2IE_0
                            125 	.globl _B_7
                            126 	.globl _B_6
                            127 	.globl _B_5
                            128 	.globl _B_4
                            129 	.globl _B_3
                            130 	.globl _B_2
                            131 	.globl _B_1
                            132 	.globl _B_0
                            133 	.globl _ACC_7
                            134 	.globl _ACC_6
                            135 	.globl _ACC_5
                            136 	.globl _ACC_4
                            137 	.globl _ACC_3
                            138 	.globl _ACC_2
                            139 	.globl _ACC_1
                            140 	.globl _ACC_0
                            141 	.globl _WTSTAT
                            142 	.globl _WTIRQEN
                            143 	.globl _WTEVTD
                            144 	.globl _WTEVTD1
                            145 	.globl _WTEVTD0
                            146 	.globl _WTEVTC
                            147 	.globl _WTEVTC1
                            148 	.globl _WTEVTC0
                            149 	.globl _WTEVTB
                            150 	.globl _WTEVTB1
                            151 	.globl _WTEVTB0
                            152 	.globl _WTEVTA
                            153 	.globl _WTEVTA1
                            154 	.globl _WTEVTA0
                            155 	.globl _WTCNTR1
                            156 	.globl _WTCNTB
                            157 	.globl _WTCNTB1
                            158 	.globl _WTCNTB0
                            159 	.globl _WTCNTA
                            160 	.globl _WTCNTA1
                            161 	.globl _WTCNTA0
                            162 	.globl _WTCFGB
                            163 	.globl _WTCFGA
                            164 	.globl _WDTRESET
                            165 	.globl _WDTCFG
                            166 	.globl _U1STATUS
                            167 	.globl _U1SHREG
                            168 	.globl _U1MODE
                            169 	.globl _U1CTRL
                            170 	.globl _U0STATUS
                            171 	.globl _U0SHREG
                            172 	.globl _U0MODE
                            173 	.globl _U0CTRL
                            174 	.globl _T2STATUS
                            175 	.globl _T2PERIOD
                            176 	.globl _T2PERIOD1
                            177 	.globl _T2PERIOD0
                            178 	.globl _T2MODE
                            179 	.globl _T2CNT
                            180 	.globl _T2CNT1
                            181 	.globl _T2CNT0
                            182 	.globl _T2CLKSRC
                            183 	.globl _T1STATUS
                            184 	.globl _T1PERIOD
                            185 	.globl _T1PERIOD1
                            186 	.globl _T1PERIOD0
                            187 	.globl _T1MODE
                            188 	.globl _T1CNT
                            189 	.globl _T1CNT1
                            190 	.globl _T1CNT0
                            191 	.globl _T1CLKSRC
                            192 	.globl _T0STATUS
                            193 	.globl _T0PERIOD
                            194 	.globl _T0PERIOD1
                            195 	.globl _T0PERIOD0
                            196 	.globl _T0MODE
                            197 	.globl _T0CNT
                            198 	.globl _T0CNT1
                            199 	.globl _T0CNT0
                            200 	.globl _T0CLKSRC
                            201 	.globl _SPSTATUS
                            202 	.globl _SPSHREG
                            203 	.globl _SPMODE
                            204 	.globl _SPCLKSRC
                            205 	.globl _RADIOSTAT
                            206 	.globl _RADIOSTAT1
                            207 	.globl _RADIOSTAT0
                            208 	.globl _RADIODATA
                            209 	.globl _RADIODATA3
                            210 	.globl _RADIODATA2
                            211 	.globl _RADIODATA1
                            212 	.globl _RADIODATA0
                            213 	.globl _RADIOADDR
                            214 	.globl _RADIOADDR1
                            215 	.globl _RADIOADDR0
                            216 	.globl _RADIOACC
                            217 	.globl _OC1STATUS
                            218 	.globl _OC1PIN
                            219 	.globl _OC1MODE
                            220 	.globl _OC1COMP
                            221 	.globl _OC1COMP1
                            222 	.globl _OC1COMP0
                            223 	.globl _OC0STATUS
                            224 	.globl _OC0PIN
                            225 	.globl _OC0MODE
                            226 	.globl _OC0COMP
                            227 	.globl _OC0COMP1
                            228 	.globl _OC0COMP0
                            229 	.globl _NVSTATUS
                            230 	.globl _NVKEY
                            231 	.globl _NVDATA
                            232 	.globl _NVDATA1
                            233 	.globl _NVDATA0
                            234 	.globl _NVADDR
                            235 	.globl _NVADDR1
                            236 	.globl _NVADDR0
                            237 	.globl _IC1STATUS
                            238 	.globl _IC1MODE
                            239 	.globl _IC1CAPT
                            240 	.globl _IC1CAPT1
                            241 	.globl _IC1CAPT0
                            242 	.globl _IC0STATUS
                            243 	.globl _IC0MODE
                            244 	.globl _IC0CAPT
                            245 	.globl _IC0CAPT1
                            246 	.globl _IC0CAPT0
                            247 	.globl _PORTR
                            248 	.globl _PORTC
                            249 	.globl _PORTB
                            250 	.globl _PORTA
                            251 	.globl _PINR
                            252 	.globl _PINC
                            253 	.globl _PINB
                            254 	.globl _PINA
                            255 	.globl _DIRR
                            256 	.globl _DIRC
                            257 	.globl _DIRB
                            258 	.globl _DIRA
                            259 	.globl _DBGLNKSTAT
                            260 	.globl _DBGLNKBUF
                            261 	.globl _CODECONFIG
                            262 	.globl _CLKSTAT
                            263 	.globl _CLKCON
                            264 	.globl _ANALOGCOMP
                            265 	.globl _ADCCONV
                            266 	.globl _ADCCLKSRC
                            267 	.globl _ADCCH3CONFIG
                            268 	.globl _ADCCH2CONFIG
                            269 	.globl _ADCCH1CONFIG
                            270 	.globl _ADCCH0CONFIG
                            271 	.globl __XPAGE
                            272 	.globl _XPAGE
                            273 	.globl _SP
                            274 	.globl _PSW
                            275 	.globl _PCON
                            276 	.globl _IP
                            277 	.globl _IE
                            278 	.globl _EIP
                            279 	.globl _EIE
                            280 	.globl _E2IP
                            281 	.globl _E2IE
                            282 	.globl _DPS
                            283 	.globl _DPTR1
                            284 	.globl _DPTR0
                            285 	.globl _DPL1
                            286 	.globl _DPL
                            287 	.globl _DPH1
                            288 	.globl _DPH
                            289 	.globl _B
                            290 	.globl _ACC
                            291 	.globl _XWTSTAT
                            292 	.globl _XWTIRQEN
                            293 	.globl _XWTEVTD
                            294 	.globl _XWTEVTD1
                            295 	.globl _XWTEVTD0
                            296 	.globl _XWTEVTC
                            297 	.globl _XWTEVTC1
                            298 	.globl _XWTEVTC0
                            299 	.globl _XWTEVTB
                            300 	.globl _XWTEVTB1
                            301 	.globl _XWTEVTB0
                            302 	.globl _XWTEVTA
                            303 	.globl _XWTEVTA1
                            304 	.globl _XWTEVTA0
                            305 	.globl _XWTCNTR1
                            306 	.globl _XWTCNTB
                            307 	.globl _XWTCNTB1
                            308 	.globl _XWTCNTB0
                            309 	.globl _XWTCNTA
                            310 	.globl _XWTCNTA1
                            311 	.globl _XWTCNTA0
                            312 	.globl _XWTCFGB
                            313 	.globl _XWTCFGA
                            314 	.globl _XWDTRESET
                            315 	.globl _XWDTCFG
                            316 	.globl _XU1STATUS
                            317 	.globl _XU1SHREG
                            318 	.globl _XU1MODE
                            319 	.globl _XU1CTRL
                            320 	.globl _XU0STATUS
                            321 	.globl _XU0SHREG
                            322 	.globl _XU0MODE
                            323 	.globl _XU0CTRL
                            324 	.globl _XT2STATUS
                            325 	.globl _XT2PERIOD
                            326 	.globl _XT2PERIOD1
                            327 	.globl _XT2PERIOD0
                            328 	.globl _XT2MODE
                            329 	.globl _XT2CNT
                            330 	.globl _XT2CNT1
                            331 	.globl _XT2CNT0
                            332 	.globl _XT2CLKSRC
                            333 	.globl _XT1STATUS
                            334 	.globl _XT1PERIOD
                            335 	.globl _XT1PERIOD1
                            336 	.globl _XT1PERIOD0
                            337 	.globl _XT1MODE
                            338 	.globl _XT1CNT
                            339 	.globl _XT1CNT1
                            340 	.globl _XT1CNT0
                            341 	.globl _XT1CLKSRC
                            342 	.globl _XT0STATUS
                            343 	.globl _XT0PERIOD
                            344 	.globl _XT0PERIOD1
                            345 	.globl _XT0PERIOD0
                            346 	.globl _XT0MODE
                            347 	.globl _XT0CNT
                            348 	.globl _XT0CNT1
                            349 	.globl _XT0CNT0
                            350 	.globl _XT0CLKSRC
                            351 	.globl _XSPSTATUS
                            352 	.globl _XSPSHREG
                            353 	.globl _XSPMODE
                            354 	.globl _XSPCLKSRC
                            355 	.globl _XRADIOSTAT
                            356 	.globl _XRADIOSTAT1
                            357 	.globl _XRADIOSTAT0
                            358 	.globl _XRADIODATA3
                            359 	.globl _XRADIODATA2
                            360 	.globl _XRADIODATA1
                            361 	.globl _XRADIODATA0
                            362 	.globl _XRADIOADDR1
                            363 	.globl _XRADIOADDR0
                            364 	.globl _XRADIOACC
                            365 	.globl _XOC1STATUS
                            366 	.globl _XOC1PIN
                            367 	.globl _XOC1MODE
                            368 	.globl _XOC1COMP
                            369 	.globl _XOC1COMP1
                            370 	.globl _XOC1COMP0
                            371 	.globl _XOC0STATUS
                            372 	.globl _XOC0PIN
                            373 	.globl _XOC0MODE
                            374 	.globl _XOC0COMP
                            375 	.globl _XOC0COMP1
                            376 	.globl _XOC0COMP0
                            377 	.globl _XNVSTATUS
                            378 	.globl _XNVKEY
                            379 	.globl _XNVDATA
                            380 	.globl _XNVDATA1
                            381 	.globl _XNVDATA0
                            382 	.globl _XNVADDR
                            383 	.globl _XNVADDR1
                            384 	.globl _XNVADDR0
                            385 	.globl _XIC1STATUS
                            386 	.globl _XIC1MODE
                            387 	.globl _XIC1CAPT
                            388 	.globl _XIC1CAPT1
                            389 	.globl _XIC1CAPT0
                            390 	.globl _XIC0STATUS
                            391 	.globl _XIC0MODE
                            392 	.globl _XIC0CAPT
                            393 	.globl _XIC0CAPT1
                            394 	.globl _XIC0CAPT0
                            395 	.globl _XPORTR
                            396 	.globl _XPORTC
                            397 	.globl _XPORTB
                            398 	.globl _XPORTA
                            399 	.globl _XPINR
                            400 	.globl _XPINC
                            401 	.globl _XPINB
                            402 	.globl _XPINA
                            403 	.globl _XDIRR
                            404 	.globl _XDIRC
                            405 	.globl _XDIRB
                            406 	.globl _XDIRA
                            407 	.globl _XDBGLNKSTAT
                            408 	.globl _XDBGLNKBUF
                            409 	.globl _XCODECONFIG
                            410 	.globl _XCLKSTAT
                            411 	.globl _XCLKCON
                            412 	.globl _XANALOGCOMP
                            413 	.globl _XADCCONV
                            414 	.globl _XADCCLKSRC
                            415 	.globl _XADCCH3CONFIG
                            416 	.globl _XADCCH2CONFIG
                            417 	.globl _XADCCH1CONFIG
                            418 	.globl _XADCCH0CONFIG
                            419 	.globl _XPCON
                            420 	.globl _XIP
                            421 	.globl _XIE
                            422 	.globl _XDPTR1
                            423 	.globl _XDPTR0
                            424 	.globl _XTALREADY
                            425 	.globl _XTALOSC
                            426 	.globl _XTALAMPL
                            427 	.globl _SILICONREV
                            428 	.globl _SCRATCH3
                            429 	.globl _SCRATCH2
                            430 	.globl _SCRATCH1
                            431 	.globl _SCRATCH0
                            432 	.globl _RADIOMUX
                            433 	.globl _RADIOFSTATADDR
                            434 	.globl _RADIOFSTATADDR1
                            435 	.globl _RADIOFSTATADDR0
                            436 	.globl _RADIOFDATAADDR
                            437 	.globl _RADIOFDATAADDR1
                            438 	.globl _RADIOFDATAADDR0
                            439 	.globl _OSCRUN
                            440 	.globl _OSCREADY
                            441 	.globl _OSCFORCERUN
                            442 	.globl _OSCCALIB
                            443 	.globl _MISCCTRL
                            444 	.globl _LPXOSCGM
                            445 	.globl _LPOSCREF
                            446 	.globl _LPOSCREF1
                            447 	.globl _LPOSCREF0
                            448 	.globl _LPOSCPER
                            449 	.globl _LPOSCPER1
                            450 	.globl _LPOSCPER0
                            451 	.globl _LPOSCKFILT
                            452 	.globl _LPOSCKFILT1
                            453 	.globl _LPOSCKFILT0
                            454 	.globl _LPOSCFREQ
                            455 	.globl _LPOSCFREQ1
                            456 	.globl _LPOSCFREQ0
                            457 	.globl _LPOSCCONFIG
                            458 	.globl _PINSEL
                            459 	.globl _PINCHGC
                            460 	.globl _PINCHGB
                            461 	.globl _PINCHGA
                            462 	.globl _PALTC
                            463 	.globl _PALTB
                            464 	.globl _PALTA
                            465 	.globl _INTCHGC
                            466 	.globl _INTCHGB
                            467 	.globl _INTCHGA
                            468 	.globl _EXTIRQ
                            469 	.globl _GPIOENABLE
                            470 	.globl _ANALOGA
                            471 	.globl _FRCOSCREF
                            472 	.globl _FRCOSCREF1
                            473 	.globl _FRCOSCREF0
                            474 	.globl _FRCOSCPER
                            475 	.globl _FRCOSCPER1
                            476 	.globl _FRCOSCPER0
                            477 	.globl _FRCOSCKFILT
                            478 	.globl _FRCOSCKFILT1
                            479 	.globl _FRCOSCKFILT0
                            480 	.globl _FRCOSCFREQ
                            481 	.globl _FRCOSCFREQ1
                            482 	.globl _FRCOSCFREQ0
                            483 	.globl _FRCOSCCTRL
                            484 	.globl _FRCOSCCONFIG
                            485 	.globl _DMA1CONFIG
                            486 	.globl _DMA1ADDR
                            487 	.globl _DMA1ADDR1
                            488 	.globl _DMA1ADDR0
                            489 	.globl _DMA0CONFIG
                            490 	.globl _DMA0ADDR
                            491 	.globl _DMA0ADDR1
                            492 	.globl _DMA0ADDR0
                            493 	.globl _ADCTUNE2
                            494 	.globl _ADCTUNE1
                            495 	.globl _ADCTUNE0
                            496 	.globl _ADCCH3VAL
                            497 	.globl _ADCCH3VAL1
                            498 	.globl _ADCCH3VAL0
                            499 	.globl _ADCCH2VAL
                            500 	.globl _ADCCH2VAL1
                            501 	.globl _ADCCH2VAL0
                            502 	.globl _ADCCH1VAL
                            503 	.globl _ADCCH1VAL1
                            504 	.globl _ADCCH1VAL0
                            505 	.globl _ADCCH0VAL
                            506 	.globl _ADCCH0VAL1
                            507 	.globl _ADCCH0VAL0
                            508 	.globl _stop_with_error
                            509 	.globl _display_radio_error
                            510 	.globl _delay_ms
                            511 ;--------------------------------------------------------
                            512 ; special function registers
                            513 ;--------------------------------------------------------
                            514 	.area RSEG    (ABS,DATA)
   0000                     515 	.org 0x0000
                    00E0    516 G$ACC$0$0 == 0x00e0
                    00E0    517 _ACC	=	0x00e0
                    00F0    518 G$B$0$0 == 0x00f0
                    00F0    519 _B	=	0x00f0
                    0083    520 G$DPH$0$0 == 0x0083
                    0083    521 _DPH	=	0x0083
                    0085    522 G$DPH1$0$0 == 0x0085
                    0085    523 _DPH1	=	0x0085
                    0082    524 G$DPL$0$0 == 0x0082
                    0082    525 _DPL	=	0x0082
                    0084    526 G$DPL1$0$0 == 0x0084
                    0084    527 _DPL1	=	0x0084
                    8382    528 G$DPTR0$0$0 == 0x8382
                    8382    529 _DPTR0	=	0x8382
                    8584    530 G$DPTR1$0$0 == 0x8584
                    8584    531 _DPTR1	=	0x8584
                    0086    532 G$DPS$0$0 == 0x0086
                    0086    533 _DPS	=	0x0086
                    00A0    534 G$E2IE$0$0 == 0x00a0
                    00A0    535 _E2IE	=	0x00a0
                    00C0    536 G$E2IP$0$0 == 0x00c0
                    00C0    537 _E2IP	=	0x00c0
                    0098    538 G$EIE$0$0 == 0x0098
                    0098    539 _EIE	=	0x0098
                    00B0    540 G$EIP$0$0 == 0x00b0
                    00B0    541 _EIP	=	0x00b0
                    00A8    542 G$IE$0$0 == 0x00a8
                    00A8    543 _IE	=	0x00a8
                    00B8    544 G$IP$0$0 == 0x00b8
                    00B8    545 _IP	=	0x00b8
                    0087    546 G$PCON$0$0 == 0x0087
                    0087    547 _PCON	=	0x0087
                    00D0    548 G$PSW$0$0 == 0x00d0
                    00D0    549 _PSW	=	0x00d0
                    0081    550 G$SP$0$0 == 0x0081
                    0081    551 _SP	=	0x0081
                    00D9    552 G$XPAGE$0$0 == 0x00d9
                    00D9    553 _XPAGE	=	0x00d9
                    00D9    554 G$_XPAGE$0$0 == 0x00d9
                    00D9    555 __XPAGE	=	0x00d9
                    00CA    556 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA    557 _ADCCH0CONFIG	=	0x00ca
                    00CB    558 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB    559 _ADCCH1CONFIG	=	0x00cb
                    00D2    560 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2    561 _ADCCH2CONFIG	=	0x00d2
                    00D3    562 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3    563 _ADCCH3CONFIG	=	0x00d3
                    00D1    564 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1    565 _ADCCLKSRC	=	0x00d1
                    00C9    566 G$ADCCONV$0$0 == 0x00c9
                    00C9    567 _ADCCONV	=	0x00c9
                    00E1    568 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1    569 _ANALOGCOMP	=	0x00e1
                    00C6    570 G$CLKCON$0$0 == 0x00c6
                    00C6    571 _CLKCON	=	0x00c6
                    00C7    572 G$CLKSTAT$0$0 == 0x00c7
                    00C7    573 _CLKSTAT	=	0x00c7
                    0097    574 G$CODECONFIG$0$0 == 0x0097
                    0097    575 _CODECONFIG	=	0x0097
                    00E3    576 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3    577 _DBGLNKBUF	=	0x00e3
                    00E2    578 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2    579 _DBGLNKSTAT	=	0x00e2
                    0089    580 G$DIRA$0$0 == 0x0089
                    0089    581 _DIRA	=	0x0089
                    008A    582 G$DIRB$0$0 == 0x008a
                    008A    583 _DIRB	=	0x008a
                    008B    584 G$DIRC$0$0 == 0x008b
                    008B    585 _DIRC	=	0x008b
                    008E    586 G$DIRR$0$0 == 0x008e
                    008E    587 _DIRR	=	0x008e
                    00C8    588 G$PINA$0$0 == 0x00c8
                    00C8    589 _PINA	=	0x00c8
                    00E8    590 G$PINB$0$0 == 0x00e8
                    00E8    591 _PINB	=	0x00e8
                    00F8    592 G$PINC$0$0 == 0x00f8
                    00F8    593 _PINC	=	0x00f8
                    008D    594 G$PINR$0$0 == 0x008d
                    008D    595 _PINR	=	0x008d
                    0080    596 G$PORTA$0$0 == 0x0080
                    0080    597 _PORTA	=	0x0080
                    0088    598 G$PORTB$0$0 == 0x0088
                    0088    599 _PORTB	=	0x0088
                    0090    600 G$PORTC$0$0 == 0x0090
                    0090    601 _PORTC	=	0x0090
                    008C    602 G$PORTR$0$0 == 0x008c
                    008C    603 _PORTR	=	0x008c
                    00CE    604 G$IC0CAPT0$0$0 == 0x00ce
                    00CE    605 _IC0CAPT0	=	0x00ce
                    00CF    606 G$IC0CAPT1$0$0 == 0x00cf
                    00CF    607 _IC0CAPT1	=	0x00cf
                    CFCE    608 G$IC0CAPT$0$0 == 0xcfce
                    CFCE    609 _IC0CAPT	=	0xcfce
                    00CC    610 G$IC0MODE$0$0 == 0x00cc
                    00CC    611 _IC0MODE	=	0x00cc
                    00CD    612 G$IC0STATUS$0$0 == 0x00cd
                    00CD    613 _IC0STATUS	=	0x00cd
                    00D6    614 G$IC1CAPT0$0$0 == 0x00d6
                    00D6    615 _IC1CAPT0	=	0x00d6
                    00D7    616 G$IC1CAPT1$0$0 == 0x00d7
                    00D7    617 _IC1CAPT1	=	0x00d7
                    D7D6    618 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6    619 _IC1CAPT	=	0xd7d6
                    00D4    620 G$IC1MODE$0$0 == 0x00d4
                    00D4    621 _IC1MODE	=	0x00d4
                    00D5    622 G$IC1STATUS$0$0 == 0x00d5
                    00D5    623 _IC1STATUS	=	0x00d5
                    0092    624 G$NVADDR0$0$0 == 0x0092
                    0092    625 _NVADDR0	=	0x0092
                    0093    626 G$NVADDR1$0$0 == 0x0093
                    0093    627 _NVADDR1	=	0x0093
                    9392    628 G$NVADDR$0$0 == 0x9392
                    9392    629 _NVADDR	=	0x9392
                    0094    630 G$NVDATA0$0$0 == 0x0094
                    0094    631 _NVDATA0	=	0x0094
                    0095    632 G$NVDATA1$0$0 == 0x0095
                    0095    633 _NVDATA1	=	0x0095
                    9594    634 G$NVDATA$0$0 == 0x9594
                    9594    635 _NVDATA	=	0x9594
                    0096    636 G$NVKEY$0$0 == 0x0096
                    0096    637 _NVKEY	=	0x0096
                    0091    638 G$NVSTATUS$0$0 == 0x0091
                    0091    639 _NVSTATUS	=	0x0091
                    00BC    640 G$OC0COMP0$0$0 == 0x00bc
                    00BC    641 _OC0COMP0	=	0x00bc
                    00BD    642 G$OC0COMP1$0$0 == 0x00bd
                    00BD    643 _OC0COMP1	=	0x00bd
                    BDBC    644 G$OC0COMP$0$0 == 0xbdbc
                    BDBC    645 _OC0COMP	=	0xbdbc
                    00B9    646 G$OC0MODE$0$0 == 0x00b9
                    00B9    647 _OC0MODE	=	0x00b9
                    00BA    648 G$OC0PIN$0$0 == 0x00ba
                    00BA    649 _OC0PIN	=	0x00ba
                    00BB    650 G$OC0STATUS$0$0 == 0x00bb
                    00BB    651 _OC0STATUS	=	0x00bb
                    00C4    652 G$OC1COMP0$0$0 == 0x00c4
                    00C4    653 _OC1COMP0	=	0x00c4
                    00C5    654 G$OC1COMP1$0$0 == 0x00c5
                    00C5    655 _OC1COMP1	=	0x00c5
                    C5C4    656 G$OC1COMP$0$0 == 0xc5c4
                    C5C4    657 _OC1COMP	=	0xc5c4
                    00C1    658 G$OC1MODE$0$0 == 0x00c1
                    00C1    659 _OC1MODE	=	0x00c1
                    00C2    660 G$OC1PIN$0$0 == 0x00c2
                    00C2    661 _OC1PIN	=	0x00c2
                    00C3    662 G$OC1STATUS$0$0 == 0x00c3
                    00C3    663 _OC1STATUS	=	0x00c3
                    00B1    664 G$RADIOACC$0$0 == 0x00b1
                    00B1    665 _RADIOACC	=	0x00b1
                    00B3    666 G$RADIOADDR0$0$0 == 0x00b3
                    00B3    667 _RADIOADDR0	=	0x00b3
                    00B2    668 G$RADIOADDR1$0$0 == 0x00b2
                    00B2    669 _RADIOADDR1	=	0x00b2
                    B2B3    670 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3    671 _RADIOADDR	=	0xb2b3
                    00B7    672 G$RADIODATA0$0$0 == 0x00b7
                    00B7    673 _RADIODATA0	=	0x00b7
                    00B6    674 G$RADIODATA1$0$0 == 0x00b6
                    00B6    675 _RADIODATA1	=	0x00b6
                    00B5    676 G$RADIODATA2$0$0 == 0x00b5
                    00B5    677 _RADIODATA2	=	0x00b5
                    00B4    678 G$RADIODATA3$0$0 == 0x00b4
                    00B4    679 _RADIODATA3	=	0x00b4
                    B4B5B6B7    680 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7    681 _RADIODATA	=	0xb4b5b6b7
                    00BE    682 G$RADIOSTAT0$0$0 == 0x00be
                    00BE    683 _RADIOSTAT0	=	0x00be
                    00BF    684 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF    685 _RADIOSTAT1	=	0x00bf
                    BFBE    686 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE    687 _RADIOSTAT	=	0xbfbe
                    00DF    688 G$SPCLKSRC$0$0 == 0x00df
                    00DF    689 _SPCLKSRC	=	0x00df
                    00DC    690 G$SPMODE$0$0 == 0x00dc
                    00DC    691 _SPMODE	=	0x00dc
                    00DE    692 G$SPSHREG$0$0 == 0x00de
                    00DE    693 _SPSHREG	=	0x00de
                    00DD    694 G$SPSTATUS$0$0 == 0x00dd
                    00DD    695 _SPSTATUS	=	0x00dd
                    009A    696 G$T0CLKSRC$0$0 == 0x009a
                    009A    697 _T0CLKSRC	=	0x009a
                    009C    698 G$T0CNT0$0$0 == 0x009c
                    009C    699 _T0CNT0	=	0x009c
                    009D    700 G$T0CNT1$0$0 == 0x009d
                    009D    701 _T0CNT1	=	0x009d
                    9D9C    702 G$T0CNT$0$0 == 0x9d9c
                    9D9C    703 _T0CNT	=	0x9d9c
                    0099    704 G$T0MODE$0$0 == 0x0099
                    0099    705 _T0MODE	=	0x0099
                    009E    706 G$T0PERIOD0$0$0 == 0x009e
                    009E    707 _T0PERIOD0	=	0x009e
                    009F    708 G$T0PERIOD1$0$0 == 0x009f
                    009F    709 _T0PERIOD1	=	0x009f
                    9F9E    710 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E    711 _T0PERIOD	=	0x9f9e
                    009B    712 G$T0STATUS$0$0 == 0x009b
                    009B    713 _T0STATUS	=	0x009b
                    00A2    714 G$T1CLKSRC$0$0 == 0x00a2
                    00A2    715 _T1CLKSRC	=	0x00a2
                    00A4    716 G$T1CNT0$0$0 == 0x00a4
                    00A4    717 _T1CNT0	=	0x00a4
                    00A5    718 G$T1CNT1$0$0 == 0x00a5
                    00A5    719 _T1CNT1	=	0x00a5
                    A5A4    720 G$T1CNT$0$0 == 0xa5a4
                    A5A4    721 _T1CNT	=	0xa5a4
                    00A1    722 G$T1MODE$0$0 == 0x00a1
                    00A1    723 _T1MODE	=	0x00a1
                    00A6    724 G$T1PERIOD0$0$0 == 0x00a6
                    00A6    725 _T1PERIOD0	=	0x00a6
                    00A7    726 G$T1PERIOD1$0$0 == 0x00a7
                    00A7    727 _T1PERIOD1	=	0x00a7
                    A7A6    728 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6    729 _T1PERIOD	=	0xa7a6
                    00A3    730 G$T1STATUS$0$0 == 0x00a3
                    00A3    731 _T1STATUS	=	0x00a3
                    00AA    732 G$T2CLKSRC$0$0 == 0x00aa
                    00AA    733 _T2CLKSRC	=	0x00aa
                    00AC    734 G$T2CNT0$0$0 == 0x00ac
                    00AC    735 _T2CNT0	=	0x00ac
                    00AD    736 G$T2CNT1$0$0 == 0x00ad
                    00AD    737 _T2CNT1	=	0x00ad
                    ADAC    738 G$T2CNT$0$0 == 0xadac
                    ADAC    739 _T2CNT	=	0xadac
                    00A9    740 G$T2MODE$0$0 == 0x00a9
                    00A9    741 _T2MODE	=	0x00a9
                    00AE    742 G$T2PERIOD0$0$0 == 0x00ae
                    00AE    743 _T2PERIOD0	=	0x00ae
                    00AF    744 G$T2PERIOD1$0$0 == 0x00af
                    00AF    745 _T2PERIOD1	=	0x00af
                    AFAE    746 G$T2PERIOD$0$0 == 0xafae
                    AFAE    747 _T2PERIOD	=	0xafae
                    00AB    748 G$T2STATUS$0$0 == 0x00ab
                    00AB    749 _T2STATUS	=	0x00ab
                    00E4    750 G$U0CTRL$0$0 == 0x00e4
                    00E4    751 _U0CTRL	=	0x00e4
                    00E7    752 G$U0MODE$0$0 == 0x00e7
                    00E7    753 _U0MODE	=	0x00e7
                    00E6    754 G$U0SHREG$0$0 == 0x00e6
                    00E6    755 _U0SHREG	=	0x00e6
                    00E5    756 G$U0STATUS$0$0 == 0x00e5
                    00E5    757 _U0STATUS	=	0x00e5
                    00EC    758 G$U1CTRL$0$0 == 0x00ec
                    00EC    759 _U1CTRL	=	0x00ec
                    00EF    760 G$U1MODE$0$0 == 0x00ef
                    00EF    761 _U1MODE	=	0x00ef
                    00EE    762 G$U1SHREG$0$0 == 0x00ee
                    00EE    763 _U1SHREG	=	0x00ee
                    00ED    764 G$U1STATUS$0$0 == 0x00ed
                    00ED    765 _U1STATUS	=	0x00ed
                    00DA    766 G$WDTCFG$0$0 == 0x00da
                    00DA    767 _WDTCFG	=	0x00da
                    00DB    768 G$WDTRESET$0$0 == 0x00db
                    00DB    769 _WDTRESET	=	0x00db
                    00F1    770 G$WTCFGA$0$0 == 0x00f1
                    00F1    771 _WTCFGA	=	0x00f1
                    00F9    772 G$WTCFGB$0$0 == 0x00f9
                    00F9    773 _WTCFGB	=	0x00f9
                    00F2    774 G$WTCNTA0$0$0 == 0x00f2
                    00F2    775 _WTCNTA0	=	0x00f2
                    00F3    776 G$WTCNTA1$0$0 == 0x00f3
                    00F3    777 _WTCNTA1	=	0x00f3
                    F3F2    778 G$WTCNTA$0$0 == 0xf3f2
                    F3F2    779 _WTCNTA	=	0xf3f2
                    00FA    780 G$WTCNTB0$0$0 == 0x00fa
                    00FA    781 _WTCNTB0	=	0x00fa
                    00FB    782 G$WTCNTB1$0$0 == 0x00fb
                    00FB    783 _WTCNTB1	=	0x00fb
                    FBFA    784 G$WTCNTB$0$0 == 0xfbfa
                    FBFA    785 _WTCNTB	=	0xfbfa
                    00EB    786 G$WTCNTR1$0$0 == 0x00eb
                    00EB    787 _WTCNTR1	=	0x00eb
                    00F4    788 G$WTEVTA0$0$0 == 0x00f4
                    00F4    789 _WTEVTA0	=	0x00f4
                    00F5    790 G$WTEVTA1$0$0 == 0x00f5
                    00F5    791 _WTEVTA1	=	0x00f5
                    F5F4    792 G$WTEVTA$0$0 == 0xf5f4
                    F5F4    793 _WTEVTA	=	0xf5f4
                    00F6    794 G$WTEVTB0$0$0 == 0x00f6
                    00F6    795 _WTEVTB0	=	0x00f6
                    00F7    796 G$WTEVTB1$0$0 == 0x00f7
                    00F7    797 _WTEVTB1	=	0x00f7
                    F7F6    798 G$WTEVTB$0$0 == 0xf7f6
                    F7F6    799 _WTEVTB	=	0xf7f6
                    00FC    800 G$WTEVTC0$0$0 == 0x00fc
                    00FC    801 _WTEVTC0	=	0x00fc
                    00FD    802 G$WTEVTC1$0$0 == 0x00fd
                    00FD    803 _WTEVTC1	=	0x00fd
                    FDFC    804 G$WTEVTC$0$0 == 0xfdfc
                    FDFC    805 _WTEVTC	=	0xfdfc
                    00FE    806 G$WTEVTD0$0$0 == 0x00fe
                    00FE    807 _WTEVTD0	=	0x00fe
                    00FF    808 G$WTEVTD1$0$0 == 0x00ff
                    00FF    809 _WTEVTD1	=	0x00ff
                    FFFE    810 G$WTEVTD$0$0 == 0xfffe
                    FFFE    811 _WTEVTD	=	0xfffe
                    00E9    812 G$WTIRQEN$0$0 == 0x00e9
                    00E9    813 _WTIRQEN	=	0x00e9
                    00EA    814 G$WTSTAT$0$0 == 0x00ea
                    00EA    815 _WTSTAT	=	0x00ea
                            816 ;--------------------------------------------------------
                            817 ; special function bits
                            818 ;--------------------------------------------------------
                            819 	.area RSEG    (ABS,DATA)
   0000                     820 	.org 0x0000
                    00E0    821 G$ACC_0$0$0 == 0x00e0
                    00E0    822 _ACC_0	=	0x00e0
                    00E1    823 G$ACC_1$0$0 == 0x00e1
                    00E1    824 _ACC_1	=	0x00e1
                    00E2    825 G$ACC_2$0$0 == 0x00e2
                    00E2    826 _ACC_2	=	0x00e2
                    00E3    827 G$ACC_3$0$0 == 0x00e3
                    00E3    828 _ACC_3	=	0x00e3
                    00E4    829 G$ACC_4$0$0 == 0x00e4
                    00E4    830 _ACC_4	=	0x00e4
                    00E5    831 G$ACC_5$0$0 == 0x00e5
                    00E5    832 _ACC_5	=	0x00e5
                    00E6    833 G$ACC_6$0$0 == 0x00e6
                    00E6    834 _ACC_6	=	0x00e6
                    00E7    835 G$ACC_7$0$0 == 0x00e7
                    00E7    836 _ACC_7	=	0x00e7
                    00F0    837 G$B_0$0$0 == 0x00f0
                    00F0    838 _B_0	=	0x00f0
                    00F1    839 G$B_1$0$0 == 0x00f1
                    00F1    840 _B_1	=	0x00f1
                    00F2    841 G$B_2$0$0 == 0x00f2
                    00F2    842 _B_2	=	0x00f2
                    00F3    843 G$B_3$0$0 == 0x00f3
                    00F3    844 _B_3	=	0x00f3
                    00F4    845 G$B_4$0$0 == 0x00f4
                    00F4    846 _B_4	=	0x00f4
                    00F5    847 G$B_5$0$0 == 0x00f5
                    00F5    848 _B_5	=	0x00f5
                    00F6    849 G$B_6$0$0 == 0x00f6
                    00F6    850 _B_6	=	0x00f6
                    00F7    851 G$B_7$0$0 == 0x00f7
                    00F7    852 _B_7	=	0x00f7
                    00A0    853 G$E2IE_0$0$0 == 0x00a0
                    00A0    854 _E2IE_0	=	0x00a0
                    00A1    855 G$E2IE_1$0$0 == 0x00a1
                    00A1    856 _E2IE_1	=	0x00a1
                    00A2    857 G$E2IE_2$0$0 == 0x00a2
                    00A2    858 _E2IE_2	=	0x00a2
                    00A3    859 G$E2IE_3$0$0 == 0x00a3
                    00A3    860 _E2IE_3	=	0x00a3
                    00A4    861 G$E2IE_4$0$0 == 0x00a4
                    00A4    862 _E2IE_4	=	0x00a4
                    00A5    863 G$E2IE_5$0$0 == 0x00a5
                    00A5    864 _E2IE_5	=	0x00a5
                    00A6    865 G$E2IE_6$0$0 == 0x00a6
                    00A6    866 _E2IE_6	=	0x00a6
                    00A7    867 G$E2IE_7$0$0 == 0x00a7
                    00A7    868 _E2IE_7	=	0x00a7
                    00C0    869 G$E2IP_0$0$0 == 0x00c0
                    00C0    870 _E2IP_0	=	0x00c0
                    00C1    871 G$E2IP_1$0$0 == 0x00c1
                    00C1    872 _E2IP_1	=	0x00c1
                    00C2    873 G$E2IP_2$0$0 == 0x00c2
                    00C2    874 _E2IP_2	=	0x00c2
                    00C3    875 G$E2IP_3$0$0 == 0x00c3
                    00C3    876 _E2IP_3	=	0x00c3
                    00C4    877 G$E2IP_4$0$0 == 0x00c4
                    00C4    878 _E2IP_4	=	0x00c4
                    00C5    879 G$E2IP_5$0$0 == 0x00c5
                    00C5    880 _E2IP_5	=	0x00c5
                    00C6    881 G$E2IP_6$0$0 == 0x00c6
                    00C6    882 _E2IP_6	=	0x00c6
                    00C7    883 G$E2IP_7$0$0 == 0x00c7
                    00C7    884 _E2IP_7	=	0x00c7
                    0098    885 G$EIE_0$0$0 == 0x0098
                    0098    886 _EIE_0	=	0x0098
                    0099    887 G$EIE_1$0$0 == 0x0099
                    0099    888 _EIE_1	=	0x0099
                    009A    889 G$EIE_2$0$0 == 0x009a
                    009A    890 _EIE_2	=	0x009a
                    009B    891 G$EIE_3$0$0 == 0x009b
                    009B    892 _EIE_3	=	0x009b
                    009C    893 G$EIE_4$0$0 == 0x009c
                    009C    894 _EIE_4	=	0x009c
                    009D    895 G$EIE_5$0$0 == 0x009d
                    009D    896 _EIE_5	=	0x009d
                    009E    897 G$EIE_6$0$0 == 0x009e
                    009E    898 _EIE_6	=	0x009e
                    009F    899 G$EIE_7$0$0 == 0x009f
                    009F    900 _EIE_7	=	0x009f
                    00B0    901 G$EIP_0$0$0 == 0x00b0
                    00B0    902 _EIP_0	=	0x00b0
                    00B1    903 G$EIP_1$0$0 == 0x00b1
                    00B1    904 _EIP_1	=	0x00b1
                    00B2    905 G$EIP_2$0$0 == 0x00b2
                    00B2    906 _EIP_2	=	0x00b2
                    00B3    907 G$EIP_3$0$0 == 0x00b3
                    00B3    908 _EIP_3	=	0x00b3
                    00B4    909 G$EIP_4$0$0 == 0x00b4
                    00B4    910 _EIP_4	=	0x00b4
                    00B5    911 G$EIP_5$0$0 == 0x00b5
                    00B5    912 _EIP_5	=	0x00b5
                    00B6    913 G$EIP_6$0$0 == 0x00b6
                    00B6    914 _EIP_6	=	0x00b6
                    00B7    915 G$EIP_7$0$0 == 0x00b7
                    00B7    916 _EIP_7	=	0x00b7
                    00A8    917 G$IE_0$0$0 == 0x00a8
                    00A8    918 _IE_0	=	0x00a8
                    00A9    919 G$IE_1$0$0 == 0x00a9
                    00A9    920 _IE_1	=	0x00a9
                    00AA    921 G$IE_2$0$0 == 0x00aa
                    00AA    922 _IE_2	=	0x00aa
                    00AB    923 G$IE_3$0$0 == 0x00ab
                    00AB    924 _IE_3	=	0x00ab
                    00AC    925 G$IE_4$0$0 == 0x00ac
                    00AC    926 _IE_4	=	0x00ac
                    00AD    927 G$IE_5$0$0 == 0x00ad
                    00AD    928 _IE_5	=	0x00ad
                    00AE    929 G$IE_6$0$0 == 0x00ae
                    00AE    930 _IE_6	=	0x00ae
                    00AF    931 G$IE_7$0$0 == 0x00af
                    00AF    932 _IE_7	=	0x00af
                    00AF    933 G$EA$0$0 == 0x00af
                    00AF    934 _EA	=	0x00af
                    00B8    935 G$IP_0$0$0 == 0x00b8
                    00B8    936 _IP_0	=	0x00b8
                    00B9    937 G$IP_1$0$0 == 0x00b9
                    00B9    938 _IP_1	=	0x00b9
                    00BA    939 G$IP_2$0$0 == 0x00ba
                    00BA    940 _IP_2	=	0x00ba
                    00BB    941 G$IP_3$0$0 == 0x00bb
                    00BB    942 _IP_3	=	0x00bb
                    00BC    943 G$IP_4$0$0 == 0x00bc
                    00BC    944 _IP_4	=	0x00bc
                    00BD    945 G$IP_5$0$0 == 0x00bd
                    00BD    946 _IP_5	=	0x00bd
                    00BE    947 G$IP_6$0$0 == 0x00be
                    00BE    948 _IP_6	=	0x00be
                    00BF    949 G$IP_7$0$0 == 0x00bf
                    00BF    950 _IP_7	=	0x00bf
                    00D0    951 G$P$0$0 == 0x00d0
                    00D0    952 _P	=	0x00d0
                    00D1    953 G$F1$0$0 == 0x00d1
                    00D1    954 _F1	=	0x00d1
                    00D2    955 G$OV$0$0 == 0x00d2
                    00D2    956 _OV	=	0x00d2
                    00D3    957 G$RS0$0$0 == 0x00d3
                    00D3    958 _RS0	=	0x00d3
                    00D4    959 G$RS1$0$0 == 0x00d4
                    00D4    960 _RS1	=	0x00d4
                    00D5    961 G$F0$0$0 == 0x00d5
                    00D5    962 _F0	=	0x00d5
                    00D6    963 G$AC$0$0 == 0x00d6
                    00D6    964 _AC	=	0x00d6
                    00D7    965 G$CY$0$0 == 0x00d7
                    00D7    966 _CY	=	0x00d7
                    00C8    967 G$PINA_0$0$0 == 0x00c8
                    00C8    968 _PINA_0	=	0x00c8
                    00C9    969 G$PINA_1$0$0 == 0x00c9
                    00C9    970 _PINA_1	=	0x00c9
                    00CA    971 G$PINA_2$0$0 == 0x00ca
                    00CA    972 _PINA_2	=	0x00ca
                    00CB    973 G$PINA_3$0$0 == 0x00cb
                    00CB    974 _PINA_3	=	0x00cb
                    00CC    975 G$PINA_4$0$0 == 0x00cc
                    00CC    976 _PINA_4	=	0x00cc
                    00CD    977 G$PINA_5$0$0 == 0x00cd
                    00CD    978 _PINA_5	=	0x00cd
                    00CE    979 G$PINA_6$0$0 == 0x00ce
                    00CE    980 _PINA_6	=	0x00ce
                    00CF    981 G$PINA_7$0$0 == 0x00cf
                    00CF    982 _PINA_7	=	0x00cf
                    00E8    983 G$PINB_0$0$0 == 0x00e8
                    00E8    984 _PINB_0	=	0x00e8
                    00E9    985 G$PINB_1$0$0 == 0x00e9
                    00E9    986 _PINB_1	=	0x00e9
                    00EA    987 G$PINB_2$0$0 == 0x00ea
                    00EA    988 _PINB_2	=	0x00ea
                    00EB    989 G$PINB_3$0$0 == 0x00eb
                    00EB    990 _PINB_3	=	0x00eb
                    00EC    991 G$PINB_4$0$0 == 0x00ec
                    00EC    992 _PINB_4	=	0x00ec
                    00ED    993 G$PINB_5$0$0 == 0x00ed
                    00ED    994 _PINB_5	=	0x00ed
                    00EE    995 G$PINB_6$0$0 == 0x00ee
                    00EE    996 _PINB_6	=	0x00ee
                    00EF    997 G$PINB_7$0$0 == 0x00ef
                    00EF    998 _PINB_7	=	0x00ef
                    00F8    999 G$PINC_0$0$0 == 0x00f8
                    00F8   1000 _PINC_0	=	0x00f8
                    00F9   1001 G$PINC_1$0$0 == 0x00f9
                    00F9   1002 _PINC_1	=	0x00f9
                    00FA   1003 G$PINC_2$0$0 == 0x00fa
                    00FA   1004 _PINC_2	=	0x00fa
                    00FB   1005 G$PINC_3$0$0 == 0x00fb
                    00FB   1006 _PINC_3	=	0x00fb
                    00FC   1007 G$PINC_4$0$0 == 0x00fc
                    00FC   1008 _PINC_4	=	0x00fc
                    00FD   1009 G$PINC_5$0$0 == 0x00fd
                    00FD   1010 _PINC_5	=	0x00fd
                    00FE   1011 G$PINC_6$0$0 == 0x00fe
                    00FE   1012 _PINC_6	=	0x00fe
                    00FF   1013 G$PINC_7$0$0 == 0x00ff
                    00FF   1014 _PINC_7	=	0x00ff
                    0080   1015 G$PORTA_0$0$0 == 0x0080
                    0080   1016 _PORTA_0	=	0x0080
                    0081   1017 G$PORTA_1$0$0 == 0x0081
                    0081   1018 _PORTA_1	=	0x0081
                    0082   1019 G$PORTA_2$0$0 == 0x0082
                    0082   1020 _PORTA_2	=	0x0082
                    0083   1021 G$PORTA_3$0$0 == 0x0083
                    0083   1022 _PORTA_3	=	0x0083
                    0084   1023 G$PORTA_4$0$0 == 0x0084
                    0084   1024 _PORTA_4	=	0x0084
                    0085   1025 G$PORTA_5$0$0 == 0x0085
                    0085   1026 _PORTA_5	=	0x0085
                    0086   1027 G$PORTA_6$0$0 == 0x0086
                    0086   1028 _PORTA_6	=	0x0086
                    0087   1029 G$PORTA_7$0$0 == 0x0087
                    0087   1030 _PORTA_7	=	0x0087
                    0088   1031 G$PORTB_0$0$0 == 0x0088
                    0088   1032 _PORTB_0	=	0x0088
                    0089   1033 G$PORTB_1$0$0 == 0x0089
                    0089   1034 _PORTB_1	=	0x0089
                    008A   1035 G$PORTB_2$0$0 == 0x008a
                    008A   1036 _PORTB_2	=	0x008a
                    008B   1037 G$PORTB_3$0$0 == 0x008b
                    008B   1038 _PORTB_3	=	0x008b
                    008C   1039 G$PORTB_4$0$0 == 0x008c
                    008C   1040 _PORTB_4	=	0x008c
                    008D   1041 G$PORTB_5$0$0 == 0x008d
                    008D   1042 _PORTB_5	=	0x008d
                    008E   1043 G$PORTB_6$0$0 == 0x008e
                    008E   1044 _PORTB_6	=	0x008e
                    008F   1045 G$PORTB_7$0$0 == 0x008f
                    008F   1046 _PORTB_7	=	0x008f
                    0090   1047 G$PORTC_0$0$0 == 0x0090
                    0090   1048 _PORTC_0	=	0x0090
                    0091   1049 G$PORTC_1$0$0 == 0x0091
                    0091   1050 _PORTC_1	=	0x0091
                    0092   1051 G$PORTC_2$0$0 == 0x0092
                    0092   1052 _PORTC_2	=	0x0092
                    0093   1053 G$PORTC_3$0$0 == 0x0093
                    0093   1054 _PORTC_3	=	0x0093
                    0094   1055 G$PORTC_4$0$0 == 0x0094
                    0094   1056 _PORTC_4	=	0x0094
                    0095   1057 G$PORTC_5$0$0 == 0x0095
                    0095   1058 _PORTC_5	=	0x0095
                    0096   1059 G$PORTC_6$0$0 == 0x0096
                    0096   1060 _PORTC_6	=	0x0096
                    0097   1061 G$PORTC_7$0$0 == 0x0097
                    0097   1062 _PORTC_7	=	0x0097
                           1063 ;--------------------------------------------------------
                           1064 ; overlayable register banks
                           1065 ;--------------------------------------------------------
                           1066 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1067 	.ds 8
                           1068 ;--------------------------------------------------------
                           1069 ; internal ram data
                           1070 ;--------------------------------------------------------
                           1071 	.area DSEG    (DATA)
                           1072 ;--------------------------------------------------------
                           1073 ; overlayable items in internal ram 
                           1074 ;--------------------------------------------------------
                           1075 	.area	OSEG    (OVR,DATA)
                           1076 ;--------------------------------------------------------
                           1077 ; indirectly addressable internal ram data
                           1078 ;--------------------------------------------------------
                           1079 	.area ISEG    (DATA)
                           1080 ;--------------------------------------------------------
                           1081 ; absolute internal ram data
                           1082 ;--------------------------------------------------------
                           1083 	.area IABS    (ABS,DATA)
                           1084 	.area IABS    (ABS,DATA)
                           1085 ;--------------------------------------------------------
                           1086 ; bit data
                           1087 ;--------------------------------------------------------
                           1088 	.area BSEG    (BIT)
                           1089 ;--------------------------------------------------------
                           1090 ; paged external ram data
                           1091 ;--------------------------------------------------------
                           1092 	.area PSEG    (PAG,XDATA)
                           1093 ;--------------------------------------------------------
                           1094 ; external ram data
                           1095 ;--------------------------------------------------------
                           1096 	.area XSEG    (XDATA)
                    7020   1097 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1098 _ADCCH0VAL0	=	0x7020
                    7021   1099 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1100 _ADCCH0VAL1	=	0x7021
                    7020   1101 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1102 _ADCCH0VAL	=	0x7020
                    7022   1103 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1104 _ADCCH1VAL0	=	0x7022
                    7023   1105 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1106 _ADCCH1VAL1	=	0x7023
                    7022   1107 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1108 _ADCCH1VAL	=	0x7022
                    7024   1109 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1110 _ADCCH2VAL0	=	0x7024
                    7025   1111 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1112 _ADCCH2VAL1	=	0x7025
                    7024   1113 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1114 _ADCCH2VAL	=	0x7024
                    7026   1115 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1116 _ADCCH3VAL0	=	0x7026
                    7027   1117 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1118 _ADCCH3VAL1	=	0x7027
                    7026   1119 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1120 _ADCCH3VAL	=	0x7026
                    7028   1121 G$ADCTUNE0$0$0 == 0x7028
                    7028   1122 _ADCTUNE0	=	0x7028
                    7029   1123 G$ADCTUNE1$0$0 == 0x7029
                    7029   1124 _ADCTUNE1	=	0x7029
                    702A   1125 G$ADCTUNE2$0$0 == 0x702a
                    702A   1126 _ADCTUNE2	=	0x702a
                    7010   1127 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1128 _DMA0ADDR0	=	0x7010
                    7011   1129 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1130 _DMA0ADDR1	=	0x7011
                    7010   1131 G$DMA0ADDR$0$0 == 0x7010
                    7010   1132 _DMA0ADDR	=	0x7010
                    7014   1133 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1134 _DMA0CONFIG	=	0x7014
                    7012   1135 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1136 _DMA1ADDR0	=	0x7012
                    7013   1137 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1138 _DMA1ADDR1	=	0x7013
                    7012   1139 G$DMA1ADDR$0$0 == 0x7012
                    7012   1140 _DMA1ADDR	=	0x7012
                    7015   1141 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1142 _DMA1CONFIG	=	0x7015
                    7070   1143 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1144 _FRCOSCCONFIG	=	0x7070
                    7071   1145 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1146 _FRCOSCCTRL	=	0x7071
                    7076   1147 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1148 _FRCOSCFREQ0	=	0x7076
                    7077   1149 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1150 _FRCOSCFREQ1	=	0x7077
                    7076   1151 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1152 _FRCOSCFREQ	=	0x7076
                    7072   1153 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1154 _FRCOSCKFILT0	=	0x7072
                    7073   1155 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1156 _FRCOSCKFILT1	=	0x7073
                    7072   1157 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1158 _FRCOSCKFILT	=	0x7072
                    7078   1159 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1160 _FRCOSCPER0	=	0x7078
                    7079   1161 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1162 _FRCOSCPER1	=	0x7079
                    7078   1163 G$FRCOSCPER$0$0 == 0x7078
                    7078   1164 _FRCOSCPER	=	0x7078
                    7074   1165 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1166 _FRCOSCREF0	=	0x7074
                    7075   1167 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1168 _FRCOSCREF1	=	0x7075
                    7074   1169 G$FRCOSCREF$0$0 == 0x7074
                    7074   1170 _FRCOSCREF	=	0x7074
                    7007   1171 G$ANALOGA$0$0 == 0x7007
                    7007   1172 _ANALOGA	=	0x7007
                    700C   1173 G$GPIOENABLE$0$0 == 0x700c
                    700C   1174 _GPIOENABLE	=	0x700c
                    7003   1175 G$EXTIRQ$0$0 == 0x7003
                    7003   1176 _EXTIRQ	=	0x7003
                    7000   1177 G$INTCHGA$0$0 == 0x7000
                    7000   1178 _INTCHGA	=	0x7000
                    7001   1179 G$INTCHGB$0$0 == 0x7001
                    7001   1180 _INTCHGB	=	0x7001
                    7002   1181 G$INTCHGC$0$0 == 0x7002
                    7002   1182 _INTCHGC	=	0x7002
                    7008   1183 G$PALTA$0$0 == 0x7008
                    7008   1184 _PALTA	=	0x7008
                    7009   1185 G$PALTB$0$0 == 0x7009
                    7009   1186 _PALTB	=	0x7009
                    700A   1187 G$PALTC$0$0 == 0x700a
                    700A   1188 _PALTC	=	0x700a
                    7004   1189 G$PINCHGA$0$0 == 0x7004
                    7004   1190 _PINCHGA	=	0x7004
                    7005   1191 G$PINCHGB$0$0 == 0x7005
                    7005   1192 _PINCHGB	=	0x7005
                    7006   1193 G$PINCHGC$0$0 == 0x7006
                    7006   1194 _PINCHGC	=	0x7006
                    700B   1195 G$PINSEL$0$0 == 0x700b
                    700B   1196 _PINSEL	=	0x700b
                    7060   1197 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1198 _LPOSCCONFIG	=	0x7060
                    7066   1199 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1200 _LPOSCFREQ0	=	0x7066
                    7067   1201 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1202 _LPOSCFREQ1	=	0x7067
                    7066   1203 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1204 _LPOSCFREQ	=	0x7066
                    7062   1205 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1206 _LPOSCKFILT0	=	0x7062
                    7063   1207 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1208 _LPOSCKFILT1	=	0x7063
                    7062   1209 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1210 _LPOSCKFILT	=	0x7062
                    7068   1211 G$LPOSCPER0$0$0 == 0x7068
                    7068   1212 _LPOSCPER0	=	0x7068
                    7069   1213 G$LPOSCPER1$0$0 == 0x7069
                    7069   1214 _LPOSCPER1	=	0x7069
                    7068   1215 G$LPOSCPER$0$0 == 0x7068
                    7068   1216 _LPOSCPER	=	0x7068
                    7064   1217 G$LPOSCREF0$0$0 == 0x7064
                    7064   1218 _LPOSCREF0	=	0x7064
                    7065   1219 G$LPOSCREF1$0$0 == 0x7065
                    7065   1220 _LPOSCREF1	=	0x7065
                    7064   1221 G$LPOSCREF$0$0 == 0x7064
                    7064   1222 _LPOSCREF	=	0x7064
                    7054   1223 G$LPXOSCGM$0$0 == 0x7054
                    7054   1224 _LPXOSCGM	=	0x7054
                    7F01   1225 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1226 _MISCCTRL	=	0x7f01
                    7053   1227 G$OSCCALIB$0$0 == 0x7053
                    7053   1228 _OSCCALIB	=	0x7053
                    7050   1229 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1230 _OSCFORCERUN	=	0x7050
                    7052   1231 G$OSCREADY$0$0 == 0x7052
                    7052   1232 _OSCREADY	=	0x7052
                    7051   1233 G$OSCRUN$0$0 == 0x7051
                    7051   1234 _OSCRUN	=	0x7051
                    7040   1235 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1236 _RADIOFDATAADDR0	=	0x7040
                    7041   1237 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1238 _RADIOFDATAADDR1	=	0x7041
                    7040   1239 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1240 _RADIOFDATAADDR	=	0x7040
                    7042   1241 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1242 _RADIOFSTATADDR0	=	0x7042
                    7043   1243 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1244 _RADIOFSTATADDR1	=	0x7043
                    7042   1245 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1246 _RADIOFSTATADDR	=	0x7042
                    7044   1247 G$RADIOMUX$0$0 == 0x7044
                    7044   1248 _RADIOMUX	=	0x7044
                    7084   1249 G$SCRATCH0$0$0 == 0x7084
                    7084   1250 _SCRATCH0	=	0x7084
                    7085   1251 G$SCRATCH1$0$0 == 0x7085
                    7085   1252 _SCRATCH1	=	0x7085
                    7086   1253 G$SCRATCH2$0$0 == 0x7086
                    7086   1254 _SCRATCH2	=	0x7086
                    7087   1255 G$SCRATCH3$0$0 == 0x7087
                    7087   1256 _SCRATCH3	=	0x7087
                    7F00   1257 G$SILICONREV$0$0 == 0x7f00
                    7F00   1258 _SILICONREV	=	0x7f00
                    7F19   1259 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1260 _XTALAMPL	=	0x7f19
                    7F18   1261 G$XTALOSC$0$0 == 0x7f18
                    7F18   1262 _XTALOSC	=	0x7f18
                    7F1A   1263 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1264 _XTALREADY	=	0x7f1a
                    3F82   1265 G$XDPTR0$0$0 == 0x3f82
                    3F82   1266 _XDPTR0	=	0x3f82
                    3F84   1267 G$XDPTR1$0$0 == 0x3f84
                    3F84   1268 _XDPTR1	=	0x3f84
                    3FA8   1269 G$XIE$0$0 == 0x3fa8
                    3FA8   1270 _XIE	=	0x3fa8
                    3FB8   1271 G$XIP$0$0 == 0x3fb8
                    3FB8   1272 _XIP	=	0x3fb8
                    3F87   1273 G$XPCON$0$0 == 0x3f87
                    3F87   1274 _XPCON	=	0x3f87
                    3FCA   1275 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1276 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1277 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1278 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1279 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1280 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1281 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1282 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1283 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1284 _XADCCLKSRC	=	0x3fd1
                    3FC9   1285 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1286 _XADCCONV	=	0x3fc9
                    3FE1   1287 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1288 _XANALOGCOMP	=	0x3fe1
                    3FC6   1289 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1290 _XCLKCON	=	0x3fc6
                    3FC7   1291 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1292 _XCLKSTAT	=	0x3fc7
                    3F97   1293 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1294 _XCODECONFIG	=	0x3f97
                    3FE3   1295 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1296 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1297 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1298 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1299 G$XDIRA$0$0 == 0x3f89
                    3F89   1300 _XDIRA	=	0x3f89
                    3F8A   1301 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1302 _XDIRB	=	0x3f8a
                    3F8B   1303 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1304 _XDIRC	=	0x3f8b
                    3F8E   1305 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1306 _XDIRR	=	0x3f8e
                    3FC8   1307 G$XPINA$0$0 == 0x3fc8
                    3FC8   1308 _XPINA	=	0x3fc8
                    3FE8   1309 G$XPINB$0$0 == 0x3fe8
                    3FE8   1310 _XPINB	=	0x3fe8
                    3FF8   1311 G$XPINC$0$0 == 0x3ff8
                    3FF8   1312 _XPINC	=	0x3ff8
                    3F8D   1313 G$XPINR$0$0 == 0x3f8d
                    3F8D   1314 _XPINR	=	0x3f8d
                    3F80   1315 G$XPORTA$0$0 == 0x3f80
                    3F80   1316 _XPORTA	=	0x3f80
                    3F88   1317 G$XPORTB$0$0 == 0x3f88
                    3F88   1318 _XPORTB	=	0x3f88
                    3F90   1319 G$XPORTC$0$0 == 0x3f90
                    3F90   1320 _XPORTC	=	0x3f90
                    3F8C   1321 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1322 _XPORTR	=	0x3f8c
                    3FCE   1323 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1324 _XIC0CAPT0	=	0x3fce
                    3FCF   1325 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1326 _XIC0CAPT1	=	0x3fcf
                    3FCE   1327 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1328 _XIC0CAPT	=	0x3fce
                    3FCC   1329 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1330 _XIC0MODE	=	0x3fcc
                    3FCD   1331 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1332 _XIC0STATUS	=	0x3fcd
                    3FD6   1333 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1334 _XIC1CAPT0	=	0x3fd6
                    3FD7   1335 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1336 _XIC1CAPT1	=	0x3fd7
                    3FD6   1337 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1338 _XIC1CAPT	=	0x3fd6
                    3FD4   1339 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1340 _XIC1MODE	=	0x3fd4
                    3FD5   1341 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   1342 _XIC1STATUS	=	0x3fd5
                    3F92   1343 G$XNVADDR0$0$0 == 0x3f92
                    3F92   1344 _XNVADDR0	=	0x3f92
                    3F93   1345 G$XNVADDR1$0$0 == 0x3f93
                    3F93   1346 _XNVADDR1	=	0x3f93
                    3F92   1347 G$XNVADDR$0$0 == 0x3f92
                    3F92   1348 _XNVADDR	=	0x3f92
                    3F94   1349 G$XNVDATA0$0$0 == 0x3f94
                    3F94   1350 _XNVDATA0	=	0x3f94
                    3F95   1351 G$XNVDATA1$0$0 == 0x3f95
                    3F95   1352 _XNVDATA1	=	0x3f95
                    3F94   1353 G$XNVDATA$0$0 == 0x3f94
                    3F94   1354 _XNVDATA	=	0x3f94
                    3F96   1355 G$XNVKEY$0$0 == 0x3f96
                    3F96   1356 _XNVKEY	=	0x3f96
                    3F91   1357 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   1358 _XNVSTATUS	=	0x3f91
                    3FBC   1359 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   1360 _XOC0COMP0	=	0x3fbc
                    3FBD   1361 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   1362 _XOC0COMP1	=	0x3fbd
                    3FBC   1363 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   1364 _XOC0COMP	=	0x3fbc
                    3FB9   1365 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   1366 _XOC0MODE	=	0x3fb9
                    3FBA   1367 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   1368 _XOC0PIN	=	0x3fba
                    3FBB   1369 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   1370 _XOC0STATUS	=	0x3fbb
                    3FC4   1371 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   1372 _XOC1COMP0	=	0x3fc4
                    3FC5   1373 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   1374 _XOC1COMP1	=	0x3fc5
                    3FC4   1375 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   1376 _XOC1COMP	=	0x3fc4
                    3FC1   1377 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   1378 _XOC1MODE	=	0x3fc1
                    3FC2   1379 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   1380 _XOC1PIN	=	0x3fc2
                    3FC3   1381 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   1382 _XOC1STATUS	=	0x3fc3
                    3FB1   1383 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   1384 _XRADIOACC	=	0x3fb1
                    3FB3   1385 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   1386 _XRADIOADDR0	=	0x3fb3
                    3FB2   1387 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   1388 _XRADIOADDR1	=	0x3fb2
                    3FB7   1389 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   1390 _XRADIODATA0	=	0x3fb7
                    3FB6   1391 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   1392 _XRADIODATA1	=	0x3fb6
                    3FB5   1393 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   1394 _XRADIODATA2	=	0x3fb5
                    3FB4   1395 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   1396 _XRADIODATA3	=	0x3fb4
                    3FBE   1397 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   1398 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1399 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   1400 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1401 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   1402 _XRADIOSTAT	=	0x3fbe
                    3FDF   1403 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   1404 _XSPCLKSRC	=	0x3fdf
                    3FDC   1405 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   1406 _XSPMODE	=	0x3fdc
                    3FDE   1407 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   1408 _XSPSHREG	=	0x3fde
                    3FDD   1409 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   1410 _XSPSTATUS	=	0x3fdd
                    3F9A   1411 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   1412 _XT0CLKSRC	=	0x3f9a
                    3F9C   1413 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   1414 _XT0CNT0	=	0x3f9c
                    3F9D   1415 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   1416 _XT0CNT1	=	0x3f9d
                    3F9C   1417 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   1418 _XT0CNT	=	0x3f9c
                    3F99   1419 G$XT0MODE$0$0 == 0x3f99
                    3F99   1420 _XT0MODE	=	0x3f99
                    3F9E   1421 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   1422 _XT0PERIOD0	=	0x3f9e
                    3F9F   1423 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   1424 _XT0PERIOD1	=	0x3f9f
                    3F9E   1425 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   1426 _XT0PERIOD	=	0x3f9e
                    3F9B   1427 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   1428 _XT0STATUS	=	0x3f9b
                    3FA2   1429 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   1430 _XT1CLKSRC	=	0x3fa2
                    3FA4   1431 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   1432 _XT1CNT0	=	0x3fa4
                    3FA5   1433 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   1434 _XT1CNT1	=	0x3fa5
                    3FA4   1435 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   1436 _XT1CNT	=	0x3fa4
                    3FA1   1437 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   1438 _XT1MODE	=	0x3fa1
                    3FA6   1439 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   1440 _XT1PERIOD0	=	0x3fa6
                    3FA7   1441 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   1442 _XT1PERIOD1	=	0x3fa7
                    3FA6   1443 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   1444 _XT1PERIOD	=	0x3fa6
                    3FA3   1445 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   1446 _XT1STATUS	=	0x3fa3
                    3FAA   1447 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   1448 _XT2CLKSRC	=	0x3faa
                    3FAC   1449 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   1450 _XT2CNT0	=	0x3fac
                    3FAD   1451 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   1452 _XT2CNT1	=	0x3fad
                    3FAC   1453 G$XT2CNT$0$0 == 0x3fac
                    3FAC   1454 _XT2CNT	=	0x3fac
                    3FA9   1455 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   1456 _XT2MODE	=	0x3fa9
                    3FAE   1457 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   1458 _XT2PERIOD0	=	0x3fae
                    3FAF   1459 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   1460 _XT2PERIOD1	=	0x3faf
                    3FAE   1461 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   1462 _XT2PERIOD	=	0x3fae
                    3FAB   1463 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   1464 _XT2STATUS	=	0x3fab
                    3FE4   1465 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   1466 _XU0CTRL	=	0x3fe4
                    3FE7   1467 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   1468 _XU0MODE	=	0x3fe7
                    3FE6   1469 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   1470 _XU0SHREG	=	0x3fe6
                    3FE5   1471 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   1472 _XU0STATUS	=	0x3fe5
                    3FEC   1473 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   1474 _XU1CTRL	=	0x3fec
                    3FEF   1475 G$XU1MODE$0$0 == 0x3fef
                    3FEF   1476 _XU1MODE	=	0x3fef
                    3FEE   1477 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   1478 _XU1SHREG	=	0x3fee
                    3FED   1479 G$XU1STATUS$0$0 == 0x3fed
                    3FED   1480 _XU1STATUS	=	0x3fed
                    3FDA   1481 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   1482 _XWDTCFG	=	0x3fda
                    3FDB   1483 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   1484 _XWDTRESET	=	0x3fdb
                    3FF1   1485 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   1486 _XWTCFGA	=	0x3ff1
                    3FF9   1487 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   1488 _XWTCFGB	=	0x3ff9
                    3FF2   1489 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   1490 _XWTCNTA0	=	0x3ff2
                    3FF3   1491 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   1492 _XWTCNTA1	=	0x3ff3
                    3FF2   1493 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   1494 _XWTCNTA	=	0x3ff2
                    3FFA   1495 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   1496 _XWTCNTB0	=	0x3ffa
                    3FFB   1497 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   1498 _XWTCNTB1	=	0x3ffb
                    3FFA   1499 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   1500 _XWTCNTB	=	0x3ffa
                    3FEB   1501 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   1502 _XWTCNTR1	=	0x3feb
                    3FF4   1503 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   1504 _XWTEVTA0	=	0x3ff4
                    3FF5   1505 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   1506 _XWTEVTA1	=	0x3ff5
                    3FF4   1507 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   1508 _XWTEVTA	=	0x3ff4
                    3FF6   1509 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   1510 _XWTEVTB0	=	0x3ff6
                    3FF7   1511 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   1512 _XWTEVTB1	=	0x3ff7
                    3FF6   1513 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   1514 _XWTEVTB	=	0x3ff6
                    3FFC   1515 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   1516 _XWTEVTC0	=	0x3ffc
                    3FFD   1517 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   1518 _XWTEVTC1	=	0x3ffd
                    3FFC   1519 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   1520 _XWTEVTC	=	0x3ffc
                    3FFE   1521 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   1522 _XWTEVTD0	=	0x3ffe
                    3FFF   1523 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   1524 _XWTEVTD1	=	0x3fff
                    3FFE   1525 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   1526 _XWTEVTD	=	0x3ffe
                    3FE9   1527 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   1528 _XWTIRQEN	=	0x3fe9
                    3FEA   1529 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   1530 _XWTSTAT	=	0x3fea
                    0000   1531 Fmisc$delaymstimer$0$0==.
   0291                    1532 _delaymstimer:
   0291                    1533 	.ds 8
                           1534 ;--------------------------------------------------------
                           1535 ; absolute external ram data
                           1536 ;--------------------------------------------------------
                           1537 	.area XABS    (ABS,XDATA)
                           1538 ;--------------------------------------------------------
                           1539 ; external initialized ram data
                           1540 ;--------------------------------------------------------
                           1541 	.area XISEG   (XDATA)
                           1542 	.area HOME    (CODE)
                           1543 	.area GSINIT0 (CODE)
                           1544 	.area GSINIT1 (CODE)
                           1545 	.area GSINIT2 (CODE)
                           1546 	.area GSINIT3 (CODE)
                           1547 	.area GSINIT4 (CODE)
                           1548 	.area GSINIT5 (CODE)
                           1549 	.area GSINIT  (CODE)
                           1550 	.area GSFINAL (CODE)
                           1551 	.area CSEG    (CODE)
                           1552 ;--------------------------------------------------------
                           1553 ; global & static initialisations
                           1554 ;--------------------------------------------------------
                           1555 	.area HOME    (CODE)
                           1556 	.area GSINIT  (CODE)
                           1557 	.area GSFINAL (CODE)
                           1558 	.area GSINIT  (CODE)
                           1559 ;--------------------------------------------------------
                           1560 ; Home
                           1561 ;--------------------------------------------------------
                           1562 	.area HOME    (CODE)
                           1563 	.area HOME    (CODE)
                           1564 ;--------------------------------------------------------
                           1565 ; code
                           1566 ;--------------------------------------------------------
                           1567 	.area CSEG    (CODE)
                           1568 ;------------------------------------------------------------
                           1569 ;Allocation info for local variables in function 'stop_with_error'
                           1570 ;------------------------------------------------------------
                           1571 ;str                       Allocated to registers r5 r6 r7 
                           1572 ;------------------------------------------------------------
                    0000   1573 	G$stop_with_error$0$0 ==.
                    0000   1574 	C$misc.c$38$0$0 ==.
                           1575 ;	..\COMMON\misc.c:38: void stop_with_error(uint8_t *str)
                           1576 ;	-----------------------------------------
                           1577 ;	 function stop_with_error
                           1578 ;	-----------------------------------------
   3288                    1579 _stop_with_error:
                    0007   1580 	ar7 = 0x07
                    0006   1581 	ar6 = 0x06
                    0005   1582 	ar5 = 0x05
                    0004   1583 	ar4 = 0x04
                    0003   1584 	ar3 = 0x03
                    0002   1585 	ar2 = 0x02
                    0001   1586 	ar1 = 0x01
                    0000   1587 	ar0 = 0x00
   3288 AD 82              1588 	mov	r5,dpl
   328A AE 83              1589 	mov	r6,dph
   328C AF F0              1590 	mov	r7,b
                    0006   1591 	C$misc.c$40$1$99 ==.
                           1592 ;	..\COMMON\misc.c:40: lcd2_setpos(0);
   328E 75 82 00           1593 	mov	dpl,#0x00
   3291 C0 07              1594 	push	ar7
   3293 C0 06              1595 	push	ar6
   3295 C0 05              1596 	push	ar5
   3297 12 37 B6           1597 	lcall	_lcd2_setpos
   329A D0 05              1598 	pop	ar5
   329C D0 06              1599 	pop	ar6
   329E D0 07              1600 	pop	ar7
                    0018   1601 	C$misc.c$41$1$99 ==.
                           1602 ;	..\COMMON\misc.c:41: lcd2_writestr(str);
   32A0 8D 82              1603 	mov	dpl,r5
   32A2 8E 83              1604 	mov	dph,r6
   32A4 8F F0              1605 	mov	b,r7
   32A6 12 4A A2           1606 	lcall	_lcd2_writestr
                    0021   1607 	C$misc.c$42$1$99 ==.
                           1608 ;	..\COMMON\misc.c:42: lcd2_wait_txdone();
   32A9 12 3B 7E           1609 	lcall	_lcd2_wait_txdone
                    0024   1610 	C$misc.c$43$1$99 ==.
                           1611 ;	..\COMMON\misc.c:43: IE = EIE = E2IE = 0;
   32AC 75 A0 00           1612 	mov	_E2IE,#0x00
   32AF 75 98 00           1613 	mov	_EIE,#0x00
   32B2 75 A8 00           1614 	mov	_IE,#0x00
                    002D   1615 	C$misc.c$44$1$99 ==.
                           1616 ;	..\COMMON\misc.c:44: enter_sleep();
   32B5 12 4D B3           1617 	lcall	_enter_sleep
                    0030   1618 	C$misc.c$45$1$99 ==.
                    0030   1619 	XG$stop_with_error$0$0 ==.
   32B8 22                 1620 	ret
                           1621 ;------------------------------------------------------------
                           1622 ;Allocation info for local variables in function 'display_radio_error'
                           1623 ;------------------------------------------------------------
                           1624 ;err                       Allocated to registers r7 
                           1625 ;p                         Allocated to registers r5 r6 
                           1626 ;------------------------------------------------------------
                    0031   1627 	G$display_radio_error$0$0 ==.
                    0031   1628 	C$misc.c$47$1$99 ==.
                           1629 ;	..\COMMON\misc.c:47: void display_radio_error(uint8_t err)
                           1630 ;	-----------------------------------------
                           1631 ;	 function display_radio_error
                           1632 ;	-----------------------------------------
   32B9                    1633 _display_radio_error:
   32B9 AF 82              1634 	mov	r7,dpl
                    0033   1635 	C$misc.c$63$1$99 ==.
                           1636 ;	..\COMMON\misc.c:63: const struct errtbl __code *p = errtbl;
   32BB 7D B4              1637 	mov	r5,#_display_radio_error_errtbl_1_101
   32BD 7E 51              1638 	mov	r6,#(_display_radio_error_errtbl_1_101 >> 8)
                    0037   1639 	C$misc.c$64$1$101 ==.
                           1640 ;	..\COMMON\misc.c:64: do {
   32BF 8D 03              1641 	mov	ar3,r5
   32C1 8E 04              1642 	mov	ar4,r6
   32C3                    1643 00103$:
                    003B   1644 	C$misc.c$65$2$102 ==.
                           1645 ;	..\COMMON\misc.c:65: if (p->errcode == err) {
   32C3 8B 82              1646 	mov	dpl,r3
   32C5 8C 83              1647 	mov	dph,r4
   32C7 E4                 1648 	clr	a
   32C8 93                 1649 	movc	a,@a+dptr
   32C9 FA                 1650 	mov	r2,a
   32CA B5 07 27           1651 	cjne	a,ar7,00102$
                    0045   1652 	C$misc.c$66$3$103 ==.
                           1653 ;	..\COMMON\misc.c:66: lcd2_setpos(0);
   32CD 75 82 00           1654 	mov	dpl,#0x00
   32D0 C0 06              1655 	push	ar6
   32D2 C0 05              1656 	push	ar5
   32D4 12 37 B6           1657 	lcall	_lcd2_setpos
   32D7 D0 05              1658 	pop	ar5
   32D9 D0 06              1659 	pop	ar6
                    0053   1660 	C$misc.c$67$3$103 ==.
                           1661 ;	..\COMMON\misc.c:67: lcd2_writestr(p->msg);
   32DB 8D 82              1662 	mov	dpl,r5
   32DD 8E 83              1663 	mov	dph,r6
   32DF A3                 1664 	inc	dptr
   32E0 E4                 1665 	clr	a
   32E1 93                 1666 	movc	a,@a+dptr
   32E2 F9                 1667 	mov	r1,a
   32E3 A3                 1668 	inc	dptr
   32E4 E4                 1669 	clr	a
   32E5 93                 1670 	movc	a,@a+dptr
   32E6 F8                 1671 	mov	r0,a
   32E7 7A 80              1672 	mov	r2,#0x80
   32E9 89 82              1673 	mov	dpl,r1
   32EB 88 83              1674 	mov	dph,r0
   32ED 8A F0              1675 	mov	b,r2
   32EF 12 4A A2           1676 	lcall	_lcd2_writestr
                    006A   1677 	C$misc.c$68$3$103 ==.
                           1678 ;	..\COMMON\misc.c:68: return;
   32F2 80 13              1679 	sjmp	00106$
   32F4                    1680 00102$:
                    006C   1681 	C$misc.c$70$2$102 ==.
                           1682 ;	..\COMMON\misc.c:70: ++p;
   32F4 74 03              1683 	mov	a,#0x03
   32F6 2B                 1684 	add	a,r3
   32F7 FB                 1685 	mov	r3,a
   32F8 E4                 1686 	clr	a
   32F9 3C                 1687 	addc	a,r4
   32FA FC                 1688 	mov	r4,a
   32FB 8B 05              1689 	mov	ar5,r3
   32FD 8C 06              1690 	mov	ar6,r4
                    0077   1691 	C$misc.c$71$1$101 ==.
                           1692 ;	..\COMMON\misc.c:71: } while (p->errcode != AXRADIO_ERR_NOERROR);
   32FF 8B 82              1693 	mov	dpl,r3
   3301 8C 83              1694 	mov	dph,r4
   3303 E4                 1695 	clr	a
   3304 93                 1696 	movc	a,@a+dptr
   3305 70 BC              1697 	jnz	00103$
   3307                    1698 00106$:
                    007F   1699 	C$misc.c$72$1$101 ==.
                    007F   1700 	XG$display_radio_error$0$0 ==.
   3307 22                 1701 	ret
                           1702 ;------------------------------------------------------------
                           1703 ;Allocation info for local variables in function 'delayms_callback'
                           1704 ;------------------------------------------------------------
                           1705 ;desc                      Allocated to registers 
                           1706 ;------------------------------------------------------------
                    0080   1707 	Fmisc$delayms_callback$0$0 ==.
                    0080   1708 	C$misc.c$76$1$101 ==.
                           1709 ;	..\COMMON\misc.c:76: static void delayms_callback(struct wtimer_desc __xdata *desc)
                           1710 ;	-----------------------------------------
                           1711 ;	 function delayms_callback
                           1712 ;	-----------------------------------------
   3308                    1713 _delayms_callback:
                    0080   1714 	C$misc.c$79$1$105 ==.
                           1715 ;	..\COMMON\misc.c:79: delaymstimer.handler = 0;
   3308 90 02 93           1716 	mov	dptr,#(_delaymstimer + 0x0002)
   330B E4                 1717 	clr	a
   330C F0                 1718 	movx	@dptr,a
   330D A3                 1719 	inc	dptr
   330E F0                 1720 	movx	@dptr,a
                    0087   1721 	C$misc.c$80$1$105 ==.
                    0087   1722 	XFmisc$delayms_callback$0$0 ==.
   330F 22                 1723 	ret
                           1724 ;------------------------------------------------------------
                           1725 ;Allocation info for local variables in function 'delay_ms'
                           1726 ;------------------------------------------------------------
                           1727 ;ms                        Allocated to registers r6 r7 
                           1728 ;x                         Allocated to stack - _bp +1
                           1729 ;------------------------------------------------------------
                    0088   1730 	G$delay_ms$0$0 ==.
                    0088   1731 	C$misc.c$82$1$105 ==.
                           1732 ;	..\COMMON\misc.c:82: __reentrantb void delay_ms(uint16_t ms) __reentrant
                           1733 ;	-----------------------------------------
                           1734 ;	 function delay_ms
                           1735 ;	-----------------------------------------
   3310                    1736 _delay_ms:
   3310 C0 1F              1737 	push	_bp
   3312 E5 81              1738 	mov	a,sp
   3314 F5 1F              1739 	mov	_bp,a
   3316 24 04              1740 	add	a,#0x04
   3318 F5 81              1741 	mov	sp,a
   331A AE 82              1742 	mov	r6,dpl
   331C AF 83              1743 	mov	r7,dph
                    0096   1744 	C$misc.c$86$1$107 ==.
                           1745 ;	..\COMMON\misc.c:86: wtimer_remove(&delaymstimer);
   331E 90 02 91           1746 	mov	dptr,#_delaymstimer
   3321 C0 07              1747 	push	ar7
   3323 C0 06              1748 	push	ar6
   3325 12 49 A9           1749 	lcall	_wtimer_remove
   3328 D0 06              1750 	pop	ar6
   332A D0 07              1751 	pop	ar7
                    00A4   1752 	C$misc.c$87$1$107 ==.
                           1753 ;	..\COMMON\misc.c:87: x = ms;
   332C A8 1F              1754 	mov	r0,_bp
   332E 08                 1755 	inc	r0
   332F A6 06              1756 	mov	@r0,ar6
   3331 08                 1757 	inc	r0
   3332 A6 07              1758 	mov	@r0,ar7
   3334 08                 1759 	inc	r0
   3335 76 00              1760 	mov	@r0,#0x00
   3337 08                 1761 	inc	r0
   3338 76 00              1762 	mov	@r0,#0x00
                    00B2   1763 	C$misc.c$88$1$107 ==.
                           1764 ;	..\COMMON\misc.c:88: delaymstimer.time = ms >> 1;
   333A EF                 1765 	mov	a,r7
   333B C3                 1766 	clr	c
   333C 13                 1767 	rrc	a
   333D CE                 1768 	xch	a,r6
   333E 13                 1769 	rrc	a
   333F CE                 1770 	xch	a,r6
   3340 FF                 1771 	mov	r7,a
   3341 8E 04              1772 	mov	ar4,r6
   3343 8F 05              1773 	mov	ar5,r7
   3345 7E 00              1774 	mov	r6,#0x00
   3347 7F 00              1775 	mov	r7,#0x00
   3349 90 02 95           1776 	mov	dptr,#(_delaymstimer + 0x0004)
   334C EC                 1777 	mov	a,r4
   334D F0                 1778 	movx	@dptr,a
   334E A3                 1779 	inc	dptr
   334F ED                 1780 	mov	a,r5
   3350 F0                 1781 	movx	@dptr,a
   3351 A3                 1782 	inc	dptr
   3352 EE                 1783 	mov	a,r6
   3353 F0                 1784 	movx	@dptr,a
   3354 A3                 1785 	inc	dptr
   3355 EF                 1786 	mov	a,r7
   3356 F0                 1787 	movx	@dptr,a
                    00CF   1788 	C$misc.c$89$1$107 ==.
                           1789 ;	..\COMMON\misc.c:89: x <<= 3;
   3357 A8 1F              1790 	mov	r0,_bp
   3359 08                 1791 	inc	r0
   335A 08                 1792 	inc	r0
   335B 08                 1793 	inc	r0
   335C 08                 1794 	inc	r0
   335D E6                 1795 	mov	a,@r0
   335E 18                 1796 	dec	r0
   335F C4                 1797 	swap	a
   3360 03                 1798 	rr	a
   3361 54 F8              1799 	anl	a,#0xF8
   3363 C6                 1800 	xch	a,@r0
   3364 C4                 1801 	swap	a
   3365 03                 1802 	rr	a
   3366 C6                 1803 	xch	a,@r0
   3367 66                 1804 	xrl	a,@r0
   3368 C6                 1805 	xch	a,@r0
   3369 54 F8              1806 	anl	a,#0xF8
   336B C6                 1807 	xch	a,@r0
   336C 66                 1808 	xrl	a,@r0
   336D 08                 1809 	inc	r0
   336E F6                 1810 	mov	@r0,a
   336F 18                 1811 	dec	r0
   3370 18                 1812 	dec	r0
   3371 E6                 1813 	mov	a,@r0
   3372 C4                 1814 	swap	a
   3373 03                 1815 	rr	a
   3374 54 07              1816 	anl	a,#0x07
   3376 08                 1817 	inc	r0
   3377 46                 1818 	orl	a,@r0
   3378 F6                 1819 	mov	@r0,a
   3379 18                 1820 	dec	r0
   337A E6                 1821 	mov	a,@r0
   337B 18                 1822 	dec	r0
   337C C4                 1823 	swap	a
   337D 03                 1824 	rr	a
   337E 54 F8              1825 	anl	a,#0xF8
   3380 C6                 1826 	xch	a,@r0
   3381 C4                 1827 	swap	a
   3382 03                 1828 	rr	a
   3383 C6                 1829 	xch	a,@r0
   3384 66                 1830 	xrl	a,@r0
   3385 C6                 1831 	xch	a,@r0
   3386 54 F8              1832 	anl	a,#0xF8
   3388 C6                 1833 	xch	a,@r0
   3389 66                 1834 	xrl	a,@r0
   338A 08                 1835 	inc	r0
   338B F6                 1836 	mov	@r0,a
                    0104   1837 	C$misc.c$90$1$107 ==.
                           1838 ;	..\COMMON\misc.c:90: delaymstimer.time -= x;
   338C A8 1F              1839 	mov	r0,_bp
   338E 08                 1840 	inc	r0
   338F EC                 1841 	mov	a,r4
   3390 C3                 1842 	clr	c
   3391 96                 1843 	subb	a,@r0
   3392 FC                 1844 	mov	r4,a
   3393 ED                 1845 	mov	a,r5
   3394 08                 1846 	inc	r0
   3395 96                 1847 	subb	a,@r0
   3396 FD                 1848 	mov	r5,a
   3397 EE                 1849 	mov	a,r6
   3398 08                 1850 	inc	r0
   3399 96                 1851 	subb	a,@r0
   339A FE                 1852 	mov	r6,a
   339B EF                 1853 	mov	a,r7
   339C 08                 1854 	inc	r0
   339D 96                 1855 	subb	a,@r0
   339E FF                 1856 	mov	r7,a
   339F 90 02 95           1857 	mov	dptr,#(_delaymstimer + 0x0004)
   33A2 EC                 1858 	mov	a,r4
   33A3 F0                 1859 	movx	@dptr,a
   33A4 A3                 1860 	inc	dptr
   33A5 ED                 1861 	mov	a,r5
   33A6 F0                 1862 	movx	@dptr,a
   33A7 A3                 1863 	inc	dptr
   33A8 EE                 1864 	mov	a,r6
   33A9 F0                 1865 	movx	@dptr,a
   33AA A3                 1866 	inc	dptr
   33AB EF                 1867 	mov	a,r7
   33AC F0                 1868 	movx	@dptr,a
                    0125   1869 	C$misc.c$91$1$107 ==.
                           1870 ;	..\COMMON\misc.c:91: x <<= 3;
   33AD A8 1F              1871 	mov	r0,_bp
   33AF 08                 1872 	inc	r0
   33B0 08                 1873 	inc	r0
   33B1 08                 1874 	inc	r0
   33B2 08                 1875 	inc	r0
   33B3 E6                 1876 	mov	a,@r0
   33B4 18                 1877 	dec	r0
   33B5 C4                 1878 	swap	a
   33B6 03                 1879 	rr	a
   33B7 54 F8              1880 	anl	a,#0xF8
   33B9 C6                 1881 	xch	a,@r0
   33BA C4                 1882 	swap	a
   33BB 03                 1883 	rr	a
   33BC C6                 1884 	xch	a,@r0
   33BD 66                 1885 	xrl	a,@r0
   33BE C6                 1886 	xch	a,@r0
   33BF 54 F8              1887 	anl	a,#0xF8
   33C1 C6                 1888 	xch	a,@r0
   33C2 66                 1889 	xrl	a,@r0
   33C3 08                 1890 	inc	r0
   33C4 F6                 1891 	mov	@r0,a
   33C5 18                 1892 	dec	r0
   33C6 18                 1893 	dec	r0
   33C7 E6                 1894 	mov	a,@r0
   33C8 C4                 1895 	swap	a
   33C9 03                 1896 	rr	a
   33CA 54 07              1897 	anl	a,#0x07
   33CC 08                 1898 	inc	r0
   33CD 46                 1899 	orl	a,@r0
   33CE F6                 1900 	mov	@r0,a
   33CF 18                 1901 	dec	r0
   33D0 E6                 1902 	mov	a,@r0
   33D1 18                 1903 	dec	r0
   33D2 C4                 1904 	swap	a
   33D3 03                 1905 	rr	a
   33D4 54 F8              1906 	anl	a,#0xF8
   33D6 C6                 1907 	xch	a,@r0
   33D7 C4                 1908 	swap	a
   33D8 03                 1909 	rr	a
   33D9 C6                 1910 	xch	a,@r0
   33DA 66                 1911 	xrl	a,@r0
   33DB C6                 1912 	xch	a,@r0
   33DC 54 F8              1913 	anl	a,#0xF8
   33DE C6                 1914 	xch	a,@r0
   33DF 66                 1915 	xrl	a,@r0
   33E0 08                 1916 	inc	r0
   33E1 F6                 1917 	mov	@r0,a
                    015A   1918 	C$misc.c$92$1$107 ==.
                           1919 ;	..\COMMON\misc.c:92: delaymstimer.time += x;
   33E2 A8 1F              1920 	mov	r0,_bp
   33E4 08                 1921 	inc	r0
   33E5 E6                 1922 	mov	a,@r0
   33E6 2C                 1923 	add	a,r4
   33E7 FC                 1924 	mov	r4,a
   33E8 08                 1925 	inc	r0
   33E9 E6                 1926 	mov	a,@r0
   33EA 3D                 1927 	addc	a,r5
   33EB FD                 1928 	mov	r5,a
   33EC 08                 1929 	inc	r0
   33ED E6                 1930 	mov	a,@r0
   33EE 3E                 1931 	addc	a,r6
   33EF FE                 1932 	mov	r6,a
   33F0 08                 1933 	inc	r0
   33F1 E6                 1934 	mov	a,@r0
   33F2 3F                 1935 	addc	a,r7
   33F3 FF                 1936 	mov	r7,a
   33F4 90 02 95           1937 	mov	dptr,#(_delaymstimer + 0x0004)
   33F7 EC                 1938 	mov	a,r4
   33F8 F0                 1939 	movx	@dptr,a
   33F9 A3                 1940 	inc	dptr
   33FA ED                 1941 	mov	a,r5
   33FB F0                 1942 	movx	@dptr,a
   33FC A3                 1943 	inc	dptr
   33FD EE                 1944 	mov	a,r6
   33FE F0                 1945 	movx	@dptr,a
   33FF A3                 1946 	inc	dptr
   3400 EF                 1947 	mov	a,r7
   3401 F0                 1948 	movx	@dptr,a
                    017A   1949 	C$misc.c$93$1$107 ==.
                           1950 ;	..\COMMON\misc.c:93: x <<= 2;
   3402 A8 1F              1951 	mov	r0,_bp
   3404 08                 1952 	inc	r0
   3405 E6                 1953 	mov	a,@r0
   3406 25 E0              1954 	add	a,acc
   3408 F6                 1955 	mov	@r0,a
   3409 08                 1956 	inc	r0
   340A E6                 1957 	mov	a,@r0
   340B 33                 1958 	rlc	a
   340C F6                 1959 	mov	@r0,a
   340D 08                 1960 	inc	r0
   340E E6                 1961 	mov	a,@r0
   340F 33                 1962 	rlc	a
   3410 F6                 1963 	mov	@r0,a
   3411 08                 1964 	inc	r0
   3412 E6                 1965 	mov	a,@r0
   3413 33                 1966 	rlc	a
   3414 F6                 1967 	mov	@r0,a
   3415 18                 1968 	dec	r0
   3416 18                 1969 	dec	r0
   3417 18                 1970 	dec	r0
   3418 E6                 1971 	mov	a,@r0
   3419 25 E0              1972 	add	a,acc
   341B F6                 1973 	mov	@r0,a
   341C 08                 1974 	inc	r0
   341D E6                 1975 	mov	a,@r0
   341E 33                 1976 	rlc	a
   341F F6                 1977 	mov	@r0,a
   3420 08                 1978 	inc	r0
   3421 E6                 1979 	mov	a,@r0
   3422 33                 1980 	rlc	a
   3423 F6                 1981 	mov	@r0,a
   3424 08                 1982 	inc	r0
   3425 E6                 1983 	mov	a,@r0
   3426 33                 1984 	rlc	a
   3427 F6                 1985 	mov	@r0,a
                    01A0   1986 	C$misc.c$94$1$107 ==.
                           1987 ;	..\COMMON\misc.c:94: delaymstimer.time += x;
   3428 A8 1F              1988 	mov	r0,_bp
   342A 08                 1989 	inc	r0
   342B E6                 1990 	mov	a,@r0
   342C 2C                 1991 	add	a,r4
   342D FC                 1992 	mov	r4,a
   342E 08                 1993 	inc	r0
   342F E6                 1994 	mov	a,@r0
   3430 3D                 1995 	addc	a,r5
   3431 FD                 1996 	mov	r5,a
   3432 08                 1997 	inc	r0
   3433 E6                 1998 	mov	a,@r0
   3434 3E                 1999 	addc	a,r6
   3435 FE                 2000 	mov	r6,a
   3436 08                 2001 	inc	r0
   3437 E6                 2002 	mov	a,@r0
   3438 3F                 2003 	addc	a,r7
   3439 FF                 2004 	mov	r7,a
   343A 90 02 95           2005 	mov	dptr,#(_delaymstimer + 0x0004)
   343D EC                 2006 	mov	a,r4
   343E F0                 2007 	movx	@dptr,a
   343F A3                 2008 	inc	dptr
   3440 ED                 2009 	mov	a,r5
   3441 F0                 2010 	movx	@dptr,a
   3442 A3                 2011 	inc	dptr
   3443 EE                 2012 	mov	a,r6
   3444 F0                 2013 	movx	@dptr,a
   3445 A3                 2014 	inc	dptr
   3446 EF                 2015 	mov	a,r7
   3447 F0                 2016 	movx	@dptr,a
                    01C0   2017 	C$misc.c$95$1$107 ==.
                           2018 ;	..\COMMON\misc.c:95: delaymstimer.handler = delayms_callback;
   3448 90 02 93           2019 	mov	dptr,#(_delaymstimer + 0x0002)
   344B 74 08              2020 	mov	a,#_delayms_callback
   344D F0                 2021 	movx	@dptr,a
   344E A3                 2022 	inc	dptr
   344F 74 33              2023 	mov	a,#(_delayms_callback >> 8)
   3451 F0                 2024 	movx	@dptr,a
                    01CA   2025 	C$misc.c$96$1$107 ==.
                           2026 ;	..\COMMON\misc.c:96: wtimer1_addrelative(&delaymstimer);
   3452 90 02 91           2027 	mov	dptr,#_delaymstimer
   3455 12 40 FA           2028 	lcall	_wtimer1_addrelative
                    01D0   2029 	C$misc.c$97$1$107 ==.
                           2030 ;	..\COMMON\misc.c:97: do {
   3458                    2031 00101$:
                    01D0   2032 	C$misc.c$98$2$108 ==.
                           2033 ;	..\COMMON\misc.c:98: wtimer_runcallbacks();
   3458 12 3F 22           2034 	lcall	_wtimer_runcallbacks
                    01D3   2035 	C$misc.c$99$2$108 ==.
                           2036 ;	..\COMMON\misc.c:99: wtimer_idle(WTFLAG_CANSTANDBY);
   345B 75 82 02           2037 	mov	dpl,#0x02
   345E 12 3F A6           2038 	lcall	_wtimer_idle
                    01D9   2039 	C$misc.c$100$1$107 ==.
                           2040 ;	..\COMMON\misc.c:100: } while (delaymstimer.handler);
   3461 90 02 93           2041 	mov	dptr,#(_delaymstimer + 0x0002)
   3464 E0                 2042 	movx	a,@dptr
   3465 FE                 2043 	mov	r6,a
   3466 A3                 2044 	inc	dptr
   3467 E0                 2045 	movx	a,@dptr
   3468 FF                 2046 	mov	r7,a
   3469 4E                 2047 	orl	a,r6
   346A 70 EC              2048 	jnz	00101$
   346C 85 1F 81           2049 	mov	sp,_bp
   346F D0 1F              2050 	pop	_bp
                    01E9   2051 	C$misc.c$101$1$107 ==.
                    01E9   2052 	XG$delay_ms$0$0 ==.
   3471 22                 2053 	ret
                           2054 	.area CSEG    (CODE)
                           2055 	.area CONST   (CODE)
                    0000   2056 Lmisc.display_radio_error$errtbl$1$101 == .
   51B4                    2057 _display_radio_error_errtbl_1_101:
   51B4 01                 2058 	.db #0x01	; 1
   51B5 CC 51              2059 	.byte __str_0,(__str_0 >> 8)
   51B7 02                 2060 	.db #0x02	; 2
   51B8 DD 51              2061 	.byte __str_1,(__str_1 >> 8)
   51BA 03                 2062 	.db #0x03	; 3
   51BB E5 51              2063 	.byte __str_2,(__str_2 >> 8)
   51BD 04                 2064 	.db #0x04	; 4
   51BE F0 51              2065 	.byte __str_3,(__str_3 >> 8)
   51C0 05                 2066 	.db #0x05	; 5
   51C1 FB 51              2067 	.byte __str_4,(__str_4 >> 8)
   51C3 06                 2068 	.db #0x06	; 6
   51C4 0C 52              2069 	.byte __str_5,(__str_5 >> 8)
   51C6 07                 2070 	.db #0x07	; 7
   51C7 17 52              2071 	.byte __str_6,(__str_6 >> 8)
   51C9 00                 2072 	.db #0x00	; 0
   51CA 00 00              2073 	.byte #0x00,#0x00
                    0018   2074 Fmisc$_str_0$0$0 == .
   51CC                    2075 __str_0:
   51CC 45 3A 20 6E 6F 74  2076 	.ascii "E: not supported"
        20 73 75 70 70 6F
        72 74 65 64
   51DC 00                 2077 	.db 0x00
                    0029   2078 Fmisc$_str_1$0$0 == .
   51DD                    2079 __str_1:
   51DD 45 3A 20 62 75 73  2080 	.ascii "E: busy"
        79
   51E4 00                 2081 	.db 0x00
                    0031   2082 Fmisc$_str_2$0$0 == .
   51E5                    2083 __str_2:
   51E5 45 3A 20 74 69 6D  2084 	.ascii "E: timeout"
        65 6F 75 74
   51EF 00                 2085 	.db 0x00
                    003C   2086 Fmisc$_str_3$0$0 == .
   51F0                    2087 __str_3:
   51F0 45 3A 20 69 6E 76  2088 	.ascii "E: invalid"
        61 6C 69 64
   51FA 00                 2089 	.db 0x00
                    0047   2090 Fmisc$_str_4$0$0 == .
   51FB                    2091 __str_4:
   51FB 45 3A 20 6E 6F 20  2092 	.ascii "E: no chip found"
        63 68 69 70 20 66
        6F 75 6E 64
   520B 00                 2093 	.db 0x00
                    0058   2094 Fmisc$_str_5$0$0 == .
   520C                    2095 __str_5:
   520C 45 3A 20 72 61 6E  2096 	.ascii "E: ranging"
        67 69 6E 67
   5216 00                 2097 	.db 0x00
                    0063   2098 Fmisc$_str_6$0$0 == .
   5217                    2099 __str_6:
   5217 45 3A 20 6C 6F 63  2100 	.ascii "E: lock lost"
        6B 20 6C 6F 73 74
   5223 00                 2101 	.db 0x00
                           2102 	.area XINIT   (CODE)
                           2103 	.area CABS    (ABS,CODE)
