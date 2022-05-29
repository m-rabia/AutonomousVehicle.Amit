/*
 * DC.h
 *
 * Created: 5/13/2022 8:24:08 PM
 *  Author: Rabi3
 */ 


#ifndef DC_MOTOR_CONFIGURATION_H_
#define DC_MOTOR_CONFIGURATION_H_

#include "DC_Motor_Configuration.h"

void Motor_Initialize(void);
void Motor_ON(motor_direction direction, motor_enable enable_pin);
void Motor_OFF(motor_enable enable_pin);

#endif /* DC.MOTOR_PRIVATE_H_ */