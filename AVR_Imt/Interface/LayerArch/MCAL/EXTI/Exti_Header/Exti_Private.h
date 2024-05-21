/*
 * Exti_Private.h
 *
 *  Created on: Apr 26, 2024
 *      Author: 20110
 */

#ifndef MCAL_EXTI_EXTI_HEADER_EXTI_PRIVATE_H_
#define MCAL_EXTI_EXTI_HEADER_EXTI_PRIVATE_H_

// MCUCR Register

#define MCUCR_ISC11 3
#define MCUCR_ISC10 2
#define MCUCR_ISC01 1
#define MCUCR_ISC00 0

// MCUCSR Register

#define MCUCSR_ISC2 6

// GICR Register

#define GICR_INT0 6
#define GICR_INT1 7
#define GICR_INT2 5

// GIFR Register

#define GIFR_INTF0 6
#define GIFR_INTF1 7
#define GIFR_INTF2 5


#define LowLevel     1
#define AnyLogical   2
#define FallingEdge  3
#define RisingEdge   4

#endif /* MCAL_EXTI_EXTI_HEADER_EXTI_PRIVATE_H_ */
