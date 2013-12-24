;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.2.0 #8008 (Jul  6 2012) (MINGW32)
; This file was generated Mon Dec 23 14:38:17 2013
;--------------------------------------------------------
	.module misc
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _lcd2_writestr
	.globl _lcd2_setpos
	.globl _lcd2_wait_txdone
	.globl _wtimer_remove
	.globl _wtimer1_addrelative
	.globl _wtimer_runcallbacks
	.globl _wtimer_idle
	.globl _enter_sleep
	.globl _PORTC_7
	.globl _PORTC_6
	.globl _PORTC_5
	.globl _PORTC_4
	.globl _PORTC_3
	.globl _PORTC_2
	.globl _PORTC_1
	.globl _PORTC_0
	.globl _PORTB_7
	.globl _PORTB_6
	.globl _PORTB_5
	.globl _PORTB_4
	.globl _PORTB_3
	.globl _PORTB_2
	.globl _PORTB_1
	.globl _PORTB_0
	.globl _PORTA_7
	.globl _PORTA_6
	.globl _PORTA_5
	.globl _PORTA_4
	.globl _PORTA_3
	.globl _PORTA_2
	.globl _PORTA_1
	.globl _PORTA_0
	.globl _PINC_7
	.globl _PINC_6
	.globl _PINC_5
	.globl _PINC_4
	.globl _PINC_3
	.globl _PINC_2
	.globl _PINC_1
	.globl _PINC_0
	.globl _PINB_7
	.globl _PINB_6
	.globl _PINB_5
	.globl _PINB_4
	.globl _PINB_3
	.globl _PINB_2
	.globl _PINB_1
	.globl _PINB_0
	.globl _PINA_7
	.globl _PINA_6
	.globl _PINA_5
	.globl _PINA_4
	.globl _PINA_3
	.globl _PINA_2
	.globl _PINA_1
	.globl _PINA_0
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _IP_7
	.globl _IP_6
	.globl _IP_5
	.globl _IP_4
	.globl _IP_3
	.globl _IP_2
	.globl _IP_1
	.globl _IP_0
	.globl _EA
	.globl _IE_7
	.globl _IE_6
	.globl _IE_5
	.globl _IE_4
	.globl _IE_3
	.globl _IE_2
	.globl _IE_1
	.globl _IE_0
	.globl _EIP_7
	.globl _EIP_6
	.globl _EIP_5
	.globl _EIP_4
	.globl _EIP_3
	.globl _EIP_2
	.globl _EIP_1
	.globl _EIP_0
	.globl _EIE_7
	.globl _EIE_6
	.globl _EIE_5
	.globl _EIE_4
	.globl _EIE_3
	.globl _EIE_2
	.globl _EIE_1
	.globl _EIE_0
	.globl _E2IP_7
	.globl _E2IP_6
	.globl _E2IP_5
	.globl _E2IP_4
	.globl _E2IP_3
	.globl _E2IP_2
	.globl _E2IP_1
	.globl _E2IP_0
	.globl _E2IE_7
	.globl _E2IE_6
	.globl _E2IE_5
	.globl _E2IE_4
	.globl _E2IE_3
	.globl _E2IE_2
	.globl _E2IE_1
	.globl _E2IE_0
	.globl _B_7
	.globl _B_6
	.globl _B_5
	.globl _B_4
	.globl _B_3
	.globl _B_2
	.globl _B_1
	.globl _B_0
	.globl _ACC_7
	.globl _ACC_6
	.globl _ACC_5
	.globl _ACC_4
	.globl _ACC_3
	.globl _ACC_2
	.globl _ACC_1
	.globl _ACC_0
	.globl _WTSTAT
	.globl _WTIRQEN
	.globl _WTEVTD
	.globl _WTEVTD1
	.globl _WTEVTD0
	.globl _WTEVTC
	.globl _WTEVTC1
	.globl _WTEVTC0
	.globl _WTEVTB
	.globl _WTEVTB1
	.globl _WTEVTB0
	.globl _WTEVTA
	.globl _WTEVTA1
	.globl _WTEVTA0
	.globl _WTCNTR1
	.globl _WTCNTB
	.globl _WTCNTB1
	.globl _WTCNTB0
	.globl _WTCNTA
	.globl _WTCNTA1
	.globl _WTCNTA0
	.globl _WTCFGB
	.globl _WTCFGA
	.globl _WDTRESET
	.globl _WDTCFG
	.globl _U1STATUS
	.globl _U1SHREG
	.globl _U1MODE
	.globl _U1CTRL
	.globl _U0STATUS
	.globl _U0SHREG
	.globl _U0MODE
	.globl _U0CTRL
	.globl _T2STATUS
	.globl _T2PERIOD
	.globl _T2PERIOD1
	.globl _T2PERIOD0
	.globl _T2MODE
	.globl _T2CNT
	.globl _T2CNT1
	.globl _T2CNT0
	.globl _T2CLKSRC
	.globl _T1STATUS
	.globl _T1PERIOD
	.globl _T1PERIOD1
	.globl _T1PERIOD0
	.globl _T1MODE
	.globl _T1CNT
	.globl _T1CNT1
	.globl _T1CNT0
	.globl _T1CLKSRC
	.globl _T0STATUS
	.globl _T0PERIOD
	.globl _T0PERIOD1
	.globl _T0PERIOD0
	.globl _T0MODE
	.globl _T0CNT
	.globl _T0CNT1
	.globl _T0CNT0
	.globl _T0CLKSRC
	.globl _SPSTATUS
	.globl _SPSHREG
	.globl _SPMODE
	.globl _SPCLKSRC
	.globl _RADIOSTAT
	.globl _RADIOSTAT1
	.globl _RADIOSTAT0
	.globl _RADIODATA
	.globl _RADIODATA3
	.globl _RADIODATA2
	.globl _RADIODATA1
	.globl _RADIODATA0
	.globl _RADIOADDR
	.globl _RADIOADDR1
	.globl _RADIOADDR0
	.globl _RADIOACC
	.globl _OC1STATUS
	.globl _OC1PIN
	.globl _OC1MODE
	.globl _OC1COMP
	.globl _OC1COMP1
	.globl _OC1COMP0
	.globl _OC0STATUS
	.globl _OC0PIN
	.globl _OC0MODE
	.globl _OC0COMP
	.globl _OC0COMP1
	.globl _OC0COMP0
	.globl _NVSTATUS
	.globl _NVKEY
	.globl _NVDATA
	.globl _NVDATA1
	.globl _NVDATA0
	.globl _NVADDR
	.globl _NVADDR1
	.globl _NVADDR0
	.globl _IC1STATUS
	.globl _IC1MODE
	.globl _IC1CAPT
	.globl _IC1CAPT1
	.globl _IC1CAPT0
	.globl _IC0STATUS
	.globl _IC0MODE
	.globl _IC0CAPT
	.globl _IC0CAPT1
	.globl _IC0CAPT0
	.globl _PORTR
	.globl _PORTC
	.globl _PORTB
	.globl _PORTA
	.globl _PINR
	.globl _PINC
	.globl _PINB
	.globl _PINA
	.globl _DIRR
	.globl _DIRC
	.globl _DIRB
	.globl _DIRA
	.globl _DBGLNKSTAT
	.globl _DBGLNKBUF
	.globl _CODECONFIG
	.globl _CLKSTAT
	.globl _CLKCON
	.globl _ANALOGCOMP
	.globl _ADCCONV
	.globl _ADCCLKSRC
	.globl _ADCCH3CONFIG
	.globl _ADCCH2CONFIG
	.globl _ADCCH1CONFIG
	.globl _ADCCH0CONFIG
	.globl __XPAGE
	.globl _XPAGE
	.globl _SP
	.globl _PSW
	.globl _PCON
	.globl _IP
	.globl _IE
	.globl _EIP
	.globl _EIE
	.globl _E2IP
	.globl _E2IE
	.globl _DPS
	.globl _DPTR1
	.globl _DPTR0
	.globl _DPL1
	.globl _DPL
	.globl _DPH1
	.globl _DPH
	.globl _B
	.globl _ACC
	.globl _XWTSTAT
	.globl _XWTIRQEN
	.globl _XWTEVTD
	.globl _XWTEVTD1
	.globl _XWTEVTD0
	.globl _XWTEVTC
	.globl _XWTEVTC1
	.globl _XWTEVTC0
	.globl _XWTEVTB
	.globl _XWTEVTB1
	.globl _XWTEVTB0
	.globl _XWTEVTA
	.globl _XWTEVTA1
	.globl _XWTEVTA0
	.globl _XWTCNTR1
	.globl _XWTCNTB
	.globl _XWTCNTB1
	.globl _XWTCNTB0
	.globl _XWTCNTA
	.globl _XWTCNTA1
	.globl _XWTCNTA0
	.globl _XWTCFGB
	.globl _XWTCFGA
	.globl _XWDTRESET
	.globl _XWDTCFG
	.globl _XU1STATUS
	.globl _XU1SHREG
	.globl _XU1MODE
	.globl _XU1CTRL
	.globl _XU0STATUS
	.globl _XU0SHREG
	.globl _XU0MODE
	.globl _XU0CTRL
	.globl _XT2STATUS
	.globl _XT2PERIOD
	.globl _XT2PERIOD1
	.globl _XT2PERIOD0
	.globl _XT2MODE
	.globl _XT2CNT
	.globl _XT2CNT1
	.globl _XT2CNT0
	.globl _XT2CLKSRC
	.globl _XT1STATUS
	.globl _XT1PERIOD
	.globl _XT1PERIOD1
	.globl _XT1PERIOD0
	.globl _XT1MODE
	.globl _XT1CNT
	.globl _XT1CNT1
	.globl _XT1CNT0
	.globl _XT1CLKSRC
	.globl _XT0STATUS
	.globl _XT0PERIOD
	.globl _XT0PERIOD1
	.globl _XT0PERIOD0
	.globl _XT0MODE
	.globl _XT0CNT
	.globl _XT0CNT1
	.globl _XT0CNT0
	.globl _XT0CLKSRC
	.globl _XSPSTATUS
	.globl _XSPSHREG
	.globl _XSPMODE
	.globl _XSPCLKSRC
	.globl _XRADIOSTAT
	.globl _XRADIOSTAT1
	.globl _XRADIOSTAT0
	.globl _XRADIODATA3
	.globl _XRADIODATA2
	.globl _XRADIODATA1
	.globl _XRADIODATA0
	.globl _XRADIOADDR1
	.globl _XRADIOADDR0
	.globl _XRADIOACC
	.globl _XOC1STATUS
	.globl _XOC1PIN
	.globl _XOC1MODE
	.globl _XOC1COMP
	.globl _XOC1COMP1
	.globl _XOC1COMP0
	.globl _XOC0STATUS
	.globl _XOC0PIN
	.globl _XOC0MODE
	.globl _XOC0COMP
	.globl _XOC0COMP1
	.globl _XOC0COMP0
	.globl _XNVSTATUS
	.globl _XNVKEY
	.globl _XNVDATA
	.globl _XNVDATA1
	.globl _XNVDATA0
	.globl _XNVADDR
	.globl _XNVADDR1
	.globl _XNVADDR0
	.globl _XIC1STATUS
	.globl _XIC1MODE
	.globl _XIC1CAPT
	.globl _XIC1CAPT1
	.globl _XIC1CAPT0
	.globl _XIC0STATUS
	.globl _XIC0MODE
	.globl _XIC0CAPT
	.globl _XIC0CAPT1
	.globl _XIC0CAPT0
	.globl _XPORTR
	.globl _XPORTC
	.globl _XPORTB
	.globl _XPORTA
	.globl _XPINR
	.globl _XPINC
	.globl _XPINB
	.globl _XPINA
	.globl _XDIRR
	.globl _XDIRC
	.globl _XDIRB
	.globl _XDIRA
	.globl _XDBGLNKSTAT
	.globl _XDBGLNKBUF
	.globl _XCODECONFIG
	.globl _XCLKSTAT
	.globl _XCLKCON
	.globl _XANALOGCOMP
	.globl _XADCCONV
	.globl _XADCCLKSRC
	.globl _XADCCH3CONFIG
	.globl _XADCCH2CONFIG
	.globl _XADCCH1CONFIG
	.globl _XADCCH0CONFIG
	.globl _XPCON
	.globl _XIP
	.globl _XIE
	.globl _XDPTR1
	.globl _XDPTR0
	.globl _XTALREADY
	.globl _XTALOSC
	.globl _XTALAMPL
	.globl _SILICONREV
	.globl _SCRATCH3
	.globl _SCRATCH2
	.globl _SCRATCH1
	.globl _SCRATCH0
	.globl _RADIOMUX
	.globl _RADIOFSTATADDR
	.globl _RADIOFSTATADDR1
	.globl _RADIOFSTATADDR0
	.globl _RADIOFDATAADDR
	.globl _RADIOFDATAADDR1
	.globl _RADIOFDATAADDR0
	.globl _OSCRUN
	.globl _OSCREADY
	.globl _OSCFORCERUN
	.globl _OSCCALIB
	.globl _MISCCTRL
	.globl _LPXOSCGM
	.globl _LPOSCREF
	.globl _LPOSCREF1
	.globl _LPOSCREF0
	.globl _LPOSCPER
	.globl _LPOSCPER1
	.globl _LPOSCPER0
	.globl _LPOSCKFILT
	.globl _LPOSCKFILT1
	.globl _LPOSCKFILT0
	.globl _LPOSCFREQ
	.globl _LPOSCFREQ1
	.globl _LPOSCFREQ0
	.globl _LPOSCCONFIG
	.globl _PINSEL
	.globl _PINCHGC
	.globl _PINCHGB
	.globl _PINCHGA
	.globl _PALTC
	.globl _PALTB
	.globl _PALTA
	.globl _INTCHGC
	.globl _INTCHGB
	.globl _INTCHGA
	.globl _EXTIRQ
	.globl _GPIOENABLE
	.globl _ANALOGA
	.globl _FRCOSCREF
	.globl _FRCOSCREF1
	.globl _FRCOSCREF0
	.globl _FRCOSCPER
	.globl _FRCOSCPER1
	.globl _FRCOSCPER0
	.globl _FRCOSCKFILT
	.globl _FRCOSCKFILT1
	.globl _FRCOSCKFILT0
	.globl _FRCOSCFREQ
	.globl _FRCOSCFREQ1
	.globl _FRCOSCFREQ0
	.globl _FRCOSCCTRL
	.globl _FRCOSCCONFIG
	.globl _DMA1CONFIG
	.globl _DMA1ADDR
	.globl _DMA1ADDR1
	.globl _DMA1ADDR0
	.globl _DMA0CONFIG
	.globl _DMA0ADDR
	.globl _DMA0ADDR1
	.globl _DMA0ADDR0
	.globl _ADCTUNE2
	.globl _ADCTUNE1
	.globl _ADCTUNE0
	.globl _ADCCH3VAL
	.globl _ADCCH3VAL1
	.globl _ADCCH3VAL0
	.globl _ADCCH2VAL
	.globl _ADCCH2VAL1
	.globl _ADCCH2VAL0
	.globl _ADCCH1VAL
	.globl _ADCCH1VAL1
	.globl _ADCCH1VAL0
	.globl _ADCCH0VAL
	.globl _ADCCH0VAL1
	.globl _ADCCH0VAL0
	.globl _stop_with_error
	.globl _display_radio_error
	.globl _delay_ms
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_ACC	=	0x00e0
_B	=	0x00f0
_DPH	=	0x0083
_DPH1	=	0x0085
_DPL	=	0x0082
_DPL1	=	0x0084
_DPTR0	=	0x8382
_DPTR1	=	0x8584
_DPS	=	0x0086
_E2IE	=	0x00a0
_E2IP	=	0x00c0
_EIE	=	0x0098
_EIP	=	0x00b0
_IE	=	0x00a8
_IP	=	0x00b8
_PCON	=	0x0087
_PSW	=	0x00d0
_SP	=	0x0081
_XPAGE	=	0x00d9
__XPAGE	=	0x00d9
_ADCCH0CONFIG	=	0x00ca
_ADCCH1CONFIG	=	0x00cb
_ADCCH2CONFIG	=	0x00d2
_ADCCH3CONFIG	=	0x00d3
_ADCCLKSRC	=	0x00d1
_ADCCONV	=	0x00c9
_ANALOGCOMP	=	0x00e1
_CLKCON	=	0x00c6
_CLKSTAT	=	0x00c7
_CODECONFIG	=	0x0097
_DBGLNKBUF	=	0x00e3
_DBGLNKSTAT	=	0x00e2
_DIRA	=	0x0089
_DIRB	=	0x008a
_DIRC	=	0x008b
_DIRR	=	0x008e
_PINA	=	0x00c8
_PINB	=	0x00e8
_PINC	=	0x00f8
_PINR	=	0x008d
_PORTA	=	0x0080
_PORTB	=	0x0088
_PORTC	=	0x0090
_PORTR	=	0x008c
_IC0CAPT0	=	0x00ce
_IC0CAPT1	=	0x00cf
_IC0CAPT	=	0xcfce
_IC0MODE	=	0x00cc
_IC0STATUS	=	0x00cd
_IC1CAPT0	=	0x00d6
_IC1CAPT1	=	0x00d7
_IC1CAPT	=	0xd7d6
_IC1MODE	=	0x00d4
_IC1STATUS	=	0x00d5
_NVADDR0	=	0x0092
_NVADDR1	=	0x0093
_NVADDR	=	0x9392
_NVDATA0	=	0x0094
_NVDATA1	=	0x0095
_NVDATA	=	0x9594
_NVKEY	=	0x0096
_NVSTATUS	=	0x0091
_OC0COMP0	=	0x00bc
_OC0COMP1	=	0x00bd
_OC0COMP	=	0xbdbc
_OC0MODE	=	0x00b9
_OC0PIN	=	0x00ba
_OC0STATUS	=	0x00bb
_OC1COMP0	=	0x00c4
_OC1COMP1	=	0x00c5
_OC1COMP	=	0xc5c4
_OC1MODE	=	0x00c1
_OC1PIN	=	0x00c2
_OC1STATUS	=	0x00c3
_RADIOACC	=	0x00b1
_RADIOADDR0	=	0x00b3
_RADIOADDR1	=	0x00b2
_RADIOADDR	=	0xb2b3
_RADIODATA0	=	0x00b7
_RADIODATA1	=	0x00b6
_RADIODATA2	=	0x00b5
_RADIODATA3	=	0x00b4
_RADIODATA	=	0xb4b5b6b7
_RADIOSTAT0	=	0x00be
_RADIOSTAT1	=	0x00bf
_RADIOSTAT	=	0xbfbe
_SPCLKSRC	=	0x00df
_SPMODE	=	0x00dc
_SPSHREG	=	0x00de
_SPSTATUS	=	0x00dd
_T0CLKSRC	=	0x009a
_T0CNT0	=	0x009c
_T0CNT1	=	0x009d
_T0CNT	=	0x9d9c
_T0MODE	=	0x0099
_T0PERIOD0	=	0x009e
_T0PERIOD1	=	0x009f
_T0PERIOD	=	0x9f9e
_T0STATUS	=	0x009b
_T1CLKSRC	=	0x00a2
_T1CNT0	=	0x00a4
_T1CNT1	=	0x00a5
_T1CNT	=	0xa5a4
_T1MODE	=	0x00a1
_T1PERIOD0	=	0x00a6
_T1PERIOD1	=	0x00a7
_T1PERIOD	=	0xa7a6
_T1STATUS	=	0x00a3
_T2CLKSRC	=	0x00aa
_T2CNT0	=	0x00ac
_T2CNT1	=	0x00ad
_T2CNT	=	0xadac
_T2MODE	=	0x00a9
_T2PERIOD0	=	0x00ae
_T2PERIOD1	=	0x00af
_T2PERIOD	=	0xafae
_T2STATUS	=	0x00ab
_U0CTRL	=	0x00e4
_U0MODE	=	0x00e7
_U0SHREG	=	0x00e6
_U0STATUS	=	0x00e5
_U1CTRL	=	0x00ec
_U1MODE	=	0x00ef
_U1SHREG	=	0x00ee
_U1STATUS	=	0x00ed
_WDTCFG	=	0x00da
_WDTRESET	=	0x00db
_WTCFGA	=	0x00f1
_WTCFGB	=	0x00f9
_WTCNTA0	=	0x00f2
_WTCNTA1	=	0x00f3
_WTCNTA	=	0xf3f2
_WTCNTB0	=	0x00fa
_WTCNTB1	=	0x00fb
_WTCNTB	=	0xfbfa
_WTCNTR1	=	0x00eb
_WTEVTA0	=	0x00f4
_WTEVTA1	=	0x00f5
_WTEVTA	=	0xf5f4
_WTEVTB0	=	0x00f6
_WTEVTB1	=	0x00f7
_WTEVTB	=	0xf7f6
_WTEVTC0	=	0x00fc
_WTEVTC1	=	0x00fd
_WTEVTC	=	0xfdfc
_WTEVTD0	=	0x00fe
_WTEVTD1	=	0x00ff
_WTEVTD	=	0xfffe
_WTIRQEN	=	0x00e9
_WTSTAT	=	0x00ea
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_ACC_0	=	0x00e0
_ACC_1	=	0x00e1
_ACC_2	=	0x00e2
_ACC_3	=	0x00e3
_ACC_4	=	0x00e4
_ACC_5	=	0x00e5
_ACC_6	=	0x00e6
_ACC_7	=	0x00e7
_B_0	=	0x00f0
_B_1	=	0x00f1
_B_2	=	0x00f2
_B_3	=	0x00f3
_B_4	=	0x00f4
_B_5	=	0x00f5
_B_6	=	0x00f6
_B_7	=	0x00f7
_E2IE_0	=	0x00a0
_E2IE_1	=	0x00a1
_E2IE_2	=	0x00a2
_E2IE_3	=	0x00a3
_E2IE_4	=	0x00a4
_E2IE_5	=	0x00a5
_E2IE_6	=	0x00a6
_E2IE_7	=	0x00a7
_E2IP_0	=	0x00c0
_E2IP_1	=	0x00c1
_E2IP_2	=	0x00c2
_E2IP_3	=	0x00c3
_E2IP_4	=	0x00c4
_E2IP_5	=	0x00c5
_E2IP_6	=	0x00c6
_E2IP_7	=	0x00c7
_EIE_0	=	0x0098
_EIE_1	=	0x0099
_EIE_2	=	0x009a
_EIE_3	=	0x009b
_EIE_4	=	0x009c
_EIE_5	=	0x009d
_EIE_6	=	0x009e
_EIE_7	=	0x009f
_EIP_0	=	0x00b0
_EIP_1	=	0x00b1
_EIP_2	=	0x00b2
_EIP_3	=	0x00b3
_EIP_4	=	0x00b4
_EIP_5	=	0x00b5
_EIP_6	=	0x00b6
_EIP_7	=	0x00b7
_IE_0	=	0x00a8
_IE_1	=	0x00a9
_IE_2	=	0x00aa
_IE_3	=	0x00ab
_IE_4	=	0x00ac
_IE_5	=	0x00ad
_IE_6	=	0x00ae
_IE_7	=	0x00af
_EA	=	0x00af
_IP_0	=	0x00b8
_IP_1	=	0x00b9
_IP_2	=	0x00ba
_IP_3	=	0x00bb
_IP_4	=	0x00bc
_IP_5	=	0x00bd
_IP_6	=	0x00be
_IP_7	=	0x00bf
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_PINA_0	=	0x00c8
_PINA_1	=	0x00c9
_PINA_2	=	0x00ca
_PINA_3	=	0x00cb
_PINA_4	=	0x00cc
_PINA_5	=	0x00cd
_PINA_6	=	0x00ce
_PINA_7	=	0x00cf
_PINB_0	=	0x00e8
_PINB_1	=	0x00e9
_PINB_2	=	0x00ea
_PINB_3	=	0x00eb
_PINB_4	=	0x00ec
_PINB_5	=	0x00ed
_PINB_6	=	0x00ee
_PINB_7	=	0x00ef
_PINC_0	=	0x00f8
_PINC_1	=	0x00f9
_PINC_2	=	0x00fa
_PINC_3	=	0x00fb
_PINC_4	=	0x00fc
_PINC_5	=	0x00fd
_PINC_6	=	0x00fe
_PINC_7	=	0x00ff
_PORTA_0	=	0x0080
_PORTA_1	=	0x0081
_PORTA_2	=	0x0082
_PORTA_3	=	0x0083
_PORTA_4	=	0x0084
_PORTA_5	=	0x0085
_PORTA_6	=	0x0086
_PORTA_7	=	0x0087
_PORTB_0	=	0x0088
_PORTB_1	=	0x0089
_PORTB_2	=	0x008a
_PORTB_3	=	0x008b
_PORTB_4	=	0x008c
_PORTB_5	=	0x008d
_PORTB_6	=	0x008e
_PORTB_7	=	0x008f
_PORTC_0	=	0x0090
_PORTC_1	=	0x0091
_PORTC_2	=	0x0092
_PORTC_3	=	0x0093
_PORTC_4	=	0x0094
_PORTC_5	=	0x0095
_PORTC_6	=	0x0096
_PORTC_7	=	0x0097
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
_ADCCH0VAL0	=	0x7020
_ADCCH0VAL1	=	0x7021
_ADCCH0VAL	=	0x7020
_ADCCH1VAL0	=	0x7022
_ADCCH1VAL1	=	0x7023
_ADCCH1VAL	=	0x7022
_ADCCH2VAL0	=	0x7024
_ADCCH2VAL1	=	0x7025
_ADCCH2VAL	=	0x7024
_ADCCH3VAL0	=	0x7026
_ADCCH3VAL1	=	0x7027
_ADCCH3VAL	=	0x7026
_ADCTUNE0	=	0x7028
_ADCTUNE1	=	0x7029
_ADCTUNE2	=	0x702a
_DMA0ADDR0	=	0x7010
_DMA0ADDR1	=	0x7011
_DMA0ADDR	=	0x7010
_DMA0CONFIG	=	0x7014
_DMA1ADDR0	=	0x7012
_DMA1ADDR1	=	0x7013
_DMA1ADDR	=	0x7012
_DMA1CONFIG	=	0x7015
_FRCOSCCONFIG	=	0x7070
_FRCOSCCTRL	=	0x7071
_FRCOSCFREQ0	=	0x7076
_FRCOSCFREQ1	=	0x7077
_FRCOSCFREQ	=	0x7076
_FRCOSCKFILT0	=	0x7072
_FRCOSCKFILT1	=	0x7073
_FRCOSCKFILT	=	0x7072
_FRCOSCPER0	=	0x7078
_FRCOSCPER1	=	0x7079
_FRCOSCPER	=	0x7078
_FRCOSCREF0	=	0x7074
_FRCOSCREF1	=	0x7075
_FRCOSCREF	=	0x7074
_ANALOGA	=	0x7007
_GPIOENABLE	=	0x700c
_EXTIRQ	=	0x7003
_INTCHGA	=	0x7000
_INTCHGB	=	0x7001
_INTCHGC	=	0x7002
_PALTA	=	0x7008
_PALTB	=	0x7009
_PALTC	=	0x700a
_PINCHGA	=	0x7004
_PINCHGB	=	0x7005
_PINCHGC	=	0x7006
_PINSEL	=	0x700b
_LPOSCCONFIG	=	0x7060
_LPOSCFREQ0	=	0x7066
_LPOSCFREQ1	=	0x7067
_LPOSCFREQ	=	0x7066
_LPOSCKFILT0	=	0x7062
_LPOSCKFILT1	=	0x7063
_LPOSCKFILT	=	0x7062
_LPOSCPER0	=	0x7068
_LPOSCPER1	=	0x7069
_LPOSCPER	=	0x7068
_LPOSCREF0	=	0x7064
_LPOSCREF1	=	0x7065
_LPOSCREF	=	0x7064
_LPXOSCGM	=	0x7054
_MISCCTRL	=	0x7f01
_OSCCALIB	=	0x7053
_OSCFORCERUN	=	0x7050
_OSCREADY	=	0x7052
_OSCRUN	=	0x7051
_RADIOFDATAADDR0	=	0x7040
_RADIOFDATAADDR1	=	0x7041
_RADIOFDATAADDR	=	0x7040
_RADIOFSTATADDR0	=	0x7042
_RADIOFSTATADDR1	=	0x7043
_RADIOFSTATADDR	=	0x7042
_RADIOMUX	=	0x7044
_SCRATCH0	=	0x7084
_SCRATCH1	=	0x7085
_SCRATCH2	=	0x7086
_SCRATCH3	=	0x7087
_SILICONREV	=	0x7f00
_XTALAMPL	=	0x7f19
_XTALOSC	=	0x7f18
_XTALREADY	=	0x7f1a
_XDPTR0	=	0x3f82
_XDPTR1	=	0x3f84
_XIE	=	0x3fa8
_XIP	=	0x3fb8
_XPCON	=	0x3f87
_XADCCH0CONFIG	=	0x3fca
_XADCCH1CONFIG	=	0x3fcb
_XADCCH2CONFIG	=	0x3fd2
_XADCCH3CONFIG	=	0x3fd3
_XADCCLKSRC	=	0x3fd1
_XADCCONV	=	0x3fc9
_XANALOGCOMP	=	0x3fe1
_XCLKCON	=	0x3fc6
_XCLKSTAT	=	0x3fc7
_XCODECONFIG	=	0x3f97
_XDBGLNKBUF	=	0x3fe3
_XDBGLNKSTAT	=	0x3fe2
_XDIRA	=	0x3f89
_XDIRB	=	0x3f8a
_XDIRC	=	0x3f8b
_XDIRR	=	0x3f8e
_XPINA	=	0x3fc8
_XPINB	=	0x3fe8
_XPINC	=	0x3ff8
_XPINR	=	0x3f8d
_XPORTA	=	0x3f80
_XPORTB	=	0x3f88
_XPORTC	=	0x3f90
_XPORTR	=	0x3f8c
_XIC0CAPT0	=	0x3fce
_XIC0CAPT1	=	0x3fcf
_XIC0CAPT	=	0x3fce
_XIC0MODE	=	0x3fcc
_XIC0STATUS	=	0x3fcd
_XIC1CAPT0	=	0x3fd6
_XIC1CAPT1	=	0x3fd7
_XIC1CAPT	=	0x3fd6
_XIC1MODE	=	0x3fd4
_XIC1STATUS	=	0x3fd5
_XNVADDR0	=	0x3f92
_XNVADDR1	=	0x3f93
_XNVADDR	=	0x3f92
_XNVDATA0	=	0x3f94
_XNVDATA1	=	0x3f95
_XNVDATA	=	0x3f94
_XNVKEY	=	0x3f96
_XNVSTATUS	=	0x3f91
_XOC0COMP0	=	0x3fbc
_XOC0COMP1	=	0x3fbd
_XOC0COMP	=	0x3fbc
_XOC0MODE	=	0x3fb9
_XOC0PIN	=	0x3fba
_XOC0STATUS	=	0x3fbb
_XOC1COMP0	=	0x3fc4
_XOC1COMP1	=	0x3fc5
_XOC1COMP	=	0x3fc4
_XOC1MODE	=	0x3fc1
_XOC1PIN	=	0x3fc2
_XOC1STATUS	=	0x3fc3
_XRADIOACC	=	0x3fb1
_XRADIOADDR0	=	0x3fb3
_XRADIOADDR1	=	0x3fb2
_XRADIODATA0	=	0x3fb7
_XRADIODATA1	=	0x3fb6
_XRADIODATA2	=	0x3fb5
_XRADIODATA3	=	0x3fb4
_XRADIOSTAT0	=	0x3fbe
_XRADIOSTAT1	=	0x3fbf
_XRADIOSTAT	=	0x3fbe
_XSPCLKSRC	=	0x3fdf
_XSPMODE	=	0x3fdc
_XSPSHREG	=	0x3fde
_XSPSTATUS	=	0x3fdd
_XT0CLKSRC	=	0x3f9a
_XT0CNT0	=	0x3f9c
_XT0CNT1	=	0x3f9d
_XT0CNT	=	0x3f9c
_XT0MODE	=	0x3f99
_XT0PERIOD0	=	0x3f9e
_XT0PERIOD1	=	0x3f9f
_XT0PERIOD	=	0x3f9e
_XT0STATUS	=	0x3f9b
_XT1CLKSRC	=	0x3fa2
_XT1CNT0	=	0x3fa4
_XT1CNT1	=	0x3fa5
_XT1CNT	=	0x3fa4
_XT1MODE	=	0x3fa1
_XT1PERIOD0	=	0x3fa6
_XT1PERIOD1	=	0x3fa7
_XT1PERIOD	=	0x3fa6
_XT1STATUS	=	0x3fa3
_XT2CLKSRC	=	0x3faa
_XT2CNT0	=	0x3fac
_XT2CNT1	=	0x3fad
_XT2CNT	=	0x3fac
_XT2MODE	=	0x3fa9
_XT2PERIOD0	=	0x3fae
_XT2PERIOD1	=	0x3faf
_XT2PERIOD	=	0x3fae
_XT2STATUS	=	0x3fab
_XU0CTRL	=	0x3fe4
_XU0MODE	=	0x3fe7
_XU0SHREG	=	0x3fe6
_XU0STATUS	=	0x3fe5
_XU1CTRL	=	0x3fec
_XU1MODE	=	0x3fef
_XU1SHREG	=	0x3fee
_XU1STATUS	=	0x3fed
_XWDTCFG	=	0x3fda
_XWDTRESET	=	0x3fdb
_XWTCFGA	=	0x3ff1
_XWTCFGB	=	0x3ff9
_XWTCNTA0	=	0x3ff2
_XWTCNTA1	=	0x3ff3
_XWTCNTA	=	0x3ff2
_XWTCNTB0	=	0x3ffa
_XWTCNTB1	=	0x3ffb
_XWTCNTB	=	0x3ffa
_XWTCNTR1	=	0x3feb
_XWTEVTA0	=	0x3ff4
_XWTEVTA1	=	0x3ff5
_XWTEVTA	=	0x3ff4
_XWTEVTB0	=	0x3ff6
_XWTEVTB1	=	0x3ff7
_XWTEVTB	=	0x3ff6
_XWTEVTC0	=	0x3ffc
_XWTEVTC1	=	0x3ffd
_XWTEVTC	=	0x3ffc
_XWTEVTD0	=	0x3ffe
_XWTEVTD1	=	0x3fff
_XWTEVTD	=	0x3ffe
_XWTIRQEN	=	0x3fe9
_XWTSTAT	=	0x3fea
_delaymstimer:
	.ds 8
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'stop_with_error'
;------------------------------------------------------------
;str                       Allocated to registers r5 r6 r7 
;------------------------------------------------------------
;	..\COMMON\misc.c:38: void stop_with_error(uint8_t *str)
;	-----------------------------------------
;	 function stop_with_error
;	-----------------------------------------
_stop_with_error:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	r5,dpl
	mov	r6,dph
	mov	r7,b
;	..\COMMON\misc.c:40: lcd2_setpos(0);
	mov	dpl,#0x00
	push	ar7
	push	ar6
	push	ar5
	lcall	_lcd2_setpos
	pop	ar5
	pop	ar6
	pop	ar7
;	..\COMMON\misc.c:41: lcd2_writestr(str);
	mov	dpl,r5
	mov	dph,r6
	mov	b,r7
	lcall	_lcd2_writestr
;	..\COMMON\misc.c:42: lcd2_wait_txdone();
	lcall	_lcd2_wait_txdone
;	..\COMMON\misc.c:43: IE = EIE = E2IE = 0;
	mov	_E2IE,#0x00
	mov	_EIE,#0x00
	mov	_IE,#0x00
;	..\COMMON\misc.c:44: enter_sleep();
	ljmp	_enter_sleep
;------------------------------------------------------------
;Allocation info for local variables in function 'display_radio_error'
;------------------------------------------------------------
;err                       Allocated to registers r7 
;p                         Allocated to registers r5 r6 
;------------------------------------------------------------
;	..\COMMON\misc.c:47: void display_radio_error(uint8_t err)
;	-----------------------------------------
;	 function display_radio_error
;	-----------------------------------------
_display_radio_error:
	mov	r7,dpl
;	..\COMMON\misc.c:63: const struct errtbl __code *p = errtbl;
	mov	r5,#_display_radio_error_errtbl_1_101
	mov	r6,#(_display_radio_error_errtbl_1_101 >> 8)
;	..\COMMON\misc.c:64: do {
	mov	ar3,r5
	mov	ar4,r6
00103$:
;	..\COMMON\misc.c:65: if (p->errcode == err) {
	mov	dpl,r3
	mov	dph,r4
	clr	a
	movc	a,@a+dptr
	mov	r2,a
	cjne	a,ar7,00102$
;	..\COMMON\misc.c:66: lcd2_setpos(0);
	mov	dpl,#0x00
	push	ar6
	push	ar5
	lcall	_lcd2_setpos
	pop	ar5
	pop	ar6
;	..\COMMON\misc.c:67: lcd2_writestr(p->msg);
	mov	dpl,r5
	mov	dph,r6
	inc	dptr
	clr	a
	movc	a,@a+dptr
	mov	r1,a
	inc	dptr
	clr	a
	movc	a,@a+dptr
	mov	r0,a
	mov	r2,#0x80
	mov	dpl,r1
	mov	dph,r0
	mov	b,r2
;	..\COMMON\misc.c:68: return;
	ljmp	_lcd2_writestr
00102$:
;	..\COMMON\misc.c:70: ++p;
	mov	a,#0x03
	add	a,r3
	mov	r3,a
	clr	a
	addc	a,r4
	mov	r4,a
	mov	ar5,r3
	mov	ar6,r4
;	..\COMMON\misc.c:71: } while (p->errcode != AXRADIO_ERR_NOERROR);
	mov	dpl,r3
	mov	dph,r4
	clr	a
	movc	a,@a+dptr
	jnz	00103$
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'delayms_callback'
;------------------------------------------------------------
;desc                      Allocated to registers 
;------------------------------------------------------------
;	..\COMMON\misc.c:76: static void delayms_callback(struct wtimer_desc __xdata *desc)
;	-----------------------------------------
;	 function delayms_callback
;	-----------------------------------------
_delayms_callback:
;	..\COMMON\misc.c:79: delaymstimer.handler = 0;
	mov	dptr,#(_delaymstimer + 0x0002)
	clr	a
	movx	@dptr,a
	inc	dptr
	movx	@dptr,a
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'delay_ms'
;------------------------------------------------------------
;ms                        Allocated to registers r6 r7 
;x                         Allocated to stack - _bp +1
;------------------------------------------------------------
;	..\COMMON\misc.c:82: __reentrantb void delay_ms(uint16_t ms) __reentrant
;	-----------------------------------------
;	 function delay_ms
;	-----------------------------------------
_delay_ms:
	push	_bp
	mov	a,sp
	mov	_bp,a
	add	a,#0x04
	mov	sp,a
	mov	r6,dpl
	mov	r7,dph
;	..\COMMON\misc.c:86: wtimer_remove(&delaymstimer);
	mov	dptr,#_delaymstimer
	push	ar7
	push	ar6
	lcall	_wtimer_remove
	pop	ar6
	pop	ar7
;	..\COMMON\misc.c:87: x = ms;
	mov	r0,_bp
	inc	r0
	mov	@r0,ar6
	inc	r0
	mov	@r0,ar7
	inc	r0
	mov	@r0,#0x00
	inc	r0
	mov	@r0,#0x00
;	..\COMMON\misc.c:88: delaymstimer.time = ms >> 1;
	mov	a,r7
	clr	c
	rrc	a
	xch	a,r6
	rrc	a
	xch	a,r6
	mov	r7,a
	mov	ar4,r6
	mov	ar5,r7
	mov	r6,#0x00
	mov	r7,#0x00
	mov	dptr,#(_delaymstimer + 0x0004)
	mov	a,r4
	movx	@dptr,a
	inc	dptr
	mov	a,r5
	movx	@dptr,a
	inc	dptr
	mov	a,r6
	movx	@dptr,a
	inc	dptr
	mov	a,r7
	movx	@dptr,a
;	..\COMMON\misc.c:89: x <<= 3;
	mov	r0,_bp
	inc	r0
	inc	r0
	inc	r0
	inc	r0
	mov	a,@r0
	dec	r0
	swap	a
	rr	a
	anl	a,#0xF8
	xch	a,@r0
	swap	a
	rr	a
	xch	a,@r0
	xrl	a,@r0
	xch	a,@r0
	anl	a,#0xF8
	xch	a,@r0
	xrl	a,@r0
	inc	r0
	mov	@r0,a
	dec	r0
	dec	r0
	mov	a,@r0
	swap	a
	rr	a
	anl	a,#0x07
	inc	r0
	orl	a,@r0
	mov	@r0,a
	dec	r0
	mov	a,@r0
	dec	r0
	swap	a
	rr	a
	anl	a,#0xF8
	xch	a,@r0
	swap	a
	rr	a
	xch	a,@r0
	xrl	a,@r0
	xch	a,@r0
	anl	a,#0xF8
	xch	a,@r0
	xrl	a,@r0
	inc	r0
	mov	@r0,a
;	..\COMMON\misc.c:90: delaymstimer.time -= x;
	mov	r0,_bp
	inc	r0
	mov	a,r4
	clr	c
	subb	a,@r0
	mov	r4,a
	mov	a,r5
	inc	r0
	subb	a,@r0
	mov	r5,a
	mov	a,r6
	inc	r0
	subb	a,@r0
	mov	r6,a
	mov	a,r7
	inc	r0
	subb	a,@r0
	mov	r7,a
	mov	dptr,#(_delaymstimer + 0x0004)
	mov	a,r4
	movx	@dptr,a
	inc	dptr
	mov	a,r5
	movx	@dptr,a
	inc	dptr
	mov	a,r6
	movx	@dptr,a
	inc	dptr
	mov	a,r7
	movx	@dptr,a
;	..\COMMON\misc.c:91: x <<= 3;
	mov	r0,_bp
	inc	r0
	inc	r0
	inc	r0
	inc	r0
	mov	a,@r0
	dec	r0
	swap	a
	rr	a
	anl	a,#0xF8
	xch	a,@r0
	swap	a
	rr	a
	xch	a,@r0
	xrl	a,@r0
	xch	a,@r0
	anl	a,#0xF8
	xch	a,@r0
	xrl	a,@r0
	inc	r0
	mov	@r0,a
	dec	r0
	dec	r0
	mov	a,@r0
	swap	a
	rr	a
	anl	a,#0x07
	inc	r0
	orl	a,@r0
	mov	@r0,a
	dec	r0
	mov	a,@r0
	dec	r0
	swap	a
	rr	a
	anl	a,#0xF8
	xch	a,@r0
	swap	a
	rr	a
	xch	a,@r0
	xrl	a,@r0
	xch	a,@r0
	anl	a,#0xF8
	xch	a,@r0
	xrl	a,@r0
	inc	r0
	mov	@r0,a
;	..\COMMON\misc.c:92: delaymstimer.time += x;
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,r4
	mov	r4,a
	inc	r0
	mov	a,@r0
	addc	a,r5
	mov	r5,a
	inc	r0
	mov	a,@r0
	addc	a,r6
	mov	r6,a
	inc	r0
	mov	a,@r0
	addc	a,r7
	mov	r7,a
	mov	dptr,#(_delaymstimer + 0x0004)
	mov	a,r4
	movx	@dptr,a
	inc	dptr
	mov	a,r5
	movx	@dptr,a
	inc	dptr
	mov	a,r6
	movx	@dptr,a
	inc	dptr
	mov	a,r7
	movx	@dptr,a
;	..\COMMON\misc.c:93: x <<= 2;
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,acc
	mov	@r0,a
	inc	r0
	mov	a,@r0
	rlc	a
	mov	@r0,a
	inc	r0
	mov	a,@r0
	rlc	a
	mov	@r0,a
	inc	r0
	mov	a,@r0
	rlc	a
	mov	@r0,a
	dec	r0
	dec	r0
	dec	r0
	mov	a,@r0
	add	a,acc
	mov	@r0,a
	inc	r0
	mov	a,@r0
	rlc	a
	mov	@r0,a
	inc	r0
	mov	a,@r0
	rlc	a
	mov	@r0,a
	inc	r0
	mov	a,@r0
	rlc	a
	mov	@r0,a
;	..\COMMON\misc.c:94: delaymstimer.time += x;
	mov	r0,_bp
	inc	r0
	mov	a,@r0
	add	a,r4
	mov	r4,a
	inc	r0
	mov	a,@r0
	addc	a,r5
	mov	r5,a
	inc	r0
	mov	a,@r0
	addc	a,r6
	mov	r6,a
	inc	r0
	mov	a,@r0
	addc	a,r7
	mov	r7,a
	mov	dptr,#(_delaymstimer + 0x0004)
	mov	a,r4
	movx	@dptr,a
	inc	dptr
	mov	a,r5
	movx	@dptr,a
	inc	dptr
	mov	a,r6
	movx	@dptr,a
	inc	dptr
	mov	a,r7
	movx	@dptr,a
;	..\COMMON\misc.c:95: delaymstimer.handler = delayms_callback;
	mov	dptr,#(_delaymstimer + 0x0002)
	mov	a,#_delayms_callback
	movx	@dptr,a
	inc	dptr
	mov	a,#(_delayms_callback >> 8)
	movx	@dptr,a
;	..\COMMON\misc.c:96: wtimer1_addrelative(&delaymstimer);
	mov	dptr,#_delaymstimer
	lcall	_wtimer1_addrelative
;	..\COMMON\misc.c:97: do {
00101$:
;	..\COMMON\misc.c:98: wtimer_runcallbacks();
	lcall	_wtimer_runcallbacks
;	..\COMMON\misc.c:99: wtimer_idle(WTFLAG_CANSTANDBY);
	mov	dpl,#0x02
	lcall	_wtimer_idle
;	..\COMMON\misc.c:100: } while (delaymstimer.handler);
	mov	dptr,#(_delaymstimer + 0x0002)
	movx	a,@dptr
	mov	r6,a
	inc	dptr
	movx	a,@dptr
	mov	r7,a
	orl	a,r6
	jnz	00101$
	mov	sp,_bp
	pop	_bp
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
_display_radio_error_errtbl_1_101:
	.db #0x01	; 1
	.byte __str_0,(__str_0 >> 8)
	.db #0x02	; 2
	.byte __str_1,(__str_1 >> 8)
	.db #0x03	; 3
	.byte __str_2,(__str_2 >> 8)
	.db #0x04	; 4
	.byte __str_3,(__str_3 >> 8)
	.db #0x05	; 5
	.byte __str_4,(__str_4 >> 8)
	.db #0x06	; 6
	.byte __str_5,(__str_5 >> 8)
	.db #0x07	; 7
	.byte __str_6,(__str_6 >> 8)
	.db #0x00	; 0
	.byte #0x00,#0x00
__str_0:
	.ascii "E: not supported"
	.db 0x00
__str_1:
	.ascii "E: busy"
	.db 0x00
__str_2:
	.ascii "E: timeout"
	.db 0x00
__str_3:
	.ascii "E: invalid"
	.db 0x00
__str_4:
	.ascii "E: no chip found"
	.db 0x00
__str_5:
	.ascii "E: ranging"
	.db 0x00
__str_6:
	.ascii "E: lock lost"
	.db 0x00
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
