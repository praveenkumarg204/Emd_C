/**
 * @file ADC.h
 * @author Praveen Kumar G
 * @brief  header file for ADC 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ADC_H_
#define _ADC_H_

#include "project_config.h"
#include <util/delay.h>
#include <avr/interrupt.h>
#include "AVR.h"

void initADC();
uint16_t readADC(uint8_t);

#endif