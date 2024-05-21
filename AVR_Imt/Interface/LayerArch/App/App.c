/*#include"util/delay.h"
#include"COMMON/Stdtype.h"
#include"COMMON/DIO.h"
#include"COMMON/Bitmath.h"

#include "HAL/Keypad/Header/Keypad_Interface.h"
#include "HAL/Lcd/Header/Lcd_Interface.h"
#include"Hal/Keypad/Header/keypad_Interface.h"
#include "MCAL/DIO/Header/DIO_Interface.h"


#include"MCAL/DIO/Header/DIO_Register.h"
#include"MCAL/DIO/Header/DIO_Interface.h"


#include"HAL/Lcd/Header/Lcd_Interface.h"
#include"HAL/Keypad/Header/Keypad_Interface.h"

#include"HAL/Dcmotor/Header/Dcmotor_Interface.h"

void main()
{

	// Assignment DC motor



	// DCMotor Init
	DCMotor_Init();

	// button 1 init
	ClrBit(DIO_DDRB,DIO_Pin0);
	SetBit(DIO_PORTB,DIO_Pin0);
	// button 2 init
	ClrBit(DIO_DDRB,DIO_Pin1);
	SetBit(DIO_PORTB,DIO_Pin1);

	u8 value1 = 0 ;
	u8 value2 = 0 ;
	while(1)
	{
		value1 = ReadInputValueForPin(DIO_GroupB,DIO_Pin0);
		value2 =  ReadInputValueForPin(DIO_GroupB,DIO_Pin1);

		if(value1 == High && value2 == Low)
		{
			DCMotor_ONClockWise();
			_delay_ms(500);
			DCMotor_OFF();
			_delay_ms(1000);
		}
		else if (value2 == High && value1 == Low)
		{
			DCMotor_ONAntiClockWise();
			_delay_ms(500);
			DCMotor_OFF();
			_delay_ms(1000);
		}
		else
		{
			DCMotor_OFF();
		}
	}

}

/*
 * Basic Dc motor run
	SetBit(DIO_DDRD,DIO_Pin0);
	ClrBit(DIO_DDRB,DIO_Pin0);
	SetBit(DIO_PORTB,DIO_Pin0);
	u8 value = 0;
	while(1)
	{
		value = ReadInputValueForPin(DIO_GroupB,DIO_Pin0);
		if(value == Low){
		SetBit(DIO_PORTD,DIO_Pin0);
		_delay_ms(100);
		}
		else{
		ClrBit(DIO_DDRD,DIO_Pin0);
		_delay_ms(500);
		}

	}
 */





/*
 * Lcd_init();

	//Lcd_SendData('A');
	while(1)
	{
		Lcd_SendString("mahmoud");
		_delay_ms(1000)

	}
 * */





