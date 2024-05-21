///*
// * DCmotor_Program.c
// *
// *  Created on: Apr 26, 2024
// *      Author: 20110
// */
//

#include<util/delay.h>
#include"../../../COMMON/Stdtype.h"
#include"../../../COMMON/BitMath.h"

#include "../../../MCAL/DIO/Header/DIO_Private.h"
#include"../../../MCAL/DIO/Header/DIO_Interface.h"

#include"../Header/Dcmotor_Config.h"
#include"../Header/Dcmotor_Interface.h"

void DCMotor_Init()
{
DIO_SelectDirectionForPin(DCMotor_Group,DCMotor_Pin0,Output);
DIO_SelectDirectionForPin(DCMotor_Group,DCMotor_Pin1,Output);
}

void DCMotor_ONClockWise()
{
	DIO_SelectOutputTypeForPin(DCMotor_Group,DCMotor_Pin0,Low);
	DIO_SelectOutputTypeForPin(DCMotor_Group,DCMotor_Pin1,High);
}

void DCMotor_ONAntiClockWise()
{
	DIO_SelectOutputTypeForPin(DCMotor_Group,DCMotor_Pin1,Low);
	DIO_SelectOutputTypeForPin(DCMotor_Group,DCMotor_Pin0,High);


}
void DCMotor_OFF()
{
	DIO_SelectOutputTypeForPin(DCMotor_Group,DCMotor_Pin0,Low);
		DIO_SelectOutputTypeForPin(DCMotor_Group,DCMotor_Pin1,Low);

}
