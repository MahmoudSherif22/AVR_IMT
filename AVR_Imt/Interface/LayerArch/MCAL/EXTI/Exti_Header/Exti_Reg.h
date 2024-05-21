/*
 * Exti_Reg.h
 *
 *  Created on: Apr 26, 2024
 *      Author: 20110
 */

#ifndef MCAL_EXTI_EXTI_HEADER_EXTI_REG_H_
#define MCAL_EXTI_EXTI_HEADER_EXTI_REG_H_
#include"../../../COMMON/Stdtype.h"

#define EXTI_MCUCR *((volatile u8*) 0x55)
#define EXTI_MCUCSR *((volatile u8*)0x54)
#define EXTI_GICR *((volatile u8*)  0x5B)
#define EXTI_GIFR *((volatile u8*)  0x5A)





#endif /* MCAL_EXTI_EXTI_HEADER_EXTI_REG_H_ */
