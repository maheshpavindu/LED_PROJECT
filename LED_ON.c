/*
 * File:   LED_ON.c
 * Author: pavi
 *
 * Created on June 22, 2025, 4:29 PM
 */

#include "LED.h"
#include <xc.h>

void LED_ON(void) {
    IO_ALL=0b00000000;
    IO_LAT_ALL=0b00000000;
    IO_LAT_ALL=0b11111111;
}
