                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
                              4 ; This file was generated Mon Dec 23 14:41:48 2013
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
                    00E0   1047 G$ACC$0$0 == 0x00e0
                    00E0   1048 _ACC	=	0x00e0
                    00F0   1049 G$B$0$0 == 0x00f0
                    00F0   1050 _B	=	0x00f0
                    0083   1051 G$DPH$0$0 == 0x0083
                    0083   1052 _DPH	=	0x0083
                    0085   1053 G$DPH1$0$0 == 0x0085
                    0085   1054 _DPH1	=	0x0085
                    0082   1055 G$DPL$0$0 == 0x0082
                    0082   1056 _DPL	=	0x0082
                    0084   1057 G$DPL1$0$0 == 0x0084
                    0084   1058 _DPL1	=	0x0084
                    8382   1059 G$DPTR0$0$0 == 0x8382
                    8382   1060 _DPTR0	=	0x8382
                    8584   1061 G$DPTR1$0$0 == 0x8584
                    8584   1062 _DPTR1	=	0x8584
                    0086   1063 G$DPS$0$0 == 0x0086
                    0086   1064 _DPS	=	0x0086
                    00A0   1065 G$E2IE$0$0 == 0x00a0
                    00A0   1066 _E2IE	=	0x00a0
                    00C0   1067 G$E2IP$0$0 == 0x00c0
                    00C0   1068 _E2IP	=	0x00c0
                    0098   1069 G$EIE$0$0 == 0x0098
                    0098   1070 _EIE	=	0x0098
                    00B0   1071 G$EIP$0$0 == 0x00b0
                    00B0   1072 _EIP	=	0x00b0
                    00A8   1073 G$IE$0$0 == 0x00a8
                    00A8   1074 _IE	=	0x00a8
                    00B8   1075 G$IP$0$0 == 0x00b8
                    00B8   1076 _IP	=	0x00b8
                    0087   1077 G$PCON$0$0 == 0x0087
                    0087   1078 _PCON	=	0x0087
                    00D0   1079 G$PSW$0$0 == 0x00d0
                    00D0   1080 _PSW	=	0x00d0
                    0081   1081 G$SP$0$0 == 0x0081
                    0081   1082 _SP	=	0x0081
                    00D9   1083 G$XPAGE$0$0 == 0x00d9
                    00D9   1084 _XPAGE	=	0x00d9
                    00D9   1085 G$_XPAGE$0$0 == 0x00d9
                    00D9   1086 __XPAGE	=	0x00d9
                    00CA   1087 G$ADCCH0CONFIG$0$0 == 0x00ca
                    00CA   1088 _ADCCH0CONFIG	=	0x00ca
                    00CB   1089 G$ADCCH1CONFIG$0$0 == 0x00cb
                    00CB   1090 _ADCCH1CONFIG	=	0x00cb
                    00D2   1091 G$ADCCH2CONFIG$0$0 == 0x00d2
                    00D2   1092 _ADCCH2CONFIG	=	0x00d2
                    00D3   1093 G$ADCCH3CONFIG$0$0 == 0x00d3
                    00D3   1094 _ADCCH3CONFIG	=	0x00d3
                    00D1   1095 G$ADCCLKSRC$0$0 == 0x00d1
                    00D1   1096 _ADCCLKSRC	=	0x00d1
                    00C9   1097 G$ADCCONV$0$0 == 0x00c9
                    00C9   1098 _ADCCONV	=	0x00c9
                    00E1   1099 G$ANALOGCOMP$0$0 == 0x00e1
                    00E1   1100 _ANALOGCOMP	=	0x00e1
                    00C6   1101 G$CLKCON$0$0 == 0x00c6
                    00C6   1102 _CLKCON	=	0x00c6
                    00C7   1103 G$CLKSTAT$0$0 == 0x00c7
                    00C7   1104 _CLKSTAT	=	0x00c7
                    0097   1105 G$CODECONFIG$0$0 == 0x0097
                    0097   1106 _CODECONFIG	=	0x0097
                    00E3   1107 G$DBGLNKBUF$0$0 == 0x00e3
                    00E3   1108 _DBGLNKBUF	=	0x00e3
                    00E2   1109 G$DBGLNKSTAT$0$0 == 0x00e2
                    00E2   1110 _DBGLNKSTAT	=	0x00e2
                    0089   1111 G$DIRA$0$0 == 0x0089
                    0089   1112 _DIRA	=	0x0089
                    008A   1113 G$DIRB$0$0 == 0x008a
                    008A   1114 _DIRB	=	0x008a
                    008B   1115 G$DIRC$0$0 == 0x008b
                    008B   1116 _DIRC	=	0x008b
                    008E   1117 G$DIRR$0$0 == 0x008e
                    008E   1118 _DIRR	=	0x008e
                    00C8   1119 G$PINA$0$0 == 0x00c8
                    00C8   1120 _PINA	=	0x00c8
                    00E8   1121 G$PINB$0$0 == 0x00e8
                    00E8   1122 _PINB	=	0x00e8
                    00F8   1123 G$PINC$0$0 == 0x00f8
                    00F8   1124 _PINC	=	0x00f8
                    008D   1125 G$PINR$0$0 == 0x008d
                    008D   1126 _PINR	=	0x008d
                    0080   1127 G$PORTA$0$0 == 0x0080
                    0080   1128 _PORTA	=	0x0080
                    0088   1129 G$PORTB$0$0 == 0x0088
                    0088   1130 _PORTB	=	0x0088
                    0090   1131 G$PORTC$0$0 == 0x0090
                    0090   1132 _PORTC	=	0x0090
                    008C   1133 G$PORTR$0$0 == 0x008c
                    008C   1134 _PORTR	=	0x008c
                    00CE   1135 G$IC0CAPT0$0$0 == 0x00ce
                    00CE   1136 _IC0CAPT0	=	0x00ce
                    00CF   1137 G$IC0CAPT1$0$0 == 0x00cf
                    00CF   1138 _IC0CAPT1	=	0x00cf
                    CFCE   1139 G$IC0CAPT$0$0 == 0xcfce
                    CFCE   1140 _IC0CAPT	=	0xcfce
                    00CC   1141 G$IC0MODE$0$0 == 0x00cc
                    00CC   1142 _IC0MODE	=	0x00cc
                    00CD   1143 G$IC0STATUS$0$0 == 0x00cd
                    00CD   1144 _IC0STATUS	=	0x00cd
                    00D6   1145 G$IC1CAPT0$0$0 == 0x00d6
                    00D6   1146 _IC1CAPT0	=	0x00d6
                    00D7   1147 G$IC1CAPT1$0$0 == 0x00d7
                    00D7   1148 _IC1CAPT1	=	0x00d7
                    D7D6   1149 G$IC1CAPT$0$0 == 0xd7d6
                    D7D6   1150 _IC1CAPT	=	0xd7d6
                    00D4   1151 G$IC1MODE$0$0 == 0x00d4
                    00D4   1152 _IC1MODE	=	0x00d4
                    00D5   1153 G$IC1STATUS$0$0 == 0x00d5
                    00D5   1154 _IC1STATUS	=	0x00d5
                    0092   1155 G$NVADDR0$0$0 == 0x0092
                    0092   1156 _NVADDR0	=	0x0092
                    0093   1157 G$NVADDR1$0$0 == 0x0093
                    0093   1158 _NVADDR1	=	0x0093
                    9392   1159 G$NVADDR$0$0 == 0x9392
                    9392   1160 _NVADDR	=	0x9392
                    0094   1161 G$NVDATA0$0$0 == 0x0094
                    0094   1162 _NVDATA0	=	0x0094
                    0095   1163 G$NVDATA1$0$0 == 0x0095
                    0095   1164 _NVDATA1	=	0x0095
                    9594   1165 G$NVDATA$0$0 == 0x9594
                    9594   1166 _NVDATA	=	0x9594
                    0096   1167 G$NVKEY$0$0 == 0x0096
                    0096   1168 _NVKEY	=	0x0096
                    0091   1169 G$NVSTATUS$0$0 == 0x0091
                    0091   1170 _NVSTATUS	=	0x0091
                    00BC   1171 G$OC0COMP0$0$0 == 0x00bc
                    00BC   1172 _OC0COMP0	=	0x00bc
                    00BD   1173 G$OC0COMP1$0$0 == 0x00bd
                    00BD   1174 _OC0COMP1	=	0x00bd
                    BDBC   1175 G$OC0COMP$0$0 == 0xbdbc
                    BDBC   1176 _OC0COMP	=	0xbdbc
                    00B9   1177 G$OC0MODE$0$0 == 0x00b9
                    00B9   1178 _OC0MODE	=	0x00b9
                    00BA   1179 G$OC0PIN$0$0 == 0x00ba
                    00BA   1180 _OC0PIN	=	0x00ba
                    00BB   1181 G$OC0STATUS$0$0 == 0x00bb
                    00BB   1182 _OC0STATUS	=	0x00bb
                    00C4   1183 G$OC1COMP0$0$0 == 0x00c4
                    00C4   1184 _OC1COMP0	=	0x00c4
                    00C5   1185 G$OC1COMP1$0$0 == 0x00c5
                    00C5   1186 _OC1COMP1	=	0x00c5
                    C5C4   1187 G$OC1COMP$0$0 == 0xc5c4
                    C5C4   1188 _OC1COMP	=	0xc5c4
                    00C1   1189 G$OC1MODE$0$0 == 0x00c1
                    00C1   1190 _OC1MODE	=	0x00c1
                    00C2   1191 G$OC1PIN$0$0 == 0x00c2
                    00C2   1192 _OC1PIN	=	0x00c2
                    00C3   1193 G$OC1STATUS$0$0 == 0x00c3
                    00C3   1194 _OC1STATUS	=	0x00c3
                    00B1   1195 G$RADIOACC$0$0 == 0x00b1
                    00B1   1196 _RADIOACC	=	0x00b1
                    00B3   1197 G$RADIOADDR0$0$0 == 0x00b3
                    00B3   1198 _RADIOADDR0	=	0x00b3
                    00B2   1199 G$RADIOADDR1$0$0 == 0x00b2
                    00B2   1200 _RADIOADDR1	=	0x00b2
                    B2B3   1201 G$RADIOADDR$0$0 == 0xb2b3
                    B2B3   1202 _RADIOADDR	=	0xb2b3
                    00B7   1203 G$RADIODATA0$0$0 == 0x00b7
                    00B7   1204 _RADIODATA0	=	0x00b7
                    00B6   1205 G$RADIODATA1$0$0 == 0x00b6
                    00B6   1206 _RADIODATA1	=	0x00b6
                    00B5   1207 G$RADIODATA2$0$0 == 0x00b5
                    00B5   1208 _RADIODATA2	=	0x00b5
                    00B4   1209 G$RADIODATA3$0$0 == 0x00b4
                    00B4   1210 _RADIODATA3	=	0x00b4
                    B4B5B6B7   1211 G$RADIODATA$0$0 == 0xb4b5b6b7
                    B4B5B6B7   1212 _RADIODATA	=	0xb4b5b6b7
                    00BE   1213 G$RADIOSTAT0$0$0 == 0x00be
                    00BE   1214 _RADIOSTAT0	=	0x00be
                    00BF   1215 G$RADIOSTAT1$0$0 == 0x00bf
                    00BF   1216 _RADIOSTAT1	=	0x00bf
                    BFBE   1217 G$RADIOSTAT$0$0 == 0xbfbe
                    BFBE   1218 _RADIOSTAT	=	0xbfbe
                    00DF   1219 G$SPCLKSRC$0$0 == 0x00df
                    00DF   1220 _SPCLKSRC	=	0x00df
                    00DC   1221 G$SPMODE$0$0 == 0x00dc
                    00DC   1222 _SPMODE	=	0x00dc
                    00DE   1223 G$SPSHREG$0$0 == 0x00de
                    00DE   1224 _SPSHREG	=	0x00de
                    00DD   1225 G$SPSTATUS$0$0 == 0x00dd
                    00DD   1226 _SPSTATUS	=	0x00dd
                    009A   1227 G$T0CLKSRC$0$0 == 0x009a
                    009A   1228 _T0CLKSRC	=	0x009a
                    009C   1229 G$T0CNT0$0$0 == 0x009c
                    009C   1230 _T0CNT0	=	0x009c
                    009D   1231 G$T0CNT1$0$0 == 0x009d
                    009D   1232 _T0CNT1	=	0x009d
                    9D9C   1233 G$T0CNT$0$0 == 0x9d9c
                    9D9C   1234 _T0CNT	=	0x9d9c
                    0099   1235 G$T0MODE$0$0 == 0x0099
                    0099   1236 _T0MODE	=	0x0099
                    009E   1237 G$T0PERIOD0$0$0 == 0x009e
                    009E   1238 _T0PERIOD0	=	0x009e
                    009F   1239 G$T0PERIOD1$0$0 == 0x009f
                    009F   1240 _T0PERIOD1	=	0x009f
                    9F9E   1241 G$T0PERIOD$0$0 == 0x9f9e
                    9F9E   1242 _T0PERIOD	=	0x9f9e
                    009B   1243 G$T0STATUS$0$0 == 0x009b
                    009B   1244 _T0STATUS	=	0x009b
                    00A2   1245 G$T1CLKSRC$0$0 == 0x00a2
                    00A2   1246 _T1CLKSRC	=	0x00a2
                    00A4   1247 G$T1CNT0$0$0 == 0x00a4
                    00A4   1248 _T1CNT0	=	0x00a4
                    00A5   1249 G$T1CNT1$0$0 == 0x00a5
                    00A5   1250 _T1CNT1	=	0x00a5
                    A5A4   1251 G$T1CNT$0$0 == 0xa5a4
                    A5A4   1252 _T1CNT	=	0xa5a4
                    00A1   1253 G$T1MODE$0$0 == 0x00a1
                    00A1   1254 _T1MODE	=	0x00a1
                    00A6   1255 G$T1PERIOD0$0$0 == 0x00a6
                    00A6   1256 _T1PERIOD0	=	0x00a6
                    00A7   1257 G$T1PERIOD1$0$0 == 0x00a7
                    00A7   1258 _T1PERIOD1	=	0x00a7
                    A7A6   1259 G$T1PERIOD$0$0 == 0xa7a6
                    A7A6   1260 _T1PERIOD	=	0xa7a6
                    00A3   1261 G$T1STATUS$0$0 == 0x00a3
                    00A3   1262 _T1STATUS	=	0x00a3
                    00AA   1263 G$T2CLKSRC$0$0 == 0x00aa
                    00AA   1264 _T2CLKSRC	=	0x00aa
                    00AC   1265 G$T2CNT0$0$0 == 0x00ac
                    00AC   1266 _T2CNT0	=	0x00ac
                    00AD   1267 G$T2CNT1$0$0 == 0x00ad
                    00AD   1268 _T2CNT1	=	0x00ad
                    ADAC   1269 G$T2CNT$0$0 == 0xadac
                    ADAC   1270 _T2CNT	=	0xadac
                    00A9   1271 G$T2MODE$0$0 == 0x00a9
                    00A9   1272 _T2MODE	=	0x00a9
                    00AE   1273 G$T2PERIOD0$0$0 == 0x00ae
                    00AE   1274 _T2PERIOD0	=	0x00ae
                    00AF   1275 G$T2PERIOD1$0$0 == 0x00af
                    00AF   1276 _T2PERIOD1	=	0x00af
                    AFAE   1277 G$T2PERIOD$0$0 == 0xafae
                    AFAE   1278 _T2PERIOD	=	0xafae
                    00AB   1279 G$T2STATUS$0$0 == 0x00ab
                    00AB   1280 _T2STATUS	=	0x00ab
                    00E4   1281 G$U0CTRL$0$0 == 0x00e4
                    00E4   1282 _U0CTRL	=	0x00e4
                    00E7   1283 G$U0MODE$0$0 == 0x00e7
                    00E7   1284 _U0MODE	=	0x00e7
                    00E6   1285 G$U0SHREG$0$0 == 0x00e6
                    00E6   1286 _U0SHREG	=	0x00e6
                    00E5   1287 G$U0STATUS$0$0 == 0x00e5
                    00E5   1288 _U0STATUS	=	0x00e5
                    00EC   1289 G$U1CTRL$0$0 == 0x00ec
                    00EC   1290 _U1CTRL	=	0x00ec
                    00EF   1291 G$U1MODE$0$0 == 0x00ef
                    00EF   1292 _U1MODE	=	0x00ef
                    00EE   1293 G$U1SHREG$0$0 == 0x00ee
                    00EE   1294 _U1SHREG	=	0x00ee
                    00ED   1295 G$U1STATUS$0$0 == 0x00ed
                    00ED   1296 _U1STATUS	=	0x00ed
                    00DA   1297 G$WDTCFG$0$0 == 0x00da
                    00DA   1298 _WDTCFG	=	0x00da
                    00DB   1299 G$WDTRESET$0$0 == 0x00db
                    00DB   1300 _WDTRESET	=	0x00db
                    00F1   1301 G$WTCFGA$0$0 == 0x00f1
                    00F1   1302 _WTCFGA	=	0x00f1
                    00F9   1303 G$WTCFGB$0$0 == 0x00f9
                    00F9   1304 _WTCFGB	=	0x00f9
                    00F2   1305 G$WTCNTA0$0$0 == 0x00f2
                    00F2   1306 _WTCNTA0	=	0x00f2
                    00F3   1307 G$WTCNTA1$0$0 == 0x00f3
                    00F3   1308 _WTCNTA1	=	0x00f3
                    F3F2   1309 G$WTCNTA$0$0 == 0xf3f2
                    F3F2   1310 _WTCNTA	=	0xf3f2
                    00FA   1311 G$WTCNTB0$0$0 == 0x00fa
                    00FA   1312 _WTCNTB0	=	0x00fa
                    00FB   1313 G$WTCNTB1$0$0 == 0x00fb
                    00FB   1314 _WTCNTB1	=	0x00fb
                    FBFA   1315 G$WTCNTB$0$0 == 0xfbfa
                    FBFA   1316 _WTCNTB	=	0xfbfa
                    00EB   1317 G$WTCNTR1$0$0 == 0x00eb
                    00EB   1318 _WTCNTR1	=	0x00eb
                    00F4   1319 G$WTEVTA0$0$0 == 0x00f4
                    00F4   1320 _WTEVTA0	=	0x00f4
                    00F5   1321 G$WTEVTA1$0$0 == 0x00f5
                    00F5   1322 _WTEVTA1	=	0x00f5
                    F5F4   1323 G$WTEVTA$0$0 == 0xf5f4
                    F5F4   1324 _WTEVTA	=	0xf5f4
                    00F6   1325 G$WTEVTB0$0$0 == 0x00f6
                    00F6   1326 _WTEVTB0	=	0x00f6
                    00F7   1327 G$WTEVTB1$0$0 == 0x00f7
                    00F7   1328 _WTEVTB1	=	0x00f7
                    F7F6   1329 G$WTEVTB$0$0 == 0xf7f6
                    F7F6   1330 _WTEVTB	=	0xf7f6
                    00FC   1331 G$WTEVTC0$0$0 == 0x00fc
                    00FC   1332 _WTEVTC0	=	0x00fc
                    00FD   1333 G$WTEVTC1$0$0 == 0x00fd
                    00FD   1334 _WTEVTC1	=	0x00fd
                    FDFC   1335 G$WTEVTC$0$0 == 0xfdfc
                    FDFC   1336 _WTEVTC	=	0xfdfc
                    00FE   1337 G$WTEVTD0$0$0 == 0x00fe
                    00FE   1338 _WTEVTD0	=	0x00fe
                    00FF   1339 G$WTEVTD1$0$0 == 0x00ff
                    00FF   1340 _WTEVTD1	=	0x00ff
                    FFFE   1341 G$WTEVTD$0$0 == 0xfffe
                    FFFE   1342 _WTEVTD	=	0xfffe
                    00E9   1343 G$WTIRQEN$0$0 == 0x00e9
                    00E9   1344 _WTIRQEN	=	0x00e9
                    00EA   1345 G$WTSTAT$0$0 == 0x00ea
                    00EA   1346 _WTSTAT	=	0x00ea
                           1347 ;--------------------------------------------------------
                           1348 ; special function bits
                           1349 ;--------------------------------------------------------
                           1350 	.area RSEG    (ABS,DATA)
   0000                    1351 	.org 0x0000
                    00E0   1352 G$ACC_0$0$0 == 0x00e0
                    00E0   1353 _ACC_0	=	0x00e0
                    00E1   1354 G$ACC_1$0$0 == 0x00e1
                    00E1   1355 _ACC_1	=	0x00e1
                    00E2   1356 G$ACC_2$0$0 == 0x00e2
                    00E2   1357 _ACC_2	=	0x00e2
                    00E3   1358 G$ACC_3$0$0 == 0x00e3
                    00E3   1359 _ACC_3	=	0x00e3
                    00E4   1360 G$ACC_4$0$0 == 0x00e4
                    00E4   1361 _ACC_4	=	0x00e4
                    00E5   1362 G$ACC_5$0$0 == 0x00e5
                    00E5   1363 _ACC_5	=	0x00e5
                    00E6   1364 G$ACC_6$0$0 == 0x00e6
                    00E6   1365 _ACC_6	=	0x00e6
                    00E7   1366 G$ACC_7$0$0 == 0x00e7
                    00E7   1367 _ACC_7	=	0x00e7
                    00F0   1368 G$B_0$0$0 == 0x00f0
                    00F0   1369 _B_0	=	0x00f0
                    00F1   1370 G$B_1$0$0 == 0x00f1
                    00F1   1371 _B_1	=	0x00f1
                    00F2   1372 G$B_2$0$0 == 0x00f2
                    00F2   1373 _B_2	=	0x00f2
                    00F3   1374 G$B_3$0$0 == 0x00f3
                    00F3   1375 _B_3	=	0x00f3
                    00F4   1376 G$B_4$0$0 == 0x00f4
                    00F4   1377 _B_4	=	0x00f4
                    00F5   1378 G$B_5$0$0 == 0x00f5
                    00F5   1379 _B_5	=	0x00f5
                    00F6   1380 G$B_6$0$0 == 0x00f6
                    00F6   1381 _B_6	=	0x00f6
                    00F7   1382 G$B_7$0$0 == 0x00f7
                    00F7   1383 _B_7	=	0x00f7
                    00A0   1384 G$E2IE_0$0$0 == 0x00a0
                    00A0   1385 _E2IE_0	=	0x00a0
                    00A1   1386 G$E2IE_1$0$0 == 0x00a1
                    00A1   1387 _E2IE_1	=	0x00a1
                    00A2   1388 G$E2IE_2$0$0 == 0x00a2
                    00A2   1389 _E2IE_2	=	0x00a2
                    00A3   1390 G$E2IE_3$0$0 == 0x00a3
                    00A3   1391 _E2IE_3	=	0x00a3
                    00A4   1392 G$E2IE_4$0$0 == 0x00a4
                    00A4   1393 _E2IE_4	=	0x00a4
                    00A5   1394 G$E2IE_5$0$0 == 0x00a5
                    00A5   1395 _E2IE_5	=	0x00a5
                    00A6   1396 G$E2IE_6$0$0 == 0x00a6
                    00A6   1397 _E2IE_6	=	0x00a6
                    00A7   1398 G$E2IE_7$0$0 == 0x00a7
                    00A7   1399 _E2IE_7	=	0x00a7
                    00C0   1400 G$E2IP_0$0$0 == 0x00c0
                    00C0   1401 _E2IP_0	=	0x00c0
                    00C1   1402 G$E2IP_1$0$0 == 0x00c1
                    00C1   1403 _E2IP_1	=	0x00c1
                    00C2   1404 G$E2IP_2$0$0 == 0x00c2
                    00C2   1405 _E2IP_2	=	0x00c2
                    00C3   1406 G$E2IP_3$0$0 == 0x00c3
                    00C3   1407 _E2IP_3	=	0x00c3
                    00C4   1408 G$E2IP_4$0$0 == 0x00c4
                    00C4   1409 _E2IP_4	=	0x00c4
                    00C5   1410 G$E2IP_5$0$0 == 0x00c5
                    00C5   1411 _E2IP_5	=	0x00c5
                    00C6   1412 G$E2IP_6$0$0 == 0x00c6
                    00C6   1413 _E2IP_6	=	0x00c6
                    00C7   1414 G$E2IP_7$0$0 == 0x00c7
                    00C7   1415 _E2IP_7	=	0x00c7
                    0098   1416 G$EIE_0$0$0 == 0x0098
                    0098   1417 _EIE_0	=	0x0098
                    0099   1418 G$EIE_1$0$0 == 0x0099
                    0099   1419 _EIE_1	=	0x0099
                    009A   1420 G$EIE_2$0$0 == 0x009a
                    009A   1421 _EIE_2	=	0x009a
                    009B   1422 G$EIE_3$0$0 == 0x009b
                    009B   1423 _EIE_3	=	0x009b
                    009C   1424 G$EIE_4$0$0 == 0x009c
                    009C   1425 _EIE_4	=	0x009c
                    009D   1426 G$EIE_5$0$0 == 0x009d
                    009D   1427 _EIE_5	=	0x009d
                    009E   1428 G$EIE_6$0$0 == 0x009e
                    009E   1429 _EIE_6	=	0x009e
                    009F   1430 G$EIE_7$0$0 == 0x009f
                    009F   1431 _EIE_7	=	0x009f
                    00B0   1432 G$EIP_0$0$0 == 0x00b0
                    00B0   1433 _EIP_0	=	0x00b0
                    00B1   1434 G$EIP_1$0$0 == 0x00b1
                    00B1   1435 _EIP_1	=	0x00b1
                    00B2   1436 G$EIP_2$0$0 == 0x00b2
                    00B2   1437 _EIP_2	=	0x00b2
                    00B3   1438 G$EIP_3$0$0 == 0x00b3
                    00B3   1439 _EIP_3	=	0x00b3
                    00B4   1440 G$EIP_4$0$0 == 0x00b4
                    00B4   1441 _EIP_4	=	0x00b4
                    00B5   1442 G$EIP_5$0$0 == 0x00b5
                    00B5   1443 _EIP_5	=	0x00b5
                    00B6   1444 G$EIP_6$0$0 == 0x00b6
                    00B6   1445 _EIP_6	=	0x00b6
                    00B7   1446 G$EIP_7$0$0 == 0x00b7
                    00B7   1447 _EIP_7	=	0x00b7
                    00A8   1448 G$IE_0$0$0 == 0x00a8
                    00A8   1449 _IE_0	=	0x00a8
                    00A9   1450 G$IE_1$0$0 == 0x00a9
                    00A9   1451 _IE_1	=	0x00a9
                    00AA   1452 G$IE_2$0$0 == 0x00aa
                    00AA   1453 _IE_2	=	0x00aa
                    00AB   1454 G$IE_3$0$0 == 0x00ab
                    00AB   1455 _IE_3	=	0x00ab
                    00AC   1456 G$IE_4$0$0 == 0x00ac
                    00AC   1457 _IE_4	=	0x00ac
                    00AD   1458 G$IE_5$0$0 == 0x00ad
                    00AD   1459 _IE_5	=	0x00ad
                    00AE   1460 G$IE_6$0$0 == 0x00ae
                    00AE   1461 _IE_6	=	0x00ae
                    00AF   1462 G$IE_7$0$0 == 0x00af
                    00AF   1463 _IE_7	=	0x00af
                    00AF   1464 G$EA$0$0 == 0x00af
                    00AF   1465 _EA	=	0x00af
                    00B8   1466 G$IP_0$0$0 == 0x00b8
                    00B8   1467 _IP_0	=	0x00b8
                    00B9   1468 G$IP_1$0$0 == 0x00b9
                    00B9   1469 _IP_1	=	0x00b9
                    00BA   1470 G$IP_2$0$0 == 0x00ba
                    00BA   1471 _IP_2	=	0x00ba
                    00BB   1472 G$IP_3$0$0 == 0x00bb
                    00BB   1473 _IP_3	=	0x00bb
                    00BC   1474 G$IP_4$0$0 == 0x00bc
                    00BC   1475 _IP_4	=	0x00bc
                    00BD   1476 G$IP_5$0$0 == 0x00bd
                    00BD   1477 _IP_5	=	0x00bd
                    00BE   1478 G$IP_6$0$0 == 0x00be
                    00BE   1479 _IP_6	=	0x00be
                    00BF   1480 G$IP_7$0$0 == 0x00bf
                    00BF   1481 _IP_7	=	0x00bf
                    00D0   1482 G$P$0$0 == 0x00d0
                    00D0   1483 _P	=	0x00d0
                    00D1   1484 G$F1$0$0 == 0x00d1
                    00D1   1485 _F1	=	0x00d1
                    00D2   1486 G$OV$0$0 == 0x00d2
                    00D2   1487 _OV	=	0x00d2
                    00D3   1488 G$RS0$0$0 == 0x00d3
                    00D3   1489 _RS0	=	0x00d3
                    00D4   1490 G$RS1$0$0 == 0x00d4
                    00D4   1491 _RS1	=	0x00d4
                    00D5   1492 G$F0$0$0 == 0x00d5
                    00D5   1493 _F0	=	0x00d5
                    00D6   1494 G$AC$0$0 == 0x00d6
                    00D6   1495 _AC	=	0x00d6
                    00D7   1496 G$CY$0$0 == 0x00d7
                    00D7   1497 _CY	=	0x00d7
                    00C8   1498 G$PINA_0$0$0 == 0x00c8
                    00C8   1499 _PINA_0	=	0x00c8
                    00C9   1500 G$PINA_1$0$0 == 0x00c9
                    00C9   1501 _PINA_1	=	0x00c9
                    00CA   1502 G$PINA_2$0$0 == 0x00ca
                    00CA   1503 _PINA_2	=	0x00ca
                    00CB   1504 G$PINA_3$0$0 == 0x00cb
                    00CB   1505 _PINA_3	=	0x00cb
                    00CC   1506 G$PINA_4$0$0 == 0x00cc
                    00CC   1507 _PINA_4	=	0x00cc
                    00CD   1508 G$PINA_5$0$0 == 0x00cd
                    00CD   1509 _PINA_5	=	0x00cd
                    00CE   1510 G$PINA_6$0$0 == 0x00ce
                    00CE   1511 _PINA_6	=	0x00ce
                    00CF   1512 G$PINA_7$0$0 == 0x00cf
                    00CF   1513 _PINA_7	=	0x00cf
                    00E8   1514 G$PINB_0$0$0 == 0x00e8
                    00E8   1515 _PINB_0	=	0x00e8
                    00E9   1516 G$PINB_1$0$0 == 0x00e9
                    00E9   1517 _PINB_1	=	0x00e9
                    00EA   1518 G$PINB_2$0$0 == 0x00ea
                    00EA   1519 _PINB_2	=	0x00ea
                    00EB   1520 G$PINB_3$0$0 == 0x00eb
                    00EB   1521 _PINB_3	=	0x00eb
                    00EC   1522 G$PINB_4$0$0 == 0x00ec
                    00EC   1523 _PINB_4	=	0x00ec
                    00ED   1524 G$PINB_5$0$0 == 0x00ed
                    00ED   1525 _PINB_5	=	0x00ed
                    00EE   1526 G$PINB_6$0$0 == 0x00ee
                    00EE   1527 _PINB_6	=	0x00ee
                    00EF   1528 G$PINB_7$0$0 == 0x00ef
                    00EF   1529 _PINB_7	=	0x00ef
                    00F8   1530 G$PINC_0$0$0 == 0x00f8
                    00F8   1531 _PINC_0	=	0x00f8
                    00F9   1532 G$PINC_1$0$0 == 0x00f9
                    00F9   1533 _PINC_1	=	0x00f9
                    00FA   1534 G$PINC_2$0$0 == 0x00fa
                    00FA   1535 _PINC_2	=	0x00fa
                    00FB   1536 G$PINC_3$0$0 == 0x00fb
                    00FB   1537 _PINC_3	=	0x00fb
                    00FC   1538 G$PINC_4$0$0 == 0x00fc
                    00FC   1539 _PINC_4	=	0x00fc
                    00FD   1540 G$PINC_5$0$0 == 0x00fd
                    00FD   1541 _PINC_5	=	0x00fd
                    00FE   1542 G$PINC_6$0$0 == 0x00fe
                    00FE   1543 _PINC_6	=	0x00fe
                    00FF   1544 G$PINC_7$0$0 == 0x00ff
                    00FF   1545 _PINC_7	=	0x00ff
                    0080   1546 G$PORTA_0$0$0 == 0x0080
                    0080   1547 _PORTA_0	=	0x0080
                    0081   1548 G$PORTA_1$0$0 == 0x0081
                    0081   1549 _PORTA_1	=	0x0081
                    0082   1550 G$PORTA_2$0$0 == 0x0082
                    0082   1551 _PORTA_2	=	0x0082
                    0083   1552 G$PORTA_3$0$0 == 0x0083
                    0083   1553 _PORTA_3	=	0x0083
                    0084   1554 G$PORTA_4$0$0 == 0x0084
                    0084   1555 _PORTA_4	=	0x0084
                    0085   1556 G$PORTA_5$0$0 == 0x0085
                    0085   1557 _PORTA_5	=	0x0085
                    0086   1558 G$PORTA_6$0$0 == 0x0086
                    0086   1559 _PORTA_6	=	0x0086
                    0087   1560 G$PORTA_7$0$0 == 0x0087
                    0087   1561 _PORTA_7	=	0x0087
                    0088   1562 G$PORTB_0$0$0 == 0x0088
                    0088   1563 _PORTB_0	=	0x0088
                    0089   1564 G$PORTB_1$0$0 == 0x0089
                    0089   1565 _PORTB_1	=	0x0089
                    008A   1566 G$PORTB_2$0$0 == 0x008a
                    008A   1567 _PORTB_2	=	0x008a
                    008B   1568 G$PORTB_3$0$0 == 0x008b
                    008B   1569 _PORTB_3	=	0x008b
                    008C   1570 G$PORTB_4$0$0 == 0x008c
                    008C   1571 _PORTB_4	=	0x008c
                    008D   1572 G$PORTB_5$0$0 == 0x008d
                    008D   1573 _PORTB_5	=	0x008d
                    008E   1574 G$PORTB_6$0$0 == 0x008e
                    008E   1575 _PORTB_6	=	0x008e
                    008F   1576 G$PORTB_7$0$0 == 0x008f
                    008F   1577 _PORTB_7	=	0x008f
                    0090   1578 G$PORTC_0$0$0 == 0x0090
                    0090   1579 _PORTC_0	=	0x0090
                    0091   1580 G$PORTC_1$0$0 == 0x0091
                    0091   1581 _PORTC_1	=	0x0091
                    0092   1582 G$PORTC_2$0$0 == 0x0092
                    0092   1583 _PORTC_2	=	0x0092
                    0093   1584 G$PORTC_3$0$0 == 0x0093
                    0093   1585 _PORTC_3	=	0x0093
                    0094   1586 G$PORTC_4$0$0 == 0x0094
                    0094   1587 _PORTC_4	=	0x0094
                    0095   1588 G$PORTC_5$0$0 == 0x0095
                    0095   1589 _PORTC_5	=	0x0095
                    0096   1590 G$PORTC_6$0$0 == 0x0096
                    0096   1591 _PORTC_6	=	0x0096
                    0097   1592 G$PORTC_7$0$0 == 0x0097
                    0097   1593 _PORTC_7	=	0x0097
                           1594 ;--------------------------------------------------------
                           1595 ; overlayable register banks
                           1596 ;--------------------------------------------------------
                           1597 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                    1598 	.ds 8
                           1599 ;--------------------------------------------------------
                           1600 ; internal ram data
                           1601 ;--------------------------------------------------------
                           1602 	.area DSEG    (DATA)
                    0000   1603 Fdisplay_com0$lcd_border$0$0==.
   0008                    1604 _lcd_border:
   0008                    1605 	.ds 2
                           1606 ;--------------------------------------------------------
                           1607 ; overlayable items in internal ram 
                           1608 ;--------------------------------------------------------
                           1609 ;--------------------------------------------------------
                           1610 ; indirectly addressable internal ram data
                           1611 ;--------------------------------------------------------
                           1612 	.area ISEG    (DATA)
                           1613 ;--------------------------------------------------------
                           1614 ; absolute internal ram data
                           1615 ;--------------------------------------------------------
                           1616 	.area IABS    (ABS,DATA)
                           1617 	.area IABS    (ABS,DATA)
                           1618 ;--------------------------------------------------------
                           1619 ; bit data
                           1620 ;--------------------------------------------------------
                           1621 	.area BSEG    (BIT)
                           1622 ;--------------------------------------------------------
                           1623 ; paged external ram data
                           1624 ;--------------------------------------------------------
                           1625 	.area PSEG    (PAG,XDATA)
                           1626 ;--------------------------------------------------------
                           1627 ; external ram data
                           1628 ;--------------------------------------------------------
                           1629 	.area XSEG    (XDATA)
                    FC06   1630 Fdisplay_com0$flash_deviceid$0$0 == 0xfc06
                    FC06   1631 _flash_deviceid	=	0xfc06
                    FC00   1632 Fdisplay_com0$flash_calsector$0$0 == 0xfc00
                    FC00   1633 _flash_calsector	=	0xfc00
                    7020   1634 G$ADCCH0VAL0$0$0 == 0x7020
                    7020   1635 _ADCCH0VAL0	=	0x7020
                    7021   1636 G$ADCCH0VAL1$0$0 == 0x7021
                    7021   1637 _ADCCH0VAL1	=	0x7021
                    7020   1638 G$ADCCH0VAL$0$0 == 0x7020
                    7020   1639 _ADCCH0VAL	=	0x7020
                    7022   1640 G$ADCCH1VAL0$0$0 == 0x7022
                    7022   1641 _ADCCH1VAL0	=	0x7022
                    7023   1642 G$ADCCH1VAL1$0$0 == 0x7023
                    7023   1643 _ADCCH1VAL1	=	0x7023
                    7022   1644 G$ADCCH1VAL$0$0 == 0x7022
                    7022   1645 _ADCCH1VAL	=	0x7022
                    7024   1646 G$ADCCH2VAL0$0$0 == 0x7024
                    7024   1647 _ADCCH2VAL0	=	0x7024
                    7025   1648 G$ADCCH2VAL1$0$0 == 0x7025
                    7025   1649 _ADCCH2VAL1	=	0x7025
                    7024   1650 G$ADCCH2VAL$0$0 == 0x7024
                    7024   1651 _ADCCH2VAL	=	0x7024
                    7026   1652 G$ADCCH3VAL0$0$0 == 0x7026
                    7026   1653 _ADCCH3VAL0	=	0x7026
                    7027   1654 G$ADCCH3VAL1$0$0 == 0x7027
                    7027   1655 _ADCCH3VAL1	=	0x7027
                    7026   1656 G$ADCCH3VAL$0$0 == 0x7026
                    7026   1657 _ADCCH3VAL	=	0x7026
                    7028   1658 G$ADCTUNE0$0$0 == 0x7028
                    7028   1659 _ADCTUNE0	=	0x7028
                    7029   1660 G$ADCTUNE1$0$0 == 0x7029
                    7029   1661 _ADCTUNE1	=	0x7029
                    702A   1662 G$ADCTUNE2$0$0 == 0x702a
                    702A   1663 _ADCTUNE2	=	0x702a
                    7010   1664 G$DMA0ADDR0$0$0 == 0x7010
                    7010   1665 _DMA0ADDR0	=	0x7010
                    7011   1666 G$DMA0ADDR1$0$0 == 0x7011
                    7011   1667 _DMA0ADDR1	=	0x7011
                    7010   1668 G$DMA0ADDR$0$0 == 0x7010
                    7010   1669 _DMA0ADDR	=	0x7010
                    7014   1670 G$DMA0CONFIG$0$0 == 0x7014
                    7014   1671 _DMA0CONFIG	=	0x7014
                    7012   1672 G$DMA1ADDR0$0$0 == 0x7012
                    7012   1673 _DMA1ADDR0	=	0x7012
                    7013   1674 G$DMA1ADDR1$0$0 == 0x7013
                    7013   1675 _DMA1ADDR1	=	0x7013
                    7012   1676 G$DMA1ADDR$0$0 == 0x7012
                    7012   1677 _DMA1ADDR	=	0x7012
                    7015   1678 G$DMA1CONFIG$0$0 == 0x7015
                    7015   1679 _DMA1CONFIG	=	0x7015
                    7070   1680 G$FRCOSCCONFIG$0$0 == 0x7070
                    7070   1681 _FRCOSCCONFIG	=	0x7070
                    7071   1682 G$FRCOSCCTRL$0$0 == 0x7071
                    7071   1683 _FRCOSCCTRL	=	0x7071
                    7076   1684 G$FRCOSCFREQ0$0$0 == 0x7076
                    7076   1685 _FRCOSCFREQ0	=	0x7076
                    7077   1686 G$FRCOSCFREQ1$0$0 == 0x7077
                    7077   1687 _FRCOSCFREQ1	=	0x7077
                    7076   1688 G$FRCOSCFREQ$0$0 == 0x7076
                    7076   1689 _FRCOSCFREQ	=	0x7076
                    7072   1690 G$FRCOSCKFILT0$0$0 == 0x7072
                    7072   1691 _FRCOSCKFILT0	=	0x7072
                    7073   1692 G$FRCOSCKFILT1$0$0 == 0x7073
                    7073   1693 _FRCOSCKFILT1	=	0x7073
                    7072   1694 G$FRCOSCKFILT$0$0 == 0x7072
                    7072   1695 _FRCOSCKFILT	=	0x7072
                    7078   1696 G$FRCOSCPER0$0$0 == 0x7078
                    7078   1697 _FRCOSCPER0	=	0x7078
                    7079   1698 G$FRCOSCPER1$0$0 == 0x7079
                    7079   1699 _FRCOSCPER1	=	0x7079
                    7078   1700 G$FRCOSCPER$0$0 == 0x7078
                    7078   1701 _FRCOSCPER	=	0x7078
                    7074   1702 G$FRCOSCREF0$0$0 == 0x7074
                    7074   1703 _FRCOSCREF0	=	0x7074
                    7075   1704 G$FRCOSCREF1$0$0 == 0x7075
                    7075   1705 _FRCOSCREF1	=	0x7075
                    7074   1706 G$FRCOSCREF$0$0 == 0x7074
                    7074   1707 _FRCOSCREF	=	0x7074
                    7007   1708 G$ANALOGA$0$0 == 0x7007
                    7007   1709 _ANALOGA	=	0x7007
                    700C   1710 G$GPIOENABLE$0$0 == 0x700c
                    700C   1711 _GPIOENABLE	=	0x700c
                    7003   1712 G$EXTIRQ$0$0 == 0x7003
                    7003   1713 _EXTIRQ	=	0x7003
                    7000   1714 G$INTCHGA$0$0 == 0x7000
                    7000   1715 _INTCHGA	=	0x7000
                    7001   1716 G$INTCHGB$0$0 == 0x7001
                    7001   1717 _INTCHGB	=	0x7001
                    7002   1718 G$INTCHGC$0$0 == 0x7002
                    7002   1719 _INTCHGC	=	0x7002
                    7008   1720 G$PALTA$0$0 == 0x7008
                    7008   1721 _PALTA	=	0x7008
                    7009   1722 G$PALTB$0$0 == 0x7009
                    7009   1723 _PALTB	=	0x7009
                    700A   1724 G$PALTC$0$0 == 0x700a
                    700A   1725 _PALTC	=	0x700a
                    7046   1726 G$PALTRADIO$0$0 == 0x7046
                    7046   1727 _PALTRADIO	=	0x7046
                    7004   1728 G$PINCHGA$0$0 == 0x7004
                    7004   1729 _PINCHGA	=	0x7004
                    7005   1730 G$PINCHGB$0$0 == 0x7005
                    7005   1731 _PINCHGB	=	0x7005
                    7006   1732 G$PINCHGC$0$0 == 0x7006
                    7006   1733 _PINCHGC	=	0x7006
                    700B   1734 G$PINSEL$0$0 == 0x700b
                    700B   1735 _PINSEL	=	0x700b
                    7060   1736 G$LPOSCCONFIG$0$0 == 0x7060
                    7060   1737 _LPOSCCONFIG	=	0x7060
                    7066   1738 G$LPOSCFREQ0$0$0 == 0x7066
                    7066   1739 _LPOSCFREQ0	=	0x7066
                    7067   1740 G$LPOSCFREQ1$0$0 == 0x7067
                    7067   1741 _LPOSCFREQ1	=	0x7067
                    7066   1742 G$LPOSCFREQ$0$0 == 0x7066
                    7066   1743 _LPOSCFREQ	=	0x7066
                    7062   1744 G$LPOSCKFILT0$0$0 == 0x7062
                    7062   1745 _LPOSCKFILT0	=	0x7062
                    7063   1746 G$LPOSCKFILT1$0$0 == 0x7063
                    7063   1747 _LPOSCKFILT1	=	0x7063
                    7062   1748 G$LPOSCKFILT$0$0 == 0x7062
                    7062   1749 _LPOSCKFILT	=	0x7062
                    7068   1750 G$LPOSCPER0$0$0 == 0x7068
                    7068   1751 _LPOSCPER0	=	0x7068
                    7069   1752 G$LPOSCPER1$0$0 == 0x7069
                    7069   1753 _LPOSCPER1	=	0x7069
                    7068   1754 G$LPOSCPER$0$0 == 0x7068
                    7068   1755 _LPOSCPER	=	0x7068
                    7064   1756 G$LPOSCREF0$0$0 == 0x7064
                    7064   1757 _LPOSCREF0	=	0x7064
                    7065   1758 G$LPOSCREF1$0$0 == 0x7065
                    7065   1759 _LPOSCREF1	=	0x7065
                    7064   1760 G$LPOSCREF$0$0 == 0x7064
                    7064   1761 _LPOSCREF	=	0x7064
                    7054   1762 G$LPXOSCGM$0$0 == 0x7054
                    7054   1763 _LPXOSCGM	=	0x7054
                    7F01   1764 G$MISCCTRL$0$0 == 0x7f01
                    7F01   1765 _MISCCTRL	=	0x7f01
                    7053   1766 G$OSCCALIB$0$0 == 0x7053
                    7053   1767 _OSCCALIB	=	0x7053
                    7050   1768 G$OSCFORCERUN$0$0 == 0x7050
                    7050   1769 _OSCFORCERUN	=	0x7050
                    7052   1770 G$OSCREADY$0$0 == 0x7052
                    7052   1771 _OSCREADY	=	0x7052
                    7051   1772 G$OSCRUN$0$0 == 0x7051
                    7051   1773 _OSCRUN	=	0x7051
                    7040   1774 G$RADIOFDATAADDR0$0$0 == 0x7040
                    7040   1775 _RADIOFDATAADDR0	=	0x7040
                    7041   1776 G$RADIOFDATAADDR1$0$0 == 0x7041
                    7041   1777 _RADIOFDATAADDR1	=	0x7041
                    7040   1778 G$RADIOFDATAADDR$0$0 == 0x7040
                    7040   1779 _RADIOFDATAADDR	=	0x7040
                    7042   1780 G$RADIOFSTATADDR0$0$0 == 0x7042
                    7042   1781 _RADIOFSTATADDR0	=	0x7042
                    7043   1782 G$RADIOFSTATADDR1$0$0 == 0x7043
                    7043   1783 _RADIOFSTATADDR1	=	0x7043
                    7042   1784 G$RADIOFSTATADDR$0$0 == 0x7042
                    7042   1785 _RADIOFSTATADDR	=	0x7042
                    7044   1786 G$RADIOMUX$0$0 == 0x7044
                    7044   1787 _RADIOMUX	=	0x7044
                    7084   1788 G$SCRATCH0$0$0 == 0x7084
                    7084   1789 _SCRATCH0	=	0x7084
                    7085   1790 G$SCRATCH1$0$0 == 0x7085
                    7085   1791 _SCRATCH1	=	0x7085
                    7086   1792 G$SCRATCH2$0$0 == 0x7086
                    7086   1793 _SCRATCH2	=	0x7086
                    7087   1794 G$SCRATCH3$0$0 == 0x7087
                    7087   1795 _SCRATCH3	=	0x7087
                    7F00   1796 G$SILICONREV$0$0 == 0x7f00
                    7F00   1797 _SILICONREV	=	0x7f00
                    7F19   1798 G$XTALAMPL$0$0 == 0x7f19
                    7F19   1799 _XTALAMPL	=	0x7f19
                    7F18   1800 G$XTALOSC$0$0 == 0x7f18
                    7F18   1801 _XTALOSC	=	0x7f18
                    7F1A   1802 G$XTALREADY$0$0 == 0x7f1a
                    7F1A   1803 _XTALREADY	=	0x7f1a
                    3F82   1804 G$XDPTR0$0$0 == 0x3f82
                    3F82   1805 _XDPTR0	=	0x3f82
                    3F84   1806 G$XDPTR1$0$0 == 0x3f84
                    3F84   1807 _XDPTR1	=	0x3f84
                    3FA8   1808 G$XIE$0$0 == 0x3fa8
                    3FA8   1809 _XIE	=	0x3fa8
                    3FB8   1810 G$XIP$0$0 == 0x3fb8
                    3FB8   1811 _XIP	=	0x3fb8
                    3F87   1812 G$XPCON$0$0 == 0x3f87
                    3F87   1813 _XPCON	=	0x3f87
                    3FCA   1814 G$XADCCH0CONFIG$0$0 == 0x3fca
                    3FCA   1815 _XADCCH0CONFIG	=	0x3fca
                    3FCB   1816 G$XADCCH1CONFIG$0$0 == 0x3fcb
                    3FCB   1817 _XADCCH1CONFIG	=	0x3fcb
                    3FD2   1818 G$XADCCH2CONFIG$0$0 == 0x3fd2
                    3FD2   1819 _XADCCH2CONFIG	=	0x3fd2
                    3FD3   1820 G$XADCCH3CONFIG$0$0 == 0x3fd3
                    3FD3   1821 _XADCCH3CONFIG	=	0x3fd3
                    3FD1   1822 G$XADCCLKSRC$0$0 == 0x3fd1
                    3FD1   1823 _XADCCLKSRC	=	0x3fd1
                    3FC9   1824 G$XADCCONV$0$0 == 0x3fc9
                    3FC9   1825 _XADCCONV	=	0x3fc9
                    3FE1   1826 G$XANALOGCOMP$0$0 == 0x3fe1
                    3FE1   1827 _XANALOGCOMP	=	0x3fe1
                    3FC6   1828 G$XCLKCON$0$0 == 0x3fc6
                    3FC6   1829 _XCLKCON	=	0x3fc6
                    3FC7   1830 G$XCLKSTAT$0$0 == 0x3fc7
                    3FC7   1831 _XCLKSTAT	=	0x3fc7
                    3F97   1832 G$XCODECONFIG$0$0 == 0x3f97
                    3F97   1833 _XCODECONFIG	=	0x3f97
                    3FE3   1834 G$XDBGLNKBUF$0$0 == 0x3fe3
                    3FE3   1835 _XDBGLNKBUF	=	0x3fe3
                    3FE2   1836 G$XDBGLNKSTAT$0$0 == 0x3fe2
                    3FE2   1837 _XDBGLNKSTAT	=	0x3fe2
                    3F89   1838 G$XDIRA$0$0 == 0x3f89
                    3F89   1839 _XDIRA	=	0x3f89
                    3F8A   1840 G$XDIRB$0$0 == 0x3f8a
                    3F8A   1841 _XDIRB	=	0x3f8a
                    3F8B   1842 G$XDIRC$0$0 == 0x3f8b
                    3F8B   1843 _XDIRC	=	0x3f8b
                    3F8E   1844 G$XDIRR$0$0 == 0x3f8e
                    3F8E   1845 _XDIRR	=	0x3f8e
                    3FC8   1846 G$XPINA$0$0 == 0x3fc8
                    3FC8   1847 _XPINA	=	0x3fc8
                    3FE8   1848 G$XPINB$0$0 == 0x3fe8
                    3FE8   1849 _XPINB	=	0x3fe8
                    3FF8   1850 G$XPINC$0$0 == 0x3ff8
                    3FF8   1851 _XPINC	=	0x3ff8
                    3F8D   1852 G$XPINR$0$0 == 0x3f8d
                    3F8D   1853 _XPINR	=	0x3f8d
                    3F80   1854 G$XPORTA$0$0 == 0x3f80
                    3F80   1855 _XPORTA	=	0x3f80
                    3F88   1856 G$XPORTB$0$0 == 0x3f88
                    3F88   1857 _XPORTB	=	0x3f88
                    3F90   1858 G$XPORTC$0$0 == 0x3f90
                    3F90   1859 _XPORTC	=	0x3f90
                    3F8C   1860 G$XPORTR$0$0 == 0x3f8c
                    3F8C   1861 _XPORTR	=	0x3f8c
                    3FCE   1862 G$XIC0CAPT0$0$0 == 0x3fce
                    3FCE   1863 _XIC0CAPT0	=	0x3fce
                    3FCF   1864 G$XIC0CAPT1$0$0 == 0x3fcf
                    3FCF   1865 _XIC0CAPT1	=	0x3fcf
                    3FCE   1866 G$XIC0CAPT$0$0 == 0x3fce
                    3FCE   1867 _XIC0CAPT	=	0x3fce
                    3FCC   1868 G$XIC0MODE$0$0 == 0x3fcc
                    3FCC   1869 _XIC0MODE	=	0x3fcc
                    3FCD   1870 G$XIC0STATUS$0$0 == 0x3fcd
                    3FCD   1871 _XIC0STATUS	=	0x3fcd
                    3FD6   1872 G$XIC1CAPT0$0$0 == 0x3fd6
                    3FD6   1873 _XIC1CAPT0	=	0x3fd6
                    3FD7   1874 G$XIC1CAPT1$0$0 == 0x3fd7
                    3FD7   1875 _XIC1CAPT1	=	0x3fd7
                    3FD6   1876 G$XIC1CAPT$0$0 == 0x3fd6
                    3FD6   1877 _XIC1CAPT	=	0x3fd6
                    3FD4   1878 G$XIC1MODE$0$0 == 0x3fd4
                    3FD4   1879 _XIC1MODE	=	0x3fd4
                    3FD5   1880 G$XIC1STATUS$0$0 == 0x3fd5
                    3FD5   1881 _XIC1STATUS	=	0x3fd5
                    3F92   1882 G$XNVADDR0$0$0 == 0x3f92
                    3F92   1883 _XNVADDR0	=	0x3f92
                    3F93   1884 G$XNVADDR1$0$0 == 0x3f93
                    3F93   1885 _XNVADDR1	=	0x3f93
                    3F92   1886 G$XNVADDR$0$0 == 0x3f92
                    3F92   1887 _XNVADDR	=	0x3f92
                    3F94   1888 G$XNVDATA0$0$0 == 0x3f94
                    3F94   1889 _XNVDATA0	=	0x3f94
                    3F95   1890 G$XNVDATA1$0$0 == 0x3f95
                    3F95   1891 _XNVDATA1	=	0x3f95
                    3F94   1892 G$XNVDATA$0$0 == 0x3f94
                    3F94   1893 _XNVDATA	=	0x3f94
                    3F96   1894 G$XNVKEY$0$0 == 0x3f96
                    3F96   1895 _XNVKEY	=	0x3f96
                    3F91   1896 G$XNVSTATUS$0$0 == 0x3f91
                    3F91   1897 _XNVSTATUS	=	0x3f91
                    3FBC   1898 G$XOC0COMP0$0$0 == 0x3fbc
                    3FBC   1899 _XOC0COMP0	=	0x3fbc
                    3FBD   1900 G$XOC0COMP1$0$0 == 0x3fbd
                    3FBD   1901 _XOC0COMP1	=	0x3fbd
                    3FBC   1902 G$XOC0COMP$0$0 == 0x3fbc
                    3FBC   1903 _XOC0COMP	=	0x3fbc
                    3FB9   1904 G$XOC0MODE$0$0 == 0x3fb9
                    3FB9   1905 _XOC0MODE	=	0x3fb9
                    3FBA   1906 G$XOC0PIN$0$0 == 0x3fba
                    3FBA   1907 _XOC0PIN	=	0x3fba
                    3FBB   1908 G$XOC0STATUS$0$0 == 0x3fbb
                    3FBB   1909 _XOC0STATUS	=	0x3fbb
                    3FC4   1910 G$XOC1COMP0$0$0 == 0x3fc4
                    3FC4   1911 _XOC1COMP0	=	0x3fc4
                    3FC5   1912 G$XOC1COMP1$0$0 == 0x3fc5
                    3FC5   1913 _XOC1COMP1	=	0x3fc5
                    3FC4   1914 G$XOC1COMP$0$0 == 0x3fc4
                    3FC4   1915 _XOC1COMP	=	0x3fc4
                    3FC1   1916 G$XOC1MODE$0$0 == 0x3fc1
                    3FC1   1917 _XOC1MODE	=	0x3fc1
                    3FC2   1918 G$XOC1PIN$0$0 == 0x3fc2
                    3FC2   1919 _XOC1PIN	=	0x3fc2
                    3FC3   1920 G$XOC1STATUS$0$0 == 0x3fc3
                    3FC3   1921 _XOC1STATUS	=	0x3fc3
                    3FB1   1922 G$XRADIOACC$0$0 == 0x3fb1
                    3FB1   1923 _XRADIOACC	=	0x3fb1
                    3FB3   1924 G$XRADIOADDR0$0$0 == 0x3fb3
                    3FB3   1925 _XRADIOADDR0	=	0x3fb3
                    3FB2   1926 G$XRADIOADDR1$0$0 == 0x3fb2
                    3FB2   1927 _XRADIOADDR1	=	0x3fb2
                    3FB7   1928 G$XRADIODATA0$0$0 == 0x3fb7
                    3FB7   1929 _XRADIODATA0	=	0x3fb7
                    3FB6   1930 G$XRADIODATA1$0$0 == 0x3fb6
                    3FB6   1931 _XRADIODATA1	=	0x3fb6
                    3FB5   1932 G$XRADIODATA2$0$0 == 0x3fb5
                    3FB5   1933 _XRADIODATA2	=	0x3fb5
                    3FB4   1934 G$XRADIODATA3$0$0 == 0x3fb4
                    3FB4   1935 _XRADIODATA3	=	0x3fb4
                    3FBE   1936 G$XRADIOSTAT0$0$0 == 0x3fbe
                    3FBE   1937 _XRADIOSTAT0	=	0x3fbe
                    3FBF   1938 G$XRADIOSTAT1$0$0 == 0x3fbf
                    3FBF   1939 _XRADIOSTAT1	=	0x3fbf
                    3FBE   1940 G$XRADIOSTAT$0$0 == 0x3fbe
                    3FBE   1941 _XRADIOSTAT	=	0x3fbe
                    3FDF   1942 G$XSPCLKSRC$0$0 == 0x3fdf
                    3FDF   1943 _XSPCLKSRC	=	0x3fdf
                    3FDC   1944 G$XSPMODE$0$0 == 0x3fdc
                    3FDC   1945 _XSPMODE	=	0x3fdc
                    3FDE   1946 G$XSPSHREG$0$0 == 0x3fde
                    3FDE   1947 _XSPSHREG	=	0x3fde
                    3FDD   1948 G$XSPSTATUS$0$0 == 0x3fdd
                    3FDD   1949 _XSPSTATUS	=	0x3fdd
                    3F9A   1950 G$XT0CLKSRC$0$0 == 0x3f9a
                    3F9A   1951 _XT0CLKSRC	=	0x3f9a
                    3F9C   1952 G$XT0CNT0$0$0 == 0x3f9c
                    3F9C   1953 _XT0CNT0	=	0x3f9c
                    3F9D   1954 G$XT0CNT1$0$0 == 0x3f9d
                    3F9D   1955 _XT0CNT1	=	0x3f9d
                    3F9C   1956 G$XT0CNT$0$0 == 0x3f9c
                    3F9C   1957 _XT0CNT	=	0x3f9c
                    3F99   1958 G$XT0MODE$0$0 == 0x3f99
                    3F99   1959 _XT0MODE	=	0x3f99
                    3F9E   1960 G$XT0PERIOD0$0$0 == 0x3f9e
                    3F9E   1961 _XT0PERIOD0	=	0x3f9e
                    3F9F   1962 G$XT0PERIOD1$0$0 == 0x3f9f
                    3F9F   1963 _XT0PERIOD1	=	0x3f9f
                    3F9E   1964 G$XT0PERIOD$0$0 == 0x3f9e
                    3F9E   1965 _XT0PERIOD	=	0x3f9e
                    3F9B   1966 G$XT0STATUS$0$0 == 0x3f9b
                    3F9B   1967 _XT0STATUS	=	0x3f9b
                    3FA2   1968 G$XT1CLKSRC$0$0 == 0x3fa2
                    3FA2   1969 _XT1CLKSRC	=	0x3fa2
                    3FA4   1970 G$XT1CNT0$0$0 == 0x3fa4
                    3FA4   1971 _XT1CNT0	=	0x3fa4
                    3FA5   1972 G$XT1CNT1$0$0 == 0x3fa5
                    3FA5   1973 _XT1CNT1	=	0x3fa5
                    3FA4   1974 G$XT1CNT$0$0 == 0x3fa4
                    3FA4   1975 _XT1CNT	=	0x3fa4
                    3FA1   1976 G$XT1MODE$0$0 == 0x3fa1
                    3FA1   1977 _XT1MODE	=	0x3fa1
                    3FA6   1978 G$XT1PERIOD0$0$0 == 0x3fa6
                    3FA6   1979 _XT1PERIOD0	=	0x3fa6
                    3FA7   1980 G$XT1PERIOD1$0$0 == 0x3fa7
                    3FA7   1981 _XT1PERIOD1	=	0x3fa7
                    3FA6   1982 G$XT1PERIOD$0$0 == 0x3fa6
                    3FA6   1983 _XT1PERIOD	=	0x3fa6
                    3FA3   1984 G$XT1STATUS$0$0 == 0x3fa3
                    3FA3   1985 _XT1STATUS	=	0x3fa3
                    3FAA   1986 G$XT2CLKSRC$0$0 == 0x3faa
                    3FAA   1987 _XT2CLKSRC	=	0x3faa
                    3FAC   1988 G$XT2CNT0$0$0 == 0x3fac
                    3FAC   1989 _XT2CNT0	=	0x3fac
                    3FAD   1990 G$XT2CNT1$0$0 == 0x3fad
                    3FAD   1991 _XT2CNT1	=	0x3fad
                    3FAC   1992 G$XT2CNT$0$0 == 0x3fac
                    3FAC   1993 _XT2CNT	=	0x3fac
                    3FA9   1994 G$XT2MODE$0$0 == 0x3fa9
                    3FA9   1995 _XT2MODE	=	0x3fa9
                    3FAE   1996 G$XT2PERIOD0$0$0 == 0x3fae
                    3FAE   1997 _XT2PERIOD0	=	0x3fae
                    3FAF   1998 G$XT2PERIOD1$0$0 == 0x3faf
                    3FAF   1999 _XT2PERIOD1	=	0x3faf
                    3FAE   2000 G$XT2PERIOD$0$0 == 0x3fae
                    3FAE   2001 _XT2PERIOD	=	0x3fae
                    3FAB   2002 G$XT2STATUS$0$0 == 0x3fab
                    3FAB   2003 _XT2STATUS	=	0x3fab
                    3FE4   2004 G$XU0CTRL$0$0 == 0x3fe4
                    3FE4   2005 _XU0CTRL	=	0x3fe4
                    3FE7   2006 G$XU0MODE$0$0 == 0x3fe7
                    3FE7   2007 _XU0MODE	=	0x3fe7
                    3FE6   2008 G$XU0SHREG$0$0 == 0x3fe6
                    3FE6   2009 _XU0SHREG	=	0x3fe6
                    3FE5   2010 G$XU0STATUS$0$0 == 0x3fe5
                    3FE5   2011 _XU0STATUS	=	0x3fe5
                    3FEC   2012 G$XU1CTRL$0$0 == 0x3fec
                    3FEC   2013 _XU1CTRL	=	0x3fec
                    3FEF   2014 G$XU1MODE$0$0 == 0x3fef
                    3FEF   2015 _XU1MODE	=	0x3fef
                    3FEE   2016 G$XU1SHREG$0$0 == 0x3fee
                    3FEE   2017 _XU1SHREG	=	0x3fee
                    3FED   2018 G$XU1STATUS$0$0 == 0x3fed
                    3FED   2019 _XU1STATUS	=	0x3fed
                    3FDA   2020 G$XWDTCFG$0$0 == 0x3fda
                    3FDA   2021 _XWDTCFG	=	0x3fda
                    3FDB   2022 G$XWDTRESET$0$0 == 0x3fdb
                    3FDB   2023 _XWDTRESET	=	0x3fdb
                    3FF1   2024 G$XWTCFGA$0$0 == 0x3ff1
                    3FF1   2025 _XWTCFGA	=	0x3ff1
                    3FF9   2026 G$XWTCFGB$0$0 == 0x3ff9
                    3FF9   2027 _XWTCFGB	=	0x3ff9
                    3FF2   2028 G$XWTCNTA0$0$0 == 0x3ff2
                    3FF2   2029 _XWTCNTA0	=	0x3ff2
                    3FF3   2030 G$XWTCNTA1$0$0 == 0x3ff3
                    3FF3   2031 _XWTCNTA1	=	0x3ff3
                    3FF2   2032 G$XWTCNTA$0$0 == 0x3ff2
                    3FF2   2033 _XWTCNTA	=	0x3ff2
                    3FFA   2034 G$XWTCNTB0$0$0 == 0x3ffa
                    3FFA   2035 _XWTCNTB0	=	0x3ffa
                    3FFB   2036 G$XWTCNTB1$0$0 == 0x3ffb
                    3FFB   2037 _XWTCNTB1	=	0x3ffb
                    3FFA   2038 G$XWTCNTB$0$0 == 0x3ffa
                    3FFA   2039 _XWTCNTB	=	0x3ffa
                    3FEB   2040 G$XWTCNTR1$0$0 == 0x3feb
                    3FEB   2041 _XWTCNTR1	=	0x3feb
                    3FF4   2042 G$XWTEVTA0$0$0 == 0x3ff4
                    3FF4   2043 _XWTEVTA0	=	0x3ff4
                    3FF5   2044 G$XWTEVTA1$0$0 == 0x3ff5
                    3FF5   2045 _XWTEVTA1	=	0x3ff5
                    3FF4   2046 G$XWTEVTA$0$0 == 0x3ff4
                    3FF4   2047 _XWTEVTA	=	0x3ff4
                    3FF6   2048 G$XWTEVTB0$0$0 == 0x3ff6
                    3FF6   2049 _XWTEVTB0	=	0x3ff6
                    3FF7   2050 G$XWTEVTB1$0$0 == 0x3ff7
                    3FF7   2051 _XWTEVTB1	=	0x3ff7
                    3FF6   2052 G$XWTEVTB$0$0 == 0x3ff6
                    3FF6   2053 _XWTEVTB	=	0x3ff6
                    3FFC   2054 G$XWTEVTC0$0$0 == 0x3ffc
                    3FFC   2055 _XWTEVTC0	=	0x3ffc
                    3FFD   2056 G$XWTEVTC1$0$0 == 0x3ffd
                    3FFD   2057 _XWTEVTC1	=	0x3ffd
                    3FFC   2058 G$XWTEVTC$0$0 == 0x3ffc
                    3FFC   2059 _XWTEVTC	=	0x3ffc
                    3FFE   2060 G$XWTEVTD0$0$0 == 0x3ffe
                    3FFE   2061 _XWTEVTD0	=	0x3ffe
                    3FFF   2062 G$XWTEVTD1$0$0 == 0x3fff
                    3FFF   2063 _XWTEVTD1	=	0x3fff
                    3FFE   2064 G$XWTEVTD$0$0 == 0x3ffe
                    3FFE   2065 _XWTEVTD	=	0x3ffe
                    3FE9   2066 G$XWTIRQEN$0$0 == 0x3fe9
                    3FE9   2067 _XWTIRQEN	=	0x3fe9
                    3FEA   2068 G$XWTSTAT$0$0 == 0x3fea
                    3FEA   2069 _XWTSTAT	=	0x3fea
                    4114   2070 G$AX5043_AFSKCTRL$0$0 == 0x4114
                    4114   2071 _AX5043_AFSKCTRL	=	0x4114
                    4113   2072 G$AX5043_AFSKMARK0$0$0 == 0x4113
                    4113   2073 _AX5043_AFSKMARK0	=	0x4113
                    4112   2074 G$AX5043_AFSKMARK1$0$0 == 0x4112
                    4112   2075 _AX5043_AFSKMARK1	=	0x4112
                    4111   2076 G$AX5043_AFSKSPACE0$0$0 == 0x4111
                    4111   2077 _AX5043_AFSKSPACE0	=	0x4111
                    4110   2078 G$AX5043_AFSKSPACE1$0$0 == 0x4110
                    4110   2079 _AX5043_AFSKSPACE1	=	0x4110
                    4043   2080 G$AX5043_AGCCOUNTER$0$0 == 0x4043
                    4043   2081 _AX5043_AGCCOUNTER	=	0x4043
                    4115   2082 G$AX5043_AMPLFILTER$0$0 == 0x4115
                    4115   2083 _AX5043_AMPLFILTER	=	0x4115
                    4189   2084 G$AX5043_BBOFFSCAP$0$0 == 0x4189
                    4189   2085 _AX5043_BBOFFSCAP	=	0x4189
                    4188   2086 G$AX5043_BBTUNE$0$0 == 0x4188
                    4188   2087 _AX5043_BBTUNE	=	0x4188
                    4041   2088 G$AX5043_BGNDRSSI$0$0 == 0x4041
                    4041   2089 _AX5043_BGNDRSSI	=	0x4041
                    422E   2090 G$AX5043_BGNDRSSIGAIN$0$0 == 0x422e
                    422E   2091 _AX5043_BGNDRSSIGAIN	=	0x422e
                    422F   2092 G$AX5043_BGNDRSSITHR$0$0 == 0x422f
                    422F   2093 _AX5043_BGNDRSSITHR	=	0x422f
                    4017   2094 G$AX5043_CRCINIT0$0$0 == 0x4017
                    4017   2095 _AX5043_CRCINIT0	=	0x4017
                    4016   2096 G$AX5043_CRCINIT1$0$0 == 0x4016
                    4016   2097 _AX5043_CRCINIT1	=	0x4016
                    4015   2098 G$AX5043_CRCINIT2$0$0 == 0x4015
                    4015   2099 _AX5043_CRCINIT2	=	0x4015
                    4014   2100 G$AX5043_CRCINIT3$0$0 == 0x4014
                    4014   2101 _AX5043_CRCINIT3	=	0x4014
                    4332   2102 G$AX5043_DACCONFIG$0$0 == 0x4332
                    4332   2103 _AX5043_DACCONFIG	=	0x4332
                    4331   2104 G$AX5043_DACVALUE0$0$0 == 0x4331
                    4331   2105 _AX5043_DACVALUE0	=	0x4331
                    4330   2106 G$AX5043_DACVALUE1$0$0 == 0x4330
                    4330   2107 _AX5043_DACVALUE1	=	0x4330
                    4102   2108 G$AX5043_DECIMATION$0$0 == 0x4102
                    4102   2109 _AX5043_DECIMATION	=	0x4102
                    4042   2110 G$AX5043_DIVERSITY$0$0 == 0x4042
                    4042   2111 _AX5043_DIVERSITY	=	0x4042
                    4011   2112 G$AX5043_ENCODING$0$0 == 0x4011
                    4011   2113 _AX5043_ENCODING	=	0x4011
                    4018   2114 G$AX5043_FEC$0$0 == 0x4018
                    4018   2115 _AX5043_FEC	=	0x4018
                    401A   2116 G$AX5043_FECSTATUS$0$0 == 0x401a
                    401A   2117 _AX5043_FECSTATUS	=	0x401a
                    4019   2118 G$AX5043_FECSYNC$0$0 == 0x4019
                    4019   2119 _AX5043_FECSYNC	=	0x4019
                    402B   2120 G$AX5043_FIFOCOUNT0$0$0 == 0x402b
                    402B   2121 _AX5043_FIFOCOUNT0	=	0x402b
                    402A   2122 G$AX5043_FIFOCOUNT1$0$0 == 0x402a
                    402A   2123 _AX5043_FIFOCOUNT1	=	0x402a
                    4029   2124 G$AX5043_FIFODATA$0$0 == 0x4029
                    4029   2125 _AX5043_FIFODATA	=	0x4029
                    402D   2126 G$AX5043_FIFOFREE0$0$0 == 0x402d
                    402D   2127 _AX5043_FIFOFREE0	=	0x402d
                    402C   2128 G$AX5043_FIFOFREE1$0$0 == 0x402c
                    402C   2129 _AX5043_FIFOFREE1	=	0x402c
                    4028   2130 G$AX5043_FIFOSTAT$0$0 == 0x4028
                    4028   2131 _AX5043_FIFOSTAT	=	0x4028
                    402F   2132 G$AX5043_FIFOTHRESH0$0$0 == 0x402f
                    402F   2133 _AX5043_FIFOTHRESH0	=	0x402f
                    402E   2134 G$AX5043_FIFOTHRESH1$0$0 == 0x402e
                    402E   2135 _AX5043_FIFOTHRESH1	=	0x402e
                    4012   2136 G$AX5043_FRAMING$0$0 == 0x4012
                    4012   2137 _AX5043_FRAMING	=	0x4012
                    4037   2138 G$AX5043_FREQA0$0$0 == 0x4037
                    4037   2139 _AX5043_FREQA0	=	0x4037
                    4036   2140 G$AX5043_FREQA1$0$0 == 0x4036
                    4036   2141 _AX5043_FREQA1	=	0x4036
                    4035   2142 G$AX5043_FREQA2$0$0 == 0x4035
                    4035   2143 _AX5043_FREQA2	=	0x4035
                    4034   2144 G$AX5043_FREQA3$0$0 == 0x4034
                    4034   2145 _AX5043_FREQA3	=	0x4034
                    403F   2146 G$AX5043_FREQB0$0$0 == 0x403f
                    403F   2147 _AX5043_FREQB0	=	0x403f
                    403E   2148 G$AX5043_FREQB1$0$0 == 0x403e
                    403E   2149 _AX5043_FREQB1	=	0x403e
                    403D   2150 G$AX5043_FREQB2$0$0 == 0x403d
                    403D   2151 _AX5043_FREQB2	=	0x403d
                    403C   2152 G$AX5043_FREQB3$0$0 == 0x403c
                    403C   2153 _AX5043_FREQB3	=	0x403c
                    4163   2154 G$AX5043_FSKDEV0$0$0 == 0x4163
                    4163   2155 _AX5043_FSKDEV0	=	0x4163
                    4162   2156 G$AX5043_FSKDEV1$0$0 == 0x4162
                    4162   2157 _AX5043_FSKDEV1	=	0x4162
                    4161   2158 G$AX5043_FSKDEV2$0$0 == 0x4161
                    4161   2159 _AX5043_FSKDEV2	=	0x4161
                    410D   2160 G$AX5043_FSKDMAX0$0$0 == 0x410d
                    410D   2161 _AX5043_FSKDMAX0	=	0x410d
                    410C   2162 G$AX5043_FSKDMAX1$0$0 == 0x410c
                    410C   2163 _AX5043_FSKDMAX1	=	0x410c
                    410F   2164 G$AX5043_FSKDMIN0$0$0 == 0x410f
                    410F   2165 _AX5043_FSKDMIN0	=	0x410f
                    410E   2166 G$AX5043_FSKDMIN1$0$0 == 0x410e
                    410E   2167 _AX5043_FSKDMIN1	=	0x410e
                    4309   2168 G$AX5043_GPADC13VALUE0$0$0 == 0x4309
                    4309   2169 _AX5043_GPADC13VALUE0	=	0x4309
                    4308   2170 G$AX5043_GPADC13VALUE1$0$0 == 0x4308
                    4308   2171 _AX5043_GPADC13VALUE1	=	0x4308
                    4300   2172 G$AX5043_GPADCCTRL$0$0 == 0x4300
                    4300   2173 _AX5043_GPADCCTRL	=	0x4300
                    4301   2174 G$AX5043_GPADCPERIOD$0$0 == 0x4301
                    4301   2175 _AX5043_GPADCPERIOD	=	0x4301
                    4101   2176 G$AX5043_IFFREQ0$0$0 == 0x4101
                    4101   2177 _AX5043_IFFREQ0	=	0x4101
                    4100   2178 G$AX5043_IFFREQ1$0$0 == 0x4100
                    4100   2179 _AX5043_IFFREQ1	=	0x4100
                    400B   2180 G$AX5043_IRQINVERSION0$0$0 == 0x400b
                    400B   2181 _AX5043_IRQINVERSION0	=	0x400b
                    400A   2182 G$AX5043_IRQINVERSION1$0$0 == 0x400a
                    400A   2183 _AX5043_IRQINVERSION1	=	0x400a
                    4007   2184 G$AX5043_IRQMASK0$0$0 == 0x4007
                    4007   2185 _AX5043_IRQMASK0	=	0x4007
                    4006   2186 G$AX5043_IRQMASK1$0$0 == 0x4006
                    4006   2187 _AX5043_IRQMASK1	=	0x4006
                    400D   2188 G$AX5043_IRQREQUEST0$0$0 == 0x400d
                    400D   2189 _AX5043_IRQREQUEST0	=	0x400d
                    400C   2190 G$AX5043_IRQREQUEST1$0$0 == 0x400c
                    400C   2191 _AX5043_IRQREQUEST1	=	0x400c
                    4310   2192 G$AX5043_LPOSCCONFIG$0$0 == 0x4310
                    4310   2193 _AX5043_LPOSCCONFIG	=	0x4310
                    4317   2194 G$AX5043_LPOSCFREQ0$0$0 == 0x4317
                    4317   2195 _AX5043_LPOSCFREQ0	=	0x4317
                    4316   2196 G$AX5043_LPOSCFREQ1$0$0 == 0x4316
                    4316   2197 _AX5043_LPOSCFREQ1	=	0x4316
                    4313   2198 G$AX5043_LPOSCKFILT0$0$0 == 0x4313
                    4313   2199 _AX5043_LPOSCKFILT0	=	0x4313
                    4312   2200 G$AX5043_LPOSCKFILT1$0$0 == 0x4312
                    4312   2201 _AX5043_LPOSCKFILT1	=	0x4312
                    4319   2202 G$AX5043_LPOSCPER0$0$0 == 0x4319
                    4319   2203 _AX5043_LPOSCPER0	=	0x4319
                    4318   2204 G$AX5043_LPOSCPER1$0$0 == 0x4318
                    4318   2205 _AX5043_LPOSCPER1	=	0x4318
                    4315   2206 G$AX5043_LPOSCREF0$0$0 == 0x4315
                    4315   2207 _AX5043_LPOSCREF0	=	0x4315
                    4314   2208 G$AX5043_LPOSCREF1$0$0 == 0x4314
                    4314   2209 _AX5043_LPOSCREF1	=	0x4314
                    4311   2210 G$AX5043_LPOSCSTATUS$0$0 == 0x4311
                    4311   2211 _AX5043_LPOSCSTATUS	=	0x4311
                    4214   2212 G$AX5043_MATCH0LEN$0$0 == 0x4214
                    4214   2213 _AX5043_MATCH0LEN	=	0x4214
                    4216   2214 G$AX5043_MATCH0MAX$0$0 == 0x4216
                    4216   2215 _AX5043_MATCH0MAX	=	0x4216
                    4215   2216 G$AX5043_MATCH0MIN$0$0 == 0x4215
                    4215   2217 _AX5043_MATCH0MIN	=	0x4215
                    4213   2218 G$AX5043_MATCH0PAT0$0$0 == 0x4213
                    4213   2219 _AX5043_MATCH0PAT0	=	0x4213
                    4212   2220 G$AX5043_MATCH0PAT1$0$0 == 0x4212
                    4212   2221 _AX5043_MATCH0PAT1	=	0x4212
                    4211   2222 G$AX5043_MATCH0PAT2$0$0 == 0x4211
                    4211   2223 _AX5043_MATCH0PAT2	=	0x4211
                    4210   2224 G$AX5043_MATCH0PAT3$0$0 == 0x4210
                    4210   2225 _AX5043_MATCH0PAT3	=	0x4210
                    421C   2226 G$AX5043_MATCH1LEN$0$0 == 0x421c
                    421C   2227 _AX5043_MATCH1LEN	=	0x421c
                    421E   2228 G$AX5043_MATCH1MAX$0$0 == 0x421e
                    421E   2229 _AX5043_MATCH1MAX	=	0x421e
                    421D   2230 G$AX5043_MATCH1MIN$0$0 == 0x421d
                    421D   2231 _AX5043_MATCH1MIN	=	0x421d
                    4219   2232 G$AX5043_MATCH1PAT0$0$0 == 0x4219
                    4219   2233 _AX5043_MATCH1PAT0	=	0x4219
                    4218   2234 G$AX5043_MATCH1PAT1$0$0 == 0x4218
                    4218   2235 _AX5043_MATCH1PAT1	=	0x4218
                    4108   2236 G$AX5043_MAXDROFFSET0$0$0 == 0x4108
                    4108   2237 _AX5043_MAXDROFFSET0	=	0x4108
                    4107   2238 G$AX5043_MAXDROFFSET1$0$0 == 0x4107
                    4107   2239 _AX5043_MAXDROFFSET1	=	0x4107
                    4106   2240 G$AX5043_MAXDROFFSET2$0$0 == 0x4106
                    4106   2241 _AX5043_MAXDROFFSET2	=	0x4106
                    410B   2242 G$AX5043_MAXRFOFFSET0$0$0 == 0x410b
                    410B   2243 _AX5043_MAXRFOFFSET0	=	0x410b
                    410A   2244 G$AX5043_MAXRFOFFSET1$0$0 == 0x410a
                    410A   2245 _AX5043_MAXRFOFFSET1	=	0x410a
                    4109   2246 G$AX5043_MAXRFOFFSET2$0$0 == 0x4109
                    4109   2247 _AX5043_MAXRFOFFSET2	=	0x4109
                    4164   2248 G$AX5043_MODCFGA$0$0 == 0x4164
                    4164   2249 _AX5043_MODCFGA	=	0x4164
                    4160   2250 G$AX5043_MODCFGF$0$0 == 0x4160
                    4160   2251 _AX5043_MODCFGF	=	0x4160
                    4010   2252 G$AX5043_MODULATION$0$0 == 0x4010
                    4010   2253 _AX5043_MODULATION	=	0x4010
                    4025   2254 G$AX5043_PINFUNCANTSEL$0$0 == 0x4025
                    4025   2255 _AX5043_PINFUNCANTSEL	=	0x4025
                    4023   2256 G$AX5043_PINFUNCDATA$0$0 == 0x4023
                    4023   2257 _AX5043_PINFUNCDATA	=	0x4023
                    4022   2258 G$AX5043_PINFUNCDCLK$0$0 == 0x4022
                    4022   2259 _AX5043_PINFUNCDCLK	=	0x4022
                    4024   2260 G$AX5043_PINFUNCIRQ$0$0 == 0x4024
                    4024   2261 _AX5043_PINFUNCIRQ	=	0x4024
                    4026   2262 G$AX5043_PINFUNCPWRAMP$0$0 == 0x4026
                    4026   2263 _AX5043_PINFUNCPWRAMP	=	0x4026
                    4021   2264 G$AX5043_PINFUNCSYSCLK$0$0 == 0x4021
                    4021   2265 _AX5043_PINFUNCSYSCLK	=	0x4021
                    4020   2266 G$AX5043_PINSTATE$0$0 == 0x4020
                    4020   2267 _AX5043_PINSTATE	=	0x4020
                    4233   2268 G$AX5043_PKTACCEPTFLAGS$0$0 == 0x4233
                    4233   2269 _AX5043_PKTACCEPTFLAGS	=	0x4233
                    4230   2270 G$AX5043_PKTCHUNKSIZE$0$0 == 0x4230
                    4230   2271 _AX5043_PKTCHUNKSIZE	=	0x4230
                    4231   2272 G$AX5043_PKTMISCFLAGS$0$0 == 0x4231
                    4231   2273 _AX5043_PKTMISCFLAGS	=	0x4231
                    4232   2274 G$AX5043_PKTSTOREFLAGS$0$0 == 0x4232
                    4232   2275 _AX5043_PKTSTOREFLAGS	=	0x4232
                    4031   2276 G$AX5043_PLLCPI$0$0 == 0x4031
                    4031   2277 _AX5043_PLLCPI	=	0x4031
                    4039   2278 G$AX5043_PLLCPIBOOST$0$0 == 0x4039
                    4039   2279 _AX5043_PLLCPIBOOST	=	0x4039
                    4182   2280 G$AX5043_PLLLOCKDET$0$0 == 0x4182
                    4182   2281 _AX5043_PLLLOCKDET	=	0x4182
                    4030   2282 G$AX5043_PLLLOOP$0$0 == 0x4030
                    4030   2283 _AX5043_PLLLOOP	=	0x4030
                    4038   2284 G$AX5043_PLLLOOPBOOST$0$0 == 0x4038
                    4038   2285 _AX5043_PLLLOOPBOOST	=	0x4038
                    4033   2286 G$AX5043_PLLRANGINGA$0$0 == 0x4033
                    4033   2287 _AX5043_PLLRANGINGA	=	0x4033
                    403B   2288 G$AX5043_PLLRANGINGB$0$0 == 0x403b
                    403B   2289 _AX5043_PLLRANGINGB	=	0x403b
                    4183   2290 G$AX5043_PLLRNGCLK$0$0 == 0x4183
                    4183   2291 _AX5043_PLLRNGCLK	=	0x4183
                    4032   2292 G$AX5043_PLLVCODIV$0$0 == 0x4032
                    4032   2293 _AX5043_PLLVCODIV	=	0x4032
                    4180   2294 G$AX5043_PLLVCOI$0$0 == 0x4180
                    4180   2295 _AX5043_PLLVCOI	=	0x4180
                    4181   2296 G$AX5043_PLLVCOIR$0$0 == 0x4181
                    4181   2297 _AX5043_PLLVCOIR	=	0x4181
                    4005   2298 G$AX5043_POWIRQMASK$0$0 == 0x4005
                    4005   2299 _AX5043_POWIRQMASK	=	0x4005
                    4003   2300 G$AX5043_POWSTAT$0$0 == 0x4003
                    4003   2301 _AX5043_POWSTAT	=	0x4003
                    4004   2302 G$AX5043_POWSTICKYSTAT$0$0 == 0x4004
                    4004   2303 _AX5043_POWSTICKYSTAT	=	0x4004
                    4027   2304 G$AX5043_PWRAMP$0$0 == 0x4027
                    4027   2305 _AX5043_PWRAMP	=	0x4027
                    4002   2306 G$AX5043_PWRMODE$0$0 == 0x4002
                    4002   2307 _AX5043_PWRMODE	=	0x4002
                    4009   2308 G$AX5043_RADIOEVENTMASK0$0$0 == 0x4009
                    4009   2309 _AX5043_RADIOEVENTMASK0	=	0x4009
                    4008   2310 G$AX5043_RADIOEVENTMASK1$0$0 == 0x4008
                    4008   2311 _AX5043_RADIOEVENTMASK1	=	0x4008
                    400F   2312 G$AX5043_RADIOEVENTREQ0$0$0 == 0x400f
                    400F   2313 _AX5043_RADIOEVENTREQ0	=	0x400f
                    400E   2314 G$AX5043_RADIOEVENTREQ1$0$0 == 0x400e
                    400E   2315 _AX5043_RADIOEVENTREQ1	=	0x400e
                    401C   2316 G$AX5043_RADIOSTATE$0$0 == 0x401c
                    401C   2317 _AX5043_RADIOSTATE	=	0x401c
                    4040   2318 G$AX5043_RSSI$0$0 == 0x4040
                    4040   2319 _AX5043_RSSI	=	0x4040
                    422D   2320 G$AX5043_RSSIABSTHR$0$0 == 0x422d
                    422D   2321 _AX5043_RSSIABSTHR	=	0x422d
                    422C   2322 G$AX5043_RSSIREFERENCE$0$0 == 0x422c
                    422C   2323 _AX5043_RSSIREFERENCE	=	0x422c
                    4105   2324 G$AX5043_RXDATARATE0$0$0 == 0x4105
                    4105   2325 _AX5043_RXDATARATE0	=	0x4105
                    4104   2326 G$AX5043_RXDATARATE1$0$0 == 0x4104
                    4104   2327 _AX5043_RXDATARATE1	=	0x4104
                    4103   2328 G$AX5043_RXDATARATE2$0$0 == 0x4103
                    4103   2329 _AX5043_RXDATARATE2	=	0x4103
                    4001   2330 G$AX5043_SCRATCH$0$0 == 0x4001
                    4001   2331 _AX5043_SCRATCH	=	0x4001
                    4000   2332 G$AX5043_SILICONREVISION$0$0 == 0x4000
                    4000   2333 _AX5043_SILICONREVISION	=	0x4000
                    405B   2334 G$AX5043_TIMER0$0$0 == 0x405b
                    405B   2335 _AX5043_TIMER0	=	0x405b
                    405A   2336 G$AX5043_TIMER1$0$0 == 0x405a
                    405A   2337 _AX5043_TIMER1	=	0x405a
                    4059   2338 G$AX5043_TIMER2$0$0 == 0x4059
                    4059   2339 _AX5043_TIMER2	=	0x4059
                    4227   2340 G$AX5043_TMGRXAGC$0$0 == 0x4227
                    4227   2341 _AX5043_TMGRXAGC	=	0x4227
                    4223   2342 G$AX5043_TMGRXBOOST$0$0 == 0x4223
                    4223   2343 _AX5043_TMGRXBOOST	=	0x4223
                    4226   2344 G$AX5043_TMGRXCOARSEAGC$0$0 == 0x4226
                    4226   2345 _AX5043_TMGRXCOARSEAGC	=	0x4226
                    4225   2346 G$AX5043_TMGRXOFFSACQ$0$0 == 0x4225
                    4225   2347 _AX5043_TMGRXOFFSACQ	=	0x4225
                    4229   2348 G$AX5043_TMGRXPREAMBLE1$0$0 == 0x4229
                    4229   2349 _AX5043_TMGRXPREAMBLE1	=	0x4229
                    422A   2350 G$AX5043_TMGRXPREAMBLE2$0$0 == 0x422a
                    422A   2351 _AX5043_TMGRXPREAMBLE2	=	0x422a
                    422B   2352 G$AX5043_TMGRXPREAMBLE3$0$0 == 0x422b
                    422B   2353 _AX5043_TMGRXPREAMBLE3	=	0x422b
                    4228   2354 G$AX5043_TMGRXRSSI$0$0 == 0x4228
                    4228   2355 _AX5043_TMGRXRSSI	=	0x4228
                    4224   2356 G$AX5043_TMGRXSETTLE$0$0 == 0x4224
                    4224   2357 _AX5043_TMGRXSETTLE	=	0x4224
                    4220   2358 G$AX5043_TMGTXBOOST$0$0 == 0x4220
                    4220   2359 _AX5043_TMGTXBOOST	=	0x4220
                    4221   2360 G$AX5043_TMGTXSETTLE$0$0 == 0x4221
                    4221   2361 _AX5043_TMGTXSETTLE	=	0x4221
                    4055   2362 G$AX5043_TRKAFSKDEMOD0$0$0 == 0x4055
                    4055   2363 _AX5043_TRKAFSKDEMOD0	=	0x4055
                    4054   2364 G$AX5043_TRKAFSKDEMOD1$0$0 == 0x4054
                    4054   2365 _AX5043_TRKAFSKDEMOD1	=	0x4054
                    4049   2366 G$AX5043_TRKAMPLITUDE0$0$0 == 0x4049
                    4049   2367 _AX5043_TRKAMPLITUDE0	=	0x4049
                    4048   2368 G$AX5043_TRKAMPLITUDE1$0$0 == 0x4048
                    4048   2369 _AX5043_TRKAMPLITUDE1	=	0x4048
                    4047   2370 G$AX5043_TRKDATARATE0$0$0 == 0x4047
                    4047   2371 _AX5043_TRKDATARATE0	=	0x4047
                    4046   2372 G$AX5043_TRKDATARATE1$0$0 == 0x4046
                    4046   2373 _AX5043_TRKDATARATE1	=	0x4046
                    4045   2374 G$AX5043_TRKDATARATE2$0$0 == 0x4045
                    4045   2375 _AX5043_TRKDATARATE2	=	0x4045
                    4051   2376 G$AX5043_TRKFREQ0$0$0 == 0x4051
                    4051   2377 _AX5043_TRKFREQ0	=	0x4051
                    4050   2378 G$AX5043_TRKFREQ1$0$0 == 0x4050
                    4050   2379 _AX5043_TRKFREQ1	=	0x4050
                    4053   2380 G$AX5043_TRKFSKDEMOD0$0$0 == 0x4053
                    4053   2381 _AX5043_TRKFSKDEMOD0	=	0x4053
                    4052   2382 G$AX5043_TRKFSKDEMOD1$0$0 == 0x4052
                    4052   2383 _AX5043_TRKFSKDEMOD1	=	0x4052
                    404B   2384 G$AX5043_TRKPHASE0$0$0 == 0x404b
                    404B   2385 _AX5043_TRKPHASE0	=	0x404b
                    404A   2386 G$AX5043_TRKPHASE1$0$0 == 0x404a
                    404A   2387 _AX5043_TRKPHASE1	=	0x404a
                    404F   2388 G$AX5043_TRKRFFREQ0$0$0 == 0x404f
                    404F   2389 _AX5043_TRKRFFREQ0	=	0x404f
                    404E   2390 G$AX5043_TRKRFFREQ1$0$0 == 0x404e
                    404E   2391 _AX5043_TRKRFFREQ1	=	0x404e
                    404D   2392 G$AX5043_TRKRFFREQ2$0$0 == 0x404d
                    404D   2393 _AX5043_TRKRFFREQ2	=	0x404d
                    4169   2394 G$AX5043_TXPWRCOEFFA0$0$0 == 0x4169
                    4169   2395 _AX5043_TXPWRCOEFFA0	=	0x4169
                    4168   2396 G$AX5043_TXPWRCOEFFA1$0$0 == 0x4168
                    4168   2397 _AX5043_TXPWRCOEFFA1	=	0x4168
                    416B   2398 G$AX5043_TXPWRCOEFFB0$0$0 == 0x416b
                    416B   2399 _AX5043_TXPWRCOEFFB0	=	0x416b
                    416A   2400 G$AX5043_TXPWRCOEFFB1$0$0 == 0x416a
                    416A   2401 _AX5043_TXPWRCOEFFB1	=	0x416a
                    416D   2402 G$AX5043_TXPWRCOEFFC0$0$0 == 0x416d
                    416D   2403 _AX5043_TXPWRCOEFFC0	=	0x416d
                    416C   2404 G$AX5043_TXPWRCOEFFC1$0$0 == 0x416c
                    416C   2405 _AX5043_TXPWRCOEFFC1	=	0x416c
                    416F   2406 G$AX5043_TXPWRCOEFFD0$0$0 == 0x416f
                    416F   2407 _AX5043_TXPWRCOEFFD0	=	0x416f
                    416E   2408 G$AX5043_TXPWRCOEFFD1$0$0 == 0x416e
                    416E   2409 _AX5043_TXPWRCOEFFD1	=	0x416e
                    4171   2410 G$AX5043_TXPWRCOEFFE0$0$0 == 0x4171
                    4171   2411 _AX5043_TXPWRCOEFFE0	=	0x4171
                    4170   2412 G$AX5043_TXPWRCOEFFE1$0$0 == 0x4170
                    4170   2413 _AX5043_TXPWRCOEFFE1	=	0x4170
                    4167   2414 G$AX5043_TXRATE0$0$0 == 0x4167
                    4167   2415 _AX5043_TXRATE0	=	0x4167
                    4166   2416 G$AX5043_TXRATE1$0$0 == 0x4166
                    4166   2417 _AX5043_TXRATE1	=	0x4166
                    4165   2418 G$AX5043_TXRATE2$0$0 == 0x4165
                    4165   2419 _AX5043_TXRATE2	=	0x4165
                    406B   2420 G$AX5043_WAKEUP0$0$0 == 0x406b
                    406B   2421 _AX5043_WAKEUP0	=	0x406b
                    406A   2422 G$AX5043_WAKEUP1$0$0 == 0x406a
                    406A   2423 _AX5043_WAKEUP1	=	0x406a
                    406D   2424 G$AX5043_WAKEUPFREQ0$0$0 == 0x406d
                    406D   2425 _AX5043_WAKEUPFREQ0	=	0x406d
                    406C   2426 G$AX5043_WAKEUPFREQ1$0$0 == 0x406c
                    406C   2427 _AX5043_WAKEUPFREQ1	=	0x406c
                    4069   2428 G$AX5043_WAKEUPTIMER0$0$0 == 0x4069
                    4069   2429 _AX5043_WAKEUPTIMER0	=	0x4069
                    4068   2430 G$AX5043_WAKEUPTIMER1$0$0 == 0x4068
                    4068   2431 _AX5043_WAKEUPTIMER1	=	0x4068
                    406E   2432 G$AX5043_WAKEUPXOEARLY$0$0 == 0x406e
                    406E   2433 _AX5043_WAKEUPXOEARLY	=	0x406e
                    4184   2434 G$AX5043_XTALCAP$0$0 == 0x4184
                    4184   2435 _AX5043_XTALCAP	=	0x4184
                    401D   2436 G$AX5043_XTALSTATUS$0$0 == 0x401d
                    401D   2437 _AX5043_XTALSTATUS	=	0x401d
                    4122   2438 G$AX5043_AGCAHYST0$0$0 == 0x4122
                    4122   2439 _AX5043_AGCAHYST0	=	0x4122
                    4132   2440 G$AX5043_AGCAHYST1$0$0 == 0x4132
                    4132   2441 _AX5043_AGCAHYST1	=	0x4132
                    4142   2442 G$AX5043_AGCAHYST2$0$0 == 0x4142
                    4142   2443 _AX5043_AGCAHYST2	=	0x4142
                    4152   2444 G$AX5043_AGCAHYST3$0$0 == 0x4152
                    4152   2445 _AX5043_AGCAHYST3	=	0x4152
                    4120   2446 G$AX5043_AGCGAIN0$0$0 == 0x4120
                    4120   2447 _AX5043_AGCGAIN0	=	0x4120
                    4130   2448 G$AX5043_AGCGAIN1$0$0 == 0x4130
                    4130   2449 _AX5043_AGCGAIN1	=	0x4130
                    4140   2450 G$AX5043_AGCGAIN2$0$0 == 0x4140
                    4140   2451 _AX5043_AGCGAIN2	=	0x4140
                    4150   2452 G$AX5043_AGCGAIN3$0$0 == 0x4150
                    4150   2453 _AX5043_AGCGAIN3	=	0x4150
                    4123   2454 G$AX5043_AGCMINMAX0$0$0 == 0x4123
                    4123   2455 _AX5043_AGCMINMAX0	=	0x4123
                    4133   2456 G$AX5043_AGCMINMAX1$0$0 == 0x4133
                    4133   2457 _AX5043_AGCMINMAX1	=	0x4133
                    4143   2458 G$AX5043_AGCMINMAX2$0$0 == 0x4143
                    4143   2459 _AX5043_AGCMINMAX2	=	0x4143
                    4153   2460 G$AX5043_AGCMINMAX3$0$0 == 0x4153
                    4153   2461 _AX5043_AGCMINMAX3	=	0x4153
                    4121   2462 G$AX5043_AGCTARGET0$0$0 == 0x4121
                    4121   2463 _AX5043_AGCTARGET0	=	0x4121
                    4131   2464 G$AX5043_AGCTARGET1$0$0 == 0x4131
                    4131   2465 _AX5043_AGCTARGET1	=	0x4131
                    4141   2466 G$AX5043_AGCTARGET2$0$0 == 0x4141
                    4141   2467 _AX5043_AGCTARGET2	=	0x4141
                    4151   2468 G$AX5043_AGCTARGET3$0$0 == 0x4151
                    4151   2469 _AX5043_AGCTARGET3	=	0x4151
                    412B   2470 G$AX5043_AMPLITUDEGAIN0$0$0 == 0x412b
                    412B   2471 _AX5043_AMPLITUDEGAIN0	=	0x412b
                    413B   2472 G$AX5043_AMPLITUDEGAIN1$0$0 == 0x413b
                    413B   2473 _AX5043_AMPLITUDEGAIN1	=	0x413b
                    414B   2474 G$AX5043_AMPLITUDEGAIN2$0$0 == 0x414b
                    414B   2475 _AX5043_AMPLITUDEGAIN2	=	0x414b
                    415B   2476 G$AX5043_AMPLITUDEGAIN3$0$0 == 0x415b
                    415B   2477 _AX5043_AMPLITUDEGAIN3	=	0x415b
                    412F   2478 G$AX5043_BBOFFSRES0$0$0 == 0x412f
                    412F   2479 _AX5043_BBOFFSRES0	=	0x412f
                    413F   2480 G$AX5043_BBOFFSRES1$0$0 == 0x413f
                    413F   2481 _AX5043_BBOFFSRES1	=	0x413f
                    414F   2482 G$AX5043_BBOFFSRES2$0$0 == 0x414f
                    414F   2483 _AX5043_BBOFFSRES2	=	0x414f
                    415F   2484 G$AX5043_BBOFFSRES3$0$0 == 0x415f
                    415F   2485 _AX5043_BBOFFSRES3	=	0x415f
                    4125   2486 G$AX5043_DRGAIN0$0$0 == 0x4125
                    4125   2487 _AX5043_DRGAIN0	=	0x4125
                    4135   2488 G$AX5043_DRGAIN1$0$0 == 0x4135
                    4135   2489 _AX5043_DRGAIN1	=	0x4135
                    4145   2490 G$AX5043_DRGAIN2$0$0 == 0x4145
                    4145   2491 _AX5043_DRGAIN2	=	0x4145
                    4155   2492 G$AX5043_DRGAIN3$0$0 == 0x4155
                    4155   2493 _AX5043_DRGAIN3	=	0x4155
                    412E   2494 G$AX5043_FOURFSK0$0$0 == 0x412e
                    412E   2495 _AX5043_FOURFSK0	=	0x412e
                    413E   2496 G$AX5043_FOURFSK1$0$0 == 0x413e
                    413E   2497 _AX5043_FOURFSK1	=	0x413e
                    414E   2498 G$AX5043_FOURFSK2$0$0 == 0x414e
                    414E   2499 _AX5043_FOURFSK2	=	0x414e
                    415E   2500 G$AX5043_FOURFSK3$0$0 == 0x415e
                    415E   2501 _AX5043_FOURFSK3	=	0x415e
                    412D   2502 G$AX5043_FREQDEV00$0$0 == 0x412d
                    412D   2503 _AX5043_FREQDEV00	=	0x412d
                    413D   2504 G$AX5043_FREQDEV01$0$0 == 0x413d
                    413D   2505 _AX5043_FREQDEV01	=	0x413d
                    414D   2506 G$AX5043_FREQDEV02$0$0 == 0x414d
                    414D   2507 _AX5043_FREQDEV02	=	0x414d
                    415D   2508 G$AX5043_FREQDEV03$0$0 == 0x415d
                    415D   2509 _AX5043_FREQDEV03	=	0x415d
                    412C   2510 G$AX5043_FREQDEV10$0$0 == 0x412c
                    412C   2511 _AX5043_FREQDEV10	=	0x412c
                    413C   2512 G$AX5043_FREQDEV11$0$0 == 0x413c
                    413C   2513 _AX5043_FREQDEV11	=	0x413c
                    414C   2514 G$AX5043_FREQDEV12$0$0 == 0x414c
                    414C   2515 _AX5043_FREQDEV12	=	0x414c
                    415C   2516 G$AX5043_FREQDEV13$0$0 == 0x415c
                    415C   2517 _AX5043_FREQDEV13	=	0x415c
                    4127   2518 G$AX5043_FREQUENCYGAINA0$0$0 == 0x4127
                    4127   2519 _AX5043_FREQUENCYGAINA0	=	0x4127
                    4137   2520 G$AX5043_FREQUENCYGAINA1$0$0 == 0x4137
                    4137   2521 _AX5043_FREQUENCYGAINA1	=	0x4137
                    4147   2522 G$AX5043_FREQUENCYGAINA2$0$0 == 0x4147
                    4147   2523 _AX5043_FREQUENCYGAINA2	=	0x4147
                    4157   2524 G$AX5043_FREQUENCYGAINA3$0$0 == 0x4157
                    4157   2525 _AX5043_FREQUENCYGAINA3	=	0x4157
                    4128   2526 G$AX5043_FREQUENCYGAINB0$0$0 == 0x4128
                    4128   2527 _AX5043_FREQUENCYGAINB0	=	0x4128
                    4138   2528 G$AX5043_FREQUENCYGAINB1$0$0 == 0x4138
                    4138   2529 _AX5043_FREQUENCYGAINB1	=	0x4138
                    4148   2530 G$AX5043_FREQUENCYGAINB2$0$0 == 0x4148
                    4148   2531 _AX5043_FREQUENCYGAINB2	=	0x4148
                    4158   2532 G$AX5043_FREQUENCYGAINB3$0$0 == 0x4158
                    4158   2533 _AX5043_FREQUENCYGAINB3	=	0x4158
                    4129   2534 G$AX5043_FREQUENCYGAINC0$0$0 == 0x4129
                    4129   2535 _AX5043_FREQUENCYGAINC0	=	0x4129
                    4139   2536 G$AX5043_FREQUENCYGAINC1$0$0 == 0x4139
                    4139   2537 _AX5043_FREQUENCYGAINC1	=	0x4139
                    4149   2538 G$AX5043_FREQUENCYGAINC2$0$0 == 0x4149
                    4149   2539 _AX5043_FREQUENCYGAINC2	=	0x4149
                    4159   2540 G$AX5043_FREQUENCYGAINC3$0$0 == 0x4159
                    4159   2541 _AX5043_FREQUENCYGAINC3	=	0x4159
                    412A   2542 G$AX5043_FREQUENCYGAIND0$0$0 == 0x412a
                    412A   2543 _AX5043_FREQUENCYGAIND0	=	0x412a
                    413A   2544 G$AX5043_FREQUENCYGAIND1$0$0 == 0x413a
                    413A   2545 _AX5043_FREQUENCYGAIND1	=	0x413a
                    414A   2546 G$AX5043_FREQUENCYGAIND2$0$0 == 0x414a
                    414A   2547 _AX5043_FREQUENCYGAIND2	=	0x414a
                    415A   2548 G$AX5043_FREQUENCYGAIND3$0$0 == 0x415a
                    415A   2549 _AX5043_FREQUENCYGAIND3	=	0x415a
                    4116   2550 G$AX5043_FREQUENCYLEAK$0$0 == 0x4116
                    4116   2551 _AX5043_FREQUENCYLEAK	=	0x4116
                    4126   2552 G$AX5043_PHASEGAIN0$0$0 == 0x4126
                    4126   2553 _AX5043_PHASEGAIN0	=	0x4126
                    4136   2554 G$AX5043_PHASEGAIN1$0$0 == 0x4136
                    4136   2555 _AX5043_PHASEGAIN1	=	0x4136
                    4146   2556 G$AX5043_PHASEGAIN2$0$0 == 0x4146
                    4146   2557 _AX5043_PHASEGAIN2	=	0x4146
                    4156   2558 G$AX5043_PHASEGAIN3$0$0 == 0x4156
                    4156   2559 _AX5043_PHASEGAIN3	=	0x4156
                    4207   2560 G$AX5043_PKTADDR0$0$0 == 0x4207
                    4207   2561 _AX5043_PKTADDR0	=	0x4207
                    4206   2562 G$AX5043_PKTADDR1$0$0 == 0x4206
                    4206   2563 _AX5043_PKTADDR1	=	0x4206
                    4205   2564 G$AX5043_PKTADDR2$0$0 == 0x4205
                    4205   2565 _AX5043_PKTADDR2	=	0x4205
                    4204   2566 G$AX5043_PKTADDR3$0$0 == 0x4204
                    4204   2567 _AX5043_PKTADDR3	=	0x4204
                    4200   2568 G$AX5043_PKTADDRCFG$0$0 == 0x4200
                    4200   2569 _AX5043_PKTADDRCFG	=	0x4200
                    420B   2570 G$AX5043_PKTADDRMASK0$0$0 == 0x420b
                    420B   2571 _AX5043_PKTADDRMASK0	=	0x420b
                    420A   2572 G$AX5043_PKTADDRMASK1$0$0 == 0x420a
                    420A   2573 _AX5043_PKTADDRMASK1	=	0x420a
                    4209   2574 G$AX5043_PKTADDRMASK2$0$0 == 0x4209
                    4209   2575 _AX5043_PKTADDRMASK2	=	0x4209
                    4208   2576 G$AX5043_PKTADDRMASK3$0$0 == 0x4208
                    4208   2577 _AX5043_PKTADDRMASK3	=	0x4208
                    4201   2578 G$AX5043_PKTLENCFG$0$0 == 0x4201
                    4201   2579 _AX5043_PKTLENCFG	=	0x4201
                    4202   2580 G$AX5043_PKTLENOFFSET$0$0 == 0x4202
                    4202   2581 _AX5043_PKTLENOFFSET	=	0x4202
                    4203   2582 G$AX5043_PKTMAXLEN$0$0 == 0x4203
                    4203   2583 _AX5043_PKTMAXLEN	=	0x4203
                    4118   2584 G$AX5043_RXPARAMCURSET$0$0 == 0x4118
                    4118   2585 _AX5043_RXPARAMCURSET	=	0x4118
                    4117   2586 G$AX5043_RXPARAMSETS$0$0 == 0x4117
                    4117   2587 _AX5043_RXPARAMSETS	=	0x4117
                    4124   2588 G$AX5043_TIMEGAIN0$0$0 == 0x4124
                    4124   2589 _AX5043_TIMEGAIN0	=	0x4124
                    4134   2590 G$AX5043_TIMEGAIN1$0$0 == 0x4134
                    4134   2591 _AX5043_TIMEGAIN1	=	0x4134
                    4144   2592 G$AX5043_TIMEGAIN2$0$0 == 0x4144
                    4144   2593 _AX5043_TIMEGAIN2	=	0x4144
                    4154   2594 G$AX5043_TIMEGAIN3$0$0 == 0x4154
                    4154   2595 _AX5043_TIMEGAIN3	=	0x4154
                    5114   2596 G$AX5043_AFSKCTRLNB$0$0 == 0x5114
                    5114   2597 _AX5043_AFSKCTRLNB	=	0x5114
                    5113   2598 G$AX5043_AFSKMARK0NB$0$0 == 0x5113
                    5113   2599 _AX5043_AFSKMARK0NB	=	0x5113
                    5112   2600 G$AX5043_AFSKMARK1NB$0$0 == 0x5112
                    5112   2601 _AX5043_AFSKMARK1NB	=	0x5112
                    5111   2602 G$AX5043_AFSKSPACE0NB$0$0 == 0x5111
                    5111   2603 _AX5043_AFSKSPACE0NB	=	0x5111
                    5110   2604 G$AX5043_AFSKSPACE1NB$0$0 == 0x5110
                    5110   2605 _AX5043_AFSKSPACE1NB	=	0x5110
                    5043   2606 G$AX5043_AGCCOUNTERNB$0$0 == 0x5043
                    5043   2607 _AX5043_AGCCOUNTERNB	=	0x5043
                    5115   2608 G$AX5043_AMPLFILTERNB$0$0 == 0x5115
                    5115   2609 _AX5043_AMPLFILTERNB	=	0x5115
                    5189   2610 G$AX5043_BBOFFSCAPNB$0$0 == 0x5189
                    5189   2611 _AX5043_BBOFFSCAPNB	=	0x5189
                    5188   2612 G$AX5043_BBTUNENB$0$0 == 0x5188
                    5188   2613 _AX5043_BBTUNENB	=	0x5188
                    5041   2614 G$AX5043_BGNDRSSINB$0$0 == 0x5041
                    5041   2615 _AX5043_BGNDRSSINB	=	0x5041
                    522E   2616 G$AX5043_BGNDRSSIGAINNB$0$0 == 0x522e
                    522E   2617 _AX5043_BGNDRSSIGAINNB	=	0x522e
                    522F   2618 G$AX5043_BGNDRSSITHRNB$0$0 == 0x522f
                    522F   2619 _AX5043_BGNDRSSITHRNB	=	0x522f
                    5017   2620 G$AX5043_CRCINIT0NB$0$0 == 0x5017
                    5017   2621 _AX5043_CRCINIT0NB	=	0x5017
                    5016   2622 G$AX5043_CRCINIT1NB$0$0 == 0x5016
                    5016   2623 _AX5043_CRCINIT1NB	=	0x5016
                    5015   2624 G$AX5043_CRCINIT2NB$0$0 == 0x5015
                    5015   2625 _AX5043_CRCINIT2NB	=	0x5015
                    5014   2626 G$AX5043_CRCINIT3NB$0$0 == 0x5014
                    5014   2627 _AX5043_CRCINIT3NB	=	0x5014
                    5332   2628 G$AX5043_DACCONFIGNB$0$0 == 0x5332
                    5332   2629 _AX5043_DACCONFIGNB	=	0x5332
                    5331   2630 G$AX5043_DACVALUE0NB$0$0 == 0x5331
                    5331   2631 _AX5043_DACVALUE0NB	=	0x5331
                    5330   2632 G$AX5043_DACVALUE1NB$0$0 == 0x5330
                    5330   2633 _AX5043_DACVALUE1NB	=	0x5330
                    5102   2634 G$AX5043_DECIMATIONNB$0$0 == 0x5102
                    5102   2635 _AX5043_DECIMATIONNB	=	0x5102
                    5042   2636 G$AX5043_DIVERSITYNB$0$0 == 0x5042
                    5042   2637 _AX5043_DIVERSITYNB	=	0x5042
                    5011   2638 G$AX5043_ENCODINGNB$0$0 == 0x5011
                    5011   2639 _AX5043_ENCODINGNB	=	0x5011
                    5018   2640 G$AX5043_FECNB$0$0 == 0x5018
                    5018   2641 _AX5043_FECNB	=	0x5018
                    501A   2642 G$AX5043_FECSTATUSNB$0$0 == 0x501a
                    501A   2643 _AX5043_FECSTATUSNB	=	0x501a
                    5019   2644 G$AX5043_FECSYNCNB$0$0 == 0x5019
                    5019   2645 _AX5043_FECSYNCNB	=	0x5019
                    502B   2646 G$AX5043_FIFOCOUNT0NB$0$0 == 0x502b
                    502B   2647 _AX5043_FIFOCOUNT0NB	=	0x502b
                    502A   2648 G$AX5043_FIFOCOUNT1NB$0$0 == 0x502a
                    502A   2649 _AX5043_FIFOCOUNT1NB	=	0x502a
                    5029   2650 G$AX5043_FIFODATANB$0$0 == 0x5029
                    5029   2651 _AX5043_FIFODATANB	=	0x5029
                    502D   2652 G$AX5043_FIFOFREE0NB$0$0 == 0x502d
                    502D   2653 _AX5043_FIFOFREE0NB	=	0x502d
                    502C   2654 G$AX5043_FIFOFREE1NB$0$0 == 0x502c
                    502C   2655 _AX5043_FIFOFREE1NB	=	0x502c
                    5028   2656 G$AX5043_FIFOSTATNB$0$0 == 0x5028
                    5028   2657 _AX5043_FIFOSTATNB	=	0x5028
                    502F   2658 G$AX5043_FIFOTHRESH0NB$0$0 == 0x502f
                    502F   2659 _AX5043_FIFOTHRESH0NB	=	0x502f
                    502E   2660 G$AX5043_FIFOTHRESH1NB$0$0 == 0x502e
                    502E   2661 _AX5043_FIFOTHRESH1NB	=	0x502e
                    5012   2662 G$AX5043_FRAMINGNB$0$0 == 0x5012
                    5012   2663 _AX5043_FRAMINGNB	=	0x5012
                    5037   2664 G$AX5043_FREQA0NB$0$0 == 0x5037
                    5037   2665 _AX5043_FREQA0NB	=	0x5037
                    5036   2666 G$AX5043_FREQA1NB$0$0 == 0x5036
                    5036   2667 _AX5043_FREQA1NB	=	0x5036
                    5035   2668 G$AX5043_FREQA2NB$0$0 == 0x5035
                    5035   2669 _AX5043_FREQA2NB	=	0x5035
                    5034   2670 G$AX5043_FREQA3NB$0$0 == 0x5034
                    5034   2671 _AX5043_FREQA3NB	=	0x5034
                    503F   2672 G$AX5043_FREQB0NB$0$0 == 0x503f
                    503F   2673 _AX5043_FREQB0NB	=	0x503f
                    503E   2674 G$AX5043_FREQB1NB$0$0 == 0x503e
                    503E   2675 _AX5043_FREQB1NB	=	0x503e
                    503D   2676 G$AX5043_FREQB2NB$0$0 == 0x503d
                    503D   2677 _AX5043_FREQB2NB	=	0x503d
                    503C   2678 G$AX5043_FREQB3NB$0$0 == 0x503c
                    503C   2679 _AX5043_FREQB3NB	=	0x503c
                    5163   2680 G$AX5043_FSKDEV0NB$0$0 == 0x5163
                    5163   2681 _AX5043_FSKDEV0NB	=	0x5163
                    5162   2682 G$AX5043_FSKDEV1NB$0$0 == 0x5162
                    5162   2683 _AX5043_FSKDEV1NB	=	0x5162
                    5161   2684 G$AX5043_FSKDEV2NB$0$0 == 0x5161
                    5161   2685 _AX5043_FSKDEV2NB	=	0x5161
                    510D   2686 G$AX5043_FSKDMAX0NB$0$0 == 0x510d
                    510D   2687 _AX5043_FSKDMAX0NB	=	0x510d
                    510C   2688 G$AX5043_FSKDMAX1NB$0$0 == 0x510c
                    510C   2689 _AX5043_FSKDMAX1NB	=	0x510c
                    510F   2690 G$AX5043_FSKDMIN0NB$0$0 == 0x510f
                    510F   2691 _AX5043_FSKDMIN0NB	=	0x510f
                    510E   2692 G$AX5043_FSKDMIN1NB$0$0 == 0x510e
                    510E   2693 _AX5043_FSKDMIN1NB	=	0x510e
                    5309   2694 G$AX5043_GPADC13VALUE0NB$0$0 == 0x5309
                    5309   2695 _AX5043_GPADC13VALUE0NB	=	0x5309
                    5308   2696 G$AX5043_GPADC13VALUE1NB$0$0 == 0x5308
                    5308   2697 _AX5043_GPADC13VALUE1NB	=	0x5308
                    5300   2698 G$AX5043_GPADCCTRLNB$0$0 == 0x5300
                    5300   2699 _AX5043_GPADCCTRLNB	=	0x5300
                    5301   2700 G$AX5043_GPADCPERIODNB$0$0 == 0x5301
                    5301   2701 _AX5043_GPADCPERIODNB	=	0x5301
                    5101   2702 G$AX5043_IFFREQ0NB$0$0 == 0x5101
                    5101   2703 _AX5043_IFFREQ0NB	=	0x5101
                    5100   2704 G$AX5043_IFFREQ1NB$0$0 == 0x5100
                    5100   2705 _AX5043_IFFREQ1NB	=	0x5100
                    500B   2706 G$AX5043_IRQINVERSION0NB$0$0 == 0x500b
                    500B   2707 _AX5043_IRQINVERSION0NB	=	0x500b
                    500A   2708 G$AX5043_IRQINVERSION1NB$0$0 == 0x500a
                    500A   2709 _AX5043_IRQINVERSION1NB	=	0x500a
                    5007   2710 G$AX5043_IRQMASK0NB$0$0 == 0x5007
                    5007   2711 _AX5043_IRQMASK0NB	=	0x5007
                    5006   2712 G$AX5043_IRQMASK1NB$0$0 == 0x5006
                    5006   2713 _AX5043_IRQMASK1NB	=	0x5006
                    500D   2714 G$AX5043_IRQREQUEST0NB$0$0 == 0x500d
                    500D   2715 _AX5043_IRQREQUEST0NB	=	0x500d
                    500C   2716 G$AX5043_IRQREQUEST1NB$0$0 == 0x500c
                    500C   2717 _AX5043_IRQREQUEST1NB	=	0x500c
                    5310   2718 G$AX5043_LPOSCCONFIGNB$0$0 == 0x5310
                    5310   2719 _AX5043_LPOSCCONFIGNB	=	0x5310
                    5317   2720 G$AX5043_LPOSCFREQ0NB$0$0 == 0x5317
                    5317   2721 _AX5043_LPOSCFREQ0NB	=	0x5317
                    5316   2722 G$AX5043_LPOSCFREQ1NB$0$0 == 0x5316
                    5316   2723 _AX5043_LPOSCFREQ1NB	=	0x5316
                    5313   2724 G$AX5043_LPOSCKFILT0NB$0$0 == 0x5313
                    5313   2725 _AX5043_LPOSCKFILT0NB	=	0x5313
                    5312   2726 G$AX5043_LPOSCKFILT1NB$0$0 == 0x5312
                    5312   2727 _AX5043_LPOSCKFILT1NB	=	0x5312
                    5319   2728 G$AX5043_LPOSCPER0NB$0$0 == 0x5319
                    5319   2729 _AX5043_LPOSCPER0NB	=	0x5319
                    5318   2730 G$AX5043_LPOSCPER1NB$0$0 == 0x5318
                    5318   2731 _AX5043_LPOSCPER1NB	=	0x5318
                    5315   2732 G$AX5043_LPOSCREF0NB$0$0 == 0x5315
                    5315   2733 _AX5043_LPOSCREF0NB	=	0x5315
                    5314   2734 G$AX5043_LPOSCREF1NB$0$0 == 0x5314
                    5314   2735 _AX5043_LPOSCREF1NB	=	0x5314
                    5311   2736 G$AX5043_LPOSCSTATUSNB$0$0 == 0x5311
                    5311   2737 _AX5043_LPOSCSTATUSNB	=	0x5311
                    5214   2738 G$AX5043_MATCH0LENNB$0$0 == 0x5214
                    5214   2739 _AX5043_MATCH0LENNB	=	0x5214
                    5216   2740 G$AX5043_MATCH0MAXNB$0$0 == 0x5216
                    5216   2741 _AX5043_MATCH0MAXNB	=	0x5216
                    5215   2742 G$AX5043_MATCH0MINNB$0$0 == 0x5215
                    5215   2743 _AX5043_MATCH0MINNB	=	0x5215
                    5213   2744 G$AX5043_MATCH0PAT0NB$0$0 == 0x5213
                    5213   2745 _AX5043_MATCH0PAT0NB	=	0x5213
                    5212   2746 G$AX5043_MATCH0PAT1NB$0$0 == 0x5212
                    5212   2747 _AX5043_MATCH0PAT1NB	=	0x5212
                    5211   2748 G$AX5043_MATCH0PAT2NB$0$0 == 0x5211
                    5211   2749 _AX5043_MATCH0PAT2NB	=	0x5211
                    5210   2750 G$AX5043_MATCH0PAT3NB$0$0 == 0x5210
                    5210   2751 _AX5043_MATCH0PAT3NB	=	0x5210
                    521C   2752 G$AX5043_MATCH1LENNB$0$0 == 0x521c
                    521C   2753 _AX5043_MATCH1LENNB	=	0x521c
                    521E   2754 G$AX5043_MATCH1MAXNB$0$0 == 0x521e
                    521E   2755 _AX5043_MATCH1MAXNB	=	0x521e
                    521D   2756 G$AX5043_MATCH1MINNB$0$0 == 0x521d
                    521D   2757 _AX5043_MATCH1MINNB	=	0x521d
                    5219   2758 G$AX5043_MATCH1PAT0NB$0$0 == 0x5219
                    5219   2759 _AX5043_MATCH1PAT0NB	=	0x5219
                    5218   2760 G$AX5043_MATCH1PAT1NB$0$0 == 0x5218
                    5218   2761 _AX5043_MATCH1PAT1NB	=	0x5218
                    5108   2762 G$AX5043_MAXDROFFSET0NB$0$0 == 0x5108
                    5108   2763 _AX5043_MAXDROFFSET0NB	=	0x5108
                    5107   2764 G$AX5043_MAXDROFFSET1NB$0$0 == 0x5107
                    5107   2765 _AX5043_MAXDROFFSET1NB	=	0x5107
                    5106   2766 G$AX5043_MAXDROFFSET2NB$0$0 == 0x5106
                    5106   2767 _AX5043_MAXDROFFSET2NB	=	0x5106
                    510B   2768 G$AX5043_MAXRFOFFSET0NB$0$0 == 0x510b
                    510B   2769 _AX5043_MAXRFOFFSET0NB	=	0x510b
                    510A   2770 G$AX5043_MAXRFOFFSET1NB$0$0 == 0x510a
                    510A   2771 _AX5043_MAXRFOFFSET1NB	=	0x510a
                    5109   2772 G$AX5043_MAXRFOFFSET2NB$0$0 == 0x5109
                    5109   2773 _AX5043_MAXRFOFFSET2NB	=	0x5109
                    5164   2774 G$AX5043_MODCFGANB$0$0 == 0x5164
                    5164   2775 _AX5043_MODCFGANB	=	0x5164
                    5160   2776 G$AX5043_MODCFGFNB$0$0 == 0x5160
                    5160   2777 _AX5043_MODCFGFNB	=	0x5160
                    5010   2778 G$AX5043_MODULATIONNB$0$0 == 0x5010
                    5010   2779 _AX5043_MODULATIONNB	=	0x5010
                    5025   2780 G$AX5043_PINFUNCANTSELNB$0$0 == 0x5025
                    5025   2781 _AX5043_PINFUNCANTSELNB	=	0x5025
                    5023   2782 G$AX5043_PINFUNCDATANB$0$0 == 0x5023
                    5023   2783 _AX5043_PINFUNCDATANB	=	0x5023
                    5022   2784 G$AX5043_PINFUNCDCLKNB$0$0 == 0x5022
                    5022   2785 _AX5043_PINFUNCDCLKNB	=	0x5022
                    5024   2786 G$AX5043_PINFUNCIRQNB$0$0 == 0x5024
                    5024   2787 _AX5043_PINFUNCIRQNB	=	0x5024
                    5026   2788 G$AX5043_PINFUNCPWRAMPNB$0$0 == 0x5026
                    5026   2789 _AX5043_PINFUNCPWRAMPNB	=	0x5026
                    5021   2790 G$AX5043_PINFUNCSYSCLKNB$0$0 == 0x5021
                    5021   2791 _AX5043_PINFUNCSYSCLKNB	=	0x5021
                    5020   2792 G$AX5043_PINSTATENB$0$0 == 0x5020
                    5020   2793 _AX5043_PINSTATENB	=	0x5020
                    5233   2794 G$AX5043_PKTACCEPTFLAGSNB$0$0 == 0x5233
                    5233   2795 _AX5043_PKTACCEPTFLAGSNB	=	0x5233
                    5230   2796 G$AX5043_PKTCHUNKSIZENB$0$0 == 0x5230
                    5230   2797 _AX5043_PKTCHUNKSIZENB	=	0x5230
                    5231   2798 G$AX5043_PKTMISCFLAGSNB$0$0 == 0x5231
                    5231   2799 _AX5043_PKTMISCFLAGSNB	=	0x5231
                    5232   2800 G$AX5043_PKTSTOREFLAGSNB$0$0 == 0x5232
                    5232   2801 _AX5043_PKTSTOREFLAGSNB	=	0x5232
                    5031   2802 G$AX5043_PLLCPINB$0$0 == 0x5031
                    5031   2803 _AX5043_PLLCPINB	=	0x5031
                    5039   2804 G$AX5043_PLLCPIBOOSTNB$0$0 == 0x5039
                    5039   2805 _AX5043_PLLCPIBOOSTNB	=	0x5039
                    5182   2806 G$AX5043_PLLLOCKDETNB$0$0 == 0x5182
                    5182   2807 _AX5043_PLLLOCKDETNB	=	0x5182
                    5030   2808 G$AX5043_PLLLOOPNB$0$0 == 0x5030
                    5030   2809 _AX5043_PLLLOOPNB	=	0x5030
                    5038   2810 G$AX5043_PLLLOOPBOOSTNB$0$0 == 0x5038
                    5038   2811 _AX5043_PLLLOOPBOOSTNB	=	0x5038
                    5033   2812 G$AX5043_PLLRANGINGANB$0$0 == 0x5033
                    5033   2813 _AX5043_PLLRANGINGANB	=	0x5033
                    503B   2814 G$AX5043_PLLRANGINGBNB$0$0 == 0x503b
                    503B   2815 _AX5043_PLLRANGINGBNB	=	0x503b
                    5183   2816 G$AX5043_PLLRNGCLKNB$0$0 == 0x5183
                    5183   2817 _AX5043_PLLRNGCLKNB	=	0x5183
                    5032   2818 G$AX5043_PLLVCODIVNB$0$0 == 0x5032
                    5032   2819 _AX5043_PLLVCODIVNB	=	0x5032
                    5180   2820 G$AX5043_PLLVCOINB$0$0 == 0x5180
                    5180   2821 _AX5043_PLLVCOINB	=	0x5180
                    5181   2822 G$AX5043_PLLVCOIRNB$0$0 == 0x5181
                    5181   2823 _AX5043_PLLVCOIRNB	=	0x5181
                    5005   2824 G$AX5043_POWIRQMASKNB$0$0 == 0x5005
                    5005   2825 _AX5043_POWIRQMASKNB	=	0x5005
                    5003   2826 G$AX5043_POWSTATNB$0$0 == 0x5003
                    5003   2827 _AX5043_POWSTATNB	=	0x5003
                    5004   2828 G$AX5043_POWSTICKYSTATNB$0$0 == 0x5004
                    5004   2829 _AX5043_POWSTICKYSTATNB	=	0x5004
                    5027   2830 G$AX5043_PWRAMPNB$0$0 == 0x5027
                    5027   2831 _AX5043_PWRAMPNB	=	0x5027
                    5002   2832 G$AX5043_PWRMODENB$0$0 == 0x5002
                    5002   2833 _AX5043_PWRMODENB	=	0x5002
                    5009   2834 G$AX5043_RADIOEVENTMASK0NB$0$0 == 0x5009
                    5009   2835 _AX5043_RADIOEVENTMASK0NB	=	0x5009
                    5008   2836 G$AX5043_RADIOEVENTMASK1NB$0$0 == 0x5008
                    5008   2837 _AX5043_RADIOEVENTMASK1NB	=	0x5008
                    500F   2838 G$AX5043_RADIOEVENTREQ0NB$0$0 == 0x500f
                    500F   2839 _AX5043_RADIOEVENTREQ0NB	=	0x500f
                    500E   2840 G$AX5043_RADIOEVENTREQ1NB$0$0 == 0x500e
                    500E   2841 _AX5043_RADIOEVENTREQ1NB	=	0x500e
                    501C   2842 G$AX5043_RADIOSTATENB$0$0 == 0x501c
                    501C   2843 _AX5043_RADIOSTATENB	=	0x501c
                    5040   2844 G$AX5043_RSSINB$0$0 == 0x5040
                    5040   2845 _AX5043_RSSINB	=	0x5040
                    522D   2846 G$AX5043_RSSIABSTHRNB$0$0 == 0x522d
                    522D   2847 _AX5043_RSSIABSTHRNB	=	0x522d
                    522C   2848 G$AX5043_RSSIREFERENCENB$0$0 == 0x522c
                    522C   2849 _AX5043_RSSIREFERENCENB	=	0x522c
                    5105   2850 G$AX5043_RXDATARATE0NB$0$0 == 0x5105
                    5105   2851 _AX5043_RXDATARATE0NB	=	0x5105
                    5104   2852 G$AX5043_RXDATARATE1NB$0$0 == 0x5104
                    5104   2853 _AX5043_RXDATARATE1NB	=	0x5104
                    5103   2854 G$AX5043_RXDATARATE2NB$0$0 == 0x5103
                    5103   2855 _AX5043_RXDATARATE2NB	=	0x5103
                    5001   2856 G$AX5043_SCRATCHNB$0$0 == 0x5001
                    5001   2857 _AX5043_SCRATCHNB	=	0x5001
                    5000   2858 G$AX5043_SILICONREVISIONNB$0$0 == 0x5000
                    5000   2859 _AX5043_SILICONREVISIONNB	=	0x5000
                    505B   2860 G$AX5043_TIMER0NB$0$0 == 0x505b
                    505B   2861 _AX5043_TIMER0NB	=	0x505b
                    505A   2862 G$AX5043_TIMER1NB$0$0 == 0x505a
                    505A   2863 _AX5043_TIMER1NB	=	0x505a
                    5059   2864 G$AX5043_TIMER2NB$0$0 == 0x5059
                    5059   2865 _AX5043_TIMER2NB	=	0x5059
                    5227   2866 G$AX5043_TMGRXAGCNB$0$0 == 0x5227
                    5227   2867 _AX5043_TMGRXAGCNB	=	0x5227
                    5223   2868 G$AX5043_TMGRXBOOSTNB$0$0 == 0x5223
                    5223   2869 _AX5043_TMGRXBOOSTNB	=	0x5223
                    5226   2870 G$AX5043_TMGRXCOARSEAGCNB$0$0 == 0x5226
                    5226   2871 _AX5043_TMGRXCOARSEAGCNB	=	0x5226
                    5225   2872 G$AX5043_TMGRXOFFSACQNB$0$0 == 0x5225
                    5225   2873 _AX5043_TMGRXOFFSACQNB	=	0x5225
                    5229   2874 G$AX5043_TMGRXPREAMBLE1NB$0$0 == 0x5229
                    5229   2875 _AX5043_TMGRXPREAMBLE1NB	=	0x5229
                    522A   2876 G$AX5043_TMGRXPREAMBLE2NB$0$0 == 0x522a
                    522A   2877 _AX5043_TMGRXPREAMBLE2NB	=	0x522a
                    522B   2878 G$AX5043_TMGRXPREAMBLE3NB$0$0 == 0x522b
                    522B   2879 _AX5043_TMGRXPREAMBLE3NB	=	0x522b
                    5228   2880 G$AX5043_TMGRXRSSINB$0$0 == 0x5228
                    5228   2881 _AX5043_TMGRXRSSINB	=	0x5228
                    5224   2882 G$AX5043_TMGRXSETTLENB$0$0 == 0x5224
                    5224   2883 _AX5043_TMGRXSETTLENB	=	0x5224
                    5220   2884 G$AX5043_TMGTXBOOSTNB$0$0 == 0x5220
                    5220   2885 _AX5043_TMGTXBOOSTNB	=	0x5220
                    5221   2886 G$AX5043_TMGTXSETTLENB$0$0 == 0x5221
                    5221   2887 _AX5043_TMGTXSETTLENB	=	0x5221
                    5055   2888 G$AX5043_TRKAFSKDEMOD0NB$0$0 == 0x5055
                    5055   2889 _AX5043_TRKAFSKDEMOD0NB	=	0x5055
                    5054   2890 G$AX5043_TRKAFSKDEMOD1NB$0$0 == 0x5054
                    5054   2891 _AX5043_TRKAFSKDEMOD1NB	=	0x5054
                    5049   2892 G$AX5043_TRKAMPLITUDE0NB$0$0 == 0x5049
                    5049   2893 _AX5043_TRKAMPLITUDE0NB	=	0x5049
                    5048   2894 G$AX5043_TRKAMPLITUDE1NB$0$0 == 0x5048
                    5048   2895 _AX5043_TRKAMPLITUDE1NB	=	0x5048
                    5047   2896 G$AX5043_TRKDATARATE0NB$0$0 == 0x5047
                    5047   2897 _AX5043_TRKDATARATE0NB	=	0x5047
                    5046   2898 G$AX5043_TRKDATARATE1NB$0$0 == 0x5046
                    5046   2899 _AX5043_TRKDATARATE1NB	=	0x5046
                    5045   2900 G$AX5043_TRKDATARATE2NB$0$0 == 0x5045
                    5045   2901 _AX5043_TRKDATARATE2NB	=	0x5045
                    5051   2902 G$AX5043_TRKFREQ0NB$0$0 == 0x5051
                    5051   2903 _AX5043_TRKFREQ0NB	=	0x5051
                    5050   2904 G$AX5043_TRKFREQ1NB$0$0 == 0x5050
                    5050   2905 _AX5043_TRKFREQ1NB	=	0x5050
                    5053   2906 G$AX5043_TRKFSKDEMOD0NB$0$0 == 0x5053
                    5053   2907 _AX5043_TRKFSKDEMOD0NB	=	0x5053
                    5052   2908 G$AX5043_TRKFSKDEMOD1NB$0$0 == 0x5052
                    5052   2909 _AX5043_TRKFSKDEMOD1NB	=	0x5052
                    504B   2910 G$AX5043_TRKPHASE0NB$0$0 == 0x504b
                    504B   2911 _AX5043_TRKPHASE0NB	=	0x504b
                    504A   2912 G$AX5043_TRKPHASE1NB$0$0 == 0x504a
                    504A   2913 _AX5043_TRKPHASE1NB	=	0x504a
                    504F   2914 G$AX5043_TRKRFFREQ0NB$0$0 == 0x504f
                    504F   2915 _AX5043_TRKRFFREQ0NB	=	0x504f
                    504E   2916 G$AX5043_TRKRFFREQ1NB$0$0 == 0x504e
                    504E   2917 _AX5043_TRKRFFREQ1NB	=	0x504e
                    504D   2918 G$AX5043_TRKRFFREQ2NB$0$0 == 0x504d
                    504D   2919 _AX5043_TRKRFFREQ2NB	=	0x504d
                    5169   2920 G$AX5043_TXPWRCOEFFA0NB$0$0 == 0x5169
                    5169   2921 _AX5043_TXPWRCOEFFA0NB	=	0x5169
                    5168   2922 G$AX5043_TXPWRCOEFFA1NB$0$0 == 0x5168
                    5168   2923 _AX5043_TXPWRCOEFFA1NB	=	0x5168
                    516B   2924 G$AX5043_TXPWRCOEFFB0NB$0$0 == 0x516b
                    516B   2925 _AX5043_TXPWRCOEFFB0NB	=	0x516b
                    516A   2926 G$AX5043_TXPWRCOEFFB1NB$0$0 == 0x516a
                    516A   2927 _AX5043_TXPWRCOEFFB1NB	=	0x516a
                    516D   2928 G$AX5043_TXPWRCOEFFC0NB$0$0 == 0x516d
                    516D   2929 _AX5043_TXPWRCOEFFC0NB	=	0x516d
                    516C   2930 G$AX5043_TXPWRCOEFFC1NB$0$0 == 0x516c
                    516C   2931 _AX5043_TXPWRCOEFFC1NB	=	0x516c
                    516F   2932 G$AX5043_TXPWRCOEFFD0NB$0$0 == 0x516f
                    516F   2933 _AX5043_TXPWRCOEFFD0NB	=	0x516f
                    516E   2934 G$AX5043_TXPWRCOEFFD1NB$0$0 == 0x516e
                    516E   2935 _AX5043_TXPWRCOEFFD1NB	=	0x516e
                    5171   2936 G$AX5043_TXPWRCOEFFE0NB$0$0 == 0x5171
                    5171   2937 _AX5043_TXPWRCOEFFE0NB	=	0x5171
                    5170   2938 G$AX5043_TXPWRCOEFFE1NB$0$0 == 0x5170
                    5170   2939 _AX5043_TXPWRCOEFFE1NB	=	0x5170
                    5167   2940 G$AX5043_TXRATE0NB$0$0 == 0x5167
                    5167   2941 _AX5043_TXRATE0NB	=	0x5167
                    5166   2942 G$AX5043_TXRATE1NB$0$0 == 0x5166
                    5166   2943 _AX5043_TXRATE1NB	=	0x5166
                    5165   2944 G$AX5043_TXRATE2NB$0$0 == 0x5165
                    5165   2945 _AX5043_TXRATE2NB	=	0x5165
                    506B   2946 G$AX5043_WAKEUP0NB$0$0 == 0x506b
                    506B   2947 _AX5043_WAKEUP0NB	=	0x506b
                    506A   2948 G$AX5043_WAKEUP1NB$0$0 == 0x506a
                    506A   2949 _AX5043_WAKEUP1NB	=	0x506a
                    506D   2950 G$AX5043_WAKEUPFREQ0NB$0$0 == 0x506d
                    506D   2951 _AX5043_WAKEUPFREQ0NB	=	0x506d
                    506C   2952 G$AX5043_WAKEUPFREQ1NB$0$0 == 0x506c
                    506C   2953 _AX5043_WAKEUPFREQ1NB	=	0x506c
                    5069   2954 G$AX5043_WAKEUPTIMER0NB$0$0 == 0x5069
                    5069   2955 _AX5043_WAKEUPTIMER0NB	=	0x5069
                    5068   2956 G$AX5043_WAKEUPTIMER1NB$0$0 == 0x5068
                    5068   2957 _AX5043_WAKEUPTIMER1NB	=	0x5068
                    506E   2958 G$AX5043_WAKEUPXOEARLYNB$0$0 == 0x506e
                    506E   2959 _AX5043_WAKEUPXOEARLYNB	=	0x506e
                    5184   2960 G$AX5043_XTALCAPNB$0$0 == 0x5184
                    5184   2961 _AX5043_XTALCAPNB	=	0x5184
                    501D   2962 G$AX5043_XTALSTATUSNB$0$0 == 0x501d
                    501D   2963 _AX5043_XTALSTATUSNB	=	0x501d
                    5122   2964 G$AX5043_AGCAHYST0NB$0$0 == 0x5122
                    5122   2965 _AX5043_AGCAHYST0NB	=	0x5122
                    5132   2966 G$AX5043_AGCAHYST1NB$0$0 == 0x5132
                    5132   2967 _AX5043_AGCAHYST1NB	=	0x5132
                    5142   2968 G$AX5043_AGCAHYST2NB$0$0 == 0x5142
                    5142   2969 _AX5043_AGCAHYST2NB	=	0x5142
                    5152   2970 G$AX5043_AGCAHYST3NB$0$0 == 0x5152
                    5152   2971 _AX5043_AGCAHYST3NB	=	0x5152
                    5120   2972 G$AX5043_AGCGAIN0NB$0$0 == 0x5120
                    5120   2973 _AX5043_AGCGAIN0NB	=	0x5120
                    5130   2974 G$AX5043_AGCGAIN1NB$0$0 == 0x5130
                    5130   2975 _AX5043_AGCGAIN1NB	=	0x5130
                    5140   2976 G$AX5043_AGCGAIN2NB$0$0 == 0x5140
                    5140   2977 _AX5043_AGCGAIN2NB	=	0x5140
                    5150   2978 G$AX5043_AGCGAIN3NB$0$0 == 0x5150
                    5150   2979 _AX5043_AGCGAIN3NB	=	0x5150
                    5123   2980 G$AX5043_AGCMINMAX0NB$0$0 == 0x5123
                    5123   2981 _AX5043_AGCMINMAX0NB	=	0x5123
                    5133   2982 G$AX5043_AGCMINMAX1NB$0$0 == 0x5133
                    5133   2983 _AX5043_AGCMINMAX1NB	=	0x5133
                    5143   2984 G$AX5043_AGCMINMAX2NB$0$0 == 0x5143
                    5143   2985 _AX5043_AGCMINMAX2NB	=	0x5143
                    5153   2986 G$AX5043_AGCMINMAX3NB$0$0 == 0x5153
                    5153   2987 _AX5043_AGCMINMAX3NB	=	0x5153
                    5121   2988 G$AX5043_AGCTARGET0NB$0$0 == 0x5121
                    5121   2989 _AX5043_AGCTARGET0NB	=	0x5121
                    5131   2990 G$AX5043_AGCTARGET1NB$0$0 == 0x5131
                    5131   2991 _AX5043_AGCTARGET1NB	=	0x5131
                    5141   2992 G$AX5043_AGCTARGET2NB$0$0 == 0x5141
                    5141   2993 _AX5043_AGCTARGET2NB	=	0x5141
                    5151   2994 G$AX5043_AGCTARGET3NB$0$0 == 0x5151
                    5151   2995 _AX5043_AGCTARGET3NB	=	0x5151
                    512B   2996 G$AX5043_AMPLITUDEGAIN0NB$0$0 == 0x512b
                    512B   2997 _AX5043_AMPLITUDEGAIN0NB	=	0x512b
                    513B   2998 G$AX5043_AMPLITUDEGAIN1NB$0$0 == 0x513b
                    513B   2999 _AX5043_AMPLITUDEGAIN1NB	=	0x513b
                    514B   3000 G$AX5043_AMPLITUDEGAIN2NB$0$0 == 0x514b
                    514B   3001 _AX5043_AMPLITUDEGAIN2NB	=	0x514b
                    515B   3002 G$AX5043_AMPLITUDEGAIN3NB$0$0 == 0x515b
                    515B   3003 _AX5043_AMPLITUDEGAIN3NB	=	0x515b
                    512F   3004 G$AX5043_BBOFFSRES0NB$0$0 == 0x512f
                    512F   3005 _AX5043_BBOFFSRES0NB	=	0x512f
                    513F   3006 G$AX5043_BBOFFSRES1NB$0$0 == 0x513f
                    513F   3007 _AX5043_BBOFFSRES1NB	=	0x513f
                    514F   3008 G$AX5043_BBOFFSRES2NB$0$0 == 0x514f
                    514F   3009 _AX5043_BBOFFSRES2NB	=	0x514f
                    515F   3010 G$AX5043_BBOFFSRES3NB$0$0 == 0x515f
                    515F   3011 _AX5043_BBOFFSRES3NB	=	0x515f
                    5125   3012 G$AX5043_DRGAIN0NB$0$0 == 0x5125
                    5125   3013 _AX5043_DRGAIN0NB	=	0x5125
                    5135   3014 G$AX5043_DRGAIN1NB$0$0 == 0x5135
                    5135   3015 _AX5043_DRGAIN1NB	=	0x5135
                    5145   3016 G$AX5043_DRGAIN2NB$0$0 == 0x5145
                    5145   3017 _AX5043_DRGAIN2NB	=	0x5145
                    5155   3018 G$AX5043_DRGAIN3NB$0$0 == 0x5155
                    5155   3019 _AX5043_DRGAIN3NB	=	0x5155
                    512E   3020 G$AX5043_FOURFSK0NB$0$0 == 0x512e
                    512E   3021 _AX5043_FOURFSK0NB	=	0x512e
                    513E   3022 G$AX5043_FOURFSK1NB$0$0 == 0x513e
                    513E   3023 _AX5043_FOURFSK1NB	=	0x513e
                    514E   3024 G$AX5043_FOURFSK2NB$0$0 == 0x514e
                    514E   3025 _AX5043_FOURFSK2NB	=	0x514e
                    515E   3026 G$AX5043_FOURFSK3NB$0$0 == 0x515e
                    515E   3027 _AX5043_FOURFSK3NB	=	0x515e
                    512D   3028 G$AX5043_FREQDEV00NB$0$0 == 0x512d
                    512D   3029 _AX5043_FREQDEV00NB	=	0x512d
                    513D   3030 G$AX5043_FREQDEV01NB$0$0 == 0x513d
                    513D   3031 _AX5043_FREQDEV01NB	=	0x513d
                    514D   3032 G$AX5043_FREQDEV02NB$0$0 == 0x514d
                    514D   3033 _AX5043_FREQDEV02NB	=	0x514d
                    515D   3034 G$AX5043_FREQDEV03NB$0$0 == 0x515d
                    515D   3035 _AX5043_FREQDEV03NB	=	0x515d
                    512C   3036 G$AX5043_FREQDEV10NB$0$0 == 0x512c
                    512C   3037 _AX5043_FREQDEV10NB	=	0x512c
                    513C   3038 G$AX5043_FREQDEV11NB$0$0 == 0x513c
                    513C   3039 _AX5043_FREQDEV11NB	=	0x513c
                    514C   3040 G$AX5043_FREQDEV12NB$0$0 == 0x514c
                    514C   3041 _AX5043_FREQDEV12NB	=	0x514c
                    515C   3042 G$AX5043_FREQDEV13NB$0$0 == 0x515c
                    515C   3043 _AX5043_FREQDEV13NB	=	0x515c
                    5127   3044 G$AX5043_FREQUENCYGAINA0NB$0$0 == 0x5127
                    5127   3045 _AX5043_FREQUENCYGAINA0NB	=	0x5127
                    5137   3046 G$AX5043_FREQUENCYGAINA1NB$0$0 == 0x5137
                    5137   3047 _AX5043_FREQUENCYGAINA1NB	=	0x5137
                    5147   3048 G$AX5043_FREQUENCYGAINA2NB$0$0 == 0x5147
                    5147   3049 _AX5043_FREQUENCYGAINA2NB	=	0x5147
                    5157   3050 G$AX5043_FREQUENCYGAINA3NB$0$0 == 0x5157
                    5157   3051 _AX5043_FREQUENCYGAINA3NB	=	0x5157
                    5128   3052 G$AX5043_FREQUENCYGAINB0NB$0$0 == 0x5128
                    5128   3053 _AX5043_FREQUENCYGAINB0NB	=	0x5128
                    5138   3054 G$AX5043_FREQUENCYGAINB1NB$0$0 == 0x5138
                    5138   3055 _AX5043_FREQUENCYGAINB1NB	=	0x5138
                    5148   3056 G$AX5043_FREQUENCYGAINB2NB$0$0 == 0x5148
                    5148   3057 _AX5043_FREQUENCYGAINB2NB	=	0x5148
                    5158   3058 G$AX5043_FREQUENCYGAINB3NB$0$0 == 0x5158
                    5158   3059 _AX5043_FREQUENCYGAINB3NB	=	0x5158
                    5129   3060 G$AX5043_FREQUENCYGAINC0NB$0$0 == 0x5129
                    5129   3061 _AX5043_FREQUENCYGAINC0NB	=	0x5129
                    5139   3062 G$AX5043_FREQUENCYGAINC1NB$0$0 == 0x5139
                    5139   3063 _AX5043_FREQUENCYGAINC1NB	=	0x5139
                    5149   3064 G$AX5043_FREQUENCYGAINC2NB$0$0 == 0x5149
                    5149   3065 _AX5043_FREQUENCYGAINC2NB	=	0x5149
                    5159   3066 G$AX5043_FREQUENCYGAINC3NB$0$0 == 0x5159
                    5159   3067 _AX5043_FREQUENCYGAINC3NB	=	0x5159
                    512A   3068 G$AX5043_FREQUENCYGAIND0NB$0$0 == 0x512a
                    512A   3069 _AX5043_FREQUENCYGAIND0NB	=	0x512a
                    513A   3070 G$AX5043_FREQUENCYGAIND1NB$0$0 == 0x513a
                    513A   3071 _AX5043_FREQUENCYGAIND1NB	=	0x513a
                    514A   3072 G$AX5043_FREQUENCYGAIND2NB$0$0 == 0x514a
                    514A   3073 _AX5043_FREQUENCYGAIND2NB	=	0x514a
                    515A   3074 G$AX5043_FREQUENCYGAIND3NB$0$0 == 0x515a
                    515A   3075 _AX5043_FREQUENCYGAIND3NB	=	0x515a
                    5116   3076 G$AX5043_FREQUENCYLEAKNB$0$0 == 0x5116
                    5116   3077 _AX5043_FREQUENCYLEAKNB	=	0x5116
                    5126   3078 G$AX5043_PHASEGAIN0NB$0$0 == 0x5126
                    5126   3079 _AX5043_PHASEGAIN0NB	=	0x5126
                    5136   3080 G$AX5043_PHASEGAIN1NB$0$0 == 0x5136
                    5136   3081 _AX5043_PHASEGAIN1NB	=	0x5136
                    5146   3082 G$AX5043_PHASEGAIN2NB$0$0 == 0x5146
                    5146   3083 _AX5043_PHASEGAIN2NB	=	0x5146
                    5156   3084 G$AX5043_PHASEGAIN3NB$0$0 == 0x5156
                    5156   3085 _AX5043_PHASEGAIN3NB	=	0x5156
                    5207   3086 G$AX5043_PKTADDR0NB$0$0 == 0x5207
                    5207   3087 _AX5043_PKTADDR0NB	=	0x5207
                    5206   3088 G$AX5043_PKTADDR1NB$0$0 == 0x5206
                    5206   3089 _AX5043_PKTADDR1NB	=	0x5206
                    5205   3090 G$AX5043_PKTADDR2NB$0$0 == 0x5205
                    5205   3091 _AX5043_PKTADDR2NB	=	0x5205
                    5204   3092 G$AX5043_PKTADDR3NB$0$0 == 0x5204
                    5204   3093 _AX5043_PKTADDR3NB	=	0x5204
                    5200   3094 G$AX5043_PKTADDRCFGNB$0$0 == 0x5200
                    5200   3095 _AX5043_PKTADDRCFGNB	=	0x5200
                    520B   3096 G$AX5043_PKTADDRMASK0NB$0$0 == 0x520b
                    520B   3097 _AX5043_PKTADDRMASK0NB	=	0x520b
                    520A   3098 G$AX5043_PKTADDRMASK1NB$0$0 == 0x520a
                    520A   3099 _AX5043_PKTADDRMASK1NB	=	0x520a
                    5209   3100 G$AX5043_PKTADDRMASK2NB$0$0 == 0x5209
                    5209   3101 _AX5043_PKTADDRMASK2NB	=	0x5209
                    5208   3102 G$AX5043_PKTADDRMASK3NB$0$0 == 0x5208
                    5208   3103 _AX5043_PKTADDRMASK3NB	=	0x5208
                    5201   3104 G$AX5043_PKTLENCFGNB$0$0 == 0x5201
                    5201   3105 _AX5043_PKTLENCFGNB	=	0x5201
                    5202   3106 G$AX5043_PKTLENOFFSETNB$0$0 == 0x5202
                    5202   3107 _AX5043_PKTLENOFFSETNB	=	0x5202
                    5203   3108 G$AX5043_PKTMAXLENNB$0$0 == 0x5203
                    5203   3109 _AX5043_PKTMAXLENNB	=	0x5203
                    5118   3110 G$AX5043_RXPARAMCURSETNB$0$0 == 0x5118
                    5118   3111 _AX5043_RXPARAMCURSETNB	=	0x5118
                    5117   3112 G$AX5043_RXPARAMSETSNB$0$0 == 0x5117
                    5117   3113 _AX5043_RXPARAMSETSNB	=	0x5117
                    5124   3114 G$AX5043_TIMEGAIN0NB$0$0 == 0x5124
                    5124   3115 _AX5043_TIMEGAIN0NB	=	0x5124
                    5134   3116 G$AX5043_TIMEGAIN1NB$0$0 == 0x5134
                    5134   3117 _AX5043_TIMEGAIN1NB	=	0x5134
                    5144   3118 G$AX5043_TIMEGAIN2NB$0$0 == 0x5144
                    5144   3119 _AX5043_TIMEGAIN2NB	=	0x5144
                    5154   3120 G$AX5043_TIMEGAIN3NB$0$0 == 0x5154
                    5154   3121 _AX5043_TIMEGAIN3NB	=	0x5154
                    0000   3122 G$row$0$0==.
   0002                    3123 _row::
   0002                    3124 	.ds 1
                    0001   3125 G$column$0$0==.
   0003                    3126 _column::
   0003                    3127 	.ds 1
                           3128 ;--------------------------------------------------------
                           3129 ; absolute external ram data
                           3130 ;--------------------------------------------------------
                           3131 	.area XABS    (ABS,XDATA)
                           3132 ;--------------------------------------------------------
                           3133 ; external initialized ram data
                           3134 ;--------------------------------------------------------
                           3135 	.area XISEG   (XDATA)
                    0000   3136 G$cmd$0$0==.
   0439                    3137 _cmd::
   0439                    3138 	.ds 8
                           3139 	.area HOME    (CODE)
                           3140 	.area GSINIT0 (CODE)
                           3141 	.area GSINIT1 (CODE)
                           3142 	.area GSINIT2 (CODE)
                           3143 	.area GSINIT3 (CODE)
                           3144 	.area GSINIT4 (CODE)
                           3145 	.area GSINIT5 (CODE)
                           3146 	.area GSINIT  (CODE)
                           3147 	.area GSFINAL (CODE)
                           3148 	.area CSEG    (CODE)
                           3149 ;--------------------------------------------------------
                           3150 ; global & static initialisations
                           3151 ;--------------------------------------------------------
                           3152 	.area HOME    (CODE)
                           3153 	.area GSINIT  (CODE)
                           3154 	.area GSFINAL (CODE)
                           3155 	.area GSINIT  (CODE)
                    0000   3156 	C$display_com0.c$9$1$188 ==.
                           3157 ;	..\COMMON\display_com0.c:9: static const __code char *lcd_border=
   0126 75 08 36           3158 	mov	_lcd_border,#__str_0
   0129 75 09 51           3159 	mov	(_lcd_border + 1),#(__str_0 >> 8)
                           3160 ;--------------------------------------------------------
                           3161 ; Home
                           3162 ;--------------------------------------------------------
                           3163 	.area HOME    (CODE)
                           3164 	.area HOME    (CODE)
                           3165 ;--------------------------------------------------------
                           3166 ; code
                           3167 ;--------------------------------------------------------
                           3168 	.area CSEG    (CODE)
                           3169 ;------------------------------------------------------------
                           3170 ;Allocation info for local variables in function 'com0_portinit'
                           3171 ;------------------------------------------------------------
                    0000   3172 	G$com0_portinit$0$0 ==.
                    0000   3173 	C$display_com0.c$20$0$0 ==.
                           3174 ;	..\COMMON\display_com0.c:20: __reentrantb void com0_portinit(void) __reentrant
                           3175 ;	-----------------------------------------
                           3176 ;	 function com0_portinit
                           3177 ;	-----------------------------------------
   06E2                    3178 _com0_portinit:
                    0007   3179 	ar7 = 0x07
                    0006   3180 	ar6 = 0x06
                    0005   3181 	ar5 = 0x05
                    0004   3182 	ar4 = 0x04
                    0003   3183 	ar3 = 0x03
                    0002   3184 	ar2 = 0x02
                    0001   3185 	ar1 = 0x01
                    0000   3186 	ar0 = 0x00
                    0000   3187 	C$display_com0.c$22$1$173 ==.
                           3188 ;	..\COMMON\display_com0.c:22: PALTB |= 0x11;
   06E2 90 70 09           3189 	mov	dptr,#_PALTB
   06E5 E0                 3190 	movx	a,@dptr
   06E6 44 11              3191 	orl	a,#0x11
   06E8 F0                 3192 	movx	@dptr,a
                    0007   3193 	C$display_com0.c$23$1$173 ==.
                           3194 ;	..\COMMON\display_com0.c:23: DIRB |= (1<<0) | (1<<4);
   06E9 43 8A 11           3195 	orl	_DIRB,#0x11
                    000A   3196 	C$display_com0.c$24$1$173 ==.
                           3197 ;	..\COMMON\display_com0.c:24: DIRB &= (uint8_t)~(1<<5);
   06EC 53 8A DF           3198 	anl	_DIRB,#0xDF
                    000D   3199 	C$display_com0.c$25$1$173 ==.
                           3200 ;	..\COMMON\display_com0.c:25: PINSEL &= (uint8_t)~((1<<0) | (1<<1));
   06EF 90 70 0B           3201 	mov	dptr,#_PINSEL
   06F2 E0                 3202 	movx	a,@dptr
   06F3 54 FC              3203 	anl	a,#0xFC
   06F5 F0                 3204 	movx	@dptr,a
                    0014   3205 	C$display_com0.c$27$1$173 ==.
                           3206 ;	..\COMMON\display_com0.c:27: uart_timer0_baud(CLKSRC_SYSCLK, 115200, 20000000UL);
   06F6 E4                 3207 	clr	a
   06F7 F5 15              3208 	mov	_uart_timer0_baud_PARM_2,a
   06F9 75 16 C2           3209 	mov	(_uart_timer0_baud_PARM_2 + 1),#0xC2
   06FC 75 17 01           3210 	mov	(_uart_timer0_baud_PARM_2 + 2),#0x01
   06FF F5 18              3211 	mov	(_uart_timer0_baud_PARM_2 + 3),a
   0701 75 19 00           3212 	mov	_uart_timer0_baud_PARM_3,#0x00
   0704 75 1A 2D           3213 	mov	(_uart_timer0_baud_PARM_3 + 1),#0x2D
   0707 75 1B 31           3214 	mov	(_uart_timer0_baud_PARM_3 + 2),#0x31
   070A 75 1C 01           3215 	mov	(_uart_timer0_baud_PARM_3 + 3),#0x01
   070D 75 82 06           3216 	mov	dpl,#0x06
   0710 12 39 C2           3217 	lcall	_uart_timer0_baud
                    0031   3218 	C$display_com0.c$28$1$173 ==.
                           3219 ;	..\COMMON\display_com0.c:28: uart0_init(0, 8, 1);
   0713 75 2A 08           3220 	mov	_uart0_init_PARM_2,#0x08
   0716 75 2B 01           3221 	mov	_uart0_init_PARM_3,#0x01
   0719 75 82 00           3222 	mov	dpl,#0x00
   071C 12 48 BE           3223 	lcall	_uart0_init
                    003D   3224 	C$display_com0.c$29$1$173 ==.
                    003D   3225 	XG$com0_portinit$0$0 ==.
   071F 22                 3226 	ret
                           3227 ;------------------------------------------------------------
                           3228 ;Allocation info for local variables in function 'com0_init'
                           3229 ;------------------------------------------------------------
                    003E   3230 	G$com0_init$0$0 ==.
                    003E   3231 	C$display_com0.c$31$1$173 ==.
                           3232 ;	..\COMMON\display_com0.c:31: __reentrantb void com0_init(void) __reentrant
                           3233 ;	-----------------------------------------
                           3234 ;	 function com0_init
                           3235 ;	-----------------------------------------
   0720                    3236 _com0_init:
                    003E   3237 	C$display_com0.c$33$1$175 ==.
                           3238 ;	..\COMMON\display_com0.c:33: uart_timer0_baud(CLKSRC_SYSCLK, 115200, 20000000UL);
   0720 E4                 3239 	clr	a
   0721 F5 15              3240 	mov	_uart_timer0_baud_PARM_2,a
   0723 75 16 C2           3241 	mov	(_uart_timer0_baud_PARM_2 + 1),#0xC2
   0726 75 17 01           3242 	mov	(_uart_timer0_baud_PARM_2 + 2),#0x01
   0729 F5 18              3243 	mov	(_uart_timer0_baud_PARM_2 + 3),a
   072B 75 19 00           3244 	mov	_uart_timer0_baud_PARM_3,#0x00
   072E 75 1A 2D           3245 	mov	(_uart_timer0_baud_PARM_3 + 1),#0x2D
   0731 75 1B 31           3246 	mov	(_uart_timer0_baud_PARM_3 + 2),#0x31
   0734 75 1C 01           3247 	mov	(_uart_timer0_baud_PARM_3 + 3),#0x01
   0737 75 82 06           3248 	mov	dpl,#0x06
   073A 12 39 C2           3249 	lcall	_uart_timer0_baud
                    005B   3250 	C$display_com0.c$34$1$175 ==.
                           3251 ;	..\COMMON\display_com0.c:34: uart0_init(0, 8, 1);
   073D 75 2A 08           3252 	mov	_uart0_init_PARM_2,#0x08
   0740 75 2B 01           3253 	mov	_uart0_init_PARM_3,#0x01
   0743 75 82 00           3254 	mov	dpl,#0x00
   0746 12 48 BE           3255 	lcall	_uart0_init
                    0067   3256 	C$display_com0.c$36$1$175 ==.
                           3257 ;	..\COMMON\display_com0.c:36: com0_writestr(lcd_border);
   0749 AD 08              3258 	mov	r5,_lcd_border
   074B AE 09              3259 	mov	r6,(_lcd_border + 1)
   074D 7F 80              3260 	mov	r7,#0x80
   074F 8D 82              3261 	mov	dpl,r5
   0751 8E 83              3262 	mov	dph,r6
   0753 8F F0              3263 	mov	b,r7
   0755 12 07 DC           3264 	lcall	_com0_writestr
                    0076   3265 	C$display_com0.c$37$1$175 ==.
                           3266 ;	..\COMMON\display_com0.c:37: com0_setpos(0);
   0758 75 82 00           3267 	mov	dpl,#0x00
   075B 12 07 99           3268 	lcall	_com0_setpos
                    007C   3269 	C$display_com0.c$38$1$175 ==.
                    007C   3270 	XG$com0_init$0$0 ==.
   075E 22                 3271 	ret
                           3272 ;------------------------------------------------------------
                           3273 ;Allocation info for local variables in function 'com0_writestr2'
                           3274 ;------------------------------------------------------------
                           3275 ;msg                       Allocated to registers r5 r6 r7 
                           3276 ;------------------------------------------------------------
                    007D   3277 	G$com0_writestr2$0$0 ==.
                    007D   3278 	C$display_com0.c$40$1$175 ==.
                           3279 ;	..\COMMON\display_com0.c:40: __reentrantb void com0_writestr2(const char* msg)  __reentrant
                           3280 ;	-----------------------------------------
                           3281 ;	 function com0_writestr2
                           3282 ;	-----------------------------------------
   075F                    3283 _com0_writestr2:
                    007D   3284 	C$display_com0.c$42$1$177 ==.
                           3285 ;	..\COMMON\display_com0.c:42: uart0_writestr(msg);
   075F 12 4B 3C           3286 	lcall	_uart0_writestr
                    0080   3287 	C$display_com0.c$43$1$177 ==.
                    0080   3288 	XG$com0_writestr2$0$0 ==.
   0762 22                 3289 	ret
                           3290 ;------------------------------------------------------------
                           3291 ;Allocation info for local variables in function 'com0_newline'
                           3292 ;------------------------------------------------------------
                    0081   3293 	G$com0_newline$0$0 ==.
                    0081   3294 	C$display_com0.c$45$1$177 ==.
                           3295 ;	..\COMMON\display_com0.c:45: __reentrantb void com0_newline(void) __reentrant
                           3296 ;	-----------------------------------------
                           3297 ;	 function com0_newline
                           3298 ;	-----------------------------------------
   0763                    3299 _com0_newline:
                    0081   3300 	C$display_com0.c$47$1$179 ==.
                           3301 ;	..\COMMON\display_com0.c:47: if (row < 3)
   0763 90 00 02           3302 	mov	dptr,#_row
   0766 E0                 3303 	movx	a,@dptr
   0767 FF                 3304 	mov	r7,a
   0768 BF 03 00           3305 	cjne	r7,#0x03,00107$
   076B                    3306 00107$:
   076B 50 06              3307 	jnc	00102$
                    008B   3308 	C$display_com0.c$48$1$179 ==.
                           3309 ;	..\COMMON\display_com0.c:48: ++row;
   076D 90 00 02           3310 	mov	dptr,#_row
   0770 EF                 3311 	mov	a,r7
   0771 04                 3312 	inc	a
   0772 F0                 3313 	movx	@dptr,a
   0773                    3314 00102$:
                    0091   3315 	C$display_com0.c$49$1$179 ==.
                           3316 ;	..\COMMON\display_com0.c:49: column = 2;
   0773 90 00 03           3317 	mov	dptr,#_column
   0776 74 02              3318 	mov	a,#0x02
   0778 F0                 3319 	movx	@dptr,a
                    0097   3320 	C$display_com0.c$50$1$179 ==.
                           3321 ;	..\COMMON\display_com0.c:50: cmd[2] = row + '0';
   0779 90 00 02           3322 	mov	dptr,#_row
   077C E0                 3323 	movx	a,@dptr
   077D 24 30              3324 	add	a,#0x30
   077F 90 04 3B           3325 	mov	dptr,#(_cmd + 0x0002)
   0782 F0                 3326 	movx	@dptr,a
                    00A1   3327 	C$display_com0.c$51$1$179 ==.
                           3328 ;	..\COMMON\display_com0.c:51: cmd[4] = '0';
   0783 90 04 3D           3329 	mov	dptr,#(_cmd + 0x0004)
   0786 74 30              3330 	mov	a,#0x30
   0788 F0                 3331 	movx	@dptr,a
                    00A7   3332 	C$display_com0.c$52$1$179 ==.
                           3333 ;	..\COMMON\display_com0.c:52: cmd[5] = '2';
   0789 90 04 3E           3334 	mov	dptr,#(_cmd + 0x0005)
   078C 74 32              3335 	mov	a,#0x32
   078E F0                 3336 	movx	@dptr,a
                    00AD   3337 	C$display_com0.c$53$1$179 ==.
                           3338 ;	..\COMMON\display_com0.c:53: uart0_writestr(cmd);
   078F 90 04 39           3339 	mov	dptr,#_cmd
   0792 75 F0 00           3340 	mov	b,#0x00
   0795 12 4B 3C           3341 	lcall	_uart0_writestr
                    00B6   3342 	C$display_com0.c$54$1$179 ==.
                    00B6   3343 	XG$com0_newline$0$0 ==.
   0798 22                 3344 	ret
                           3345 ;------------------------------------------------------------
                           3346 ;Allocation info for local variables in function 'com0_setpos'
                           3347 ;------------------------------------------------------------
                           3348 ;v                         Allocated to registers r7 
                           3349 ;------------------------------------------------------------
                    00B7   3350 	G$com0_setpos$0$0 ==.
                    00B7   3351 	C$display_com0.c$56$1$179 ==.
                           3352 ;	..\COMMON\display_com0.c:56: __reentrantb void com0_setpos(uint8_t v) __reentrant
                           3353 ;	-----------------------------------------
                           3354 ;	 function com0_setpos
                           3355 ;	-----------------------------------------
   0799                    3356 _com0_setpos:
                    00B7   3357 	C$display_com0.c$60$1$181 ==.
                           3358 ;	..\COMMON\display_com0.c:60: row = (v >> 6) + 2;
   0799 E5 82              3359 	mov	a,dpl
   079B FF                 3360 	mov	r7,a
   079C 23                 3361 	rl	a
   079D 23                 3362 	rl	a
   079E 54 03              3363 	anl	a,#0x03
   07A0 FE                 3364 	mov	r6,a
   07A1 0E                 3365 	inc	r6
   07A2 0E                 3366 	inc	r6
   07A3 90 00 02           3367 	mov	dptr,#_row
   07A6 EE                 3368 	mov	a,r6
   07A7 F0                 3369 	movx	@dptr,a
                    00C6   3370 	C$display_com0.c$61$1$181 ==.
                           3371 ;	..\COMMON\display_com0.c:61: column = (v & 0x3F) + 2;
   07A8 74 3F              3372 	mov	a,#0x3F
   07AA 5F                 3373 	anl	a,r7
   07AB 24 02              3374 	add	a,#0x02
   07AD FF                 3375 	mov	r7,a
   07AE 90 00 03           3376 	mov	dptr,#_column
   07B1 F0                 3377 	movx	@dptr,a
                    00D0   3378 	C$display_com0.c$62$1$181 ==.
                           3379 ;	..\COMMON\display_com0.c:62: cmd[2] = row + '0';
   07B2 74 30              3380 	mov	a,#0x30
   07B4 2E                 3381 	add	a,r6
   07B5 90 04 3B           3382 	mov	dptr,#(_cmd + 0x0002)
   07B8 F0                 3383 	movx	@dptr,a
                    00D7   3384 	C$display_com0.c$63$1$181 ==.
                           3385 ;	..\COMMON\display_com0.c:63: cmd[4] = column / 10 + '0';
   07B9 75 F0 0A           3386 	mov	b,#0x0A
   07BC EF                 3387 	mov	a,r7
   07BD 84                 3388 	div	ab
   07BE 24 30              3389 	add	a,#0x30
   07C0 90 04 3D           3390 	mov	dptr,#(_cmd + 0x0004)
   07C3 F0                 3391 	movx	@dptr,a
                    00E2   3392 	C$display_com0.c$64$1$181 ==.
                           3393 ;	..\COMMON\display_com0.c:64: cmd[5] = column % 10 + '0';
   07C4 75 F0 0A           3394 	mov	b,#0x0A
   07C7 EF                 3395 	mov	a,r7
   07C8 84                 3396 	div	ab
   07C9 AF F0              3397 	mov	r7,b
   07CB 74 30              3398 	mov	a,#0x30
   07CD 2F                 3399 	add	a,r7
   07CE 90 04 3E           3400 	mov	dptr,#(_cmd + 0x0005)
   07D1 F0                 3401 	movx	@dptr,a
                    00F0   3402 	C$display_com0.c$65$1$181 ==.
                           3403 ;	..\COMMON\display_com0.c:65: uart0_writestr(cmd);
   07D2 90 04 39           3404 	mov	dptr,#_cmd
   07D5 75 F0 00           3405 	mov	b,#0x00
   07D8 12 4B 3C           3406 	lcall	_uart0_writestr
                    00F9   3407 	C$display_com0.c$66$1$181 ==.
                    00F9   3408 	XG$com0_setpos$0$0 ==.
   07DB 22                 3409 	ret
                           3410 ;------------------------------------------------------------
                           3411 ;Allocation info for local variables in function 'com0_writestr'
                           3412 ;------------------------------------------------------------
                           3413 ;msg                       Allocated to registers 
                           3414 ;ch                        Allocated to registers r4 
                           3415 ;------------------------------------------------------------
                    00FA   3416 	G$com0_writestr$0$0 ==.
                    00FA   3417 	C$display_com0.c$68$1$181 ==.
                           3418 ;	..\COMMON\display_com0.c:68: __reentrantb void com0_writestr(const char *msg) __reentrant
                           3419 ;	-----------------------------------------
                           3420 ;	 function com0_writestr
                           3421 ;	-----------------------------------------
   07DC                    3422 _com0_writestr:
   07DC AD 82              3423 	mov	r5,dpl
   07DE AE 83              3424 	mov	r6,dph
   07E0 AF F0              3425 	mov	r7,b
   07E2                    3426 00104$:
                    0100   3427 	C$display_com0.c$71$2$184 ==.
                           3428 ;	..\COMMON\display_com0.c:71: char ch = *msg;
   07E2 8D 82              3429 	mov	dpl,r5
   07E4 8E 83              3430 	mov	dph,r6
   07E6 8F F0              3431 	mov	b,r7
   07E8 12 4F 68           3432 	lcall	__gptrget
                    0109   3433 	C$display_com0.c$72$2$184 ==.
                           3434 ;	..\COMMON\display_com0.c:72: if (!ch)
   07EB FC                 3435 	mov	r4,a
   07EC 60 18              3436 	jz	00106$
                    010C   3437 	C$display_com0.c$74$2$184 ==.
                           3438 ;	..\COMMON\display_com0.c:74: com0_tx(ch);
   07EE 8C 82              3439 	mov	dpl,r4
   07F0 C0 07              3440 	push	ar7
   07F2 C0 06              3441 	push	ar6
   07F4 C0 05              3442 	push	ar5
   07F6 12 08 07           3443 	lcall	_com0_tx
   07F9 D0 05              3444 	pop	ar5
   07FB D0 06              3445 	pop	ar6
   07FD D0 07              3446 	pop	ar7
                    011D   3447 	C$display_com0.c$75$2$184 ==.
                           3448 ;	..\COMMON\display_com0.c:75: msg++;
   07FF 0D                 3449 	inc	r5
   0800 BD 00 DF           3450 	cjne	r5,#0x00,00104$
   0803 0E                 3451 	inc	r6
   0804 80 DC              3452 	sjmp	00104$
   0806                    3453 00106$:
                    0124   3454 	C$display_com0.c$78$1$183 ==.
                    0124   3455 	XG$com0_writestr$0$0 ==.
   0806 22                 3456 	ret
                           3457 ;------------------------------------------------------------
                           3458 ;Allocation info for local variables in function 'com0_tx'
                           3459 ;------------------------------------------------------------
                           3460 ;val                       Allocated to registers r7 
                           3461 ;------------------------------------------------------------
                    0125   3462 	G$com0_tx$0$0 ==.
                    0125   3463 	C$display_com0.c$80$1$183 ==.
                           3464 ;	..\COMMON\display_com0.c:80: __reentrantb void com0_tx(uint8_t val)  __reentrant
                           3465 ;	-----------------------------------------
                           3466 ;	 function com0_tx
                           3467 ;	-----------------------------------------
   0807                    3468 _com0_tx:
   0807 AF 82              3469 	mov	r7,dpl
                    0127   3470 	C$display_com0.c$82$1$186 ==.
                           3471 ;	..\COMMON\display_com0.c:82: if (val == '\n')
   0809 BF 0A 05           3472 	cjne	r7,#0x0A,00102$
                    012A   3473 	C$display_com0.c$83$1$186 ==.
                           3474 ;	..\COMMON\display_com0.c:83: com0_newline();
   080C 12 07 63           3475 	lcall	_com0_newline
   080F 80 05              3476 	sjmp	00104$
   0811                    3477 00102$:
                    012F   3478 	C$display_com0.c$85$1$186 ==.
                           3479 ;	..\COMMON\display_com0.c:85: uart0_tx(val);
   0811 8F 82              3480 	mov	dpl,r7
   0813 12 44 7F           3481 	lcall	_uart0_tx
   0816                    3482 00104$:
                    0134   3483 	C$display_com0.c$86$1$186 ==.
                    0134   3484 	XG$com0_tx$0$0 ==.
   0816 22                 3485 	ret
                           3486 ;------------------------------------------------------------
                           3487 ;Allocation info for local variables in function 'com0_clear'
                           3488 ;------------------------------------------------------------
                           3489 ;len                       Allocated to stack - _bp -3
                           3490 ;pos                       Allocated to registers r7 
                           3491 ;------------------------------------------------------------
                    0135   3492 	G$com0_clear$0$0 ==.
                    0135   3493 	C$display_com0.c$88$1$186 ==.
                           3494 ;	..\COMMON\display_com0.c:88: __reentrantb void com0_clear(uint8_t pos, uint8_t len) __reentrant
                           3495 ;	-----------------------------------------
                           3496 ;	 function com0_clear
                           3497 ;	-----------------------------------------
   0817                    3498 _com0_clear:
   0817 C0 1F              3499 	push	_bp
   0819 85 81 1F           3500 	mov	_bp,sp
                    013A   3501 	C$display_com0.c$90$1$188 ==.
                           3502 ;	..\COMMON\display_com0.c:90: com0_setpos(pos);
   081C 12 07 99           3503 	lcall	_com0_setpos
                    013D   3504 	C$display_com0.c$91$1$188 ==.
                           3505 ;	..\COMMON\display_com0.c:91: if (!len)
   081F E5 1F              3506 	mov	a,_bp
   0821 24 FD              3507 	add	a,#0xfd
   0823 F8                 3508 	mov	r0,a
   0824 E6                 3509 	mov	a,@r0
   0825 70 02              3510 	jnz	00109$
                    0145   3511 	C$display_com0.c$92$1$188 ==.
                           3512 ;	..\COMMON\display_com0.c:92: return;
                    0145   3513 	C$display_com0.c$93$1$188 ==.
                           3514 ;	..\COMMON\display_com0.c:93: do {
   0827 80 13              3515 	sjmp	00106$
   0829                    3516 00109$:
   0829 E5 1F              3517 	mov	a,_bp
   082B 24 FD              3518 	add	a,#0xfd
   082D F8                 3519 	mov	r0,a
   082E 86 07              3520 	mov	ar7,@r0
   0830                    3521 00103$:
                    014E   3522 	C$display_com0.c$94$2$189 ==.
                           3523 ;	..\COMMON\display_com0.c:94: com0_tx(' ');
   0830 75 82 20           3524 	mov	dpl,#0x20
   0833 C0 07              3525 	push	ar7
   0835 12 08 07           3526 	lcall	_com0_tx
   0838 D0 07              3527 	pop	ar7
                    0158   3528 	C$display_com0.c$95$1$188 ==.
                           3529 ;	..\COMMON\display_com0.c:95: } while (--len);
   083A DF F4              3530 	djnz	r7,00103$
   083C                    3531 00106$:
   083C D0 1F              3532 	pop	_bp
                    015C   3533 	C$display_com0.c$96$1$188 ==.
                    015C   3534 	XG$com0_clear$0$0 ==.
   083E 22                 3535 	ret
                           3536 	.area CSEG    (CODE)
                           3537 	.area CONST   (CODE)
                    0000   3538 Fdisplay_com0$_str_0$0$0 == .
   5136                    3539 __str_0:
   5136 1B                 3540 	.db 0x1B
   5137 5B 30 3B 38 3B 34  3541 	.ascii "[0;8;44;30m"
        34 3B 33 30 6D
   5142 1B                 3542 	.db 0x1B
   5143 5B 31 3B 31 66 2A  3543 	.ascii "[1;1f******************"
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A
   515A 1B                 3544 	.db 0x1B
   515B 5B 32 3B 31 66 2A  3545 	.ascii "[2;1f*                *"
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 2A
   5172 1B                 3546 	.db 0x1B
   5173 5B 33 3B 31 66 2A  3547 	.ascii "[3;1f*                *"
        20 20 20 20 20 20
        20 20 20 20 20 20
        20 20 20 20 2A
   518A 1B                 3548 	.db 0x1B
   518B 5B 34 3B 31 66 2A  3549 	.ascii "[4;1f******************"
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A 2A
        2A 2A 2A 2A 2A
   51A2 1B                 3550 	.db 0x1B
   51A3 5B 35 3B 31 66     3551 	.ascii "[5;1f"
   51A8 1B                 3552 	.db 0x1B
   51A9 5B 33 37 6D        3553 	.ascii "[37m"
   51AD 1B                 3554 	.db 0x1B
   51AE 5B 3F 32 35 6C     3555 	.ascii "[?25l"
   51B3 00                 3556 	.db 0x00
                           3557 	.area XINIT   (CODE)
                    0000   3558 Fdisplay_com0$__xinit_cmd$0$0 == .
   54C8                    3559 __xinit__cmd:
   54C8 1B                 3560 	.db #0x1B	; 27
   54C9 5B                 3561 	.db #0x5B	; 91
   54CA FF                 3562 	.db #0xFF	; 255
   54CB 3B                 3563 	.db #0x3B	; 59
   54CC FF                 3564 	.db #0xFF	; 255
   54CD FF                 3565 	.db #0xFF	; 255
   54CE 66                 3566 	.db #0x66	; 102	'f'
   54CF 00                 3567 	.db #0x00	; 0
                           3568 	.area CABS    (ABS,CODE)
