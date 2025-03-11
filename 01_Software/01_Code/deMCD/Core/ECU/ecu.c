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

File Name: ecu.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu.h"


void ECU_vdInit(void)
{
#ifdef ECU_WDG_MODULE_ENABLE
  ECU_WDG_vdInit();
#endif /*ECU_WDG_MODULE_ENABLE*/

#ifdef ECU_SYS_MODULE_ENABLE
  ECU_SYS_vdInit();
#endif /*ECU_SYS_MODULE_ENABLE*/
  
#ifdef ECU_MEM_MODULE_ENABLE
  ECU_MEM_vdInit();
#endif /*ECU_MEM_MODULE_ENABLE*/
  
#ifdef ECU_COM_MODULE_ENABLE
  ECU_COM_vdInit();
#endif /*ECU_COM_MODULE_ENABLE*/
  
#ifdef ECU_IO_MODULE_ENABLE
  ECU_IO_vdInit();
#endif /*ECU_IO_MODULE_ENABLE*/
  
#ifdef ECU_SERIAL_MODULE_ENABLE
  ECU_SERIAL_vdInit();
#endif /*ECU_SERIAL_MODULE_ENABLE*/
  
#ifdef ECU_ANLG_MODULE_ENABLE
  ECU_ANLG_vdInit();
#endif /*ECU_ANLG_MODULE_ENABLE*/

#ifdef ECU_TXCP_MODULE_ENABLE
  ECU_TXCP_vdInit();
#endif /*ECU_TXCP_MODULE_ENABLE*/
  
#ifdef ECU_DIAG_MODULE_ENABLE
  ECU_DIAG_vdInit();
#endif /*ECU_DIAG_MODULE_ENABLE*/

}

void ECU_vdDeInit(void)
{
#ifdef ECU_WDG_MODULE_ENABLE
  ECU_WDG_vdDeInit();
#endif /*ECU_WDG_MODULE_ENABLE*/
  
#ifdef ECU_MEM_MODULE_ENABLE
  ECU_MEM_vdDeInit();
#endif /*ECU_MEM_MODULE_ENABLE*/

#ifdef ECU_TXCP_MODULE_ENABLE
  ECU_TXCP_vdDeInit();
#endif /*ECU_TXCP_MODULE_ENABLE*/

#ifdef ECU_DIAG_MODULE_ENABLE
  ECU_DIAG_vdDeInit();
#endif /*ECU_DIAG_MODULE_ENABLE*/

}
