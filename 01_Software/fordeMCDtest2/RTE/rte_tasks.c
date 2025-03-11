/*
***************************************************************************
***************************************************************************
(C) 2020-2021 Devise Electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of SIGRA Technologies GmbH and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of SIGRA Technologies GmbH

Devise Electronics Pvt Ltd,
Bavdhan,
411021, Pune,
India

File Name: rte_tasks.c
Author: deVCU-deMCD Generated 
E-mail: devcu@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "rte_app.h"


void APP_vdTask1ms(void);
void APP_vdTask10ms(void);
void APP_vdTask50ms(void);
void APP_vdTask100ms(void);


void APP_vdTask1ms(void)
{
  /* app_FaultMgr_fcn Package */
  app_FaultMgr_fcn();
  /* app_Main1msMgr_fcn Package */
  app_Main1msMgr_fcn();
}


void APP_vdTask10ms(void)
{
  /* app_Main10msMgr_fcn Package */
  app_Main10msMgr_fcn();
}


void APP_vdTask50ms(void)
{
  /* app_Main50msMgr_fcn Package */
  app_Main50msMgr_fcn();
}


void APP_vdTask100ms(void)
{
  /* app_Main100msMgr_fcn Package */
  app_Main100msMgr_fcn();
}


