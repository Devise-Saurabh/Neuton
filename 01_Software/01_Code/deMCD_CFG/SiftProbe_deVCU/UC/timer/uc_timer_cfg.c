/*
***************************************************************************
***************************************************************************
(C) Devise electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt. Ltd

Devise Electronics Pvt. Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: uc_timer_cfg.c
Author: Devise Electronics Embedded Team 
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_timer_cfg.h"
#include "uc_timer.h"

UC_TIMER_TimeOutSignal_t UC_TIMER_strTimeOutSignals[UC_TIMER_SIGNALS_NUMBER] = 
{
  {
    0,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    1,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    2,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    3,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    4,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    5,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    6,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    7,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    8,
    0,
    0,
    0,
    deMCD_NULL,
  },
  {
    9,
    0,
    0,
    0,
    deMCD_NULL,
  },
};
