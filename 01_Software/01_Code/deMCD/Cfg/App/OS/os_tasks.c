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

File Name: os_tasks.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "os_cfg.h"
#include "os.h"

#ifdef OS_MODULE_ENABLE

#include "lib_types.h"
#include "os_tasks.h"
#include "uc.h"
#include "ecu.h"
#include "app.h"

/*FOR TESTING ONLY*/
#include "uc_header.h"

extern void APP_vdTask1ms(void);
extern void APP_vdTask10ms(void);
extern void APP_vdTask50ms(void);
extern void APP_vdTask100ms(void);

void OS_vdTask1ms(void)
{
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO14, UC_DIO_OUT_COMMAND_ON);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/ 
  
  ECU_SYS_eEcuMode_t eEcuMode; 
  eEcuMode = ECU_SYS_eGetEcuMode();
  
#ifdef UC_CAN_MODULE_ENABLE
  UC_CAN_vdMgr();
#endif /*UC_CAN_MODULE_ENABLE*/
  
#ifdef UC_SPI_MODULE_ENABLE
  UC_SPI_vdMgr();
#endif /*UC_SPI_MODULE_ENABLE*/
  
#ifdef UC_PWM_MODULE_ENABLE
  UC_PWM_vdPinMgr();  
#endif /*UC_PWM_MODULE_ENABLE*/

#ifdef UC_PWM_MODULE_ENABLE
  UC_PWM_vdPoutMgr(); 
#endif /*UC_PWM_MODULE_ENABLE*/

#ifdef ECU_SYS_MODULE_ENABLE
  ECU_SYS_vdMgr();
#endif /*ECU_SYS_MODULE_ENABLE*/
  
#ifdef ECU_TXCP_MODULE_ENABLE
  ECU_TXCP_vdHandleRequests();
#endif /*ECU_TXCP_MODULE_ENABLE*/
 
#ifdef APP_BOOT_ENABLE
  APP_BOOT_vdMgr();
#endif /*APP_BOOT_ENABLE*/
  
#ifdef APP_DIAG_ENABLE
  if(eEcuMode == ECU_SYS_EXTENDED_DIAGNOSTIC || eEcuMode == ECU_SYS_PROGRAMMING)
  {
    APP_DIAG_vdMgr();    
  }
#endif /*APP_DIAG_ENABLE*/
  
#ifdef APPLICATION_SOFTWARE
  if(eEcuMode == ECU_SYS_DEFAULT)
  {
    /*Application*/
    APP_vdTask1ms();
  }
#endif /*APPLICATION_SOFTWARE*/
  
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO14, UC_DIO_OUT_COMMAND_OFF);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/
}

void OS_vdTask10ms(void)
{
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO10, UC_DIO_OUT_COMMAND_ON);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/
  
#ifdef UC_DIO_MODULE_ENABLE
  UC_DIO_vdMgr();
#endif /*UC_DIO_MODULE_ENABLE*/
  
#ifdef UC_ADC_MODULE_ENABLE
  UC_ADC_vdMgr();
#endif /*UC_ADC_MODULE_ENABLE*/
  
#ifdef ECU_IO_MODULE_ENABLE
  ECU_IO_vdMgr();
#endif /*ECU_IO_MODULE_ENABLE*/
  
#ifdef ECU_ANLG_MODULE_ENABLE
  ECU_ANLG_vdMgr();
#endif /*ECU_ANLG_MODULE_ENABLE*/
  
#ifdef ECU_SERIAL_MODULE_ENABLE
//  ECU_SERIAL_vdCoMgr();
#endif /*ECU_SERIAL_MODULE_ENABLE*/
  
#ifdef ECU_COM_MODULE_ENABLE
  ECU_COM_vdMgr();
#endif /*ECU_COM_MODULE_ENABLE*/
  
#ifdef ECU_DIAG_MODULE_ENABLE
  ECU_DIAG_vdMgr();
#endif /*ECU_DIAG_MODULE_ENABLE*/
  
#ifdef APPLICATION_SOFTWARE      

  ECU_SYS_eEcuMode_t eEcuMode; 
  eEcuMode = ECU_SYS_eGetEcuMode();  

  if(eEcuMode == ECU_SYS_DEFAULT)
  {
    /*Application*/
    APP_vdTask10ms();
  }
#endif /*APPLICATION_SOFTWARE*/  
  
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO10, UC_DIO_OUT_COMMAND_OFF);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/
}

void OS_vdTask50ms(void)
{
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO12, UC_DIO_OUT_COMMAND_ON);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/

#ifdef UC_UART_MODULE_ENABLE
  UC_UART_vdMgr();
#endif /*UC_UART_MODULE_ENABLE*/
  
#ifdef ECU_WDG_MODULE_ENABLE
  ECU_WDG_vdMgr();
#endif /*ECU_WDG_MODULE_ENABLE*/
  
#ifdef APPLICATION_SOFTWARE       

  ECU_SYS_eEcuMode_t eEcuMode; 
  eEcuMode = ECU_SYS_eGetEcuMode();  
  
 if(eEcuMode == ECU_SYS_DEFAULT)
 {
  /*Application*/
  APP_vdTask50ms();
 }
#endif /*APPLICATION_SOFTWARE*/
 
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO12, UC_DIO_OUT_COMMAND_OFF);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/
}

void OS_vdTask100ms(void)
{
      
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO11, UC_DIO_OUT_COMMAND_ON);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/

#ifdef ECU_SERIAL_MODULE_ENABLE
  ECU_SERIAL_vdMgr();
#endif /*ECU_SERIAL_MODULE_ENABLE*/
  
#ifdef ECU_MEM_MODULE_ENABLE
  ECU_MEM_vdMgr();
#endif /*ECU_MEM_MODULE_ENABLE*/
  
#ifdef ECU_TXCP_MODULE_ENABLE
  ECU_TXCP_vdMgr();
#endif /*ECU_TXCP_MODULE_ENABLE*/

#ifdef APPLICATION_SOFTWARE        

  ECU_SYS_eEcuMode_t eEcuMode; 
  eEcuMode = ECU_SYS_eGetEcuMode();  
  
  if(eEcuMode == ECU_SYS_DEFAULT)
  {
    /*Generated Application*/
    APP_vdTask100ms();  
    /*Manual Application*/
    //APP_vdTestMgr();  
  }
#endif /*APPLICATION_SOFTWARE*/    
  
#ifdef OS_TASKS_HW_MEASUREMENTS_ENABLE
  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO11, UC_DIO_OUT_COMMAND_OFF);
#endif /*OS_TASKS_HW_MEASUREMENTS_ENABLE*/
}


#endif /*OS_MODULE_ENABLE*/
