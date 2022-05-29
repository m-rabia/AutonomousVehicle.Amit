/*
 * PMW_Private.h
 *
 * Created: 5/14/2022 10:55:36 PM
 *  Author: Rabi3
 */ 


#ifndef PMW_PRIVATE_H_
#define PMW_PRIVATE_H_

#include "PMW_Configuration.h"

void PWM0_Fast_Initialize(void);
void PWM0_Fast_Start(void);
void PWM0_Fast_Stop(void);
void PWM0_Fast_SetDutyCycle(uint8_t dutycycle);

#endif /* PMW_PRIVATE_H_ */