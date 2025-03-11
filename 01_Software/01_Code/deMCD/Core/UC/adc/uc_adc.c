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

File Name: uc_adc.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#include "uc_adc_cfg.h"
#include "uc_adc.h"

#ifdef UC_ADC_MODULE_ENABLE

#include "uc_header.h"
#include "uc_system.h"

/********************************************************************************************/
/*********************************** INTERNAL MACROS ****************************************/
/********************************************************************************************/

#define UC_ADC_CONVERTED_BITS                                  (10)


/********************************************************************************************/
/********************* INTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

UC_ADC_strObj_t UC_ADC_astrObj[UC_ADC_OBJECTS_AVAILABLE] =
{
	{
		&AD1RSTCR,          
		&AD1RSTCR_bit,          
		&AD1OPMODECR,       
		&AD1OPMODECR_bit,       
		&AD1CLOCKCR,        
		&AD1CLOCKCR_bit,        
		&AD1CALCR,          
		&AD1CALCR_bit,          
		&AD1EVMODECR,       
		&AD1EVMODECR_bit,       
		&AD1G1MODECR,       
		&AD1G1MODECR_bit,       
		&AD1G2MODECR,       
		&AD1G2MODECR_bit,       
		&AD1EVSRC,          
		&AD1EVSRC_bit,          
		&AD1G1SRC,          
		&AD1G1SRC_bit,          
		&AD1G2SRC,          
		&AD1G2SRC_bit,          
		&AD1EVINTENA,       
		&AD1EVINTENA_bit,       
		&AD1G1INTENA,       
		&AD1G1INTENA_bit,       
		&AD1G2INTENA,       
		&AD1G2INTENA_bit,       
		&AD1EVINTFLG,       
		&AD1EVINTFLG_bit,       
		&AD1G1INTFLG,       
		&AD1G1INTFLG_bit,       
		&AD1G2INTFLG,       
		&AD1G2INTFLG_bit,       
		&AD1EVTHRINTCR,     
		&AD1EVTHRINTCR_bit,     
		&AD1G1THRINTCR,     
		&AD1G1THRINTCR_bit,     
		&AD1G2THRINTCR,     
		&AD1G2THRINTCR_bit,     
		&AD1EVDMACR,        
		&AD1EVDMACR_bit,        
		&AD1G1DMACR,        
		&AD1G1DMACR_bit,        
		&AD1G2DMACR,        
		&AD1G2DMACR_bit,        
		&AD1BNDCR,          
		&AD1BNDCR_bit,          
		&AD1BNDEND,         
		&AD1BNDEND_bit,         
		&AD1EVSAMP,         
		&AD1EVSAMP_bit,         
		&AD1G1SAMP,         
		&AD1G1SAMP_bit,         
		&AD1G2SAMP,         
		&AD1G2SAMP_bit,         
		&AD1EVSR,           
		&AD1EVSR_bit,           
		&AD1G1SR,           
		&AD1G1SR_bit,           
		&AD1G2SR,           
		&AD1G2SR_bit,           
		&AD1EVSEL,          
		&AD1EVSEL_bit,          
		&AD1G1SEL,          
		&AD1G1SEL_bit,          
		&AD1G2SEL,          
		&AD1G2SEL_bit,          
		&AD1CALR,           
		&AD1CALR_bit,           
		&AD1SMSTATE,        
		&AD1SMSTATE_bit,        
		&AD1LASTCONV,       
		&AD1LASTCONV_bit,       
		&AD1EVBUFFER0,      
		&AD1EVBUFFER0_bit,      
		&AD1EVBUFFER1,      
		&AD1EVBUFFER1_bit,      
		&AD1EVBUFFER2,      
		&AD1EVBUFFER2_bit,      
		&AD1EVBUFFER3,      
		&AD1EVBUFFER3_bit,      
		&AD1EVBUFFER4,      
		&AD1EVBUFFER4_bit,      
		&AD1EVBUFFER5,      
		&AD1EVBUFFER5_bit,      
		&AD1EVBUFFER6,      
		&AD1EVBUFFER6_bit,      
		&AD1EVBUFFER7,      
		&AD1EVBUFFER7_bit,      
		&AD1G1BUFFER0,      
		&AD1G1BUFFER0_bit,      
		&AD1G1BUFFER1,      
		&AD1G1BUFFER1_bit,      
		&AD1G1BUFFER2,      
		&AD1G1BUFFER2_bit,      
		&AD1G1BUFFER3,      
		&AD1G1BUFFER3_bit,      
		&AD1G1BUFFER4,      
		&AD1G1BUFFER4_bit,      
		&AD1G1BUFFER5,      
		&AD1G1BUFFER5_bit,      
		&AD1G1BUFFER6,      
		&AD1G1BUFFER6_bit,      
		&AD1G1BUFFER7,      
		&AD1G1BUFFER7_bit,      
		&AD1G2BUFFER0,      
		&AD1G2BUFFER0_bit,      
		&AD1G2BUFFER1,      
		&AD1G2BUFFER1_bit,      
		&AD1G2BUFFER2,      
		&AD1G2BUFFER2_bit,      
		&AD1G2BUFFER3,      
		&AD1G2BUFFER3_bit,      
		&AD1G2BUFFER4,      
		&AD1G2BUFFER4_bit,      
		&AD1G2BUFFER5,      
		&AD1G2BUFFER5_bit,      
		&AD1G2BUFFER6,      
		&AD1G2BUFFER6_bit,      
		&AD1G2BUFFER7,      
		&AD1G2BUFFER7_bit,      
		&AD1EVEMUBUFFER,    
		&AD1EVEMUBUFFER_bit,    
		&AD1G1EMUBUFFER,    
		&AD1G1EMUBUFFER_bit,    
		&AD1G2EMUBUFFER,    
		&AD1G2EMUBUFFER_bit,    
		&AD1EVTDIR,         
		&AD1EVTDIR_bit,         
		&AD1EVTOUT,         
		&AD1EVTOUT_bit,         
		&AD1EVTIN,          
		&AD1EVTIN_bit,          
		&AD1EVTSET,         
		&AD1EVTSET_bit,         
		&AD1EVTCLR,         
		&AD1EVTCLR_bit,         
		&AD1EVTPDR,         
		&AD1EVTPDR_bit,         
		&AD1EVTPDIS,        
		&AD1EVTPDIS_bit,        
		&AD1EVTPSEL,        
		&AD1EVTPSEL_bit,        
		&AD1EVSAMPDISEN,    
		&AD1EVSAMPDISEN_bit,    
		&AD1G1SAMPDISEN,    
		&AD1G1SAMPDISEN_bit,    
		&AD1G2SAMPDISEN,    
		&AD1G2SAMPDISEN_bit,    
		&AD1MAGINT1CR,      
		&AD1MAGINT1CR_bit,      
		&AD1MAGINT1MASK,    
		&AD1MAGINT1MASK_bit,    
		&AD1MAGINT2CR,      
		&AD1MAGINT2CR_bit,      
		&AD1MAGINT2MASK,    
		&AD1MAGINT2MASK_bit,    
		&AD1MAGINT3CR,      
		&AD1MAGINT3CR_bit,      
		&AD1MAGINT3MASK,    
		&AD1MAGINT3MASK_bit,    
		&AD1MAGINTENASET,   
		&AD1MAGINTENASET_bit,   
		&AD1MAGINTENACLR,   
		&AD1MAGINTENACLR_bit,   
		&AD1MAGINTFLG,      
		&AD1MAGINTFLG_bit,      
		&AD1MAGINTOFF,      
		&AD1MAGINTOFF_bit,      
		&AD1EVFIFORESETCR,  
		&AD1EVFIFORESETCR_bit,  
		&AD1G1FIFORESETCR,  
		&AD1G1FIFORESETCR_bit,  
		&AD1G2FIFORESETCR,  
		&AD1G2FIFORESETCR_bit,  
		&AD1EVRAMWRADDR,    
		&AD1EVRAMWRADDR_bit,    
		&AD1G1RAMWRADDR,    
		&AD1G1RAMWRADDR_bit,    
		&AD1G2RAMWRADDR,    
		&AD1G2RAMWRADDR_bit,    
		&AD1PARCR,          
		&AD1PARCR_bit,          
		&AD1PARADDR,        
		&AD1PARADDR_bit,        
		&AD1PWRUPDLYCTRL,
		&AD1PWRUPDLYCTRL_bit,
		&AD1BUFER_BASE,
	},
	{
		&AD2RSTCR,          
		&AD2RSTCR_bit,          
		&AD2OPMODECR,       
		&AD2OPMODECR_bit,       
		&AD2CLOCKCR,        
		&AD2CLOCKCR_bit,        
		&AD2CALCR,          
		&AD2CALCR_bit,          
		&AD2EVMODECR,       
		&AD2EVMODECR_bit,       
		&AD2G1MODECR,       
		&AD2G1MODECR_bit,       
		&AD2G2MODECR,       
		&AD2G2MODECR_bit,       
		&AD2EVSRC,          
		&AD2EVSRC_bit,          
		&AD2G1SRC,          
		&AD2G1SRC_bit,          
		&AD2G2SRC,          
		&AD2G2SRC_bit,          
		&AD2EVINTENA,       
		&AD2EVINTENA_bit,       
		&AD2G1INTENA,       
		&AD2G1INTENA_bit,       
		&AD2G2INTENA,       
		&AD2G2INTENA_bit,       
		&AD2EVINTFLG,       
		&AD2EVINTFLG_bit,       
		&AD2G1INTFLG,       
		&AD2G1INTFLG_bit,       
		&AD2G2INTFLG,       
		&AD2G2INTFLG_bit,       
		&AD2EVTHRINTCR,     
		&AD2EVTHRINTCR_bit,     
		&AD2G1THRINTCR,     
		&AD2G1THRINTCR_bit,     
		&AD2G2THRINTCR,     
		&AD2G2THRINTCR_bit,     
		&AD2EVDMACR,        
		&AD2EVDMACR_bit,        
		&AD2G1DMACR,        
		&AD2G1DMACR_bit,        
		&AD2G2DMACR,        
		&AD2G2DMACR_bit,        
		&AD2BNDCR,          
		&AD2BNDCR_bit,          
		&AD2BNDEND,         
		&AD2BNDEND_bit,         
		&AD2EVSAMP,         
		&AD2EVSAMP_bit,         
		&AD2G1SAMP,         
		&AD2G1SAMP_bit,         
		&AD2G2SAMP,         
		&AD2G2SAMP_bit,         
		&AD2EVSR,           
		&AD2EVSR_bit,           
		&AD2G1SR,           
		&AD2G1SR_bit,           
		&AD2G2SR,           
		&AD2G2SR_bit,           
		&AD2EVSEL,          
		&AD2EVSEL_bit,          
		&AD2G1SEL,          
		&AD2G1SEL_bit,          
		&AD2G2SEL,          
		&AD2G2SEL_bit,          
		&AD2CALR,           
		&AD2CALR_bit,           
		&AD2SMSTATE,        
		&AD2SMSTATE_bit,        
		&AD2LASTCONV,       
		&AD2LASTCONV_bit,       
		&AD2EVBUFFER0,      
		&AD2EVBUFFER0_bit,      
		&AD2EVBUFFER1,      
		&AD2EVBUFFER1_bit,      
		&AD2EVBUFFER2,      
		&AD2EVBUFFER2_bit,      
		&AD2EVBUFFER3,      
		&AD2EVBUFFER3_bit,      
		&AD2EVBUFFER4,      
		&AD2EVBUFFER4_bit,      
		&AD2EVBUFFER5,      
		&AD2EVBUFFER5_bit,      
		&AD2EVBUFFER6,      
		&AD2EVBUFFER6_bit,      
		&AD2EVBUFFER7,      
		&AD2EVBUFFER7_bit,      
		&AD2G1BUFFER0,      
		&AD2G1BUFFER0_bit,      
		&AD2G1BUFFER1,      
		&AD2G1BUFFER1_bit,      
		&AD2G1BUFFER2,      
		&AD2G1BUFFER2_bit,      
		&AD2G1BUFFER3,      
		&AD2G1BUFFER3_bit,      
		&AD2G1BUFFER4,      
		&AD2G1BUFFER4_bit,      
		&AD2G1BUFFER5,      
		&AD2G1BUFFER5_bit,      
		&AD2G1BUFFER6,      
		&AD2G1BUFFER6_bit,      
		&AD2G1BUFFER7,      
		&AD2G1BUFFER7_bit,      
		&AD2G2BUFFER0,      
		&AD2G2BUFFER0_bit,      
		&AD2G2BUFFER1,      
		&AD2G2BUFFER1_bit,      
		&AD2G2BUFFER2,      
		&AD2G2BUFFER2_bit,      
		&AD2G2BUFFER3,      
		&AD2G2BUFFER3_bit,      
		&AD2G2BUFFER4,      
		&AD2G2BUFFER4_bit,      
		&AD2G2BUFFER5,      
		&AD2G2BUFFER5_bit,      
		&AD2G2BUFFER6,      
		&AD2G2BUFFER6_bit,      
		&AD2G2BUFFER7,      
		&AD2G2BUFFER7_bit,      
		&AD2EVEMUBUFFER,    
		&AD2EVEMUBUFFER_bit,    
		&AD2G1EMUBUFFER,    
		&AD2G1EMUBUFFER_bit,    
		&AD2G2EMUBUFFER,    
		&AD2G2EMUBUFFER_bit,    
		&AD2EVTDIR,         
		&AD2EVTDIR_bit,         
		&AD2EVTOUT,         
		&AD2EVTOUT_bit,         
		&AD2EVTIN,          
		&AD2EVTIN_bit,          
		&AD2EVTSET,         
		&AD2EVTSET_bit,         
		&AD2EVTCLR,         
		&AD2EVTCLR_bit,         
		&AD2EVTPDR,         
		&AD2EVTPDR_bit,         
		&AD2EVTPDIS,        
		&AD2EVTPDIS_bit,        
		&AD2EVTPSEL,        
		&AD2EVTPSEL_bit,        
		&AD2EVSAMPDISEN,    
		&AD2EVSAMPDISEN_bit,    
		&AD2G1SAMPDISEN,    
		&AD2G1SAMPDISEN_bit,    
		&AD2G2SAMPDISEN,    
		&AD2G2SAMPDISEN_bit,    
		&AD2MAGINT1CR,      
		&AD2MAGINT1CR_bit,      
		&AD2MAGINT1MASK,    
		&AD2MAGINT1MASK_bit,    
		&AD2MAGINT2CR,      
		&AD2MAGINT2CR_bit,      
		&AD2MAGINT2MASK,    
		&AD2MAGINT2MASK_bit,    
		&AD2MAGINT3CR,      
		&AD2MAGINT3CR_bit,      
		&AD2MAGINT3MASK,    
		&AD2MAGINT3MASK_bit,    
		&AD2MAGINTENASET,   
		&AD2MAGINTENASET_bit,   
		&AD2MAGINTENACLR,   
		&AD2MAGINTENACLR_bit,   
		&AD2MAGINTFLG,      
		&AD2MAGINTFLG_bit,      
		&AD2MAGINTOFF,      
		&AD2MAGINTOFF_bit,      
		&AD2EVFIFORESETCR,  
		&AD2EVFIFORESETCR_bit,  
		&AD2G1FIFORESETCR,  
		&AD2G1FIFORESETCR_bit,  
		&AD2G2FIFORESETCR,  
		&AD2G2FIFORESETCR_bit,  
		&AD2EVRAMWRADDR,    
		&AD2EVRAMWRADDR_bit,    
		&AD2G1RAMWRADDR,    
		&AD2G1RAMWRADDR_bit,    
		&AD2G2RAMWRADDR,    
		&AD2G2RAMWRADDR_bit,    
		&AD2PARCR,          
		&AD2PARCR_bit,          
		&AD2PARADDR,        
		&AD2PARADDR_bit,        
		&AD2PWRUPDLYCTRL,
		&AD2PWRUPDLYCTRL_bit,
		&AD2BUFER_BASE,
	}
};

UC_ADC_strChIdDecode_t UC_ADC_astrChIdDecode[UC_ADC_CHANNELS_AVAILABLE];

/********************************************************************************************/
/********************* EXTERNAL GLOBAL VARIABLES DECLARATION ********************************/
/********************************************************************************************/

extern UC_ADC_strModule_t UC_ADC_astrModule[UC_ADC_CORE_NUM];

/********************************************************************************************/
/*********************************** ISR DECLARATION ****************************************/
/********************************************************************************************/

/********************************************************************************************/
/****************************** LOCAL FUNCTIONS DECLARATION *********************************/
/********************************************************************************************/


/********************************************************************************************/
/**************************** GLOBAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/

void UC_ADC_vdInit(void)
{
  uint8_t u8IndexModule;
  uint8_t u8IndexSignal;
  uint32_t u32StartConvTrigger;
  uint8_t u8Index;
  
  /* Loop on all cores */
  for(u8IndexModule = (uint8_t)0; u8IndexModule < (uint8_t)UC_ADC_CORE_NUM; u8IndexModule++)
  {
    /*Initialize channel ids decoder */
    for(u8Index = (uint8_t)0; u8Index < (uint8_t)(UC_ADC_CHANNELS_AVAILABLE); u8Index++)
    {
      UC_ADC_astrChIdDecode[u8Index].eChannelId = (UC_ADC_eChannelId_t)u8Index;
      UC_ADC_astrChIdDecode[u8Index].u8SignalId = (uint8_t)UC_ADC_CHANNEL_NOT_USED;
    }
    
    /* Reset ADC Core  */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADRSTCR_bit->RESET = 1;
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADRSTCR_bit->RESET = 0;
    
    /* Disable ADC Core  */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADOPMODECR_bit->ADC_EN = 0;  
    /* Set ADC Core 1 resolution to 10 bit */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADOPMODECR_bit->_12_BIT = 0;
    
    /*Set the ADC clk to e.g. 10 MHz by dividing VCLK = 90 by (8+1)* = 100ns cycle time; assuming 180Mhz PLL and VCLK = PLL/2*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADCLOCKCR_bit->PS = (UC_ADC_SYSTEM_INPUT_FREQUENCY_MHZ/UC_ADC_astrModule[u8IndexModule].u8ConvFreqMhz)-1; //8;
    
    
    /*Partition the events buffer, size = 2*BNDA, 0 not recommended */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADBNDCR_bit->BNDA = UC_ADC_astrModule[u8IndexModule].eGroupEventsSize/2;
    /*Partition the group 1 buffer, size = 2*(BNDB-BNDA) */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADBNDCR_bit->BNDB = (UC_ADC_astrModule[u8IndexModule].eGroup1Size/2)+(UC_ADC_astrModule[u8IndexModule].eGroupEventsSize/2);
    /*Set the total size of the core; Group 2 size = Core size - Group1 - Events*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADBNDEND_bit->BNDEND = UC_ADC_astrModule[u8IndexModule].eCoreSize;
    
    /*Configure ADC core  Group 1*/
    /* Do not ever freeze Group 1 */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->FRZ_G1 = 0;
    /* Always convert automatically */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->G1_MODE = 1;
    /* Read the result in 10 bits format */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->G1_8BIT = 0;
    /* Group 1 is triggered by software trigger */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->G1_HW_TRIG = 0;
    /* It is OK to overwrite the ADC data if not read */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->OVR_G1_RAM_IGN = 1;
    /*Enable Channel ID attachment in case we are using the FIFO*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->G1_CHID = 1;
    /*Not applicable in 10 bit format */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->G1_DATA_FMT = 0;
    
    /*Configure ADC core  Group 2*/
    /* Do not ever freeze Group 2 */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->FRZ_G2 = 0;
    /* Always convert automatically */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->G2_MODE = 1;
    /* Read the result in 10 bits format */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->G2_8BIT = 0;
    /* Group 1 is triggered by software trigger */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->G2_HW_TRIG = 0;
    /* It is OK to overwrite the ADC data if not read */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->OVR_G2_RAM_IGN = 1;
    /*Enable Channel ID attachment in case we are using the FIFO*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->G2_CHID = 1;
    /*Not applicable in 10 bit format */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2MODECR_bit->G2_DATA_FMT = 0;
    
    /*Reset the ADC RAM with conversions*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1MODECR_bit->NoResetOnChnSel = 0;
    
    /* Group 1*/
    /*No hardware trigger for Group 1*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1SRC = 0x00000000;  
    /*Set min smaling time, the ADC module design requires that SW >= 3 ADCLK cycles.*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1SAMP_bit->G1_ACQ = 1; /* 1+2 = 3 */  
    /*Enable Group1 sample cap discharge mode with 100 cycles discharging*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1SAMPDISEN_bit->G1_SAMP_DIS_CYC = 100;
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1SAMPDISEN_bit->G1_SAMP_DIS_EN = 1;
    
    /* Group 2*/
    /*No hardware trigger for Group 2*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2SRC = 0x00000000;  
    /*Set min smaling time, the ADC module design requires that SW >= 3 ADCLK cycles.*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2SAMP_bit->G2_ACQ = 1; /* 1+2 = 3 */  
    /*Enable Group2 sample cap discharge mode with 100 cycles discharging*/
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2SAMPDISEN_bit->G2_SAMP_DIS_CYC = 100;
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADG2SAMPDISEN_bit->G2_SAMP_DIS_EN = 1;
    
    /* Enable ADC Core  */
    UC_ADC_astrModule[u8IndexModule].pstrObj->pADOPMODECR_bit->ADC_EN = 1; 
    
    /*Wait untill ADC is initialized*/
    while(UC_ADC_astrModule[u8IndexModule].pstrObj->pADBNDEND_bit->BUF_INIT_ACTIVE != 0)
    {
      /*Wait*/
    }
    
    /* Prepare continuous conversion and create the channel decoder*/
    u32StartConvTrigger = 0x00000000;
    for(u8IndexSignal=(uint8_t)0; u8IndexSignal < UC_ADC_astrModule[u8IndexModule].u8SignalsNum; u8IndexSignal++)
    {
      u32StartConvTrigger |= 1<<UC_ADC_astrModule[u8IndexModule].astrSignals[u8IndexSignal].eChannelId;
      
      UC_ADC_astrChIdDecode[UC_ADC_astrModule[u8IndexModule].astrSignals[u8IndexSignal].eChannelId].u8SignalId = u8IndexSignal;
    }
    
    /*Start converting registered channels */
    *UC_ADC_astrModule[u8IndexModule].pstrObj->pADG1SEL = u32StartConvTrigger;
  }
}

void UC_ADC_vdMgr(void)
{
  uint8_t u8IndexModule;
  uint8_t u8IndexSignal;
  uint8_t u8IndexGroupElement;
  uint32_t u32BufferElement;
  uint8_t u8ChannelId;
  uint16_t u16Value;
  
  /*Loop on all cores */
  for(u8IndexModule = (uint8_t)0; u8IndexModule < (uint8_t)UC_ADC_CORE_NUM; u8IndexModule++)
  {
    for(u8IndexGroupElement = (uint8_t)0; u8IndexGroupElement < UC_ADC_astrModule[u8IndexModule].eGroup1Size; u8IndexGroupElement++)
    {
      /*Read Buffer*/
      u32BufferElement = UC_ADC_astrModule[u8IndexModule].pstrObj->pADBUFER_BASE[UC_ADC_astrModule[u8IndexModule].eGroupEventsSize+u8IndexGroupElement];
      /*Get Channel Id*/
      u8ChannelId = (uint8_t)((u32BufferElement >> 10) & (0x1F));
      /*Check if channel id is valid*/
      if(u8ChannelId < UC_ADC_CHANNELS_AVAILABLE)
      {
        /*Get the corresponding signal id*/
        u8IndexSignal = UC_ADC_astrChIdDecode[u8ChannelId].u8SignalId;
        /*Get the converted value*/
        u16Value = (uint16_t)(u32BufferElement & 0x3FF);
        /*Store the value*/
        UC_ADC_astrModule[u8IndexModule].astrSignals[u8IndexSignal].u16Value = u16Value;
      }
    }
  }
}


STATUS_t UC_ADC_eReadAnalogSignal(uint8_t u8IndexSignal, uint16_t* pu16Value)
{
  STATUS_t eStatus = STATUS_NOK;
  uint8_t u8CoreId;
  uint8_t u8SignalId;
  
  u8CoreId = (uint8_t)((u8IndexSignal>>8)&(0xFF));
  
  if(u8CoreId < UC_ADC_CORE_NUM)
  {
      u8SignalId = (uint8_t)(u8IndexSignal&0xFF);
      if(u8SignalId < UC_ADC_astrModule[u8CoreId].u8SignalsNum)
      {
        *pu16Value = UC_ADC_astrModule[u8CoreId].astrSignals[u8SignalId].u16Value;
        eStatus = STATUS_OK;
      }
  }
  
  return eStatus;
}

/********************************************************************************************/
/***************************** LOCAL FUNCTIONS IMPLEMENTATION *******************************/
/********************************************************************************************/


/********************************************************************************************/
/***************************** INTERRUPT SERVICE ROUTINES ***********************************/
/********************************************************************************************/


#endif /*UC_ADC_MODULE_ENABLE*/

