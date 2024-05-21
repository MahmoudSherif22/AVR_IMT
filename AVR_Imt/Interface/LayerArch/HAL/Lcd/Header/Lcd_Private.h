/*
 * Lcd_Private.h
 *
 *  Created on: Apr 18, 2024
 *      Author: 20110
 */

#ifndef HAL_LCD_HEADER_LCD_PRIVATE_H_
#define HAL_LCD_HEADER_LCD_PRIVATE_H_

#define Lcd_ClearDisplay                    0x01
#define Lcd_ReturnHome                      0x02

#define Lcd_8Bit2Line8size                  0x38
#define Lcd_DisplayOff                      0x08
#define Lcd_DisplayOnWithoutCursor          0x0C
#define Lcd_DisplayOnWithCursorFixed        0x0E
#define Lcd_DisplayOnWithCursorBlinking     0x0F
#define Lcd_EntryModeOff                    0x04

/*instructions 2 */

// Entry mode

#define Lcd_ClearDisplay    0x01
#define Lcd_ReturnHome      0x02
#define Lcd_EntryMode1      0x04 // decrement ,No display shift
#define Lcd_EntryMode2      0x06 // increment ,No Display shift
#define Lcd_EntryMode3      0x07 // increment , display shift
#define Lcd_EntryMode4      0x05 // decrement , display shift

//Display on / off
#define Lcd_DisplayOff 0x08 // d =0 c =0 B=0
#define Lcd_DisplayOn  0x0C // d =1
#define Lcd_CursorOn   0x0E  // D = 1 (by default)C = 1 B =0
#define Lcd_CursorBlinkMode 0x0F // d=1 c =1 b=1

/*Cursor or display Shift */
/*m4 fahm el far2 ben el cursor w el display shift ?*/

#define Lcd_MoveCursor       0x10
#define Lcd_ShiftScreenLeft  0x18 // ??
#define Lcd_ShiftScreenRight 0x1C

/*
 * Function set
 * DL = Data length (de elly bt7dd el mode ely h4t8l beh
 * */

#define Lcd_Set4Mode1Line5x8Size 0x20
#define Lcd_Set4Mode2ine5x8Size  0x28
#define Lcd_Set4Mode1ine5x11Size  0x24
#define Lcd_Set4Mode2ine5x11Size  0x2C

#define Lcd_Set8Mode1Line5x8Size   0x30 // 34an el default bta el lcd bykon nfs el klam
#define Lcd_Set8Mode2ine5x8Size    0x38
#define Lcd_Set8Mode1ine5x11Size   0x34
#define Lcd_Set8Mode2ine5x11Size   0x3C

#define Lcd_Restart 0x30  // 34an el default bta el lcd bykon nfs el klam

// CGRAM

#define Lcd_SetCGRAM 0x40

// DDRAM
#define Lcd_SetDDRAM 0x80

#define Lcd_Line1 0
#define Lcd_Line2 1
#define Lcd_Line2Address 0x40
#define Lcd_Line1Address 0x00
#endif /* HAL_LCD_HEADER_LCD_PRIVATE_H_ */

