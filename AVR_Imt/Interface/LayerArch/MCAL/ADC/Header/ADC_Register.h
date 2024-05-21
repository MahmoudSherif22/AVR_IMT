/*
 * ADC_Register.h
 *
 *  Created on: May 10, 2024
 *      Author: 20110
 */

#ifndef MCAL_ADC_HEADER_ADC_REGISTER_H_
#define MCAL_ADC_HEADER_ADC_REGISTER_H_


#include "../../../COMMON/Stdtype.h"
#define ADC_ADMUX    *((volatile u8*)0x27)
#define ADC_ADCSRA   *((volatile u8*)0x26)
#define ADC_ADCH     *((volatile u8*)0x25)
#define ADC_ADCL     *((volatile u8*)0x24)


#define ADC_DATA      *((volatile u16*)0x24)
#define ADC_SFIOR     *((volatile u8*)0x50)
#endif /* MCAL_ADC_HEADER_ADC_REGISTER_H_ */
