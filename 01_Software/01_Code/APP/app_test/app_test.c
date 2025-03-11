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

File Name: app_test.c
Author: Devise Elctronics Embedded Software
E-mail: Shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "app_test.h"
#include "ecu.h"

#include "uc.h" /*Temp for SWAG!*/
#include "rte.h"


#define APP_TEST_TASK_MS                               (100)
#define APP_TEST_HEARTBEAT_HALF_PERIOD_MS              (500)

uint8_t APP_TEST_u8InputReadMaxim;
uint32_t APP_TEST_u32SubSchCounter = 1;
float* TEST_pfltTemp = TAPAS_NULL;
float* TEST_pfltTemp2 = TAPAS_NULL;
uint8_t TEST_u8Size = 0;
volatile uint8_t Test_vu8Switch = 0;

void APP_vdTestMgr(void)
{
//  float fltSignal;
//
//  uint8_t u8IsExWdgReset;
//  uint8_t u8IsExWdgResetNeeded;
//  ECU_SYS_vdGetResetStatus(&u8IsExWdgReset);
//  
//  u8IsExWdgResetNeeded = 0;
//  
//  RTE_Service_COM_vdWriteSignal(APP_TX_VCU_DASH_FANFAILURE, u8IsExWdgReset);  
//  
//  RTE_Service_COM_vdReadSignal(APP_RX_DCDC_VCU_LVREALTIMEC, &fltSignal);
//  if(fltSignal == 1)
//  {
//    u8IsExWdgResetNeeded = 1;
//  }
//
//  ECU_SYS_vdClearResetStatus(u8IsExWdgResetNeeded);
//  
//  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO19, UC_DIO_OUT_COMMAND_ON);
//    
//  TEST_pfltTemp = &RTE_astrData[0].fltData;
//  TEST_pfltTemp2 = &RTE_astrData[1].fltData;
//  TEST_u8Size = sizeof(RTE_strData_t);
//  
//  float fltSignal = 0.0f;
//  STATUS_t eStatus;
//  uint32_t u32Test;
  

//  eStatus = ECU_COM_vdReadSignal(APP_RX_SIGNAL_CONTROL_1, &fltSignal);
//  
//  u32Test = (uint32_t)((fltSignal * (float)10));
//  
//  if(u32Test == 27)
//  {
//    if(eStatus == STATUS_OK)
//    {
//      ECU_COM_vdWriteSignal(APP_TX_TI_A1CH2, fltSignal);
//    }
//  }
//  else
//  {
//    ECU_COM_vdWriteSignal(APP_TX_TI_A1CH2, fltSignal);
//    eStatus = STATUS_NOK;
//  }
//  
//  eStatus = ECU_COM_vdReadSignal(APP_RX_RX2SIG2, &fltSignal);
//  
//  if(eStatus == STATUS_OK)
//  {
//    ECU_COM_vdWriteSignal(APP_TX_TI_A1CH0, fltSignal);
//  }

//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_0, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH0, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_1, &fltSignal);
////  ECU_COM_vdWriteSignal(APP_TX_VCU_DASH_DRIVINGMILE, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_2, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH2, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_3, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH3, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_4, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH4, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_5, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH5, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_6, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH6, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_7, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH7, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_8, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH8, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_9, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH9, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_10, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH10, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_11, &fltSignal);
//  //ECU_COM_vdWriteSignal(ANALOGCH11, fltSignal);
//  ECU_ANLG_eReadSignal(ECU_ANLG_SIG_3V3_SUPPLY, &fltSignal);
//  //ECU_COM_vdWriteSignal(SUPPLY_3V3, fltSignal);
  
  //ECU_IO_eInputRead(ECU_IO_INPUT_ID_1, &APP_TEST_u8InputReadMaxim);
  //ECU_COM_vdReadSignal(SIGNAL_CONTROL_1, &fltSignal);
  //ECU_COM_vdWriteSignal(TI_SPI3C0, fltSignal);
  
  //ECU_IO_eInputRead(ECU_IO_INPUT_ID_2, &APP_TEST_u8InputReadMaxim);
  //ECU_COM_vdReadSignal(SIGNAL_CONTROL_2, &fltSignal);
  //ECU_COM_vdWriteSignal(TI_A1CH2, fltSignal);
  
  //ECU_IO_eInputRead(ECU_IO_INPUT_ID_6, &APP_TEST_u8InputReadMaxim);
  //ECU_COM_vdReadSignal(SIGNAL_CONTROL_3, &fltSignal);
  //ECU_COM_vdWriteSignal(TI_A1CH0, fltSignal);
  
//  ECU_COM_vdReadSignal(BIT4, &fltSignal);
//  ECU_COM_vdWriteSignal(BIT1, fltSignal);
//  ECU_COM_vdReadSignal(BIT5, &fltSignal);
//  ECU_COM_vdWriteSignal(BIT2, fltSignal);
//  ECU_COM_vdReadSignal(BIT6, &fltSignal);
//  ECU_COM_vdWriteSignal(BIT3, fltSignal);
//  
//  ECU_COM_vdReadSignal(APP_RX_MCU_VCU_MOTORRPM, &fltSignal);
//  ECU_COM_vdWriteSignal(APP_TX_VCU_MCU_RPMSETPOINT, fltSignal);
//  
//  ECU_COM_vdReadSignal(APP_RX_MCU_VCU_MOTORTORQUE, &fltSignal);
//  ECU_COM_vdWriteSignal(APP_TX_VCU_MCU_TORQUESETPOINT, fltSignal);
//  
//  ECU_COM_vdWriteSignal(APP_TX_VCU_MCU_ENABLE, 0);
//  ECU_COM_vdWriteSignal(APP_TX_VCU_MCU_MODECONTROL, 1);
//  ECU_COM_vdWriteSignal(APP_TX_VCU_MCU_INVERTERCOMMAND, 2);
//  ECU_COM_vdWriteSignal(APP_TX_VCU_MCU_DRIVENCOMMAND, 3);
  
//  ECU_COM_vdReadSignal(APP_RX_DASH_VCU_DASHLIFE, &fltSignal);
//  ECU_COM_vdWriteSignal(APP_TX_VCU_DASH_VEHICLESPEED, fltSignal);
  
  
//  if((APP_TEST_u32SubSchCounter*APP_TEST_TASK_MS) == APP_TEST_HEARTBEAT_HALF_PERIOD_MS)
//  {
//    ECU_IO_eOutputControl(ECU_IO_OUTPUT_LED4, ECU_IO_OUT_COMMAND_TOGGLE);
//    //ECU_IO_eOutputControl(ECU_IO_OUTPUT_AC_CHARGING_LED3, ECU_IO_OUT_COMMAND_TOGGLE);
//    //ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO12_LED2, ECU_IO_OUT_COMMAND_TOGGLE);
//    //ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO11_LED1, ECU_IO_OUT_COMMAND_TOGGLE);
//    APP_TEST_u32SubSchCounter = 1;
//  }
//  else
//  {
//    APP_TEST_u32SubSchCounter++;
//  }
  
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO0 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO1 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO2 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO3 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO4 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO5 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO6 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO7 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO8 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO9 , ECU_IO_OUT_COMMAND_TOGGLE);
//  ECU_IO_eOutputControl(ECU_IO_OUTPUT_DO10, ECU_IO_OUT_COMMAND_TOGGLE);
////  ECU_IO_eOutputControl(ECU_IO_OUTPUT_WDI , ECU_IO_OUT_COMMAND_TOGGLE);
////  ECU_IO_eOutputControl(ECU_IO_OUTPUT_WD_NEN , ECU_IO_OUT_COMMAND_OFF);
////  ECU_IO_eOutputControl(ECU_IO_OUTPUT_HOLD , ECU_IO_OUT_COMMAND_TOGGLE);
////  ECU_IO_eOutputControl(ECU_IO_OUTPUT_WP, ECU_IO_OUT_COMMAND_TOGGLE);
}



