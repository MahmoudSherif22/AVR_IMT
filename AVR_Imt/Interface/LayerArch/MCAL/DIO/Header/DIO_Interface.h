/*
 * DIO_Interface.h
 *
 *  Created on: Apr 5, 2024
 *      Author: 20110
 */

#ifndef MCAL_DIO_HEADER_DIO_INTERFACE_H_
#define MCAL_DIO_HEADER_DIO_INTERFACE_H_
#include "../../../COMMON/Stdtype.h"
#include "DIO_Private.h"  // new
#include"DIO_Register.h"
/* Direction*/
void DIO_SelectDirectionForPin(u8 GroupName,u8 PinNumber,u8 DirectionState);
void DIO_SelectDirectionForGroup(u8 GroupName,u8 DirectionState);


/*Output */
void DIO_SelectOutputTypeForPin(u8 GroupName,u8 PinNumber,u8 OutputState);
void DIO_SelectOutputTypeForGroup(u8 GroupName,u8 OutputState);

/* Input */
u8 ReadInputValueForPin(u8 GroupName,u8 PinNumber);
u8 ReadInputValueForGroup(u8 GroupName);

/* PullUp*/
#endif /* MCAL_DIO_HEADER_DIO_INTERFACE_H_ */
