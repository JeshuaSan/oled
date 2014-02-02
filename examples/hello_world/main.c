/*
 * File:   main.c
 * Author: jesus
 *
 * Created on January 28, 2014, 7:21 PM
 */

#include <stdint.h>
#include "configbits.h"
#include "sysconfig.h"
#include "pinconfig.h"
#include <libpic30.h>
#include "oled/oled.h"


int main(void) {
    sysConfigClock();
    pinConfig();
    oled_begin();

    oled_clearDisplay();
    oled_prints("Hello world", 35, 4);  // print on center of the screen
    oled_render();
    
    while(1)
    {
        LED ^= 1;
        __delay_ms(100);
    }
    return (0);
}
