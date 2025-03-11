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


File Name: uc_spi.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_spi_cfg.h"
#include "uc_spi.h"

#ifdef UC_SPI_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"
#include <math.h>
#include "uc_dio_cfg.h"
#include "uc_dio.h"
#include "lib_delay.h"
/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/


/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/
volatile uint32_t g_u32SPI_Test = 0;
volatile uint32_t g_u32SPI_TestData = 0x0000C000;
int16_t g_s16SPI_RxData = 0x0000;
uint32_t g_u32SPI_RxDataEEPROM = 0x00000000;
volatile uint32_t TEST_u32CSsMask;


uint8_t g_u8SpiBusBusy = 0;
uint8_t g_u8SpiDevSchd = 0;
uint8_t g_u8SpiDevSchdNext = 0;


UC_SPI_strMibObj_t UC_SPI_astrMibObj[UC_SPI_MIB_OBJECTS_AVAILABLE] = 
{
  {
    &MIBSPI1GCR0,
    &MIBSPI1GCR0_bit,
    &MIBSPI1GCR1,
    &MIBSPI1GCR1_bit,
    &MIBSPI1INT0,
    &MIBSPI1INT0_bit,
    &MIBSPI1LVL,
    &MIBSPI1LVL_bit,
    &MIBSPI1FLG,
    &MIBSPI1FLG_bit,
    &MIBSPI1PC0,
    &MIBSPI1PC0_bit,
    &MIBSPI1PC1,
    &MIBSPI1PC1_bit,
    &MIBSPI1PC2,
    &MIBSPI1PC2_bit,
    &MIBSPI1PC3,
    &MIBSPI1PC3_bit,
    &MIBSPI1PC4,
    &MIBSPI1PC4_bit,
    &MIBSPI1PC5,
    &MIBSPI1PC5_bit,
    &MIBSPI1PC6,
    &MIBSPI1PC6_bit,
    &MIBSPI1PC7,
    &MIBSPI1PC7_bit,
    &MIBSPI1PC8,
    &MIBSPI1PC8_bit,
    &MIBSPI1DAT0,
    &MIBSPI1DAT0_bit,
    &MIBSPI1DAT1,
    &MIBSPI1DAT1_bit,
    &MIBSPI1BUF,
    &MIBSPI1BUF_bit,
    &MIBSPI1EMU,
    &MIBSPI1EMU_bit,
    &MIBSPI1DELAY,
    &MIBSPI1DELAY_bit,
    &MIBSPI1DEF,
    &MIBSPI1DEF_bit,
    &MIBSPI1FMT0,
    &MIBSPI1FMT0_bit,
    &MIBSPI1FMT1,
    &MIBSPI1FMT1_bit,
    &MIBSPI1FMT2,
    &MIBSPI1FMT2_bit,
    &MIBSPI1FMT3,
    &MIBSPI1FMT3_bit,
    &MIBSPI1INTVECT0,
    &MIBSPI1INTVECT0_bit,
    &MIBSPI1INTVECT1,
    &MIBSPI1INTVECT1_bit,
    &MIBSPI1MIBSPIE,
    &MIBSPI1MIBSPIE_bit,
    &MIBSPI1TGITENST,
    &MIBSPI1TGITENST_bit,
    &MIBSPI1TGITENCR,
    &MIBSPI1TGITENCR_bit,
    &MIBSPI1TGITLVST,
    &MIBSPI1TGITLVST_bit,
    &MIBSPI1TGITLVCR,
    &MIBSPI1TGITLVCR_bit,
    &MIBSPI1TGINTFLG,
    &MIBSPI1TGINTFLG_bit,
    &MIBSPI1TICKCNT,
    &MIBSPI1TICKCNT_bit,
    &MIBSPI1LTGPEND,
    &MIBSPI1LTGPEND_bit,
    &MIBSPI1TG0CTRL,
    &MIBSPI1TG0CTRL_bit,
    &MIBSPI1TG1CTRL,
    &MIBSPI1TG1CTRL_bit,
    &MIBSPI1TG2CTRL,
    &MIBSPI1TG2CTRL_bit,
    &MIBSPI1TG3CTRL,
    &MIBSPI1TG3CTRL_bit,
    &MIBSPI1TG4CTRL,
    &MIBSPI1TG4CTRL_bit,
    &MIBSPI1TG5CTRL,
    &MIBSPI1TG5CTRL_bit,
    &MIBSPI1TG6CTRL,
    &MIBSPI1TG6CTRL_bit,
    &MIBSPI1TG7CTRL,
    &MIBSPI1TG7CTRL_bit,
    &MIBSPI1TG8CTRL,
    &MIBSPI1TG8CTRL_bit,
    &MIBSPI1TG9CTRL,
    &MIBSPI1TG9CTRL_bit,
    &MIBSPI1TG10CTRL,
    &MIBSPI1TG10CTRL_bit,
    &MIBSPI1TG11CTRL,
    &MIBSPI1TG11CTRL_bit,
    &MIBSPI1TG12CTRL,
    &MIBSPI1TG12CTRL_bit,
    &MIBSPI1TG13CTRL,
    &MIBSPI1TG13CTRL_bit,
    &MIBSPI1TG14CTRL,
    &MIBSPI1TG14CTRL_bit,
    &MIBSPI1TG15CTRL,
    &MIBSPI1TG15CTRL_bit,
    &MIBSPI1DMA0CTRL,
    &MIBSPI1DMA0CTRL_bit,
    &MIBSPI1DMA1CTRL,
    &MIBSPI1DMA1CTRL_bit,
    &MIBSPI1DMA2CTRL,
    &MIBSPI1DMA2CTRL_bit,
    &MIBSPI1DMA3CTRL,
    &MIBSPI1DMA3CTRL_bit,
    &MIBSPI1DMA4CTRL,
    &MIBSPI1DMA4CTRL_bit,
    &MIBSPI1DMA5CTRL,
    &MIBSPI1DMA5CTRL_bit,
    &MIBSPI1DMA6CTRL,
    &MIBSPI1DMA6CTRL_bit,
    &MIBSPI1DMA7CTRL,
    &MIBSPI1DMA7CTRL_bit,
    &MIBSPI1DMA0COUNT,
    &MIBSPI1DMA0COUNT_bit,
    &MIBSPI1DMA1COUNT,
    &MIBSPI1DMA1COUNT_bit,
    &MIBSPI1DMA2COUNT,
    &MIBSPI1DMA2COUNT_bit,
    &MIBSPI1DMA3COUNT,
    &MIBSPI1DMA3COUNT_bit,
    &MIBSPI1DMA4COUNT,
    &MIBSPI1DMA4COUNT_bit,
    &MIBSPI1DMA5COUNT,
    &MIBSPI1DMA5COUNT_bit,
    &MIBSPI1DMA6COUNT,
    &MIBSPI1DMA6COUNT_bit,
    &MIBSPI1DMA7COUNT,
    &MIBSPI1DMA7COUNT_bit,
    &MIBSPI1DMACNTLEN,
    &MIBSPI1DMACNTLEN_bit,
    &MIBSPI1UERRCTRL,
    &MIBSPI1UERRCTRL_bit,
    &MIBSPI1UERRSTAT,
    &MIBSPI1UERRSTAT_bit,
    &MIBSPI1UERRADDR1,
    &MIBSPI1UERRADDR1_bit,
    &MIBSPI1UERRADDR0,
    &MIBSPI1UERRADDR0_bit,
    &MIBSPI1RXOVRN_BUF_ADDR,
    &MIBSPI1RXOVRN_BUF_ADDR_bit,
    &MIBSPI1IOLPBKTSTCR,
    &MIBSPI1IOLPBKTSTCR_bit,
    &MIBSPI1EXTENDED_PRESCALE1,
    &MIBSPI1EXTENDED_PRESCALE1_bit,
    &MIBSPI1EXTENDED_PRESCALE2,
    &MIBSPI1EXTENDED_PRESCALE2_bit,
    &MIBSPI1_TXBUF_BASE,
    &MIBSPI1_RXBUF_BASE
  },
  {
    &MIBSPI3GCR0,
    &MIBSPI3GCR0_bit,
    &MIBSPI3GCR1,
    &MIBSPI3GCR1_bit,
    &MIBSPI3INT0,
    &MIBSPI3INT0_bit,
    &MIBSPI3LVL,
    &MIBSPI3LVL_bit,
    &MIBSPI3FLG,
    &MIBSPI3FLG_bit,
    &MIBSPI3PC0,
    &MIBSPI3PC0_bit,
    &MIBSPI3PC1,
    &MIBSPI3PC1_bit,
    &MIBSPI3PC2,
    &MIBSPI3PC2_bit,
    &MIBSPI3PC3,
    &MIBSPI3PC3_bit,
    &MIBSPI3PC4,
    &MIBSPI3PC4_bit,
    &MIBSPI3PC5,
    &MIBSPI3PC5_bit,
    &MIBSPI3PC6,
    &MIBSPI3PC6_bit,
    &MIBSPI3PC7,
    &MIBSPI3PC7_bit,
    &MIBSPI3PC8,
    &MIBSPI3PC8_bit,
    &MIBSPI3DAT0,
    &MIBSPI3DAT0_bit,
    &MIBSPI3DAT1,
    &MIBSPI3DAT1_bit,
    &MIBSPI3BUF,
    &MIBSPI3BUF_bit,
    &MIBSPI3EMU,
    &MIBSPI3EMU_bit,
    &MIBSPI3DELAY,
    &MIBSPI3DELAY_bit,
    &MIBSPI3DEF,
    &MIBSPI3DEF_bit,
    &MIBSPI3FMT0,
    &MIBSPI3FMT0_bit,
    &MIBSPI3FMT1,
    &MIBSPI3FMT1_bit,
    &MIBSPI3FMT2,
    &MIBSPI3FMT2_bit,
    &MIBSPI3FMT3,
    &MIBSPI3FMT3_bit,
    &MIBSPI3INTVECT0,
    &MIBSPI3INTVECT0_bit,
    &MIBSPI3INTVECT1,
    &MIBSPI3INTVECT1_bit,
    &MIBSPI3MIBSPIE,
    &MIBSPI3MIBSPIE_bit,
    &MIBSPI3TGITENST,
    &MIBSPI3TGITENST_bit,
    &MIBSPI3TGITENCR,
    &MIBSPI3TGITENCR_bit,
    &MIBSPI3TGITLVST,
    &MIBSPI3TGITLVST_bit,
    &MIBSPI3TGITLVCR,
    &MIBSPI3TGITLVCR_bit,
    &MIBSPI3TGINTFLG,
    &MIBSPI3TGINTFLG_bit,
    &MIBSPI3TICKCNT,
    &MIBSPI3TICKCNT_bit,
    &MIBSPI3LTGPEND,
    &MIBSPI3LTGPEND_bit,
    &MIBSPI3TG0CTRL,
    &MIBSPI3TG0CTRL_bit,
    &MIBSPI3TG1CTRL,
    &MIBSPI3TG1CTRL_bit,
    &MIBSPI3TG2CTRL,
    &MIBSPI3TG2CTRL_bit,
    &MIBSPI3TG3CTRL,
    &MIBSPI3TG3CTRL_bit,
    &MIBSPI3TG4CTRL,
    &MIBSPI3TG4CTRL_bit,
    &MIBSPI3TG5CTRL,
    &MIBSPI3TG5CTRL_bit,
    &MIBSPI3TG6CTRL,
    &MIBSPI3TG6CTRL_bit,
    &MIBSPI3TG7CTRL,
    &MIBSPI3TG7CTRL_bit,
    &MIBSPI3TG8CTRL,
    &MIBSPI3TG8CTRL_bit,
    &MIBSPI3TG9CTRL,
    &MIBSPI3TG9CTRL_bit,
    &MIBSPI3TG10CTRL,
    &MIBSPI3TG10CTRL_bit,
    &MIBSPI3TG11CTRL,
    &MIBSPI3TG11CTRL_bit,
    &MIBSPI3TG12CTRL,
    &MIBSPI3TG12CTRL_bit,
    &MIBSPI3TG13CTRL,
    &MIBSPI3TG13CTRL_bit,
    &MIBSPI3TG14CTRL,
    &MIBSPI3TG14CTRL_bit,
    &MIBSPI3TG15CTRL,
    &MIBSPI3TG15CTRL_bit,
    &MIBSPI3DMA0CTRL,
    &MIBSPI3DMA0CTRL_bit,
    &MIBSPI3DMA1CTRL,
    &MIBSPI3DMA1CTRL_bit,
    &MIBSPI3DMA2CTRL,
    &MIBSPI3DMA2CTRL_bit,
    &MIBSPI3DMA3CTRL,
    &MIBSPI3DMA3CTRL_bit,
    &MIBSPI3DMA4CTRL,
    &MIBSPI3DMA4CTRL_bit,
    &MIBSPI3DMA5CTRL,
    &MIBSPI3DMA5CTRL_bit,
    &MIBSPI3DMA6CTRL,
    &MIBSPI3DMA6CTRL_bit,
    &MIBSPI3DMA7CTRL,
    &MIBSPI3DMA7CTRL_bit,
    &MIBSPI3DMA0COUNT,
    &MIBSPI3DMA0COUNT_bit,
    &MIBSPI3DMA1COUNT,
    &MIBSPI3DMA1COUNT_bit,
    &MIBSPI3DMA2COUNT,
    &MIBSPI3DMA2COUNT_bit,
    &MIBSPI3DMA3COUNT,
    &MIBSPI3DMA3COUNT_bit,
    &MIBSPI3DMA4COUNT,
    &MIBSPI3DMA4COUNT_bit,
    &MIBSPI3DMA5COUNT,
    &MIBSPI3DMA5COUNT_bit,
    &MIBSPI3DMA6COUNT,
    &MIBSPI3DMA6COUNT_bit,
    &MIBSPI3DMA7COUNT,
    &MIBSPI3DMA7COUNT_bit,
    &MIBSPI3DMACNTLEN,
    &MIBSPI3DMACNTLEN_bit,
    &MIBSPI3UERRCTRL,
    &MIBSPI3UERRCTRL_bit,
    &MIBSPI3UERRSTAT,
    &MIBSPI3UERRSTAT_bit,
    &MIBSPI3UERRADDR1,
    &MIBSPI3UERRADDR1_bit,
    &MIBSPI3UERRADDR0,
    &MIBSPI3UERRADDR0_bit,
    &MIBSPI3RXOVRN_BUF_ADDR,
    &MIBSPI3RXOVRN_BUF_ADDR_bit,
    &MIBSPI3IOLPBKTSTCR,
    &MIBSPI3IOLPBKTSTCR_bit,
    &MIBSPI3EXTENDED_PRESCALE1,
    &MIBSPI3EXTENDED_PRESCALE1_bit,
    &MIBSPI3EXTENDED_PRESCALE2,
    &MIBSPI3EXTENDED_PRESCALE2_bit,
    &MIBSPI3_TXBUF_BASE,
    &MIBSPI3_RXBUF_BASE
  }
};

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/
extern UC_SPI_strMibModule_t UC_SPI_astrMibModule[UC_SPI_MODULE_NUM];


/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/
__irq __arm void VIM_MIBSPI1L0_Handler (void);
__irq __arm void VIM_MIBSPI1L1_Handler (void);
__irq __arm void VIM_MIBSPI3L0_Handler (void);
__irq __arm void VIM_MIBSPI3L1_Handler (void);


/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/
STATUS_t local_UC_SPI_eRxInterruptHandler(uint8_t u8IndexBus);
STATUS_t local_UC_SPI_eTxInterruptHandler(uint8_t u8IndexBus);
STATUS_t local_UC_SPI_eActiveDeviceSendSpiFrameSync(uint8_t u8IndexBus, uint8_t u8IdDevice);
STATUS_t local_UC_SPI_eReceiveDataSync(uint8_t u8IndexBus, uint32_t* pu32DataRx);
/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/


void UC_SPI_vdInit(void)
{
  uint8_t u8IndexBus;
  uint8_t u8IndexDevices;
  uint32_t u32CSsMask;

  for(u8IndexBus = (uint8_t)0; u8IndexBus < (uint8_t)UC_SPI_MODULE_NUM; u8IndexBus++)
  {
    /*Reset the SPI*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIGCR0_bit->nRESET = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIGCR0_bit->nRESET = 1;
    /*Disable the SPI module for configuration*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIGCR1_bit->SPIEN = 0;
    
    /*Disable Multibuffered Mode*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIMIBSPIE_bit->MSPIENA = 0;
    
    /*Pull high the SPIENA pin when not active*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->ENABLEHIGHZ = 0;
    
    /*Set the SPI to be master*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIGCR1_bit->MASTER = 1;
    /*Set the master clock to be internal from the microcontroller*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIGCR1_bit->CLKMOD = 1;
    
    /*Setup Delays to Default*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIDELAY_bit->C2TDELAY = (((UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ*1000)/UC_SPI_BUS_FREQUENCY_KHZ)-2)*UC_SPI_CS_LEAD_CLK_CYCLES; // C2T = ((VCLK/BaudRate) - 2) * NumberOfClkCycles
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIDELAY_bit->T2CDELAY = (((UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ*1000)/UC_SPI_BUS_FREQUENCY_KHZ)-1)*UC_SPI_CS_LAG_CLK_CYCLES; // T2C = ((VCLK/BaudRate) - 1) * NumberOfClkCycles
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIDELAY_bit->T2EDELAY = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIDELAY_bit->C2EDELAY = 0;
    
    /*Configure Data format 0*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->PARITYENA = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].eParityEnable; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->PARPOL = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].eClkPolarity; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->WAITENA = 0; /*SPI does not wait for enable signal*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->SHIFTDIR = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].eDataDir;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->POLARITY = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].eClkPolarity;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->PHASE = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].eClkPhase;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->PRESCALE = ((UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ*1000)/UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].u16FreqKhz)-1;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT0_bit->CHARLEN = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[0].eDataLength;

    /*Configure Data format 1*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->PARITYENA = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].eParityEnable; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->PARPOL = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].eClkPolarity; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->WAITENA = 0; /*SPI does not wait for enable signal*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->SHIFTDIR = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].eDataDir;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->POLARITY = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].eClkPolarity;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->PHASE = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].eClkPhase;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->PRESCALE = ((UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ*1000)/UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].u16FreqKhz)-1;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT1_bit->CHARLEN = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[1].eDataLength;
    
    /*Configure Data format 2*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->PARITYENA = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].eParityEnable; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->PARPOL = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].eClkPolarity; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->WAITENA = 0; /*SPI does not wait for enable signal*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->SHIFTDIR = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].eDataDir;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->POLARITY = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].eClkPolarity;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->PHASE = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].eClkPhase;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->PRESCALE = ((UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ*1000)/UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].u16FreqKhz)-1;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT2_bit->CHARLEN = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[2].eDataLength;
    
    /*Configure Data format 3*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->PARITYENA = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].eParityEnable; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->PARPOL = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].eClkPolarity; 
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->WAITENA = 0; /*SPI does not wait for enable signal*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->SHIFTDIR = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].eDataDir;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->POLARITY = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].eClkPolarity;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->PHASE = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].eClkPhase;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->PRESCALE = ((UC_SPI_SYSTEM_INPUT_FREQUENCY_MHZ*1000)/UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].u16FreqKhz)-1;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFMT3_bit->CHARLEN = (uint32_t)UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[3].eDataLength;
    
    /*Set all chip selects to be active low*/
    *UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIDEF = 0xFFFFFFFF;
    
    /* Set interrupts levels to INT0 */
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->TXINTLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->RXINTLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->RXOVRNINTLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->BITERRLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->DESYNCLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->PARERRLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->TIMEOUTLVL = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->DLENERRLVL = 0;
    
    /*Clear Pending Interrupts*/
    *UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG = 0xFFFF;
    
    /*Disable/Enable SPI interrupts*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->TXINTENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->RXINTENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->RXOVRNINTENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->BITERRENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->DESYNCENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->PARERRENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->TIMEOUTENA = 0; /*Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->DLENERRENA = 0; /*Disable*/
    
    /*Calculate CSs mask*/
    u32CSsMask = 0U;
    for(u8IndexDevices = (uint8_t)0; u8IndexDevices < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices; u8IndexDevices++)
    {
      u32CSsMask |= (~((uint8_t)UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IndexDevices].eChipSelectId));
    }
    u32CSsMask &= 0x000000FF;
    
    /*Reserve SPI pins for SPI not other functions*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC0_bit->ENAFUN = 0; /*Disable the EN pin function */
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC0_bit->CLKFUN = 1; /*Enable SPI CLK Pin */
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC0_bit->SIMOFUN0 = 1; /* Enable SPI MOSI Pin*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC0_bit->SOMIFUN0 = 1; /*Enable SPI MISO Pin */
    (*UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC0) |= u32CSsMask; /*Enable allowed CSs*/
    
    /*Set Pin Directions  */
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC1_bit->ENADIR = 0; /* EN Input*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC1_bit->CLKDIR = 1; /*CLK Output*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC1_bit->SIMODIR0 = 1; /*MOSI Output*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC1_bit->SOMIDIR0 = 0; /*MISO Input*/
    (*UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC1) |= u32CSsMask; /*Allowed CSs, set them as output*/
    
    /*Set Pins default logic to 0 or 1*/
    /* Do not change contents of UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC2*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC3_bit->ENADOUT = 0;  /*Default Logic 0*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC3_bit->CLKDOUT = 0;  /*Default Logic 0*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC3_bit->SIMODOUT0 = 0;  /*Default Logic 0*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC3_bit->SOMIDOUT0 = 0;  /*Default Logic 0*/
    (*UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC3) |= u32CSsMask; /*Allowed CSs, set default high*/
    
    /* Do not change contents of UC_SPI_astrMibModule[0].pstrMibObj->pMIBSPIPC4: only used if SPI pins are used as GPO pins*/
    /* Do not change contents of UC_SPI_astrMibModule[0].pstrMibObj->pMIBSPIPC5: only used if SPI pins are used as GPO pins*/
    
    /*Pins Open Drain Disable/Enable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC6_bit->ENAPDR = 0; /*OD Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC6_bit->CLKPDR = 0; /*OD Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC6_bit->SIMOPDR0 = 0; /*OD Disable*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC6_bit->SOMIPDR0 = 1; /*OD Enable*/
    (*UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC6) &= 0xFFFFFF00; /*Allowed CSs, disable their OD option*/

    /*Pull Control Enable = 0/ Disable = 1*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC7_bit->ENAPDIS = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC7_bit->CLKPDIS = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC7_bit->SIMOPDIS0 = 0;
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC7_bit->SOMIPDIS0 = 1;
    (*UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC7) &= 0xFFFFFF00; /*Allowed CSs, Enable their pull control option*/
    
    /*Set Pull Down = 0 / Pull up = 1*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC8_bit->ENAPSEL = 1; /*Pull up*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC8_bit->CLKPSEL = 1; /*Pull up*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC8_bit->SIMOPSEL0 = 1; /*Pull up*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC8_bit->SOMIPSEL0 = 1; /*Pull up*/
    (*UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIPC8) |= u32CSsMask; /*Allowed CSs, set all of them pull up*/
   
    /*Enable Interrupts*/
    /*Select Interrupt Lines*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->TXINTLVL = 0; /*Line 0*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPILVL_bit->RXINTLVL = 1; /*Line 1*/
    
    /*Disable/Enable SPI interrupts*/
    if(UC_SPI_astrMibModule[u8IndexBus].u8EnGlobalTxInt == deMCD_TRUE)
    {
      UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->TXINTENA = 1; /*Enable*/
    }
    else
    {
      UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->TXINTENA = 0; /*Disable*/
    }
    
    if(UC_SPI_astrMibModule[u8IndexBus].u8EnGlobalRxInt == deMCD_TRUE)
    {
      UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->RXINTENA = 1; /*Enable*/
    }
    else
    {
      UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->RXINTENA = 0; /*Disable*/
    }

    
    /*Enable the SPI module after configuration*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIGCR1_bit->SPIEN = 1;
  }
  
  /*Register and Enable Interrupts*/
  
#ifdef UC_SPI_MIBSPI1_SW_SPI_MODULE
  UC_SYS_vdRegisterISR(VIM_MIBSPI1L0, VIM_MIBSPI3L0_Handler);
  UC_SYS_vdEnableISR(VIM_MIBSPI1L0);
  UC_SYS_vdRegisterISR(VIM_MIBSPI1L1, VIM_MIBSPI3L1_Handler);
  UC_SYS_vdEnableISR(VIM_MIBSPI1L1);
#endif /*UC_SPI_MIBSPI1_SW_SPI_MODULE*/
  
#ifdef UC_SPI_MIBSPI3_SW_SPI_MODULE
  UC_SYS_vdRegisterISR(VIM_MIBSPI3L0, VIM_MIBSPI3L0_Handler);
  UC_SYS_vdEnableISR(VIM_MIBSPI3L0);
  UC_SYS_vdRegisterISR(VIM_MIBSPI3L1, VIM_MIBSPI3L1_Handler);
  UC_SYS_vdEnableISR(VIM_MIBSPI3L1);
#endif /*UC_SPI_MIBSPI3_SW_SPI_MODULE*/
  
}

void UC_SPI_vdMgr(void)
{
  uint8_t u8IndexBus;
  uint8_t u8IdDevice;
  STATUS_t eStatus;
  
  /* Loop on all the SPI buses */
  for(u8IndexBus = (uint8_t)0; u8IndexBus < (uint8_t)UC_SPI_MODULE_NUM; u8IndexBus++)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].eBusStatus == UC_SPI_BUS_STATUS_IDLE)
    {
      /* Loop in all the SPI devices within one bus and check for requests */
      for(u8IdDevice = (uint8_t)0; u8IdDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices; u8IdDevice++)
      {  
        eStatus = local_UC_SPI_eActiveDeviceSendSpiFrameSync(u8IndexBus, u8IdDevice);
        
        /*break for looping on devices, a device has been served already in this time slot*/
        if(eStatus == STATUS_OK)
        {
          break;
        }
      }
      
      /* If looping on the devices has ended without making the bus busy, then reset all devices to receive new requests*/
      if((UC_SPI_astrMibModule[u8IndexBus].eBusStatus == UC_SPI_BUS_STATUS_IDLE) && 
         (u8IdDevice == UC_SPI_astrMibModule[u8IndexBus].u8NumDevices))
      {
        for(u8IdDevice = (uint8_t)0; u8IdDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices; u8IdDevice++)
        {
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDeviceStatus = UC_SPI_DEV_STATUS_IDLE;
        }
      }
    }
    else
    {
      if(UC_SPI_astrMibModule[u8IndexBus].eBusStatus == UC_SPI_BUS_STATUS_BUSY)
      {
        UC_SPI_astrMibModule[u8IndexBus].u32BusyCounter++;
        if((UC_SPI_astrMibModule[u8IndexBus].u32BusyCounter * UC_SPI_OS_TASK_MS) >= UC_SPI_BUSY_TIMEOUT_MS)
        {
          UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_ERROR;
          UC_SPI_astrMibModule[u8IndexBus].u32BusyCounter = deMCD_DEFAULT;
        }
      }
    }
  }

}

STATUS_t UC_SPI_eRegisterDeviceDataRxClbk(uint8_t u8IndexBus, uint8_t u8IdDevice, UC_SPI_p2fDataReceivedClbk_t p2f)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    if(u8IdDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
    {
      if(UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].p2fReadClbk == deMCD_NULL)
      {
        UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].p2fReadClbk = p2f;
        eStatus = STATUS_OK;
      }
    }
  }
  
  return eStatus;
}

STATUS_t UC_SPI_eRegisterBusRxClbk(uint8_t u8IndexBus, UC_SPI_p2fTransceiverClbk_t p2f)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].p2fRxClbk == deMCD_NULL)
    {
      UC_SPI_astrMibModule[u8IndexBus].p2fRxClbk = p2f;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}

STATUS_t UC_SPI_eRegisterBusTxClbk(uint8_t u8IndexBus, UC_SPI_p2fTransceiverClbk_t p2f)
{
  STATUS_t eStatus = STATUS_NOK;

  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].p2fTxClbk == deMCD_NULL)
    {
      UC_SPI_astrMibModule[u8IndexBus].p2fTxClbk = p2f;
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}

STATUS_t UC_SPI_eSendSpiFrame(uint8_t u8IndexBus, uint8_t u8IdDevice, uint8_t* au8TxByteArray, uint8_t u8TxByteArrayMax)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].eBusStatus != UC_SPI_BUS_STATUS_ERROR)
    {
      if(u8IdDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
      {
        /* Check if it is idle, not in receiving or not just has been served*/
        if(UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDeviceStatus == UC_SPI_DEV_STATUS_IDLE)
        {
          if((au8TxByteArray > 0) && (au8TxByteArray != deMCD_NULL))
          {
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8TxByteArray = au8TxByteArray;
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8TxByteArrayMax = u8TxByteArrayMax;
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8RxByteArray = deMCD_NULL;
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8RxByteArrayMax = 0; 
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDataLength = (UC_SPI_eDataLength_t)(u8TxByteArrayMax*8);
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDeviceStatus = UC_SPI_DEV_STATUS_SEND_REQUESTED;
          }
          eStatus = STATUS_OK;
        }
        else
        {
          eStatus = STATUS_BUSY;
        }
      }
    }
  }
  
  return eStatus;
}


STATUS_t UC_SPI_eResetBusError(uint8_t u8IndexBus)
{
  STATUS_t eStatus = STATUS_NOK;
  
  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_IDLE;
  }
  
  return eStatus;
}

STATUS_t UC_SPI_eSendSpiFrameSync(uint8_t u8IndexBus, uint8_t u8IdDevice, uint8_t* au8TxByteArray, uint8_t u8TxByteArrayMax, uint8_t* au8RxByteArray, uint8_t u8RxByteArrayMax)
{
  STATUS_t eStatus = STATUS_NOK;
  
  /* Check for valid bus */
  if(u8IndexBus < (uint8_t)UC_SPI_MODULE_NUM)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].eBusStatus == UC_SPI_BUS_STATUS_IDLE)
    {
      /* Check for valid device */
      if(u8IdDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
      {
        if((au8TxByteArray > 0) && (au8TxByteArray != deMCD_NULL))
        {
          /* Check for devices that has a data transfer request */
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8TxByteArray = au8TxByteArray;
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8TxByteArrayMax = u8TxByteArrayMax;
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDataLength = (UC_SPI_eDataLength_t)(u8TxByteArrayMax*8);
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDeviceStatus = UC_SPI_DEV_STATUS_SEND_REQUESTED;

          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8RxByteArray = au8RxByteArray;
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8RxByteArrayMax = u8RxByteArrayMax; 

          eStatus = local_UC_SPI_eActiveDeviceSendSpiFrameSync(u8IndexBus, u8IdDevice);
          
          if(eStatus == STATUS_OK)
          {
            UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_IDLE;
          }
        }
      }
    }
  }

  return eStatus;
}

STATUS_t UC_SPI_eReceiveDataSync(uint8_t u8IndexBus, uint32_t* pu32DataRx)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IdActiveDevice;
  
  if(UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG_bit->RXINTFLG == 1)
  {
    /* Read the received data */
    while(UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXEMPTY == 0)
    {
      *pu32DataRx = UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXDATA;
    }
//    *pu32DataRx = UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXDATA;
    //UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO0, UC_DIO_OUT_COMMAND_ON);
    LIB_DELAY_vdNanoSeconds(35000); 
    //UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO0, UC_DIO_OUT_COMMAND_OFF);
    *pu32DataRx = UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXDATA;
    /* Determine which device requested this data */
    u8IdActiveDevice = UC_SPI_astrMibModule[u8IndexBus].u8IdDeviceActive;
    
    
    /* If valid device id */
    if(u8IdActiveDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
    {
      /* Indicate to the device that the data has been received*/
      UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdActiveDevice].eDeviceStatus = UC_SPI_DEV_STATUS_TRANSFER_DONE;
    }
    /*Indicate that the interrupt has ben handled stop serving it again*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG_bit->RXINTFLG = 1;
    /* Set the bus state as idle */
    UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_IDLE;
    
    eStatus = STATUS_OK;
  }

  
  return eStatus;
}
/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

STATUS_t local_UC_SPI_eReceiveDataSync(uint8_t u8IndexBus, uint32_t* pu32DataRx)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8IdActiveDevice;
  
  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG_bit->RXINTFLG == 1)
    {
      /* Read the received data */
      while(UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXEMPTY == 0)
      {
        *pu32DataRx = UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXDATA;
      }

      *pu32DataRx = UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXDATA;
      /* Determine which device requested this data */
      u8IdActiveDevice = UC_SPI_astrMibModule[u8IndexBus].u8IdDeviceActive;
      
      
      /* If valid device id */
      if(u8IdActiveDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
      {
        /* Indicate to the device that the data has been received*/
        UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdActiveDevice].eDeviceStatus = UC_SPI_DEV_STATUS_TRANSFER_DONE;
      }
      /*Indicate that the interrupt has ben handled stop serving it again*/
      UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG_bit->RXINTFLG = 1;
      /* Set the bus state as idle */
      UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_IDLE;
      
      eStatus = STATUS_OK;
    }
  }
  
  return eStatus;
}

STATUS_t local_UC_SPI_eActiveDeviceSendSpiFrameSync(uint8_t u8IndexBus, uint8_t u8IdDevice)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8TransferHold;
  uint8_t u8NumOfFrames;
  uint8_t u8DivRemain;
  uint8_t u8IndexFrames;
  uint32_t u32TxFrame;
  uint8_t u8NumOfBytesReceived = 0;
  uint32_t u32RxFrame;
  STATUS_t eRxStatus;
  
  /* Check for valid bus */
  if(u8IndexBus < (uint8_t)UC_SPI_MODULE_NUM)
  {
    if(UC_SPI_astrMibModule[u8IndexBus].eBusStatus == UC_SPI_BUS_STATUS_IDLE)
    {
      /* Check for valid device */
      if(u8IdDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
      {
        /* Check for devices that has a data transfer request */
        if(UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDeviceStatus == UC_SPI_DEV_STATUS_SEND_REQUESTED)
        {
          /* Set the SPI module as busy */
          UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_BUSY;
          /* Save the active */
          UC_SPI_astrMibModule[u8IndexBus].u8IdDeviceActive = u8IdDevice;

          /* Shunk the data frame to the configured spi data frame length */
          u8NumOfFrames = UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDataLength / UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eFormatId].eDataLength;
          u8DivRemain = UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDataLength % UC_SPI_astrMibModule[u8IndexBus].astrMibFormat[UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eFormatId].eDataLength;
          if(u8DivRemain != (uint8_t)0)
          {
            u8NumOfFrames++;
          }        
          
          /* If Tx interrupt is allowed, enable it before transmission */
          if(UC_SPI_astrMibModule[u8IndexBus].u8EnGlobalTxInt == deMCD_TRUE)
          {
            UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->TXINTENA = 1;
          }
          
          /* Send the frames: MSB first*/

          for(u8IndexFrames = 0; u8IndexFrames < UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8TxByteArrayMax; u8IndexFrames++)
          {
            if(u8IndexFrames == (UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8TxByteArrayMax-(uint8_t)1))
            {
              u8TransferHold = (uint8_t)deMCD_FALSE;
            }
            else
            {
              u8TransferHold = (uint8_t)deMCD_TRUE;
            }
            
            /*Send the assigned byte*/
            u32TxFrame = UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8TxByteArray[u8IndexFrames];
            UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u32TxData = u32TxFrame;
            
            
            while(UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG_bit->TXINTFLG == deMCD_FALSE)
            {
              /*Wait till the transmitter buffer is empty*/
            }
            
            
            *UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIDAT1 = 0x00000000 |
                                                                        ((u8TransferHold & 0x01) << 28) |
                                                                        ((((uint8_t)UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eFormatId) & 0x03) << 24) |
                                                                        ((((uint8_t)UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eChipSelectId) & 0xFF) << 16) |
                                                                        (u32TxFrame  << 0);
            
            if((UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8RxByteArray != deMCD_NULL) && (UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8RxByteArrayMax > 0))
            {
              /*Check for received data */
              eRxStatus = local_UC_SPI_eReceiveDataSync(u8IndexBus, &u32RxFrame);
              if(eRxStatus == STATUS_OK)
              {
                if(u8NumOfBytesReceived < UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8RxByteArrayMax)
                {
                  UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8RxByteArray[u8NumOfBytesReceived] = (uint8_t)u32RxFrame;
                  u8NumOfBytesReceived++;
                }
              }
            }
          }
          
          if((UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8RxByteArray != deMCD_NULL) && (UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8RxByteArrayMax > 0))
          {
            while(u8NumOfBytesReceived < UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].u8RxByteArrayMax)
            {
              /*Check for received data */
              eRxStatus = local_UC_SPI_eReceiveDataSync(u8IndexBus, &u32RxFrame);
              if(eRxStatus == STATUS_OK)
              {
                UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].au8RxByteArray[u8NumOfBytesReceived] = (uint8_t)u32RxFrame;
                u8NumOfBytesReceived++;
              }
            }
          }
          
          UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdDevice].eDeviceStatus = UC_SPI_DEV_STATUS_RECEIVING;
          eStatus = STATUS_OK;
          

        }
      }
    }
  }
  
  return eStatus;
}


STATUS_t local_UC_SPI_eRxInterruptHandler(uint8_t u8IndexBus)
{
  STATUS_t eStatus = STATUS_NOK;
  uint32_t u32RxData;
  uint8_t u8IdActiveDevice;
  
  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    /* Read the received data */
    u32RxData = UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIBUF_bit->RXDATA;
    /* Determine which device requested this data */
    u8IdActiveDevice = UC_SPI_astrMibModule[u8IndexBus].u8IdDeviceActive;
    /* If valid device id */
    if(u8IdActiveDevice < UC_SPI_astrMibModule[u8IndexBus].u8NumDevices)
    {
      /* Indicate to the device that the data has been received*/
      UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdActiveDevice].eDeviceStatus = UC_SPI_DEV_STATUS_TRANSFER_DONE;
      /* Call the device callback with the data received, only of registered */
      if(UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdActiveDevice].p2fReadClbk != deMCD_NULL)
      {
        UC_SPI_astrMibModule[u8IndexBus].astrMibDevice[u8IdActiveDevice].p2fReadClbk(u32RxData);
      }
    }
    /*Indicate that the interrupt has ben handled stop serving it again*/
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIFLG_bit->RXINTFLG = 1;
    /* Set the bus state as idle */
    UC_SPI_astrMibModule[u8IndexBus].eBusStatus = UC_SPI_BUS_STATUS_IDLE;
    /* Call the generic Rx Bus Call back if any */
    if(UC_SPI_astrMibModule[u8IndexBus].p2fRxClbk != deMCD_NULL)
    {
      UC_SPI_astrMibModule[u8IndexBus].p2fRxClbk();
    }
    
    eStatus = STATUS_OK;
  }
  
  return eStatus;
}

STATUS_t local_UC_SPI_eTxInterruptHandler(uint8_t u8IndexBus)
{
  STATUS_t eStatus = STATUS_NOK;

  if(u8IndexBus < UC_SPI_MODULE_NUM)
  {
    /*Disable Tx Interrupt, it will be enabled again when transmission is requested */
    UC_SPI_astrMibModule[u8IndexBus].pstrMibObj->pMIBSPIINT0_bit->TXINTENA = 0;
    
    /* Call the generic Tx Bus Call back if any */
    if(UC_SPI_astrMibModule[u8IndexBus].p2fTxClbk != deMCD_NULL)
    {
      UC_SPI_astrMibModule[u8IndexBus].p2fTxClbk();
    }
    
    eStatus = STATUS_OK;
  }

  return eStatus;
}

/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/

/*Reserved ISR for MIBSPI1 TX interrupt */
__irq __arm void VIM_MIBSPI1L0_Handler (void)
{
#ifdef UC_SPI_MIBSPI1_SW_SPI_MODULE
  local_UC_SPI_eTxInterruptHandler(UC_SPI_MIBSPI1_SW_SPI_MODULE);
#endif /*UC_SPI_MIBSPI1_SW_SPI_MODULE*/
}

/*Reserved ISR for MIBSPI1 RX interrupt */
__irq __arm void VIM_MIBSPI1L1_Handler (void)
{
#ifdef UC_SPI_MIBSPI1_SW_SPI_MODULE
  local_UC_SPI_eRxInterruptHandler(UC_SPI_MIBSPI1_SW_SPI_MODULE);
#endif /*UC_SPI_MIBSPI3_SW_SPI_MODULE*/
}

/*Reserved ISR for MIBSPI3 TX interrupt */
__irq __arm void VIM_MIBSPI3L0_Handler (void)
{
#ifdef UC_SPI_MIBSPI3_SW_SPI_MODULE
  local_UC_SPI_eTxInterruptHandler(UC_SPI_MIBSPI3_SW_SPI_MODULE);
#endif /*UC_SPI_MIBSPI3_SW_SPI_MODULE*/
}

/*Reserved ISR for MIBSPI3 RX interrupt */
__irq __arm void VIM_MIBSPI3L1_Handler (void)
{
#ifdef UC_SPI_MIBSPI3_SW_SPI_MODULE
  local_UC_SPI_eRxInterruptHandler(UC_SPI_MIBSPI3_SW_SPI_MODULE);
#endif /*UC_SPI_MIBSPI3_SW_SPI_MODULE*/
}



#endif /*UC_SPI_MODULE_ENABLE*/

