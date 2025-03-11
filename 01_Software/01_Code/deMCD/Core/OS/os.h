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

File Name: os.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#ifndef OS_H
#define OS_H

#include "lib_types.h"

#define OS_START_OFFSET_0000US                     (0000U)
#define OS_START_OFFSET_1000US                     (1000U)
#define OS_START_OFFSET_2000US                     (2000U)
#define OS_START_OFFSET_3000US                     (3000U)
#define OS_START_OFFSET_4000US                     (4000U)
#define OS_START_OFFSET_5000US                     (5000U)
#define OS_START_OFFSET_6000US                     (6000U)
#define OS_START_OFFSET_7000US                     (7000U)
#define OS_START_OFFSET_8000US                     (8000U)
#define OS_START_OFFSET_9000US                     (9000U)
#define OS_START_OFFSET_10000US                    (10000U)
#define OS_START_OFFSET_20000US                    (20000U)
#define OS_START_OFFSET_30000US                    (30000U)
#define OS_START_OFFSET_40000US                    (40000U)
#define OS_START_OFFSET_50000US                    (50000U)
#define OS_START_OFFSET_60000US                    (60000U)
#define OS_START_OFFSET_70000US                    (70000U)
#define OS_START_OFFSET_80000US                    (80000U)
#define OS_START_OFFSET_90000US                    (90000U)
#define OS_START_OFFSET_100000US                   (100000U)


#define OS_MUTEX_FREE                          ((OS_MUTEX_t)0)
#define OS_MUTEX_INUSE                         ((OS_MUTEX_t)1)

/*Mutex Type*/
typedef uint8_t OS_MUTEX_t;

/*Pointer to function that points to the RTOS tasks*/
typedef void (*OS_p2fTask_t)(void);

typedef enum OS_eTaskStatusTemplate
{
   OS_TASK_STATUS_IDLE = 0,
	 OS_TASK_STATUS_READY = 1,
	 OS_TASK_STATUS_RUNNING = 2,
	 OS_TASK_STATUS_ERROR = 255,
} OS_eTaskStatus_t;

/*Task Block*/
typedef struct OS_strTaskTemplate
{
   /*Task ID*/
   uint8_t u8Id;
   /*Pointer to the task*/
   OS_p2fTask_t p2fTask;
   /*Time left before execution*/
   uint32_t u32TimeLeft; 
   /*Task period*/
   uint32_t u32Period;
   /*Task status*/
   OS_eTaskStatus_t eStatus;
   /*Task start offset*/
   uint32_t u32StartOffset;
} OS_strTask_t;



void OS_vdInit(void);
void OS_vdDeInit(void);
void OS_vdStart(void);
void OS_vdStop(void);
STATUS_t OS_vdMain(uint8_t* pu8IsReinitialized);
void OS_vdShutDown(void);
void OS_vdReinitialize(void);

#define OS_vdEnterCriticalSection(mKey) (mKey=OS_MUTEX_INUSE)
#define OS_vdExitCriticalSection(mKey) (mKey=OS_MUTEX_FREE)
#define OS_eIsCriticalSectionFree(mKey) (mKey==OS_MUTEX_FREE ? (STATUS_OK) : (STATUS_NOK))


#endif /*OS_H*/

