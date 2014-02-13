                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Mon Dec 23 14:38:15 2013
                              5 ;--------------------------------------------------------
                              6 	.module display_com0
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _com0_newline
                             13 	.globl _com0_writestr2
                             14 	.globl _uart0_writestr
                             15 	.globl _uart0_tx
                             16 	.globl _uart0_init
                             17 	.globl _uart_timer0_baud
                             18 	.globl _PORTC_7
                             19 	.globl _PORTC_6
                             20 	.globl _PORTC_5
                             21 	.globl _PORTC_4
                             22 	.globl _PORTC_3
                             23 	.globl _PORTC_2
                             24 	.globl _PORTC_1
                             25 	.globl _PORTC_0
                             26 	.globl _PORTB_7
                             27 	.globl _PORTB_6
                             28 	.globl _PORTB_5
                             29 	.globl _PORTB_4
                             30 	.globl _PORTB_3
                             31 	.globl _PORTB_2
                             32 	.globl _PORTB_1
                             33 	.globl _PORTB_0
                             34 	.globl _PORTA_7
                             35 	.globl _PORTA_6
                             36 	.globl _PORTA_5
                             37 	.globl _PORTA_4
                             38 	.globl _PORTA_3
                             39 	.globl _PORTA_2
                             40 	.globl _PORTA_1
                             41 	.globl _PORTA_0
                             42 	.globl _PINC_7
                             43 	.globl _PINC_6
                             44 	.globl _PINC_5
                             45 	.globl _PINC_4
                             46 	.globl _PINC_3
                             47 	.globl _PINC_2
                             48 	.globl _PINC_1
                             49 	.globl _PINC_0
                             50 	.globl _PINB_7
                             51 	.globl _PINB_6
                             52 	.globl _PINB_5
                             53 	.globl _PINB_4
                             54 	.globl _PINB_3
                             55 	.globl _PINB_2
                             56 	.globl _PINB_1
                             57 	.globl _PINB_0
                             58 	.globl _PINA_7
                             59 	.globl _PINA_6
                             60 	.globl _PINA_5
                             61 	.globl _PINA_4
                             62 	.globl _PINA_3
                             63 	.globl _PINA_2
                             64 	.globl _PINA_1
                             65 	.globl _PINA_0
                             66 	.globl _CY
                             67 	.globl _AC
                             68 	.globl _F0
                             69 	.globl _RS1
                             70 	.globl _RS0
                             71 	.globl _OV
                             72 	.globl _F1
                             73 	.globl _P
                             74 	.globl _IP_7
                             75 	.globl _IP_6
                             76 	.globl _IP_5
                             77 	.globl _IP_4
                             78 	.globl _IP_3
                             79 	.globl _IP_2
                             80 	.globl _IP_1
                             81 	.globl _IP_0
                             82 	.globl _EA
                             83 	.globl _IE_7
                             84 	.globl _IE_6
                             85 	.globl _IE_5
                             86 	.globl _IE_4
                             87 	.globl _IE_3
                             88 	.globl _IE_2
                             89 	.globl _IE_1
                             90 	.globl _IE_0
                             91 	.globl _EIP_7
                             92 	.globl _EIP_6
                             93 	.globl _EIP_5
                             94 	.globl _EIP_4
                             95 	.globl _EIP_3
                             96 	.globl _EIP_2
                             97 	.globl _EIP_1
                             98 	.globl _EIP_0
                             99 	.globl _EIE_7
                            100 	.globl _EIE_6
                            101 	.globl _EIE_5
                            102 	.globl _EIE_4
                            103 	.globl _EIE_3
                            104 	.globl _EIE_2
                            105 	.globl _EIE_1
                            106 	.globl _EIE_0
                            107 	.globl _E2IP_7
                            108 	.globl _E2IP_6
                            109 	.globl _E2IP_5
                            110 	.globl _E2IP_4
                            111 	.globl _E2IP_3
                            112 	.globl _E2IP_2
                            113 	.globl _E2IP_1
                            114 	.globl _E2IP_0
                            115 	.globl _E2IE_7
                            116 	.globl _E2IE_6
                            117 	.globl _E2IE_5
                            118 	.globl _E2IE_4
                            119 	.globl _E2IE_3
                            120 	.globl _E2IE_2
                            121 	.globl _E2IE_1
                            122 	.globl _E2IE_0
                            123 	.globl _B_7
                            124 	.globl _B_6
                            125 	.globl _B_5
                            126 	.globl _B_4
                            127 	.globl _B_3
                            128 	.globl _B_2
                            129 	.globl _B_1
                            130 	.globl _B_0
                            131 	.globl _ACC_7
                            132 	.globl _ACC_6
                            133 	.globl _ACC_5
                            134 	.globl _ACC_4
                            135 	.globl _ACC_3
                            136 	.globl _ACC_2
                            137 	.globl _ACC_1
                            138 	.globl _ACC_0
                            139 	.globl _WTSTAT
                            140 	.globl _WTIRQEN
                            141 	.globl _WTEVTD
                            142 	.globl _WTEVTD1
                            143 	.globl _WTEVTD0
                            144 	.globl _WTEVTC
                            145 	.globl _WTEVTC1
                            146 	.globl _WTEVTC0
                            147 	.globl _WTEVTB
                            148 	.globl _WTEVTB1
                            149 	.globl _WTEVTB0
                            150 	.globl _WTEVTA
                            151 	.globl _WTEVTA1
                            152 	.globl _WTEVTA0
                            153 	.globl _WTCNTR1
                            154 	.globl _WTCNTB
                            155 	.globl _WTCNTB1
                            156 	.globl _WTCNTB0
                            157 	.globl _WTCNTA
                            158 	.globl _WTCNTA1
                            159 	.globl _WTCNTA0
                            160 	.globl _WTCFGB
                            161 	.globl _WTCFGA
                            162 	.globl _WDTRESET
                            163 	.globl _WDTCFG
                            164 	.globl _U1STATUS
                            165 	.globl _U1SHREG
                            166 	.globl _U1MODE
                            167 	.globl _U1CTRL
                            168 	.globl _U0STATUS
                            169 	.globl _U0SHREG
                            170 	.globl _U0MODE
                            171 	.globl _U0CTRL
                            172 	.globl _T2STATUS
                            173 	.globl _T2PERIOD
                            174 	.globl _T2PERIOD1
                            175 	.globl _T2PERIOD0
                            176 	.globl _T2MODE
                            177 	.globl _T2CNT
                            178 	.globl _T2CNT1
                            179 	.globl _T2CNT0
                            180 	.globl _T2CLKSRC
                            181 	.globl _T1STATUS
                            182 	.globl _T1PERIOD
                            183 	.globl _T1PERIOD1
                            184 	.globl _T1PERIOD0
                            185 	.globl _T1MODE
                            186 	.globl _T1CNT
                            187 	.globl _T1CNT1
                            188 	.globl _T1CNT0
                            189 	.globl _T1CLKSRC
                            190 	.globl _T0STATUS
                            191 	.globl _T0PERIOD
                            192 	.globl _T0PERIOD1
                            193 	.globl _T0PERIOD0
                            194 	.globl _T0MODE
                            195 	.globl _T0CNT
                            196 	.globl _T0CNT1
                            197 	.globl _T0CNT0
                            198 	.globl _T0CLKSRC
                            199 	.globl _SPSTATUS
                            200 	.globl _SPSHREG
                            201 	.globl _SPMODE
                            202 	.globl _SPCLKSRC
                            203 	.globl _RADIOSTAT
                            204 	.globl _RADIOSTAT1
                            205 	.globl _RADIOSTAT0
                            206 	.globl _RADIODATA
                            207 	.globl _RADIODATA3
                            208 	.globl _RADIODATA2
                            209 	.globl _RADIODATA1
                            210 	.globl _RADIODATA0
                            211 	.globl _RADIOADDR
                            212 	.globl _RADIOADDR1
                            213 	.globl _RADIOADDR0
                            214 	.globl _RADIOACC
                            215 	.globl _OC1STATUS
                            216 	.globl _OC1PIN
                            217 	.globl _OC1MODE
                            218 	.globl _OC1COMP
                            219 	.globl _OC1COMP1
                            220 	.globl _OC1COMP0
                            221 	.globl _OC0STATUS
                            222 	.globl _OC0PIN
                            223 	.globl _OC0MODE
                            224 	.globl _OC0COMP
                            225 	.globl _OC0COMP1
                            226 	.globl _OC0COMP0
                            227 	.globl _NVSTATUS
                            228 	.globl _NVKEY
                            229 	.globl _NVDATA
                            230 	.globl _NVDATA1
                            231 	.globl _NVDATA0
                            232 	.globl _NVADDR
                            233 	.globl _NVADDR1
                            234 	.globl _NVADDR0
                            235 	.globl _IC1STATUS
                            236 	.globl _IC1MODE
                            237 	.globl _IC1CAPT
                            238 	.globl _IC1CAPT1
                            239 	.globl _IC1CAPT0
                            240 	.globl _IC0STATUS
                            241 	.globl _IC0MODE
                            242 	.globl _IC0CAPT
                            243 	.globl _IC0CAPT1
                            244 	.globl _IC0CAPT0
                            245 	.globl _PORTR
                            246 	.globl _PORTC
                            247 	.globl _PORTB
                            248 	.globl _PORTA
                            249 	.globl _PINR
                            250 	.globl _PINC
                            251 	.globl _PINB
                            252 	.globl _PINA
                            253 	.globl _DIRR
                            254 	.globl _DIRC
                            255 	.globl _DIRB
                            256 	.globl _DIRA
                            257 	.globl _DBGLNKSTAT
                            258 	.globl _DBGLNKBUF
                            259 	.globl _CODECONFIG
                            260 	.globl _CLKSTAT
                            261 	.globl _CLKCON
                            262 	.globl _ANALOGCOMP
                            263 	.globl _ADCCONV
                            264 	.globl _ADCCLKSRC
                            265 	.globl _ADCCH3CONFIG
                            266 	.globl _ADCCH2CONFIG
                            267 	.globl _ADCCH1CONFIG
                            268 	.globl _ADCCH0CONFIG
                            269 	.globl __XPAGE
                            270 	.globl _XPAGE
                            271 	.globl _SP
                            272 	.globl _PSW
                            273 	.globl _PCON
                            274 	.globl _IP
                            275 	.globl _IE
                            276 	.globl _EIP
                            277 	.globl _EIE
                            278 	.globl _E2IP
                            279 	.globl _E2IE
                            280 	.globl _DPS
                            281 	.globl _DPTR1
                            282 	.globl _DPTR0
                            283 	.globl _DPL1
                            284 	.globl _DPL
                            285 	.globl _DPH1
                            286 	.globl _DPH
                            287 	.globl _B
                            288 	.globl _ACC
                            289 	.globl _cmd
                            290 	.globl _column
                            291 	.globl _row
                            292 	.globl _AX5043_TIMEGAIN3NB
                            293 	.globl _AX5043_TIMEGAIN2NB
                            294 	.globl _AX5043_TIMEGAIN1NB
                            295 	.globl _AX5043_TIMEGAIN0NB
                            296 	.globl _AX5043_RXPARAMSETSNB
                            297 	.globl _AX5043_RXPARAMCURSETNB
                            298 	.globl _AX5043_PKTMAXLENNB
                            299 	.globl _AX5043_PKTLENOFFSETNB
                            300 	.globl _AX5043_PKTLENCFGNB
                            301 	.globl _AX5043_PKTADDRMASK3NB
                            302 	.globl _AX5043_PKTADDRMASK2NB
                            303 	.globl _AX5043_PKTADDRMASK1NB
                            304 	.globl _AX5043_PKTADDRMASK0NB
                            305 	.globl _AX5043_PKTADDRCFGNB
                            306 	.globl _AX5043_PKTADDR3NB
                            307 	.globl _AX5043_PKTADDR2NB
                            308 	.globl _AX5043_PKTADDR1NB
                            309 	.globl _AX5043_PKTADDR0NB
                            310 	.globl _AX5043_PHASEGAIN3NB
                            311 	.globl _AX5043_PHASEGAIN2NB
                            312 	.globl _AX5043_PHASEGAIN1NB
                            313 	.globl _AX5043_PHASEGAIN0NB
                            314 	.globl _AX5043_FREQUENCYLEAKNB
                            315 	.globl _AX5043_FREQUENCYGAIND3NB
                            316 	.globl _AX5043_FREQUENCYGAIND2NB
                            317 	.globl _AX5043_FREQUENCYGAIND1NB
                            318 	.globl _AX5043_FREQUENCYGAIND0NB
                            319 	.globl _AX5043_FREQUENCYGAINC3NB
                            320 	.globl _AX5043_FREQUENCYGAINC2NB
                            321 	.globl _AX5043_FREQUENCYGAINC1NB
                            322 	.globl _AX5043_FREQUENCYGAINC0NB
                            323 	.globl _AX5043_FREQUENCYGAINB3NB
                            324 	.globl _AX5043_FREQUENCYGAINB2NB
                            325 	.globl _AX5043_FREQUENCYGAINB1NB
                            326 	.globl _AX5043_FREQUENCYGAINB0NB
                            327 	.globl _AX5043_FREQUENCYGAINA3NB
                            328 	.globl _AX5043_FREQUENCYGAINA2NB
                            329 	.globl _AX5043_FREQUENCYGAINA1NB
                            330 	.globl _AX5043_FREQUENCYGAINA0NB
                            331 	.globl _AX5043_FREQDEV13NB
                            332 	.globl _AX5043_FREQDEV12NB
                            333 	.globl _AX5043_FREQDEV11NB
                            334 	.globl _AX5043_FREQDEV10NB
                            335 	.globl _AX5043_FREQDEV03NB
                            336 	.globl _AX5043_FREQDEV02NB
                            337 	.globl _AX5043_FREQDEV01NB
                            338 	.globl _AX5043_FREQDEV00NB
                            339 	.globl _AX5043_FOURFSK3NB
                            340 	.globl _AX5043_FOURFSK2NB
                            341 	.globl _AX5043_FOURFSK1NB
                            342 	.globl _AX5043_FOURFSK0NB
                            343 	.globl _AX5043_DRGAIN3NB
                            344 	.globl _AX5043_DRGAIN2NB
                            345 	.globl _AX5043_DRGAIN1NB
                            346 	.globl _AX5043_DRGAIN0NB
                            347 	.globl _AX5043_BBOFFSRES3NB
                            348 	.globl _AX5043_BBOFFSRES2NB
                            349 	.globl _AX5043_BBOFFSRES1NB
                            350 	.globl _AX5043_BBOFFSRES0NB
                            351 	.globl _AX5043_AMPLITUDEGAIN3NB
                            352 	.globl _AX5043_AMPLITUDEGAIN2NB
                            353 	.globl _AX5043_AMPLITUDEGAIN1NB
                            354 	.globl _AX5043_AMPLITUDEGAIN0NB
                            355 	.globl _AX5043_AGCTARGET3NB
                            356 	.globl _AX5043_AGCTARGET2NB
                            357 	.globl _AX5043_AGCTARGET1NB
                            358 	.globl _AX5043_AGCTARGET0NB
                            359 	.globl _AX5043_AGCMINMAX3NB
                            360 	.globl _AX5043_AGCMINMAX2NB
                            361 	.globl _AX5043_AGCMINMAX1NB
                            362 	.globl _AX5043_AGCMINMAX0NB
                            363 	.globl _AX5043_AGCGAIN3NB
                            364 	.globl _AX5043_AGCGAIN2NB
                            365 	.globl _AX5043_AGCGAIN1NB
                            366 	.globl _AX5043_AGCGAIN0NB
                            367 	.globl _AX5043_AGCAHYST3NB
                            368 	.globl _AX5043_AGCAHYST2NB
                            369 	.globl _AX5043_AGCAHYST1NB
                            370 	.globl _AX5043_AGCAHYST0NB
                            371 	.globl _AX5043_XTALSTATUSNB
                            372 	.globl _AX5043_XTALCAPNB
                            373 	.globl _AX5043_WAKEUPXOEARLYNB
                            374 	.globl _AX5043_WAKEUPTIMER1NB
                            375 	.globl _AX5043_WAKEUPTIMER0NB
                            376 	.globl _AX5043_WAKEUPFREQ1NB
                            377 	.globl _AX5043_WAKEUPFREQ0NB
                            378 	.globl _AX5043_WAKEUP1NB
                            379 	.globl _AX5043_WAKEUP0NB
                            380 	.globl _AX5043_TXRATE2NB
                            381 	.globl _AX5043_TXRATE1NB
                            382 	.globl _AX5043_TXRATE0NB
                            383 	.globl _AX5043_TXPWRCOEFFE1NB
                            384 	.globl _AX5043_TXPWRCOEFFE0NB
                            385 	.globl _AX5043_TXPWRCOEFFD1NB
                            386 	.globl _AX5043_TXPWRCOEFFD0NB
                            387 	.globl _AX5043_TXPWRCOEFFC1NB
                            388 	.globl _AX5043_TXPWRCOEFFC0NB
                            389 	.globl _AX5043_TXPWRCOEFFB1NB
                            390 	.globl _AX5043_TXPWRCOEFFB0NB
                            391 	.globl _AX5043_TXPWRCOEFFA1NB
                            392 	.globl _AX5043_TXPWRCOEFFA0NB
                            393 	.globl _AX5043_TRKRFFREQ2NB
                            394 	.globl _AX5043_TRKRFFREQ1NB
                            395 	.globl _AX5043_TRKRFFREQ0NB
                            396 	.globl _AX5043_TRKPHASE1NB
                            397 	.globl _AX5043_TRKPHASE0NB
                            398 	.globl _AX5043_TRKFSKDEMOD1NB
                            399 	.globl _AX5043_TRKFSKDEMOD0NB
                            400 	.globl _AX5043_TRKFREQ1NB
                            401 	.globl _AX5043_TRKFREQ0NB
                            402 	.globl _AX5043_TRKDATARATE2NB
                            403 	.globl _AX5043_TRKDATARATE1NB
                            404 	.globl _AX5043_TRKDATARATE0NB
                            405 	.globl _AX5043_TRKAMPLITUDE1NB
                            406 	.globl _AX5043_TRKAMPLITUDE0NB
                            407 	.globl _AX5043_TRKAFSKDEMOD1NB
                            408 	.globl _AX5043_TRKAFSKDEMOD0NB
                            409 	.globl _AX5043_TMGTXSETTLENB
                            410 	.globl _AX5043_TMGTXBOOSTNB
                            411 	.globl _AX5043_TMGRXSETTLENB
                            412 	.globl _AX5043_TMGRXRSSINB
                            413 	.globl _AX5043_TMGRXPREAMBLE3NB
                            414 	.globl _AX5043_TMGRXPREAMBLE2NB
                            415 	.globl _AX5043_TMGRXPREAMBLE1NB
                            416 	.globl _AX5043_TMGRXOFFSACQNB
                            417 	.globl _AX5043_TMGRXCOARSEAGCNB
                            418 	.globl _AX5043_TMGRXBOOSTNB
                            419 	.globl _AX5043_TMGRXAGCNB
                            420 	.globl _AX5043_TIMER2NB
                            421 	.globl _AX5043_TIMER1NB
                            422 	.globl _AX5043_TIMER0NB
                            423 	.globl _AX5043_SILICONREVISIONNB
                            424 	.globl _AX5043_SCRATCHNB
                            425 	.globl _AX5043_RXDATARATE2NB
                            426 	.globl _AX5043_RXDATARATE1NB
                            427 	.globl _AX5043_RXDATARATE0NB
                            428 	.globl _AX5043_RSSIREFERENCENB
                            429 	.globl _AX5043_RSSIABSTHRNB
                            430 	.globl _AX5043_RSSINB
                            431 	.globl _AX5043_RADIOSTATENB
                            432 	.globl _AX5043_RADIOEVENTREQ1NB
                            433 	.globl _AX5043_RADIOEVENTREQ0NB
                            434 	.globl _AX5043_RADIOEVENTMASK1NB
                            435 	.globl _AX5043_RADIOEVENTMASK0NB
                            436 	.globl _AX5043_PWRMODENB
                            437 	.globl _AX5043_PWRAMPNB
                            438 	.globl _AX5043_POWSTICKYSTATNB
                            439 	.globl _AX5043_POWSTATNB
                            440 	.globl _AX5043_POWIRQMASKNB
                            441 	.globl _AX5043_PLLVCOIRNB
                            442 	.globl _AX5043_PLLVCOINB
                            443 	.globl _AX5043_PLLVCODIVNB
                            444 	.globl _AX5043_PLLRNGCLKNB
                            445 	.globl _AX5043_PLLRANGINGBNB
                            446 	.globl _AX5043_PLLRANGINGANB
                            447 	.globl _AX5043_PLLLOOPBOOSTNB
                            448 	.globl _AX5043_PLLLOOPNB
                            449 	.globl _AX5043_PLLLOCKDETNB
                            450 	.globl _AX5043_PLLCPIBOOSTNB
                            451 	.globl _AX5043_PLLCPINB
                            452 	.globl _AX5043_PKTSTOREFLAGSNB
                            453 	.globl _AX5043_PKTMISCFLAGSNB
                            454 	.globl _AX5043_PKTCHUNKSIZENB
                            455 	.globl _AX5043_PKTACCEPTFLAGSNB
                            456 	.globl _AX5043_PINSTATENB
                            457 	.globl _AX5043_PINFUNCSYSCLKNB
                            458 	.globl _AX5043_PINFUNCPWRAMPNB
                            459 	.globl _AX5043_PINFUNCIRQNB
                            460 	.globl _AX5043_PINFUNCDCLKNB
                            461 	.globl _AX5043_PINFUNCDATANB
                            462 	.globl _AX5043_PINFUNCANTSELNB
                            463 	.globl _AX5043_MODULATIONNB
                            464 	.globl _AX5043_MODCFGFNB
                            465 	.globl _AX5043_MODCFGANB
                            466 	.globl _AX5043_MAXRFOFFSET2NB
                            467 	.globl _AX5043_MAXRFOFFSET1NB
                            468 	.globl _AX5043_MAXRFOFFSET0NB
                            469 	.globl _AX5043_MAXDROFFSET2NB
                            470 	.globl _AX5043_MAXDROFFSET1NB
                            471 	.globl _AX5043_MAXDROFFSET0NB
                            472 	.globl _AX5043_MATCH1PAT1NB
                            473 	.globl _AX5043_MATCH1PAT0NB
                            474 	.globl _AX5043_MATCH1MINNB
                            475 	.globl _AX5043_MATCH1MAXNB
                            476 	.globl _AX5043_MATCH1LENNB
                            477 	.globl _AX5043_MATCH0PAT3NB
                            478 	.globl _AX5043_MATCH0PAT2NB
                            479 	.globl _AX5043_MATCH0PAT1NB
                            480 	.globl _AX5043_MATCH0PAT0NB
                            481 	.globl _AX5043_MATCH0MINNB
                            482 	.globl _AX5043_MATCH0MAXNB
                            483 	.globl _AX5043_MATCH0LENNB
                            484 	.globl _AX5043_LPOSCSTATUSNB
                            485 	.globl _AX5043_LPOSCREF1NB
                            486 	.globl _AX5043_LPOSCREF0NB
                            487 	.globl _AX5043_LPOSCPER1NB
                            488 	.globl _AX5043_LPOSCPER0NB
                            489 	.globl _AX5043_LPOSCKFILT1NB
                            490 	.globl _AX5043_LPOSCKFILT0NB
                            491 	.globl _AX5043_LPOSCFREQ1NB
                            492 	.globl _AX5043_LPOSCFREQ0NB
                            493 	.globl _AX5043_LPOSCCONFIGNB
                            494 	.globl _AX5043_IRQREQUEST1NB
                            495 	.globl _AX5043_IRQREQUEST0NB
                            496 	.globl _AX5043_IRQMASK1NB
                            497 	.globl _AX5043_IRQMASK0NB
                            498 	.globl _AX5043_IRQINVERSION1NB
                            499 	.globl _AX5043_IRQINVERSION0NB
                            500 	.globl _AX5043_IFFREQ1NB
                            501 	.globl _AX5043_IFFREQ0NB
                            502 	.globl _AX5043_GPADCPERIODNB
                            503 	.globl _AX5043_GPADCCTRLNB
                            504 	.globl _AX5043_GPADC13VALUE1NB
                            505 	.globl _AX5043_GPADC13VALUE0NB
                            506 	.globl _AX5043_FSKDMIN1NB
                            507 	.globl _AX5043_FSKDMIN0NB
                            508 	.globl _AX5043_FSKDMAX1NB
                            509 	.globl _AX5043_FSKDMAX0NB
                            510 	.globl _AX5043_FSKDEV2NB
                            511 	.globl _AX5043_FSKDEV1NB
                            512 	.globl _AX5043_FSKDEV0NB
                            513 	.globl _AX5043_FREQB3NB
                            514 	.globl _AX5043_FREQB2NB
                            515 	.globl _AX5043_FREQB1NB
                            516 	.globl _AX5043_FREQB0NB
                            517 	.globl _AX5043_FREQA3NB
                            518 	.globl _AX5043_FREQA2NB
                            519 	.globl _AX5043_FREQA1NB
                            520 	.globl _AX5043_FREQA0NB
                            521 	.globl _AX5043_FRAMINGNB
                            522 	.globl _AX5043_FIFOTHRESH1NB
                            523 	.globl _AX5043_FIFOTHRESH0NB
                            524 	.globl _AX5043_FIFOSTATNB
                            525 	.globl _AX5043_FIFOFREE1NB
                            526 	.globl _AX5043_FIFOFREE0NB
                            527 	.globl _AX5043_FIFODATANB
                            528 	.globl _AX5043_FIFOCOUNT1NB
                            529 	.globl _AX5043_FIFOCOUNT0NB
                            530 	.globl _AX5043_FECSYNCNB
                            531 	.globl _AX5043_FECSTATUSNB
                            532 	.globl _AX5043_FECNB
                            533 	.globl _AX5043_ENCODINGNB
                            534 	.globl _AX5043_DIVERSITYNB
                            535 	.globl _AX5043_DECIMATIONNB
                            536 	.globl _AX5043_DACVALUE1NB
                            537 	.globl _AX5043_DACVALUE0NB
                            538 	.globl _AX5043_DACCONFIGNB
                            539 	.globl _AX5043_CRCINIT3NB
                            540 	.globl _AX5043_CRCINIT2NB
                            541 	.globl _AX5043_CRCINIT1NB
                            542 	.globl _AX5043_CRCINIT0NB
                            543 	.globl _AX5043_BGNDRSSITHRNB
                            544 	.globl _AX5043_BGNDRSSIGAINNB
                            545 	.globl _AX5043_BGNDRSSINB
                            546 	.globl _AX5043_BBTUNENB
                            547 	.globl _AX5043_BBOFFSCAPNB
                            548 	.globl _AX5043_AMPLFILTERNB
                            549 	.globl _AX5043_AGCCOUNTERNB
                            550 	.globl _AX5043_AFSKSPACE1NB
                            551 	.globl _AX5043_AFSKSPACE0NB
                            552 	.globl _AX5043_AFSKMARK1NB
                            553 	.globl _AX5043_AFSKMARK0NB
                            554 	.globl _AX5043_AFSKCTRLNB
                            555 	.globl _AX5043_TIMEGAIN3
                            556 	.globl _AX5043_TIMEGAIN2
                            557 	.globl _AX5043_TIMEGAIN1
                            558 	.globl _AX5043_TIMEGAIN0
                            559 	.globl _AX5043_RXPARAMSETS
                            560 	.globl _AX5043_RXPARAMCURSET
                            561 	.globl _AX5043_PKTMAXLEN
                            562 	.globl _AX5043_PKTLENOFFSET
                            563 	.globl _AX5043_PKTLENCFG
                            564 	.globl _AX5043_PKTADDRMASK3
                            565 	.globl _AX5043_PKTADDRMASK2
                            566 	.globl _AX5043_PKTADDRMASK1
                            567 	.globl _AX5043_PKTADDRMASK0
                            568 	.globl _AX5043_PKTADDRCFG
                            569 	.globl _AX5043_PKTADDR3
                            570 	.globl _AX5043_PKTADDR2
                            571 	.globl _AX5043_PKTADDR1
                            572 	.globl _AX5043_PKTADDR0
                            573 	.globl _AX5043_PHASEGAIN3
                            574 	.globl _AX5043_PHASEGAIN2
                            575 	.globl _AX5043_PHASEGAIN1
                            576 	.globl _AX5043_PHASEGAIN0
                            577 	.globl _AX5043_FREQUENCYLEAK
                            578 	.globl _AX5043_FREQUENCYGAIND3
                            579 	.globl _AX5043_FREQUENCYGAIND2
                            580 	.globl _AX5043_FREQUENCYGAIND1
                            581 	.globl _AX5043_FREQUENCYGAIND0
                            582 	.globl _AX5043_FREQUENCYGAINC3
                            583 	.globl _AX5043_FREQUENCYGAINC2
                            584 	.globl _AX5043_FREQUENCYGAINC1
                            585 	.globl _AX5043_FREQUENCYGAINC0
                            586 	.globl _AX5043_FREQUENCYGAINB3
                            587 	.globl _AX5043_FREQUENCYGAINB2
                            588 	.globl _AX5043_FREQUENCYGAINB1
                            589 	.globl _AX5043_FREQUENCYGAINB0
                            590 	.globl _AX5043_FREQUENCYGAINA3
                            591 	.globl _AX5043_FREQUENCYGAINA2
                            592 	.globl _AX5043_FREQUENCYGAINA1
                            593 	.globl _AX5043_FREQUENCYGAINA0
                            594 	.globl _AX5043_FREQDEV13
                            595 	.globl _AX5043_FREQDEV12
                            596 	.globl _AX5043_FREQDEV11
                            597 	.globl _AX5043_FREQDEV10
                            598 	.globl _AX5043_FREQDEV03
                            599 	.globl _AX5043_FREQDEV02
                            600 	.globl _AX5043_FREQDEV01
                            601 	.globl _AX5043_FREQDEV00
                            602 	.globl _AX5043_FOURFSK3
                            603 	.globl _AX5043_FOURFSK2
                            604 	.globl _AX5043_FOURFSK1
                            605 	.globl _AX5043_FOURFSK0
                            606 	.globl _AX5043_DRGAIN3
                            607 	.globl _AX5043_DRGAIN2
                            608 	.globl _AX5043_DRGAIN1
                            609 	.globl _AX5043_DRGAIN0
                            610 	.globl _AX5043_BBOFFSRES3
                            611 	.globl _AX5043_BBOFFSRES2
                            612 	.globl _AX5043_BBOFFSRES1
                            613 	.globl _AX5043_BBOFFSRES0
                            614 	.globl _AX5043_AMPLITUDEGAIN3
                            615 	.globl _AX5043_AMPLITUDEGAIN2
                            616 	.globl _AX5043_AMPLITUDEGAIN1
                            617 	.globl _AX5043_AMPLITUDEGAIN0
                            618 	.globl _AX5043_AGCTARGET3
                            619 	.globl _AX5043_AGCTARGET2
                            620 	.globl _AX5043_AGCTARGET1
                            621 	.globl _AX5043_AGCTARGET0
                            622 	.globl _AX5043_AGCMINMAX3
                            623 	.globl _AX5043_AGCMINMAX2
                            624 	.globl _AX5043_AGCMINMAX1
                            625 	.globl _AX5043_AGCMINMAX0
                            626 	.globl _AX5043_AGCGAIN3
                            627 	.globl _AX5043_AGCGAIN2
                            628 	.globl _AX5043_AGCGAIN1
                            629 	.globl _AX5043_AGCGAIN0
                            630 	.globl _AX5043_AGCAHYST3
                            631 	.globl _AX5043_AGCAHYST2
                            632 	.globl _AX5043_AGCAHYST1
                            633 	.globl _AX5043_AGCAHYST0
                            634 	.globl _AX5043_XTALSTATUS
                            635 	.globl _AX5043_XTALCAP
                            636 	.globl _AX5043_WAKEUPXOEARLY
                            637 	.globl _AX5043_WAKEUPTIMER1
                            638 	.globl _AX5043_WAKEUPTIMER0
                            639 	.globl _AX5043_WAKEUPFREQ1
                            640 	.globl _AX5043_WAKEUPFREQ0
                            641 	.globl _AX5043_WAKEUP1
                            642 	.globl _AX5043_WAKEUP0
                            643 	.globl _AX5043_TXRATE2
                            644 	.globl _AX5043_TXRATE1
                            645 	.globl _AX5043_TXRATE0
                            646 	.globl _AX5043_TXPWRCOEFFE1
                            647 	.globl _AX5043_TXPWRCOEFFE0
                            648 	.globl _AX5043_TXPWRCOEFFD1
                            649 	.globl _AX5043_TXPWRCOEFFD0
                            650 	.globl _AX5043_TXPWRCOEFFC1
                            651 	.globl _AX5043_TXPWRCOEFFC0
                            652 	.globl _AX5043_TXPWRCOEFFB1
                            653 	.globl _AX5043_TXPWRCOEFFB0
                            654 	.globl _AX5043_TXPWRCOEFFA1
                            655 	.globl _AX5043_TXPWRCOEFFA0
                            656 	.globl _AX5043_TRKRFFREQ2
                            657 	.globl _AX5043_TRKRFFREQ1
                            658 	.globl _AX5043_TRKRFFREQ0
                            659 	.globl _AX5043_TRKPHASE1
                            660 	.globl _AX5043_TRKPHASE0
                            661 	.globl _AX5043_TRKFSKDEMOD1
                            662 	.globl _AX5043_TRKFSKDEMOD0
                            663 	.globl _AX5043_TRKFREQ1
                            664 	.globl _AX5043_TRKFREQ0
                            665 	.globl _AX5043_TRKDATARATE2
                            666 	.globl _AX5043_TRKDATARATE1
                            667 	.globl _AX5043_TRKDATARATE0
                            668 	.globl _AX5043_TRKAMPLITUDE1
                            669 	.globl _AX5043_TRKAMPLITUDE0
                            670 	.globl _AX5043_TRKAFSKDEMOD1
                            671 	.globl _AX5043_TRKAFSKDEMOD0
                            672 	.globl _AX5043_TMGTXSETTLE
                            673 	.globl _AX5043_TMGTXBOOST
                            674 	.globl _AX5043_TMGRXSETTLE
                            675 	.globl _AX5043_TMGRXRSSI
                            676 	.globl _AX5043_TMGRXPREAMBLE3
                            677 	.globl _AX5043_TMGRXPREAMBLE2
                            678 	.globl _AX5043_TMGRXPREAMBLE1
                            679 	.globl _AX5043_TMGRXOFFSACQ
                            680 	.globl _AX5043_TMGRXCOARSEAGC
                            681 	.globl _AX5043_TMGRXBOOST
                            682 	.globl _AX5043_TMGRXAGC
                            683 	.globl _AX5043_TIMER2
                            684 	.globl _AX5043_TIMER1
                            685 	.globl _AX5043_TIMER0
                            686 	.globl _AX5043_SILICONREVISION
                            687 	.globl _AX5043_SCRATCH
                            688 	.globl _AX5043_RXDATARATE2
                            689 	.globl _AX5043_RXDATARATE1
                            690 	.globl _AX5043_RXDATARATE0
                            691 	.globl _AX5043_RSSIREFERENCE
                            692 	.globl _AX5043_RSSIABSTHR
                            693 	.globl _AX5043_RSSI
                            694 	.globl _AX5043_RADIOSTATE
                            695 	.globl _AX5043_RADIOEVENTREQ1
                            696 	.globl _AX5043_RADIOEVENTREQ0
                            697 	.globl _AX5043_RADIOEVENTMASK1
                            698 	.globl _AX5043_RADIOEVENTMASK0
                            699 	.globl _AX5043_PWRMODE
                            700 	.globl _AX5043_PWRAMP
                            701 	.globl _AX5043_POWSTICKYSTAT
                            702 	.globl _AX5043_POWSTAT
                            703 	.globl _AX5043_POWIRQMASK
                            704 	.globl _AX5043_PLLVCOIR
                            705 	.globl _AX5043_PLLVCOI
                            706 	.globl _AX5043_PLLVCODIV
                            707 	.globl _AX5043_PLLRNGCLK
                            708 	.globl _AX5043_PLLRANGINGB
                            709 	.globl _AX5043_PLLRANGINGA
                            710 	.globl _AX5043_PLLLOOPBOOST
                            711 	.globl _AX5043_PLLLOOP
                            712 	.globl _AX5043_PLLLOCKDET
                            713 	.globl _AX5043_PLLCPIBOOST
                            714 	.globl _AX5043_PLLCPI
                            715 	.globl _AX5043_PKTSTOREFLAGS
                            716 	.globl _AX5043_PKTMISCFLAGS
                            717 	.globl _AX5043_PKTCHUNKSIZE
                            718 	.globl _AX5043_PKTACCEPTFLAGS
                            719 	.globl _AX5043_PINSTATE
                            720 	.globl _AX5043_PINFUNCSYSCLK
                            721 	.globl _AX5043_PINFUNCPWRAMP
                            722 	.globl _AX5043_PINFUNCIRQ
                            723 	.globl _AX5043_PINFUNCDCLK
                            724 	.globl _AX5043_PINFUNCDATA
                            725 	.globl _AX5043_PINFUNCANTSEL
                            726 	.globl _AX5043_MODULATION
                            727 	.globl _AX5043_MODCFGF
                            728 	.globl _AX5043_MODCFGA
                            729 	.globl _AX5043_MAXRFOFFSET2
                            730 	.globl _AX5043_MAXRFOFFSET1
                            731 	.globl _AX5043_MAXRFOFFSET0
                            732 	.globl _AX5043_MAXDROFFSET2
                            733 	.globl _AX5043_MAXDROFFSET1
                            734 	.globl _AX5043_MAXDROFFSET0
                            735 	.globl _AX5043_MATCH1PAT1
                            736 	.globl _AX5043_MATCH1PAT0
                            737 	.globl _AX5043_MATCH1MIN
                            738 	.globl _AX5043_MATCH1MAX
                            739 	.globl _AX5043_MATCH1LEN
                            740 	.globl _AX5043_MATCH0PAT3
                            741 	.globl _AX5043_MATCH0PAT2
                            742 	.globl _AX5043_MATCH0PAT1
                            743 	.globl _AX5043_MATCH0PAT0
                            744 	.globl _AX5043_MATCH0MIN
                            745 	.globl _AX5043_MATCH0MAX
                            746 	.globl _AX5043_MATCH0LEN
                            747 	.globl _AX5043_LPOSCSTATUS
                            748 	.globl _AX5043_LPOSCREF1
                            749 	.globl _AX5043_LPOSCREF0
                            750 	.globl _AX5043_LPOSCPER1
                            751 	.globl _AX5043_LPOSCPER0
                            752 	.globl _AX5043_LPOSCKFILT1
                            753 	.globl _AX5043_LPOSCKFILT0
                            754 	.globl _AX5043_LPOSCFREQ1
                            755 	.globl _AX5043_LPOSCFREQ0
                            756 	.globl _AX5043_LPOSCCONFIG
                            757 	.globl _AX5043_IRQREQUEST1
                            758 	.globl _AX5043_IRQREQUEST0
                            759 	.globl _AX5043_IRQMASK1
                            760 	.globl _AX5043_IRQMASK0
                            761 	.globl _AX5043_IRQINVERSION1
                            762 	.globl _AX5043_IRQINVERSION0
                            763 	.globl _AX5043_IFFREQ1
                            764 	.globl _AX5043_IFFREQ0
                            765 	.globl _AX5043_GPADCPERIOD
                            766 	.globl _AX5043_GPADCCTRL
                            767 	.globl _AX5043_GPADC13VALUE1
                            768 	.globl _AX5043_GPADC13VALUE0
                            769 	.globl _AX5043_FSKDMIN1
                            770 	.globl _AX5043_FSKDMIN0
                            771 	.globl _AX5043_FSKDMAX1
                            772 	.globl _AX5043_FSKDMAX0
                            773 	.globl _AX5043_FSKDEV2
                            774 	.globl _AX5043_FSKDEV1
                            775 	.globl _AX5043_FSKDEV0
                            776 	.globl _AX5043_FREQB3
                            777 	.globl _AX5043_FREQB2
                            778 	.globl _AX5043_FREQB1
                            779 	.globl _AX5043_FREQB0
                            780 	.globl _AX5043_FREQA3
                            781 	.globl _AX5043_FREQA2
                            782 	.globl _AX5043_FREQA1
                            783 	.globl _AX5043_FREQA0
                            784 	.globl _AX5043_FRAMING
                            785 	.globl _AX5043_FIFOTHRESH1
                            786 	.globl _AX5043_FIFOTHRESH0
                            787 	.globl _AX5043_FIFOSTAT
                            788 	.globl _AX5043_FIFOFREE1
                            789 	.globl _AX5043_FIFOFREE0
                            790 	.globl _AX5043_FIFODATA
                            791 	.globl _AX5043_FIFOCOUNT1
                            792 	.globl _AX5043_FIFOCOUNT0
                            793 	.globl _AX5043_FECSYNC
                            794 	.globl _AX5043_FECSTATUS
                            795 	.globl _AX5043_FEC
                            796 	.globl _AX5043_ENCODING
                            797 	.globl _AX5043_DIVERSITY
                            798 	.globl _AX5043_DECIMATION
                            799 	.globl _AX5043_DACVALUE1
                            800 	.globl _AX5043_DACVALUE0
                            801 	.globl _AX5043_DACCONFIG
                            802 	.globl _AX5043_CRCINIT3
                            803 	.globl _AX5043_CRCINIT2
                            804 	.globl _AX5043_CRCINIT1
                            805 	.globl _AX5043_CRCINIT0
                            806 	.globl _AX5043_BGNDRSSITHR
                            807 	.globl _AX5043_BGNDRSSIGAIN
                            808 	.globl _AX5043_BGNDRSSI
                            809 	.globl _AX5043_BBTUNE
                            810 	.globl _AX5043_BBOFFSCAP
                            811 	.globl _AX5043_AMPLFILTER
                            812 	.globl _AX5043_AGCCOUNTER
                            813 	.globl _AX5043_AFSKSPACE1
                            814 	.globl _AX5043_AFSKSPACE0
                            815 	.globl _AX5043_AFSKMARK1
                            816 	.globl _AX5043_AFSKMARK0
                            817 	.globl _AX5043_AFSKCTRL
                            818 	.globl _XWTSTAT
                            819 	.globl _XWTIRQEN
                            820 	.globl _XWTEVTD
                            821 	.globl _XWTEVTD1
                            822 	.globl _XWTEVTD0
                            823 	.globl _XWTEVTC
                            824 	.globl _XWTEVTC1
                            825 	.globl _XWTEVTC0
                            826 	.globl _XWTEVTB
                            827 	.globl _XWTEVTB1
                            828 	.globl _XWTEVTB0
                            829 	.globl _XWTEVTA
                            830 	.globl _XWTEVTA1
                            831 	.globl _XWTEVTA0
                            832 	.globl _XWTCNTR1
                            833 	.globl _XWTCNTB
                            834 	.globl _XWTCNTB1
                            835 	.globl _XWTCNTB0
                            836 	.globl _XWTCNTA
                            837 	.globl _XWTCNTA1
                            838 	.globl _XWTCNTA0
                            839 	.globl _XWTCFGB
                            840 	.globl _XWTCFGA
                            841 	.globl _XWDTRESET
                            842 	.globl _XWDTCFG
                            843 	.globl _XU1STATUS
                            844 	.globl _XU1SHREG
                            845 	.globl _XU1MODE
                            846 	.globl _XU1CTRL
                            847 	.globl _XU0STATUS
                            848 	.globl _XU0SHREG
                            849 	.globl _XU0MODE
                            850 	.globl _XU0CTRL
                            851 	.globl _XT2STATUS
                            852 	.globl _XT2PERIOD
                            853 	.globl _XT2PERIOD1
                            854 	.globl _XT2PERIOD0
                            855 	.globl _XT2MODE
                            856 	.globl _XT2CNT
                            857 	.globl _XT2CNT1
                            858 	.globl _XT2CNT0
                            859 	.globl _XT2CLKSRC
                            860 	.globl _XT1STATUS
                            861 	.globl _XT1PERIOD
                            862 	.globl _XT1PERIOD1
                            863 	.globl _XT1PERIOD0
                            864 	.globl _XT1MODE
                            865 	.globl _XT1CNT
                            866 	.globl _XT1CNT1
                            867 	.globl _XT1CNT0
                            868 	.globl _XT1CLKSRC
                            869 	.globl _XT0STATUS
                            870 	.globl _XT0PERIOD
                            871 	.globl _XT0PERIOD1
                            872 	.globl _XT0PERIOD0
                            873 	.globl _XT0MODE
                            874 	.globl _XT0CNT
                            875 	.globl _XT0CNT1
                            876 	.globl _XT0CNT0
                            877 	.globl _XT0CLKSRC
                            878 	.globl _XSPSTATUS
                            879 	.globl _XSPSHREG
                            880 	.globl _XSPMODE
                            881 	.globl _XSPCLKSRC
                            882 	.globl _XRADIOSTAT
                            883 	.globl _XRADIOSTAT1
                            884 	.globl _XRADIOSTAT0
                            885 	.globl _XRADIODATA3
                            886 	.globl _XRADIODATA2
                            887 	.globl _XRADIODATA1
                            888 	.globl _XRADIODATA0
                            889 	.globl _XRADIOADDR1
                            890 	.globl _XRADIOADDR0
                            891 	.globl _XRADIOACC
                            892 	.globl _XOC1STATUS
                            893 	.globl _XOC1PIN
                            894 	.globl _XOC1MODE
                            895 	.globl _XOC1COMP
                            896 	.globl _XOC1COMP1
                            897 	.globl _XOC1COMP0
                            898 	.globl _XOC0STATUS
                            899 	.globl _XOC0PIN
                            900 	.globl _XOC0MODE
                            901 	.globl _XOC0COMP
                            902 	.globl _XOC0COMP1
                            903 	.globl _XOC0COMP0
                            904 	.globl _XNVSTATUS
                            905 	.globl _XNVKEY
                            906 	.globl _XNVDATA
                            907 	.globl _XNVDATA1
                            908 	.globl _XNVDATA0
                            909 	.globl _XNVADDR
                            910 	.globl _XNVADDR1
                            911 	.globl _XNVADDR0
                            912 	.globl _XIC1STATUS
                            913 	.globl _XIC1MODE
                            914 	.globl _XIC1CAPT
                            915 	.globl _XIC1CAPT1
                            916 	.globl _XIC1CAPT0
                            917 	.globl _XIC0STATUS
                            918 	.globl _XIC0MODE
                            919 	.globl _XIC0CAPT
                            920 	.globl _XIC0CAPT1
                            921 	.globl _XIC0CAPT0
                            922 	.globl _XPORTR
                            923 	.globl _XPORTC
                            924 	.globl _XPORTB
                            925 	.globl _XPORTA
                            926 	.globl _XPINR
                            927 	.globl _XPINC
                            928 	.globl _XPINB
                            929 	.globl _XPINA
                            930 	.globl _XDIRR
                            931 	.globl _XDIRC
                            932 	.globl _XDIRB
                            933 	.globl _XDIRA
                            934 	.globl _XDBGLNKSTAT
                            935 	.globl _XDBGLNKBUF
                            936 	.globl _XCODECONFIG
                            937 	.globl _XCLKSTAT
                            938 	.globl _XCLKCON
                            939 	.globl _XANALOGCOMP
                            940 	.globl _XADCCONV
                            941 	.globl _XADCCLKSRC
                            942 	.globl _XADCCH3CONFIG
                            943 	.globl _XADCCH2CONFIG
                            944 	.globl _XADCCH1CONFIG
                            945 	.globl _XADCCH0CONFIG
                            946 	.globl _XPCON
                            947 	.globl _XIP
                            948 	.globl _XIE
                            949 	.globl _XDPTR1
                            950 	.globl _XDPTR0
                            951 	.globl _XTALREADY
                            952 	.globl _XTALOSC
                            953 	.globl _XTALAMPL
                            954 	.globl _SILICONREV
                            955 	.globl _SCRATCH3
                            956 	.globl _SCRATCH2
                            957 	.globl _SCRATCH1
                            958 	.globl _SCRATCH0
                            959 	.globl _RADIOMUX
                            960 	.globl _RADIOFSTATADDR
                            961 	.globl _RADIOFSTATADDR1
                            962 	.globl _RADIOFSTATADDR0
                            963 	.globl _RADIOFDATAADDR
                            964 	.globl _RADIOFDATAADDR1
                            965 	.globl _RADIOFDATAADDR0
                            966 	.globl _OSCRUN
                            967 	.globl _OSCREADY
                            968 	.globl _OSCFORCERUN
                            969 	.globl _OSCCALIB
                            970 	.globl _MISCCTRL
                            971 	.globl _LPXOSCGM
                            972 	.globl _LPOSCREF
                            973 	.globl _LPOSCREF1
                            974 	.globl _LPOSCREF0
                            975 	.globl _LPOSCPER
                            976 	.globl _LPOSCPER1
                            977 	.globl _LPOSCPER0
                            978 	.globl _LPOSCKFILT
                            979 	.globl _LPOSCKFILT1
                            980 	.globl _LPOSCKFILT0
                            981 	.globl _LPOSCFREQ
                            982 	.globl _LPOSCFREQ1
                            983 	.globl _LPOSCFREQ0
                            984 	.globl _LPOSCCONFIG
                            985 	.globl _PINSEL
                            986 	.globl _PINCHGC
                            987 	.globl _PINCHGB
                            988 	.globl _PINCHGA
                            989 	.globl _PALTRADIO
                            990 	.globl _PALTC
                            991 	.globl _PALTB
                            992 	.globl _PALTA
                            993 	.globl _INTCHGC
                            994 	.globl _INTCHGB
                            995 	.globl _INTCHGA
                            996 	.globl _EXTIRQ
                            997 	.globl _GPIOENABLE
                            998 	.globl _ANALOGA
                            999 	.globl _FRCOSCREF
                           1000 	.globl _FRCOSCREF1
                           1001 	.globl _FRCOSCREF0
                           1002 	.globl _FRCOSCPER
                           1003 	.globl _FRCOSCPER1
                           1004 	.globl _FRCOSCPER0
                           1005 	.globl _FRCOSCKFILT
                           1006 	.globl _FRCOSCKFILT1
                           1007 	.globl _FRCOSCKFILT0
                           1008 	.globl _FRCOSCFREQ
                           1009 	.globl _FRCOSCFREQ1
                           1010 	.globl _FRCOSCFREQ0
                           1011 	.globl _FRCOSCCTRL
                           1012 	.globl _FRCOSCCONFIG
                           1013 	.globl _DMA1CONFIG
                           1014 	.globl _DMA1ADDR
                           1015 	.globl _DMA1ADDR1
                           1016 	.globl _DMA1ADDR0
                           1017 	.globl _DMA0CONFIG
                           1018 	.globl _DMA0ADDR
                           1019 	.globl _DMA0ADDR1
                           1020 	.globl _DMA0ADDR0
                           1021 	.globl _ADCTUNE2
                           1022 	.globl _ADCTUNE1
                           1023 	.globl _ADCTUNE0
                           1024 	.globl _ADCCH3VAL
                           1025 	.globl _ADCCH3VAL1
                           1026 	.globl _ADCCH3VAL0
                           1027 	.globl _ADCCH2VAL
                           1028 	.globl _ADCCH2VAL1
                           1029 	.globl _ADCCH2VAL0
                           1030 	.globl _ADCCH1VAL
                           1031 	.globl _ADCCH1VAL1
                           1032 	.globl _ADCCH1VAL0
                           1033 	.globl _ADCCH0VAL
                           1034 	.globl _ADCCH0VAL1
                           1035 	.globl _ADCCH0VAL0
                           1036 	.globl _com0_portinit
                           1037 	.globl _com0_init
                           1038 	.globl _com0_setpos
                           1039 	.globl _com0_writestr
                           1040 	.globl _com0_tx
                           1041 	.globl _com0_clear
                           1042 ;--------------------------------------------------------
                           1043 ; special function registers
                           1044 ;--------------------------------------------------------
                           1045 	.area RSEG    (ABS,DATA)
   0000                    1046 	.org 0x0000
                    00E0   1047 _ACC	=	0x00e0
                    00F0   1048 _B	=	0x00f0
                    0083   1049 _DPH	=	0x0083
                    0085   1050 _DPH1	=	0x0085
                    0082   1051 _DPL	=	0x0082
                    0084   1052 _DPL1	=	0x0084
                    8382   1053 _DPTR0	=	0x8382
                    8584   1054 _DPTR1	=	0x8584
                    0086   1055 _DPS	=	0x0086
                    00A0   1056 _E2IE	=	0x00a0
                    00C0   1057 _E2IP	=	0x00c0
                    0098   1058 _EIE	=	0x0098
                    00B0   1059 _EIP	=	0x00b0
                    00A8   1060 _IE	=	0x00a8
                    00B8   1061 _IP	=	0x00b8
                    0087   1062 _PCON	=	0x0087
                    00D0   1063 _PSW	=	0x00d0
                    0081   1064 _SP	=	0x0081
                    00D9   1065 _XPAGE	=	0x00d9
                    00D9   1066 __XPAGE	=	0x00d9
                    00CA   1067 _ADCCH0CONFIG	=	0x00ca
                    00CB   1068 _ADCCH1CONFIG	=	0x00cb
                    00D2   1069 _ADCCH2CONFIG	=	0x00d2
                    00D3   1070 _ADCCH3CONFIG	=	0x00d3
                    00D1   1071 _ADCCLKSRC	=	0x00d1
                    00C9   1072 _ADCCONV	=	0x00c9
                    00E1   1073 _ANALOGCOMP	=	0x00e1
                    00C6   1074 _CLKCON	=	0x00c6
                    00C7   1075 _CLKSTAT	=	0x00c7
                    0097   1076 _CODECONFIG	=	0x0097
                    00E3   1077 _DBGLNKBUF	=	0x00e3
                    00E2   1078 _DBGLNKSTAT	=	0x00e2
                    0089   1079 _DIRA	=	0x0089
                    008A   1080 _DIRB	=	0x008a
                    008B   1081 _DIRC	=	0x008b
                    008E   1082 _DIRR	=	0x008e
                    00C8   1083 _PINA	=	0x00c8
                    00E8   1084 _PINB	=	0x00e8
                    00F8   1085 _PINC	=	0x00f8
                    008D   1086 _PINR	=	0x008d
                    0080   1087 _PORTA	=	0x0080
                    0088   1088 _PORTB	=	0x0088
                    0090   1089 _PORTC	=	0x0090
                    008C   1090 _PORTR	=	0x008c
                    00CE   1091 _IC0CAPT0	=	0x00ce
                    00CF   1092 _IC0CAPT1	=	0x00cf
                    CFCE   1093 _IC0CAPT	=	0xcfce
                    00CC   1094 _IC0MODE	=	0x00cc
                    00CD   1095 _IC0STATUS	=	0x00cd
                    00D6   1096 _IC1CAPT0	=	0x00d6
                    00D7   1097 _IC1CAPT1	=	0x00d7
                    D7D6   1098 _IC1CAPT	=	0xd7d6
                    00D4   1099 _IC1MODE	=	0x00d4
                    00D5   1100 _IC1STATUS	=	0x00d5
                    0092   1101 _NVADDR0	=	0x0092
                    0093   1102 _NVADDR1	=	0x0093
                    9392   1103 _NVADDR	=	0x9392
                    0094   1104 _NVDATA0	=	0x0094
                    0095   1105 _NVDATA1	=	0x0095
                    9594   1106 _NVDATA	=	0x9594
                    0096   1107 _NVKEY	=	0x0096
                    0091   1108 _NVSTATUS	=	0x0091
                    00BC   1109 _OC0COMP0	=	0x00bc
                    00BD   1110 _OC0COMP1	=	0x00bd
                    BDBC   1111 _OC0COMP	=	0xbdbc
                    00B9   1112 _OC0MODE	=	0x00b9
                    00BA   1113 _OC0PIN	=	0x00ba
                    00BB   1114 _OC0STATUS	=	0x00bb
                    00C4   1115 _OC1COMP0	=	0x00c4
                    00C5   1116 _OC1COMP1	=	0x00c5
                    C5C4   1117 _OC1COMP	=	0xc5c4
                    00C1   1118 _OC1MODE	=	0x00c1
                    00C2   1119 _OC1PIN	=	0x00c2
                    00C3   1120 _OC1STATUS	=	0x00c3
                    00B1   1121 _RADIOACC	=	0x00b1
                    00B3   1122 _RADIOADDR0	=	0x00b3
                    00B2   1123 _RADIOADDR1	=	0x00b2
                    B2B3   1124 _RADIOADDR	=	0xb2b3
                    00B7   1125 _RADIODATA0	=	0x00b7
                    00B6   1126 _RADIODATA1	=	0x00b6
                    00B5   1127 _RADIODATA2	=	0x00b5
                    00B4   1128 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1129 _RADIODATA	=	0xb4b5b6b7
                    00BE   1130 _RADIOSTAT0	=	0x00be
                    00BF   1131 _RADIOSTAT1	=	0x00bf
                    BFBE   1132 _RADIOSTAT	=	0xbfbe
                    00DF   1133 _SPCLKSRC	=	0x00df
                    00DC   1134 _SPMODE	=	0x00dc
                    00DE   1135 _SPSHREG	=	0x00de
                    00DD   1136 _SPSTATUS	=	0x00dd
                    009A   1137 _T0CLKSRC	=	0x009a
                    009C   1138 _T0CNT0	=	0x009c
                    009D   1139 _T0CNT1	=	0x009d
                    9D9C   1140 _T0CNT	=	0x9d9c
                    0099   1141 _T0MODE	=	0x0099
                    009E   1142 _T0PERIOD0	=	0x009e
                    009F   1143 _T0PERIOD1	=	0x009f
                    9F9E   1144 _T0PERIOD	=	0x9f9e
                    009B   1145 _T0STATUS	=	0x009b
                    00A2   1146 _T1CLKSRC	=	0x00a2
                    00A4   1147 _T1CNT0	=	0x00a4
                    00A5   1148 _T1CNT1	=	0x00a5
                    A5A4   1149 _T1CNT	=	0xa5a4
                    00A1   1150 _T1MODE	=	0x00a1
                    00A6   1151 _T1PERIOD0	=	0x00a6
                    00A7   1152 _T1PERIOD1	=	0x00a7
                    A7A6   1153 _T1PERIOD	=	0xa7a6
                    00A3   1154 _T1STATUS	=	0x00a3
                    00AA   1155 _T2CLKSRC	=	0x00aa
                    00AC   1156 _T2CNT0	=	0x00ac
                    00AD   1157 _T2CNT1	=	0x00ad
                    ADAC   1158 _T2CNT	=	0xadac
                    00A9   1159 _T2MODE	=	0x00a9
                    00AE   1160 _T2PERIOD0	=	0x00ae
                    00AF   1161 _T2PERIOD1	=	0x00af
                    AFAE   1162 _T2PERIOD	=	0xafae
                    00AB   1163 _T2STATUS	=	0x00ab
                    00E4   1164 _U0CTRL	=	0x00e4
                    00E7   1165 _U0MODE	=	0x00e7
                    00E6   1166 _U0SHREG	=	0x00e6
                    00E5   1167 _U0STATUS	=	0x00e5
                    00EC   1168 _U1CTRL	=	0x00ec
                    00EF   1169 _U1MODE	=	0x00ef
                    00EE   1170 _U1SHREG	=	0x00ee
                    00ED   1171 _U1STATUS	=	0x00ed
                    00DA   1172 _WDTCFG	=	0x00da
                    00DB   1173 _WDTRESET	=	0x00db
                    00F1   1174 _WTCFGA	=	0x00f1
                    00F9   1175 _WTCFGB	=	0x00f9
                    00F2   1176 _WTCNTA0	=	0x00f2
                    00F3   1177 _WTCNTA1	=	0x00f3
                    F3F2   1178 _WTCNTA	=	0xf3f2
                    00FA   1179 _WTCNTB0	=	0x00fa
                    00FB   1180 _WTCNTB1	=	0x00fb
                    FBFA   1181 _WTCNTB	=	0xfbfa
                    00EB   1182 _WTCNTR1	=	0x00eb
                    00F4   1183 _WTEVTA0	=	0x00f4
                    00F5   1184 _WTEVTA1	=	0x00f5
                    F5F4   1185 _WTEVTA	=	0xf5f4
                    00F6   1186 _WTEVTB0	=	0x00f6
                    00F7   1187 _WTEVTB1	=	0x00f7
                    F7F6   1188 _WTEVTB	=	0xf7f6
                    00FC   1189 _WTEVTC0	=	0x00fc
                    00FD   1190 _WTEVTC1	=	0x00fd
                    FDFC   1191 _WTEVTC	=	0xfdfc
                    00FE   1192 _WTEVTD0	=	0x00fe
                    00FF   1193 _WTEVTD1	=	0x00ff
                    FFFE   1194 _WTEVTD	=	0xfffe
                    00E9   1195 _WTIRQEN	=	0x00e9
                    00EA   1196 _WTSTAT	=	0x00ea
                           1197 ;--------------------------------------------------------
                           1198 ; special function bits
                           1199 ;--------------------------------------------------------
                           1200 	.area RSEG    (ABS,DATA)
   0000                    1201 	.org 0x0000
                    00E0   1202 _ACC_0	=	0x00e0
                    00E1   1203 _ACC_1	=	0x00e1
                    00E2   1204 _ACC_2	=	0x00e2
                    00E3   1205 _ACC_3	=	0x00e3
                    00E4   1206 _ACC_4	=	0x00e4
                    00E5   1207 _ACC_5	=	0x00e5
                    00E6   1208 _ACC_6	=	0x00e6
                    00E7   1209 _ACC_7	=	0x00e7
                    00F0   1210 _B_0	=	0x00f0
                    00F1   1211 _B_1	=	0x00f1
                    00F2   1212 _B_2	=	0x00f2
                    00F3   1213 _B_3	=	0x00f3
                    00F4   1214 _B_4	=	0x00f4
                    00F5   1215 _B_5	=	0x00f5
                    00F6   1216 _B_6	=	0x00f6
                    00F7   1217 _B_7	=	0x00f7
                    00A0   1218 _E2IE_0	=	0x00a0
                    00A1   1219 _E2IE_1	=	0x00a1
                    00A2   1220 _E2IE_2	=	0x00a2
                    00A3   1221 _E2IE_3	=	0x00a3
                    00A4   1222 _E2IE_4	=	0x00a4
                    00A5   1223 _E2IE_5	=	0x00a5
                    00A6   1224 _E2IE_6	=	0x00a6
                    00A7   1225 _E2IE_7	=	0x00a7
                    00C0   1226 _E2IP_0	=	0x00c0
                    00C1   1227 _E2IP_1	=	0x00c1
                    00C2   1228 _E2IP_2	=	0x00c2
                    00C3   1229 _E2IP_3	=	0x00c3
                    00C4   1230 _E2IP_4	=	0x00c4
                    00C5   1231 _E2IP_5	=	0x00c5
                    00C6   1232 _E2IP_6	=	0x00c6
                    00C7   1233 _E2IP_7	=	0x00c7
                    0098   1234 _EIE_0	=	0x0098
                    0099   1235 _EIE_1	=	0x0099
                    009A   1236 _EIE_2	=	0x009a
                    009B   1237 _EIE_3	=	0x009b
                    009C   1238 _EIE_4	=	0x009c
                    009D   1239 _EIE_5	=	0x009d
                    009E   1240 _EIE_6	=	0x009e
                    009F   1241 _EIE_7	=	0x009f
                    00B0   1242 _EIP_0	=	0x00b0
                    00B1   1243 _EIP_1	=	0x00b1
                    00B2   1244 _EIP_2	=	0x00b2
                    00B3   1245 _EIP_3	=	0x00b3
                    00B4   1246 _EIP_4	=	0x00b4
                    00B5   1247 _EIP_5	=	0x00b5
                    00B6   1248 _EIP_6	=	0x00b6
                    00B7   1249 _EIP_7	=	0x00b7
                    00A8   1250 _IE_0	=	0x00a8
                    00A9   1251 _IE_1	=	0x00a9
                    00AA   1252 _IE_2	=	0x00aa
                    00AB   1253 _IE_3	=	0x00ab
                    00AC   1254 _IE_4	=	0x00ac
                    00AD   1255 _IE_5	=	0x00ad
                    00AE   1256 _IE_6	=	0x00ae
                    00AF   1257 _IE_7	=	0x00af
                    00AF   1258 _EA	=	0x00af
                    00B8   1259 _IP_0	=	0x00b8
                    00B9   1260 _IP_1	=	0x00b9
                    00BA   1261 _IP_2	=	0x00ba
                    00BB   1262 _IP_3	=	0x00bb
                    00BC   1263 _IP_4	=	0x00bc
                    00BD   1264 _IP_5	=	0x00bd
                    00BE   1265 _IP_6	=	0x00be
                    00BF   1266 _IP_7	=	0x00bf
                    00D0   1267 _P	=	0x00d0
                    00D1   1268 _F1	=	0x00d1
                    00D2   1269 _OV	=	0x00d2
                    00D3   1270 _RS0	=	0x00d3
                    00D4   1271 _RS1	=	0x00d4
                    00D5   1272 _F0	=	0x00d5
                    00D6   1273 _AC	=	0x00d6
                    00D7   1274 _CY	=	0x00d7
                    00C8   1275 _PINA_0	=	0x00c8
                    00C9   1276 _PINA_1	=	0x00c9
                    00CA   1277 _PINA_2	=	0x00ca
                    00CB   1278 _PINA_3	=	0x00cb
                    00CC   1279 _PINA_4	=	0x00cc
                    00CD   1280 _PINA_5	=	0x00cd
                    00CE   1281 _PINA_6	=	0x00ce
                    00CF   1282 _PINA_7	=	0x00cf
                    00E8   1283 _PINB_0	=	0x00e8
                    00E9   1284 _PINB_1	=	0x00e9
                    00EA   1285 _PINB_2	=	0x00ea
                    00EB   1286 _PINB_3	=	0x00eb
                    00EC   1287 _PINB_4	=	0x00ec
                    00ED   1288 _PINB_5	=	0x00ed
                    00EE   1289 _PINB_6	=	0x00ee
                    00EF   1290 _PINB_7	=	0x00ef
                    00F8   1291 _PINC_0	=	0x00f8
                    00F9   1292 _PINC_1	=	0x00f9
                    00FA   1293 _PINC_2	=	0x00fa
                    00FB   1294 _PINC_3	=	0x00fb
                    00FC   1295 _PINC_4	=	0x00fc
                    00FD   1296 _PINC_5	=	0x00fd
                    00FE   1297 _PINC_6	=	0x00fe
                    00FF   1298 _PINC_7	=	0x00ff
                    0080   1299 _PORTA_0	=	0x0080
                    0081   1300 _PORTA_1	=	0x0081
                    0082   1301 _PORTA_2	=	0x0082
                    0083   1302 _PORTA_3	=	0x0083
                    0084   1303 _PORTA_4	=	0x0084
                    0085   1304 _PORTA_5	=	0x0085
                    0086   1305 _PORTA_6	=	0x0086
                    0087   1306 _PORTA_7	=	0x0087
                    0088   1307 _PORTB_0	=	0x0088
                    0089   1308 _PORTB_1	=	0x0089
                    008A   1309 _PORTB_2	=	0x008a
                    008B   1310 _PORTB_3	=	0x008b
                    008C   1311 _PORTB_4	=	0x008c
                    008D   1312 _PORTB_5	=	0x008d
                    008E   1313 _PORTB_6	=	0x008e
                    008F   1314 _PORTB_7	=	0x008f
                    0090   1315 _PORTC_0	=	0x0090
                    0091   1316 _PORTC_1	=	0x0091
                    0092   1317 _PORTC_2	=	0x0092
                    0093   1318 _PORTC_3	=	0x0093
                    0094   1319 _PORTC_4	=	0x0094
                    0095   1320 _PORTC_5	=	0x0095
                    0096   1321 _PORTC_6	=	0x0096
                    0097   1322 _PORTC_7	=	0x0097
                           1323 ;--------------------------------------------------------
                           1324 ; overlayable register banks
                           1325 ;--------------------------------------------------------
                           1326 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1327 	.ds 8
                           1328 ;--------------------------------------------------------
                           1329 ; internal ram data
                           1330 ;--------------------------------------------------------
                           1331 	.area DSEG    (DATA)
   0008                    1332 _lcd_border:
   0008                    1333 	.ds 2
                           1334 ;--------------------------------------------------------
                           1335 ; overlayable items in internal ram 
                           1336 ;--------------------------------------------------------
                           1337 ;--------------------------------------------------------
                           1338 ; indirectly addressable internal ram data
                           1339 ;--------------------------------------------------------
                           1340 	.area ISEG    (DATA)
                           1341 ;--------------------------------------------------------
                           1342 ; absolute internal ram data
                           1343 ;--------------------------------------------------------
                           1344 	.area IABS    (ABS,DATA)
                           1345 	.area IABS    (ABS,DATA)
                           1346 ;--------------------------------------------------------
                           1347 ; bit data
                           1348 ;--------------------------------------------------------
                           1349 	.area BSEG    (BIT)
                           1350 ;--------------------------------------------------------
                           1351 ; paged external ram data
                           1352 ;--------------------------------------------------------
                           1353 	.area PSEG    (PAG,XDATA)
                           1354 ;--------------------------------------------------------
                           1355 ; external ram data
                           1356 ;--------------------------------------------------------
                           1357 	.area XSEG    (XDATA)
                    FC06   1358 _flash_deviceid	=	0xfc06
                    FC00   1359 _flash_calsector	=	0xfc00
                    7020   1360 _ADCCH0VAL0	=	0x7020
                    7021   1361 _ADCCH0VAL1	=	0x7021
                    7020   1362 _ADCCH0VAL	=	0x7020
                    7022   1363 _ADCCH1VAL0	=	0x7022
                    7023   1364 _ADCCH1VAL1	=	0x7023
                    7022   1365 _ADCCH1VAL	=	0x7022
                    7024   1366 _ADCCH2VAL0	=	0x7024
                    7025   1367 _ADCCH2VAL1	=	0x7025
                    7024   1368 _ADCCH2VAL	=	0x7024
                    7026   1369 _ADCCH3VAL0	=	0x7026
                    7027   1370 _ADCCH3VAL1	=	0x7027
                    7026   1371 _ADCCH3VAL	=	0x7026
                    7028   1372 _ADCTUNE0	=	0x7028
                    7029   1373 _ADCTUNE1	=	0x7029
                    702A   1374 _ADCTUNE2	=	0x702a
                    7010   1375 _DMA0ADDR0	=	0x7010
                    7011   1376 _DMA0ADDR1	=	0x7011
                    7010   1377 _DMA0ADDR	=	0x7010
                    7014   1378 _DMA0CONFIG	=	0x7014
                    7012   1379 _DMA1ADDR0	=	0x7012
                    7013   1380 _DMA1ADDR1	=	0x7013
                    7012   1381 _DMA1ADDR	=	0x7012
                    7015   1382 _DMA1CONFIG	=	0x7015
                    7070   1383 _FRCOSCCONFIG	=	0x7070
                    7071   1384 _FRCOSCCTRL	=	0x7071
                    7076   1385 _FRCOSCFREQ0	=	0x7076
                    7077   1386 _FRCOSCFREQ1	=	0x7077
                    7076   1387 _FRCOSCFREQ	=	0x7076
                    7072   1388 _FRCOSCKFILT0	=	0x7072
                    7073   1389 _FRCOSCKFILT1	=	0x7073
                    7072   1390 _FRCOSCKFILT	=	0x7072
                    7078   1391 _FRCOSCPER0	=	0x7078
                    7079   1392 _FRCOSCPER1	=	0x7079
                    7078   1393 _FRCOSCPER	=	0x7078
                    7074   1394 _FRCOSCREF0	=	0x7074
                    7075   1395 _FRCOSCREF1	=	0x7075
                    7074   1396 _FRCOSCREF	=	0x7074
                    7007   1397 _ANALOGA	=	0x7007
                    700C   1398 _GPIOENABLE	=	0x700c
                    7003   1399 _EXTIRQ	=	0x7003
                    7000   1400 _INTCHGA	=	0x7000
                    7001   1401 _INTCHGB	=	0x7001
                    7002   1402 _INTCHGC	=	0x7002
                    7008   1403 _PALTA	=	0x7008
                    7009   1404 _PALTB	=	0x7009
                    700A   1405 _PALTC	=	0x700a
                    7046   1406 _PALTRADIO	=	0x7046
                    7004   1407 _PINCHGA	=	0x7004
                    7005   1408 _PINCHGB	=	0x7005
                    7006   1409 _PINCHGC	=	0x7006
                    700B   1410 _PINSEL	=	0x700b
                    7060   1411 _LPOSCCONFIG	=	0x7060
                    7066   1412 _LPOSCFREQ0	=	0x7066
                    7067   1413 _LPOSCFREQ1	=	0x7067
                    7066   1414 _LPOSCFREQ	=	0x7066
                    7062   1415 _LPOSCKFILT0	=	0x7062
                    7063   1416 _LPOSCKFILT1	=	0x7063
                    7062   1417 _LPOSCKFILT	=	0x7062
                    7068   1418 _LPOSCPER0	=	0x7068
                    7069   1419 _LPOSCPER1	=	0x7069
                    7068   1420 _LPOSCPER	=	0x7068
                    7064   1421 _LPOSCREF0	=	0x7064
                    7065   1422 _LPOSCREF1	=	0x7065
                    7064   1423 _LPOSCREF	=	0x7064
                    7054   1424 _LPXOSCGM	=	0x7054
                    7F01   1425 _MISCCTRL	=	0x7f01
                    7053   1426 _OSCCALIB	=	0x7053
                    7050   1427 _OSCFORCERUN	=	0x7050
                    7052   1428 _OSCREADY	=	0x7052
                    7051   1429 _OSCRUN	=	0x7051
                    7040   1430 _RADIOFDATAADDR0	=	0x7040
                    7041   1431 _RADIOFDATAADDR1	=	0x7041
                    7040   1432 _RADIOFDATAADDR	=	0x7040
                    7042   1433 _RADIOFSTATADDR0	=	0x7042
                    7043   1434 _RADIOFSTATADDR1	=	0x7043
                    7042   1435 _RADIOFSTATADDR	=	0x7042
                    7044   1436 _RADIOMUX	=	0x7044
                    7084   1437 _SCRATCH0	=	0x7084
                    7085   1438 _SCRATCH1	=	0x7085
                    7086   1439 _SCRATCH2	=	0x7086
                    7087   1440 _SCRATCH3	=	0x7087
                    7F00   1441 _SILICONREV	=	0x7f00
                    7F19   1442 _XTALAMPL	=	0x7f19
                    7F18   1443 _XTALOSC	=	0x7f18
                    7F1A   1444 _XTALREADY	=	0x7f1a
                    3F82   1445 _XDPTR0	=	0x3f82
                    3F84   1446 _XDPTR1	=	0x3f84
                    3FA8   1447 _XIE	=	0x3fa8
                    3FB8   1448 _XIP	=	0x3fb8
                    3F87   1449 _XPCON	=	0x3f87
                    3FCA   1450 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1451 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1452 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1453 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1454 _XADCCLKSRC	=	0x3fd1
                    3FC9   1455 _XADCCONV	=	0x3fc9
                    3FE1   1456 _XANALOGCOMP	=	0x3fe1
                    3FC6   1457 _XCLKCON	=	0x3fc6
                    3FC7   1458 _XCLKSTAT	=	0x3fc7
                    3F97   1459 _XCODECONFIG	=	0x3f97
                    3FE3   1460 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1461 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1462 _XDIRA	=	0x3f89
                    3F8A   1463 _XDIRB	=	0x3f8a
                    3F8B   1464 _XDIRC	=	0x3f8b
                    3F8E   1465 _XDIRR	=	0x3f8e
                    3FC8   1466 _XPINA	=	0x3fc8
                    3FE8   1467 _XPINB	=	0x3fe8
                    3FF8   1468 _XPINC	=	0x3ff8
                    3F8D   1469 _XPINR	=	0x3f8d
                    3F80   1470 _XPORTA	=	0x3f80
                    3F88   1471 _XPORTB	=	0x3f88
                    3F90   1472 _XPORTC	=	0x3f90
                    3F8C   1473 _XPORTR	=	0x3f8c
                    3FCE   1474 _XIC0CAPT0	=	0x3fce
                    3FCF   1475 _XIC0CAPT1	=	0x3fcf
                    3FCE   1476 _XIC0CAPT	=	0x3fce
                    3FCC   1477 _XIC0MODE	=	0x3fcc
                    3FCD   1478 _XIC0STATUS	=	0x3fcd
                    3FD6   1479 _XIC1CAPT0	=	0x3fd6
                    3FD7   1480 _XIC1CAPT1	=	0x3fd7
                    3FD6   1481 _XIC1CAPT	=	0x3fd6
                    3FD4   1482 _XIC1MODE	=	0x3fd4
                    3FD5   1483 _XIC1STATUS	=	0x3fd5
                    3F92   1484 _XNVADDR0	=	0x3f92
                    3F93   1485 _XNVADDR1	=	0x3f93
                    3F92   1486 _XNVADDR	=	0x3f92
                    3F94   1487 _XNVDATA0	=	0x3f94
                    3F95   1488 _XNVDATA1	=	0x3f95
                    3F94   1489 _XNVDATA	=	0x3f94
                    3F96   1490 _XNVKEY	=	0x3f96
                    3F91   1491 _XNVSTATUS	=	0x3f91
                    3FBC   1492 _XOC0COMP0	=	0x3fbc
                    3FBD   1493 _XOC0COMP1	=	0x3fbd
                    3FBC   1494 _XOC0COMP	=	0x3fbc
                    3FB9   1495 _XOC0MODE	=	0x3fb9
                    3FBA   1496 _XOC0PIN	=	0x3fba
                    3FBB   1497 _XOC0STATUS	=	0x3fbb
                    3FC4   1498 _XOC1COMP0	=	0x3fc4
                    3FC5   1499 _XOC1COMP1	=	0x3fc5
                    3FC4   1500 _XOC1COMP	=	0x3fc4
                    3FC1   1501 _XOC1MODE	=	0x3fc1
                    3FC2   1502 _XOC1PIN	=	0x3fc2
                    3FC3   1503 _XOC1STATUS	=	0x3fc3
                    3FB1   1504 _XRADIOACC	=	0x3fb1
                    3FB3   1505 _XRADIOADDR0	=	0x3fb3
                    3FB2   1506 _XRADIOADDR1	=	0x3fb2
                    3FB7   1507 _XRADIODATA0	=	0x3fb7
                    3FB6   1508 _XRADIODATA1	=	0x3fb6
                    3FB5   1509 _XRADIODATA2	=	0x3fb5
                    3FB4   1510 _XRADIODATA3	=	0x3fb4
                    3FBE   1511 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1512 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1513 _XRADIOSTAT	=	0x3fbe
                    3FDF   1514 _XSPCLKSRC	=	0x3fdf
                    3FDC   1515 _XSPMODE	=	0x3fdc
                    3FDE   1516 _XSPSHREG	=	0x3fde
                    3FDD   1517 _XSPSTATUS	=	0x3fdd
                    3F9A   1518 _XT0CLKSRC	=	0x3f9a
                    3F9C   1519 _XT0CNT0	=	0x3f9c
                    3F9D   1520 _XT0CNT1	=	0x3f9d
                    3F9C   1521 _XT0CNT	=	0x3f9c
                    3F99   1522 _XT0MODE	=	0x3f99
                    3F9E   1523 _XT0PERIOD0	=	0x3f9e
                    3F9F   1524 _XT0PERIOD1	=	0x3f9f
                    3F9E   1525 _XT0PERIOD	=	0x3f9e
                    3F9B   1526 _XT0STATUS	=	0x3f9b
                    3FA2   1527 _XT1CLKSRC	=	0x3fa2
                    3FA4   1528 _XT1CNT0	=	0x3fa4
                    3FA5   1529 _XT1CNT1	=	0x3fa5
                    3FA4   1530 _XT1CNT	=	0x3fa4
                    3FA1   1531 _XT1MODE	=	0x3fa1
                    3FA6   1532 _XT1PERIOD0	=	0x3fa6
                    3FA7   1533 _XT1PERIOD1	=	0x3fa7
                    3FA6   1534 _XT1PERIOD	=	0x3fa6
                    3FA3   1535 _XT1STATUS	=	0x3fa3
                    3FAA   1536 _XT2CLKSRC	=	0x3faa
                    3FAC   1537 _XT2CNT0	=	0x3fac
                    3FAD   1538 _XT2CNT1	=	0x3fad
                    3FAC   1539 _XT2CNT	=	0x3fac
                    3FA9   1540 _XT2MODE	=	0x3fa9
                    3FAE   1541 _XT2PERIOD0	=	0x3fae
                    3FAF   1542 _XT2PERIOD1	=	0x3faf
                    3FAE   1543 _XT2PERIOD	=	0x3fae
                    3FAB   1544 _XT2STATUS	=	0x3fab
                    3FE4   1545 _XU0CTRL	=	0x3fe4
                    3FE7   1546 _XU0MODE	=	0x3fe7
                    3FE6   1547 _XU0SHREG	=	0x3fe6
                    3FE5   1548 _XU0STATUS	=	0x3fe5
                    3FEC   1549 _XU1CTRL	=	0x3fec
                    3FEF   1550 _XU1MODE	=	0x3fef
                    3FEE   1551 _XU1SHREG	=	0x3fee
                    3FED   1552 _XU1STATUS	=	0x3fed
                    3FDA   1553 _XWDTCFG	=	0x3fda
                    3FDB   1554 _XWDTRESET	=	0x3fdb
                    3FF1   1555 _XWTCFGA	=	0x3ff1
                    3FF9   1556 _XWTCFGB	=	0x3ff9
                    3FF2   1557 _XWTCNTA0	=	0x3ff2
                    3FF3   1558 _XWTCNTA1	=	0x3ff3
                    3FF2   1559 _XWTCNTA	=	0x3ff2
                    3FFA   1560 _XWTCNTB0	=	0x3ffa
                    3FFB   1561 _XWTCNTB1	=	0x3ffb
                    3FFA   1562 _XWTCNTB	=	0x3ffa
                    3FEB   1563 _XWTCNTR1	=	0x3feb
                    3FF4   1564 _XWTEVTA0	=	0x3ff4
                    3FF5   1565 _XWTEVTA1	=	0x3ff5
                    3FF4   1566 _XWTEVTA	=	0x3ff4
                    3FF6   1567 _XWTEVTB0	=	0x3ff6
                    3FF7   1568 _XWTEVTB1	=	0x3ff7
                    3FF6   1569 _XWTEVTB	=	0x3ff6
                    3FFC   1570 _XWTEVTC0	=	0x3ffc
                    3FFD   1571 _XWTEVTC1	=	0x3ffd
                    3FFC   1572 _XWTEVTC	=	0x3ffc
                    3FFE   1573 _XWTEVTD0	=	0x3ffe
                    3FFF   1574 _XWTEVTD1	=	0x3fff
                    3FFE   1575 _XWTEVTD	=	0x3ffe
                    3FE9   1576 _XWTIRQEN	=	0x3fe9
                    3FEA   1577 _XWTSTAT	=	0x3fea
                    4114   1578 _AX5043_AFSKCTRL	=	0x4114
                    4113   1579 _AX5043_AFSKMARK0	=	0x4113
                    4112   1580 _AX5043_AFSKMARK1	=	0x4112
                    4111   1581 _AX5043_AFSKSPACE0	=	0x4111
                    4110   1582 _AX5043_AFSKSPACE1	=	0x4110
                    4043   1583 _AX5043_AGCCOUNTER	=	0x4043
                    4115   1584 _AX5043_AMPLFILTER	=	0x4115
                    4189   1585 _AX5043_BBOFFSCAP	=	0x4189
                    4188   1586 _AX5043_BBTUNE	=	0x4188
                    4041   1587 _AX5043_BGNDRSSI	=	0x4041
                    422E   1588 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   1589 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   1590 _AX5043_CRCINIT0	=	0x4017
                    4016   1591 _AX5043_CRCINIT1	=	0x4016
                    4015   1592 _AX5043_CRCINIT2	=	0x4015
                    4014   1593 _AX5043_CRCINIT3	=	0x4014
                    4332   1594 _AX5043_DACCONFIG	=	0x4332
                    4331   1595 _AX5043_DACVALUE0	=	0x4331
                    4330   1596 _AX5043_DACVALUE1	=	0x4330
                    4102   1597 _AX5043_DECIMATION	=	0x4102
                    4042   1598 _AX5043_DIVERSITY	=	0x4042
                    4011   1599 _AX5043_ENCODING	=	0x4011
                    4018   1600 _AX5043_FEC	=	0x4018
                    401A   1601 _AX5043_FECSTATUS	=	0x401a
                    4019   1602 _AX5043_FECSYNC	=	0x4019
                    402B   1603 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   1604 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   1605 _AX5043_FIFODATA	=	0x4029
                    402D   1606 _AX5043_FIFOFREE0	=	0x402d
                    402C   1607 _AX5043_FIFOFREE1	=	0x402c
                    4028   1608 _AX5043_FIFOSTAT	=	0x4028
                    402F   1609 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   1610 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   1611 _AX5043_FRAMING	=	0x4012
                    4037   1612 _AX5043_FREQA0	=	0x4037
                    4036   1613 _AX5043_FREQA1	=	0x4036
                    4035   1614 _AX5043_FREQA2	=	0x4035
                    4034   1615 _AX5043_FREQA3	=	0x4034
                    403F   1616 _AX5043_FREQB0	=	0x403f
                    403E   1617 _AX5043_FREQB1	=	0x403e
                    403D   1618 _AX5043_FREQB2	=	0x403d
                    403C   1619 _AX5043_FREQB3	=	0x403c
                    4163   1620 _AX5043_FSKDEV0	=	0x4163
                    4162   1621 _AX5043_FSKDEV1	=	0x4162
                    4161   1622 _AX5043_FSKDEV2	=	0x4161
                    410D   1623 _AX5043_FSKDMAX0	=	0x410d
                    410C   1624 _AX5043_FSKDMAX1	=	0x410c
                    410F   1625 _AX5043_FSKDMIN0	=	0x410f
                    410E   1626 _AX5043_FSKDMIN1	=	0x410e
                    4309   1627 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   1628 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   1629 _AX5043_GPADCCTRL	=	0x4300
                    4301   1630 _AX5043_GPADCPERIOD	=	0x4301
                    4101   1631 _AX5043_IFFREQ0	=	0x4101
                    4100   1632 _AX5043_IFFREQ1	=	0x4100
                    400B   1633 _AX5043_IRQINVERSION0	=	0x400b
                    400A   1634 _AX5043_IRQINVERSION1	=	0x400a
                    4007   1635 _AX5043_IRQMASK0	=	0x4007
                    4006   1636 _AX5043_IRQMASK1	=	0x4006
                    400D   1637 _AX5043_IRQREQUEST0	=	0x400d
                    400C   1638 _AX5043_IRQREQUEST1	=	0x400c
                    4310   1639 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   1640 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   1641 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   1642 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   1643 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   1644 _AX5043_LPOSCPER0	=	0x4319
                    4318   1645 _AX5043_LPOSCPER1	=	0x4318
                    4315   1646 _AX5043_LPOSCREF0	=	0x4315
                    4314   1647 _AX5043_LPOSCREF1	=	0x4314
                    4311   1648 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   1649 _AX5043_MATCH0LEN	=	0x4214
                    4216   1650 _AX5043_MATCH0MAX	=	0x4216
                    4215   1651 _AX5043_MATCH0MIN	=	0x4215
                    4213   1652 _AX5043_MATCH0PAT0	=	0x4213
                    4212   1653 _AX5043_MATCH0PAT1	=	0x4212
                    4211   1654 _AX5043_MATCH0PAT2	=	0x4211
                    4210   1655 _AX5043_MATCH0PAT3	=	0x4210
                    421C   1656 _AX5043_MATCH1LEN	=	0x421c
                    421E   1657 _AX5043_MATCH1MAX	=	0x421e
                    421D   1658 _AX5043_MATCH1MIN	=	0x421d
                    4219   1659 _AX5043_MATCH1PAT0	=	0x4219
                    4218   1660 _AX5043_MATCH1PAT1	=	0x4218
                    4108   1661 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   1662 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   1663 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   1664 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   1665 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   1666 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   1667 _AX5043_MODCFGA	=	0x4164
                    4160   1668 _AX5043_MODCFGF	=	0x4160
                    4010   1669 _AX5043_MODULATION	=	0x4010
                    4025   1670 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   1671 _AX5043_PINFUNCDATA	=	0x4023
                    4022   1672 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   1673 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   1674 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   1675 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   1676 _AX5043_PINSTATE	=	0x4020
                    4233   1677 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   1678 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   1679 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   1680 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   1681 _AX5043_PLLCPI	=	0x4031
                    4039   1682 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   1683 _AX5043_PLLLOCKDET	=	0x4182
                    4030   1684 _AX5043_PLLLOOP	=	0x4030
                    4038   1685 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   1686 _AX5043_PLLRANGINGA	=	0x4033
                    403B   1687 _AX5043_PLLRANGINGB	=	0x403b
                    4183   1688 _AX5043_PLLRNGCLK	=	0x4183
                    4032   1689 _AX5043_PLLVCODIV	=	0x4032
                    4180   1690 _AX5043_PLLVCOI	=	0x4180
                    4181   1691 _AX5043_PLLVCOIR	=	0x4181
                    4005   1692 _AX5043_POWIRQMASK	=	0x4005
                    4003   1693 _AX5043_POWSTAT	=	0x4003
                    4004   1694 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   1695 _AX5043_PWRAMP	=	0x4027
                    4002   1696 _AX5043_PWRMODE	=	0x4002
                    4009   1697 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   1698 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   1699 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   1700 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   1701 _AX5043_RADIOSTATE	=	0x401c
                    4040   1702 _AX5043_RSSI	=	0x4040
                    422D   1703 _AX5043_RSSIABSTHR	=	0x422d
                    422C   1704 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   1705 _AX5043_RXDATARATE0	=	0x4105
                    4104   1706 _AX5043_RXDATARATE1	=	0x4104
                    4103   1707 _AX5043_RXDATARATE2	=	0x4103
                    4001   1708 _AX5043_SCRATCH	=	0x4001
                    4000   1709 _AX5043_SILICONREVISION	=	0x4000
                    405B   1710 _AX5043_TIMER0	=	0x405b
                    405A   1711 _AX5043_TIMER1	=	0x405a
                    4059   1712 _AX5043_TIMER2	=	0x4059
                    4227   1713 _AX5043_TMGRXAGC	=	0x4227
                    4223   1714 _AX5043_TMGRXBOOST	=	0x4223
                    4226   1715 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   1716 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   1717 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   1718 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   1719 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   1720 _AX5043_TMGRXRSSI	=	0x4228
                    4224   1721 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   1722 _AX5043_TMGTXBOOST	=	0x4220
                    4221   1723 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   1724 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   1725 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   1726 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   1727 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   1728 _AX5043_TRKDATARATE0	=	0x4047
                    4046   1729 _AX5043_TRKDATARATE1	=	0x4046
                    4045   1730 _AX5043_TRKDATARATE2	=	0x4045
                    4051   1731 _AX5043_TRKFREQ0	=	0x4051
                    4050   1732 _AX5043_TRKFREQ1	=	0x4050
                    4053   1733 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   1734 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   1735 _AX5043_TRKPHASE0	=	0x404b
                    404A   1736 _AX5043_TRKPHASE1	=	0x404a
                    404F   1737 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   1738 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   1739 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   1740 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   1741 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   1742 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   1743 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   1744 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   1745 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   1746 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   1747 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   1748 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   1749 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   1750 _AX5043_TXRATE0	=	0x4167
                    4166   1751 _AX5043_TXRATE1	=	0x4166
                    4165   1752 _AX5043_TXRATE2	=	0x4165
                    406B   1753 _AX5043_WAKEUP0	=	0x406b
                    406A   1754 _AX5043_WAKEUP1	=	0x406a
                    406D   1755 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   1756 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   1757 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   1758 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   1759 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   1760 _AX5043_XTALCAP	=	0x4184
                    401D   1761 _AX5043_XTALSTATUS	=	0x401d
                    4122   1762 _AX5043_AGCAHYST0	=	0x4122
                    4132   1763 _AX5043_AGCAHYST1	=	0x4132
                    4142   1764 _AX5043_AGCAHYST2	=	0x4142
                    4152   1765 _AX5043_AGCAHYST3	=	0x4152
                    4120   1766 _AX5043_AGCGAIN0	=	0x4120
                    4130   1767 _AX5043_AGCGAIN1	=	0x4130
                    4140   1768 _AX5043_AGCGAIN2	=	0x4140
                    4150   1769 _AX5043_AGCGAIN3	=	0x4150
                    4123   1770 _AX5043_AGCMINMAX0	=	0x4123
                    4133   1771 _AX5043_AGCMINMAX1	=	0x4133
                    4143   1772 _AX5043_AGCMINMAX2	=	0x4143
                    4153   1773 _AX5043_AGCMINMAX3	=	0x4153
                    4121   1774 _AX5043_AGCTARGET0	=	0x4121
                    4131   1775 _AX5043_AGCTARGET1	=	0x4131
                    4141   1776 _AX5043_AGCTARGET2	=	0x4141
                    4151   1777 _AX5043_AGCTARGET3	=	0x4151
                    412B   1778 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   1779 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   1780 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   1781 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   1782 _AX5043_BBOFFSRES0	=	0x412f
                    413F   1783 _AX5043_BBOFFSRES1	=	0x413f
                    414F   1784 _AX5043_BBOFFSRES2	=	0x414f
                    415F   1785 _AX5043_BBOFFSRES3	=	0x415f
                    4125   1786 _AX5043_DRGAIN0	=	0x4125
                    4135   1787 _AX5043_DRGAIN1	=	0x4135
                    4145   1788 _AX5043_DRGAIN2	=	0x4145
                    4155   1789 _AX5043_DRGAIN3	=	0x4155
                    412E   1790 _AX5043_FOURFSK0	=	0x412e
                    413E   1791 _AX5043_FOURFSK1	=	0x413e
                    414E   1792 _AX5043_FOURFSK2	=	0x414e
                    415E   1793 _AX5043_FOURFSK3	=	0x415e
                    412D   1794 _AX5043_FREQDEV00	=	0x412d
                    413D   1795 _AX5043_FREQDEV01	=	0x413d
                    414D   1796 _AX5043_FREQDEV02	=	0x414d
                    415D   1797 _AX5043_FREQDEV03	=	0x415d
                    412C   1798 _AX5043_FREQDEV10	=	0x412c
                    413C   1799 _AX5043_FREQDEV11	=	0x413c
                    414C   1800 _AX5043_FREQDEV12	=	0x414c
                    415C   1801 _AX5043_FREQDEV13	=	0x415c
                    4127   1802 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   1803 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   1804 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   1805 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   1806 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   1807 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   1808 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   1809 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   1810 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   1811 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   1812 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   1813 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   1814 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   1815 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   1816 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   1817 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   1818 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   1819 _AX5043_PHASEGAIN0	=	0x4126
                    4136   1820 _AX5043_PHASEGAIN1	=	0x4136
                    4146   1821 _AX5043_PHASEGAIN2	=	0x4146
                    4156   1822 _AX5043_PHASEGAIN3	=	0x4156
                    4207   1823 _AX5043_PKTADDR0	=	0x4207
                    4206   1824 _AX5043_PKTADDR1	=	0x4206
                    4205   1825 _AX5043_PKTADDR2	=	0x4205
                    4204   1826 _AX5043_PKTADDR3	=	0x4204
                    4200   1827 _AX5043_PKTADDRCFG	=	0x4200
                    420B   1828 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   1829 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   1830 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   1831 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   1832 _AX5043_PKTLENCFG	=	0x4201
                    4202   1833 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   1834 _AX5043_PKTMAXLEN	=	0x4203
                    4118   1835 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   1836 _AX5043_RXPARAMSETS	=	0x4117
                    4124   1837 _AX5043_TIMEGAIN0	=	0x4124
                    4134   1838 _AX5043_TIMEGAIN1	=	0x4134
                    4144   1839 _AX5043_TIMEGAIN2	=	0x4144
                    4154   1840 _AX5043_TIMEGAIN3	=	0x4154
                    5114   1841 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   1842 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   1843 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   1844 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   1845 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   1846 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   1847 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   1848 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   1849 _AX5043_BBTUNENB	=	0x5188
                    5041   1850 _AX5043_BGNDRSSINB	=	0x5041
                    522E   1851 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   1852 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   1853 _AX5043_CRCINIT0NB	=	0x5017
                    5016   1854 _AX5043_CRCINIT1NB	=	0x5016
                    5015   1855 _AX5043_CRCINIT2NB	=	0x5015
                    5014   1856 _AX5043_CRCINIT3NB	=	0x5014
                    5332   1857 _AX5043_DACCONFIGNB	=	0x5332
                    5331   1858 _AX5043_DACVALUE0NB	=	0x5331
                    5330   1859 _AX5043_DACVALUE1NB	=	0x5330
                    5102   1860 _AX5043_DECIMATIONNB	=	0x5102
                    5042   1861 _AX5043_DIVERSITYNB	=	0x5042
                    5011   1862 _AX5043_ENCODINGNB	=	0x5011
                    5018   1863 _AX5043_FECNB	=	0x5018
                    501A   1864 _AX5043_FECSTATUSNB	=	0x501a
                    5019   1865 _AX5043_FECSYNCNB	=	0x5019
                    502B   1866 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   1867 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   1868 _AX5043_FIFODATANB	=	0x5029
                    502D   1869 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   1870 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   1871 _AX5043_FIFOSTATNB	=	0x5028
                    502F   1872 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   1873 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   1874 _AX5043_FRAMINGNB	=	0x5012
                    5037   1875 _AX5043_FREQA0NB	=	0x5037
                    5036   1876 _AX5043_FREQA1NB	=	0x5036
                    5035   1877 _AX5043_FREQA2NB	=	0x5035
                    5034   1878 _AX5043_FREQA3NB	=	0x5034
                    503F   1879 _AX5043_FREQB0NB	=	0x503f
                    503E   1880 _AX5043_FREQB1NB	=	0x503e
                    503D   1881 _AX5043_FREQB2NB	=	0x503d
                    503C   1882 _AX5043_FREQB3NB	=	0x503c
                    5163   1883 _AX5043_FSKDEV0NB	=	0x5163
                    5162   1884 _AX5043_FSKDEV1NB	=	0x5162
                    5161   1885 _AX5043_FSKDEV2NB	=	0x5161
                    510D   1886 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   1887 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   1888 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   1889 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   1890 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   1891 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   1892 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   1893 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   1894 _AX5043_IFFREQ0NB	=	0x5101
                    5100   1895 _AX5043_IFFREQ1NB	=	0x5100
                    500B   1896 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   1897 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   1898 _AX5043_IRQMASK0NB	=	0x5007
                    5006   1899 _AX5043_IRQMASK1NB	=	0x5006
                    500D   1900 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   1901 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   1902 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   1903 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   1904 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   1905 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   1906 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   1907 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   1908 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   1909 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   1910 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   1911 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   1912 _AX5043_MATCH0LENNB	=	0x5214
                    5216   1913 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   1914 _AX5043_MATCH0MINNB	=	0x5215
                    5213   1915 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   1916 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   1917 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   1918 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   1919 _AX5043_MATCH1LENNB	=	0x521c
                    521E   1920 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   1921 _AX5043_MATCH1MINNB	=	0x521d
                    5219   1922 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   1923 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   1924 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   1925 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   1926 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   1927 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   1928 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   1929 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   1930 _AX5043_MODCFGANB	=	0x5164
                    5160   1931 _AX5043_MODCFGFNB	=	0x5160
                    5010   1932 _AX5043_MODULATIONNB	=	0x5010
                    5025   1933 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   1934 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   1935 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   1936 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   1937 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   1938 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   1939 _AX5043_PINSTATENB	=	0x5020
                    5233   1940 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   1941 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   1942 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   1943 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   1944 _AX5043_PLLCPINB	=	0x5031
                    5039   1945 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   1946 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   1947 _AX5043_PLLLOOPNB	=	0x5030
                    5038   1948 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   1949 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   1950 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   1951 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   1952 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   1953 _AX5043_PLLVCOINB	=	0x5180
                    5181   1954 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   1955 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   1956 _AX5043_POWSTATNB	=	0x5003
                    5004   1957 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   1958 _AX5043_PWRAMPNB	=	0x5027
                    5002   1959 _AX5043_PWRMODENB	=	0x5002
                    5009   1960 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   1961 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   1962 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   1963 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   1964 _AX5043_RADIOSTATENB	=	0x501c
                    5040   1965 _AX5043_RSSINB	=	0x5040
                    522D   1966 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   1967 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   1968 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   1969 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   1970 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   1971 _AX5043_SCRATCHNB	=	0x5001
                    5000   1972 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   1973 _AX5043_TIMER0NB	=	0x505b
                    505A   1974 _AX5043_TIMER1NB	=	0x505a
                    5059   1975 _AX5043_TIMER2NB	=	0x5059
                    5227   1976 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   1977 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   1978 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   1979 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   1980 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   1981 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   1982 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   1983 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   1984 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   1985 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   1986 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   1987 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   1988 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   1989 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   1990 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   1991 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   1992 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   1993 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   1994 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   1995 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   1996 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   1997 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   1998 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   1999 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   2000 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   2001 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   2002 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   2003 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   2004 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   2005 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   2006 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   2007 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   2008 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   2009 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   2010 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   2011 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   2012 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   2013 _AX5043_TXRATE0NB	=	0x5167
                    5166   2014 _AX5043_TXRATE1NB	=	0x5166
                    5165   2015 _AX5043_TXRATE2NB	=	0x5165
                    506B   2016 _AX5043_WAKEUP0NB	=	0x506b
                    506A   2017 _AX5043_WAKEUP1NB	=	0x506a
                    506D   2018 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   2019 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   2020 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   2021 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   2022 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   2023 _AX5043_XTALCAPNB	=	0x5184
                    501D   2024 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   2025 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   2026 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   2027 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   2028 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   2029 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   2030 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   2031 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   2032 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   2033 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   2034 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   2035 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   2036 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   2037 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   2038 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   2039 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   2040 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   2041 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   2042 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   2043 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   2044 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   2045 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   2046 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   2047 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   2048 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   2049 _AX5043_DRGAIN0NB	=	0x5125
                    5135   2050 _AX5043_DRGAIN1NB	=	0x5135
                    5145   2051 _AX5043_DRGAIN2NB	=	0x5145
                    5155   2052 _AX5043_DRGAIN3NB	=	0x5155
                    512E   2053 _AX5043_FOURFSK0NB	=	0x512e
                    513E   2054 _AX5043_FOURFSK1NB	=	0x513e
                    514E   2055 _AX5043_FOURFSK2NB	=	0x514e
                    515E   2056 _AX5043_FOURFSK3NB	=	0x515e
                    512D   2057 _AX5043_FREQDEV00NB	=	0x512d
                    513D   2058 _AX5043_FREQDEV01NB	=	0x513d
                    514D   2059 _AX5043_FREQDEV02NB	=	0x514d
                    515D   2060 _AX5043_FREQDEV03NB	=	0x515d
                    512C   2061 _AX5043_FREQDEV10NB	=	0x512c
                    513C   2062 _AX5043_FREQDEV11NB	=	0x513c
                    514C   2063 _AX5043_FREQDEV12NB	=	0x514c
                    515C   2064 _AX5043_FREQDEV13NB	=	0x515c
                    5127   2065 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   2066 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   2067 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   2068 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   2069 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   2070 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   2071 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   2072 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   2073 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   2074 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   2075 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   2076 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   2077 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   2078 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   2079 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   2080 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   2081 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   2082 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   2083 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   2084 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   2085 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   2086 _AX5043_PKTADDR0NB	=	0x5207
                    5206   2087 _AX5043_PKTADDR1NB	=	0x5206
                    5205   2088 _AX5043_PKTADDR2NB	=	0x5205
                    5204   2089 _AX5043_PKTADDR3NB	=	0x5204
                    5200   2090 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   2091 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   2092 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   2093 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   2094 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   2095 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   2096 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   2097 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   2098 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   2099 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   2100 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   2101 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   2102 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   2103 _AX5043_TIMEGAIN3NB	=	0x5154
   0002                    2104 _row::
   0002                    2105 	.ds 1
   0003                    2106 _column::
   0003                    2107 	.ds 1
                           2108 ;--------------------------------------------------------
                           2109 ; absolute external ram data
                           2110 ;--------------------------------------------------------
                           2111 	.area XABS    (ABS,XDATA)
                           2112 ;--------------------------------------------------------
                           2113 ; external initialized ram data
                           2114 ;--------------------------------------------------------
                           2115 	.area XISEG   (XDATA)
   0439                    2116 _cmd::
   0439                    2117 	.ds 8
                           2118 	.area HOME    (CODE)
                           2119 	.area GSINIT0 (CODE)
                           2120 	.area GSINIT1 (CODE)
                           2121 	.area GSINIT2 (CODE)
                           2122 	.area GSINIT3 (CODE)
                           2123 	.area GSINIT4 (CODE)
                           2124 	.area GSINIT5 (CODE)
                           2125 	.area GSINIT  (CODE)
                           2126 	.area GSFINAL (CODE)
                           2127 	.area CSEG    (CODE)
                           2128 ;--------------------------------------------------------
                           2129 ; global & static initialisations
                           2130 ;--------------------------------------------------------
                           2131 	.area HOME    (CODE)
                           2132 	.area GSINIT  (CODE)
                           2133 	.area GSFINAL (CODE)
                           2134 	.area GSINIT  (CODE)
                           2135 ;	..\COMMON\display_com0.c:9: static const __code char *lcd_border=
   0126 75 08 FA           2136 	mov	_lcd_border,#__str_0
   0129 75 09 4B           2137 	mov	(_lcd_border + 1),#(__str_0 >> 8)
                           2138 ;--------------------------------------------------------
                           2139 ; Home
                           2140 ;--------------------------------------------------------
                           2141 	.area HOME    (CODE)
                           2142 	.area HOME    (CODE)
                           2143 ;--------------------------------------------------------
                           2144 ; code
                           2145 ;--------------------------------------------------------
                           2146 	.area CSEG    (CODE)
                           2147 ;------------------------------------------------------------
                           2148 ;Allocation info for local variables in function 'com0_portinit'
                           2149 ;------------------------------------------------------------
                           2150 ;	..\COMMON\display_com0.c:20: __reentrantb void com0_portinit(void) __reentrant
                           2151 ;	-----------------------------------------
                           2152 ;	 function com0_portinit
                           2153 ;	-----------------------------------------
   06E2                    2154 _com0_portinit:
                    0007   2155 	ar7 = 0x07
                    0006   2156 	ar6 = 0x06
                    0005   2157 	ar5 = 0x05
                    0004   2158 	ar4 = 0x04
                    0003   2159 	ar3 = 0x03
                    0002   2160 	ar2 = 0x02
                    0001   2161 	ar1 = 0x01
                    0000   2162 	ar0 = 0x00
                           2163 ;	..\COMMON\display_com0.c:22: PALTB |= 0x11;
   06E2 90 70 09           2164 	mov	dptr,#_PALTB
   06E5 E0                 2165 	movx	a,@dptr
   06E6 44 11              2166 	orl	a,#0x11
   06E8 F0                 2167 	movx	@dptr,a
                           2168 ;	..\COMMON\display_com0.c:23: DIRB |= (1<<0) | (1<<4);
   06E9 43 8A 11           2169 	orl	_DIRB,#0x11
                           2170 ;	..\COMMON\display_com0.c:24: DIRB &= (uint8_t)~(1<<5);
   06EC 53 8A DF           2171 	anl	_DIRB,#0xDF
                           2172 ;	..\COMMON\display_com0.c:25: PINSEL &= (uint8_t)~((1<<0) | (1<<1));
   06EF 90 70 0B           2173 	mov	dptr,#_PINSEL
   06F2 E0                 2174 	movx	a,@dptr
   06F3 54 FC              2175 	anl	a,#0xFC
   06F5 F0                 2176 	movx	@dptr,a
                           2177 ;	..\COMMON\display_com0.c:27: uart_timer0_baud(CLKSRC_SYSCLK, 115200, 20000000UL);
   06F6 E4                 2178 	clr	a
   06F7 F5 15              2179 	mov	_uart_timer0_baud_PARM_2,a
   06F9 75 16 C2           2180 	mov	(_uart_timer0_baud_PARM_2 + 1),#0xC2
   06FC 75 17 01           2181 	mov	(_uart_timer0_baud_PARM_2 + 2),#0x01
   06FF F5 18              2182 	mov	(_uart_timer0_baud_PARM_2 + 3),a
   0701 75 19 00           2183 	mov	_uart_timer0_baud_PARM_3,#0x00
   0704 75 1A 2D           2184 	mov	(_uart_timer0_baud_PARM_3 + 1),#0x2D
   0707 75 1B 31           2185 	mov	(_uart_timer0_baud_PARM_3 + 2),#0x31
   070A 75 1C 01           2186 	mov	(_uart_timer0_baud_PARM_3 + 3),#0x01
   070D 75 82 06           2187 	mov	dpl,#0x06
   0710 12 37 A4           2188 	lcall	_uart_timer0_baud
                           2189 ;	..\COMMON\display_com0.c:28: uart0_init(0, 8, 1);
   0713 75 2A 08           2190 	mov	_uart0_init_PARM_2,#0x08
   0716 75 2B 01           2191 	mov	_uart0_init_PARM_3,#0x01
   0719 75 82 00           2192 	mov	dpl,#0x00
   071C 02 45 A4           2193 	ljmp	_uart0_init
                           2194 ;------------------------------------------------------------
                           2195 ;Allocation info for local variables in function 'com0_init'
                           2196 ;------------------------------------------------------------
                           2197 ;	..\COMMON\display_com0.c:31: __reentrantb void com0_init(void) __reentrant
                           2198 ;	-----------------------------------------
                           2199 ;	 function com0_init
                           2200 ;	-----------------------------------------
   071F                    2201 _com0_init:
                           2202 ;	..\COMMON\display_com0.c:33: uart_timer0_baud(CLKSRC_SYSCLK, 115200, 20000000UL);
   071F E4                 2203 	clr	a
   0720 F5 15              2204 	mov	_uart_timer0_baud_PARM_2,a
   0722 75 16 C2           2205 	mov	(_uart_timer0_baud_PARM_2 + 1),#0xC2
   0725 75 17 01           2206 	mov	(_uart_timer0_baud_PARM_2 + 2),#0x01
   0728 F5 18              2207 	mov	(_uart_timer0_baud_PARM_2 + 3),a
   072A 75 19 00           2208 	mov	_uart_timer0_baud_PARM_3,#0x00
   072D 75 1A 2D           2209 	mov	(_uart_timer0_baud_PARM_3 + 1),#0x2D
   0730 75 1B 31           2210 	mov	(_uart_timer0_baud_PARM_3 + 2),#0x31
   0733 75 1C 01           2211 	mov	(_uart_timer0_baud_PARM_3 + 3),#0x01
   0736 75 82 06           2212 	mov	dpl,#0x06
   0739 12 37 A4           2213 	lcall	_uart_timer0_baud
                           2214 ;	..\COMMON\display_com0.c:34: uart0_init(0, 8, 1);
   073C 75 2A 08           2215 	mov	_uart0_init_PARM_2,#0x08
   073F 75 2B 01           2216 	mov	_uart0_init_PARM_3,#0x01
   0742 75 82 00           2217 	mov	dpl,#0x00
   0745 12 45 A4           2218 	lcall	_uart0_init
                           2219 ;	..\COMMON\display_com0.c:36: com0_writestr(lcd_border);
   0748 AD 08              2220 	mov	r5,_lcd_border
   074A AE 09              2221 	mov	r6,(_lcd_border + 1)
   074C 7F 80              2222 	mov	r7,#0x80
   074E 8D 82              2223 	mov	dpl,r5
   0750 8E 83              2224 	mov	dph,r6
   0752 8F F0              2225 	mov	b,r7
   0754 12 07 D7           2226 	lcall	_com0_writestr
                           2227 ;	..\COMMON\display_com0.c:37: com0_setpos(0);
   0757 75 82 00           2228 	mov	dpl,#0x00
   075A 02 07 95           2229 	ljmp	_com0_setpos
                           2230 ;------------------------------------------------------------
                           2231 ;Allocation info for local variables in function 'com0_writestr2'
                           2232 ;------------------------------------------------------------
                           2233 ;msg                       Allocated to registers r5 r6 r7 
                           2234 ;------------------------------------------------------------
                           2235 ;	..\COMMON\display_com0.c:40: __reentrantb void com0_writestr2(const char* msg)  __reentrant
                           2236 ;	-----------------------------------------
                           2237 ;	 function com0_writestr2
                           2238 ;	-----------------------------------------
   075D                    2239 _com0_writestr2:
                           2240 ;	..\COMMON\display_com0.c:42: uart0_writestr(msg);
   075D 02 48 69           2241 	ljmp	_uart0_writestr
                           2242 ;------------------------------------------------------------
                           2243 ;Allocation info for local variables in function 'com0_newline'
                           2244 ;------------------------------------------------------------
                           2245 ;	..\COMMON\display_com0.c:45: __reentrantb void com0_newline(void) __reentrant
                           2246 ;	-----------------------------------------
                           2247 ;	 function com0_newline
                           2248 ;	-----------------------------------------
   0760                    2249 _com0_newline:
                           2250 ;	..\COMMON\display_com0.c:47: if (row < 3)
   0760 90 00 02           2251 	mov	dptr,#_row
   0763 E0                 2252 	movx	a,@dptr
   0764 FF                 2253 	mov	r7,a
   0765 BF 03 00           2254 	cjne	r7,#0x03,00107$
   0768                    2255 00107$:
   0768 50 06              2256 	jnc	00102$
                           2257 ;	..\COMMON\display_com0.c:48: ++row;
   076A 90 00 02           2258 	mov	dptr,#_row
   076D EF                 2259 	mov	a,r7
   076E 04                 2260 	inc	a
   076F F0                 2261 	movx	@dptr,a
   0770                    2262 00102$:
                           2263 ;	..\COMMON\display_com0.c:49: column = 2;
   0770 90 00 03           2264 	mov	dptr,#_column
   0773 74 02              2265 	mov	a,#0x02
   0775 F0                 2266 	movx	@dptr,a
                           2267 ;	..\COMMON\display_com0.c:50: cmd[2] = row + '0';
   0776 90 00 02           2268 	mov	dptr,#_row
   0779 E0                 2269 	movx	a,@dptr
   077A 24 30              2270 	add	a,#0x30
   077C 90 04 3B           2271 	mov	dptr,#(_cmd + 0x0002)
   077F F0                 2272 	movx	@dptr,a
                           2273 ;	..\COMMON\display_com0.c:51: cmd[4] = '0';
   0780 90 04 3D           2274 	mov	dptr,#(_cmd + 0x0004)
   0783 74 30              2275 	mov	a,#0x30
   0785 F0                 2276 	movx	@dptr,a
                           2277 ;	..\COMMON\display_com0.c:52: cmd[5] = '2';
   0786 90 04 3E           2278 	mov	dptr,#(_cmd + 0x0005)
   0789 74 32              2279 	mov	a,#0x32
   078B F0                 2280 	movx	@dptr,a
                           2281 ;	..\COMMON\display_com0.c:53: uart0_writestr(cmd);
   078C 90 04 39           2282 	mov	dptr,#_cmd
   078F 75 F0 00           2283 	mov	b,#0x00
   0792 02 48 69           2284 	ljmp	_uart0_writestr
                           2285 ;------------------------------------------------------------
                           2286 ;Allocation info for local variables in function 'com0_setpos'
                           2287 ;------------------------------------------------------------
                           2288 ;v                         Allocated to registers r7 
                           2289 ;------------------------------------------------------------
                           2290 ;	..\COMMON\display_com0.c:56: __reentrantb void com0_setpos(uint8_t v) __reentrant
                           2291 ;	-----------------------------------------
                           2292 ;	 function com0_setpos
                           2293 ;	-----------------------------------------
   0795                    2294 _com0_setpos:
                           2295 ;	..\COMMON\display_com0.c:60: row = (v >> 6) + 2;
   0795 E5 82              2296 	mov	a,dpl
   0797 FF                 2297 	mov	r7,a
   0798 23                 2298 	rl	a
   0799 23                 2299 	rl	a
   079A 54 03              2300 	anl	a,#0x03
   079C FE                 2301 	mov	r6,a
   079D 0E                 2302 	inc	r6
   079E 0E                 2303 	inc	r6
   079F 90 00 02           2304 	mov	dptr,#_row
   07A2 EE                 2305 	mov	a,r6
   07A3 F0                 2306 	movx	@dptr,a
                           2307 ;	..\COMMON\display_com0.c:61: column = (v & 0x3F) + 2;
   07A4 74 3F              2308 	mov	a,#0x3F
   07A6 5F                 2309 	anl	a,r7
   07A7 24 02              2310 	add	a,#0x02
   07A9 FF                 2311 	mov	r7,a
   07AA 90 00 03           2312 	mov	dptr,#_column
   07AD F0                 2313 	movx	@dptr,a
                           2314 ;	..\COMMON\display_com0.c:62: cmd[2] = row + '0';
   07AE 74 30              2315 	mov	a,#0x30
   07B0 2E                 2316 	add	a,r6
   07B1 90 04 3B           2317 	mov	dptr,#(_cmd + 0x0002)
   07B4 F0                 2318 	movx	@dptr,a
                           2319 ;	..\COMMON\display_com0.c:63: cmd[4] = column / 10 + '0';
   07B5 75 F0 0A           2320 	mov	b,#0x0A
   07B8 EF                 2321 	mov	a,r7
   07B9 84                 2322 	div	ab
   07BA 24 30              2323 	add	a,#0x30
   07BC 90 04 3D           2324 	mov	dptr,#(_cmd + 0x0004)
   07BF F0                 2325 	movx	@dptr,a
                           2326 ;	..\COMMON\display_com0.c:64: cmd[5] = column % 10 + '0';
   07C0 75 F0 0A           2327 	mov	b,#0x0A
   07C3 EF                 2328 	mov	a,r7
   07C4 84                 2329 	div	ab
   07C5 AF F0              2330 	mov	r7,b
   07C7 74 30              2331 	mov	a,#0x30
   07C9 2F                 2332 	add	a,r7
   07CA 90 04 3E           2333 	mov	dptr,#(_cmd + 0x0005)
   07CD F0                 2334 	movx	@dptr,a
                           2335 ;	..\COMMON\display_com0.c:65: uart0_writestr(cmd);
   07CE 90 04 39           2336 	mov	dptr,#_cmd
   07D1 75 F0 00           2337 	mov	b,#0x00
   07D4 02 48 69           2338 	ljmp	_uart0_writestr
                           2339 ;------------------------------------------------------------
                           2340 ;Allocation info for local variables in function 'com0_writestr'
                           2341 ;------------------------------------------------------------
                           2342 ;msg                       Allocated to registers 
                           2343 ;ch                        Allocated to registers r4 
                           2344 ;------------------------------------------------------------
                           2345 ;	..\COMMON\display_com0.c:68: __reentrantb void com0_writestr(const char *msg) __reentrant
                           2346 ;	-----------------------------------------
                           2347 ;	 function com0_writestr
                           2348 ;	-----------------------------------------
   07D7                    2349 _com0_writestr:
   07D7 AD 82              2350 	mov	r5,dpl
   07D9 AE 83              2351 	mov	r6,dph
   07DB AF F0              2352 	mov	r7,b
   07DD                    2353 00104$:
                           2354 ;	..\COMMON\display_com0.c:71: char ch = *msg;
   07DD 8D 82              2355 	mov	dpl,r5
   07DF 8E 83              2356 	mov	dph,r6
   07E1 8F F0              2357 	mov	b,r7
   07E3 12 4A 8E           2358 	lcall	__gptrget
                           2359 ;	..\COMMON\display_com0.c:72: if (!ch)
   07E6 FC                 2360 	mov	r4,a
   07E7 60 18              2361 	jz	00106$
                           2362 ;	..\COMMON\display_com0.c:74: com0_tx(ch);
   07E9 8C 82              2363 	mov	dpl,r4
   07EB C0 07              2364 	push	ar7
   07ED C0 06              2365 	push	ar6
   07EF C0 05              2366 	push	ar5
   07F1 12 08 02           2367 	lcall	_com0_tx
   07F4 D0 05              2368 	pop	ar5
   07F6 D0 06              2369 	pop	ar6
   07F8 D0 07              2370 	pop	ar7
                           2371 ;	..\COMMON\display_com0.c:75: msg++;
   07FA 0D                 2372 	inc	r5
   07FB BD 00 DF           2373 	cjne	r5,#0x00,00104$
   07FE 0E                 2374 	inc	r6
   07FF 80 DC              2375 	sjmp	00104$
   0801                    2376 00106$:
   0801 22                 2377 	ret
                           2378 ;------------------------------------------------------------
                           2379 ;Allocation info for local variables in function 'com0_tx'
                           2380 ;------------------------------------------------------------
                           2381 ;val                       Allocated to registers r7 
                           2382 ;------------------------------------------------------------
                           2383 ;	..\COMMON\display_com0.c:80: __reentrantb void com0_tx(uint8_t val)  __reentrant
                           2384 ;	-----------------------------------------
                           2385 ;	 function com0_tx
                           2386 ;	-----------------------------------------
   0802                    2387 _com0_tx:
   0802 AF 82              2388 	mov	r7,dpl
                           2389 ;	..\COMMON\display_com0.c:82: if (val == '\n')
   0804 BF 0A 03           2390 	cjne	r7,#0x0A,00102$
                           2391 ;	..\COMMON\display_com0.c:83: com0_newline();
   0807 02 07 60           2392 	ljmp	_com0_newline
   080A                    2393 00102$:
                           2394 ;	..\COMMON\display_com0.c:85: uart0_tx(val);
   080A 8F 82              2395 	mov	dpl,r7
   080C 02 41 DC           2396 	ljmp	_uart0_tx
                           2397 ;------------------------------------------------------------
                           2398 ;Allocation info for local variables in function 'com0_clear'
                           2399 ;------------------------------------------------------------
                           2400 ;len                       Allocated to stack - _bp -3
                           2401 ;pos                       Allocated to registers r7 
                           2402 ;------------------------------------------------------------
                           2403 ;	..\COMMON\display_com0.c:88: __reentrantb void com0_clear(uint8_t pos, uint8_t len) __reentrant
                           2404 ;	-----------------------------------------
                           2405 ;	 function com0_clear
                           2406 ;	-----------------------------------------
   080F                    2407 _com0_clear:
   080F C0 1F              2408 	push	_bp
   0811 85 81 1F           2409 	mov	_bp,sp
                           2410 ;	..\COMMON\display_com0.c:90: com0_setpos(pos);
   0814 12 07 95           2411 	lcall	_com0_setpos
                           2412 ;	..\COMMON\display_com0.c:91: if (!len)
   0817 E5 1F              2413 	mov	a,_bp
   0819 24 FD              2414 	add	a,#0xfd
   081B F8                 2415 	mov	r0,a
   081C E6                 2416 	mov	a,@r0
   081D 70 02              2417 	jnz	00109$
                           2418 ;	..\COMMON\display_com0.c:92: return;
                           2419 ;	..\COMMON\display_com0.c:93: do {
   081F 80 13              2420 	sjmp	00106$
   0821                    2421 00109$:
   0821 E5 1F              2422 	mov	a,_bp
   0823 24 FD              2423 	add	a,#0xfd
   0825 F8                 2424 	mov	r0,a
   0826 86 07              2425 	mov	ar7,@r0
   0828                    2426 00103$:
                           2427 ;	..\COMMON\display_com0.c:94: com0_tx(' ');
   0828 75 82 20           2428 	mov	dpl,#0x20
   082B C0 07              2429 	push	ar7
   082D 12 08 02           2430 	lcall	_com0_tx
   0830 D0 07              2431 	pop	ar7
                           2432 ;	..\COMMON\display_com0.c:95: } while (--len);
   0832 DF F4              2433 	djnz	r7,00103$
   0834                    2434 00106$:
   0834 D0 1F              2435 	pop	_bp
   0836 22                 2436 	ret
                           2437 	.area CSEG    (CODE)
                           2438 	.area CONST   (CODE)
   4BFA                    2439 __str_0:
   4BFA 1B                 2440 	.db 0x1B
   4BFB 5B 30 3B 38 3B 34  2441 	.ascii "[0;8;44;30m"
        34 3B 33 30 6D
   4C06 1B                 2442 	.db 0x1B
   4C07 5B 31 3B 31 66 2A  2443 	.ascii "[1;1f******************"
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A
   4C1E 1B                 2444 	.db 0x1B
   4C1F 5B 32 3B 31 66 2A  2445 	.ascii "[2;1f*                *"
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 2A
   4C36 1B                 2446 	.db 0x1B
   4C37 5B 33 3B 31 66 2A  2447 	.ascii "[3;1f*                *"
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 2A
   4C4E 1B                 2448 	.db 0x1B
   4C4F 5B 34 3B 31 66 2A  2449 	.ascii "[4;1f******************"
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A
   4C66 1B                 2450 	.db 0x1B
   4C67 5B 35 3B 31 66     2451 	.ascii "[5;1f"
   4C6C 1B                 2452 	.db 0x1B
   4C6D 5B 33 37 6D        2453 	.ascii "[37m"
   4C71 1B                 2454 	.db 0x1B
   4C72 5B 3F 32 35 6C     2455 	.ascii "[?25l"
   4C77 00                 2456 	.db 0x00
                           2457 	.area XINIT   (CODE)
   4F00                    2458 __xinit__cmd:
   4F00 1B                 2459 	.db #0x1B	; 27
   4F01 5B                 2460 	.db #0x5B	; 91
   4F02 FF                 2461 	.db #0xFF	; 255
   4F03 3B                 2462 	.db #0x3B	; 59
   4F04 FF                 2463 	.db #0xFF	; 255
   4F05 FF                 2464 	.db #0xFF	; 255
   4F06 66                 2465 	.db #0x66	; 102	'f'
   4F07 00                 2466 	.db #0x00	; 0
                           2467 	.area CABS    (ABS,CODE)
