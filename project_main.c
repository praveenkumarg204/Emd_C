/**
 * @file project_main.c
 * @author Praveen Kumar G
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include "user_utils.h"
#include "blinky.h"
/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
int main(void){
	
	//port configure
    DDRB |=(1<<PB1);
    DDRD &=~(1<<PD0);
    DDRD &=~(1<<PD1);


    while(1){
            if( !PIND&(1<<PD0) && !(PIND&(1<<PD1))  ){
              PORTB |=(1<<PB1);
            }
            else{
                PORTB &=~(1<<PB1);
            }

    }
    return 0;
}
