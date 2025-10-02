/*
 * GPIO_messi.c
 *
 *  Created on: Sep 18, 2025
 *      Author: prof
 */


#include "GPIO_messi.h"
#include "STD_messi.h"
#include "common_macros.h"
#include <avr/io.h>

void GPIO_setupPinDirection(uint8 port_num, uint8 pin_num, GPIO_PinDirectionType direction)
{
	if(port_num >= NUM_OF_PORT || pin_num >= NUM_OF_PINS_PER_PORT )
	{
		/*  Do Nothing  */
	}
	else
	{
		switch(port_num){
		case PORTA_MESSI :
			if(direction == PIN_OUTPUT)
			{
				SET_BIT(DDRA,pin_num);
			}
			else
			{
				CLEAR_BIT(DDRA,pin_num);
			}
			break;
		case PORTB_MESSI :
			if(direction == PIN_OUTPUT)
			{
				SET_BIT(DDRB,pin_num);
			}
			else
			{
				CLEAR_BIT(DDRB,pin_num);
			}
			break;
		case PORTC_MESSI :
			if(direction == PIN_OUTPUT)
			{
				SET_BIT(DDRC,pin_num);
			}
			else
			{
				CLEAR_BIT(DDRC,pin_num);
			}
			break;
		case PORTD_MESSI :
			if(direction == PIN_OUTPUT)
			{
				SET_BIT(DDRD,pin_num);
			}
			else
			{
				CLEAR_BIT(DDRD,pin_num);
			}
			break;
		}
	}
}

void GPIO_writePin(uint8 port_num, uint8 pin_num, uint8 value)
{

	if(port_num >= NUM_OF_PORT || pin_num >= NUM_OF_PINS_PER_PORT )
	{
		/*  Do Nothing  */
	}
	else
	{
		switch(port_num)
		{
		case PORTA_MESSI :
			if(value == LOGIC_HIGH_MESSI)
			{
				SET_BIT(PORTA,pin_num);
			}
			else
			{
				CLEAR_BIT(PORTA,pin_num);
			}
			break;
		case PORTB_MESSI :
			if(value == LOGIC_HIGH_MESSI)
			{
				SET_BIT(PORTB,pin_num);
			}
			else
			{
				CLEAR_BIT(PORTB,pin_num);
			}
			break;
		case PORTC_MESSI :
			if(value == LOGIC_HIGH_MESSI)
			{
				SET_BIT(PORTC,pin_num);
			}
			else
			{
				CLEAR_BIT(PORTC,pin_num);
			}
			break;
		case PORTD_MESSI :
			if(value == LOGIC_HIGH_MESSI)
			{
				SET_BIT(PORTD,pin_num);
			}
			else
			{
				CLEAR_BIT(PORTD,pin_num);
			}
			break;
		}
	}
}

uint8 GPIO_readPin(uint8 port_num, uint8 pin_num)
{
	uint8 val = LOGIC_LOW_MESSI;
	if(port_num >= NUM_OF_PORT || pin_num >= NUM_OF_PINS_PER_PORT )
	{
		/*  Do Nothing  */
	}
	else
	{
		switch(port_num)
		{
		case PORTA_MESSI :
			return (BIT_IS_SET(PINA,pin_num)) ?  LOGIC_HIGH_MESSI : LOGIC_LOW_MESSI;
		case PORTB_MESSI :
			return (BIT_IS_SET(PINB,pin_num)) ?  LOGIC_HIGH_MESSI : LOGIC_LOW_MESSI;
		case PORTC_MESSI :
			return (BIT_IS_SET(PINC,pin_num)) ?  LOGIC_HIGH_MESSI : LOGIC_LOW_MESSI;
		case PORTD_MESSI :
			return (BIT_IS_SET(PIND,pin_num)) ?  LOGIC_HIGH_MESSI : LOGIC_LOW_MESSI;
		}
	}
	return val;
}

void GPIO_setupPortDirection(uint8 port_num, GPIO_PortDirectionType direction)
{
	if( port_num >= NUM_OF_PORT )
	{
		/*  Do Nothing  */
	}
	else
	{
		switch(port_num)
		{
		case PORTA_MESSI :
			DDRA = direction;
			break;
		case PORTB_MESSI :
			DDRB = direction;
			break;
		case PORTC_MESSI :
			DDRC = direction;
			break;
		case PORTD_MESSI :
			DDRD = direction;
			break;
		}
	}
}

void GPIO_writePort(uint8 port_num, uint8 value)
{
	if( port_num >= NUM_OF_PORT )
	{
		/*  Do Nothing  */
	}
	else
	{
		switch(port_num)
		{
		case PORTA_MESSI :
			PORTA = value;
			break;
		case PORTB_MESSI :
			PORTB = value;
			break;
		case PORTC_MESSI :
			PORTC = value;
			break;
		case PORTD_MESSI :
			PORTD = value;
			break;
		}
	}
}

uint8 GPIO_readPort(uint8 port_num)
{
	uint8 value = LOGIC_LOW_MESSI;
	if( port_num >= NUM_OF_PORT )
	{
		/*  Do Nothing  */
	}
	else
	{
		switch(port_num)
		{
		case PORTA_MESSI :
			value = PINA;
			break;
		case PORTB_MESSI :
			value = PINB;
			break;
		case PORTC_MESSI :
			value = PINC;
			break;
		case PORTD_MESSI :
			value = PIND;
			break;
		}
	}
	return value;
}
