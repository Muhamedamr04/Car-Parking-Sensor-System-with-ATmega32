/*
 * app.c
 *
 *  Created on: Oct 1, 2025
 *      Author: prof
 */

#include "led.h"
#include "buzzer.h"
#include "lcd_m.h"
#include "icu_m.h"
#include "ultrasonic.h"
#include <avr/io.h>
#include <util/delay.h>

int main()
{
	uint16 dis = 0;
	SREG |= (1<<7);
	LCD_init();
	Buzzer_init();
	LEDS_init();
	Ultrasonic_init();
	LCD_displayString("distance=");
	while(1)
	{
		dis = Ultrasonic_readDistance();
		LCD_moveCursor(0,10);
		LCD_intgerToString(dis);
		LCD_displayString("cm ");
		if(dis <= 5)
		{
			LCD_moveCursor(1,7);
			LCD_displayString("Stop ");
			LED_on(red);
			LED_on(green);
			LED_on(blue);
			Buzzer_on();
			_delay_ms(150);
			LED_off(red);
			LED_off(green);
			LED_off(blue);
			Buzzer_off();
			_delay_ms(150);

		}
		else if((dis >= 6)&&(dis <= 10))
		{
			LED_on(red);
			LED_on(green);
			LED_on(blue);
			Buzzer_off();
		}
		else if((dis >= 11)&&(dis <= 15))
		{
			LED_on(red);
			LED_on(green);
			LED_off(blue);
			Buzzer_off();
		}
		else if((dis >= 16)&&(dis <= 20))
		{
			LED_on(red);
			LED_off(green);
			LED_off(blue);
			Buzzer_off();
		}
		else if(dis > 20)
		{
			LED_off(red);
			LED_off(green);
			LED_off(blue);
			Buzzer_off();
		}
	}
}
