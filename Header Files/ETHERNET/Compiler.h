﻿/*********************************************************************
 *
 *                  Compiler specific defs.
 *
 *********************************************************************
 * FileName:        Compiler.h
 * Dependencies:    None
 * Processor:       PIC18
 * Complier:        MCC18 v1.00.50 or higher
 *                  HITECH PICC-18 V8.10PL1 or higher
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * The software supplied herewith by Microchip Technology Incorporated
 * (the �Company�) for its PICmicro� Microcontroller is intended and
 * supplied to you, the Company�s customer, for use solely and
 * exclusively on Microchip PICmicro Microcontroller products. The
 * software is owned by the Company and/or its supplier, and is
 * protected under applicable copyright laws. All rights are reserved.
 * Any use in violation of the foregoing restrictions may subject the
 * user to criminal sanctions under applicable laws, as well as to
 * civil liability for the breach of the terms and conditions of this
 * license.
 *
 * THIS SOFTWARE IS PROVIDED IN AN �AS IS� CONDITION. NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 * TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 * IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 *
 * Author               Date    Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Nilesh Rajbharti     11/14/01 Original        (Rev 1.0)
 * Nilesh Rajbharti     2/9/02  Cleanup
 * Nilesh Rajbharti     5/22/02 Rev 2.0 (See version.log for detail)
 ********************************************************************/
#ifndef COMPILER_H
#define COMPILER_H

#if defined(HI_TECH_C)
    #if defined(_MPC_)
        #define HITECH_C18
    #else
        #error "Unknown part is selected."
    #endif
#else
    #if !defined(_WIN32)
        #define MCHP_C18
    #endif
#endif

#if defined(MCHP_C18) && defined(HITECH_C18)
#error "Invalid Compiler selection."
#endif

#if !defined(MCHP_C18) && !defined(HITECH_C18) && !defined(_WIN32)
#error "Compiler not supported."
#endif

#if defined(MCHP_C18)
    #include <p18cxxx.h>    // p18cxxx.h must have current processor
                            // defined.
#endif

#if defined(HITECH_C18)
    #include <pic18.h>
    #include <stdio.h>
#endif

#include <stdlib.h>

/*
 * Clock frequency value.
 * This value is used to calculate Tick Counter value
 */
#define CLOCK_FREQ                      (16000000)      // Hz



#if defined(MCHP_C18)
    #define ROM                 rom

    #define LATA2               LATAbits.LATA2
    #define LATA3               LATAbits.LATA3
    #define LATA4               LATAbits.LATA4
    #define PORTB_RB5           PORTBbits.RB5

    #define PORTA_RA2           PORTAbits.RA2
    #define PORTA_RA4           PORTAbits.RA4
    #define PORTA_RA5           PORTAbits.RA5
    #define TRISA_RA2           TRISAbits.TRISA2
    #define TRISA_RA5           TRISAbits.TRISA5

    #define LATC2               LATCbits.LATC2
    #define LATC5               LATCbits.LATC5
    #define TRISC_RC7           TRISCbits.TRISC7
    #define TRISC_RC6           TRISCbits.TRISC6
    #define TRISC_RC5           TRISCbits.TRISC5
    #define TRISC_RC4           TRISCbits.TRISC4
    #define TRISC_RC3           TRISCbits.TRISC3
    #define TRISC_RC2           TRISCbits.TRISC2
    #define TRISC_RC1           TRISCbits.TRISC1
    #define TRISC_RC0           TRISCbits.TRISC0

    #define PORTC_RC7           PORTCbits.RC7
    #define PORTC_RC6           PORTCbits.RC6
    #define PORTC_RC5           PORTCbits.RC5
    #define PORTC_RC4           PORTCbits.RC4
    #define PORTC_RC3           PORTCbits.RC3
    #define PORTC_RC2           PORTCbits.RC2
    #define PORTC_RC1           PORTCbits.RC1
    #define PORTC_RC0           PORTCbits.RC0

    #define TRISD_RD7           TRISDbits.TRISD7
    #define TRISD_RD6           TRISDbits.TRISD6
    #define TRISD_RD5           TRISDbits.TRISD5
    #define TRISD_RD4           TRISDbits.TRISD4
    #define TRISD_RD3           TRISDbits.TRISD3
    #define TRISD_RD2           TRISDbits.TRISD2
    #define TRISD_RD1           TRISDbits.TRISD1
    #define TRISD_RD0           TRISDbits.TRISD0

    #define PORTD_RD7           PORTDbits.RD7
    #define PORTD_RD6           PORTDbits.RD6
    #define PORTD_RD5           PORTDbits.RD5
    #define PORTD_RD4           PORTDbits.RD4
    #define PORTD_RD3           PORTDbits.RD3
    #define PORTD_RD2           PORTDbits.RD2
    #define PORTD_RD1           PORTDbits.RD1
    #define PORTD_RD0           PORTDbits.RD0

    #define PORTE_RE2           PORTEbits.RE2
    #define PORTE_RE1           PORTEbits.RE1
    #define PORTE_RE0           PORTEbits.RE0

    #define INTCON_TMR0IE       INTCONbits.TMR0IE
    #define INTCON_TMR0IF       INTCONbits.TMR0IF
    #define INTCON2_RBPU        INTCON2bits.RBPU

    #define T0CON_TMR0ON        T0CONbits.TMR0ON

    #define SSPCON1_WCOL        SSPCON1bits.WCOL

    #define SSPCON2_SEN         SSPCON2bits.SEN
    #define SSPCON2_ACKSTAT     SSPCON2bits.ACKSTAT
    #define SSPCON2_RSEN        SSPCON2bits.RSEN
    #define SSPCON2_RCEN        SSPCON2bits.RCEN
    #define SSPCON2_ACKEN       SSPCON2bits.ACKEN
    #define SSPCON2_PEN         SSPCON2bits.PEN
    #define SSPCON2_ACKDT       SSPCON2bits.ACKDT

    #define SSPSTAT_R_W         SSPSTATbits.R_W
    #define SSPSTAT_BF          SSPSTATbits.BF

    #define INTCON_GIEH         INTCONbits.GIEH
    #define INTCON_GIEL         INTCONbits.GIEL

    #define PIR2_BCLIF          PIR2bits.BCLIF

    #define PIE1_TXIE           PIE1bits.TXIE
    #define PIE1_RCIE           PIE1bits.RCIE

    #define PIR1_RCIF           PIR1bits.RCIF
    #define PIR1_TXIF           PIR1bits.TXIF


    #define TXSTA_TRMT          TXSTAbits.TRMT
    #define TXSTA_BRGH          TXSTAbits.BRGH

    #define RCSTA_CREN          RCSTAbits.CREN

    #define ADCON0_GO           ADCON0bits.GO
    #define ADCON0_ADON         ADCON0bits.ADON

    #define RCON_POR            RCONbits.POR
	#define __attribute__(a)	//!!!!!!!!!!!!!!rajout de cette ligne aussi non erreur sur "__attribute__((__packed__))"
								//MPLAB C18 ne compile pas "__attribute__((__packed__))"
#endif

#if defined(HITECH_C18)
    #define ROM                 const

    #define memcmppgm2ram(a, b, c)      memcmp(a, b, c)
    #define memcpypgm2ram(a, b, c)      mymemcpy(a, b, c)
    #define itoa(val, string)           sprintf(string, "%u", val)

    extern void *mymemcpy(void * d1, const void * s1, unsigned char n);
    extern char *strupr(char*);

    /* Fix for HITECH C */
    #define TXREG       _TXREG
    static volatile near unsigned char       _TXREG       @ 0xFAD;


    //#define LATA2               LA2	//mx commented out
    //#define LATA3               LA3	//mx commented out
    //#define LATA4               LA4	//mx commented out
    #define PORTB_RB5           RB5

    #define PORTA_RA2           RA2
    #define PORTA_RA4           RA4
    #define PORTA_RA5           RA5
    #define TRISA_RA2           TRISA2
    #define TRISA_RA5           TRISA5

    #define TRISC_RC7           TRISC7
    #define TRISC_RC6           TRISC6
    #define TRISC_RC5           TRISC5
    #define TRISC_RC4           TRISC4
    #define TRISC_RC3           TRISC3
    #define TRISC_RC2           TRISC2
    #define TRISC_RC1           TRISC1
    #define TRISC_RC0           TRISC0

    #define PORTC_RC7           RC7
    #define PORTC_RC6           RC6
    #define PORTC_RC5           RC5
    #define PORTC_RC4           RC4
    #define PORTC_RC3           RC3
    #define PORTC_RC2           RC2
    #define PORTC_RC1           RC1
    #define PORTC_RC0           RC0

    #define TRISD_RD7           TRISD7
    #define TRISD_RD6           TRISD6
    #define TRISD_RD5           TRISD5
    #define TRISD_RD4           TRISD4
    #define TRISD_RD3           TRISD3
    #define TRISD_RD2           TRISD2
    #define TRISD_RD1           TRISD1
    #define TRISD_RD0           TRISD0

    #define PORTD_RD7           RD7
    #define PORTD_RD6           RD6
    #define PORTD_RD5           RD5
    #define PORTD_RD4           RD4
    #define PORTD_RD3           RD3
    #define PORTD_RD2           RD2
    #define PORTD_RD1           RD1
    #define PORTD_RD0           RD0


    #define PORTE_RE2           RE2
    #define PORTE_RE1           RE1
    #define PORTE_RE0           RE0

    #define INTCON_TMR0IE       TMR0IE
    #define INTCON_TMR0IF       TMR0IF
    #define INTCON2_RBPU        RBPU

    #define T0CON_TMR0ON        TMR0ON

    #define SSPCON1_WCOL        WCOL

    #define SSPCON2_SEN         SEN
    #define SSPCON2_ACKSTAT     ACKSTAT
    #define SSPCON2_RSEN        RSEN
    #define SSPCON2_RCEN        RCEN
    #define SSPCON2_ACKEN       ACKEN
    #define SSPCON2_PEN         PEN
    #define SSPCON2_ACKDT       ACKDT

    #define SSPSTAT_R_W         RW
    #define SSPSTAT_BF          BF

    #define INTCON_GIEH         GIEH
    #define INTCON_GIEL         GIEL

    #define PIR2_BCLIF          BCLIF

    #define PIE1_TXIE           TXIE
    #define PIE1_RCIE           RCIE

    #define PIR1_TXIF           TXIF
    #define PIR1_RCIF           RCIF


    #define TXSTA_TRMT          TRMT
    #define TXSTA_BRGH          BRGH

    #define RCSTA_CREN          CREN

    #define ADCON0_GO           GODONE
    #define ADCON0_ADON         ADON


    #define Nop()               asm("NOP");

    #define RCON_POR            POR


#endif

//rajout par moi aussi non erreur sur PTR_BASE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// Base RAM pointer type for given architecture 
#if defined(__C32__)  
	#define PTR_BASE DWORD  
#else  
	#define PTR_BASE WORD  
#endif

#endif
