/*
 * DIO_Privatre.h
 *
 * Created: 5/13/2022 8:32:55 PM
 *  Author: Rabi3
 */ 


#ifndef DIO_PRIVATRE_H_
#define DIO_PRIVATRE_H_

#include "DIO_Configuration.h"
void DIO_SetPinDirection(Port p0,Pin pi,Direction dr);
void DIO_SetPinValue(Port p0,Pin pi,State st);
void DIO_TogglePinValue(Port p0,Pin pi);
uint8_t DIO_ReadPinValue(Port p0,Pin pi);
void DIO_SetPinPullup(Port p0,Pin pi);
void DIO_SetPortValue(Port p0,State st);
void DIO_SetPortDirection(Port p0,Direction Di);

#endif /* DIO_PRIVATRE_H_ */