/*
 * KeyPad_Program.c
 *
 *  Created on: Apr 19, 2024
 *      Author: 20110
 */


#include "../../../COMMON/Stdtype.h"
#include "../../../COMMON/Bitmath.h"


#include "../../../MCAL/DIO/Header/DIO_Interface.h"

#include "../Header/Keypad_Interface.h"


static u8 KeypadValue[Column][Row] =
{
		{'1','4','7','C'},
		{'2','5','8','0'},
		{'3','6','9','='},
		{'/','*','-','+'}


};

void Keypad_Init()
{
	// Direction
	DIO_SelectDirectionForGroup(KeypadGroup,0x0f);
	//0 x 0 0 0 0 1 1 1 1
	//     4 ->7        0->3
	// first 4 pins (columns) set as output(1)
	// other 4 pins (Rows) set as Input (0)
	// Pull up and Vcc
	DIO_SelectOutputTypeForGroup(KeypadGroup,MaxValue); // Max value  enable pull up for R and vcc for column


/*notes
 * lw el direction wb2a be 0x0f bt4t8al 3la 2 pins bs
 *  lw el direction 0xf0 el pins m4 bt4t8l  */

}





//void Keypad_Init()
//{
//	/*Direction*/
//	DIO_SelectDirectionForGroup(KeypadGroup,0x0f);
//	//Pull up and Vcc
//	DIO_SelectOuputTypeForGroup(KeypadGroup,0xff);
//
//	/*
//	DIO_SelectDirectionForPin(Keypad_ColumnGroup ,KeyPad_C0,OutPut);
//	DIO_SelectDirectionForPin(Keypad_ColumnGroup ,KeyPad_C1,OutPut);
//	DIO_SelectDirectionForPin(Keypad_ColumnGroup ,KeyPad_C2,OutPut);
//	DIO_SelectDirectionForPin(Keypad_ColumnGroup ,KeyPad_C3,OutPut);
//
//	DIO_SelectDirectionForPin(Keypad_RowGroup ,KeyPad_R0,Input);
//	DIO_SelectDirectionForPin(Keypad_RowGroup ,KeyPad_R1,Input);
//	DIO_SelectDirectionForPin(Keypad_RowGroup ,KeyPad_R2,Input);
//	DIO_SelectDirectionForPin(Keypad_RowGroup ,KeyPad_R3,Input);
//
//	 */
//
//}

u8 Keypad_ReadValue()
{

	u8 BtnResult = 0;
	u8 BtnState  = 0 ;

	for(int C = 0 ; C<Column ;C++)
	{
		DIO_SelectOutputTypeForPin(KeypadGroup,C,Low); // set as ground

		for(int R = 0 ; R < Row ;R++)
		{
			BtnState = ReadInputValueForPin(KeypadGroup,R+4);// +4
			if(BtnState == 0)
			{
				// action
				BtnResult = KeypadValue[C][R];
				return BtnResult;
			}
		}
		DIO_SelectOutputTypeForPin(KeypadGroup,C,High);
	}

	return BtnResult;

}
