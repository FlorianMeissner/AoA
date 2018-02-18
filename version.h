/*
 * version.h
 *
 * Output Software Version
 * =======================
 *
 *
 * Show's software version on LED's.
 *
 * Green LED's will show major version as single LED from ground up. (LED11-20).
 * Yellow and red LED's show subversion in the same way (LED01-10).
 *
 *
 * Florian Meissner
 * n1990b@gmx.de
 * February 2018
 *
 */


/**
    @brief  Display software version on LED's.
    @param  float version
    @return none
**/
void version(float version)
{
    uint8_t super = version;
    uint8_t sub = (version - super) * 10;

    switch(super){
        case 1: pin_high(LED11); break;
        case 2: pin_high(LED12); break;
        case 3: pin_high(LED13); break;
        case 4: pin_high(LED14); break;
        case 5: pin_high(LED15); break;
        case 6: pin_high(LED16); break;
        case 7: pin_high(LED17); break;
        case 8: pin_high(LED18); break;
        case 9: pin_high(LED19); break;
        case 10: pin_high(LED20); break;
    }

    switch(sub){
        case 1: pin_high(LED01); break;
        case 2: pin_high(LED02); break;
        case 3: pin_high(LED03); break;
        case 4: pin_high(LED04); break;
        case 5: pin_high(LED05); break;
        case 6: pin_high(LED06); break;
        case 7: pin_high(LED07); break;
        case 8: pin_high(LED08); break;
        case 9: pin_high(LED09); break;
        case 10: pin_high(LED10); break;
    }

    delay_ms(1000);
    LED_reset();
}

//EOF
