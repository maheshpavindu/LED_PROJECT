/*
 * File:   LED_BLINK.c
 * Author: pavi
 *
 * Created on June 22, 2025, 4:38 PM
 */

#include "LED.h"
#include <xc.h>
const int x=25;
void LED_BLINCK(void) {
    IO_ALL=0b00000000;
    IO_LAT_ALL=0b00000000;
    IO_LAT_B0=1;
    __delay_ms(x);
    
    IO_LAT_B0=0;
    __delay_ms(x);
}
