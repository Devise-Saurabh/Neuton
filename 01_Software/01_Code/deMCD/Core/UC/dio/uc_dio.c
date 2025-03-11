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

File Name: uc_dio.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "uc_dio_cfg.h"
#include "uc_dio.h"

#ifdef UC_DIO_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"

/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/


/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/


UC_DIO_strObj_t UC_DIO_astrObj[UC_DIO_OBJECTS_AVAILABLE] = 
{
	{   
		&GIODIRA,
		&GIODIRA_bit,             
		&GIODINA,
		&GIODINA_bit,       
		&GIODOUTA,
		&GIODOUTA_bit,           
		&GIOSETA,
		&GIOSETA_bit,             
		&GIOCLRA,
		&GIOCLRA_bit,             
		&GIOPDRA,
		&GIOPDRA_bit,             
		&GIOPULDISA,
		&GIOPULDISA_bit,       
		&GIOPSLA,
		&GIOPSLA_bit,   
	},
	{   
		&GIODIRB,
		&GIODIRB_bit,             
		&GIODINB,
		&GIODINB_bit,             
		&GIODOUTB,
		&GIODOUTB_bit,           
		&GIOSETB,
		&GIOSETB_bit,             
		&GIOCLRB,
		&GIOCLRB_bit,             
		&GIOPDRB,
		&GIOPDRB_bit,             
		&GIOPULDISB,
		&GIOPULDISB_bit,       
		&GIOPSLB,
		&GIOPSLB_bit,  
	},
	{   
		&HET1DIR,
		(__giodir_bits*)&HET1DIR_bit,             
		&HET1DIN,
		(__giodin_bits*)&HET1DIN_bit,       
		&HET1DOUT,
		(__giodout_bits*)&HET1DOUT_bit,           
		&HET1DSET,
		(__gioset_bits*)&HET1DSET_bit,             
		&HET1DCLR,
		(__gioclr_bits*)&HET1DCLR_bit,             
		&HET1PDR,
		(__giopdr_bits*)&HET1PDR_bit,             
		&HET1PULDIS,
		(__giopuldis_bits*)&HET1PULDIS_bit,       
		&HET1PSL,
		(__giopsl_bits*)&HET1PSL_bit,  
	},
	{   
		&HET2DIR,
		(__giodir_bits*)&HET2DIR_bit,             
		&HET2DIN,
		(__giodin_bits*)&HET2DIN_bit,       
		&HET2DOUT,
		(__giodout_bits*)&HET2DOUT_bit,           
		&HET2DSET,
		(__gioset_bits*)&HET2DSET_bit,             
		&HET2DCLR,
		(__gioclr_bits*)&HET2DCLR_bit,             
		&HET2PDR,
		(__giopdr_bits*)&HET2PDR_bit,             
		&HET2PULDIS,
		(__giopuldis_bits*)&HET2PULDIS_bit,       
		&HET2PSL,
		(__giopsl_bits*)&HET2PSL_bit,  
	},
	{   
		&MIBSPI1PC1,
		(__giodir_bits*)&MIBSPI1PC1_bit,             
		&MIBSPI1PC2,
		(__giodin_bits*)&MIBSPI1PC2_bit,       
		&MIBSPI1PC3,
		(__giodout_bits*)&MIBSPI1PC3_bit,           
		&MIBSPI1PC4,
		(__gioset_bits*)&MIBSPI1PC4_bit,             
		&MIBSPI1PC5,
		(__gioclr_bits*)&MIBSPI1PC5_bit,             
		&MIBSPI1PC6,
		(__giopdr_bits*)&MIBSPI1PC6_bit,             
		&MIBSPI1PC7,
		(__giopuldis_bits*)&MIBSPI1PC7_bit,       
		&MIBSPI1PC8,
		(__giopsl_bits*)&MIBSPI1PC8_bit,
	},
	{   
		&MIBSPI3PC1,
		(__giodir_bits*)&MIBSPI3PC1_bit,             
		&MIBSPI3PC2,
		(__giodin_bits*)&MIBSPI3PC2_bit,       
		&MIBSPI3PC3,
		(__giodout_bits*)&MIBSPI3PC3_bit,           
		&MIBSPI3PC4,
		(__gioset_bits*)&MIBSPI3PC4_bit,             
		&MIBSPI3PC5,
		(__gioclr_bits*)&MIBSPI3PC5_bit,             
		&MIBSPI3PC6,
		(__giopdr_bits*)&MIBSPI3PC6_bit,             
		&MIBSPI3PC7,
		(__giopuldis_bits*)&MIBSPI3PC7_bit,       
		&MIBSPI3PC8,
		(__giopsl_bits*)&MIBSPI3PC8_bit,
	},
	{   
		&MIBSPI5PC1,
		(__giodir_bits*)&MIBSPI5PC1_bit,             
		&MIBSPI5PC2,
		(__giodin_bits*)&MIBSPI5PC2_bit,       
		&MIBSPI5PC3,
		(__giodout_bits*)&MIBSPI5PC3_bit,           
		&MIBSPI5PC4,
		(__gioset_bits*)&MIBSPI5PC4_bit,             
		&MIBSPI5PC5,
		(__gioclr_bits*)&MIBSPI5PC5_bit,             
		&MIBSPI5PC6,
		(__giopdr_bits*)&MIBSPI5PC6_bit,             
		&MIBSPI5PC7,
		(__giopuldis_bits*)&MIBSPI5PC7_bit,       
		&MIBSPI5PC8,
		(__giopsl_bits*)&MIBSPI5PC8_bit,
	},
	{   
		&AD1EVTDIR,
		(__giodir_bits*)&AD1EVTDIR_bit,             
		&AD1EVTIN,
		(__giodin_bits*)&AD1EVTIN_bit,       
		&AD1EVTOUT,
		(__giodout_bits*)&AD1EVTOUT_bit,           
		&AD1EVTSET,
		(__gioset_bits*)&AD1EVTSET_bit,             
		&AD1EVTCLR,
		(__gioclr_bits*)&AD1EVTCLR_bit,             
		&AD1EVTPDR,
		(__giopdr_bits*)&AD1EVTPDR_bit,             
		&AD1EVTPDIS,
		(__giopuldis_bits*)&AD1EVTPDIS_bit,       
		&AD1EVTPSEL,
		(__giopsl_bits*)&AD1EVTPSEL_bit,  
	},
};


UC_DIO_strIntInputIdDecode_t UC_DIO_astrIntInputIdDecode[UC_DIO_SERIES_INTERRUPT_INPUTS_ID_MAX];

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

extern UC_DIO_strModule_t UC_DIO_astrOutput[UC_DIO_OUTPUT_NUM];
extern UC_DIO_strModule_t UC_DIO_astrInput[UC_DIO_INPUT_NUM];


/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/
__irq __arm void VIM_GIOA_Handler(void);
__irq __arm void VIM_GIOB_Handler(void);

/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/

STATUS_t local_UC_DIO_ePinConfigure(UC_DIO_strModule_t strModule);


/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void UC_DIO_vdInit(void)
{
  uint8_t u8Index;
  
  /*Reset the GPIO module */
  GIOGCR0_bit.RESET = 0;
  GIOGCR0_bit.RESET = 1;
  
#ifdef UC_DIO_USE_SPI1_ENABLE
  MIBSPI1GCR0_bit.nRESET = 0;
  MIBSPI1GCR0_bit.nRESET = 1;
#endif /*UC_DIO_USE_SPI1_ENABLE*/
  
#ifdef UC_DIO_USE_SPI5_ENABLE
  MIBSPI5GCR0_bit.nRESET = 0;
  MIBSPI5GCR0_bit.nRESET = 1;
#endif /*UC_DIO_USE_SPI5_ENABLE*/
  
  /*Initialize input interrupts ids decoder */
  for(u8Index = (uint8_t)0; u8Index < (uint8_t)(UC_DIO_SERIES_INTERRUPT_INPUTS_ID_MAX+1); u8Index++)
  {
    UC_DIO_astrIntInputIdDecode[u8Index].eIndex = (UC_DIO_eInteruptInputPinId_t)u8Index;
    UC_DIO_astrIntInputIdDecode[u8Index].u8IndexGpio = (uint8_t)UC_DIO_INT_INPUT_NOT_USED;
  }

  
  /*Configure all outputs */
  for(u8Index = (uint8_t)0; u8Index < (uint8_t)UC_DIO_OUTPUT_NUM; u8Index++)
  {
    local_UC_DIO_ePinConfigure(UC_DIO_astrOutput[u8Index]);
    if(UC_DIO_astrOutput[u8Index].u8Value != 0)
    {
      UC_DIO_eCommandOutputPin(u8Index, UC_DIO_OUT_COMMAND_ON);
    }
    else
    {
      UC_DIO_eCommandOutputPin(u8Index, UC_DIO_OUT_COMMAND_OFF);
    }
  }
  
  /*Configure all inputs */
  for(u8Index = (uint8_t)0; u8Index < (uint8_t)UC_DIO_INPUT_NUM; u8Index++)
  {
    local_UC_DIO_ePinConfigure(UC_DIO_astrInput[u8Index]);
    
    /*Configure interrupts if enabled*/
    if(UC_DIO_astrInput[u8Index].u8EnableInterrupt == deMCD_TRUE)
    {
      if((UC_DIO_astrInput[u8Index].eInteruptInputPinId != UC_DIO_INT_INPUT_NOT_USED) ||
         (UC_DIO_astrInput[u8Index].eInteruptInputPinId != UC_DIO_INT_INPUT_NA))
      {
        if(UC_DIO_astrInput[u8Index].eInterruptTrigger != UC_DIO_INPUT_TRIGGER_NA)
        {
          if(UC_DIO_astrInput[u8Index].eInterruptTrigger == UC_DIO_INPUT_POS_NEG_EDGE)
          {
            GIOINTDET |= 1<<(UC_DIO_astrInput[u8Index].eInteruptInputPinId-1);
          }
          else
          {
            /*Default is zero*/
            GIOPOL |= UC_DIO_astrInput[u8Index].eInterruptTrigger<<(UC_DIO_astrInput[u8Index].eInteruptInputPinId-1);
          }
        }
        
        /*Configure the interrupt priority*/
        if(UC_DIO_astrInput[u8Index].eInteruptPriority == UC_DIO_INT_PRIORITY_LOW)
        {
          /*Set as low priority*/
          GIOLVLCLR |= 1<<(UC_DIO_astrInput[u8Index].eInteruptInputPinId-1);
        }
        else
        {
          /*Set as high priority*/
          GIOLVLSET |= 1<<(UC_DIO_astrInput[u8Index].eInteruptInputPinId-1);
        }

        /*Enable pin interrupt*/
        GIOENASET |= 1<<(UC_DIO_astrInput[u8Index].eInteruptInputPinId-1);
        UC_DIO_astrIntInputIdDecode[UC_DIO_astrInput[u8Index].eInteruptInputPinId].u8IndexGpio = u8Index;
      }
    }

  }
  
#ifdef UC_DIO_GLOBAL_INTERRUPT_ENABLE
  UC_SYS_vdRegisterISR(VIM_GIOA, VIM_GIOA_Handler);
  UC_SYS_vdEnableISR(VIM_GIOA);
  UC_SYS_vdRegisterISR(VIM_GIOB, VIM_GIOB_Handler);
  UC_SYS_vdEnableISR(VIM_GIOB);
#endif /*UC_DIO_GLOBAL_INTERRUPT_ENABLE*/
}

void UC_DIO_vdMgr(void)
{

}


STATUS_t UC_DIO_eCommandOutputPin(uint8_t u8IndexId, UC_DIO_eOutputCommand_t eOutputCommand)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexId < UC_DIO_OUTPUT_NUM)
  {
    switch(eOutputCommand)
    {
      case UC_DIO_OUT_COMMAND_OFF:
        (*UC_DIO_astrOutput[u8IndexId].pstrObj->pGIOCLR) = (1<<UC_DIO_astrOutput[u8IndexId].ePinId);
        UC_DIO_astrOutput[u8IndexId].u8Value = deMCD_FALSE;
        break;
      case UC_DIO_OUT_COMMAND_ON:
        (*UC_DIO_astrOutput[u8IndexId].pstrObj->pGIOSET) = (1<<UC_DIO_astrOutput[u8IndexId].ePinId);
        UC_DIO_astrOutput[u8IndexId].u8Value = deMCD_TRUE;
        break;
      case UC_DIO_OUT_COMMAND_TOGGLE:
        (*UC_DIO_astrOutput[u8IndexId].pstrObj->pGIODOUT) ^= (1<<UC_DIO_astrOutput[u8IndexId].ePinId);
        UC_DIO_astrOutput[u8IndexId].u8Value ^= (uint8_t)1;
        break;
      default:
        eStatus = STATUS_NOK;
        break;
    }
    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t UC_DIO_eReadInputPin(uint8_t u8IndexId, uint8_t* pu8Value)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32Read;
  
  if(u8IndexId < UC_DIO_INPUT_NUM)
  {
     u32Read = (*UC_DIO_astrInput[u8IndexId].pstrObj->pGIODIN) & (1<<UC_DIO_astrInput[u8IndexId].ePinId);
     
     if(u32Read != deMCD_FALSE)
     {
       *pu8Value = deMCD_TRUE;
     }
     else
     {
       *pu8Value = deMCD_FALSE;
     }
     
     UC_DIO_astrInput[u8IndexId].u8Value = *pu8Value;
     eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t UC_DIO_eRegisterInputEventClbk(uint8_t u8IndexGpio, UC_DIO_p2fInputEventClbk_t p2f)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexGpio < UC_DIO_INPUT_NUM)
  {
    if(UC_DIO_astrInput[u8IndexGpio].p2fInputEventClbk == deMCD_NULL)
    {
      UC_DIO_astrInput[u8IndexGpio].p2fInputEventClbk = p2f;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}


/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/


STATUS_t local_UC_DIO_ePinConfigure(UC_DIO_strModule_t strModule)
{
  STATUS_t eStatus = STATUS_NOK;
  
  *strModule.pstrObj->pGIODIR |= strModule.ePinDirection<<strModule.ePinId;
  *strModule.pstrObj->pGIOPDR |= strModule.ePinMode<<strModule.ePinId;
  *strModule.pstrObj->pGIOPULDIS |= strModule.ePullFcnEnable<<strModule.ePinId;
  *strModule.pstrObj->pGIOPSL |= strModule.ePullMode<<strModule.ePinId;

  eStatus = STATUS_OK;
  
  return eStatus;
}

STATUS_t local_UC_DIO_eInputInterruptHandler(uint8_t u8IdInterrupt)
{
  STATUS_t eStatus = STATUS_NOK;
  
  UC_DIO_eInteruptInputPinId_t eInteruptInputPinId;
  uint8_t u8IndexGpio;
  
  /*Check if it is valid interrupt Id*/
  if(u8IdInterrupt < UC_DIO_SERIES_INTERRUPT_INPUTS_ID_MAX)
  {
    /*cast it to interrupt id type*/
    eInteruptInputPinId = (UC_DIO_eInteruptInputPinId_t)u8IdInterrupt;
    /*Get the corresponding GPIO*/
    u8IndexGpio = UC_DIO_astrIntInputIdDecode[eInteruptInputPinId].u8IndexGpio;
    /*if the GPIO id is valid*/
    if(u8IndexGpio < UC_DIO_INPUT_NUM)
    {
      /*Check if there is a registered callback*/
      if(UC_DIO_astrInput[u8IndexGpio].p2fInputEventClbk != deMCD_NULL)
      {
        /*Call the callback function*/
        UC_DIO_astrInput[u8IndexGpio].p2fInputEventClbk();
        eStatus = STATUS_OK;
      }
    }
  }
  
  return eStatus;
}

/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/

__irq __arm void VIM_GIOA_Handler(void)
{
  uint8_t u8IdInterrupt;
  
  /*Get interrupt Id*/
  u8IdInterrupt = GIOOFF1_bit.GIOOFF1;
  
  local_UC_DIO_eInputInterruptHandler(u8IdInterrupt);
}


__irq __arm void VIM_GIOB_Handler(void)
{
  uint8_t u8IdInterrupt;
  
  /*Get interrupt Id*/
  u8IdInterrupt = GIOOFF2_bit.GIOOFF2;
  
  local_UC_DIO_eInputInterruptHandler(u8IdInterrupt);
}

#endif /*UC_CAN_MODULE_ENABLE*/
