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

File Name: ecu_anlg.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "ecu_anlg_cfg.h"
#include "ecu_anlg.h"


#ifdef ECU_ANLG_MODULE_ENABLE

#include "uc.h"
#include "lib_data.h"


/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/


/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

uint8_t ECU_ANLG_u8FreezeFlag = 0;
float fltcount = (float)0.0;

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/
extern ECU_ANLG_strSignal_t ECU_ANLG_astrSignal[ECU_ANLG_SIG_NUM];

/********************************************************************************************/
/******************************* CALLBLACKS DECLARATION *************************************/
/********************************************************************************************/



/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/



/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void ECU_ANLG_vdInit(void)
{

}

void ECU_ANLG_vdMgr(void)
{
  uint8_t u8IndexSingnal;
  STATUS_t eAdcStatus;
  for(u8IndexSingnal = (uint8_t)0; u8IndexSingnal < (uint8_t)ECU_ANLG_SIG_NUM; u8IndexSingnal++)
  {
    if(ECU_ANLG_astrSignal[u8IndexSingnal].u8TesterControl == deMCD_FALSE)
    {
      eAdcStatus = UC_ADC_eReadAnalogSignal(ECU_ANLG_astrSignal[u8IndexSingnal].u8IndexAdc, &ECU_ANLG_astrSignal[u8IndexSingnal].u16RawValue);
      
      if(eAdcStatus == STATUS_OK)
      {
        ECU_ANLG_astrSignal[u8IndexSingnal].fltPhyValue = 
          LIB_DATA_fltRaw2Phy(ECU_ANLG_astrSignal[u8IndexSingnal].u16RawValue, 
                              (float)(((float)ECU_ANLG_astrSignal[u8IndexSingnal].u16ResNum)/((float)ECU_ANLG_astrSignal[u8IndexSingnal].u16ResDen)),
                              (float)(((float)ECU_ANLG_astrSignal[u8IndexSingnal].u16OffsetNum)/((float)ECU_ANLG_astrSignal[u8IndexSingnal].u16OffsetDen)));
      }      
    }
  }
}

STATUS_t ECU_ANLG_eReadSignal(uint8_t u8IndexSignal, float* pfltValue)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(ECU_ANLG_astrSignal[u8IndexSignal].u8TesterControl == deMCD_FALSE)
  {
    ECU_ANLG_u8FreezeFlag = 0;
    if(u8IndexSignal < ECU_ANLG_SIG_NUM)
    {
      *pfltValue = ECU_ANLG_astrSignal[u8IndexSignal].fltPhyValue;
      eStatus = STATUS_OK;
    }    
  }
  else
  {
    if(ECU_ANLG_astrSignal[u8IndexSignal].u8TesterFreezeCommand == deMCD_TRUE)
    {
      if(ECU_ANLG_u8FreezeFlag == 0)
      {
        ECU_ANLG_u8FreezeFlag = 1;
        ECU_ANLG_astrSignal[u8IndexSignal].fltTesterControlledPhyValue = ECU_ANLG_astrSignal[u8IndexSignal].fltPhyValue;
      }
      *pfltValue = ECU_ANLG_astrSignal[u8IndexSignal].fltTesterControlledPhyValue;
    }
    else
    {
      *pfltValue = ECU_ANLG_astrSignal[u8IndexSignal].fltTesterControlledPhyValue;
      ECU_ANLG_u8FreezeFlag = 0;
    }
  }
  return eStatus;
}

STATUS_t ECU_ANLG_eReadResolutionOffset(uint8_t u8IndexSignal, uint16_t* pu16Value, uint16_t* pu16ResNum, uint16_t* pu16ResDen, uint16_t* pu16OffNum, uint16_t* pu16OffDen)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8IndexSignal < ECU_ANLG_SIG_NUM)
  {
    eStatus = STATUS_OK;
    *pu16Value = ECU_ANLG_astrSignal[u8IndexSignal].u16RawValue;
    *pu16ResNum = ECU_ANLG_astrSignal[u8IndexSignal].u16ResNum;
    *pu16ResDen = ECU_ANLG_astrSignal[u8IndexSignal].u16ResDen;
    *pu16OffNum = ECU_ANLG_astrSignal[u8IndexSignal].u16OffsetNum;
    *pu16OffDen = ECU_ANLG_astrSignal[u8IndexSignal].u16OffsetDen;
  }
  return eStatus;
}

STATUS_t ECU_ANLG_eResetToDefault(uint8_t u8IndexSignal)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexSignal < ECU_ANLG_SIG_NUM)
  {
    ECU_ANLG_astrSignal[u8IndexSignal].u8TesterControl = deMCD_TRUE;
    ECU_ANLG_astrSignal[u8IndexSignal].fltTesterControlledPhyValue = deMCD_DEFAULT;
    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t ECU_ANLG_eReturnControlToECU(uint8_t u8IndexSignal)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexSignal < ECU_ANLG_SIG_NUM)
  {
    ECU_ANLG_astrSignal[u8IndexSignal].u8TesterControl = deMCD_FALSE;
    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t ECU_ANLG_eFreezePinCurrentState(uint8_t u8IndexSignal)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexSignal < ECU_ANLG_SIG_NUM)
  {
    ECU_ANLG_astrSignal[u8IndexSignal].u8TesterControl = deMCD_TRUE;
    ECU_ANLG_astrSignal[u8IndexSignal].u8TesterFreezeCommand = deMCD_TRUE;
    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t ECU_ANLG_eAdjustPinValue(uint8_t u8IndexSignal, uint16_t u16RawValue)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexSignal < ECU_ANLG_SIG_NUM)
  {
    ECU_ANLG_astrSignal[u8IndexSignal].u8TesterControl = deMCD_TRUE;
    ECU_ANLG_astrSignal[u8IndexSignal].u16RawValue = u16RawValue;
    ECU_ANLG_astrSignal[u8IndexSignal].fltTesterControlledPhyValue = 
    LIB_DATA_fltRaw2Phy(ECU_ANLG_astrSignal[u8IndexSignal].u16RawValue, 
    (float)(((float)ECU_ANLG_astrSignal[u8IndexSignal].u16ResNum)/((float)ECU_ANLG_astrSignal[u8IndexSignal].u16ResDen)),
    (float)(((float)ECU_ANLG_astrSignal[u8IndexSignal].u16OffsetNum)/((float)ECU_ANLG_astrSignal[u8IndexSignal].u16OffsetDen)));    
    eStatus = STATUS_OK;
  }
  
  return eStatus;  
}
/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

/********************************************************************************************/
/************************************* CALLBACKS ********************************************/
/********************************************************************************************/

#endif /*ECU_ANLG_MODULE_ENABLE*/
