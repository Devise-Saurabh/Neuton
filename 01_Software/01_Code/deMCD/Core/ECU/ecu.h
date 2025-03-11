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


File Name: ecu.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef ECU_H
#define ECU_H


#include "ecu_com_cfg.h"
#include "ecu_com.h"
#include "ecu_com_cfg_gen.h"
#include "ecu_io_cfg.h"
#include "ecu_io.h"
#include "ecu_serial_cfg.h"
#include "ecu_serial.h"
#include "ecu_mem_cfg.h"
#include "ecu_mem.h"
#include "ecu_anlg_cfg.h"
#include "ecu_anlg.h"
#include "ecu_system_cfg.h"
#include "ecu_system.h"
#include "ecu_wdg_cfg.h"
#include "ecu_wdg.h"
#include "ecu_txcp_cfg.h"
#include "ecu_txcp.h"
#include "ecu_diag_cfg.h"
#include "ecu_diag.h"

void ECU_vdInit(void);
void ECU_vdDeInit(void);

#endif /*ECU_H*/

