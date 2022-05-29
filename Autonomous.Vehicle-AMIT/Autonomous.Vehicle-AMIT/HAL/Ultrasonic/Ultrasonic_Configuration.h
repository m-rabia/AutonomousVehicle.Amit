/*
 * Ultrasonic_Configuration.h
 *
 * Created: 5/15/2022 6:04:24 PM
 *  Author: Rabi3
 */ 


#ifndef ULTRASONIC_CONFIGURATION_H_
#define ULTRASONIC_CONFIGURATION_H_

#include "CPU_Configuration.h"

GICR| = 1<<INT0;               //enable interrupt 0 operation pin
MCUCR| = 1<<ISC00;            //enable interrupt at any logical change

 int16_t count_a=0;
 int i=0;
 int pulse=0;

#endif /* ULTRASONIC_CONFIGURATION_H_ */