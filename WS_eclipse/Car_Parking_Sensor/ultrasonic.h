/*
 * ultrasonic.h
 *
 *  Created on: Oct 1, 2025
 *      Author: prof
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "STD_messi.h"

#define ULTRASONIC_TRIGGER_PORT_ID     PORTD_MESSI
#define ULTRASONIC_TRIGGER_PIN_ID      PIN7_MESSI

#define ULTRASONIC_ECHO_PORT_ID        PORTD_MESSI
#define ULTRASONIC_ECHO_PIN_ID         PIN6_MESSI

void Ultrasonic_init(void);
void Ultrasonic_Trigger(void);
uint16 Ultrasonic_readDistance(void);
void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
