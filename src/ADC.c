/**
 * @file ADC.c
 * @author Praveen Kumar G
 * @brief ADC
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include "user_utils.h"
#include "AVR.h"
#include "ADC.h"
void initADC(){
    ADMUX = (1<<REFS0);//aref connected to AVCC
    ADCSRA = (1<<ADEN) | (1<<ADPS0) | (1<<ADPS1) | (1<<ADPS2);// ADEN=1 => enable ADC; division factor=128
}

uint16_t readADC(uint8_t channel){
    ADMUX &= 0xf8;
    channel &= 0b00000111;//channel 0 i.e. PORTC0
    ADMUX |= channel;//select a particula ADC channel(i.e. 0 in this case)
    ADCSRA |= (1<<ADSC);//start Analog to Digital conversion
    
        while(!(ADCSRA & (1<<ADIF)));//wait until the conversion is done
    return (ADC);//return the result
}

