/*
 * led.h
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#ifndef LED_H_
#define LED_H_

#include "STD_messi.h"
/********************************************************************************
 *                               	Definitions                               	*
 * **************************************************************************** */

#define LED_TYPES       	  LED_POS

#define LED_RED_PORT_ID            PORTC_MESSI
#define LED_GREEN_PORT_ID          PORTC_MESSI
#define LED_BLUE_PORT_ID           PORTC_MESSI

#define LED_RED_PIN_ID              PIN0_MESSI
#define LED_GREEN_PIN_ID            PIN1_MESSI
#define LED_BLUE_PIN_ID       		PIN2_MESSI
/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum
{
	red,green,blue
}LED_Id;
/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void LEDS_init(void);
void LED_on(uint8 led_id);
void LED_off(uint8 led_id);

#endif /* LED_H_ */
