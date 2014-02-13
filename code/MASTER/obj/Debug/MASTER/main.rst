                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.3.0 #8604 (Sep  2 2013) (Linux)
                              4 ; This file was generated Thu Feb 13 19:18:43 2014
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl __sdcc_external_startup
                             14 	.globl _memcpy
                             15 	.globl _scan_keymatrix
                             16 	.globl _display_radio_error
                             17 	.globl _delay_ms
                             18 	.globl _dbglink_writehexu16
                             19 	.globl _dbglink_writenum16
                             20 	.globl _dbglink_writestr
                             21 	.globl _dbglink_tx
                             22 	.globl _dbglink_init
                             23 	.globl _wtimer_runcallbacks
                             24 	.globl _wtimer_idle
                             25 	.globl _wtimer_init
                             26 	.globl _wtimer1_setconfig
                             27 	.globl _wtimer0_setconfig
                             28 	.globl _flash_apply_calibration
                             29 	.globl _ax5043_commsleepexit
                             30 	.globl _axradio_transmit
                             31 	.globl _axradio_set_default_remote_address
                             32 	.globl _axradio_set_local_address
                             33 	.globl _axradio_get_pllrange
                             34 	.globl _axradio_set_mode
                             35 	.globl _axradio_init
                             36 	.globl _PORTC_7
                             37 	.globl _PORTC_6
                             38 	.globl _PORTC_5
                             39 	.globl _PORTC_4
                             40 	.globl _PORTC_3
                             41 	.globl _PORTC_2
                             42 	.globl _PORTC_1
                             43 	.globl _PORTC_0
                             44 	.globl _PORTB_7
                             45 	.globl _PORTB_6
                             46 	.globl _PORTB_5
                             47 	.globl _PORTB_4
                             48 	.globl _PORTB_3
                             49 	.globl _PORTB_2
                             50 	.globl _PORTB_1
                             51 	.globl _PORTB_0
                             52 	.globl _PORTA_7
                             53 	.globl _PORTA_6
                             54 	.globl _PORTA_5
                             55 	.globl _PORTA_4
                             56 	.globl _PORTA_3
                             57 	.globl _PORTA_2
                             58 	.globl _PORTA_1
                             59 	.globl _PORTA_0
                             60 	.globl _PINC_7
                             61 	.globl _PINC_6
                             62 	.globl _PINC_5
                             63 	.globl _PINC_4
                             64 	.globl _PINC_3
                             65 	.globl _PINC_2
                             66 	.globl _PINC_1
                             67 	.globl _PINC_0
                             68 	.globl _PINB_7
                             69 	.globl _PINB_6
                             70 	.globl _PINB_5
                             71 	.globl _PINB_4
                             72 	.globl _PINB_3
                             73 	.globl _PINB_2
                             74 	.globl _PINB_1
                             75 	.globl _PINB_0
                             76 	.globl _PINA_7
                             77 	.globl _PINA_6
                             78 	.globl _PINA_5
                             79 	.globl _PINA_4
                             80 	.globl _PINA_3
                             81 	.globl _PINA_2
                             82 	.globl _PINA_1
                             83 	.globl _PINA_0
                             84 	.globl _CY
                             85 	.globl _AC
                             86 	.globl _F0
                             87 	.globl _RS1
                             88 	.globl _RS0
                             89 	.globl _OV
                             90 	.globl _F1
                             91 	.globl _P
                             92 	.globl _IP_7
                             93 	.globl _IP_6
                             94 	.globl _IP_5
                             95 	.globl _IP_4
                             96 	.globl _IP_3
                             97 	.globl _IP_2
                             98 	.globl _IP_1
                             99 	.globl _IP_0
                            100 	.globl _EA
                            101 	.globl _IE_7
                            102 	.globl _IE_6
                            103 	.globl _IE_5
                            104 	.globl _IE_4
                            105 	.globl _IE_3
                            106 	.globl _IE_2
                            107 	.globl _IE_1
                            108 	.globl _IE_0
                            109 	.globl _EIP_7
                            110 	.globl _EIP_6
                            111 	.globl _EIP_5
                            112 	.globl _EIP_4
                            113 	.globl _EIP_3
                            114 	.globl _EIP_2
                            115 	.globl _EIP_1
                            116 	.globl _EIP_0
                            117 	.globl _EIE_7
                            118 	.globl _EIE_6
                            119 	.globl _EIE_5
                            120 	.globl _EIE_4
                            121 	.globl _EIE_3
                            122 	.globl _EIE_2
                            123 	.globl _EIE_1
                            124 	.globl _EIE_0
                            125 	.globl _E2IP_7
                            126 	.globl _E2IP_6
                            127 	.globl _E2IP_5
                            128 	.globl _E2IP_4
                            129 	.globl _E2IP_3
                            130 	.globl _E2IP_2
                            131 	.globl _E2IP_1
                            132 	.globl _E2IP_0
                            133 	.globl _E2IE_7
                            134 	.globl _E2IE_6
                            135 	.globl _E2IE_5
                            136 	.globl _E2IE_4
                            137 	.globl _E2IE_3
                            138 	.globl _E2IE_2
                            139 	.globl _E2IE_1
                            140 	.globl _E2IE_0
                            141 	.globl _B_7
                            142 	.globl _B_6
                            143 	.globl _B_5
                            144 	.globl _B_4
                            145 	.globl _B_3
                            146 	.globl _B_2
                            147 	.globl _B_1
                            148 	.globl _B_0
                            149 	.globl _ACC_7
                            150 	.globl _ACC_6
                            151 	.globl _ACC_5
                            152 	.globl _ACC_4
                            153 	.globl _ACC_3
                            154 	.globl _ACC_2
                            155 	.globl _ACC_1
                            156 	.globl _ACC_0
                            157 	.globl _WTSTAT
                            158 	.globl _WTIRQEN
                            159 	.globl _WTEVTD
                            160 	.globl _WTEVTD1
                            161 	.globl _WTEVTD0
                            162 	.globl _WTEVTC
                            163 	.globl _WTEVTC1
                            164 	.globl _WTEVTC0
                            165 	.globl _WTEVTB
                            166 	.globl _WTEVTB1
                            167 	.globl _WTEVTB0
                            168 	.globl _WTEVTA
                            169 	.globl _WTEVTA1
                            170 	.globl _WTEVTA0
                            171 	.globl _WTCNTR1
                            172 	.globl _WTCNTB
                            173 	.globl _WTCNTB1
                            174 	.globl _WTCNTB0
                            175 	.globl _WTCNTA
                            176 	.globl _WTCNTA1
                            177 	.globl _WTCNTA0
                            178 	.globl _WTCFGB
                            179 	.globl _WTCFGA
                            180 	.globl _WDTRESET
                            181 	.globl _WDTCFG
                            182 	.globl _U1STATUS
                            183 	.globl _U1SHREG
                            184 	.globl _U1MODE
                            185 	.globl _U1CTRL
                            186 	.globl _U0STATUS
                            187 	.globl _U0SHREG
                            188 	.globl _U0MODE
                            189 	.globl _U0CTRL
                            190 	.globl _T2STATUS
                            191 	.globl _T2PERIOD
                            192 	.globl _T2PERIOD1
                            193 	.globl _T2PERIOD0
                            194 	.globl _T2MODE
                            195 	.globl _T2CNT
                            196 	.globl _T2CNT1
                            197 	.globl _T2CNT0
                            198 	.globl _T2CLKSRC
                            199 	.globl _T1STATUS
                            200 	.globl _T1PERIOD
                            201 	.globl _T1PERIOD1
                            202 	.globl _T1PERIOD0
                            203 	.globl _T1MODE
                            204 	.globl _T1CNT
                            205 	.globl _T1CNT1
                            206 	.globl _T1CNT0
                            207 	.globl _T1CLKSRC
                            208 	.globl _T0STATUS
                            209 	.globl _T0PERIOD
                            210 	.globl _T0PERIOD1
                            211 	.globl _T0PERIOD0
                            212 	.globl _T0MODE
                            213 	.globl _T0CNT
                            214 	.globl _T0CNT1
                            215 	.globl _T0CNT0
                            216 	.globl _T0CLKSRC
                            217 	.globl _SPSTATUS
                            218 	.globl _SPSHREG
                            219 	.globl _SPMODE
                            220 	.globl _SPCLKSRC
                            221 	.globl _RADIOSTAT
                            222 	.globl _RADIOSTAT1
                            223 	.globl _RADIOSTAT0
                            224 	.globl _RADIODATA
                            225 	.globl _RADIODATA3
                            226 	.globl _RADIODATA2
                            227 	.globl _RADIODATA1
                            228 	.globl _RADIODATA0
                            229 	.globl _RADIOADDR
                            230 	.globl _RADIOADDR1
                            231 	.globl _RADIOADDR0
                            232 	.globl _RADIOACC
                            233 	.globl _OC1STATUS
                            234 	.globl _OC1PIN
                            235 	.globl _OC1MODE
                            236 	.globl _OC1COMP
                            237 	.globl _OC1COMP1
                            238 	.globl _OC1COMP0
                            239 	.globl _OC0STATUS
                            240 	.globl _OC0PIN
                            241 	.globl _OC0MODE
                            242 	.globl _OC0COMP
                            243 	.globl _OC0COMP1
                            244 	.globl _OC0COMP0
                            245 	.globl _NVSTATUS
                            246 	.globl _NVKEY
                            247 	.globl _NVDATA
                            248 	.globl _NVDATA1
                            249 	.globl _NVDATA0
                            250 	.globl _NVADDR
                            251 	.globl _NVADDR1
                            252 	.globl _NVADDR0
                            253 	.globl _IC1STATUS
                            254 	.globl _IC1MODE
                            255 	.globl _IC1CAPT
                            256 	.globl _IC1CAPT1
                            257 	.globl _IC1CAPT0
                            258 	.globl _IC0STATUS
                            259 	.globl _IC0MODE
                            260 	.globl _IC0CAPT
                            261 	.globl _IC0CAPT1
                            262 	.globl _IC0CAPT0
                            263 	.globl _PORTR
                            264 	.globl _PORTC
                            265 	.globl _PORTB
                            266 	.globl _PORTA
                            267 	.globl _PINR
                            268 	.globl _PINC
                            269 	.globl _PINB
                            270 	.globl _PINA
                            271 	.globl _DIRR
                            272 	.globl _DIRC
                            273 	.globl _DIRB
                            274 	.globl _DIRA
                            275 	.globl _DBGLNKSTAT
                            276 	.globl _DBGLNKBUF
                            277 	.globl _CODECONFIG
                            278 	.globl _CLKSTAT
                            279 	.globl _CLKCON
                            280 	.globl _ANALOGCOMP
                            281 	.globl _ADCCONV
                            282 	.globl _ADCCLKSRC
                            283 	.globl _ADCCH3CONFIG
                            284 	.globl _ADCCH2CONFIG
                            285 	.globl _ADCCH1CONFIG
                            286 	.globl _ADCCH0CONFIG
                            287 	.globl __XPAGE
                            288 	.globl _XPAGE
                            289 	.globl _SP
                            290 	.globl _PSW
                            291 	.globl _PCON
                            292 	.globl _IP
                            293 	.globl _IE
                            294 	.globl _EIP
                            295 	.globl _EIE
                            296 	.globl _E2IP
                            297 	.globl _E2IE
                            298 	.globl _DPS
                            299 	.globl _DPTR1
                            300 	.globl _DPTR0
                            301 	.globl _DPL1
                            302 	.globl _DPL
                            303 	.globl _DPH1
                            304 	.globl _DPH
                            305 	.globl _B
                            306 	.globl _ACC
                            307 	.globl _wakeup_desc
                            308 	.globl _AX5043_TIMEGAIN3NB
                            309 	.globl _AX5043_TIMEGAIN2NB
                            310 	.globl _AX5043_TIMEGAIN1NB
                            311 	.globl _AX5043_TIMEGAIN0NB
                            312 	.globl _AX5043_RXPARAMSETSNB
                            313 	.globl _AX5043_RXPARAMCURSETNB
                            314 	.globl _AX5043_PKTMAXLENNB
                            315 	.globl _AX5043_PKTLENOFFSETNB
                            316 	.globl _AX5043_PKTLENCFGNB
                            317 	.globl _AX5043_PKTADDRMASK3NB
                            318 	.globl _AX5043_PKTADDRMASK2NB
                            319 	.globl _AX5043_PKTADDRMASK1NB
                            320 	.globl _AX5043_PKTADDRMASK0NB
                            321 	.globl _AX5043_PKTADDRCFGNB
                            322 	.globl _AX5043_PKTADDR3NB
                            323 	.globl _AX5043_PKTADDR2NB
                            324 	.globl _AX5043_PKTADDR1NB
                            325 	.globl _AX5043_PKTADDR0NB
                            326 	.globl _AX5043_PHASEGAIN3NB
                            327 	.globl _AX5043_PHASEGAIN2NB
                            328 	.globl _AX5043_PHASEGAIN1NB
                            329 	.globl _AX5043_PHASEGAIN0NB
                            330 	.globl _AX5043_FREQUENCYLEAKNB
                            331 	.globl _AX5043_FREQUENCYGAIND3NB
                            332 	.globl _AX5043_FREQUENCYGAIND2NB
                            333 	.globl _AX5043_FREQUENCYGAIND1NB
                            334 	.globl _AX5043_FREQUENCYGAIND0NB
                            335 	.globl _AX5043_FREQUENCYGAINC3NB
                            336 	.globl _AX5043_FREQUENCYGAINC2NB
                            337 	.globl _AX5043_FREQUENCYGAINC1NB
                            338 	.globl _AX5043_FREQUENCYGAINC0NB
                            339 	.globl _AX5043_FREQUENCYGAINB3NB
                            340 	.globl _AX5043_FREQUENCYGAINB2NB
                            341 	.globl _AX5043_FREQUENCYGAINB1NB
                            342 	.globl _AX5043_FREQUENCYGAINB0NB
                            343 	.globl _AX5043_FREQUENCYGAINA3NB
                            344 	.globl _AX5043_FREQUENCYGAINA2NB
                            345 	.globl _AX5043_FREQUENCYGAINA1NB
                            346 	.globl _AX5043_FREQUENCYGAINA0NB
                            347 	.globl _AX5043_FREQDEV13NB
                            348 	.globl _AX5043_FREQDEV12NB
                            349 	.globl _AX5043_FREQDEV11NB
                            350 	.globl _AX5043_FREQDEV10NB
                            351 	.globl _AX5043_FREQDEV03NB
                            352 	.globl _AX5043_FREQDEV02NB
                            353 	.globl _AX5043_FREQDEV01NB
                            354 	.globl _AX5043_FREQDEV00NB
                            355 	.globl _AX5043_FOURFSK3NB
                            356 	.globl _AX5043_FOURFSK2NB
                            357 	.globl _AX5043_FOURFSK1NB
                            358 	.globl _AX5043_FOURFSK0NB
                            359 	.globl _AX5043_DRGAIN3NB
                            360 	.globl _AX5043_DRGAIN2NB
                            361 	.globl _AX5043_DRGAIN1NB
                            362 	.globl _AX5043_DRGAIN0NB
                            363 	.globl _AX5043_BBOFFSRES3NB
                            364 	.globl _AX5043_BBOFFSRES2NB
                            365 	.globl _AX5043_BBOFFSRES1NB
                            366 	.globl _AX5043_BBOFFSRES0NB
                            367 	.globl _AX5043_AMPLITUDEGAIN3NB
                            368 	.globl _AX5043_AMPLITUDEGAIN2NB
                            369 	.globl _AX5043_AMPLITUDEGAIN1NB
                            370 	.globl _AX5043_AMPLITUDEGAIN0NB
                            371 	.globl _AX5043_AGCTARGET3NB
                            372 	.globl _AX5043_AGCTARGET2NB
                            373 	.globl _AX5043_AGCTARGET1NB
                            374 	.globl _AX5043_AGCTARGET0NB
                            375 	.globl _AX5043_AGCMINMAX3NB
                            376 	.globl _AX5043_AGCMINMAX2NB
                            377 	.globl _AX5043_AGCMINMAX1NB
                            378 	.globl _AX5043_AGCMINMAX0NB
                            379 	.globl _AX5043_AGCGAIN3NB
                            380 	.globl _AX5043_AGCGAIN2NB
                            381 	.globl _AX5043_AGCGAIN1NB
                            382 	.globl _AX5043_AGCGAIN0NB
                            383 	.globl _AX5043_AGCAHYST3NB
                            384 	.globl _AX5043_AGCAHYST2NB
                            385 	.globl _AX5043_AGCAHYST1NB
                            386 	.globl _AX5043_AGCAHYST0NB
                            387 	.globl _AX5043_XTALSTATUSNB
                            388 	.globl _AX5043_XTALCAPNB
                            389 	.globl _AX5043_WAKEUPXOEARLYNB
                            390 	.globl _AX5043_WAKEUPTIMER1NB
                            391 	.globl _AX5043_WAKEUPTIMER0NB
                            392 	.globl _AX5043_WAKEUPFREQ1NB
                            393 	.globl _AX5043_WAKEUPFREQ0NB
                            394 	.globl _AX5043_WAKEUP1NB
                            395 	.globl _AX5043_WAKEUP0NB
                            396 	.globl _AX5043_TXRATE2NB
                            397 	.globl _AX5043_TXRATE1NB
                            398 	.globl _AX5043_TXRATE0NB
                            399 	.globl _AX5043_TXPWRCOEFFE1NB
                            400 	.globl _AX5043_TXPWRCOEFFE0NB
                            401 	.globl _AX5043_TXPWRCOEFFD1NB
                            402 	.globl _AX5043_TXPWRCOEFFD0NB
                            403 	.globl _AX5043_TXPWRCOEFFC1NB
                            404 	.globl _AX5043_TXPWRCOEFFC0NB
                            405 	.globl _AX5043_TXPWRCOEFFB1NB
                            406 	.globl _AX5043_TXPWRCOEFFB0NB
                            407 	.globl _AX5043_TXPWRCOEFFA1NB
                            408 	.globl _AX5043_TXPWRCOEFFA0NB
                            409 	.globl _AX5043_TRKRFFREQ2NB
                            410 	.globl _AX5043_TRKRFFREQ1NB
                            411 	.globl _AX5043_TRKRFFREQ0NB
                            412 	.globl _AX5043_TRKPHASE1NB
                            413 	.globl _AX5043_TRKPHASE0NB
                            414 	.globl _AX5043_TRKFSKDEMOD1NB
                            415 	.globl _AX5043_TRKFSKDEMOD0NB
                            416 	.globl _AX5043_TRKFREQ1NB
                            417 	.globl _AX5043_TRKFREQ0NB
                            418 	.globl _AX5043_TRKDATARATE2NB
                            419 	.globl _AX5043_TRKDATARATE1NB
                            420 	.globl _AX5043_TRKDATARATE0NB
                            421 	.globl _AX5043_TRKAMPLITUDE1NB
                            422 	.globl _AX5043_TRKAMPLITUDE0NB
                            423 	.globl _AX5043_TRKAFSKDEMOD1NB
                            424 	.globl _AX5043_TRKAFSKDEMOD0NB
                            425 	.globl _AX5043_TMGTXSETTLENB
                            426 	.globl _AX5043_TMGTXBOOSTNB
                            427 	.globl _AX5043_TMGRXSETTLENB
                            428 	.globl _AX5043_TMGRXRSSINB
                            429 	.globl _AX5043_TMGRXPREAMBLE3NB
                            430 	.globl _AX5043_TMGRXPREAMBLE2NB
                            431 	.globl _AX5043_TMGRXPREAMBLE1NB
                            432 	.globl _AX5043_TMGRXOFFSACQNB
                            433 	.globl _AX5043_TMGRXCOARSEAGCNB
                            434 	.globl _AX5043_TMGRXBOOSTNB
                            435 	.globl _AX5043_TMGRXAGCNB
                            436 	.globl _AX5043_TIMER2NB
                            437 	.globl _AX5043_TIMER1NB
                            438 	.globl _AX5043_TIMER0NB
                            439 	.globl _AX5043_SILICONREVISIONNB
                            440 	.globl _AX5043_SCRATCHNB
                            441 	.globl _AX5043_RXDATARATE2NB
                            442 	.globl _AX5043_RXDATARATE1NB
                            443 	.globl _AX5043_RXDATARATE0NB
                            444 	.globl _AX5043_RSSIREFERENCENB
                            445 	.globl _AX5043_RSSIABSTHRNB
                            446 	.globl _AX5043_RSSINB
                            447 	.globl _AX5043_RADIOSTATENB
                            448 	.globl _AX5043_RADIOEVENTREQ1NB
                            449 	.globl _AX5043_RADIOEVENTREQ0NB
                            450 	.globl _AX5043_RADIOEVENTMASK1NB
                            451 	.globl _AX5043_RADIOEVENTMASK0NB
                            452 	.globl _AX5043_PWRMODENB
                            453 	.globl _AX5043_PWRAMPNB
                            454 	.globl _AX5043_POWSTICKYSTATNB
                            455 	.globl _AX5043_POWSTATNB
                            456 	.globl _AX5043_POWIRQMASKNB
                            457 	.globl _AX5043_PLLVCOIRNB
                            458 	.globl _AX5043_PLLVCOINB
                            459 	.globl _AX5043_PLLVCODIVNB
                            460 	.globl _AX5043_PLLRNGCLKNB
                            461 	.globl _AX5043_PLLRANGINGBNB
                            462 	.globl _AX5043_PLLRANGINGANB
                            463 	.globl _AX5043_PLLLOOPBOOSTNB
                            464 	.globl _AX5043_PLLLOOPNB
                            465 	.globl _AX5043_PLLLOCKDETNB
                            466 	.globl _AX5043_PLLCPIBOOSTNB
                            467 	.globl _AX5043_PLLCPINB
                            468 	.globl _AX5043_PKTSTOREFLAGSNB
                            469 	.globl _AX5043_PKTMISCFLAGSNB
                            470 	.globl _AX5043_PKTCHUNKSIZENB
                            471 	.globl _AX5043_PKTACCEPTFLAGSNB
                            472 	.globl _AX5043_PINSTATENB
                            473 	.globl _AX5043_PINFUNCSYSCLKNB
                            474 	.globl _AX5043_PINFUNCPWRAMPNB
                            475 	.globl _AX5043_PINFUNCIRQNB
                            476 	.globl _AX5043_PINFUNCDCLKNB
                            477 	.globl _AX5043_PINFUNCDATANB
                            478 	.globl _AX5043_PINFUNCANTSELNB
                            479 	.globl _AX5043_MODULATIONNB
                            480 	.globl _AX5043_MODCFGFNB
                            481 	.globl _AX5043_MODCFGANB
                            482 	.globl _AX5043_MAXRFOFFSET2NB
                            483 	.globl _AX5043_MAXRFOFFSET1NB
                            484 	.globl _AX5043_MAXRFOFFSET0NB
                            485 	.globl _AX5043_MAXDROFFSET2NB
                            486 	.globl _AX5043_MAXDROFFSET1NB
                            487 	.globl _AX5043_MAXDROFFSET0NB
                            488 	.globl _AX5043_MATCH1PAT1NB
                            489 	.globl _AX5043_MATCH1PAT0NB
                            490 	.globl _AX5043_MATCH1MINNB
                            491 	.globl _AX5043_MATCH1MAXNB
                            492 	.globl _AX5043_MATCH1LENNB
                            493 	.globl _AX5043_MATCH0PAT3NB
                            494 	.globl _AX5043_MATCH0PAT2NB
                            495 	.globl _AX5043_MATCH0PAT1NB
                            496 	.globl _AX5043_MATCH0PAT0NB
                            497 	.globl _AX5043_MATCH0MINNB
                            498 	.globl _AX5043_MATCH0MAXNB
                            499 	.globl _AX5043_MATCH0LENNB
                            500 	.globl _AX5043_LPOSCSTATUSNB
                            501 	.globl _AX5043_LPOSCREF1NB
                            502 	.globl _AX5043_LPOSCREF0NB
                            503 	.globl _AX5043_LPOSCPER1NB
                            504 	.globl _AX5043_LPOSCPER0NB
                            505 	.globl _AX5043_LPOSCKFILT1NB
                            506 	.globl _AX5043_LPOSCKFILT0NB
                            507 	.globl _AX5043_LPOSCFREQ1NB
                            508 	.globl _AX5043_LPOSCFREQ0NB
                            509 	.globl _AX5043_LPOSCCONFIGNB
                            510 	.globl _AX5043_IRQREQUEST1NB
                            511 	.globl _AX5043_IRQREQUEST0NB
                            512 	.globl _AX5043_IRQMASK1NB
                            513 	.globl _AX5043_IRQMASK0NB
                            514 	.globl _AX5043_IRQINVERSION1NB
                            515 	.globl _AX5043_IRQINVERSION0NB
                            516 	.globl _AX5043_IFFREQ1NB
                            517 	.globl _AX5043_IFFREQ0NB
                            518 	.globl _AX5043_GPADCPERIODNB
                            519 	.globl _AX5043_GPADCCTRLNB
                            520 	.globl _AX5043_GPADC13VALUE1NB
                            521 	.globl _AX5043_GPADC13VALUE0NB
                            522 	.globl _AX5043_FSKDMIN1NB
                            523 	.globl _AX5043_FSKDMIN0NB
                            524 	.globl _AX5043_FSKDMAX1NB
                            525 	.globl _AX5043_FSKDMAX0NB
                            526 	.globl _AX5043_FSKDEV2NB
                            527 	.globl _AX5043_FSKDEV1NB
                            528 	.globl _AX5043_FSKDEV0NB
                            529 	.globl _AX5043_FREQB3NB
                            530 	.globl _AX5043_FREQB2NB
                            531 	.globl _AX5043_FREQB1NB
                            532 	.globl _AX5043_FREQB0NB
                            533 	.globl _AX5043_FREQA3NB
                            534 	.globl _AX5043_FREQA2NB
                            535 	.globl _AX5043_FREQA1NB
                            536 	.globl _AX5043_FREQA0NB
                            537 	.globl _AX5043_FRAMINGNB
                            538 	.globl _AX5043_FIFOTHRESH1NB
                            539 	.globl _AX5043_FIFOTHRESH0NB
                            540 	.globl _AX5043_FIFOSTATNB
                            541 	.globl _AX5043_FIFOFREE1NB
                            542 	.globl _AX5043_FIFOFREE0NB
                            543 	.globl _AX5043_FIFODATANB
                            544 	.globl _AX5043_FIFOCOUNT1NB
                            545 	.globl _AX5043_FIFOCOUNT0NB
                            546 	.globl _AX5043_FECSYNCNB
                            547 	.globl _AX5043_FECSTATUSNB
                            548 	.globl _AX5043_FECNB
                            549 	.globl _AX5043_ENCODINGNB
                            550 	.globl _AX5043_DIVERSITYNB
                            551 	.globl _AX5043_DECIMATIONNB
                            552 	.globl _AX5043_DACVALUE1NB
                            553 	.globl _AX5043_DACVALUE0NB
                            554 	.globl _AX5043_DACCONFIGNB
                            555 	.globl _AX5043_CRCINIT3NB
                            556 	.globl _AX5043_CRCINIT2NB
                            557 	.globl _AX5043_CRCINIT1NB
                            558 	.globl _AX5043_CRCINIT0NB
                            559 	.globl _AX5043_BGNDRSSITHRNB
                            560 	.globl _AX5043_BGNDRSSIGAINNB
                            561 	.globl _AX5043_BGNDRSSINB
                            562 	.globl _AX5043_BBTUNENB
                            563 	.globl _AX5043_BBOFFSCAPNB
                            564 	.globl _AX5043_AMPLFILTERNB
                            565 	.globl _AX5043_AGCCOUNTERNB
                            566 	.globl _AX5043_AFSKSPACE1NB
                            567 	.globl _AX5043_AFSKSPACE0NB
                            568 	.globl _AX5043_AFSKMARK1NB
                            569 	.globl _AX5043_AFSKMARK0NB
                            570 	.globl _AX5043_AFSKCTRLNB
                            571 	.globl _AX5043_TIMEGAIN3
                            572 	.globl _AX5043_TIMEGAIN2
                            573 	.globl _AX5043_TIMEGAIN1
                            574 	.globl _AX5043_TIMEGAIN0
                            575 	.globl _AX5043_RXPARAMSETS
                            576 	.globl _AX5043_RXPARAMCURSET
                            577 	.globl _AX5043_PKTMAXLEN
                            578 	.globl _AX5043_PKTLENOFFSET
                            579 	.globl _AX5043_PKTLENCFG
                            580 	.globl _AX5043_PKTADDRMASK3
                            581 	.globl _AX5043_PKTADDRMASK2
                            582 	.globl _AX5043_PKTADDRMASK1
                            583 	.globl _AX5043_PKTADDRMASK0
                            584 	.globl _AX5043_PKTADDRCFG
                            585 	.globl _AX5043_PKTADDR3
                            586 	.globl _AX5043_PKTADDR2
                            587 	.globl _AX5043_PKTADDR1
                            588 	.globl _AX5043_PKTADDR0
                            589 	.globl _AX5043_PHASEGAIN3
                            590 	.globl _AX5043_PHASEGAIN2
                            591 	.globl _AX5043_PHASEGAIN1
                            592 	.globl _AX5043_PHASEGAIN0
                            593 	.globl _AX5043_FREQUENCYLEAK
                            594 	.globl _AX5043_FREQUENCYGAIND3
                            595 	.globl _AX5043_FREQUENCYGAIND2
                            596 	.globl _AX5043_FREQUENCYGAIND1
                            597 	.globl _AX5043_FREQUENCYGAIND0
                            598 	.globl _AX5043_FREQUENCYGAINC3
                            599 	.globl _AX5043_FREQUENCYGAINC2
                            600 	.globl _AX5043_FREQUENCYGAINC1
                            601 	.globl _AX5043_FREQUENCYGAINC0
                            602 	.globl _AX5043_FREQUENCYGAINB3
                            603 	.globl _AX5043_FREQUENCYGAINB2
                            604 	.globl _AX5043_FREQUENCYGAINB1
                            605 	.globl _AX5043_FREQUENCYGAINB0
                            606 	.globl _AX5043_FREQUENCYGAINA3
                            607 	.globl _AX5043_FREQUENCYGAINA2
                            608 	.globl _AX5043_FREQUENCYGAINA1
                            609 	.globl _AX5043_FREQUENCYGAINA0
                            610 	.globl _AX5043_FREQDEV13
                            611 	.globl _AX5043_FREQDEV12
                            612 	.globl _AX5043_FREQDEV11
                            613 	.globl _AX5043_FREQDEV10
                            614 	.globl _AX5043_FREQDEV03
                            615 	.globl _AX5043_FREQDEV02
                            616 	.globl _AX5043_FREQDEV01
                            617 	.globl _AX5043_FREQDEV00
                            618 	.globl _AX5043_FOURFSK3
                            619 	.globl _AX5043_FOURFSK2
                            620 	.globl _AX5043_FOURFSK1
                            621 	.globl _AX5043_FOURFSK0
                            622 	.globl _AX5043_DRGAIN3
                            623 	.globl _AX5043_DRGAIN2
                            624 	.globl _AX5043_DRGAIN1
                            625 	.globl _AX5043_DRGAIN0
                            626 	.globl _AX5043_BBOFFSRES3
                            627 	.globl _AX5043_BBOFFSRES2
                            628 	.globl _AX5043_BBOFFSRES1
                            629 	.globl _AX5043_BBOFFSRES0
                            630 	.globl _AX5043_AMPLITUDEGAIN3
                            631 	.globl _AX5043_AMPLITUDEGAIN2
                            632 	.globl _AX5043_AMPLITUDEGAIN1
                            633 	.globl _AX5043_AMPLITUDEGAIN0
                            634 	.globl _AX5043_AGCTARGET3
                            635 	.globl _AX5043_AGCTARGET2
                            636 	.globl _AX5043_AGCTARGET1
                            637 	.globl _AX5043_AGCTARGET0
                            638 	.globl _AX5043_AGCMINMAX3
                            639 	.globl _AX5043_AGCMINMAX2
                            640 	.globl _AX5043_AGCMINMAX1
                            641 	.globl _AX5043_AGCMINMAX0
                            642 	.globl _AX5043_AGCGAIN3
                            643 	.globl _AX5043_AGCGAIN2
                            644 	.globl _AX5043_AGCGAIN1
                            645 	.globl _AX5043_AGCGAIN0
                            646 	.globl _AX5043_AGCAHYST3
                            647 	.globl _AX5043_AGCAHYST2
                            648 	.globl _AX5043_AGCAHYST1
                            649 	.globl _AX5043_AGCAHYST0
                            650 	.globl _AX5043_XTALSTATUS
                            651 	.globl _AX5043_XTALCAP
                            652 	.globl _AX5043_WAKEUPXOEARLY
                            653 	.globl _AX5043_WAKEUPTIMER1
                            654 	.globl _AX5043_WAKEUPTIMER0
                            655 	.globl _AX5043_WAKEUPFREQ1
                            656 	.globl _AX5043_WAKEUPFREQ0
                            657 	.globl _AX5043_WAKEUP1
                            658 	.globl _AX5043_WAKEUP0
                            659 	.globl _AX5043_TXRATE2
                            660 	.globl _AX5043_TXRATE1
                            661 	.globl _AX5043_TXRATE0
                            662 	.globl _AX5043_TXPWRCOEFFE1
                            663 	.globl _AX5043_TXPWRCOEFFE0
                            664 	.globl _AX5043_TXPWRCOEFFD1
                            665 	.globl _AX5043_TXPWRCOEFFD0
                            666 	.globl _AX5043_TXPWRCOEFFC1
                            667 	.globl _AX5043_TXPWRCOEFFC0
                            668 	.globl _AX5043_TXPWRCOEFFB1
                            669 	.globl _AX5043_TXPWRCOEFFB0
                            670 	.globl _AX5043_TXPWRCOEFFA1
                            671 	.globl _AX5043_TXPWRCOEFFA0
                            672 	.globl _AX5043_TRKRFFREQ2
                            673 	.globl _AX5043_TRKRFFREQ1
                            674 	.globl _AX5043_TRKRFFREQ0
                            675 	.globl _AX5043_TRKPHASE1
                            676 	.globl _AX5043_TRKPHASE0
                            677 	.globl _AX5043_TRKFSKDEMOD1
                            678 	.globl _AX5043_TRKFSKDEMOD0
                            679 	.globl _AX5043_TRKFREQ1
                            680 	.globl _AX5043_TRKFREQ0
                            681 	.globl _AX5043_TRKDATARATE2
                            682 	.globl _AX5043_TRKDATARATE1
                            683 	.globl _AX5043_TRKDATARATE0
                            684 	.globl _AX5043_TRKAMPLITUDE1
                            685 	.globl _AX5043_TRKAMPLITUDE0
                            686 	.globl _AX5043_TRKAFSKDEMOD1
                            687 	.globl _AX5043_TRKAFSKDEMOD0
                            688 	.globl _AX5043_TMGTXSETTLE
                            689 	.globl _AX5043_TMGTXBOOST
                            690 	.globl _AX5043_TMGRXSETTLE
                            691 	.globl _AX5043_TMGRXRSSI
                            692 	.globl _AX5043_TMGRXPREAMBLE3
                            693 	.globl _AX5043_TMGRXPREAMBLE2
                            694 	.globl _AX5043_TMGRXPREAMBLE1
                            695 	.globl _AX5043_TMGRXOFFSACQ
                            696 	.globl _AX5043_TMGRXCOARSEAGC
                            697 	.globl _AX5043_TMGRXBOOST
                            698 	.globl _AX5043_TMGRXAGC
                            699 	.globl _AX5043_TIMER2
                            700 	.globl _AX5043_TIMER1
                            701 	.globl _AX5043_TIMER0
                            702 	.globl _AX5043_SILICONREVISION
                            703 	.globl _AX5043_SCRATCH
                            704 	.globl _AX5043_RXDATARATE2
                            705 	.globl _AX5043_RXDATARATE1
                            706 	.globl _AX5043_RXDATARATE0
                            707 	.globl _AX5043_RSSIREFERENCE
                            708 	.globl _AX5043_RSSIABSTHR
                            709 	.globl _AX5043_RSSI
                            710 	.globl _AX5043_RADIOSTATE
                            711 	.globl _AX5043_RADIOEVENTREQ1
                            712 	.globl _AX5043_RADIOEVENTREQ0
                            713 	.globl _AX5043_RADIOEVENTMASK1
                            714 	.globl _AX5043_RADIOEVENTMASK0
                            715 	.globl _AX5043_PWRMODE
                            716 	.globl _AX5043_PWRAMP
                            717 	.globl _AX5043_POWSTICKYSTAT
                            718 	.globl _AX5043_POWSTAT
                            719 	.globl _AX5043_POWIRQMASK
                            720 	.globl _AX5043_PLLVCOIR
                            721 	.globl _AX5043_PLLVCOI
                            722 	.globl _AX5043_PLLVCODIV
                            723 	.globl _AX5043_PLLRNGCLK
                            724 	.globl _AX5043_PLLRANGINGB
                            725 	.globl _AX5043_PLLRANGINGA
                            726 	.globl _AX5043_PLLLOOPBOOST
                            727 	.globl _AX5043_PLLLOOP
                            728 	.globl _AX5043_PLLLOCKDET
                            729 	.globl _AX5043_PLLCPIBOOST
                            730 	.globl _AX5043_PLLCPI
                            731 	.globl _AX5043_PKTSTOREFLAGS
                            732 	.globl _AX5043_PKTMISCFLAGS
                            733 	.globl _AX5043_PKTCHUNKSIZE
                            734 	.globl _AX5043_PKTACCEPTFLAGS
                            735 	.globl _AX5043_PINSTATE
                            736 	.globl _AX5043_PINFUNCSYSCLK
                            737 	.globl _AX5043_PINFUNCPWRAMP
                            738 	.globl _AX5043_PINFUNCIRQ
                            739 	.globl _AX5043_PINFUNCDCLK
                            740 	.globl _AX5043_PINFUNCDATA
                            741 	.globl _AX5043_PINFUNCANTSEL
                            742 	.globl _AX5043_MODULATION
                            743 	.globl _AX5043_MODCFGF
                            744 	.globl _AX5043_MODCFGA
                            745 	.globl _AX5043_MAXRFOFFSET2
                            746 	.globl _AX5043_MAXRFOFFSET1
                            747 	.globl _AX5043_MAXRFOFFSET0
                            748 	.globl _AX5043_MAXDROFFSET2
                            749 	.globl _AX5043_MAXDROFFSET1
                            750 	.globl _AX5043_MAXDROFFSET0
                            751 	.globl _AX5043_MATCH1PAT1
                            752 	.globl _AX5043_MATCH1PAT0
                            753 	.globl _AX5043_MATCH1MIN
                            754 	.globl _AX5043_MATCH1MAX
                            755 	.globl _AX5043_MATCH1LEN
                            756 	.globl _AX5043_MATCH0PAT3
                            757 	.globl _AX5043_MATCH0PAT2
                            758 	.globl _AX5043_MATCH0PAT1
                            759 	.globl _AX5043_MATCH0PAT0
                            760 	.globl _AX5043_MATCH0MIN
                            761 	.globl _AX5043_MATCH0MAX
                            762 	.globl _AX5043_MATCH0LEN
                            763 	.globl _AX5043_LPOSCSTATUS
                            764 	.globl _AX5043_LPOSCREF1
                            765 	.globl _AX5043_LPOSCREF0
                            766 	.globl _AX5043_LPOSCPER1
                            767 	.globl _AX5043_LPOSCPER0
                            768 	.globl _AX5043_LPOSCKFILT1
                            769 	.globl _AX5043_LPOSCKFILT0
                            770 	.globl _AX5043_LPOSCFREQ1
                            771 	.globl _AX5043_LPOSCFREQ0
                            772 	.globl _AX5043_LPOSCCONFIG
                            773 	.globl _AX5043_IRQREQUEST1
                            774 	.globl _AX5043_IRQREQUEST0
                            775 	.globl _AX5043_IRQMASK1
                            776 	.globl _AX5043_IRQMASK0
                            777 	.globl _AX5043_IRQINVERSION1
                            778 	.globl _AX5043_IRQINVERSION0
                            779 	.globl _AX5043_IFFREQ1
                            780 	.globl _AX5043_IFFREQ0
                            781 	.globl _AX5043_GPADCPERIOD
                            782 	.globl _AX5043_GPADCCTRL
                            783 	.globl _AX5043_GPADC13VALUE1
                            784 	.globl _AX5043_GPADC13VALUE0
                            785 	.globl _AX5043_FSKDMIN1
                            786 	.globl _AX5043_FSKDMIN0
                            787 	.globl _AX5043_FSKDMAX1
                            788 	.globl _AX5043_FSKDMAX0
                            789 	.globl _AX5043_FSKDEV2
                            790 	.globl _AX5043_FSKDEV1
                            791 	.globl _AX5043_FSKDEV0
                            792 	.globl _AX5043_FREQB3
                            793 	.globl _AX5043_FREQB2
                            794 	.globl _AX5043_FREQB1
                            795 	.globl _AX5043_FREQB0
                            796 	.globl _AX5043_FREQA3
                            797 	.globl _AX5043_FREQA2
                            798 	.globl _AX5043_FREQA1
                            799 	.globl _AX5043_FREQA0
                            800 	.globl _AX5043_FRAMING
                            801 	.globl _AX5043_FIFOTHRESH1
                            802 	.globl _AX5043_FIFOTHRESH0
                            803 	.globl _AX5043_FIFOSTAT
                            804 	.globl _AX5043_FIFOFREE1
                            805 	.globl _AX5043_FIFOFREE0
                            806 	.globl _AX5043_FIFODATA
                            807 	.globl _AX5043_FIFOCOUNT1
                            808 	.globl _AX5043_FIFOCOUNT0
                            809 	.globl _AX5043_FECSYNC
                            810 	.globl _AX5043_FECSTATUS
                            811 	.globl _AX5043_FEC
                            812 	.globl _AX5043_ENCODING
                            813 	.globl _AX5043_DIVERSITY
                            814 	.globl _AX5043_DECIMATION
                            815 	.globl _AX5043_DACVALUE1
                            816 	.globl _AX5043_DACVALUE0
                            817 	.globl _AX5043_DACCONFIG
                            818 	.globl _AX5043_CRCINIT3
                            819 	.globl _AX5043_CRCINIT2
                            820 	.globl _AX5043_CRCINIT1
                            821 	.globl _AX5043_CRCINIT0
                            822 	.globl _AX5043_BGNDRSSITHR
                            823 	.globl _AX5043_BGNDRSSIGAIN
                            824 	.globl _AX5043_BGNDRSSI
                            825 	.globl _AX5043_BBTUNE
                            826 	.globl _AX5043_BBOFFSCAP
                            827 	.globl _AX5043_AMPLFILTER
                            828 	.globl _AX5043_AGCCOUNTER
                            829 	.globl _AX5043_AFSKSPACE1
                            830 	.globl _AX5043_AFSKSPACE0
                            831 	.globl _AX5043_AFSKMARK1
                            832 	.globl _AX5043_AFSKMARK0
                            833 	.globl _AX5043_AFSKCTRL
                            834 	.globl _XWTSTAT
                            835 	.globl _XWTIRQEN
                            836 	.globl _XWTEVTD
                            837 	.globl _XWTEVTD1
                            838 	.globl _XWTEVTD0
                            839 	.globl _XWTEVTC
                            840 	.globl _XWTEVTC1
                            841 	.globl _XWTEVTC0
                            842 	.globl _XWTEVTB
                            843 	.globl _XWTEVTB1
                            844 	.globl _XWTEVTB0
                            845 	.globl _XWTEVTA
                            846 	.globl _XWTEVTA1
                            847 	.globl _XWTEVTA0
                            848 	.globl _XWTCNTR1
                            849 	.globl _XWTCNTB
                            850 	.globl _XWTCNTB1
                            851 	.globl _XWTCNTB0
                            852 	.globl _XWTCNTA
                            853 	.globl _XWTCNTA1
                            854 	.globl _XWTCNTA0
                            855 	.globl _XWTCFGB
                            856 	.globl _XWTCFGA
                            857 	.globl _XWDTRESET
                            858 	.globl _XWDTCFG
                            859 	.globl _XU1STATUS
                            860 	.globl _XU1SHREG
                            861 	.globl _XU1MODE
                            862 	.globl _XU1CTRL
                            863 	.globl _XU0STATUS
                            864 	.globl _XU0SHREG
                            865 	.globl _XU0MODE
                            866 	.globl _XU0CTRL
                            867 	.globl _XT2STATUS
                            868 	.globl _XT2PERIOD
                            869 	.globl _XT2PERIOD1
                            870 	.globl _XT2PERIOD0
                            871 	.globl _XT2MODE
                            872 	.globl _XT2CNT
                            873 	.globl _XT2CNT1
                            874 	.globl _XT2CNT0
                            875 	.globl _XT2CLKSRC
                            876 	.globl _XT1STATUS
                            877 	.globl _XT1PERIOD
                            878 	.globl _XT1PERIOD1
                            879 	.globl _XT1PERIOD0
                            880 	.globl _XT1MODE
                            881 	.globl _XT1CNT
                            882 	.globl _XT1CNT1
                            883 	.globl _XT1CNT0
                            884 	.globl _XT1CLKSRC
                            885 	.globl _XT0STATUS
                            886 	.globl _XT0PERIOD
                            887 	.globl _XT0PERIOD1
                            888 	.globl _XT0PERIOD0
                            889 	.globl _XT0MODE
                            890 	.globl _XT0CNT
                            891 	.globl _XT0CNT1
                            892 	.globl _XT0CNT0
                            893 	.globl _XT0CLKSRC
                            894 	.globl _XSPSTATUS
                            895 	.globl _XSPSHREG
                            896 	.globl _XSPMODE
                            897 	.globl _XSPCLKSRC
                            898 	.globl _XRADIOSTAT
                            899 	.globl _XRADIOSTAT1
                            900 	.globl _XRADIOSTAT0
                            901 	.globl _XRADIODATA3
                            902 	.globl _XRADIODATA2
                            903 	.globl _XRADIODATA1
                            904 	.globl _XRADIODATA0
                            905 	.globl _XRADIOADDR1
                            906 	.globl _XRADIOADDR0
                            907 	.globl _XRADIOACC
                            908 	.globl _XOC1STATUS
                            909 	.globl _XOC1PIN
                            910 	.globl _XOC1MODE
                            911 	.globl _XOC1COMP
                            912 	.globl _XOC1COMP1
                            913 	.globl _XOC1COMP0
                            914 	.globl _XOC0STATUS
                            915 	.globl _XOC0PIN
                            916 	.globl _XOC0MODE
                            917 	.globl _XOC0COMP
                            918 	.globl _XOC0COMP1
                            919 	.globl _XOC0COMP0
                            920 	.globl _XNVSTATUS
                            921 	.globl _XNVKEY
                            922 	.globl _XNVDATA
                            923 	.globl _XNVDATA1
                            924 	.globl _XNVDATA0
                            925 	.globl _XNVADDR
                            926 	.globl _XNVADDR1
                            927 	.globl _XNVADDR0
                            928 	.globl _XIC1STATUS
                            929 	.globl _XIC1MODE
                            930 	.globl _XIC1CAPT
                            931 	.globl _XIC1CAPT1
                            932 	.globl _XIC1CAPT0
                            933 	.globl _XIC0STATUS
                            934 	.globl _XIC0MODE
                            935 	.globl _XIC0CAPT
                            936 	.globl _XIC0CAPT1
                            937 	.globl _XIC0CAPT0
                            938 	.globl _XPORTR
                            939 	.globl _XPORTC
                            940 	.globl _XPORTB
                            941 	.globl _XPORTA
                            942 	.globl _XPINR
                            943 	.globl _XPINC
                            944 	.globl _XPINB
                            945 	.globl _XPINA
                            946 	.globl _XDIRR
                            947 	.globl _XDIRC
                            948 	.globl _XDIRB
                            949 	.globl _XDIRA
                            950 	.globl _XDBGLNKSTAT
                            951 	.globl _XDBGLNKBUF
                            952 	.globl _XCODECONFIG
                            953 	.globl _XCLKSTAT
                            954 	.globl _XCLKCON
                            955 	.globl _XANALOGCOMP
                            956 	.globl _XADCCONV
                            957 	.globl _XADCCLKSRC
                            958 	.globl _XADCCH3CONFIG
                            959 	.globl _XADCCH2CONFIG
                            960 	.globl _XADCCH1CONFIG
                            961 	.globl _XADCCH0CONFIG
                            962 	.globl _XPCON
                            963 	.globl _XIP
                            964 	.globl _XIE
                            965 	.globl _XDPTR1
                            966 	.globl _XDPTR0
                            967 	.globl _XTALREADY
                            968 	.globl _XTALOSC
                            969 	.globl _XTALAMPL
                            970 	.globl _SILICONREV
                            971 	.globl _SCRATCH3
                            972 	.globl _SCRATCH2
                            973 	.globl _SCRATCH1
                            974 	.globl _SCRATCH0
                            975 	.globl _RADIOMUX
                            976 	.globl _RADIOFSTATADDR
                            977 	.globl _RADIOFSTATADDR1
                            978 	.globl _RADIOFSTATADDR0
                            979 	.globl _RADIOFDATAADDR
                            980 	.globl _RADIOFDATAADDR1
                            981 	.globl _RADIOFDATAADDR0
                            982 	.globl _OSCRUN
                            983 	.globl _OSCREADY
                            984 	.globl _OSCFORCERUN
                            985 	.globl _OSCCALIB
                            986 	.globl _MISCCTRL
                            987 	.globl _LPXOSCGM
                            988 	.globl _LPOSCREF
                            989 	.globl _LPOSCREF1
                            990 	.globl _LPOSCREF0
                            991 	.globl _LPOSCPER
                            992 	.globl _LPOSCPER1
                            993 	.globl _LPOSCPER0
                            994 	.globl _LPOSCKFILT
                            995 	.globl _LPOSCKFILT1
                            996 	.globl _LPOSCKFILT0
                            997 	.globl _LPOSCFREQ
                            998 	.globl _LPOSCFREQ1
                            999 	.globl _LPOSCFREQ0
                           1000 	.globl _LPOSCCONFIG
                           1001 	.globl _PINSEL
                           1002 	.globl _PINCHGC
                           1003 	.globl _PINCHGB
                           1004 	.globl _PINCHGA
                           1005 	.globl _PALTRADIO
                           1006 	.globl _PALTC
                           1007 	.globl _PALTB
                           1008 	.globl _PALTA
                           1009 	.globl _INTCHGC
                           1010 	.globl _INTCHGB
                           1011 	.globl _INTCHGA
                           1012 	.globl _EXTIRQ
                           1013 	.globl _GPIOENABLE
                           1014 	.globl _ANALOGA
                           1015 	.globl _FRCOSCREF
                           1016 	.globl _FRCOSCREF1
                           1017 	.globl _FRCOSCREF0
                           1018 	.globl _FRCOSCPER
                           1019 	.globl _FRCOSCPER1
                           1020 	.globl _FRCOSCPER0
                           1021 	.globl _FRCOSCKFILT
                           1022 	.globl _FRCOSCKFILT1
                           1023 	.globl _FRCOSCKFILT0
                           1024 	.globl _FRCOSCFREQ
                           1025 	.globl _FRCOSCFREQ1
                           1026 	.globl _FRCOSCFREQ0
                           1027 	.globl _FRCOSCCTRL
                           1028 	.globl _FRCOSCCONFIG
                           1029 	.globl _DMA1CONFIG
                           1030 	.globl _DMA1ADDR
                           1031 	.globl _DMA1ADDR1
                           1032 	.globl _DMA1ADDR0
                           1033 	.globl _DMA0CONFIG
                           1034 	.globl _DMA0ADDR
                           1035 	.globl _DMA0ADDR1
                           1036 	.globl _DMA0ADDR0
                           1037 	.globl _ADCTUNE2
                           1038 	.globl _ADCTUNE1
                           1039 	.globl _ADCTUNE0
                           1040 	.globl _ADCCH3VAL
                           1041 	.globl _ADCCH3VAL1
                           1042 	.globl _ADCCH3VAL0
                           1043 	.globl _ADCCH2VAL
                           1044 	.globl _ADCCH2VAL1
                           1045 	.globl _ADCCH2VAL0
                           1046 	.globl _ADCCH1VAL
                           1047 	.globl _ADCCH1VAL1
                           1048 	.globl _ADCCH1VAL0
                           1049 	.globl _ADCCH0VAL
                           1050 	.globl _ADCCH0VAL1
                           1051 	.globl _ADCCH0VAL0
                           1052 	.globl _coldstart
                           1053 	.globl _axradio_statuschange
                           1054 ;--------------------------------------------------------
                           1055 ; special function registers
                           1056 ;--------------------------------------------------------
                           1057 	.area RSEG    (ABS,DATA)
   0000                    1058 	.org 0x0000
                     00E0  1059 G$ACC$0$0 == 0x00e0
                     00E0  1060 _ACC	=	0x00e0
                     00F0  1061 G$B$0$0 == 0x00f0
                     00F0  1062 _B	=	0x00f0
                     0083  1063 G$DPH$0$0 == 0x0083
                     0083  1064 _DPH	=	0x0083
                     0085  1065 G$DPH1$0$0 == 0x0085
                     0085  1066 _DPH1	=	0x0085
                     0082  1067 G$DPL$0$0 == 0x0082
                     0082  1068 _DPL	=	0x0082
                     0084  1069 G$DPL1$0$0 == 0x0084
                     0084  1070 _DPL1	=	0x0084
                     8382  1071 G$DPTR0$0$0 == 0x8382
                     8382  1072 _DPTR0	=	0x8382
                     8584  1073 G$DPTR1$0$0 == 0x8584
                     8584  1074 _DPTR1	=	0x8584
                     0086  1075 G$DPS$0$0 == 0x0086
                     0086  1076 _DPS	=	0x0086
                     00A0  1077 G$E2IE$0$0 == 0x00a0
                     00A0  1078 _E2IE	=	0x00a0
                     00C0  1079 G$E2IP$0$0 == 0x00c0
                     00C0  1080 _E2IP	=	0x00c0
                     0098  1081 G$EIE$0$0 == 0x0098
                     0098  1082 _EIE	=	0x0098
                     00B0  1083 G$EIP$0$0 == 0x00b0
                     00B0  1084 _EIP	=	0x00b0
                     00A8  1085 G$IE$0$0 == 0x00a8
                     00A8  1086 _IE	=	0x00a8
                     00B8  1087 G$IP$0$0 == 0x00b8
                     00B8  1088 _IP	=	0x00b8
                     0087  1089 G$PCON$0$0 == 0x0087
                     0087  1090 _PCON	=	0x0087
                     00D0  1091 G$PSW$0$0 == 0x00d0
                     00D0  1092 _PSW	=	0x00d0
                     0081  1093 G$SP$0$0 == 0x0081
                     0081  1094 _SP	=	0x0081
                     00D9  1095 G$XPAGE$0$0 == 0x00d9
                     00D9  1096 _XPAGE	=	0x00d9
                     00D9  1097 G$_XPAGE$0$0 == 0x00d9
                     00D9  1098 __XPAGE	=	0x00d9
                     00CA  1099 G$ADCCH0CONFIG$0$0 == 0x00ca
                     00CA  1100 _ADCCH0CONFIG	=	0x00ca
                     00CB  1101 G$ADCCH1CONFIG$0$0 == 0x00cb
                     00CB  1102 _ADCCH1CONFIG	=	0x00cb
                     00D2  1103 G$ADCCH2CONFIG$0$0 == 0x00d2
                     00D2  1104 _ADCCH2CONFIG	=	0x00d2
                     00D3  1105 G$ADCCH3CONFIG$0$0 == 0x00d3
                     00D3  1106 _ADCCH3CONFIG	=	0x00d3
                     00D1  1107 G$ADCCLKSRC$0$0 == 0x00d1
                     00D1  1108 _ADCCLKSRC	=	0x00d1
                     00C9  1109 G$ADCCONV$0$0 == 0x00c9
                     00C9  1110 _ADCCONV	=	0x00c9
                     00E1  1111 G$ANALOGCOMP$0$0 == 0x00e1
                     00E1  1112 _ANALOGCOMP	=	0x00e1
                     00C6  1113 G$CLKCON$0$0 == 0x00c6
                     00C6  1114 _CLKCON	=	0x00c6
                     00C7  1115 G$CLKSTAT$0$0 == 0x00c7
                     00C7  1116 _CLKSTAT	=	0x00c7
                     0097  1117 G$CODECONFIG$0$0 == 0x0097
                     0097  1118 _CODECONFIG	=	0x0097
                     00E3  1119 G$DBGLNKBUF$0$0 == 0x00e3
                     00E3  1120 _DBGLNKBUF	=	0x00e3
                     00E2  1121 G$DBGLNKSTAT$0$0 == 0x00e2
                     00E2  1122 _DBGLNKSTAT	=	0x00e2
                     0089  1123 G$DIRA$0$0 == 0x0089
                     0089  1124 _DIRA	=	0x0089
                     008A  1125 G$DIRB$0$0 == 0x008a
                     008A  1126 _DIRB	=	0x008a
                     008B  1127 G$DIRC$0$0 == 0x008b
                     008B  1128 _DIRC	=	0x008b
                     008E  1129 G$DIRR$0$0 == 0x008e
                     008E  1130 _DIRR	=	0x008e
                     00C8  1131 G$PINA$0$0 == 0x00c8
                     00C8  1132 _PINA	=	0x00c8
                     00E8  1133 G$PINB$0$0 == 0x00e8
                     00E8  1134 _PINB	=	0x00e8
                     00F8  1135 G$PINC$0$0 == 0x00f8
                     00F8  1136 _PINC	=	0x00f8
                     008D  1137 G$PINR$0$0 == 0x008d
                     008D  1138 _PINR	=	0x008d
                     0080  1139 G$PORTA$0$0 == 0x0080
                     0080  1140 _PORTA	=	0x0080
                     0088  1141 G$PORTB$0$0 == 0x0088
                     0088  1142 _PORTB	=	0x0088
                     0090  1143 G$PORTC$0$0 == 0x0090
                     0090  1144 _PORTC	=	0x0090
                     008C  1145 G$PORTR$0$0 == 0x008c
                     008C  1146 _PORTR	=	0x008c
                     00CE  1147 G$IC0CAPT0$0$0 == 0x00ce
                     00CE  1148 _IC0CAPT0	=	0x00ce
                     00CF  1149 G$IC0CAPT1$0$0 == 0x00cf
                     00CF  1150 _IC0CAPT1	=	0x00cf
                     CFCE  1151 G$IC0CAPT$0$0 == 0xcfce
                     CFCE  1152 _IC0CAPT	=	0xcfce
                     00CC  1153 G$IC0MODE$0$0 == 0x00cc
                     00CC  1154 _IC0MODE	=	0x00cc
                     00CD  1155 G$IC0STATUS$0$0 == 0x00cd
                     00CD  1156 _IC0STATUS	=	0x00cd
                     00D6  1157 G$IC1CAPT0$0$0 == 0x00d6
                     00D6  1158 _IC1CAPT0	=	0x00d6
                     00D7  1159 G$IC1CAPT1$0$0 == 0x00d7
                     00D7  1160 _IC1CAPT1	=	0x00d7
                     D7D6  1161 G$IC1CAPT$0$0 == 0xd7d6
                     D7D6  1162 _IC1CAPT	=	0xd7d6
                     00D4  1163 G$IC1MODE$0$0 == 0x00d4
                     00D4  1164 _IC1MODE	=	0x00d4
                     00D5  1165 G$IC1STATUS$0$0 == 0x00d5
                     00D5  1166 _IC1STATUS	=	0x00d5
                     0092  1167 G$NVADDR0$0$0 == 0x0092
                     0092  1168 _NVADDR0	=	0x0092
                     0093  1169 G$NVADDR1$0$0 == 0x0093
                     0093  1170 _NVADDR1	=	0x0093
                     9392  1171 G$NVADDR$0$0 == 0x9392
                     9392  1172 _NVADDR	=	0x9392
                     0094  1173 G$NVDATA0$0$0 == 0x0094
                     0094  1174 _NVDATA0	=	0x0094
                     0095  1175 G$NVDATA1$0$0 == 0x0095
                     0095  1176 _NVDATA1	=	0x0095
                     9594  1177 G$NVDATA$0$0 == 0x9594
                     9594  1178 _NVDATA	=	0x9594
                     0096  1179 G$NVKEY$0$0 == 0x0096
                     0096  1180 _NVKEY	=	0x0096
                     0091  1181 G$NVSTATUS$0$0 == 0x0091
                     0091  1182 _NVSTATUS	=	0x0091
                     00BC  1183 G$OC0COMP0$0$0 == 0x00bc
                     00BC  1184 _OC0COMP0	=	0x00bc
                     00BD  1185 G$OC0COMP1$0$0 == 0x00bd
                     00BD  1186 _OC0COMP1	=	0x00bd
                     BDBC  1187 G$OC0COMP$0$0 == 0xbdbc
                     BDBC  1188 _OC0COMP	=	0xbdbc
                     00B9  1189 G$OC0MODE$0$0 == 0x00b9
                     00B9  1190 _OC0MODE	=	0x00b9
                     00BA  1191 G$OC0PIN$0$0 == 0x00ba
                     00BA  1192 _OC0PIN	=	0x00ba
                     00BB  1193 G$OC0STATUS$0$0 == 0x00bb
                     00BB  1194 _OC0STATUS	=	0x00bb
                     00C4  1195 G$OC1COMP0$0$0 == 0x00c4
                     00C4  1196 _OC1COMP0	=	0x00c4
                     00C5  1197 G$OC1COMP1$0$0 == 0x00c5
                     00C5  1198 _OC1COMP1	=	0x00c5
                     C5C4  1199 G$OC1COMP$0$0 == 0xc5c4
                     C5C4  1200 _OC1COMP	=	0xc5c4
                     00C1  1201 G$OC1MODE$0$0 == 0x00c1
                     00C1  1202 _OC1MODE	=	0x00c1
                     00C2  1203 G$OC1PIN$0$0 == 0x00c2
                     00C2  1204 _OC1PIN	=	0x00c2
                     00C3  1205 G$OC1STATUS$0$0 == 0x00c3
                     00C3  1206 _OC1STATUS	=	0x00c3
                     00B1  1207 G$RADIOACC$0$0 == 0x00b1
                     00B1  1208 _RADIOACC	=	0x00b1
                     00B3  1209 G$RADIOADDR0$0$0 == 0x00b3
                     00B3  1210 _RADIOADDR0	=	0x00b3
                     00B2  1211 G$RADIOADDR1$0$0 == 0x00b2
                     00B2  1212 _RADIOADDR1	=	0x00b2
                     B2B3  1213 G$RADIOADDR$0$0 == 0xb2b3
                     B2B3  1214 _RADIOADDR	=	0xb2b3
                     00B7  1215 G$RADIODATA0$0$0 == 0x00b7
                     00B7  1216 _RADIODATA0	=	0x00b7
                     00B6  1217 G$RADIODATA1$0$0 == 0x00b6
                     00B6  1218 _RADIODATA1	=	0x00b6
                     00B5  1219 G$RADIODATA2$0$0 == 0x00b5
                     00B5  1220 _RADIODATA2	=	0x00b5
                     00B4  1221 G$RADIODATA3$0$0 == 0x00b4
                     00B4  1222 _RADIODATA3	=	0x00b4
                     B4B5B6B7  1223 G$RADIODATA$0$0 == 0xb4b5b6b7
                     B4B5B6B7  1224 _RADIODATA	=	0xb4b5b6b7
                     00BE  1225 G$RADIOSTAT0$0$0 == 0x00be
                     00BE  1226 _RADIOSTAT0	=	0x00be
                     00BF  1227 G$RADIOSTAT1$0$0 == 0x00bf
                     00BF  1228 _RADIOSTAT1	=	0x00bf
                     BFBE  1229 G$RADIOSTAT$0$0 == 0xbfbe
                     BFBE  1230 _RADIOSTAT	=	0xbfbe
                     00DF  1231 G$SPCLKSRC$0$0 == 0x00df
                     00DF  1232 _SPCLKSRC	=	0x00df
                     00DC  1233 G$SPMODE$0$0 == 0x00dc
                     00DC  1234 _SPMODE	=	0x00dc
                     00DE  1235 G$SPSHREG$0$0 == 0x00de
                     00DE  1236 _SPSHREG	=	0x00de
                     00DD  1237 G$SPSTATUS$0$0 == 0x00dd
                     00DD  1238 _SPSTATUS	=	0x00dd
                     009A  1239 G$T0CLKSRC$0$0 == 0x009a
                     009A  1240 _T0CLKSRC	=	0x009a
                     009C  1241 G$T0CNT0$0$0 == 0x009c
                     009C  1242 _T0CNT0	=	0x009c
                     009D  1243 G$T0CNT1$0$0 == 0x009d
                     009D  1244 _T0CNT1	=	0x009d
                     9D9C  1245 G$T0CNT$0$0 == 0x9d9c
                     9D9C  1246 _T0CNT	=	0x9d9c
                     0099  1247 G$T0MODE$0$0 == 0x0099
                     0099  1248 _T0MODE	=	0x0099
                     009E  1249 G$T0PERIOD0$0$0 == 0x009e
                     009E  1250 _T0PERIOD0	=	0x009e
                     009F  1251 G$T0PERIOD1$0$0 == 0x009f
                     009F  1252 _T0PERIOD1	=	0x009f
                     9F9E  1253 G$T0PERIOD$0$0 == 0x9f9e
                     9F9E  1254 _T0PERIOD	=	0x9f9e
                     009B  1255 G$T0STATUS$0$0 == 0x009b
                     009B  1256 _T0STATUS	=	0x009b
                     00A2  1257 G$T1CLKSRC$0$0 == 0x00a2
                     00A2  1258 _T1CLKSRC	=	0x00a2
                     00A4  1259 G$T1CNT0$0$0 == 0x00a4
                     00A4  1260 _T1CNT0	=	0x00a4
                     00A5  1261 G$T1CNT1$0$0 == 0x00a5
                     00A5  1262 _T1CNT1	=	0x00a5
                     A5A4  1263 G$T1CNT$0$0 == 0xa5a4
                     A5A4  1264 _T1CNT	=	0xa5a4
                     00A1  1265 G$T1MODE$0$0 == 0x00a1
                     00A1  1266 _T1MODE	=	0x00a1
                     00A6  1267 G$T1PERIOD0$0$0 == 0x00a6
                     00A6  1268 _T1PERIOD0	=	0x00a6
                     00A7  1269 G$T1PERIOD1$0$0 == 0x00a7
                     00A7  1270 _T1PERIOD1	=	0x00a7
                     A7A6  1271 G$T1PERIOD$0$0 == 0xa7a6
                     A7A6  1272 _T1PERIOD	=	0xa7a6
                     00A3  1273 G$T1STATUS$0$0 == 0x00a3
                     00A3  1274 _T1STATUS	=	0x00a3
                     00AA  1275 G$T2CLKSRC$0$0 == 0x00aa
                     00AA  1276 _T2CLKSRC	=	0x00aa
                     00AC  1277 G$T2CNT0$0$0 == 0x00ac
                     00AC  1278 _T2CNT0	=	0x00ac
                     00AD  1279 G$T2CNT1$0$0 == 0x00ad
                     00AD  1280 _T2CNT1	=	0x00ad
                     ADAC  1281 G$T2CNT$0$0 == 0xadac
                     ADAC  1282 _T2CNT	=	0xadac
                     00A9  1283 G$T2MODE$0$0 == 0x00a9
                     00A9  1284 _T2MODE	=	0x00a9
                     00AE  1285 G$T2PERIOD0$0$0 == 0x00ae
                     00AE  1286 _T2PERIOD0	=	0x00ae
                     00AF  1287 G$T2PERIOD1$0$0 == 0x00af
                     00AF  1288 _T2PERIOD1	=	0x00af
                     AFAE  1289 G$T2PERIOD$0$0 == 0xafae
                     AFAE  1290 _T2PERIOD	=	0xafae
                     00AB  1291 G$T2STATUS$0$0 == 0x00ab
                     00AB  1292 _T2STATUS	=	0x00ab
                     00E4  1293 G$U0CTRL$0$0 == 0x00e4
                     00E4  1294 _U0CTRL	=	0x00e4
                     00E7  1295 G$U0MODE$0$0 == 0x00e7
                     00E7  1296 _U0MODE	=	0x00e7
                     00E6  1297 G$U0SHREG$0$0 == 0x00e6
                     00E6  1298 _U0SHREG	=	0x00e6
                     00E5  1299 G$U0STATUS$0$0 == 0x00e5
                     00E5  1300 _U0STATUS	=	0x00e5
                     00EC  1301 G$U1CTRL$0$0 == 0x00ec
                     00EC  1302 _U1CTRL	=	0x00ec
                     00EF  1303 G$U1MODE$0$0 == 0x00ef
                     00EF  1304 _U1MODE	=	0x00ef
                     00EE  1305 G$U1SHREG$0$0 == 0x00ee
                     00EE  1306 _U1SHREG	=	0x00ee
                     00ED  1307 G$U1STATUS$0$0 == 0x00ed
                     00ED  1308 _U1STATUS	=	0x00ed
                     00DA  1309 G$WDTCFG$0$0 == 0x00da
                     00DA  1310 _WDTCFG	=	0x00da
                     00DB  1311 G$WDTRESET$0$0 == 0x00db
                     00DB  1312 _WDTRESET	=	0x00db
                     00F1  1313 G$WTCFGA$0$0 == 0x00f1
                     00F1  1314 _WTCFGA	=	0x00f1
                     00F9  1315 G$WTCFGB$0$0 == 0x00f9
                     00F9  1316 _WTCFGB	=	0x00f9
                     00F2  1317 G$WTCNTA0$0$0 == 0x00f2
                     00F2  1318 _WTCNTA0	=	0x00f2
                     00F3  1319 G$WTCNTA1$0$0 == 0x00f3
                     00F3  1320 _WTCNTA1	=	0x00f3
                     F3F2  1321 G$WTCNTA$0$0 == 0xf3f2
                     F3F2  1322 _WTCNTA	=	0xf3f2
                     00FA  1323 G$WTCNTB0$0$0 == 0x00fa
                     00FA  1324 _WTCNTB0	=	0x00fa
                     00FB  1325 G$WTCNTB1$0$0 == 0x00fb
                     00FB  1326 _WTCNTB1	=	0x00fb
                     FBFA  1327 G$WTCNTB$0$0 == 0xfbfa
                     FBFA  1328 _WTCNTB	=	0xfbfa
                     00EB  1329 G$WTCNTR1$0$0 == 0x00eb
                     00EB  1330 _WTCNTR1	=	0x00eb
                     00F4  1331 G$WTEVTA0$0$0 == 0x00f4
                     00F4  1332 _WTEVTA0	=	0x00f4
                     00F5  1333 G$WTEVTA1$0$0 == 0x00f5
                     00F5  1334 _WTEVTA1	=	0x00f5
                     F5F4  1335 G$WTEVTA$0$0 == 0xf5f4
                     F5F4  1336 _WTEVTA	=	0xf5f4
                     00F6  1337 G$WTEVTB0$0$0 == 0x00f6
                     00F6  1338 _WTEVTB0	=	0x00f6
                     00F7  1339 G$WTEVTB1$0$0 == 0x00f7
                     00F7  1340 _WTEVTB1	=	0x00f7
                     F7F6  1341 G$WTEVTB$0$0 == 0xf7f6
                     F7F6  1342 _WTEVTB	=	0xf7f6
                     00FC  1343 G$WTEVTC0$0$0 == 0x00fc
                     00FC  1344 _WTEVTC0	=	0x00fc
                     00FD  1345 G$WTEVTC1$0$0 == 0x00fd
                     00FD  1346 _WTEVTC1	=	0x00fd
                     FDFC  1347 G$WTEVTC$0$0 == 0xfdfc
                     FDFC  1348 _WTEVTC	=	0xfdfc
                     00FE  1349 G$WTEVTD0$0$0 == 0x00fe
                     00FE  1350 _WTEVTD0	=	0x00fe
                     00FF  1351 G$WTEVTD1$0$0 == 0x00ff
                     00FF  1352 _WTEVTD1	=	0x00ff
                     FFFE  1353 G$WTEVTD$0$0 == 0xfffe
                     FFFE  1354 _WTEVTD	=	0xfffe
                     00E9  1355 G$WTIRQEN$0$0 == 0x00e9
                     00E9  1356 _WTIRQEN	=	0x00e9
                     00EA  1357 G$WTSTAT$0$0 == 0x00ea
                     00EA  1358 _WTSTAT	=	0x00ea
                           1359 ;--------------------------------------------------------
                           1360 ; special function bits
                           1361 ;--------------------------------------------------------
                           1362 	.area RSEG    (ABS,DATA)
   0000                    1363 	.org 0x0000
                     00E0  1364 G$ACC_0$0$0 == 0x00e0
                     00E0  1365 _ACC_0	=	0x00e0
                     00E1  1366 G$ACC_1$0$0 == 0x00e1
                     00E1  1367 _ACC_1	=	0x00e1
                     00E2  1368 G$ACC_2$0$0 == 0x00e2
                     00E2  1369 _ACC_2	=	0x00e2
                     00E3  1370 G$ACC_3$0$0 == 0x00e3
                     00E3  1371 _ACC_3	=	0x00e3
                     00E4  1372 G$ACC_4$0$0 == 0x00e4
                     00E4  1373 _ACC_4	=	0x00e4
                     00E5  1374 G$ACC_5$0$0 == 0x00e5
                     00E5  1375 _ACC_5	=	0x00e5
                     00E6  1376 G$ACC_6$0$0 == 0x00e6
                     00E6  1377 _ACC_6	=	0x00e6
                     00E7  1378 G$ACC_7$0$0 == 0x00e7
                     00E7  1379 _ACC_7	=	0x00e7
                     00F0  1380 G$B_0$0$0 == 0x00f0
                     00F0  1381 _B_0	=	0x00f0
                     00F1  1382 G$B_1$0$0 == 0x00f1
                     00F1  1383 _B_1	=	0x00f1
                     00F2  1384 G$B_2$0$0 == 0x00f2
                     00F2  1385 _B_2	=	0x00f2
                     00F3  1386 G$B_3$0$0 == 0x00f3
                     00F3  1387 _B_3	=	0x00f3
                     00F4  1388 G$B_4$0$0 == 0x00f4
                     00F4  1389 _B_4	=	0x00f4
                     00F5  1390 G$B_5$0$0 == 0x00f5
                     00F5  1391 _B_5	=	0x00f5
                     00F6  1392 G$B_6$0$0 == 0x00f6
                     00F6  1393 _B_6	=	0x00f6
                     00F7  1394 G$B_7$0$0 == 0x00f7
                     00F7  1395 _B_7	=	0x00f7
                     00A0  1396 G$E2IE_0$0$0 == 0x00a0
                     00A0  1397 _E2IE_0	=	0x00a0
                     00A1  1398 G$E2IE_1$0$0 == 0x00a1
                     00A1  1399 _E2IE_1	=	0x00a1
                     00A2  1400 G$E2IE_2$0$0 == 0x00a2
                     00A2  1401 _E2IE_2	=	0x00a2
                     00A3  1402 G$E2IE_3$0$0 == 0x00a3
                     00A3  1403 _E2IE_3	=	0x00a3
                     00A4  1404 G$E2IE_4$0$0 == 0x00a4
                     00A4  1405 _E2IE_4	=	0x00a4
                     00A5  1406 G$E2IE_5$0$0 == 0x00a5
                     00A5  1407 _E2IE_5	=	0x00a5
                     00A6  1408 G$E2IE_6$0$0 == 0x00a6
                     00A6  1409 _E2IE_6	=	0x00a6
                     00A7  1410 G$E2IE_7$0$0 == 0x00a7
                     00A7  1411 _E2IE_7	=	0x00a7
                     00C0  1412 G$E2IP_0$0$0 == 0x00c0
                     00C0  1413 _E2IP_0	=	0x00c0
                     00C1  1414 G$E2IP_1$0$0 == 0x00c1
                     00C1  1415 _E2IP_1	=	0x00c1
                     00C2  1416 G$E2IP_2$0$0 == 0x00c2
                     00C2  1417 _E2IP_2	=	0x00c2
                     00C3  1418 G$E2IP_3$0$0 == 0x00c3
                     00C3  1419 _E2IP_3	=	0x00c3
                     00C4  1420 G$E2IP_4$0$0 == 0x00c4
                     00C4  1421 _E2IP_4	=	0x00c4
                     00C5  1422 G$E2IP_5$0$0 == 0x00c5
                     00C5  1423 _E2IP_5	=	0x00c5
                     00C6  1424 G$E2IP_6$0$0 == 0x00c6
                     00C6  1425 _E2IP_6	=	0x00c6
                     00C7  1426 G$E2IP_7$0$0 == 0x00c7
                     00C7  1427 _E2IP_7	=	0x00c7
                     0098  1428 G$EIE_0$0$0 == 0x0098
                     0098  1429 _EIE_0	=	0x0098
                     0099  1430 G$EIE_1$0$0 == 0x0099
                     0099  1431 _EIE_1	=	0x0099
                     009A  1432 G$EIE_2$0$0 == 0x009a
                     009A  1433 _EIE_2	=	0x009a
                     009B  1434 G$EIE_3$0$0 == 0x009b
                     009B  1435 _EIE_3	=	0x009b
                     009C  1436 G$EIE_4$0$0 == 0x009c
                     009C  1437 _EIE_4	=	0x009c
                     009D  1438 G$EIE_5$0$0 == 0x009d
                     009D  1439 _EIE_5	=	0x009d
                     009E  1440 G$EIE_6$0$0 == 0x009e
                     009E  1441 _EIE_6	=	0x009e
                     009F  1442 G$EIE_7$0$0 == 0x009f
                     009F  1443 _EIE_7	=	0x009f
                     00B0  1444 G$EIP_0$0$0 == 0x00b0
                     00B0  1445 _EIP_0	=	0x00b0
                     00B1  1446 G$EIP_1$0$0 == 0x00b1
                     00B1  1447 _EIP_1	=	0x00b1
                     00B2  1448 G$EIP_2$0$0 == 0x00b2
                     00B2  1449 _EIP_2	=	0x00b2
                     00B3  1450 G$EIP_3$0$0 == 0x00b3
                     00B3  1451 _EIP_3	=	0x00b3
                     00B4  1452 G$EIP_4$0$0 == 0x00b4
                     00B4  1453 _EIP_4	=	0x00b4
                     00B5  1454 G$EIP_5$0$0 == 0x00b5
                     00B5  1455 _EIP_5	=	0x00b5
                     00B6  1456 G$EIP_6$0$0 == 0x00b6
                     00B6  1457 _EIP_6	=	0x00b6
                     00B7  1458 G$EIP_7$0$0 == 0x00b7
                     00B7  1459 _EIP_7	=	0x00b7
                     00A8  1460 G$IE_0$0$0 == 0x00a8
                     00A8  1461 _IE_0	=	0x00a8
                     00A9  1462 G$IE_1$0$0 == 0x00a9
                     00A9  1463 _IE_1	=	0x00a9
                     00AA  1464 G$IE_2$0$0 == 0x00aa
                     00AA  1465 _IE_2	=	0x00aa
                     00AB  1466 G$IE_3$0$0 == 0x00ab
                     00AB  1467 _IE_3	=	0x00ab
                     00AC  1468 G$IE_4$0$0 == 0x00ac
                     00AC  1469 _IE_4	=	0x00ac
                     00AD  1470 G$IE_5$0$0 == 0x00ad
                     00AD  1471 _IE_5	=	0x00ad
                     00AE  1472 G$IE_6$0$0 == 0x00ae
                     00AE  1473 _IE_6	=	0x00ae
                     00AF  1474 G$IE_7$0$0 == 0x00af
                     00AF  1475 _IE_7	=	0x00af
                     00AF  1476 G$EA$0$0 == 0x00af
                     00AF  1477 _EA	=	0x00af
                     00B8  1478 G$IP_0$0$0 == 0x00b8
                     00B8  1479 _IP_0	=	0x00b8
                     00B9  1480 G$IP_1$0$0 == 0x00b9
                     00B9  1481 _IP_1	=	0x00b9
                     00BA  1482 G$IP_2$0$0 == 0x00ba
                     00BA  1483 _IP_2	=	0x00ba
                     00BB  1484 G$IP_3$0$0 == 0x00bb
                     00BB  1485 _IP_3	=	0x00bb
                     00BC  1486 G$IP_4$0$0 == 0x00bc
                     00BC  1487 _IP_4	=	0x00bc
                     00BD  1488 G$IP_5$0$0 == 0x00bd
                     00BD  1489 _IP_5	=	0x00bd
                     00BE  1490 G$IP_6$0$0 == 0x00be
                     00BE  1491 _IP_6	=	0x00be
                     00BF  1492 G$IP_7$0$0 == 0x00bf
                     00BF  1493 _IP_7	=	0x00bf
                     00D0  1494 G$P$0$0 == 0x00d0
                     00D0  1495 _P	=	0x00d0
                     00D1  1496 G$F1$0$0 == 0x00d1
                     00D1  1497 _F1	=	0x00d1
                     00D2  1498 G$OV$0$0 == 0x00d2
                     00D2  1499 _OV	=	0x00d2
                     00D3  1500 G$RS0$0$0 == 0x00d3
                     00D3  1501 _RS0	=	0x00d3
                     00D4  1502 G$RS1$0$0 == 0x00d4
                     00D4  1503 _RS1	=	0x00d4
                     00D5  1504 G$F0$0$0 == 0x00d5
                     00D5  1505 _F0	=	0x00d5
                     00D6  1506 G$AC$0$0 == 0x00d6
                     00D6  1507 _AC	=	0x00d6
                     00D7  1508 G$CY$0$0 == 0x00d7
                     00D7  1509 _CY	=	0x00d7
                     00C8  1510 G$PINA_0$0$0 == 0x00c8
                     00C8  1511 _PINA_0	=	0x00c8
                     00C9  1512 G$PINA_1$0$0 == 0x00c9
                     00C9  1513 _PINA_1	=	0x00c9
                     00CA  1514 G$PINA_2$0$0 == 0x00ca
                     00CA  1515 _PINA_2	=	0x00ca
                     00CB  1516 G$PINA_3$0$0 == 0x00cb
                     00CB  1517 _PINA_3	=	0x00cb
                     00CC  1518 G$PINA_4$0$0 == 0x00cc
                     00CC  1519 _PINA_4	=	0x00cc
                     00CD  1520 G$PINA_5$0$0 == 0x00cd
                     00CD  1521 _PINA_5	=	0x00cd
                     00CE  1522 G$PINA_6$0$0 == 0x00ce
                     00CE  1523 _PINA_6	=	0x00ce
                     00CF  1524 G$PINA_7$0$0 == 0x00cf
                     00CF  1525 _PINA_7	=	0x00cf
                     00E8  1526 G$PINB_0$0$0 == 0x00e8
                     00E8  1527 _PINB_0	=	0x00e8
                     00E9  1528 G$PINB_1$0$0 == 0x00e9
                     00E9  1529 _PINB_1	=	0x00e9
                     00EA  1530 G$PINB_2$0$0 == 0x00ea
                     00EA  1531 _PINB_2	=	0x00ea
                     00EB  1532 G$PINB_3$0$0 == 0x00eb
                     00EB  1533 _PINB_3	=	0x00eb
                     00EC  1534 G$PINB_4$0$0 == 0x00ec
                     00EC  1535 _PINB_4	=	0x00ec
                     00ED  1536 G$PINB_5$0$0 == 0x00ed
                     00ED  1537 _PINB_5	=	0x00ed
                     00EE  1538 G$PINB_6$0$0 == 0x00ee
                     00EE  1539 _PINB_6	=	0x00ee
                     00EF  1540 G$PINB_7$0$0 == 0x00ef
                     00EF  1541 _PINB_7	=	0x00ef
                     00F8  1542 G$PINC_0$0$0 == 0x00f8
                     00F8  1543 _PINC_0	=	0x00f8
                     00F9  1544 G$PINC_1$0$0 == 0x00f9
                     00F9  1545 _PINC_1	=	0x00f9
                     00FA  1546 G$PINC_2$0$0 == 0x00fa
                     00FA  1547 _PINC_2	=	0x00fa
                     00FB  1548 G$PINC_3$0$0 == 0x00fb
                     00FB  1549 _PINC_3	=	0x00fb
                     00FC  1550 G$PINC_4$0$0 == 0x00fc
                     00FC  1551 _PINC_4	=	0x00fc
                     00FD  1552 G$PINC_5$0$0 == 0x00fd
                     00FD  1553 _PINC_5	=	0x00fd
                     00FE  1554 G$PINC_6$0$0 == 0x00fe
                     00FE  1555 _PINC_6	=	0x00fe
                     00FF  1556 G$PINC_7$0$0 == 0x00ff
                     00FF  1557 _PINC_7	=	0x00ff
                     0080  1558 G$PORTA_0$0$0 == 0x0080
                     0080  1559 _PORTA_0	=	0x0080
                     0081  1560 G$PORTA_1$0$0 == 0x0081
                     0081  1561 _PORTA_1	=	0x0081
                     0082  1562 G$PORTA_2$0$0 == 0x0082
                     0082  1563 _PORTA_2	=	0x0082
                     0083  1564 G$PORTA_3$0$0 == 0x0083
                     0083  1565 _PORTA_3	=	0x0083
                     0084  1566 G$PORTA_4$0$0 == 0x0084
                     0084  1567 _PORTA_4	=	0x0084
                     0085  1568 G$PORTA_5$0$0 == 0x0085
                     0085  1569 _PORTA_5	=	0x0085
                     0086  1570 G$PORTA_6$0$0 == 0x0086
                     0086  1571 _PORTA_6	=	0x0086
                     0087  1572 G$PORTA_7$0$0 == 0x0087
                     0087  1573 _PORTA_7	=	0x0087
                     0088  1574 G$PORTB_0$0$0 == 0x0088
                     0088  1575 _PORTB_0	=	0x0088
                     0089  1576 G$PORTB_1$0$0 == 0x0089
                     0089  1577 _PORTB_1	=	0x0089
                     008A  1578 G$PORTB_2$0$0 == 0x008a
                     008A  1579 _PORTB_2	=	0x008a
                     008B  1580 G$PORTB_3$0$0 == 0x008b
                     008B  1581 _PORTB_3	=	0x008b
                     008C  1582 G$PORTB_4$0$0 == 0x008c
                     008C  1583 _PORTB_4	=	0x008c
                     008D  1584 G$PORTB_5$0$0 == 0x008d
                     008D  1585 _PORTB_5	=	0x008d
                     008E  1586 G$PORTB_6$0$0 == 0x008e
                     008E  1587 _PORTB_6	=	0x008e
                     008F  1588 G$PORTB_7$0$0 == 0x008f
                     008F  1589 _PORTB_7	=	0x008f
                     0090  1590 G$PORTC_0$0$0 == 0x0090
                     0090  1591 _PORTC_0	=	0x0090
                     0091  1592 G$PORTC_1$0$0 == 0x0091
                     0091  1593 _PORTC_1	=	0x0091
                     0092  1594 G$PORTC_2$0$0 == 0x0092
                     0092  1595 _PORTC_2	=	0x0092
                     0093  1596 G$PORTC_3$0$0 == 0x0093
                     0093  1597 _PORTC_3	=	0x0093
                     0094  1598 G$PORTC_4$0$0 == 0x0094
                     0094  1599 _PORTC_4	=	0x0094
                     0095  1600 G$PORTC_5$0$0 == 0x0095
                     0095  1601 _PORTC_5	=	0x0095
                     0096  1602 G$PORTC_6$0$0 == 0x0096
                     0096  1603 _PORTC_6	=	0x0096
                     0097  1604 G$PORTC_7$0$0 == 0x0097
                     0097  1605 _PORTC_7	=	0x0097
                           1606 ;--------------------------------------------------------
                           1607 ; overlayable register banks
                           1608 ;--------------------------------------------------------
                           1609 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1610 	.ds 8
                           1611 ;--------------------------------------------------------
                           1612 ; internal ram data
                           1613 ;--------------------------------------------------------
                           1614 	.area DSEG    (DATA)
                     0000  1615 G$coldstart$0$0==.
   0012                    1616 _coldstart::
   0012                    1617 	.ds 1
                           1618 ;--------------------------------------------------------
                           1619 ; overlayable items in internal ram 
                           1620 ;--------------------------------------------------------
                           1621 	.area	OSEG    (OVR,DATA)
                           1622 	.area	OSEG    (OVR,DATA)
                           1623 ;--------------------------------------------------------
                           1624 ; Stack segment in internal ram 
                           1625 ;--------------------------------------------------------
                           1626 	.area	SSEG	(DATA)
   0032                    1627 __start__stack:
   0032                    1628 	.ds	1
                           1629 
                           1630 ;--------------------------------------------------------
                           1631 ; indirectly addressable internal ram data
                           1632 ;--------------------------------------------------------
                           1633 	.area ISEG    (DATA)
                           1634 ;--------------------------------------------------------
                           1635 ; absolute internal ram data
                           1636 ;--------------------------------------------------------
                           1637 	.area IABS    (ABS,DATA)
                           1638 	.area IABS    (ABS,DATA)
                           1639 ;--------------------------------------------------------
                           1640 ; bit data
                           1641 ;--------------------------------------------------------
                           1642 	.area BSEG    (BIT)
                           1643 ;--------------------------------------------------------
                           1644 ; paged external ram data
                           1645 ;--------------------------------------------------------
                           1646 	.area PSEG    (PAG,XDATA)
                           1647 ;--------------------------------------------------------
                           1648 ; external ram data
                           1649 ;--------------------------------------------------------
                           1650 	.area XSEG    (XDATA)
                     7020  1651 G$ADCCH0VAL0$0$0 == 0x7020
                     7020  1652 _ADCCH0VAL0	=	0x7020
                     7021  1653 G$ADCCH0VAL1$0$0 == 0x7021
                     7021  1654 _ADCCH0VAL1	=	0x7021
                     7020  1655 G$ADCCH0VAL$0$0 == 0x7020
                     7020  1656 _ADCCH0VAL	=	0x7020
                     7022  1657 G$ADCCH1VAL0$0$0 == 0x7022
                     7022  1658 _ADCCH1VAL0	=	0x7022
                     7023  1659 G$ADCCH1VAL1$0$0 == 0x7023
                     7023  1660 _ADCCH1VAL1	=	0x7023
                     7022  1661 G$ADCCH1VAL$0$0 == 0x7022
                     7022  1662 _ADCCH1VAL	=	0x7022
                     7024  1663 G$ADCCH2VAL0$0$0 == 0x7024
                     7024  1664 _ADCCH2VAL0	=	0x7024
                     7025  1665 G$ADCCH2VAL1$0$0 == 0x7025
                     7025  1666 _ADCCH2VAL1	=	0x7025
                     7024  1667 G$ADCCH2VAL$0$0 == 0x7024
                     7024  1668 _ADCCH2VAL	=	0x7024
                     7026  1669 G$ADCCH3VAL0$0$0 == 0x7026
                     7026  1670 _ADCCH3VAL0	=	0x7026
                     7027  1671 G$ADCCH3VAL1$0$0 == 0x7027
                     7027  1672 _ADCCH3VAL1	=	0x7027
                     7026  1673 G$ADCCH3VAL$0$0 == 0x7026
                     7026  1674 _ADCCH3VAL	=	0x7026
                     7028  1675 G$ADCTUNE0$0$0 == 0x7028
                     7028  1676 _ADCTUNE0	=	0x7028
                     7029  1677 G$ADCTUNE1$0$0 == 0x7029
                     7029  1678 _ADCTUNE1	=	0x7029
                     702A  1679 G$ADCTUNE2$0$0 == 0x702a
                     702A  1680 _ADCTUNE2	=	0x702a
                     7010  1681 G$DMA0ADDR0$0$0 == 0x7010
                     7010  1682 _DMA0ADDR0	=	0x7010
                     7011  1683 G$DMA0ADDR1$0$0 == 0x7011
                     7011  1684 _DMA0ADDR1	=	0x7011
                     7010  1685 G$DMA0ADDR$0$0 == 0x7010
                     7010  1686 _DMA0ADDR	=	0x7010
                     7014  1687 G$DMA0CONFIG$0$0 == 0x7014
                     7014  1688 _DMA0CONFIG	=	0x7014
                     7012  1689 G$DMA1ADDR0$0$0 == 0x7012
                     7012  1690 _DMA1ADDR0	=	0x7012
                     7013  1691 G$DMA1ADDR1$0$0 == 0x7013
                     7013  1692 _DMA1ADDR1	=	0x7013
                     7012  1693 G$DMA1ADDR$0$0 == 0x7012
                     7012  1694 _DMA1ADDR	=	0x7012
                     7015  1695 G$DMA1CONFIG$0$0 == 0x7015
                     7015  1696 _DMA1CONFIG	=	0x7015
                     7070  1697 G$FRCOSCCONFIG$0$0 == 0x7070
                     7070  1698 _FRCOSCCONFIG	=	0x7070
                     7071  1699 G$FRCOSCCTRL$0$0 == 0x7071
                     7071  1700 _FRCOSCCTRL	=	0x7071
                     7076  1701 G$FRCOSCFREQ0$0$0 == 0x7076
                     7076  1702 _FRCOSCFREQ0	=	0x7076
                     7077  1703 G$FRCOSCFREQ1$0$0 == 0x7077
                     7077  1704 _FRCOSCFREQ1	=	0x7077
                     7076  1705 G$FRCOSCFREQ$0$0 == 0x7076
                     7076  1706 _FRCOSCFREQ	=	0x7076
                     7072  1707 G$FRCOSCKFILT0$0$0 == 0x7072
                     7072  1708 _FRCOSCKFILT0	=	0x7072
                     7073  1709 G$FRCOSCKFILT1$0$0 == 0x7073
                     7073  1710 _FRCOSCKFILT1	=	0x7073
                     7072  1711 G$FRCOSCKFILT$0$0 == 0x7072
                     7072  1712 _FRCOSCKFILT	=	0x7072
                     7078  1713 G$FRCOSCPER0$0$0 == 0x7078
                     7078  1714 _FRCOSCPER0	=	0x7078
                     7079  1715 G$FRCOSCPER1$0$0 == 0x7079
                     7079  1716 _FRCOSCPER1	=	0x7079
                     7078  1717 G$FRCOSCPER$0$0 == 0x7078
                     7078  1718 _FRCOSCPER	=	0x7078
                     7074  1719 G$FRCOSCREF0$0$0 == 0x7074
                     7074  1720 _FRCOSCREF0	=	0x7074
                     7075  1721 G$FRCOSCREF1$0$0 == 0x7075
                     7075  1722 _FRCOSCREF1	=	0x7075
                     7074  1723 G$FRCOSCREF$0$0 == 0x7074
                     7074  1724 _FRCOSCREF	=	0x7074
                     7007  1725 G$ANALOGA$0$0 == 0x7007
                     7007  1726 _ANALOGA	=	0x7007
                     700C  1727 G$GPIOENABLE$0$0 == 0x700c
                     700C  1728 _GPIOENABLE	=	0x700c
                     7003  1729 G$EXTIRQ$0$0 == 0x7003
                     7003  1730 _EXTIRQ	=	0x7003
                     7000  1731 G$INTCHGA$0$0 == 0x7000
                     7000  1732 _INTCHGA	=	0x7000
                     7001  1733 G$INTCHGB$0$0 == 0x7001
                     7001  1734 _INTCHGB	=	0x7001
                     7002  1735 G$INTCHGC$0$0 == 0x7002
                     7002  1736 _INTCHGC	=	0x7002
                     7008  1737 G$PALTA$0$0 == 0x7008
                     7008  1738 _PALTA	=	0x7008
                     7009  1739 G$PALTB$0$0 == 0x7009
                     7009  1740 _PALTB	=	0x7009
                     700A  1741 G$PALTC$0$0 == 0x700a
                     700A  1742 _PALTC	=	0x700a
                     7046  1743 G$PALTRADIO$0$0 == 0x7046
                     7046  1744 _PALTRADIO	=	0x7046
                     7004  1745 G$PINCHGA$0$0 == 0x7004
                     7004  1746 _PINCHGA	=	0x7004
                     7005  1747 G$PINCHGB$0$0 == 0x7005
                     7005  1748 _PINCHGB	=	0x7005
                     7006  1749 G$PINCHGC$0$0 == 0x7006
                     7006  1750 _PINCHGC	=	0x7006
                     700B  1751 G$PINSEL$0$0 == 0x700b
                     700B  1752 _PINSEL	=	0x700b
                     7060  1753 G$LPOSCCONFIG$0$0 == 0x7060
                     7060  1754 _LPOSCCONFIG	=	0x7060
                     7066  1755 G$LPOSCFREQ0$0$0 == 0x7066
                     7066  1756 _LPOSCFREQ0	=	0x7066
                     7067  1757 G$LPOSCFREQ1$0$0 == 0x7067
                     7067  1758 _LPOSCFREQ1	=	0x7067
                     7066  1759 G$LPOSCFREQ$0$0 == 0x7066
                     7066  1760 _LPOSCFREQ	=	0x7066
                     7062  1761 G$LPOSCKFILT0$0$0 == 0x7062
                     7062  1762 _LPOSCKFILT0	=	0x7062
                     7063  1763 G$LPOSCKFILT1$0$0 == 0x7063
                     7063  1764 _LPOSCKFILT1	=	0x7063
                     7062  1765 G$LPOSCKFILT$0$0 == 0x7062
                     7062  1766 _LPOSCKFILT	=	0x7062
                     7068  1767 G$LPOSCPER0$0$0 == 0x7068
                     7068  1768 _LPOSCPER0	=	0x7068
                     7069  1769 G$LPOSCPER1$0$0 == 0x7069
                     7069  1770 _LPOSCPER1	=	0x7069
                     7068  1771 G$LPOSCPER$0$0 == 0x7068
                     7068  1772 _LPOSCPER	=	0x7068
                     7064  1773 G$LPOSCREF0$0$0 == 0x7064
                     7064  1774 _LPOSCREF0	=	0x7064
                     7065  1775 G$LPOSCREF1$0$0 == 0x7065
                     7065  1776 _LPOSCREF1	=	0x7065
                     7064  1777 G$LPOSCREF$0$0 == 0x7064
                     7064  1778 _LPOSCREF	=	0x7064
                     7054  1779 G$LPXOSCGM$0$0 == 0x7054
                     7054  1780 _LPXOSCGM	=	0x7054
                     7F01  1781 G$MISCCTRL$0$0 == 0x7f01
                     7F01  1782 _MISCCTRL	=	0x7f01
                     7053  1783 G$OSCCALIB$0$0 == 0x7053
                     7053  1784 _OSCCALIB	=	0x7053
                     7050  1785 G$OSCFORCERUN$0$0 == 0x7050
                     7050  1786 _OSCFORCERUN	=	0x7050
                     7052  1787 G$OSCREADY$0$0 == 0x7052
                     7052  1788 _OSCREADY	=	0x7052
                     7051  1789 G$OSCRUN$0$0 == 0x7051
                     7051  1790 _OSCRUN	=	0x7051
                     7040  1791 G$RADIOFDATAADDR0$0$0 == 0x7040
                     7040  1792 _RADIOFDATAADDR0	=	0x7040
                     7041  1793 G$RADIOFDATAADDR1$0$0 == 0x7041
                     7041  1794 _RADIOFDATAADDR1	=	0x7041
                     7040  1795 G$RADIOFDATAADDR$0$0 == 0x7040
                     7040  1796 _RADIOFDATAADDR	=	0x7040
                     7042  1797 G$RADIOFSTATADDR0$0$0 == 0x7042
                     7042  1798 _RADIOFSTATADDR0	=	0x7042
                     7043  1799 G$RADIOFSTATADDR1$0$0 == 0x7043
                     7043  1800 _RADIOFSTATADDR1	=	0x7043
                     7042  1801 G$RADIOFSTATADDR$0$0 == 0x7042
                     7042  1802 _RADIOFSTATADDR	=	0x7042
                     7044  1803 G$RADIOMUX$0$0 == 0x7044
                     7044  1804 _RADIOMUX	=	0x7044
                     7084  1805 G$SCRATCH0$0$0 == 0x7084
                     7084  1806 _SCRATCH0	=	0x7084
                     7085  1807 G$SCRATCH1$0$0 == 0x7085
                     7085  1808 _SCRATCH1	=	0x7085
                     7086  1809 G$SCRATCH2$0$0 == 0x7086
                     7086  1810 _SCRATCH2	=	0x7086
                     7087  1811 G$SCRATCH3$0$0 == 0x7087
                     7087  1812 _SCRATCH3	=	0x7087
                     7F00  1813 G$SILICONREV$0$0 == 0x7f00
                     7F00  1814 _SILICONREV	=	0x7f00
                     7F19  1815 G$XTALAMPL$0$0 == 0x7f19
                     7F19  1816 _XTALAMPL	=	0x7f19
                     7F18  1817 G$XTALOSC$0$0 == 0x7f18
                     7F18  1818 _XTALOSC	=	0x7f18
                     7F1A  1819 G$XTALREADY$0$0 == 0x7f1a
                     7F1A  1820 _XTALREADY	=	0x7f1a
                     3F82  1821 G$XDPTR0$0$0 == 0x3f82
                     3F82  1822 _XDPTR0	=	0x3f82
                     3F84  1823 G$XDPTR1$0$0 == 0x3f84
                     3F84  1824 _XDPTR1	=	0x3f84
                     3FA8  1825 G$XIE$0$0 == 0x3fa8
                     3FA8  1826 _XIE	=	0x3fa8
                     3FB8  1827 G$XIP$0$0 == 0x3fb8
                     3FB8  1828 _XIP	=	0x3fb8
                     3F87  1829 G$XPCON$0$0 == 0x3f87
                     3F87  1830 _XPCON	=	0x3f87
                     3FCA  1831 G$XADCCH0CONFIG$0$0 == 0x3fca
                     3FCA  1832 _XADCCH0CONFIG	=	0x3fca
                     3FCB  1833 G$XADCCH1CONFIG$0$0 == 0x3fcb
                     3FCB  1834 _XADCCH1CONFIG	=	0x3fcb
                     3FD2  1835 G$XADCCH2CONFIG$0$0 == 0x3fd2
                     3FD2  1836 _XADCCH2CONFIG	=	0x3fd2
                     3FD3  1837 G$XADCCH3CONFIG$0$0 == 0x3fd3
                     3FD3  1838 _XADCCH3CONFIG	=	0x3fd3
                     3FD1  1839 G$XADCCLKSRC$0$0 == 0x3fd1
                     3FD1  1840 _XADCCLKSRC	=	0x3fd1
                     3FC9  1841 G$XADCCONV$0$0 == 0x3fc9
                     3FC9  1842 _XADCCONV	=	0x3fc9
                     3FE1  1843 G$XANALOGCOMP$0$0 == 0x3fe1
                     3FE1  1844 _XANALOGCOMP	=	0x3fe1
                     3FC6  1845 G$XCLKCON$0$0 == 0x3fc6
                     3FC6  1846 _XCLKCON	=	0x3fc6
                     3FC7  1847 G$XCLKSTAT$0$0 == 0x3fc7
                     3FC7  1848 _XCLKSTAT	=	0x3fc7
                     3F97  1849 G$XCODECONFIG$0$0 == 0x3f97
                     3F97  1850 _XCODECONFIG	=	0x3f97
                     3FE3  1851 G$XDBGLNKBUF$0$0 == 0x3fe3
                     3FE3  1852 _XDBGLNKBUF	=	0x3fe3
                     3FE2  1853 G$XDBGLNKSTAT$0$0 == 0x3fe2
                     3FE2  1854 _XDBGLNKSTAT	=	0x3fe2
                     3F89  1855 G$XDIRA$0$0 == 0x3f89
                     3F89  1856 _XDIRA	=	0x3f89
                     3F8A  1857 G$XDIRB$0$0 == 0x3f8a
                     3F8A  1858 _XDIRB	=	0x3f8a
                     3F8B  1859 G$XDIRC$0$0 == 0x3f8b
                     3F8B  1860 _XDIRC	=	0x3f8b
                     3F8E  1861 G$XDIRR$0$0 == 0x3f8e
                     3F8E  1862 _XDIRR	=	0x3f8e
                     3FC8  1863 G$XPINA$0$0 == 0x3fc8
                     3FC8  1864 _XPINA	=	0x3fc8
                     3FE8  1865 G$XPINB$0$0 == 0x3fe8
                     3FE8  1866 _XPINB	=	0x3fe8
                     3FF8  1867 G$XPINC$0$0 == 0x3ff8
                     3FF8  1868 _XPINC	=	0x3ff8
                     3F8D  1869 G$XPINR$0$0 == 0x3f8d
                     3F8D  1870 _XPINR	=	0x3f8d
                     3F80  1871 G$XPORTA$0$0 == 0x3f80
                     3F80  1872 _XPORTA	=	0x3f80
                     3F88  1873 G$XPORTB$0$0 == 0x3f88
                     3F88  1874 _XPORTB	=	0x3f88
                     3F90  1875 G$XPORTC$0$0 == 0x3f90
                     3F90  1876 _XPORTC	=	0x3f90
                     3F8C  1877 G$XPORTR$0$0 == 0x3f8c
                     3F8C  1878 _XPORTR	=	0x3f8c
                     3FCE  1879 G$XIC0CAPT0$0$0 == 0x3fce
                     3FCE  1880 _XIC0CAPT0	=	0x3fce
                     3FCF  1881 G$XIC0CAPT1$0$0 == 0x3fcf
                     3FCF  1882 _XIC0CAPT1	=	0x3fcf
                     3FCE  1883 G$XIC0CAPT$0$0 == 0x3fce
                     3FCE  1884 _XIC0CAPT	=	0x3fce
                     3FCC  1885 G$XIC0MODE$0$0 == 0x3fcc
                     3FCC  1886 _XIC0MODE	=	0x3fcc
                     3FCD  1887 G$XIC0STATUS$0$0 == 0x3fcd
                     3FCD  1888 _XIC0STATUS	=	0x3fcd
                     3FD6  1889 G$XIC1CAPT0$0$0 == 0x3fd6
                     3FD6  1890 _XIC1CAPT0	=	0x3fd6
                     3FD7  1891 G$XIC1CAPT1$0$0 == 0x3fd7
                     3FD7  1892 _XIC1CAPT1	=	0x3fd7
                     3FD6  1893 G$XIC1CAPT$0$0 == 0x3fd6
                     3FD6  1894 _XIC1CAPT	=	0x3fd6
                     3FD4  1895 G$XIC1MODE$0$0 == 0x3fd4
                     3FD4  1896 _XIC1MODE	=	0x3fd4
                     3FD5  1897 G$XIC1STATUS$0$0 == 0x3fd5
                     3FD5  1898 _XIC1STATUS	=	0x3fd5
                     3F92  1899 G$XNVADDR0$0$0 == 0x3f92
                     3F92  1900 _XNVADDR0	=	0x3f92
                     3F93  1901 G$XNVADDR1$0$0 == 0x3f93
                     3F93  1902 _XNVADDR1	=	0x3f93
                     3F92  1903 G$XNVADDR$0$0 == 0x3f92
                     3F92  1904 _XNVADDR	=	0x3f92
                     3F94  1905 G$XNVDATA0$0$0 == 0x3f94
                     3F94  1906 _XNVDATA0	=	0x3f94
                     3F95  1907 G$XNVDATA1$0$0 == 0x3f95
                     3F95  1908 _XNVDATA1	=	0x3f95
                     3F94  1909 G$XNVDATA$0$0 == 0x3f94
                     3F94  1910 _XNVDATA	=	0x3f94
                     3F96  1911 G$XNVKEY$0$0 == 0x3f96
                     3F96  1912 _XNVKEY	=	0x3f96
                     3F91  1913 G$XNVSTATUS$0$0 == 0x3f91
                     3F91  1914 _XNVSTATUS	=	0x3f91
                     3FBC  1915 G$XOC0COMP0$0$0 == 0x3fbc
                     3FBC  1916 _XOC0COMP0	=	0x3fbc
                     3FBD  1917 G$XOC0COMP1$0$0 == 0x3fbd
                     3FBD  1918 _XOC0COMP1	=	0x3fbd
                     3FBC  1919 G$XOC0COMP$0$0 == 0x3fbc
                     3FBC  1920 _XOC0COMP	=	0x3fbc
                     3FB9  1921 G$XOC0MODE$0$0 == 0x3fb9
                     3FB9  1922 _XOC0MODE	=	0x3fb9
                     3FBA  1923 G$XOC0PIN$0$0 == 0x3fba
                     3FBA  1924 _XOC0PIN	=	0x3fba
                     3FBB  1925 G$XOC0STATUS$0$0 == 0x3fbb
                     3FBB  1926 _XOC0STATUS	=	0x3fbb
                     3FC4  1927 G$XOC1COMP0$0$0 == 0x3fc4
                     3FC4  1928 _XOC1COMP0	=	0x3fc4
                     3FC5  1929 G$XOC1COMP1$0$0 == 0x3fc5
                     3FC5  1930 _XOC1COMP1	=	0x3fc5
                     3FC4  1931 G$XOC1COMP$0$0 == 0x3fc4
                     3FC4  1932 _XOC1COMP	=	0x3fc4
                     3FC1  1933 G$XOC1MODE$0$0 == 0x3fc1
                     3FC1  1934 _XOC1MODE	=	0x3fc1
                     3FC2  1935 G$XOC1PIN$0$0 == 0x3fc2
                     3FC2  1936 _XOC1PIN	=	0x3fc2
                     3FC3  1937 G$XOC1STATUS$0$0 == 0x3fc3
                     3FC3  1938 _XOC1STATUS	=	0x3fc3
                     3FB1  1939 G$XRADIOACC$0$0 == 0x3fb1
                     3FB1  1940 _XRADIOACC	=	0x3fb1
                     3FB3  1941 G$XRADIOADDR0$0$0 == 0x3fb3
                     3FB3  1942 _XRADIOADDR0	=	0x3fb3
                     3FB2  1943 G$XRADIOADDR1$0$0 == 0x3fb2
                     3FB2  1944 _XRADIOADDR1	=	0x3fb2
                     3FB7  1945 G$XRADIODATA0$0$0 == 0x3fb7
                     3FB7  1946 _XRADIODATA0	=	0x3fb7
                     3FB6  1947 G$XRADIODATA1$0$0 == 0x3fb6
                     3FB6  1948 _XRADIODATA1	=	0x3fb6
                     3FB5  1949 G$XRADIODATA2$0$0 == 0x3fb5
                     3FB5  1950 _XRADIODATA2	=	0x3fb5
                     3FB4  1951 G$XRADIODATA3$0$0 == 0x3fb4
                     3FB4  1952 _XRADIODATA3	=	0x3fb4
                     3FBE  1953 G$XRADIOSTAT0$0$0 == 0x3fbe
                     3FBE  1954 _XRADIOSTAT0	=	0x3fbe
                     3FBF  1955 G$XRADIOSTAT1$0$0 == 0x3fbf
                     3FBF  1956 _XRADIOSTAT1	=	0x3fbf
                     3FBE  1957 G$XRADIOSTAT$0$0 == 0x3fbe
                     3FBE  1958 _XRADIOSTAT	=	0x3fbe
                     3FDF  1959 G$XSPCLKSRC$0$0 == 0x3fdf
                     3FDF  1960 _XSPCLKSRC	=	0x3fdf
                     3FDC  1961 G$XSPMODE$0$0 == 0x3fdc
                     3FDC  1962 _XSPMODE	=	0x3fdc
                     3FDE  1963 G$XSPSHREG$0$0 == 0x3fde
                     3FDE  1964 _XSPSHREG	=	0x3fde
                     3FDD  1965 G$XSPSTATUS$0$0 == 0x3fdd
                     3FDD  1966 _XSPSTATUS	=	0x3fdd
                     3F9A  1967 G$XT0CLKSRC$0$0 == 0x3f9a
                     3F9A  1968 _XT0CLKSRC	=	0x3f9a
                     3F9C  1969 G$XT0CNT0$0$0 == 0x3f9c
                     3F9C  1970 _XT0CNT0	=	0x3f9c
                     3F9D  1971 G$XT0CNT1$0$0 == 0x3f9d
                     3F9D  1972 _XT0CNT1	=	0x3f9d
                     3F9C  1973 G$XT0CNT$0$0 == 0x3f9c
                     3F9C  1974 _XT0CNT	=	0x3f9c
                     3F99  1975 G$XT0MODE$0$0 == 0x3f99
                     3F99  1976 _XT0MODE	=	0x3f99
                     3F9E  1977 G$XT0PERIOD0$0$0 == 0x3f9e
                     3F9E  1978 _XT0PERIOD0	=	0x3f9e
                     3F9F  1979 G$XT0PERIOD1$0$0 == 0x3f9f
                     3F9F  1980 _XT0PERIOD1	=	0x3f9f
                     3F9E  1981 G$XT0PERIOD$0$0 == 0x3f9e
                     3F9E  1982 _XT0PERIOD	=	0x3f9e
                     3F9B  1983 G$XT0STATUS$0$0 == 0x3f9b
                     3F9B  1984 _XT0STATUS	=	0x3f9b
                     3FA2  1985 G$XT1CLKSRC$0$0 == 0x3fa2
                     3FA2  1986 _XT1CLKSRC	=	0x3fa2
                     3FA4  1987 G$XT1CNT0$0$0 == 0x3fa4
                     3FA4  1988 _XT1CNT0	=	0x3fa4
                     3FA5  1989 G$XT1CNT1$0$0 == 0x3fa5
                     3FA5  1990 _XT1CNT1	=	0x3fa5
                     3FA4  1991 G$XT1CNT$0$0 == 0x3fa4
                     3FA4  1992 _XT1CNT	=	0x3fa4
                     3FA1  1993 G$XT1MODE$0$0 == 0x3fa1
                     3FA1  1994 _XT1MODE	=	0x3fa1
                     3FA6  1995 G$XT1PERIOD0$0$0 == 0x3fa6
                     3FA6  1996 _XT1PERIOD0	=	0x3fa6
                     3FA7  1997 G$XT1PERIOD1$0$0 == 0x3fa7
                     3FA7  1998 _XT1PERIOD1	=	0x3fa7
                     3FA6  1999 G$XT1PERIOD$0$0 == 0x3fa6
                     3FA6  2000 _XT1PERIOD	=	0x3fa6
                     3FA3  2001 G$XT1STATUS$0$0 == 0x3fa3
                     3FA3  2002 _XT1STATUS	=	0x3fa3
                     3FAA  2003 G$XT2CLKSRC$0$0 == 0x3faa
                     3FAA  2004 _XT2CLKSRC	=	0x3faa
                     3FAC  2005 G$XT2CNT0$0$0 == 0x3fac
                     3FAC  2006 _XT2CNT0	=	0x3fac
                     3FAD  2007 G$XT2CNT1$0$0 == 0x3fad
                     3FAD  2008 _XT2CNT1	=	0x3fad
                     3FAC  2009 G$XT2CNT$0$0 == 0x3fac
                     3FAC  2010 _XT2CNT	=	0x3fac
                     3FA9  2011 G$XT2MODE$0$0 == 0x3fa9
                     3FA9  2012 _XT2MODE	=	0x3fa9
                     3FAE  2013 G$XT2PERIOD0$0$0 == 0x3fae
                     3FAE  2014 _XT2PERIOD0	=	0x3fae
                     3FAF  2015 G$XT2PERIOD1$0$0 == 0x3faf
                     3FAF  2016 _XT2PERIOD1	=	0x3faf
                     3FAE  2017 G$XT2PERIOD$0$0 == 0x3fae
                     3FAE  2018 _XT2PERIOD	=	0x3fae
                     3FAB  2019 G$XT2STATUS$0$0 == 0x3fab
                     3FAB  2020 _XT2STATUS	=	0x3fab
                     3FE4  2021 G$XU0CTRL$0$0 == 0x3fe4
                     3FE4  2022 _XU0CTRL	=	0x3fe4
                     3FE7  2023 G$XU0MODE$0$0 == 0x3fe7
                     3FE7  2024 _XU0MODE	=	0x3fe7
                     3FE6  2025 G$XU0SHREG$0$0 == 0x3fe6
                     3FE6  2026 _XU0SHREG	=	0x3fe6
                     3FE5  2027 G$XU0STATUS$0$0 == 0x3fe5
                     3FE5  2028 _XU0STATUS	=	0x3fe5
                     3FEC  2029 G$XU1CTRL$0$0 == 0x3fec
                     3FEC  2030 _XU1CTRL	=	0x3fec
                     3FEF  2031 G$XU1MODE$0$0 == 0x3fef
                     3FEF  2032 _XU1MODE	=	0x3fef
                     3FEE  2033 G$XU1SHREG$0$0 == 0x3fee
                     3FEE  2034 _XU1SHREG	=	0x3fee
                     3FED  2035 G$XU1STATUS$0$0 == 0x3fed
                     3FED  2036 _XU1STATUS	=	0x3fed
                     3FDA  2037 G$XWDTCFG$0$0 == 0x3fda
                     3FDA  2038 _XWDTCFG	=	0x3fda
                     3FDB  2039 G$XWDTRESET$0$0 == 0x3fdb
                     3FDB  2040 _XWDTRESET	=	0x3fdb
                     3FF1  2041 G$XWTCFGA$0$0 == 0x3ff1
                     3FF1  2042 _XWTCFGA	=	0x3ff1
                     3FF9  2043 G$XWTCFGB$0$0 == 0x3ff9
                     3FF9  2044 _XWTCFGB	=	0x3ff9
                     3FF2  2045 G$XWTCNTA0$0$0 == 0x3ff2
                     3FF2  2046 _XWTCNTA0	=	0x3ff2
                     3FF3  2047 G$XWTCNTA1$0$0 == 0x3ff3
                     3FF3  2048 _XWTCNTA1	=	0x3ff3
                     3FF2  2049 G$XWTCNTA$0$0 == 0x3ff2
                     3FF2  2050 _XWTCNTA	=	0x3ff2
                     3FFA  2051 G$XWTCNTB0$0$0 == 0x3ffa
                     3FFA  2052 _XWTCNTB0	=	0x3ffa
                     3FFB  2053 G$XWTCNTB1$0$0 == 0x3ffb
                     3FFB  2054 _XWTCNTB1	=	0x3ffb
                     3FFA  2055 G$XWTCNTB$0$0 == 0x3ffa
                     3FFA  2056 _XWTCNTB	=	0x3ffa
                     3FEB  2057 G$XWTCNTR1$0$0 == 0x3feb
                     3FEB  2058 _XWTCNTR1	=	0x3feb
                     3FF4  2059 G$XWTEVTA0$0$0 == 0x3ff4
                     3FF4  2060 _XWTEVTA0	=	0x3ff4
                     3FF5  2061 G$XWTEVTA1$0$0 == 0x3ff5
                     3FF5  2062 _XWTEVTA1	=	0x3ff5
                     3FF4  2063 G$XWTEVTA$0$0 == 0x3ff4
                     3FF4  2064 _XWTEVTA	=	0x3ff4
                     3FF6  2065 G$XWTEVTB0$0$0 == 0x3ff6
                     3FF6  2066 _XWTEVTB0	=	0x3ff6
                     3FF7  2067 G$XWTEVTB1$0$0 == 0x3ff7
                     3FF7  2068 _XWTEVTB1	=	0x3ff7
                     3FF6  2069 G$XWTEVTB$0$0 == 0x3ff6
                     3FF6  2070 _XWTEVTB	=	0x3ff6
                     3FFC  2071 G$XWTEVTC0$0$0 == 0x3ffc
                     3FFC  2072 _XWTEVTC0	=	0x3ffc
                     3FFD  2073 G$XWTEVTC1$0$0 == 0x3ffd
                     3FFD  2074 _XWTEVTC1	=	0x3ffd
                     3FFC  2075 G$XWTEVTC$0$0 == 0x3ffc
                     3FFC  2076 _XWTEVTC	=	0x3ffc
                     3FFE  2077 G$XWTEVTD0$0$0 == 0x3ffe
                     3FFE  2078 _XWTEVTD0	=	0x3ffe
                     3FFF  2079 G$XWTEVTD1$0$0 == 0x3fff
                     3FFF  2080 _XWTEVTD1	=	0x3fff
                     3FFE  2081 G$XWTEVTD$0$0 == 0x3ffe
                     3FFE  2082 _XWTEVTD	=	0x3ffe
                     3FE9  2083 G$XWTIRQEN$0$0 == 0x3fe9
                     3FE9  2084 _XWTIRQEN	=	0x3fe9
                     3FEA  2085 G$XWTSTAT$0$0 == 0x3fea
                     3FEA  2086 _XWTSTAT	=	0x3fea
                     4114  2087 G$AX5043_AFSKCTRL$0$0 == 0x4114
                     4114  2088 _AX5043_AFSKCTRL	=	0x4114
                     4113  2089 G$AX5043_AFSKMARK0$0$0 == 0x4113
                     4113  2090 _AX5043_AFSKMARK0	=	0x4113
                     4112  2091 G$AX5043_AFSKMARK1$0$0 == 0x4112
                     4112  2092 _AX5043_AFSKMARK1	=	0x4112
                     4111  2093 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                     4111  2094 _AX5043_AFSKSPACE0	=	0x4111
                     4110  2095 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                     4110  2096 _AX5043_AFSKSPACE1	=	0x4110
                     4043  2097 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                     4043  2098 _AX5043_AGCCOUNTER	=	0x4043
                     4115  2099 G$AX5043_AMPLFILTER$0$0 == 0x4115
                     4115  2100 _AX5043_AMPLFILTER	=	0x4115
                     4189  2101 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                     4189  2102 _AX5043_BBOFFSCAP	=	0x4189
                     4188  2103 G$AX5043_BBTUNE$0$0 == 0x4188
                     4188  2104 _AX5043_BBTUNE	=	0x4188
                     4041  2105 G$AX5043_BGNDRSSI$0$0 == 0x4041
                     4041  2106 _AX5043_BGNDRSSI	=	0x4041
                     422E  2107 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                     422E  2108 _AX5043_BGNDRSSIGAIN	=	0x422e
                     422F  2109 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                     422F  2110 _AX5043_BGNDRSSITHR	=	0x422f
                     4017  2111 G$AX5043_CRCINIT0$0$0 == 0x4017
                     4017  2112 _AX5043_CRCINIT0	=	0x4017
                     4016  2113 G$AX5043_CRCINIT1$0$0 == 0x4016
                     4016  2114 _AX5043_CRCINIT1	=	0x4016
                     4015  2115 G$AX5043_CRCINIT2$0$0 == 0x4015
                     4015  2116 _AX5043_CRCINIT2	=	0x4015
                     4014  2117 G$AX5043_CRCINIT3$0$0 == 0x4014
                     4014  2118 _AX5043_CRCINIT3	=	0x4014
                     4332  2119 G$AX5043_DACCONFIG$0$0 == 0x4332
                     4332  2120 _AX5043_DACCONFIG	=	0x4332
                     4331  2121 G$AX5043_DACVALUE0$0$0 == 0x4331
                     4331  2122 _AX5043_DACVALUE0	=	0x4331
                     4330  2123 G$AX5043_DACVALUE1$0$0 == 0x4330
                     4330  2124 _AX5043_DACVALUE1	=	0x4330
                     4102  2125 G$AX5043_DECIMATION$0$0 == 0x4102
                     4102  2126 _AX5043_DECIMATION	=	0x4102
                     4042  2127 G$AX5043_DIVERSITY$0$0 == 0x4042
                     4042  2128 _AX5043_DIVERSITY	=	0x4042
                     4011  2129 G$AX5043_ENCODING$0$0 == 0x4011
                     4011  2130 _AX5043_ENCODING	=	0x4011
                     4018  2131 G$AX5043_FEC$0$0 == 0x4018
                     4018  2132 _AX5043_FEC	=	0x4018
                     401A  2133 G$AX5043_FECSTATUS$0$0 == 0x401a
                     401A  2134 _AX5043_FECSTATUS	=	0x401a
                     4019  2135 G$AX5043_FECSYNC$0$0 == 0x4019
                     4019  2136 _AX5043_FECSYNC	=	0x4019
                     402B  2137 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                     402B  2138 _AX5043_FIFOCOUNT0	=	0x402b
                     402A  2139 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                     402A  2140 _AX5043_FIFOCOUNT1	=	0x402a
                     4029  2141 G$AX5043_FIFODATA$0$0 == 0x4029
                     4029  2142 _AX5043_FIFODATA	=	0x4029
                     402D  2143 G$AX5043_FIFOFREE0$0$0 == 0x402d
                     402D  2144 _AX5043_FIFOFREE0	=	0x402d
                     402C  2145 G$AX5043_FIFOFREE1$0$0 == 0x402c
                     402C  2146 _AX5043_FIFOFREE1	=	0x402c
                     4028  2147 G$AX5043_FIFOSTAT$0$0 == 0x4028
                     4028  2148 _AX5043_FIFOSTAT	=	0x4028
                     402F  2149 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                     402F  2150 _AX5043_FIFOTHRESH0	=	0x402f
                     402E  2151 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                     402E  2152 _AX5043_FIFOTHRESH1	=	0x402e
                     4012  2153 G$AX5043_FRAMING$0$0 == 0x4012
                     4012  2154 _AX5043_FRAMING	=	0x4012
                     4037  2155 G$AX5043_FREQA0$0$0 == 0x4037
                     4037  2156 _AX5043_FREQA0	=	0x4037
                     4036  2157 G$AX5043_FREQA1$0$0 == 0x4036
                     4036  2158 _AX5043_FREQA1	=	0x4036
                     4035  2159 G$AX5043_FREQA2$0$0 == 0x4035
                     4035  2160 _AX5043_FREQA2	=	0x4035
                     4034  2161 G$AX5043_FREQA3$0$0 == 0x4034
                     4034  2162 _AX5043_FREQA3	=	0x4034
                     403F  2163 G$AX5043_FREQB0$0$0 == 0x403f
                     403F  2164 _AX5043_FREQB0	=	0x403f
                     403E  2165 G$AX5043_FREQB1$0$0 == 0x403e
                     403E  2166 _AX5043_FREQB1	=	0x403e
                     403D  2167 G$AX5043_FREQB2$0$0 == 0x403d
                     403D  2168 _AX5043_FREQB2	=	0x403d
                     403C  2169 G$AX5043_FREQB3$0$0 == 0x403c
                     403C  2170 _AX5043_FREQB3	=	0x403c
                     4163  2171 G$AX5043_FSKDEV0$0$0 == 0x4163
                     4163  2172 _AX5043_FSKDEV0	=	0x4163
                     4162  2173 G$AX5043_FSKDEV1$0$0 == 0x4162
                     4162  2174 _AX5043_FSKDEV1	=	0x4162
                     4161  2175 G$AX5043_FSKDEV2$0$0 == 0x4161
                     4161  2176 _AX5043_FSKDEV2	=	0x4161
                     410D  2177 G$AX5043_FSKDMAX0$0$0 == 0x410d
                     410D  2178 _AX5043_FSKDMAX0	=	0x410d
                     410C  2179 G$AX5043_FSKDMAX1$0$0 == 0x410c
                     410C  2180 _AX5043_FSKDMAX1	=	0x410c
                     410F  2181 G$AX5043_FSKDMIN0$0$0 == 0x410f
                     410F  2182 _AX5043_FSKDMIN0	=	0x410f
                     410E  2183 G$AX5043_FSKDMIN1$0$0 == 0x410e
                     410E  2184 _AX5043_FSKDMIN1	=	0x410e
                     4309  2185 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                     4309  2186 _AX5043_GPADC13VALUE0	=	0x4309
                     4308  2187 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                     4308  2188 _AX5043_GPADC13VALUE1	=	0x4308
                     4300  2189 G$AX5043_GPADCCTRL$0$0 == 0x4300
                     4300  2190 _AX5043_GPADCCTRL	=	0x4300
                     4301  2191 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                     4301  2192 _AX5043_GPADCPERIOD	=	0x4301
                     4101  2193 G$AX5043_IFFREQ0$0$0 == 0x4101
                     4101  2194 _AX5043_IFFREQ0	=	0x4101
                     4100  2195 G$AX5043_IFFREQ1$0$0 == 0x4100
                     4100  2196 _AX5043_IFFREQ1	=	0x4100
                     400B  2197 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                     400B  2198 _AX5043_IRQINVERSION0	=	0x400b
                     400A  2199 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                     400A  2200 _AX5043_IRQINVERSION1	=	0x400a
                     4007  2201 G$AX5043_IRQMASK0$0$0 == 0x4007
                     4007  2202 _AX5043_IRQMASK0	=	0x4007
                     4006  2203 G$AX5043_IRQMASK1$0$0 == 0x4006
                     4006  2204 _AX5043_IRQMASK1	=	0x4006
                     400D  2205 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                     400D  2206 _AX5043_IRQREQUEST0	=	0x400d
                     400C  2207 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                     400C  2208 _AX5043_IRQREQUEST1	=	0x400c
                     4310  2209 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                     4310  2210 _AX5043_LPOSCCONFIG	=	0x4310
                     4317  2211 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                     4317  2212 _AX5043_LPOSCFREQ0	=	0x4317
                     4316  2213 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                     4316  2214 _AX5043_LPOSCFREQ1	=	0x4316
                     4313  2215 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                     4313  2216 _AX5043_LPOSCKFILT0	=	0x4313
                     4312  2217 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                     4312  2218 _AX5043_LPOSCKFILT1	=	0x4312
                     4319  2219 G$AX5043_LPOSCPER0$0$0 == 0x4319
                     4319  2220 _AX5043_LPOSCPER0	=	0x4319
                     4318  2221 G$AX5043_LPOSCPER1$0$0 == 0x4318
                     4318  2222 _AX5043_LPOSCPER1	=	0x4318
                     4315  2223 G$AX5043_LPOSCREF0$0$0 == 0x4315
                     4315  2224 _AX5043_LPOSCREF0	=	0x4315
                     4314  2225 G$AX5043_LPOSCREF1$0$0 == 0x4314
                     4314  2226 _AX5043_LPOSCREF1	=	0x4314
                     4311  2227 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                     4311  2228 _AX5043_LPOSCSTATUS	=	0x4311
                     4214  2229 G$AX5043_MATCH0LEN$0$0 == 0x4214
                     4214  2230 _AX5043_MATCH0LEN	=	0x4214
                     4216  2231 G$AX5043_MATCH0MAX$0$0 == 0x4216
                     4216  2232 _AX5043_MATCH0MAX	=	0x4216
                     4215  2233 G$AX5043_MATCH0MIN$0$0 == 0x4215
                     4215  2234 _AX5043_MATCH0MIN	=	0x4215
                     4213  2235 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                     4213  2236 _AX5043_MATCH0PAT0	=	0x4213
                     4212  2237 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                     4212  2238 _AX5043_MATCH0PAT1	=	0x4212
                     4211  2239 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                     4211  2240 _AX5043_MATCH0PAT2	=	0x4211
                     4210  2241 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                     4210  2242 _AX5043_MATCH0PAT3	=	0x4210
                     421C  2243 G$AX5043_MATCH1LEN$0$0 == 0x421c
                     421C  2244 _AX5043_MATCH1LEN	=	0x421c
                     421E  2245 G$AX5043_MATCH1MAX$0$0 == 0x421e
                     421E  2246 _AX5043_MATCH1MAX	=	0x421e
                     421D  2247 G$AX5043_MATCH1MIN$0$0 == 0x421d
                     421D  2248 _AX5043_MATCH1MIN	=	0x421d
                     4219  2249 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                     4219  2250 _AX5043_MATCH1PAT0	=	0x4219
                     4218  2251 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                     4218  2252 _AX5043_MATCH1PAT1	=	0x4218
                     4108  2253 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                     4108  2254 _AX5043_MAXDROFFSET0	=	0x4108
                     4107  2255 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                     4107  2256 _AX5043_MAXDROFFSET1	=	0x4107
                     4106  2257 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                     4106  2258 _AX5043_MAXDROFFSET2	=	0x4106
                     410B  2259 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                     410B  2260 _AX5043_MAXRFOFFSET0	=	0x410b
                     410A  2261 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                     410A  2262 _AX5043_MAXRFOFFSET1	=	0x410a
                     4109  2263 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                     4109  2264 _AX5043_MAXRFOFFSET2	=	0x4109
                     4164  2265 G$AX5043_MODCFGA$0$0 == 0x4164
                     4164  2266 _AX5043_MODCFGA	=	0x4164
                     4160  2267 G$AX5043_MODCFGF$0$0 == 0x4160
                     4160  2268 _AX5043_MODCFGF	=	0x4160
                     4010  2269 G$AX5043_MODULATION$0$0 == 0x4010
                     4010  2270 _AX5043_MODULATION	=	0x4010
                     4025  2271 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                     4025  2272 _AX5043_PINFUNCANTSEL	=	0x4025
                     4023  2273 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                     4023  2274 _AX5043_PINFUNCDATA	=	0x4023
                     4022  2275 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                     4022  2276 _AX5043_PINFUNCDCLK	=	0x4022
                     4024  2277 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                     4024  2278 _AX5043_PINFUNCIRQ	=	0x4024
                     4026  2279 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                     4026  2280 _AX5043_PINFUNCPWRAMP	=	0x4026
                     4021  2281 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                     4021  2282 _AX5043_PINFUNCSYSCLK	=	0x4021
                     4020  2283 G$AX5043_PINSTATE$0$0 == 0x4020
                     4020  2284 _AX5043_PINSTATE	=	0x4020
                     4233  2285 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                     4233  2286 _AX5043_PKTACCEPTFLAGS	=	0x4233
                     4230  2287 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                     4230  2288 _AX5043_PKTCHUNKSIZE	=	0x4230
                     4231  2289 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                     4231  2290 _AX5043_PKTMISCFLAGS	=	0x4231
                     4232  2291 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                     4232  2292 _AX5043_PKTSTOREFLAGS	=	0x4232
                     4031  2293 G$AX5043_PLLCPI$0$0 == 0x4031
                     4031  2294 _AX5043_PLLCPI	=	0x4031
                     4039  2295 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                     4039  2296 _AX5043_PLLCPIBOOST	=	0x4039
                     4182  2297 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                     4182  2298 _AX5043_PLLLOCKDET	=	0x4182
                     4030  2299 G$AX5043_PLLLOOP$0$0 == 0x4030
                     4030  2300 _AX5043_PLLLOOP	=	0x4030
                     4038  2301 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                     4038  2302 _AX5043_PLLLOOPBOOST	=	0x4038
                     4033  2303 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                     4033  2304 _AX5043_PLLRANGINGA	=	0x4033
                     403B  2305 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                     403B  2306 _AX5043_PLLRANGINGB	=	0x403b
                     4183  2307 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                     4183  2308 _AX5043_PLLRNGCLK	=	0x4183
                     4032  2309 G$AX5043_PLLVCODIV$0$0 == 0x4032
                     4032  2310 _AX5043_PLLVCODIV	=	0x4032
                     4180  2311 G$AX5043_PLLVCOI$0$0 == 0x4180
                     4180  2312 _AX5043_PLLVCOI	=	0x4180
                     4181  2313 G$AX5043_PLLVCOIR$0$0 == 0x4181
                     4181  2314 _AX5043_PLLVCOIR	=	0x4181
                     4005  2315 G$AX5043_POWIRQMASK$0$0 == 0x4005
                     4005  2316 _AX5043_POWIRQMASK	=	0x4005
                     4003  2317 G$AX5043_POWSTAT$0$0 == 0x4003
                     4003  2318 _AX5043_POWSTAT	=	0x4003
                     4004  2319 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                     4004  2320 _AX5043_POWSTICKYSTAT	=	0x4004
                     4027  2321 G$AX5043_PWRAMP$0$0 == 0x4027
                     4027  2322 _AX5043_PWRAMP	=	0x4027
                     4002  2323 G$AX5043_PWRMODE$0$0 == 0x4002
                     4002  2324 _AX5043_PWRMODE	=	0x4002
                     4009  2325 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                     4009  2326 _AX5043_RADIOEVENTMASK0	=	0x4009
                     4008  2327 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                     4008  2328 _AX5043_RADIOEVENTMASK1	=	0x4008
                     400F  2329 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                     400F  2330 _AX5043_RADIOEVENTREQ0	=	0x400f
                     400E  2331 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                     400E  2332 _AX5043_RADIOEVENTREQ1	=	0x400e
                     401C  2333 G$AX5043_RADIOSTATE$0$0 == 0x401c
                     401C  2334 _AX5043_RADIOSTATE	=	0x401c
                     4040  2335 G$AX5043_RSSI$0$0 == 0x4040
                     4040  2336 _AX5043_RSSI	=	0x4040
                     422D  2337 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                     422D  2338 _AX5043_RSSIABSTHR	=	0x422d
                     422C  2339 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                     422C  2340 _AX5043_RSSIREFERENCE	=	0x422c
                     4105  2341 G$AX5043_RXDATARATE0$0$0 == 0x4105
                     4105  2342 _AX5043_RXDATARATE0	=	0x4105
                     4104  2343 G$AX5043_RXDATARATE1$0$0 == 0x4104
                     4104  2344 _AX5043_RXDATARATE1	=	0x4104
                     4103  2345 G$AX5043_RXDATARATE2$0$0 == 0x4103
                     4103  2346 _AX5043_RXDATARATE2	=	0x4103
                     4001  2347 G$AX5043_SCRATCH$0$0 == 0x4001
                     4001  2348 _AX5043_SCRATCH	=	0x4001
                     4000  2349 G$AX5043_SILICONREVISION$0$0 == 0x4000
                     4000  2350 _AX5043_SILICONREVISION	=	0x4000
                     405B  2351 G$AX5043_TIMER0$0$0 == 0x405b
                     405B  2352 _AX5043_TIMER0	=	0x405b
                     405A  2353 G$AX5043_TIMER1$0$0 == 0x405a
                     405A  2354 _AX5043_TIMER1	=	0x405a
                     4059  2355 G$AX5043_TIMER2$0$0 == 0x4059
                     4059  2356 _AX5043_TIMER2	=	0x4059
                     4227  2357 G$AX5043_TMGRXAGC$0$0 == 0x4227
                     4227  2358 _AX5043_TMGRXAGC	=	0x4227
                     4223  2359 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                     4223  2360 _AX5043_TMGRXBOOST	=	0x4223
                     4226  2361 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                     4226  2362 _AX5043_TMGRXCOARSEAGC	=	0x4226
                     4225  2363 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                     4225  2364 _AX5043_TMGRXOFFSACQ	=	0x4225
                     4229  2365 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                     4229  2366 _AX5043_TMGRXPREAMBLE1	=	0x4229
                     422A  2367 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                     422A  2368 _AX5043_TMGRXPREAMBLE2	=	0x422a
                     422B  2369 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                     422B  2370 _AX5043_TMGRXPREAMBLE3	=	0x422b
                     4228  2371 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                     4228  2372 _AX5043_TMGRXRSSI	=	0x4228
                     4224  2373 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                     4224  2374 _AX5043_TMGRXSETTLE	=	0x4224
                     4220  2375 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                     4220  2376 _AX5043_TMGTXBOOST	=	0x4220
                     4221  2377 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                     4221  2378 _AX5043_TMGTXSETTLE	=	0x4221
                     4055  2379 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                     4055  2380 _AX5043_TRKAFSKDEMOD0	=	0x4055
                     4054  2381 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                     4054  2382 _AX5043_TRKAFSKDEMOD1	=	0x4054
                     4049  2383 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                     4049  2384 _AX5043_TRKAMPLITUDE0	=	0x4049
                     4048  2385 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                     4048  2386 _AX5043_TRKAMPLITUDE1	=	0x4048
                     4047  2387 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                     4047  2388 _AX5043_TRKDATARATE0	=	0x4047
                     4046  2389 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                     4046  2390 _AX5043_TRKDATARATE1	=	0x4046
                     4045  2391 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                     4045  2392 _AX5043_TRKDATARATE2	=	0x4045
                     4051  2393 G$AX5043_TRKFREQ0$0$0 == 0x4051
                     4051  2394 _AX5043_TRKFREQ0	=	0x4051
                     4050  2395 G$AX5043_TRKFREQ1$0$0 == 0x4050
                     4050  2396 _AX5043_TRKFREQ1	=	0x4050
                     4053  2397 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                     4053  2398 _AX5043_TRKFSKDEMOD0	=	0x4053
                     4052  2399 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                     4052  2400 _AX5043_TRKFSKDEMOD1	=	0x4052
                     404B  2401 G$AX5043_TRKPHASE0$0$0 == 0x404b
                     404B  2402 _AX5043_TRKPHASE0	=	0x404b
                     404A  2403 G$AX5043_TRKPHASE1$0$0 == 0x404a
                     404A  2404 _AX5043_TRKPHASE1	=	0x404a
                     404F  2405 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                     404F  2406 _AX5043_TRKRFFREQ0	=	0x404f
                     404E  2407 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                     404E  2408 _AX5043_TRKRFFREQ1	=	0x404e
                     404D  2409 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                     404D  2410 _AX5043_TRKRFFREQ2	=	0x404d
                     4169  2411 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                     4169  2412 _AX5043_TXPWRCOEFFA0	=	0x4169
                     4168  2413 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                     4168  2414 _AX5043_TXPWRCOEFFA1	=	0x4168
                     416B  2415 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                     416B  2416 _AX5043_TXPWRCOEFFB0	=	0x416b
                     416A  2417 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                     416A  2418 _AX5043_TXPWRCOEFFB1	=	0x416a
                     416D  2419 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                     416D  2420 _AX5043_TXPWRCOEFFC0	=	0x416d
                     416C  2421 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                     416C  2422 _AX5043_TXPWRCOEFFC1	=	0x416c
                     416F  2423 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                     416F  2424 _AX5043_TXPWRCOEFFD0	=	0x416f
                     416E  2425 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                     416E  2426 _AX5043_TXPWRCOEFFD1	=	0x416e
                     4171  2427 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                     4171  2428 _AX5043_TXPWRCOEFFE0	=	0x4171
                     4170  2429 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                     4170  2430 _AX5043_TXPWRCOEFFE1	=	0x4170
                     4167  2431 G$AX5043_TXRATE0$0$0 == 0x4167
                     4167  2432 _AX5043_TXRATE0	=	0x4167
                     4166  2433 G$AX5043_TXRATE1$0$0 == 0x4166
                     4166  2434 _AX5043_TXRATE1	=	0x4166
                     4165  2435 G$AX5043_TXRATE2$0$0 == 0x4165
                     4165  2436 _AX5043_TXRATE2	=	0x4165
                     406B  2437 G$AX5043_WAKEUP0$0$0 == 0x406b
                     406B  2438 _AX5043_WAKEUP0	=	0x406b
                     406A  2439 G$AX5043_WAKEUP1$0$0 == 0x406a
                     406A  2440 _AX5043_WAKEUP1	=	0x406a
                     406D  2441 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                     406D  2442 _AX5043_WAKEUPFREQ0	=	0x406d
                     406C  2443 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                     406C  2444 _AX5043_WAKEUPFREQ1	=	0x406c
                     4069  2445 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                     4069  2446 _AX5043_WAKEUPTIMER0	=	0x4069
                     4068  2447 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                     4068  2448 _AX5043_WAKEUPTIMER1	=	0x4068
                     406E  2449 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                     406E  2450 _AX5043_WAKEUPXOEARLY	=	0x406e
                     4184  2451 G$AX5043_XTALCAP$0$0 == 0x4184
                     4184  2452 _AX5043_XTALCAP	=	0x4184
                     401D  2453 G$AX5043_XTALSTATUS$0$0 == 0x401d
                     401D  2454 _AX5043_XTALSTATUS	=	0x401d
                     4122  2455 G$AX5043_AGCAHYST0$0$0 == 0x4122
                     4122  2456 _AX5043_AGCAHYST0	=	0x4122
                     4132  2457 G$AX5043_AGCAHYST1$0$0 == 0x4132
                     4132  2458 _AX5043_AGCAHYST1	=	0x4132
                     4142  2459 G$AX5043_AGCAHYST2$0$0 == 0x4142
                     4142  2460 _AX5043_AGCAHYST2	=	0x4142
                     4152  2461 G$AX5043_AGCAHYST3$0$0 == 0x4152
                     4152  2462 _AX5043_AGCAHYST3	=	0x4152
                     4120  2463 G$AX5043_AGCGAIN0$0$0 == 0x4120
                     4120  2464 _AX5043_AGCGAIN0	=	0x4120
                     4130  2465 G$AX5043_AGCGAIN1$0$0 == 0x4130
                     4130  2466 _AX5043_AGCGAIN1	=	0x4130
                     4140  2467 G$AX5043_AGCGAIN2$0$0 == 0x4140
                     4140  2468 _AX5043_AGCGAIN2	=	0x4140
                     4150  2469 G$AX5043_AGCGAIN3$0$0 == 0x4150
                     4150  2470 _AX5043_AGCGAIN3	=	0x4150
                     4123  2471 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                     4123  2472 _AX5043_AGCMINMAX0	=	0x4123
                     4133  2473 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                     4133  2474 _AX5043_AGCMINMAX1	=	0x4133
                     4143  2475 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                     4143  2476 _AX5043_AGCMINMAX2	=	0x4143
                     4153  2477 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                     4153  2478 _AX5043_AGCMINMAX3	=	0x4153
                     4121  2479 G$AX5043_AGCTARGET0$0$0 == 0x4121
                     4121  2480 _AX5043_AGCTARGET0	=	0x4121
                     4131  2481 G$AX5043_AGCTARGET1$0$0 == 0x4131
                     4131  2482 _AX5043_AGCTARGET1	=	0x4131
                     4141  2483 G$AX5043_AGCTARGET2$0$0 == 0x4141
                     4141  2484 _AX5043_AGCTARGET2	=	0x4141
                     4151  2485 G$AX5043_AGCTARGET3$0$0 == 0x4151
                     4151  2486 _AX5043_AGCTARGET3	=	0x4151
                     412B  2487 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                     412B  2488 _AX5043_AMPLITUDEGAIN0	=	0x412b
                     413B  2489 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                     413B  2490 _AX5043_AMPLITUDEGAIN1	=	0x413b
                     414B  2491 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                     414B  2492 _AX5043_AMPLITUDEGAIN2	=	0x414b
                     415B  2493 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                     415B  2494 _AX5043_AMPLITUDEGAIN3	=	0x415b
                     412F  2495 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                     412F  2496 _AX5043_BBOFFSRES0	=	0x412f
                     413F  2497 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                     413F  2498 _AX5043_BBOFFSRES1	=	0x413f
                     414F  2499 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                     414F  2500 _AX5043_BBOFFSRES2	=	0x414f
                     415F  2501 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                     415F  2502 _AX5043_BBOFFSRES3	=	0x415f
                     4125  2503 G$AX5043_DRGAIN0$0$0 == 0x4125
                     4125  2504 _AX5043_DRGAIN0	=	0x4125
                     4135  2505 G$AX5043_DRGAIN1$0$0 == 0x4135
                     4135  2506 _AX5043_DRGAIN1	=	0x4135
                     4145  2507 G$AX5043_DRGAIN2$0$0 == 0x4145
                     4145  2508 _AX5043_DRGAIN2	=	0x4145
                     4155  2509 G$AX5043_DRGAIN3$0$0 == 0x4155
                     4155  2510 _AX5043_DRGAIN3	=	0x4155
                     412E  2511 G$AX5043_FOURFSK0$0$0 == 0x412e
                     412E  2512 _AX5043_FOURFSK0	=	0x412e
                     413E  2513 G$AX5043_FOURFSK1$0$0 == 0x413e
                     413E  2514 _AX5043_FOURFSK1	=	0x413e
                     414E  2515 G$AX5043_FOURFSK2$0$0 == 0x414e
                     414E  2516 _AX5043_FOURFSK2	=	0x414e
                     415E  2517 G$AX5043_FOURFSK3$0$0 == 0x415e
                     415E  2518 _AX5043_FOURFSK3	=	0x415e
                     412D  2519 G$AX5043_FREQDEV00$0$0 == 0x412d
                     412D  2520 _AX5043_FREQDEV00	=	0x412d
                     413D  2521 G$AX5043_FREQDEV01$0$0 == 0x413d
                     413D  2522 _AX5043_FREQDEV01	=	0x413d
                     414D  2523 G$AX5043_FREQDEV02$0$0 == 0x414d
                     414D  2524 _AX5043_FREQDEV02	=	0x414d
                     415D  2525 G$AX5043_FREQDEV03$0$0 == 0x415d
                     415D  2526 _AX5043_FREQDEV03	=	0x415d
                     412C  2527 G$AX5043_FREQDEV10$0$0 == 0x412c
                     412C  2528 _AX5043_FREQDEV10	=	0x412c
                     413C  2529 G$AX5043_FREQDEV11$0$0 == 0x413c
                     413C  2530 _AX5043_FREQDEV11	=	0x413c
                     414C  2531 G$AX5043_FREQDEV12$0$0 == 0x414c
                     414C  2532 _AX5043_FREQDEV12	=	0x414c
                     415C  2533 G$AX5043_FREQDEV13$0$0 == 0x415c
                     415C  2534 _AX5043_FREQDEV13	=	0x415c
                     4127  2535 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                     4127  2536 _AX5043_FREQUENCYGAINA0	=	0x4127
                     4137  2537 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                     4137  2538 _AX5043_FREQUENCYGAINA1	=	0x4137
                     4147  2539 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                     4147  2540 _AX5043_FREQUENCYGAINA2	=	0x4147
                     4157  2541 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                     4157  2542 _AX5043_FREQUENCYGAINA3	=	0x4157
                     4128  2543 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                     4128  2544 _AX5043_FREQUENCYGAINB0	=	0x4128
                     4138  2545 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                     4138  2546 _AX5043_FREQUENCYGAINB1	=	0x4138
                     4148  2547 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                     4148  2548 _AX5043_FREQUENCYGAINB2	=	0x4148
                     4158  2549 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                     4158  2550 _AX5043_FREQUENCYGAINB3	=	0x4158
                     4129  2551 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                     4129  2552 _AX5043_FREQUENCYGAINC0	=	0x4129
                     4139  2553 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                     4139  2554 _AX5043_FREQUENCYGAINC1	=	0x4139
                     4149  2555 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                     4149  2556 _AX5043_FREQUENCYGAINC2	=	0x4149
                     4159  2557 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                     4159  2558 _AX5043_FREQUENCYGAINC3	=	0x4159
                     412A  2559 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                     412A  2560 _AX5043_FREQUENCYGAIND0	=	0x412a
                     413A  2561 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                     413A  2562 _AX5043_FREQUENCYGAIND1	=	0x413a
                     414A  2563 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                     414A  2564 _AX5043_FREQUENCYGAIND2	=	0x414a
                     415A  2565 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                     415A  2566 _AX5043_FREQUENCYGAIND3	=	0x415a
                     4116  2567 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                     4116  2568 _AX5043_FREQUENCYLEAK	=	0x4116
                     4126  2569 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                     4126  2570 _AX5043_PHASEGAIN0	=	0x4126
                     4136  2571 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                     4136  2572 _AX5043_PHASEGAIN1	=	0x4136
                     4146  2573 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                     4146  2574 _AX5043_PHASEGAIN2	=	0x4146
                     4156  2575 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                     4156  2576 _AX5043_PHASEGAIN3	=	0x4156
                     4207  2577 G$AX5043_PKTADDR0$0$0 == 0x4207
                     4207  2578 _AX5043_PKTADDR0	=	0x4207
                     4206  2579 G$AX5043_PKTADDR1$0$0 == 0x4206
                     4206  2580 _AX5043_PKTADDR1	=	0x4206
                     4205  2581 G$AX5043_PKTADDR2$0$0 == 0x4205
                     4205  2582 _AX5043_PKTADDR2	=	0x4205
                     4204  2583 G$AX5043_PKTADDR3$0$0 == 0x4204
                     4204  2584 _AX5043_PKTADDR3	=	0x4204
                     4200  2585 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                     4200  2586 _AX5043_PKTADDRCFG	=	0x4200
                     420B  2587 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                     420B  2588 _AX5043_PKTADDRMASK0	=	0x420b
                     420A  2589 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                     420A  2590 _AX5043_PKTADDRMASK1	=	0x420a
                     4209  2591 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                     4209  2592 _AX5043_PKTADDRMASK2	=	0x4209
                     4208  2593 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                     4208  2594 _AX5043_PKTADDRMASK3	=	0x4208
                     4201  2595 G$AX5043_PKTLENCFG$0$0 == 0x4201
                     4201  2596 _AX5043_PKTLENCFG	=	0x4201
                     4202  2597 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                     4202  2598 _AX5043_PKTLENOFFSET	=	0x4202
                     4203  2599 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                     4203  2600 _AX5043_PKTMAXLEN	=	0x4203
                     4118  2601 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                     4118  2602 _AX5043_RXPARAMCURSET	=	0x4118
                     4117  2603 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                     4117  2604 _AX5043_RXPARAMSETS	=	0x4117
                     4124  2605 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                     4124  2606 _AX5043_TIMEGAIN0	=	0x4124
                     4134  2607 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                     4134  2608 _AX5043_TIMEGAIN1	=	0x4134
                     4144  2609 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                     4144  2610 _AX5043_TIMEGAIN2	=	0x4144
                     4154  2611 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                     4154  2612 _AX5043_TIMEGAIN3	=	0x4154
                     5114  2613 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                     5114  2614 _AX5043_AFSKCTRLNB	=	0x5114
                     5113  2615 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                     5113  2616 _AX5043_AFSKMARK0NB	=	0x5113
                     5112  2617 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                     5112  2618 _AX5043_AFSKMARK1NB	=	0x5112
                     5111  2619 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                     5111  2620 _AX5043_AFSKSPACE0NB	=	0x5111
                     5110  2621 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                     5110  2622 _AX5043_AFSKSPACE1NB	=	0x5110
                     5043  2623 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                     5043  2624 _AX5043_AGCCOUNTERNB	=	0x5043
                     5115  2625 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                     5115  2626 _AX5043_AMPLFILTERNB	=	0x5115
                     5189  2627 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                     5189  2628 _AX5043_BBOFFSCAPNB	=	0x5189
                     5188  2629 G$AX5043_BBTUNENB$0$0 == 0x5188
                     5188  2630 _AX5043_BBTUNENB	=	0x5188
                     5041  2631 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                     5041  2632 _AX5043_BGNDRSSINB	=	0x5041
                     522E  2633 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                     522E  2634 _AX5043_BGNDRSSIGAINNB	=	0x522e
                     522F  2635 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                     522F  2636 _AX5043_BGNDRSSITHRNB	=	0x522f
                     5017  2637 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                     5017  2638 _AX5043_CRCINIT0NB	=	0x5017
                     5016  2639 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                     5016  2640 _AX5043_CRCINIT1NB	=	0x5016
                     5015  2641 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                     5015  2642 _AX5043_CRCINIT2NB	=	0x5015
                     5014  2643 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                     5014  2644 _AX5043_CRCINIT3NB	=	0x5014
                     5332  2645 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                     5332  2646 _AX5043_DACCONFIGNB	=	0x5332
                     5331  2647 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                     5331  2648 _AX5043_DACVALUE0NB	=	0x5331
                     5330  2649 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                     5330  2650 _AX5043_DACVALUE1NB	=	0x5330
                     5102  2651 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                     5102  2652 _AX5043_DECIMATIONNB	=	0x5102
                     5042  2653 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                     5042  2654 _AX5043_DIVERSITYNB	=	0x5042
                     5011  2655 G$AX5043_ENCODINGNB$0$0 == 0x5011
                     5011  2656 _AX5043_ENCODINGNB	=	0x5011
                     5018  2657 G$AX5043_FECNB$0$0 == 0x5018
                     5018  2658 _AX5043_FECNB	=	0x5018
                     501A  2659 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                     501A  2660 _AX5043_FECSTATUSNB	=	0x501a
                     5019  2661 G$AX5043_FECSYNCNB$0$0 == 0x5019
                     5019  2662 _AX5043_FECSYNCNB	=	0x5019
                     502B  2663 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                     502B  2664 _AX5043_FIFOCOUNT0NB	=	0x502b
                     502A  2665 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                     502A  2666 _AX5043_FIFOCOUNT1NB	=	0x502a
                     5029  2667 G$AX5043_FIFODATANB$0$0 == 0x5029
                     5029  2668 _AX5043_FIFODATANB	=	0x5029
                     502D  2669 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                     502D  2670 _AX5043_FIFOFREE0NB	=	0x502d
                     502C  2671 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                     502C  2672 _AX5043_FIFOFREE1NB	=	0x502c
                     5028  2673 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                     5028  2674 _AX5043_FIFOSTATNB	=	0x5028
                     502F  2675 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                     502F  2676 _AX5043_FIFOTHRESH0NB	=	0x502f
                     502E  2677 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                     502E  2678 _AX5043_FIFOTHRESH1NB	=	0x502e
                     5012  2679 G$AX5043_FRAMINGNB$0$0 == 0x5012
                     5012  2680 _AX5043_FRAMINGNB	=	0x5012
                     5037  2681 G$AX5043_FREQA0NB$0$0 == 0x5037
                     5037  2682 _AX5043_FREQA0NB	=	0x5037
                     5036  2683 G$AX5043_FREQA1NB$0$0 == 0x5036
                     5036  2684 _AX5043_FREQA1NB	=	0x5036
                     5035  2685 G$AX5043_FREQA2NB$0$0 == 0x5035
                     5035  2686 _AX5043_FREQA2NB	=	0x5035
                     5034  2687 G$AX5043_FREQA3NB$0$0 == 0x5034
                     5034  2688 _AX5043_FREQA3NB	=	0x5034
                     503F  2689 G$AX5043_FREQB0NB$0$0 == 0x503f
                     503F  2690 _AX5043_FREQB0NB	=	0x503f
                     503E  2691 G$AX5043_FREQB1NB$0$0 == 0x503e
                     503E  2692 _AX5043_FREQB1NB	=	0x503e
                     503D  2693 G$AX5043_FREQB2NB$0$0 == 0x503d
                     503D  2694 _AX5043_FREQB2NB	=	0x503d
                     503C  2695 G$AX5043_FREQB3NB$0$0 == 0x503c
                     503C  2696 _AX5043_FREQB3NB	=	0x503c
                     5163  2697 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                     5163  2698 _AX5043_FSKDEV0NB	=	0x5163
                     5162  2699 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                     5162  2700 _AX5043_FSKDEV1NB	=	0x5162
                     5161  2701 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                     5161  2702 _AX5043_FSKDEV2NB	=	0x5161
                     510D  2703 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                     510D  2704 _AX5043_FSKDMAX0NB	=	0x510d
                     510C  2705 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                     510C  2706 _AX5043_FSKDMAX1NB	=	0x510c
                     510F  2707 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                     510F  2708 _AX5043_FSKDMIN0NB	=	0x510f
                     510E  2709 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                     510E  2710 _AX5043_FSKDMIN1NB	=	0x510e
                     5309  2711 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                     5309  2712 _AX5043_GPADC13VALUE0NB	=	0x5309
                     5308  2713 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                     5308  2714 _AX5043_GPADC13VALUE1NB	=	0x5308
                     5300  2715 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                     5300  2716 _AX5043_GPADCCTRLNB	=	0x5300
                     5301  2717 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                     5301  2718 _AX5043_GPADCPERIODNB	=	0x5301
                     5101  2719 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                     5101  2720 _AX5043_IFFREQ0NB	=	0x5101
                     5100  2721 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                     5100  2722 _AX5043_IFFREQ1NB	=	0x5100
                     500B  2723 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                     500B  2724 _AX5043_IRQINVERSION0NB	=	0x500b
                     500A  2725 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                     500A  2726 _AX5043_IRQINVERSION1NB	=	0x500a
                     5007  2727 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                     5007  2728 _AX5043_IRQMASK0NB	=	0x5007
                     5006  2729 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                     5006  2730 _AX5043_IRQMASK1NB	=	0x5006
                     500D  2731 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                     500D  2732 _AX5043_IRQREQUEST0NB	=	0x500d
                     500C  2733 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                     500C  2734 _AX5043_IRQREQUEST1NB	=	0x500c
                     5310  2735 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                     5310  2736 _AX5043_LPOSCCONFIGNB	=	0x5310
                     5317  2737 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                     5317  2738 _AX5043_LPOSCFREQ0NB	=	0x5317
                     5316  2739 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                     5316  2740 _AX5043_LPOSCFREQ1NB	=	0x5316
                     5313  2741 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                     5313  2742 _AX5043_LPOSCKFILT0NB	=	0x5313
                     5312  2743 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                     5312  2744 _AX5043_LPOSCKFILT1NB	=	0x5312
                     5319  2745 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                     5319  2746 _AX5043_LPOSCPER0NB	=	0x5319
                     5318  2747 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                     5318  2748 _AX5043_LPOSCPER1NB	=	0x5318
                     5315  2749 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                     5315  2750 _AX5043_LPOSCREF0NB	=	0x5315
                     5314  2751 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                     5314  2752 _AX5043_LPOSCREF1NB	=	0x5314
                     5311  2753 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                     5311  2754 _AX5043_LPOSCSTATUSNB	=	0x5311
                     5214  2755 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                     5214  2756 _AX5043_MATCH0LENNB	=	0x5214
                     5216  2757 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                     5216  2758 _AX5043_MATCH0MAXNB	=	0x5216
                     5215  2759 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                     5215  2760 _AX5043_MATCH0MINNB	=	0x5215
                     5213  2761 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                     5213  2762 _AX5043_MATCH0PAT0NB	=	0x5213
                     5212  2763 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                     5212  2764 _AX5043_MATCH0PAT1NB	=	0x5212
                     5211  2765 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                     5211  2766 _AX5043_MATCH0PAT2NB	=	0x5211
                     5210  2767 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                     5210  2768 _AX5043_MATCH0PAT3NB	=	0x5210
                     521C  2769 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                     521C  2770 _AX5043_MATCH1LENNB	=	0x521c
                     521E  2771 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                     521E  2772 _AX5043_MATCH1MAXNB	=	0x521e
                     521D  2773 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                     521D  2774 _AX5043_MATCH1MINNB	=	0x521d
                     5219  2775 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                     5219  2776 _AX5043_MATCH1PAT0NB	=	0x5219
                     5218  2777 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                     5218  2778 _AX5043_MATCH1PAT1NB	=	0x5218
                     5108  2779 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                     5108  2780 _AX5043_MAXDROFFSET0NB	=	0x5108
                     5107  2781 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                     5107  2782 _AX5043_MAXDROFFSET1NB	=	0x5107
                     5106  2783 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                     5106  2784 _AX5043_MAXDROFFSET2NB	=	0x5106
                     510B  2785 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                     510B  2786 _AX5043_MAXRFOFFSET0NB	=	0x510b
                     510A  2787 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                     510A  2788 _AX5043_MAXRFOFFSET1NB	=	0x510a
                     5109  2789 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                     5109  2790 _AX5043_MAXRFOFFSET2NB	=	0x5109
                     5164  2791 G$AX5043_MODCFGANB$0$0 == 0x5164
                     5164  2792 _AX5043_MODCFGANB	=	0x5164
                     5160  2793 G$AX5043_MODCFGFNB$0$0 == 0x5160
                     5160  2794 _AX5043_MODCFGFNB	=	0x5160
                     5010  2795 G$AX5043_MODULATIONNB$0$0 == 0x5010
                     5010  2796 _AX5043_MODULATIONNB	=	0x5010
                     5025  2797 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                     5025  2798 _AX5043_PINFUNCANTSELNB	=	0x5025
                     5023  2799 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                     5023  2800 _AX5043_PINFUNCDATANB	=	0x5023
                     5022  2801 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                     5022  2802 _AX5043_PINFUNCDCLKNB	=	0x5022
                     5024  2803 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                     5024  2804 _AX5043_PINFUNCIRQNB	=	0x5024
                     5026  2805 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                     5026  2806 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                     5021  2807 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                     5021  2808 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                     5020  2809 G$AX5043_PINSTATENB$0$0 == 0x5020
                     5020  2810 _AX5043_PINSTATENB	=	0x5020
                     5233  2811 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                     5233  2812 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                     5230  2813 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                     5230  2814 _AX5043_PKTCHUNKSIZENB	=	0x5230
                     5231  2815 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                     5231  2816 _AX5043_PKTMISCFLAGSNB	=	0x5231
                     5232  2817 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                     5232  2818 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                     5031  2819 G$AX5043_PLLCPINB$0$0 == 0x5031
                     5031  2820 _AX5043_PLLCPINB	=	0x5031
                     5039  2821 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                     5039  2822 _AX5043_PLLCPIBOOSTNB	=	0x5039
                     5182  2823 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                     5182  2824 _AX5043_PLLLOCKDETNB	=	0x5182
                     5030  2825 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                     5030  2826 _AX5043_PLLLOOPNB	=	0x5030
                     5038  2827 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                     5038  2828 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                     5033  2829 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                     5033  2830 _AX5043_PLLRANGINGANB	=	0x5033
                     503B  2831 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                     503B  2832 _AX5043_PLLRANGINGBNB	=	0x503b
                     5183  2833 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                     5183  2834 _AX5043_PLLRNGCLKNB	=	0x5183
                     5032  2835 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                     5032  2836 _AX5043_PLLVCODIVNB	=	0x5032
                     5180  2837 G$AX5043_PLLVCOINB$0$0 == 0x5180
                     5180  2838 _AX5043_PLLVCOINB	=	0x5180
                     5181  2839 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                     5181  2840 _AX5043_PLLVCOIRNB	=	0x5181
                     5005  2841 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                     5005  2842 _AX5043_POWIRQMASKNB	=	0x5005
                     5003  2843 G$AX5043_POWSTATNB$0$0 == 0x5003
                     5003  2844 _AX5043_POWSTATNB	=	0x5003
                     5004  2845 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                     5004  2846 _AX5043_POWSTICKYSTATNB	=	0x5004
                     5027  2847 G$AX5043_PWRAMPNB$0$0 == 0x5027
                     5027  2848 _AX5043_PWRAMPNB	=	0x5027
                     5002  2849 G$AX5043_PWRMODENB$0$0 == 0x5002
                     5002  2850 _AX5043_PWRMODENB	=	0x5002
                     5009  2851 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                     5009  2852 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                     5008  2853 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                     5008  2854 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                     500F  2855 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                     500F  2856 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                     500E  2857 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                     500E  2858 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                     501C  2859 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                     501C  2860 _AX5043_RADIOSTATENB	=	0x501c
                     5040  2861 G$AX5043_RSSINB$0$0 == 0x5040
                     5040  2862 _AX5043_RSSINB	=	0x5040
                     522D  2863 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                     522D  2864 _AX5043_RSSIABSTHRNB	=	0x522d
                     522C  2865 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                     522C  2866 _AX5043_RSSIREFERENCENB	=	0x522c
                     5105  2867 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                     5105  2868 _AX5043_RXDATARATE0NB	=	0x5105
                     5104  2869 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                     5104  2870 _AX5043_RXDATARATE1NB	=	0x5104
                     5103  2871 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                     5103  2872 _AX5043_RXDATARATE2NB	=	0x5103
                     5001  2873 G$AX5043_SCRATCHNB$0$0 == 0x5001
                     5001  2874 _AX5043_SCRATCHNB	=	0x5001
                     5000  2875 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                     5000  2876 _AX5043_SILICONREVISIONNB	=	0x5000
                     505B  2877 G$AX5043_TIMER0NB$0$0 == 0x505b
                     505B  2878 _AX5043_TIMER0NB	=	0x505b
                     505A  2879 G$AX5043_TIMER1NB$0$0 == 0x505a
                     505A  2880 _AX5043_TIMER1NB	=	0x505a
                     5059  2881 G$AX5043_TIMER2NB$0$0 == 0x5059
                     5059  2882 _AX5043_TIMER2NB	=	0x5059
                     5227  2883 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                     5227  2884 _AX5043_TMGRXAGCNB	=	0x5227
                     5223  2885 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                     5223  2886 _AX5043_TMGRXBOOSTNB	=	0x5223
                     5226  2887 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                     5226  2888 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                     5225  2889 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                     5225  2890 _AX5043_TMGRXOFFSACQNB	=	0x5225
                     5229  2891 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                     5229  2892 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                     522A  2893 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                     522A  2894 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                     522B  2895 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                     522B  2896 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                     5228  2897 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                     5228  2898 _AX5043_TMGRXRSSINB	=	0x5228
                     5224  2899 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                     5224  2900 _AX5043_TMGRXSETTLENB	=	0x5224
                     5220  2901 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                     5220  2902 _AX5043_TMGTXBOOSTNB	=	0x5220
                     5221  2903 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                     5221  2904 _AX5043_TMGTXSETTLENB	=	0x5221
                     5055  2905 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                     5055  2906 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                     5054  2907 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                     5054  2908 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                     5049  2909 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                     5049  2910 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                     5048  2911 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                     5048  2912 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                     5047  2913 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                     5047  2914 _AX5043_TRKDATARATE0NB	=	0x5047
                     5046  2915 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                     5046  2916 _AX5043_TRKDATARATE1NB	=	0x5046
                     5045  2917 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                     5045  2918 _AX5043_TRKDATARATE2NB	=	0x5045
                     5051  2919 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                     5051  2920 _AX5043_TRKFREQ0NB	=	0x5051
                     5050  2921 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                     5050  2922 _AX5043_TRKFREQ1NB	=	0x5050
                     5053  2923 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                     5053  2924 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                     5052  2925 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                     5052  2926 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                     504B  2927 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                     504B  2928 _AX5043_TRKPHASE0NB	=	0x504b
                     504A  2929 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                     504A  2930 _AX5043_TRKPHASE1NB	=	0x504a
                     504F  2931 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                     504F  2932 _AX5043_TRKRFFREQ0NB	=	0x504f
                     504E  2933 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                     504E  2934 _AX5043_TRKRFFREQ1NB	=	0x504e
                     504D  2935 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                     504D  2936 _AX5043_TRKRFFREQ2NB	=	0x504d
                     5169  2937 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                     5169  2938 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                     5168  2939 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                     5168  2940 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                     516B  2941 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                     516B  2942 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                     516A  2943 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                     516A  2944 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                     516D  2945 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                     516D  2946 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                     516C  2947 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                     516C  2948 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                     516F  2949 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                     516F  2950 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                     516E  2951 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                     516E  2952 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                     5171  2953 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                     5171  2954 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                     5170  2955 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                     5170  2956 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                     5167  2957 G$AX5043_TXRATE0NB$0$0 == 0x5167
                     5167  2958 _AX5043_TXRATE0NB	=	0x5167
                     5166  2959 G$AX5043_TXRATE1NB$0$0 == 0x5166
                     5166  2960 _AX5043_TXRATE1NB	=	0x5166
                     5165  2961 G$AX5043_TXRATE2NB$0$0 == 0x5165
                     5165  2962 _AX5043_TXRATE2NB	=	0x5165
                     506B  2963 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                     506B  2964 _AX5043_WAKEUP0NB	=	0x506b
                     506A  2965 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                     506A  2966 _AX5043_WAKEUP1NB	=	0x506a
                     506D  2967 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                     506D  2968 _AX5043_WAKEUPFREQ0NB	=	0x506d
                     506C  2969 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                     506C  2970 _AX5043_WAKEUPFREQ1NB	=	0x506c
                     5069  2971 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                     5069  2972 _AX5043_WAKEUPTIMER0NB	=	0x5069
                     5068  2973 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                     5068  2974 _AX5043_WAKEUPTIMER1NB	=	0x5068
                     506E  2975 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                     506E  2976 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                     5184  2977 G$AX5043_XTALCAPNB$0$0 == 0x5184
                     5184  2978 _AX5043_XTALCAPNB	=	0x5184
                     501D  2979 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                     501D  2980 _AX5043_XTALSTATUSNB	=	0x501d
                     5122  2981 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                     5122  2982 _AX5043_AGCAHYST0NB	=	0x5122
                     5132  2983 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                     5132  2984 _AX5043_AGCAHYST1NB	=	0x5132
                     5142  2985 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                     5142  2986 _AX5043_AGCAHYST2NB	=	0x5142
                     5152  2987 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                     5152  2988 _AX5043_AGCAHYST3NB	=	0x5152
                     5120  2989 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                     5120  2990 _AX5043_AGCGAIN0NB	=	0x5120
                     5130  2991 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                     5130  2992 _AX5043_AGCGAIN1NB	=	0x5130
                     5140  2993 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                     5140  2994 _AX5043_AGCGAIN2NB	=	0x5140
                     5150  2995 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                     5150  2996 _AX5043_AGCGAIN3NB	=	0x5150
                     5123  2997 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                     5123  2998 _AX5043_AGCMINMAX0NB	=	0x5123
                     5133  2999 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                     5133  3000 _AX5043_AGCMINMAX1NB	=	0x5133
                     5143  3001 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                     5143  3002 _AX5043_AGCMINMAX2NB	=	0x5143
                     5153  3003 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                     5153  3004 _AX5043_AGCMINMAX3NB	=	0x5153
                     5121  3005 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                     5121  3006 _AX5043_AGCTARGET0NB	=	0x5121
                     5131  3007 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                     5131  3008 _AX5043_AGCTARGET1NB	=	0x5131
                     5141  3009 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                     5141  3010 _AX5043_AGCTARGET2NB	=	0x5141
                     5151  3011 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                     5151  3012 _AX5043_AGCTARGET3NB	=	0x5151
                     512B  3013 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                     512B  3014 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                     513B  3015 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                     513B  3016 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                     514B  3017 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                     514B  3018 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                     515B  3019 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                     515B  3020 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                     512F  3021 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                     512F  3022 _AX5043_BBOFFSRES0NB	=	0x512f
                     513F  3023 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                     513F  3024 _AX5043_BBOFFSRES1NB	=	0x513f
                     514F  3025 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                     514F  3026 _AX5043_BBOFFSRES2NB	=	0x514f
                     515F  3027 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                     515F  3028 _AX5043_BBOFFSRES3NB	=	0x515f
                     5125  3029 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                     5125  3030 _AX5043_DRGAIN0NB	=	0x5125
                     5135  3031 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                     5135  3032 _AX5043_DRGAIN1NB	=	0x5135
                     5145  3033 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                     5145  3034 _AX5043_DRGAIN2NB	=	0x5145
                     5155  3035 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                     5155  3036 _AX5043_DRGAIN3NB	=	0x5155
                     512E  3037 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                     512E  3038 _AX5043_FOURFSK0NB	=	0x512e
                     513E  3039 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                     513E  3040 _AX5043_FOURFSK1NB	=	0x513e
                     514E  3041 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                     514E  3042 _AX5043_FOURFSK2NB	=	0x514e
                     515E  3043 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                     515E  3044 _AX5043_FOURFSK3NB	=	0x515e
                     512D  3045 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                     512D  3046 _AX5043_FREQDEV00NB	=	0x512d
                     513D  3047 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                     513D  3048 _AX5043_FREQDEV01NB	=	0x513d
                     514D  3049 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                     514D  3050 _AX5043_FREQDEV02NB	=	0x514d
                     515D  3051 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                     515D  3052 _AX5043_FREQDEV03NB	=	0x515d
                     512C  3053 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                     512C  3054 _AX5043_FREQDEV10NB	=	0x512c
                     513C  3055 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                     513C  3056 _AX5043_FREQDEV11NB	=	0x513c
                     514C  3057 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                     514C  3058 _AX5043_FREQDEV12NB	=	0x514c
                     515C  3059 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                     515C  3060 _AX5043_FREQDEV13NB	=	0x515c
                     5127  3061 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                     5127  3062 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                     5137  3063 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                     5137  3064 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                     5147  3065 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                     5147  3066 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                     5157  3067 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                     5157  3068 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                     5128  3069 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                     5128  3070 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                     5138  3071 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                     5138  3072 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                     5148  3073 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                     5148  3074 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                     5158  3075 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                     5158  3076 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                     5129  3077 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                     5129  3078 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                     5139  3079 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                     5139  3080 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                     5149  3081 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                     5149  3082 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                     5159  3083 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                     5159  3084 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                     512A  3085 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                     512A  3086 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                     513A  3087 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                     513A  3088 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                     514A  3089 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                     514A  3090 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                     515A  3091 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                     515A  3092 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                     5116  3093 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                     5116  3094 _AX5043_FREQUENCYLEAKNB	=	0x5116
                     5126  3095 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                     5126  3096 _AX5043_PHASEGAIN0NB	=	0x5126
                     5136  3097 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                     5136  3098 _AX5043_PHASEGAIN1NB	=	0x5136
                     5146  3099 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                     5146  3100 _AX5043_PHASEGAIN2NB	=	0x5146
                     5156  3101 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                     5156  3102 _AX5043_PHASEGAIN3NB	=	0x5156
                     5207  3103 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                     5207  3104 _AX5043_PKTADDR0NB	=	0x5207
                     5206  3105 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                     5206  3106 _AX5043_PKTADDR1NB	=	0x5206
                     5205  3107 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                     5205  3108 _AX5043_PKTADDR2NB	=	0x5205
                     5204  3109 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                     5204  3110 _AX5043_PKTADDR3NB	=	0x5204
                     5200  3111 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                     5200  3112 _AX5043_PKTADDRCFGNB	=	0x5200
                     520B  3113 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                     520B  3114 _AX5043_PKTADDRMASK0NB	=	0x520b
                     520A  3115 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                     520A  3116 _AX5043_PKTADDRMASK1NB	=	0x520a
                     5209  3117 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                     5209  3118 _AX5043_PKTADDRMASK2NB	=	0x5209
                     5208  3119 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                     5208  3120 _AX5043_PKTADDRMASK3NB	=	0x5208
                     5201  3121 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                     5201  3122 _AX5043_PKTLENCFGNB	=	0x5201
                     5202  3123 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                     5202  3124 _AX5043_PKTLENOFFSETNB	=	0x5202
                     5203  3125 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                     5203  3126 _AX5043_PKTMAXLENNB	=	0x5203
                     5118  3127 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                     5118  3128 _AX5043_RXPARAMCURSETNB	=	0x5118
                     5117  3129 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                     5117  3130 _AX5043_RXPARAMSETSNB	=	0x5117
                     5124  3131 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                     5124  3132 _AX5043_TIMEGAIN0NB	=	0x5124
                     5134  3133 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                     5134  3134 _AX5043_TIMEGAIN1NB	=	0x5134
                     5144  3135 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                     5144  3136 _AX5043_TIMEGAIN2NB	=	0x5144
                     5154  3137 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                     5154  3138 _AX5043_TIMEGAIN3NB	=	0x5154
                     FC06  3139 Fmain$flash_deviceid$0$0 == 0xfc06
                     FC06  3140 _flash_deviceid	=	0xfc06
                     0000  3141 G$wakeup_desc$0$0==.
   0299                    3142 _wakeup_desc::
   0299                    3143 	.ds 8
                     0008  3144 Lmain.transmit_packet$demo_packet_$1$169==.
   02A1                    3145 _transmit_packet_demo_packet__1_169:
   02A1                    3146 	.ds 6
                           3147 ;--------------------------------------------------------
                           3148 ; absolute external ram data
                           3149 ;--------------------------------------------------------
                           3150 	.area XABS    (ABS,XDATA)
                           3151 ;--------------------------------------------------------
                           3152 ; external initialized ram data
                           3153 ;--------------------------------------------------------
                           3154 	.area XISEG   (XDATA)
                           3155 	.area HOME    (CODE)
                           3156 	.area GSINIT0 (CODE)
                           3157 	.area GSINIT1 (CODE)
                           3158 	.area GSINIT2 (CODE)
                           3159 	.area GSINIT3 (CODE)
                           3160 	.area GSINIT4 (CODE)
                           3161 	.area GSINIT5 (CODE)
                           3162 	.area GSINIT  (CODE)
                           3163 	.area GSFINAL (CODE)
                           3164 	.area CSEG    (CODE)
                           3165 ;--------------------------------------------------------
                           3166 ; interrupt vector 
                           3167 ;--------------------------------------------------------
                           3168 	.area HOME    (CODE)
   0000                    3169 __interrupt_vect:
   0000 02 00 B1      [24] 3170 	ljmp	__sdcc_gsinit_startup
   0003 32            [24] 3171 	reti
   0004                    3172 	.ds	7
   000B 02 3E 5A      [24] 3173 	ljmp	_wtimer_irq
   000E                    3174 	.ds	5
   0013 32            [24] 3175 	reti
   0014                    3176 	.ds	7
   001B 32            [24] 3177 	reti
   001C                    3178 	.ds	7
   0023 02 0F 60      [24] 3179 	ljmp	_axradio_isr
   0026                    3180 	.ds	5
   002B 32            [24] 3181 	reti
   002C                    3182 	.ds	7
   0033 02 37 89      [24] 3183 	ljmp	_pwrmgmt_irq
   0036                    3184 	.ds	5
   003B 32            [24] 3185 	reti
   003C                    3186 	.ds	7
   0043 32            [24] 3187 	reti
   0044                    3188 	.ds	7
   004B 32            [24] 3189 	reti
   004C                    3190 	.ds	7
   0053 32            [24] 3191 	reti
   0054                    3192 	.ds	7
   005B 32            [24] 3193 	reti
   005C                    3194 	.ds	7
   0063 32            [24] 3195 	reti
   0064                    3196 	.ds	7
   006B 32            [24] 3197 	reti
   006C                    3198 	.ds	7
   0073 32            [24] 3199 	reti
   0074                    3200 	.ds	7
   007B 32            [24] 3201 	reti
   007C                    3202 	.ds	7
   0083 32            [24] 3203 	reti
   0084                    3204 	.ds	7
   008B 32            [24] 3205 	reti
   008C                    3206 	.ds	7
   0093 32            [24] 3207 	reti
   0094                    3208 	.ds	7
   009B 32            [24] 3209 	reti
   009C                    3210 	.ds	7
   00A3 32            [24] 3211 	reti
   00A4                    3212 	.ds	7
   00AB 02 43 DF      [24] 3213 	ljmp	_dbglink_irq
                           3214 ;--------------------------------------------------------
                           3215 ; global & static initialisations
                           3216 ;--------------------------------------------------------
                           3217 	.area HOME    (CODE)
                           3218 	.area GSINIT  (CODE)
                           3219 	.area GSFINAL (CODE)
                           3220 	.area GSINIT  (CODE)
                           3221 	.globl __sdcc_gsinit_startup
                           3222 	.globl __sdcc_program_startup
                           3223 	.globl __start__stack
                           3224 	.globl __mcs51_genXINIT
                           3225 	.globl __mcs51_genXRAMCLEAR
                           3226 	.globl __mcs51_genRAMCLEAR
                     0000  3227 	C$main.c$62$1$200 ==.
                           3228 ;	main.c:62: uint8_t __data coldstart = 1; // caution: initialization with 1 is necessary! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case
   0130 75 12 01      [24] 3229 	mov	_coldstart,#0x01
                           3230 	.area GSFINAL (CODE)
   0133 02 00 AE      [24] 3231 	ljmp	__sdcc_program_startup
                           3232 ;--------------------------------------------------------
                           3233 ; Home
                           3234 ;--------------------------------------------------------
                           3235 	.area HOME    (CODE)
                           3236 	.area HOME    (CODE)
   00AE                    3237 __sdcc_program_startup:
   00AE 02 38 82      [24] 3238 	ljmp	_main
                           3239 ;	return from main will return to caller
                           3240 ;--------------------------------------------------------
                           3241 ; code
                           3242 ;--------------------------------------------------------
                           3243 	.area CSEG    (CODE)
                           3244 ;------------------------------------------------------------
                           3245 ;Allocation info for local variables in function 'pwrmgmt_irq'
                           3246 ;------------------------------------------------------------
                           3247 ;pc                        Allocated to registers r7 
                           3248 ;------------------------------------------------------------
                     0000  3249 	Fmain$pwrmgmt_irq$0$0 ==.
                     0000  3250 	C$main.c$69$0$0 ==.
                           3251 ;	main.c:69: static void pwrmgmt_irq(void) __interrupt(INT_POWERMGMT)
                           3252 ;	-----------------------------------------
                           3253 ;	 function pwrmgmt_irq
                           3254 ;	-----------------------------------------
   3789                    3255 _pwrmgmt_irq:
                     0007  3256 	ar7 = 0x07
                     0006  3257 	ar6 = 0x06
                     0005  3258 	ar5 = 0x05
                     0004  3259 	ar4 = 0x04
                     0003  3260 	ar3 = 0x03
                     0002  3261 	ar2 = 0x02
                     0001  3262 	ar1 = 0x01
                     0000  3263 	ar0 = 0x00
   3789 C0 E0         [24] 3264 	push	acc
   378B C0 82         [24] 3265 	push	dpl
   378D C0 83         [24] 3266 	push	dph
   378F C0 07         [24] 3267 	push	ar7
   3791 C0 D0         [24] 3268 	push	psw
   3793 75 D0 00      [24] 3269 	mov	psw,#0x00
                     000D  3270 	C$main.c$71$1$0 ==.
                           3271 ;	main.c:71: uint8_t pc = PCON;
                     000D  3272 	C$main.c$72$1$167 ==.
                           3273 ;	main.c:72: if (!(pc & 0x80))
   3796 E5 87         [12] 3274 	mov	a,_PCON
   3798 FF            [12] 3275 	mov	r7,a
   3799 20 E7 02      [24] 3276 	jb	acc.7,00102$
                     0013  3277 	C$main.c$73$1$167 ==.
                           3278 ;	main.c:73: return;
   379C 80 13         [24] 3279 	sjmp	00106$
   379E                    3280 00102$:
                     0015  3281 	C$main.c$74$1$167 ==.
                           3282 ;	main.c:74: GPIOENABLE = 0;
   379E 90 70 0C      [24] 3283 	mov	dptr,#_GPIOENABLE
   37A1 E4            [12] 3284 	clr	a
   37A2 F0            [24] 3285 	movx	@dptr,a
                     001A  3286 	C$main.c$75$1$167 ==.
                           3287 ;	main.c:75: IE = EIE = E2IE = 0;
   37A3 75 A0 00      [24] 3288 	mov	_E2IE,#0x00
   37A6 75 98 00      [24] 3289 	mov	_EIE,#0x00
   37A9 75 A8 00      [24] 3290 	mov	_IE,#0x00
   37AC                    3291 00104$:
                     0023  3292 	C$main.c$77$1$167 ==.
                           3293 ;	main.c:77: PCON |= 0x01;
   37AC 43 87 01      [24] 3294 	orl	_PCON,#0x01
   37AF 80 FB         [24] 3295 	sjmp	00104$
   37B1                    3296 00106$:
   37B1 D0 D0         [24] 3297 	pop	psw
   37B3 D0 07         [24] 3298 	pop	ar7
   37B5 D0 83         [24] 3299 	pop	dph
   37B7 D0 82         [24] 3300 	pop	dpl
   37B9 D0 E0         [24] 3301 	pop	acc
                     0032  3302 	C$main.c$78$1$167 ==.
                     0032  3303 	XFmain$pwrmgmt_irq$0$0 ==.
   37BB 32            [24] 3304 	reti
                           3305 ;	eliminated unneeded push/pop b
                           3306 ;------------------------------------------------------------
                           3307 ;Allocation info for local variables in function 'transmit_packet'
                           3308 ;------------------------------------------------------------
                           3309 ;demo_packet_              Allocated with name '_transmit_packet_demo_packet__1_169'
                           3310 ;------------------------------------------------------------
                     0033  3311 	Fmain$transmit_packet$0$0 ==.
                     0033  3312 	C$main.c$80$1$167 ==.
                           3313 ;	main.c:80: static void transmit_packet(void)
                           3314 ;	-----------------------------------------
                           3315 ;	 function transmit_packet
                           3316 ;	-----------------------------------------
   37BC                    3317 _transmit_packet:
                     0033  3318 	C$main.c$84$1$169 ==.
                           3319 ;	main.c:84: memcpy(demo_packet_, demo_packet, sizeof(demo_packet));
   37BC 75 27 F7      [24] 3320 	mov	_memcpy_PARM_2,#_demo_packet
   37BF 75 28 52      [24] 3321 	mov	(_memcpy_PARM_2 + 1),#(_demo_packet >> 8)
   37C2 75 29 80      [24] 3322 	mov	(_memcpy_PARM_2 + 2),#0x80
   37C5 75 2A 06      [24] 3323 	mov	_memcpy_PARM_3,#0x06
   37C8 75 2B 00      [24] 3324 	mov	(_memcpy_PARM_3 + 1),#0x00
   37CB 90 02 A1      [24] 3325 	mov	dptr,#_transmit_packet_demo_packet__1_169
   37CE 75 F0 00      [24] 3326 	mov	b,#0x00
   37D1 12 42 E2      [24] 3327 	lcall	_memcpy
                     004B  3328 	C$main.c$85$1$169 ==.
                           3329 ;	main.c:85: axradio_transmit(&remoteaddr, demo_packet_, sizeof(demo_packet));
   37D4 75 0C A1      [24] 3330 	mov	_axradio_transmit_PARM_2,#_transmit_packet_demo_packet__1_169
   37D7 75 0D 02      [24] 3331 	mov	(_axradio_transmit_PARM_2 + 1),#(_transmit_packet_demo_packet__1_169 >> 8)
   37DA 75 0E 00      [24] 3332 	mov	(_axradio_transmit_PARM_2 + 2),#0x00
   37DD 75 0F 06      [24] 3333 	mov	_axradio_transmit_PARM_3,#0x06
   37E0 75 10 00      [24] 3334 	mov	(_axradio_transmit_PARM_3 + 1),#0x00
   37E3 90 52 E9      [24] 3335 	mov	dptr,#_remoteaddr
   37E6 75 F0 80      [24] 3336 	mov	b,#0x80
   37E9 12 2E F5      [24] 3337 	lcall	_axradio_transmit
                     0063  3338 	C$main.c$86$1$169 ==.
                     0063  3339 	XFmain$transmit_packet$0$0 ==.
   37EC 22            [24] 3340 	ret
                           3341 ;------------------------------------------------------------
                           3342 ;Allocation info for local variables in function 'axradio_statuschange'
                           3343 ;------------------------------------------------------------
                           3344 ;st                        Allocated to registers r6 r7 
                           3345 ;------------------------------------------------------------
                     0064  3346 	G$axradio_statuschange$0$0 ==.
                     0064  3347 	C$main.c$88$1$169 ==.
                           3348 ;	main.c:88: void axradio_statuschange(struct axradio_status __xdata *st)
                           3349 ;	-----------------------------------------
                           3350 ;	 function axradio_statuschange
                           3351 ;	-----------------------------------------
   37ED                    3352 _axradio_statuschange:
                     0064  3353 	C$main.c$99$1$171 ==.
                           3354 ;	main.c:99: switch (st->status)
   37ED AE 82         [24] 3355 	mov	r6,dpl
   37EF AF 83         [24] 3356 	mov  r7,dph
   37F1 E0            [24] 3357 	movx	a,@dptr
   37F2 FD            [12] 3358 	mov	r5,a
   37F3 BD 02 02      [24] 3359 	cjne	r5,#0x02,00178$
   37F6 80 12         [24] 3360 	sjmp	00150$
   37F8                    3361 00178$:
   37F8 BD 03 02      [24] 3362 	cjne	r5,#0x03,00179$
   37FB 80 05         [24] 3363 	sjmp	00105$
   37FD                    3364 00179$:
                     0074  3365 	C$main.c$102$2$172 ==.
                           3366 ;	main.c:102: led0_on();
   37FD BD 04 18      [24] 3367 	cjne	r5,#0x04,00166$
   3800 80 04         [24] 3368 	sjmp	00119$
   3802                    3369 00105$:
   3802 D2 84         [12] 3370 	setb	_PORTA_4
                     007B  3371 	C$main.c$108$2$172 ==.
                           3372 ;	main.c:108: break;
                     007B  3373 	C$main.c$111$2$172 ==.
                           3374 ;	main.c:111: led0_off();
   3804 80 12         [24] 3375 	sjmp	00166$
   3806                    3376 00119$:
   3806 C2 84         [12] 3377 	clr	_PORTA_4
                     007F  3378 	C$main.c$143$2$172 ==.
                           3379 ;	main.c:143: break;
                     007F  3380 	C$main.c$153$2$172 ==.
                           3381 ;	main.c:153: case AXRADIO_STAT_CHANNELSTATE:
   3808 80 0E         [24] 3382 	sjmp	00166$
   380A                    3383 00150$:
                     0081  3384 	C$main.c$154$2$172 ==.
                           3385 ;	main.c:154: if (st->u.cs.busy)
   380A 74 06         [12] 3386 	mov	a,#0x06
   380C 2E            [12] 3387 	add	a,r6
   380D FE            [12] 3388 	mov	r6,a
   380E E4            [12] 3389 	clr	a
   380F 3F            [12] 3390 	addc	a,r7
   3810 FF            [12] 3391 	mov	r7,a
   3811 8E 82         [24] 3392 	mov	dpl,r6
   3813 8F 83         [24] 3393 	mov	dph,r7
   3815 A3            [24] 3394 	inc	dptr
   3816 A3            [24] 3395 	inc	dptr
   3817 E0            [24] 3396 	movx	a,@dptr
                     008F  3397 	C$main.c$162$1$171 ==.
                           3398 ;	main.c:162: }
   3818                    3399 00166$:
                     008F  3400 	C$main.c$163$1$171 ==.
                     008F  3401 	XG$axradio_statuschange$0$0 ==.
   3818 22            [24] 3402 	ret
                           3403 ;------------------------------------------------------------
                           3404 ;Allocation info for local variables in function 'wakeup_callback'
                           3405 ;------------------------------------------------------------
                           3406 ;desc                      Allocated to registers 
                           3407 ;------------------------------------------------------------
                     0090  3408 	Fmain$wakeup_callback$0$0 ==.
                     0090  3409 	C$main.c$164$1$171 ==.
                           3410 ;	main.c:164: static void wakeup_callback(struct wtimer_desc __xdata *desc)
                           3411 ;	-----------------------------------------
                           3412 ;	 function wakeup_callback
                           3413 ;	-----------------------------------------
   3819                    3414 _wakeup_callback:
                     0090  3415 	C$main.c$166$1$194 ==.
                           3416 ;	main.c:166: desc;
                     0090  3417 	C$main.c$173$1$194 ==.
                     0090  3418 	XFmain$wakeup_callback$0$0 ==.
   3819 22            [24] 3419 	ret
                           3420 ;------------------------------------------------------------
                           3421 ;Allocation info for local variables in function '_sdcc_external_startup'
                           3422 ;------------------------------------------------------------
                           3423 ;c                         Allocated to registers 
                           3424 ;p                         Allocated to registers 
                           3425 ;c                         Allocated to registers 
                           3426 ;p                         Allocated to registers 
                           3427 ;------------------------------------------------------------
                     0091  3428 	G$_sdcc_external_startup$0$0 ==.
                     0091  3429 	C$main.c$187$1$194 ==.
                           3430 ;	main.c:187: uint8_t _sdcc_external_startup(void)
                           3431 ;	-----------------------------------------
                           3432 ;	 function _sdcc_external_startup
                           3433 ;	-----------------------------------------
   381A                    3434 __sdcc_external_startup:
                     0091  3435 	C$main.c$190$1$196 ==.
                           3436 ;	main.c:190: LPXOSCGM = 0x8A;
   381A 90 70 54      [24] 3437 	mov	dptr,#_LPXOSCGM
   381D 74 8A         [12] 3438 	mov	a,#0x8A
   381F F0            [24] 3439 	movx	@dptr,a
                     0097  3440 	C$main.c$191$2$197 ==.
                           3441 ;	main.c:191: wtimer0_setclksrc(WTIMER0_CLKSRC, WTIMER0_PRESCALER);
   3820 75 82 09      [24] 3442 	mov	dpl,#0x09
   3823 12 3D AE      [24] 3443 	lcall	_wtimer0_setconfig
                     009D  3444 	C$main.c$192$2$198 ==.
                           3445 ;	main.c:192: wtimer1_setclksrc(CLKSRC_FRCOSC, 7);
   3826 75 82 38      [24] 3446 	mov	dpl,#0x38
   3829 12 3D CC      [24] 3447 	lcall	_wtimer1_setconfig
                     00A3  3448 	C$main.c$194$1$196 ==.
                           3449 ;	main.c:194: LPOSCCONFIG = 0x09; // Slow, PRESC /1, no cal. Does NOT enable LPOSC. LPOSC is enabled upon configuring WTCFGA (MODE_TX_PERIODIC and receive_ack() )
   382C 90 70 60      [24] 3450 	mov	dptr,#_LPOSCCONFIG
   382F 74 09         [12] 3451 	mov	a,#0x09
   3831 F0            [24] 3452 	movx	@dptr,a
                     00A9  3453 	C$main.c$196$1$196 ==.
                           3454 ;	main.c:196: coldstart = !(PCON & 0x40);
   3832 74 40         [12] 3455 	mov	a,#0x40
   3834 55 87         [12] 3456 	anl	a,_PCON
   3836 FF            [12] 3457 	mov	r7,a
   3837 B4 01 00      [24] 3458 	cjne	a,#0x01,00109$
   383A                    3459 00109$:
   383A E4            [12] 3460 	clr	a
   383B 33            [12] 3461 	rlc	a
   383C F5 12         [12] 3462 	mov	_coldstart,a
                     00B5  3463 	C$main.c$198$1$196 ==.
                           3464 ;	main.c:198: ANALOGA = 0x18; // PA[3,4] LPXOSC, other PA are used as digital pins
   383E 90 70 07      [24] 3465 	mov	dptr,#_ANALOGA
   3841 74 18         [12] 3466 	mov	a,#0x18
   3843 F0            [24] 3467 	movx	@dptr,a
                     00BB  3468 	C$main.c$201$1$196 ==.
                           3469 ;	main.c:201: PORTA = 0xC0 | (PINA & 0x25); 	// pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC). Output 0 in PA[0,1,2,5] to prevent current consumption in all DIP switch states
   3844 74 25         [12] 3470 	mov	a,#0x25
   3846 55 C8         [12] 3471 	anl	a,_PINA
   3848 44 C0         [12] 3472 	orl	a,#0xC0
   384A F5 80         [12] 3473 	mov	_PORTA,a
                     00C3  3474 	C$main.c$203$1$196 ==.
                           3475 ;	main.c:203: PORTB = 0xFE; //PB[0,1]  (LCD RS, LCD RST) are overwritten by lcd2_portinit(), enable pull-ups for PB[2..7]  (PB[2,3] for buttons, PB[4..7] unused)
   384C 75 88 FE      [24] 3476 	mov	_PORTB,#0xFE
                     00C6  3477 	C$main.c$204$1$196 ==.
                           3478 ;	main.c:204: PORTC = 0xF3 | (PINC & 0x08); 	// set PC0 = 1 (LCD SEL), PC1 = 1 (LCD SCK), PC2 = 0 (LCD MOSI), PC3 =0 (LED), enable pull-ups for PC[4..7] which are not bonded Mind: PORTC[0:1] is set to 0x3 by lcd2_portinit()
   384F 74 08         [12] 3479 	mov	a,#0x08
   3851 55 F8         [12] 3480 	anl	a,_PINC
   3853 44 F3         [12] 3481 	orl	a,#0xF3
   3855 F5 90         [12] 3482 	mov	_PORTC,a
                     00CE  3483 	C$main.c$206$1$196 ==.
                           3484 ;	main.c:206: PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()
   3857 75 8C CB      [24] 3485 	mov	_PORTR,#0xCB
                     00D1  3486 	C$main.c$209$1$196 ==.
                           3487 ;	main.c:209: DIRA = 0x37; // output 0 on PA[0,1,2,5] to prevent current consumption in all DIP switch states. Other PA are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
   385A 75 89 37      [24] 3488 	mov	_DIRA,#0x37
                     00D4  3489 	C$main.c$210$1$196 ==.
                           3490 ;	main.c:210: DIRB = 0x03; // PB[0,1] are outputs (LCD RS, LCD RST), PB[2..7] are inputs (PB[2,3] for buttons,  PB[4..7]  unused)
   385D 75 8A 03      [24] 3491 	mov	_DIRB,#0x03
                     00D7  3492 	C$main.c$211$1$196 ==.
                           3493 ;	main.c:211: DIRC = 0x0F; // PC[0..3] are outputs (LCD SEL, LCD,SCK, LCD MOSI, LED), PC[4..7] are inputs (not bonded).
   3860 75 8B 0F      [24] 3494 	mov	_DIRC,#0x0F
                     00DA  3495 	C$main.c$212$1$196 ==.
                           3496 ;	main.c:212: DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()
   3863 75 8E 15      [24] 3497 	mov	_DIRR,#0x15
                     00DD  3498 	C$main.c$226$1$196 ==.
                           3499 ;	main.c:226: DPS = 0;
   3866 75 86 00      [24] 3500 	mov	_DPS,#0x00
                     00E0  3501 	C$main.c$227$1$196 ==.
                           3502 ;	main.c:227: IE = 0x40;
   3869 75 A8 40      [24] 3503 	mov	_IE,#0x40
                     00E3  3504 	C$main.c$228$1$196 ==.
                           3505 ;	main.c:228: EIE = 0x00;
   386C 75 98 00      [24] 3506 	mov	_EIE,#0x00
                     00E6  3507 	C$main.c$229$1$196 ==.
                           3508 ;	main.c:229: E2IE = 0x00;
   386F 75 A0 00      [24] 3509 	mov	_E2IE,#0x00
                     00E9  3510 	C$main.c$231$1$196 ==.
                           3511 ;	main.c:231: GPIOENABLE = 1; // unfreeze GPIO
   3872 90 70 0C      [24] 3512 	mov	dptr,#_GPIOENABLE
   3875 74 01         [12] 3513 	mov	a,#0x01
   3877 F0            [24] 3514 	movx	@dptr,a
                     00EF  3515 	C$main.c$235$1$196 ==.
                           3516 ;	main.c:235: return !coldstart; // coldstart -> return 0 -> var initialization; start from sleep -> return 1 -> no var initialization
   3878 E5 12         [12] 3517 	mov	a,_coldstart
   387A B4 01 00      [24] 3518 	cjne	a,#0x01,00110$
   387D                    3519 00110$:
   387D E4            [12] 3520 	clr	a
   387E 33            [12] 3521 	rlc	a
   387F F5 82         [12] 3522 	mov	dpl,a
                     00F8  3523 	C$main.c$237$1$196 ==.
                     00F8  3524 	XG$_sdcc_external_startup$0$0 ==.
   3881 22            [24] 3525 	ret
                           3526 ;------------------------------------------------------------
                           3527 ;Allocation info for local variables in function 'main'
                           3528 ;------------------------------------------------------------
                           3529 ;prev_key                  Allocated to registers r7 
                           3530 ;i                         Allocated to registers r6 
                           3531 ;v                         Allocated to registers r5 
                           3532 ;flg                       Allocated to registers 
                           3533 ;------------------------------------------------------------
                     00F9  3534 	G$main$0$0 ==.
                     00F9  3535 	C$main.c$239$1$196 ==.
                           3536 ;	main.c:239: void main(void)
                           3537 ;	-----------------------------------------
                           3538 ;	 function main
                           3539 ;	-----------------------------------------
   3882                    3540 _main:
                     00F9  3541 	C$main.c$241$1$196 ==.
                           3542 ;	main.c:241: uint8_t prev_key = 0;
   3882 7F 00         [12] 3543 	mov	r7,#0x00
                     00FB  3544 	C$main.c$252$1$200 ==.
                           3545 ;	main.c:252: __endasm;
                     0000  3546 	G$_start__stack$0$0 = __start__stack
                           3547 	.globl G$_start__stack$0$0
                     00FB  3548 	C$main.c$255$1$200 ==.
                           3549 ;	main.c:255: EA = 1;
   3884 D2 AF         [12] 3550 	setb	_EA
                     00FD  3551 	C$main.c$256$1$200 ==.
                           3552 ;	main.c:256: flash_apply_calibration();
   3886 C0 07         [24] 3553 	push	ar7
   3888 12 47 76      [24] 3554 	lcall	_flash_apply_calibration
                     0102  3555 	C$main.c$257$1$200 ==.
                           3556 ;	main.c:257: CLKCON = 0x00;
   388B 75 C6 00      [24] 3557 	mov	_CLKCON,#0x00
                     0105  3558 	C$main.c$258$1$200 ==.
                           3559 ;	main.c:258: wtimer_init();
   388E 12 3E B6      [24] 3560 	lcall	_wtimer_init
                     0108  3561 	C$main.c$261$1$200 ==.
                           3562 ;	main.c:261: dbglink_init();
   3891 12 44 51      [24] 3563 	lcall	_dbglink_init
                     010B  3564 	C$main.c$263$1$200 ==.
                           3565 ;	main.c:263: dbglink_writestr("booting up ...\n");
   3894 90 53 F1      [24] 3566 	mov	dptr,#__str_0
   3897 75 F0 80      [24] 3567 	mov	b,#0x80
   389A 12 4A 83      [24] 3568 	lcall	_dbglink_writestr
                     0114  3569 	C$main.c$265$3$202 ==.
                           3570 ;	main.c:265: led0_off();
   389D C2 84         [12] 3571 	clr	_PORTA_4
                     0116  3572 	C$main.c$266$3$204 ==.
                           3573 ;	main.c:266: led1_off();
   389F C2 85         [12] 3574 	clr	_PORTA_5
                     0118  3575 	C$main.c$267$1$200 ==.
                           3576 ;	main.c:267: delay_ms( 50);
   38A1 90 00 32      [24] 3577 	mov	dptr,#0x0032
   38A4 12 33 2C      [24] 3578 	lcall	_delay_ms
                     011E  3579 	C$main.c$269$3$206 ==.
                           3580 ;	main.c:269: led0_on();
   38A7 D2 84         [12] 3581 	setb	_PORTA_4
                     0120  3582 	C$main.c$270$3$208 ==.
                           3583 ;	main.c:270: led1_on();
   38A9 D2 85         [12] 3584 	setb	_PORTA_5
                     0122  3585 	C$main.c$271$1$200 ==.
                           3586 ;	main.c:271: delay_ms( 50);
   38AB 90 00 32      [24] 3587 	mov	dptr,#0x0032
   38AE 12 33 2C      [24] 3588 	lcall	_delay_ms
                     0128  3589 	C$main.c$273$3$210 ==.
                           3590 ;	main.c:273: led0_off();
   38B1 C2 84         [12] 3591 	clr	_PORTA_4
                     012A  3592 	C$main.c$274$3$212 ==.
                           3593 ;	main.c:274: led1_off();
   38B3 C2 85         [12] 3594 	clr	_PORTA_5
                     012C  3595 	C$main.c$275$1$200 ==.
                           3596 ;	main.c:275: delay_ms( 50);
   38B5 90 00 32      [24] 3597 	mov	dptr,#0x0032
   38B8 12 33 2C      [24] 3598 	lcall	_delay_ms
                     0132  3599 	C$main.c$277$3$214 ==.
                           3600 ;	main.c:277: led0_on();
   38BB D2 84         [12] 3601 	setb	_PORTA_4
                     0134  3602 	C$main.c$278$3$216 ==.
                           3603 ;	main.c:278: led1_on();
   38BD D2 85         [12] 3604 	setb	_PORTA_5
                     0136  3605 	C$main.c$279$1$200 ==.
                           3606 ;	main.c:279: delay_ms( 50);
   38BF 90 00 32      [24] 3607 	mov	dptr,#0x0032
   38C2 12 33 2C      [24] 3608 	lcall	_delay_ms
                     013C  3609 	C$main.c$281$3$218 ==.
                           3610 ;	main.c:281: led0_off();
   38C5 C2 84         [12] 3611 	clr	_PORTA_4
                     013E  3612 	C$main.c$282$3$220 ==.
                           3613 ;	main.c:282: led1_off();
   38C7 C2 85         [12] 3614 	clr	_PORTA_5
                     0140  3615 	C$main.c$283$1$200 ==.
                           3616 ;	main.c:283: delay_ms( 50);
   38C9 90 00 32      [24] 3617 	mov	dptr,#0x0032
   38CC 12 33 2C      [24] 3618 	lcall	_delay_ms
                     0146  3619 	C$main.c$285$3$222 ==.
                           3620 ;	main.c:285: led0_on();
   38CF D2 84         [12] 3621 	setb	_PORTA_4
                     0148  3622 	C$main.c$286$3$224 ==.
                           3623 ;	main.c:286: led1_on();
   38D1 D2 85         [12] 3624 	setb	_PORTA_5
                     014A  3625 	C$main.c$287$1$200 ==.
                           3626 ;	main.c:287: delay_ms( 50);
   38D3 90 00 32      [24] 3627 	mov	dptr,#0x0032
   38D6 12 33 2C      [24] 3628 	lcall	_delay_ms
                     0150  3629 	C$main.c$289$3$226 ==.
                           3630 ;	main.c:289: led0_off();
   38D9 C2 84         [12] 3631 	clr	_PORTA_4
                     0152  3632 	C$main.c$290$3$228 ==.
                           3633 ;	main.c:290: led1_off();
   38DB C2 85         [12] 3634 	clr	_PORTA_5
                     0154  3635 	C$main.c$292$1$200 ==.
                           3636 ;	main.c:292: delay_ms(200);
   38DD 90 00 C8      [24] 3637 	mov	dptr,#0x00C8
   38E0 12 33 2C      [24] 3638 	lcall	_delay_ms
   38E3 D0 07         [24] 3639 	pop	ar7
                     015C  3640 	C$main.c$296$1$200 ==.
                           3641 ;	main.c:296: if (coldstart) {
   38E5 E5 12         [12] 3642 	mov	a,_coldstart
   38E7 70 03         [24] 3643 	jnz	00333$
   38E9 02 39 E2      [24] 3644 	ljmp	00248$
   38EC                    3645 00333$:
                     0163  3646 	C$main.c$298$4$231 ==.
                           3647 ;	main.c:298: led0_off();
   38EC C2 84         [12] 3648 	clr	_PORTA_4
                     0165  3649 	C$main.c$299$4$233 ==.
                           3650 ;	main.c:299: led1_off();
   38EE C2 85         [12] 3651 	clr	_PORTA_5
                     0167  3652 	C$main.c$303$2$229 ==.
                           3653 ;	main.c:303: wakeup_desc.handler = wakeup_callback;
   38F0 90 02 9B      [24] 3654 	mov	dptr,#(_wakeup_desc + 0x0002)
   38F3 74 19         [12] 3655 	mov	a,#_wakeup_callback
   38F5 F0            [24] 3656 	movx	@dptr,a
   38F6 74 38         [12] 3657 	mov	a,#(_wakeup_callback >> 8)
   38F8 A3            [24] 3658 	inc	dptr
   38F9 F0            [24] 3659 	movx	@dptr,a
                     0171  3660 	C$main.c$311$2$229 ==.
                           3661 ;	main.c:311: i = axradio_init();
   38FA C0 07         [24] 3662 	push	ar7
   38FC 12 25 D1      [24] 3663 	lcall	_axradio_init
   38FF AE 82         [24] 3664 	mov	r6,dpl
   3901 D0 07         [24] 3665 	pop	ar7
                     017A  3666 	C$main.c$312$2$229 ==.
                           3667 ;	main.c:312: if (i != AXRADIO_ERR_NOERROR) {
   3903 EE            [12] 3668 	mov	a,r6
   3904 60 4A         [24] 3669 	jz	00208$
                     017D  3670 	C$main.c$313$3$234 ==.
                           3671 ;	main.c:313: if (i == AXRADIO_ERR_NOCHIP) {
   3906 BE 05 14      [24] 3672 	cjne	r6,#0x05,00200$
                     0180  3673 	C$main.c$316$4$235 ==.
                           3674 ;	main.c:316: if (DBGLNKSTAT & 0x10)
   3909 E5 E2         [12] 3675 	mov	a,_DBGLNKSTAT
   390B 20 E4 03      [24] 3676 	jb	acc.4,00337$
   390E 02 3A 3A      [24] 3677 	ljmp	00284$
   3911                    3678 00337$:
                     0188  3679 	C$main.c$317$4$235 ==.
                           3680 ;	main.c:317: dbglink_writestr("No AX5043 RF chip found \n");
   3911 90 54 01      [24] 3681 	mov	dptr,#__str_1
   3914 75 F0 80      [24] 3682 	mov	b,#0x80
   3917 12 4A 83      [24] 3683 	lcall	_dbglink_writestr
                     0191  3684 	C$main.c$319$4$235 ==.
                           3685 ;	main.c:319: goto terminate_error;
   391A 02 3A 3A      [24] 3686 	ljmp	00284$
   391D                    3687 00200$:
                     0194  3688 	C$main.c$323$3$234 ==.
                           3689 ;	main.c:323: if (DBGLNKSTAT & 0x10) {
   391D E5 E2         [12] 3690 	mov	a,_DBGLNKSTAT
   391F 20 E4 03      [24] 3691 	jb	acc.4,00338$
   3922 02 3A 35      [24] 3692 	ljmp	00283$
   3925                    3693 00338$:
                     019C  3694 	C$main.c$324$4$236 ==.
                           3695 ;	main.c:324: dbglink_writestr("error initializing radio: ");
   3925 90 54 1B      [24] 3696 	mov	dptr,#__str_2
   3928 75 F0 80      [24] 3697 	mov	b,#0x80
   392B C0 06         [24] 3698 	push	ar6
   392D 12 4A 83      [24] 3699 	lcall	_dbglink_writestr
   3930 D0 06         [24] 3700 	pop	ar6
                     01A9  3701 	C$main.c$325$4$236 ==.
                           3702 ;	main.c:325: dbglink_writehexu16(i, 2);
   3932 8E 04         [24] 3703 	mov	ar4,r6
   3934 7D 00         [12] 3704 	mov	r5,#0x00
   3936 C0 06         [24] 3705 	push	ar6
   3938 74 02         [12] 3706 	mov	a,#0x02
   393A C0 E0         [24] 3707 	push	acc
   393C 8C 82         [24] 3708 	mov	dpl,r4
   393E 8D 83         [24] 3709 	mov	dph,r5
   3940 12 4D 2A      [24] 3710 	lcall	_dbglink_writehexu16
   3943 15 81         [12] 3711 	dec	sp
   3945 D0 06         [24] 3712 	pop	ar6
                     01BE  3713 	C$main.c$326$4$236 ==.
                           3714 ;	main.c:326: dbglink_tx('\n');
   3947 75 82 0A      [24] 3715 	mov	dpl,#0x0A
   394A 12 3A B2      [24] 3716 	lcall	_dbglink_tx
                     01C4  3717 	C$main.c$329$3$234 ==.
                           3718 ;	main.c:329: goto terminate_radio_error;
   394D 02 3A 35      [24] 3719 	ljmp	00283$
                     01C7  3720 	C$main.c$332$2$229 ==.
                           3721 ;	main.c:332: led0_on();
   3950                    3722 00208$:
   3950 D2 84         [12] 3723 	setb	_PORTA_4
                     01C9  3724 	C$main.c$333$4$240 ==.
                           3725 ;	main.c:333: led1_off();
   3952 C2 85         [12] 3726 	clr	_PORTA_5
                     01CB  3727 	C$main.c$334$2$229 ==.
                           3728 ;	main.c:334: delay_ms(100);
   3954 90 00 64      [24] 3729 	mov	dptr,#0x0064
   3957 C0 07         [24] 3730 	push	ar7
   3959 12 33 2C      [24] 3731 	lcall	_delay_ms
   395C D0 07         [24] 3732 	pop	ar7
                     01D5  3733 	C$main.c$337$2$229 ==.
                           3734 ;	main.c:337: if (DBGLNKSTAT & 0x10)
   395E E5 E2         [12] 3735 	mov	a,_DBGLNKSTAT
   3960 30 E4 0D      [24] 3736 	jnb	acc.4,00218$
                     01DA  3737 	C$main.c$338$2$229 ==.
                           3738 ;	main.c:338: dbglink_writestr("found AX5043\n");
   3963 90 54 36      [24] 3739 	mov	dptr,#__str_3
   3966 75 F0 80      [24] 3740 	mov	b,#0x80
   3969 C0 07         [24] 3741 	push	ar7
   396B 12 4A 83      [24] 3742 	lcall	_dbglink_writestr
   396E D0 07         [24] 3743 	pop	ar7
   3970                    3744 00218$:
                     01E7  3745 	C$main.c$340$2$229 ==.
                           3746 ;	main.c:340: axradio_set_local_address(&localaddr);
   3970 90 52 ED      [24] 3747 	mov	dptr,#_localaddr
   3973 75 F0 80      [24] 3748 	mov	b,#0x80
   3976 C0 07         [24] 3749 	push	ar7
   3978 12 2E 7C      [24] 3750 	lcall	_axradio_set_local_address
                     01F2  3751 	C$main.c$341$2$229 ==.
                           3752 ;	main.c:341: axradio_set_default_remote_address(&remoteaddr);
   397B 90 52 E9      [24] 3753 	mov	dptr,#_remoteaddr
   397E 75 F0 80      [24] 3754 	mov	b,#0x80
   3981 12 2E BA      [24] 3755 	lcall	_axradio_set_default_remote_address
                     01FB  3756 	C$main.c$354$4$242 ==.
                           3757 ;	main.c:354: led0_off();
   3984 C2 84         [12] 3758 	clr	_PORTA_4
                     01FD  3759 	C$main.c$355$4$244 ==.
                           3760 ;	main.c:355: led1_on();
   3986 D2 85         [12] 3761 	setb	_PORTA_5
                     01FF  3762 	C$main.c$356$2$229 ==.
                           3763 ;	main.c:356: delay_ms(100);
   3988 90 00 64      [24] 3764 	mov	dptr,#0x0064
   398B 12 33 2C      [24] 3765 	lcall	_delay_ms
   398E D0 07         [24] 3766 	pop	ar7
                     0207  3767 	C$main.c$369$2$229 ==.
                           3768 ;	main.c:369: if (DBGLNKSTAT & 0x10) {
   3990 E5 E2         [12] 3769 	mov	a,_DBGLNKSTAT
   3992 30 E4 2E      [24] 3770 	jnb	acc.4,00232$
                     020C  3771 	C$main.c$370$3$245 ==.
                           3772 ;	main.c:370: dbglink_writestr("RNG = ");
   3995 90 54 44      [24] 3773 	mov	dptr,#__str_4
   3998 75 F0 80      [24] 3774 	mov	b,#0x80
   399B C0 07         [24] 3775 	push	ar7
   399D 12 4A 83      [24] 3776 	lcall	_dbglink_writestr
                     0217  3777 	C$main.c$371$3$245 ==.
                           3778 ;	main.c:371: dbglink_writenum16(axradio_get_pllrange(), 2, 0);
   39A0 12 2D 81      [24] 3779 	lcall	_axradio_get_pllrange
   39A3 AD 82         [24] 3780 	mov	r5,dpl
   39A5 E4            [12] 3781 	clr	a
   39A6 FC            [12] 3782 	mov	r4,a
   39A7 C0 E0         [24] 3783 	push	acc
   39A9 74 02         [12] 3784 	mov	a,#0x02
   39AB C0 E0         [24] 3785 	push	acc
   39AD 8D 82         [24] 3786 	mov	dpl,r5
   39AF 8C 83         [24] 3787 	mov	dph,r4
   39B1 12 50 3B      [24] 3788 	lcall	_dbglink_writenum16
   39B4 15 81         [12] 3789 	dec	sp
   39B6 15 81         [12] 3790 	dec	sp
                     022F  3791 	C$main.c$372$3$245 ==.
                           3792 ;	main.c:372: dbglink_writestr("\n\nMASTER\n");
   39B8 90 54 4B      [24] 3793 	mov	dptr,#__str_5
   39BB 75 F0 80      [24] 3794 	mov	b,#0x80
   39BE 12 4A 83      [24] 3795 	lcall	_dbglink_writestr
   39C1 D0 07         [24] 3796 	pop	ar7
   39C3                    3797 00232$:
                     023A  3798 	C$main.c$377$2$229 ==.
                           3799 ;	main.c:377: i = axradio_set_mode(RADIO_MODE);
   39C3 75 82 10      [24] 3800 	mov	dpl,#0x10
   39C6 C0 07         [24] 3801 	push	ar7
   39C8 12 28 D3      [24] 3802 	lcall	_axradio_set_mode
   39CB AE 82         [24] 3803 	mov	r6,dpl
   39CD D0 07         [24] 3804 	pop	ar7
                     0246  3805 	C$main.c$378$2$229 ==.
                           3806 ;	main.c:378: if (i != AXRADIO_ERR_NOERROR)
   39CF EE            [12] 3807 	mov	a,r6
   39D0 70 63         [24] 3808 	jnz	00283$
                     0249  3809 	C$main.c$381$4$247 ==.
                           3810 ;	main.c:381: led0_on();
   39D2 D2 84         [12] 3811 	setb	_PORTA_4
                     024B  3812 	C$main.c$382$4$249 ==.
                           3813 ;	main.c:382: led1_on();
   39D4 D2 85         [12] 3814 	setb	_PORTA_5
                     024D  3815 	C$main.c$383$2$229 ==.
                           3816 ;	main.c:383: delay_ms(100);
   39D6 90 00 64      [24] 3817 	mov	dptr,#0x0064
   39D9 C0 07         [24] 3818 	push	ar7
   39DB 12 33 2C      [24] 3819 	lcall	_delay_ms
   39DE D0 07         [24] 3820 	pop	ar7
   39E0 80 09         [24] 3821 	sjmp	00253$
   39E2                    3822 00248$:
                     0259  3823 	C$main.c$391$2$250 ==.
                           3824 ;	main.c:391: ax5043_commsleepexit();
   39E2 C0 07         [24] 3825 	push	ar7
   39E4 12 4C 5A      [24] 3826 	lcall	_ax5043_commsleepexit
   39E7 D0 07         [24] 3827 	pop	ar7
                     0260  3828 	C$main.c$392$2$250 ==.
                           3829 ;	main.c:392: IE_4 = 1;
   39E9 D2 AC         [12] 3830 	setb	_IE_4
                     0262  3831 	C$main.c$399$1$200 ==.
                           3832 ;	main.c:399: led0_off();
   39EB                    3833 00253$:
   39EB C2 84         [12] 3834 	clr	_PORTA_4
                     0264  3835 	C$main.c$400$3$254 ==.
                           3836 ;	main.c:400: led1_on();
   39ED D2 85         [12] 3837 	setb	_PORTA_5
   39EF                    3838 00288$:
                     0266  3839 	C$main.c$407$2$255 ==.
                           3840 ;	main.c:407: uint8_t v = scan_keymatrix();
   39EF C0 07         [24] 3841 	push	ar7
   39F1 12 34 9F      [24] 3842 	lcall	_scan_keymatrix
   39F4 AD 82         [24] 3843 	mov	r5,dpl
                     026D  3844 	C$main.c$409$3$256 ==.
                           3845 ;	main.c:409: led1_toggle();
   39F6 63 80 20      [24] 3846 	xrl	_PORTA,#0x20
                     0270  3847 	C$main.c$411$2$255 ==.
                           3848 ;	main.c:411: wtimer_runcallbacks();
   39F9 C0 05         [24] 3849 	push	ar5
   39FB 12 41 C0      [24] 3850 	lcall	_wtimer_runcallbacks
   39FE D0 05         [24] 3851 	pop	ar5
   3A00 D0 07         [24] 3852 	pop	ar7
                     0279  3853 	C$main.c$413$2$255 ==.
                           3854 ;	main.c:413: if (v) {
   3A02 ED            [12] 3855 	mov	a,r5
   3A03 60 2A         [24] 3856 	jz	00276$
                     027C  3857 	C$main.c$414$5$259 ==.
                           3858 ;	main.c:414: led0_on();
   3A05 D2 84         [12] 3859 	setb	_PORTA_4
                     027E  3860 	C$main.c$415$3$257 ==.
                           3861 ;	main.c:415: if (v != prev_key) {
   3A07 ED            [12] 3862 	mov	a,r5
   3A08 B5 07 02      [24] 3863 	cjne	a,ar7,00343$
   3A0B 80 24         [24] 3864 	sjmp	00281$
   3A0D                    3865 00343$:
                     0284  3866 	C$main.c$416$4$260 ==.
                           3867 ;	main.c:416: dbglink_writenum16(v, 2, 0);
   3A0D 8D 03         [24] 3868 	mov	ar3,r5
   3A0F 7C 00         [12] 3869 	mov	r4,#0x00
   3A11 C0 05         [24] 3870 	push	ar5
   3A13 E4            [12] 3871 	clr	a
   3A14 C0 E0         [24] 3872 	push	acc
   3A16 74 02         [12] 3873 	mov	a,#0x02
   3A18 C0 E0         [24] 3874 	push	acc
   3A1A 8B 82         [24] 3875 	mov	dpl,r3
   3A1C 8C 83         [24] 3876 	mov	dph,r4
   3A1E 12 50 3B      [24] 3877 	lcall	_dbglink_writenum16
   3A21 15 81         [12] 3878 	dec	sp
   3A23 15 81         [12] 3879 	dec	sp
   3A25 D0 05         [24] 3880 	pop	ar5
                     029E  3881 	C$main.c$417$4$260 ==.
                           3882 ;	main.c:417: dbglink_tx('\n');
   3A27 75 82 0A      [24] 3883 	mov	dpl,#0x0A
   3A2A 12 3A B2      [24] 3884 	lcall	_dbglink_tx
                     02A4  3885 	C$main.c$420$2$255 ==.
                           3886 ;	main.c:420: led0_off();
   3A2D 80 02         [24] 3887 	sjmp	00281$
   3A2F                    3888 00276$:
   3A2F C2 84         [12] 3889 	clr	_PORTA_4
   3A31                    3890 00281$:
                     02A8  3891 	C$main.c$422$2$255 ==.
                           3892 ;	main.c:422: prev_key = v;
   3A31 8D 07         [24] 3893 	mov	ar7,r5
                     02AA  3894 	C$main.c$468$1$200 ==.
                           3895 ;	main.c:468: terminate_radio_error:
   3A33 80 BA         [24] 3896 	sjmp	00288$
   3A35                    3897 00283$:
                     02AC  3898 	C$main.c$469$1$200 ==.
                           3899 ;	main.c:469: display_radio_error(i);
   3A35 8E 82         [24] 3900 	mov	dpl,r6
   3A37 12 32 D4      [24] 3901 	lcall	_display_radio_error
                     02B1  3902 	C$main.c$470$1$200 ==.
                           3903 ;	main.c:470: terminate_error:
   3A3A                    3904 00284$:
                     02B1  3905 	C$main.c$473$1$200 ==.
                           3906 ;	main.c:473: if (DBGLNKSTAT & 0x10)
   3A3A E5 E2         [12] 3907 	mov	a,_DBGLNKSTAT
   3A3C 30 E4 09      [24] 3908 	jnb	acc.4,00290$
                     02B6  3909 	C$main.c$474$1$200 ==.
                           3910 ;	main.c:474: dbglink_writestr("TERMINATE ERROR\n");
   3A3F 90 54 55      [24] 3911 	mov	dptr,#__str_6
   3A42 75 F0 80      [24] 3912 	mov	b,#0x80
   3A45 12 4A 83      [24] 3913 	lcall	_dbglink_writestr
   3A48                    3914 00290$:
                     02BF  3915 	C$main.c$481$2$263 ==.
                           3916 ;	main.c:481: wtimer_runcallbacks();
   3A48 12 41 C0      [24] 3917 	lcall	_wtimer_runcallbacks
                     02C2  3918 	C$main.c$492$3$264 ==.
                           3919 ;	main.c:492: wtimer_idle(flg);
   3A4B 75 82 02      [24] 3920 	mov	dpl,#0x02
   3A4E 12 42 44      [24] 3921 	lcall	_wtimer_idle
   3A51 80 F5         [24] 3922 	sjmp	00290$
                     02CA  3923 	C$main.c$495$1$200 ==.
                     02CA  3924 	XG$main$0$0 ==.
   3A53 22            [24] 3925 	ret
                           3926 	.area CSEG    (CODE)
                           3927 	.area CONST   (CODE)
                     0000  3928 Fmain$_str_0$0$0 == .
   53F1                    3929 __str_0:
   53F1 62 6F 6F 74 69 6E  3930 	.ascii "booting up ..."
        67 20 75 70 20 2E
        2E 2E
   53FF 0A                 3931 	.db 0x0A
   5400 00                 3932 	.db 0x00
                     0010  3933 Fmain$_str_1$0$0 == .
   5401                    3934 __str_1:
   5401 4E 6F 20 41 58 35  3935 	.ascii "No AX5043 RF chip found "
        30 34 33 20 52 46
        20 63 68 69 70 20
        66 6F 75 6E 64 20
   5419 0A                 3936 	.db 0x0A
   541A 00                 3937 	.db 0x00
                     002A  3938 Fmain$_str_2$0$0 == .
   541B                    3939 __str_2:
   541B 65 72 72 6F 72 20  3940 	.ascii "error initializing radio: "
        69 6E 69 74 69 61
        6C 69 7A 69 6E 67
        20 72 61 64 69 6F
        3A 20
   5435 00                 3941 	.db 0x00
                     0045  3942 Fmain$_str_3$0$0 == .
   5436                    3943 __str_3:
   5436 66 6F 75 6E 64 20  3944 	.ascii "found AX5043"
        41 58 35 30 34 33
   5442 0A                 3945 	.db 0x0A
   5443 00                 3946 	.db 0x00
                     0053  3947 Fmain$_str_4$0$0 == .
   5444                    3948 __str_4:
   5444 52 4E 47 20 3D 20  3949 	.ascii "RNG = "
   544A 00                 3950 	.db 0x00
                     005A  3951 Fmain$_str_5$0$0 == .
   544B                    3952 __str_5:
   544B 0A                 3953 	.db 0x0A
   544C 0A                 3954 	.db 0x0A
   544D 4D 41 53 54 45 52  3955 	.ascii "MASTER"
   5453 0A                 3956 	.db 0x0A
   5454 00                 3957 	.db 0x00
                     0064  3958 Fmain$_str_6$0$0 == .
   5455                    3959 __str_6:
   5455 54 45 52 4D 49 4E  3960 	.ascii "TERMINATE ERROR"
        41 54 45 20 45 52
        52 4F 52
   5464 0A                 3961 	.db 0x0A
   5465 00                 3962 	.db 0x00
                           3963 	.area XINIT   (CODE)
                           3964 	.area CABS    (ABS,CODE)
