/*
 * File:   LED_OFF.c
 * Author: pavi
 *
 * Created on June 22, 2025, 4:50 PM
 */

#include "LED.h"
#include <xc.h>

void LED_OFF(void) {
     
    IO_ALL=0b00000000;
    IO_LAT_ALL=0b00000000;
    
}
    
    

