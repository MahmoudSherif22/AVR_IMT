/*
 * Dcmotor_Interface.h
 *
 *  Created on: Apr 26, 2024
 *      Author: 20110
 */

#ifndef HAL_DCMOTOR_HEADER_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_HEADER_DCMOTOR_INTERFACE_H_

#include"../../../COMMON/Stdtype.h"
#include"Dcmotor_Config.h"
#include"Dcmotor_Private.h"
void DCMotor_Init();
void DCMotor_ONClockWise();
void DCMotor_ONAntiClockWise();
void DCMotor_OFF();



#endif /* HAL_DCMOTOR_HEADER_DCMOTOR_INTERFACE_H_ */
