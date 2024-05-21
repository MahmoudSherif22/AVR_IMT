/*
 * Interrupttst.c
 *
 *  Created on: May 9, 2024
 *      Author: 20110
 */

//
//#include"util/delay.h"
//#include"COMMON/Stdtype.h"
//#include"COMMON/DIO.h"
//#include"COMMON/Bitmath.h"
/*
#include "HAL/Keypad/Header/Keypad_Interface.h"
#include "HAL/Lcd/Header/Lcd_Interface.h"
#include"Hal/Keypad/Header/keypad_Interface.h"
#include "MCAL/DIO/Header/DIO_Interface.h"

 */
//#include"MCAL/DIO/Header/DIO_Register.h"
//#include"MCAL/DIO/Header/DIO_Interface.h"

/*
#include"HAL/Lcd/Header/Lcd_Interface.h"
#include"HAL/Keypad/Header/Keypad_Interface.h"*/

//#include"MCAL/EXTI/Exti_Header/Exti_Interface.h"
//#include "MCAL/GIE/GIE.h"
//
//void main()
//
//{










	//GIE_Enable();
	//Leds

	/*DIO_SelectDirectionForPin(DIO_GroupB,DIO_Pin0,Output);
	//Buzzer
	DIO_SelectDirectionForPin(DIO_GroupB,DIO_Pin1,Output);

	// Btn Direction and pullup
	DIO_SelectDirectionForPin(DIO_GroupD,DIO_Pin2,Input); // pin2
	DIO_SelectOutputTypeForPin(DIO_GroupD,DIO_Pin2,High); // pin2
*/
	//INTO

//	EXTI_Init1(RisingEdge);
//	GIE_Enable();
	//EXTI_CallbackINT0(animation);
//	EXTI_Init0(RisingEdge);
//	GIE_Enable();




/*

while(1)
{
	DIO_SelectOutputTypeForPin(DIO_GroupB,DIO_Pin0,High);
	_delay_ms(1000);

	DIO_SelectOutputTypeForPin(DIO_GroupB,DIO_Pin0,Low);
	_delay_ms(1000);
}


}

void __vector1__() __attribute__((signal)); // signal 34an

void __vector1__()
{

	static u8 BuzzerState = High;
	if(BuzzerState == High)
	{
		DIO_SelectOutputTypeForPin(DIO_GroupB,DIO_Pin1,Low);
		BuzzerState = Low;
	}
	else if(BuzzerState == Low)
	{
		DIO_SelectOutputTypeForPin(DIO_GroupB,DIO_Pin1,High);
		BuzzerState = High;

	}

}
*/











/*
 *
 * Lcd_init();
	Keypad_Init();
	u8 value = 0;


		value = Keypad_ReadValue();
		Lcd_SendData(value);
 *
 *
 *
 * try keypad with lcd
 * 	Lcd_init();
	Keypad_Init();

	u8 value = 0;
	while(1){
		value = Keypad_ReadValue();
		//Lcd_SendString(value);
		Lcd_SendData(value);
 *
 */

/*
 * Lcd_init();



		Lcd_SendString("BANKI ZANKI NO TACH");
		_delay_ms(1000);*/



/*
 * Lcd_init();

	//Lcd_SendData('A');
	while(1)
	{
		Lcd_SendString("mahmoud");
		_delay_ms(1000);



	}
 * */




/*
    Lcd_Init();
	KeyPad_Init();

	u8 value = 0;
	while(1)
		{
	value = Keypad_ReadValue();
	Lcd_SendString(value);
		}
 */
