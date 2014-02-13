                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.3.0 #8604 (Sep  2 2013) (Linux)
                              4 ; This file was generated Thu Feb 13 20:05:30 2014
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
                             15 	.globl _wtimer1_remove
                             16 	.globl _wtimer_remove
                             17 	.globl _wtimer1_addrelative
                             18 	.globl _wtimer_runcallbacks
                             19 	.globl _wtimer_idle
                             20 	.globl _enter_sleep
                             21 	.globl _PORTC_7
                             22 	.globl _PORTC_6
                             23 	.globl _PORTC_5
                             24 	.globl _PORTC_4
                             25 	.globl _PORTC_3
                             26 	.globl _PORTC_2
                             27 	.globl _PORTC_1
                             28 	.globl _PORTC_0
                             29 	.globl _PORTB_7
                             30 	.globl _PORTB_6
                             31 	.globl _PORTB_5
                             32 	.globl _PORTB_4
                             33 	.globl _PORTB_3
                             34 	.globl _PORTB_2
                             35 	.globl _PORTB_1
                             36 	.globl _PORTB_0
                             37 	.globl _PORTA_7
                             38 	.globl _PORTA_6
                             39 	.globl _PORTA_5
                             40 	.globl _PORTA_4
                             41 	.globl _PORTA_3
                             42 	.globl _PORTA_2
                             43 	.globl _PORTA_1
                             44 	.globl _PORTA_0
                             45 	.globl _PINC_7
                             46 	.globl _PINC_6
                             47 	.globl _PINC_5
                             48 	.globl _PINC_4
                             49 	.globl _PINC_3
                             50 	.globl _PINC_2
                             51 	.globl _PINC_1
                             52 	.globl _PINC_0
                             53 	.globl _PINB_7
                             54 	.globl _PINB_6
                             55 	.globl _PINB_5
                             56 	.globl _PINB_4
                             57 	.globl _PINB_3
                             58 	.globl _PINB_2
                             59 	.globl _PINB_1
                             60 	.globl _PINB_0
                             61 	.globl _PINA_7
                             62 	.globl _PINA_6
                             63 	.globl _PINA_5
                             64 	.globl _PINA_4
                             65 	.globl _PINA_3
                             66 	.globl _PINA_2
                             67 	.globl _PINA_1
                             68 	.globl _PINA_0
                             69 	.globl _CY
                             70 	.globl _AC
                             71 	.globl _F0
                             72 	.globl _RS1
                             73 	.globl _RS0
                             74 	.globl _OV
                             75 	.globl _F1
                             76 	.globl _P
                             77 	.globl _IP_7
                             78 	.globl _IP_6
                             79 	.globl _IP_5
                             80 	.globl _IP_4
                             81 	.globl _IP_3
                             82 	.globl _IP_2
                             83 	.globl _IP_1
                             84 	.globl _IP_0
                             85 	.globl _EA
                             86 	.globl _IE_7
                             87 	.globl _IE_6
                             88 	.globl _IE_5
                             89 	.globl _IE_4
                             90 	.globl _IE_3
                             91 	.globl _IE_2
                             92 	.globl _IE_1
                             93 	.globl _IE_0
                             94 	.globl _EIP_7
                             95 	.globl _EIP_6
                             96 	.globl _EIP_5
                             97 	.globl _EIP_4
                             98 	.globl _EIP_3
                             99 	.globl _EIP_2
                            100 	.globl _EIP_1
                            101 	.globl _EIP_0
                            102 	.globl _EIE_7
                            103 	.globl _EIE_6
                            104 	.globl _EIE_5
                            105 	.globl _EIE_4
                            106 	.globl _EIE_3
                            107 	.globl _EIE_2
                            108 	.globl _EIE_1
                            109 	.globl _EIE_0
                            110 	.globl _E2IP_7
                            111 	.globl _E2IP_6
                            112 	.globl _E2IP_5
                            113 	.globl _E2IP_4
                            114 	.globl _E2IP_3
                            115 	.globl _E2IP_2
                            116 	.globl _E2IP_1
                            117 	.globl _E2IP_0
                            118 	.globl _E2IE_7
                            119 	.globl _E2IE_6
                            120 	.globl _E2IE_5
                            121 	.globl _E2IE_4
                            122 	.globl _E2IE_3
                            123 	.globl _E2IE_2
                            124 	.globl _E2IE_1
                            125 	.globl _E2IE_0
                            126 	.globl _B_7
                            127 	.globl _B_6
                            128 	.globl _B_5
                            129 	.globl _B_4
                            130 	.globl _B_3
                            131 	.globl _B_2
                            132 	.globl _B_1
                            133 	.globl _B_0
                            134 	.globl _ACC_7
                            135 	.globl _ACC_6
                            136 	.globl _ACC_5
                            137 	.globl _ACC_4
                            138 	.globl _ACC_3
                            139 	.globl _ACC_2
                            140 	.globl _ACC_1
                            141 	.globl _ACC_0
                            142 	.globl _WTSTAT
                            143 	.globl _WTIRQEN
                            144 	.globl _WTEVTD
                            145 	.globl _WTEVTD1
                            146 	.globl _WTEVTD0
                            147 	.globl _WTEVTC
                            148 	.globl _WTEVTC1
                            149 	.globl _WTEVTC0
                            150 	.globl _WTEVTB
                            151 	.globl _WTEVTB1
                            152 	.globl _WTEVTB0
                            153 	.globl _WTEVTA
                            154 	.globl _WTEVTA1
                            155 	.globl _WTEVTA0
                            156 	.globl _WTCNTR1
                            157 	.globl _WTCNTB
                            158 	.globl _WTCNTB1
                            159 	.globl _WTCNTB0
                            160 	.globl _WTCNTA
                            161 	.globl _WTCNTA1
                            162 	.globl _WTCNTA0
                            163 	.globl _WTCFGB
                            164 	.globl _WTCFGA
                            165 	.globl _WDTRESET
                            166 	.globl _WDTCFG
                            167 	.globl _U1STATUS
                            168 	.globl _U1SHREG
                            169 	.globl _U1MODE
                            170 	.globl _U1CTRL
                            171 	.globl _U0STATUS
                            172 	.globl _U0SHREG
                            173 	.globl _U0MODE
                            174 	.globl _U0CTRL
                            175 	.globl _T2STATUS
                            176 	.globl _T2PERIOD
                            177 	.globl _T2PERIOD1
                            178 	.globl _T2PERIOD0
                            179 	.globl _T2MODE
                            180 	.globl _T2CNT
                            181 	.globl _T2CNT1
                            182 	.globl _T2CNT0
                            183 	.globl _T2CLKSRC
                            184 	.globl _T1STATUS
                            185 	.globl _T1PERIOD
                            186 	.globl _T1PERIOD1
                            187 	.globl _T1PERIOD0
                            188 	.globl _T1MODE
                            189 	.globl _T1CNT
                            190 	.globl _T1CNT1
                            191 	.globl _T1CNT0
                            192 	.globl _T1CLKSRC
                            193 	.globl _T0STATUS
                            194 	.globl _T0PERIOD
                            195 	.globl _T0PERIOD1
                            196 	.globl _T0PERIOD0
                            197 	.globl _T0MODE
                            198 	.globl _T0CNT
                            199 	.globl _T0CNT1
                            200 	.globl _T0CNT0
                            201 	.globl _T0CLKSRC
                            202 	.globl _SPSTATUS
                            203 	.globl _SPSHREG
                            204 	.globl _SPMODE
                            205 	.globl _SPCLKSRC
                            206 	.globl _RADIOSTAT
                            207 	.globl _RADIOSTAT1
                            208 	.globl _RADIOSTAT0
                            209 	.globl _RADIODATA
                            210 	.globl _RADIODATA3
                            211 	.globl _RADIODATA2
                            212 	.globl _RADIODATA1
                            213 	.globl _RADIODATA0
                            214 	.globl _RADIOADDR
                            215 	.globl _RADIOADDR1
                            216 	.globl _RADIOADDR0
                            217 	.globl _RADIOACC
                            218 	.globl _OC1STATUS
                            219 	.globl _OC1PIN
                            220 	.globl _OC1MODE
                            221 	.globl _OC1COMP
                            222 	.globl _OC1COMP1
                            223 	.globl _OC1COMP0
                            224 	.globl _OC0STATUS
                            225 	.globl _OC0PIN
                            226 	.globl _OC0MODE
                            227 	.globl _OC0COMP
                            228 	.globl _OC0COMP1
                            229 	.globl _OC0COMP0
                            230 	.globl _NVSTATUS
                            231 	.globl _NVKEY
                            232 	.globl _NVDATA
                            233 	.globl _NVDATA1
                            234 	.globl _NVDATA0
                            235 	.globl _NVADDR
                            236 	.globl _NVADDR1
                            237 	.globl _NVADDR0
                            238 	.globl _IC1STATUS
                            239 	.globl _IC1MODE
                            240 	.globl _IC1CAPT
                            241 	.globl _IC1CAPT1
                            242 	.globl _IC1CAPT0
                            243 	.globl _IC0STATUS
                            244 	.globl _IC0MODE
                            245 	.globl _IC0CAPT
                            246 	.globl _IC0CAPT1
                            247 	.globl _IC0CAPT0
                            248 	.globl _PORTR
                            249 	.globl _PORTC
                            250 	.globl _PORTB
                            251 	.globl _PORTA
                            252 	.globl _PINR
                            253 	.globl _PINC
                            254 	.globl _PINB
                            255 	.globl _PINA
                            256 	.globl _DIRR
                            257 	.globl _DIRC
                            258 	.globl _DIRB
                            259 	.globl _DIRA
                            260 	.globl _DBGLNKSTAT
                            261 	.globl _DBGLNKBUF
                            262 	.globl _CODECONFIG
                            263 	.globl _CLKSTAT
                            264 	.globl _CLKCON
                            265 	.globl _ANALOGCOMP
                            266 	.globl _ADCCONV
                            267 	.globl _ADCCLKSRC
                            268 	.globl _ADCCH3CONFIG
                            269 	.globl _ADCCH2CONFIG
                            270 	.globl _ADCCH1CONFIG
                            271 	.globl _ADCCH0CONFIG
                            272 	.globl __XPAGE
                            273 	.globl _XPAGE
                            274 	.globl _SP
                            275 	.globl _PSW
                            276 	.globl _PCON
                            277 	.globl _IP
                            278 	.globl _IE
                            279 	.globl _EIP
                            280 	.globl _EIE
                            281 	.globl _E2IP
                            282 	.globl _E2IE
                            283 	.globl _DPS
                            284 	.globl _DPTR1
                            285 	.globl _DPTR0
                            286 	.globl _DPL1
                            287 	.globl _DPL
                            288 	.globl _DPH1
                            289 	.globl _DPH
                            290 	.globl _B
                            291 	.globl _ACC
                            292 	.globl _XWTSTAT
                            293 	.globl _XWTIRQEN
                            294 	.globl _XWTEVTD
                            295 	.globl _XWTEVTD1
                            296 	.globl _XWTEVTD0
                            297 	.globl _XWTEVTC
                            298 	.globl _XWTEVTC1
                            299 	.globl _XWTEVTC0
                            300 	.globl _XWTEVTB
                            301 	.globl _XWTEVTB1
                            302 	.globl _XWTEVTB0
                            303 	.globl _XWTEVTA
                            304 	.globl _XWTEVTA1
                            305 	.globl _XWTEVTA0
                            306 	.globl _XWTCNTR1
                            307 	.globl _XWTCNTB
                            308 	.globl _XWTCNTB1
                            309 	.globl _XWTCNTB0
                            310 	.globl _XWTCNTA
                            311 	.globl _XWTCNTA1
                            312 	.globl _XWTCNTA0
                            313 	.globl _XWTCFGB
                            314 	.globl _XWTCFGA
                            315 	.globl _XWDTRESET
                            316 	.globl _XWDTCFG
                            317 	.globl _XU1STATUS
                            318 	.globl _XU1SHREG
                            319 	.globl _XU1MODE
                            320 	.globl _XU1CTRL
                            321 	.globl _XU0STATUS
                            322 	.globl _XU0SHREG
                            323 	.globl _XU0MODE
                            324 	.globl _XU0CTRL
                            325 	.globl _XT2STATUS
                            326 	.globl _XT2PERIOD
                            327 	.globl _XT2PERIOD1
                            328 	.globl _XT2PERIOD0
                            329 	.globl _XT2MODE
                            330 	.globl _XT2CNT
                            331 	.globl _XT2CNT1
                            332 	.globl _XT2CNT0
                            333 	.globl _XT2CLKSRC
                            334 	.globl _XT1STATUS
                            335 	.globl _XT1PERIOD
                            336 	.globl _XT1PERIOD1
                            337 	.globl _XT1PERIOD0
                            338 	.globl _XT1MODE
                            339 	.globl _XT1CNT
                            340 	.globl _XT1CNT1
                            341 	.globl _XT1CNT0
                            342 	.globl _XT1CLKSRC
                            343 	.globl _XT0STATUS
                            344 	.globl _XT0PERIOD
                            345 	.globl _XT0PERIOD1
                            346 	.globl _XT0PERIOD0
                            347 	.globl _XT0MODE
                            348 	.globl _XT0CNT
                            349 	.globl _XT0CNT1
                            350 	.globl _XT0CNT0
                            351 	.globl _XT0CLKSRC
                            352 	.globl _XSPSTATUS
                            353 	.globl _XSPSHREG
                            354 	.globl _XSPMODE
                            355 	.globl _XSPCLKSRC
                            356 	.globl _XRADIOSTAT
                            357 	.globl _XRADIOSTAT1
                            358 	.globl _XRADIOSTAT0
                            359 	.globl _XRADIODATA3
                            360 	.globl _XRADIODATA2
                            361 	.globl _XRADIODATA1
                            362 	.globl _XRADIODATA0
                            363 	.globl _XRADIOADDR1
                            364 	.globl _XRADIOADDR0
                            365 	.globl _XRADIOACC
                            366 	.globl _XOC1STATUS
                            367 	.globl _XOC1PIN
                            368 	.globl _XOC1MODE
                            369 	.globl _XOC1COMP
                            370 	.globl _XOC1COMP1
                            371 	.globl _XOC1COMP0
                            372 	.globl _XOC0STATUS
                            373 	.globl _XOC0PIN
                            374 	.globl _XOC0MODE
                            375 	.globl _XOC0COMP
                            376 	.globl _XOC0COMP1
                            377 	.globl _XOC0COMP0
                            378 	.globl _XNVSTATUS
                            379 	.globl _XNVKEY
                            380 	.globl _XNVDATA
                            381 	.globl _XNVDATA1
                            382 	.globl _XNVDATA0
                            383 	.globl _XNVADDR
                            384 	.globl _XNVADDR1
                            385 	.globl _XNVADDR0
                            386 	.globl _XIC1STATUS
                            387 	.globl _XIC1MODE
                            388 	.globl _XIC1CAPT
                            389 	.globl _XIC1CAPT1
                            390 	.globl _XIC1CAPT0
                            391 	.globl _XIC0STATUS
                            392 	.globl _XIC0MODE
                            393 	.globl _XIC0CAPT
                            394 	.globl _XIC0CAPT1
                            395 	.globl _XIC0CAPT0
                            396 	.globl _XPORTR
                            397 	.globl _XPORTC
                            398 	.globl _XPORTB
                            399 	.globl _XPORTA
                            400 	.globl _XPINR
                            401 	.globl _XPINC
                            402 	.globl _XPINB
                            403 	.globl _XPINA
                            404 	.globl _XDIRR
                            405 	.globl _XDIRC
                            406 	.globl _XDIRB
                            407 	.globl _XDIRA
                            408 	.globl _XDBGLNKSTAT
                            409 	.globl _XDBGLNKBUF
                            410 	.globl _XCODECONFIG
                            411 	.globl _XCLKSTAT
                            412 	.globl _XCLKCON
                            413 	.globl _XANALOGCOMP
                            414 	.globl _XADCCONV
                            415 	.globl _XADCCLKSRC
                            416 	.globl _XADCCH3CONFIG
                            417 	.globl _XADCCH2CONFIG
                            418 	.globl _XADCCH1CONFIG
                            419 	.globl _XADCCH0CONFIG
                            420 	.globl _XPCON
                            421 	.globl _XIP
                            422 	.globl _XIE
                            423 	.globl _XDPTR1
                            424 	.globl _XDPTR0
                            425 	.globl _XTALREADY
                            426 	.globl _XTALOSC
                            427 	.globl _XTALAMPL
                            428 	.globl _SILICONREV
                            429 	.globl _SCRATCH3
                            430 	.globl _SCRATCH2
                            431 	.globl _SCRATCH1
                            432 	.globl _SCRATCH0
                            433 	.globl _RADIOMUX
                            434 	.globl _RADIOFSTATADDR
                            435 	.globl _RADIOFSTATADDR1
                            436 	.globl _RADIOFSTATADDR0
                            437 	.globl _RADIOFDATAADDR
                            438 	.globl _RADIOFDATAADDR1
                            439 	.globl _RADIOFDATAADDR0
                            440 	.globl _OSCRUN
                            441 	.globl _OSCREADY
                            442 	.globl _OSCFORCERUN
                            443 	.globl _OSCCALIB
                            444 	.globl _MISCCTRL
                            445 	.globl _LPXOSCGM
                            446 	.globl _LPOSCREF
                            447 	.globl _LPOSCREF1
                            448 	.globl _LPOSCREF0
                            449 	.globl _LPOSCPER
                            450 	.globl _LPOSCPER1
                            451 	.globl _LPOSCPER0
                            452 	.globl _LPOSCKFILT
                            453 	.globl _LPOSCKFILT1
                            454 	.globl _LPOSCKFILT0
                            455 	.globl _LPOSCFREQ
                            456 	.globl _LPOSCFREQ1
                            457 	.globl _LPOSCFREQ0
                            458 	.globl _LPOSCCONFIG
                            459 	.globl _PINSEL
                            460 	.globl _PINCHGC
                            461 	.globl _PINCHGB
                            462 	.globl _PINCHGA
                            463 	.globl _PALTC
                            464 	.globl _PALTB
                            465 	.globl _PALTA
                            466 	.globl _INTCHGC
                            467 	.globl _INTCHGB
                            468 	.globl _INTCHGA
                            469 	.globl _EXTIRQ
                            470 	.globl _GPIOENABLE
                            471 	.globl _ANALOGA
                            472 	.globl _FRCOSCREF
                            473 	.globl _FRCOSCREF1
                            474 	.globl _FRCOSCREF0
                            475 	.globl _FRCOSCPER
                            476 	.globl _FRCOSCPER1
                            477 	.globl _FRCOSCPER0
                            478 	.globl _FRCOSCKFILT
                            479 	.globl _FRCOSCKFILT1
                            480 	.globl _FRCOSCKFILT0
                            481 	.globl _FRCOSCFREQ
                            482 	.globl _FRCOSCFREQ1
                            483 	.globl _FRCOSCFREQ0
                            484 	.globl _FRCOSCCTRL
                            485 	.globl _FRCOSCCONFIG
                            486 	.globl _DMA1CONFIG
                            487 	.globl _DMA1ADDR
                            488 	.globl _DMA1ADDR1
                            489 	.globl _DMA1ADDR0
                            490 	.globl _DMA0CONFIG
                            491 	.globl _DMA0ADDR
                            492 	.globl _DMA0ADDR1
                            493 	.globl _DMA0ADDR0
                            494 	.globl _ADCTUNE2
                            495 	.globl _ADCTUNE1
                            496 	.globl _ADCTUNE0
                            497 	.globl _ADCCH3VAL
                            498 	.globl _ADCCH3VAL1
                            499 	.globl _ADCCH3VAL0
                            500 	.globl _ADCCH2VAL
                            501 	.globl _ADCCH2VAL1
                            502 	.globl _ADCCH2VAL0
                            503 	.globl _ADCCH1VAL
                            504 	.globl _ADCCH1VAL1
                            505 	.globl _ADCCH1VAL0
                            506 	.globl _ADCCH0VAL
                            507 	.globl _ADCCH0VAL1
                            508 	.globl _ADCCH0VAL0
                            509 	.globl _stop_with_error
                            510 	.globl _display_radio_error
                            511 	.globl _delay_ms
                            512 ;--------------------------------------------------------
                            513 ; special function registers
                            514 ;--------------------------------------------------------
                            515 	.area RSEG    (ABS,DATA)
   0000                     516 	.org 0x0000
                     00E0   517 G$ACC$0$0 == 0x00e0
                     00E0   518 _ACC	=	0x00e0
                     00F0   519 G$B$0$0 == 0x00f0
                     00F0   520 _B	=	0x00f0
                     0083   521 G$DPH$0$0 == 0x0083
                     0083   522 _DPH	=	0x0083
                     0085   523 G$DPH1$0$0 == 0x0085
                     0085   524 _DPH1	=	0x0085
                     0082   525 G$DPL$0$0 == 0x0082
                     0082   526 _DPL	=	0x0082
                     0084   527 G$DPL1$0$0 == 0x0084
                     0084   528 _DPL1	=	0x0084
                     8382   529 G$DPTR0$0$0 == 0x8382
                     8382   530 _DPTR0	=	0x8382
                     8584   531 G$DPTR1$0$0 == 0x8584
                     8584   532 _DPTR1	=	0x8584
                     0086   533 G$DPS$0$0 == 0x0086
                     0086   534 _DPS	=	0x0086
                     00A0   535 G$E2IE$0$0 == 0x00a0
                     00A0   536 _E2IE	=	0x00a0
                     00C0   537 G$E2IP$0$0 == 0x00c0
                     00C0   538 _E2IP	=	0x00c0
                     0098   539 G$EIE$0$0 == 0x0098
                     0098   540 _EIE	=	0x0098
                     00B0   541 G$EIP$0$0 == 0x00b0
                     00B0   542 _EIP	=	0x00b0
                     00A8   543 G$IE$0$0 == 0x00a8
                     00A8   544 _IE	=	0x00a8
                     00B8   545 G$IP$0$0 == 0x00b8
                     00B8   546 _IP	=	0x00b8
                     0087   547 G$PCON$0$0 == 0x0087
                     0087   548 _PCON	=	0x0087
                     00D0   549 G$PSW$0$0 == 0x00d0
                     00D0   550 _PSW	=	0x00d0
                     0081   551 G$SP$0$0 == 0x0081
                     0081   552 _SP	=	0x0081
                     00D9   553 G$XPAGE$0$0 == 0x00d9
                     00D9   554 _XPAGE	=	0x00d9
                     00D9   555 G$_XPAGE$0$0 == 0x00d9
                     00D9   556 __XPAGE	=	0x00d9
                     00CA   557 G$ADCCH0CONFIG$0$0 == 0x00ca
                     00CA   558 _ADCCH0CONFIG	=	0x00ca
                     00CB   559 G$ADCCH1CONFIG$0$0 == 0x00cb
                     00CB   560 _ADCCH1CONFIG	=	0x00cb
                     00D2   561 G$ADCCH2CONFIG$0$0 == 0x00d2
                     00D2   562 _ADCCH2CONFIG	=	0x00d2
                     00D3   563 G$ADCCH3CONFIG$0$0 == 0x00d3
                     00D3   564 _ADCCH3CONFIG	=	0x00d3
                     00D1   565 G$ADCCLKSRC$0$0 == 0x00d1
                     00D1   566 _ADCCLKSRC	=	0x00d1
                     00C9   567 G$ADCCONV$0$0 == 0x00c9
                     00C9   568 _ADCCONV	=	0x00c9
                     00E1   569 G$ANALOGCOMP$0$0 == 0x00e1
                     00E1   570 _ANALOGCOMP	=	0x00e1
                     00C6   571 G$CLKCON$0$0 == 0x00c6
                     00C6   572 _CLKCON	=	0x00c6
                     00C7   573 G$CLKSTAT$0$0 == 0x00c7
                     00C7   574 _CLKSTAT	=	0x00c7
                     0097   575 G$CODECONFIG$0$0 == 0x0097
                     0097   576 _CODECONFIG	=	0x0097
                     00E3   577 G$DBGLNKBUF$0$0 == 0x00e3
                     00E3   578 _DBGLNKBUF	=	0x00e3
                     00E2   579 G$DBGLNKSTAT$0$0 == 0x00e2
                     00E2   580 _DBGLNKSTAT	=	0x00e2
                     0089   581 G$DIRA$0$0 == 0x0089
                     0089   582 _DIRA	=	0x0089
                     008A   583 G$DIRB$0$0 == 0x008a
                     008A   584 _DIRB	=	0x008a
                     008B   585 G$DIRC$0$0 == 0x008b
                     008B   586 _DIRC	=	0x008b
                     008E   587 G$DIRR$0$0 == 0x008e
                     008E   588 _DIRR	=	0x008e
                     00C8   589 G$PINA$0$0 == 0x00c8
                     00C8   590 _PINA	=	0x00c8
                     00E8   591 G$PINB$0$0 == 0x00e8
                     00E8   592 _PINB	=	0x00e8
                     00F8   593 G$PINC$0$0 == 0x00f8
                     00F8   594 _PINC	=	0x00f8
                     008D   595 G$PINR$0$0 == 0x008d
                     008D   596 _PINR	=	0x008d
                     0080   597 G$PORTA$0$0 == 0x0080
                     0080   598 _PORTA	=	0x0080
                     0088   599 G$PORTB$0$0 == 0x0088
                     0088   600 _PORTB	=	0x0088
                     0090   601 G$PORTC$0$0 == 0x0090
                     0090   602 _PORTC	=	0x0090
                     008C   603 G$PORTR$0$0 == 0x008c
                     008C   604 _PORTR	=	0x008c
                     00CE   605 G$IC0CAPT0$0$0 == 0x00ce
                     00CE   606 _IC0CAPT0	=	0x00ce
                     00CF   607 G$IC0CAPT1$0$0 == 0x00cf
                     00CF   608 _IC0CAPT1	=	0x00cf
                     CFCE   609 G$IC0CAPT$0$0 == 0xcfce
                     CFCE   610 _IC0CAPT	=	0xcfce
                     00CC   611 G$IC0MODE$0$0 == 0x00cc
                     00CC   612 _IC0MODE	=	0x00cc
                     00CD   613 G$IC0STATUS$0$0 == 0x00cd
                     00CD   614 _IC0STATUS	=	0x00cd
                     00D6   615 G$IC1CAPT0$0$0 == 0x00d6
                     00D6   616 _IC1CAPT0	=	0x00d6
                     00D7   617 G$IC1CAPT1$0$0 == 0x00d7
                     00D7   618 _IC1CAPT1	=	0x00d7
                     D7D6   619 G$IC1CAPT$0$0 == 0xd7d6
                     D7D6   620 _IC1CAPT	=	0xd7d6
                     00D4   621 G$IC1MODE$0$0 == 0x00d4
                     00D4   622 _IC1MODE	=	0x00d4
                     00D5   623 G$IC1STATUS$0$0 == 0x00d5
                     00D5   624 _IC1STATUS	=	0x00d5
                     0092   625 G$NVADDR0$0$0 == 0x0092
                     0092   626 _NVADDR0	=	0x0092
                     0093   627 G$NVADDR1$0$0 == 0x0093
                     0093   628 _NVADDR1	=	0x0093
                     9392   629 G$NVADDR$0$0 == 0x9392
                     9392   630 _NVADDR	=	0x9392
                     0094   631 G$NVDATA0$0$0 == 0x0094
                     0094   632 _NVDATA0	=	0x0094
                     0095   633 G$NVDATA1$0$0 == 0x0095
                     0095   634 _NVDATA1	=	0x0095
                     9594   635 G$NVDATA$0$0 == 0x9594
                     9594   636 _NVDATA	=	0x9594
                     0096   637 G$NVKEY$0$0 == 0x0096
                     0096   638 _NVKEY	=	0x0096
                     0091   639 G$NVSTATUS$0$0 == 0x0091
                     0091   640 _NVSTATUS	=	0x0091
                     00BC   641 G$OC0COMP0$0$0 == 0x00bc
                     00BC   642 _OC0COMP0	=	0x00bc
                     00BD   643 G$OC0COMP1$0$0 == 0x00bd
                     00BD   644 _OC0COMP1	=	0x00bd
                     BDBC   645 G$OC0COMP$0$0 == 0xbdbc
                     BDBC   646 _OC0COMP	=	0xbdbc
                     00B9   647 G$OC0MODE$0$0 == 0x00b9
                     00B9   648 _OC0MODE	=	0x00b9
                     00BA   649 G$OC0PIN$0$0 == 0x00ba
                     00BA   650 _OC0PIN	=	0x00ba
                     00BB   651 G$OC0STATUS$0$0 == 0x00bb
                     00BB   652 _OC0STATUS	=	0x00bb
                     00C4   653 G$OC1COMP0$0$0 == 0x00c4
                     00C4   654 _OC1COMP0	=	0x00c4
                     00C5   655 G$OC1COMP1$0$0 == 0x00c5
                     00C5   656 _OC1COMP1	=	0x00c5
                     C5C4   657 G$OC1COMP$0$0 == 0xc5c4
                     C5C4   658 _OC1COMP	=	0xc5c4
                     00C1   659 G$OC1MODE$0$0 == 0x00c1
                     00C1   660 _OC1MODE	=	0x00c1
                     00C2   661 G$OC1PIN$0$0 == 0x00c2
                     00C2   662 _OC1PIN	=	0x00c2
                     00C3   663 G$OC1STATUS$0$0 == 0x00c3
                     00C3   664 _OC1STATUS	=	0x00c3
                     00B1   665 G$RADIOACC$0$0 == 0x00b1
                     00B1   666 _RADIOACC	=	0x00b1
                     00B3   667 G$RADIOADDR0$0$0 == 0x00b3
                     00B3   668 _RADIOADDR0	=	0x00b3
                     00B2   669 G$RADIOADDR1$0$0 == 0x00b2
                     00B2   670 _RADIOADDR1	=	0x00b2
                     B2B3   671 G$RADIOADDR$0$0 == 0xb2b3
                     B2B3   672 _RADIOADDR	=	0xb2b3
                     00B7   673 G$RADIODATA0$0$0 == 0x00b7
                     00B7   674 _RADIODATA0	=	0x00b7
                     00B6   675 G$RADIODATA1$0$0 == 0x00b6
                     00B6   676 _RADIODATA1	=	0x00b6
                     00B5   677 G$RADIODATA2$0$0 == 0x00b5
                     00B5   678 _RADIODATA2	=	0x00b5
                     00B4   679 G$RADIODATA3$0$0 == 0x00b4
                     00B4   680 _RADIODATA3	=	0x00b4
                     B4B5B6B7   681 G$RADIODATA$0$0 == 0xb4b5b6b7
                     B4B5B6B7   682 _RADIODATA	=	0xb4b5b6b7
                     00BE   683 G$RADIOSTAT0$0$0 == 0x00be
                     00BE   684 _RADIOSTAT0	=	0x00be
                     00BF   685 G$RADIOSTAT1$0$0 == 0x00bf
                     00BF   686 _RADIOSTAT1	=	0x00bf
                     BFBE   687 G$RADIOSTAT$0$0 == 0xbfbe
                     BFBE   688 _RADIOSTAT	=	0xbfbe
                     00DF   689 G$SPCLKSRC$0$0 == 0x00df
                     00DF   690 _SPCLKSRC	=	0x00df
                     00DC   691 G$SPMODE$0$0 == 0x00dc
                     00DC   692 _SPMODE	=	0x00dc
                     00DE   693 G$SPSHREG$0$0 == 0x00de
                     00DE   694 _SPSHREG	=	0x00de
                     00DD   695 G$SPSTATUS$0$0 == 0x00dd
                     00DD   696 _SPSTATUS	=	0x00dd
                     009A   697 G$T0CLKSRC$0$0 == 0x009a
                     009A   698 _T0CLKSRC	=	0x009a
                     009C   699 G$T0CNT0$0$0 == 0x009c
                     009C   700 _T0CNT0	=	0x009c
                     009D   701 G$T0CNT1$0$0 == 0x009d
                     009D   702 _T0CNT1	=	0x009d
                     9D9C   703 G$T0CNT$0$0 == 0x9d9c
                     9D9C   704 _T0CNT	=	0x9d9c
                     0099   705 G$T0MODE$0$0 == 0x0099
                     0099   706 _T0MODE	=	0x0099
                     009E   707 G$T0PERIOD0$0$0 == 0x009e
                     009E   708 _T0PERIOD0	=	0x009e
                     009F   709 G$T0PERIOD1$0$0 == 0x009f
                     009F   710 _T0PERIOD1	=	0x009f
                     9F9E   711 G$T0PERIOD$0$0 == 0x9f9e
                     9F9E   712 _T0PERIOD	=	0x9f9e
                     009B   713 G$T0STATUS$0$0 == 0x009b
                     009B   714 _T0STATUS	=	0x009b
                     00A2   715 G$T1CLKSRC$0$0 == 0x00a2
                     00A2   716 _T1CLKSRC	=	0x00a2
                     00A4   717 G$T1CNT0$0$0 == 0x00a4
                     00A4   718 _T1CNT0	=	0x00a4
                     00A5   719 G$T1CNT1$0$0 == 0x00a5
                     00A5   720 _T1CNT1	=	0x00a5
                     A5A4   721 G$T1CNT$0$0 == 0xa5a4
                     A5A4   722 _T1CNT	=	0xa5a4
                     00A1   723 G$T1MODE$0$0 == 0x00a1
                     00A1   724 _T1MODE	=	0x00a1
                     00A6   725 G$T1PERIOD0$0$0 == 0x00a6
                     00A6   726 _T1PERIOD0	=	0x00a6
                     00A7   727 G$T1PERIOD1$0$0 == 0x00a7
                     00A7   728 _T1PERIOD1	=	0x00a7
                     A7A6   729 G$T1PERIOD$0$0 == 0xa7a6
                     A7A6   730 _T1PERIOD	=	0xa7a6
                     00A3   731 G$T1STATUS$0$0 == 0x00a3
                     00A3   732 _T1STATUS	=	0x00a3
                     00AA   733 G$T2CLKSRC$0$0 == 0x00aa
                     00AA   734 _T2CLKSRC	=	0x00aa
                     00AC   735 G$T2CNT0$0$0 == 0x00ac
                     00AC   736 _T2CNT0	=	0x00ac
                     00AD   737 G$T2CNT1$0$0 == 0x00ad
                     00AD   738 _T2CNT1	=	0x00ad
                     ADAC   739 G$T2CNT$0$0 == 0xadac
                     ADAC   740 _T2CNT	=	0xadac
                     00A9   741 G$T2MODE$0$0 == 0x00a9
                     00A9   742 _T2MODE	=	0x00a9
                     00AE   743 G$T2PERIOD0$0$0 == 0x00ae
                     00AE   744 _T2PERIOD0	=	0x00ae
                     00AF   745 G$T2PERIOD1$0$0 == 0x00af
                     00AF   746 _T2PERIOD1	=	0x00af
                     AFAE   747 G$T2PERIOD$0$0 == 0xafae
                     AFAE   748 _T2PERIOD	=	0xafae
                     00AB   749 G$T2STATUS$0$0 == 0x00ab
                     00AB   750 _T2STATUS	=	0x00ab
                     00E4   751 G$U0CTRL$0$0 == 0x00e4
                     00E4   752 _U0CTRL	=	0x00e4
                     00E7   753 G$U0MODE$0$0 == 0x00e7
                     00E7   754 _U0MODE	=	0x00e7
                     00E6   755 G$U0SHREG$0$0 == 0x00e6
                     00E6   756 _U0SHREG	=	0x00e6
                     00E5   757 G$U0STATUS$0$0 == 0x00e5
                     00E5   758 _U0STATUS	=	0x00e5
                     00EC   759 G$U1CTRL$0$0 == 0x00ec
                     00EC   760 _U1CTRL	=	0x00ec
                     00EF   761 G$U1MODE$0$0 == 0x00ef
                     00EF   762 _U1MODE	=	0x00ef
                     00EE   763 G$U1SHREG$0$0 == 0x00ee
                     00EE   764 _U1SHREG	=	0x00ee
                     00ED   765 G$U1STATUS$0$0 == 0x00ed
                     00ED   766 _U1STATUS	=	0x00ed
                     00DA   767 G$WDTCFG$0$0 == 0x00da
                     00DA   768 _WDTCFG	=	0x00da
                     00DB   769 G$WDTRESET$0$0 == 0x00db
                     00DB   770 _WDTRESET	=	0x00db
                     00F1   771 G$WTCFGA$0$0 == 0x00f1
                     00F1   772 _WTCFGA	=	0x00f1
                     00F9   773 G$WTCFGB$0$0 == 0x00f9
                     00F9   774 _WTCFGB	=	0x00f9
                     00F2   775 G$WTCNTA0$0$0 == 0x00f2
                     00F2   776 _WTCNTA0	=	0x00f2
                     00F3   777 G$WTCNTA1$0$0 == 0x00f3
                     00F3   778 _WTCNTA1	=	0x00f3
                     F3F2   779 G$WTCNTA$0$0 == 0xf3f2
                     F3F2   780 _WTCNTA	=	0xf3f2
                     00FA   781 G$WTCNTB0$0$0 == 0x00fa
                     00FA   782 _WTCNTB0	=	0x00fa
                     00FB   783 G$WTCNTB1$0$0 == 0x00fb
                     00FB   784 _WTCNTB1	=	0x00fb
                     FBFA   785 G$WTCNTB$0$0 == 0xfbfa
                     FBFA   786 _WTCNTB	=	0xfbfa
                     00EB   787 G$WTCNTR1$0$0 == 0x00eb
                     00EB   788 _WTCNTR1	=	0x00eb
                     00F4   789 G$WTEVTA0$0$0 == 0x00f4
                     00F4   790 _WTEVTA0	=	0x00f4
                     00F5   791 G$WTEVTA1$0$0 == 0x00f5
                     00F5   792 _WTEVTA1	=	0x00f5
                     F5F4   793 G$WTEVTA$0$0 == 0xf5f4
                     F5F4   794 _WTEVTA	=	0xf5f4
                     00F6   795 G$WTEVTB0$0$0 == 0x00f6
                     00F6   796 _WTEVTB0	=	0x00f6
                     00F7   797 G$WTEVTB1$0$0 == 0x00f7
                     00F7   798 _WTEVTB1	=	0x00f7
                     F7F6   799 G$WTEVTB$0$0 == 0xf7f6
                     F7F6   800 _WTEVTB	=	0xf7f6
                     00FC   801 G$WTEVTC0$0$0 == 0x00fc
                     00FC   802 _WTEVTC0	=	0x00fc
                     00FD   803 G$WTEVTC1$0$0 == 0x00fd
                     00FD   804 _WTEVTC1	=	0x00fd
                     FDFC   805 G$WTEVTC$0$0 == 0xfdfc
                     FDFC   806 _WTEVTC	=	0xfdfc
                     00FE   807 G$WTEVTD0$0$0 == 0x00fe
                     00FE   808 _WTEVTD0	=	0x00fe
                     00FF   809 G$WTEVTD1$0$0 == 0x00ff
                     00FF   810 _WTEVTD1	=	0x00ff
                     FFFE   811 G$WTEVTD$0$0 == 0xfffe
                     FFFE   812 _WTEVTD	=	0xfffe
                     00E9   813 G$WTIRQEN$0$0 == 0x00e9
                     00E9   814 _WTIRQEN	=	0x00e9
                     00EA   815 G$WTSTAT$0$0 == 0x00ea
                     00EA   816 _WTSTAT	=	0x00ea
                            817 ;--------------------------------------------------------
                            818 ; special function bits
                            819 ;--------------------------------------------------------
                            820 	.area RSEG    (ABS,DATA)
   0000                     821 	.org 0x0000
                     00E0   822 G$ACC_0$0$0 == 0x00e0
                     00E0   823 _ACC_0	=	0x00e0
                     00E1   824 G$ACC_1$0$0 == 0x00e1
                     00E1   825 _ACC_1	=	0x00e1
                     00E2   826 G$ACC_2$0$0 == 0x00e2
                     00E2   827 _ACC_2	=	0x00e2
                     00E3   828 G$ACC_3$0$0 == 0x00e3
                     00E3   829 _ACC_3	=	0x00e3
                     00E4   830 G$ACC_4$0$0 == 0x00e4
                     00E4   831 _ACC_4	=	0x00e4
                     00E5   832 G$ACC_5$0$0 == 0x00e5
                     00E5   833 _ACC_5	=	0x00e5
                     00E6   834 G$ACC_6$0$0 == 0x00e6
                     00E6   835 _ACC_6	=	0x00e6
                     00E7   836 G$ACC_7$0$0 == 0x00e7
                     00E7   837 _ACC_7	=	0x00e7
                     00F0   838 G$B_0$0$0 == 0x00f0
                     00F0   839 _B_0	=	0x00f0
                     00F1   840 G$B_1$0$0 == 0x00f1
                     00F1   841 _B_1	=	0x00f1
                     00F2   842 G$B_2$0$0 == 0x00f2
                     00F2   843 _B_2	=	0x00f2
                     00F3   844 G$B_3$0$0 == 0x00f3
                     00F3   845 _B_3	=	0x00f3
                     00F4   846 G$B_4$0$0 == 0x00f4
                     00F4   847 _B_4	=	0x00f4
                     00F5   848 G$B_5$0$0 == 0x00f5
                     00F5   849 _B_5	=	0x00f5
                     00F6   850 G$B_6$0$0 == 0x00f6
                     00F6   851 _B_6	=	0x00f6
                     00F7   852 G$B_7$0$0 == 0x00f7
                     00F7   853 _B_7	=	0x00f7
                     00A0   854 G$E2IE_0$0$0 == 0x00a0
                     00A0   855 _E2IE_0	=	0x00a0
                     00A1   856 G$E2IE_1$0$0 == 0x00a1
                     00A1   857 _E2IE_1	=	0x00a1
                     00A2   858 G$E2IE_2$0$0 == 0x00a2
                     00A2   859 _E2IE_2	=	0x00a2
                     00A3   860 G$E2IE_3$0$0 == 0x00a3
                     00A3   861 _E2IE_3	=	0x00a3
                     00A4   862 G$E2IE_4$0$0 == 0x00a4
                     00A4   863 _E2IE_4	=	0x00a4
                     00A5   864 G$E2IE_5$0$0 == 0x00a5
                     00A5   865 _E2IE_5	=	0x00a5
                     00A6   866 G$E2IE_6$0$0 == 0x00a6
                     00A6   867 _E2IE_6	=	0x00a6
                     00A7   868 G$E2IE_7$0$0 == 0x00a7
                     00A7   869 _E2IE_7	=	0x00a7
                     00C0   870 G$E2IP_0$0$0 == 0x00c0
                     00C0   871 _E2IP_0	=	0x00c0
                     00C1   872 G$E2IP_1$0$0 == 0x00c1
                     00C1   873 _E2IP_1	=	0x00c1
                     00C2   874 G$E2IP_2$0$0 == 0x00c2
                     00C2   875 _E2IP_2	=	0x00c2
                     00C3   876 G$E2IP_3$0$0 == 0x00c3
                     00C3   877 _E2IP_3	=	0x00c3
                     00C4   878 G$E2IP_4$0$0 == 0x00c4
                     00C4   879 _E2IP_4	=	0x00c4
                     00C5   880 G$E2IP_5$0$0 == 0x00c5
                     00C5   881 _E2IP_5	=	0x00c5
                     00C6   882 G$E2IP_6$0$0 == 0x00c6
                     00C6   883 _E2IP_6	=	0x00c6
                     00C7   884 G$E2IP_7$0$0 == 0x00c7
                     00C7   885 _E2IP_7	=	0x00c7
                     0098   886 G$EIE_0$0$0 == 0x0098
                     0098   887 _EIE_0	=	0x0098
                     0099   888 G$EIE_1$0$0 == 0x0099
                     0099   889 _EIE_1	=	0x0099
                     009A   890 G$EIE_2$0$0 == 0x009a
                     009A   891 _EIE_2	=	0x009a
                     009B   892 G$EIE_3$0$0 == 0x009b
                     009B   893 _EIE_3	=	0x009b
                     009C   894 G$EIE_4$0$0 == 0x009c
                     009C   895 _EIE_4	=	0x009c
                     009D   896 G$EIE_5$0$0 == 0x009d
                     009D   897 _EIE_5	=	0x009d
                     009E   898 G$EIE_6$0$0 == 0x009e
                     009E   899 _EIE_6	=	0x009e
                     009F   900 G$EIE_7$0$0 == 0x009f
                     009F   901 _EIE_7	=	0x009f
                     00B0   902 G$EIP_0$0$0 == 0x00b0
                     00B0   903 _EIP_0	=	0x00b0
                     00B1   904 G$EIP_1$0$0 == 0x00b1
                     00B1   905 _EIP_1	=	0x00b1
                     00B2   906 G$EIP_2$0$0 == 0x00b2
                     00B2   907 _EIP_2	=	0x00b2
                     00B3   908 G$EIP_3$0$0 == 0x00b3
                     00B3   909 _EIP_3	=	0x00b3
                     00B4   910 G$EIP_4$0$0 == 0x00b4
                     00B4   911 _EIP_4	=	0x00b4
                     00B5   912 G$EIP_5$0$0 == 0x00b5
                     00B5   913 _EIP_5	=	0x00b5
                     00B6   914 G$EIP_6$0$0 == 0x00b6
                     00B6   915 _EIP_6	=	0x00b6
                     00B7   916 G$EIP_7$0$0 == 0x00b7
                     00B7   917 _EIP_7	=	0x00b7
                     00A8   918 G$IE_0$0$0 == 0x00a8
                     00A8   919 _IE_0	=	0x00a8
                     00A9   920 G$IE_1$0$0 == 0x00a9
                     00A9   921 _IE_1	=	0x00a9
                     00AA   922 G$IE_2$0$0 == 0x00aa
                     00AA   923 _IE_2	=	0x00aa
                     00AB   924 G$IE_3$0$0 == 0x00ab
                     00AB   925 _IE_3	=	0x00ab
                     00AC   926 G$IE_4$0$0 == 0x00ac
                     00AC   927 _IE_4	=	0x00ac
                     00AD   928 G$IE_5$0$0 == 0x00ad
                     00AD   929 _IE_5	=	0x00ad
                     00AE   930 G$IE_6$0$0 == 0x00ae
                     00AE   931 _IE_6	=	0x00ae
                     00AF   932 G$IE_7$0$0 == 0x00af
                     00AF   933 _IE_7	=	0x00af
                     00AF   934 G$EA$0$0 == 0x00af
                     00AF   935 _EA	=	0x00af
                     00B8   936 G$IP_0$0$0 == 0x00b8
                     00B8   937 _IP_0	=	0x00b8
                     00B9   938 G$IP_1$0$0 == 0x00b9
                     00B9   939 _IP_1	=	0x00b9
                     00BA   940 G$IP_2$0$0 == 0x00ba
                     00BA   941 _IP_2	=	0x00ba
                     00BB   942 G$IP_3$0$0 == 0x00bb
                     00BB   943 _IP_3	=	0x00bb
                     00BC   944 G$IP_4$0$0 == 0x00bc
                     00BC   945 _IP_4	=	0x00bc
                     00BD   946 G$IP_5$0$0 == 0x00bd
                     00BD   947 _IP_5	=	0x00bd
                     00BE   948 G$IP_6$0$0 == 0x00be
                     00BE   949 _IP_6	=	0x00be
                     00BF   950 G$IP_7$0$0 == 0x00bf
                     00BF   951 _IP_7	=	0x00bf
                     00D0   952 G$P$0$0 == 0x00d0
                     00D0   953 _P	=	0x00d0
                     00D1   954 G$F1$0$0 == 0x00d1
                     00D1   955 _F1	=	0x00d1
                     00D2   956 G$OV$0$0 == 0x00d2
                     00D2   957 _OV	=	0x00d2
                     00D3   958 G$RS0$0$0 == 0x00d3
                     00D3   959 _RS0	=	0x00d3
                     00D4   960 G$RS1$0$0 == 0x00d4
                     00D4   961 _RS1	=	0x00d4
                     00D5   962 G$F0$0$0 == 0x00d5
                     00D5   963 _F0	=	0x00d5
                     00D6   964 G$AC$0$0 == 0x00d6
                     00D6   965 _AC	=	0x00d6
                     00D7   966 G$CY$0$0 == 0x00d7
                     00D7   967 _CY	=	0x00d7
                     00C8   968 G$PINA_0$0$0 == 0x00c8
                     00C8   969 _PINA_0	=	0x00c8
                     00C9   970 G$PINA_1$0$0 == 0x00c9
                     00C9   971 _PINA_1	=	0x00c9
                     00CA   972 G$PINA_2$0$0 == 0x00ca
                     00CA   973 _PINA_2	=	0x00ca
                     00CB   974 G$PINA_3$0$0 == 0x00cb
                     00CB   975 _PINA_3	=	0x00cb
                     00CC   976 G$PINA_4$0$0 == 0x00cc
                     00CC   977 _PINA_4	=	0x00cc
                     00CD   978 G$PINA_5$0$0 == 0x00cd
                     00CD   979 _PINA_5	=	0x00cd
                     00CE   980 G$PINA_6$0$0 == 0x00ce
                     00CE   981 _PINA_6	=	0x00ce
                     00CF   982 G$PINA_7$0$0 == 0x00cf
                     00CF   983 _PINA_7	=	0x00cf
                     00E8   984 G$PINB_0$0$0 == 0x00e8
                     00E8   985 _PINB_0	=	0x00e8
                     00E9   986 G$PINB_1$0$0 == 0x00e9
                     00E9   987 _PINB_1	=	0x00e9
                     00EA   988 G$PINB_2$0$0 == 0x00ea
                     00EA   989 _PINB_2	=	0x00ea
                     00EB   990 G$PINB_3$0$0 == 0x00eb
                     00EB   991 _PINB_3	=	0x00eb
                     00EC   992 G$PINB_4$0$0 == 0x00ec
                     00EC   993 _PINB_4	=	0x00ec
                     00ED   994 G$PINB_5$0$0 == 0x00ed
                     00ED   995 _PINB_5	=	0x00ed
                     00EE   996 G$PINB_6$0$0 == 0x00ee
                     00EE   997 _PINB_6	=	0x00ee
                     00EF   998 G$PINB_7$0$0 == 0x00ef
                     00EF   999 _PINB_7	=	0x00ef
                     00F8  1000 G$PINC_0$0$0 == 0x00f8
                     00F8  1001 _PINC_0	=	0x00f8
                     00F9  1002 G$PINC_1$0$0 == 0x00f9
                     00F9  1003 _PINC_1	=	0x00f9
                     00FA  1004 G$PINC_2$0$0 == 0x00fa
                     00FA  1005 _PINC_2	=	0x00fa
                     00FB  1006 G$PINC_3$0$0 == 0x00fb
                     00FB  1007 _PINC_3	=	0x00fb
                     00FC  1008 G$PINC_4$0$0 == 0x00fc
                     00FC  1009 _PINC_4	=	0x00fc
                     00FD  1010 G$PINC_5$0$0 == 0x00fd
                     00FD  1011 _PINC_5	=	0x00fd
                     00FE  1012 G$PINC_6$0$0 == 0x00fe
                     00FE  1013 _PINC_6	=	0x00fe
                     00FF  1014 G$PINC_7$0$0 == 0x00ff
                     00FF  1015 _PINC_7	=	0x00ff
                     0080  1016 G$PORTA_0$0$0 == 0x0080
                     0080  1017 _PORTA_0	=	0x0080
                     0081  1018 G$PORTA_1$0$0 == 0x0081
                     0081  1019 _PORTA_1	=	0x0081
                     0082  1020 G$PORTA_2$0$0 == 0x0082
                     0082  1021 _PORTA_2	=	0x0082
                     0083  1022 G$PORTA_3$0$0 == 0x0083
                     0083  1023 _PORTA_3	=	0x0083
                     0084  1024 G$PORTA_4$0$0 == 0x0084
                     0084  1025 _PORTA_4	=	0x0084
                     0085  1026 G$PORTA_5$0$0 == 0x0085
                     0085  1027 _PORTA_5	=	0x0085
                     0086  1028 G$PORTA_6$0$0 == 0x0086
                     0086  1029 _PORTA_6	=	0x0086
                     0087  1030 G$PORTA_7$0$0 == 0x0087
                     0087  1031 _PORTA_7	=	0x0087
                     0088  1032 G$PORTB_0$0$0 == 0x0088
                     0088  1033 _PORTB_0	=	0x0088
                     0089  1034 G$PORTB_1$0$0 == 0x0089
                     0089  1035 _PORTB_1	=	0x0089
                     008A  1036 G$PORTB_2$0$0 == 0x008a
                     008A  1037 _PORTB_2	=	0x008a
                     008B  1038 G$PORTB_3$0$0 == 0x008b
                     008B  1039 _PORTB_3	=	0x008b
                     008C  1040 G$PORTB_4$0$0 == 0x008c
                     008C  1041 _PORTB_4	=	0x008c
                     008D  1042 G$PORTB_5$0$0 == 0x008d
                     008D  1043 _PORTB_5	=	0x008d
                     008E  1044 G$PORTB_6$0$0 == 0x008e
                     008E  1045 _PORTB_6	=	0x008e
                     008F  1046 G$PORTB_7$0$0 == 0x008f
                     008F  1047 _PORTB_7	=	0x008f
                     0090  1048 G$PORTC_0$0$0 == 0x0090
                     0090  1049 _PORTC_0	=	0x0090
                     0091  1050 G$PORTC_1$0$0 == 0x0091
                     0091  1051 _PORTC_1	=	0x0091
                     0092  1052 G$PORTC_2$0$0 == 0x0092
                     0092  1053 _PORTC_2	=	0x0092
                     0093  1054 G$PORTC_3$0$0 == 0x0093
                     0093  1055 _PORTC_3	=	0x0093
                     0094  1056 G$PORTC_4$0$0 == 0x0094
                     0094  1057 _PORTC_4	=	0x0094
                     0095  1058 G$PORTC_5$0$0 == 0x0095
                     0095  1059 _PORTC_5	=	0x0095
                     0096  1060 G$PORTC_6$0$0 == 0x0096
                     0096  1061 _PORTC_6	=	0x0096
                     0097  1062 G$PORTC_7$0$0 == 0x0097
                     0097  1063 _PORTC_7	=	0x0097
                           1064 ;--------------------------------------------------------
                           1065 ; overlayable register banks
                           1066 ;--------------------------------------------------------
                           1067 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1068 	.ds 8
                           1069 ;--------------------------------------------------------
                           1070 ; internal ram data
                           1071 ;--------------------------------------------------------
                           1072 	.area DSEG    (DATA)
                           1073 ;--------------------------------------------------------
                           1074 ; overlayable items in internal ram 
                           1075 ;--------------------------------------------------------
                           1076 	.area	OSEG    (OVR,DATA)
                           1077 ;--------------------------------------------------------
                           1078 ; indirectly addressable internal ram data
                           1079 ;--------------------------------------------------------
                           1080 	.area ISEG    (DATA)
                           1081 ;--------------------------------------------------------
                           1082 ; absolute internal ram data
                           1083 ;--------------------------------------------------------
                           1084 	.area IABS    (ABS,DATA)
                           1085 	.area IABS    (ABS,DATA)
                           1086 ;--------------------------------------------------------
                           1087 ; bit data
                           1088 ;--------------------------------------------------------
                           1089 	.area BSEG    (BIT)
                           1090 ;--------------------------------------------------------
                           1091 ; paged external ram data
                           1092 ;--------------------------------------------------------
                           1093 	.area PSEG    (PAG,XDATA)
                           1094 ;--------------------------------------------------------
                           1095 ; external ram data
                           1096 ;--------------------------------------------------------
                           1097 	.area XSEG    (XDATA)
                     7020  1098 G$ADCCH0VAL0$0$0 == 0x7020
                     7020  1099 _ADCCH0VAL0	=	0x7020
                     7021  1100 G$ADCCH0VAL1$0$0 == 0x7021
                     7021  1101 _ADCCH0VAL1	=	0x7021
                     7020  1102 G$ADCCH0VAL$0$0 == 0x7020
                     7020  1103 _ADCCH0VAL	=	0x7020
                     7022  1104 G$ADCCH1VAL0$0$0 == 0x7022
                     7022  1105 _ADCCH1VAL0	=	0x7022
                     7023  1106 G$ADCCH1VAL1$0$0 == 0x7023
                     7023  1107 _ADCCH1VAL1	=	0x7023
                     7022  1108 G$ADCCH1VAL$0$0 == 0x7022
                     7022  1109 _ADCCH1VAL	=	0x7022
                     7024  1110 G$ADCCH2VAL0$0$0 == 0x7024
                     7024  1111 _ADCCH2VAL0	=	0x7024
                     7025  1112 G$ADCCH2VAL1$0$0 == 0x7025
                     7025  1113 _ADCCH2VAL1	=	0x7025
                     7024  1114 G$ADCCH2VAL$0$0 == 0x7024
                     7024  1115 _ADCCH2VAL	=	0x7024
                     7026  1116 G$ADCCH3VAL0$0$0 == 0x7026
                     7026  1117 _ADCCH3VAL0	=	0x7026
                     7027  1118 G$ADCCH3VAL1$0$0 == 0x7027
                     7027  1119 _ADCCH3VAL1	=	0x7027
                     7026  1120 G$ADCCH3VAL$0$0 == 0x7026
                     7026  1121 _ADCCH3VAL	=	0x7026
                     7028  1122 G$ADCTUNE0$0$0 == 0x7028
                     7028  1123 _ADCTUNE0	=	0x7028
                     7029  1124 G$ADCTUNE1$0$0 == 0x7029
                     7029  1125 _ADCTUNE1	=	0x7029
                     702A  1126 G$ADCTUNE2$0$0 == 0x702a
                     702A  1127 _ADCTUNE2	=	0x702a
                     7010  1128 G$DMA0ADDR0$0$0 == 0x7010
                     7010  1129 _DMA0ADDR0	=	0x7010
                     7011  1130 G$DMA0ADDR1$0$0 == 0x7011
                     7011  1131 _DMA0ADDR1	=	0x7011
                     7010  1132 G$DMA0ADDR$0$0 == 0x7010
                     7010  1133 _DMA0ADDR	=	0x7010
                     7014  1134 G$DMA0CONFIG$0$0 == 0x7014
                     7014  1135 _DMA0CONFIG	=	0x7014
                     7012  1136 G$DMA1ADDR0$0$0 == 0x7012
                     7012  1137 _DMA1ADDR0	=	0x7012
                     7013  1138 G$DMA1ADDR1$0$0 == 0x7013
                     7013  1139 _DMA1ADDR1	=	0x7013
                     7012  1140 G$DMA1ADDR$0$0 == 0x7012
                     7012  1141 _DMA1ADDR	=	0x7012
                     7015  1142 G$DMA1CONFIG$0$0 == 0x7015
                     7015  1143 _DMA1CONFIG	=	0x7015
                     7070  1144 G$FRCOSCCONFIG$0$0 == 0x7070
                     7070  1145 _FRCOSCCONFIG	=	0x7070
                     7071  1146 G$FRCOSCCTRL$0$0 == 0x7071
                     7071  1147 _FRCOSCCTRL	=	0x7071
                     7076  1148 G$FRCOSCFREQ0$0$0 == 0x7076
                     7076  1149 _FRCOSCFREQ0	=	0x7076
                     7077  1150 G$FRCOSCFREQ1$0$0 == 0x7077
                     7077  1151 _FRCOSCFREQ1	=	0x7077
                     7076  1152 G$FRCOSCFREQ$0$0 == 0x7076
                     7076  1153 _FRCOSCFREQ	=	0x7076
                     7072  1154 G$FRCOSCKFILT0$0$0 == 0x7072
                     7072  1155 _FRCOSCKFILT0	=	0x7072
                     7073  1156 G$FRCOSCKFILT1$0$0 == 0x7073
                     7073  1157 _FRCOSCKFILT1	=	0x7073
                     7072  1158 G$FRCOSCKFILT$0$0 == 0x7072
                     7072  1159 _FRCOSCKFILT	=	0x7072
                     7078  1160 G$FRCOSCPER0$0$0 == 0x7078
                     7078  1161 _FRCOSCPER0	=	0x7078
                     7079  1162 G$FRCOSCPER1$0$0 == 0x7079
                     7079  1163 _FRCOSCPER1	=	0x7079
                     7078  1164 G$FRCOSCPER$0$0 == 0x7078
                     7078  1165 _FRCOSCPER	=	0x7078
                     7074  1166 G$FRCOSCREF0$0$0 == 0x7074
                     7074  1167 _FRCOSCREF0	=	0x7074
                     7075  1168 G$FRCOSCREF1$0$0 == 0x7075
                     7075  1169 _FRCOSCREF1	=	0x7075
                     7074  1170 G$FRCOSCREF$0$0 == 0x7074
                     7074  1171 _FRCOSCREF	=	0x7074
                     7007  1172 G$ANALOGA$0$0 == 0x7007
                     7007  1173 _ANALOGA	=	0x7007
                     700C  1174 G$GPIOENABLE$0$0 == 0x700c
                     700C  1175 _GPIOENABLE	=	0x700c
                     7003  1176 G$EXTIRQ$0$0 == 0x7003
                     7003  1177 _EXTIRQ	=	0x7003
                     7000  1178 G$INTCHGA$0$0 == 0x7000
                     7000  1179 _INTCHGA	=	0x7000
                     7001  1180 G$INTCHGB$0$0 == 0x7001
                     7001  1181 _INTCHGB	=	0x7001
                     7002  1182 G$INTCHGC$0$0 == 0x7002
                     7002  1183 _INTCHGC	=	0x7002
                     7008  1184 G$PALTA$0$0 == 0x7008
                     7008  1185 _PALTA	=	0x7008
                     7009  1186 G$PALTB$0$0 == 0x7009
                     7009  1187 _PALTB	=	0x7009
                     700A  1188 G$PALTC$0$0 == 0x700a
                     700A  1189 _PALTC	=	0x700a
                     7004  1190 G$PINCHGA$0$0 == 0x7004
                     7004  1191 _PINCHGA	=	0x7004
                     7005  1192 G$PINCHGB$0$0 == 0x7005
                     7005  1193 _PINCHGB	=	0x7005
                     7006  1194 G$PINCHGC$0$0 == 0x7006
                     7006  1195 _PINCHGC	=	0x7006
                     700B  1196 G$PINSEL$0$0 == 0x700b
                     700B  1197 _PINSEL	=	0x700b
                     7060  1198 G$LPOSCCONFIG$0$0 == 0x7060
                     7060  1199 _LPOSCCONFIG	=	0x7060
                     7066  1200 G$LPOSCFREQ0$0$0 == 0x7066
                     7066  1201 _LPOSCFREQ0	=	0x7066
                     7067  1202 G$LPOSCFREQ1$0$0 == 0x7067
                     7067  1203 _LPOSCFREQ1	=	0x7067
                     7066  1204 G$LPOSCFREQ$0$0 == 0x7066
                     7066  1205 _LPOSCFREQ	=	0x7066
                     7062  1206 G$LPOSCKFILT0$0$0 == 0x7062
                     7062  1207 _LPOSCKFILT0	=	0x7062
                     7063  1208 G$LPOSCKFILT1$0$0 == 0x7063
                     7063  1209 _LPOSCKFILT1	=	0x7063
                     7062  1210 G$LPOSCKFILT$0$0 == 0x7062
                     7062  1211 _LPOSCKFILT	=	0x7062
                     7068  1212 G$LPOSCPER0$0$0 == 0x7068
                     7068  1213 _LPOSCPER0	=	0x7068
                     7069  1214 G$LPOSCPER1$0$0 == 0x7069
                     7069  1215 _LPOSCPER1	=	0x7069
                     7068  1216 G$LPOSCPER$0$0 == 0x7068
                     7068  1217 _LPOSCPER	=	0x7068
                     7064  1218 G$LPOSCREF0$0$0 == 0x7064
                     7064  1219 _LPOSCREF0	=	0x7064
                     7065  1220 G$LPOSCREF1$0$0 == 0x7065
                     7065  1221 _LPOSCREF1	=	0x7065
                     7064  1222 G$LPOSCREF$0$0 == 0x7064
                     7064  1223 _LPOSCREF	=	0x7064
                     7054  1224 G$LPXOSCGM$0$0 == 0x7054
                     7054  1225 _LPXOSCGM	=	0x7054
                     7F01  1226 G$MISCCTRL$0$0 == 0x7f01
                     7F01  1227 _MISCCTRL	=	0x7f01
                     7053  1228 G$OSCCALIB$0$0 == 0x7053
                     7053  1229 _OSCCALIB	=	0x7053
                     7050  1230 G$OSCFORCERUN$0$0 == 0x7050
                     7050  1231 _OSCFORCERUN	=	0x7050
                     7052  1232 G$OSCREADY$0$0 == 0x7052
                     7052  1233 _OSCREADY	=	0x7052
                     7051  1234 G$OSCRUN$0$0 == 0x7051
                     7051  1235 _OSCRUN	=	0x7051
                     7040  1236 G$RADIOFDATAADDR0$0$0 == 0x7040
                     7040  1237 _RADIOFDATAADDR0	=	0x7040
                     7041  1238 G$RADIOFDATAADDR1$0$0 == 0x7041
                     7041  1239 _RADIOFDATAADDR1	=	0x7041
                     7040  1240 G$RADIOFDATAADDR$0$0 == 0x7040
                     7040  1241 _RADIOFDATAADDR	=	0x7040
                     7042  1242 G$RADIOFSTATADDR0$0$0 == 0x7042
                     7042  1243 _RADIOFSTATADDR0	=	0x7042
                     7043  1244 G$RADIOFSTATADDR1$0$0 == 0x7043
                     7043  1245 _RADIOFSTATADDR1	=	0x7043
                     7042  1246 G$RADIOFSTATADDR$0$0 == 0x7042
                     7042  1247 _RADIOFSTATADDR	=	0x7042
                     7044  1248 G$RADIOMUX$0$0 == 0x7044
                     7044  1249 _RADIOMUX	=	0x7044
                     7084  1250 G$SCRATCH0$0$0 == 0x7084
                     7084  1251 _SCRATCH0	=	0x7084
                     7085  1252 G$SCRATCH1$0$0 == 0x7085
                     7085  1253 _SCRATCH1	=	0x7085
                     7086  1254 G$SCRATCH2$0$0 == 0x7086
                     7086  1255 _SCRATCH2	=	0x7086
                     7087  1256 G$SCRATCH3$0$0 == 0x7087
                     7087  1257 _SCRATCH3	=	0x7087
                     7F00  1258 G$SILICONREV$0$0 == 0x7f00
                     7F00  1259 _SILICONREV	=	0x7f00
                     7F19  1260 G$XTALAMPL$0$0 == 0x7f19
                     7F19  1261 _XTALAMPL	=	0x7f19
                     7F18  1262 G$XTALOSC$0$0 == 0x7f18
                     7F18  1263 _XTALOSC	=	0x7f18
                     7F1A  1264 G$XTALREADY$0$0 == 0x7f1a
                     7F1A  1265 _XTALREADY	=	0x7f1a
                     3F82  1266 G$XDPTR0$0$0 == 0x3f82
                     3F82  1267 _XDPTR0	=	0x3f82
                     3F84  1268 G$XDPTR1$0$0 == 0x3f84
                     3F84  1269 _XDPTR1	=	0x3f84
                     3FA8  1270 G$XIE$0$0 == 0x3fa8
                     3FA8  1271 _XIE	=	0x3fa8
                     3FB8  1272 G$XIP$0$0 == 0x3fb8
                     3FB8  1273 _XIP	=	0x3fb8
                     3F87  1274 G$XPCON$0$0 == 0x3f87
                     3F87  1275 _XPCON	=	0x3f87
                     3FCA  1276 G$XADCCH0CONFIG$0$0 == 0x3fca
                     3FCA  1277 _XADCCH0CONFIG	=	0x3fca
                     3FCB  1278 G$XADCCH1CONFIG$0$0 == 0x3fcb
                     3FCB  1279 _XADCCH1CONFIG	=	0x3fcb
                     3FD2  1280 G$XADCCH2CONFIG$0$0 == 0x3fd2
                     3FD2  1281 _XADCCH2CONFIG	=	0x3fd2
                     3FD3  1282 G$XADCCH3CONFIG$0$0 == 0x3fd3
                     3FD3  1283 _XADCCH3CONFIG	=	0x3fd3
                     3FD1  1284 G$XADCCLKSRC$0$0 == 0x3fd1
                     3FD1  1285 _XADCCLKSRC	=	0x3fd1
                     3FC9  1286 G$XADCCONV$0$0 == 0x3fc9
                     3FC9  1287 _XADCCONV	=	0x3fc9
                     3FE1  1288 G$XANALOGCOMP$0$0 == 0x3fe1
                     3FE1  1289 _XANALOGCOMP	=	0x3fe1
                     3FC6  1290 G$XCLKCON$0$0 == 0x3fc6
                     3FC6  1291 _XCLKCON	=	0x3fc6
                     3FC7  1292 G$XCLKSTAT$0$0 == 0x3fc7
                     3FC7  1293 _XCLKSTAT	=	0x3fc7
                     3F97  1294 G$XCODECONFIG$0$0 == 0x3f97
                     3F97  1295 _XCODECONFIG	=	0x3f97
                     3FE3  1296 G$XDBGLNKBUF$0$0 == 0x3fe3
                     3FE3  1297 _XDBGLNKBUF	=	0x3fe3
                     3FE2  1298 G$XDBGLNKSTAT$0$0 == 0x3fe2
                     3FE2  1299 _XDBGLNKSTAT	=	0x3fe2
                     3F89  1300 G$XDIRA$0$0 == 0x3f89
                     3F89  1301 _XDIRA	=	0x3f89
                     3F8A  1302 G$XDIRB$0$0 == 0x3f8a
                     3F8A  1303 _XDIRB	=	0x3f8a
                     3F8B  1304 G$XDIRC$0$0 == 0x3f8b
                     3F8B  1305 _XDIRC	=	0x3f8b
                     3F8E  1306 G$XDIRR$0$0 == 0x3f8e
                     3F8E  1307 _XDIRR	=	0x3f8e
                     3FC8  1308 G$XPINA$0$0 == 0x3fc8
                     3FC8  1309 _XPINA	=	0x3fc8
                     3FE8  1310 G$XPINB$0$0 == 0x3fe8
                     3FE8  1311 _XPINB	=	0x3fe8
                     3FF8  1312 G$XPINC$0$0 == 0x3ff8
                     3FF8  1313 _XPINC	=	0x3ff8
                     3F8D  1314 G$XPINR$0$0 == 0x3f8d
                     3F8D  1315 _XPINR	=	0x3f8d
                     3F80  1316 G$XPORTA$0$0 == 0x3f80
                     3F80  1317 _XPORTA	=	0x3f80
                     3F88  1318 G$XPORTB$0$0 == 0x3f88
                     3F88  1319 _XPORTB	=	0x3f88
                     3F90  1320 G$XPORTC$0$0 == 0x3f90
                     3F90  1321 _XPORTC	=	0x3f90
                     3F8C  1322 G$XPORTR$0$0 == 0x3f8c
                     3F8C  1323 _XPORTR	=	0x3f8c
                     3FCE  1324 G$XIC0CAPT0$0$0 == 0x3fce
                     3FCE  1325 _XIC0CAPT0	=	0x3fce
                     3FCF  1326 G$XIC0CAPT1$0$0 == 0x3fcf
                     3FCF  1327 _XIC0CAPT1	=	0x3fcf
                     3FCE  1328 G$XIC0CAPT$0$0 == 0x3fce
                     3FCE  1329 _XIC0CAPT	=	0x3fce
                     3FCC  1330 G$XIC0MODE$0$0 == 0x3fcc
                     3FCC  1331 _XIC0MODE	=	0x3fcc
                     3FCD  1332 G$XIC0STATUS$0$0 == 0x3fcd
                     3FCD  1333 _XIC0STATUS	=	0x3fcd
                     3FD6  1334 G$XIC1CAPT0$0$0 == 0x3fd6
                     3FD6  1335 _XIC1CAPT0	=	0x3fd6
                     3FD7  1336 G$XIC1CAPT1$0$0 == 0x3fd7
                     3FD7  1337 _XIC1CAPT1	=	0x3fd7
                     3FD6  1338 G$XIC1CAPT$0$0 == 0x3fd6
                     3FD6  1339 _XIC1CAPT	=	0x3fd6
                     3FD4  1340 G$XIC1MODE$0$0 == 0x3fd4
                     3FD4  1341 _XIC1MODE	=	0x3fd4
                     3FD5  1342 G$XIC1STATUS$0$0 == 0x3fd5
                     3FD5  1343 _XIC1STATUS	=	0x3fd5
                     3F92  1344 G$XNVADDR0$0$0 == 0x3f92
                     3F92  1345 _XNVADDR0	=	0x3f92
                     3F93  1346 G$XNVADDR1$0$0 == 0x3f93
                     3F93  1347 _XNVADDR1	=	0x3f93
                     3F92  1348 G$XNVADDR$0$0 == 0x3f92
                     3F92  1349 _XNVADDR	=	0x3f92
                     3F94  1350 G$XNVDATA0$0$0 == 0x3f94
                     3F94  1351 _XNVDATA0	=	0x3f94
                     3F95  1352 G$XNVDATA1$0$0 == 0x3f95
                     3F95  1353 _XNVDATA1	=	0x3f95
                     3F94  1354 G$XNVDATA$0$0 == 0x3f94
                     3F94  1355 _XNVDATA	=	0x3f94
                     3F96  1356 G$XNVKEY$0$0 == 0x3f96
                     3F96  1357 _XNVKEY	=	0x3f96
                     3F91  1358 G$XNVSTATUS$0$0 == 0x3f91
                     3F91  1359 _XNVSTATUS	=	0x3f91
                     3FBC  1360 G$XOC0COMP0$0$0 == 0x3fbc
                     3FBC  1361 _XOC0COMP0	=	0x3fbc
                     3FBD  1362 G$XOC0COMP1$0$0 == 0x3fbd
                     3FBD  1363 _XOC0COMP1	=	0x3fbd
                     3FBC  1364 G$XOC0COMP$0$0 == 0x3fbc
                     3FBC  1365 _XOC0COMP	=	0x3fbc
                     3FB9  1366 G$XOC0MODE$0$0 == 0x3fb9
                     3FB9  1367 _XOC0MODE	=	0x3fb9
                     3FBA  1368 G$XOC0PIN$0$0 == 0x3fba
                     3FBA  1369 _XOC0PIN	=	0x3fba
                     3FBB  1370 G$XOC0STATUS$0$0 == 0x3fbb
                     3FBB  1371 _XOC0STATUS	=	0x3fbb
                     3FC4  1372 G$XOC1COMP0$0$0 == 0x3fc4
                     3FC4  1373 _XOC1COMP0	=	0x3fc4
                     3FC5  1374 G$XOC1COMP1$0$0 == 0x3fc5
                     3FC5  1375 _XOC1COMP1	=	0x3fc5
                     3FC4  1376 G$XOC1COMP$0$0 == 0x3fc4
                     3FC4  1377 _XOC1COMP	=	0x3fc4
                     3FC1  1378 G$XOC1MODE$0$0 == 0x3fc1
                     3FC1  1379 _XOC1MODE	=	0x3fc1
                     3FC2  1380 G$XOC1PIN$0$0 == 0x3fc2
                     3FC2  1381 _XOC1PIN	=	0x3fc2
                     3FC3  1382 G$XOC1STATUS$0$0 == 0x3fc3
                     3FC3  1383 _XOC1STATUS	=	0x3fc3
                     3FB1  1384 G$XRADIOACC$0$0 == 0x3fb1
                     3FB1  1385 _XRADIOACC	=	0x3fb1
                     3FB3  1386 G$XRADIOADDR0$0$0 == 0x3fb3
                     3FB3  1387 _XRADIOADDR0	=	0x3fb3
                     3FB2  1388 G$XRADIOADDR1$0$0 == 0x3fb2
                     3FB2  1389 _XRADIOADDR1	=	0x3fb2
                     3FB7  1390 G$XRADIODATA0$0$0 == 0x3fb7
                     3FB7  1391 _XRADIODATA0	=	0x3fb7
                     3FB6  1392 G$XRADIODATA1$0$0 == 0x3fb6
                     3FB6  1393 _XRADIODATA1	=	0x3fb6
                     3FB5  1394 G$XRADIODATA2$0$0 == 0x3fb5
                     3FB5  1395 _XRADIODATA2	=	0x3fb5
                     3FB4  1396 G$XRADIODATA3$0$0 == 0x3fb4
                     3FB4  1397 _XRADIODATA3	=	0x3fb4
                     3FBE  1398 G$XRADIOSTAT0$0$0 == 0x3fbe
                     3FBE  1399 _XRADIOSTAT0	=	0x3fbe
                     3FBF  1400 G$XRADIOSTAT1$0$0 == 0x3fbf
                     3FBF  1401 _XRADIOSTAT1	=	0x3fbf
                     3FBE  1402 G$XRADIOSTAT$0$0 == 0x3fbe
                     3FBE  1403 _XRADIOSTAT	=	0x3fbe
                     3FDF  1404 G$XSPCLKSRC$0$0 == 0x3fdf
                     3FDF  1405 _XSPCLKSRC	=	0x3fdf
                     3FDC  1406 G$XSPMODE$0$0 == 0x3fdc
                     3FDC  1407 _XSPMODE	=	0x3fdc
                     3FDE  1408 G$XSPSHREG$0$0 == 0x3fde
                     3FDE  1409 _XSPSHREG	=	0x3fde
                     3FDD  1410 G$XSPSTATUS$0$0 == 0x3fdd
                     3FDD  1411 _XSPSTATUS	=	0x3fdd
                     3F9A  1412 G$XT0CLKSRC$0$0 == 0x3f9a
                     3F9A  1413 _XT0CLKSRC	=	0x3f9a
                     3F9C  1414 G$XT0CNT0$0$0 == 0x3f9c
                     3F9C  1415 _XT0CNT0	=	0x3f9c
                     3F9D  1416 G$XT0CNT1$0$0 == 0x3f9d
                     3F9D  1417 _XT0CNT1	=	0x3f9d
                     3F9C  1418 G$XT0CNT$0$0 == 0x3f9c
                     3F9C  1419 _XT0CNT	=	0x3f9c
                     3F99  1420 G$XT0MODE$0$0 == 0x3f99
                     3F99  1421 _XT0MODE	=	0x3f99
                     3F9E  1422 G$XT0PERIOD0$0$0 == 0x3f9e
                     3F9E  1423 _XT0PERIOD0	=	0x3f9e
                     3F9F  1424 G$XT0PERIOD1$0$0 == 0x3f9f
                     3F9F  1425 _XT0PERIOD1	=	0x3f9f
                     3F9E  1426 G$XT0PERIOD$0$0 == 0x3f9e
                     3F9E  1427 _XT0PERIOD	=	0x3f9e
                     3F9B  1428 G$XT0STATUS$0$0 == 0x3f9b
                     3F9B  1429 _XT0STATUS	=	0x3f9b
                     3FA2  1430 G$XT1CLKSRC$0$0 == 0x3fa2
                     3FA2  1431 _XT1CLKSRC	=	0x3fa2
                     3FA4  1432 G$XT1CNT0$0$0 == 0x3fa4
                     3FA4  1433 _XT1CNT0	=	0x3fa4
                     3FA5  1434 G$XT1CNT1$0$0 == 0x3fa5
                     3FA5  1435 _XT1CNT1	=	0x3fa5
                     3FA4  1436 G$XT1CNT$0$0 == 0x3fa4
                     3FA4  1437 _XT1CNT	=	0x3fa4
                     3FA1  1438 G$XT1MODE$0$0 == 0x3fa1
                     3FA1  1439 _XT1MODE	=	0x3fa1
                     3FA6  1440 G$XT1PERIOD0$0$0 == 0x3fa6
                     3FA6  1441 _XT1PERIOD0	=	0x3fa6
                     3FA7  1442 G$XT1PERIOD1$0$0 == 0x3fa7
                     3FA7  1443 _XT1PERIOD1	=	0x3fa7
                     3FA6  1444 G$XT1PERIOD$0$0 == 0x3fa6
                     3FA6  1445 _XT1PERIOD	=	0x3fa6
                     3FA3  1446 G$XT1STATUS$0$0 == 0x3fa3
                     3FA3  1447 _XT1STATUS	=	0x3fa3
                     3FAA  1448 G$XT2CLKSRC$0$0 == 0x3faa
                     3FAA  1449 _XT2CLKSRC	=	0x3faa
                     3FAC  1450 G$XT2CNT0$0$0 == 0x3fac
                     3FAC  1451 _XT2CNT0	=	0x3fac
                     3FAD  1452 G$XT2CNT1$0$0 == 0x3fad
                     3FAD  1453 _XT2CNT1	=	0x3fad
                     3FAC  1454 G$XT2CNT$0$0 == 0x3fac
                     3FAC  1455 _XT2CNT	=	0x3fac
                     3FA9  1456 G$XT2MODE$0$0 == 0x3fa9
                     3FA9  1457 _XT2MODE	=	0x3fa9
                     3FAE  1458 G$XT2PERIOD0$0$0 == 0x3fae
                     3FAE  1459 _XT2PERIOD0	=	0x3fae
                     3FAF  1460 G$XT2PERIOD1$0$0 == 0x3faf
                     3FAF  1461 _XT2PERIOD1	=	0x3faf
                     3FAE  1462 G$XT2PERIOD$0$0 == 0x3fae
                     3FAE  1463 _XT2PERIOD	=	0x3fae
                     3FAB  1464 G$XT2STATUS$0$0 == 0x3fab
                     3FAB  1465 _XT2STATUS	=	0x3fab
                     3FE4  1466 G$XU0CTRL$0$0 == 0x3fe4
                     3FE4  1467 _XU0CTRL	=	0x3fe4
                     3FE7  1468 G$XU0MODE$0$0 == 0x3fe7
                     3FE7  1469 _XU0MODE	=	0x3fe7
                     3FE6  1470 G$XU0SHREG$0$0 == 0x3fe6
                     3FE6  1471 _XU0SHREG	=	0x3fe6
                     3FE5  1472 G$XU0STATUS$0$0 == 0x3fe5
                     3FE5  1473 _XU0STATUS	=	0x3fe5
                     3FEC  1474 G$XU1CTRL$0$0 == 0x3fec
                     3FEC  1475 _XU1CTRL	=	0x3fec
                     3FEF  1476 G$XU1MODE$0$0 == 0x3fef
                     3FEF  1477 _XU1MODE	=	0x3fef
                     3FEE  1478 G$XU1SHREG$0$0 == 0x3fee
                     3FEE  1479 _XU1SHREG	=	0x3fee
                     3FED  1480 G$XU1STATUS$0$0 == 0x3fed
                     3FED  1481 _XU1STATUS	=	0x3fed
                     3FDA  1482 G$XWDTCFG$0$0 == 0x3fda
                     3FDA  1483 _XWDTCFG	=	0x3fda
                     3FDB  1484 G$XWDTRESET$0$0 == 0x3fdb
                     3FDB  1485 _XWDTRESET	=	0x3fdb
                     3FF1  1486 G$XWTCFGA$0$0 == 0x3ff1
                     3FF1  1487 _XWTCFGA	=	0x3ff1
                     3FF9  1488 G$XWTCFGB$0$0 == 0x3ff9
                     3FF9  1489 _XWTCFGB	=	0x3ff9
                     3FF2  1490 G$XWTCNTA0$0$0 == 0x3ff2
                     3FF2  1491 _XWTCNTA0	=	0x3ff2
                     3FF3  1492 G$XWTCNTA1$0$0 == 0x3ff3
                     3FF3  1493 _XWTCNTA1	=	0x3ff3
                     3FF2  1494 G$XWTCNTA$0$0 == 0x3ff2
                     3FF2  1495 _XWTCNTA	=	0x3ff2
                     3FFA  1496 G$XWTCNTB0$0$0 == 0x3ffa
                     3FFA  1497 _XWTCNTB0	=	0x3ffa
                     3FFB  1498 G$XWTCNTB1$0$0 == 0x3ffb
                     3FFB  1499 _XWTCNTB1	=	0x3ffb
                     3FFA  1500 G$XWTCNTB$0$0 == 0x3ffa
                     3FFA  1501 _XWTCNTB	=	0x3ffa
                     3FEB  1502 G$XWTCNTR1$0$0 == 0x3feb
                     3FEB  1503 _XWTCNTR1	=	0x3feb
                     3FF4  1504 G$XWTEVTA0$0$0 == 0x3ff4
                     3FF4  1505 _XWTEVTA0	=	0x3ff4
                     3FF5  1506 G$XWTEVTA1$0$0 == 0x3ff5
                     3FF5  1507 _XWTEVTA1	=	0x3ff5
                     3FF4  1508 G$XWTEVTA$0$0 == 0x3ff4
                     3FF4  1509 _XWTEVTA	=	0x3ff4
                     3FF6  1510 G$XWTEVTB0$0$0 == 0x3ff6
                     3FF6  1511 _XWTEVTB0	=	0x3ff6
                     3FF7  1512 G$XWTEVTB1$0$0 == 0x3ff7
                     3FF7  1513 _XWTEVTB1	=	0x3ff7
                     3FF6  1514 G$XWTEVTB$0$0 == 0x3ff6
                     3FF6  1515 _XWTEVTB	=	0x3ff6
                     3FFC  1516 G$XWTEVTC0$0$0 == 0x3ffc
                     3FFC  1517 _XWTEVTC0	=	0x3ffc
                     3FFD  1518 G$XWTEVTC1$0$0 == 0x3ffd
                     3FFD  1519 _XWTEVTC1	=	0x3ffd
                     3FFC  1520 G$XWTEVTC$0$0 == 0x3ffc
                     3FFC  1521 _XWTEVTC	=	0x3ffc
                     3FFE  1522 G$XWTEVTD0$0$0 == 0x3ffe
                     3FFE  1523 _XWTEVTD0	=	0x3ffe
                     3FFF  1524 G$XWTEVTD1$0$0 == 0x3fff
                     3FFF  1525 _XWTEVTD1	=	0x3fff
                     3FFE  1526 G$XWTEVTD$0$0 == 0x3ffe
                     3FFE  1527 _XWTEVTD	=	0x3ffe
                     3FE9  1528 G$XWTIRQEN$0$0 == 0x3fe9
                     3FE9  1529 _XWTIRQEN	=	0x3fe9
                     3FEA  1530 G$XWTSTAT$0$0 == 0x3fea
                     3FEA  1531 _XWTSTAT	=	0x3fea
                     0000  1532 Fmisc$delaymstimer$0$0==.
   0291                    1533 _delaymstimer:
   0291                    1534 	.ds 8
                           1535 ;--------------------------------------------------------
                           1536 ; absolute external ram data
                           1537 ;--------------------------------------------------------
                           1538 	.area XABS    (ABS,XDATA)
                           1539 ;--------------------------------------------------------
                           1540 ; external initialized ram data
                           1541 ;--------------------------------------------------------
                           1542 	.area XISEG   (XDATA)
                           1543 	.area HOME    (CODE)
                           1544 	.area GSINIT0 (CODE)
                           1545 	.area GSINIT1 (CODE)
                           1546 	.area GSINIT2 (CODE)
                           1547 	.area GSINIT3 (CODE)
                           1548 	.area GSINIT4 (CODE)
                           1549 	.area GSINIT5 (CODE)
                           1550 	.area GSINIT  (CODE)
                           1551 	.area GSFINAL (CODE)
                           1552 	.area CSEG    (CODE)
                           1553 ;--------------------------------------------------------
                           1554 ; global & static initialisations
                           1555 ;--------------------------------------------------------
                           1556 	.area HOME    (CODE)
                           1557 	.area GSINIT  (CODE)
                           1558 	.area GSFINAL (CODE)
                           1559 	.area GSINIT  (CODE)
                           1560 ;--------------------------------------------------------
                           1561 ; Home
                           1562 ;--------------------------------------------------------
                           1563 	.area HOME    (CODE)
                           1564 	.area HOME    (CODE)
                           1565 ;--------------------------------------------------------
                           1566 ; code
                           1567 ;--------------------------------------------------------
                           1568 	.area CSEG    (CODE)
                           1569 ;------------------------------------------------------------
                           1570 ;Allocation info for local variables in function 'stop_with_error'
                           1571 ;------------------------------------------------------------
                           1572 ;str                       Allocated to registers r5 r6 r7 
                           1573 ;------------------------------------------------------------
                     0000  1574 	G$stop_with_error$0$0 ==.
                     0000  1575 	C$misc.c$38$0$0 ==.
                           1576 ;	../COMMON/misc.c:38: void stop_with_error(uint8_t *str)
                           1577 ;	-----------------------------------------
                           1578 ;	 function stop_with_error
                           1579 ;	-----------------------------------------
   32A3                    1580 _stop_with_error:
                     0007  1581 	ar7 = 0x07
                     0006  1582 	ar6 = 0x06
                     0005  1583 	ar5 = 0x05
                     0004  1584 	ar4 = 0x04
                     0003  1585 	ar3 = 0x03
                     0002  1586 	ar2 = 0x02
                     0001  1587 	ar1 = 0x01
                     0000  1588 	ar0 = 0x00
   32A3 AD 82         [24] 1589 	mov	r5,dpl
   32A5 AE 83         [24] 1590 	mov	r6,dph
   32A7 AF F0         [24] 1591 	mov	r7,b
                     0006  1592 	C$misc.c$40$1$99 ==.
                           1593 ;	../COMMON/misc.c:40: lcd2_setpos(0);
   32A9 75 82 00      [24] 1594 	mov	dpl,#0x00
   32AC C0 07         [24] 1595 	push	ar7
   32AE C0 06         [24] 1596 	push	ar6
   32B0 C0 05         [24] 1597 	push	ar5
   32B2 12 3B 26      [24] 1598 	lcall	_lcd2_setpos
   32B5 D0 05         [24] 1599 	pop	ar5
   32B7 D0 06         [24] 1600 	pop	ar6
   32B9 D0 07         [24] 1601 	pop	ar7
                     0018  1602 	C$misc.c$41$1$99 ==.
                           1603 ;	../COMMON/misc.c:41: lcd2_writestr(str);
   32BB 8D 82         [24] 1604 	mov	dpl,r5
   32BD 8E 83         [24] 1605 	mov	dph,r6
   32BF 8F F0         [24] 1606 	mov	b,r7
   32C1 12 4E 9F      [24] 1607 	lcall	_lcd2_writestr
                     0021  1608 	C$misc.c$42$1$99 ==.
                           1609 ;	../COMMON/misc.c:42: lcd2_wait_txdone();
   32C4 12 3E EE      [24] 1610 	lcall	_lcd2_wait_txdone
                     0024  1611 	C$misc.c$43$1$99 ==.
                           1612 ;	../COMMON/misc.c:43: IE = EIE = E2IE = 0;
   32C7 75 A0 00      [24] 1613 	mov	_E2IE,#0x00
   32CA 75 98 00      [24] 1614 	mov	_EIE,#0x00
   32CD 75 A8 00      [24] 1615 	mov	_IE,#0x00
                     002D  1616 	C$misc.c$44$1$99 ==.
                           1617 ;	../COMMON/misc.c:44: enter_sleep();
   32D0 12 50 4E      [24] 1618 	lcall	_enter_sleep
                     0030  1619 	C$misc.c$45$1$99 ==.
                     0030  1620 	XG$stop_with_error$0$0 ==.
   32D3 22            [24] 1621 	ret
                           1622 ;------------------------------------------------------------
                           1623 ;Allocation info for local variables in function 'display_radio_error'
                           1624 ;------------------------------------------------------------
                           1625 ;err                       Allocated to registers r7 
                           1626 ;p                         Allocated to registers r5 r6 
                           1627 ;------------------------------------------------------------
                     0031  1628 	G$display_radio_error$0$0 ==.
                     0031  1629 	C$misc.c$47$1$99 ==.
                           1630 ;	../COMMON/misc.c:47: void display_radio_error(uint8_t err)
                           1631 ;	-----------------------------------------
                           1632 ;	 function display_radio_error
                           1633 ;	-----------------------------------------
   32D4                    1634 _display_radio_error:
   32D4 AF 82         [24] 1635 	mov	r7,dpl
                     0033  1636 	C$misc.c$63$1$99 ==.
                           1637 ;	../COMMON/misc.c:63: const struct errtbl __code *p = errtbl;
   32D6 7D 4B         [12] 1638 	mov	r5,#_display_radio_error_errtbl_1_101
   32D8 7E 54         [12] 1639 	mov	r6,#(_display_radio_error_errtbl_1_101 >> 8)
                     0037  1640 	C$misc.c$64$1$101 ==.
                           1641 ;	../COMMON/misc.c:64: do {
   32DA 8D 03         [24] 1642 	mov	ar3,r5
   32DC 8E 04         [24] 1643 	mov	ar4,r6
   32DE                    1644 00103$:
                     003B  1645 	C$misc.c$65$2$102 ==.
                           1646 ;	../COMMON/misc.c:65: if (p->errcode == err) {
   32DE 8B 82         [24] 1647 	mov	dpl,r3
   32E0 8C 83         [24] 1648 	mov	dph,r4
   32E2 E4            [12] 1649 	clr	a
   32E3 93            [24] 1650 	movc	a,@a+dptr
   32E4 FA            [12] 1651 	mov	r2,a
   32E5 B5 07 27      [24] 1652 	cjne	a,ar7,00102$
                     0045  1653 	C$misc.c$66$3$103 ==.
                           1654 ;	../COMMON/misc.c:66: lcd2_setpos(0);
   32E8 75 82 00      [24] 1655 	mov	dpl,#0x00
   32EB C0 06         [24] 1656 	push	ar6
   32ED C0 05         [24] 1657 	push	ar5
   32EF 12 3B 26      [24] 1658 	lcall	_lcd2_setpos
   32F2 D0 05         [24] 1659 	pop	ar5
   32F4 D0 06         [24] 1660 	pop	ar6
                     0053  1661 	C$misc.c$67$3$103 ==.
                           1662 ;	../COMMON/misc.c:67: lcd2_writestr(p->msg);
   32F6 8D 82         [24] 1663 	mov	dpl,r5
   32F8 8E 83         [24] 1664 	mov	dph,r6
   32FA A3            [24] 1665 	inc	dptr
   32FB E4            [12] 1666 	clr	a
   32FC 93            [24] 1667 	movc	a,@a+dptr
   32FD F9            [12] 1668 	mov	r1,a
   32FE A3            [24] 1669 	inc	dptr
   32FF E4            [12] 1670 	clr	a
   3300 93            [24] 1671 	movc	a,@a+dptr
   3301 F8            [12] 1672 	mov	r0,a
   3302 7A 80         [12] 1673 	mov	r2,#0x80
   3304 89 82         [24] 1674 	mov	dpl,r1
   3306 88 83         [24] 1675 	mov	dph,r0
   3308 8A F0         [24] 1676 	mov	b,r2
   330A 12 4E 9F      [24] 1677 	lcall	_lcd2_writestr
                     006A  1678 	C$misc.c$68$3$103 ==.
                           1679 ;	../COMMON/misc.c:68: return;
   330D 80 13         [24] 1680 	sjmp	00106$
   330F                    1681 00102$:
                     006C  1682 	C$misc.c$70$2$102 ==.
                           1683 ;	../COMMON/misc.c:70: ++p;
   330F 74 03         [12] 1684 	mov	a,#0x03
   3311 2B            [12] 1685 	add	a,r3
   3312 FB            [12] 1686 	mov	r3,a
   3313 E4            [12] 1687 	clr	a
   3314 3C            [12] 1688 	addc	a,r4
   3315 FC            [12] 1689 	mov	r4,a
   3316 8B 05         [24] 1690 	mov	ar5,r3
   3318 8C 06         [24] 1691 	mov	ar6,r4
                     0077  1692 	C$misc.c$71$1$101 ==.
                           1693 ;	../COMMON/misc.c:71: } while (p->errcode != AXRADIO_ERR_NOERROR);
   331A 8B 82         [24] 1694 	mov	dpl,r3
   331C 8C 83         [24] 1695 	mov	dph,r4
   331E E4            [12] 1696 	clr	a
   331F 93            [24] 1697 	movc	a,@a+dptr
   3320 70 BC         [24] 1698 	jnz	00103$
   3322                    1699 00106$:
                     007F  1700 	C$misc.c$72$1$101 ==.
                     007F  1701 	XG$display_radio_error$0$0 ==.
   3322 22            [24] 1702 	ret
                           1703 ;------------------------------------------------------------
                           1704 ;Allocation info for local variables in function 'delayms_callback'
                           1705 ;------------------------------------------------------------
                           1706 ;desc                      Allocated to registers 
                           1707 ;------------------------------------------------------------
                     0080  1708 	Fmisc$delayms_callback$0$0 ==.
                     0080  1709 	C$misc.c$76$1$101 ==.
                           1710 ;	../COMMON/misc.c:76: static void delayms_callback(struct wtimer_desc __xdata *desc)
                           1711 ;	-----------------------------------------
                           1712 ;	 function delayms_callback
                           1713 ;	-----------------------------------------
   3323                    1714 _delayms_callback:
                     0080  1715 	C$misc.c$79$1$105 ==.
                           1716 ;	../COMMON/misc.c:79: delaymstimer.handler = 0;
   3323 90 02 93      [24] 1717 	mov	dptr,#(_delaymstimer + 0x0002)
   3326 E4            [12] 1718 	clr	a
   3327 F0            [24] 1719 	movx	@dptr,a
   3328 E4            [12] 1720 	clr	a
   3329 A3            [24] 1721 	inc	dptr
   332A F0            [24] 1722 	movx	@dptr,a
                     0088  1723 	C$misc.c$80$1$105 ==.
                     0088  1724 	XFmisc$delayms_callback$0$0 ==.
   332B 22            [24] 1725 	ret
                           1726 ;------------------------------------------------------------
                           1727 ;Allocation info for local variables in function 'delay_ms'
                           1728 ;------------------------------------------------------------
                           1729 ;ms                        Allocated to registers r6 r7 
                           1730 ;x                         Allocated to stack - _bp +1
                           1731 ;------------------------------------------------------------
                     0089  1732 	G$delay_ms$0$0 ==.
                     0089  1733 	C$misc.c$84$1$105 ==.
                           1734 ;	../COMMON/misc.c:84: __reentrantb void delay_ms(uint16_t ms) __reentrant
                           1735 ;	-----------------------------------------
                           1736 ;	 function delay_ms
                           1737 ;	-----------------------------------------
   332C                    1738 _delay_ms:
   332C C0 25         [24] 1739 	push	_bp
   332E E5 81         [12] 1740 	mov	a,sp
   3330 F5 25         [12] 1741 	mov	_bp,a
   3332 24 04         [12] 1742 	add	a,#0x04
   3334 F5 81         [12] 1743 	mov	sp,a
   3336 AE 82         [24] 1744 	mov	r6,dpl
   3338 AF 83         [24] 1745 	mov	r7,dph
                     0097  1746 	C$misc.c$88$1$138 ==.
                           1747 ;	../COMMON/misc.c:88: wtimer_remove(&delaymstimer);
   333A 90 02 91      [24] 1748 	mov	dptr,#_delaymstimer
   333D C0 07         [24] 1749 	push	ar7
   333F C0 06         [24] 1750 	push	ar6
   3341 12 4D A6      [24] 1751 	lcall	_wtimer_remove
   3344 D0 06         [24] 1752 	pop	ar6
   3346 D0 07         [24] 1753 	pop	ar7
                     00A5  1754 	C$misc.c$89$1$138 ==.
                           1755 ;	../COMMON/misc.c:89: x = ms;
   3348 A8 25         [24] 1756 	mov	r0,_bp
   334A 08            [12] 1757 	inc	r0
   334B A6 06         [24] 1758 	mov	@r0,ar6
   334D 08            [12] 1759 	inc	r0
   334E A6 07         [24] 1760 	mov	@r0,ar7
   3350 08            [12] 1761 	inc	r0
   3351 76 00         [12] 1762 	mov	@r0,#0x00
   3353 08            [12] 1763 	inc	r0
   3354 76 00         [12] 1764 	mov	@r0,#0x00
                     00B3  1765 	C$misc.c$90$1$138 ==.
                           1766 ;	../COMMON/misc.c:90: delaymstimer.time = ms >> 1;
   3356 EF            [12] 1767 	mov	a,r7
   3357 C3            [12] 1768 	clr	c
   3358 13            [12] 1769 	rrc	a
   3359 CE            [12] 1770 	xch	a,r6
   335A 13            [12] 1771 	rrc	a
   335B CE            [12] 1772 	xch	a,r6
   335C FF            [12] 1773 	mov	r7,a
   335D 8E 04         [24] 1774 	mov	ar4,r6
   335F 8F 05         [24] 1775 	mov	ar5,r7
   3361 7E 00         [12] 1776 	mov	r6,#0x00
   3363 7F 00         [12] 1777 	mov	r7,#0x00
   3365 90 02 95      [24] 1778 	mov	dptr,#(_delaymstimer + 0x0004)
   3368 EC            [12] 1779 	mov	a,r4
   3369 F0            [24] 1780 	movx	@dptr,a
   336A ED            [12] 1781 	mov	a,r5
   336B A3            [24] 1782 	inc	dptr
   336C F0            [24] 1783 	movx	@dptr,a
   336D EE            [12] 1784 	mov	a,r6
   336E A3            [24] 1785 	inc	dptr
   336F F0            [24] 1786 	movx	@dptr,a
   3370 EF            [12] 1787 	mov	a,r7
   3371 A3            [24] 1788 	inc	dptr
   3372 F0            [24] 1789 	movx	@dptr,a
                     00D0  1790 	C$misc.c$91$1$138 ==.
                           1791 ;	../COMMON/misc.c:91: x <<= 3;
   3373 A8 25         [24] 1792 	mov	r0,_bp
   3375 08            [12] 1793 	inc	r0
   3376 08            [12] 1794 	inc	r0
   3377 08            [12] 1795 	inc	r0
   3378 08            [12] 1796 	inc	r0
   3379 E6            [12] 1797 	mov	a,@r0
   337A 18            [12] 1798 	dec	r0
   337B C4            [12] 1799 	swap	a
   337C 03            [12] 1800 	rr	a
   337D 54 F8         [12] 1801 	anl	a,#0xF8
   337F C6            [12] 1802 	xch	a,@r0
   3380 C4            [12] 1803 	swap	a
   3381 03            [12] 1804 	rr	a
   3382 C6            [12] 1805 	xch	a,@r0
   3383 66            [12] 1806 	xrl	a,@r0
   3384 C6            [12] 1807 	xch	a,@r0
   3385 54 F8         [12] 1808 	anl	a,#0xF8
   3387 C6            [12] 1809 	xch	a,@r0
   3388 66            [12] 1810 	xrl	a,@r0
   3389 08            [12] 1811 	inc	r0
   338A F6            [12] 1812 	mov	@r0,a
   338B 18            [12] 1813 	dec	r0
   338C 18            [12] 1814 	dec	r0
   338D E6            [12] 1815 	mov	a,@r0
   338E C4            [12] 1816 	swap	a
   338F 03            [12] 1817 	rr	a
   3390 54 07         [12] 1818 	anl	a,#0x07
   3392 08            [12] 1819 	inc	r0
   3393 46            [12] 1820 	orl	a,@r0
   3394 F6            [12] 1821 	mov	@r0,a
   3395 18            [12] 1822 	dec	r0
   3396 E6            [12] 1823 	mov	a,@r0
   3397 18            [12] 1824 	dec	r0
   3398 C4            [12] 1825 	swap	a
   3399 03            [12] 1826 	rr	a
   339A 54 F8         [12] 1827 	anl	a,#0xF8
   339C C6            [12] 1828 	xch	a,@r0
   339D C4            [12] 1829 	swap	a
   339E 03            [12] 1830 	rr	a
   339F C6            [12] 1831 	xch	a,@r0
   33A0 66            [12] 1832 	xrl	a,@r0
   33A1 C6            [12] 1833 	xch	a,@r0
   33A2 54 F8         [12] 1834 	anl	a,#0xF8
   33A4 C6            [12] 1835 	xch	a,@r0
   33A5 66            [12] 1836 	xrl	a,@r0
   33A6 08            [12] 1837 	inc	r0
   33A7 F6            [12] 1838 	mov	@r0,a
                     0105  1839 	C$misc.c$92$1$138 ==.
                           1840 ;	../COMMON/misc.c:92: delaymstimer.time -= x;
   33A8 A8 25         [24] 1841 	mov	r0,_bp
   33AA 08            [12] 1842 	inc	r0
   33AB EC            [12] 1843 	mov	a,r4
   33AC C3            [12] 1844 	clr	c
   33AD 96            [12] 1845 	subb	a,@r0
   33AE FC            [12] 1846 	mov	r4,a
   33AF ED            [12] 1847 	mov	a,r5
   33B0 08            [12] 1848 	inc	r0
   33B1 96            [12] 1849 	subb	a,@r0
   33B2 FD            [12] 1850 	mov	r5,a
   33B3 EE            [12] 1851 	mov	a,r6
   33B4 08            [12] 1852 	inc	r0
   33B5 96            [12] 1853 	subb	a,@r0
   33B6 FE            [12] 1854 	mov	r6,a
   33B7 EF            [12] 1855 	mov	a,r7
   33B8 08            [12] 1856 	inc	r0
   33B9 96            [12] 1857 	subb	a,@r0
   33BA FF            [12] 1858 	mov	r7,a
   33BB 90 02 95      [24] 1859 	mov	dptr,#(_delaymstimer + 0x0004)
   33BE EC            [12] 1860 	mov	a,r4
   33BF F0            [24] 1861 	movx	@dptr,a
   33C0 ED            [12] 1862 	mov	a,r5
   33C1 A3            [24] 1863 	inc	dptr
   33C2 F0            [24] 1864 	movx	@dptr,a
   33C3 EE            [12] 1865 	mov	a,r6
   33C4 A3            [24] 1866 	inc	dptr
   33C5 F0            [24] 1867 	movx	@dptr,a
   33C6 EF            [12] 1868 	mov	a,r7
   33C7 A3            [24] 1869 	inc	dptr
   33C8 F0            [24] 1870 	movx	@dptr,a
                     0126  1871 	C$misc.c$93$1$138 ==.
                           1872 ;	../COMMON/misc.c:93: x <<= 3;
   33C9 A8 25         [24] 1873 	mov	r0,_bp
   33CB 08            [12] 1874 	inc	r0
   33CC 08            [12] 1875 	inc	r0
   33CD 08            [12] 1876 	inc	r0
   33CE 08            [12] 1877 	inc	r0
   33CF E6            [12] 1878 	mov	a,@r0
   33D0 18            [12] 1879 	dec	r0
   33D1 C4            [12] 1880 	swap	a
   33D2 03            [12] 1881 	rr	a
   33D3 54 F8         [12] 1882 	anl	a,#0xF8
   33D5 C6            [12] 1883 	xch	a,@r0
   33D6 C4            [12] 1884 	swap	a
   33D7 03            [12] 1885 	rr	a
   33D8 C6            [12] 1886 	xch	a,@r0
   33D9 66            [12] 1887 	xrl	a,@r0
   33DA C6            [12] 1888 	xch	a,@r0
   33DB 54 F8         [12] 1889 	anl	a,#0xF8
   33DD C6            [12] 1890 	xch	a,@r0
   33DE 66            [12] 1891 	xrl	a,@r0
   33DF 08            [12] 1892 	inc	r0
   33E0 F6            [12] 1893 	mov	@r0,a
   33E1 18            [12] 1894 	dec	r0
   33E2 18            [12] 1895 	dec	r0
   33E3 E6            [12] 1896 	mov	a,@r0
   33E4 C4            [12] 1897 	swap	a
   33E5 03            [12] 1898 	rr	a
   33E6 54 07         [12] 1899 	anl	a,#0x07
   33E8 08            [12] 1900 	inc	r0
   33E9 46            [12] 1901 	orl	a,@r0
   33EA F6            [12] 1902 	mov	@r0,a
   33EB 18            [12] 1903 	dec	r0
   33EC E6            [12] 1904 	mov	a,@r0
   33ED 18            [12] 1905 	dec	r0
   33EE C4            [12] 1906 	swap	a
   33EF 03            [12] 1907 	rr	a
   33F0 54 F8         [12] 1908 	anl	a,#0xF8
   33F2 C6            [12] 1909 	xch	a,@r0
   33F3 C4            [12] 1910 	swap	a
   33F4 03            [12] 1911 	rr	a
   33F5 C6            [12] 1912 	xch	a,@r0
   33F6 66            [12] 1913 	xrl	a,@r0
   33F7 C6            [12] 1914 	xch	a,@r0
   33F8 54 F8         [12] 1915 	anl	a,#0xF8
   33FA C6            [12] 1916 	xch	a,@r0
   33FB 66            [12] 1917 	xrl	a,@r0
   33FC 08            [12] 1918 	inc	r0
   33FD F6            [12] 1919 	mov	@r0,a
                     015B  1920 	C$misc.c$94$1$138 ==.
                           1921 ;	../COMMON/misc.c:94: delaymstimer.time += x;
   33FE A8 25         [24] 1922 	mov	r0,_bp
   3400 08            [12] 1923 	inc	r0
   3401 E6            [12] 1924 	mov	a,@r0
   3402 2C            [12] 1925 	add	a,r4
   3403 FC            [12] 1926 	mov	r4,a
   3404 08            [12] 1927 	inc	r0
   3405 E6            [12] 1928 	mov	a,@r0
   3406 3D            [12] 1929 	addc	a,r5
   3407 FD            [12] 1930 	mov	r5,a
   3408 08            [12] 1931 	inc	r0
   3409 E6            [12] 1932 	mov	a,@r0
   340A 3E            [12] 1933 	addc	a,r6
   340B FE            [12] 1934 	mov	r6,a
   340C 08            [12] 1935 	inc	r0
   340D E6            [12] 1936 	mov	a,@r0
   340E 3F            [12] 1937 	addc	a,r7
   340F FF            [12] 1938 	mov	r7,a
   3410 90 02 95      [24] 1939 	mov	dptr,#(_delaymstimer + 0x0004)
   3413 EC            [12] 1940 	mov	a,r4
   3414 F0            [24] 1941 	movx	@dptr,a
   3415 ED            [12] 1942 	mov	a,r5
   3416 A3            [24] 1943 	inc	dptr
   3417 F0            [24] 1944 	movx	@dptr,a
   3418 EE            [12] 1945 	mov	a,r6
   3419 A3            [24] 1946 	inc	dptr
   341A F0            [24] 1947 	movx	@dptr,a
   341B EF            [12] 1948 	mov	a,r7
   341C A3            [24] 1949 	inc	dptr
   341D F0            [24] 1950 	movx	@dptr,a
                     017B  1951 	C$misc.c$95$1$138 ==.
                           1952 ;	../COMMON/misc.c:95: x <<= 2;
   341E A8 25         [24] 1953 	mov	r0,_bp
   3420 08            [12] 1954 	inc	r0
   3421 E6            [12] 1955 	mov	a,@r0
   3422 25 E0         [12] 1956 	add	a,acc
   3424 F6            [12] 1957 	mov	@r0,a
   3425 08            [12] 1958 	inc	r0
   3426 E6            [12] 1959 	mov	a,@r0
   3427 33            [12] 1960 	rlc	a
   3428 F6            [12] 1961 	mov	@r0,a
   3429 08            [12] 1962 	inc	r0
   342A E6            [12] 1963 	mov	a,@r0
   342B 33            [12] 1964 	rlc	a
   342C F6            [12] 1965 	mov	@r0,a
   342D 08            [12] 1966 	inc	r0
   342E E6            [12] 1967 	mov	a,@r0
   342F 33            [12] 1968 	rlc	a
   3430 F6            [12] 1969 	mov	@r0,a
   3431 18            [12] 1970 	dec	r0
   3432 18            [12] 1971 	dec	r0
   3433 18            [12] 1972 	dec	r0
   3434 E6            [12] 1973 	mov	a,@r0
   3435 25 E0         [12] 1974 	add	a,acc
   3437 F6            [12] 1975 	mov	@r0,a
   3438 08            [12] 1976 	inc	r0
   3439 E6            [12] 1977 	mov	a,@r0
   343A 33            [12] 1978 	rlc	a
   343B F6            [12] 1979 	mov	@r0,a
   343C 08            [12] 1980 	inc	r0
   343D E6            [12] 1981 	mov	a,@r0
   343E 33            [12] 1982 	rlc	a
   343F F6            [12] 1983 	mov	@r0,a
   3440 08            [12] 1984 	inc	r0
   3441 E6            [12] 1985 	mov	a,@r0
   3442 33            [12] 1986 	rlc	a
   3443 F6            [12] 1987 	mov	@r0,a
                     01A1  1988 	C$misc.c$96$1$138 ==.
                           1989 ;	../COMMON/misc.c:96: delaymstimer.time += x;
   3444 A8 25         [24] 1990 	mov	r0,_bp
   3446 08            [12] 1991 	inc	r0
   3447 E6            [12] 1992 	mov	a,@r0
   3448 2C            [12] 1993 	add	a,r4
   3449 FC            [12] 1994 	mov	r4,a
   344A 08            [12] 1995 	inc	r0
   344B E6            [12] 1996 	mov	a,@r0
   344C 3D            [12] 1997 	addc	a,r5
   344D FD            [12] 1998 	mov	r5,a
   344E 08            [12] 1999 	inc	r0
   344F E6            [12] 2000 	mov	a,@r0
   3450 3E            [12] 2001 	addc	a,r6
   3451 FE            [12] 2002 	mov	r6,a
   3452 08            [12] 2003 	inc	r0
   3453 E6            [12] 2004 	mov	a,@r0
   3454 3F            [12] 2005 	addc	a,r7
   3455 FF            [12] 2006 	mov	r7,a
   3456 90 02 95      [24] 2007 	mov	dptr,#(_delaymstimer + 0x0004)
   3459 EC            [12] 2008 	mov	a,r4
   345A F0            [24] 2009 	movx	@dptr,a
   345B ED            [12] 2010 	mov	a,r5
   345C A3            [24] 2011 	inc	dptr
   345D F0            [24] 2012 	movx	@dptr,a
   345E EE            [12] 2013 	mov	a,r6
   345F A3            [24] 2014 	inc	dptr
   3460 F0            [24] 2015 	movx	@dptr,a
   3461 EF            [12] 2016 	mov	a,r7
   3462 A3            [24] 2017 	inc	dptr
   3463 F0            [24] 2018 	movx	@dptr,a
                     01C1  2019 	C$misc.c$98$1$138 ==.
                           2020 ;	../COMMON/misc.c:98: wtimer1_remove(&delaymstimer);
   3464 90 02 91      [24] 2021 	mov	dptr,#_delaymstimer
   3467 12 46 E8      [24] 2022 	lcall	_wtimer1_remove
                     01C7  2023 	C$misc.c$99$1$138 ==.
                           2024 ;	../COMMON/misc.c:99: delaymstimer.handler = delayms_callback;
   346A 90 02 93      [24] 2025 	mov	dptr,#(_delaymstimer + 0x0002)
   346D 74 23         [12] 2026 	mov	a,#_delayms_callback
   346F F0            [24] 2027 	movx	@dptr,a
   3470 74 33         [12] 2028 	mov	a,#(_delayms_callback >> 8)
   3472 A3            [24] 2029 	inc	dptr
   3473 F0            [24] 2030 	movx	@dptr,a
                     01D1  2031 	C$misc.c$100$1$138 ==.
                           2032 ;	../COMMON/misc.c:100: wtimer1_addrelative(&delaymstimer);
   3474 90 02 91      [24] 2033 	mov	dptr,#_delaymstimer
   3477 12 44 6A      [24] 2034 	lcall	_wtimer1_addrelative
                     01D7  2035 	C$misc.c$102$1$138 ==.
                           2036 ;	../COMMON/misc.c:102: do {
   347A                    2037 00103$:
                     01D7  2038 	C$misc.c$104$2$139 ==.
                           2039 ;	../COMMON/misc.c:104: wtimer_runcallbacks();
   347A 12 42 92      [24] 2040 	lcall	_wtimer_runcallbacks
                     01DA  2041 	C$misc.c$107$2$139 ==.
                           2042 ;	../COMMON/misc.c:107: if (!delaymstimer.handler)
   347D 90 02 93      [24] 2043 	mov	dptr,#(_delaymstimer + 0x0002)
   3480 E0            [24] 2044 	movx	a,@dptr
   3481 FE            [12] 2045 	mov	r6,a
   3482 A3            [24] 2046 	inc	dptr
   3483 E0            [24] 2047 	movx	a,@dptr
   3484 FF            [12] 2048 	mov	r7,a
   3485 4E            [12] 2049 	orl	a,r6
   3486 60 11         [24] 2050 	jz	00106$
                     01E5  2051 	C$misc.c$110$2$139 ==.
                           2052 ;	../COMMON/misc.c:110: wtimer_idle(WTFLAG_CANSTANDBY);
   3488 75 82 02      [24] 2053 	mov	dpl,#0x02
   348B 12 43 16      [24] 2054 	lcall	_wtimer_idle
                     01EB  2055 	C$misc.c$112$1$138 ==.
                           2056 ;	../COMMON/misc.c:112: } while (delaymstimer.handler);
   348E 90 02 93      [24] 2057 	mov	dptr,#(_delaymstimer + 0x0002)
   3491 E0            [24] 2058 	movx	a,@dptr
   3492 FE            [12] 2059 	mov	r6,a
   3493 A3            [24] 2060 	inc	dptr
   3494 E0            [24] 2061 	movx	a,@dptr
   3495 FF            [12] 2062 	mov	r7,a
   3496 4E            [12] 2063 	orl	a,r6
   3497 70 E1         [24] 2064 	jnz	00103$
   3499                    2065 00106$:
   3499 85 25 81      [24] 2066 	mov	sp,_bp
   349C D0 25         [24] 2067 	pop	_bp
                     01FB  2068 	C$misc.c$113$1$138 ==.
                     01FB  2069 	XG$delay_ms$0$0 ==.
   349E 22            [24] 2070 	ret
                           2071 	.area CSEG    (CODE)
                           2072 	.area CONST   (CODE)
                     0000  2073 Lmisc.display_radio_error$errtbl$1$101 == .
   544B                    2074 _display_radio_error_errtbl_1_101:
   544B 01                 2075 	.db #0x01	; 1
   544C 63 54              2076 	.byte __str_0,(__str_0 >> 8)
   544E 02                 2077 	.db #0x02	; 2
   544F 74 54              2078 	.byte __str_1,(__str_1 >> 8)
   5451 03                 2079 	.db #0x03	; 3
   5452 7C 54              2080 	.byte __str_2,(__str_2 >> 8)
   5454 04                 2081 	.db #0x04	; 4
   5455 87 54              2082 	.byte __str_3,(__str_3 >> 8)
   5457 05                 2083 	.db #0x05	; 5
   5458 92 54              2084 	.byte __str_4,(__str_4 >> 8)
   545A 06                 2085 	.db #0x06	; 6
   545B A3 54              2086 	.byte __str_5,(__str_5 >> 8)
   545D 07                 2087 	.db #0x07	; 7
   545E AE 54              2088 	.byte __str_6,(__str_6 >> 8)
   5460 00                 2089 	.db #0x00	; 0
   5461 00 00              2090 	.byte #0x00,#0x00
                     0018  2091 Fmisc$_str_0$0$0 == .
   5463                    2092 __str_0:
   5463 45 3A 20 6E 6F 74  2093 	.ascii "E: not supported"
        20 73 75 70 70 6F
        72 74 65 64
   5473 00                 2094 	.db 0x00
                     0029  2095 Fmisc$_str_1$0$0 == .
   5474                    2096 __str_1:
   5474 45 3A 20 62 75 73  2097 	.ascii "E: busy"
        79
   547B 00                 2098 	.db 0x00
                     0031  2099 Fmisc$_str_2$0$0 == .
   547C                    2100 __str_2:
   547C 45 3A 20 74 69 6D  2101 	.ascii "E: timeout"
        65 6F 75 74
   5486 00                 2102 	.db 0x00
                     003C  2103 Fmisc$_str_3$0$0 == .
   5487                    2104 __str_3:
   5487 45 3A 20 69 6E 76  2105 	.ascii "E: invalid"
        61 6C 69 64
   5491 00                 2106 	.db 0x00
                     0047  2107 Fmisc$_str_4$0$0 == .
   5492                    2108 __str_4:
   5492 45 3A 20 6E 6F 20  2109 	.ascii "E: no chip found"
        63 68 69 70 20 66
        6F 75 6E 64
   54A2 00                 2110 	.db 0x00
                     0058  2111 Fmisc$_str_5$0$0 == .
   54A3                    2112 __str_5:
   54A3 45 3A 20 72 61 6E  2113 	.ascii "E: ranging"
        67 69 6E 67
   54AD 00                 2114 	.db 0x00
                     0063  2115 Fmisc$_str_6$0$0 == .
   54AE                    2116 __str_6:
   54AE 45 3A 20 6C 6F 63  2117 	.ascii "E: lock lost"
        6B 20 6C 6F 73 74
   54BA 00                 2118 	.db 0x00
                           2119 	.area XINIT   (CODE)
                           2120 	.area CABS    (ABS,CODE)
