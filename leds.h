/*
 * leds.h
 *
 * Defines functions to set and reset specific LED's.
 *
 */


#include <avr/io.h>


        //~ {0,   0}//,       // Dummy because LED0 does not exists in schematic
        //~ {PB0, PORTB},   // LED01, red
        //~ {PB1, PORTB},   // LED02, red
        //~ {PB2, PORTB},   // LED03, red
        //~ {PB3, PORTB},   // LED04, red
        //~ {PC7, PORTC},   // LED05, red
        //~ {PC6, PORTC},   // LED06, yellow
        //~ {PC5, PORTC},   // LED07, yellow
        //~ {PD0, PORTD},   // LED08, yellow
        //~ {PC4, PORTC},   // LED09, yellow
        //~ {PD1, PORTD},   // LED10, yellow
        //~ {PC3, PORTC},   // LED11, green
        //~ {PD2, PORTD},   // LED12, green
        //~ {PC2, PORTC},   // LED13, green
        //~ {PD3, PORTD},   // LED14, green
        //~ {PC1, PORTC},   // LED15, green
        //~ {PD4, PORTD},   // LED16, green
        //~ {PC0, PORTC},   // LED17, green
        //~ {PD5, PORTD},   // LED18, green
        //~ {PD7, PORTD},   // LED19, green
        //~ {PD6, PORTD}   // LED20, green



void setLED(int led) {
    //~ int port;
    //~ int pin;

    //~ switch(led) {
        //~ case 1:
        //~ case 2:
        //~ case 3:
        //~ case 4:
            //~ port = PORTB;
            //~ break;
        //~ case 5:
        //~ case 6:
        //~ case 7:
        //~ case 9:
        //~ case 11:
        //~ case 13:
        //~ case 15:
        //~ case 17:
            //~ port = PORTC;
            //~ break;
        //~ case 8:
        //~ case 10:
        //~ case 12:
        //~ case 14:
        //~ case 16:
        //~ case 18:
        //~ case 19:
        //~ case 20:
            //~ port = PORTD;
            //~ break;
        //~ default:
            //~ port = 0;
    //~ }
//~
    //~ switch(led) {
        //~ case 1:
            //~ pin = PB0;
            //~ break;
        //~ case 2:
            //~ pin = PB1;
            //~ break;
        //~ case 3:
            //~ pin = PB2;
            //~ break;
        //~ case 4:
            //~ pin = PB3;
            //~ break;
        //~ case 5:
            //~ pin = PC7;
            //~ break;
        //~ case 6:
            //~ pin = PC6;
            //~ break;
        //~ case 7:
            //~ pin = PC5;
            //~ break;
        //~ case 8:
            //~ pin = PD0;
            //~ break;
        //~ case 9:
            //~ pin = PC4;
            //~ break;
        //~ case 10:
            //~ pin = PD1;
            //~ break;
        //~ case 11:
            //~ pin = PC3;
            //~ break;
        //~ case 12:
            //~ pin = PD2;
            //~ break;
        //~ case 13:
            //~ pin = PC2;
            //~ break;
        //~ case 14:
            //~ pin = PD3;
            //~ break;
        //~ case 15:
            //~ pin = PC1;
            //~ break;
        //~ case 16:
            //~ pin = PD4;
            //~ break;
        //~ case 17:
            //~ pin = PC0;
            //~ break;
        //~ case 18:
            //~ pin = PD5;
            //~ break;
        //~ case 19:
            //~ pin = PD7;
            //~ break;
        //~ case 20:
            //~ pin = PD6;
            //~ break;
    //~ }
    //~ port |= (1<<pin);
    PORTB |= (1<<PB0);
}


void resetLED(int led) {
    int port;
    int pin;

    switch(led) {
        case 1:
        case 2:
        case 3:
        case 4:
            port = PORTB;
            break;
        case 5:
        case 6:
        case 7:
        case 9:
        case 11:
        case 13:
        case 15:
        case 17:
            port = PORTC;
            break;
        case 8:
        case 10:
        case 12:
        case 14:
        case 16:
        case 18:
        case 19:
        case 20:
            port = PORTD;
            break;
        default:
            port = 0;
    }

    switch(led) {
        case 1:
            pin = PB0;
            break;
        case 2:
            pin = PB1;
            break;
        case 3:
            pin = PB2;
            break;
        case 4:
            pin = PB3;
            break;
        case 5:
            pin = PC7;
            break;
        case 6:
            pin = PC6;
            break;
        case 7:
            pin = PC5;
            break;
        case 8:
            pin = PD0;
            break;
        case 9:
            pin = PC4;
            break;
        case 10:
            pin = PD1;
            break;
        case 11:
            pin = PC3;
            break;
        case 12:
            pin = PD2;
            break;
        case 13:
            pin = PC2;
            break;
        case 14:
            pin = PD3;
            break;
        case 15:
            pin = PC1;
            break;
        case 16:
            pin = PD4;
            break;
        case 17:
            pin = PC0;
            break;
        case 18:
            pin = PD5;
            break;
        case 19:
            pin = PD7;
            break;
        case 20:
            pin = PD6;
            break;
    }
    port &= ~(1<<pin);
}


void lamptest() {
    uint8_t i;
    for (i=1; i<=20; i++) {
        setLED(i);
        delay_ms(1000);
        resetLED(i);
    }
}

// EOF
