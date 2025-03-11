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

File Name: uc_uart.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "uc_uart_cfg.h"
#include "uc_uart.h"

#ifdef UC_UART_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"

#include "uc_dio_cfg.h"
#include "uc_dio.h" /*For testing*/

/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/




/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

UC_UART_strObj_t UC_UART_astrObj[UC_UART_OBJECTS_AVAILABLE] = 
{
  {
    &SCI1GCR0,
    &SCI1GCR0_bit,
    &SCI1GCR1,
    &SCI1GCR1_bit,
    &SCI1SETINT,
    &SCI1SETINT_bit,
    &SCI1CLEARINT,
    &SCI1CLEARINT_bit,
    &SCI1SETINTLVL,
    &SCI1SETINTLVL_bit,
    &SCI1CLEARINTLVL,
    &SCI1CLEARINTLVL_bit,
    &SCI1FLR,
    &SCI1FLR_bit,
    &SCI1INTVECT0,
    &SCI1INTVECT0_bit,
    &SCI1INTVECT1,
    &SCI1INTVECT1_bit,
    &SCI1FORMAT,
    &SCI1FORMAT_bit,
    &SCI1BRS,
    &SCI1BRS_bit,
    &SCI1ED,
    &SCI1ED_bit,
    &SCI1RD,
    &SCI1RD_bit,
    &SCI1TD,
    &SCI1TD_bit,
    &SCI1PIO0,
    &SCI1PIO0_bit,
    &SCI1PIO1,
    &SCI1PIO1_bit,
    &SCI1PIO2,
    &SCI1PIO2_bit,
    &SCI1PIO3,
    &SCI1PIO3_bit,
    &SCI1PIO4,
    &SCI1PIO4_bit,
    &SCI1PIO5,
    &SCI1PIO5_bit,
    &SCI1PIO6,
    &SCI1PIO6_bit,
    &SCI1PIO7,
    &SCI1PIO7_bit,
    &SCI1PIO8,
    &SCI1PIO8_bit,
    &IO1DFTCTRL,
    &IO1DFTCTRL_bit,
  },
  {
    &SCI2GCR0,
    &SCI2GCR0_bit,
    &SCI2GCR1,
    (__scilingcr1_bits*)&SCI2GCR1_bit,
    &SCI2SETINT,
    (__scilinsetint_bits*)&SCI2SETINT_bit,
    &SCI2CLEARINT,
    (__scilinclearint_bits*)&SCI2CLEARINT_bit,
    &SCI2SETINTLVL,
    (__scilinsetintlvl_bits*)&SCI2SETINTLVL_bit,
    &SCI2CLEARINTLVL,
    (__scilinclearintlvl_bits*)&SCI2CLEARINTLVL_bit,
    &SCI2FLR,
    (__scilinflr_bits*)&SCI2FLR_bit,
    &SCI2INTVECT0,
    (__scilinintvect0_bits*)&SCI2INTVECT0_bit,
    &SCI2INTVECT1,
    (__scilinintvect1_bits*)&SCI2INTVECT1_bit,
    &SCI2FORMAT,
    (__scilinformat_bits*)&SCI2FORMAT_bit,
    &SCI2BRS,
    (__scilinbrs_bits*)&SCI2BRS_bit,
    &SCI2ED,
    &SCI2ED_bit,
    &SCI2RD,
    &SCI2RD_bit,
    &SCI2TD,
    &SCI2TD_bit,
    &SCI2PIO0,
    &SCI2PIO0_bit,
    &SCI2PIO1,
    &SCI2PIO1_bit,
    &SCI2PIO2,
    &SCI2PIO2_bit,
    &SCI2PIO3,
    &SCI2PIO3_bit,
    &SCI2PIO4,
    &SCI2PIO4_bit,
    &SCI2PIO5,
    &SCI2PIO5_bit,
    &SCI2PIO6,
    &SCI2PIO6_bit,
    &SCI2PIO7,
    &SCI2PIO7_bit,
    &SCI2PIO8,
    &SCI2PIO8_bit,
    &IO2DFTCTRL,
    (__scilin_iodftctrl_bits*)&IO2DFTCTRL_bit,
  }
};


uint8_t UC_UART_au8ReadMBUF[8] = {0};

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

extern UC_UART_Handler_t UC_UART_astrHandler[UC_UART_HANDLER_NUM];

/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/

#ifdef UC_UART_HANDLER_ID0
  __irq __arm void VIM_LINL0_Handler(void);
  __irq __arm void VIM_LINL1_Handler(void);
#endif /*UC_UART_HANDLER_ID0*/

#ifdef UC_UART_HANDLER_ID1
  __irq __arm void VIM_SCIL0_Handler(void);
  __irq __arm void VIM_SCIL1_Handler(void);
#endif /*UC_UART_HANDLER_ID1*/

/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/

void local_UC_UART_vdUpdateBaudRate(uint8_t u8BaudRateIndexModule, uint32_t u32BaudRate);
void local_UC_UART_vdInterruptHandlerRx(uint8_t u8UART_ModuleIndex);
//void local_UC_UART_vdInterruptHandlerTx(uint8_t u8UART_ModuleIndex);


/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void UC_UART_vdInit(void)
{
  uint8_t u8IndexModule;
  for(u8IndexModule = (uint8_t)0; u8IndexModule < UC_UART_HANDLER_NUM; u8IndexModule++)
  { 
    //UC_UART_astrHandler[u8IndexModule].pstrObj->pSCICLEARINT_bit->CLR_OE_INT = 1U;
    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR0 = (uint32_t) 0;
    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR0 = (uint32_t) 1;

    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->SW_nRST = 0U;
    //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 &= ~(0U<<7);
    
    //UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->LIN_MODE = 0U;
    
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO0_bit->TX_FUNC = UC_UART_astrHandler[u8IndexModule].eSciEnable;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->TXENA = UC_UART_astrHandler[u8IndexModule].eSciEnable;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO0_bit->RX_FUNC = UC_UART_astrHandler[u8IndexModule].eSciEnable;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->RXENA = UC_UART_astrHandler[u8IndexModule].eSciEnable;
    
    
    if(UC_UART_astrHandler[u8IndexModule].eSciTtansmitInterrupt == UC_UART_TX_INTERRUPT_ENABLE)
    {
        UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT_bit->SET_TX_INT = 1U; /*Transmit Interrupt Enable*/
        //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT |= 1<<8;
    }
    else
    {
      UC_UART_astrHandler[u8IndexModule].pstrObj->pSCICLEARINT_bit->CLR_TX_INT = 1U; /*Transmit Interrupt Disable*/
      //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCICLEARINT |= 1<<8;
    }

    if(UC_UART_astrHandler[u8IndexModule].eSciReceiveInterrupt == UC_UART_RX_INTERRUPT_ENABLE)
    {
        UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT_bit->SET_RX_INT = 1U; /*Receive Interrupt Enable*/
        //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT |= 1<<9;
    }
    else
    {
      UC_UART_astrHandler[u8IndexModule].pstrObj->pSCICLEARINT_bit->CLR_RX_INT = 1U; /*Receive Interrupt Disable*/
      //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCICLEARINT |= 1<<9;
    }

    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->STOP = UC_UART_astrHandler[u8IndexModule].eStopBit;
    //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 &= ~(0<<4);
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->PARITY_ENA = UC_UART_astrHandler[u8IndexModule].eParityEnable;
   // *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 &= ~(0<<2);
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->PARITY = UC_UART_astrHandler[u8IndexModule].eParityPolarity;
    //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 &= ~(0<<3);
    
    switch (UC_UART_astrHandler[u8IndexModule].eDataLength) /*Data Length*/
    {
    case UC_UART_ONE_BIT_DATA:
    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x0;
    break;
    case UC_UART_TWO_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x1;
    break;
    case UC_UART_THREE_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x2;
    break;
    case UC_UART_FOUR_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x3;
    break;
    case UC_UART_FIVE_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x4;
    break;
    case UC_UART_SIX_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x5;
    break;
    case UC_UART_SEVEN_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x6;
    break;
    case UC_UART_EIGHT_BIT_DATA: *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT = 0x7;
    break;      
    }
    
        /* MBUF mode --- Debugging */
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->MBUF_MODE = 1U;
    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIFORMAT |= 0x7 << 16U;    
    
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->CLOCK = 1U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->TIMING_MODE = 1U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->CONT = 1U;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 |= 1U<<5; //_bit->CLOCK = 1U;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 |= 1U<<1; //_bit->TIMING_MODE = 1U;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 |= 1U<<17; //_bit->CONT = 1U;
    

    local_UC_UART_vdUpdateBaudRate(u8IndexModule, (uint32_t)UC_UART_astrHandler[u8IndexModule].eBaudRate);

    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT_bit->SET_RX_DMA_ALL = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT_bit->SET_RX_DMA = 0U;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT &= ~(0<<17);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINT &= ~(0<<18);
      
      

    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINTLVL_bit->SET_RX_INT_LVL = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINTLVL_bit->SET_TX_INT_LVL = 1U;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINTLVL &= ~(0U<<9);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCISETINTLVL |= 1U<<8;
    
    
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO1_bit->TX_DIR = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO1_bit->RX_DIR = 0U; 
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO3_bit->TX_OUT = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO3_bit->RX_OUT = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO6_bit->TX_PDR = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO6_bit->RX_PDR = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO7_bit->TX_PD = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO7_bit->RX_PD = 0U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO8_bit->TX_PSL = 1U;
    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO8_bit->RX_PSL = 1U;
//    
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO0 |= 1U<<2;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO0 |= 1U<<1;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO1 &= ~(0U<<2);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO1 &= ~(0U<<1); 
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO3 &= ~(0U<<2);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO3 &= ~(0U<<1);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO6 &= ~(0U<<2);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO6 &= ~(0U<<1);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO7 &= ~(0U<<2);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO7 &= ~(0U<<1);
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO8 |= 1U<<2;
//    *UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIPIO8 |= 1U<<1;
    if(UC_UART_astrHandler[u8IndexModule].pvu32IoMuxTxReg != deMCD_NULL)
    {
      *UC_UART_astrHandler[u8IndexModule].pvu32IoMuxTxReg |= 1<< UC_UART_astrHandler[u8IndexModule].u8IoMuxTxBit;
      *UC_UART_astrHandler[u8IndexModule].pvu32IoMuxTxReg &= ~(1<< UC_UART_astrHandler[u8IndexModule].u8IoMuxTxBitDef);   
    }
    if(UC_UART_astrHandler[u8IndexModule].pvu32IoMuxRxReg != deMCD_NULL)
    {
      *UC_UART_astrHandler[u8IndexModule].pvu32IoMuxRxReg |= 1<< UC_UART_astrHandler[u8IndexModule].u8IoMuxRxBit;
      *UC_UART_astrHandler[u8IndexModule].pvu32IoMuxRxReg &= ~(1<< UC_UART_astrHandler[u8IndexModule].u8IoMuxRxBitDef);
    }

    UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1_bit->SW_nRST = 1U;
    //*UC_UART_astrHandler[u8IndexModule].pstrObj->pSCIGCR1 |= 1U<<7;

    UC_UART_astrHandler[u8IndexModule].u8ReceivedFlag = deMCD_FALSE;
  }

  
#ifdef UC_UART_HANDLER_ID0
  UC_SYS_vdRegisterISR(VIM_LINL0, VIM_LINL0_Handler);
  UC_SYS_vdEnableISR(VIM_LINL0); 
  UC_SYS_vdRegisterISR(VIM_LINL1, VIM_LINL1_Handler);
  UC_SYS_vdEnableISR(VIM_LINL1);
#endif /*UC_UART_HANDLER_ID0*/
  
#ifdef UC_UART_HANDLER_ID1
  UC_SYS_vdRegisterISR(VIM_SCIL0, VIM_SCIL0_Handler);
  UC_SYS_vdEnableISR(VIM_SCIL0); 
  UC_SYS_vdRegisterISR(VIM_SCIL1, VIM_SCIL1_Handler);
  UC_SYS_vdEnableISR(VIM_SCIL1);
#endif /*UC_UART_HANDLER_ID1*/
}
  



void UC_UART_vdMgr(void)
{

  //UC_UART_eSendByteSync(UC_UART_HANDLER_ID1,0x49);
  //UC_UART_eSendByteSync(UC_UART_HANDLER_ID0,0x49);
//  SCI2TD = 0x49;
//  SCI1TD = 0x55;
  /*
  uint8_t u8IndexModule;
  for(u8IndexModule=0; u8IndexModule<UC_UART_HANDLER_NUM; u8IndexModule++)
  { 
    if(UC_UART_astrHandler[u8IndexModule].u8ByteReadyToSend == deMCD_TRUE)
    {
      UC_UART_astrHandler[u8IndexModule].u8ByteReadyToSend = deMCD_FALSE;
      UC_UART_eSendByteSync(u8IndexModule, UC_UART_astrHandler[u8IndexModule].u8ByteToSend);
    }
  }
  */
}

STATUS_t UC_UART_eRegisterDataRxClbk(uint8_t u8IndexHandler, UC_UART_p2fDataReceivedClbk_t p2f, uint8_t u8DataBytesNumber)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8IndexHandler < UC_UART_HANDLER_NUM)
  {
    if(UC_UART_astrHandler[u8IndexHandler].p2fDataReceivedClbk == deMCD_NULL)
    {
      UC_UART_astrHandler[u8IndexHandler].p2fDataReceivedClbk = p2f;
      UC_UART_astrHandler[u8IndexHandler].u8BytesRxNumber = u8DataBytesNumber;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}

STATUS_t UC_UART_eRegisterDataTxClbk(uint8_t u8IndexHandler, UC_UART_p2fDataSentClbk_t p2f)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexHandler < UC_UART_HANDLER_NUM)
  {
    if(UC_UART_astrHandler[u8IndexHandler].p2fDataSentClbk == deMCD_NULL)
    {
      UC_UART_astrHandler[u8IndexHandler].p2fDataSentClbk = p2f;
      //UC_UART_astrHandler[u8IndexHandler].u8BytesNumber = u8DataBytesNumber;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}

STATUS_t UC_UART_eSendBytesSync(uint8_t u8IndexHandler , uint8_t* pu8BytesToSend, uint8_t u8BytesToSendNum)
{
  STATUS_t eStatus = STATUS_NOK; 
  uint8_t u8BytesIndex;
  
  if(u8BytesToSendNum < UC_UART_FRAME_BYTES_MAX)
  {
    for(u8BytesIndex = (uint8_t)0; u8BytesIndex < u8BytesToSendNum; u8BytesIndex++)
    {
      if(u8IndexHandler < UC_UART_HANDLER_NUM)
      {
        if(UC_UART_astrHandler[u8IndexHandler].eSciTtansmitInterrupt == UC_UART_TX_INTERRUPT_ENABLE)
        {
          /*Enable Interrupt Tx*/
          UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCISETINT_bit->SET_TX_INT = 1U;
        }
        UC_UART_astrHandler[u8IndexHandler].au8BytesToSend[u8BytesIndex] = pu8BytesToSend[u8BytesIndex];

        while (UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCIFLR_bit->TXRDY == 0)  
        {
          /*waiting*/ 
        }
        *UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCITD = UC_UART_astrHandler[u8IndexHandler].au8BytesToSend[u8BytesIndex];
        UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCISETINT_bit->SET_RX_INT = 1U;
        eStatus = STATUS_OK;
      }
      UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCIFLR_bit->FE = 1U;
      UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCIFLR_bit->OE = 1U;
      UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCIFLR_bit->PE = 1U;
    }

  }
  return eStatus;
}

/*
STATUS_t UC_UART_eSendByteAsync(uint8_t u8IndexHandler, uint8_t u8ByteToSend)
{
  STATUS_t eStatus = STATUS_NOK;
  if(u8IndexHandler < UC_UART_HANDLER_NUM)
  {
    UC_UART_astrHandler[u8IndexHandler].u8ByteToSend = u8ByteToSend;
    UC_UART_astrHandler[u8IndexHandler].u8ByteReadyToSend = deMCD_TRUE;
    eStatus = STATUS_OK;
  }

  return eStatus;
}
*/

/*
STATUS_t UC_UART_eReadUartFrameSync(uint8_t u8IndexHandler, uint8_t au8Data[])
{
  STATUS_t eStatus = STATUS_OK;
  uint8_t u8Counter;
  for(u8Counter = 0; u8Counter < UC_UART_astrHandler[u8IndexHandler].u8BytesNumber; u8Counter++)
  {
    au8Data[u8Counter] = UC_UART_au8ReadMBUF[u8Counter];
  }          
  return eStatus;
}
*/

STATUS_t UC_UART_eDisableRx(uint8_t u8IndexHandler)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexHandler < UC_UART_HANDLER_NUM)
  {
      UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCICLEARINT_bit->CLR_RX_INT = 1U; /*Receive Interrupt Disable*/
      eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t UC_UART_eEnableRx(uint8_t u8IndexHandler)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexHandler < UC_UART_HANDLER_NUM)
  {
      UC_UART_astrHandler[u8IndexHandler].pstrObj->pSCISETINT_bit->SET_RX_INT = 1U; /*Receive Interrupt Enable*/
      eStatus = STATUS_OK;
  }
  
  return eStatus;
}


/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/



void local_UC_UART_vdInterruptHandlerRx(uint8_t u8UART_ModuleIndex)
{
  static uint8_t su8DataCounter = 0;
  uint8_t u8Count = 0; 
  
  //UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCICLEARINT_bit->CLR_RX_INT = 1U; /*Receive Interrupt Disable*/
  
  
  UC_UART_astrHandler[u8UART_ModuleIndex].au8BytesToRead[su8DataCounter] = *UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCIRD;  

  su8DataCounter++;
    
  UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCIFLR_bit->FE = 1U;
  UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCIFLR_bit->OE = 1U;
  UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCIFLR_bit->PE = 1U;

  if(UC_UART_astrHandler[u8UART_ModuleIndex].p2fDataReceivedClbk != deMCD_NULL)
  {
      if(su8DataCounter == UC_UART_astrHandler[u8UART_ModuleIndex].u8BytesRxNumber)
      {
          UC_UART_astrHandler[u8UART_ModuleIndex].p2fDataReceivedClbk(UC_UART_astrHandler[u8UART_ModuleIndex].au8BytesToRead,UC_UART_astrHandler[u8UART_ModuleIndex].u8BytesRxNumber); //Calling function "local_ECU_SERIAL_vdReceiveDataClbk" which is pointed at with pointer "p2fDataReceivedClbk"
          su8DataCounter = 0;
          for(u8Count = 0; u8Count < UC_UART_FRAME_BYTES_MAX; u8Count++)
          {
            UC_UART_astrHandler[u8UART_ModuleIndex].au8BytesToRead[u8Count]=0;
          }         
      }
  }
  
  
  //UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCISETINT_bit->SET_RX_INT = 1U; /*Receive Interrupt Enable*/
}
  
void local_UC_UART_vdInterruptHandlerTx(uint8_t u8UART_ModuleIndex)
{
  UC_UART_astrHandler[u8UART_ModuleIndex].pstrObj->pSCICLEARINT_bit->CLR_TX_INT = 1U;
  if(UC_UART_astrHandler[u8UART_ModuleIndex].p2fDataSentClbk != deMCD_NULL)
  {                                                 
    UC_UART_astrHandler[u8UART_ModuleIndex].p2fDataSentClbk();
  }
}

void local_UC_UART_vdUpdateBaudRate(uint8_t u8BaudRateIndexModule,uint32_t u32BaudRate)
{
  uint32_t u32Temp = ((UC_UART_SYSTEM_INPUT_FREQUENCY_MHZ*1000000U)/16U);
  uint32_t u32Temp2 = (u32Temp/u32BaudRate)-1U;
  UC_UART_astrHandler[u8BaudRateIndexModule].pstrObj->pSCIBRS_bit->PRESCALER_P = (uint32_t) (u32Temp2 & 0x00FFFFFFU);
}

/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/


#ifdef UC_UART_HANDLER_ID0
__irq __arm void VIM_LINL0_Handler(void)
{    
  local_UC_UART_vdInterruptHandlerRx(UC_UART_HANDLER_ID0);
}

__irq __arm void VIM_LINL1_Handler(void)
{
  local_UC_UART_vdInterruptHandlerTx(UC_UART_HANDLER_ID0);
}

#endif /*UC_UART_HANDLER_ID0*/


#ifdef UC_UART_HANDLER_ID1
__irq __arm void VIM_SCIL0_Handler(void)
{
  local_UC_UART_vdInterruptHandlerRx(UC_UART_HANDLER_ID1);
}

__irq __arm void VIM_SCIL1_Handler(void)
{
  local_UC_UART_vdInterruptHandlerTx(UC_UART_HANDLER_ID1);
}
#endif /*UC_UART_HANDLER_ID1*/

#endif /*UC_UART_MODULE_ENABLE*/

