/*
 * PMW_Interface.c
 *
 * Created: 5/14/2022 10:55:51 PM
 *  Author: Rabi3
 */ 


#include "PMW_Private.h"

void PWM_Fast_Initialize(void)
{
	SET_BIT(DDRB, PB3);//Define direction for OC0 Pin
	SET_BIT(TCCR0, WGM01);SET_BIT(TCCR0, WGM00);//Choose Fast PWM Mode
	#if PWM0_Mode == PWM0_NonInverting
	SET_BIT(TCCR0, COM01);CLR_BIT(TCCR0, COM00);
	#elif PWM0_Mode == PWM0_Inverting
	SET_BIT(TCCR0, COM01);SET_BIT(TCCR0, COM00);
	#endif
}
void PWM_Fast_Start(void)
{
	SET_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);
}
void PWM_Fast_Stop(void)
{
	CLR_BIT(TCCR0, CS02);CLR_BIT(TCCR0, CS01);CLR_BIT(TCCR0, CS00);
}
void PWW_Fast_SetDutyCycle(uint8_t dutycycle)
{
	#if PWM0_Mode == PWM0_NonInverting
	OCR0 = ((BITS * dutycycle) / 100) - 1;
	#elif PWM0_Mode == PWM0_Inverting
	OCR0 = (BITS - 1) - (((BITS * dutycycle) / 100) - 1);
	#endif
}