/*
 * Exti_Interface.h
 *
 *  Created on: Apr 26, 2024
 *      Author: 20110
 */

#ifndef MCAL_EXTI_EXTI_HEADER_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_HEADER_EXTI_INTERFACE_H_

#include"../../../COMMON/Stdtype.h"
#include"Exti_Reg.h"
#include"Exti_Private.h"
#include"Exti_Config.h"

void EXTI_Init0(u8 SensControl);  // SensControl -> low /high /rising falling INT0
void EXTI_Init1(u8 SensControl); //                                            INT
void EXTI_Init2(u8 SensControl);//                                             INT2

void __vector__1() __attribute__((signal));
void __vector__2() __attribute__((signal));
void __vector__3() __attribute__((signal));

void EXTI_CallbackINT0(void(*pf)(void));
void EXTI_CallbackINT1(void(*pf)(void));
void EXTI_CallbackINT2(void(*pf)(void));


void animation();
#endif /* MCAL_EXTI_EXTI_HEADER_EXTI_INTERFACE_H_ */
