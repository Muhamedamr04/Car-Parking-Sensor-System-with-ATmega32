/*
 * buzzer.h
 *
 *  Created on: Sep 25, 2025
 *      Author: prof
 */

#ifndef BUZZER_H_
#define BUZZER_H_

#include "STD_messi.h"
/********************************************************************************
 *                               	Definitions                               	*
 * **************************************************************************** */
#define BUZZER_PORT_ID        PORTC_MESSI
#define BUZZER_PIN_ID         PIN5_MESSI
/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
void Buzzer_init(void);
void Buzzer_on(void);
void Buzzer_off(void);

#endif /* BUZZER_H_ */
