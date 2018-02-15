/*
********************************************************************************
*                                  delay_ms.h                                  *
********************************************************************************


* INTRODUCTION
* ------------
*
* The function calls the original _delay_ms() from util/delay.h for 1
* milisecond and repeats that for the desired timespan.
*
*
* SITE NOTICE
* -----------
*
* Developer:    Florian Meissner
*               n1990b@gmx.de
* Version:      1.1
* Release date: 05/05/2017
*
*/

#include <util/delay.h>

/**
    @brief  Delay program execution.
    @param  uint16_t
    @return none
*/
void delay_ms(uint16_t ms)
{
    uint16_t t=0;
    for (t=0; t<=ms; t++) {
        _delay_ms(1);
    }
}

/* END OF FILE */
