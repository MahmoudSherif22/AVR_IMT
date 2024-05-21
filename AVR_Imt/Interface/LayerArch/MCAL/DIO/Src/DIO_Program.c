/*
 * DIO_Program.c
 *
 *  Created on: Apr 5, 2024
 *      Author: 20110
 */
#include "../../../COMMON/Bitmath.h"
#include "../../../COMMON/Stdtype.h"
#include "../Header/DIO_Interface.h"
#include "../Header/DIO_Private.h"
#include "../Header/DIO_Register.h"



void DIO_SelectDirectionForPin(u8 GroupName,u8 PinNumber,u8 DirectionState)
{

	if(GroupName >= DIO_GroupA && GroupName <= DIO_GroupD)
	{

		if(PinNumber <= DIO_Pin7 && PinNumber >= DIO_Pin0)
		{

			if(DirectionState == Input)  // Clrbit
			{
				switch(GroupName)
				{
				case DIO_GroupA :ClrBit(DIO_DDRA,PinNumber);break;
				case DIO_GroupB :ClrBit(DIO_DDRB,PinNumber);break;
				case DIO_GroupC :ClrBit(DIO_DDRC,PinNumber);break;
				case DIO_GroupD :ClrBit(DIO_DDRD,PinNumber);break;



				}


			}
			else if(DirectionState == Output)// SetBit
			{
				switch(GroupName)
				{
				case DIO_GroupA :SetBit(DIO_DDRA,PinNumber);break;
				case DIO_GroupB :SetBit(DIO_DDRB,PinNumber);break;
				case DIO_GroupC :SetBit(DIO_DDRC,PinNumber);break;
				case DIO_GroupD :SetBit(DIO_DDRD,PinNumber);break;



				}


			}

		}

	}


}




void DIO_SelectOutputTypeForPin(u8 GroupName,u8 PinNumber,u8 OutputState)
{

	if(GroupName >= DIO_GroupA && GroupName <=DIO_GroupD)
	{

		if(PinNumber <= DIO_Pin7 && PinNumber >= DIO_Pin0)
		{

			if(OutputState == Low) //ClrBit
			{
				switch(GroupName)
				{
				case DIO_GroupA :ClrBit(DIO_PORTA,PinNumber);break;
				case DIO_GroupB :ClrBit(DIO_PORTB,PinNumber);break;
				case DIO_GroupC :ClrBit(DIO_PORTC,PinNumber);break;
				case DIO_GroupD :ClrBit(DIO_PORTD,PinNumber);break;


				}


			}
			else if(OutputState == High) //SetBit
			{
				switch(GroupName)
				{
				case DIO_GroupA :SetBit(DIO_PORTA,PinNumber);break;
				case DIO_GroupB :SetBit(DIO_PORTB,PinNumber);break;
				case DIO_GroupC :SetBit(DIO_PORTC,PinNumber);break;
				case DIO_GroupD :SetBit(DIO_PORTD,PinNumber);break;


				}


			}

		}

	}


}


u8 ReadInputValueForPin(u8 GroupName,u8 PinNumber)
{
	u8 res = 0;

	if(GroupName >= DIO_GroupA && GroupName <=DIO_GroupD)
	{

		if(PinNumber <= DIO_Pin7 && PinNumber >= DIO_Pin0) // get
		{
			switch(GroupName)
			{
			case DIO_GroupA :res = GetBit(DIO_PINA,PinNumber);break;
			case DIO_GroupB :res = GetBit(DIO_PINB,PinNumber);break;
			case DIO_GroupC :res = GetBit(DIO_PINC,PinNumber);break;
			case DIO_GroupD :res = GetBit(DIO_PIND,PinNumber);break;


			}



		}

	}
	return res;


}


void DIO_SelectDirectionForGroup(u8 GroupName,u8 DirectionState)
{

	if(GroupName >= DIO_GroupA && GroupName <=DIO_GroupD)
	{
		if(DirectionState <= MaxValue && DirectionState >= MinValue)
		{
			switch(GroupName)
			{
			case DIO_GroupA : DIO_DDRA  = DirectionState ;break;
			case DIO_GroupB : DIO_DDRB  = DirectionState ;break;
			case DIO_GroupC : DIO_DDRC  = DirectionState ;break;
			case DIO_GroupD : DIO_DDRD  = DirectionState ;break;


			}



		}



	}
}

void DIO_SelectOutputTypeForGroup(u8 GroupName,u8 OutputState)
{
	if(GroupName >= DIO_GroupA && GroupName <=DIO_GroupD)
	{
		if(OutputState <= MaxValue && OutputState >= MinValue)
		{
			switch(GroupName)
			{
			case DIO_GroupA : DIO_PORTA  = OutputState ;break;
			case DIO_GroupB : DIO_PORTB  = OutputState ;break;
			case DIO_GroupC : DIO_PORTC  = OutputState ;break;
			case DIO_GroupD : DIO_PORTD  = OutputState ;break;

			}

		}
	}


}
u8 ReadInputValueForGroup(u8 GroupName)
{
	u8 res = 0;
	if(GroupName >= DIO_GroupA && GroupName <=DIO_GroupD)
	{
		switch(GroupName)
		{
		case DIO_GroupA :res =  DIO_PINA  ;break;
		case DIO_GroupB :res =  DIO_PINB  ;break;
		case DIO_GroupC :res =  DIO_PINC  ;break;
		case DIO_GroupD :res =  DIO_PIND  ;break;


		}
	}
	return res; // ?



}
// ctrl a ctrl i
