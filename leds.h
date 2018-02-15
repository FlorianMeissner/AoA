/*
 * leds.h
 *
 * Defines functions to set and reset specific LED's.
 *
 */


#define LED01 B, PB0   // LED01, red
#define LED02 B, PB1   // LED02, red
#define LED03 B, PB2   // LED03, red
#define LED04 B, PB3   // LED04, red
#define LED05 C, PC7   // LED05, red
#define LED06 C, PC6   // LED06, yellow
#define LED07 C, PC5   // LED07, yellow
#define LED08 D, PD0   // LED08, yellow
#define LED09 C, PC4   // LED09, yellow
#define LED10 D, PD1   // LED10, yellow
#define LED11 C, PC3   // LED11, green
#define LED12 D, PD2   // LED12, green
#define LED13 C, PC2   // LED13, green
#define LED14 D, PD3   // LED14, green
#define LED15 C, PC1   // LED15, green
#define LED16 D, PD4   // LED16, green
#define LED17 C, PC0   // LED17, green
#define LED18 D, PD5   // LED18, green
#define LED19 D, PD7   // LED19, green
#define LED20 D, PD6   // LED20, green



void lamptest() {
   int delay = 500;

   pin_high(LED01);
   delay_ms(delay);
   pin_low(LED01);
   delay_ms(delay);

   pin_high(LED02);
   delay_ms(delay);
   pin_low(LED02);
   delay_ms(delay);
//~
   pin_high(LED03);
   delay_ms(delay);
   pin_low(LED03);
   delay_ms(delay);
//~ //~
   pin_high(LED04);
   delay_ms(delay);
   pin_low(LED04);
   delay_ms(delay);
//~ //~
   pin_high(LED05);
   delay_ms(delay);
   pin_low(LED05);
   delay_ms(delay);
//~ //~
   pin_high(LED06);
   delay_ms(delay);
   pin_low(LED06);
   delay_ms(delay);
//~ //~
   pin_high(LED07);
   delay_ms(delay);
   pin_low(LED07);
   delay_ms(delay);
//~ //~
   pin_high(LED08);
   delay_ms(delay);
   pin_low(LED08);
   delay_ms(delay);
//~ //~
   pin_high(LED09);
   delay_ms(delay);
   pin_low(LED09);
   delay_ms(delay);
//~ //~
   pin_high(LED10);
   delay_ms(delay);
   pin_low(LED10);
   delay_ms(delay);
//~ //~
   pin_high(LED11);
   delay_ms(delay);
   pin_low(LED11);
   delay_ms(delay);
//~ //~
   pin_high(LED12);
   delay_ms(delay);
   pin_low(LED12);
   delay_ms(delay);
//~ //~
   pin_high(LED13);
   delay_ms(delay);
   pin_low(LED13);
   delay_ms(delay);
//~ //~
   pin_high(LED14);
   delay_ms(delay);
   pin_low(LED14);
   delay_ms(delay);
//~ //~
   pin_high(LED15);
   delay_ms(delay);
   pin_low(LED15);
   delay_ms(delay);
//~ //~
   pin_high(LED16);
   delay_ms(delay);
   pin_low(LED16);
   delay_ms(delay);
//~ //~
   pin_high(LED17);
   delay_ms(delay);
   pin_low(LED17);
   delay_ms(delay);
//~ //~
   pin_high(LED18);
   delay_ms(delay);
   pin_low(LED18);
   delay_ms(delay);
//~ //~
   pin_high(LED19);
   delay_ms(delay);
   pin_low(LED19);
   delay_ms(delay);
//~ //~
   pin_high(LED20);
   delay_ms(delay);
   pin_low(LED20);
   delay_ms(delay);
}

// EOF
