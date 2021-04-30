/**
 * @file usart.h
 * @author Praveen Kumar G
 * @brief header for usart
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _USART_H_
#define _USART_H_
/** \brief to initialize USART
 *
 * \param ubrreg_value
 *
 */

void initUSART(uint16_t ubrreg_value);
/** \brief to send the USART the modified temperature value
 *
 * \param temp_value
 */

void UARTsend(char temp_value);

#endif 