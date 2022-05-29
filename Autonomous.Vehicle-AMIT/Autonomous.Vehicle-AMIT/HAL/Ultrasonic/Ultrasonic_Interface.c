/*
 * Ultrasonic_Interface.c
 *
 * Created: 5/15/2022 6:04:45 PM
 *  Author: Rabi3
 */ 


#include "Ultrasonic_Private.h"


void Ultrasonic_Read(void)
{
	void DIO_SetPinValue(Port 3, Pin 0, State 1);
	_delay_ms(15);
	void DIO_SetPinValue(Port 3, Pin 0, State 2); //Pulse of 15ms for the trigger PIN
	count_a = pulse/58;                                 //Calculate the distance 
}
	