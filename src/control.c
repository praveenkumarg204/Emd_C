/**
 * @file project_main.c
 * @author Praveen Kumar G
 * @brief Project to Blink an LED
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include "user_utils.h"
#include "AVR.h"
/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
int control(){
	
	//port configure
    DDRB |=(1<<PB0);
    DDRD &=~(1<<PD0);
    DDRD &=~(1<<PD1);
    return 0;
}
