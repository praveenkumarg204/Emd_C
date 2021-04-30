/**
 * @file project_main.c
 * @author Praveen Kumar G
 * @brief  final merged code
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "ADC.h"
#include "control.h"
#include "timerpwm.h"
#include "usart.h"
#include <stdint.h>

int main(void){
    
    control(); // port I/P control
    initADC(); // initialize ADC port
    uint16_t temperature=0; //declare temp value to 0
    uint16_t tempdata=0;//actual temperature value
    Timer_PWM(); //start PWM generation
    initUSART(103);//Initialize ports for USART
    
    while(1){
        if( !(PIND&(1<<PD0)) && !(PIND&(1<<PD1))  ){
              PORTB |=(1<<PB0);

        temperature =readADC(0);
        _delay_ms(200);

         tempdata=pwmout(temperature);//PWM generation
         UARTsend(tempdata);//send data to USART
        _delay_ms(20);
        }

        else{
                PORTB &=~(1<<PB0);
                OCR1A=0;
            }
    }
   return 0;
}