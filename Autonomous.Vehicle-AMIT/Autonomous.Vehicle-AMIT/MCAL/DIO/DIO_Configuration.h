/*
 * DIO_Configuration.h
 *
 * Created: 5/13/2022 8:32:41 PM
 *  Author: Rabi3
 */ 


#ifndef DIO_CONFIGURATION_H_
#define DIO_CONFIGURATION_H_

#include "CPU_Configuration.h"

typedef enum
{
	DIO_PORTA=0,
	DIO_PORTB=1,
	DIO_PORTC=2,
	DIO_PORTD=3
}Port;
typedef enum
{
	DIO_PIN0=0,
	DIO_PIN1=1,
	DIO_PIN2=2,
	DIO_PIN3=3,
	DIO_PIN4=4,
	DIO_PIN5=5,
	DIO_PIN6=6,
	DIO_PIN7=7
}Pin;
typedef enum
{
	DIO_INPUT=0,
	DIO_OUTPUT=1
}Direction;
typedef enum
{
	DIO_LOW=0,
	DIO_HIGH=1
}State;
typedef enum
{
	DIO_False=0,
	DIO_True=1
}Boolean;


#endif /* DIO_CONFIGURATION_H_ */