/*
 * File:   LED_SHIFT_LEFT.c
 * Author: pavi
 *
 * Created on June 22, 2025, 5:39 PM
 */

#include "LED.h"
#include <xc.h>

void LED_SHIFT_LEFT(void) {
    IO_ALL=0b00000000;
        IO_LAT_ALL=0b00000001;
    while(IO_LAT_B7==0||IO_LAT_B6==1){
        IO_LAT_ALL=IO_LAT_ALL<<1;
        __delay_ms(20);
    }
    
}