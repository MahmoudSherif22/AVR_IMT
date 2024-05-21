/*
 * GIE.c
 *
 *  Created on: Apr 27, 2024
 *      Author: 20110
 */


#include "../../COMMON/Bitmath.h"
#include "GIE.h"

void GIE_Enable()
{
	SetBit(GIE_SREG,GIE_I);
}

void GIE_Disable()
{
	ClrBit(GIE_SREG,GIE_I);
}
