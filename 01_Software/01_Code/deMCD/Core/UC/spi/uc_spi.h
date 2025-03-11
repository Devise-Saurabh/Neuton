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

File Name: uc_spi.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_SPI_H
#define UC_SPI_H

#include "lib_types.h"
#include "uc_header.h"

#define UC_SPI_MIB_OBJECTS_AVAILABLE                    (2)
#define UC_SPI_MIB_FORMATS_AVAILABLE                    (4)

extern int16_t g_s16SPI_RxData;
extern uint32_t g_u32SPI_RxDataEEPROM;

/*Pointer to function that points to SPI interrupts callbacks*/
typedef void (*UC_SPI_p2fTransceiverClbk_t)(void);
typedef void (*UC_SPI_p2fDataReceivedClbk_t)(uint32_t);

typedef struct UC_SPI_strMibObjTemplate
{
  volatile uint32_t*                           pMIBSPIGCR0;
  volatile __spigcr0_bits*                     pMIBSPIGCR0_bit;
  volatile uint32_t*                           pMIBSPIGCR1;
  volatile __spigcr1_bits*                     pMIBSPIGCR1_bit;
  volatile uint32_t*                           pMIBSPIINT0;
  volatile __spiint0_bits*                     pMIBSPIINT0_bit;
  volatile uint32_t*                           pMIBSPILVL;
  volatile __spilvl_bits*                      pMIBSPILVL_bit;
  volatile uint32_t*                           pMIBSPIFLG;
  volatile __mibspiflg_bits*                   pMIBSPIFLG_bit;
  volatile uint32_t*                           pMIBSPIPC0;
  volatile __spipc0_bits*                      pMIBSPIPC0_bit;
  volatile uint32_t*                           pMIBSPIPC1;
  volatile __spipc1_bits*                      pMIBSPIPC1_bit;
  const volatile uint32_t*                     pMIBSPIPC2;
  const volatile __spipc2_bits*                pMIBSPIPC2_bit;
  volatile uint32_t*                           pMIBSPIPC3;
  volatile __spipc3_bits*                      pMIBSPIPC3_bit;
  volatile uint32_t*                           pMIBSPIPC4;
  volatile __spipc4_bits*                      pMIBSPIPC4_bit;
  volatile uint32_t*                           pMIBSPIPC5;
  volatile __spipc5_bits*                      pMIBSPIPC5_bit;
  volatile uint32_t*                           pMIBSPIPC6;
  volatile __spipc6_bits*                      pMIBSPIPC6_bit;
  volatile uint32_t*                           pMIBSPIPC7;
  volatile __spipc7_bits*                      pMIBSPIPC7_bit;
  volatile uint32_t*                           pMIBSPIPC8;
  volatile __spipc8_bits*                      pMIBSPIPC8_bit;
  volatile uint32_t*                           pMIBSPIDAT0;
  volatile __spidat0_bits*                     pMIBSPIDAT0_bit;
  volatile uint32_t*                           pMIBSPIDAT1;
  volatile __spidat1_bits*                     pMIBSPIDAT1_bit;
  const volatile uint32_t*                     pMIBSPIBUF;
  const volatile __spibuf_bits*                pMIBSPIBUF_bit;
  const volatile uint32_t*                     pMIBSPIEMU;
  const volatile __spiemu_bits*                pMIBSPIEMU_bit;
  volatile uint32_t*                           pMIBSPIDELAY;
  volatile __spidelay_bits*                    pMIBSPIDELAY_bit;
  volatile uint32_t*                           pMIBSPIDEF;
  volatile __spidef_bits*                      pMIBSPIDEF_bit;
  volatile uint32_t*                           pMIBSPIFMT0;
  volatile __spifmt_bits*                      pMIBSPIFMT0_bit;
  volatile uint32_t*                           pMIBSPIFMT1;
  volatile __spifmt_bits*                      pMIBSPIFMT1_bit;
  volatile uint32_t*                           pMIBSPIFMT2;
  volatile __spifmt_bits*                      pMIBSPIFMT2_bit;
  volatile uint32_t*                           pMIBSPIFMT3;
  volatile __spifmt_bits*                      pMIBSPIFMT3_bit;
  const volatile uint32_t*                     pMIBSPIINTVECT0;
  const volatile __spiintvect0_bits*           pMIBSPIINTVECT0_bit;
  const volatile uint32_t*                     pMIBSPIINTVECT1;
  const volatile __spiintvect1_bits*           pMIBSPIINTVECT1_bit;
  volatile uint32_t*                           pMIBSPIMIBSPIE;
  volatile __spimibspie_bits*                  pMIBSPIMIBSPIE_bit;
  volatile uint32_t*                           pMIBSPITGITENST;
  volatile __spitgitenst_bits*                 pMIBSPITGITENST_bit;
  volatile uint32_t*                           pMIBSPITGITENCR;
  volatile __spitgitencr_bits*                 pMIBSPITGITENCR_bit;
  volatile uint32_t*                           pMIBSPITGITLVST;
  volatile __spitgitlvst_bits*                 pMIBSPITGITLVST_bit;
  volatile uint32_t*                           pMIBSPITGITLVCR;
  volatile __spitgitlvcr_bits*                 pMIBSPITGITLVCR_bit;
  volatile uint32_t*                           pMIBSPITGINTFLG;
  volatile __spitgintflg_bits*                 pMIBSPITGINTFLG_bit;
  volatile uint32_t*                           pMIBSPITICKCNT;
  volatile __spitickcnt_bits*                  pMIBSPITICKCNT_bit;
  volatile uint32_t*                           pMIBSPILTGPEND;
  volatile __spiltgpend_bits*                  pMIBSPILTGPEND_bit;
  volatile uint32_t*                           pMIBSPITG0CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG0CTRL_bit;
  volatile uint32_t*                           pMIBSPITG1CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG1CTRL_bit;
  volatile uint32_t*                           pMIBSPITG2CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG2CTRL_bit;
  volatile uint32_t*                           pMIBSPITG3CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG3CTRL_bit;
  volatile uint32_t*                           pMIBSPITG4CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG4CTRL_bit;
  volatile uint32_t*                           pMIBSPITG5CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG5CTRL_bit;
  volatile uint32_t*                           pMIBSPITG6CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG6CTRL_bit;
  volatile uint32_t*                           pMIBSPITG7CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG7CTRL_bit;
  volatile uint32_t*                           pMIBSPITG8CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG8CTRL_bit;
  volatile uint32_t*                           pMIBSPITG9CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG9CTRL_bit;
  volatile uint32_t*                           pMIBSPITG10CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG10CTRL_bit;
  volatile uint32_t*                           pMIBSPITG11CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG11CTRL_bit;
  volatile uint32_t*                           pMIBSPITG12CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG12CTRL_bit;
  volatile uint32_t*                           pMIBSPITG13CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG13CTRL_bit;
  volatile uint32_t*                           pMIBSPITG14CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG14CTRL_bit;
  volatile uint32_t*                           pMIBSPITG15CTRL;
  volatile __spitgctrl_bits*                   pMIBSPITG15CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA0CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA0CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA1CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA1CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA2CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA2CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA3CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA3CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA4CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA4CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA5CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA5CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA6CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA6CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA7CTRL;
  volatile __spidmactrl_bits*                  pMIBSPIDMA7CTRL_bit;
  volatile uint32_t*                           pMIBSPIDMA0COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA0COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA1COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA1COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA2COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA2COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA3COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA3COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA4COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA4COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA5COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA5COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA6COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA6COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMA7COUNT;
  volatile __spidmacount_bits*                 pMIBSPIDMA7COUNT_bit;
  volatile uint32_t*                           pMIBSPIDMACNTLEN;
  volatile __spidmacntlen_bits*                pMIBSPIDMACNTLEN_bit;
  volatile uint32_t*                           pMIBSPIUERRCTRL;
  volatile __spiuerrctrl_bits*                 pMIBSPIUERRCTRL_bit;
  volatile uint32_t*                           pMIBSPIUERRSTAT;
  volatile __spiuerrstat_bits*                 pMIBSPIUERRSTAT_bit;
  volatile uint32_t*                           pMIBSPIUERRADDR1;
  volatile __spiuerraddr1_bits*                pMIBSPIUERRADDR1_bit;
  volatile uint32_t*                           pMIBSPIUERRADDR0;
  volatile __spiuerraddr0_bits*                pMIBSPIUERRADDR0_bit;
  const volatile uint32_t*                     pMIBSPIRXOVRN_BUF_ADDR;
  const volatile __spirxovrn_buf_addr_bits*    pMIBSPIRXOVRN_BUF_ADDR_bit;
  volatile uint32_t*                           pMIBSPIIOLPBKTSTCR;
  volatile __spiiolpbktstcr_bits*              pMIBSPIIOLPBKTSTCR_bit;
  volatile uint32_t*                           pMIBSPIEXTENDED_PRESCALE1;
  volatile __spiextendedprescale1_bits*        pMIBSPIEXTENDED_PRESCALE1_bit;
  volatile uint32_t*                           pMIBSPIEXTENDED_PRESCALE2;
  volatile __spiextendedprescale2_bits*        pMIBSPIEXTENDED_PRESCALE2_bit;
  volatile uint32_t*                           pMIBSPI_TXBUF_BASE;
  volatile uint32_t*                           pMIBSPI_RXBUF_BASE;
} UC_SPI_strMibObj_t;

typedef enum UC_SPI_eMibModuleIdTemplate
{
   UC_SPI_MIB_MODULE_1 = 0,
	 UC_SPI_MIB_MODULE_3 = 1,
} UC_SPI_eMibModuleId_t;

typedef enum UC_SPI_eClkPolarityTemplate
{
   UC_SPI_CLK_LOW_INACTIVE = 0,
	 UC_SPI_CLK_HIGH_INACTIVE = 1,
} UC_SPI_eClkPolarity_t;

typedef enum UC_SPI_eClkPhaseTemplate
{
   UC_SPI_NO_CLK_DELAY_TO_DATA = 0,
	 UC_SPI_HALF_CLK_DELAY_TO_DATA = 1,
} UC_SPI_eClkPhase_t;

typedef enum UC_SPI_eDataDirTemplate
{
   UC_SPI_DATA_MSB_FIRST = 0,
	 UC_SPI_DATA_LSB_FIRST = 1,
} UC_SPI_eDataDir_t;

typedef enum UC_SPI_eParityEnableTemplate
{
   UC_SPI_PARITY_DISABLE = 0,
	 UC_SPI_PARITY_ENABLE = 1,
} UC_SPI_eParityEnable_t;

typedef enum UC_SPI_eParityPolarityTemplate
{
   UC_SPI_PARITY_EVEN = 0,
	 UC_SPI_PARITY_ODD = 1,
} UC_SPI_eParityPolarity_t;

typedef enum UC_SPI_eFormatIdTemplate
{
   UC_SPI_FORMAT_0 = 0,
	 UC_SPI_FORMAT_1 = 1,
   UC_SPI_FORMAT_2 = 1,
	 UC_SPI_FORMAT_3 = 3,
} UC_SPI_eFormatId_t;

typedef enum UC_SPI_eDataLengthTemplate
{
   UC_SPI_DATA_02_BITS = 2,
   UC_SPI_DATA_03_BITS = 3,
   UC_SPI_DATA_04_BITS = 4,
   UC_SPI_DATA_05_BITS = 5,
   UC_SPI_DATA_06_BITS = 6,
   UC_SPI_DATA_07_BITS = 7,
   UC_SPI_DATA_08_BITS = 8,
   UC_SPI_DATA_09_BITS = 9,
   UC_SPI_DATA_10_BITS = 10,
   UC_SPI_DATA_11_BITS = 11,
   UC_SPI_DATA_12_BITS = 12,
   UC_SPI_DATA_13_BITS = 13,
   UC_SPI_DATA_14_BITS = 14,
   UC_SPI_DATA_15_BITS = 15,
   UC_SPI_DATA_16_BITS = 16,
   UC_SPI_DATA_32_BITS = 32,
   UC_SPI_DATA_64_BITS = 64,
   UC_SPI_DATA_128_BITS = 128,
   UC_SPI_DATA_256_BITS = 256,
   UC_SPI_DATA_512_BITS = 512,
   UC_SPI_DATA_536_BITS = 536,
} UC_SPI_eDataLength_t;

typedef enum UC_SPI_eDataLengthMaskTemplate
{
   UC_SPI_DATA_02_BITS_M = 0x03,
   UC_SPI_DATA_03_BITS_M = 0x07,
   UC_SPI_DATA_04_BITS_M = 0x0F,
   UC_SPI_DATA_05_BITS_M = 0x1F,
   UC_SPI_DATA_06_BITS_M = 0x3F,
   UC_SPI_DATA_07_BITS_M = 0x7F,
   UC_SPI_DATA_08_BITS_M = 0xFF,
   UC_SPI_DATA_09_BITS_M = 0x1FF,
   UC_SPI_DATA_10_BITS_M = 0x3FF,
   UC_SPI_DATA_11_BITS_M = 0x7FF,
   UC_SPI_DATA_12_BITS_M = 0xFFF,
   UC_SPI_DATA_13_BITS_M = 0x1FFF,
   UC_SPI_DATA_14_BITS_M = 0x3FFF,
   UC_SPI_DATA_15_BITS_M = 0x7FFF,
   UC_SPI_DATA_16_BITS_M = 0xFFFF,
   UC_SPI_DATA_32_BITS_M = 0xFFFFFFFF,
} UC_SPI_eDataLengthMask_t;

typedef struct UC_SPI_strMibFormatTemplate
{
  /*Format Id*/
  UC_SPI_eFormatId_t eFormatId;
  /*Clk frequency in khz*/
  uint16_t u16FreqKhz;
  /*Date length*/
  UC_SPI_eDataLength_t eDataLength;
  /*Data Length Mask*/
  UC_SPI_eDataLengthMask_t eDataLengthMask;
  /*Polarity*/
  UC_SPI_eClkPolarity_t eClkPolarity;
  /*Phase*/
   UC_SPI_eClkPhase_t eClkPhase;
   /*Parity Disable/Enable*/
   UC_SPI_eParityEnable_t eParityEnable;
   /*Parity Polarity*/
   UC_SPI_eParityPolarity_t eParityPolarity;
   /*Data Direction*/
   UC_SPI_eDataDir_t eDataDir;
} UC_SPI_strMibFormat_t;

typedef enum UC_SPI_eChipSelectIdTemplate
{
   UC_SPI_CS_0 = 0xFE,
	 UC_SPI_CS_1 = 0xFD,
   UC_SPI_CS_2 = 0xFB,
	 UC_SPI_CS_3 = 0xF7,
	 UC_SPI_CS_4 = 0xEF,
	 UC_SPI_CS_5 = 0xDF,
	 UC_SPI_CS_6 = 0xBF,
	 UC_SPI_CS_7 = 0x7F,
} UC_SPI_eChipSelectId_t;

typedef enum UC_SPI_eDeviceStatusTemplate
{
   UC_SPI_DEV_STATUS_IDLE = 0,
   UC_SPI_DEV_STATUS_SEND_REQUESTED = 1,
   UC_SPI_DEV_STATUS_RECEIVING = 2,
   UC_SPI_DEV_STATUS_TRANSFER_DONE = 3,
} UC_SPI_eDeviceStatus_t;

typedef struct UC_SPI_strMibDeviceTemplate
{
  /*Device Id */
  uint8_t u8IdDevice;
  /*Chip select Id*/
  UC_SPI_eChipSelectId_t eChipSelectId;
  /*Format Id*/
  UC_SPI_eFormatId_t eFormatId;
  /* Requests */
  UC_SPI_eDeviceStatus_t eDeviceStatus;
  /*Tx Data*/
  uint32_t u32TxData;
  /*Tx Byte Array Max*/
  uint8_t u8TxByteArrayMax;
  /*Tx Byte Array*/
  uint8_t* au8TxByteArray;
  /*Rx Data*/
  uint32_t u32RxData;
  /*Rx Byte Array Max*/
  uint8_t u8RxByteArrayMax;
  /*Rx Byte Array*/
  uint8_t* au8RxByteArray;
  /*Data length*/
  UC_SPI_eDataLength_t eDataLength;
  /*Data Receive Callback*/
  UC_SPI_p2fDataReceivedClbk_t p2fReadClbk;
} UC_SPI_strMibDevice_t;

typedef enum UC_SPI_eBusStatusTemplate
{
   UC_SPI_BUS_STATUS_IDLE = 0,
   UC_SPI_BUS_STATUS_BUSY = 1,
   UC_SPI_BUS_STATUS_ERROR = 255,
} UC_SPI_eBusStatus_t;

typedef struct UC_SPI_strMibModuleTemplate
{
  /*Bus Id*/
  uint8_t u8IndexBus;
  /*Module Id*/
  UC_SPI_eMibModuleId_t eMibModuleId;
  /*Pointer to the module object*/
  UC_SPI_strMibObj_t* pstrMibObj;
  /*Format Configurations*/
  UC_SPI_strMibFormat_t astrMibFormat[UC_SPI_MIB_FORMATS_AVAILABLE];
  /*Number of Devices */
  uint8_t u8NumDevices;
  /*Pointer to array of devices objects*/
  UC_SPI_strMibDevice_t* astrMibDevice;
  /*Id of the active device*/
  uint8_t u8IdDeviceActive;
  /*General Rx Interrupt Enable */
  uint8_t u8EnGlobalRxInt;
  /*General Rx Callback */
  UC_SPI_p2fTransceiverClbk_t p2fRxClbk;
  /*General Tx Interrupt Enable */
  uint8_t u8EnGlobalTxInt;
  /*General Tx Callback */
  UC_SPI_p2fTransceiverClbk_t p2fTxClbk;
  /*Busy Counter*/
  uint32_t u32BusyCounter;
  /*Bus Status*/
  UC_SPI_eBusStatus_t eBusStatus;
} UC_SPI_strMibModule_t;

extern UC_SPI_strMibObj_t UC_SPI_astrMibObj[UC_SPI_MIB_OBJECTS_AVAILABLE];

void UC_SPI_vdInit(void);
void UC_SPI_vdMgr(void);
STATUS_t UC_SPI_eRegisterDeviceDataRxClbk(uint8_t u8IndexBus, uint8_t u8IdDevice, UC_SPI_p2fDataReceivedClbk_t p2f);
STATUS_t UC_SPI_eRegisterBusRxClbk(uint8_t u8IndexBus, UC_SPI_p2fTransceiverClbk_t p2f);
STATUS_t UC_SPI_eRegisterBusTxClbk(uint8_t u8IndexBus, UC_SPI_p2fTransceiverClbk_t p2f);
STATUS_t UC_SPI_eSendSpiFrame(uint8_t u8IndexBus, uint8_t u8IdDevice, uint8_t* au8TxByteArray, uint8_t u8TxByteArrayMax);
STATUS_t UC_SPI_eSendSpiFrameSync(uint8_t u8IndexBus, uint8_t u8IdDevice, uint8_t* au8TxByteArray, uint8_t u8TxByteArrayMax, uint8_t* au8RxByteArray, uint8_t u8RxByteArrayMax);
STATUS_t UC_SPI_eResetBusError(uint8_t u8IndexBus);
STATUS_t UC_SPI_eReceiveDataSync(uint8_t u8IndexBus, uint32_t* pu32DataRx);
#endif /*UC_SPI_H*/
