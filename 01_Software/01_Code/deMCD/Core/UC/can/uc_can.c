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

File Name: uc_can.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_can_cfg.h"
#include "uc_can.h"

#ifdef UC_CAN_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"

/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

/* NOTE: TSEG1+TSEG2+TSYNC must always be equal to 10 */
#define UC_CAN_TIME_TSEG1_TSEG2_DIFF            (3U)
#define UC_CAN_TIME_TSEG1_TERMS_OF_TQ           (6U)
#define UC_CAN_TIME_TSEG2_TERMS_OF_TQ           (UC_CAN_TIME_TSEG1_TERMS_OF_TQ-UC_CAN_TIME_TSEG1_TSEG2_DIFF)
/* NOTE TSYNC is ALWAYS 1 */
#define UC_CAN_TIME_TSYNC_TERMS_OF_TQ           (1U)

/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

UC_CAN_strObj_t UC_CAN_astrObj[UC_CAN_OBJECTS_AVAILABLE] =
{
  {
    &DCAN1CTL,
    &DCAN1CTL_bit, 
    &DCAN1ES,
    &DCAN1ES_bit,  
    &DCAN1ERRC,
    &DCAN1ERRC_bit,  
    &DCAN1BTR,
    &DCAN1BTR_bit,  
    &DCAN1INT,
    &DCAN1INT_bit,  
    &DCAN1TEST,
    &DCAN1TEST_bit, 
    &DCAN1PERR,
    &DCAN1PERR_bit, 
    &DCAN1ABOTR,  
    &DCAN1TXRQX,
    &DCAN1TXRQX_bit,
    &DCAN1TXRQ12,
    &DCAN1TXRQ12_bit, 
    &DCAN1TXRQ34,
    &DCAN1TXRQ34_bit, 
    &DCAN1TXRQ56,
    &DCAN1TXRQ56_bit,  
    &DCAN1TXRQ78,
    &DCAN1TXRQ78_bit,  
    &DCAN1NWDATX,
    &DCAN1NWDATX_bit, 
    &DCAN1NWDAT12,
    &DCAN1NWDAT12_bit, 
    &DCAN1NWDAT34,
    &DCAN1NWDAT34_bit, 
    &DCAN1NWDAT56,
    &DCAN1NWDAT56_bit,   
    &DCAN1NWDAT78,
    &DCAN1NWDAT78_bit,   
    &DCAN1INTPNDX,
    &DCAN1INTPNDX_bit,   
    &DCAN1INTPND12,
    &DCAN1INTPND12_bit,   
    &DCAN1INTPND34,
    &DCAN1INTPND34_bit,   
    &DCAN1INTPND56,
    &DCAN1INTPND56_bit,  
    &DCAN1INTPND78,
    &DCAN1INTPND78_bit,    
    &DCAN1MSGVALX,
    &DCAN1MSGVALX_bit,    
    &DCAN1MSGVAL12,
    &DCAN1MSGVAL12_bit,   
    &DCAN1MSGVAL34,
    &DCAN1MSGVAL34_bit,   
    &DCAN1MSGVAL56,
    &DCAN1MSGVAL56_bit,    
    &DCAN1MSGVAL78,
    &DCAN1MSGVAL78_bit,    
    &DCAN1INTMUX12,
    &DCAN1INTMUX12_bit,    
    &DCAN1INTMUX34,
    &DCAN1INTMUX34_bit,     
    &DCAN1INTMUX56,
    &DCAN1INTMUX56_bit,    
    &DCAN1INTMUX78,
    &DCAN1INTMUX78_bit,
    &DCAN1IF1CMD,
    &DCAN1IF1CMD_bit,     
    &DCAN1IF1MSK,
    &DCAN1IF1MSK_bit,      
    &DCAN1IF1ARB,
    &DCAN1IF1ARB_bit,     
    &DCAN1IF1MCTL,
    &DCAN1IF1MCTL_bit,    
    &DCAN1IF1DATA,
    &DCAN1IF1DATA_bit,    
    &DCAN1IF1DATB,
    &DCAN1IF1DATB_bit,    
    &DCAN1IF2CMD,
    &DCAN1IF2CMD_bit,     
    &DCAN1IF2MSK,
    &DCAN1IF2MSK_bit,   
    &DCAN1IF2ARB,
    &DCAN1IF2ARB_bit,   
    &DCAN1IF2MCTL,
    &DCAN1IF2MCTL_bit,  
    &DCAN1IF2DATA,
    &DCAN1IF2DATA_bit,  
    &DCAN1IF2DATB,
    &DCAN1IF2DATB_bit, 
    &DCAN1IF3OBS,
    &DCAN1IF3OBS_bit,    
    &DCAN1IF3MSK,
    &DCAN1IF3MSK_bit,    
    &DCAN1IF3ARB,
    &DCAN1IF3ARB_bit,    
    &DCAN1IF3MCTL,
    &DCAN1IF3MCTL_bit,   
    &DCAN1IF3DATA,
    &DCAN1IF3DATA_bit,    
    &DCAN1IF3DATB,
    &DCAN1IF3DATB_bit,    
    &DCAN1IF3UPD12,
    &DCAN1IF3UPD12_bit,  
    &DCAN1IF3UPD34,
    &DCAN1IF3UPD34_bit,  
    &DCAN1IF3UPD56,
    &DCAN1IF3UPD56_bit,  
    &DCAN1IF3UPD78,
    &DCAN1IF3UPD78_bit,    
    &DCAN1TIOC,
    &DCAN1TIOC_bit,      
    &DCAN1RIOC,
    &DCAN1RIOC_bit,          
    &DCAN1RAM_BASE, 
  },
  {
    &DCAN2CTL,
    &DCAN2CTL_bit, 
    &DCAN2ES,
    &DCAN2ES_bit,  
    &DCAN2ERRC,
    &DCAN2ERRC_bit,  
    &DCAN2BTR,
    &DCAN2BTR_bit,  
    &DCAN2INT,
    &DCAN2INT_bit,  
    &DCAN2TEST,
    &DCAN2TEST_bit, 
    &DCAN2PERR,
    &DCAN2PERR_bit, 
    &DCAN2ABOTR,  
    &DCAN2TXRQX,
    &DCAN2TXRQX_bit,
    &DCAN2TXRQ12,
    &DCAN2TXRQ12_bit, 
    &DCAN2TXRQ34,
    &DCAN2TXRQ34_bit, 
    &DCAN2TXRQ56,
    &DCAN2TXRQ56_bit,  
    &DCAN2TXRQ78,
    &DCAN2TXRQ78_bit,  
    &DCAN2NWDATX,
    &DCAN2NWDATX_bit, 
    &DCAN2NWDAT12,
    &DCAN2NWDAT12_bit, 
    &DCAN2NWDAT34,
    &DCAN2NWDAT34_bit, 
    &DCAN2NWDAT56,
    &DCAN2NWDAT56_bit,   
    &DCAN2NWDAT78,
    &DCAN2NWDAT78_bit,   
    &DCAN2INTPNDX,
    &DCAN2INTPNDX_bit,   
    &DCAN2INTPND12,
    &DCAN2INTPND12_bit,   
    &DCAN2INTPND34,
    &DCAN2INTPND34_bit,   
    &DCAN2INTPND56,
    &DCAN2INTPND56_bit,  
    &DCAN2INTPND78,
    &DCAN2INTPND78_bit,    
    &DCAN2MSGVALX,
    &DCAN2MSGVALX_bit,    
    &DCAN2MSGVAL12,
    &DCAN2MSGVAL12_bit,   
    &DCAN2MSGVAL34,
    &DCAN2MSGVAL34_bit,   
    &DCAN2MSGVAL56,
    &DCAN2MSGVAL56_bit,    
    &DCAN2MSGVAL78,
    &DCAN2MSGVAL78_bit,    
    &DCAN2INTMUX12,
    &DCAN2INTMUX12_bit,    
    &DCAN2INTMUX34,
    &DCAN2INTMUX34_bit,     
    &DCAN2INTMUX56,
    &DCAN2INTMUX56_bit,    
    &DCAN2INTMUX78,
    &DCAN2INTMUX78_bit,
    &DCAN2IF1CMD,
    &DCAN2IF1CMD_bit,     
    &DCAN2IF1MSK,
    &DCAN2IF1MSK_bit,      
    &DCAN2IF1ARB,
    &DCAN2IF1ARB_bit,     
    &DCAN2IF1MCTL,
    &DCAN2IF1MCTL_bit,    
    &DCAN2IF1DATA,
    &DCAN2IF1DATA_bit,    
    &DCAN2IF1DATB,
    &DCAN2IF1DATB_bit,    
    &DCAN2IF2CMD,
    &DCAN2IF2CMD_bit,     
    &DCAN2IF2MSK,
    &DCAN2IF2MSK_bit,   
    &DCAN2IF2ARB,
    &DCAN2IF2ARB_bit,   
    &DCAN2IF2MCTL,
    &DCAN2IF2MCTL_bit,  
    &DCAN2IF2DATA,
    &DCAN2IF2DATA_bit,  
    &DCAN2IF2DATB,
    &DCAN2IF2DATB_bit, 
    &DCAN2IF3OBS,
    &DCAN2IF3OBS_bit,    
    &DCAN2IF3MSK,
    &DCAN2IF3MSK_bit,    
    &DCAN2IF3ARB,
    &DCAN2IF3ARB_bit,    
    &DCAN2IF3MCTL,
    &DCAN2IF3MCTL_bit,   
    &DCAN2IF3DATA,
    &DCAN2IF3DATA_bit,    
    &DCAN2IF3DATB,
    &DCAN2IF3DATB_bit,    
    &DCAN2IF3UPD12,
    &DCAN2IF3UPD12_bit,  
    &DCAN2IF3UPD34,
    &DCAN2IF3UPD34_bit,  
    &DCAN2IF3UPD56,
    &DCAN2IF3UPD56_bit,  
    &DCAN2IF3UPD78,
    &DCAN2IF3UPD78_bit,    
    &DCAN2TIOC,
    &DCAN2TIOC_bit,      
    &DCAN2RIOC,
    &DCAN2RIOC_bit,          
    &DCAN2RAM_BASE, 
  },
  {
    &DCAN3CTL,
    &DCAN3CTL_bit, 
    &DCAN3ES,
    &DCAN3ES_bit,  
    &DCAN3ERRC,
    &DCAN3ERRC_bit,  
    &DCAN3BTR,
    &DCAN3BTR_bit,  
    &DCAN3INT,
    &DCAN3INT_bit,  
    &DCAN3TEST,
    &DCAN3TEST_bit, 
    &DCAN3PERR,
    &DCAN3PERR_bit, 
    &DCAN3ABOTR,  
    &DCAN3TXRQX,
    &DCAN3TXRQX_bit,
    &DCAN3TXRQ12,
    &DCAN3TXRQ12_bit, 
    &DCAN3TXRQ34,
    &DCAN3TXRQ34_bit, 
    &DCAN3TXRQ56,
    &DCAN3TXRQ56_bit,  
    &DCAN3TXRQ78,
    &DCAN3TXRQ78_bit,  
    &DCAN3NWDATX,
    &DCAN3NWDATX_bit, 
    &DCAN3NWDAT12,
    &DCAN3NWDAT12_bit, 
    &DCAN3NWDAT34,
    &DCAN3NWDAT34_bit, 
    &DCAN3NWDAT56,
    &DCAN3NWDAT56_bit,   
    &DCAN3NWDAT78,
    &DCAN3NWDAT78_bit,   
    &DCAN3INTPNDX,
    &DCAN3INTPNDX_bit,   
    &DCAN3INTPND12,
    &DCAN3INTPND12_bit,   
    &DCAN3INTPND34,
    &DCAN3INTPND34_bit,   
    &DCAN3INTPND56,
    &DCAN3INTPND56_bit,  
    &DCAN3INTPND78,
    &DCAN3INTPND78_bit,    
    &DCAN3MSGVALX,
    &DCAN3MSGVALX_bit,    
    &DCAN3MSGVAL12,
    &DCAN3MSGVAL12_bit,   
    &DCAN3MSGVAL34,
    &DCAN3MSGVAL34_bit,   
    &DCAN3MSGVAL56,
    &DCAN3MSGVAL56_bit,    
    &DCAN3MSGVAL78,
    &DCAN3MSGVAL78_bit,    
    &DCAN3INTMUX12,
    &DCAN3INTMUX12_bit,    
    &DCAN3INTMUX34,
    &DCAN3INTMUX34_bit,     
    &DCAN3INTMUX56,
    &DCAN3INTMUX56_bit,    
    &DCAN3INTMUX78,
    &DCAN3INTMUX78_bit,
    &DCAN3IF1CMD,
    &DCAN3IF1CMD_bit,     
    &DCAN3IF1MSK,
    &DCAN3IF1MSK_bit,      
    &DCAN3IF1ARB,
    &DCAN3IF1ARB_bit,     
    &DCAN3IF1MCTL,
    &DCAN3IF1MCTL_bit,    
    &DCAN3IF1DATA,
    &DCAN3IF1DATA_bit,    
    &DCAN3IF1DATB,
    &DCAN3IF1DATB_bit,    
    &DCAN3IF2CMD,
    &DCAN3IF2CMD_bit,     
    &DCAN3IF2MSK,
    &DCAN3IF2MSK_bit,   
    &DCAN3IF2ARB,
    &DCAN3IF2ARB_bit,   
    &DCAN3IF2MCTL,
    &DCAN3IF2MCTL_bit,  
    &DCAN3IF2DATA,
    &DCAN3IF2DATA_bit,  
    &DCAN3IF2DATB,
    &DCAN3IF2DATB_bit, 
    &DCAN3IF3OBS,
    &DCAN3IF3OBS_bit,    
    &DCAN3IF3MSK,
    &DCAN3IF3MSK_bit,    
    &DCAN3IF3ARB,
    &DCAN3IF3ARB_bit,    
    &DCAN3IF3MCTL,
    &DCAN3IF3MCTL_bit,   
    &DCAN3IF3DATA,
    &DCAN3IF3DATA_bit,    
    &DCAN3IF3DATB,
    &DCAN3IF3DATB_bit,    
    &DCAN3IF3UPD12,
    &DCAN3IF3UPD12_bit,  
    &DCAN3IF3UPD34,
    &DCAN3IF3UPD34_bit,  
    &DCAN3IF3UPD56,
    &DCAN3IF3UPD56_bit,  
    &DCAN3IF3UPD78,
    &DCAN3IF3UPD78_bit,    
    &DCAN3TIOC,
    &DCAN3TIOC_bit,      
    &DCAN3RIOC,
    &DCAN3RIOC_bit,          
    &DCAN3RAM_BASE, 
  }
};

/********************************************************************************************/
/************************** INTERNAL MUTEX DEFENITIONS **************************************/
/********************************************************************************************/


/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

extern UC_CAN_strModule_t UC_CAN_astrModule[UC_CAN_MODULE_NUM];

/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/

__irq __arm void VIM_DCAN1L0_Handler (void);
__irq __arm void VIM_DCAN1L1_Handler (void);
__irq __arm void VIM_DCAN2L0_Handler (void);
__irq __arm void VIM_DCAN2L1_Handler (void);
__irq __arm void VIM_DCAN3L0_Handler (void);
__irq __arm void VIM_DCAN3L1_Handler (void);



/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/

STATUS_t local_UC_CAN_eCheckMsgObjForNewData(uint8_t u8IndexModule, UC_CAN_eMsgObjId_t eMsgObjId);
STATUS_t local_UC_CAN_eSetMsgObjIntLine(uint8_t u8IndexModule, UC_CAN_eMsgObjId_t eMsgObjId, UC_CAN_eMsgIntLine_t eMsgIntLine);
STATUS_t local_UC_CAN_eGetMsgIndexFromObjId(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir, UC_CAN_eMsgObjId_t eMsgObjId, uint8_t* pu8Index);
STATUS_t local_UC_CAN_eResetMsgObjInt(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir, UC_CAN_eMsgObjId_t eMsgObjBoxId);
STATUS_t local_UC_CAN_eInterruptHandler(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir);

/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void UC_CAN_vdInit(void)
{
  uint8_t u8IndexMsg;
  uint8_t u8IndexModule;

  /********* START OF CAN INIT *********/
  for(u8IndexModule = (uint8_t)0; u8IndexModule < (uint8_t)UC_CAN_MODULE_NUM; u8IndexModule++)
  {
    UC_CAN_astrModule[u8IndexModule].eModuleStatus = UC_CAN_MODULE_NOT_INITIALIZED;
    
    if(UC_CAN_astrModule[u8IndexModule].eEnable == UC_CAN_MODULE_ENABLED)
    {
      /* Enter intitialziation mode */
      /*Reset CAN Hardware Driver*/
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->Init = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->SWR = 1;
      /*Start the Hardware Driver*/
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->Init = 1;
      /* Disable automatic wake up in power down mode */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->WUBA = 0;
      /* Disable power down mode */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->PDR = 0;
      /* Disable the usage of the DMA */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->DE3 = 0;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->DE2 = 0;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->DE1 = 0;
      /* Disable Interrupt line 1 and 0 */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->IE1 = 1; //Enable
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->IE0 = 1; //Enable
      /* Disable debug mode */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->InitDbg = 0;
      /* Disable SW reset and use CAN in normal operation */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->SWR = 0;
      /* Disable parity function */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->PMD = 0x05;
      /* Disable/Enable auto bus on */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->ABO = 1;
      /*Disable interruption debug support */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->IDS = 0;
      /* Disable Tes mode */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->Test = 0;
      /* Enable configuration change */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->CCE = 1;
      /* Enable automatic retransmission */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->DAR = 0;
      /* Disable error interrupt */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->EIE = 0;
      /* Disable status change interrupt */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->SIE = 0;
      
      /*Disable baudrate prescaler extension*/
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANBTR_bit->BRPE = 0;
    //  /* Set Baudrate to 250kbps based on VCLK = HCLK/2 = 80MHz */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANBTR_bit->BRP = (uint32_t)(((UC_CAN_SYSTEM_INPUT_FREQUENCY_MHZ*1e3)/((UC_CAN_TIME_TSYNC_TERMS_OF_TQ+UC_CAN_TIME_TSEG1_TERMS_OF_TQ+UC_CAN_TIME_TSEG2_TERMS_OF_TQ)*UC_CAN_astrModule[u8IndexModule].u16BaudRateKbps))-1);
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANBTR_bit->SJW = (0+4)-1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANBTR_bit->TSeg1 = UC_CAN_TIME_TSEG1_TERMS_OF_TQ-1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANBTR_bit->TSeg2 = UC_CAN_TIME_TSEG2_TERMS_OF_TQ-1;

      /* Start Configuring Messages */
      /*Initialize transmit messages using IF1 */
      for(u8IndexMsg = (uint8_t)0; u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx; u8IndexMsg++)
      {
        /* Copy the message object from the message ram to the message buffer */
         *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00770000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId);
         
         while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
         {
          /* Wait */
         }
        
         /* Set the message buffer */
         
        /* Enable all filters */
        *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MSK = 0xFFFFFFFF;
        
        /*Enable the configured message object */
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB_bit->MsgVal = 1;
        /*Disable extended drame ids if no extended id is specified*/
        if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u32ExtendedMsgFrameId != (uint32_t)0x00000000)
        {
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB_bit->Xtd = 1; 
        }
        else
        {
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB_bit->Xtd = 0;
        }
        /*Set the frame direction to transmission*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB_bit->Dir = 1;

        /* Set Extended Frame Id */
        if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u32ExtendedMsgFrameId != (uint32_t)0x00000000)
        {
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB & (~(0x1FFFFFFF<<0));
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB | 
                                                                   (UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u32ExtendedMsgFrameId << 0);
        }
        else
        {
          /* Set Frame Id */
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB & (~(0x7FF<<18));
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1ARB | 
                                                                   (UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16MsgFrameId << 18);
        }

        /*Enable the usage of the mask register*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->UMask = 1;
        /*If fifo is not used, this bit has to be always 1*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->EoB = 1;
        /*Set DLC */
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->DLC = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u8DLC;
        
        /*Set Message Interrupt*/
        if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u8EnMsgTriggerInt != deMCD_FALSE)
        {
          local_UC_CAN_eSetMsgObjIntLine(u8IndexModule, UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId, UC_CAN_MSG_INT_LINE_0);
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->IntPnd = 1;
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->TxIE = 1;
        }
        else
        {
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->IntPnd = 0;
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->TxIE = 0;
        }
        
        /* Copy the message buffer to the message RAM */
         *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00F80000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId);
         
         while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
         {
          /* Wait */
         }
      }
      
      /*Initialize receive messages using IF2 */
      for(u8IndexMsg = (uint8_t)0; u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx; u8IndexMsg++)
      {
        
        /* Copy the message object from the message ram to the message buffer */
        *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00770000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgObjBoxId);
        
        while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD_bit->Busy == 1)
        {
          /* Wait */
        }
        
        /* Enable all filters */
        *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MSK = 0xFFFFFFFF;
        
        /*Enable the configured message object */
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB_bit->MsgVal = 1;
        /*Disable extended drame ids if no extended id is specified*/
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u32ExtendedMsgFrameId != (uint32_t)0x00000000)
        {
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB_bit->Xtd = 1; 
        }
        else
        {
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB_bit->Xtd = 0;
        }
        /*Set the frame direction to transmission*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB_bit->Dir = 0;
        
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u32ExtendedMsgFrameId != (uint32_t)0x00000000)
        {
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB & (~(0x1FFFFFFF<<0));
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB | 
                                                                   (UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u32ExtendedMsgFrameId << 0);
        }
        else
        {
          /* Set Frame Id */
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB & (~(0x7FF<<18));
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2ARB | 
                                                                   (UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16MsgFrameId << 18);
        }
        
        /*Enable the usage of the mask register*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->UMask = 1;
        /*If fifo is not used, this bit has to be always 1*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->EoB = 1;
        /*Set DLC to 8*/
        UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->DLC = UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u8DLC;

        /*Set Message Interrupt*/
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u8EnMsgTriggerInt != deMCD_FALSE)
        {
          local_UC_CAN_eSetMsgObjIntLine(u8IndexModule, UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgObjBoxId, UC_CAN_MSG_INT_LINE_1);
          //UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX12_bit->IntMux12 = 1;
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->IntPnd = 1;
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->RxIE = 1;
        }
        else
        {
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->IntPnd = 0;
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->RxIE = 0;
        }

        /* Copy the message buffer to the message RAM */
         *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00F80000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgObjBoxId);
         
         while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD_bit->Busy == 1)
         {
          /* Wait */
         }
      
      }
      
      /* Configure Tx/Rx Pins */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANTIOC_bit->PU = 0;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANTIOC_bit->PD = 0;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANTIOC_bit->OD = 0;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANTIOC_bit->Func = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANTIOC_bit->Dir = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANTIOC_bit->Out = 1;
      
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANRIOC_bit->PU = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANRIOC_bit->PD = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANRIOC_bit->OD = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANRIOC_bit->Func = 1;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANRIOC_bit->Dir = 0;
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANRIOC_bit->Out = 0;
      
      
      /* Exit intitialziation mode */
      UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANCTL_bit->Init = 0;
      
      UC_CAN_astrModule[u8IndexModule].eModuleStatus = UC_CAN_MODULE_INITIALIZED;
    }
  }
  
  
  /* Register CAN ISR Functions */
#ifdef UC_CAN_DCAN1_SW_CAN_MODULE
  UC_SYS_vdRegisterISR(VIM_DCAN1L0, VIM_DCAN1L0_Handler);
  UC_SYS_vdEnableISR(VIM_DCAN1L0); 
  UC_SYS_vdRegisterISR(VIM_DCAN1L1, VIM_DCAN1L1_Handler);
  UC_SYS_vdEnableISR(VIM_DCAN1L1);
#endif /*UC_CAN_DCAN1_SW_CAN_MODULE*/
#ifdef UC_CAN_DCAN2_SW_CAN_MODULE
  UC_SYS_vdRegisterISR(VIM_DCAN2L0, VIM_DCAN2L0_Handler);
  UC_SYS_vdEnableISR(VIM_DCAN2L0); 
  UC_SYS_vdRegisterISR(VIM_DCAN2L1, VIM_DCAN2L1_Handler);
  UC_SYS_vdEnableISR(VIM_DCAN2L1);
#endif /*UC_CAN_DCAN2_SW_CAN_MODULE*/
#ifdef UC_CAN_DCAN3_SW_CAN_MODULE
  UC_SYS_vdRegisterISR(VIM_DCAN3L0, VIM_DCAN3L0_Handler);
  UC_SYS_vdEnableISR(VIM_DCAN3L0); 
  UC_SYS_vdRegisterISR(VIM_DCAN3L1, VIM_DCAN3L1_Handler);
  UC_SYS_vdEnableISR(VIM_DCAN3L1);
#endif /*UC_CAN_DCAN3_SW_CAN_MODULE*/

  /********* END OF CAN INIT *********/
}


void UC_CAN_vdMgr(void)
{
  uint8_t u8IndexMsg;
  STATUS_t eRxMsgStatus;
  uint8_t u8IndexModule;

  for(u8IndexModule = (uint8_t)0; u8IndexModule < (uint8_t)UC_CAN_MODULE_NUM; u8IndexModule++)
  {
    if((UC_CAN_astrModule[u8IndexModule].eModuleStatus == UC_CAN_MODULE_INITIALIZED) && (UC_CAN_astrModule[u8IndexModule].eEnable == UC_CAN_MODULE_ENABLED))
    {
      for(u8IndexMsg=0; u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx; u8IndexMsg++)
      {
          
        if((UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgTrigger & (uint8_t)UC_CAN_MSG_TRIG_PERIODIC) == (uint8_t)UC_CAN_MSG_TRIG_PERIODIC)
        {
          /* Increment the message counter */
          UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16Counter++;
          
          if((UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16Counter * UC_CAN_OS_TASK_MS) >= (UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16PeriodMs + UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16JitterMs))
          {
            /* Reset the message counter */
            UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16Counter = (uint16_t)0;
            /* Check if the message is enabled */
            if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eEnable == UC_CAN_MSG_ENABLED)
            {
              /* Copy the message object fromt the message RAM to the message buffer */
              *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00770000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId);

              while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
              {
              /* Wait */
              }

              /* Transmit the data to the message buffer */
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data0 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[0];
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data1 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[1];
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data2 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[2];
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data3 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[3];
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data4 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[4];  
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data5 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[5];
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data6 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[6];
              UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data7 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[7];

              /* Copy the message buffer to the message RAM and Transmit the message */
              *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00870000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId);

              while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
              {
              /* Wait */
              }
            }
          }
        }
      }
      
      for(u8IndexMsg = (uint8_t)0; u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx; u8IndexMsg++)
      {
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eEnable == UC_CAN_MSG_ENABLED)
        {
          if((UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgTrigger & (uint8_t)UC_CAN_MSG_TRIG_PERIODIC) == (uint8_t)UC_CAN_MSG_TRIG_PERIODIC)
          {
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16Counter++;
          }
          
          eRxMsgStatus = local_UC_CAN_eCheckMsgObjForNewData(u8IndexModule, UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgObjBoxId);

          if(eRxMsgStatus == STATUS_OK)
          {
            /* Copy the message object fromt the message RAM to the message buffer */
            *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00770000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgObjBoxId);

            while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD_bit->Busy == 1)
            {
            /* Wait */
            }

            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[0] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data0;
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[1] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data1;
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[2] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data2;
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[3] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data3;
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[4] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data4;  
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[5] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data5;
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[6] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data6;
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[7] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data7;

            /* Mark the frame as valid */
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgValid = UC_CAN_MSG_VALID;
            
            /* Reset the message counter */
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16Counter = (uint16_t)0;
          }
          else
          {
            if((UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgTrigger & (uint8_t)UC_CAN_MSG_TRIG_PERIODIC) == (uint8_t)UC_CAN_MSG_TRIG_PERIODIC)
            {
              if((UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16Counter * UC_CAN_OS_TASK_MS) >= (UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16PeriodMs + UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16JitterMs))
              {
                UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgValid = UC_CAN_MSG_INVALID;
              }
            }
          }
        }
      }
    }
  }
  
}

STATUS_t UC_CAN_eRegisterCallbackForMsgEvent(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir, uint8_t u8IndexMsg, UC_CAN_p2fMsgTriggerClbk_t p2fClbk)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(eMsgDir == UC_CAN_MSG_DIR_TX)
    {
      if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx)
      {
        if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].p2fClbk == deMCD_NULL)
        {
          UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].p2fClbk = p2fClbk;
          eStatus = STATUS_OK;
        }
      }
    }
    else if(eMsgDir == UC_CAN_MSG_DIR_RX)
    {
      if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx)
      {
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].p2fClbk == deMCD_NULL)
        {
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].p2fClbk = p2fClbk;
          eStatus = STATUS_OK;
        }
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eWriteCanFrameAsync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t au8Data[])
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IndexData;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx)
    {
      /* Check if the message is enabled */
      if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eEnable == UC_CAN_MSG_ENABLED)
      {
        /* Check if it is set to be periodic message, only periodic messages are allowed to be written asynchronously */
        if((UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgTrigger & (uint8_t)UC_CAN_MSG_TRIG_PERIODIC) == (uint8_t)UC_CAN_MSG_TRIG_PERIODIC)
        {
          /* Start copying the given data to the local buffer */
          for(u8IndexData = (uint8_t)0; u8IndexData < (uint8_t)8; u8IndexData++)
          {
            UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[u8IndexData] = au8Data[u8IndexData];
          }
          
          eStatus = STATUS_OK;
        }
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eReadCanFrameAsync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t* pu8Data)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IndexData;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx)
    {
      /* Check if the message is enabled */
      if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eEnable == UC_CAN_MSG_ENABLED)
      {
         /* Check if the message is alive/updated not lost */
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgValid == UC_CAN_MSG_VALID)
        {
          /* Start copying the read data to the given buffer */
          for(u8IndexData = (uint8_t)0; u8IndexData < (uint8_t)8; u8IndexData++)
          {
            pu8Data[u8IndexData] = UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[u8IndexData];
          }
          
          /* If the frame is only based on event, reset the valid flag after reading*/
          if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgTrigger == UC_CAN_MSG_TRIG_EVENT)
          {
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgValid = UC_CAN_MSG_INVALID;
          }
          
          eStatus = STATUS_OK;
        }
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eWriteCanFrameSync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t au8Data[])
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IndexData;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx)
    {
      /* Check if the message is enabled */
      if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eEnable == UC_CAN_MSG_ENABLED)
      {
        /* Check if it is set to be event message, only event messages are allowed to be written Synchronously */
        if((UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgTrigger & (uint8_t)UC_CAN_MSG_TRIG_EVENT) == (uint8_t)UC_CAN_MSG_TRIG_EVENT)
        {
          
          /* Start copying the given data to the local buffer */
          for(u8IndexData = (uint8_t)0; u8IndexData < (uint8_t)8; u8IndexData++)
          {
            UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[u8IndexData] = au8Data[u8IndexData];
          }
          
          /* Copy the message object fromt the message RAM to the message buffer */
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00770000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId);

          while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
          {
          /* Wait */
          }

          /* Transmit the data to the message buffer */
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data0 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[0];
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data1 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[1];
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data2 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[2];
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATA_bit->Data3 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[3];
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data4 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[4];  
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data5 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[5];
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data6 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[6];
          UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1DATB_bit->Data7 = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].au8Data[7];

          /* Copy the message buffer to the message RAM and Transmit the message */
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00870000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eMsgObjBoxId);

          while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
          {
          /* Wait */
          }

          eStatus = STATUS_OK;
        }
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eReadCanFrameSync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t* pu8Data)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IndexData;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx)
    {
      /* Check if the message is enabled */
      if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eEnable == UC_CAN_MSG_ENABLED)
      {
         /* Check if the message is alive/updated not lost */
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgValid == UC_CAN_MSG_VALID)
        {
          /* Copy the message object fromt the message RAM to the message buffer */
          *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00770000 | ((uint8_t)UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgObjBoxId);

          while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD_bit->Busy == 1)
          {
          /* Wait */
          }

          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[0] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data0;
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[1] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data1;
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[2] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data2;
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[3] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATA_bit->Data3;
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[4] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data4;  
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[5] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data5;
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[6] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data6;
          UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[7] = UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2DATB_bit->Data7;
          
          /* Start copying the read data to the given buffer */
          for(u8IndexData = (uint8_t)0; u8IndexData < (uint8_t)8; u8IndexData++)
          {
            pu8Data[u8IndexData] = UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].au8Data[u8IndexData];
          } 

          /* If the frame is only based on event, reset the valid flag after reading*/
          if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgTrigger == UC_CAN_MSG_TRIG_EVENT)
          {
            UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eMsgValid = UC_CAN_MSG_INVALID;
          }
          
          eStatus = STATUS_OK;
        }
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eGetFrameIndex(uint8_t u8IndexModule, uint32_t u32MsgFrameId, uint8_t* pu8IndexMsg)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IndexMsg;
  uint8_t u8Found = deMCD_FALSE;
  uint32_t u32GlobalFrameId;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    for(u8IndexMsg = (uint8_t)0; u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx; u8IndexMsg++)
    {
      if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u32ExtendedMsgFrameId != 0)
      {
        u32GlobalFrameId = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u32ExtendedMsgFrameId;
      }
      else
      {
        u32GlobalFrameId = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u16MsgFrameId;
      }
      
      if(u32MsgFrameId == u32GlobalFrameId)
      {
        *pu8IndexMsg = u8IndexMsg;
        u8Found = deMCD_TRUE;
        break;
      }
    }

    if(u8Found == deMCD_FALSE)
    {
      for(u8IndexMsg = (uint8_t)0; u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx; u8IndexMsg++)
      {
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u32ExtendedMsgFrameId != 0)
        {
          u32GlobalFrameId = UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u32ExtendedMsgFrameId;
        }
        else
        {
          u32GlobalFrameId = UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u16MsgFrameId;
        }
        
        if(u32MsgFrameId == u32GlobalFrameId)
        {
          *pu8IndexMsg = u8IndexMsg;
          u8Found = deMCD_TRUE;
          break;
        }
      }
    }

    if(u8Found == deMCD_TRUE)
    {
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eGetMsgDLC(uint8_t u8IndexModule, uint8_t u8IndexMsg, UC_CAN_eMsgDir_t eMsgDir, uint8_t* pu8DLC)
{
  STATUS_t eStatus = STATUS_NOK;

  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(eMsgDir == UC_CAN_MSG_DIR_TX)
    {
      if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx)
      {
        *pu8DLC = UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].u8DLC;
        eStatus = STATUS_OK;
      }
    }
    else if(eMsgDir == UC_CAN_MSG_DIR_RX)
    {
      if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx)
      {
        *pu8DLC = UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].u8DLC;
        eStatus = STATUS_OK;
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_CAN_eEnableFrame(uint8_t u8IndexModule, uint8_t u8IndexMsg, UC_CAN_eMsgDir_t eMsgDir, UC_CAN_eMsgEnable_t eMsgEnable)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if(eMsgDir == UC_CAN_MSG_DIR_TX)
    {
      if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumTx)
      {
        UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8IndexMsg].eEnable = eMsgEnable;
        eStatus = STATUS_OK;
      }
    }
    else if(eMsgDir == UC_CAN_MSG_DIR_RX)
    {
      if(u8IndexMsg < UC_CAN_astrModule[u8IndexModule].u8NumRx)
      {
        UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8IndexMsg].eEnable = eMsgEnable;
        eStatus = STATUS_OK;
      }
    }
  }
  
  return eStatus;
}

/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

STATUS_t local_UC_CAN_eCheckMsgObjForNewData(uint8_t u8IndexModule, UC_CAN_eMsgObjId_t eMsgObjId)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8MsgObjNum = (uint8_t)eMsgObjId;
  uint8_t u8MsgObjIndex = (uint8_t)0;
  uint8_t u8IsNewData = (uint8_t)0;
  
  if((u8MsgObjNum > (uint8_t)0) && (u8MsgObjNum <= (uint8_t)32))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*0);
    u8IsNewData = (*UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANNWDAT12 & (1<<(u8MsgObjIndex-1))) >> (u8MsgObjIndex-1);
  }
  else if((u8MsgObjNum >= (uint8_t)33) && (u8MsgObjNum <= (uint8_t)64))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*1);
    u8IsNewData = (*UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANNWDAT34 & (1<<(u8MsgObjIndex-1))) >> (u8MsgObjIndex-1);
  }
  else if((u8MsgObjNum >= (uint8_t)65) && (u8MsgObjNum <= (uint8_t)96))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*2);
    u8IsNewData = (*UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANNWDAT56 & (1<<(u8MsgObjIndex-1))) >> (u8MsgObjIndex-1);
  } 
  else if((u8MsgObjNum >= (uint8_t)97) && (u8MsgObjNum <= (uint8_t)128))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*3);
    u8IsNewData = (*UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANNWDAT78 & (1<<(u8MsgObjIndex-1))) >> (u8MsgObjIndex-1);
  }
  
  if(u8IsNewData)
  {
    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t local_UC_CAN_eSetMsgObjIntLine(uint8_t u8IndexModule, UC_CAN_eMsgObjId_t eMsgObjId, UC_CAN_eMsgIntLine_t eMsgIntLine)
{
  STATUS_t eStatus = STATUS_OK;
  uint8_t u8MsgObjNum = (uint8_t)eMsgObjId;
  uint8_t u8MsgObjIndex = (uint8_t)0;

  if((u8MsgObjNum >= (uint8_t)1) && (u8MsgObjNum <= (uint8_t)31))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*0);
    if(eMsgIntLine == UC_CAN_MSG_INT_LINE_1)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX12 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX12 | (1<<(u8MsgObjIndex));
    }
    else if(eMsgIntLine == UC_CAN_MSG_INT_LINE_0)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX12 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX12 & (~(1<<(u8MsgObjIndex)));
    }
  }
  else if((u8MsgObjNum >= (uint8_t)32) && (u8MsgObjNum <= (uint8_t)63))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*1);
    if(eMsgIntLine == UC_CAN_MSG_INT_LINE_1)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX34 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX34 | (1<<(u8MsgObjIndex));
    }
    else if(eMsgIntLine == UC_CAN_MSG_INT_LINE_0)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX34 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX34 & (~(1<<(u8MsgObjIndex)));
    }
  }
  else if((u8MsgObjNum >= (uint8_t)64) && (u8MsgObjNum <= (uint8_t)95))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*2);
    if(eMsgIntLine == UC_CAN_MSG_INT_LINE_1)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX56 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX56 | (1<<(u8MsgObjIndex));
    }
    else if(eMsgIntLine == UC_CAN_MSG_INT_LINE_0)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX56 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX56 & (~(1<<(u8MsgObjIndex)));
    }
  } 
  else if((u8MsgObjNum >= (uint8_t)96) && (u8MsgObjNum <= (uint8_t)127))
  {
    u8MsgObjIndex = u8MsgObjNum - (1*32*3);
    if(eMsgIntLine == UC_CAN_MSG_INT_LINE_1)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX78 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX78 | (1<<(u8MsgObjIndex));
    }
    else if(eMsgIntLine == UC_CAN_MSG_INT_LINE_0)
    {
      *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX78 = *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINTMUX78 & (~(1<<(u8MsgObjIndex)));
    }
  }
  else
  {
    eStatus = STATUS_NOK;
  }
  
  return eStatus;
}

STATUS_t local_UC_CAN_eGetMsgIndexFromObjId(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir, UC_CAN_eMsgObjId_t eMsgObjId, uint8_t* pu8Index)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8Index = (uint8_t)0;
  
  switch(eMsgDir) 
  {
    case UC_CAN_MSG_DIR_TX:
      for(u8Index = 0; u8Index < UC_CAN_astrModule[u8IndexModule].u8NumTx; u8Index++)
      {
        if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8Index].eMsgObjBoxId == eMsgObjId)
        {
          eStatus = STATUS_OK;
          break;
        }
      }
      break;
    case UC_CAN_MSG_DIR_RX:
      for(u8Index = 0; u8Index < UC_CAN_astrModule[u8IndexModule].u8NumRx; u8Index++)
      {
        if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8Index].eMsgObjBoxId == eMsgObjId)
        {
          eStatus = STATUS_OK;
          break;
        }
      }
      break;
    default:
      eStatus = STATUS_NOK;
      break;
  }
  
  switch(eStatus)
  {
    case STATUS_NOK:
      *pu8Index = (uint8_t)0;
      break;
    case STATUS_OK:
      *pu8Index = u8Index;
      break;
    default:
      eStatus = STATUS_NOK;
      break;  
  }
  
  return eStatus;
}


STATUS_t local_UC_CAN_eResetMsgObjInt(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir, UC_CAN_eMsgObjId_t eMsgObjBoxId)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(eMsgDir == UC_CAN_MSG_DIR_RX)
  {
    //*UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x007F0000 | ((uint8_t)eMsgObjBoxId);
    *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00080000 | ((uint8_t)eMsgObjBoxId);
    
    while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD_bit->Busy == 1)
    {
      /* Wait */
    }   

    UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2MCTL_bit->IntPnd = 0;

    //*UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00F80000 | ((uint8_t)eMsgObjBoxId);
    *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD = 0x00080000 | ((uint8_t)eMsgObjBoxId);

    while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF2CMD_bit->Busy == 1)
    {
      /* Wait */
    }

    eStatus = STATUS_OK;
  }
  else if(eMsgDir == UC_CAN_MSG_DIR_TX)
  {
    *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x007F0000 | ((uint8_t)eMsgObjBoxId);
    
    while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
    {
      /* Wait */
    }   

    UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1MCTL_bit->IntPnd = 0;

    *UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD = 0x00F80000 | ((uint8_t)eMsgObjBoxId);

    while(UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANIF1CMD_bit->Busy == 1)
    {
      /* Wait */
    }

    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t local_UC_CAN_eInterruptHandler(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8MsgIndex;
  UC_CAN_eMsgObjId_t eMsgObjId;

  if(u8IndexModule < UC_CAN_MODULE_NUM)
  {
    if((UC_CAN_astrModule[u8IndexModule].eModuleStatus == UC_CAN_MODULE_INITIALIZED) && (UC_CAN_astrModule[u8IndexModule].eEnable == UC_CAN_MODULE_ENABLED))
    {
      /* Identify the source of the Interrupt, which Rx/Tx message has interrupted the controller */
      switch(eMsgDir)
      {
      case UC_CAN_MSG_DIR_TX:
        eMsgObjId = (UC_CAN_eMsgObjId_t)UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINT_bit->Int0ID;
        eStatus = STATUS_OK;
        break;
      case UC_CAN_MSG_DIR_RX:
        eMsgObjId = (UC_CAN_eMsgObjId_t)UC_CAN_astrModule[u8IndexModule].pstrObj->pDCANINT_bit->Int1ID;
        eStatus = STATUS_OK;
        break;
      default:
        eStatus = STATUS_NOK;
        break;
      }

      if(eStatus == STATUS_OK)
      {
        /*Get the message index that corresponds to the message object id*/
        eStatus = local_UC_CAN_eGetMsgIndexFromObjId(u8IndexModule, eMsgDir, eMsgObjId, &u8MsgIndex);

        /* Reset the interrupt */
        local_UC_CAN_eResetMsgObjInt(u8IndexModule, eMsgDir, eMsgObjId);
        
        /* If message index found */
        if(eStatus == STATUS_OK)
        {


          /* If a valid message interrupted the controller and there is a callback registered for it, then call it*/
          switch(eMsgDir) 
          {
            case UC_CAN_MSG_DIR_TX:
              if(UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8MsgIndex].p2fClbk != deMCD_NULL)
              {
                UC_CAN_astrModule[u8IndexModule].astrMsgTx[u8MsgIndex].p2fClbk();
              }
              break;
            case UC_CAN_MSG_DIR_RX:
              if(UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8MsgIndex].p2fClbk != deMCD_NULL)
              {
                UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8MsgIndex].eMsgValid = UC_CAN_MSG_VALID;
                UC_CAN_astrModule[u8IndexModule].astrMsgRx[u8MsgIndex].p2fClbk();
              }
              break;
            default:
              eStatus = STATUS_NOK;
              break;
          }
        }
      }
    }
  }
  
  return eStatus;
}


/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/

/* Interrupt Service Routine reserved for CAN1 Tx Interrupts */
__irq __arm void VIM_DCAN1L0_Handler (void)
{
#ifdef UC_CAN_DCAN1_SW_CAN_MODULE
  local_UC_CAN_eInterruptHandler(UC_CAN_DCAN1_SW_CAN_MODULE, UC_CAN_MSG_DIR_TX);
#endif /*UC_CAN_DCAN1_SW_CAN_MODULE*/
}

/* Interrupt Service Routine reserved for CAN1 Rx Interrupts */
__irq __arm void VIM_DCAN1L1_Handler (void)
{
#ifdef UC_CAN_DCAN1_SW_CAN_MODULE
  local_UC_CAN_eInterruptHandler(UC_CAN_DCAN1_SW_CAN_MODULE, UC_CAN_MSG_DIR_RX);
#endif /*UC_CAN_DCAN1_SW_CAN_MODULE*/
}

/* Interrupt Service Routine reserved for CAN2 Tx Interrupts */
__irq __arm void VIM_DCAN2L0_Handler (void)
{
#ifdef UC_CAN_DCAN2_SW_CAN_MODULE
  local_UC_CAN_eInterruptHandler(UC_CAN_DCAN2_SW_CAN_MODULE, UC_CAN_MSG_DIR_TX);
#endif /*UC_CAN_DCAN2_SW_CAN_MODULE*/
}

/* Interrupt Service Routine reserved for CAN2 Rx Interrupts */
__irq __arm void VIM_DCAN2L1_Handler (void)
{
#ifdef UC_CAN_DCAN2_SW_CAN_MODULE
  local_UC_CAN_eInterruptHandler(UC_CAN_DCAN2_SW_CAN_MODULE, UC_CAN_MSG_DIR_RX);
#endif /*UC_CAN_DCAN2_SW_CAN_MODULE*/
}

/* Interrupt Service Routine reserved for CAN3 Tx Interrupts */
__irq __arm void VIM_DCAN3L0_Handler (void)
{
#ifdef UC_CAN_DCAN3_SW_CAN_MODULE
  local_UC_CAN_eInterruptHandler(UC_CAN_DCAN3_SW_CAN_MODULE, UC_CAN_MSG_DIR_TX);
#endif /*UC_CAN_DCAN3_SW_CAN_MODULE*/
}

/* Interrupt Service Routine reserved for CAN3 Rx Interrupts */
__irq __arm void VIM_DCAN3L1_Handler (void)
{
#ifdef UC_CAN_DCAN3_SW_CAN_MODULE
  local_UC_CAN_eInterruptHandler(UC_CAN_DCAN3_SW_CAN_MODULE, UC_CAN_MSG_DIR_RX);
#endif /*UC_CAN_DCAN3_SW_CAN_MODULE*/
}



#endif /*UC_CAN_MODULE_ENABLE*/

