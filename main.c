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
#include "adc.h"
#include "version.h"


#define VERSION 1.2 // Program version
#define SENSOR 7    // ADC channel


/**
    @brief  Main program
    @param  none
    @return int
**/
int main(void)
{
    //Initializers
    LED_init();     // LED's
    ADC_init();     // ADC

    // Output test run
    lamptest();
    version(VERSION);

    // Endless loop
    while(1) {

        // turn off all LED's.
        LED_reset();

        // Read new value from ADC. Average over 10 reads.
        uint16_t adcval = ADC_Read_Avg(SENSOR, 10);

        // Set LED's according to value.
        if (adcval <= 26) pin_high(LED20);
        else if (adcval > 26 && adcval <= 52) pin_high(LED19);
        else if (adcval > 52 && adcval <= 78) pin_high(LED18);
        else if (adcval > 78 && adcval <= 104) pin_high(LED17);
        else if (adcval > 104 && adcval <= 129) pin_high(LED16);
        else if (adcval > 129 && adcval <= 155) pin_high(LED15);
        else if (adcval > 155 && adcval <= 181) pin_high(LED14);
        else if (adcval > 181 && adcval <= 207) pin_high(LED13);
        else if (adcval > 207 && adcval <= 233) pin_high(LED12);
        else if (adcval > 233 && adcval <= 259) pin_high(LED11);
        else if (adcval > 259 && adcval <= 285) pin_high(LED10);
        else if (adcval > 285 && adcval <= 311) pin_high(LED09);
        else if (adcval > 311 && adcval <= 337) pin_high(LED08);
        else if (adcval > 337 && adcval <= 363) pin_high(LED07);
        else if (adcval > 363 && adcval <= 388) pin_high(LED06);
        else if (adcval > 388 && adcval <= 414) pin_high(LED05);
        else if (adcval > 414 && adcval <= 440) pin_high(LED04);
        else if (adcval > 440 && adcval <= 466) pin_high(LED03);
        else if (adcval > 466 && adcval <= 492) pin_high(LED02);
        else if (adcval > 492) pin_high(LED01);

        delay_ms(100);
    }
    return 0;
}


//EOF
