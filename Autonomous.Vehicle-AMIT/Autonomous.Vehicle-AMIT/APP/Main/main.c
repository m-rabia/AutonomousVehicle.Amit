/*
 * Autonomous.Vehicle-AMIT.c
 *
 * Created: 5/13/2022 7:10:19 PM
 * Author : Rabi3
 */ 

#include <avr/io.h>
#include "main.h"

int main(void)
{
   void Motor_Initialize(void);
   void ServoMotor_Initialize(void);
   void LCD_Initialize(void);
   sei();
   
   int16_t right;
   int16_t left;
   
   ISR (INT0_vect)
   {
	   if (i==1)
	   {
		   TCCR1B| =0;
		   pulse = TCNT1;
		   TCNT1 =0;
		   i=0;
	   }
	   if (i==0)
	   {
		   TCCR1B| = 1<<CS10;
		   i=1;
	   }
   }
    while (1) 
    {
	 Motor_ON(motor_direction clockwise, motor_enable enable1);
	 Motor_ON(motor_direction clockwise, motor_enable enable2);
	 Ultrasonic_Read();
	 
	if (count_a =< 20)
	{
		 Motor_OFF(motor_enable enable1);
		 Motor_OFF(motor_enable enable2);
		 ServoMotor_RotateRight();
		 Ultrasonic_Read();
		count_a = right;
		 ServoMotor_RotateLeft();
		 Ultrasonic_Read();
		count_a = left;
		if (right>=left) //Compare left and right reading of the US sensor
		{
			 Motor_ON(motor_direction anticlockwise, motor_enable enable1);
			 Motor_OFF(motor_direction clockwise, motor_enable enable2);
			 LCD_Clear();
			 LCD_Write_String((uint8_t*) "Turning Right");
			 _delay_ms(100000);
			 LCD_Clear();
			 _delay_ms(50);
			 LCD_Write_String((uint8_t) "Moving Forward");
		}
		else if (left>right)
		{
			 Motor_ON(motor_direction clockwise, motor_enable enable1);
			 Motor_OFF(motor_direction anticlockwise, motor_enable enable2);
			 LCD_Clear();
			 LCD_Write_String((uint8_t*) "Turning Left");
			 _delay_ms(100000);
			 LCD_Clear();
			 _delay_ms(50);
			 LCD_Write_String((uint8_t) "Moving Forward");
		}	
	}
	else
	{
	    LCD_Write_String((uint8_t) "Moving Forward");
	}	
    }


