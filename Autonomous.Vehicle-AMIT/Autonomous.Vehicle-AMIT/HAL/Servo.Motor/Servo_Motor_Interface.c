/*
 * Servo_Motor_Interface.c
 *
 * Created: 5/14/2022 2:27:50 PM
 *  Author: Rabi3
 */ 

#include "Servo_Motor_Private.h"

void ServoMotor_Initialize(void)
{
	//Define Direction for OC1A pin as output
	SET_BIT(DDRD, PD5);
	//Choose mode from timer1 modes
	SET_BIT(TCCR1B, WGM13);SET_BIT(TCCR1B, WGM12);SET_BIT(TCCR1A, WGM11);CLR_BIT(TCCR1A, WGM10);
	//Choose non-inverting mode
	SET_BIT(TCCR1A, COM1A1);CLR_BIT(TCCR1A, COM1A0);
	//Choose Prescaler	
	SET_BIT(TCCR1B, CS12);CLR_BIT(TCCR1B, CS11);CLR_BIT(TCCR1B, CS10);
	//Set new top value
	ICR1 = 39999;
}
void ServoMotor_RotateRight(void)
{
	OCR1A = 1199;
	_delay_ms(5000);
}
void ServoMotor_RotateLeft(void)
{
	OCR1A = 4899;
	_delay_ms(5000);
}