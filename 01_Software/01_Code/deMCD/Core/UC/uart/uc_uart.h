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

File Name: uc_uart.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#ifndef UC_UART_H
#define UC_UART_H

#include "lib_types.h"
#include "uc_header.h"

#define UC_UART_OBJECTS_AVAILABLE                    (2)

#define UC_UART_FRAME_BYTES_MAX                      (8)

/*Pointer to function that points to UART interrupts callbacks*/
typedef void (*UC_UART_p2fDataReceivedClbk_t)(uint8_t* pu8DataRx, uint8_t u8BytesNum);
typedef void (*UC_UART_p2fDataSentClbk_t)(void);


typedef enum UC_UART_eSciModuleIdTemplate
{
   UC_SCI_MODULE_1 = 0,
	 UC_SCI_MODULE_2 = 1,
} UC_UART_eSciModuleId_t;

typedef enum UC_UART_eSciModuleEnable
{
  UC_UART_SCI_ENABLE = 1,
  UC_UART_SCI_DISABLE = 0,
} UC_UART_eSciModuleEnable_t;

typedef enum UC_UART_eSciBaudRateTemplate
{
   UC_SCI_BAUD_9600 = 9600,
   UC_SCI_BAUD_56000 = 56000,
   UC_SCI_BAUD_115200 = 115200,
   UC_SCI_BAUD_256000 = 256000,
} UC_UART_eSciBaudRate_t;

typedef enum UC_UART_eSciReceiveInterruptTemplate
{
  UC_UART_RX_INTERRUPT_DISABLE = 0,
  UC_UART_RX_INTERRUPT_ENABLE = 1,
} UC_UART_eSciReceiveInterrupt_t;

typedef enum UC_UART_eSciTransmitInterruptTemplate
{
  UC_UART_TX_INTERRUPT_DISABLE = 0,
  UC_UART_TX_INTERRUPT_ENABLE = 1,
} UC_UART_eSciTransmitInterrupt_t;

typedef enum UC_UART_eSciParityEnableTemplate
{
  UC_UART_PARITY_DISABLE = 0,
  UC_UART_PARITY_ENABLE = 1,
} UC_UART_eSciParityEnable_t;

typedef enum UC_UART_eSciParityPolarityTemplate
{
  UC_UART_PARITY_EVEN = 1,
  UC_UART_PARITY_ODD = 0,
} UC_UART_eSciParityPolarity_t;

typedef enum UC_UART_eSciDataLengthTemplate
{
  UC_UART_ONE_BIT_DATA = 0,
  UC_UART_TWO_BIT_DATA = 1,
  UC_UART_THREE_BIT_DATA = 2,
  UC_UART_FOUR_BIT_DATA = 3,
  UC_UART_FIVE_BIT_DATA = 4,
  UC_UART_SIX_BIT_DATA = 5,
  UC_UART_SEVEN_BIT_DATA = 6,
  UC_UART_EIGHT_BIT_DATA = 7,
} UC_UART_eSciDataLength_t;

typedef enum UC_UART_eSciStopBitTemplate
{
  UC_UART_ONE_STOP_BIT = 0,
  UC_UART_TWO_STOP_BIT = 1,
} UC_UART_eSciStopBit_t;

typedef enum UC_UART_eSciAddressBitTemplate
{
  UC_UART_ZERO_ADDRESS_BIT = 1,
  UC_UART_ONE_ADDRESS_BIT = 0,
} UC_UART_eSciAddressBit_t;

typedef enum UC_UART_eTransmitTypeTemplate
{
  UC_UART_SYNCHRONOUS_TRANSMIT = 1,
  UC_UART_ASYNCHRONOUS_TRANSMIT = 0,
} UC_UART_eTransmitType_t;

typedef enum UC_UART_RxBytesTemplate
{
  UC_UART_RxBytes1 = 1,
  UC_UART_RxBytes2 = 2,
  UC_UART_RxBytes3 = 3,
  UC_UART_RxBytes4 = 4,
  UC_UART_RxBytes5 = 5,
  UC_UART_RxBytes6 = 6,
  UC_UART_RxBytes7 = 7,
  UC_UART_RxBytes8 = 8,
} UC_UART_eRxBytes_t;

typedef struct UC_UART_strObj
{
  volatile uint32_t*                           pSCIGCR0;
  volatile __scigcr0_bits*                     pSCIGCR0_bit;
  volatile uint32_t*                           pSCIGCR1;
  volatile __scilingcr1_bits*                  pSCIGCR1_bit;
  volatile uint32_t*                           pSCISETINT;
  volatile __scilinsetint_bits*                pSCISETINT_bit;
  volatile uint32_t*                           pSCICLEARINT;
  volatile __scilinclearint_bits*              pSCICLEARINT_bit;
  volatile uint32_t*                           pSCISETINTLVL;
  volatile __scilinsetintlvl_bits*             pSCISETINTLVL_bit;
  volatile uint32_t*                           pSCICLEARINTLVL;
  volatile __scilinclearintlvl_bits*           pSCICLEARINTLVL_bit;
  volatile uint32_t*                           pSCIFLR;
  volatile __scilinflr_bits*                   pSCIFLR_bit;
  const volatile uint32_t*                     pSCIINTVECT0;
  const volatile __scilinintvect0_bits*        pSCIINTVECT0_bit;
  const volatile uint32_t*                     pSCIINTVECT1;
  const volatile __scilinintvect1_bits*        pSCIINTVECT1_bit;
  volatile uint32_t*                           pSCIFORMAT;
  volatile __scilinformat_bits*                pSCIFORMAT_bit;
  volatile uint32_t*                           pSCIBRS;
  volatile __scilinbrs_bits*                   pSCIBRS_bit;
  const volatile uint32_t*                     pSCIED;
  const volatile __scied_bits*                 pSCIED_bit;
  const volatile uint32_t*                     pSCIRD;
  const volatile __scird_bits*                 pSCIRD_bit;
  volatile uint32_t*                           pSCITD;
  volatile __scitd_bits*                       pSCITD_bit;
  volatile uint32_t*                           pSCIPIO0;
  volatile __scipio0_bits*                     pSCIPIO0_bit;
  volatile uint32_t*                           pSCIPIO1;
  volatile __scipio1_bits*                     pSCIPIO1_bit;
  const volatile uint32_t*                     pSCIPIO2;
  const volatile __scipio2_bits*               pSCIPIO2_bit;
  volatile uint32_t*                           pSCIPIO3;
  volatile __scipio3_bits*                     pSCIPIO3_bit;
  volatile uint32_t*                           pSCIPIO4;
  volatile __scipio4_bits*                     pSCIPIO4_bit;
  volatile uint32_t*                           pSCIPIO5;
  volatile __scipio5_bits*                     pSCIPIO5_bit;
  volatile uint32_t*                           pSCIPIO6;
  volatile __scipio6_bits*                     pSCIPIO6_bit;
  volatile uint32_t*                           pSCIPIO7;
  volatile __scipio7_bits*                     pSCIPIO7_bit;
  volatile uint32_t*                           pSCIPIO8;
  volatile __scipio8_bits*                     pSCIPIO8_bit;
  volatile uint32_t*                           pIODFTCTRL;
  volatile __scilin_iodftctrl_bits*            pIODFTCTRL_bit;
} UC_UART_strObj_t;


typedef struct UC_UART_strModuleHandler
{
  /*UART Id*/
  uint8_t u8IdUart;
  /*UART Enable*/
  UC_UART_eSciModuleEnable_t eSciEnable; 
  /*UART Structure*/
  UC_UART_strObj_t* pstrObj;
  /*UART Baudrate*/
  UC_UART_eSciBaudRate_t eBaudRate;
  /*UART Received Flag*/
  uint8_t u8ReceivedFlag;
  /*UART ReadData*/
  uint8_t au8BytesToRead[UC_UART_FRAME_BYTES_MAX];
  /*Byte to Send*/
  uint8_t au8BytesToSend[UC_UART_FRAME_BYTES_MAX];
  /*Byte To Send Ready Flag*/
  uint8_t u8ByteReadyToSend;
  /*UART Rx Interrupt Enable */
  UC_UART_eSciReceiveInterrupt_t eSciReceiveInterrupt;
  /*UART Rx Callback*/
  UC_UART_p2fDataReceivedClbk_t p2fDataReceivedClbk;
  /*UART Tx Interrupt Enable */
  UC_UART_eSciTransmitInterrupt_t eSciTtansmitInterrupt;
  /*UART Tx Callback*/
  UC_UART_p2fDataSentClbk_t p2fDataSentClbk;
  /*UART Data Bits*/
  UC_UART_eSciDataLength_t eDataLength;
  /*UART Data Bytes Number*/
  uint8_t u8BytesRxNumber;
  /*UART Parity Bit Enable*/
  UC_UART_eSciParityEnable_t eParityEnable;
  /*UART Parity Polarity*/
  UC_UART_eSciParityPolarity_t eParityPolarity;
  /*UART Address Bit*/
  UC_UART_eSciAddressBit_t eAddressBit;
  /*UART Stop Bit*/  
  UC_UART_eSciStopBit_t eStopBit;
  /*UART Transmit Type*/
  UC_UART_eTransmitType_t eTransmitType;
  /*UART pointer to IOMM Tx register*/
  volatile uint32_t* pvu32IoMuxTxReg;
  /*UART IOMM Tx bit*/
  uint8_t u8IoMuxTxBit;
  /*UART IOMM Tx bit default*/
  uint8_t u8IoMuxTxBitDef;
  /*UART pointer to IOMM Rx register*/
  volatile uint32_t* pvu32IoMuxRxReg;
  /*UART IOMM Rx bit*/
  uint8_t u8IoMuxRxBit;
  /*UART IOMM Rx bit default*/
  uint8_t u8IoMuxRxBitDef;
} UC_UART_Handler_t;

extern UC_UART_strObj_t UC_UART_astrObj[UC_UART_OBJECTS_AVAILABLE];


void UC_UART_vdMgr(void);
void UC_UART_vdInit(void);
STATUS_t UC_UART_eRegisterDataRxClbk(uint8_t u8IndexHandler, UC_UART_p2fDataReceivedClbk_t p2f, uint8_t u8DataBytesNumber);
//STATUS_t UC_UART_eRegisterDataTxClbk(uint8_t u8IndexHandler, UC_UART_p2fDataSentClbk_t p2f, uint8_t u8DataBytesNumber);
STATUS_t UC_UART_eRegisterDataTxClbk(uint8_t u8IndexHandler, UC_UART_p2fDataSentClbk_t p2f);
STATUS_t UC_UART_eSendBytesSync(uint8_t u8IndexHandler , uint8_t* pu8BytesToSend, uint8_t u8BytesToSendNum);
STATUS_t UC_UART_eSendByteAsync(uint8_t u8IndexHandler, uint8_t u8ByteToSend);
STATUS_t UC_UART_eReadUartFrameSync(uint8_t u8IndexHandler, uint8_t au8Data[]);

STATUS_t UC_UART_eDisableRx(uint8_t u8IndexHandler);
STATUS_t UC_UART_eEnableRx(uint8_t u8IndexHandler);
#endif /*UC_UART_H*/



