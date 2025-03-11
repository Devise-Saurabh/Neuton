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

File Name: ecu_txcp.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "ecu_txcp_cfg_gen.h"
#include "ecu_txcp_cfg.h"
#include "ecu_txcp.h"
#include "rte.h"

#ifdef ECU_TXCP_MODULE_ENABLE

#include "lib_types.h"
#include "uc.h"
#include "ecu.h"

ECU_TXCP_eHeartBeatEnable_t ECU_TXCP_eHeartBeatEnable = ECU_TXCP_HB_DISABLE;
ECU_TXCP_eCalibEnable_t ECU_TXCP_eCalibEnable = ECU_TXCP_CALIB_DISABLE;
ECU_TXCP_eGlobalEnable_t ECU_TXCP_eGlobalEnable = ECU_TXCP_GLOBAL_DISABLE;


void ECU_TXCP_vdInit(void)
{
  uint32_t u32TxcpEnable = deMCD_FALSE;

#ifdef ECU_MEM_INT_MODULE_ENABLE
  ECU_MEM_INT_eReadRawSignalValue(ECU_TXCP_MEM_XCP_ENABLE, &u32TxcpEnable);
  
  if(u32TxcpEnable == deMCD_TRUE)
  {
    ECU_TXCP_eCalibEnable = ECU_TXCP_CALIB_ENABLE;
  }
  else
  {
    ECU_TXCP_eCalibEnable = ECU_TXCP_CALIB_DISABLE;
  }
#else
  ECU_TXCP_eCalibEnable = ECU_TXCP_CALIB_ENABLE;
#endif /*ECU_MEM_INT_MODULE_ENABLE*/
}

void ECU_TXCP_vdDeInit(void)
{
  ECU_TXCP_eGlobalEnable = ECU_TXCP_GLOBAL_DISABLE;
}

void ECU_TXCP_vdMgr(void)
{
  uint8_t au8DummyData[8] = {0,0,0,0,0,0,0,0};
  STATUS_t eStatus = STATUS_NOK; 
  
 
  eStatus = UC_CAN_eReadCanFrameAsync(ECU_TXCP_CAN_CHANNEL, ECU_TXCP_RX_HEARTBEAT_FRAME, au8DummyData);
  
  if(eStatus == STATUS_OK)
  {
    ECU_TXCP_eHeartBeatEnable = ECU_TXCP_HB_ENABLE;
  }
  else
  {
    ECU_TXCP_eHeartBeatEnable = ECU_TXCP_HB_DISABLE;
  }
  
  if((ECU_TXCP_eCalibEnable == ECU_TXCP_CALIB_ENABLE) && (ECU_TXCP_eHeartBeatEnable == ECU_TXCP_HB_ENABLE))
  {
    ECU_TXCP_eGlobalEnable = ECU_TXCP_GLOBAL_ENABLE;
  }
  else
  {
    ECU_TXCP_eGlobalEnable = ECU_TXCP_GLOBAL_DISABLE;
  }
  
  if(ECU_TXCP_eGlobalEnable== ECU_TXCP_GLOBAL_ENABLE)
  {
    UC_DIO_eCommandOutputPin(ECU_TXCP_LED_INDICATOR, UC_DIO_OUT_COMMAND_ON);
    //UC_CAN_eWriteCanFrameSync(ECU_TXCP_CAN_CHANNEL, ECU_TXCP_TX_HEARTBEAT_FRAME, au8DummyData);
  }
  else
  {
    UC_DIO_eCommandOutputPin(ECU_TXCP_LED_INDICATOR, UC_DIO_OUT_COMMAND_OFF);
  }
}


void ECU_TXCP_vdHandleRequests(void)
{
  STATUS_t eStatus = STATUS_NOK; 
  uint8_t au8RxData[8] = {0,0,0,0,0,0,0,0};
  uint8_t au8TxData[8] = {0,0,0,0,0,0,0,0};
  uint32_t u32Address;
  uint32_t u32RxData;
  uint32_t u32TxData;
  uint8_t u8WriteReq;
  uint8_t u8SignFlag;
  float fltData;

  if(ECU_TXCP_eGlobalEnable== ECU_TXCP_GLOBAL_ENABLE)
  {
    eStatus = UC_CAN_eReadCanFrameAsync(ECU_TXCP_CAN_CHANNEL, ECU_TXCP_RX_REQ_FRAME, au8RxData);
    
    if(eStatus == STATUS_OK)
    {
      u8WriteReq = au8RxData[3] & 0x80;
      
      u32Address = (au8RxData[0] << (8*0)) |
                   (au8RxData[1] << (8*1)) |
                   (au8RxData[2] << (8*2)) |
                   ((au8RxData[3]&0x7F) << (8*3));
      u32RxData =  (au8RxData[4] << (8*0)) |
                   (au8RxData[5] << (8*1)) |
                   (au8RxData[6] << (8*2)) |
                   (au8RxData[7] << (8*3));
      
      if(u8WriteReq != (uint8_t)0)
      {
        *((float*)u32Address) = ((float)u32RxData/100.0f);
      }
      
      fltData = *((float*)u32Address);
      
      if(fltData < (uint8_t)0)
      {
        u8SignFlag = 1;
        fltData = fltData * (-1);
      }
      else
      {
        u8SignFlag = 0;
      }

      u32TxData = (uint32_t)(fltData*100);
        
      au8TxData[0] = au8RxData[0];
      au8TxData[1] = au8RxData[1];
      au8TxData[2] = au8RxData[2];
      
      if(u8SignFlag != (uint8_t)0)
      {
        au8TxData[3] = au8RxData[3] | 0x80;
      }
      else
      {
        au8TxData[3] = au8RxData[3] & 0x7F;
      }
      au8TxData[4] = (u32TxData & 0x000000FF) >> (8*0);
      au8TxData[5] = (u32TxData & 0x0000FF00) >> (8*1);
      au8TxData[6] = (u32TxData & 0x00FF0000) >> (8*2);
      au8TxData[7] = (u32TxData & 0xFF000000) >> (8*3);
      
      UC_CAN_eWriteCanFrameSync(ECU_TXCP_CAN_CHANNEL, ECU_TXCP_TX_RESPONSE_FRAME, au8TxData);
    }
  }
}

#endif /*ECU_SYS_MODULE_ENABLE*/
