                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Sat Dec 21 22:34:10 2013
                              5 ;--------------------------------------------------------
                              6 	.module lposc
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _axradio_wait_for_xtal
                             13 	.globl _enter_standby
                             14 	.globl _PORTC_7
                             15 	.globl _PORTC_6
                             16 	.globl _PORTC_5
                             17 	.globl _PORTC_4
                             18 	.globl _PORTC_3
                             19 	.globl _PORTC_2
                             20 	.globl _PORTC_1
                             21 	.globl _PORTC_0
                             22 	.globl _PORTB_7
                             23 	.globl _PORTB_6
                             24 	.globl _PORTB_5
                             25 	.globl _PORTB_4
                             26 	.globl _PORTB_3
                             27 	.globl _PORTB_2
                             28 	.globl _PORTB_1
                             29 	.globl _PORTB_0
                             30 	.globl _PORTA_7
                             31 	.globl _PORTA_6
                             32 	.globl _PORTA_5
                             33 	.globl _PORTA_4
                             34 	.globl _PORTA_3
                             35 	.globl _PORTA_2
                             36 	.globl _PORTA_1
                             37 	.globl _PORTA_0
                             38 	.globl _PINC_7
                             39 	.globl _PINC_6
                             40 	.globl _PINC_5
                             41 	.globl _PINC_4
                             42 	.globl _PINC_3
                             43 	.globl _PINC_2
                             44 	.globl _PINC_1
                             45 	.globl _PINC_0
                             46 	.globl _PINB_7
                             47 	.globl _PINB_6
                             48 	.globl _PINB_5
                             49 	.globl _PINB_4
                             50 	.globl _PINB_3
                             51 	.globl _PINB_2
                             52 	.globl _PINB_1
                             53 	.globl _PINB_0
                             54 	.globl _PINA_7
                             55 	.globl _PINA_6
                             56 	.globl _PINA_5
                             57 	.globl _PINA_4
                             58 	.globl _PINA_3
                             59 	.globl _PINA_2
                             60 	.globl _PINA_1
                             61 	.globl _PINA_0
                             62 	.globl _CY
                             63 	.globl _AC
                             64 	.globl _F0
                             65 	.globl _RS1
                             66 	.globl _RS0
                             67 	.globl _OV
                             68 	.globl _F1
                             69 	.globl _P
                             70 	.globl _IP_7
                             71 	.globl _IP_6
                             72 	.globl _IP_5
                             73 	.globl _IP_4
                             74 	.globl _IP_3
                             75 	.globl _IP_2
                             76 	.globl _IP_1
                             77 	.globl _IP_0
                             78 	.globl _EA
                             79 	.globl _IE_7
                             80 	.globl _IE_6
                             81 	.globl _IE_5
                             82 	.globl _IE_4
                             83 	.globl _IE_3
                             84 	.globl _IE_2
                             85 	.globl _IE_1
                             86 	.globl _IE_0
                             87 	.globl _EIP_7
                             88 	.globl _EIP_6
                             89 	.globl _EIP_5
                             90 	.globl _EIP_4
                             91 	.globl _EIP_3
                             92 	.globl _EIP_2
                             93 	.globl _EIP_1
                             94 	.globl _EIP_0
                             95 	.globl _EIE_7
                             96 	.globl _EIE_6
                             97 	.globl _EIE_5
                             98 	.globl _EIE_4
                             99 	.globl _EIE_3
                            100 	.globl _EIE_2
                            101 	.globl _EIE_1
                            102 	.globl _EIE_0
                            103 	.globl _E2IP_7
                            104 	.globl _E2IP_6
                            105 	.globl _E2IP_5
                            106 	.globl _E2IP_4
                            107 	.globl _E2IP_3
                            108 	.globl _E2IP_2
                            109 	.globl _E2IP_1
                            110 	.globl _E2IP_0
                            111 	.globl _E2IE_7
                            112 	.globl _E2IE_6
                            113 	.globl _E2IE_5
                            114 	.globl _E2IE_4
                            115 	.globl _E2IE_3
                            116 	.globl _E2IE_2
                            117 	.globl _E2IE_1
                            118 	.globl _E2IE_0
                            119 	.globl _B_7
                            120 	.globl _B_6
                            121 	.globl _B_5
                            122 	.globl _B_4
                            123 	.globl _B_3
                            124 	.globl _B_2
                            125 	.globl _B_1
                            126 	.globl _B_0
                            127 	.globl _ACC_7
                            128 	.globl _ACC_6
                            129 	.globl _ACC_5
                            130 	.globl _ACC_4
                            131 	.globl _ACC_3
                            132 	.globl _ACC_2
                            133 	.globl _ACC_1
                            134 	.globl _ACC_0
                            135 	.globl _WTSTAT
                            136 	.globl _WTIRQEN
                            137 	.globl _WTEVTD
                            138 	.globl _WTEVTD1
                            139 	.globl _WTEVTD0
                            140 	.globl _WTEVTC
                            141 	.globl _WTEVTC1
                            142 	.globl _WTEVTC0
                            143 	.globl _WTEVTB
                            144 	.globl _WTEVTB1
                            145 	.globl _WTEVTB0
                            146 	.globl _WTEVTA
                            147 	.globl _WTEVTA1
                            148 	.globl _WTEVTA0
                            149 	.globl _WTCNTR1
                            150 	.globl _WTCNTB
                            151 	.globl _WTCNTB1
                            152 	.globl _WTCNTB0
                            153 	.globl _WTCNTA
                            154 	.globl _WTCNTA1
                            155 	.globl _WTCNTA0
                            156 	.globl _WTCFGB
                            157 	.globl _WTCFGA
                            158 	.globl _WDTRESET
                            159 	.globl _WDTCFG
                            160 	.globl _U1STATUS
                            161 	.globl _U1SHREG
                            162 	.globl _U1MODE
                            163 	.globl _U1CTRL
                            164 	.globl _U0STATUS
                            165 	.globl _U0SHREG
                            166 	.globl _U0MODE
                            167 	.globl _U0CTRL
                            168 	.globl _T2STATUS
                            169 	.globl _T2PERIOD
                            170 	.globl _T2PERIOD1
                            171 	.globl _T2PERIOD0
                            172 	.globl _T2MODE
                            173 	.globl _T2CNT
                            174 	.globl _T2CNT1
                            175 	.globl _T2CNT0
                            176 	.globl _T2CLKSRC
                            177 	.globl _T1STATUS
                            178 	.globl _T1PERIOD
                            179 	.globl _T1PERIOD1
                            180 	.globl _T1PERIOD0
                            181 	.globl _T1MODE
                            182 	.globl _T1CNT
                            183 	.globl _T1CNT1
                            184 	.globl _T1CNT0
                            185 	.globl _T1CLKSRC
                            186 	.globl _T0STATUS
                            187 	.globl _T0PERIOD
                            188 	.globl _T0PERIOD1
                            189 	.globl _T0PERIOD0
                            190 	.globl _T0MODE
                            191 	.globl _T0CNT
                            192 	.globl _T0CNT1
                            193 	.globl _T0CNT0
                            194 	.globl _T0CLKSRC
                            195 	.globl _SPSTATUS
                            196 	.globl _SPSHREG
                            197 	.globl _SPMODE
                            198 	.globl _SPCLKSRC
                            199 	.globl _RADIOSTAT
                            200 	.globl _RADIOSTAT1
                            201 	.globl _RADIOSTAT0
                            202 	.globl _RADIODATA
                            203 	.globl _RADIODATA3
                            204 	.globl _RADIODATA2
                            205 	.globl _RADIODATA1
                            206 	.globl _RADIODATA0
                            207 	.globl _RADIOADDR
                            208 	.globl _RADIOADDR1
                            209 	.globl _RADIOADDR0
                            210 	.globl _RADIOACC
                            211 	.globl _OC1STATUS
                            212 	.globl _OC1PIN
                            213 	.globl _OC1MODE
                            214 	.globl _OC1COMP
                            215 	.globl _OC1COMP1
                            216 	.globl _OC1COMP0
                            217 	.globl _OC0STATUS
                            218 	.globl _OC0PIN
                            219 	.globl _OC0MODE
                            220 	.globl _OC0COMP
                            221 	.globl _OC0COMP1
                            222 	.globl _OC0COMP0
                            223 	.globl _NVSTATUS
                            224 	.globl _NVKEY
                            225 	.globl _NVDATA
                            226 	.globl _NVDATA1
                            227 	.globl _NVDATA0
                            228 	.globl _NVADDR
                            229 	.globl _NVADDR1
                            230 	.globl _NVADDR0
                            231 	.globl _IC1STATUS
                            232 	.globl _IC1MODE
                            233 	.globl _IC1CAPT
                            234 	.globl _IC1CAPT1
                            235 	.globl _IC1CAPT0
                            236 	.globl _IC0STATUS
                            237 	.globl _IC0MODE
                            238 	.globl _IC0CAPT
                            239 	.globl _IC0CAPT1
                            240 	.globl _IC0CAPT0
                            241 	.globl _PORTR
                            242 	.globl _PORTC
                            243 	.globl _PORTB
                            244 	.globl _PORTA
                            245 	.globl _PINR
                            246 	.globl _PINC
                            247 	.globl _PINB
                            248 	.globl _PINA
                            249 	.globl _DIRR
                            250 	.globl _DIRC
                            251 	.globl _DIRB
                            252 	.globl _DIRA
                            253 	.globl _DBGLNKSTAT
                            254 	.globl _DBGLNKBUF
                            255 	.globl _CODECONFIG
                            256 	.globl _CLKSTAT
                            257 	.globl _CLKCON
                            258 	.globl _ANALOGCOMP
                            259 	.globl _ADCCONV
                            260 	.globl _ADCCLKSRC
                            261 	.globl _ADCCH3CONFIG
                            262 	.globl _ADCCH2CONFIG
                            263 	.globl _ADCCH1CONFIG
                            264 	.globl _ADCCH0CONFIG
                            265 	.globl __XPAGE
                            266 	.globl _XPAGE
                            267 	.globl _SP
                            268 	.globl _PSW
                            269 	.globl _PCON
                            270 	.globl _IP
                            271 	.globl _IE
                            272 	.globl _EIP
                            273 	.globl _EIE
                            274 	.globl _E2IP
                            275 	.globl _E2IE
                            276 	.globl _DPS
                            277 	.globl _DPTR1
                            278 	.globl _DPTR0
                            279 	.globl _DPL1
                            280 	.globl _DPL
                            281 	.globl _DPH1
                            282 	.globl _DPH
                            283 	.globl _B
                            284 	.globl _ACC
                            285 	.globl _AX5043_POWCTRL1
                            286 	.globl _AX5043_REF
                            287 	.globl _AX5043_0xF44
                            288 	.globl _AX5043_0xF35
                            289 	.globl _AX5043_0xF34
                            290 	.globl _AX5043_0xF33
                            291 	.globl _AX5043_0xF32
                            292 	.globl _AX5043_0xF31
                            293 	.globl _AX5043_0xF30
                            294 	.globl _AX5043_0xF2F
                            295 	.globl _AX5043_0xF26
                            296 	.globl _AX5043_0xF23
                            297 	.globl _AX5043_0xF22
                            298 	.globl _AX5043_0xF21
                            299 	.globl _AX5043_0xF1C
                            300 	.globl _AX5043_0xF18
                            301 	.globl _AX5043_0xF11
                            302 	.globl _AX5043_0xF10
                            303 	.globl _AX5043_0xF0C
                            304 	.globl _AX5043_0xF01
                            305 	.globl _AX5043_0xF00
                            306 	.globl _AX5043_TIMEGAIN3NB
                            307 	.globl _AX5043_TIMEGAIN2NB
                            308 	.globl _AX5043_TIMEGAIN1NB
                            309 	.globl _AX5043_TIMEGAIN0NB
                            310 	.globl _AX5043_RXPARAMSETSNB
                            311 	.globl _AX5043_RXPARAMCURSETNB
                            312 	.globl _AX5043_PKTMAXLENNB
                            313 	.globl _AX5043_PKTLENOFFSETNB
                            314 	.globl _AX5043_PKTLENCFGNB
                            315 	.globl _AX5043_PKTADDRMASK3NB
                            316 	.globl _AX5043_PKTADDRMASK2NB
                            317 	.globl _AX5043_PKTADDRMASK1NB
                            318 	.globl _AX5043_PKTADDRMASK0NB
                            319 	.globl _AX5043_PKTADDRCFGNB
                            320 	.globl _AX5043_PKTADDR3NB
                            321 	.globl _AX5043_PKTADDR2NB
                            322 	.globl _AX5043_PKTADDR1NB
                            323 	.globl _AX5043_PKTADDR0NB
                            324 	.globl _AX5043_PHASEGAIN3NB
                            325 	.globl _AX5043_PHASEGAIN2NB
                            326 	.globl _AX5043_PHASEGAIN1NB
                            327 	.globl _AX5043_PHASEGAIN0NB
                            328 	.globl _AX5043_FREQUENCYLEAKNB
                            329 	.globl _AX5043_FREQUENCYGAIND3NB
                            330 	.globl _AX5043_FREQUENCYGAIND2NB
                            331 	.globl _AX5043_FREQUENCYGAIND1NB
                            332 	.globl _AX5043_FREQUENCYGAIND0NB
                            333 	.globl _AX5043_FREQUENCYGAINC3NB
                            334 	.globl _AX5043_FREQUENCYGAINC2NB
                            335 	.globl _AX5043_FREQUENCYGAINC1NB
                            336 	.globl _AX5043_FREQUENCYGAINC0NB
                            337 	.globl _AX5043_FREQUENCYGAINB3NB
                            338 	.globl _AX5043_FREQUENCYGAINB2NB
                            339 	.globl _AX5043_FREQUENCYGAINB1NB
                            340 	.globl _AX5043_FREQUENCYGAINB0NB
                            341 	.globl _AX5043_FREQUENCYGAINA3NB
                            342 	.globl _AX5043_FREQUENCYGAINA2NB
                            343 	.globl _AX5043_FREQUENCYGAINA1NB
                            344 	.globl _AX5043_FREQUENCYGAINA0NB
                            345 	.globl _AX5043_FREQDEV13NB
                            346 	.globl _AX5043_FREQDEV12NB
                            347 	.globl _AX5043_FREQDEV11NB
                            348 	.globl _AX5043_FREQDEV10NB
                            349 	.globl _AX5043_FREQDEV03NB
                            350 	.globl _AX5043_FREQDEV02NB
                            351 	.globl _AX5043_FREQDEV01NB
                            352 	.globl _AX5043_FREQDEV00NB
                            353 	.globl _AX5043_FOURFSK3NB
                            354 	.globl _AX5043_FOURFSK2NB
                            355 	.globl _AX5043_FOURFSK1NB
                            356 	.globl _AX5043_FOURFSK0NB
                            357 	.globl _AX5043_DRGAIN3NB
                            358 	.globl _AX5043_DRGAIN2NB
                            359 	.globl _AX5043_DRGAIN1NB
                            360 	.globl _AX5043_DRGAIN0NB
                            361 	.globl _AX5043_BBOFFSRES3NB
                            362 	.globl _AX5043_BBOFFSRES2NB
                            363 	.globl _AX5043_BBOFFSRES1NB
                            364 	.globl _AX5043_BBOFFSRES0NB
                            365 	.globl _AX5043_AMPLITUDEGAIN3NB
                            366 	.globl _AX5043_AMPLITUDEGAIN2NB
                            367 	.globl _AX5043_AMPLITUDEGAIN1NB
                            368 	.globl _AX5043_AMPLITUDEGAIN0NB
                            369 	.globl _AX5043_AGCTARGET3NB
                            370 	.globl _AX5043_AGCTARGET2NB
                            371 	.globl _AX5043_AGCTARGET1NB
                            372 	.globl _AX5043_AGCTARGET0NB
                            373 	.globl _AX5043_AGCMINMAX3NB
                            374 	.globl _AX5043_AGCMINMAX2NB
                            375 	.globl _AX5043_AGCMINMAX1NB
                            376 	.globl _AX5043_AGCMINMAX0NB
                            377 	.globl _AX5043_AGCGAIN3NB
                            378 	.globl _AX5043_AGCGAIN2NB
                            379 	.globl _AX5043_AGCGAIN1NB
                            380 	.globl _AX5043_AGCGAIN0NB
                            381 	.globl _AX5043_AGCAHYST3NB
                            382 	.globl _AX5043_AGCAHYST2NB
                            383 	.globl _AX5043_AGCAHYST1NB
                            384 	.globl _AX5043_AGCAHYST0NB
                            385 	.globl _AX5043_XTALSTATUSNB
                            386 	.globl _AX5043_XTALCAPNB
                            387 	.globl _AX5043_WAKEUPXOEARLYNB
                            388 	.globl _AX5043_WAKEUPTIMER1NB
                            389 	.globl _AX5043_WAKEUPTIMER0NB
                            390 	.globl _AX5043_WAKEUPFREQ1NB
                            391 	.globl _AX5043_WAKEUPFREQ0NB
                            392 	.globl _AX5043_WAKEUP1NB
                            393 	.globl _AX5043_WAKEUP0NB
                            394 	.globl _AX5043_TXRATE2NB
                            395 	.globl _AX5043_TXRATE1NB
                            396 	.globl _AX5043_TXRATE0NB
                            397 	.globl _AX5043_TXPWRCOEFFE1NB
                            398 	.globl _AX5043_TXPWRCOEFFE0NB
                            399 	.globl _AX5043_TXPWRCOEFFD1NB
                            400 	.globl _AX5043_TXPWRCOEFFD0NB
                            401 	.globl _AX5043_TXPWRCOEFFC1NB
                            402 	.globl _AX5043_TXPWRCOEFFC0NB
                            403 	.globl _AX5043_TXPWRCOEFFB1NB
                            404 	.globl _AX5043_TXPWRCOEFFB0NB
                            405 	.globl _AX5043_TXPWRCOEFFA1NB
                            406 	.globl _AX5043_TXPWRCOEFFA0NB
                            407 	.globl _AX5043_TRKRFFREQ2NB
                            408 	.globl _AX5043_TRKRFFREQ1NB
                            409 	.globl _AX5043_TRKRFFREQ0NB
                            410 	.globl _AX5043_TRKPHASE1NB
                            411 	.globl _AX5043_TRKPHASE0NB
                            412 	.globl _AX5043_TRKFSKDEMOD1NB
                            413 	.globl _AX5043_TRKFSKDEMOD0NB
                            414 	.globl _AX5043_TRKFREQ1NB
                            415 	.globl _AX5043_TRKFREQ0NB
                            416 	.globl _AX5043_TRKDATARATE2NB
                            417 	.globl _AX5043_TRKDATARATE1NB
                            418 	.globl _AX5043_TRKDATARATE0NB
                            419 	.globl _AX5043_TRKAMPLITUDE1NB
                            420 	.globl _AX5043_TRKAMPLITUDE0NB
                            421 	.globl _AX5043_TRKAFSKDEMOD1NB
                            422 	.globl _AX5043_TRKAFSKDEMOD0NB
                            423 	.globl _AX5043_TMGTXSETTLENB
                            424 	.globl _AX5043_TMGTXBOOSTNB
                            425 	.globl _AX5043_TMGRXSETTLENB
                            426 	.globl _AX5043_TMGRXRSSINB
                            427 	.globl _AX5043_TMGRXPREAMBLE3NB
                            428 	.globl _AX5043_TMGRXPREAMBLE2NB
                            429 	.globl _AX5043_TMGRXPREAMBLE1NB
                            430 	.globl _AX5043_TMGRXOFFSACQNB
                            431 	.globl _AX5043_TMGRXCOARSEAGCNB
                            432 	.globl _AX5043_TMGRXBOOSTNB
                            433 	.globl _AX5043_TMGRXAGCNB
                            434 	.globl _AX5043_TIMER2NB
                            435 	.globl _AX5043_TIMER1NB
                            436 	.globl _AX5043_TIMER0NB
                            437 	.globl _AX5043_SILICONREVISIONNB
                            438 	.globl _AX5043_SCRATCHNB
                            439 	.globl _AX5043_RXDATARATE2NB
                            440 	.globl _AX5043_RXDATARATE1NB
                            441 	.globl _AX5043_RXDATARATE0NB
                            442 	.globl _AX5043_RSSIREFERENCENB
                            443 	.globl _AX5043_RSSIABSTHRNB
                            444 	.globl _AX5043_RSSINB
                            445 	.globl _AX5043_RADIOSTATENB
                            446 	.globl _AX5043_RADIOEVENTREQ1NB
                            447 	.globl _AX5043_RADIOEVENTREQ0NB
                            448 	.globl _AX5043_RADIOEVENTMASK1NB
                            449 	.globl _AX5043_RADIOEVENTMASK0NB
                            450 	.globl _AX5043_PWRMODENB
                            451 	.globl _AX5043_PWRAMPNB
                            452 	.globl _AX5043_POWSTICKYSTATNB
                            453 	.globl _AX5043_POWSTATNB
                            454 	.globl _AX5043_POWIRQMASKNB
                            455 	.globl _AX5043_PLLVCOIRNB
                            456 	.globl _AX5043_PLLVCOINB
                            457 	.globl _AX5043_PLLVCODIVNB
                            458 	.globl _AX5043_PLLRNGCLKNB
                            459 	.globl _AX5043_PLLRANGINGBNB
                            460 	.globl _AX5043_PLLRANGINGANB
                            461 	.globl _AX5043_PLLLOOPBOOSTNB
                            462 	.globl _AX5043_PLLLOOPNB
                            463 	.globl _AX5043_PLLLOCKDETNB
                            464 	.globl _AX5043_PLLCPIBOOSTNB
                            465 	.globl _AX5043_PLLCPINB
                            466 	.globl _AX5043_PKTSTOREFLAGSNB
                            467 	.globl _AX5043_PKTMISCFLAGSNB
                            468 	.globl _AX5043_PKTCHUNKSIZENB
                            469 	.globl _AX5043_PKTACCEPTFLAGSNB
                            470 	.globl _AX5043_PINSTATENB
                            471 	.globl _AX5043_PINFUNCSYSCLKNB
                            472 	.globl _AX5043_PINFUNCPWRAMPNB
                            473 	.globl _AX5043_PINFUNCIRQNB
                            474 	.globl _AX5043_PINFUNCDCLKNB
                            475 	.globl _AX5043_PINFUNCDATANB
                            476 	.globl _AX5043_PINFUNCANTSELNB
                            477 	.globl _AX5043_MODULATIONNB
                            478 	.globl _AX5043_MODCFGFNB
                            479 	.globl _AX5043_MODCFGANB
                            480 	.globl _AX5043_MAXRFOFFSET2NB
                            481 	.globl _AX5043_MAXRFOFFSET1NB
                            482 	.globl _AX5043_MAXRFOFFSET0NB
                            483 	.globl _AX5043_MAXDROFFSET2NB
                            484 	.globl _AX5043_MAXDROFFSET1NB
                            485 	.globl _AX5043_MAXDROFFSET0NB
                            486 	.globl _AX5043_MATCH1PAT1NB
                            487 	.globl _AX5043_MATCH1PAT0NB
                            488 	.globl _AX5043_MATCH1MINNB
                            489 	.globl _AX5043_MATCH1MAXNB
                            490 	.globl _AX5043_MATCH1LENNB
                            491 	.globl _AX5043_MATCH0PAT3NB
                            492 	.globl _AX5043_MATCH0PAT2NB
                            493 	.globl _AX5043_MATCH0PAT1NB
                            494 	.globl _AX5043_MATCH0PAT0NB
                            495 	.globl _AX5043_MATCH0MINNB
                            496 	.globl _AX5043_MATCH0MAXNB
                            497 	.globl _AX5043_MATCH0LENNB
                            498 	.globl _AX5043_LPOSCSTATUSNB
                            499 	.globl _AX5043_LPOSCREF1NB
                            500 	.globl _AX5043_LPOSCREF0NB
                            501 	.globl _AX5043_LPOSCPER1NB
                            502 	.globl _AX5043_LPOSCPER0NB
                            503 	.globl _AX5043_LPOSCKFILT1NB
                            504 	.globl _AX5043_LPOSCKFILT0NB
                            505 	.globl _AX5043_LPOSCFREQ1NB
                            506 	.globl _AX5043_LPOSCFREQ0NB
                            507 	.globl _AX5043_LPOSCCONFIGNB
                            508 	.globl _AX5043_IRQREQUEST1NB
                            509 	.globl _AX5043_IRQREQUEST0NB
                            510 	.globl _AX5043_IRQMASK1NB
                            511 	.globl _AX5043_IRQMASK0NB
                            512 	.globl _AX5043_IRQINVERSION1NB
                            513 	.globl _AX5043_IRQINVERSION0NB
                            514 	.globl _AX5043_IFFREQ1NB
                            515 	.globl _AX5043_IFFREQ0NB
                            516 	.globl _AX5043_GPADCPERIODNB
                            517 	.globl _AX5043_GPADCCTRLNB
                            518 	.globl _AX5043_GPADC13VALUE1NB
                            519 	.globl _AX5043_GPADC13VALUE0NB
                            520 	.globl _AX5043_FSKDMIN1NB
                            521 	.globl _AX5043_FSKDMIN0NB
                            522 	.globl _AX5043_FSKDMAX1NB
                            523 	.globl _AX5043_FSKDMAX0NB
                            524 	.globl _AX5043_FSKDEV2NB
                            525 	.globl _AX5043_FSKDEV1NB
                            526 	.globl _AX5043_FSKDEV0NB
                            527 	.globl _AX5043_FREQB3NB
                            528 	.globl _AX5043_FREQB2NB
                            529 	.globl _AX5043_FREQB1NB
                            530 	.globl _AX5043_FREQB0NB
                            531 	.globl _AX5043_FREQA3NB
                            532 	.globl _AX5043_FREQA2NB
                            533 	.globl _AX5043_FREQA1NB
                            534 	.globl _AX5043_FREQA0NB
                            535 	.globl _AX5043_FRAMINGNB
                            536 	.globl _AX5043_FIFOTHRESH1NB
                            537 	.globl _AX5043_FIFOTHRESH0NB
                            538 	.globl _AX5043_FIFOSTATNB
                            539 	.globl _AX5043_FIFOFREE1NB
                            540 	.globl _AX5043_FIFOFREE0NB
                            541 	.globl _AX5043_FIFODATANB
                            542 	.globl _AX5043_FIFOCOUNT1NB
                            543 	.globl _AX5043_FIFOCOUNT0NB
                            544 	.globl _AX5043_FECSYNCNB
                            545 	.globl _AX5043_FECSTATUSNB
                            546 	.globl _AX5043_FECNB
                            547 	.globl _AX5043_ENCODINGNB
                            548 	.globl _AX5043_DIVERSITYNB
                            549 	.globl _AX5043_DECIMATIONNB
                            550 	.globl _AX5043_DACVALUE1NB
                            551 	.globl _AX5043_DACVALUE0NB
                            552 	.globl _AX5043_DACCONFIGNB
                            553 	.globl _AX5043_CRCINIT3NB
                            554 	.globl _AX5043_CRCINIT2NB
                            555 	.globl _AX5043_CRCINIT1NB
                            556 	.globl _AX5043_CRCINIT0NB
                            557 	.globl _AX5043_BGNDRSSITHRNB
                            558 	.globl _AX5043_BGNDRSSIGAINNB
                            559 	.globl _AX5043_BGNDRSSINB
                            560 	.globl _AX5043_BBTUNENB
                            561 	.globl _AX5043_BBOFFSCAPNB
                            562 	.globl _AX5043_AMPLFILTERNB
                            563 	.globl _AX5043_AGCCOUNTERNB
                            564 	.globl _AX5043_AFSKSPACE1NB
                            565 	.globl _AX5043_AFSKSPACE0NB
                            566 	.globl _AX5043_AFSKMARK1NB
                            567 	.globl _AX5043_AFSKMARK0NB
                            568 	.globl _AX5043_AFSKCTRLNB
                            569 	.globl _AX5043_TIMEGAIN3
                            570 	.globl _AX5043_TIMEGAIN2
                            571 	.globl _AX5043_TIMEGAIN1
                            572 	.globl _AX5043_TIMEGAIN0
                            573 	.globl _AX5043_RXPARAMSETS
                            574 	.globl _AX5043_RXPARAMCURSET
                            575 	.globl _AX5043_PKTMAXLEN
                            576 	.globl _AX5043_PKTLENOFFSET
                            577 	.globl _AX5043_PKTLENCFG
                            578 	.globl _AX5043_PKTADDRMASK3
                            579 	.globl _AX5043_PKTADDRMASK2
                            580 	.globl _AX5043_PKTADDRMASK1
                            581 	.globl _AX5043_PKTADDRMASK0
                            582 	.globl _AX5043_PKTADDRCFG
                            583 	.globl _AX5043_PKTADDR3
                            584 	.globl _AX5043_PKTADDR2
                            585 	.globl _AX5043_PKTADDR1
                            586 	.globl _AX5043_PKTADDR0
                            587 	.globl _AX5043_PHASEGAIN3
                            588 	.globl _AX5043_PHASEGAIN2
                            589 	.globl _AX5043_PHASEGAIN1
                            590 	.globl _AX5043_PHASEGAIN0
                            591 	.globl _AX5043_FREQUENCYLEAK
                            592 	.globl _AX5043_FREQUENCYGAIND3
                            593 	.globl _AX5043_FREQUENCYGAIND2
                            594 	.globl _AX5043_FREQUENCYGAIND1
                            595 	.globl _AX5043_FREQUENCYGAIND0
                            596 	.globl _AX5043_FREQUENCYGAINC3
                            597 	.globl _AX5043_FREQUENCYGAINC2
                            598 	.globl _AX5043_FREQUENCYGAINC1
                            599 	.globl _AX5043_FREQUENCYGAINC0
                            600 	.globl _AX5043_FREQUENCYGAINB3
                            601 	.globl _AX5043_FREQUENCYGAINB2
                            602 	.globl _AX5043_FREQUENCYGAINB1
                            603 	.globl _AX5043_FREQUENCYGAINB0
                            604 	.globl _AX5043_FREQUENCYGAINA3
                            605 	.globl _AX5043_FREQUENCYGAINA2
                            606 	.globl _AX5043_FREQUENCYGAINA1
                            607 	.globl _AX5043_FREQUENCYGAINA0
                            608 	.globl _AX5043_FREQDEV13
                            609 	.globl _AX5043_FREQDEV12
                            610 	.globl _AX5043_FREQDEV11
                            611 	.globl _AX5043_FREQDEV10
                            612 	.globl _AX5043_FREQDEV03
                            613 	.globl _AX5043_FREQDEV02
                            614 	.globl _AX5043_FREQDEV01
                            615 	.globl _AX5043_FREQDEV00
                            616 	.globl _AX5043_FOURFSK3
                            617 	.globl _AX5043_FOURFSK2
                            618 	.globl _AX5043_FOURFSK1
                            619 	.globl _AX5043_FOURFSK0
                            620 	.globl _AX5043_DRGAIN3
                            621 	.globl _AX5043_DRGAIN2
                            622 	.globl _AX5043_DRGAIN1
                            623 	.globl _AX5043_DRGAIN0
                            624 	.globl _AX5043_BBOFFSRES3
                            625 	.globl _AX5043_BBOFFSRES2
                            626 	.globl _AX5043_BBOFFSRES1
                            627 	.globl _AX5043_BBOFFSRES0
                            628 	.globl _AX5043_AMPLITUDEGAIN3
                            629 	.globl _AX5043_AMPLITUDEGAIN2
                            630 	.globl _AX5043_AMPLITUDEGAIN1
                            631 	.globl _AX5043_AMPLITUDEGAIN0
                            632 	.globl _AX5043_AGCTARGET3
                            633 	.globl _AX5043_AGCTARGET2
                            634 	.globl _AX5043_AGCTARGET1
                            635 	.globl _AX5043_AGCTARGET0
                            636 	.globl _AX5043_AGCMINMAX3
                            637 	.globl _AX5043_AGCMINMAX2
                            638 	.globl _AX5043_AGCMINMAX1
                            639 	.globl _AX5043_AGCMINMAX0
                            640 	.globl _AX5043_AGCGAIN3
                            641 	.globl _AX5043_AGCGAIN2
                            642 	.globl _AX5043_AGCGAIN1
                            643 	.globl _AX5043_AGCGAIN0
                            644 	.globl _AX5043_AGCAHYST3
                            645 	.globl _AX5043_AGCAHYST2
                            646 	.globl _AX5043_AGCAHYST1
                            647 	.globl _AX5043_AGCAHYST0
                            648 	.globl _AX5043_XTALSTATUS
                            649 	.globl _AX5043_XTALCAP
                            650 	.globl _AX5043_WAKEUPXOEARLY
                            651 	.globl _AX5043_WAKEUPTIMER1
                            652 	.globl _AX5043_WAKEUPTIMER0
                            653 	.globl _AX5043_WAKEUPFREQ1
                            654 	.globl _AX5043_WAKEUPFREQ0
                            655 	.globl _AX5043_WAKEUP1
                            656 	.globl _AX5043_WAKEUP0
                            657 	.globl _AX5043_TXRATE2
                            658 	.globl _AX5043_TXRATE1
                            659 	.globl _AX5043_TXRATE0
                            660 	.globl _AX5043_TXPWRCOEFFE1
                            661 	.globl _AX5043_TXPWRCOEFFE0
                            662 	.globl _AX5043_TXPWRCOEFFD1
                            663 	.globl _AX5043_TXPWRCOEFFD0
                            664 	.globl _AX5043_TXPWRCOEFFC1
                            665 	.globl _AX5043_TXPWRCOEFFC0
                            666 	.globl _AX5043_TXPWRCOEFFB1
                            667 	.globl _AX5043_TXPWRCOEFFB0
                            668 	.globl _AX5043_TXPWRCOEFFA1
                            669 	.globl _AX5043_TXPWRCOEFFA0
                            670 	.globl _AX5043_TRKRFFREQ2
                            671 	.globl _AX5043_TRKRFFREQ1
                            672 	.globl _AX5043_TRKRFFREQ0
                            673 	.globl _AX5043_TRKPHASE1
                            674 	.globl _AX5043_TRKPHASE0
                            675 	.globl _AX5043_TRKFSKDEMOD1
                            676 	.globl _AX5043_TRKFSKDEMOD0
                            677 	.globl _AX5043_TRKFREQ1
                            678 	.globl _AX5043_TRKFREQ0
                            679 	.globl _AX5043_TRKDATARATE2
                            680 	.globl _AX5043_TRKDATARATE1
                            681 	.globl _AX5043_TRKDATARATE0
                            682 	.globl _AX5043_TRKAMPLITUDE1
                            683 	.globl _AX5043_TRKAMPLITUDE0
                            684 	.globl _AX5043_TRKAFSKDEMOD1
                            685 	.globl _AX5043_TRKAFSKDEMOD0
                            686 	.globl _AX5043_TMGTXSETTLE
                            687 	.globl _AX5043_TMGTXBOOST
                            688 	.globl _AX5043_TMGRXSETTLE
                            689 	.globl _AX5043_TMGRXRSSI
                            690 	.globl _AX5043_TMGRXPREAMBLE3
                            691 	.globl _AX5043_TMGRXPREAMBLE2
                            692 	.globl _AX5043_TMGRXPREAMBLE1
                            693 	.globl _AX5043_TMGRXOFFSACQ
                            694 	.globl _AX5043_TMGRXCOARSEAGC
                            695 	.globl _AX5043_TMGRXBOOST
                            696 	.globl _AX5043_TMGRXAGC
                            697 	.globl _AX5043_TIMER2
                            698 	.globl _AX5043_TIMER1
                            699 	.globl _AX5043_TIMER0
                            700 	.globl _AX5043_SILICONREVISION
                            701 	.globl _AX5043_SCRATCH
                            702 	.globl _AX5043_RXDATARATE2
                            703 	.globl _AX5043_RXDATARATE1
                            704 	.globl _AX5043_RXDATARATE0
                            705 	.globl _AX5043_RSSIREFERENCE
                            706 	.globl _AX5043_RSSIABSTHR
                            707 	.globl _AX5043_RSSI
                            708 	.globl _AX5043_RADIOSTATE
                            709 	.globl _AX5043_RADIOEVENTREQ1
                            710 	.globl _AX5043_RADIOEVENTREQ0
                            711 	.globl _AX5043_RADIOEVENTMASK1
                            712 	.globl _AX5043_RADIOEVENTMASK0
                            713 	.globl _AX5043_PWRMODE
                            714 	.globl _AX5043_PWRAMP
                            715 	.globl _AX5043_POWSTICKYSTAT
                            716 	.globl _AX5043_POWSTAT
                            717 	.globl _AX5043_POWIRQMASK
                            718 	.globl _AX5043_PLLVCOIR
                            719 	.globl _AX5043_PLLVCOI
                            720 	.globl _AX5043_PLLVCODIV
                            721 	.globl _AX5043_PLLRNGCLK
                            722 	.globl _AX5043_PLLRANGINGB
                            723 	.globl _AX5043_PLLRANGINGA
                            724 	.globl _AX5043_PLLLOOPBOOST
                            725 	.globl _AX5043_PLLLOOP
                            726 	.globl _AX5043_PLLLOCKDET
                            727 	.globl _AX5043_PLLCPIBOOST
                            728 	.globl _AX5043_PLLCPI
                            729 	.globl _AX5043_PKTSTOREFLAGS
                            730 	.globl _AX5043_PKTMISCFLAGS
                            731 	.globl _AX5043_PKTCHUNKSIZE
                            732 	.globl _AX5043_PKTACCEPTFLAGS
                            733 	.globl _AX5043_PINSTATE
                            734 	.globl _AX5043_PINFUNCSYSCLK
                            735 	.globl _AX5043_PINFUNCPWRAMP
                            736 	.globl _AX5043_PINFUNCIRQ
                            737 	.globl _AX5043_PINFUNCDCLK
                            738 	.globl _AX5043_PINFUNCDATA
                            739 	.globl _AX5043_PINFUNCANTSEL
                            740 	.globl _AX5043_MODULATION
                            741 	.globl _AX5043_MODCFGF
                            742 	.globl _AX5043_MODCFGA
                            743 	.globl _AX5043_MAXRFOFFSET2
                            744 	.globl _AX5043_MAXRFOFFSET1
                            745 	.globl _AX5043_MAXRFOFFSET0
                            746 	.globl _AX5043_MAXDROFFSET2
                            747 	.globl _AX5043_MAXDROFFSET1
                            748 	.globl _AX5043_MAXDROFFSET0
                            749 	.globl _AX5043_MATCH1PAT1
                            750 	.globl _AX5043_MATCH1PAT0
                            751 	.globl _AX5043_MATCH1MIN
                            752 	.globl _AX5043_MATCH1MAX
                            753 	.globl _AX5043_MATCH1LEN
                            754 	.globl _AX5043_MATCH0PAT3
                            755 	.globl _AX5043_MATCH0PAT2
                            756 	.globl _AX5043_MATCH0PAT1
                            757 	.globl _AX5043_MATCH0PAT0
                            758 	.globl _AX5043_MATCH0MIN
                            759 	.globl _AX5043_MATCH0MAX
                            760 	.globl _AX5043_MATCH0LEN
                            761 	.globl _AX5043_LPOSCSTATUS
                            762 	.globl _AX5043_LPOSCREF1
                            763 	.globl _AX5043_LPOSCREF0
                            764 	.globl _AX5043_LPOSCPER1
                            765 	.globl _AX5043_LPOSCPER0
                            766 	.globl _AX5043_LPOSCKFILT1
                            767 	.globl _AX5043_LPOSCKFILT0
                            768 	.globl _AX5043_LPOSCFREQ1
                            769 	.globl _AX5043_LPOSCFREQ0
                            770 	.globl _AX5043_LPOSCCONFIG
                            771 	.globl _AX5043_IRQREQUEST1
                            772 	.globl _AX5043_IRQREQUEST0
                            773 	.globl _AX5043_IRQMASK1
                            774 	.globl _AX5043_IRQMASK0
                            775 	.globl _AX5043_IRQINVERSION1
                            776 	.globl _AX5043_IRQINVERSION0
                            777 	.globl _AX5043_IFFREQ1
                            778 	.globl _AX5043_IFFREQ0
                            779 	.globl _AX5043_GPADCPERIOD
                            780 	.globl _AX5043_GPADCCTRL
                            781 	.globl _AX5043_GPADC13VALUE1
                            782 	.globl _AX5043_GPADC13VALUE0
                            783 	.globl _AX5043_FSKDMIN1
                            784 	.globl _AX5043_FSKDMIN0
                            785 	.globl _AX5043_FSKDMAX1
                            786 	.globl _AX5043_FSKDMAX0
                            787 	.globl _AX5043_FSKDEV2
                            788 	.globl _AX5043_FSKDEV1
                            789 	.globl _AX5043_FSKDEV0
                            790 	.globl _AX5043_FREQB3
                            791 	.globl _AX5043_FREQB2
                            792 	.globl _AX5043_FREQB1
                            793 	.globl _AX5043_FREQB0
                            794 	.globl _AX5043_FREQA3
                            795 	.globl _AX5043_FREQA2
                            796 	.globl _AX5043_FREQA1
                            797 	.globl _AX5043_FREQA0
                            798 	.globl _AX5043_FRAMING
                            799 	.globl _AX5043_FIFOTHRESH1
                            800 	.globl _AX5043_FIFOTHRESH0
                            801 	.globl _AX5043_FIFOSTAT
                            802 	.globl _AX5043_FIFOFREE1
                            803 	.globl _AX5043_FIFOFREE0
                            804 	.globl _AX5043_FIFODATA
                            805 	.globl _AX5043_FIFOCOUNT1
                            806 	.globl _AX5043_FIFOCOUNT0
                            807 	.globl _AX5043_FECSYNC
                            808 	.globl _AX5043_FECSTATUS
                            809 	.globl _AX5043_FEC
                            810 	.globl _AX5043_ENCODING
                            811 	.globl _AX5043_DIVERSITY
                            812 	.globl _AX5043_DECIMATION
                            813 	.globl _AX5043_DACVALUE1
                            814 	.globl _AX5043_DACVALUE0
                            815 	.globl _AX5043_DACCONFIG
                            816 	.globl _AX5043_CRCINIT3
                            817 	.globl _AX5043_CRCINIT2
                            818 	.globl _AX5043_CRCINIT1
                            819 	.globl _AX5043_CRCINIT0
                            820 	.globl _AX5043_BGNDRSSITHR
                            821 	.globl _AX5043_BGNDRSSIGAIN
                            822 	.globl _AX5043_BGNDRSSI
                            823 	.globl _AX5043_BBTUNE
                            824 	.globl _AX5043_BBOFFSCAP
                            825 	.globl _AX5043_AMPLFILTER
                            826 	.globl _AX5043_AGCCOUNTER
                            827 	.globl _AX5043_AFSKSPACE1
                            828 	.globl _AX5043_AFSKSPACE0
                            829 	.globl _AX5043_AFSKMARK1
                            830 	.globl _AX5043_AFSKMARK0
                            831 	.globl _AX5043_AFSKCTRL
                            832 	.globl _XWTSTAT
                            833 	.globl _XWTIRQEN
                            834 	.globl _XWTEVTD
                            835 	.globl _XWTEVTD1
                            836 	.globl _XWTEVTD0
                            837 	.globl _XWTEVTC
                            838 	.globl _XWTEVTC1
                            839 	.globl _XWTEVTC0
                            840 	.globl _XWTEVTB
                            841 	.globl _XWTEVTB1
                            842 	.globl _XWTEVTB0
                            843 	.globl _XWTEVTA
                            844 	.globl _XWTEVTA1
                            845 	.globl _XWTEVTA0
                            846 	.globl _XWTCNTR1
                            847 	.globl _XWTCNTB
                            848 	.globl _XWTCNTB1
                            849 	.globl _XWTCNTB0
                            850 	.globl _XWTCNTA
                            851 	.globl _XWTCNTA1
                            852 	.globl _XWTCNTA0
                            853 	.globl _XWTCFGB
                            854 	.globl _XWTCFGA
                            855 	.globl _XWDTRESET
                            856 	.globl _XWDTCFG
                            857 	.globl _XU1STATUS
                            858 	.globl _XU1SHREG
                            859 	.globl _XU1MODE
                            860 	.globl _XU1CTRL
                            861 	.globl _XU0STATUS
                            862 	.globl _XU0SHREG
                            863 	.globl _XU0MODE
                            864 	.globl _XU0CTRL
                            865 	.globl _XT2STATUS
                            866 	.globl _XT2PERIOD
                            867 	.globl _XT2PERIOD1
                            868 	.globl _XT2PERIOD0
                            869 	.globl _XT2MODE
                            870 	.globl _XT2CNT
                            871 	.globl _XT2CNT1
                            872 	.globl _XT2CNT0
                            873 	.globl _XT2CLKSRC
                            874 	.globl _XT1STATUS
                            875 	.globl _XT1PERIOD
                            876 	.globl _XT1PERIOD1
                            877 	.globl _XT1PERIOD0
                            878 	.globl _XT1MODE
                            879 	.globl _XT1CNT
                            880 	.globl _XT1CNT1
                            881 	.globl _XT1CNT0
                            882 	.globl _XT1CLKSRC
                            883 	.globl _XT0STATUS
                            884 	.globl _XT0PERIOD
                            885 	.globl _XT0PERIOD1
                            886 	.globl _XT0PERIOD0
                            887 	.globl _XT0MODE
                            888 	.globl _XT0CNT
                            889 	.globl _XT0CNT1
                            890 	.globl _XT0CNT0
                            891 	.globl _XT0CLKSRC
                            892 	.globl _XSPSTATUS
                            893 	.globl _XSPSHREG
                            894 	.globl _XSPMODE
                            895 	.globl _XSPCLKSRC
                            896 	.globl _XRADIOSTAT
                            897 	.globl _XRADIOSTAT1
                            898 	.globl _XRADIOSTAT0
                            899 	.globl _XRADIODATA3
                            900 	.globl _XRADIODATA2
                            901 	.globl _XRADIODATA1
                            902 	.globl _XRADIODATA0
                            903 	.globl _XRADIOADDR1
                            904 	.globl _XRADIOADDR0
                            905 	.globl _XRADIOACC
                            906 	.globl _XOC1STATUS
                            907 	.globl _XOC1PIN
                            908 	.globl _XOC1MODE
                            909 	.globl _XOC1COMP
                            910 	.globl _XOC1COMP1
                            911 	.globl _XOC1COMP0
                            912 	.globl _XOC0STATUS
                            913 	.globl _XOC0PIN
                            914 	.globl _XOC0MODE
                            915 	.globl _XOC0COMP
                            916 	.globl _XOC0COMP1
                            917 	.globl _XOC0COMP0
                            918 	.globl _XNVSTATUS
                            919 	.globl _XNVKEY
                            920 	.globl _XNVDATA
                            921 	.globl _XNVDATA1
                            922 	.globl _XNVDATA0
                            923 	.globl _XNVADDR
                            924 	.globl _XNVADDR1
                            925 	.globl _XNVADDR0
                            926 	.globl _XIC1STATUS
                            927 	.globl _XIC1MODE
                            928 	.globl _XIC1CAPT
                            929 	.globl _XIC1CAPT1
                            930 	.globl _XIC1CAPT0
                            931 	.globl _XIC0STATUS
                            932 	.globl _XIC0MODE
                            933 	.globl _XIC0CAPT
                            934 	.globl _XIC0CAPT1
                            935 	.globl _XIC0CAPT0
                            936 	.globl _XPORTR
                            937 	.globl _XPORTC
                            938 	.globl _XPORTB
                            939 	.globl _XPORTA
                            940 	.globl _XPINR
                            941 	.globl _XPINC
                            942 	.globl _XPINB
                            943 	.globl _XPINA
                            944 	.globl _XDIRR
                            945 	.globl _XDIRC
                            946 	.globl _XDIRB
                            947 	.globl _XDIRA
                            948 	.globl _XDBGLNKSTAT
                            949 	.globl _XDBGLNKBUF
                            950 	.globl _XCODECONFIG
                            951 	.globl _XCLKSTAT
                            952 	.globl _XCLKCON
                            953 	.globl _XANALOGCOMP
                            954 	.globl _XADCCONV
                            955 	.globl _XADCCLKSRC
                            956 	.globl _XADCCH3CONFIG
                            957 	.globl _XADCCH2CONFIG
                            958 	.globl _XADCCH1CONFIG
                            959 	.globl _XADCCH0CONFIG
                            960 	.globl _XPCON
                            961 	.globl _XIP
                            962 	.globl _XIE
                            963 	.globl _XDPTR1
                            964 	.globl _XDPTR0
                            965 	.globl _XTALREADY
                            966 	.globl _XTALOSC
                            967 	.globl _XTALAMPL
                            968 	.globl _SILICONREV
                            969 	.globl _SCRATCH3
                            970 	.globl _SCRATCH2
                            971 	.globl _SCRATCH1
                            972 	.globl _SCRATCH0
                            973 	.globl _RADIOMUX
                            974 	.globl _RADIOFSTATADDR
                            975 	.globl _RADIOFSTATADDR1
                            976 	.globl _RADIOFSTATADDR0
                            977 	.globl _RADIOFDATAADDR
                            978 	.globl _RADIOFDATAADDR1
                            979 	.globl _RADIOFDATAADDR0
                            980 	.globl _OSCRUN
                            981 	.globl _OSCREADY
                            982 	.globl _OSCFORCERUN
                            983 	.globl _OSCCALIB
                            984 	.globl _MISCCTRL
                            985 	.globl _LPXOSCGM
                            986 	.globl _LPOSCREF
                            987 	.globl _LPOSCREF1
                            988 	.globl _LPOSCREF0
                            989 	.globl _LPOSCPER
                            990 	.globl _LPOSCPER1
                            991 	.globl _LPOSCPER0
                            992 	.globl _LPOSCKFILT
                            993 	.globl _LPOSCKFILT1
                            994 	.globl _LPOSCKFILT0
                            995 	.globl _LPOSCFREQ
                            996 	.globl _LPOSCFREQ1
                            997 	.globl _LPOSCFREQ0
                            998 	.globl _LPOSCCONFIG
                            999 	.globl _PINSEL
                           1000 	.globl _PINCHGC
                           1001 	.globl _PINCHGB
                           1002 	.globl _PINCHGA
                           1003 	.globl _PALTRADIO
                           1004 	.globl _PALTC
                           1005 	.globl _PALTB
                           1006 	.globl _PALTA
                           1007 	.globl _INTCHGC
                           1008 	.globl _INTCHGB
                           1009 	.globl _INTCHGA
                           1010 	.globl _EXTIRQ
                           1011 	.globl _GPIOENABLE
                           1012 	.globl _ANALOGA
                           1013 	.globl _FRCOSCREF
                           1014 	.globl _FRCOSCREF1
                           1015 	.globl _FRCOSCREF0
                           1016 	.globl _FRCOSCPER
                           1017 	.globl _FRCOSCPER1
                           1018 	.globl _FRCOSCPER0
                           1019 	.globl _FRCOSCKFILT
                           1020 	.globl _FRCOSCKFILT1
                           1021 	.globl _FRCOSCKFILT0
                           1022 	.globl _FRCOSCFREQ
                           1023 	.globl _FRCOSCFREQ1
                           1024 	.globl _FRCOSCFREQ0
                           1025 	.globl _FRCOSCCTRL
                           1026 	.globl _FRCOSCCONFIG
                           1027 	.globl _DMA1CONFIG
                           1028 	.globl _DMA1ADDR
                           1029 	.globl _DMA1ADDR1
                           1030 	.globl _DMA1ADDR0
                           1031 	.globl _DMA0CONFIG
                           1032 	.globl _DMA0ADDR
                           1033 	.globl _DMA0ADDR1
                           1034 	.globl _DMA0ADDR0
                           1035 	.globl _ADCTUNE2
                           1036 	.globl _ADCTUNE1
                           1037 	.globl _ADCTUNE0
                           1038 	.globl _ADCCH3VAL
                           1039 	.globl _ADCCH3VAL1
                           1040 	.globl _ADCCH3VAL0
                           1041 	.globl _ADCCH2VAL
                           1042 	.globl _ADCCH2VAL1
                           1043 	.globl _ADCCH2VAL0
                           1044 	.globl _ADCCH1VAL
                           1045 	.globl _ADCCH1VAL1
                           1046 	.globl _ADCCH1VAL0
                           1047 	.globl _ADCCH0VAL
                           1048 	.globl _ADCCH0VAL1
                           1049 	.globl _ADCCH0VAL0
                           1050 	.globl _calibrate_lposc
                           1051 ;--------------------------------------------------------
                           1052 ; special function registers
                           1053 ;--------------------------------------------------------
                           1054 	.area RSEG    (ABS,DATA)
   0000                    1055 	.org 0x0000
                    00E0   1056 G$ACC$0$0 == 0x00e0
                    00E0   1057 _ACC	=	0x00e0
                    00F0   1058 G$B$0$0 == 0x00f0
                    00F0   1059 _B	=	0x00f0
                    0083   1060 G$DPH$0$0 == 0x0083
                    0083   1061 _DPH	=	0x0083
                    0085   1062 G$DPH1$0$0 == 0x0085
                    0085   1063 _DPH1	=	0x0085
                    0082   1064 G$DPL$0$0 == 0x0082
                    0082   1065 _DPL	=	0x0082
                    0084   1066 G$DPL1$0$0 == 0x0084
                    0084   1067 _DPL1	=	0x0084
                    8382   1068 G$DPTR0$0$0 == 0x8382
                    8382   1069 _DPTR0	=	0x8382
                    8584   1070 G$DPTR1$0$0 == 0x8584
                    8584   1071 _DPTR1	=	0x8584
                    0086   1072 G$DPS$0$0 == 0x0086
                    0086   1073 _DPS	=	0x0086
                    00A0   1074 G$E2IE$0$0 == 0x00a0
                    00A0   1075 _E2IE	=	0x00a0
                    00C0   1076 G$E2IP$0$0 == 0x00c0
                    00C0   1077 _E2IP	=	0x00c0
                    0098   1078 G$EIE$0$0 == 0x0098
                    0098   1079 _EIE	=	0x0098
                    00B0   1080 G$EIP$0$0 == 0x00b0
                    00B0   1081 _EIP	=	0x00b0
                    00A8   1082 G$IE$0$0 == 0x00a8
                    00A8   1083 _IE	=	0x00a8
                    00B8   1084 G$IP$0$0 == 0x00b8
                    00B8   1085 _IP	=	0x00b8
                    0087   1086 G$PCON$0$0 == 0x0087
                    0087   1087 _PCON	=	0x0087
                    00D0   1088 G$PSW$0$0 == 0x00d0
                    00D0   1089 _PSW	=	0x00d0
                    0081   1090 G$SP$0$0 == 0x0081
                    0081   1091 _SP	=	0x0081
                    00D9   1092 G$XPAGE$0$0 == 0x00d9
                    00D9   1093 _XPAGE	=	0x00d9
                    00D9   1094 G$_XPAGE$0$0 == 0x00d9
                    00D9   1095 __XPAGE	=	0x00d9
                    00CA   1096 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA   1097 _ADCCH0CONFIG	=	0x00ca
                    00CB   1098 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB   1099 _ADCCH1CONFIG	=	0x00cb
                    00D2   1100 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2   1101 _ADCCH2CONFIG	=	0x00d2
                    00D3   1102 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3   1103 _ADCCH3CONFIG	=	0x00d3
                    00D1   1104 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1   1105 _ADCCLKSRC	=	0x00d1
                    00C9   1106 G$ADCCONV$0$0 == 0x00c9
                    00C9   1107 _ADCCONV	=	0x00c9
                    00E1   1108 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1   1109 _ANALOGCOMP	=	0x00e1
                    00C6   1110 G$CLKCON$0$0 == 0x00c6
                    00C6   1111 _CLKCON	=	0x00c6
                    00C7   1112 G$CLKSTAT$0$0 == 0x00c7
                    00C7   1113 _CLKSTAT	=	0x00c7
                    0097   1114 G$CODECONFIG$0$0 == 0x0097
                    0097   1115 _CODECONFIG	=	0x0097
                    00E3   1116 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3   1117 _DBGLNKBUF	=	0x00e3
                    00E2   1118 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2   1119 _DBGLNKSTAT	=	0x00e2
                    0089   1120 G$DIRA$0$0 == 0x0089
                    0089   1121 _DIRA	=	0x0089
                    008A   1122 G$DIRB$0$0 == 0x008a
                    008A   1123 _DIRB	=	0x008a
                    008B   1124 G$DIRC$0$0 == 0x008b
                    008B   1125 _DIRC	=	0x008b
                    008E   1126 G$DIRR$0$0 == 0x008e
                    008E   1127 _DIRR	=	0x008e
                    00C8   1128 G$PINA$0$0 == 0x00c8
                    00C8   1129 _PINA	=	0x00c8
                    00E8   1130 G$PINB$0$0 == 0x00e8
                    00E8   1131 _PINB	=	0x00e8
                    00F8   1132 G$PINC$0$0 == 0x00f8
                    00F8   1133 _PINC	=	0x00f8
                    008D   1134 G$PINR$0$0 == 0x008d
                    008D   1135 _PINR	=	0x008d
                    0080   1136 G$PORTA$0$0 == 0x0080
                    0080   1137 _PORTA	=	0x0080
                    0088   1138 G$PORTB$0$0 == 0x0088
                    0088   1139 _PORTB	=	0x0088
                    0090   1140 G$PORTC$0$0 == 0x0090
                    0090   1141 _PORTC	=	0x0090
                    008C   1142 G$PORTR$0$0 == 0x008c
                    008C   1143 _PORTR	=	0x008c
                    00CE   1144 G$IC0CAPT0$0$0 == 0x00ce
                    00CE   1145 _IC0CAPT0	=	0x00ce
                    00CF   1146 G$IC0CAPT1$0$0 == 0x00cf
                    00CF   1147 _IC0CAPT1	=	0x00cf
                    CFCE   1148 G$IC0CAPT$0$0 == 0xcfce
                    CFCE   1149 _IC0CAPT	=	0xcfce
                    00CC   1150 G$IC0MODE$0$0 == 0x00cc
                    00CC   1151 _IC0MODE	=	0x00cc
                    00CD   1152 G$IC0STATUS$0$0 == 0x00cd
                    00CD   1153 _IC0STATUS	=	0x00cd
                    00D6   1154 G$IC1CAPT0$0$0 == 0x00d6
                    00D6   1155 _IC1CAPT0	=	0x00d6
                    00D7   1156 G$IC1CAPT1$0$0 == 0x00d7
                    00D7   1157 _IC1CAPT1	=	0x00d7
                    D7D6   1158 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6   1159 _IC1CAPT	=	0xd7d6
                    00D4   1160 G$IC1MODE$0$0 == 0x00d4
                    00D4   1161 _IC1MODE	=	0x00d4
                    00D5   1162 G$IC1STATUS$0$0 == 0x00d5
                    00D5   1163 _IC1STATUS	=	0x00d5
                    0092   1164 G$NVADDR0$0$0 == 0x0092
                    0092   1165 _NVADDR0	=	0x0092
                    0093   1166 G$NVADDR1$0$0 == 0x0093
                    0093   1167 _NVADDR1	=	0x0093
                    9392   1168 G$NVADDR$0$0 == 0x9392
                    9392   1169 _NVADDR	=	0x9392
                    0094   1170 G$NVDATA0$0$0 == 0x0094
                    0094   1171 _NVDATA0	=	0x0094
                    0095   1172 G$NVDATA1$0$0 == 0x0095
                    0095   1173 _NVDATA1	=	0x0095
                    9594   1174 G$NVDATA$0$0 == 0x9594
                    9594   1175 _NVDATA	=	0x9594
                    0096   1176 G$NVKEY$0$0 == 0x0096
                    0096   1177 _NVKEY	=	0x0096
                    0091   1178 G$NVSTATUS$0$0 == 0x0091
                    0091   1179 _NVSTATUS	=	0x0091
                    00BC   1180 G$OC0COMP0$0$0 == 0x00bc
                    00BC   1181 _OC0COMP0	=	0x00bc
                    00BD   1182 G$OC0COMP1$0$0 == 0x00bd
                    00BD   1183 _OC0COMP1	=	0x00bd
                    BDBC   1184 G$OC0COMP$0$0 == 0xbdbc
                    BDBC   1185 _OC0COMP	=	0xbdbc
                    00B9   1186 G$OC0MODE$0$0 == 0x00b9
                    00B9   1187 _OC0MODE	=	0x00b9
                    00BA   1188 G$OC0PIN$0$0 == 0x00ba
                    00BA   1189 _OC0PIN	=	0x00ba
                    00BB   1190 G$OC0STATUS$0$0 == 0x00bb
                    00BB   1191 _OC0STATUS	=	0x00bb
                    00C4   1192 G$OC1COMP0$0$0 == 0x00c4
                    00C4   1193 _OC1COMP0	=	0x00c4
                    00C5   1194 G$OC1COMP1$0$0 == 0x00c5
                    00C5   1195 _OC1COMP1	=	0x00c5
                    C5C4   1196 G$OC1COMP$0$0 == 0xc5c4
                    C5C4   1197 _OC1COMP	=	0xc5c4
                    00C1   1198 G$OC1MODE$0$0 == 0x00c1
                    00C1   1199 _OC1MODE	=	0x00c1
                    00C2   1200 G$OC1PIN$0$0 == 0x00c2
                    00C2   1201 _OC1PIN	=	0x00c2
                    00C3   1202 G$OC1STATUS$0$0 == 0x00c3
                    00C3   1203 _OC1STATUS	=	0x00c3
                    00B1   1204 G$RADIOACC$0$0 == 0x00b1
                    00B1   1205 _RADIOACC	=	0x00b1
                    00B3   1206 G$RADIOADDR0$0$0 == 0x00b3
                    00B3   1207 _RADIOADDR0	=	0x00b3
                    00B2   1208 G$RADIOADDR1$0$0 == 0x00b2
                    00B2   1209 _RADIOADDR1	=	0x00b2
                    B2B3   1210 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3   1211 _RADIOADDR	=	0xb2b3
                    00B7   1212 G$RADIODATA0$0$0 == 0x00b7
                    00B7   1213 _RADIODATA0	=	0x00b7
                    00B6   1214 G$RADIODATA1$0$0 == 0x00b6
                    00B6   1215 _RADIODATA1	=	0x00b6
                    00B5   1216 G$RADIODATA2$0$0 == 0x00b5
                    00B5   1217 _RADIODATA2	=	0x00b5
                    00B4   1218 G$RADIODATA3$0$0 == 0x00b4
                    00B4   1219 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1220 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7   1221 _RADIODATA	=	0xb4b5b6b7
                    00BE   1222 G$RADIOSTAT0$0$0 == 0x00be
                    00BE   1223 _RADIOSTAT0	=	0x00be
                    00BF   1224 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF   1225 _RADIOSTAT1	=	0x00bf
                    BFBE   1226 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE   1227 _RADIOSTAT	=	0xbfbe
                    00DF   1228 G$SPCLKSRC$0$0 == 0x00df
                    00DF   1229 _SPCLKSRC	=	0x00df
                    00DC   1230 G$SPMODE$0$0 == 0x00dc
                    00DC   1231 _SPMODE	=	0x00dc
                    00DE   1232 G$SPSHREG$0$0 == 0x00de
                    00DE   1233 _SPSHREG	=	0x00de
                    00DD   1234 G$SPSTATUS$0$0 == 0x00dd
                    00DD   1235 _SPSTATUS	=	0x00dd
                    009A   1236 G$T0CLKSRC$0$0 == 0x009a
                    009A   1237 _T0CLKSRC	=	0x009a
                    009C   1238 G$T0CNT0$0$0 == 0x009c
                    009C   1239 _T0CNT0	=	0x009c
                    009D   1240 G$T0CNT1$0$0 == 0x009d
                    009D   1241 _T0CNT1	=	0x009d
                    9D9C   1242 G$T0CNT$0$0 == 0x9d9c
                    9D9C   1243 _T0CNT	=	0x9d9c
                    0099   1244 G$T0MODE$0$0 == 0x0099
                    0099   1245 _T0MODE	=	0x0099
                    009E   1246 G$T0PERIOD0$0$0 == 0x009e
                    009E   1247 _T0PERIOD0	=	0x009e
                    009F   1248 G$T0PERIOD1$0$0 == 0x009f
                    009F   1249 _T0PERIOD1	=	0x009f
                    9F9E   1250 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E   1251 _T0PERIOD	=	0x9f9e
                    009B   1252 G$T0STATUS$0$0 == 0x009b
                    009B   1253 _T0STATUS	=	0x009b
                    00A2   1254 G$T1CLKSRC$0$0 == 0x00a2
                    00A2   1255 _T1CLKSRC	=	0x00a2
                    00A4   1256 G$T1CNT0$0$0 == 0x00a4
                    00A4   1257 _T1CNT0	=	0x00a4
                    00A5   1258 G$T1CNT1$0$0 == 0x00a5
                    00A5   1259 _T1CNT1	=	0x00a5
                    A5A4   1260 G$T1CNT$0$0 == 0xa5a4
                    A5A4   1261 _T1CNT	=	0xa5a4
                    00A1   1262 G$T1MODE$0$0 == 0x00a1
                    00A1   1263 _T1MODE	=	0x00a1
                    00A6   1264 G$T1PERIOD0$0$0 == 0x00a6
                    00A6   1265 _T1PERIOD0	=	0x00a6
                    00A7   1266 G$T1PERIOD1$0$0 == 0x00a7
                    00A7   1267 _T1PERIOD1	=	0x00a7
                    A7A6   1268 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6   1269 _T1PERIOD	=	0xa7a6
                    00A3   1270 G$T1STATUS$0$0 == 0x00a3
                    00A3   1271 _T1STATUS	=	0x00a3
                    00AA   1272 G$T2CLKSRC$0$0 == 0x00aa
                    00AA   1273 _T2CLKSRC	=	0x00aa
                    00AC   1274 G$T2CNT0$0$0 == 0x00ac
                    00AC   1275 _T2CNT0	=	0x00ac
                    00AD   1276 G$T2CNT1$0$0 == 0x00ad
                    00AD   1277 _T2CNT1	=	0x00ad
                    ADAC   1278 G$T2CNT$0$0 == 0xadac
                    ADAC   1279 _T2CNT	=	0xadac
                    00A9   1280 G$T2MODE$0$0 == 0x00a9
                    00A9   1281 _T2MODE	=	0x00a9
                    00AE   1282 G$T2PERIOD0$0$0 == 0x00ae
                    00AE   1283 _T2PERIOD0	=	0x00ae
                    00AF   1284 G$T2PERIOD1$0$0 == 0x00af
                    00AF   1285 _T2PERIOD1	=	0x00af
                    AFAE   1286 G$T2PERIOD$0$0 == 0xafae
                    AFAE   1287 _T2PERIOD	=	0xafae
                    00AB   1288 G$T2STATUS$0$0 == 0x00ab
                    00AB   1289 _T2STATUS	=	0x00ab
                    00E4   1290 G$U0CTRL$0$0 == 0x00e4
                    00E4   1291 _U0CTRL	=	0x00e4
                    00E7   1292 G$U0MODE$0$0 == 0x00e7
                    00E7   1293 _U0MODE	=	0x00e7
                    00E6   1294 G$U0SHREG$0$0 == 0x00e6
                    00E6   1295 _U0SHREG	=	0x00e6
                    00E5   1296 G$U0STATUS$0$0 == 0x00e5
                    00E5   1297 _U0STATUS	=	0x00e5
                    00EC   1298 G$U1CTRL$0$0 == 0x00ec
                    00EC   1299 _U1CTRL	=	0x00ec
                    00EF   1300 G$U1MODE$0$0 == 0x00ef
                    00EF   1301 _U1MODE	=	0x00ef
                    00EE   1302 G$U1SHREG$0$0 == 0x00ee
                    00EE   1303 _U1SHREG	=	0x00ee
                    00ED   1304 G$U1STATUS$0$0 == 0x00ed
                    00ED   1305 _U1STATUS	=	0x00ed
                    00DA   1306 G$WDTCFG$0$0 == 0x00da
                    00DA   1307 _WDTCFG	=	0x00da
                    00DB   1308 G$WDTRESET$0$0 == 0x00db
                    00DB   1309 _WDTRESET	=	0x00db
                    00F1   1310 G$WTCFGA$0$0 == 0x00f1
                    00F1   1311 _WTCFGA	=	0x00f1
                    00F9   1312 G$WTCFGB$0$0 == 0x00f9
                    00F9   1313 _WTCFGB	=	0x00f9
                    00F2   1314 G$WTCNTA0$0$0 == 0x00f2
                    00F2   1315 _WTCNTA0	=	0x00f2
                    00F3   1316 G$WTCNTA1$0$0 == 0x00f3
                    00F3   1317 _WTCNTA1	=	0x00f3
                    F3F2   1318 G$WTCNTA$0$0 == 0xf3f2
                    F3F2   1319 _WTCNTA	=	0xf3f2
                    00FA   1320 G$WTCNTB0$0$0 == 0x00fa
                    00FA   1321 _WTCNTB0	=	0x00fa
                    00FB   1322 G$WTCNTB1$0$0 == 0x00fb
                    00FB   1323 _WTCNTB1	=	0x00fb
                    FBFA   1324 G$WTCNTB$0$0 == 0xfbfa
                    FBFA   1325 _WTCNTB	=	0xfbfa
                    00EB   1326 G$WTCNTR1$0$0 == 0x00eb
                    00EB   1327 _WTCNTR1	=	0x00eb
                    00F4   1328 G$WTEVTA0$0$0 == 0x00f4
                    00F4   1329 _WTEVTA0	=	0x00f4
                    00F5   1330 G$WTEVTA1$0$0 == 0x00f5
                    00F5   1331 _WTEVTA1	=	0x00f5
                    F5F4   1332 G$WTEVTA$0$0 == 0xf5f4
                    F5F4   1333 _WTEVTA	=	0xf5f4
                    00F6   1334 G$WTEVTB0$0$0 == 0x00f6
                    00F6   1335 _WTEVTB0	=	0x00f6
                    00F7   1336 G$WTEVTB1$0$0 == 0x00f7
                    00F7   1337 _WTEVTB1	=	0x00f7
                    F7F6   1338 G$WTEVTB$0$0 == 0xf7f6
                    F7F6   1339 _WTEVTB	=	0xf7f6
                    00FC   1340 G$WTEVTC0$0$0 == 0x00fc
                    00FC   1341 _WTEVTC0	=	0x00fc
                    00FD   1342 G$WTEVTC1$0$0 == 0x00fd
                    00FD   1343 _WTEVTC1	=	0x00fd
                    FDFC   1344 G$WTEVTC$0$0 == 0xfdfc
                    FDFC   1345 _WTEVTC	=	0xfdfc
                    00FE   1346 G$WTEVTD0$0$0 == 0x00fe
                    00FE   1347 _WTEVTD0	=	0x00fe
                    00FF   1348 G$WTEVTD1$0$0 == 0x00ff
                    00FF   1349 _WTEVTD1	=	0x00ff
                    FFFE   1350 G$WTEVTD$0$0 == 0xfffe
                    FFFE   1351 _WTEVTD	=	0xfffe
                    00E9   1352 G$WTIRQEN$0$0 == 0x00e9
                    00E9   1353 _WTIRQEN	=	0x00e9
                    00EA   1354 G$WTSTAT$0$0 == 0x00ea
                    00EA   1355 _WTSTAT	=	0x00ea
                           1356 ;--------------------------------------------------------
                           1357 ; special function bits
                           1358 ;--------------------------------------------------------
                           1359 	.area RSEG    (ABS,DATA)
   0000                    1360 	.org 0x0000
                    00E0   1361 G$ACC_0$0$0 == 0x00e0
                    00E0   1362 _ACC_0	=	0x00e0
                    00E1   1363 G$ACC_1$0$0 == 0x00e1
                    00E1   1364 _ACC_1	=	0x00e1
                    00E2   1365 G$ACC_2$0$0 == 0x00e2
                    00E2   1366 _ACC_2	=	0x00e2
                    00E3   1367 G$ACC_3$0$0 == 0x00e3
                    00E3   1368 _ACC_3	=	0x00e3
                    00E4   1369 G$ACC_4$0$0 == 0x00e4
                    00E4   1370 _ACC_4	=	0x00e4
                    00E5   1371 G$ACC_5$0$0 == 0x00e5
                    00E5   1372 _ACC_5	=	0x00e5
                    00E6   1373 G$ACC_6$0$0 == 0x00e6
                    00E6   1374 _ACC_6	=	0x00e6
                    00E7   1375 G$ACC_7$0$0 == 0x00e7
                    00E7   1376 _ACC_7	=	0x00e7
                    00F0   1377 G$B_0$0$0 == 0x00f0
                    00F0   1378 _B_0	=	0x00f0
                    00F1   1379 G$B_1$0$0 == 0x00f1
                    00F1   1380 _B_1	=	0x00f1
                    00F2   1381 G$B_2$0$0 == 0x00f2
                    00F2   1382 _B_2	=	0x00f2
                    00F3   1383 G$B_3$0$0 == 0x00f3
                    00F3   1384 _B_3	=	0x00f3
                    00F4   1385 G$B_4$0$0 == 0x00f4
                    00F4   1386 _B_4	=	0x00f4
                    00F5   1387 G$B_5$0$0 == 0x00f5
                    00F5   1388 _B_5	=	0x00f5
                    00F6   1389 G$B_6$0$0 == 0x00f6
                    00F6   1390 _B_6	=	0x00f6
                    00F7   1391 G$B_7$0$0 == 0x00f7
                    00F7   1392 _B_7	=	0x00f7
                    00A0   1393 G$E2IE_0$0$0 == 0x00a0
                    00A0   1394 _E2IE_0	=	0x00a0
                    00A1   1395 G$E2IE_1$0$0 == 0x00a1
                    00A1   1396 _E2IE_1	=	0x00a1
                    00A2   1397 G$E2IE_2$0$0 == 0x00a2
                    00A2   1398 _E2IE_2	=	0x00a2
                    00A3   1399 G$E2IE_3$0$0 == 0x00a3
                    00A3   1400 _E2IE_3	=	0x00a3
                    00A4   1401 G$E2IE_4$0$0 == 0x00a4
                    00A4   1402 _E2IE_4	=	0x00a4
                    00A5   1403 G$E2IE_5$0$0 == 0x00a5
                    00A5   1404 _E2IE_5	=	0x00a5
                    00A6   1405 G$E2IE_6$0$0 == 0x00a6
                    00A6   1406 _E2IE_6	=	0x00a6
                    00A7   1407 G$E2IE_7$0$0 == 0x00a7
                    00A7   1408 _E2IE_7	=	0x00a7
                    00C0   1409 G$E2IP_0$0$0 == 0x00c0
                    00C0   1410 _E2IP_0	=	0x00c0
                    00C1   1411 G$E2IP_1$0$0 == 0x00c1
                    00C1   1412 _E2IP_1	=	0x00c1
                    00C2   1413 G$E2IP_2$0$0 == 0x00c2
                    00C2   1414 _E2IP_2	=	0x00c2
                    00C3   1415 G$E2IP_3$0$0 == 0x00c3
                    00C3   1416 _E2IP_3	=	0x00c3
                    00C4   1417 G$E2IP_4$0$0 == 0x00c4
                    00C4   1418 _E2IP_4	=	0x00c4
                    00C5   1419 G$E2IP_5$0$0 == 0x00c5
                    00C5   1420 _E2IP_5	=	0x00c5
                    00C6   1421 G$E2IP_6$0$0 == 0x00c6
                    00C6   1422 _E2IP_6	=	0x00c6
                    00C7   1423 G$E2IP_7$0$0 == 0x00c7
                    00C7   1424 _E2IP_7	=	0x00c7
                    0098   1425 G$EIE_0$0$0 == 0x0098
                    0098   1426 _EIE_0	=	0x0098
                    0099   1427 G$EIE_1$0$0 == 0x0099
                    0099   1428 _EIE_1	=	0x0099
                    009A   1429 G$EIE_2$0$0 == 0x009a
                    009A   1430 _EIE_2	=	0x009a
                    009B   1431 G$EIE_3$0$0 == 0x009b
                    009B   1432 _EIE_3	=	0x009b
                    009C   1433 G$EIE_4$0$0 == 0x009c
                    009C   1434 _EIE_4	=	0x009c
                    009D   1435 G$EIE_5$0$0 == 0x009d
                    009D   1436 _EIE_5	=	0x009d
                    009E   1437 G$EIE_6$0$0 == 0x009e
                    009E   1438 _EIE_6	=	0x009e
                    009F   1439 G$EIE_7$0$0 == 0x009f
                    009F   1440 _EIE_7	=	0x009f
                    00B0   1441 G$EIP_0$0$0 == 0x00b0
                    00B0   1442 _EIP_0	=	0x00b0
                    00B1   1443 G$EIP_1$0$0 == 0x00b1
                    00B1   1444 _EIP_1	=	0x00b1
                    00B2   1445 G$EIP_2$0$0 == 0x00b2
                    00B2   1446 _EIP_2	=	0x00b2
                    00B3   1447 G$EIP_3$0$0 == 0x00b3
                    00B3   1448 _EIP_3	=	0x00b3
                    00B4   1449 G$EIP_4$0$0 == 0x00b4
                    00B4   1450 _EIP_4	=	0x00b4
                    00B5   1451 G$EIP_5$0$0 == 0x00b5
                    00B5   1452 _EIP_5	=	0x00b5
                    00B6   1453 G$EIP_6$0$0 == 0x00b6
                    00B6   1454 _EIP_6	=	0x00b6
                    00B7   1455 G$EIP_7$0$0 == 0x00b7
                    00B7   1456 _EIP_7	=	0x00b7
                    00A8   1457 G$IE_0$0$0 == 0x00a8
                    00A8   1458 _IE_0	=	0x00a8
                    00A9   1459 G$IE_1$0$0 == 0x00a9
                    00A9   1460 _IE_1	=	0x00a9
                    00AA   1461 G$IE_2$0$0 == 0x00aa
                    00AA   1462 _IE_2	=	0x00aa
                    00AB   1463 G$IE_3$0$0 == 0x00ab
                    00AB   1464 _IE_3	=	0x00ab
                    00AC   1465 G$IE_4$0$0 == 0x00ac
                    00AC   1466 _IE_4	=	0x00ac
                    00AD   1467 G$IE_5$0$0 == 0x00ad
                    00AD   1468 _IE_5	=	0x00ad
                    00AE   1469 G$IE_6$0$0 == 0x00ae
                    00AE   1470 _IE_6	=	0x00ae
                    00AF   1471 G$IE_7$0$0 == 0x00af
                    00AF   1472 _IE_7	=	0x00af
                    00AF   1473 G$EA$0$0 == 0x00af
                    00AF   1474 _EA	=	0x00af
                    00B8   1475 G$IP_0$0$0 == 0x00b8
                    00B8   1476 _IP_0	=	0x00b8
                    00B9   1477 G$IP_1$0$0 == 0x00b9
                    00B9   1478 _IP_1	=	0x00b9
                    00BA   1479 G$IP_2$0$0 == 0x00ba
                    00BA   1480 _IP_2	=	0x00ba
                    00BB   1481 G$IP_3$0$0 == 0x00bb
                    00BB   1482 _IP_3	=	0x00bb
                    00BC   1483 G$IP_4$0$0 == 0x00bc
                    00BC   1484 _IP_4	=	0x00bc
                    00BD   1485 G$IP_5$0$0 == 0x00bd
                    00BD   1486 _IP_5	=	0x00bd
                    00BE   1487 G$IP_6$0$0 == 0x00be
                    00BE   1488 _IP_6	=	0x00be
                    00BF   1489 G$IP_7$0$0 == 0x00bf
                    00BF   1490 _IP_7	=	0x00bf
                    00D0   1491 G$P$0$0 == 0x00d0
                    00D0   1492 _P	=	0x00d0
                    00D1   1493 G$F1$0$0 == 0x00d1
                    00D1   1494 _F1	=	0x00d1
                    00D2   1495 G$OV$0$0 == 0x00d2
                    00D2   1496 _OV	=	0x00d2
                    00D3   1497 G$RS0$0$0 == 0x00d3
                    00D3   1498 _RS0	=	0x00d3
                    00D4   1499 G$RS1$0$0 == 0x00d4
                    00D4   1500 _RS1	=	0x00d4
                    00D5   1501 G$F0$0$0 == 0x00d5
                    00D5   1502 _F0	=	0x00d5
                    00D6   1503 G$AC$0$0 == 0x00d6
                    00D6   1504 _AC	=	0x00d6
                    00D7   1505 G$CY$0$0 == 0x00d7
                    00D7   1506 _CY	=	0x00d7
                    00C8   1507 G$PINA_0$0$0 == 0x00c8
                    00C8   1508 _PINA_0	=	0x00c8
                    00C9   1509 G$PINA_1$0$0 == 0x00c9
                    00C9   1510 _PINA_1	=	0x00c9
                    00CA   1511 G$PINA_2$0$0 == 0x00ca
                    00CA   1512 _PINA_2	=	0x00ca
                    00CB   1513 G$PINA_3$0$0 == 0x00cb
                    00CB   1514 _PINA_3	=	0x00cb
                    00CC   1515 G$PINA_4$0$0 == 0x00cc
                    00CC   1516 _PINA_4	=	0x00cc
                    00CD   1517 G$PINA_5$0$0 == 0x00cd
                    00CD   1518 _PINA_5	=	0x00cd
                    00CE   1519 G$PINA_6$0$0 == 0x00ce
                    00CE   1520 _PINA_6	=	0x00ce
                    00CF   1521 G$PINA_7$0$0 == 0x00cf
                    00CF   1522 _PINA_7	=	0x00cf
                    00E8   1523 G$PINB_0$0$0 == 0x00e8
                    00E8   1524 _PINB_0	=	0x00e8
                    00E9   1525 G$PINB_1$0$0 == 0x00e9
                    00E9   1526 _PINB_1	=	0x00e9
                    00EA   1527 G$PINB_2$0$0 == 0x00ea
                    00EA   1528 _PINB_2	=	0x00ea
                    00EB   1529 G$PINB_3$0$0 == 0x00eb
                    00EB   1530 _PINB_3	=	0x00eb
                    00EC   1531 G$PINB_4$0$0 == 0x00ec
                    00EC   1532 _PINB_4	=	0x00ec
                    00ED   1533 G$PINB_5$0$0 == 0x00ed
                    00ED   1534 _PINB_5	=	0x00ed
                    00EE   1535 G$PINB_6$0$0 == 0x00ee
                    00EE   1536 _PINB_6	=	0x00ee
                    00EF   1537 G$PINB_7$0$0 == 0x00ef
                    00EF   1538 _PINB_7	=	0x00ef
                    00F8   1539 G$PINC_0$0$0 == 0x00f8
                    00F8   1540 _PINC_0	=	0x00f8
                    00F9   1541 G$PINC_1$0$0 == 0x00f9
                    00F9   1542 _PINC_1	=	0x00f9
                    00FA   1543 G$PINC_2$0$0 == 0x00fa
                    00FA   1544 _PINC_2	=	0x00fa
                    00FB   1545 G$PINC_3$0$0 == 0x00fb
                    00FB   1546 _PINC_3	=	0x00fb
                    00FC   1547 G$PINC_4$0$0 == 0x00fc
                    00FC   1548 _PINC_4	=	0x00fc
                    00FD   1549 G$PINC_5$0$0 == 0x00fd
                    00FD   1550 _PINC_5	=	0x00fd
                    00FE   1551 G$PINC_6$0$0 == 0x00fe
                    00FE   1552 _PINC_6	=	0x00fe
                    00FF   1553 G$PINC_7$0$0 == 0x00ff
                    00FF   1554 _PINC_7	=	0x00ff
                    0080   1555 G$PORTA_0$0$0 == 0x0080
                    0080   1556 _PORTA_0	=	0x0080
                    0081   1557 G$PORTA_1$0$0 == 0x0081
                    0081   1558 _PORTA_1	=	0x0081
                    0082   1559 G$PORTA_2$0$0 == 0x0082
                    0082   1560 _PORTA_2	=	0x0082
                    0083   1561 G$PORTA_3$0$0 == 0x0083
                    0083   1562 _PORTA_3	=	0x0083
                    0084   1563 G$PORTA_4$0$0 == 0x0084
                    0084   1564 _PORTA_4	=	0x0084
                    0085   1565 G$PORTA_5$0$0 == 0x0085
                    0085   1566 _PORTA_5	=	0x0085
                    0086   1567 G$PORTA_6$0$0 == 0x0086
                    0086   1568 _PORTA_6	=	0x0086
                    0087   1569 G$PORTA_7$0$0 == 0x0087
                    0087   1570 _PORTA_7	=	0x0087
                    0088   1571 G$PORTB_0$0$0 == 0x0088
                    0088   1572 _PORTB_0	=	0x0088
                    0089   1573 G$PORTB_1$0$0 == 0x0089
                    0089   1574 _PORTB_1	=	0x0089
                    008A   1575 G$PORTB_2$0$0 == 0x008a
                    008A   1576 _PORTB_2	=	0x008a
                    008B   1577 G$PORTB_3$0$0 == 0x008b
                    008B   1578 _PORTB_3	=	0x008b
                    008C   1579 G$PORTB_4$0$0 == 0x008c
                    008C   1580 _PORTB_4	=	0x008c
                    008D   1581 G$PORTB_5$0$0 == 0x008d
                    008D   1582 _PORTB_5	=	0x008d
                    008E   1583 G$PORTB_6$0$0 == 0x008e
                    008E   1584 _PORTB_6	=	0x008e
                    008F   1585 G$PORTB_7$0$0 == 0x008f
                    008F   1586 _PORTB_7	=	0x008f
                    0090   1587 G$PORTC_0$0$0 == 0x0090
                    0090   1588 _PORTC_0	=	0x0090
                    0091   1589 G$PORTC_1$0$0 == 0x0091
                    0091   1590 _PORTC_1	=	0x0091
                    0092   1591 G$PORTC_2$0$0 == 0x0092
                    0092   1592 _PORTC_2	=	0x0092
                    0093   1593 G$PORTC_3$0$0 == 0x0093
                    0093   1594 _PORTC_3	=	0x0093
                    0094   1595 G$PORTC_4$0$0 == 0x0094
                    0094   1596 _PORTC_4	=	0x0094
                    0095   1597 G$PORTC_5$0$0 == 0x0095
                    0095   1598 _PORTC_5	=	0x0095
                    0096   1599 G$PORTC_6$0$0 == 0x0096
                    0096   1600 _PORTC_6	=	0x0096
                    0097   1601 G$PORTC_7$0$0 == 0x0097
                    0097   1602 _PORTC_7	=	0x0097
                           1603 ;--------------------------------------------------------
                           1604 ; overlayable register banks
                           1605 ;--------------------------------------------------------
                           1606 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1607 	.ds 8
                           1608 ;--------------------------------------------------------
                           1609 ; internal ram data
                           1610 ;--------------------------------------------------------
                           1611 	.area DSEG    (DATA)
                           1612 ;--------------------------------------------------------
                           1613 ; overlayable items in internal ram 
                           1614 ;--------------------------------------------------------
                           1615 ;--------------------------------------------------------
                           1616 ; indirectly addressable internal ram data
                           1617 ;--------------------------------------------------------
                           1618 	.area ISEG    (DATA)
                           1619 ;--------------------------------------------------------
                           1620 ; absolute internal ram data
                           1621 ;--------------------------------------------------------
                           1622 	.area IABS    (ABS,DATA)
                           1623 	.area IABS    (ABS,DATA)
                           1624 ;--------------------------------------------------------
                           1625 ; bit data
                           1626 ;--------------------------------------------------------
                           1627 	.area BSEG    (BIT)
                           1628 ;--------------------------------------------------------
                           1629 ; paged external ram data
                           1630 ;--------------------------------------------------------
                           1631 	.area PSEG    (PAG,XDATA)
                           1632 ;--------------------------------------------------------
                           1633 ; external ram data
                           1634 ;--------------------------------------------------------
                           1635 	.area XSEG    (XDATA)
                    7020   1636 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1637 _ADCCH0VAL0	=	0x7020
                    7021   1638 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1639 _ADCCH0VAL1	=	0x7021
                    7020   1640 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1641 _ADCCH0VAL	=	0x7020
                    7022   1642 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1643 _ADCCH1VAL0	=	0x7022
                    7023   1644 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1645 _ADCCH1VAL1	=	0x7023
                    7022   1646 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1647 _ADCCH1VAL	=	0x7022
                    7024   1648 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1649 _ADCCH2VAL0	=	0x7024
                    7025   1650 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1651 _ADCCH2VAL1	=	0x7025
                    7024   1652 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1653 _ADCCH2VAL	=	0x7024
                    7026   1654 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1655 _ADCCH3VAL0	=	0x7026
                    7027   1656 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1657 _ADCCH3VAL1	=	0x7027
                    7026   1658 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1659 _ADCCH3VAL	=	0x7026
                    7028   1660 G$ADCTUNE0$0$0 == 0x7028
                    7028   1661 _ADCTUNE0	=	0x7028
                    7029   1662 G$ADCTUNE1$0$0 == 0x7029
                    7029   1663 _ADCTUNE1	=	0x7029
                    702A   1664 G$ADCTUNE2$0$0 == 0x702a
                    702A   1665 _ADCTUNE2	=	0x702a
                    7010   1666 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1667 _DMA0ADDR0	=	0x7010
                    7011   1668 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1669 _DMA0ADDR1	=	0x7011
                    7010   1670 G$DMA0ADDR$0$0 == 0x7010
                    7010   1671 _DMA0ADDR	=	0x7010
                    7014   1672 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1673 _DMA0CONFIG	=	0x7014
                    7012   1674 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1675 _DMA1ADDR0	=	0x7012
                    7013   1676 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1677 _DMA1ADDR1	=	0x7013
                    7012   1678 G$DMA1ADDR$0$0 == 0x7012
                    7012   1679 _DMA1ADDR	=	0x7012
                    7015   1680 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1681 _DMA1CONFIG	=	0x7015
                    7070   1682 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1683 _FRCOSCCONFIG	=	0x7070
                    7071   1684 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1685 _FRCOSCCTRL	=	0x7071
                    7076   1686 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1687 _FRCOSCFREQ0	=	0x7076
                    7077   1688 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1689 _FRCOSCFREQ1	=	0x7077
                    7076   1690 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1691 _FRCOSCFREQ	=	0x7076
                    7072   1692 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1693 _FRCOSCKFILT0	=	0x7072
                    7073   1694 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1695 _FRCOSCKFILT1	=	0x7073
                    7072   1696 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1697 _FRCOSCKFILT	=	0x7072
                    7078   1698 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1699 _FRCOSCPER0	=	0x7078
                    7079   1700 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1701 _FRCOSCPER1	=	0x7079
                    7078   1702 G$FRCOSCPER$0$0 == 0x7078
                    7078   1703 _FRCOSCPER	=	0x7078
                    7074   1704 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1705 _FRCOSCREF0	=	0x7074
                    7075   1706 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1707 _FRCOSCREF1	=	0x7075
                    7074   1708 G$FRCOSCREF$0$0 == 0x7074
                    7074   1709 _FRCOSCREF	=	0x7074
                    7007   1710 G$ANALOGA$0$0 == 0x7007
                    7007   1711 _ANALOGA	=	0x7007
                    700C   1712 G$GPIOENABLE$0$0 == 0x700c
                    700C   1713 _GPIOENABLE	=	0x700c
                    7003   1714 G$EXTIRQ$0$0 == 0x7003
                    7003   1715 _EXTIRQ	=	0x7003
                    7000   1716 G$INTCHGA$0$0 == 0x7000
                    7000   1717 _INTCHGA	=	0x7000
                    7001   1718 G$INTCHGB$0$0 == 0x7001
                    7001   1719 _INTCHGB	=	0x7001
                    7002   1720 G$INTCHGC$0$0 == 0x7002
                    7002   1721 _INTCHGC	=	0x7002
                    7008   1722 G$PALTA$0$0 == 0x7008
                    7008   1723 _PALTA	=	0x7008
                    7009   1724 G$PALTB$0$0 == 0x7009
                    7009   1725 _PALTB	=	0x7009
                    700A   1726 G$PALTC$0$0 == 0x700a
                    700A   1727 _PALTC	=	0x700a
                    7046   1728 G$PALTRADIO$0$0 == 0x7046
                    7046   1729 _PALTRADIO	=	0x7046
                    7004   1730 G$PINCHGA$0$0 == 0x7004
                    7004   1731 _PINCHGA	=	0x7004
                    7005   1732 G$PINCHGB$0$0 == 0x7005
                    7005   1733 _PINCHGB	=	0x7005
                    7006   1734 G$PINCHGC$0$0 == 0x7006
                    7006   1735 _PINCHGC	=	0x7006
                    700B   1736 G$PINSEL$0$0 == 0x700b
                    700B   1737 _PINSEL	=	0x700b
                    7060   1738 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1739 _LPOSCCONFIG	=	0x7060
                    7066   1740 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1741 _LPOSCFREQ0	=	0x7066
                    7067   1742 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1743 _LPOSCFREQ1	=	0x7067
                    7066   1744 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1745 _LPOSCFREQ	=	0x7066
                    7062   1746 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1747 _LPOSCKFILT0	=	0x7062
                    7063   1748 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1749 _LPOSCKFILT1	=	0x7063
                    7062   1750 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1751 _LPOSCKFILT	=	0x7062
                    7068   1752 G$LPOSCPER0$0$0 == 0x7068
                    7068   1753 _LPOSCPER0	=	0x7068
                    7069   1754 G$LPOSCPER1$0$0 == 0x7069
                    7069   1755 _LPOSCPER1	=	0x7069
                    7068   1756 G$LPOSCPER$0$0 == 0x7068
                    7068   1757 _LPOSCPER	=	0x7068
                    7064   1758 G$LPOSCREF0$0$0 == 0x7064
                    7064   1759 _LPOSCREF0	=	0x7064
                    7065   1760 G$LPOSCREF1$0$0 == 0x7065
                    7065   1761 _LPOSCREF1	=	0x7065
                    7064   1762 G$LPOSCREF$0$0 == 0x7064
                    7064   1763 _LPOSCREF	=	0x7064
                    7054   1764 G$LPXOSCGM$0$0 == 0x7054
                    7054   1765 _LPXOSCGM	=	0x7054
                    7F01   1766 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1767 _MISCCTRL	=	0x7f01
                    7053   1768 G$OSCCALIB$0$0 == 0x7053
                    7053   1769 _OSCCALIB	=	0x7053
                    7050   1770 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1771 _OSCFORCERUN	=	0x7050
                    7052   1772 G$OSCREADY$0$0 == 0x7052
                    7052   1773 _OSCREADY	=	0x7052
                    7051   1774 G$OSCRUN$0$0 == 0x7051
                    7051   1775 _OSCRUN	=	0x7051
                    7040   1776 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1777 _RADIOFDATAADDR0	=	0x7040
                    7041   1778 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1779 _RADIOFDATAADDR1	=	0x7041
                    7040   1780 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1781 _RADIOFDATAADDR	=	0x7040
                    7042   1782 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1783 _RADIOFSTATADDR0	=	0x7042
                    7043   1784 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1785 _RADIOFSTATADDR1	=	0x7043
                    7042   1786 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1787 _RADIOFSTATADDR	=	0x7042
                    7044   1788 G$RADIOMUX$0$0 == 0x7044
                    7044   1789 _RADIOMUX	=	0x7044
                    7084   1790 G$SCRATCH0$0$0 == 0x7084
                    7084   1791 _SCRATCH0	=	0x7084
                    7085   1792 G$SCRATCH1$0$0 == 0x7085
                    7085   1793 _SCRATCH1	=	0x7085
                    7086   1794 G$SCRATCH2$0$0 == 0x7086
                    7086   1795 _SCRATCH2	=	0x7086
                    7087   1796 G$SCRATCH3$0$0 == 0x7087
                    7087   1797 _SCRATCH3	=	0x7087
                    7F00   1798 G$SILICONREV$0$0 == 0x7f00
                    7F00   1799 _SILICONREV	=	0x7f00
                    7F19   1800 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1801 _XTALAMPL	=	0x7f19
                    7F18   1802 G$XTALOSC$0$0 == 0x7f18
                    7F18   1803 _XTALOSC	=	0x7f18
                    7F1A   1804 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1805 _XTALREADY	=	0x7f1a
                    3F82   1806 G$XDPTR0$0$0 == 0x3f82
                    3F82   1807 _XDPTR0	=	0x3f82
                    3F84   1808 G$XDPTR1$0$0 == 0x3f84
                    3F84   1809 _XDPTR1	=	0x3f84
                    3FA8   1810 G$XIE$0$0 == 0x3fa8
                    3FA8   1811 _XIE	=	0x3fa8
                    3FB8   1812 G$XIP$0$0 == 0x3fb8
                    3FB8   1813 _XIP	=	0x3fb8
                    3F87   1814 G$XPCON$0$0 == 0x3f87
                    3F87   1815 _XPCON	=	0x3f87
                    3FCA   1816 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1817 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1818 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1819 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1820 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1821 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1822 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1823 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1824 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1825 _XADCCLKSRC	=	0x3fd1
                    3FC9   1826 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1827 _XADCCONV	=	0x3fc9
                    3FE1   1828 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1829 _XANALOGCOMP	=	0x3fe1
                    3FC6   1830 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1831 _XCLKCON	=	0x3fc6
                    3FC7   1832 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1833 _XCLKSTAT	=	0x3fc7
                    3F97   1834 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1835 _XCODECONFIG	=	0x3f97
                    3FE3   1836 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1837 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1838 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1839 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1840 G$XDIRA$0$0 == 0x3f89
                    3F89   1841 _XDIRA	=	0x3f89
                    3F8A   1842 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1843 _XDIRB	=	0x3f8a
                    3F8B   1844 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1845 _XDIRC	=	0x3f8b
                    3F8E   1846 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1847 _XDIRR	=	0x3f8e
                    3FC8   1848 G$XPINA$0$0 == 0x3fc8
                    3FC8   1849 _XPINA	=	0x3fc8
                    3FE8   1850 G$XPINB$0$0 == 0x3fe8
                    3FE8   1851 _XPINB	=	0x3fe8
                    3FF8   1852 G$XPINC$0$0 == 0x3ff8
                    3FF8   1853 _XPINC	=	0x3ff8
                    3F8D   1854 G$XPINR$0$0 == 0x3f8d
                    3F8D   1855 _XPINR	=	0x3f8d
                    3F80   1856 G$XPORTA$0$0 == 0x3f80
                    3F80   1857 _XPORTA	=	0x3f80
                    3F88   1858 G$XPORTB$0$0 == 0x3f88
                    3F88   1859 _XPORTB	=	0x3f88
                    3F90   1860 G$XPORTC$0$0 == 0x3f90
                    3F90   1861 _XPORTC	=	0x3f90
                    3F8C   1862 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1863 _XPORTR	=	0x3f8c
                    3FCE   1864 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1865 _XIC0CAPT0	=	0x3fce
                    3FCF   1866 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1867 _XIC0CAPT1	=	0x3fcf
                    3FCE   1868 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1869 _XIC0CAPT	=	0x3fce
                    3FCC   1870 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1871 _XIC0MODE	=	0x3fcc
                    3FCD   1872 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1873 _XIC0STATUS	=	0x3fcd
                    3FD6   1874 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1875 _XIC1CAPT0	=	0x3fd6
                    3FD7   1876 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1877 _XIC1CAPT1	=	0x3fd7
                    3FD6   1878 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1879 _XIC1CAPT	=	0x3fd6
                    3FD4   1880 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1881 _XIC1MODE	=	0x3fd4
                    3FD5   1882 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   1883 _XIC1STATUS	=	0x3fd5
                    3F92   1884 G$XNVADDR0$0$0 == 0x3f92
                    3F92   1885 _XNVADDR0	=	0x3f92
                    3F93   1886 G$XNVADDR1$0$0 == 0x3f93
                    3F93   1887 _XNVADDR1	=	0x3f93
                    3F92   1888 G$XNVADDR$0$0 == 0x3f92
                    3F92   1889 _XNVADDR	=	0x3f92
                    3F94   1890 G$XNVDATA0$0$0 == 0x3f94
                    3F94   1891 _XNVDATA0	=	0x3f94
                    3F95   1892 G$XNVDATA1$0$0 == 0x3f95
                    3F95   1893 _XNVDATA1	=	0x3f95
                    3F94   1894 G$XNVDATA$0$0 == 0x3f94
                    3F94   1895 _XNVDATA	=	0x3f94
                    3F96   1896 G$XNVKEY$0$0 == 0x3f96
                    3F96   1897 _XNVKEY	=	0x3f96
                    3F91   1898 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   1899 _XNVSTATUS	=	0x3f91
                    3FBC   1900 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   1901 _XOC0COMP0	=	0x3fbc
                    3FBD   1902 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   1903 _XOC0COMP1	=	0x3fbd
                    3FBC   1904 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   1905 _XOC0COMP	=	0x3fbc
                    3FB9   1906 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   1907 _XOC0MODE	=	0x3fb9
                    3FBA   1908 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   1909 _XOC0PIN	=	0x3fba
                    3FBB   1910 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   1911 _XOC0STATUS	=	0x3fbb
                    3FC4   1912 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   1913 _XOC1COMP0	=	0x3fc4
                    3FC5   1914 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   1915 _XOC1COMP1	=	0x3fc5
                    3FC4   1916 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   1917 _XOC1COMP	=	0x3fc4
                    3FC1   1918 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   1919 _XOC1MODE	=	0x3fc1
                    3FC2   1920 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   1921 _XOC1PIN	=	0x3fc2
                    3FC3   1922 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   1923 _XOC1STATUS	=	0x3fc3
                    3FB1   1924 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   1925 _XRADIOACC	=	0x3fb1
                    3FB3   1926 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   1927 _XRADIOADDR0	=	0x3fb3
                    3FB2   1928 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   1929 _XRADIOADDR1	=	0x3fb2
                    3FB7   1930 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   1931 _XRADIODATA0	=	0x3fb7
                    3FB6   1932 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   1933 _XRADIODATA1	=	0x3fb6
                    3FB5   1934 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   1935 _XRADIODATA2	=	0x3fb5
                    3FB4   1936 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   1937 _XRADIODATA3	=	0x3fb4
                    3FBE   1938 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   1939 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1940 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   1941 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1942 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   1943 _XRADIOSTAT	=	0x3fbe
                    3FDF   1944 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   1945 _XSPCLKSRC	=	0x3fdf
                    3FDC   1946 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   1947 _XSPMODE	=	0x3fdc
                    3FDE   1948 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   1949 _XSPSHREG	=	0x3fde
                    3FDD   1950 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   1951 _XSPSTATUS	=	0x3fdd
                    3F9A   1952 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   1953 _XT0CLKSRC	=	0x3f9a
                    3F9C   1954 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   1955 _XT0CNT0	=	0x3f9c
                    3F9D   1956 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   1957 _XT0CNT1	=	0x3f9d
                    3F9C   1958 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   1959 _XT0CNT	=	0x3f9c
                    3F99   1960 G$XT0MODE$0$0 == 0x3f99
                    3F99   1961 _XT0MODE	=	0x3f99
                    3F9E   1962 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   1963 _XT0PERIOD0	=	0x3f9e
                    3F9F   1964 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   1965 _XT0PERIOD1	=	0x3f9f
                    3F9E   1966 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   1967 _XT0PERIOD	=	0x3f9e
                    3F9B   1968 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   1969 _XT0STATUS	=	0x3f9b
                    3FA2   1970 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   1971 _XT1CLKSRC	=	0x3fa2
                    3FA4   1972 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   1973 _XT1CNT0	=	0x3fa4
                    3FA5   1974 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   1975 _XT1CNT1	=	0x3fa5
                    3FA4   1976 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   1977 _XT1CNT	=	0x3fa4
                    3FA1   1978 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   1979 _XT1MODE	=	0x3fa1
                    3FA6   1980 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   1981 _XT1PERIOD0	=	0x3fa6
                    3FA7   1982 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   1983 _XT1PERIOD1	=	0x3fa7
                    3FA6   1984 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   1985 _XT1PERIOD	=	0x3fa6
                    3FA3   1986 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   1987 _XT1STATUS	=	0x3fa3
                    3FAA   1988 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   1989 _XT2CLKSRC	=	0x3faa
                    3FAC   1990 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   1991 _XT2CNT0	=	0x3fac
                    3FAD   1992 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   1993 _XT2CNT1	=	0x3fad
                    3FAC   1994 G$XT2CNT$0$0 == 0x3fac
                    3FAC   1995 _XT2CNT	=	0x3fac
                    3FA9   1996 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   1997 _XT2MODE	=	0x3fa9
                    3FAE   1998 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   1999 _XT2PERIOD0	=	0x3fae
                    3FAF   2000 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   2001 _XT2PERIOD1	=	0x3faf
                    3FAE   2002 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   2003 _XT2PERIOD	=	0x3fae
                    3FAB   2004 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   2005 _XT2STATUS	=	0x3fab
                    3FE4   2006 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   2007 _XU0CTRL	=	0x3fe4
                    3FE7   2008 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   2009 _XU0MODE	=	0x3fe7
                    3FE6   2010 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   2011 _XU0SHREG	=	0x3fe6
                    3FE5   2012 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   2013 _XU0STATUS	=	0x3fe5
                    3FEC   2014 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   2015 _XU1CTRL	=	0x3fec
                    3FEF   2016 G$XU1MODE$0$0 == 0x3fef
                    3FEF   2017 _XU1MODE	=	0x3fef
                    3FEE   2018 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   2019 _XU1SHREG	=	0x3fee
                    3FED   2020 G$XU1STATUS$0$0 == 0x3fed
                    3FED   2021 _XU1STATUS	=	0x3fed
                    3FDA   2022 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   2023 _XWDTCFG	=	0x3fda
                    3FDB   2024 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   2025 _XWDTRESET	=	0x3fdb
                    3FF1   2026 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   2027 _XWTCFGA	=	0x3ff1
                    3FF9   2028 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   2029 _XWTCFGB	=	0x3ff9
                    3FF2   2030 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   2031 _XWTCNTA0	=	0x3ff2
                    3FF3   2032 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   2033 _XWTCNTA1	=	0x3ff3
                    3FF2   2034 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   2035 _XWTCNTA	=	0x3ff2
                    3FFA   2036 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   2037 _XWTCNTB0	=	0x3ffa
                    3FFB   2038 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   2039 _XWTCNTB1	=	0x3ffb
                    3FFA   2040 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   2041 _XWTCNTB	=	0x3ffa
                    3FEB   2042 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   2043 _XWTCNTR1	=	0x3feb
                    3FF4   2044 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   2045 _XWTEVTA0	=	0x3ff4
                    3FF5   2046 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   2047 _XWTEVTA1	=	0x3ff5
                    3FF4   2048 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   2049 _XWTEVTA	=	0x3ff4
                    3FF6   2050 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   2051 _XWTEVTB0	=	0x3ff6
                    3FF7   2052 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   2053 _XWTEVTB1	=	0x3ff7
                    3FF6   2054 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   2055 _XWTEVTB	=	0x3ff6
                    3FFC   2056 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   2057 _XWTEVTC0	=	0x3ffc
                    3FFD   2058 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   2059 _XWTEVTC1	=	0x3ffd
                    3FFC   2060 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   2061 _XWTEVTC	=	0x3ffc
                    3FFE   2062 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   2063 _XWTEVTD0	=	0x3ffe
                    3FFF   2064 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   2065 _XWTEVTD1	=	0x3fff
                    3FFE   2066 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   2067 _XWTEVTD	=	0x3ffe
                    3FE9   2068 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   2069 _XWTIRQEN	=	0x3fe9
                    3FEA   2070 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   2071 _XWTSTAT	=	0x3fea
                    4114   2072 G$AX5043_AFSKCTRL$0$0 == 0x4114
                    4114   2073 _AX5043_AFSKCTRL	=	0x4114
                    4113   2074 G$AX5043_AFSKMARK0$0$0 == 0x4113
                    4113   2075 _AX5043_AFSKMARK0	=	0x4113
                    4112   2076 G$AX5043_AFSKMARK1$0$0 == 0x4112
                    4112   2077 _AX5043_AFSKMARK1	=	0x4112
                    4111   2078 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                    4111   2079 _AX5043_AFSKSPACE0	=	0x4111
                    4110   2080 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                    4110   2081 _AX5043_AFSKSPACE1	=	0x4110
                    4043   2082 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                    4043   2083 _AX5043_AGCCOUNTER	=	0x4043
                    4115   2084 G$AX5043_AMPLFILTER$0$0 == 0x4115
                    4115   2085 _AX5043_AMPLFILTER	=	0x4115
                    4189   2086 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                    4189   2087 _AX5043_BBOFFSCAP	=	0x4189
                    4188   2088 G$AX5043_BBTUNE$0$0 == 0x4188
                    4188   2089 _AX5043_BBTUNE	=	0x4188
                    4041   2090 G$AX5043_BGNDRSSI$0$0 == 0x4041
                    4041   2091 _AX5043_BGNDRSSI	=	0x4041
                    422E   2092 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                    422E   2093 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   2094 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                    422F   2095 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   2096 G$AX5043_CRCINIT0$0$0 == 0x4017
                    4017   2097 _AX5043_CRCINIT0	=	0x4017
                    4016   2098 G$AX5043_CRCINIT1$0$0 == 0x4016
                    4016   2099 _AX5043_CRCINIT1	=	0x4016
                    4015   2100 G$AX5043_CRCINIT2$0$0 == 0x4015
                    4015   2101 _AX5043_CRCINIT2	=	0x4015
                    4014   2102 G$AX5043_CRCINIT3$0$0 == 0x4014
                    4014   2103 _AX5043_CRCINIT3	=	0x4014
                    4332   2104 G$AX5043_DACCONFIG$0$0 == 0x4332
                    4332   2105 _AX5043_DACCONFIG	=	0x4332
                    4331   2106 G$AX5043_DACVALUE0$0$0 == 0x4331
                    4331   2107 _AX5043_DACVALUE0	=	0x4331
                    4330   2108 G$AX5043_DACVALUE1$0$0 == 0x4330
                    4330   2109 _AX5043_DACVALUE1	=	0x4330
                    4102   2110 G$AX5043_DECIMATION$0$0 == 0x4102
                    4102   2111 _AX5043_DECIMATION	=	0x4102
                    4042   2112 G$AX5043_DIVERSITY$0$0 == 0x4042
                    4042   2113 _AX5043_DIVERSITY	=	0x4042
                    4011   2114 G$AX5043_ENCODING$0$0 == 0x4011
                    4011   2115 _AX5043_ENCODING	=	0x4011
                    4018   2116 G$AX5043_FEC$0$0 == 0x4018
                    4018   2117 _AX5043_FEC	=	0x4018
                    401A   2118 G$AX5043_FECSTATUS$0$0 == 0x401a
                    401A   2119 _AX5043_FECSTATUS	=	0x401a
                    4019   2120 G$AX5043_FECSYNC$0$0 == 0x4019
                    4019   2121 _AX5043_FECSYNC	=	0x4019
                    402B   2122 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                    402B   2123 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   2124 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                    402A   2125 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   2126 G$AX5043_FIFODATA$0$0 == 0x4029
                    4029   2127 _AX5043_FIFODATA	=	0x4029
                    402D   2128 G$AX5043_FIFOFREE0$0$0 == 0x402d
                    402D   2129 _AX5043_FIFOFREE0	=	0x402d
                    402C   2130 G$AX5043_FIFOFREE1$0$0 == 0x402c
                    402C   2131 _AX5043_FIFOFREE1	=	0x402c
                    4028   2132 G$AX5043_FIFOSTAT$0$0 == 0x4028
                    4028   2133 _AX5043_FIFOSTAT	=	0x4028
                    402F   2134 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                    402F   2135 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   2136 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                    402E   2137 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   2138 G$AX5043_FRAMING$0$0 == 0x4012
                    4012   2139 _AX5043_FRAMING	=	0x4012
                    4037   2140 G$AX5043_FREQA0$0$0 == 0x4037
                    4037   2141 _AX5043_FREQA0	=	0x4037
                    4036   2142 G$AX5043_FREQA1$0$0 == 0x4036
                    4036   2143 _AX5043_FREQA1	=	0x4036
                    4035   2144 G$AX5043_FREQA2$0$0 == 0x4035
                    4035   2145 _AX5043_FREQA2	=	0x4035
                    4034   2146 G$AX5043_FREQA3$0$0 == 0x4034
                    4034   2147 _AX5043_FREQA3	=	0x4034
                    403F   2148 G$AX5043_FREQB0$0$0 == 0x403f
                    403F   2149 _AX5043_FREQB0	=	0x403f
                    403E   2150 G$AX5043_FREQB1$0$0 == 0x403e
                    403E   2151 _AX5043_FREQB1	=	0x403e
                    403D   2152 G$AX5043_FREQB2$0$0 == 0x403d
                    403D   2153 _AX5043_FREQB2	=	0x403d
                    403C   2154 G$AX5043_FREQB3$0$0 == 0x403c
                    403C   2155 _AX5043_FREQB3	=	0x403c
                    4163   2156 G$AX5043_FSKDEV0$0$0 == 0x4163
                    4163   2157 _AX5043_FSKDEV0	=	0x4163
                    4162   2158 G$AX5043_FSKDEV1$0$0 == 0x4162
                    4162   2159 _AX5043_FSKDEV1	=	0x4162
                    4161   2160 G$AX5043_FSKDEV2$0$0 == 0x4161
                    4161   2161 _AX5043_FSKDEV2	=	0x4161
                    410D   2162 G$AX5043_FSKDMAX0$0$0 == 0x410d
                    410D   2163 _AX5043_FSKDMAX0	=	0x410d
                    410C   2164 G$AX5043_FSKDMAX1$0$0 == 0x410c
                    410C   2165 _AX5043_FSKDMAX1	=	0x410c
                    410F   2166 G$AX5043_FSKDMIN0$0$0 == 0x410f
                    410F   2167 _AX5043_FSKDMIN0	=	0x410f
                    410E   2168 G$AX5043_FSKDMIN1$0$0 == 0x410e
                    410E   2169 _AX5043_FSKDMIN1	=	0x410e
                    4309   2170 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                    4309   2171 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   2172 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                    4308   2173 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   2174 G$AX5043_GPADCCTRL$0$0 == 0x4300
                    4300   2175 _AX5043_GPADCCTRL	=	0x4300
                    4301   2176 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                    4301   2177 _AX5043_GPADCPERIOD	=	0x4301
                    4101   2178 G$AX5043_IFFREQ0$0$0 == 0x4101
                    4101   2179 _AX5043_IFFREQ0	=	0x4101
                    4100   2180 G$AX5043_IFFREQ1$0$0 == 0x4100
                    4100   2181 _AX5043_IFFREQ1	=	0x4100
                    400B   2182 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                    400B   2183 _AX5043_IRQINVERSION0	=	0x400b
                    400A   2184 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                    400A   2185 _AX5043_IRQINVERSION1	=	0x400a
                    4007   2186 G$AX5043_IRQMASK0$0$0 == 0x4007
                    4007   2187 _AX5043_IRQMASK0	=	0x4007
                    4006   2188 G$AX5043_IRQMASK1$0$0 == 0x4006
                    4006   2189 _AX5043_IRQMASK1	=	0x4006
                    400D   2190 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                    400D   2191 _AX5043_IRQREQUEST0	=	0x400d
                    400C   2192 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                    400C   2193 _AX5043_IRQREQUEST1	=	0x400c
                    4310   2194 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                    4310   2195 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   2196 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                    4317   2197 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   2198 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                    4316   2199 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   2200 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                    4313   2201 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   2202 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                    4312   2203 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   2204 G$AX5043_LPOSCPER0$0$0 == 0x4319
                    4319   2205 _AX5043_LPOSCPER0	=	0x4319
                    4318   2206 G$AX5043_LPOSCPER1$0$0 == 0x4318
                    4318   2207 _AX5043_LPOSCPER1	=	0x4318
                    4315   2208 G$AX5043_LPOSCREF0$0$0 == 0x4315
                    4315   2209 _AX5043_LPOSCREF0	=	0x4315
                    4314   2210 G$AX5043_LPOSCREF1$0$0 == 0x4314
                    4314   2211 _AX5043_LPOSCREF1	=	0x4314
                    4311   2212 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                    4311   2213 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   2214 G$AX5043_MATCH0LEN$0$0 == 0x4214
                    4214   2215 _AX5043_MATCH0LEN	=	0x4214
                    4216   2216 G$AX5043_MATCH0MAX$0$0 == 0x4216
                    4216   2217 _AX5043_MATCH0MAX	=	0x4216
                    4215   2218 G$AX5043_MATCH0MIN$0$0 == 0x4215
                    4215   2219 _AX5043_MATCH0MIN	=	0x4215
                    4213   2220 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                    4213   2221 _AX5043_MATCH0PAT0	=	0x4213
                    4212   2222 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                    4212   2223 _AX5043_MATCH0PAT1	=	0x4212
                    4211   2224 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                    4211   2225 _AX5043_MATCH0PAT2	=	0x4211
                    4210   2226 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                    4210   2227 _AX5043_MATCH0PAT3	=	0x4210
                    421C   2228 G$AX5043_MATCH1LEN$0$0 == 0x421c
                    421C   2229 _AX5043_MATCH1LEN	=	0x421c
                    421E   2230 G$AX5043_MATCH1MAX$0$0 == 0x421e
                    421E   2231 _AX5043_MATCH1MAX	=	0x421e
                    421D   2232 G$AX5043_MATCH1MIN$0$0 == 0x421d
                    421D   2233 _AX5043_MATCH1MIN	=	0x421d
                    4219   2234 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                    4219   2235 _AX5043_MATCH1PAT0	=	0x4219
                    4218   2236 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                    4218   2237 _AX5043_MATCH1PAT1	=	0x4218
                    4108   2238 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                    4108   2239 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   2240 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                    4107   2241 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   2242 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                    4106   2243 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   2244 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                    410B   2245 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   2246 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                    410A   2247 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   2248 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                    4109   2249 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   2250 G$AX5043_MODCFGA$0$0 == 0x4164
                    4164   2251 _AX5043_MODCFGA	=	0x4164
                    4160   2252 G$AX5043_MODCFGF$0$0 == 0x4160
                    4160   2253 _AX5043_MODCFGF	=	0x4160
                    4010   2254 G$AX5043_MODULATION$0$0 == 0x4010
                    4010   2255 _AX5043_MODULATION	=	0x4010
                    4025   2256 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                    4025   2257 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   2258 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                    4023   2259 _AX5043_PINFUNCDATA	=	0x4023
                    4022   2260 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                    4022   2261 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   2262 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                    4024   2263 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   2264 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                    4026   2265 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   2266 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                    4021   2267 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   2268 G$AX5043_PINSTATE$0$0 == 0x4020
                    4020   2269 _AX5043_PINSTATE	=	0x4020
                    4233   2270 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                    4233   2271 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   2272 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                    4230   2273 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   2274 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                    4231   2275 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   2276 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                    4232   2277 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   2278 G$AX5043_PLLCPI$0$0 == 0x4031
                    4031   2279 _AX5043_PLLCPI	=	0x4031
                    4039   2280 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                    4039   2281 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   2282 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                    4182   2283 _AX5043_PLLLOCKDET	=	0x4182
                    4030   2284 G$AX5043_PLLLOOP$0$0 == 0x4030
                    4030   2285 _AX5043_PLLLOOP	=	0x4030
                    4038   2286 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                    4038   2287 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   2288 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                    4033   2289 _AX5043_PLLRANGINGA	=	0x4033
                    403B   2290 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                    403B   2291 _AX5043_PLLRANGINGB	=	0x403b
                    4183   2292 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                    4183   2293 _AX5043_PLLRNGCLK	=	0x4183
                    4032   2294 G$AX5043_PLLVCODIV$0$0 == 0x4032
                    4032   2295 _AX5043_PLLVCODIV	=	0x4032
                    4180   2296 G$AX5043_PLLVCOI$0$0 == 0x4180
                    4180   2297 _AX5043_PLLVCOI	=	0x4180
                    4181   2298 G$AX5043_PLLVCOIR$0$0 == 0x4181
                    4181   2299 _AX5043_PLLVCOIR	=	0x4181
                    4005   2300 G$AX5043_POWIRQMASK$0$0 == 0x4005
                    4005   2301 _AX5043_POWIRQMASK	=	0x4005
                    4003   2302 G$AX5043_POWSTAT$0$0 == 0x4003
                    4003   2303 _AX5043_POWSTAT	=	0x4003
                    4004   2304 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                    4004   2305 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   2306 G$AX5043_PWRAMP$0$0 == 0x4027
                    4027   2307 _AX5043_PWRAMP	=	0x4027
                    4002   2308 G$AX5043_PWRMODE$0$0 == 0x4002
                    4002   2309 _AX5043_PWRMODE	=	0x4002
                    4009   2310 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                    4009   2311 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   2312 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                    4008   2313 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   2314 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                    400F   2315 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   2316 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                    400E   2317 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   2318 G$AX5043_RADIOSTATE$0$0 == 0x401c
                    401C   2319 _AX5043_RADIOSTATE	=	0x401c
                    4040   2320 G$AX5043_RSSI$0$0 == 0x4040
                    4040   2321 _AX5043_RSSI	=	0x4040
                    422D   2322 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                    422D   2323 _AX5043_RSSIABSTHR	=	0x422d
                    422C   2324 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                    422C   2325 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   2326 G$AX5043_RXDATARATE0$0$0 == 0x4105
                    4105   2327 _AX5043_RXDATARATE0	=	0x4105
                    4104   2328 G$AX5043_RXDATARATE1$0$0 == 0x4104
                    4104   2329 _AX5043_RXDATARATE1	=	0x4104
                    4103   2330 G$AX5043_RXDATARATE2$0$0 == 0x4103
                    4103   2331 _AX5043_RXDATARATE2	=	0x4103
                    4001   2332 G$AX5043_SCRATCH$0$0 == 0x4001
                    4001   2333 _AX5043_SCRATCH	=	0x4001
                    4000   2334 G$AX5043_SILICONREVISION$0$0 == 0x4000
                    4000   2335 _AX5043_SILICONREVISION	=	0x4000
                    405B   2336 G$AX5043_TIMER0$0$0 == 0x405b
                    405B   2337 _AX5043_TIMER0	=	0x405b
                    405A   2338 G$AX5043_TIMER1$0$0 == 0x405a
                    405A   2339 _AX5043_TIMER1	=	0x405a
                    4059   2340 G$AX5043_TIMER2$0$0 == 0x4059
                    4059   2341 _AX5043_TIMER2	=	0x4059
                    4227   2342 G$AX5043_TMGRXAGC$0$0 == 0x4227
                    4227   2343 _AX5043_TMGRXAGC	=	0x4227
                    4223   2344 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                    4223   2345 _AX5043_TMGRXBOOST	=	0x4223
                    4226   2346 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                    4226   2347 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   2348 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                    4225   2349 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   2350 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                    4229   2351 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   2352 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                    422A   2353 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   2354 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                    422B   2355 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   2356 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                    4228   2357 _AX5043_TMGRXRSSI	=	0x4228
                    4224   2358 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                    4224   2359 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   2360 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                    4220   2361 _AX5043_TMGTXBOOST	=	0x4220
                    4221   2362 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                    4221   2363 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   2364 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                    4055   2365 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   2366 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                    4054   2367 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   2368 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                    4049   2369 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   2370 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                    4048   2371 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   2372 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                    4047   2373 _AX5043_TRKDATARATE0	=	0x4047
                    4046   2374 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                    4046   2375 _AX5043_TRKDATARATE1	=	0x4046
                    4045   2376 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                    4045   2377 _AX5043_TRKDATARATE2	=	0x4045
                    4051   2378 G$AX5043_TRKFREQ0$0$0 == 0x4051
                    4051   2379 _AX5043_TRKFREQ0	=	0x4051
                    4050   2380 G$AX5043_TRKFREQ1$0$0 == 0x4050
                    4050   2381 _AX5043_TRKFREQ1	=	0x4050
                    4053   2382 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                    4053   2383 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   2384 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                    4052   2385 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   2386 G$AX5043_TRKPHASE0$0$0 == 0x404b
                    404B   2387 _AX5043_TRKPHASE0	=	0x404b
                    404A   2388 G$AX5043_TRKPHASE1$0$0 == 0x404a
                    404A   2389 _AX5043_TRKPHASE1	=	0x404a
                    404F   2390 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                    404F   2391 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   2392 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                    404E   2393 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   2394 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                    404D   2395 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   2396 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                    4169   2397 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   2398 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                    4168   2399 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   2400 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                    416B   2401 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   2402 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                    416A   2403 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   2404 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                    416D   2405 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   2406 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                    416C   2407 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   2408 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                    416F   2409 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   2410 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                    416E   2411 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   2412 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                    4171   2413 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   2414 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                    4170   2415 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   2416 G$AX5043_TXRATE0$0$0 == 0x4167
                    4167   2417 _AX5043_TXRATE0	=	0x4167
                    4166   2418 G$AX5043_TXRATE1$0$0 == 0x4166
                    4166   2419 _AX5043_TXRATE1	=	0x4166
                    4165   2420 G$AX5043_TXRATE2$0$0 == 0x4165
                    4165   2421 _AX5043_TXRATE2	=	0x4165
                    406B   2422 G$AX5043_WAKEUP0$0$0 == 0x406b
                    406B   2423 _AX5043_WAKEUP0	=	0x406b
                    406A   2424 G$AX5043_WAKEUP1$0$0 == 0x406a
                    406A   2425 _AX5043_WAKEUP1	=	0x406a
                    406D   2426 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                    406D   2427 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   2428 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                    406C   2429 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   2430 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                    4069   2431 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   2432 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                    4068   2433 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   2434 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                    406E   2435 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   2436 G$AX5043_XTALCAP$0$0 == 0x4184
                    4184   2437 _AX5043_XTALCAP	=	0x4184
                    401D   2438 G$AX5043_XTALSTATUS$0$0 == 0x401d
                    401D   2439 _AX5043_XTALSTATUS	=	0x401d
                    4122   2440 G$AX5043_AGCAHYST0$0$0 == 0x4122
                    4122   2441 _AX5043_AGCAHYST0	=	0x4122
                    4132   2442 G$AX5043_AGCAHYST1$0$0 == 0x4132
                    4132   2443 _AX5043_AGCAHYST1	=	0x4132
                    4142   2444 G$AX5043_AGCAHYST2$0$0 == 0x4142
                    4142   2445 _AX5043_AGCAHYST2	=	0x4142
                    4152   2446 G$AX5043_AGCAHYST3$0$0 == 0x4152
                    4152   2447 _AX5043_AGCAHYST3	=	0x4152
                    4120   2448 G$AX5043_AGCGAIN0$0$0 == 0x4120
                    4120   2449 _AX5043_AGCGAIN0	=	0x4120
                    4130   2450 G$AX5043_AGCGAIN1$0$0 == 0x4130
                    4130   2451 _AX5043_AGCGAIN1	=	0x4130
                    4140   2452 G$AX5043_AGCGAIN2$0$0 == 0x4140
                    4140   2453 _AX5043_AGCGAIN2	=	0x4140
                    4150   2454 G$AX5043_AGCGAIN3$0$0 == 0x4150
                    4150   2455 _AX5043_AGCGAIN3	=	0x4150
                    4123   2456 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                    4123   2457 _AX5043_AGCMINMAX0	=	0x4123
                    4133   2458 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                    4133   2459 _AX5043_AGCMINMAX1	=	0x4133
                    4143   2460 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                    4143   2461 _AX5043_AGCMINMAX2	=	0x4143
                    4153   2462 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                    4153   2463 _AX5043_AGCMINMAX3	=	0x4153
                    4121   2464 G$AX5043_AGCTARGET0$0$0 == 0x4121
                    4121   2465 _AX5043_AGCTARGET0	=	0x4121
                    4131   2466 G$AX5043_AGCTARGET1$0$0 == 0x4131
                    4131   2467 _AX5043_AGCTARGET1	=	0x4131
                    4141   2468 G$AX5043_AGCTARGET2$0$0 == 0x4141
                    4141   2469 _AX5043_AGCTARGET2	=	0x4141
                    4151   2470 G$AX5043_AGCTARGET3$0$0 == 0x4151
                    4151   2471 _AX5043_AGCTARGET3	=	0x4151
                    412B   2472 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                    412B   2473 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   2474 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                    413B   2475 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   2476 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                    414B   2477 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   2478 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                    415B   2479 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   2480 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                    412F   2481 _AX5043_BBOFFSRES0	=	0x412f
                    413F   2482 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                    413F   2483 _AX5043_BBOFFSRES1	=	0x413f
                    414F   2484 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                    414F   2485 _AX5043_BBOFFSRES2	=	0x414f
                    415F   2486 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                    415F   2487 _AX5043_BBOFFSRES3	=	0x415f
                    4125   2488 G$AX5043_DRGAIN0$0$0 == 0x4125
                    4125   2489 _AX5043_DRGAIN0	=	0x4125
                    4135   2490 G$AX5043_DRGAIN1$0$0 == 0x4135
                    4135   2491 _AX5043_DRGAIN1	=	0x4135
                    4145   2492 G$AX5043_DRGAIN2$0$0 == 0x4145
                    4145   2493 _AX5043_DRGAIN2	=	0x4145
                    4155   2494 G$AX5043_DRGAIN3$0$0 == 0x4155
                    4155   2495 _AX5043_DRGAIN3	=	0x4155
                    412E   2496 G$AX5043_FOURFSK0$0$0 == 0x412e
                    412E   2497 _AX5043_FOURFSK0	=	0x412e
                    413E   2498 G$AX5043_FOURFSK1$0$0 == 0x413e
                    413E   2499 _AX5043_FOURFSK1	=	0x413e
                    414E   2500 G$AX5043_FOURFSK2$0$0 == 0x414e
                    414E   2501 _AX5043_FOURFSK2	=	0x414e
                    415E   2502 G$AX5043_FOURFSK3$0$0 == 0x415e
                    415E   2503 _AX5043_FOURFSK3	=	0x415e
                    412D   2504 G$AX5043_FREQDEV00$0$0 == 0x412d
                    412D   2505 _AX5043_FREQDEV00	=	0x412d
                    413D   2506 G$AX5043_FREQDEV01$0$0 == 0x413d
                    413D   2507 _AX5043_FREQDEV01	=	0x413d
                    414D   2508 G$AX5043_FREQDEV02$0$0 == 0x414d
                    414D   2509 _AX5043_FREQDEV02	=	0x414d
                    415D   2510 G$AX5043_FREQDEV03$0$0 == 0x415d
                    415D   2511 _AX5043_FREQDEV03	=	0x415d
                    412C   2512 G$AX5043_FREQDEV10$0$0 == 0x412c
                    412C   2513 _AX5043_FREQDEV10	=	0x412c
                    413C   2514 G$AX5043_FREQDEV11$0$0 == 0x413c
                    413C   2515 _AX5043_FREQDEV11	=	0x413c
                    414C   2516 G$AX5043_FREQDEV12$0$0 == 0x414c
                    414C   2517 _AX5043_FREQDEV12	=	0x414c
                    415C   2518 G$AX5043_FREQDEV13$0$0 == 0x415c
                    415C   2519 _AX5043_FREQDEV13	=	0x415c
                    4127   2520 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                    4127   2521 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   2522 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                    4137   2523 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   2524 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                    4147   2525 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   2526 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                    4157   2527 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   2528 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                    4128   2529 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   2530 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                    4138   2531 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   2532 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                    4148   2533 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   2534 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                    4158   2535 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   2536 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                    4129   2537 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   2538 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                    4139   2539 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   2540 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                    4149   2541 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   2542 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                    4159   2543 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   2544 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                    412A   2545 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   2546 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                    413A   2547 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   2548 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                    414A   2549 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   2550 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                    415A   2551 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   2552 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                    4116   2553 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   2554 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                    4126   2555 _AX5043_PHASEGAIN0	=	0x4126
                    4136   2556 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                    4136   2557 _AX5043_PHASEGAIN1	=	0x4136
                    4146   2558 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                    4146   2559 _AX5043_PHASEGAIN2	=	0x4146
                    4156   2560 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                    4156   2561 _AX5043_PHASEGAIN3	=	0x4156
                    4207   2562 G$AX5043_PKTADDR0$0$0 == 0x4207
                    4207   2563 _AX5043_PKTADDR0	=	0x4207
                    4206   2564 G$AX5043_PKTADDR1$0$0 == 0x4206
                    4206   2565 _AX5043_PKTADDR1	=	0x4206
                    4205   2566 G$AX5043_PKTADDR2$0$0 == 0x4205
                    4205   2567 _AX5043_PKTADDR2	=	0x4205
                    4204   2568 G$AX5043_PKTADDR3$0$0 == 0x4204
                    4204   2569 _AX5043_PKTADDR3	=	0x4204
                    4200   2570 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                    4200   2571 _AX5043_PKTADDRCFG	=	0x4200
                    420B   2572 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                    420B   2573 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   2574 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                    420A   2575 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   2576 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                    4209   2577 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   2578 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                    4208   2579 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   2580 G$AX5043_PKTLENCFG$0$0 == 0x4201
                    4201   2581 _AX5043_PKTLENCFG	=	0x4201
                    4202   2582 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                    4202   2583 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   2584 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                    4203   2585 _AX5043_PKTMAXLEN	=	0x4203
                    4118   2586 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                    4118   2587 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   2588 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                    4117   2589 _AX5043_RXPARAMSETS	=	0x4117
                    4124   2590 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                    4124   2591 _AX5043_TIMEGAIN0	=	0x4124
                    4134   2592 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                    4134   2593 _AX5043_TIMEGAIN1	=	0x4134
                    4144   2594 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                    4144   2595 _AX5043_TIMEGAIN2	=	0x4144
                    4154   2596 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                    4154   2597 _AX5043_TIMEGAIN3	=	0x4154
                    5114   2598 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                    5114   2599 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   2600 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                    5113   2601 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   2602 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                    5112   2603 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   2604 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                    5111   2605 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   2606 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                    5110   2607 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   2608 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                    5043   2609 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   2610 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                    5115   2611 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   2612 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                    5189   2613 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   2614 G$AX5043_BBTUNENB$0$0 == 0x5188
                    5188   2615 _AX5043_BBTUNENB	=	0x5188
                    5041   2616 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                    5041   2617 _AX5043_BGNDRSSINB	=	0x5041
                    522E   2618 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                    522E   2619 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   2620 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                    522F   2621 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   2622 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                    5017   2623 _AX5043_CRCINIT0NB	=	0x5017
                    5016   2624 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                    5016   2625 _AX5043_CRCINIT1NB	=	0x5016
                    5015   2626 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                    5015   2627 _AX5043_CRCINIT2NB	=	0x5015
                    5014   2628 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                    5014   2629 _AX5043_CRCINIT3NB	=	0x5014
                    5332   2630 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                    5332   2631 _AX5043_DACCONFIGNB	=	0x5332
                    5331   2632 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                    5331   2633 _AX5043_DACVALUE0NB	=	0x5331
                    5330   2634 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                    5330   2635 _AX5043_DACVALUE1NB	=	0x5330
                    5102   2636 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                    5102   2637 _AX5043_DECIMATIONNB	=	0x5102
                    5042   2638 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                    5042   2639 _AX5043_DIVERSITYNB	=	0x5042
                    5011   2640 G$AX5043_ENCODINGNB$0$0 == 0x5011
                    5011   2641 _AX5043_ENCODINGNB	=	0x5011
                    5018   2642 G$AX5043_FECNB$0$0 == 0x5018
                    5018   2643 _AX5043_FECNB	=	0x5018
                    501A   2644 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                    501A   2645 _AX5043_FECSTATUSNB	=	0x501a
                    5019   2646 G$AX5043_FECSYNCNB$0$0 == 0x5019
                    5019   2647 _AX5043_FECSYNCNB	=	0x5019
                    502B   2648 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                    502B   2649 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   2650 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                    502A   2651 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   2652 G$AX5043_FIFODATANB$0$0 == 0x5029
                    5029   2653 _AX5043_FIFODATANB	=	0x5029
                    502D   2654 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                    502D   2655 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   2656 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                    502C   2657 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   2658 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                    5028   2659 _AX5043_FIFOSTATNB	=	0x5028
                    502F   2660 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                    502F   2661 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   2662 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                    502E   2663 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   2664 G$AX5043_FRAMINGNB$0$0 == 0x5012
                    5012   2665 _AX5043_FRAMINGNB	=	0x5012
                    5037   2666 G$AX5043_FREQA0NB$0$0 == 0x5037
                    5037   2667 _AX5043_FREQA0NB	=	0x5037
                    5036   2668 G$AX5043_FREQA1NB$0$0 == 0x5036
                    5036   2669 _AX5043_FREQA1NB	=	0x5036
                    5035   2670 G$AX5043_FREQA2NB$0$0 == 0x5035
                    5035   2671 _AX5043_FREQA2NB	=	0x5035
                    5034   2672 G$AX5043_FREQA3NB$0$0 == 0x5034
                    5034   2673 _AX5043_FREQA3NB	=	0x5034
                    503F   2674 G$AX5043_FREQB0NB$0$0 == 0x503f
                    503F   2675 _AX5043_FREQB0NB	=	0x503f
                    503E   2676 G$AX5043_FREQB1NB$0$0 == 0x503e
                    503E   2677 _AX5043_FREQB1NB	=	0x503e
                    503D   2678 G$AX5043_FREQB2NB$0$0 == 0x503d
                    503D   2679 _AX5043_FREQB2NB	=	0x503d
                    503C   2680 G$AX5043_FREQB3NB$0$0 == 0x503c
                    503C   2681 _AX5043_FREQB3NB	=	0x503c
                    5163   2682 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                    5163   2683 _AX5043_FSKDEV0NB	=	0x5163
                    5162   2684 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                    5162   2685 _AX5043_FSKDEV1NB	=	0x5162
                    5161   2686 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                    5161   2687 _AX5043_FSKDEV2NB	=	0x5161
                    510D   2688 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                    510D   2689 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   2690 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                    510C   2691 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   2692 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                    510F   2693 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   2694 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                    510E   2695 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   2696 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                    5309   2697 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   2698 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                    5308   2699 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   2700 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                    5300   2701 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   2702 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                    5301   2703 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   2704 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                    5101   2705 _AX5043_IFFREQ0NB	=	0x5101
                    5100   2706 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                    5100   2707 _AX5043_IFFREQ1NB	=	0x5100
                    500B   2708 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                    500B   2709 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   2710 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                    500A   2711 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   2712 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                    5007   2713 _AX5043_IRQMASK0NB	=	0x5007
                    5006   2714 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                    5006   2715 _AX5043_IRQMASK1NB	=	0x5006
                    500D   2716 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                    500D   2717 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   2718 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                    500C   2719 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   2720 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                    5310   2721 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   2722 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                    5317   2723 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   2724 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                    5316   2725 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   2726 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                    5313   2727 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   2728 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                    5312   2729 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   2730 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                    5319   2731 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   2732 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                    5318   2733 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   2734 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                    5315   2735 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   2736 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                    5314   2737 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   2738 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                    5311   2739 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   2740 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                    5214   2741 _AX5043_MATCH0LENNB	=	0x5214
                    5216   2742 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                    5216   2743 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   2744 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                    5215   2745 _AX5043_MATCH0MINNB	=	0x5215
                    5213   2746 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                    5213   2747 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   2748 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                    5212   2749 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   2750 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                    5211   2751 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   2752 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                    5210   2753 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   2754 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                    521C   2755 _AX5043_MATCH1LENNB	=	0x521c
                    521E   2756 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                    521E   2757 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   2758 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                    521D   2759 _AX5043_MATCH1MINNB	=	0x521d
                    5219   2760 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                    5219   2761 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   2762 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                    5218   2763 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   2764 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                    5108   2765 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   2766 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                    5107   2767 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   2768 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                    5106   2769 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   2770 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                    510B   2771 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   2772 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                    510A   2773 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   2774 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                    5109   2775 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   2776 G$AX5043_MODCFGANB$0$0 == 0x5164
                    5164   2777 _AX5043_MODCFGANB	=	0x5164
                    5160   2778 G$AX5043_MODCFGFNB$0$0 == 0x5160
                    5160   2779 _AX5043_MODCFGFNB	=	0x5160
                    5010   2780 G$AX5043_MODULATIONNB$0$0 == 0x5010
                    5010   2781 _AX5043_MODULATIONNB	=	0x5010
                    5025   2782 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                    5025   2783 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   2784 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                    5023   2785 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   2786 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                    5022   2787 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   2788 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                    5024   2789 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   2790 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                    5026   2791 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   2792 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                    5021   2793 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   2794 G$AX5043_PINSTATENB$0$0 == 0x5020
                    5020   2795 _AX5043_PINSTATENB	=	0x5020
                    5233   2796 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                    5233   2797 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   2798 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                    5230   2799 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   2800 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                    5231   2801 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   2802 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                    5232   2803 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   2804 G$AX5043_PLLCPINB$0$0 == 0x5031
                    5031   2805 _AX5043_PLLCPINB	=	0x5031
                    5039   2806 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                    5039   2807 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   2808 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                    5182   2809 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   2810 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                    5030   2811 _AX5043_PLLLOOPNB	=	0x5030
                    5038   2812 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                    5038   2813 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   2814 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                    5033   2815 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   2816 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                    503B   2817 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   2818 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                    5183   2819 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   2820 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                    5032   2821 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   2822 G$AX5043_PLLVCOINB$0$0 == 0x5180
                    5180   2823 _AX5043_PLLVCOINB	=	0x5180
                    5181   2824 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                    5181   2825 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   2826 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                    5005   2827 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   2828 G$AX5043_POWSTATNB$0$0 == 0x5003
                    5003   2829 _AX5043_POWSTATNB	=	0x5003
                    5004   2830 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                    5004   2831 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   2832 G$AX5043_PWRAMPNB$0$0 == 0x5027
                    5027   2833 _AX5043_PWRAMPNB	=	0x5027
                    5002   2834 G$AX5043_PWRMODENB$0$0 == 0x5002
                    5002   2835 _AX5043_PWRMODENB	=	0x5002
                    5009   2836 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                    5009   2837 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   2838 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                    5008   2839 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   2840 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                    500F   2841 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   2842 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                    500E   2843 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   2844 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                    501C   2845 _AX5043_RADIOSTATENB	=	0x501c
                    5040   2846 G$AX5043_RSSINB$0$0 == 0x5040
                    5040   2847 _AX5043_RSSINB	=	0x5040
                    522D   2848 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                    522D   2849 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   2850 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                    522C   2851 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   2852 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                    5105   2853 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   2854 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                    5104   2855 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   2856 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                    5103   2857 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   2858 G$AX5043_SCRATCHNB$0$0 == 0x5001
                    5001   2859 _AX5043_SCRATCHNB	=	0x5001
                    5000   2860 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                    5000   2861 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   2862 G$AX5043_TIMER0NB$0$0 == 0x505b
                    505B   2863 _AX5043_TIMER0NB	=	0x505b
                    505A   2864 G$AX5043_TIMER1NB$0$0 == 0x505a
                    505A   2865 _AX5043_TIMER1NB	=	0x505a
                    5059   2866 G$AX5043_TIMER2NB$0$0 == 0x5059
                    5059   2867 _AX5043_TIMER2NB	=	0x5059
                    5227   2868 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                    5227   2869 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   2870 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                    5223   2871 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   2872 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                    5226   2873 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   2874 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                    5225   2875 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   2876 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                    5229   2877 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   2878 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                    522A   2879 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   2880 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                    522B   2881 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   2882 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                    5228   2883 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   2884 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                    5224   2885 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   2886 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                    5220   2887 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   2888 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                    5221   2889 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   2890 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                    5055   2891 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   2892 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                    5054   2893 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   2894 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                    5049   2895 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   2896 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                    5048   2897 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   2898 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                    5047   2899 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   2900 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                    5046   2901 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   2902 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                    5045   2903 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   2904 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                    5051   2905 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   2906 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                    5050   2907 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   2908 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                    5053   2909 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   2910 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                    5052   2911 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   2912 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                    504B   2913 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   2914 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                    504A   2915 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   2916 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                    504F   2917 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   2918 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                    504E   2919 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   2920 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                    504D   2921 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   2922 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                    5169   2923 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   2924 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                    5168   2925 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   2926 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                    516B   2927 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   2928 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                    516A   2929 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   2930 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                    516D   2931 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   2932 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                    516C   2933 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   2934 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                    516F   2935 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   2936 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                    516E   2937 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   2938 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                    5171   2939 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   2940 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                    5170   2941 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   2942 G$AX5043_TXRATE0NB$0$0 == 0x5167
                    5167   2943 _AX5043_TXRATE0NB	=	0x5167
                    5166   2944 G$AX5043_TXRATE1NB$0$0 == 0x5166
                    5166   2945 _AX5043_TXRATE1NB	=	0x5166
                    5165   2946 G$AX5043_TXRATE2NB$0$0 == 0x5165
                    5165   2947 _AX5043_TXRATE2NB	=	0x5165
                    506B   2948 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                    506B   2949 _AX5043_WAKEUP0NB	=	0x506b
                    506A   2950 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                    506A   2951 _AX5043_WAKEUP1NB	=	0x506a
                    506D   2952 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                    506D   2953 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   2954 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                    506C   2955 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   2956 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                    5069   2957 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   2958 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                    5068   2959 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   2960 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                    506E   2961 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   2962 G$AX5043_XTALCAPNB$0$0 == 0x5184
                    5184   2963 _AX5043_XTALCAPNB	=	0x5184
                    501D   2964 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                    501D   2965 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   2966 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                    5122   2967 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   2968 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                    5132   2969 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   2970 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                    5142   2971 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   2972 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                    5152   2973 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   2974 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                    5120   2975 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   2976 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                    5130   2977 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   2978 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                    5140   2979 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   2980 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                    5150   2981 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   2982 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                    5123   2983 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   2984 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                    5133   2985 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   2986 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                    5143   2987 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   2988 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                    5153   2989 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   2990 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                    5121   2991 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   2992 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                    5131   2993 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   2994 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                    5141   2995 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   2996 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                    5151   2997 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   2998 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                    512B   2999 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   3000 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                    513B   3001 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   3002 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                    514B   3003 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   3004 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                    515B   3005 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   3006 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                    512F   3007 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   3008 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                    513F   3009 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   3010 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                    514F   3011 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   3012 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                    515F   3013 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   3014 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                    5125   3015 _AX5043_DRGAIN0NB	=	0x5125
                    5135   3016 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                    5135   3017 _AX5043_DRGAIN1NB	=	0x5135
                    5145   3018 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                    5145   3019 _AX5043_DRGAIN2NB	=	0x5145
                    5155   3020 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                    5155   3021 _AX5043_DRGAIN3NB	=	0x5155
                    512E   3022 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                    512E   3023 _AX5043_FOURFSK0NB	=	0x512e
                    513E   3024 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                    513E   3025 _AX5043_FOURFSK1NB	=	0x513e
                    514E   3026 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                    514E   3027 _AX5043_FOURFSK2NB	=	0x514e
                    515E   3028 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                    515E   3029 _AX5043_FOURFSK3NB	=	0x515e
                    512D   3030 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                    512D   3031 _AX5043_FREQDEV00NB	=	0x512d
                    513D   3032 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                    513D   3033 _AX5043_FREQDEV01NB	=	0x513d
                    514D   3034 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                    514D   3035 _AX5043_FREQDEV02NB	=	0x514d
                    515D   3036 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                    515D   3037 _AX5043_FREQDEV03NB	=	0x515d
                    512C   3038 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                    512C   3039 _AX5043_FREQDEV10NB	=	0x512c
                    513C   3040 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                    513C   3041 _AX5043_FREQDEV11NB	=	0x513c
                    514C   3042 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                    514C   3043 _AX5043_FREQDEV12NB	=	0x514c
                    515C   3044 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                    515C   3045 _AX5043_FREQDEV13NB	=	0x515c
                    5127   3046 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                    5127   3047 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   3048 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                    5137   3049 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   3050 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                    5147   3051 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   3052 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                    5157   3053 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   3054 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                    5128   3055 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   3056 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                    5138   3057 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   3058 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                    5148   3059 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   3060 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                    5158   3061 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   3062 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                    5129   3063 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   3064 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                    5139   3065 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   3066 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                    5149   3067 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   3068 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                    5159   3069 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   3070 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                    512A   3071 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   3072 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                    513A   3073 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   3074 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                    514A   3075 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   3076 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                    515A   3077 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   3078 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                    5116   3079 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   3080 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                    5126   3081 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   3082 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                    5136   3083 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   3084 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                    5146   3085 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   3086 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                    5156   3087 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   3088 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                    5207   3089 _AX5043_PKTADDR0NB	=	0x5207
                    5206   3090 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                    5206   3091 _AX5043_PKTADDR1NB	=	0x5206
                    5205   3092 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                    5205   3093 _AX5043_PKTADDR2NB	=	0x5205
                    5204   3094 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                    5204   3095 _AX5043_PKTADDR3NB	=	0x5204
                    5200   3096 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                    5200   3097 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   3098 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                    520B   3099 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   3100 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                    520A   3101 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   3102 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                    5209   3103 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   3104 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                    5208   3105 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   3106 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                    5201   3107 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   3108 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                    5202   3109 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   3110 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                    5203   3111 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   3112 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                    5118   3113 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   3114 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                    5117   3115 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   3116 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                    5124   3117 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   3118 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                    5134   3119 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   3120 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                    5144   3121 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   3122 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                    5154   3123 _AX5043_TIMEGAIN3NB	=	0x5154
                    4F00   3124 G$AX5043_0xF00$0$0 == 0x4f00
                    4F00   3125 _AX5043_0xF00	=	0x4f00
                    4F01   3126 G$AX5043_0xF01$0$0 == 0x4f01
                    4F01   3127 _AX5043_0xF01	=	0x4f01
                    4F0C   3128 G$AX5043_0xF0C$0$0 == 0x4f0c
                    4F0C   3129 _AX5043_0xF0C	=	0x4f0c
                    4F10   3130 G$AX5043_0xF10$0$0 == 0x4f10
                    4F10   3131 _AX5043_0xF10	=	0x4f10
                    4F11   3132 G$AX5043_0xF11$0$0 == 0x4f11
                    4F11   3133 _AX5043_0xF11	=	0x4f11
                    4F18   3134 G$AX5043_0xF18$0$0 == 0x4f18
                    4F18   3135 _AX5043_0xF18	=	0x4f18
                    4F1C   3136 G$AX5043_0xF1C$0$0 == 0x4f1c
                    4F1C   3137 _AX5043_0xF1C	=	0x4f1c
                    4F21   3138 G$AX5043_0xF21$0$0 == 0x4f21
                    4F21   3139 _AX5043_0xF21	=	0x4f21
                    4F22   3140 G$AX5043_0xF22$0$0 == 0x4f22
                    4F22   3141 _AX5043_0xF22	=	0x4f22
                    4F23   3142 G$AX5043_0xF23$0$0 == 0x4f23
                    4F23   3143 _AX5043_0xF23	=	0x4f23
                    4F26   3144 G$AX5043_0xF26$0$0 == 0x4f26
                    4F26   3145 _AX5043_0xF26	=	0x4f26
                    4F2F   3146 G$AX5043_0xF2F$0$0 == 0x4f2f
                    4F2F   3147 _AX5043_0xF2F	=	0x4f2f
                    4F30   3148 G$AX5043_0xF30$0$0 == 0x4f30
                    4F30   3149 _AX5043_0xF30	=	0x4f30
                    4F31   3150 G$AX5043_0xF31$0$0 == 0x4f31
                    4F31   3151 _AX5043_0xF31	=	0x4f31
                    4F32   3152 G$AX5043_0xF32$0$0 == 0x4f32
                    4F32   3153 _AX5043_0xF32	=	0x4f32
                    4F33   3154 G$AX5043_0xF33$0$0 == 0x4f33
                    4F33   3155 _AX5043_0xF33	=	0x4f33
                    4F34   3156 G$AX5043_0xF34$0$0 == 0x4f34
                    4F34   3157 _AX5043_0xF34	=	0x4f34
                    4F35   3158 G$AX5043_0xF35$0$0 == 0x4f35
                    4F35   3159 _AX5043_0xF35	=	0x4f35
                    4F44   3160 G$AX5043_0xF44$0$0 == 0x4f44
                    4F44   3161 _AX5043_0xF44	=	0x4f44
                    4F0D   3162 G$AX5043_REF$0$0 == 0x4f0d
                    4F0D   3163 _AX5043_REF	=	0x4f0d
                    4F08   3164 G$AX5043_POWCTRL1$0$0 == 0x4f08
                    4F08   3165 _AX5043_POWCTRL1	=	0x4f08
                           3166 ;--------------------------------------------------------
                           3167 ; absolute external ram data
                           3168 ;--------------------------------------------------------
                           3169 	.area XABS    (ABS,XDATA)
                           3170 ;--------------------------------------------------------
                           3171 ; external initialized ram data
                           3172 ;--------------------------------------------------------
                           3173 	.area XISEG   (XDATA)
                           3174 	.area HOME    (CODE)
                           3175 	.area GSINIT0 (CODE)
                           3176 	.area GSINIT1 (CODE)
                           3177 	.area GSINIT2 (CODE)
                           3178 	.area GSINIT3 (CODE)
                           3179 	.area GSINIT4 (CODE)
                           3180 	.area GSINIT5 (CODE)
                           3181 	.area GSINIT  (CODE)
                           3182 	.area GSFINAL (CODE)
                           3183 	.area CSEG    (CODE)
                           3184 ;--------------------------------------------------------
                           3185 ; global & static initialisations
                           3186 ;--------------------------------------------------------
                           3187 	.area HOME    (CODE)
                           3188 	.area GSINIT  (CODE)
                           3189 	.area GSFINAL (CODE)
                           3190 	.area GSINIT  (CODE)
                           3191 ;--------------------------------------------------------
                           3192 ; Home
                           3193 ;--------------------------------------------------------
                           3194 	.area HOME    (CODE)
                           3195 	.area HOME    (CODE)
                           3196 ;--------------------------------------------------------
                           3197 ; code
                           3198 ;--------------------------------------------------------
                           3199 	.area CSEG    (CODE)
                           3200 ;------------------------------------------------------------
                           3201 ;Allocation info for local variables in function 'wait_n_lposccycles'
                           3202 ;------------------------------------------------------------
                           3203 ;n                         Allocated to registers r7 
                           3204 ;cnt                       Allocated to registers r6 
                           3205 ;------------------------------------------------------------
                    0000   3206 	Flposc$wait_n_lposccycles$0$0 ==.
                    0000   3207 	C$lposc.c$37$0$0 ==.
                           3208 ;	lposc.c:37: static void wait_n_lposccycles(uint8_t n)
                           3209 ;	-----------------------------------------
                           3210 ;	 function wait_n_lposccycles
                           3211 ;	-----------------------------------------
   373D                    3212 _wait_n_lposccycles:
                    0007   3213 	ar7 = 0x07
                    0006   3214 	ar6 = 0x06
                    0005   3215 	ar5 = 0x05
                    0004   3216 	ar4 = 0x04
                    0003   3217 	ar3 = 0x03
                    0002   3218 	ar2 = 0x02
                    0001   3219 	ar1 = 0x01
                    0000   3220 	ar0 = 0x00
   373D AF 82              3221 	mov	r7,dpl
                    0002   3222 	C$lposc.c$40$1$64 ==.
                           3223 ;	lposc.c:40: EA = 0; // isr is not handling lposc irq
   373F C2 AF              3224 	clr	_EA
                    0004   3225 	C$lposc.c$41$1$64 ==.
                           3226 ;	lposc.c:41: AX5043_IRQMASK1 |= 0x04; // LPOSC irq
   3741 90 40 06           3227 	mov	dptr,#_AX5043_IRQMASK1
   3744 E0                 3228 	movx	a,@dptr
   3745 44 04              3229 	orl	a,#0x04
   3747 F0                 3230 	movx	@dptr,a
   3748 7E 00              3231 	mov	r6,#0x00
   374A                    3232 00106$:
                    000D   3233 	C$lposc.c$44$2$65 ==.
                           3234 ;	lposc.c:44: if( AX5043_IRQREQUEST1 & 0x04 )
   374A 90 40 0C           3235 	mov	dptr,#_AX5043_IRQREQUEST1
   374D E0                 3236 	movx	a,@dptr
   374E FD                 3237 	mov	r5,a
   374F 30 E2 05           3238 	jnb	acc.2,00102$
                    0015   3239 	C$lposc.c$46$3$66 ==.
                           3240 ;	lposc.c:46: cnt++;
   3752 0E                 3241 	inc	r6
                    0016   3242 	C$lposc.c$47$3$66 ==.
                           3243 ;	lposc.c:47: AX5043_LPOSCSTATUS; // clear irq request
   3753 90 43 11           3244 	mov	dptr,#_AX5043_LPOSCSTATUS
   3756 E0                 3245 	movx	a,@dptr
   3757                    3246 00102$:
                    001A   3247 	C$lposc.c$50$2$65 ==.
                           3248 ;	lposc.c:50: if(cnt > n)
   3757 C3                 3249 	clr	c
   3758 EF                 3250 	mov	a,r7
   3759 9E                 3251 	subb	a,r6
   375A 40 05              3252 	jc	00107$
                    001F   3253 	C$lposc.c$52$2$65 ==.
                           3254 ;	lposc.c:52: enter_standby();
   375C 12 46 FD           3255 	lcall	_enter_standby
   375F 80 E9              3256 	sjmp	00106$
   3761                    3257 00107$:
                    0024   3258 	C$lposc.c$55$1$64 ==.
                           3259 ;	lposc.c:55: AX5043_IRQMASK1 &= ~0x04; // disable LPOSC irq
   3761 90 40 06           3260 	mov	dptr,#_AX5043_IRQMASK1
   3764 E0                 3261 	movx	a,@dptr
   3765 54 FB              3262 	anl	a,#0xFB
   3767 F0                 3263 	movx	@dptr,a
                    002B   3264 	C$lposc.c$56$1$64 ==.
                           3265 ;	lposc.c:56: EA = 1;
   3768 D2 AF              3266 	setb	_EA
                    002D   3267 	C$lposc.c$57$1$64 ==.
                    002D   3268 	XFlposc$wait_n_lposccycles$0$0 ==.
   376A 22                 3269 	ret
                           3270 ;------------------------------------------------------------
                           3271 ;Allocation info for local variables in function 'calibrate_lposc'
                           3272 ;------------------------------------------------------------
                           3273 ;x                         Allocated to registers r7 
                           3274 ;------------------------------------------------------------
                    002E   3275 	G$calibrate_lposc$0$0 ==.
                    002E   3276 	C$lposc.c$59$1$64 ==.
                           3277 ;	lposc.c:59: void calibrate_lposc(void)
                           3278 ;	-----------------------------------------
                           3279 ;	 function calibrate_lposc
                           3280 ;	-----------------------------------------
   376B                    3281 _calibrate_lposc:
                    002E   3282 	C$lposc.c$61$1$68 ==.
                           3283 ;	lposc.c:61: AX5043_LPOSCFREQ1 = 0x00;
   376B 90 43 16           3284 	mov	dptr,#_AX5043_LPOSCFREQ1
                    0031   3285 	C$lposc.c$62$1$68 ==.
                           3286 ;	lposc.c:62: AX5043_LPOSCFREQ0 = 0x00;
   376E E4                 3287 	clr	a
   376F F0                 3288 	movx	@dptr,a
   3770 90 43 17           3289 	mov	dptr,#_AX5043_LPOSCFREQ0
   3773 F0                 3290 	movx	@dptr,a
                    0037   3291 	C$lposc.c$64$1$68 ==.
                           3292 ;	lposc.c:64: AX5043_LPOSCREF1 = ((FXTAL/640)>>8) & 0xFF;
   3774 90 43 14           3293 	mov	dptr,#_AX5043_LPOSCREF1
   3777 74 24              3294 	mov	a,#0x24
   3779 F0                 3295 	movx	@dptr,a
                    003D   3296 	C$lposc.c$65$1$68 ==.
                           3297 ;	lposc.c:65: AX5043_LPOSCREF0 = ((FXTAL/640)>>0) & 0xFF;
   377A 90 43 15           3298 	mov	dptr,#_AX5043_LPOSCREF0
   377D 74 F8              3299 	mov	a,#0xF8
   377F F0                 3300 	movx	@dptr,a
                    0043   3301 	C$lposc.c$66$1$68 ==.
                           3302 ;	lposc.c:66: AX5043_PWRMODE = AX5043_PWRSTATE_SYNTH_RX;
   3780 90 40 02           3303 	mov	dptr,#_AX5043_PWRMODE
   3783 74 08              3304 	mov	a,#0x08
   3785 F0                 3305 	movx	@dptr,a
                    0049   3306 	C$lposc.c$67$1$68 ==.
                           3307 ;	lposc.c:67: AX5043_LPOSCKFILT1 = (lposckfiltmax >> (8 + 1)) & 0xFF; // kfiltmax >> 1
   3786 90 56 8C           3308 	mov	dptr,#_lposckfiltmax
   3789 E4                 3309 	clr	a
   378A 93                 3310 	movc	a,@a+dptr
   378B FE                 3311 	mov	r6,a
   378C 74 01              3312 	mov	a,#0x01
   378E 93                 3313 	movc	a,@a+dptr
   378F FF                 3314 	mov	r7,a
   3790 C3                 3315 	clr	c
   3791 13                 3316 	rrc	a
   3792 FC                 3317 	mov	r4,a
   3793 90 43 12           3318 	mov	dptr,#_AX5043_LPOSCKFILT1
   3796 EC                 3319 	mov	a,r4
   3797 F0                 3320 	movx	@dptr,a
                    005B   3321 	C$lposc.c$68$1$68 ==.
                           3322 ;	lposc.c:68: AX5043_LPOSCKFILT0 = (lposckfiltmax >> 1) & 0xFF;
   3798 EF                 3323 	mov	a,r7
   3799 C3                 3324 	clr	c
   379A 13                 3325 	rrc	a
   379B CE                 3326 	xch	a,r6
   379C 13                 3327 	rrc	a
   379D CE                 3328 	xch	a,r6
   379E 90 43 13           3329 	mov	dptr,#_AX5043_LPOSCKFILT0
   37A1 EE                 3330 	mov	a,r6
   37A2 F0                 3331 	movx	@dptr,a
                    0066   3332 	C$lposc.c$69$1$68 ==.
                           3333 ;	lposc.c:69: axradio_wait_for_xtal();
   37A3 12 14 A7           3334 	lcall	_axradio_wait_for_xtal
                    0069   3335 	C$lposc.c$71$1$68 ==.
                           3336 ;	lposc.c:71: AX5043_LPOSCCONFIG =  0x25; // LPOSC ENA, slow mode; calibrate on rising edge, irq on rising edge
   37A6 90 43 10           3337 	mov	dptr,#_AX5043_LPOSCCONFIG
   37A9 74 25              3338 	mov	a,#0x25
   37AB F0                 3339 	movx	@dptr,a
                    006F   3340 	C$lposc.c$72$1$68 ==.
                           3341 ;	lposc.c:72: wait_n_lposccycles(6);
   37AC 75 82 06           3342 	mov	dpl,#0x06
   37AF 12 37 3D           3343 	lcall	_wait_n_lposccycles
                    0075   3344 	C$lposc.c$75$1$68 ==.
                           3345 ;	lposc.c:75: if( AX5043_LPOSCFREQ1 == 0x7F)
   37B2 90 43 16           3346 	mov	dptr,#_AX5043_LPOSCFREQ1
   37B5 E0                 3347 	movx	a,@dptr
   37B6 FF                 3348 	mov	r7,a
   37B7 BF 7F 0C           3349 	cjne	r7,#0x7F,00102$
                    007D   3350 	C$lposc.c$78$2$69 ==.
                           3351 ;	lposc.c:78: AX5043_LPOSCFREQ1 = 0xBC;
   37BA 90 43 16           3352 	mov	dptr,#_AX5043_LPOSCFREQ1
   37BD 74 BC              3353 	mov	a,#0xBC
   37BF F0                 3354 	movx	@dptr,a
                    0083   3355 	C$lposc.c$79$2$69 ==.
                           3356 ;	lposc.c:79: wait_n_lposccycles(6);
   37C0 75 82 06           3357 	mov	dpl,#0x06
   37C3 12 37 3D           3358 	lcall	_wait_n_lposccycles
   37C6                    3359 00102$:
                    0089   3360 	C$lposc.c$82$1$68 ==.
                           3361 ;	lposc.c:82: if( AX5043_LPOSCFREQ1 == 0x80)
   37C6 90 43 16           3362 	mov	dptr,#_AX5043_LPOSCFREQ1
   37C9 E0                 3363 	movx	a,@dptr
   37CA FF                 3364 	mov	r7,a
   37CB BF 80 0C           3365 	cjne	r7,#0x80,00104$
                    0091   3366 	C$lposc.c$85$2$70 ==.
                           3367 ;	lposc.c:85: AX5043_LPOSCFREQ1 = 0xA8;
   37CE 90 43 16           3368 	mov	dptr,#_AX5043_LPOSCFREQ1
   37D1 74 A8              3369 	mov	a,#0xA8
   37D3 F0                 3370 	movx	@dptr,a
                    0097   3371 	C$lposc.c$86$2$70 ==.
                           3372 ;	lposc.c:86: wait_n_lposccycles(6);
   37D4 75 82 06           3373 	mov	dpl,#0x06
   37D7 12 37 3D           3374 	lcall	_wait_n_lposccycles
   37DA                    3375 00104$:
                    009D   3376 	C$lposc.c$90$1$68 ==.
                           3377 ;	lposc.c:90: AX5043_LPOSCKFILT1 = (lposckfiltmax >> (8 + 2)) & 0xFF; // kfiltmax >> 2
   37DA 90 56 8C           3378 	mov	dptr,#_lposckfiltmax
   37DD E4                 3379 	clr	a
   37DE 93                 3380 	movc	a,@a+dptr
   37DF FE                 3381 	mov	r6,a
   37E0 74 01              3382 	mov	a,#0x01
   37E2 93                 3383 	movc	a,@a+dptr
   37E3 FF                 3384 	mov	r7,a
   37E4 03                 3385 	rr	a
   37E5 03                 3386 	rr	a
   37E6 54 3F              3387 	anl	a,#0x3F
   37E8 FC                 3388 	mov	r4,a
   37E9 90 43 12           3389 	mov	dptr,#_AX5043_LPOSCKFILT1
   37EC EC                 3390 	mov	a,r4
   37ED F0                 3391 	movx	@dptr,a
                    00B1   3392 	C$lposc.c$91$1$68 ==.
                           3393 ;	lposc.c:91: AX5043_LPOSCKFILT0 = (lposckfiltmax >> 2) & 0xFF;
   37EE EF                 3394 	mov	a,r7
   37EF C3                 3395 	clr	c
   37F0 13                 3396 	rrc	a
   37F1 CE                 3397 	xch	a,r6
   37F2 13                 3398 	rrc	a
   37F3 CE                 3399 	xch	a,r6
   37F4 C3                 3400 	clr	c
   37F5 13                 3401 	rrc	a
   37F6 CE                 3402 	xch	a,r6
   37F7 13                 3403 	rrc	a
   37F8 CE                 3404 	xch	a,r6
   37F9 90 43 13           3405 	mov	dptr,#_AX5043_LPOSCKFILT0
   37FC EE                 3406 	mov	a,r6
   37FD F0                 3407 	movx	@dptr,a
                    00C1   3408 	C$lposc.c$92$1$68 ==.
                           3409 ;	lposc.c:92: wait_n_lposccycles(5);
   37FE 75 82 05           3410 	mov	dpl,#0x05
   3801 12 37 3D           3411 	lcall	_wait_n_lposccycles
                    00C7   3412 	C$lposc.c$94$1$68 ==.
                           3413 ;	lposc.c:94: AX5043_LPOSCCONFIG = 0x00;
   3804 90 43 10           3414 	mov	dptr,#_AX5043_LPOSCCONFIG
                    00CA   3415 	C$lposc.c$95$1$68 ==.
                           3416 ;	lposc.c:95: AX5043_PWRMODE = AX5043_PWRSTATE_POWERDOWN;
   3807 E4                 3417 	clr	a
   3808 F0                 3418 	movx	@dptr,a
   3809 90 40 02           3419 	mov	dptr,#_AX5043_PWRMODE
   380C F0                 3420 	movx	@dptr,a
                    00D0   3421 	C$lposc.c$98$2$68 ==.
                           3422 ;	lposc.c:98: uint8_t x = AX5043_LPOSCFREQ1;
   380D 90 43 16           3423 	mov	dptr,#_AX5043_LPOSCFREQ1
   3810 E0                 3424 	movx	a,@dptr
   3811 FF                 3425 	mov	r7,a
                    00D5   3426 	C$lposc.c$99$2$71 ==.
                           3427 ;	lposc.c:99: if( x == 0x7f || x == 0x80 )
   3812 BF 7F 02           3428 	cjne	r7,#0x7F,00120$
   3815 80 03              3429 	sjmp	00105$
   3817                    3430 00120$:
   3817 BF 80 09           3431 	cjne	r7,#0x80,00108$
   381A                    3432 00105$:
                    00DD   3433 	C$lposc.c$101$3$72 ==.
                           3434 ;	lposc.c:101: AX5043_LPOSCFREQ1 = 0;
   381A 90 43 16           3435 	mov	dptr,#_AX5043_LPOSCFREQ1
                    00E0   3436 	C$lposc.c$102$3$72 ==.
                           3437 ;	lposc.c:102: AX5043_LPOSCFREQ0 = 0;
   381D E4                 3438 	clr	a
   381E F0                 3439 	movx	@dptr,a
   381F 90 43 17           3440 	mov	dptr,#_AX5043_LPOSCFREQ0
   3822 F0                 3441 	movx	@dptr,a
   3823                    3442 00108$:
                    00E6   3443 	C$lposc.c$107$2$71 ==.
                    00E6   3444 	XG$calibrate_lposc$0$0 ==.
   3823 22                 3445 	ret
                           3446 	.area CSEG    (CODE)
                           3447 	.area CONST   (CODE)
                           3448 	.area XINIT   (CODE)
                           3449 	.area CABS    (ABS,CODE)
