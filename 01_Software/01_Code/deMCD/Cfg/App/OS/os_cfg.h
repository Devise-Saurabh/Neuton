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

File Name: os_cfg.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef OS_CFG_H
#define OS_CFG_H

#define OS_MODULE_ENABLE

/*Number of tasks*/
#define OS_TASKS_NB                               (4)

/* System Task Tick Period (MINIMUM TASK) */
#define OS_SYS_TASK_TRIGGER_US                    (1000UL)

/*Limit of timer slack counter to issue error*/
#define OS_TASKS_TIMER_SLACK_MAX                  (4)

#undef OS_TASKS_HW_MEASUREMENTS_ENABLE




#endif /*OS_CFG_H*/

