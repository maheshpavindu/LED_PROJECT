/*
 * File:   LED_SHIFT_RIGHT.c
 * Author: pavi
 *
 * Created on June 22, 2025, 6:10 PM
 */

#include "LED.h"
#include <xc.h>

void LED_SHIFT_RIGHT(void) {
     while(IO_LAT_B1==1||IO_LAT_B0==0){
        IO_LAT_ALL=IO_LAT_ALL>>1;
        __delay_ms(20);
    }
}
