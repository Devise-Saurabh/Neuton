/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd,
Bavdhan,
411021, Pune,
India

File Name: lib_data.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "lib_data.h"

float LIB_DATA_fltRaw2Phy(uint32_t u32RawData, float fltResolution, float fltOffset)
{
	float fltPhyData;
	
	fltPhyData = (float)(((float)((fltResolution)*((float)u32RawData))) + ((float)(fltOffset)));
	
	return fltPhyData;
}

uint32_t LIB_DATA_u32Phy2Raw(float fltPhyData, float fltResolution, float fltOffset)
{
	uint32_t u32RawData;
	
	if(fltResolution != (float)0)
	{
		u32RawData = (uint32_t)((float)(((float)((fltPhyData)-((float)fltOffset)))/(fltResolution)));
	}
	else
	{
		u32RawData = 0;
	}
	
	return u32RawData;
}

