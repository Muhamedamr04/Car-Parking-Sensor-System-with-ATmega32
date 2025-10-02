/*
 * GPIO_messi.h
 *
 *  Created on: Sep 18, 2025
 *  Author: Mohamed_Amr
 *
 */

#ifndef GPIO_MESSI_H_
#define GPIO_MESSI_H_

#include "STD_messi.h"

/********************************************************************************
 *                               	Definitions                               	*
 * **************************************************************************** */
#define NUM_OF_PORT            4
#define NUM_OF_PINS_PER_PORT   8

#define PORTA_MESSI    0
#define PORTB_MESSI    1
#define PORTC_MESSI    2
#define PORTD_MESSI    3

#define PIN0_MESSI     0
#define PIN1_MESSI     1
#define PIN2_MESSI     2
#define PIN3_MESSI     3
#define PIN4_MESSI     4
#define PIN5_MESSI     5
#define PIN6_MESSI     6
#define PIN7_MESSI     7


/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/

typedef enum{
	PIN_INPUT,PIN_OUTPUT
}GPIO_PinDirectionType;

typedef enum{
	PORT_INPUT,PORT_OUTPUT=0XFF
}GPIO_PortDirectionType;


/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void GPIO_setupPinDirection(uint8 port_num, uint8 pin_num, GPIO_PinDirectionType direction);

void GPIO_writePin(uint8 port_num, uint8 pin_num, uint8 value);

uint8 GPIO_readPin(uint8 port_num, uint8 pin_num);

void GPIO_setupPortDirection(uint8 port_num, GPIO_PortDirectionType direction);

void GPIO_writePort(uint8 port_num, uint8 value);

uint8 GPIO_readPort(uint8 port_num);

#endif /* GPIO_MESSI_H_ */
