/*
 * Lcd_Interface.h
 *
 *  Created on: Apr 19, 2024
 *      Author: 20110
 */

#ifndef HAL_LCD_HEADER_LCD_INTERFACE_H_
#define HAL_LCD_HEADER_LCD_INTERFACE_H_

#include "../../../COMMON/Stdtype.h"
#include "Lcd_Private.h"
#include "Lcd_Config.h"


void Lcd_init();
void Lcd_SendCommand(u8 Command);
void Lcd_SendData(u8 Data);
void Lcd_SendString(u16 *String);
void Lcd_GoToXY(u8 XPos ,u8 YPos);
void Display_2LinesMode(u8 Index);
void Display_ShiftingMode(u8 Index);


#endif /* HAL_LCD_HEADER_LCD_INTERFACE_H_ */
