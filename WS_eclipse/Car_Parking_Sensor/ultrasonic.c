/*
 * ultrasonic.c
 *
 *  Created on: Oct 1, 2025
 *      Author: prof
 */

#include "ultrasonic.h"
#include <avr/io.h>
#include "GPIO_messi.h"
#include <util/delay.h>
#include "icu_m.h"

ICU_ConfigType config = {F_CPU_8,RAISING};
static uint16 time;
static uint8 flag = 0;
void Ultrasonic_init(void)
{
	ICU_init(&config);
	ICU_setCallBack(Ultrasonic_edgeProcessing);
	GPIO_setupPinDirection(ULTRASONIC_TRIGGER_PORT_ID,ULTRASONIC_TRIGGER_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(ULTRASONIC_ECHO_PORT_ID,ULTRASONIC_ECHO_PIN_ID,PIN_INPUT);

}
void Ultrasonic_Trigger(void)
{

	GPIO_writePin(ULTRASONIC_TRIGGER_PORT_ID,ULTRASONIC_TRIGGER_PIN_ID,LOGIC_HIGH_MESSI);
	_delay_us(10);
	GPIO_writePin(ULTRASONIC_TRIGGER_PORT_ID,ULTRASONIC_TRIGGER_PIN_ID,LOGIC_LOW_MESSI);
}
uint16 Ultrasonic_readDistance(void)
{
	uint16 dis = 0;
	Ultrasonic_Trigger();
	dis = ((time * 0.5*0.0343)) / 2;
	return dis+1;
}
void Ultrasonic_edgeProcessing(void)
{
	flag++;
	if(flag == 1)
	{
		ICU_clearTimerValue();
		ICU_setEdgeDetectionType(FALLING);
	}
	else if(flag == 2)
	{
		time = ICU_getInputCaptureValue();
		ICU_clearTimerValue();
		ICU_setEdgeDetectionType(RAISING);
		flag = 0;

	}

}
