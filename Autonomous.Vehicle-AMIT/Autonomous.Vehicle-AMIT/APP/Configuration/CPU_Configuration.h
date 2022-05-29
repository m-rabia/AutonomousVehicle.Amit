/*
 * CPU_Configuration.h
 *
 * Created: 5/15/2022 7:38:49 PM
 *  Author: Rabi3
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU //Disable internal oscillator
#define F_CPU 16000000 //Enable external oscillator 16MHz
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <avr/io.h> //All ports defined in avr library
#include <util/delay.h> //Enable _delay_ms() function
#include <avr/interrupt.h> //Enable interrupts function
#include "BIT_Math.h"
#include "STD_Types.h"
#include "DIO_Private.h"

#endif /* CPU_CONFIGURATION_H_ */