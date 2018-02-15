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
//~ #include "bool.h"
#include "io.h"
#include "leds.h"


int main(void)
{

    // Define outputs
    DDRB = 0xff;
    DDRC = 0xFF;
    DDRD = 0xFF;

    // Initialize all outputs as low.
    PORTB = 0;
    PORTC = 0;
    PORTD = 0;

    // Output test run


    // Endless loop
    while(1) {
        lamptest();
    }
    return 0;
}


//EOF
