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
India,

File Name: app.h
Author: Devise Elctronics Embedded Software
E-mail: Shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef APP_H
#define APP_H

#define APPLICATION_SOFTWARE

#include "rte_app.h"
#include "app_diag_cfg.h"
#include "app_diag.h"
#include "app_diag_gf.h"
#include "app_FaultMgr_cfg.h"
#include "app_FaultMgr.h"


void APP_vdInit(void);
void APP_vdDeInit(void);

#endif /*APP_H*/

