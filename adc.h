/*
 * adc.h
 *
 * Analogue-Digital-Converter functions
 * ====================================
 *
 *
 * collection of functions used for ADC operations. Taylored to AtMEGA16.
 *
 *
 * Florian Meissner
 * n1990b@gmx.de
 * February 2018
 *
 */


/**
    @brief  Initialize ADC.
    @param  none
    @return none
**/
void ADC_init(void)
{
    // Set AVCC as reference voltage.
    ADMUX = (1<<REFS0);
    ADMUX &= ~(1<<REFS1);

    // Right adjust result
    ADMUX &= ~(1<<ADLAR);

    // Disable auto trigger mode
    ADCSRA &= ~(1<<ADATE);

    // Select frequency prescaler
    ADCSRA |= (1<<ADPS2);
    ADCSRA |= (1<<ADPS1);
    ADCSRA |= (1<<ADPS0);

    // Enable ADC
    ADCSRA |= (1<<ADEN);

    // Dummy readout
    ADCSRA |= (1<<ADSC);
    while (ADCSRA & (1<<ADSC)) {
    }
    (void) ADCW;
}


/**
    @brief  Read one value from specified channel.
    @param  uint8_t channel
    @return uint16_t adc_conversion
**/
uint16_t ADC_Read(uint8_t channel)
{
    //Select channel
    ADMUX = (ADMUX & ~(0x1F)) | (channel & 0x1F);

    // run single conversion
    ADCSRA |= (1<<ADSC);
    while (ADCSRA & (1<<ADSC)) {
    }
    return ADCW;
}


/**
    @brief  Read specified amount of values from ADC and return avarage.
    @param  uint8_t channel
            uint8_t samples
    @return uint16_t adc_avg
**/
uint16_t ADC_Read_Avg(uint8_t channel, uint8_t samples)
{
    uint32_t sum = 0;
    for (uint8_t i=0; i<samples; ++i) {
        sum += ADC_Read(channel);
    }
    uint16_t adc_avg = sum / samples;
    return adc_avg;
}

 //EOF
