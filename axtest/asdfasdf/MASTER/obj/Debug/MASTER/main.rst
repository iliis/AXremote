                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Wed Feb 12 18:49:11 2014
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
                             15 	.globl _display_radio_error
                             16 	.globl _delay_ms
                             17 	.globl _dbglink_writehexu16
                             18 	.globl _dbglink_writenum16
                             19 	.globl _dbglink_writestr
                             20 	.globl _dbglink_tx
                             21 	.globl _dbglink_init
                             22 	.globl _wtimer_runcallbacks
                             23 	.globl _wtimer_idle
                             24 	.globl _wtimer_init
                             25 	.globl _wtimer1_setconfig
                             26 	.globl _wtimer0_setconfig
                             27 	.globl _flash_apply_calibration
                             28 	.globl _ax5043_commsleepexit
                             29 	.globl _axradio_transmit
                             30 	.globl _axradio_set_default_remote_address
                             31 	.globl _axradio_set_local_address
                             32 	.globl _axradio_get_pllrange
                             33 	.globl _axradio_set_mode
                             34 	.globl _axradio_init
                             35 	.globl _PORTC_7
                             36 	.globl _PORTC_6
                             37 	.globl _PORTC_5
                             38 	.globl _PORTC_4
                             39 	.globl _PORTC_3
                             40 	.globl _PORTC_2
                             41 	.globl _PORTC_1
                             42 	.globl _PORTC_0
                             43 	.globl _PORTB_7
                             44 	.globl _PORTB_6
                             45 	.globl _PORTB_5
                             46 	.globl _PORTB_4
                             47 	.globl _PORTB_3
                             48 	.globl _PORTB_2
                             49 	.globl _PORTB_1
                             50 	.globl _PORTB_0
                             51 	.globl _PORTA_7
                             52 	.globl _PORTA_6
                             53 	.globl _PORTA_5
                             54 	.globl _PORTA_4
                             55 	.globl _PORTA_3
                             56 	.globl _PORTA_2
                             57 	.globl _PORTA_1
                             58 	.globl _PORTA_0
                             59 	.globl _PINC_7
                             60 	.globl _PINC_6
                             61 	.globl _PINC_5
                             62 	.globl _PINC_4
                             63 	.globl _PINC_3
                             64 	.globl _PINC_2
                             65 	.globl _PINC_1
                             66 	.globl _PINC_0
                             67 	.globl _PINB_7
                             68 	.globl _PINB_6
                             69 	.globl _PINB_5
                             70 	.globl _PINB_4
                             71 	.globl _PINB_3
                             72 	.globl _PINB_2
                             73 	.globl _PINB_1
                             74 	.globl _PINB_0
                             75 	.globl _PINA_7
                             76 	.globl _PINA_6
                             77 	.globl _PINA_5
                             78 	.globl _PINA_4
                             79 	.globl _PINA_3
                             80 	.globl _PINA_2
                             81 	.globl _PINA_1
                             82 	.globl _PINA_0
                             83 	.globl _CY
                             84 	.globl _AC
                             85 	.globl _F0
                             86 	.globl _RS1
                             87 	.globl _RS0
                             88 	.globl _OV
                             89 	.globl _F1
                             90 	.globl _P
                             91 	.globl _IP_7
                             92 	.globl _IP_6
                             93 	.globl _IP_5
                             94 	.globl _IP_4
                             95 	.globl _IP_3
                             96 	.globl _IP_2
                             97 	.globl _IP_1
                             98 	.globl _IP_0
                             99 	.globl _EA
                            100 	.globl _IE_7
                            101 	.globl _IE_6
                            102 	.globl _IE_5
                            103 	.globl _IE_4
                            104 	.globl _IE_3
                            105 	.globl _IE_2
                            106 	.globl _IE_1
                            107 	.globl _IE_0
                            108 	.globl _EIP_7
                            109 	.globl _EIP_6
                            110 	.globl _EIP_5
                            111 	.globl _EIP_4
                            112 	.globl _EIP_3
                            113 	.globl _EIP_2
                            114 	.globl _EIP_1
                            115 	.globl _EIP_0
                            116 	.globl _EIE_7
                            117 	.globl _EIE_6
                            118 	.globl _EIE_5
                            119 	.globl _EIE_4
                            120 	.globl _EIE_3
                            121 	.globl _EIE_2
                            122 	.globl _EIE_1
                            123 	.globl _EIE_0
                            124 	.globl _E2IP_7
                            125 	.globl _E2IP_6
                            126 	.globl _E2IP_5
                            127 	.globl _E2IP_4
                            128 	.globl _E2IP_3
                            129 	.globl _E2IP_2
                            130 	.globl _E2IP_1
                            131 	.globl _E2IP_0
                            132 	.globl _E2IE_7
                            133 	.globl _E2IE_6
                            134 	.globl _E2IE_5
                            135 	.globl _E2IE_4
                            136 	.globl _E2IE_3
                            137 	.globl _E2IE_2
                            138 	.globl _E2IE_1
                            139 	.globl _E2IE_0
                            140 	.globl _B_7
                            141 	.globl _B_6
                            142 	.globl _B_5
                            143 	.globl _B_4
                            144 	.globl _B_3
                            145 	.globl _B_2
                            146 	.globl _B_1
                            147 	.globl _B_0
                            148 	.globl _ACC_7
                            149 	.globl _ACC_6
                            150 	.globl _ACC_5
                            151 	.globl _ACC_4
                            152 	.globl _ACC_3
                            153 	.globl _ACC_2
                            154 	.globl _ACC_1
                            155 	.globl _ACC_0
                            156 	.globl _WTSTAT
                            157 	.globl _WTIRQEN
                            158 	.globl _WTEVTD
                            159 	.globl _WTEVTD1
                            160 	.globl _WTEVTD0
                            161 	.globl _WTEVTC
                            162 	.globl _WTEVTC1
                            163 	.globl _WTEVTC0
                            164 	.globl _WTEVTB
                            165 	.globl _WTEVTB1
                            166 	.globl _WTEVTB0
                            167 	.globl _WTEVTA
                            168 	.globl _WTEVTA1
                            169 	.globl _WTEVTA0
                            170 	.globl _WTCNTR1
                            171 	.globl _WTCNTB
                            172 	.globl _WTCNTB1
                            173 	.globl _WTCNTB0
                            174 	.globl _WTCNTA
                            175 	.globl _WTCNTA1
                            176 	.globl _WTCNTA0
                            177 	.globl _WTCFGB
                            178 	.globl _WTCFGA
                            179 	.globl _WDTRESET
                            180 	.globl _WDTCFG
                            181 	.globl _U1STATUS
                            182 	.globl _U1SHREG
                            183 	.globl _U1MODE
                            184 	.globl _U1CTRL
                            185 	.globl _U0STATUS
                            186 	.globl _U0SHREG
                            187 	.globl _U0MODE
                            188 	.globl _U0CTRL
                            189 	.globl _T2STATUS
                            190 	.globl _T2PERIOD
                            191 	.globl _T2PERIOD1
                            192 	.globl _T2PERIOD0
                            193 	.globl _T2MODE
                            194 	.globl _T2CNT
                            195 	.globl _T2CNT1
                            196 	.globl _T2CNT0
                            197 	.globl _T2CLKSRC
                            198 	.globl _T1STATUS
                            199 	.globl _T1PERIOD
                            200 	.globl _T1PERIOD1
                            201 	.globl _T1PERIOD0
                            202 	.globl _T1MODE
                            203 	.globl _T1CNT
                            204 	.globl _T1CNT1
                            205 	.globl _T1CNT0
                            206 	.globl _T1CLKSRC
                            207 	.globl _T0STATUS
                            208 	.globl _T0PERIOD
                            209 	.globl _T0PERIOD1
                            210 	.globl _T0PERIOD0
                            211 	.globl _T0MODE
                            212 	.globl _T0CNT
                            213 	.globl _T0CNT1
                            214 	.globl _T0CNT0
                            215 	.globl _T0CLKSRC
                            216 	.globl _SPSTATUS
                            217 	.globl _SPSHREG
                            218 	.globl _SPMODE
                            219 	.globl _SPCLKSRC
                            220 	.globl _RADIOSTAT
                            221 	.globl _RADIOSTAT1
                            222 	.globl _RADIOSTAT0
                            223 	.globl _RADIODATA
                            224 	.globl _RADIODATA3
                            225 	.globl _RADIODATA2
                            226 	.globl _RADIODATA1
                            227 	.globl _RADIODATA0
                            228 	.globl _RADIOADDR
                            229 	.globl _RADIOADDR1
                            230 	.globl _RADIOADDR0
                            231 	.globl _RADIOACC
                            232 	.globl _OC1STATUS
                            233 	.globl _OC1PIN
                            234 	.globl _OC1MODE
                            235 	.globl _OC1COMP
                            236 	.globl _OC1COMP1
                            237 	.globl _OC1COMP0
                            238 	.globl _OC0STATUS
                            239 	.globl _OC0PIN
                            240 	.globl _OC0MODE
                            241 	.globl _OC0COMP
                            242 	.globl _OC0COMP1
                            243 	.globl _OC0COMP0
                            244 	.globl _NVSTATUS
                            245 	.globl _NVKEY
                            246 	.globl _NVDATA
                            247 	.globl _NVDATA1
                            248 	.globl _NVDATA0
                            249 	.globl _NVADDR
                            250 	.globl _NVADDR1
                            251 	.globl _NVADDR0
                            252 	.globl _IC1STATUS
                            253 	.globl _IC1MODE
                            254 	.globl _IC1CAPT
                            255 	.globl _IC1CAPT1
                            256 	.globl _IC1CAPT0
                            257 	.globl _IC0STATUS
                            258 	.globl _IC0MODE
                            259 	.globl _IC0CAPT
                            260 	.globl _IC0CAPT1
                            261 	.globl _IC0CAPT0
                            262 	.globl _PORTR
                            263 	.globl _PORTC
                            264 	.globl _PORTB
                            265 	.globl _PORTA
                            266 	.globl _PINR
                            267 	.globl _PINC
                            268 	.globl _PINB
                            269 	.globl _PINA
                            270 	.globl _DIRR
                            271 	.globl _DIRC
                            272 	.globl _DIRB
                            273 	.globl _DIRA
                            274 	.globl _DBGLNKSTAT
                            275 	.globl _DBGLNKBUF
                            276 	.globl _CODECONFIG
                            277 	.globl _CLKSTAT
                            278 	.globl _CLKCON
                            279 	.globl _ANALOGCOMP
                            280 	.globl _ADCCONV
                            281 	.globl _ADCCLKSRC
                            282 	.globl _ADCCH3CONFIG
                            283 	.globl _ADCCH2CONFIG
                            284 	.globl _ADCCH1CONFIG
                            285 	.globl _ADCCH0CONFIG
                            286 	.globl __XPAGE
                            287 	.globl _XPAGE
                            288 	.globl _SP
                            289 	.globl _PSW
                            290 	.globl _PCON
                            291 	.globl _IP
                            292 	.globl _IE
                            293 	.globl _EIP
                            294 	.globl _EIE
                            295 	.globl _E2IP
                            296 	.globl _E2IE
                            297 	.globl _DPS
                            298 	.globl _DPTR1
                            299 	.globl _DPTR0
                            300 	.globl _DPL1
                            301 	.globl _DPL
                            302 	.globl _DPH1
                            303 	.globl _DPH
                            304 	.globl _B
                            305 	.globl _ACC
                            306 	.globl _wakeup_desc
                            307 	.globl _AX5043_TIMEGAIN3NB
                            308 	.globl _AX5043_TIMEGAIN2NB
                            309 	.globl _AX5043_TIMEGAIN1NB
                            310 	.globl _AX5043_TIMEGAIN0NB
                            311 	.globl _AX5043_RXPARAMSETSNB
                            312 	.globl _AX5043_RXPARAMCURSETNB
                            313 	.globl _AX5043_PKTMAXLENNB
                            314 	.globl _AX5043_PKTLENOFFSETNB
                            315 	.globl _AX5043_PKTLENCFGNB
                            316 	.globl _AX5043_PKTADDRMASK3NB
                            317 	.globl _AX5043_PKTADDRMASK2NB
                            318 	.globl _AX5043_PKTADDRMASK1NB
                            319 	.globl _AX5043_PKTADDRMASK0NB
                            320 	.globl _AX5043_PKTADDRCFGNB
                            321 	.globl _AX5043_PKTADDR3NB
                            322 	.globl _AX5043_PKTADDR2NB
                            323 	.globl _AX5043_PKTADDR1NB
                            324 	.globl _AX5043_PKTADDR0NB
                            325 	.globl _AX5043_PHASEGAIN3NB
                            326 	.globl _AX5043_PHASEGAIN2NB
                            327 	.globl _AX5043_PHASEGAIN1NB
                            328 	.globl _AX5043_PHASEGAIN0NB
                            329 	.globl _AX5043_FREQUENCYLEAKNB
                            330 	.globl _AX5043_FREQUENCYGAIND3NB
                            331 	.globl _AX5043_FREQUENCYGAIND2NB
                            332 	.globl _AX5043_FREQUENCYGAIND1NB
                            333 	.globl _AX5043_FREQUENCYGAIND0NB
                            334 	.globl _AX5043_FREQUENCYGAINC3NB
                            335 	.globl _AX5043_FREQUENCYGAINC2NB
                            336 	.globl _AX5043_FREQUENCYGAINC1NB
                            337 	.globl _AX5043_FREQUENCYGAINC0NB
                            338 	.globl _AX5043_FREQUENCYGAINB3NB
                            339 	.globl _AX5043_FREQUENCYGAINB2NB
                            340 	.globl _AX5043_FREQUENCYGAINB1NB
                            341 	.globl _AX5043_FREQUENCYGAINB0NB
                            342 	.globl _AX5043_FREQUENCYGAINA3NB
                            343 	.globl _AX5043_FREQUENCYGAINA2NB
                            344 	.globl _AX5043_FREQUENCYGAINA1NB
                            345 	.globl _AX5043_FREQUENCYGAINA0NB
                            346 	.globl _AX5043_FREQDEV13NB
                            347 	.globl _AX5043_FREQDEV12NB
                            348 	.globl _AX5043_FREQDEV11NB
                            349 	.globl _AX5043_FREQDEV10NB
                            350 	.globl _AX5043_FREQDEV03NB
                            351 	.globl _AX5043_FREQDEV02NB
                            352 	.globl _AX5043_FREQDEV01NB
                            353 	.globl _AX5043_FREQDEV00NB
                            354 	.globl _AX5043_FOURFSK3NB
                            355 	.globl _AX5043_FOURFSK2NB
                            356 	.globl _AX5043_FOURFSK1NB
                            357 	.globl _AX5043_FOURFSK0NB
                            358 	.globl _AX5043_DRGAIN3NB
                            359 	.globl _AX5043_DRGAIN2NB
                            360 	.globl _AX5043_DRGAIN1NB
                            361 	.globl _AX5043_DRGAIN0NB
                            362 	.globl _AX5043_BBOFFSRES3NB
                            363 	.globl _AX5043_BBOFFSRES2NB
                            364 	.globl _AX5043_BBOFFSRES1NB
                            365 	.globl _AX5043_BBOFFSRES0NB
                            366 	.globl _AX5043_AMPLITUDEGAIN3NB
                            367 	.globl _AX5043_AMPLITUDEGAIN2NB
                            368 	.globl _AX5043_AMPLITUDEGAIN1NB
                            369 	.globl _AX5043_AMPLITUDEGAIN0NB
                            370 	.globl _AX5043_AGCTARGET3NB
                            371 	.globl _AX5043_AGCTARGET2NB
                            372 	.globl _AX5043_AGCTARGET1NB
                            373 	.globl _AX5043_AGCTARGET0NB
                            374 	.globl _AX5043_AGCMINMAX3NB
                            375 	.globl _AX5043_AGCMINMAX2NB
                            376 	.globl _AX5043_AGCMINMAX1NB
                            377 	.globl _AX5043_AGCMINMAX0NB
                            378 	.globl _AX5043_AGCGAIN3NB
                            379 	.globl _AX5043_AGCGAIN2NB
                            380 	.globl _AX5043_AGCGAIN1NB
                            381 	.globl _AX5043_AGCGAIN0NB
                            382 	.globl _AX5043_AGCAHYST3NB
                            383 	.globl _AX5043_AGCAHYST2NB
                            384 	.globl _AX5043_AGCAHYST1NB
                            385 	.globl _AX5043_AGCAHYST0NB
                            386 	.globl _AX5043_XTALSTATUSNB
                            387 	.globl _AX5043_XTALCAPNB
                            388 	.globl _AX5043_WAKEUPXOEARLYNB
                            389 	.globl _AX5043_WAKEUPTIMER1NB
                            390 	.globl _AX5043_WAKEUPTIMER0NB
                            391 	.globl _AX5043_WAKEUPFREQ1NB
                            392 	.globl _AX5043_WAKEUPFREQ0NB
                            393 	.globl _AX5043_WAKEUP1NB
                            394 	.globl _AX5043_WAKEUP0NB
                            395 	.globl _AX5043_TXRATE2NB
                            396 	.globl _AX5043_TXRATE1NB
                            397 	.globl _AX5043_TXRATE0NB
                            398 	.globl _AX5043_TXPWRCOEFFE1NB
                            399 	.globl _AX5043_TXPWRCOEFFE0NB
                            400 	.globl _AX5043_TXPWRCOEFFD1NB
                            401 	.globl _AX5043_TXPWRCOEFFD0NB
                            402 	.globl _AX5043_TXPWRCOEFFC1NB
                            403 	.globl _AX5043_TXPWRCOEFFC0NB
                            404 	.globl _AX5043_TXPWRCOEFFB1NB
                            405 	.globl _AX5043_TXPWRCOEFFB0NB
                            406 	.globl _AX5043_TXPWRCOEFFA1NB
                            407 	.globl _AX5043_TXPWRCOEFFA0NB
                            408 	.globl _AX5043_TRKRFFREQ2NB
                            409 	.globl _AX5043_TRKRFFREQ1NB
                            410 	.globl _AX5043_TRKRFFREQ0NB
                            411 	.globl _AX5043_TRKPHASE1NB
                            412 	.globl _AX5043_TRKPHASE0NB
                            413 	.globl _AX5043_TRKFSKDEMOD1NB
                            414 	.globl _AX5043_TRKFSKDEMOD0NB
                            415 	.globl _AX5043_TRKFREQ1NB
                            416 	.globl _AX5043_TRKFREQ0NB
                            417 	.globl _AX5043_TRKDATARATE2NB
                            418 	.globl _AX5043_TRKDATARATE1NB
                            419 	.globl _AX5043_TRKDATARATE0NB
                            420 	.globl _AX5043_TRKAMPLITUDE1NB
                            421 	.globl _AX5043_TRKAMPLITUDE0NB
                            422 	.globl _AX5043_TRKAFSKDEMOD1NB
                            423 	.globl _AX5043_TRKAFSKDEMOD0NB
                            424 	.globl _AX5043_TMGTXSETTLENB
                            425 	.globl _AX5043_TMGTXBOOSTNB
                            426 	.globl _AX5043_TMGRXSETTLENB
                            427 	.globl _AX5043_TMGRXRSSINB
                            428 	.globl _AX5043_TMGRXPREAMBLE3NB
                            429 	.globl _AX5043_TMGRXPREAMBLE2NB
                            430 	.globl _AX5043_TMGRXPREAMBLE1NB
                            431 	.globl _AX5043_TMGRXOFFSACQNB
                            432 	.globl _AX5043_TMGRXCOARSEAGCNB
                            433 	.globl _AX5043_TMGRXBOOSTNB
                            434 	.globl _AX5043_TMGRXAGCNB
                            435 	.globl _AX5043_TIMER2NB
                            436 	.globl _AX5043_TIMER1NB
                            437 	.globl _AX5043_TIMER0NB
                            438 	.globl _AX5043_SILICONREVISIONNB
                            439 	.globl _AX5043_SCRATCHNB
                            440 	.globl _AX5043_RXDATARATE2NB
                            441 	.globl _AX5043_RXDATARATE1NB
                            442 	.globl _AX5043_RXDATARATE0NB
                            443 	.globl _AX5043_RSSIREFERENCENB
                            444 	.globl _AX5043_RSSIABSTHRNB
                            445 	.globl _AX5043_RSSINB
                            446 	.globl _AX5043_RADIOSTATENB
                            447 	.globl _AX5043_RADIOEVENTREQ1NB
                            448 	.globl _AX5043_RADIOEVENTREQ0NB
                            449 	.globl _AX5043_RADIOEVENTMASK1NB
                            450 	.globl _AX5043_RADIOEVENTMASK0NB
                            451 	.globl _AX5043_PWRMODENB
                            452 	.globl _AX5043_PWRAMPNB
                            453 	.globl _AX5043_POWSTICKYSTATNB
                            454 	.globl _AX5043_POWSTATNB
                            455 	.globl _AX5043_POWIRQMASKNB
                            456 	.globl _AX5043_PLLVCOIRNB
                            457 	.globl _AX5043_PLLVCOINB
                            458 	.globl _AX5043_PLLVCODIVNB
                            459 	.globl _AX5043_PLLRNGCLKNB
                            460 	.globl _AX5043_PLLRANGINGBNB
                            461 	.globl _AX5043_PLLRANGINGANB
                            462 	.globl _AX5043_PLLLOOPBOOSTNB
                            463 	.globl _AX5043_PLLLOOPNB
                            464 	.globl _AX5043_PLLLOCKDETNB
                            465 	.globl _AX5043_PLLCPIBOOSTNB
                            466 	.globl _AX5043_PLLCPINB
                            467 	.globl _AX5043_PKTSTOREFLAGSNB
                            468 	.globl _AX5043_PKTMISCFLAGSNB
                            469 	.globl _AX5043_PKTCHUNKSIZENB
                            470 	.globl _AX5043_PKTACCEPTFLAGSNB
                            471 	.globl _AX5043_PINSTATENB
                            472 	.globl _AX5043_PINFUNCSYSCLKNB
                            473 	.globl _AX5043_PINFUNCPWRAMPNB
                            474 	.globl _AX5043_PINFUNCIRQNB
                            475 	.globl _AX5043_PINFUNCDCLKNB
                            476 	.globl _AX5043_PINFUNCDATANB
                            477 	.globl _AX5043_PINFUNCANTSELNB
                            478 	.globl _AX5043_MODULATIONNB
                            479 	.globl _AX5043_MODCFGFNB
                            480 	.globl _AX5043_MODCFGANB
                            481 	.globl _AX5043_MAXRFOFFSET2NB
                            482 	.globl _AX5043_MAXRFOFFSET1NB
                            483 	.globl _AX5043_MAXRFOFFSET0NB
                            484 	.globl _AX5043_MAXDROFFSET2NB
                            485 	.globl _AX5043_MAXDROFFSET1NB
                            486 	.globl _AX5043_MAXDROFFSET0NB
                            487 	.globl _AX5043_MATCH1PAT1NB
                            488 	.globl _AX5043_MATCH1PAT0NB
                            489 	.globl _AX5043_MATCH1MINNB
                            490 	.globl _AX5043_MATCH1MAXNB
                            491 	.globl _AX5043_MATCH1LENNB
                            492 	.globl _AX5043_MATCH0PAT3NB
                            493 	.globl _AX5043_MATCH0PAT2NB
                            494 	.globl _AX5043_MATCH0PAT1NB
                            495 	.globl _AX5043_MATCH0PAT0NB
                            496 	.globl _AX5043_MATCH0MINNB
                            497 	.globl _AX5043_MATCH0MAXNB
                            498 	.globl _AX5043_MATCH0LENNB
                            499 	.globl _AX5043_LPOSCSTATUSNB
                            500 	.globl _AX5043_LPOSCREF1NB
                            501 	.globl _AX5043_LPOSCREF0NB
                            502 	.globl _AX5043_LPOSCPER1NB
                            503 	.globl _AX5043_LPOSCPER0NB
                            504 	.globl _AX5043_LPOSCKFILT1NB
                            505 	.globl _AX5043_LPOSCKFILT0NB
                            506 	.globl _AX5043_LPOSCFREQ1NB
                            507 	.globl _AX5043_LPOSCFREQ0NB
                            508 	.globl _AX5043_LPOSCCONFIGNB
                            509 	.globl _AX5043_IRQREQUEST1NB
                            510 	.globl _AX5043_IRQREQUEST0NB
                            511 	.globl _AX5043_IRQMASK1NB
                            512 	.globl _AX5043_IRQMASK0NB
                            513 	.globl _AX5043_IRQINVERSION1NB
                            514 	.globl _AX5043_IRQINVERSION0NB
                            515 	.globl _AX5043_IFFREQ1NB
                            516 	.globl _AX5043_IFFREQ0NB
                            517 	.globl _AX5043_GPADCPERIODNB
                            518 	.globl _AX5043_GPADCCTRLNB
                            519 	.globl _AX5043_GPADC13VALUE1NB
                            520 	.globl _AX5043_GPADC13VALUE0NB
                            521 	.globl _AX5043_FSKDMIN1NB
                            522 	.globl _AX5043_FSKDMIN0NB
                            523 	.globl _AX5043_FSKDMAX1NB
                            524 	.globl _AX5043_FSKDMAX0NB
                            525 	.globl _AX5043_FSKDEV2NB
                            526 	.globl _AX5043_FSKDEV1NB
                            527 	.globl _AX5043_FSKDEV0NB
                            528 	.globl _AX5043_FREQB3NB
                            529 	.globl _AX5043_FREQB2NB
                            530 	.globl _AX5043_FREQB1NB
                            531 	.globl _AX5043_FREQB0NB
                            532 	.globl _AX5043_FREQA3NB
                            533 	.globl _AX5043_FREQA2NB
                            534 	.globl _AX5043_FREQA1NB
                            535 	.globl _AX5043_FREQA0NB
                            536 	.globl _AX5043_FRAMINGNB
                            537 	.globl _AX5043_FIFOTHRESH1NB
                            538 	.globl _AX5043_FIFOTHRESH0NB
                            539 	.globl _AX5043_FIFOSTATNB
                            540 	.globl _AX5043_FIFOFREE1NB
                            541 	.globl _AX5043_FIFOFREE0NB
                            542 	.globl _AX5043_FIFODATANB
                            543 	.globl _AX5043_FIFOCOUNT1NB
                            544 	.globl _AX5043_FIFOCOUNT0NB
                            545 	.globl _AX5043_FECSYNCNB
                            546 	.globl _AX5043_FECSTATUSNB
                            547 	.globl _AX5043_FECNB
                            548 	.globl _AX5043_ENCODINGNB
                            549 	.globl _AX5043_DIVERSITYNB
                            550 	.globl _AX5043_DECIMATIONNB
                            551 	.globl _AX5043_DACVALUE1NB
                            552 	.globl _AX5043_DACVALUE0NB
                            553 	.globl _AX5043_DACCONFIGNB
                            554 	.globl _AX5043_CRCINIT3NB
                            555 	.globl _AX5043_CRCINIT2NB
                            556 	.globl _AX5043_CRCINIT1NB
                            557 	.globl _AX5043_CRCINIT0NB
                            558 	.globl _AX5043_BGNDRSSITHRNB
                            559 	.globl _AX5043_BGNDRSSIGAINNB
                            560 	.globl _AX5043_BGNDRSSINB
                            561 	.globl _AX5043_BBTUNENB
                            562 	.globl _AX5043_BBOFFSCAPNB
                            563 	.globl _AX5043_AMPLFILTERNB
                            564 	.globl _AX5043_AGCCOUNTERNB
                            565 	.globl _AX5043_AFSKSPACE1NB
                            566 	.globl _AX5043_AFSKSPACE0NB
                            567 	.globl _AX5043_AFSKMARK1NB
                            568 	.globl _AX5043_AFSKMARK0NB
                            569 	.globl _AX5043_AFSKCTRLNB
                            570 	.globl _AX5043_TIMEGAIN3
                            571 	.globl _AX5043_TIMEGAIN2
                            572 	.globl _AX5043_TIMEGAIN1
                            573 	.globl _AX5043_TIMEGAIN0
                            574 	.globl _AX5043_RXPARAMSETS
                            575 	.globl _AX5043_RXPARAMCURSET
                            576 	.globl _AX5043_PKTMAXLEN
                            577 	.globl _AX5043_PKTLENOFFSET
                            578 	.globl _AX5043_PKTLENCFG
                            579 	.globl _AX5043_PKTADDRMASK3
                            580 	.globl _AX5043_PKTADDRMASK2
                            581 	.globl _AX5043_PKTADDRMASK1
                            582 	.globl _AX5043_PKTADDRMASK0
                            583 	.globl _AX5043_PKTADDRCFG
                            584 	.globl _AX5043_PKTADDR3
                            585 	.globl _AX5043_PKTADDR2
                            586 	.globl _AX5043_PKTADDR1
                            587 	.globl _AX5043_PKTADDR0
                            588 	.globl _AX5043_PHASEGAIN3
                            589 	.globl _AX5043_PHASEGAIN2
                            590 	.globl _AX5043_PHASEGAIN1
                            591 	.globl _AX5043_PHASEGAIN0
                            592 	.globl _AX5043_FREQUENCYLEAK
                            593 	.globl _AX5043_FREQUENCYGAIND3
                            594 	.globl _AX5043_FREQUENCYGAIND2
                            595 	.globl _AX5043_FREQUENCYGAIND1
                            596 	.globl _AX5043_FREQUENCYGAIND0
                            597 	.globl _AX5043_FREQUENCYGAINC3
                            598 	.globl _AX5043_FREQUENCYGAINC2
                            599 	.globl _AX5043_FREQUENCYGAINC1
                            600 	.globl _AX5043_FREQUENCYGAINC0
                            601 	.globl _AX5043_FREQUENCYGAINB3
                            602 	.globl _AX5043_FREQUENCYGAINB2
                            603 	.globl _AX5043_FREQUENCYGAINB1
                            604 	.globl _AX5043_FREQUENCYGAINB0
                            605 	.globl _AX5043_FREQUENCYGAINA3
                            606 	.globl _AX5043_FREQUENCYGAINA2
                            607 	.globl _AX5043_FREQUENCYGAINA1
                            608 	.globl _AX5043_FREQUENCYGAINA0
                            609 	.globl _AX5043_FREQDEV13
                            610 	.globl _AX5043_FREQDEV12
                            611 	.globl _AX5043_FREQDEV11
                            612 	.globl _AX5043_FREQDEV10
                            613 	.globl _AX5043_FREQDEV03
                            614 	.globl _AX5043_FREQDEV02
                            615 	.globl _AX5043_FREQDEV01
                            616 	.globl _AX5043_FREQDEV00
                            617 	.globl _AX5043_FOURFSK3
                            618 	.globl _AX5043_FOURFSK2
                            619 	.globl _AX5043_FOURFSK1
                            620 	.globl _AX5043_FOURFSK0
                            621 	.globl _AX5043_DRGAIN3
                            622 	.globl _AX5043_DRGAIN2
                            623 	.globl _AX5043_DRGAIN1
                            624 	.globl _AX5043_DRGAIN0
                            625 	.globl _AX5043_BBOFFSRES3
                            626 	.globl _AX5043_BBOFFSRES2
                            627 	.globl _AX5043_BBOFFSRES1
                            628 	.globl _AX5043_BBOFFSRES0
                            629 	.globl _AX5043_AMPLITUDEGAIN3
                            630 	.globl _AX5043_AMPLITUDEGAIN2
                            631 	.globl _AX5043_AMPLITUDEGAIN1
                            632 	.globl _AX5043_AMPLITUDEGAIN0
                            633 	.globl _AX5043_AGCTARGET3
                            634 	.globl _AX5043_AGCTARGET2
                            635 	.globl _AX5043_AGCTARGET1
                            636 	.globl _AX5043_AGCTARGET0
                            637 	.globl _AX5043_AGCMINMAX3
                            638 	.globl _AX5043_AGCMINMAX2
                            639 	.globl _AX5043_AGCMINMAX1
                            640 	.globl _AX5043_AGCMINMAX0
                            641 	.globl _AX5043_AGCGAIN3
                            642 	.globl _AX5043_AGCGAIN2
                            643 	.globl _AX5043_AGCGAIN1
                            644 	.globl _AX5043_AGCGAIN0
                            645 	.globl _AX5043_AGCAHYST3
                            646 	.globl _AX5043_AGCAHYST2
                            647 	.globl _AX5043_AGCAHYST1
                            648 	.globl _AX5043_AGCAHYST0
                            649 	.globl _AX5043_XTALSTATUS
                            650 	.globl _AX5043_XTALCAP
                            651 	.globl _AX5043_WAKEUPXOEARLY
                            652 	.globl _AX5043_WAKEUPTIMER1
                            653 	.globl _AX5043_WAKEUPTIMER0
                            654 	.globl _AX5043_WAKEUPFREQ1
                            655 	.globl _AX5043_WAKEUPFREQ0
                            656 	.globl _AX5043_WAKEUP1
                            657 	.globl _AX5043_WAKEUP0
                            658 	.globl _AX5043_TXRATE2
                            659 	.globl _AX5043_TXRATE1
                            660 	.globl _AX5043_TXRATE0
                            661 	.globl _AX5043_TXPWRCOEFFE1
                            662 	.globl _AX5043_TXPWRCOEFFE0
                            663 	.globl _AX5043_TXPWRCOEFFD1
                            664 	.globl _AX5043_TXPWRCOEFFD0
                            665 	.globl _AX5043_TXPWRCOEFFC1
                            666 	.globl _AX5043_TXPWRCOEFFC0
                            667 	.globl _AX5043_TXPWRCOEFFB1
                            668 	.globl _AX5043_TXPWRCOEFFB0
                            669 	.globl _AX5043_TXPWRCOEFFA1
                            670 	.globl _AX5043_TXPWRCOEFFA0
                            671 	.globl _AX5043_TRKRFFREQ2
                            672 	.globl _AX5043_TRKRFFREQ1
                            673 	.globl _AX5043_TRKRFFREQ0
                            674 	.globl _AX5043_TRKPHASE1
                            675 	.globl _AX5043_TRKPHASE0
                            676 	.globl _AX5043_TRKFSKDEMOD1
                            677 	.globl _AX5043_TRKFSKDEMOD0
                            678 	.globl _AX5043_TRKFREQ1
                            679 	.globl _AX5043_TRKFREQ0
                            680 	.globl _AX5043_TRKDATARATE2
                            681 	.globl _AX5043_TRKDATARATE1
                            682 	.globl _AX5043_TRKDATARATE0
                            683 	.globl _AX5043_TRKAMPLITUDE1
                            684 	.globl _AX5043_TRKAMPLITUDE0
                            685 	.globl _AX5043_TRKAFSKDEMOD1
                            686 	.globl _AX5043_TRKAFSKDEMOD0
                            687 	.globl _AX5043_TMGTXSETTLE
                            688 	.globl _AX5043_TMGTXBOOST
                            689 	.globl _AX5043_TMGRXSETTLE
                            690 	.globl _AX5043_TMGRXRSSI
                            691 	.globl _AX5043_TMGRXPREAMBLE3
                            692 	.globl _AX5043_TMGRXPREAMBLE2
                            693 	.globl _AX5043_TMGRXPREAMBLE1
                            694 	.globl _AX5043_TMGRXOFFSACQ
                            695 	.globl _AX5043_TMGRXCOARSEAGC
                            696 	.globl _AX5043_TMGRXBOOST
                            697 	.globl _AX5043_TMGRXAGC
                            698 	.globl _AX5043_TIMER2
                            699 	.globl _AX5043_TIMER1
                            700 	.globl _AX5043_TIMER0
                            701 	.globl _AX5043_SILICONREVISION
                            702 	.globl _AX5043_SCRATCH
                            703 	.globl _AX5043_RXDATARATE2
                            704 	.globl _AX5043_RXDATARATE1
                            705 	.globl _AX5043_RXDATARATE0
                            706 	.globl _AX5043_RSSIREFERENCE
                            707 	.globl _AX5043_RSSIABSTHR
                            708 	.globl _AX5043_RSSI
                            709 	.globl _AX5043_RADIOSTATE
                            710 	.globl _AX5043_RADIOEVENTREQ1
                            711 	.globl _AX5043_RADIOEVENTREQ0
                            712 	.globl _AX5043_RADIOEVENTMASK1
                            713 	.globl _AX5043_RADIOEVENTMASK0
                            714 	.globl _AX5043_PWRMODE
                            715 	.globl _AX5043_PWRAMP
                            716 	.globl _AX5043_POWSTICKYSTAT
                            717 	.globl _AX5043_POWSTAT
                            718 	.globl _AX5043_POWIRQMASK
                            719 	.globl _AX5043_PLLVCOIR
                            720 	.globl _AX5043_PLLVCOI
                            721 	.globl _AX5043_PLLVCODIV
                            722 	.globl _AX5043_PLLRNGCLK
                            723 	.globl _AX5043_PLLRANGINGB
                            724 	.globl _AX5043_PLLRANGINGA
                            725 	.globl _AX5043_PLLLOOPBOOST
                            726 	.globl _AX5043_PLLLOOP
                            727 	.globl _AX5043_PLLLOCKDET
                            728 	.globl _AX5043_PLLCPIBOOST
                            729 	.globl _AX5043_PLLCPI
                            730 	.globl _AX5043_PKTSTOREFLAGS
                            731 	.globl _AX5043_PKTMISCFLAGS
                            732 	.globl _AX5043_PKTCHUNKSIZE
                            733 	.globl _AX5043_PKTACCEPTFLAGS
                            734 	.globl _AX5043_PINSTATE
                            735 	.globl _AX5043_PINFUNCSYSCLK
                            736 	.globl _AX5043_PINFUNCPWRAMP
                            737 	.globl _AX5043_PINFUNCIRQ
                            738 	.globl _AX5043_PINFUNCDCLK
                            739 	.globl _AX5043_PINFUNCDATA
                            740 	.globl _AX5043_PINFUNCANTSEL
                            741 	.globl _AX5043_MODULATION
                            742 	.globl _AX5043_MODCFGF
                            743 	.globl _AX5043_MODCFGA
                            744 	.globl _AX5043_MAXRFOFFSET2
                            745 	.globl _AX5043_MAXRFOFFSET1
                            746 	.globl _AX5043_MAXRFOFFSET0
                            747 	.globl _AX5043_MAXDROFFSET2
                            748 	.globl _AX5043_MAXDROFFSET1
                            749 	.globl _AX5043_MAXDROFFSET0
                            750 	.globl _AX5043_MATCH1PAT1
                            751 	.globl _AX5043_MATCH1PAT0
                            752 	.globl _AX5043_MATCH1MIN
                            753 	.globl _AX5043_MATCH1MAX
                            754 	.globl _AX5043_MATCH1LEN
                            755 	.globl _AX5043_MATCH0PAT3
                            756 	.globl _AX5043_MATCH0PAT2
                            757 	.globl _AX5043_MATCH0PAT1
                            758 	.globl _AX5043_MATCH0PAT0
                            759 	.globl _AX5043_MATCH0MIN
                            760 	.globl _AX5043_MATCH0MAX
                            761 	.globl _AX5043_MATCH0LEN
                            762 	.globl _AX5043_LPOSCSTATUS
                            763 	.globl _AX5043_LPOSCREF1
                            764 	.globl _AX5043_LPOSCREF0
                            765 	.globl _AX5043_LPOSCPER1
                            766 	.globl _AX5043_LPOSCPER0
                            767 	.globl _AX5043_LPOSCKFILT1
                            768 	.globl _AX5043_LPOSCKFILT0
                            769 	.globl _AX5043_LPOSCFREQ1
                            770 	.globl _AX5043_LPOSCFREQ0
                            771 	.globl _AX5043_LPOSCCONFIG
                            772 	.globl _AX5043_IRQREQUEST1
                            773 	.globl _AX5043_IRQREQUEST0
                            774 	.globl _AX5043_IRQMASK1
                            775 	.globl _AX5043_IRQMASK0
                            776 	.globl _AX5043_IRQINVERSION1
                            777 	.globl _AX5043_IRQINVERSION0
                            778 	.globl _AX5043_IFFREQ1
                            779 	.globl _AX5043_IFFREQ0
                            780 	.globl _AX5043_GPADCPERIOD
                            781 	.globl _AX5043_GPADCCTRL
                            782 	.globl _AX5043_GPADC13VALUE1
                            783 	.globl _AX5043_GPADC13VALUE0
                            784 	.globl _AX5043_FSKDMIN1
                            785 	.globl _AX5043_FSKDMIN0
                            786 	.globl _AX5043_FSKDMAX1
                            787 	.globl _AX5043_FSKDMAX0
                            788 	.globl _AX5043_FSKDEV2
                            789 	.globl _AX5043_FSKDEV1
                            790 	.globl _AX5043_FSKDEV0
                            791 	.globl _AX5043_FREQB3
                            792 	.globl _AX5043_FREQB2
                            793 	.globl _AX5043_FREQB1
                            794 	.globl _AX5043_FREQB0
                            795 	.globl _AX5043_FREQA3
                            796 	.globl _AX5043_FREQA2
                            797 	.globl _AX5043_FREQA1
                            798 	.globl _AX5043_FREQA0
                            799 	.globl _AX5043_FRAMING
                            800 	.globl _AX5043_FIFOTHRESH1
                            801 	.globl _AX5043_FIFOTHRESH0
                            802 	.globl _AX5043_FIFOSTAT
                            803 	.globl _AX5043_FIFOFREE1
                            804 	.globl _AX5043_FIFOFREE0
                            805 	.globl _AX5043_FIFODATA
                            806 	.globl _AX5043_FIFOCOUNT1
                            807 	.globl _AX5043_FIFOCOUNT0
                            808 	.globl _AX5043_FECSYNC
                            809 	.globl _AX5043_FECSTATUS
                            810 	.globl _AX5043_FEC
                            811 	.globl _AX5043_ENCODING
                            812 	.globl _AX5043_DIVERSITY
                            813 	.globl _AX5043_DECIMATION
                            814 	.globl _AX5043_DACVALUE1
                            815 	.globl _AX5043_DACVALUE0
                            816 	.globl _AX5043_DACCONFIG
                            817 	.globl _AX5043_CRCINIT3
                            818 	.globl _AX5043_CRCINIT2
                            819 	.globl _AX5043_CRCINIT1
                            820 	.globl _AX5043_CRCINIT0
                            821 	.globl _AX5043_BGNDRSSITHR
                            822 	.globl _AX5043_BGNDRSSIGAIN
                            823 	.globl _AX5043_BGNDRSSI
                            824 	.globl _AX5043_BBTUNE
                            825 	.globl _AX5043_BBOFFSCAP
                            826 	.globl _AX5043_AMPLFILTER
                            827 	.globl _AX5043_AGCCOUNTER
                            828 	.globl _AX5043_AFSKSPACE1
                            829 	.globl _AX5043_AFSKSPACE0
                            830 	.globl _AX5043_AFSKMARK1
                            831 	.globl _AX5043_AFSKMARK0
                            832 	.globl _AX5043_AFSKCTRL
                            833 	.globl _XWTSTAT
                            834 	.globl _XWTIRQEN
                            835 	.globl _XWTEVTD
                            836 	.globl _XWTEVTD1
                            837 	.globl _XWTEVTD0
                            838 	.globl _XWTEVTC
                            839 	.globl _XWTEVTC1
                            840 	.globl _XWTEVTC0
                            841 	.globl _XWTEVTB
                            842 	.globl _XWTEVTB1
                            843 	.globl _XWTEVTB0
                            844 	.globl _XWTEVTA
                            845 	.globl _XWTEVTA1
                            846 	.globl _XWTEVTA0
                            847 	.globl _XWTCNTR1
                            848 	.globl _XWTCNTB
                            849 	.globl _XWTCNTB1
                            850 	.globl _XWTCNTB0
                            851 	.globl _XWTCNTA
                            852 	.globl _XWTCNTA1
                            853 	.globl _XWTCNTA0
                            854 	.globl _XWTCFGB
                            855 	.globl _XWTCFGA
                            856 	.globl _XWDTRESET
                            857 	.globl _XWDTCFG
                            858 	.globl _XU1STATUS
                            859 	.globl _XU1SHREG
                            860 	.globl _XU1MODE
                            861 	.globl _XU1CTRL
                            862 	.globl _XU0STATUS
                            863 	.globl _XU0SHREG
                            864 	.globl _XU0MODE
                            865 	.globl _XU0CTRL
                            866 	.globl _XT2STATUS
                            867 	.globl _XT2PERIOD
                            868 	.globl _XT2PERIOD1
                            869 	.globl _XT2PERIOD0
                            870 	.globl _XT2MODE
                            871 	.globl _XT2CNT
                            872 	.globl _XT2CNT1
                            873 	.globl _XT2CNT0
                            874 	.globl _XT2CLKSRC
                            875 	.globl _XT1STATUS
                            876 	.globl _XT1PERIOD
                            877 	.globl _XT1PERIOD1
                            878 	.globl _XT1PERIOD0
                            879 	.globl _XT1MODE
                            880 	.globl _XT1CNT
                            881 	.globl _XT1CNT1
                            882 	.globl _XT1CNT0
                            883 	.globl _XT1CLKSRC
                            884 	.globl _XT0STATUS
                            885 	.globl _XT0PERIOD
                            886 	.globl _XT0PERIOD1
                            887 	.globl _XT0PERIOD0
                            888 	.globl _XT0MODE
                            889 	.globl _XT0CNT
                            890 	.globl _XT0CNT1
                            891 	.globl _XT0CNT0
                            892 	.globl _XT0CLKSRC
                            893 	.globl _XSPSTATUS
                            894 	.globl _XSPSHREG
                            895 	.globl _XSPMODE
                            896 	.globl _XSPCLKSRC
                            897 	.globl _XRADIOSTAT
                            898 	.globl _XRADIOSTAT1
                            899 	.globl _XRADIOSTAT0
                            900 	.globl _XRADIODATA3
                            901 	.globl _XRADIODATA2
                            902 	.globl _XRADIODATA1
                            903 	.globl _XRADIODATA0
                            904 	.globl _XRADIOADDR1
                            905 	.globl _XRADIOADDR0
                            906 	.globl _XRADIOACC
                            907 	.globl _XOC1STATUS
                            908 	.globl _XOC1PIN
                            909 	.globl _XOC1MODE
                            910 	.globl _XOC1COMP
                            911 	.globl _XOC1COMP1
                            912 	.globl _XOC1COMP0
                            913 	.globl _XOC0STATUS
                            914 	.globl _XOC0PIN
                            915 	.globl _XOC0MODE
                            916 	.globl _XOC0COMP
                            917 	.globl _XOC0COMP1
                            918 	.globl _XOC0COMP0
                            919 	.globl _XNVSTATUS
                            920 	.globl _XNVKEY
                            921 	.globl _XNVDATA
                            922 	.globl _XNVDATA1
                            923 	.globl _XNVDATA0
                            924 	.globl _XNVADDR
                            925 	.globl _XNVADDR1
                            926 	.globl _XNVADDR0
                            927 	.globl _XIC1STATUS
                            928 	.globl _XIC1MODE
                            929 	.globl _XIC1CAPT
                            930 	.globl _XIC1CAPT1
                            931 	.globl _XIC1CAPT0
                            932 	.globl _XIC0STATUS
                            933 	.globl _XIC0MODE
                            934 	.globl _XIC0CAPT
                            935 	.globl _XIC0CAPT1
                            936 	.globl _XIC0CAPT0
                            937 	.globl _XPORTR
                            938 	.globl _XPORTC
                            939 	.globl _XPORTB
                            940 	.globl _XPORTA
                            941 	.globl _XPINR
                            942 	.globl _XPINC
                            943 	.globl _XPINB
                            944 	.globl _XPINA
                            945 	.globl _XDIRR
                            946 	.globl _XDIRC
                            947 	.globl _XDIRB
                            948 	.globl _XDIRA
                            949 	.globl _XDBGLNKSTAT
                            950 	.globl _XDBGLNKBUF
                            951 	.globl _XCODECONFIG
                            952 	.globl _XCLKSTAT
                            953 	.globl _XCLKCON
                            954 	.globl _XANALOGCOMP
                            955 	.globl _XADCCONV
                            956 	.globl _XADCCLKSRC
                            957 	.globl _XADCCH3CONFIG
                            958 	.globl _XADCCH2CONFIG
                            959 	.globl _XADCCH1CONFIG
                            960 	.globl _XADCCH0CONFIG
                            961 	.globl _XPCON
                            962 	.globl _XIP
                            963 	.globl _XIE
                            964 	.globl _XDPTR1
                            965 	.globl _XDPTR0
                            966 	.globl _XTALREADY
                            967 	.globl _XTALOSC
                            968 	.globl _XTALAMPL
                            969 	.globl _SILICONREV
                            970 	.globl _SCRATCH3
                            971 	.globl _SCRATCH2
                            972 	.globl _SCRATCH1
                            973 	.globl _SCRATCH0
                            974 	.globl _RADIOMUX
                            975 	.globl _RADIOFSTATADDR
                            976 	.globl _RADIOFSTATADDR1
                            977 	.globl _RADIOFSTATADDR0
                            978 	.globl _RADIOFDATAADDR
                            979 	.globl _RADIOFDATAADDR1
                            980 	.globl _RADIOFDATAADDR0
                            981 	.globl _OSCRUN
                            982 	.globl _OSCREADY
                            983 	.globl _OSCFORCERUN
                            984 	.globl _OSCCALIB
                            985 	.globl _MISCCTRL
                            986 	.globl _LPXOSCGM
                            987 	.globl _LPOSCREF
                            988 	.globl _LPOSCREF1
                            989 	.globl _LPOSCREF0
                            990 	.globl _LPOSCPER
                            991 	.globl _LPOSCPER1
                            992 	.globl _LPOSCPER0
                            993 	.globl _LPOSCKFILT
                            994 	.globl _LPOSCKFILT1
                            995 	.globl _LPOSCKFILT0
                            996 	.globl _LPOSCFREQ
                            997 	.globl _LPOSCFREQ1
                            998 	.globl _LPOSCFREQ0
                            999 	.globl _LPOSCCONFIG
                           1000 	.globl _PINSEL
                           1001 	.globl _PINCHGC
                           1002 	.globl _PINCHGB
                           1003 	.globl _PINCHGA
                           1004 	.globl _PALTRADIO
                           1005 	.globl _PALTC
                           1006 	.globl _PALTB
                           1007 	.globl _PALTA
                           1008 	.globl _INTCHGC
                           1009 	.globl _INTCHGB
                           1010 	.globl _INTCHGA
                           1011 	.globl _EXTIRQ
                           1012 	.globl _GPIOENABLE
                           1013 	.globl _ANALOGA
                           1014 	.globl _FRCOSCREF
                           1015 	.globl _FRCOSCREF1
                           1016 	.globl _FRCOSCREF0
                           1017 	.globl _FRCOSCPER
                           1018 	.globl _FRCOSCPER1
                           1019 	.globl _FRCOSCPER0
                           1020 	.globl _FRCOSCKFILT
                           1021 	.globl _FRCOSCKFILT1
                           1022 	.globl _FRCOSCKFILT0
                           1023 	.globl _FRCOSCFREQ
                           1024 	.globl _FRCOSCFREQ1
                           1025 	.globl _FRCOSCFREQ0
                           1026 	.globl _FRCOSCCTRL
                           1027 	.globl _FRCOSCCONFIG
                           1028 	.globl _DMA1CONFIG
                           1029 	.globl _DMA1ADDR
                           1030 	.globl _DMA1ADDR1
                           1031 	.globl _DMA1ADDR0
                           1032 	.globl _DMA0CONFIG
                           1033 	.globl _DMA0ADDR
                           1034 	.globl _DMA0ADDR1
                           1035 	.globl _DMA0ADDR0
                           1036 	.globl _ADCTUNE2
                           1037 	.globl _ADCTUNE1
                           1038 	.globl _ADCTUNE0
                           1039 	.globl _ADCCH3VAL
                           1040 	.globl _ADCCH3VAL1
                           1041 	.globl _ADCCH3VAL0
                           1042 	.globl _ADCCH2VAL
                           1043 	.globl _ADCCH2VAL1
                           1044 	.globl _ADCCH2VAL0
                           1045 	.globl _ADCCH1VAL
                           1046 	.globl _ADCCH1VAL1
                           1047 	.globl _ADCCH1VAL0
                           1048 	.globl _ADCCH0VAL
                           1049 	.globl _ADCCH0VAL1
                           1050 	.globl _ADCCH0VAL0
                           1051 	.globl _coldstart
                           1052 	.globl _axradio_statuschange
                           1053 ;--------------------------------------------------------
                           1054 ; special function registers
                           1055 ;--------------------------------------------------------
                           1056 	.area RSEG    (ABS,DATA)
   0000                    1057 	.org 0x0000
                    00E0   1058 G$ACC$0$0 == 0x00e0
                    00E0   1059 _ACC	=	0x00e0
                    00F0   1060 G$B$0$0 == 0x00f0
                    00F0   1061 _B	=	0x00f0
                    0083   1062 G$DPH$0$0 == 0x0083
                    0083   1063 _DPH	=	0x0083
                    0085   1064 G$DPH1$0$0 == 0x0085
                    0085   1065 _DPH1	=	0x0085
                    0082   1066 G$DPL$0$0 == 0x0082
                    0082   1067 _DPL	=	0x0082
                    0084   1068 G$DPL1$0$0 == 0x0084
                    0084   1069 _DPL1	=	0x0084
                    8382   1070 G$DPTR0$0$0 == 0x8382
                    8382   1071 _DPTR0	=	0x8382
                    8584   1072 G$DPTR1$0$0 == 0x8584
                    8584   1073 _DPTR1	=	0x8584
                    0086   1074 G$DPS$0$0 == 0x0086
                    0086   1075 _DPS	=	0x0086
                    00A0   1076 G$E2IE$0$0 == 0x00a0
                    00A0   1077 _E2IE	=	0x00a0
                    00C0   1078 G$E2IP$0$0 == 0x00c0
                    00C0   1079 _E2IP	=	0x00c0
                    0098   1080 G$EIE$0$0 == 0x0098
                    0098   1081 _EIE	=	0x0098
                    00B0   1082 G$EIP$0$0 == 0x00b0
                    00B0   1083 _EIP	=	0x00b0
                    00A8   1084 G$IE$0$0 == 0x00a8
                    00A8   1085 _IE	=	0x00a8
                    00B8   1086 G$IP$0$0 == 0x00b8
                    00B8   1087 _IP	=	0x00b8
                    0087   1088 G$PCON$0$0 == 0x0087
                    0087   1089 _PCON	=	0x0087
                    00D0   1090 G$PSW$0$0 == 0x00d0
                    00D0   1091 _PSW	=	0x00d0
                    0081   1092 G$SP$0$0 == 0x0081
                    0081   1093 _SP	=	0x0081
                    00D9   1094 G$XPAGE$0$0 == 0x00d9
                    00D9   1095 _XPAGE	=	0x00d9
                    00D9   1096 G$_XPAGE$0$0 == 0x00d9
                    00D9   1097 __XPAGE	=	0x00d9
                    00CA   1098 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA   1099 _ADCCH0CONFIG	=	0x00ca
                    00CB   1100 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB   1101 _ADCCH1CONFIG	=	0x00cb
                    00D2   1102 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2   1103 _ADCCH2CONFIG	=	0x00d2
                    00D3   1104 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3   1105 _ADCCH3CONFIG	=	0x00d3
                    00D1   1106 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1   1107 _ADCCLKSRC	=	0x00d1
                    00C9   1108 G$ADCCONV$0$0 == 0x00c9
                    00C9   1109 _ADCCONV	=	0x00c9
                    00E1   1110 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1   1111 _ANALOGCOMP	=	0x00e1
                    00C6   1112 G$CLKCON$0$0 == 0x00c6
                    00C6   1113 _CLKCON	=	0x00c6
                    00C7   1114 G$CLKSTAT$0$0 == 0x00c7
                    00C7   1115 _CLKSTAT	=	0x00c7
                    0097   1116 G$CODECONFIG$0$0 == 0x0097
                    0097   1117 _CODECONFIG	=	0x0097
                    00E3   1118 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3   1119 _DBGLNKBUF	=	0x00e3
                    00E2   1120 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2   1121 _DBGLNKSTAT	=	0x00e2
                    0089   1122 G$DIRA$0$0 == 0x0089
                    0089   1123 _DIRA	=	0x0089
                    008A   1124 G$DIRB$0$0 == 0x008a
                    008A   1125 _DIRB	=	0x008a
                    008B   1126 G$DIRC$0$0 == 0x008b
                    008B   1127 _DIRC	=	0x008b
                    008E   1128 G$DIRR$0$0 == 0x008e
                    008E   1129 _DIRR	=	0x008e
                    00C8   1130 G$PINA$0$0 == 0x00c8
                    00C8   1131 _PINA	=	0x00c8
                    00E8   1132 G$PINB$0$0 == 0x00e8
                    00E8   1133 _PINB	=	0x00e8
                    00F8   1134 G$PINC$0$0 == 0x00f8
                    00F8   1135 _PINC	=	0x00f8
                    008D   1136 G$PINR$0$0 == 0x008d
                    008D   1137 _PINR	=	0x008d
                    0080   1138 G$PORTA$0$0 == 0x0080
                    0080   1139 _PORTA	=	0x0080
                    0088   1140 G$PORTB$0$0 == 0x0088
                    0088   1141 _PORTB	=	0x0088
                    0090   1142 G$PORTC$0$0 == 0x0090
                    0090   1143 _PORTC	=	0x0090
                    008C   1144 G$PORTR$0$0 == 0x008c
                    008C   1145 _PORTR	=	0x008c
                    00CE   1146 G$IC0CAPT0$0$0 == 0x00ce
                    00CE   1147 _IC0CAPT0	=	0x00ce
                    00CF   1148 G$IC0CAPT1$0$0 == 0x00cf
                    00CF   1149 _IC0CAPT1	=	0x00cf
                    CFCE   1150 G$IC0CAPT$0$0 == 0xcfce
                    CFCE   1151 _IC0CAPT	=	0xcfce
                    00CC   1152 G$IC0MODE$0$0 == 0x00cc
                    00CC   1153 _IC0MODE	=	0x00cc
                    00CD   1154 G$IC0STATUS$0$0 == 0x00cd
                    00CD   1155 _IC0STATUS	=	0x00cd
                    00D6   1156 G$IC1CAPT0$0$0 == 0x00d6
                    00D6   1157 _IC1CAPT0	=	0x00d6
                    00D7   1158 G$IC1CAPT1$0$0 == 0x00d7
                    00D7   1159 _IC1CAPT1	=	0x00d7
                    D7D6   1160 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6   1161 _IC1CAPT	=	0xd7d6
                    00D4   1162 G$IC1MODE$0$0 == 0x00d4
                    00D4   1163 _IC1MODE	=	0x00d4
                    00D5   1164 G$IC1STATUS$0$0 == 0x00d5
                    00D5   1165 _IC1STATUS	=	0x00d5
                    0092   1166 G$NVADDR0$0$0 == 0x0092
                    0092   1167 _NVADDR0	=	0x0092
                    0093   1168 G$NVADDR1$0$0 == 0x0093
                    0093   1169 _NVADDR1	=	0x0093
                    9392   1170 G$NVADDR$0$0 == 0x9392
                    9392   1171 _NVADDR	=	0x9392
                    0094   1172 G$NVDATA0$0$0 == 0x0094
                    0094   1173 _NVDATA0	=	0x0094
                    0095   1174 G$NVDATA1$0$0 == 0x0095
                    0095   1175 _NVDATA1	=	0x0095
                    9594   1176 G$NVDATA$0$0 == 0x9594
                    9594   1177 _NVDATA	=	0x9594
                    0096   1178 G$NVKEY$0$0 == 0x0096
                    0096   1179 _NVKEY	=	0x0096
                    0091   1180 G$NVSTATUS$0$0 == 0x0091
                    0091   1181 _NVSTATUS	=	0x0091
                    00BC   1182 G$OC0COMP0$0$0 == 0x00bc
                    00BC   1183 _OC0COMP0	=	0x00bc
                    00BD   1184 G$OC0COMP1$0$0 == 0x00bd
                    00BD   1185 _OC0COMP1	=	0x00bd
                    BDBC   1186 G$OC0COMP$0$0 == 0xbdbc
                    BDBC   1187 _OC0COMP	=	0xbdbc
                    00B9   1188 G$OC0MODE$0$0 == 0x00b9
                    00B9   1189 _OC0MODE	=	0x00b9
                    00BA   1190 G$OC0PIN$0$0 == 0x00ba
                    00BA   1191 _OC0PIN	=	0x00ba
                    00BB   1192 G$OC0STATUS$0$0 == 0x00bb
                    00BB   1193 _OC0STATUS	=	0x00bb
                    00C4   1194 G$OC1COMP0$0$0 == 0x00c4
                    00C4   1195 _OC1COMP0	=	0x00c4
                    00C5   1196 G$OC1COMP1$0$0 == 0x00c5
                    00C5   1197 _OC1COMP1	=	0x00c5
                    C5C4   1198 G$OC1COMP$0$0 == 0xc5c4
                    C5C4   1199 _OC1COMP	=	0xc5c4
                    00C1   1200 G$OC1MODE$0$0 == 0x00c1
                    00C1   1201 _OC1MODE	=	0x00c1
                    00C2   1202 G$OC1PIN$0$0 == 0x00c2
                    00C2   1203 _OC1PIN	=	0x00c2
                    00C3   1204 G$OC1STATUS$0$0 == 0x00c3
                    00C3   1205 _OC1STATUS	=	0x00c3
                    00B1   1206 G$RADIOACC$0$0 == 0x00b1
                    00B1   1207 _RADIOACC	=	0x00b1
                    00B3   1208 G$RADIOADDR0$0$0 == 0x00b3
                    00B3   1209 _RADIOADDR0	=	0x00b3
                    00B2   1210 G$RADIOADDR1$0$0 == 0x00b2
                    00B2   1211 _RADIOADDR1	=	0x00b2
                    B2B3   1212 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3   1213 _RADIOADDR	=	0xb2b3
                    00B7   1214 G$RADIODATA0$0$0 == 0x00b7
                    00B7   1215 _RADIODATA0	=	0x00b7
                    00B6   1216 G$RADIODATA1$0$0 == 0x00b6
                    00B6   1217 _RADIODATA1	=	0x00b6
                    00B5   1218 G$RADIODATA2$0$0 == 0x00b5
                    00B5   1219 _RADIODATA2	=	0x00b5
                    00B4   1220 G$RADIODATA3$0$0 == 0x00b4
                    00B4   1221 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1222 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7   1223 _RADIODATA	=	0xb4b5b6b7
                    00BE   1224 G$RADIOSTAT0$0$0 == 0x00be
                    00BE   1225 _RADIOSTAT0	=	0x00be
                    00BF   1226 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF   1227 _RADIOSTAT1	=	0x00bf
                    BFBE   1228 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE   1229 _RADIOSTAT	=	0xbfbe
                    00DF   1230 G$SPCLKSRC$0$0 == 0x00df
                    00DF   1231 _SPCLKSRC	=	0x00df
                    00DC   1232 G$SPMODE$0$0 == 0x00dc
                    00DC   1233 _SPMODE	=	0x00dc
                    00DE   1234 G$SPSHREG$0$0 == 0x00de
                    00DE   1235 _SPSHREG	=	0x00de
                    00DD   1236 G$SPSTATUS$0$0 == 0x00dd
                    00DD   1237 _SPSTATUS	=	0x00dd
                    009A   1238 G$T0CLKSRC$0$0 == 0x009a
                    009A   1239 _T0CLKSRC	=	0x009a
                    009C   1240 G$T0CNT0$0$0 == 0x009c
                    009C   1241 _T0CNT0	=	0x009c
                    009D   1242 G$T0CNT1$0$0 == 0x009d
                    009D   1243 _T0CNT1	=	0x009d
                    9D9C   1244 G$T0CNT$0$0 == 0x9d9c
                    9D9C   1245 _T0CNT	=	0x9d9c
                    0099   1246 G$T0MODE$0$0 == 0x0099
                    0099   1247 _T0MODE	=	0x0099
                    009E   1248 G$T0PERIOD0$0$0 == 0x009e
                    009E   1249 _T0PERIOD0	=	0x009e
                    009F   1250 G$T0PERIOD1$0$0 == 0x009f
                    009F   1251 _T0PERIOD1	=	0x009f
                    9F9E   1252 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E   1253 _T0PERIOD	=	0x9f9e
                    009B   1254 G$T0STATUS$0$0 == 0x009b
                    009B   1255 _T0STATUS	=	0x009b
                    00A2   1256 G$T1CLKSRC$0$0 == 0x00a2
                    00A2   1257 _T1CLKSRC	=	0x00a2
                    00A4   1258 G$T1CNT0$0$0 == 0x00a4
                    00A4   1259 _T1CNT0	=	0x00a4
                    00A5   1260 G$T1CNT1$0$0 == 0x00a5
                    00A5   1261 _T1CNT1	=	0x00a5
                    A5A4   1262 G$T1CNT$0$0 == 0xa5a4
                    A5A4   1263 _T1CNT	=	0xa5a4
                    00A1   1264 G$T1MODE$0$0 == 0x00a1
                    00A1   1265 _T1MODE	=	0x00a1
                    00A6   1266 G$T1PERIOD0$0$0 == 0x00a6
                    00A6   1267 _T1PERIOD0	=	0x00a6
                    00A7   1268 G$T1PERIOD1$0$0 == 0x00a7
                    00A7   1269 _T1PERIOD1	=	0x00a7
                    A7A6   1270 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6   1271 _T1PERIOD	=	0xa7a6
                    00A3   1272 G$T1STATUS$0$0 == 0x00a3
                    00A3   1273 _T1STATUS	=	0x00a3
                    00AA   1274 G$T2CLKSRC$0$0 == 0x00aa
                    00AA   1275 _T2CLKSRC	=	0x00aa
                    00AC   1276 G$T2CNT0$0$0 == 0x00ac
                    00AC   1277 _T2CNT0	=	0x00ac
                    00AD   1278 G$T2CNT1$0$0 == 0x00ad
                    00AD   1279 _T2CNT1	=	0x00ad
                    ADAC   1280 G$T2CNT$0$0 == 0xadac
                    ADAC   1281 _T2CNT	=	0xadac
                    00A9   1282 G$T2MODE$0$0 == 0x00a9
                    00A9   1283 _T2MODE	=	0x00a9
                    00AE   1284 G$T2PERIOD0$0$0 == 0x00ae
                    00AE   1285 _T2PERIOD0	=	0x00ae
                    00AF   1286 G$T2PERIOD1$0$0 == 0x00af
                    00AF   1287 _T2PERIOD1	=	0x00af
                    AFAE   1288 G$T2PERIOD$0$0 == 0xafae
                    AFAE   1289 _T2PERIOD	=	0xafae
                    00AB   1290 G$T2STATUS$0$0 == 0x00ab
                    00AB   1291 _T2STATUS	=	0x00ab
                    00E4   1292 G$U0CTRL$0$0 == 0x00e4
                    00E4   1293 _U0CTRL	=	0x00e4
                    00E7   1294 G$U0MODE$0$0 == 0x00e7
                    00E7   1295 _U0MODE	=	0x00e7
                    00E6   1296 G$U0SHREG$0$0 == 0x00e6
                    00E6   1297 _U0SHREG	=	0x00e6
                    00E5   1298 G$U0STATUS$0$0 == 0x00e5
                    00E5   1299 _U0STATUS	=	0x00e5
                    00EC   1300 G$U1CTRL$0$0 == 0x00ec
                    00EC   1301 _U1CTRL	=	0x00ec
                    00EF   1302 G$U1MODE$0$0 == 0x00ef
                    00EF   1303 _U1MODE	=	0x00ef
                    00EE   1304 G$U1SHREG$0$0 == 0x00ee
                    00EE   1305 _U1SHREG	=	0x00ee
                    00ED   1306 G$U1STATUS$0$0 == 0x00ed
                    00ED   1307 _U1STATUS	=	0x00ed
                    00DA   1308 G$WDTCFG$0$0 == 0x00da
                    00DA   1309 _WDTCFG	=	0x00da
                    00DB   1310 G$WDTRESET$0$0 == 0x00db
                    00DB   1311 _WDTRESET	=	0x00db
                    00F1   1312 G$WTCFGA$0$0 == 0x00f1
                    00F1   1313 _WTCFGA	=	0x00f1
                    00F9   1314 G$WTCFGB$0$0 == 0x00f9
                    00F9   1315 _WTCFGB	=	0x00f9
                    00F2   1316 G$WTCNTA0$0$0 == 0x00f2
                    00F2   1317 _WTCNTA0	=	0x00f2
                    00F3   1318 G$WTCNTA1$0$0 == 0x00f3
                    00F3   1319 _WTCNTA1	=	0x00f3
                    F3F2   1320 G$WTCNTA$0$0 == 0xf3f2
                    F3F2   1321 _WTCNTA	=	0xf3f2
                    00FA   1322 G$WTCNTB0$0$0 == 0x00fa
                    00FA   1323 _WTCNTB0	=	0x00fa
                    00FB   1324 G$WTCNTB1$0$0 == 0x00fb
                    00FB   1325 _WTCNTB1	=	0x00fb
                    FBFA   1326 G$WTCNTB$0$0 == 0xfbfa
                    FBFA   1327 _WTCNTB	=	0xfbfa
                    00EB   1328 G$WTCNTR1$0$0 == 0x00eb
                    00EB   1329 _WTCNTR1	=	0x00eb
                    00F4   1330 G$WTEVTA0$0$0 == 0x00f4
                    00F4   1331 _WTEVTA0	=	0x00f4
                    00F5   1332 G$WTEVTA1$0$0 == 0x00f5
                    00F5   1333 _WTEVTA1	=	0x00f5
                    F5F4   1334 G$WTEVTA$0$0 == 0xf5f4
                    F5F4   1335 _WTEVTA	=	0xf5f4
                    00F6   1336 G$WTEVTB0$0$0 == 0x00f6
                    00F6   1337 _WTEVTB0	=	0x00f6
                    00F7   1338 G$WTEVTB1$0$0 == 0x00f7
                    00F7   1339 _WTEVTB1	=	0x00f7
                    F7F6   1340 G$WTEVTB$0$0 == 0xf7f6
                    F7F6   1341 _WTEVTB	=	0xf7f6
                    00FC   1342 G$WTEVTC0$0$0 == 0x00fc
                    00FC   1343 _WTEVTC0	=	0x00fc
                    00FD   1344 G$WTEVTC1$0$0 == 0x00fd
                    00FD   1345 _WTEVTC1	=	0x00fd
                    FDFC   1346 G$WTEVTC$0$0 == 0xfdfc
                    FDFC   1347 _WTEVTC	=	0xfdfc
                    00FE   1348 G$WTEVTD0$0$0 == 0x00fe
                    00FE   1349 _WTEVTD0	=	0x00fe
                    00FF   1350 G$WTEVTD1$0$0 == 0x00ff
                    00FF   1351 _WTEVTD1	=	0x00ff
                    FFFE   1352 G$WTEVTD$0$0 == 0xfffe
                    FFFE   1353 _WTEVTD	=	0xfffe
                    00E9   1354 G$WTIRQEN$0$0 == 0x00e9
                    00E9   1355 _WTIRQEN	=	0x00e9
                    00EA   1356 G$WTSTAT$0$0 == 0x00ea
                    00EA   1357 _WTSTAT	=	0x00ea
                           1358 ;--------------------------------------------------------
                           1359 ; special function bits
                           1360 ;--------------------------------------------------------
                           1361 	.area RSEG    (ABS,DATA)
   0000                    1362 	.org 0x0000
                    00E0   1363 G$ACC_0$0$0 == 0x00e0
                    00E0   1364 _ACC_0	=	0x00e0
                    00E1   1365 G$ACC_1$0$0 == 0x00e1
                    00E1   1366 _ACC_1	=	0x00e1
                    00E2   1367 G$ACC_2$0$0 == 0x00e2
                    00E2   1368 _ACC_2	=	0x00e2
                    00E3   1369 G$ACC_3$0$0 == 0x00e3
                    00E3   1370 _ACC_3	=	0x00e3
                    00E4   1371 G$ACC_4$0$0 == 0x00e4
                    00E4   1372 _ACC_4	=	0x00e4
                    00E5   1373 G$ACC_5$0$0 == 0x00e5
                    00E5   1374 _ACC_5	=	0x00e5
                    00E6   1375 G$ACC_6$0$0 == 0x00e6
                    00E6   1376 _ACC_6	=	0x00e6
                    00E7   1377 G$ACC_7$0$0 == 0x00e7
                    00E7   1378 _ACC_7	=	0x00e7
                    00F0   1379 G$B_0$0$0 == 0x00f0
                    00F0   1380 _B_0	=	0x00f0
                    00F1   1381 G$B_1$0$0 == 0x00f1
                    00F1   1382 _B_1	=	0x00f1
                    00F2   1383 G$B_2$0$0 == 0x00f2
                    00F2   1384 _B_2	=	0x00f2
                    00F3   1385 G$B_3$0$0 == 0x00f3
                    00F3   1386 _B_3	=	0x00f3
                    00F4   1387 G$B_4$0$0 == 0x00f4
                    00F4   1388 _B_4	=	0x00f4
                    00F5   1389 G$B_5$0$0 == 0x00f5
                    00F5   1390 _B_5	=	0x00f5
                    00F6   1391 G$B_6$0$0 == 0x00f6
                    00F6   1392 _B_6	=	0x00f6
                    00F7   1393 G$B_7$0$0 == 0x00f7
                    00F7   1394 _B_7	=	0x00f7
                    00A0   1395 G$E2IE_0$0$0 == 0x00a0
                    00A0   1396 _E2IE_0	=	0x00a0
                    00A1   1397 G$E2IE_1$0$0 == 0x00a1
                    00A1   1398 _E2IE_1	=	0x00a1
                    00A2   1399 G$E2IE_2$0$0 == 0x00a2
                    00A2   1400 _E2IE_2	=	0x00a2
                    00A3   1401 G$E2IE_3$0$0 == 0x00a3
                    00A3   1402 _E2IE_3	=	0x00a3
                    00A4   1403 G$E2IE_4$0$0 == 0x00a4
                    00A4   1404 _E2IE_4	=	0x00a4
                    00A5   1405 G$E2IE_5$0$0 == 0x00a5
                    00A5   1406 _E2IE_5	=	0x00a5
                    00A6   1407 G$E2IE_6$0$0 == 0x00a6
                    00A6   1408 _E2IE_6	=	0x00a6
                    00A7   1409 G$E2IE_7$0$0 == 0x00a7
                    00A7   1410 _E2IE_7	=	0x00a7
                    00C0   1411 G$E2IP_0$0$0 == 0x00c0
                    00C0   1412 _E2IP_0	=	0x00c0
                    00C1   1413 G$E2IP_1$0$0 == 0x00c1
                    00C1   1414 _E2IP_1	=	0x00c1
                    00C2   1415 G$E2IP_2$0$0 == 0x00c2
                    00C2   1416 _E2IP_2	=	0x00c2
                    00C3   1417 G$E2IP_3$0$0 == 0x00c3
                    00C3   1418 _E2IP_3	=	0x00c3
                    00C4   1419 G$E2IP_4$0$0 == 0x00c4
                    00C4   1420 _E2IP_4	=	0x00c4
                    00C5   1421 G$E2IP_5$0$0 == 0x00c5
                    00C5   1422 _E2IP_5	=	0x00c5
                    00C6   1423 G$E2IP_6$0$0 == 0x00c6
                    00C6   1424 _E2IP_6	=	0x00c6
                    00C7   1425 G$E2IP_7$0$0 == 0x00c7
                    00C7   1426 _E2IP_7	=	0x00c7
                    0098   1427 G$EIE_0$0$0 == 0x0098
                    0098   1428 _EIE_0	=	0x0098
                    0099   1429 G$EIE_1$0$0 == 0x0099
                    0099   1430 _EIE_1	=	0x0099
                    009A   1431 G$EIE_2$0$0 == 0x009a
                    009A   1432 _EIE_2	=	0x009a
                    009B   1433 G$EIE_3$0$0 == 0x009b
                    009B   1434 _EIE_3	=	0x009b
                    009C   1435 G$EIE_4$0$0 == 0x009c
                    009C   1436 _EIE_4	=	0x009c
                    009D   1437 G$EIE_5$0$0 == 0x009d
                    009D   1438 _EIE_5	=	0x009d
                    009E   1439 G$EIE_6$0$0 == 0x009e
                    009E   1440 _EIE_6	=	0x009e
                    009F   1441 G$EIE_7$0$0 == 0x009f
                    009F   1442 _EIE_7	=	0x009f
                    00B0   1443 G$EIP_0$0$0 == 0x00b0
                    00B0   1444 _EIP_0	=	0x00b0
                    00B1   1445 G$EIP_1$0$0 == 0x00b1
                    00B1   1446 _EIP_1	=	0x00b1
                    00B2   1447 G$EIP_2$0$0 == 0x00b2
                    00B2   1448 _EIP_2	=	0x00b2
                    00B3   1449 G$EIP_3$0$0 == 0x00b3
                    00B3   1450 _EIP_3	=	0x00b3
                    00B4   1451 G$EIP_4$0$0 == 0x00b4
                    00B4   1452 _EIP_4	=	0x00b4
                    00B5   1453 G$EIP_5$0$0 == 0x00b5
                    00B5   1454 _EIP_5	=	0x00b5
                    00B6   1455 G$EIP_6$0$0 == 0x00b6
                    00B6   1456 _EIP_6	=	0x00b6
                    00B7   1457 G$EIP_7$0$0 == 0x00b7
                    00B7   1458 _EIP_7	=	0x00b7
                    00A8   1459 G$IE_0$0$0 == 0x00a8
                    00A8   1460 _IE_0	=	0x00a8
                    00A9   1461 G$IE_1$0$0 == 0x00a9
                    00A9   1462 _IE_1	=	0x00a9
                    00AA   1463 G$IE_2$0$0 == 0x00aa
                    00AA   1464 _IE_2	=	0x00aa
                    00AB   1465 G$IE_3$0$0 == 0x00ab
                    00AB   1466 _IE_3	=	0x00ab
                    00AC   1467 G$IE_4$0$0 == 0x00ac
                    00AC   1468 _IE_4	=	0x00ac
                    00AD   1469 G$IE_5$0$0 == 0x00ad
                    00AD   1470 _IE_5	=	0x00ad
                    00AE   1471 G$IE_6$0$0 == 0x00ae
                    00AE   1472 _IE_6	=	0x00ae
                    00AF   1473 G$IE_7$0$0 == 0x00af
                    00AF   1474 _IE_7	=	0x00af
                    00AF   1475 G$EA$0$0 == 0x00af
                    00AF   1476 _EA	=	0x00af
                    00B8   1477 G$IP_0$0$0 == 0x00b8
                    00B8   1478 _IP_0	=	0x00b8
                    00B9   1479 G$IP_1$0$0 == 0x00b9
                    00B9   1480 _IP_1	=	0x00b9
                    00BA   1481 G$IP_2$0$0 == 0x00ba
                    00BA   1482 _IP_2	=	0x00ba
                    00BB   1483 G$IP_3$0$0 == 0x00bb
                    00BB   1484 _IP_3	=	0x00bb
                    00BC   1485 G$IP_4$0$0 == 0x00bc
                    00BC   1486 _IP_4	=	0x00bc
                    00BD   1487 G$IP_5$0$0 == 0x00bd
                    00BD   1488 _IP_5	=	0x00bd
                    00BE   1489 G$IP_6$0$0 == 0x00be
                    00BE   1490 _IP_6	=	0x00be
                    00BF   1491 G$IP_7$0$0 == 0x00bf
                    00BF   1492 _IP_7	=	0x00bf
                    00D0   1493 G$P$0$0 == 0x00d0
                    00D0   1494 _P	=	0x00d0
                    00D1   1495 G$F1$0$0 == 0x00d1
                    00D1   1496 _F1	=	0x00d1
                    00D2   1497 G$OV$0$0 == 0x00d2
                    00D2   1498 _OV	=	0x00d2
                    00D3   1499 G$RS0$0$0 == 0x00d3
                    00D3   1500 _RS0	=	0x00d3
                    00D4   1501 G$RS1$0$0 == 0x00d4
                    00D4   1502 _RS1	=	0x00d4
                    00D5   1503 G$F0$0$0 == 0x00d5
                    00D5   1504 _F0	=	0x00d5
                    00D6   1505 G$AC$0$0 == 0x00d6
                    00D6   1506 _AC	=	0x00d6
                    00D7   1507 G$CY$0$0 == 0x00d7
                    00D7   1508 _CY	=	0x00d7
                    00C8   1509 G$PINA_0$0$0 == 0x00c8
                    00C8   1510 _PINA_0	=	0x00c8
                    00C9   1511 G$PINA_1$0$0 == 0x00c9
                    00C9   1512 _PINA_1	=	0x00c9
                    00CA   1513 G$PINA_2$0$0 == 0x00ca
                    00CA   1514 _PINA_2	=	0x00ca
                    00CB   1515 G$PINA_3$0$0 == 0x00cb
                    00CB   1516 _PINA_3	=	0x00cb
                    00CC   1517 G$PINA_4$0$0 == 0x00cc
                    00CC   1518 _PINA_4	=	0x00cc
                    00CD   1519 G$PINA_5$0$0 == 0x00cd
                    00CD   1520 _PINA_5	=	0x00cd
                    00CE   1521 G$PINA_6$0$0 == 0x00ce
                    00CE   1522 _PINA_6	=	0x00ce
                    00CF   1523 G$PINA_7$0$0 == 0x00cf
                    00CF   1524 _PINA_7	=	0x00cf
                    00E8   1525 G$PINB_0$0$0 == 0x00e8
                    00E8   1526 _PINB_0	=	0x00e8
                    00E9   1527 G$PINB_1$0$0 == 0x00e9
                    00E9   1528 _PINB_1	=	0x00e9
                    00EA   1529 G$PINB_2$0$0 == 0x00ea
                    00EA   1530 _PINB_2	=	0x00ea
                    00EB   1531 G$PINB_3$0$0 == 0x00eb
                    00EB   1532 _PINB_3	=	0x00eb
                    00EC   1533 G$PINB_4$0$0 == 0x00ec
                    00EC   1534 _PINB_4	=	0x00ec
                    00ED   1535 G$PINB_5$0$0 == 0x00ed
                    00ED   1536 _PINB_5	=	0x00ed
                    00EE   1537 G$PINB_6$0$0 == 0x00ee
                    00EE   1538 _PINB_6	=	0x00ee
                    00EF   1539 G$PINB_7$0$0 == 0x00ef
                    00EF   1540 _PINB_7	=	0x00ef
                    00F8   1541 G$PINC_0$0$0 == 0x00f8
                    00F8   1542 _PINC_0	=	0x00f8
                    00F9   1543 G$PINC_1$0$0 == 0x00f9
                    00F9   1544 _PINC_1	=	0x00f9
                    00FA   1545 G$PINC_2$0$0 == 0x00fa
                    00FA   1546 _PINC_2	=	0x00fa
                    00FB   1547 G$PINC_3$0$0 == 0x00fb
                    00FB   1548 _PINC_3	=	0x00fb
                    00FC   1549 G$PINC_4$0$0 == 0x00fc
                    00FC   1550 _PINC_4	=	0x00fc
                    00FD   1551 G$PINC_5$0$0 == 0x00fd
                    00FD   1552 _PINC_5	=	0x00fd
                    00FE   1553 G$PINC_6$0$0 == 0x00fe
                    00FE   1554 _PINC_6	=	0x00fe
                    00FF   1555 G$PINC_7$0$0 == 0x00ff
                    00FF   1556 _PINC_7	=	0x00ff
                    0080   1557 G$PORTA_0$0$0 == 0x0080
                    0080   1558 _PORTA_0	=	0x0080
                    0081   1559 G$PORTA_1$0$0 == 0x0081
                    0081   1560 _PORTA_1	=	0x0081
                    0082   1561 G$PORTA_2$0$0 == 0x0082
                    0082   1562 _PORTA_2	=	0x0082
                    0083   1563 G$PORTA_3$0$0 == 0x0083
                    0083   1564 _PORTA_3	=	0x0083
                    0084   1565 G$PORTA_4$0$0 == 0x0084
                    0084   1566 _PORTA_4	=	0x0084
                    0085   1567 G$PORTA_5$0$0 == 0x0085
                    0085   1568 _PORTA_5	=	0x0085
                    0086   1569 G$PORTA_6$0$0 == 0x0086
                    0086   1570 _PORTA_6	=	0x0086
                    0087   1571 G$PORTA_7$0$0 == 0x0087
                    0087   1572 _PORTA_7	=	0x0087
                    0088   1573 G$PORTB_0$0$0 == 0x0088
                    0088   1574 _PORTB_0	=	0x0088
                    0089   1575 G$PORTB_1$0$0 == 0x0089
                    0089   1576 _PORTB_1	=	0x0089
                    008A   1577 G$PORTB_2$0$0 == 0x008a
                    008A   1578 _PORTB_2	=	0x008a
                    008B   1579 G$PORTB_3$0$0 == 0x008b
                    008B   1580 _PORTB_3	=	0x008b
                    008C   1581 G$PORTB_4$0$0 == 0x008c
                    008C   1582 _PORTB_4	=	0x008c
                    008D   1583 G$PORTB_5$0$0 == 0x008d
                    008D   1584 _PORTB_5	=	0x008d
                    008E   1585 G$PORTB_6$0$0 == 0x008e
                    008E   1586 _PORTB_6	=	0x008e
                    008F   1587 G$PORTB_7$0$0 == 0x008f
                    008F   1588 _PORTB_7	=	0x008f
                    0090   1589 G$PORTC_0$0$0 == 0x0090
                    0090   1590 _PORTC_0	=	0x0090
                    0091   1591 G$PORTC_1$0$0 == 0x0091
                    0091   1592 _PORTC_1	=	0x0091
                    0092   1593 G$PORTC_2$0$0 == 0x0092
                    0092   1594 _PORTC_2	=	0x0092
                    0093   1595 G$PORTC_3$0$0 == 0x0093
                    0093   1596 _PORTC_3	=	0x0093
                    0094   1597 G$PORTC_4$0$0 == 0x0094
                    0094   1598 _PORTC_4	=	0x0094
                    0095   1599 G$PORTC_5$0$0 == 0x0095
                    0095   1600 _PORTC_5	=	0x0095
                    0096   1601 G$PORTC_6$0$0 == 0x0096
                    0096   1602 _PORTC_6	=	0x0096
                    0097   1603 G$PORTC_7$0$0 == 0x0097
                    0097   1604 _PORTC_7	=	0x0097
                           1605 ;--------------------------------------------------------
                           1606 ; overlayable register banks
                           1607 ;--------------------------------------------------------
                           1608 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1609 	.ds 8
                           1610 ;--------------------------------------------------------
                           1611 ; internal ram data
                           1612 ;--------------------------------------------------------
                           1613 	.area DSEG    (DATA)
                    0000   1614 G$coldstart$0$0==.
   0012                    1615 _coldstart::
   0012                    1616 	.ds 1
                           1617 ;--------------------------------------------------------
                           1618 ; overlayable items in internal ram 
                           1619 ;--------------------------------------------------------
                           1620 	.area	OSEG    (OVR,DATA)
                           1621 	.area	OSEG    (OVR,DATA)
                           1622 ;--------------------------------------------------------
                           1623 ; Stack segment in internal ram 
                           1624 ;--------------------------------------------------------
                           1625 	.area	SSEG	(DATA)
   0032                    1626 __start__stack:
   0032                    1627 	.ds	1
                           1628 
                           1629 ;--------------------------------------------------------
                           1630 ; indirectly addressable internal ram data
                           1631 ;--------------------------------------------------------
                           1632 	.area ISEG    (DATA)
                           1633 ;--------------------------------------------------------
                           1634 ; absolute internal ram data
                           1635 ;--------------------------------------------------------
                           1636 	.area IABS    (ABS,DATA)
                           1637 	.area IABS    (ABS,DATA)
                           1638 ;--------------------------------------------------------
                           1639 ; bit data
                           1640 ;--------------------------------------------------------
                           1641 	.area BSEG    (BIT)
                           1642 ;--------------------------------------------------------
                           1643 ; paged external ram data
                           1644 ;--------------------------------------------------------
                           1645 	.area PSEG    (PAG,XDATA)
                           1646 ;--------------------------------------------------------
                           1647 ; external ram data
                           1648 ;--------------------------------------------------------
                           1649 	.area XSEG    (XDATA)
                    7020   1650 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1651 _ADCCH0VAL0	=	0x7020
                    7021   1652 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1653 _ADCCH0VAL1	=	0x7021
                    7020   1654 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1655 _ADCCH0VAL	=	0x7020
                    7022   1656 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1657 _ADCCH1VAL0	=	0x7022
                    7023   1658 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1659 _ADCCH1VAL1	=	0x7023
                    7022   1660 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1661 _ADCCH1VAL	=	0x7022
                    7024   1662 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1663 _ADCCH2VAL0	=	0x7024
                    7025   1664 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1665 _ADCCH2VAL1	=	0x7025
                    7024   1666 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1667 _ADCCH2VAL	=	0x7024
                    7026   1668 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1669 _ADCCH3VAL0	=	0x7026
                    7027   1670 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1671 _ADCCH3VAL1	=	0x7027
                    7026   1672 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1673 _ADCCH3VAL	=	0x7026
                    7028   1674 G$ADCTUNE0$0$0 == 0x7028
                    7028   1675 _ADCTUNE0	=	0x7028
                    7029   1676 G$ADCTUNE1$0$0 == 0x7029
                    7029   1677 _ADCTUNE1	=	0x7029
                    702A   1678 G$ADCTUNE2$0$0 == 0x702a
                    702A   1679 _ADCTUNE2	=	0x702a
                    7010   1680 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1681 _DMA0ADDR0	=	0x7010
                    7011   1682 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1683 _DMA0ADDR1	=	0x7011
                    7010   1684 G$DMA0ADDR$0$0 == 0x7010
                    7010   1685 _DMA0ADDR	=	0x7010
                    7014   1686 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1687 _DMA0CONFIG	=	0x7014
                    7012   1688 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1689 _DMA1ADDR0	=	0x7012
                    7013   1690 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1691 _DMA1ADDR1	=	0x7013
                    7012   1692 G$DMA1ADDR$0$0 == 0x7012
                    7012   1693 _DMA1ADDR	=	0x7012
                    7015   1694 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1695 _DMA1CONFIG	=	0x7015
                    7070   1696 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1697 _FRCOSCCONFIG	=	0x7070
                    7071   1698 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1699 _FRCOSCCTRL	=	0x7071
                    7076   1700 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1701 _FRCOSCFREQ0	=	0x7076
                    7077   1702 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1703 _FRCOSCFREQ1	=	0x7077
                    7076   1704 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1705 _FRCOSCFREQ	=	0x7076
                    7072   1706 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1707 _FRCOSCKFILT0	=	0x7072
                    7073   1708 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1709 _FRCOSCKFILT1	=	0x7073
                    7072   1710 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1711 _FRCOSCKFILT	=	0x7072
                    7078   1712 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1713 _FRCOSCPER0	=	0x7078
                    7079   1714 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1715 _FRCOSCPER1	=	0x7079
                    7078   1716 G$FRCOSCPER$0$0 == 0x7078
                    7078   1717 _FRCOSCPER	=	0x7078
                    7074   1718 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1719 _FRCOSCREF0	=	0x7074
                    7075   1720 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1721 _FRCOSCREF1	=	0x7075
                    7074   1722 G$FRCOSCREF$0$0 == 0x7074
                    7074   1723 _FRCOSCREF	=	0x7074
                    7007   1724 G$ANALOGA$0$0 == 0x7007
                    7007   1725 _ANALOGA	=	0x7007
                    700C   1726 G$GPIOENABLE$0$0 == 0x700c
                    700C   1727 _GPIOENABLE	=	0x700c
                    7003   1728 G$EXTIRQ$0$0 == 0x7003
                    7003   1729 _EXTIRQ	=	0x7003
                    7000   1730 G$INTCHGA$0$0 == 0x7000
                    7000   1731 _INTCHGA	=	0x7000
                    7001   1732 G$INTCHGB$0$0 == 0x7001
                    7001   1733 _INTCHGB	=	0x7001
                    7002   1734 G$INTCHGC$0$0 == 0x7002
                    7002   1735 _INTCHGC	=	0x7002
                    7008   1736 G$PALTA$0$0 == 0x7008
                    7008   1737 _PALTA	=	0x7008
                    7009   1738 G$PALTB$0$0 == 0x7009
                    7009   1739 _PALTB	=	0x7009
                    700A   1740 G$PALTC$0$0 == 0x700a
                    700A   1741 _PALTC	=	0x700a
                    7046   1742 G$PALTRADIO$0$0 == 0x7046
                    7046   1743 _PALTRADIO	=	0x7046
                    7004   1744 G$PINCHGA$0$0 == 0x7004
                    7004   1745 _PINCHGA	=	0x7004
                    7005   1746 G$PINCHGB$0$0 == 0x7005
                    7005   1747 _PINCHGB	=	0x7005
                    7006   1748 G$PINCHGC$0$0 == 0x7006
                    7006   1749 _PINCHGC	=	0x7006
                    700B   1750 G$PINSEL$0$0 == 0x700b
                    700B   1751 _PINSEL	=	0x700b
                    7060   1752 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1753 _LPOSCCONFIG	=	0x7060
                    7066   1754 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1755 _LPOSCFREQ0	=	0x7066
                    7067   1756 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1757 _LPOSCFREQ1	=	0x7067
                    7066   1758 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1759 _LPOSCFREQ	=	0x7066
                    7062   1760 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1761 _LPOSCKFILT0	=	0x7062
                    7063   1762 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1763 _LPOSCKFILT1	=	0x7063
                    7062   1764 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1765 _LPOSCKFILT	=	0x7062
                    7068   1766 G$LPOSCPER0$0$0 == 0x7068
                    7068   1767 _LPOSCPER0	=	0x7068
                    7069   1768 G$LPOSCPER1$0$0 == 0x7069
                    7069   1769 _LPOSCPER1	=	0x7069
                    7068   1770 G$LPOSCPER$0$0 == 0x7068
                    7068   1771 _LPOSCPER	=	0x7068
                    7064   1772 G$LPOSCREF0$0$0 == 0x7064
                    7064   1773 _LPOSCREF0	=	0x7064
                    7065   1774 G$LPOSCREF1$0$0 == 0x7065
                    7065   1775 _LPOSCREF1	=	0x7065
                    7064   1776 G$LPOSCREF$0$0 == 0x7064
                    7064   1777 _LPOSCREF	=	0x7064
                    7054   1778 G$LPXOSCGM$0$0 == 0x7054
                    7054   1779 _LPXOSCGM	=	0x7054
                    7F01   1780 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1781 _MISCCTRL	=	0x7f01
                    7053   1782 G$OSCCALIB$0$0 == 0x7053
                    7053   1783 _OSCCALIB	=	0x7053
                    7050   1784 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1785 _OSCFORCERUN	=	0x7050
                    7052   1786 G$OSCREADY$0$0 == 0x7052
                    7052   1787 _OSCREADY	=	0x7052
                    7051   1788 G$OSCRUN$0$0 == 0x7051
                    7051   1789 _OSCRUN	=	0x7051
                    7040   1790 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1791 _RADIOFDATAADDR0	=	0x7040
                    7041   1792 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1793 _RADIOFDATAADDR1	=	0x7041
                    7040   1794 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1795 _RADIOFDATAADDR	=	0x7040
                    7042   1796 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1797 _RADIOFSTATADDR0	=	0x7042
                    7043   1798 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1799 _RADIOFSTATADDR1	=	0x7043
                    7042   1800 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1801 _RADIOFSTATADDR	=	0x7042
                    7044   1802 G$RADIOMUX$0$0 == 0x7044
                    7044   1803 _RADIOMUX	=	0x7044
                    7084   1804 G$SCRATCH0$0$0 == 0x7084
                    7084   1805 _SCRATCH0	=	0x7084
                    7085   1806 G$SCRATCH1$0$0 == 0x7085
                    7085   1807 _SCRATCH1	=	0x7085
                    7086   1808 G$SCRATCH2$0$0 == 0x7086
                    7086   1809 _SCRATCH2	=	0x7086
                    7087   1810 G$SCRATCH3$0$0 == 0x7087
                    7087   1811 _SCRATCH3	=	0x7087
                    7F00   1812 G$SILICONREV$0$0 == 0x7f00
                    7F00   1813 _SILICONREV	=	0x7f00
                    7F19   1814 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1815 _XTALAMPL	=	0x7f19
                    7F18   1816 G$XTALOSC$0$0 == 0x7f18
                    7F18   1817 _XTALOSC	=	0x7f18
                    7F1A   1818 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1819 _XTALREADY	=	0x7f1a
                    3F82   1820 G$XDPTR0$0$0 == 0x3f82
                    3F82   1821 _XDPTR0	=	0x3f82
                    3F84   1822 G$XDPTR1$0$0 == 0x3f84
                    3F84   1823 _XDPTR1	=	0x3f84
                    3FA8   1824 G$XIE$0$0 == 0x3fa8
                    3FA8   1825 _XIE	=	0x3fa8
                    3FB8   1826 G$XIP$0$0 == 0x3fb8
                    3FB8   1827 _XIP	=	0x3fb8
                    3F87   1828 G$XPCON$0$0 == 0x3f87
                    3F87   1829 _XPCON	=	0x3f87
                    3FCA   1830 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1831 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1832 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1833 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1834 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1835 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1836 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1837 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1838 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1839 _XADCCLKSRC	=	0x3fd1
                    3FC9   1840 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1841 _XADCCONV	=	0x3fc9
                    3FE1   1842 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1843 _XANALOGCOMP	=	0x3fe1
                    3FC6   1844 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1845 _XCLKCON	=	0x3fc6
                    3FC7   1846 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1847 _XCLKSTAT	=	0x3fc7
                    3F97   1848 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1849 _XCODECONFIG	=	0x3f97
                    3FE3   1850 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1851 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1852 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1853 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1854 G$XDIRA$0$0 == 0x3f89
                    3F89   1855 _XDIRA	=	0x3f89
                    3F8A   1856 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1857 _XDIRB	=	0x3f8a
                    3F8B   1858 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1859 _XDIRC	=	0x3f8b
                    3F8E   1860 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1861 _XDIRR	=	0x3f8e
                    3FC8   1862 G$XPINA$0$0 == 0x3fc8
                    3FC8   1863 _XPINA	=	0x3fc8
                    3FE8   1864 G$XPINB$0$0 == 0x3fe8
                    3FE8   1865 _XPINB	=	0x3fe8
                    3FF8   1866 G$XPINC$0$0 == 0x3ff8
                    3FF8   1867 _XPINC	=	0x3ff8
                    3F8D   1868 G$XPINR$0$0 == 0x3f8d
                    3F8D   1869 _XPINR	=	0x3f8d
                    3F80   1870 G$XPORTA$0$0 == 0x3f80
                    3F80   1871 _XPORTA	=	0x3f80
                    3F88   1872 G$XPORTB$0$0 == 0x3f88
                    3F88   1873 _XPORTB	=	0x3f88
                    3F90   1874 G$XPORTC$0$0 == 0x3f90
                    3F90   1875 _XPORTC	=	0x3f90
                    3F8C   1876 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1877 _XPORTR	=	0x3f8c
                    3FCE   1878 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1879 _XIC0CAPT0	=	0x3fce
                    3FCF   1880 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1881 _XIC0CAPT1	=	0x3fcf
                    3FCE   1882 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1883 _XIC0CAPT	=	0x3fce
                    3FCC   1884 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1885 _XIC0MODE	=	0x3fcc
                    3FCD   1886 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1887 _XIC0STATUS	=	0x3fcd
                    3FD6   1888 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1889 _XIC1CAPT0	=	0x3fd6
                    3FD7   1890 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1891 _XIC1CAPT1	=	0x3fd7
                    3FD6   1892 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1893 _XIC1CAPT	=	0x3fd6
                    3FD4   1894 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1895 _XIC1MODE	=	0x3fd4
                    3FD5   1896 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   1897 _XIC1STATUS	=	0x3fd5
                    3F92   1898 G$XNVADDR0$0$0 == 0x3f92
                    3F92   1899 _XNVADDR0	=	0x3f92
                    3F93   1900 G$XNVADDR1$0$0 == 0x3f93
                    3F93   1901 _XNVADDR1	=	0x3f93
                    3F92   1902 G$XNVADDR$0$0 == 0x3f92
                    3F92   1903 _XNVADDR	=	0x3f92
                    3F94   1904 G$XNVDATA0$0$0 == 0x3f94
                    3F94   1905 _XNVDATA0	=	0x3f94
                    3F95   1906 G$XNVDATA1$0$0 == 0x3f95
                    3F95   1907 _XNVDATA1	=	0x3f95
                    3F94   1908 G$XNVDATA$0$0 == 0x3f94
                    3F94   1909 _XNVDATA	=	0x3f94
                    3F96   1910 G$XNVKEY$0$0 == 0x3f96
                    3F96   1911 _XNVKEY	=	0x3f96
                    3F91   1912 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   1913 _XNVSTATUS	=	0x3f91
                    3FBC   1914 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   1915 _XOC0COMP0	=	0x3fbc
                    3FBD   1916 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   1917 _XOC0COMP1	=	0x3fbd
                    3FBC   1918 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   1919 _XOC0COMP	=	0x3fbc
                    3FB9   1920 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   1921 _XOC0MODE	=	0x3fb9
                    3FBA   1922 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   1923 _XOC0PIN	=	0x3fba
                    3FBB   1924 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   1925 _XOC0STATUS	=	0x3fbb
                    3FC4   1926 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   1927 _XOC1COMP0	=	0x3fc4
                    3FC5   1928 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   1929 _XOC1COMP1	=	0x3fc5
                    3FC4   1930 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   1931 _XOC1COMP	=	0x3fc4
                    3FC1   1932 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   1933 _XOC1MODE	=	0x3fc1
                    3FC2   1934 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   1935 _XOC1PIN	=	0x3fc2
                    3FC3   1936 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   1937 _XOC1STATUS	=	0x3fc3
                    3FB1   1938 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   1939 _XRADIOACC	=	0x3fb1
                    3FB3   1940 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   1941 _XRADIOADDR0	=	0x3fb3
                    3FB2   1942 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   1943 _XRADIOADDR1	=	0x3fb2
                    3FB7   1944 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   1945 _XRADIODATA0	=	0x3fb7
                    3FB6   1946 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   1947 _XRADIODATA1	=	0x3fb6
                    3FB5   1948 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   1949 _XRADIODATA2	=	0x3fb5
                    3FB4   1950 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   1951 _XRADIODATA3	=	0x3fb4
                    3FBE   1952 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   1953 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1954 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   1955 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1956 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   1957 _XRADIOSTAT	=	0x3fbe
                    3FDF   1958 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   1959 _XSPCLKSRC	=	0x3fdf
                    3FDC   1960 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   1961 _XSPMODE	=	0x3fdc
                    3FDE   1962 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   1963 _XSPSHREG	=	0x3fde
                    3FDD   1964 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   1965 _XSPSTATUS	=	0x3fdd
                    3F9A   1966 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   1967 _XT0CLKSRC	=	0x3f9a
                    3F9C   1968 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   1969 _XT0CNT0	=	0x3f9c
                    3F9D   1970 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   1971 _XT0CNT1	=	0x3f9d
                    3F9C   1972 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   1973 _XT0CNT	=	0x3f9c
                    3F99   1974 G$XT0MODE$0$0 == 0x3f99
                    3F99   1975 _XT0MODE	=	0x3f99
                    3F9E   1976 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   1977 _XT0PERIOD0	=	0x3f9e
                    3F9F   1978 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   1979 _XT0PERIOD1	=	0x3f9f
                    3F9E   1980 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   1981 _XT0PERIOD	=	0x3f9e
                    3F9B   1982 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   1983 _XT0STATUS	=	0x3f9b
                    3FA2   1984 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   1985 _XT1CLKSRC	=	0x3fa2
                    3FA4   1986 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   1987 _XT1CNT0	=	0x3fa4
                    3FA5   1988 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   1989 _XT1CNT1	=	0x3fa5
                    3FA4   1990 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   1991 _XT1CNT	=	0x3fa4
                    3FA1   1992 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   1993 _XT1MODE	=	0x3fa1
                    3FA6   1994 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   1995 _XT1PERIOD0	=	0x3fa6
                    3FA7   1996 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   1997 _XT1PERIOD1	=	0x3fa7
                    3FA6   1998 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   1999 _XT1PERIOD	=	0x3fa6
                    3FA3   2000 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   2001 _XT1STATUS	=	0x3fa3
                    3FAA   2002 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   2003 _XT2CLKSRC	=	0x3faa
                    3FAC   2004 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   2005 _XT2CNT0	=	0x3fac
                    3FAD   2006 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   2007 _XT2CNT1	=	0x3fad
                    3FAC   2008 G$XT2CNT$0$0 == 0x3fac
                    3FAC   2009 _XT2CNT	=	0x3fac
                    3FA9   2010 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   2011 _XT2MODE	=	0x3fa9
                    3FAE   2012 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   2013 _XT2PERIOD0	=	0x3fae
                    3FAF   2014 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   2015 _XT2PERIOD1	=	0x3faf
                    3FAE   2016 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   2017 _XT2PERIOD	=	0x3fae
                    3FAB   2018 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   2019 _XT2STATUS	=	0x3fab
                    3FE4   2020 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   2021 _XU0CTRL	=	0x3fe4
                    3FE7   2022 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   2023 _XU0MODE	=	0x3fe7
                    3FE6   2024 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   2025 _XU0SHREG	=	0x3fe6
                    3FE5   2026 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   2027 _XU0STATUS	=	0x3fe5
                    3FEC   2028 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   2029 _XU1CTRL	=	0x3fec
                    3FEF   2030 G$XU1MODE$0$0 == 0x3fef
                    3FEF   2031 _XU1MODE	=	0x3fef
                    3FEE   2032 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   2033 _XU1SHREG	=	0x3fee
                    3FED   2034 G$XU1STATUS$0$0 == 0x3fed
                    3FED   2035 _XU1STATUS	=	0x3fed
                    3FDA   2036 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   2037 _XWDTCFG	=	0x3fda
                    3FDB   2038 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   2039 _XWDTRESET	=	0x3fdb
                    3FF1   2040 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   2041 _XWTCFGA	=	0x3ff1
                    3FF9   2042 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   2043 _XWTCFGB	=	0x3ff9
                    3FF2   2044 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   2045 _XWTCNTA0	=	0x3ff2
                    3FF3   2046 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   2047 _XWTCNTA1	=	0x3ff3
                    3FF2   2048 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   2049 _XWTCNTA	=	0x3ff2
                    3FFA   2050 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   2051 _XWTCNTB0	=	0x3ffa
                    3FFB   2052 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   2053 _XWTCNTB1	=	0x3ffb
                    3FFA   2054 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   2055 _XWTCNTB	=	0x3ffa
                    3FEB   2056 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   2057 _XWTCNTR1	=	0x3feb
                    3FF4   2058 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   2059 _XWTEVTA0	=	0x3ff4
                    3FF5   2060 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   2061 _XWTEVTA1	=	0x3ff5
                    3FF4   2062 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   2063 _XWTEVTA	=	0x3ff4
                    3FF6   2064 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   2065 _XWTEVTB0	=	0x3ff6
                    3FF7   2066 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   2067 _XWTEVTB1	=	0x3ff7
                    3FF6   2068 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   2069 _XWTEVTB	=	0x3ff6
                    3FFC   2070 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   2071 _XWTEVTC0	=	0x3ffc
                    3FFD   2072 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   2073 _XWTEVTC1	=	0x3ffd
                    3FFC   2074 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   2075 _XWTEVTC	=	0x3ffc
                    3FFE   2076 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   2077 _XWTEVTD0	=	0x3ffe
                    3FFF   2078 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   2079 _XWTEVTD1	=	0x3fff
                    3FFE   2080 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   2081 _XWTEVTD	=	0x3ffe
                    3FE9   2082 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   2083 _XWTIRQEN	=	0x3fe9
                    3FEA   2084 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   2085 _XWTSTAT	=	0x3fea
                    4114   2086 G$AX5043_AFSKCTRL$0$0 == 0x4114
                    4114   2087 _AX5043_AFSKCTRL	=	0x4114
                    4113   2088 G$AX5043_AFSKMARK0$0$0 == 0x4113
                    4113   2089 _AX5043_AFSKMARK0	=	0x4113
                    4112   2090 G$AX5043_AFSKMARK1$0$0 == 0x4112
                    4112   2091 _AX5043_AFSKMARK1	=	0x4112
                    4111   2092 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                    4111   2093 _AX5043_AFSKSPACE0	=	0x4111
                    4110   2094 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                    4110   2095 _AX5043_AFSKSPACE1	=	0x4110
                    4043   2096 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                    4043   2097 _AX5043_AGCCOUNTER	=	0x4043
                    4115   2098 G$AX5043_AMPLFILTER$0$0 == 0x4115
                    4115   2099 _AX5043_AMPLFILTER	=	0x4115
                    4189   2100 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                    4189   2101 _AX5043_BBOFFSCAP	=	0x4189
                    4188   2102 G$AX5043_BBTUNE$0$0 == 0x4188
                    4188   2103 _AX5043_BBTUNE	=	0x4188
                    4041   2104 G$AX5043_BGNDRSSI$0$0 == 0x4041
                    4041   2105 _AX5043_BGNDRSSI	=	0x4041
                    422E   2106 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                    422E   2107 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   2108 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                    422F   2109 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   2110 G$AX5043_CRCINIT0$0$0 == 0x4017
                    4017   2111 _AX5043_CRCINIT0	=	0x4017
                    4016   2112 G$AX5043_CRCINIT1$0$0 == 0x4016
                    4016   2113 _AX5043_CRCINIT1	=	0x4016
                    4015   2114 G$AX5043_CRCINIT2$0$0 == 0x4015
                    4015   2115 _AX5043_CRCINIT2	=	0x4015
                    4014   2116 G$AX5043_CRCINIT3$0$0 == 0x4014
                    4014   2117 _AX5043_CRCINIT3	=	0x4014
                    4332   2118 G$AX5043_DACCONFIG$0$0 == 0x4332
                    4332   2119 _AX5043_DACCONFIG	=	0x4332
                    4331   2120 G$AX5043_DACVALUE0$0$0 == 0x4331
                    4331   2121 _AX5043_DACVALUE0	=	0x4331
                    4330   2122 G$AX5043_DACVALUE1$0$0 == 0x4330
                    4330   2123 _AX5043_DACVALUE1	=	0x4330
                    4102   2124 G$AX5043_DECIMATION$0$0 == 0x4102
                    4102   2125 _AX5043_DECIMATION	=	0x4102
                    4042   2126 G$AX5043_DIVERSITY$0$0 == 0x4042
                    4042   2127 _AX5043_DIVERSITY	=	0x4042
                    4011   2128 G$AX5043_ENCODING$0$0 == 0x4011
                    4011   2129 _AX5043_ENCODING	=	0x4011
                    4018   2130 G$AX5043_FEC$0$0 == 0x4018
                    4018   2131 _AX5043_FEC	=	0x4018
                    401A   2132 G$AX5043_FECSTATUS$0$0 == 0x401a
                    401A   2133 _AX5043_FECSTATUS	=	0x401a
                    4019   2134 G$AX5043_FECSYNC$0$0 == 0x4019
                    4019   2135 _AX5043_FECSYNC	=	0x4019
                    402B   2136 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                    402B   2137 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   2138 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                    402A   2139 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   2140 G$AX5043_FIFODATA$0$0 == 0x4029
                    4029   2141 _AX5043_FIFODATA	=	0x4029
                    402D   2142 G$AX5043_FIFOFREE0$0$0 == 0x402d
                    402D   2143 _AX5043_FIFOFREE0	=	0x402d
                    402C   2144 G$AX5043_FIFOFREE1$0$0 == 0x402c
                    402C   2145 _AX5043_FIFOFREE1	=	0x402c
                    4028   2146 G$AX5043_FIFOSTAT$0$0 == 0x4028
                    4028   2147 _AX5043_FIFOSTAT	=	0x4028
                    402F   2148 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                    402F   2149 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   2150 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                    402E   2151 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   2152 G$AX5043_FRAMING$0$0 == 0x4012
                    4012   2153 _AX5043_FRAMING	=	0x4012
                    4037   2154 G$AX5043_FREQA0$0$0 == 0x4037
                    4037   2155 _AX5043_FREQA0	=	0x4037
                    4036   2156 G$AX5043_FREQA1$0$0 == 0x4036
                    4036   2157 _AX5043_FREQA1	=	0x4036
                    4035   2158 G$AX5043_FREQA2$0$0 == 0x4035
                    4035   2159 _AX5043_FREQA2	=	0x4035
                    4034   2160 G$AX5043_FREQA3$0$0 == 0x4034
                    4034   2161 _AX5043_FREQA3	=	0x4034
                    403F   2162 G$AX5043_FREQB0$0$0 == 0x403f
                    403F   2163 _AX5043_FREQB0	=	0x403f
                    403E   2164 G$AX5043_FREQB1$0$0 == 0x403e
                    403E   2165 _AX5043_FREQB1	=	0x403e
                    403D   2166 G$AX5043_FREQB2$0$0 == 0x403d
                    403D   2167 _AX5043_FREQB2	=	0x403d
                    403C   2168 G$AX5043_FREQB3$0$0 == 0x403c
                    403C   2169 _AX5043_FREQB3	=	0x403c
                    4163   2170 G$AX5043_FSKDEV0$0$0 == 0x4163
                    4163   2171 _AX5043_FSKDEV0	=	0x4163
                    4162   2172 G$AX5043_FSKDEV1$0$0 == 0x4162
                    4162   2173 _AX5043_FSKDEV1	=	0x4162
                    4161   2174 G$AX5043_FSKDEV2$0$0 == 0x4161
                    4161   2175 _AX5043_FSKDEV2	=	0x4161
                    410D   2176 G$AX5043_FSKDMAX0$0$0 == 0x410d
                    410D   2177 _AX5043_FSKDMAX0	=	0x410d
                    410C   2178 G$AX5043_FSKDMAX1$0$0 == 0x410c
                    410C   2179 _AX5043_FSKDMAX1	=	0x410c
                    410F   2180 G$AX5043_FSKDMIN0$0$0 == 0x410f
                    410F   2181 _AX5043_FSKDMIN0	=	0x410f
                    410E   2182 G$AX5043_FSKDMIN1$0$0 == 0x410e
                    410E   2183 _AX5043_FSKDMIN1	=	0x410e
                    4309   2184 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                    4309   2185 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   2186 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                    4308   2187 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   2188 G$AX5043_GPADCCTRL$0$0 == 0x4300
                    4300   2189 _AX5043_GPADCCTRL	=	0x4300
                    4301   2190 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                    4301   2191 _AX5043_GPADCPERIOD	=	0x4301
                    4101   2192 G$AX5043_IFFREQ0$0$0 == 0x4101
                    4101   2193 _AX5043_IFFREQ0	=	0x4101
                    4100   2194 G$AX5043_IFFREQ1$0$0 == 0x4100
                    4100   2195 _AX5043_IFFREQ1	=	0x4100
                    400B   2196 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                    400B   2197 _AX5043_IRQINVERSION0	=	0x400b
                    400A   2198 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                    400A   2199 _AX5043_IRQINVERSION1	=	0x400a
                    4007   2200 G$AX5043_IRQMASK0$0$0 == 0x4007
                    4007   2201 _AX5043_IRQMASK0	=	0x4007
                    4006   2202 G$AX5043_IRQMASK1$0$0 == 0x4006
                    4006   2203 _AX5043_IRQMASK1	=	0x4006
                    400D   2204 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                    400D   2205 _AX5043_IRQREQUEST0	=	0x400d
                    400C   2206 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                    400C   2207 _AX5043_IRQREQUEST1	=	0x400c
                    4310   2208 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                    4310   2209 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   2210 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                    4317   2211 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   2212 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                    4316   2213 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   2214 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                    4313   2215 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   2216 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                    4312   2217 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   2218 G$AX5043_LPOSCPER0$0$0 == 0x4319
                    4319   2219 _AX5043_LPOSCPER0	=	0x4319
                    4318   2220 G$AX5043_LPOSCPER1$0$0 == 0x4318
                    4318   2221 _AX5043_LPOSCPER1	=	0x4318
                    4315   2222 G$AX5043_LPOSCREF0$0$0 == 0x4315
                    4315   2223 _AX5043_LPOSCREF0	=	0x4315
                    4314   2224 G$AX5043_LPOSCREF1$0$0 == 0x4314
                    4314   2225 _AX5043_LPOSCREF1	=	0x4314
                    4311   2226 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                    4311   2227 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   2228 G$AX5043_MATCH0LEN$0$0 == 0x4214
                    4214   2229 _AX5043_MATCH0LEN	=	0x4214
                    4216   2230 G$AX5043_MATCH0MAX$0$0 == 0x4216
                    4216   2231 _AX5043_MATCH0MAX	=	0x4216
                    4215   2232 G$AX5043_MATCH0MIN$0$0 == 0x4215
                    4215   2233 _AX5043_MATCH0MIN	=	0x4215
                    4213   2234 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                    4213   2235 _AX5043_MATCH0PAT0	=	0x4213
                    4212   2236 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                    4212   2237 _AX5043_MATCH0PAT1	=	0x4212
                    4211   2238 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                    4211   2239 _AX5043_MATCH0PAT2	=	0x4211
                    4210   2240 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                    4210   2241 _AX5043_MATCH0PAT3	=	0x4210
                    421C   2242 G$AX5043_MATCH1LEN$0$0 == 0x421c
                    421C   2243 _AX5043_MATCH1LEN	=	0x421c
                    421E   2244 G$AX5043_MATCH1MAX$0$0 == 0x421e
                    421E   2245 _AX5043_MATCH1MAX	=	0x421e
                    421D   2246 G$AX5043_MATCH1MIN$0$0 == 0x421d
                    421D   2247 _AX5043_MATCH1MIN	=	0x421d
                    4219   2248 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                    4219   2249 _AX5043_MATCH1PAT0	=	0x4219
                    4218   2250 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                    4218   2251 _AX5043_MATCH1PAT1	=	0x4218
                    4108   2252 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                    4108   2253 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   2254 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                    4107   2255 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   2256 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                    4106   2257 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   2258 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                    410B   2259 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   2260 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                    410A   2261 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   2262 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                    4109   2263 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   2264 G$AX5043_MODCFGA$0$0 == 0x4164
                    4164   2265 _AX5043_MODCFGA	=	0x4164
                    4160   2266 G$AX5043_MODCFGF$0$0 == 0x4160
                    4160   2267 _AX5043_MODCFGF	=	0x4160
                    4010   2268 G$AX5043_MODULATION$0$0 == 0x4010
                    4010   2269 _AX5043_MODULATION	=	0x4010
                    4025   2270 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                    4025   2271 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   2272 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                    4023   2273 _AX5043_PINFUNCDATA	=	0x4023
                    4022   2274 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                    4022   2275 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   2276 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                    4024   2277 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   2278 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                    4026   2279 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   2280 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                    4021   2281 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   2282 G$AX5043_PINSTATE$0$0 == 0x4020
                    4020   2283 _AX5043_PINSTATE	=	0x4020
                    4233   2284 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                    4233   2285 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   2286 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                    4230   2287 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   2288 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                    4231   2289 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   2290 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                    4232   2291 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   2292 G$AX5043_PLLCPI$0$0 == 0x4031
                    4031   2293 _AX5043_PLLCPI	=	0x4031
                    4039   2294 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                    4039   2295 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   2296 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                    4182   2297 _AX5043_PLLLOCKDET	=	0x4182
                    4030   2298 G$AX5043_PLLLOOP$0$0 == 0x4030
                    4030   2299 _AX5043_PLLLOOP	=	0x4030
                    4038   2300 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                    4038   2301 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   2302 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                    4033   2303 _AX5043_PLLRANGINGA	=	0x4033
                    403B   2304 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                    403B   2305 _AX5043_PLLRANGINGB	=	0x403b
                    4183   2306 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                    4183   2307 _AX5043_PLLRNGCLK	=	0x4183
                    4032   2308 G$AX5043_PLLVCODIV$0$0 == 0x4032
                    4032   2309 _AX5043_PLLVCODIV	=	0x4032
                    4180   2310 G$AX5043_PLLVCOI$0$0 == 0x4180
                    4180   2311 _AX5043_PLLVCOI	=	0x4180
                    4181   2312 G$AX5043_PLLVCOIR$0$0 == 0x4181
                    4181   2313 _AX5043_PLLVCOIR	=	0x4181
                    4005   2314 G$AX5043_POWIRQMASK$0$0 == 0x4005
                    4005   2315 _AX5043_POWIRQMASK	=	0x4005
                    4003   2316 G$AX5043_POWSTAT$0$0 == 0x4003
                    4003   2317 _AX5043_POWSTAT	=	0x4003
                    4004   2318 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                    4004   2319 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   2320 G$AX5043_PWRAMP$0$0 == 0x4027
                    4027   2321 _AX5043_PWRAMP	=	0x4027
                    4002   2322 G$AX5043_PWRMODE$0$0 == 0x4002
                    4002   2323 _AX5043_PWRMODE	=	0x4002
                    4009   2324 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                    4009   2325 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   2326 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                    4008   2327 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   2328 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                    400F   2329 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   2330 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                    400E   2331 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   2332 G$AX5043_RADIOSTATE$0$0 == 0x401c
                    401C   2333 _AX5043_RADIOSTATE	=	0x401c
                    4040   2334 G$AX5043_RSSI$0$0 == 0x4040
                    4040   2335 _AX5043_RSSI	=	0x4040
                    422D   2336 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                    422D   2337 _AX5043_RSSIABSTHR	=	0x422d
                    422C   2338 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                    422C   2339 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   2340 G$AX5043_RXDATARATE0$0$0 == 0x4105
                    4105   2341 _AX5043_RXDATARATE0	=	0x4105
                    4104   2342 G$AX5043_RXDATARATE1$0$0 == 0x4104
                    4104   2343 _AX5043_RXDATARATE1	=	0x4104
                    4103   2344 G$AX5043_RXDATARATE2$0$0 == 0x4103
                    4103   2345 _AX5043_RXDATARATE2	=	0x4103
                    4001   2346 G$AX5043_SCRATCH$0$0 == 0x4001
                    4001   2347 _AX5043_SCRATCH	=	0x4001
                    4000   2348 G$AX5043_SILICONREVISION$0$0 == 0x4000
                    4000   2349 _AX5043_SILICONREVISION	=	0x4000
                    405B   2350 G$AX5043_TIMER0$0$0 == 0x405b
                    405B   2351 _AX5043_TIMER0	=	0x405b
                    405A   2352 G$AX5043_TIMER1$0$0 == 0x405a
                    405A   2353 _AX5043_TIMER1	=	0x405a
                    4059   2354 G$AX5043_TIMER2$0$0 == 0x4059
                    4059   2355 _AX5043_TIMER2	=	0x4059
                    4227   2356 G$AX5043_TMGRXAGC$0$0 == 0x4227
                    4227   2357 _AX5043_TMGRXAGC	=	0x4227
                    4223   2358 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                    4223   2359 _AX5043_TMGRXBOOST	=	0x4223
                    4226   2360 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                    4226   2361 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   2362 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                    4225   2363 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   2364 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                    4229   2365 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   2366 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                    422A   2367 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   2368 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                    422B   2369 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   2370 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                    4228   2371 _AX5043_TMGRXRSSI	=	0x4228
                    4224   2372 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                    4224   2373 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   2374 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                    4220   2375 _AX5043_TMGTXBOOST	=	0x4220
                    4221   2376 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                    4221   2377 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   2378 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                    4055   2379 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   2380 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                    4054   2381 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   2382 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                    4049   2383 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   2384 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                    4048   2385 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   2386 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                    4047   2387 _AX5043_TRKDATARATE0	=	0x4047
                    4046   2388 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                    4046   2389 _AX5043_TRKDATARATE1	=	0x4046
                    4045   2390 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                    4045   2391 _AX5043_TRKDATARATE2	=	0x4045
                    4051   2392 G$AX5043_TRKFREQ0$0$0 == 0x4051
                    4051   2393 _AX5043_TRKFREQ0	=	0x4051
                    4050   2394 G$AX5043_TRKFREQ1$0$0 == 0x4050
                    4050   2395 _AX5043_TRKFREQ1	=	0x4050
                    4053   2396 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                    4053   2397 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   2398 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                    4052   2399 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   2400 G$AX5043_TRKPHASE0$0$0 == 0x404b
                    404B   2401 _AX5043_TRKPHASE0	=	0x404b
                    404A   2402 G$AX5043_TRKPHASE1$0$0 == 0x404a
                    404A   2403 _AX5043_TRKPHASE1	=	0x404a
                    404F   2404 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                    404F   2405 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   2406 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                    404E   2407 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   2408 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                    404D   2409 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   2410 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                    4169   2411 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   2412 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                    4168   2413 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   2414 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                    416B   2415 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   2416 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                    416A   2417 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   2418 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                    416D   2419 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   2420 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                    416C   2421 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   2422 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                    416F   2423 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   2424 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                    416E   2425 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   2426 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                    4171   2427 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   2428 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                    4170   2429 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   2430 G$AX5043_TXRATE0$0$0 == 0x4167
                    4167   2431 _AX5043_TXRATE0	=	0x4167
                    4166   2432 G$AX5043_TXRATE1$0$0 == 0x4166
                    4166   2433 _AX5043_TXRATE1	=	0x4166
                    4165   2434 G$AX5043_TXRATE2$0$0 == 0x4165
                    4165   2435 _AX5043_TXRATE2	=	0x4165
                    406B   2436 G$AX5043_WAKEUP0$0$0 == 0x406b
                    406B   2437 _AX5043_WAKEUP0	=	0x406b
                    406A   2438 G$AX5043_WAKEUP1$0$0 == 0x406a
                    406A   2439 _AX5043_WAKEUP1	=	0x406a
                    406D   2440 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                    406D   2441 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   2442 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                    406C   2443 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   2444 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                    4069   2445 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   2446 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                    4068   2447 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   2448 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                    406E   2449 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   2450 G$AX5043_XTALCAP$0$0 == 0x4184
                    4184   2451 _AX5043_XTALCAP	=	0x4184
                    401D   2452 G$AX5043_XTALSTATUS$0$0 == 0x401d
                    401D   2453 _AX5043_XTALSTATUS	=	0x401d
                    4122   2454 G$AX5043_AGCAHYST0$0$0 == 0x4122
                    4122   2455 _AX5043_AGCAHYST0	=	0x4122
                    4132   2456 G$AX5043_AGCAHYST1$0$0 == 0x4132
                    4132   2457 _AX5043_AGCAHYST1	=	0x4132
                    4142   2458 G$AX5043_AGCAHYST2$0$0 == 0x4142
                    4142   2459 _AX5043_AGCAHYST2	=	0x4142
                    4152   2460 G$AX5043_AGCAHYST3$0$0 == 0x4152
                    4152   2461 _AX5043_AGCAHYST3	=	0x4152
                    4120   2462 G$AX5043_AGCGAIN0$0$0 == 0x4120
                    4120   2463 _AX5043_AGCGAIN0	=	0x4120
                    4130   2464 G$AX5043_AGCGAIN1$0$0 == 0x4130
                    4130   2465 _AX5043_AGCGAIN1	=	0x4130
                    4140   2466 G$AX5043_AGCGAIN2$0$0 == 0x4140
                    4140   2467 _AX5043_AGCGAIN2	=	0x4140
                    4150   2468 G$AX5043_AGCGAIN3$0$0 == 0x4150
                    4150   2469 _AX5043_AGCGAIN3	=	0x4150
                    4123   2470 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                    4123   2471 _AX5043_AGCMINMAX0	=	0x4123
                    4133   2472 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                    4133   2473 _AX5043_AGCMINMAX1	=	0x4133
                    4143   2474 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                    4143   2475 _AX5043_AGCMINMAX2	=	0x4143
                    4153   2476 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                    4153   2477 _AX5043_AGCMINMAX3	=	0x4153
                    4121   2478 G$AX5043_AGCTARGET0$0$0 == 0x4121
                    4121   2479 _AX5043_AGCTARGET0	=	0x4121
                    4131   2480 G$AX5043_AGCTARGET1$0$0 == 0x4131
                    4131   2481 _AX5043_AGCTARGET1	=	0x4131
                    4141   2482 G$AX5043_AGCTARGET2$0$0 == 0x4141
                    4141   2483 _AX5043_AGCTARGET2	=	0x4141
                    4151   2484 G$AX5043_AGCTARGET3$0$0 == 0x4151
                    4151   2485 _AX5043_AGCTARGET3	=	0x4151
                    412B   2486 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                    412B   2487 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   2488 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                    413B   2489 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   2490 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                    414B   2491 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   2492 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                    415B   2493 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   2494 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                    412F   2495 _AX5043_BBOFFSRES0	=	0x412f
                    413F   2496 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                    413F   2497 _AX5043_BBOFFSRES1	=	0x413f
                    414F   2498 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                    414F   2499 _AX5043_BBOFFSRES2	=	0x414f
                    415F   2500 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                    415F   2501 _AX5043_BBOFFSRES3	=	0x415f
                    4125   2502 G$AX5043_DRGAIN0$0$0 == 0x4125
                    4125   2503 _AX5043_DRGAIN0	=	0x4125
                    4135   2504 G$AX5043_DRGAIN1$0$0 == 0x4135
                    4135   2505 _AX5043_DRGAIN1	=	0x4135
                    4145   2506 G$AX5043_DRGAIN2$0$0 == 0x4145
                    4145   2507 _AX5043_DRGAIN2	=	0x4145
                    4155   2508 G$AX5043_DRGAIN3$0$0 == 0x4155
                    4155   2509 _AX5043_DRGAIN3	=	0x4155
                    412E   2510 G$AX5043_FOURFSK0$0$0 == 0x412e
                    412E   2511 _AX5043_FOURFSK0	=	0x412e
                    413E   2512 G$AX5043_FOURFSK1$0$0 == 0x413e
                    413E   2513 _AX5043_FOURFSK1	=	0x413e
                    414E   2514 G$AX5043_FOURFSK2$0$0 == 0x414e
                    414E   2515 _AX5043_FOURFSK2	=	0x414e
                    415E   2516 G$AX5043_FOURFSK3$0$0 == 0x415e
                    415E   2517 _AX5043_FOURFSK3	=	0x415e
                    412D   2518 G$AX5043_FREQDEV00$0$0 == 0x412d
                    412D   2519 _AX5043_FREQDEV00	=	0x412d
                    413D   2520 G$AX5043_FREQDEV01$0$0 == 0x413d
                    413D   2521 _AX5043_FREQDEV01	=	0x413d
                    414D   2522 G$AX5043_FREQDEV02$0$0 == 0x414d
                    414D   2523 _AX5043_FREQDEV02	=	0x414d
                    415D   2524 G$AX5043_FREQDEV03$0$0 == 0x415d
                    415D   2525 _AX5043_FREQDEV03	=	0x415d
                    412C   2526 G$AX5043_FREQDEV10$0$0 == 0x412c
                    412C   2527 _AX5043_FREQDEV10	=	0x412c
                    413C   2528 G$AX5043_FREQDEV11$0$0 == 0x413c
                    413C   2529 _AX5043_FREQDEV11	=	0x413c
                    414C   2530 G$AX5043_FREQDEV12$0$0 == 0x414c
                    414C   2531 _AX5043_FREQDEV12	=	0x414c
                    415C   2532 G$AX5043_FREQDEV13$0$0 == 0x415c
                    415C   2533 _AX5043_FREQDEV13	=	0x415c
                    4127   2534 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                    4127   2535 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   2536 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                    4137   2537 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   2538 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                    4147   2539 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   2540 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                    4157   2541 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   2542 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                    4128   2543 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   2544 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                    4138   2545 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   2546 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                    4148   2547 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   2548 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                    4158   2549 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   2550 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                    4129   2551 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   2552 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                    4139   2553 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   2554 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                    4149   2555 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   2556 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                    4159   2557 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   2558 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                    412A   2559 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   2560 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                    413A   2561 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   2562 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                    414A   2563 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   2564 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                    415A   2565 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   2566 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                    4116   2567 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   2568 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                    4126   2569 _AX5043_PHASEGAIN0	=	0x4126
                    4136   2570 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                    4136   2571 _AX5043_PHASEGAIN1	=	0x4136
                    4146   2572 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                    4146   2573 _AX5043_PHASEGAIN2	=	0x4146
                    4156   2574 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                    4156   2575 _AX5043_PHASEGAIN3	=	0x4156
                    4207   2576 G$AX5043_PKTADDR0$0$0 == 0x4207
                    4207   2577 _AX5043_PKTADDR0	=	0x4207
                    4206   2578 G$AX5043_PKTADDR1$0$0 == 0x4206
                    4206   2579 _AX5043_PKTADDR1	=	0x4206
                    4205   2580 G$AX5043_PKTADDR2$0$0 == 0x4205
                    4205   2581 _AX5043_PKTADDR2	=	0x4205
                    4204   2582 G$AX5043_PKTADDR3$0$0 == 0x4204
                    4204   2583 _AX5043_PKTADDR3	=	0x4204
                    4200   2584 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                    4200   2585 _AX5043_PKTADDRCFG	=	0x4200
                    420B   2586 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                    420B   2587 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   2588 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                    420A   2589 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   2590 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                    4209   2591 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   2592 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                    4208   2593 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   2594 G$AX5043_PKTLENCFG$0$0 == 0x4201
                    4201   2595 _AX5043_PKTLENCFG	=	0x4201
                    4202   2596 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                    4202   2597 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   2598 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                    4203   2599 _AX5043_PKTMAXLEN	=	0x4203
                    4118   2600 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                    4118   2601 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   2602 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                    4117   2603 _AX5043_RXPARAMSETS	=	0x4117
                    4124   2604 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                    4124   2605 _AX5043_TIMEGAIN0	=	0x4124
                    4134   2606 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                    4134   2607 _AX5043_TIMEGAIN1	=	0x4134
                    4144   2608 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                    4144   2609 _AX5043_TIMEGAIN2	=	0x4144
                    4154   2610 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                    4154   2611 _AX5043_TIMEGAIN3	=	0x4154
                    5114   2612 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                    5114   2613 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   2614 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                    5113   2615 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   2616 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                    5112   2617 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   2618 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                    5111   2619 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   2620 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                    5110   2621 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   2622 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                    5043   2623 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   2624 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                    5115   2625 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   2626 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                    5189   2627 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   2628 G$AX5043_BBTUNENB$0$0 == 0x5188
                    5188   2629 _AX5043_BBTUNENB	=	0x5188
                    5041   2630 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                    5041   2631 _AX5043_BGNDRSSINB	=	0x5041
                    522E   2632 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                    522E   2633 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   2634 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                    522F   2635 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   2636 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                    5017   2637 _AX5043_CRCINIT0NB	=	0x5017
                    5016   2638 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                    5016   2639 _AX5043_CRCINIT1NB	=	0x5016
                    5015   2640 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                    5015   2641 _AX5043_CRCINIT2NB	=	0x5015
                    5014   2642 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                    5014   2643 _AX5043_CRCINIT3NB	=	0x5014
                    5332   2644 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                    5332   2645 _AX5043_DACCONFIGNB	=	0x5332
                    5331   2646 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                    5331   2647 _AX5043_DACVALUE0NB	=	0x5331
                    5330   2648 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                    5330   2649 _AX5043_DACVALUE1NB	=	0x5330
                    5102   2650 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                    5102   2651 _AX5043_DECIMATIONNB	=	0x5102
                    5042   2652 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                    5042   2653 _AX5043_DIVERSITYNB	=	0x5042
                    5011   2654 G$AX5043_ENCODINGNB$0$0 == 0x5011
                    5011   2655 _AX5043_ENCODINGNB	=	0x5011
                    5018   2656 G$AX5043_FECNB$0$0 == 0x5018
                    5018   2657 _AX5043_FECNB	=	0x5018
                    501A   2658 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                    501A   2659 _AX5043_FECSTATUSNB	=	0x501a
                    5019   2660 G$AX5043_FECSYNCNB$0$0 == 0x5019
                    5019   2661 _AX5043_FECSYNCNB	=	0x5019
                    502B   2662 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                    502B   2663 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   2664 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                    502A   2665 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   2666 G$AX5043_FIFODATANB$0$0 == 0x5029
                    5029   2667 _AX5043_FIFODATANB	=	0x5029
                    502D   2668 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                    502D   2669 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   2670 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                    502C   2671 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   2672 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                    5028   2673 _AX5043_FIFOSTATNB	=	0x5028
                    502F   2674 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                    502F   2675 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   2676 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                    502E   2677 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   2678 G$AX5043_FRAMINGNB$0$0 == 0x5012
                    5012   2679 _AX5043_FRAMINGNB	=	0x5012
                    5037   2680 G$AX5043_FREQA0NB$0$0 == 0x5037
                    5037   2681 _AX5043_FREQA0NB	=	0x5037
                    5036   2682 G$AX5043_FREQA1NB$0$0 == 0x5036
                    5036   2683 _AX5043_FREQA1NB	=	0x5036
                    5035   2684 G$AX5043_FREQA2NB$0$0 == 0x5035
                    5035   2685 _AX5043_FREQA2NB	=	0x5035
                    5034   2686 G$AX5043_FREQA3NB$0$0 == 0x5034
                    5034   2687 _AX5043_FREQA3NB	=	0x5034
                    503F   2688 G$AX5043_FREQB0NB$0$0 == 0x503f
                    503F   2689 _AX5043_FREQB0NB	=	0x503f
                    503E   2690 G$AX5043_FREQB1NB$0$0 == 0x503e
                    503E   2691 _AX5043_FREQB1NB	=	0x503e
                    503D   2692 G$AX5043_FREQB2NB$0$0 == 0x503d
                    503D   2693 _AX5043_FREQB2NB	=	0x503d
                    503C   2694 G$AX5043_FREQB3NB$0$0 == 0x503c
                    503C   2695 _AX5043_FREQB3NB	=	0x503c
                    5163   2696 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                    5163   2697 _AX5043_FSKDEV0NB	=	0x5163
                    5162   2698 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                    5162   2699 _AX5043_FSKDEV1NB	=	0x5162
                    5161   2700 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                    5161   2701 _AX5043_FSKDEV2NB	=	0x5161
                    510D   2702 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                    510D   2703 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   2704 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                    510C   2705 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   2706 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                    510F   2707 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   2708 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                    510E   2709 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   2710 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                    5309   2711 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   2712 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                    5308   2713 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   2714 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                    5300   2715 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   2716 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                    5301   2717 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   2718 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                    5101   2719 _AX5043_IFFREQ0NB	=	0x5101
                    5100   2720 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                    5100   2721 _AX5043_IFFREQ1NB	=	0x5100
                    500B   2722 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                    500B   2723 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   2724 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                    500A   2725 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   2726 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                    5007   2727 _AX5043_IRQMASK0NB	=	0x5007
                    5006   2728 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                    5006   2729 _AX5043_IRQMASK1NB	=	0x5006
                    500D   2730 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                    500D   2731 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   2732 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                    500C   2733 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   2734 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                    5310   2735 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   2736 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                    5317   2737 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   2738 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                    5316   2739 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   2740 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                    5313   2741 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   2742 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                    5312   2743 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   2744 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                    5319   2745 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   2746 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                    5318   2747 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   2748 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                    5315   2749 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   2750 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                    5314   2751 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   2752 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                    5311   2753 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   2754 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                    5214   2755 _AX5043_MATCH0LENNB	=	0x5214
                    5216   2756 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                    5216   2757 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   2758 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                    5215   2759 _AX5043_MATCH0MINNB	=	0x5215
                    5213   2760 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                    5213   2761 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   2762 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                    5212   2763 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   2764 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                    5211   2765 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   2766 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                    5210   2767 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   2768 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                    521C   2769 _AX5043_MATCH1LENNB	=	0x521c
                    521E   2770 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                    521E   2771 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   2772 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                    521D   2773 _AX5043_MATCH1MINNB	=	0x521d
                    5219   2774 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                    5219   2775 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   2776 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                    5218   2777 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   2778 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                    5108   2779 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   2780 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                    5107   2781 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   2782 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                    5106   2783 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   2784 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                    510B   2785 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   2786 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                    510A   2787 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   2788 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                    5109   2789 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   2790 G$AX5043_MODCFGANB$0$0 == 0x5164
                    5164   2791 _AX5043_MODCFGANB	=	0x5164
                    5160   2792 G$AX5043_MODCFGFNB$0$0 == 0x5160
                    5160   2793 _AX5043_MODCFGFNB	=	0x5160
                    5010   2794 G$AX5043_MODULATIONNB$0$0 == 0x5010
                    5010   2795 _AX5043_MODULATIONNB	=	0x5010
                    5025   2796 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                    5025   2797 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   2798 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                    5023   2799 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   2800 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                    5022   2801 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   2802 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                    5024   2803 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   2804 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                    5026   2805 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   2806 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                    5021   2807 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   2808 G$AX5043_PINSTATENB$0$0 == 0x5020
                    5020   2809 _AX5043_PINSTATENB	=	0x5020
                    5233   2810 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                    5233   2811 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   2812 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                    5230   2813 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   2814 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                    5231   2815 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   2816 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                    5232   2817 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   2818 G$AX5043_PLLCPINB$0$0 == 0x5031
                    5031   2819 _AX5043_PLLCPINB	=	0x5031
                    5039   2820 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                    5039   2821 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   2822 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                    5182   2823 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   2824 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                    5030   2825 _AX5043_PLLLOOPNB	=	0x5030
                    5038   2826 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                    5038   2827 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   2828 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                    5033   2829 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   2830 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                    503B   2831 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   2832 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                    5183   2833 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   2834 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                    5032   2835 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   2836 G$AX5043_PLLVCOINB$0$0 == 0x5180
                    5180   2837 _AX5043_PLLVCOINB	=	0x5180
                    5181   2838 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                    5181   2839 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   2840 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                    5005   2841 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   2842 G$AX5043_POWSTATNB$0$0 == 0x5003
                    5003   2843 _AX5043_POWSTATNB	=	0x5003
                    5004   2844 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                    5004   2845 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   2846 G$AX5043_PWRAMPNB$0$0 == 0x5027
                    5027   2847 _AX5043_PWRAMPNB	=	0x5027
                    5002   2848 G$AX5043_PWRMODENB$0$0 == 0x5002
                    5002   2849 _AX5043_PWRMODENB	=	0x5002
                    5009   2850 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                    5009   2851 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   2852 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                    5008   2853 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   2854 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                    500F   2855 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   2856 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                    500E   2857 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   2858 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                    501C   2859 _AX5043_RADIOSTATENB	=	0x501c
                    5040   2860 G$AX5043_RSSINB$0$0 == 0x5040
                    5040   2861 _AX5043_RSSINB	=	0x5040
                    522D   2862 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                    522D   2863 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   2864 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                    522C   2865 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   2866 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                    5105   2867 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   2868 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                    5104   2869 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   2870 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                    5103   2871 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   2872 G$AX5043_SCRATCHNB$0$0 == 0x5001
                    5001   2873 _AX5043_SCRATCHNB	=	0x5001
                    5000   2874 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                    5000   2875 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   2876 G$AX5043_TIMER0NB$0$0 == 0x505b
                    505B   2877 _AX5043_TIMER0NB	=	0x505b
                    505A   2878 G$AX5043_TIMER1NB$0$0 == 0x505a
                    505A   2879 _AX5043_TIMER1NB	=	0x505a
                    5059   2880 G$AX5043_TIMER2NB$0$0 == 0x5059
                    5059   2881 _AX5043_TIMER2NB	=	0x5059
                    5227   2882 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                    5227   2883 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   2884 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                    5223   2885 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   2886 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                    5226   2887 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   2888 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                    5225   2889 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   2890 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                    5229   2891 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   2892 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                    522A   2893 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   2894 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                    522B   2895 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   2896 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                    5228   2897 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   2898 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                    5224   2899 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   2900 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                    5220   2901 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   2902 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                    5221   2903 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   2904 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                    5055   2905 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   2906 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                    5054   2907 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   2908 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                    5049   2909 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   2910 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                    5048   2911 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   2912 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                    5047   2913 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   2914 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                    5046   2915 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   2916 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                    5045   2917 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   2918 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                    5051   2919 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   2920 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                    5050   2921 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   2922 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                    5053   2923 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   2924 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                    5052   2925 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   2926 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                    504B   2927 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   2928 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                    504A   2929 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   2930 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                    504F   2931 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   2932 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                    504E   2933 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   2934 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                    504D   2935 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   2936 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                    5169   2937 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   2938 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                    5168   2939 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   2940 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                    516B   2941 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   2942 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                    516A   2943 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   2944 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                    516D   2945 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   2946 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                    516C   2947 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   2948 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                    516F   2949 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   2950 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                    516E   2951 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   2952 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                    5171   2953 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   2954 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                    5170   2955 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   2956 G$AX5043_TXRATE0NB$0$0 == 0x5167
                    5167   2957 _AX5043_TXRATE0NB	=	0x5167
                    5166   2958 G$AX5043_TXRATE1NB$0$0 == 0x5166
                    5166   2959 _AX5043_TXRATE1NB	=	0x5166
                    5165   2960 G$AX5043_TXRATE2NB$0$0 == 0x5165
                    5165   2961 _AX5043_TXRATE2NB	=	0x5165
                    506B   2962 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                    506B   2963 _AX5043_WAKEUP0NB	=	0x506b
                    506A   2964 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                    506A   2965 _AX5043_WAKEUP1NB	=	0x506a
                    506D   2966 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                    506D   2967 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   2968 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                    506C   2969 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   2970 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                    5069   2971 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   2972 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                    5068   2973 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   2974 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                    506E   2975 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   2976 G$AX5043_XTALCAPNB$0$0 == 0x5184
                    5184   2977 _AX5043_XTALCAPNB	=	0x5184
                    501D   2978 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                    501D   2979 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   2980 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                    5122   2981 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   2982 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                    5132   2983 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   2984 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                    5142   2985 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   2986 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                    5152   2987 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   2988 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                    5120   2989 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   2990 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                    5130   2991 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   2992 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                    5140   2993 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   2994 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                    5150   2995 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   2996 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                    5123   2997 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   2998 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                    5133   2999 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   3000 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                    5143   3001 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   3002 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                    5153   3003 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   3004 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                    5121   3005 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   3006 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                    5131   3007 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   3008 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                    5141   3009 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   3010 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                    5151   3011 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   3012 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                    512B   3013 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   3014 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                    513B   3015 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   3016 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                    514B   3017 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   3018 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                    515B   3019 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   3020 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                    512F   3021 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   3022 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                    513F   3023 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   3024 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                    514F   3025 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   3026 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                    515F   3027 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   3028 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                    5125   3029 _AX5043_DRGAIN0NB	=	0x5125
                    5135   3030 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                    5135   3031 _AX5043_DRGAIN1NB	=	0x5135
                    5145   3032 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                    5145   3033 _AX5043_DRGAIN2NB	=	0x5145
                    5155   3034 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                    5155   3035 _AX5043_DRGAIN3NB	=	0x5155
                    512E   3036 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                    512E   3037 _AX5043_FOURFSK0NB	=	0x512e
                    513E   3038 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                    513E   3039 _AX5043_FOURFSK1NB	=	0x513e
                    514E   3040 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                    514E   3041 _AX5043_FOURFSK2NB	=	0x514e
                    515E   3042 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                    515E   3043 _AX5043_FOURFSK3NB	=	0x515e
                    512D   3044 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                    512D   3045 _AX5043_FREQDEV00NB	=	0x512d
                    513D   3046 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                    513D   3047 _AX5043_FREQDEV01NB	=	0x513d
                    514D   3048 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                    514D   3049 _AX5043_FREQDEV02NB	=	0x514d
                    515D   3050 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                    515D   3051 _AX5043_FREQDEV03NB	=	0x515d
                    512C   3052 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                    512C   3053 _AX5043_FREQDEV10NB	=	0x512c
                    513C   3054 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                    513C   3055 _AX5043_FREQDEV11NB	=	0x513c
                    514C   3056 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                    514C   3057 _AX5043_FREQDEV12NB	=	0x514c
                    515C   3058 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                    515C   3059 _AX5043_FREQDEV13NB	=	0x515c
                    5127   3060 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                    5127   3061 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   3062 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                    5137   3063 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   3064 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                    5147   3065 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   3066 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                    5157   3067 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   3068 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                    5128   3069 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   3070 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                    5138   3071 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   3072 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                    5148   3073 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   3074 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                    5158   3075 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   3076 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                    5129   3077 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   3078 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                    5139   3079 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   3080 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                    5149   3081 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   3082 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                    5159   3083 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   3084 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                    512A   3085 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   3086 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                    513A   3087 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   3088 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                    514A   3089 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   3090 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                    515A   3091 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   3092 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                    5116   3093 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   3094 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                    5126   3095 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   3096 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                    5136   3097 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   3098 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                    5146   3099 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   3100 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                    5156   3101 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   3102 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                    5207   3103 _AX5043_PKTADDR0NB	=	0x5207
                    5206   3104 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                    5206   3105 _AX5043_PKTADDR1NB	=	0x5206
                    5205   3106 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                    5205   3107 _AX5043_PKTADDR2NB	=	0x5205
                    5204   3108 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                    5204   3109 _AX5043_PKTADDR3NB	=	0x5204
                    5200   3110 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                    5200   3111 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   3112 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                    520B   3113 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   3114 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                    520A   3115 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   3116 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                    5209   3117 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   3118 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                    5208   3119 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   3120 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                    5201   3121 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   3122 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                    5202   3123 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   3124 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                    5203   3125 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   3126 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                    5118   3127 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   3128 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                    5117   3129 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   3130 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                    5124   3131 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   3132 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                    5134   3133 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   3134 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                    5144   3135 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   3136 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                    5154   3137 _AX5043_TIMEGAIN3NB	=	0x5154
                    FC06   3138 Fmain$flash_deviceid$0$0 == 0xfc06
                    FC06   3139 _flash_deviceid	=	0xfc06
                    0000   3140 G$wakeup_desc$0$0==.
   0299                    3141 _wakeup_desc::
   0299                    3142 	.ds 8
                    0008   3143 Lmain.transmit_packet$demo_packet_$1$169==.
   02A1                    3144 _transmit_packet_demo_packet__1_169:
   02A1                    3145 	.ds 6
                           3146 ;--------------------------------------------------------
                           3147 ; absolute external ram data
                           3148 ;--------------------------------------------------------
                           3149 	.area XABS    (ABS,XDATA)
                           3150 ;--------------------------------------------------------
                           3151 ; external initialized ram data
                           3152 ;--------------------------------------------------------
                           3153 	.area XISEG   (XDATA)
                           3154 	.area HOME    (CODE)
                           3155 	.area GSINIT0 (CODE)
                           3156 	.area GSINIT1 (CODE)
                           3157 	.area GSINIT2 (CODE)
                           3158 	.area GSINIT3 (CODE)
                           3159 	.area GSINIT4 (CODE)
                           3160 	.area GSINIT5 (CODE)
                           3161 	.area GSINIT  (CODE)
                           3162 	.area GSFINAL (CODE)
                           3163 	.area CSEG    (CODE)
                           3164 ;--------------------------------------------------------
                           3165 ; interrupt vector 
                           3166 ;--------------------------------------------------------
                           3167 	.area HOME    (CODE)
   0000                    3168 __interrupt_vect:
   0000 02 00 B3           3169 	ljmp	__sdcc_gsinit_startup
   0003 32                 3170 	reti
   0004                    3171 	.ds	7
   000B 02 3A E2           3172 	ljmp	_wtimer_irq
   000E                    3173 	.ds	5
   0013 32                 3174 	reti
   0014                    3175 	.ds	7
   001B 32                 3176 	reti
   001C                    3177 	.ds	7
   0023 02 0F 60           3178 	ljmp	_axradio_isr
   0026                    3179 	.ds	5
   002B 32                 3180 	reti
   002C                    3181 	.ds	7
   0033 02 34 72           3182 	ljmp	_pwrmgmt_irq
   0036                    3183 	.ds	5
   003B 32                 3184 	reti
   003C                    3185 	.ds	7
   0043 32                 3186 	reti
   0044                    3187 	.ds	7
   004B 32                 3188 	reti
   004C                    3189 	.ds	7
   0053 32                 3190 	reti
   0054                    3191 	.ds	7
   005B 32                 3192 	reti
   005C                    3193 	.ds	7
   0063 32                 3194 	reti
   0064                    3195 	.ds	7
   006B 32                 3196 	reti
   006C                    3197 	.ds	7
   0073 32                 3198 	reti
   0074                    3199 	.ds	7
   007B 32                 3200 	reti
   007C                    3201 	.ds	7
   0083 32                 3202 	reti
   0084                    3203 	.ds	7
   008B 32                 3204 	reti
   008C                    3205 	.ds	7
   0093 32                 3206 	reti
   0094                    3207 	.ds	7
   009B 32                 3208 	reti
   009C                    3209 	.ds	7
   00A3 32                 3210 	reti
   00A4                    3211 	.ds	7
   00AB 02 40 67           3212 	ljmp	_dbglink_irq
                           3213 ;--------------------------------------------------------
                           3214 ; global & static initialisations
                           3215 ;--------------------------------------------------------
                           3216 	.area HOME    (CODE)
                           3217 	.area GSINIT  (CODE)
                           3218 	.area GSFINAL (CODE)
                           3219 	.area GSINIT  (CODE)
                           3220 	.globl __sdcc_gsinit_startup
                           3221 	.globl __sdcc_program_startup
                           3222 	.globl __start__stack
                           3223 	.globl __mcs51_genXINIT
                           3224 	.globl __mcs51_genXRAMCLEAR
                           3225 	.globl __mcs51_genRAMCLEAR
                    0000   3226 	C$main.c$62$3$258 ==.
                           3227 ;	main.c:62: uint8_t __data coldstart = 1; // caution: initialization with 1 is necessary! Variables are initialized upon _sdcc_external_startup returning 0 -> the coldstart value returned from _sdcc_external startup does not survive in the coldstart case
   0132 75 12 01           3228 	mov	_coldstart,#0x01
                           3229 	.area GSFINAL (CODE)
   0135 02 00 AE           3230 	ljmp	__sdcc_program_startup
                           3231 ;--------------------------------------------------------
                           3232 ; Home
                           3233 ;--------------------------------------------------------
                           3234 	.area HOME    (CODE)
                           3235 	.area HOME    (CODE)
   00AE                    3236 __sdcc_program_startup:
   00AE 12 35 6B           3237 	lcall	_main
                           3238 ;	return from main will lock up
   00B1 80 FE              3239 	sjmp .
                           3240 ;--------------------------------------------------------
                           3241 ; code
                           3242 ;--------------------------------------------------------
                           3243 	.area CSEG    (CODE)
                           3244 ;------------------------------------------------------------
                           3245 ;Allocation info for local variables in function 'pwrmgmt_irq'
                           3246 ;------------------------------------------------------------
                           3247 ;pc                        Allocated to registers r7 
                           3248 ;------------------------------------------------------------
                    0000   3249 	Fmain$pwrmgmt_irq$0$0 ==.
                    0000   3250 	C$main.c$69$0$0 ==.
                           3251 ;	main.c:69: static void pwrmgmt_irq(void) __interrupt(INT_POWERMGMT)
                           3252 ;	-----------------------------------------
                           3253 ;	 function pwrmgmt_irq
                           3254 ;	-----------------------------------------
   3472                    3255 _pwrmgmt_irq:
                    0007   3256 	ar7 = 0x07
                    0006   3257 	ar6 = 0x06
                    0005   3258 	ar5 = 0x05
                    0004   3259 	ar4 = 0x04
                    0003   3260 	ar3 = 0x03
                    0002   3261 	ar2 = 0x02
                    0001   3262 	ar1 = 0x01
                    0000   3263 	ar0 = 0x00
   3472 C0 E0              3264 	push	acc
   3474 C0 82              3265 	push	dpl
   3476 C0 83              3266 	push	dph
   3478 C0 07              3267 	push	ar7
   347A C0 D0              3268 	push	psw
   347C 75 D0 00           3269 	mov	psw,#0x00
                    000D   3270 	C$main.c$71$1$0 ==.
                           3271 ;	main.c:71: uint8_t pc = PCON;
                    000D   3272 	C$main.c$72$1$167 ==.
                           3273 ;	main.c:72: if (!(pc & 0x80))
   347F E5 87              3274 	mov	a,_PCON
   3481 FF                 3275 	mov	r7,a
   3482 20 E7 02           3276 	jb	acc.7,00102$
                    0013   3277 	C$main.c$73$1$167 ==.
                           3278 ;	main.c:73: return;
   3485 80 13              3279 	sjmp	00106$
   3487                    3280 00102$:
                    0015   3281 	C$main.c$74$1$167 ==.
                           3282 ;	main.c:74: GPIOENABLE = 0;
   3487 90 70 0C           3283 	mov	dptr,#_GPIOENABLE
   348A E4                 3284 	clr	a
   348B F0                 3285 	movx	@dptr,a
                    001A   3286 	C$main.c$75$1$167 ==.
                           3287 ;	main.c:75: IE = EIE = E2IE = 0;
   348C 75 A0 00           3288 	mov	_E2IE,#0x00
   348F 75 98 00           3289 	mov	_EIE,#0x00
   3492 75 A8 00           3290 	mov	_IE,#0x00
   3495                    3291 00104$:
                    0023   3292 	C$main.c$77$1$167 ==.
                           3293 ;	main.c:77: PCON |= 0x01;
   3495 43 87 01           3294 	orl	_PCON,#0x01
   3498 80 FB              3295 	sjmp	00104$
   349A                    3296 00106$:
   349A D0 D0              3297 	pop	psw
   349C D0 07              3298 	pop	ar7
   349E D0 83              3299 	pop	dph
   34A0 D0 82              3300 	pop	dpl
   34A2 D0 E0              3301 	pop	acc
                    0032   3302 	C$main.c$78$1$167 ==.
                    0032   3303 	XFmain$pwrmgmt_irq$0$0 ==.
   34A4 32                 3304 	reti
                           3305 ;	eliminated unneeded push/pop b
                           3306 ;------------------------------------------------------------
                           3307 ;Allocation info for local variables in function 'transmit_packet'
                           3308 ;------------------------------------------------------------
                           3309 ;demo_packet_              Allocated with name '_transmit_packet_demo_packet__1_169'
                           3310 ;------------------------------------------------------------
                    0033   3311 	Fmain$transmit_packet$0$0 ==.
                    0033   3312 	C$main.c$80$1$167 ==.
                           3313 ;	main.c:80: static void transmit_packet(void)
                           3314 ;	-----------------------------------------
                           3315 ;	 function transmit_packet
                           3316 ;	-----------------------------------------
   34A5                    3317 _transmit_packet:
                    0033   3318 	C$main.c$84$1$169 ==.
                           3319 ;	main.c:84: memcpy(demo_packet_, demo_packet, sizeof(demo_packet));
   34A5 75 27 7D           3320 	mov	_memcpy_PARM_2,#_demo_packet
   34A8 75 28 4F           3321 	mov	(_memcpy_PARM_2 + 1),#(_demo_packet >> 8)
   34AB 75 29 80           3322 	mov	(_memcpy_PARM_2 + 2),#0x80
   34AE 75 2A 06           3323 	mov	_memcpy_PARM_3,#0x06
   34B1 75 2B 00           3324 	mov	(_memcpy_PARM_3 + 1),#0x00
   34B4 90 02 A1           3325 	mov	dptr,#_transmit_packet_demo_packet__1_169
   34B7 75 F0 00           3326 	mov	b,#0x00
   34BA 12 3F 6A           3327 	lcall	_memcpy
                    004B   3328 	C$main.c$85$1$169 ==.
                           3329 ;	main.c:85: axradio_transmit(&remoteaddr, demo_packet_, sizeof(demo_packet));
   34BD 75 0C A1           3330 	mov	_axradio_transmit_PARM_2,#_transmit_packet_demo_packet__1_169
   34C0 75 0D 02           3331 	mov	(_axradio_transmit_PARM_2 + 1),#(_transmit_packet_demo_packet__1_169 >> 8)
   34C3 75 0E 00           3332 	mov	(_axradio_transmit_PARM_2 + 2),#0x00
   34C6 75 0F 06           3333 	mov	_axradio_transmit_PARM_3,#0x06
   34C9 75 10 00           3334 	mov	(_axradio_transmit_PARM_3 + 1),#0x00
   34CC 90 4F 6F           3335 	mov	dptr,#_remoteaddr
   34CF 75 F0 80           3336 	mov	b,#0x80
   34D2 12 2E EA           3337 	lcall	_axradio_transmit
                    0063   3338 	C$main.c$86$1$169 ==.
                    0063   3339 	XFmain$transmit_packet$0$0 ==.
   34D5 22                 3340 	ret
                           3341 ;------------------------------------------------------------
                           3342 ;Allocation info for local variables in function 'axradio_statuschange'
                           3343 ;------------------------------------------------------------
                           3344 ;st                        Allocated to registers r6 r7 
                           3345 ;------------------------------------------------------------
                    0064   3346 	G$axradio_statuschange$0$0 ==.
                    0064   3347 	C$main.c$88$1$169 ==.
                           3348 ;	main.c:88: void axradio_statuschange(struct axradio_status __xdata *st)
                           3349 ;	-----------------------------------------
                           3350 ;	 function axradio_statuschange
                           3351 ;	-----------------------------------------
   34D6                    3352 _axradio_statuschange:
                    0064   3353 	C$main.c$99$1$171 ==.
                           3354 ;	main.c:99: switch (st->status)
   34D6 AE 82              3355 	mov	r6,dpl
   34D8 AF 83              3356 	mov  r7,dph
   34DA E0                 3357 	movx	a,@dptr
   34DB FD                 3358 	mov	r5,a
   34DC BD 02 02           3359 	cjne	r5,#0x02,00175$
   34DF 80 12              3360 	sjmp	00150$
   34E1                    3361 00175$:
   34E1 BD 03 02           3362 	cjne	r5,#0x03,00176$
   34E4 80 05              3363 	sjmp	00105$
   34E6                    3364 00176$:
                    0074   3365 	C$main.c$102$2$172 ==.
                           3366 ;	main.c:102: led0_on();
   34E6 BD 04 18           3367 	cjne	r5,#0x04,00166$
   34E9 80 04              3368 	sjmp	00119$
   34EB                    3369 00105$:
   34EB D2 84              3370 	setb	_PORTA_4
                    007B   3371 	C$main.c$108$2$172 ==.
                           3372 ;	main.c:108: break;
                    007B   3373 	C$main.c$111$2$172 ==.
                           3374 ;	main.c:111: led0_off();
   34ED 80 12              3375 	sjmp	00166$
   34EF                    3376 00119$:
   34EF C2 84              3377 	clr	_PORTA_4
                    007F   3378 	C$main.c$143$2$172 ==.
                           3379 ;	main.c:143: break;
                    007F   3380 	C$main.c$153$2$172 ==.
                           3381 ;	main.c:153: case AXRADIO_STAT_CHANNELSTATE:
   34F1 80 0E              3382 	sjmp	00166$
   34F3                    3383 00150$:
                    0081   3384 	C$main.c$154$2$172 ==.
                           3385 ;	main.c:154: if (st->u.cs.busy)
   34F3 74 06              3386 	mov	a,#0x06
   34F5 2E                 3387 	add	a,r6
   34F6 FE                 3388 	mov	r6,a
   34F7 E4                 3389 	clr	a
   34F8 3F                 3390 	addc	a,r7
   34F9 FF                 3391 	mov	r7,a
   34FA 8E 82              3392 	mov	dpl,r6
   34FC 8F 83              3393 	mov	dph,r7
   34FE A3                 3394 	inc	dptr
   34FF A3                 3395 	inc	dptr
   3500 E0                 3396 	movx	a,@dptr
                    008F   3397 	C$main.c$162$1$171 ==.
                           3398 ;	main.c:162: }
   3501                    3399 00166$:
                    008F   3400 	C$main.c$163$1$171 ==.
                    008F   3401 	XG$axradio_statuschange$0$0 ==.
   3501 22                 3402 	ret
                           3403 ;------------------------------------------------------------
                           3404 ;Allocation info for local variables in function 'wakeup_callback'
                           3405 ;------------------------------------------------------------
                           3406 ;desc                      Allocated to registers 
                           3407 ;------------------------------------------------------------
                    0090   3408 	Fmain$wakeup_callback$0$0 ==.
                    0090   3409 	C$main.c$164$1$171 ==.
                           3410 ;	main.c:164: static void wakeup_callback(struct wtimer_desc __xdata *desc)
                           3411 ;	-----------------------------------------
                           3412 ;	 function wakeup_callback
                           3413 ;	-----------------------------------------
   3502                    3414 _wakeup_callback:
                    0090   3415 	C$main.c$166$1$194 ==.
                           3416 ;	main.c:166: desc;
                    0090   3417 	C$main.c$173$1$194 ==.
                    0090   3418 	XFmain$wakeup_callback$0$0 ==.
   3502 22                 3419 	ret
                           3420 ;------------------------------------------------------------
                           3421 ;Allocation info for local variables in function '_sdcc_external_startup'
                           3422 ;------------------------------------------------------------
                           3423 ;c                         Allocated to registers 
                           3424 ;p                         Allocated to registers 
                           3425 ;c                         Allocated to registers 
                           3426 ;p                         Allocated to registers 
                           3427 ;------------------------------------------------------------
                    0091   3428 	G$_sdcc_external_startup$0$0 ==.
                    0091   3429 	C$main.c$187$1$194 ==.
                           3430 ;	main.c:187: uint8_t _sdcc_external_startup(void)
                           3431 ;	-----------------------------------------
                           3432 ;	 function _sdcc_external_startup
                           3433 ;	-----------------------------------------
   3503                    3434 __sdcc_external_startup:
                    0091   3435 	C$main.c$190$1$196 ==.
                           3436 ;	main.c:190: LPXOSCGM = 0x8A;
   3503 90 70 54           3437 	mov	dptr,#_LPXOSCGM
   3506 74 8A              3438 	mov	a,#0x8A
   3508 F0                 3439 	movx	@dptr,a
                    0097   3440 	C$main.c$191$2$197 ==.
                           3441 ;	main.c:191: wtimer0_setclksrc(WTIMER0_CLKSRC, WTIMER0_PRESCALER);
   3509 75 82 09           3442 	mov	dpl,#0x09
   350C 12 3A 36           3443 	lcall	_wtimer0_setconfig
                    009D   3444 	C$main.c$192$2$198 ==.
                           3445 ;	main.c:192: wtimer1_setclksrc(CLKSRC_FRCOSC, 7);
   350F 75 82 38           3446 	mov	dpl,#0x38
   3512 12 3A 54           3447 	lcall	_wtimer1_setconfig
                    00A3   3448 	C$main.c$194$1$196 ==.
                           3449 ;	main.c:194: LPOSCCONFIG = 0x09; // Slow, PRESC /1, no cal. Does NOT enable LPOSC. LPOSC is enabled upon configuring WTCFGA (MODE_TX_PERIODIC and receive_ack() )
   3515 90 70 60           3450 	mov	dptr,#_LPOSCCONFIG
   3518 74 09              3451 	mov	a,#0x09
   351A F0                 3452 	movx	@dptr,a
                    00A9   3453 	C$main.c$196$1$196 ==.
                           3454 ;	main.c:196: coldstart = !(PCON & 0x40);
   351B 74 40              3455 	mov	a,#0x40
   351D 55 87              3456 	anl	a,_PCON
   351F FF                 3457 	mov	r7,a
   3520 B4 01 00           3458 	cjne	a,#0x01,00109$
   3523                    3459 00109$:
   3523 E4                 3460 	clr	a
   3524 33                 3461 	rlc	a
   3525 F5 12              3462 	mov	_coldstart,a
                    00B5   3463 	C$main.c$198$1$196 ==.
                           3464 ;	main.c:198: ANALOGA = 0x18; // PA[3,4] LPXOSC, other PA are used as digital pins
   3527 90 70 07           3465 	mov	dptr,#_ANALOGA
   352A 74 18              3466 	mov	a,#0x18
   352C F0                 3467 	movx	@dptr,a
                    00BB   3468 	C$main.c$201$1$196 ==.
                           3469 ;	main.c:201: PORTA = 0xC0 | (PINA & 0x25); 	// pull-up for PA[6,7] which are not bonded, no pull up for PA[3,4] (LPXOSC). Output 0 in PA[0,1,2,5] to prevent current consumption in all DIP switch states
   352D 74 25              3470 	mov	a,#0x25
   352F 55 C8              3471 	anl	a,_PINA
   3531 44 C0              3472 	orl	a,#0xC0
   3533 F5 80              3473 	mov	_PORTA,a
                    00C3   3474 	C$main.c$203$1$196 ==.
                           3475 ;	main.c:203: PORTB = 0xFE; //PB[0,1]  (LCD RS, LCD RST) are overwritten by lcd2_portinit(), enable pull-ups for PB[2..7]  (PB[2,3] for buttons, PB[4..7] unused)
   3535 75 88 FE           3476 	mov	_PORTB,#0xFE
                    00C6   3477 	C$main.c$204$1$196 ==.
                           3478 ;	main.c:204: PORTC = 0xF3 | (PINC & 0x08); 	// set PC0 = 1 (LCD SEL), PC1 = 1 (LCD SCK), PC2 = 0 (LCD MOSI), PC3 =0 (LED), enable pull-ups for PC[4..7] which are not bonded Mind: PORTC[0:1] is set to 0x3 by lcd2_portinit()
   3538 74 08              3479 	mov	a,#0x08
   353A 55 F8              3480 	anl	a,_PINC
   353C 44 F3              3481 	orl	a,#0xF3
   353E F5 90              3482 	mov	_PORTC,a
                    00CE   3483 	C$main.c$206$1$196 ==.
                           3484 ;	main.c:206: PORTR = 0xCB; // overwritten by ax5043_reset, ax5043_comminit()
   3540 75 8C CB           3485 	mov	_PORTR,#0xCB
                    00D1   3486 	C$main.c$209$1$196 ==.
                           3487 ;	main.c:209: DIRA = 0x37; // output 0 on PA[0,1,2,5] to prevent current consumption in all DIP switch states. Other PA are inputs, PA[3,4] (LPXOSC) must have disabled digital output drivers
   3543 75 89 37           3488 	mov	_DIRA,#0x37
                    00D4   3489 	C$main.c$210$1$196 ==.
                           3490 ;	main.c:210: DIRB = 0x03; // PB[0,1] are outputs (LCD RS, LCD RST), PB[2..7] are inputs (PB[2,3] for buttons,  PB[4..7]  unused)
   3546 75 8A 03           3491 	mov	_DIRB,#0x03
                    00D7   3492 	C$main.c$211$1$196 ==.
                           3493 ;	main.c:211: DIRC = 0x0F; // PC[0..3] are outputs (LCD SEL, LCD,SCK, LCD MOSI, LED), PC[4..7] are inputs (not bonded).
   3549 75 8B 0F           3494 	mov	_DIRC,#0x0F
                    00DA   3495 	C$main.c$212$1$196 ==.
                           3496 ;	main.c:212: DIRR = 0x15; // overwritten by ax5043_reset, ax5043_comminit()
   354C 75 8E 15           3497 	mov	_DIRR,#0x15
                    00DD   3498 	C$main.c$226$1$196 ==.
                           3499 ;	main.c:226: DPS = 0;
   354F 75 86 00           3500 	mov	_DPS,#0x00
                    00E0   3501 	C$main.c$227$1$196 ==.
                           3502 ;	main.c:227: IE = 0x40;
   3552 75 A8 40           3503 	mov	_IE,#0x40
                    00E3   3504 	C$main.c$228$1$196 ==.
                           3505 ;	main.c:228: EIE = 0x00;
   3555 75 98 00           3506 	mov	_EIE,#0x00
                    00E6   3507 	C$main.c$229$1$196 ==.
                           3508 ;	main.c:229: E2IE = 0x00;
   3558 75 A0 00           3509 	mov	_E2IE,#0x00
                    00E9   3510 	C$main.c$231$1$196 ==.
                           3511 ;	main.c:231: GPIOENABLE = 1; // unfreeze GPIO
   355B 90 70 0C           3512 	mov	dptr,#_GPIOENABLE
   355E 74 01              3513 	mov	a,#0x01
   3560 F0                 3514 	movx	@dptr,a
                    00EF   3515 	C$main.c$235$1$196 ==.
                           3516 ;	main.c:235: return !coldstart; // coldstart -> return 0 -> var initialization; start from sleep -> return 1 -> no var initialization
   3561 E5 12              3517 	mov	a,_coldstart
   3563 B4 01 00           3518 	cjne	a,#0x01,00110$
   3566                    3519 00110$:
   3566 E4                 3520 	clr	a
   3567 33                 3521 	rlc	a
   3568 F5 82              3522 	mov	dpl,a
                    00F8   3523 	C$main.c$237$1$196 ==.
                    00F8   3524 	XG$_sdcc_external_startup$0$0 ==.
   356A 22                 3525 	ret
                           3526 ;------------------------------------------------------------
                           3527 ;Allocation info for local variables in function 'main'
                           3528 ;------------------------------------------------------------
                           3529 ;prev_key                  Allocated to registers 
                           3530 ;i                         Allocated to registers r7 
                           3531 ;flg                       Allocated to registers 
                           3532 ;------------------------------------------------------------
                    00F9   3533 	G$main$0$0 ==.
                    00F9   3534 	C$main.c$239$1$196 ==.
                           3535 ;	main.c:239: void main(void)
                           3536 ;	-----------------------------------------
                           3537 ;	 function main
                           3538 ;	-----------------------------------------
   356B                    3539 _main:
                    00F9   3540 	C$main.c$252$1$200 ==.
                           3541 ;	main.c:252: __endasm;
                    0000   3542 	G$_start__stack$0$0 = __start__stack
                           3543 	.globl G$_start__stack$0$0
                    00F9   3544 	C$main.c$255$1$200 ==.
                           3545 ;	main.c:255: EA = 1;
   356B D2 AF              3546 	setb	_EA
                    00FB   3547 	C$main.c$256$1$200 ==.
                           3548 ;	main.c:256: flash_apply_calibration();
   356D 12 43 FC           3549 	lcall	_flash_apply_calibration
                    00FE   3550 	C$main.c$257$1$200 ==.
                           3551 ;	main.c:257: CLKCON = 0x00;
   3570 75 C6 00           3552 	mov	_CLKCON,#0x00
                    0101   3553 	C$main.c$258$1$200 ==.
                           3554 ;	main.c:258: wtimer_init();
   3573 12 3B 3E           3555 	lcall	_wtimer_init
                    0104   3556 	C$main.c$261$1$200 ==.
                           3557 ;	main.c:261: dbglink_init();
   3576 12 40 D9           3558 	lcall	_dbglink_init
                    0107   3559 	C$main.c$263$1$200 ==.
                           3560 ;	main.c:263: dbglink_writestr("booting up ...\n");
   3579 90 50 77           3561 	mov	dptr,#__str_0
   357C 75 F0 80           3562 	mov	b,#0x80
   357F 12 47 09           3563 	lcall	_dbglink_writestr
                    0110   3564 	C$main.c$265$3$202 ==.
                           3565 ;	main.c:265: led0_off();
   3582 C2 84              3566 	clr	_PORTA_4
                    0112   3567 	C$main.c$266$3$204 ==.
                           3568 ;	main.c:266: led1_off();
   3584 C2 85              3569 	clr	_PORTA_5
                    0114   3570 	C$main.c$267$1$200 ==.
                           3571 ;	main.c:267: delay_ms( 50);
   3586 90 00 32           3572 	mov	dptr,#0x0032
   3589 12 33 1F           3573 	lcall	_delay_ms
                    011A   3574 	C$main.c$269$3$206 ==.
                           3575 ;	main.c:269: led0_on();
   358C D2 84              3576 	setb	_PORTA_4
                    011C   3577 	C$main.c$270$3$208 ==.
                           3578 ;	main.c:270: led1_on();
   358E D2 85              3579 	setb	_PORTA_5
                    011E   3580 	C$main.c$271$1$200 ==.
                           3581 ;	main.c:271: delay_ms( 50);
   3590 90 00 32           3582 	mov	dptr,#0x0032
   3593 12 33 1F           3583 	lcall	_delay_ms
                    0124   3584 	C$main.c$273$3$210 ==.
                           3585 ;	main.c:273: led0_off();
   3596 C2 84              3586 	clr	_PORTA_4
                    0126   3587 	C$main.c$274$3$212 ==.
                           3588 ;	main.c:274: led1_off();
   3598 C2 85              3589 	clr	_PORTA_5
                    0128   3590 	C$main.c$275$1$200 ==.
                           3591 ;	main.c:275: delay_ms( 50);
   359A 90 00 32           3592 	mov	dptr,#0x0032
   359D 12 33 1F           3593 	lcall	_delay_ms
                    012E   3594 	C$main.c$277$3$214 ==.
                           3595 ;	main.c:277: led0_on();
   35A0 D2 84              3596 	setb	_PORTA_4
                    0130   3597 	C$main.c$278$3$216 ==.
                           3598 ;	main.c:278: led1_on();
   35A2 D2 85              3599 	setb	_PORTA_5
                    0132   3600 	C$main.c$279$1$200 ==.
                           3601 ;	main.c:279: delay_ms( 50);
   35A4 90 00 32           3602 	mov	dptr,#0x0032
   35A7 12 33 1F           3603 	lcall	_delay_ms
                    0138   3604 	C$main.c$281$3$218 ==.
                           3605 ;	main.c:281: led0_off();
   35AA C2 84              3606 	clr	_PORTA_4
                    013A   3607 	C$main.c$282$3$220 ==.
                           3608 ;	main.c:282: led1_off();
   35AC C2 85              3609 	clr	_PORTA_5
                    013C   3610 	C$main.c$283$1$200 ==.
                           3611 ;	main.c:283: delay_ms( 50);
   35AE 90 00 32           3612 	mov	dptr,#0x0032
   35B1 12 33 1F           3613 	lcall	_delay_ms
                    0142   3614 	C$main.c$285$3$222 ==.
                           3615 ;	main.c:285: led0_on();
   35B4 D2 84              3616 	setb	_PORTA_4
                    0144   3617 	C$main.c$286$3$224 ==.
                           3618 ;	main.c:286: led1_on();
   35B6 D2 85              3619 	setb	_PORTA_5
                    0146   3620 	C$main.c$287$1$200 ==.
                           3621 ;	main.c:287: delay_ms( 50);
   35B8 90 00 32           3622 	mov	dptr,#0x0032
   35BB 12 33 1F           3623 	lcall	_delay_ms
                    014C   3624 	C$main.c$289$3$226 ==.
                           3625 ;	main.c:289: led0_off();
   35BE C2 84              3626 	clr	_PORTA_4
                    014E   3627 	C$main.c$290$3$228 ==.
                           3628 ;	main.c:290: led1_off();
   35C0 C2 85              3629 	clr	_PORTA_5
                    0150   3630 	C$main.c$292$1$200 ==.
                           3631 ;	main.c:292: delay_ms(200);
   35C2 90 00 C8           3632 	mov	dptr,#0x00C8
   35C5 12 33 1F           3633 	lcall	_delay_ms
                    0156   3634 	C$main.c$296$1$200 ==.
                           3635 ;	main.c:296: if (coldstart) {
   35C8 E5 12              3636 	mov	a,_coldstart
   35CA 70 03              3637 	jnz	00299$
   35CC 02 36 A9           3638 	ljmp	00248$
   35CF                    3639 00299$:
                    015D   3640 	C$main.c$298$4$231 ==.
                           3641 ;	main.c:298: led0_off();
   35CF C2 84              3642 	clr	_PORTA_4
                    015F   3643 	C$main.c$299$4$233 ==.
                           3644 ;	main.c:299: led1_off();
   35D1 C2 85              3645 	clr	_PORTA_5
                    0161   3646 	C$main.c$303$2$229 ==.
                           3647 ;	main.c:303: wakeup_desc.handler = wakeup_callback;
   35D3 90 02 9B           3648 	mov	dptr,#(_wakeup_desc + 0x0002)
   35D6 74 02              3649 	mov	a,#_wakeup_callback
   35D8 F0                 3650 	movx	@dptr,a
   35D9 A3                 3651 	inc	dptr
   35DA 74 35              3652 	mov	a,#(_wakeup_callback >> 8)
   35DC F0                 3653 	movx	@dptr,a
                    016B   3654 	C$main.c$311$2$229 ==.
                           3655 ;	main.c:311: i = axradio_init();
   35DD 12 25 CB           3656 	lcall	_axradio_init
                    016E   3657 	C$main.c$312$2$229 ==.
                           3658 ;	main.c:312: if (i != AXRADIO_ERR_NOERROR) {
   35E0 E5 82              3659 	mov	a,dpl
   35E2 FF                 3660 	mov	r7,a
   35E3 60 4A              3661 	jz	00208$
                    0173   3662 	C$main.c$313$3$234 ==.
                           3663 ;	main.c:313: if (i == AXRADIO_ERR_NOCHIP) {
   35E5 BF 05 14           3664 	cjne	r7,#0x05,00200$
                    0176   3665 	C$main.c$316$4$235 ==.
                           3666 ;	main.c:316: if (DBGLNKSTAT & 0x10)
   35E8 E5 E2              3667 	mov	a,_DBGLNKSTAT
   35EA 20 E4 03           3668 	jb	acc.4,00303$
   35ED 02 36 C2           3669 	ljmp	00266$
   35F0                    3670 00303$:
                    017E   3671 	C$main.c$317$4$235 ==.
                           3672 ;	main.c:317: dbglink_writestr("No AX5043 RF chip found \n");
   35F0 90 50 87           3673 	mov	dptr,#__str_1
   35F3 75 F0 80           3674 	mov	b,#0x80
   35F6 12 47 09           3675 	lcall	_dbglink_writestr
                    0187   3676 	C$main.c$319$4$235 ==.
                           3677 ;	main.c:319: goto terminate_error;
   35F9 02 36 C2           3678 	ljmp	00266$
   35FC                    3679 00200$:
                    018A   3680 	C$main.c$323$3$234 ==.
                           3681 ;	main.c:323: if (DBGLNKSTAT & 0x10) {
   35FC E5 E2              3682 	mov	a,_DBGLNKSTAT
   35FE 20 E4 03           3683 	jb	acc.4,00304$
   3601 02 36 BD           3684 	ljmp	00265$
   3604                    3685 00304$:
                    0192   3686 	C$main.c$324$4$236 ==.
                           3687 ;	main.c:324: dbglink_writestr("error initializing radio: ");
   3604 90 50 A1           3688 	mov	dptr,#__str_2
   3607 75 F0 80           3689 	mov	b,#0x80
   360A C0 07              3690 	push	ar7
   360C 12 47 09           3691 	lcall	_dbglink_writestr
   360F D0 07              3692 	pop	ar7
                    019F   3693 	C$main.c$325$4$236 ==.
                           3694 ;	main.c:325: dbglink_writehexu16(i, 2);
   3611 8F 05              3695 	mov	ar5,r7
   3613 7E 00              3696 	mov	r6,#0x00
   3615 C0 07              3697 	push	ar7
   3617 74 02              3698 	mov	a,#0x02
   3619 C0 E0              3699 	push	acc
   361B 8D 82              3700 	mov	dpl,r5
   361D 8E 83              3701 	mov	dph,r6
   361F 12 49 B0           3702 	lcall	_dbglink_writehexu16
   3622 15 81              3703 	dec	sp
   3624 D0 07              3704 	pop	ar7
                    01B4   3705 	C$main.c$326$4$236 ==.
                           3706 ;	main.c:326: dbglink_tx('\n');
   3626 75 82 0A           3707 	mov	dpl,#0x0A
   3629 12 37 3A           3708 	lcall	_dbglink_tx
                    01BA   3709 	C$main.c$329$3$234 ==.
                           3710 ;	main.c:329: goto terminate_radio_error;
   362C 02 36 BD           3711 	ljmp	00265$
                    01BD   3712 	C$main.c$332$2$229 ==.
                           3713 ;	main.c:332: led0_on();
   362F                    3714 00208$:
   362F D2 84              3715 	setb	_PORTA_4
                    01BF   3716 	C$main.c$333$4$240 ==.
                           3717 ;	main.c:333: led1_off();
   3631 C2 85              3718 	clr	_PORTA_5
                    01C1   3719 	C$main.c$334$2$229 ==.
                           3720 ;	main.c:334: delay_ms(100);
   3633 90 00 64           3721 	mov	dptr,#0x0064
   3636 12 33 1F           3722 	lcall	_delay_ms
                    01C7   3723 	C$main.c$337$2$229 ==.
                           3724 ;	main.c:337: if (DBGLNKSTAT & 0x10)
   3639 E5 E2              3725 	mov	a,_DBGLNKSTAT
   363B 30 E4 09           3726 	jnb	acc.4,00218$
                    01CC   3727 	C$main.c$338$2$229 ==.
                           3728 ;	main.c:338: dbglink_writestr("found AX5043\n");
   363E 90 50 BC           3729 	mov	dptr,#__str_3
   3641 75 F0 80           3730 	mov	b,#0x80
   3644 12 47 09           3731 	lcall	_dbglink_writestr
   3647                    3732 00218$:
                    01D5   3733 	C$main.c$340$2$229 ==.
                           3734 ;	main.c:340: axradio_set_local_address(&localaddr);
   3647 90 4F 73           3735 	mov	dptr,#_localaddr
   364A 75 F0 80           3736 	mov	b,#0x80
   364D 12 2E 71           3737 	lcall	_axradio_set_local_address
                    01DE   3738 	C$main.c$341$2$229 ==.
                           3739 ;	main.c:341: axradio_set_default_remote_address(&remoteaddr);
   3650 90 4F 6F           3740 	mov	dptr,#_remoteaddr
   3653 75 F0 80           3741 	mov	b,#0x80
   3656 12 2E AF           3742 	lcall	_axradio_set_default_remote_address
                    01E7   3743 	C$main.c$354$4$242 ==.
                           3744 ;	main.c:354: led0_off();
   3659 C2 84              3745 	clr	_PORTA_4
                    01E9   3746 	C$main.c$355$4$244 ==.
                           3747 ;	main.c:355: led1_on();
   365B D2 85              3748 	setb	_PORTA_5
                    01EB   3749 	C$main.c$356$2$229 ==.
                           3750 ;	main.c:356: delay_ms(100);
   365D 90 00 64           3751 	mov	dptr,#0x0064
   3660 12 33 1F           3752 	lcall	_delay_ms
                    01F1   3753 	C$main.c$369$2$229 ==.
                           3754 ;	main.c:369: if (DBGLNKSTAT & 0x10) {
   3663 E5 E2              3755 	mov	a,_DBGLNKSTAT
   3665 30 E4 2A           3756 	jnb	acc.4,00232$
                    01F6   3757 	C$main.c$370$3$245 ==.
                           3758 ;	main.c:370: dbglink_writestr("RNG = ");
   3668 90 50 CA           3759 	mov	dptr,#__str_4
   366B 75 F0 80           3760 	mov	b,#0x80
   366E 12 47 09           3761 	lcall	_dbglink_writestr
                    01FF   3762 	C$main.c$371$3$245 ==.
                           3763 ;	main.c:371: dbglink_writenum16(axradio_get_pllrange(), 2, 0);
   3671 12 2D 76           3764 	lcall	_axradio_get_pllrange
   3674 AE 82              3765 	mov	r6,dpl
   3676 E4                 3766 	clr	a
   3677 FD                 3767 	mov	r5,a
   3678 C0 E0              3768 	push	acc
   367A 74 02              3769 	mov	a,#0x02
   367C C0 E0              3770 	push	acc
   367E 8E 82              3771 	mov	dpl,r6
   3680 8D 83              3772 	mov	dph,r5
   3682 12 4C C1           3773 	lcall	_dbglink_writenum16
   3685 15 81              3774 	dec	sp
   3687 15 81              3775 	dec	sp
                    0217   3776 	C$main.c$372$3$245 ==.
                           3777 ;	main.c:372: dbglink_writestr("\n\nMASTER\n");
   3689 90 50 D1           3778 	mov	dptr,#__str_5
   368C 75 F0 80           3779 	mov	b,#0x80
   368F 12 47 09           3780 	lcall	_dbglink_writestr
   3692                    3781 00232$:
                    0220   3782 	C$main.c$377$2$229 ==.
                           3783 ;	main.c:377: i = axradio_set_mode(RADIO_MODE);
   3692 75 82 10           3784 	mov	dpl,#0x10
   3695 12 28 CB           3785 	lcall	_axradio_set_mode
                    0226   3786 	C$main.c$378$2$229 ==.
                           3787 ;	main.c:378: if (i != AXRADIO_ERR_NOERROR)
   3698 E5 82              3788 	mov	a,dpl
   369A FF                 3789 	mov	r7,a
   369B 70 20              3790 	jnz	00265$
                    022B   3791 	C$main.c$381$4$247 ==.
                           3792 ;	main.c:381: led0_on();
   369D D2 84              3793 	setb	_PORTA_4
                    022D   3794 	C$main.c$382$4$249 ==.
                           3795 ;	main.c:382: led1_on();
   369F D2 85              3796 	setb	_PORTA_5
                    022F   3797 	C$main.c$383$2$229 ==.
                           3798 ;	main.c:383: delay_ms(100);
   36A1 90 00 64           3799 	mov	dptr,#0x0064
   36A4 12 33 1F           3800 	lcall	_delay_ms
   36A7 80 05              3801 	sjmp	00253$
   36A9                    3802 00248$:
                    0237   3803 	C$main.c$391$2$250 ==.
                           3804 ;	main.c:391: ax5043_commsleepexit();
   36A9 12 48 E0           3805 	lcall	_ax5043_commsleepexit
                    023A   3806 	C$main.c$392$2$250 ==.
                           3807 ;	main.c:392: IE_4 = 1;
   36AC D2 AC              3808 	setb	_IE_4
                    023C   3809 	C$main.c$399$1$200 ==.
                           3810 ;	main.c:399: led0_off();
   36AE                    3811 00253$:
   36AE C2 84              3812 	clr	_PORTA_4
                    023E   3813 	C$main.c$400$3$254 ==.
                           3814 ;	main.c:400: led1_on();
   36B0 D2 85              3815 	setb	_PORTA_5
   36B2                    3816 00270$:
                    0240   3817 	C$main.c$406$2$255 ==.
                           3818 ;	main.c:406: delay_ms(10);
   36B2 90 00 0A           3819 	mov	dptr,#0x000A
   36B5 12 33 1F           3820 	lcall	_delay_ms
                    0246   3821 	C$main.c$407$3$256 ==.
                           3822 ;	main.c:407: led1_toggle();
   36B8 63 80 20           3823 	xrl	_PORTA,#0x20
                    0249   3824 	C$main.c$471$1$200 ==.
                           3825 ;	main.c:471: terminate_radio_error:
   36BB 80 F5              3826 	sjmp	00270$
   36BD                    3827 00265$:
                    024B   3828 	C$main.c$472$1$200 ==.
                           3829 ;	main.c:472: display_radio_error(i);
   36BD 8F 82              3830 	mov	dpl,r7
   36BF 12 32 C8           3831 	lcall	_display_radio_error
                    0250   3832 	C$main.c$473$1$200 ==.
                           3833 ;	main.c:473: terminate_error:
   36C2                    3834 00266$:
                    0250   3835 	C$main.c$476$1$200 ==.
                           3836 ;	main.c:476: if (DBGLNKSTAT & 0x10)
   36C2 E5 E2              3837 	mov	a,_DBGLNKSTAT
   36C4 30 E4 09           3838 	jnb	acc.4,00273$
                    0255   3839 	C$main.c$477$1$200 ==.
                           3840 ;	main.c:477: dbglink_writestr("TERMINATE ERROR\n");
   36C7 90 50 DB           3841 	mov	dptr,#__str_6
   36CA 75 F0 80           3842 	mov	b,#0x80
   36CD 12 47 09           3843 	lcall	_dbglink_writestr
   36D0                    3844 00273$:
                    025E   3845 	C$main.c$484$2$257 ==.
                           3846 ;	main.c:484: wtimer_runcallbacks();
   36D0 12 3E 48           3847 	lcall	_wtimer_runcallbacks
                    0261   3848 	C$main.c$495$3$258 ==.
                           3849 ;	main.c:495: wtimer_idle(flg);
   36D3 75 82 02           3850 	mov	dpl,#0x02
   36D6 12 3E CC           3851 	lcall	_wtimer_idle
   36D9 80 F5              3852 	sjmp	00273$
                    0269   3853 	C$main.c$498$3$258 ==.
                    0269   3854 	XG$main$0$0 ==.
   36DB 22                 3855 	ret
                           3856 	.area CSEG    (CODE)
                           3857 	.area CONST   (CODE)
                    0000   3858 Fmain$_str_0$0$0 == .
   5077                    3859 __str_0:
   5077 62 6F 6F 74 69 6E  3860 	.ascii "booting up ..."
        67 20 75 70 20 2E
        2E 2E
   5085 0A                 3861 	.db 0x0A
   5086 00                 3862 	.db 0x00
                    0010   3863 Fmain$_str_1$0$0 == .
   5087                    3864 __str_1:
   5087 4E 6F 20 41 58 35  3865 	.ascii "No AX5043 RF chip found "
        30 34 33 20 52 46
        20 63 68 69 70 20
        66 6F 75 6E 64 20
   509F 0A                 3866 	.db 0x0A
   50A0 00                 3867 	.db 0x00
                    002A   3868 Fmain$_str_2$0$0 == .
   50A1                    3869 __str_2:
   50A1 65 72 72 6F 72 20  3870 	.ascii "error initializing radio: "
        69 6E 69 74 69 61
        6C 69 7A 69 6E 67
        20 72 61 64 69 6F
        3A 20
   50BB 00                 3871 	.db 0x00
                    0045   3872 Fmain$_str_3$0$0 == .
   50BC                    3873 __str_3:
   50BC 66 6F 75 6E 64 20  3874 	.ascii "found AX5043"
        41 58 35 30 34 33
   50C8 0A                 3875 	.db 0x0A
   50C9 00                 3876 	.db 0x00
                    0053   3877 Fmain$_str_4$0$0 == .
   50CA                    3878 __str_4:
   50CA 52 4E 47 20 3D 20  3879 	.ascii "RNG = "
   50D0 00                 3880 	.db 0x00
                    005A   3881 Fmain$_str_5$0$0 == .
   50D1                    3882 __str_5:
   50D1 0A                 3883 	.db 0x0A
   50D2 0A                 3884 	.db 0x0A
   50D3 4D 41 53 54 45 52  3885 	.ascii "MASTER"
   50D9 0A                 3886 	.db 0x0A
   50DA 00                 3887 	.db 0x00
                    0064   3888 Fmain$_str_6$0$0 == .
   50DB                    3889 __str_6:
   50DB 54 45 52 4D 49 4E  3890 	.ascii "TERMINATE ERROR"
        41 54 45 20 45 52
        52 4F 52
   50EA 0A                 3891 	.db 0x0A
   50EB 00                 3892 	.db 0x00
                           3893 	.area XINIT   (CODE)
                           3894 	.area CABS    (ABS,CODE)
