/**
 * @file Timer_PWM.c
 * @author Praveen Kumar G
 * @brief Timers and Couters
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "user_utils.h"
#include "AVR.h"
#include "project_config.h"

void Timer_PWM(){

    TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(WGM10); // Timer1 with fast PWM mode
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);  // prescalar 64
    DDRB|=(1<<PB1);

    while(1){

        OCR1A=10;
        _delay_ms(200);
        OCR1A=50;
        _delay_ms(200);
        OCR1A=100;
        _delay_ms(200);
        OCR1A=150;
        _delay_ms(200);
        OCR1A=200;
        _delay_ms(200);
        OCR1A=250;
        _delay_ms(200);
    }

}

