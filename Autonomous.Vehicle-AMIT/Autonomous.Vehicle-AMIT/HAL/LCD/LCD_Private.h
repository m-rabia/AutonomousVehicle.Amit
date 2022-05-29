/*
 * LCD_Private.h
 *
 * Created: 5/14/2022 2:28:17 PM
 *  Author: Rabi3
 */ 


#ifndef LCD_PRIVATE_H_
#define LCD_PRIVATE_H_

#include "LCD_Configuration.h"

void LCD_Initialize(void);
void LCD_Clear(void);
void LCD_Write_Command(uint8_t command);
void LCD_Write_Character(uint8_t character);
void LCD_Write_String(uint8_t* str);


#endif /* LCD_PRIVATE_H_ */