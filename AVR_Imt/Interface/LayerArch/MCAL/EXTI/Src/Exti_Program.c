/*
 * Exti_Program.c
 *
 *  Created on: Apr 27, 2024
 *      Author: 20110
 */

#include"../../../COMMON/Stdtype.h"
#include"../../../COMMON/Bitmath.h"

#include"../Exti_Header/Exti_Interface.h"


static void(*GINT0)(void) =  NULL ;
static void(*GINT1)(void) =  NULL ;
static void(*GINT2)(void) =  NULL ;

void __vector__1()
{ if(GINT0 != NULL)
{
	GINT0();
}


}
void __vector__2()
{

	if(GINT0 != NULL)
	{
		GINT1();
	}
}
void __vector__3()
{

	if(GINT2 != NULL)
	{
		GINT0();
	}
}
void EXTI_CallbackINT0(void(*pf)(void))
{
	if(pf != NULL)
	{
		GINT0 = pf;
	}
}
void EXTI_CallbackINT1(void(*pf)(void))
{
	if(pf != NULL)
	{
		GINT1 = pf;
	}
}
void EXTI_CallbackINT2(void(*pf)(void))
{
	if(pf != NULL)
	{
		GINT2 = pf;
	}
}





void EXTI_Init0(u8 SensControl)
{
	if(SensControl == LowLevel)
	{
		// Set ISC11 as low
		// Set ISC10 as low
		ClrBit(EXTI_MCUCR,MCUCR_ISC00);
		ClrBit(EXTI_MCUCR,MCUCR_ISC01);

	}
	else if (SensControl == AnyLogical)
	{
		// Clr ISC11
		// Set ISC10
		ClrBit(EXTI_MCUCR,MCUCR_ISC00);
		SetBit(EXTI_MCUCR,MCUCR_ISC01);

	}
	else if (SensControl == FallingEdge)
	{
		SetBit(EXTI_MCUCR,MCUCR_ISC00);
		ClrBit(EXTI_MCUCR,MCUCR_ISC01);

	}
	else if (SensControl == RisingEdge)
	{
		SetBit(EXTI_MCUCR,MCUCR_ISC00);
		SetBit(EXTI_MCUCR,MCUCR_ISC01);

	}
	SetBit(EXTI_GICR,GICR_INT0); //
}

void EXTI_Init1(u8 SensControl)
{
	if(SensControl == LowLevel)
	{
		// Set ISC11 as low
		// Set ISC10 as low
		ClrBit(EXTI_MCUCR,MCUCR_ISC11);
		ClrBit(EXTI_MCUCR,MCUCR_ISC10);

	}
	else if (SensControl == AnyLogical)
	{
		// Clr ISC11
		// Set ISC10
		ClrBit(EXTI_MCUCR,MCUCR_ISC11);
		SetBit(EXTI_MCUCR,MCUCR_ISC10);

	}
	else if (SensControl == FallingEdge)
	{
		SetBit(EXTI_MCUCR,MCUCR_ISC11);
		ClrBit(EXTI_MCUCR,MCUCR_ISC10);

	}
	else if (SensControl == RisingEdge)
	{
		SetBit(EXTI_MCUCR,MCUCR_ISC11);
		SetBit(EXTI_MCUCR,MCUCR_ISC10);

	}
	SetBit(EXTI_GICR,GICR_INT1); //
}






void EXTI_Init2(u8 SensControl)
{

	if (SensControl == FallingEdge)
	{
		// CLr ISC2
		ClrBit(EXTI_MCUCSR,MCUCSR_ISC2);

	}
	else if (SensControl == RisingEdge)
	{

		SetBit(EXTI_MCUCSR,MCUCSR_ISC2);

	}
	SetBit(EXTI_GICR,GICR_INT2)
}
/*
void animation()
{

	//Leds

	DIO_SelectDirectionForPin(DIO_GroupA,DIO_Pin0,Output);

	//Buzzer
	DIO_SelectDirectionForPin(DIO_GroupA,DIO_Pin1,Output);

	// Btn Direction and pullup
	DIO_SelectDirectionForPin(DIO_GroupD,DIO_Pin0,Input); // pin2
	DIO_SelectOutputTypeForPin(DIO_GroupD,DIO_Pin0,High); // pin2

	//INTO

	//EXTI_Init0(RisingEdge);
	//GIE_Enable();
	EXTI_CallbackINT0(void(*pf)(void));
	EXTI_Init0(RisingEdge);
	GIE_Enable();






	while(1)
	{
		DIO_SelectOutputTypeForPin(DIO_GroupA,DIO_Pin0,High);
		_delay_ms(1000);

		DIO_SelectOutputTypeForPin(DIO_GroupA,DIO_Pin1,Low);
		_delay_ms(1000);
	}

}*/
