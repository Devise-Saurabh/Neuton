/*
***************************************************************************
***************************************************************************
(C) Copyright 2020 2021 Devise Electronics Pvt Ltd.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt Ltd

Devise Electronics Pvt Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: os_cfg.c
Author: Karim Mansour 
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "os_cfg.h"
#include "os.h"
#include "os_tasks.h"

OS_strTask_t OS_astrTasks[OS_TASKS_NB] = {
	{
		(uint8_t)1,                  /*TASK ID*/
		OS_vdTask1ms,              /*Callback function*/
		(uint32_t)OS_SYS_TASK_TRIGGER_US,              /*Period in microseconds*/
		(uint32_t)OS_SYS_TASK_TRIGGER_US,              /*Time Left = Period in microseconds*/
		OS_TASK_STATUS_IDLE,           /*Task Status*/
		OS_START_OFFSET_0000US      /*Task Start Offset */
	},
	{
		(uint8_t)2,                  /*TASK ID*/
		OS_vdTask10ms,              /*Callback function*/
		(uint32_t)10000,              /*Period in microseconds*/
		(uint32_t)10000,              /*Time Left = Period in microseconds*/
		OS_TASK_STATUS_IDLE,           /*Task Status*/
		OS_START_OFFSET_0000US      /*Task Start Offset */
	},
	{
		(uint8_t)3,                  /*TASK ID*/
		OS_vdTask50ms,             /*Callback function*/
		(uint32_t)50000,             /*Period in microseconds*/
		(uint32_t)50000,             /*Time Left = Period in microseconds*/
		OS_TASK_STATUS_IDLE,           /*Task Status*/
		OS_START_OFFSET_1000US      /*Task Start Offset */
	},
	{
		(uint8_t)4,                  /*TASK ID*/
		OS_vdTask100ms,            /*Callback function*/
		(uint32_t)100000,            /*Period in microseconds*/
		(uint32_t)100000,            /*Time Left = Period in microseconds*/
		OS_TASK_STATUS_IDLE,           /*Task Status*/
		OS_START_OFFSET_2000US      /*Task Start Offset */
	}
};


