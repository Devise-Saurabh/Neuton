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

File Name: os.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "os_cfg.h"
#include "os.h"

#ifdef OS_MODULE_ENABLE

#include "lib_types.h"
#include "uc.h"


/* Global variables for internal use */
uint32_t OS_u32SystemTick = (uint32_t)0;
uint32_t OS_u32SystemTimerUs;
uint32_t OS_u32UpdateTasksCounter;
uint8_t OS_u8ShutDownSignal = (uint8_t)deMCD_FALSE;
uint8_t OS_u8ReInitializeSignal = (uint8_t)deMCD_FALSE;

/* Eternal Global Variables*/
extern OS_strTask_t OS_astrTasks[OS_TASKS_NB];

/* Declaration of internal functions */
void local_OS_vdTrigger(void);
uint32_t local_OS_u32GetSystemTickTrigVal(void);
void local_OS_vdAddTask(uint8_t u8IdTask, uint32_t u32Period, OS_p2fTask_t p2fTask);
void local_OS_vdRemoveTask(uint8_t u8IdTask);

void OS_vdInit(void)
{
  uint8_t u8IndexTasks;
  
  OS_u8ShutDownSignal = (uint8_t)deMCD_FALSE;
	OS_u8ReInitializeSignal = (uint8_t)deMCD_FALSE;
  
  UC_TIMER_vdRegisterTickCallback(local_OS_vdTrigger);
	
	OS_u32SystemTimerUs = UC_TIMER_u32TimerTickUs();
	OS_u32UpdateTasksCounter = 0UL;
  OS_u32SystemTick = (uint32_t)0;
	
	for(u8IndexTasks = (uint8_t)0; u8IndexTasks < (uint8_t)OS_TASKS_NB; u8IndexTasks++)
	{
		local_OS_vdAddTask(OS_astrTasks[u8IndexTasks].u8Id,OS_astrTasks[u8IndexTasks].u32Period,OS_astrTasks[u8IndexTasks].p2fTask);
	}
}

void OS_vdStart(void)
{
  UC_TIMER_vdEnable();
}

void OS_vdStop(void)
{
  UC_TIMER_vdDisable();
}

void OS_vdShutDown(void)
{
  OS_u8ShutDownSignal = (uint8_t)deMCD_TRUE;
}

void OS_vdReinitialize(void)
{
  OS_u8ShutDownSignal = (uint8_t)deMCD_TRUE;
  OS_u8ReInitializeSignal = (uint8_t)deMCD_TRUE;
}

void OS_vdDeInit(void)
{
  OS_vdStop();
}

STATUS_t OS_vdMain(uint8_t* pu8IsReinitialized)
{
  STATUS_t eStatus = STATUS_BUSY;

	uint8_t u8IndexTasks;
	for(u8IndexTasks = (uint8_t)0; u8IndexTasks < (uint8_t)OS_TASKS_NB; u8IndexTasks++)
	{
			/*Search for Tasks with Status SCHD_READY that are ready to run*/

    if( !OS_astrTasks[u8IndexTasks].u32TimeLeft &&
					 OS_astrTasks[u8IndexTasks].eStatus == OS_TASK_STATUS_READY )
			{
					/*SCHD_READY Task found, Run it*/
					OS_astrTasks[u8IndexTasks].eStatus = OS_TASK_STATUS_RUNNING;
					/*Call it */
					(*OS_astrTasks[u8IndexTasks].p2fTask)();
					/*Reset the remaining time to its period */
					OS_astrTasks[u8IndexTasks].u32TimeLeft = OS_astrTasks[u8IndexTasks].u32Period;
					/*The task has run set it as SCHD_READY for the next round */
					OS_astrTasks[u8IndexTasks].eStatus = OS_TASK_STATUS_READY;
			}
	}
	/* decrement task's counter if timer elapsed */
	if(OS_u32UpdateTasksCounter)
	{
		OS_u32UpdateTasksCounter--;

		/* Update SCHD_READY Tasks */
		for(u8IndexTasks = (uint8_t)0; u8IndexTasks < (uint8_t)OS_TASKS_NB; u8IndexTasks++)
		{
			if(OS_astrTasks[u8IndexTasks].u32TimeLeft > (uint32_t)0)
			{
				OS_astrTasks[u8IndexTasks].u32TimeLeft--;
			}
		}
	}
  
  if(OS_u8ShutDownSignal == deMCD_TRUE)
  {
    eStatus = STATUS_OK;
  }
  
  if(OS_u8ReInitializeSignal == deMCD_TRUE)
  {
    *pu8IsReinitialized = deMCD_TRUE;
  }
  else
  {
    *pu8IsReinitialized = deMCD_FALSE;
  }
  
  return eStatus;
}

/* Definition of local functions */

void local_OS_vdTrigger(void)
{
	OS_u32SystemTick++;
	if(OS_u32SystemTick >= local_OS_u32GetSystemTickTrigVal())
	{
		/* System Trigger is generated, update all tasks */
		OS_u32SystemTick = (uint32_t)0;

		/* Flag the main loop in the main function to update the tasks counters */
		OS_u32UpdateTasksCounter++;

		/* error output if critical slack reached */
		if(OS_u32UpdateTasksCounter>=OS_TASKS_TIMER_SLACK_MAX)
		{
			//TODO: throw an error
		}
	}
}

uint32_t local_OS_u32GetSystemTickTrigVal(void)
{
	return (uint32_t)(OS_SYS_TASK_TRIGGER_US/OS_u32SystemTimerUs);
}

void local_OS_vdAddTask(uint8_t u8IdTask, uint32_t u32Period, OS_p2fTask_t p2fTask)
{
	uint8_t u8IndexTasks;
	for(u8IndexTasks = (uint8_t)0; u8IndexTasks < (uint8_t)OS_TASKS_NB; u8IndexTasks++)
	{
			if(OS_astrTasks[u8IndexTasks].eStatus == OS_TASK_STATUS_IDLE)
			{
				OS_astrTasks[u8IndexTasks].u8Id = u8IdTask;
				OS_astrTasks[u8IndexTasks].u32Period = u32Period/OS_SYS_TASK_TRIGGER_US;
				OS_astrTasks[u8IndexTasks].u32TimeLeft = (u32Period+OS_astrTasks[u8IndexTasks].u32StartOffset)/OS_SYS_TASK_TRIGGER_US;
				OS_astrTasks[u8IndexTasks].p2fTask = p2fTask;
				OS_astrTasks[u8IndexTasks].eStatus = OS_TASK_STATUS_READY;
				break;
			}
	}
}

void local_OS_vdRemoveTask(uint8_t u8IdTask)
{
	uint8_t u8IndexTasks;
	for(u8IndexTasks = (uint8_t)0; u8IndexTasks < (uint8_t)OS_TASKS_NB; u8IndexTasks++)
	{
			if(OS_astrTasks[u8IndexTasks].u8Id == u8IdTask )
			{
				OS_astrTasks[u8IndexTasks].eStatus = OS_TASK_STATUS_IDLE;
			}
	}
}





#endif /*OS_MODULE_ENABLE*/
