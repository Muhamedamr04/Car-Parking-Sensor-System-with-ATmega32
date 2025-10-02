/*
 * led.c
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#include "led.h"
#include "GPIO_messi.h"

void LEDS_init(void)
{
	GPIO_setupPinDirection(LED_RED_PORT_ID,LED_RED_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(LED_GREEN_PORT_ID,LED_GREEN_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(LED_BLUE_PORT_ID,LED_BLUE_PIN_ID,PIN_OUTPUT);
#if(LED_TYPE == LED_POS)
	GPIO_writePin(LED_RED_PORT_ID,LED_RED_PIN_ID,LOGIC_LOW_MESSI);
	GPIO_writePin(LED_GREEN_PORT_ID,LED_GREEN_PIN_ID,LOGIC_LOW_MESSI);
	GPIO_writePin(LED_BLUE_PORT_ID,LED_BLUE_PIN_ID,LOGIC_LOW_MESSI);
#elif(LED_TYPES)
	GPIO_writePin(LED_RED_PORT_ID,LED_RED_PIN_ID,LOGIC_HIGH_MESSI);
	GPIO_writePin(LED_GREEN_PORT_ID,LED_GREEN_PIN_ID,LOGIC_HIGH_MESSI);
	GPIO_writePin(LED_BLUE_PORT_ID,LED_BLUE_PIN_ID,LOGIC_HIGH_MESSI);
#endif
}

void LED_on(LED_Id id)
{
#if(LED_TYPE == LED_POS)
	if(id == red)
	{
		GPIO_writePin(LED_RED_PORT_ID,id,LOGIC_HIGH_MESSI);
	}
	else if(id == green)
	{
		GPIO_writePin(LED_GREEN_PORT_ID,id,LOGIC_HIGH_MESSI);
	}
	else
	{
		GPIO_writePin(LED_BLUE_PORT_ID,id,LOGIC_HIGH_MESSI);
	}
#elif(LED_TYPES == LED_NEG)
	if(id == red)
		{
			GPIO_writePin(LED_RED_PORT_ID,id,LOGIC_LOW_MESSI);
		}
		else if(id == green)
		{
			GPIO_writePin(LED_GREEN_PORT_ID,id,LOGIC_LOW_MESSI);
		}
		else
		{
			GPIO_writePin(LED_BLUE_PORT_ID,id,LOGIC_LOW_MESSI);
		}
#endif
}

void LED_off(LED_Id id)
{
#if(LED_TYPE == LED_POS)
	if(id == red)
		{
			GPIO_writePin(LED_RED_PORT_ID,id,LOGIC_LOW_MESSI);
		}
		else if(id == green)
		{
			GPIO_writePin(LED_GREEN_PORT_ID,id,LOGIC_LOW_MESSI);
		}
		else
		{
			GPIO_writePin(LED_BLUE_PORT_ID,id,LOGIC_LOW_MESSI);
		}
#elif(LED_TYPES == LED_NEG)
	if(id == red)
	{
		GPIO_writePin(LED_RED_PORT_ID,id,LOGIC_HIGH_MESSI);
	}
	else if(id == green)
	{
		GPIO_writePin(LED_GREEN_PORT_ID,id,LOGIC_HIGH_MESSI);
	}
	else
	{
		GPIO_writePin(LED_BLUE_PORT_ID,id,LOGIC_HIGH_MESSI);
	}
#endif
}
