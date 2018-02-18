/*
 * main.c
 *
 * Angle of Attack Indicator
 * =========================
 *
 * The AoA indicator module receives prussure data via UART from AoA sensor module. It converts
 * these data into inH2O values used to drive a 20 unit LED bargraph.
 *
 * Florian Meissner
 * n1990b@gmx.de
 * February 2018
 *
 *
 */


#ifndef F_CPU
    #warning "Setting F_CPU to 1600000UL."
    #define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <stdint.h>
#include "delay_ms.h"
#include "io.h"
#include "leds.h"
//~ #include "adc.h"
//~ #include "version.h"

//~ #define VERSION 1.0 // Program version
//~ #define SENSOR 0    // ADC channel


/**
    @brief  Main program
    @param  none
    @return int
**/
int main(void)
{
    //Initializers
    LED_init();     // LED's
    //~ ADC_init();     // ADC

    // Output test run
    lamptest();
    //~ version(VERSION);

    // Endless loop
    while(1) {
        //~ adcval = ADC_Read_Avg(SENSOR, 10);
    }
    return 0;
}


//EOF
