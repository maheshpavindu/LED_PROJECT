
#ifndef LED_H
#define LED_H

#include <xc.h> 

#define IO_ALL TRISB
#define IO_B0 TRISBbits.TRISB0
#define IO_B1 TRISBbits.TRISB1
#define IO_B2 TRISBbits.TRISB2
#define IO_B3 TRISBbits.TRISB3
#define IO_B4 TRISBbits.TRISB4
#define IO_B5 TRISBbits.TRISB5
#define IO_B6 TRISBbits.TRISB6
#define IO_B7 TRISBbits.TRISB7

#define IO_LAT_ALL PORTB
#define IO_LAT_B0 PORTBbits.RB0
#define IO_LAT_B1 PORTBbits.RB1
#define IO_LAT_B2 PORTBbits.RB2
#define IO_LAT_B3 PORTBbits.RB3
#define IO_LAT_B4 PORTBbits.RB4
#define IO_LAT_B5 PORTBbits.RB5
#define IO_LAT_B6 PORTBbits.RB6
#define IO_LAT_B7 PORTBbits.RB7

#define _XTAL_FREQ 6000000

void LED_SHIFT_LEFT(void);
void LED_ON(void);
void LED_OFF(void);
void LED_BLINCK(void);
void LED_SHIFT_RIGHT(void);























#endif	

