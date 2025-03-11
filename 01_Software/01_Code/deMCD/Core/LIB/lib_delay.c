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

File Name: lib_delay.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "lib_delay.h"

#define LIB_DELAY_LOOP_TIME_NS                             (50)

void LIB_DELAY_vdNanoSeconds(uint32_t u32NanoSeconds)
{
  uint32_t u32IndexDelay;
  
  for(u32IndexDelay = (uint32_t)0; u32IndexDelay < (u32NanoSeconds/LIB_DELAY_LOOP_TIME_NS); u32IndexDelay++)
  {
    /*Do Nothing*/
  }
}

