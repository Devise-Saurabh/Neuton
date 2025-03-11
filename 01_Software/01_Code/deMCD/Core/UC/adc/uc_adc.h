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

File Name: uc_adc.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_ADC_H
#define UC_ADC_H

#include "lib_types.h"
#include "uc_header.h"

#define UC_ADC_OBJECTS_AVAILABLE               (2)  
#define UC_ADC_CHANNELS_AVAILABLE              (24)      

typedef struct UC_ADC_strObjTemplate
{
	volatile uint32_t*                          pADRSTCR;          
	volatile __adrstcr_bits*                    pADRSTCR_bit;          
	volatile uint32_t*                          pADOPMODECR;       
	volatile __adopmodecr_bits*                 pADOPMODECR_bit;       
	volatile uint32_t*                          pADCLOCKCR;        
	volatile __adclockcr_bits*                  pADCLOCKCR_bit;        
	volatile uint32_t*                          pADCALCR;          
	volatile __adcalcr_bits*                    pADCALCR_bit;          
	volatile uint32_t*                          pADEVMODECR;       
	volatile __adevmodecr_bits*                 pADEVMODECR_bit;       
	volatile uint32_t*                          pADG1MODECR;       
	volatile __adg1modecr_bits*                 pADG1MODECR_bit;       
	volatile uint32_t*                          pADG2MODECR;       
	volatile __adg2modecr_bits*                 pADG2MODECR_bit;       
	volatile uint32_t*                          pADEVSRC;          
	volatile __adevsrc_bits*                    pADEVSRC_bit;          
	volatile uint32_t*                          pADG1SRC;          
	volatile __adg1src_bits*                    pADG1SRC_bit;          
	volatile uint32_t*                          pADG2SRC;          
	volatile __adg2src_bits*                    pADG2SRC_bit;          
	volatile uint32_t*                          pADEVINTENA;       
	volatile __adevintena_bits*                 pADEVINTENA_bit;       
	volatile uint32_t*                          pADG1INTENA;       
	volatile __adg1intena_bits*                 pADG1INTENA_bit;       
	volatile uint32_t*                          pADG2INTENA;       
	volatile __adg2intena_bits*                 pADG2INTENA_bit;       
	const volatile uint32_t*                    pADEVINTFLG;       
	const volatile __adevintflg_bits*           pADEVINTFLG_bit;       
	const volatile uint32_t*                    pADG1INTFLG;       
	const volatile __adg1intflg_bits*           pADG1INTFLG_bit;       
	const volatile uint32_t*                    pADG2INTFLG;       
	const volatile __adg2intflg_bits*           pADG2INTFLG_bit;       
	volatile uint32_t*                          pADEVTHRINTCR;     
	volatile __adevthrintcr_bits*               pADEVTHRINTCR_bit;     
	volatile uint32_t*                          pADG1THRINTCR;     
	volatile __adg1thrintcr_bits*               pADG1THRINTCR_bit;     
	volatile uint32_t*                          pADG2THRINTCR;     
	volatile __adg2thrintcr_bits*               pADG2THRINTCR_bit;     
	volatile uint32_t*                          pADEVDMACR;        
	volatile __adevdmacr_bits*                  pADEVDMACR_bit;        
	volatile uint32_t*                          pADG1DMACR;        
	volatile __adg1dmacr_bits*                  pADG1DMACR_bit;        
	volatile uint32_t*                          pADG2DMACR;        
	volatile __adg2dmacr_bits*                  pADG2DMACR_bit;        
	volatile uint32_t*                          pADBNDCR;          
	volatile __adbndcr_bits*                    pADBNDCR_bit;          
	volatile uint32_t*                          pADBNDEND;         
	volatile __adbndend_bits*                   pADBNDEND_bit;         
	volatile uint32_t*                          pADEVSAMP;         
	volatile __adevsamp_bits*                   pADEVSAMP_bit;         
	volatile uint32_t*                          pADG1SAMP;         
	volatile __adg1samp_bits*                   pADG1SAMP_bit;         
	volatile uint32_t*                          pADG2SAMP;         
	volatile __adg2samp_bits*                   pADG2SAMP_bit;         
	const volatile uint32_t*                    pADEVSR;           
	const volatile __adevsr_bits*               pADEVSR_bit;           
	const volatile uint32_t*                    pADG1SR;           
	const volatile __adg1sr_bits*               pADG1SR_bit;           
	const volatile uint32_t*                    pADG2SR;           
	const volatile __adg2sr_bits*               pADG2SR_bit;           
	volatile uint32_t*                          pADEVSEL;          
	volatile __adevsel_bits*                    pADEVSEL_bit;          
	volatile uint32_t*                          pADG1SEL;          
	volatile __adg1sel_bits*                    pADG1SEL_bit;          
	volatile uint32_t*                          pADG2SEL;          
	volatile __adg2sel_bits*                    pADG2SEL_bit;          
	volatile uint32_t*                          pADCALR;           
	volatile __adcalr_bits*                     pADCALR_bit;           
	const volatile uint32_t*                    pADSMSTATE;        
	const volatile __adsmstate_bits*            pADSMSTATE_bit;        
	const volatile uint32_t*                    pADLASTCONV;       
	const volatile __adlastconv_bits*           pADLASTCONV_bit;       
	volatile uint32_t*                          pADEVBUFFER0;      
	volatile __adevbuffer_bits*                 pADEVBUFFER0_bit;      
	volatile uint32_t*                          pADEVBUFFER1;      
	volatile __adevbuffer_bits*                 pADEVBUFFER1_bit;      
	volatile uint32_t*                          pADEVBUFFER2;      
	volatile __adevbuffer_bits*                 pADEVBUFFER2_bit;      
	volatile uint32_t*                          pADEVBUFFER3;      
	volatile __adevbuffer_bits*                 pADEVBUFFER3_bit;      
	volatile uint32_t*                          pADEVBUFFER4;      
	volatile __adevbuffer_bits*                 pADEVBUFFER4_bit;      
	volatile uint32_t*                          pADEVBUFFER5;      
	volatile __adevbuffer_bits*                 pADEVBUFFER5_bit;      
	volatile uint32_t*                          pADEVBUFFER6;      
	volatile __adevbuffer_bits*                 pADEVBUFFER6_bit;      
	volatile uint32_t*                          pADEVBUFFER7;      
	volatile __adevbuffer_bits*                 pADEVBUFFER7_bit;      
	volatile uint32_t*                          pADG1BUFFER0;      
	volatile __adg1buffer_bits*                 pADG1BUFFER0_bit;      
	volatile uint32_t*                          pADG1BUFFER1;      
	volatile __adg1buffer_bits*                 pADG1BUFFER1_bit;      
	volatile uint32_t*                          pADG1BUFFER2;      
	volatile __adg1buffer_bits*                 pADG1BUFFER2_bit;      
	volatile uint32_t*                          pADG1BUFFER3;      
	volatile __adg1buffer_bits*                 pADG1BUFFER3_bit;      
	volatile uint32_t*                          pADG1BUFFER4;      
	volatile __adg1buffer_bits*                 pADG1BUFFER4_bit;      
	volatile uint32_t*                          pADG1BUFFER5;      
	volatile __adg1buffer_bits*                 pADG1BUFFER5_bit;      
	volatile uint32_t*                          pADG1BUFFER6;      
	volatile __adg1buffer_bits*                 pADG1BUFFER6_bit;      
	volatile uint32_t*                          pADG1BUFFER7;      
	volatile __adg1buffer_bits*                 pADG1BUFFER7_bit;      
	volatile uint32_t*                          pADG2BUFFER0;      
	volatile __adg2buffer_bits*                 pADG2BUFFER0_bit;      
	volatile uint32_t*                          pADG2BUFFER1;      
	volatile __adg2buffer_bits*                 pADG2BUFFER1_bit;      
	volatile uint32_t*                          pADG2BUFFER2;      
	volatile __adg2buffer_bits*                 pADG2BUFFER2_bit;      
	volatile uint32_t*                          pADG2BUFFER3;      
	volatile __adg2buffer_bits*                 pADG2BUFFER3_bit;      
	volatile uint32_t*                          pADG2BUFFER4;      
	volatile __adg2buffer_bits*                 pADG2BUFFER4_bit;      
	volatile uint32_t*                          pADG2BUFFER5;      
	volatile __adg2buffer_bits*                 pADG2BUFFER5_bit;      
	volatile uint32_t*                          pADG2BUFFER6;      
	volatile __adg2buffer_bits*                 pADG2BUFFER6_bit;      
	volatile uint32_t*                          pADG2BUFFER7;      
	volatile __adg2buffer_bits*                 pADG2BUFFER7_bit;      
	volatile uint32_t*                          pADEVEMUBUFFER;    
	volatile __adevbuffer_bits*                 pADEVEMUBUFFER_bit;    
	volatile uint32_t*                          pADG1EMUBUFFER;    
	volatile __adg1buffer_bits*                 pADG1EMUBUFFER_bit;    
	volatile uint32_t*                          pADG2EMUBUFFER;    
	volatile __adg2buffer_bits*                 pADG2EMUBUFFER_bit;    
	volatile uint32_t*                          pADEVTDIR;         
	volatile __adevtdir_bits*                   pADEVTDIR_bit;         
	volatile uint32_t*                          pADEVTOUT;         
	volatile __adevtout_bits*                   pADEVTOUT_bit;         
	const volatile uint32_t*                    pADEVTIN;          
	const volatile __adevtin_bits*              pADEVTIN_bit;          
	volatile uint32_t*                          pADEVTSET;         
	volatile __adevtset_bits*                   pADEVTSET_bit;         
	volatile uint32_t*                          pADEVTCLR;         
	volatile __adevtclr_bits*                   pADEVTCLR_bit;         
	volatile uint32_t*                          pADEVTPDR;         
	volatile __adevtpdr_bits*                   pADEVTPDR_bit;         
	volatile uint32_t*                          pADEVTPDIS;        
	volatile __adevtpdis_bits*                  pADEVTPDIS_bit;        
	volatile uint32_t*                          pADEVTPSEL;        
	volatile __adevtpsel_bits*                  pADEVTPSEL_bit;        
	volatile uint32_t*                          pADEVSAMPDISEN;    
	volatile __adevsampdisen_bits*              pADEVSAMPDISEN_bit;    
	volatile uint32_t*                          pADG1SAMPDISEN;    
	volatile __adg1sampdisen_bits*              pADG1SAMPDISEN_bit;    
	volatile uint32_t*                          pADG2SAMPDISEN;    
	volatile __adg2sampdisen_bits*              pADG2SAMPDISEN_bit;    
	volatile uint32_t*                          pADMAGINT1CR;      
	volatile __admagintcr_bits*                 pADMAGINT1CR_bit;      
	volatile uint32_t*                          pADMAGINT1MASK;    
	volatile __admagintmask_bits*               pADMAGINT1MASK_bit;    
	volatile uint32_t*                          pADMAGINT2CR;      
	volatile __admagintcr_bits*                 pADMAGINT2CR_bit;      
	volatile uint32_t*                          pADMAGINT2MASK;    
	volatile __admagintmask_bits*               pADMAGINT2MASK_bit;    
	volatile uint32_t*                          pADMAGINT3CR;      
	volatile __admagintcr_bits*                 pADMAGINT3CR_bit;      
	volatile uint32_t*                          pADMAGINT3MASK;    
	volatile __admagintmask_bits*               pADMAGINT3MASK_bit;    
	volatile uint32_t*                          pADMAGINTENASET;   
	volatile __admagintenaset_bits*             pADMAGINTENASET_bit;   
	volatile uint32_t*                          pADMAGINTENACLR;   
	volatile __admagintenaclr_bits*             pADMAGINTENACLR_bit;   
	volatile uint32_t*                          pADMAGINTFLG;      
	volatile __admagintflg_bits*                pADMAGINTFLG_bit;      
	const volatile uint32_t*                    pADMAGINTOFF;      
	const volatile __admagintoff_bits*          pADMAGINTOFF_bit;      
	volatile uint32_t*                          pADEVFIFORESETCR;  
	volatile __adevfiforesetcr_bits*            pADEVFIFORESETCR_bit;  
	volatile uint32_t*                          pADG1FIFORESETCR;  
	volatile __adg1fiforesetcr_bits*            pADG1FIFORESETCR_bit;  
	volatile uint32_t*                          pADG2FIFORESETCR;  
	volatile __adg2fiforesetcr_bits*            pADG2FIFORESETCR_bit;  
	const volatile uint32_t*                    pADEVRAMWRADDR;    
	const volatile __adevramwraddr_bits*        pADEVRAMWRADDR_bit;    
	const volatile uint32_t*                    pADG1RAMWRADDR;    
	const volatile __adg1ramwraddr_bits*        pADG1RAMWRADDR_bit;    
	const volatile uint32_t*                    pADG2RAMWRADDR;    
	const volatile __adg2ramwraddr_bits*        pADG2RAMWRADDR_bit;    
	volatile uint32_t*                          pADPARCR;          
	volatile __adparcr_bits*                    pADPARCR_bit;          
	const volatile uint32_t*                    pADPARADDR;        
	const volatile __adparaddr_bits*            pADPARADDR_bit;        
	volatile uint32_t*                          pADPWRUPDLYCTRL;
	volatile __adpwrupdlyctrl_bits*             pADPWRUPDLYCTRL_bit;
	volatile uint32_t*                          pADBUFER_BASE;
} UC_ADC_strObj_t;

typedef enum UC_ADC_eModuleIdTemplate
{
   UC_ADC_OBJECT_1 = 0,
	 UC_ADC_OBJECT_2 = 1,
} UC_ADC_eObjectId_t;

typedef enum UC_ADC_eChannelIdTemplate
{
   UC_ADC_CHANNEL_0 = 0,
	 UC_ADC_CHANNEL_1 = 1,
   UC_ADC_CHANNEL_2 = 2,
	 UC_ADC_CHANNEL_3 = 3,
   UC_ADC_CHANNEL_4 = 4,
	 UC_ADC_CHANNEL_5 = 5,
   UC_ADC_CHANNEL_6 = 6,
	 UC_ADC_CHANNEL_7 = 7,
   UC_ADC_CHANNEL_8 = 8,
	 UC_ADC_CHANNEL_9 = 9,
   UC_ADC_CHANNEL_10 = 10,
	 UC_ADC_CHANNEL_11 = 11,
   UC_ADC_CHANNEL_12 = 12,
	 UC_ADC_CHANNEL_13 = 13,
   UC_ADC_CHANNEL_14 = 14,
	 UC_ADC_CHANNEL_15 = 15,
   UC_ADC_CHANNEL_16 = 16,
	 UC_ADC_CHANNEL_17 = 17,
   UC_ADC_CHANNEL_18 = 18,
	 UC_ADC_CHANNEL_19 = 19,
   UC_ADC_CHANNEL_20 = 20,
	 UC_ADC_CHANNEL_21 = 21,
   UC_ADC_CHANNEL_22 = 22,
	 UC_ADC_CHANNEL_23 = 23,
   UC_ADC_CHANNEL_NOT_USED = 255,
} UC_ADC_eChannelId_t;


typedef enum UC_ADC_eCoreSizeTemplate
{
   UC_ADC_CORE_SIZE_16 = 0,
   UC_ADC_CORE_SIZE_32 = 1,
	 UC_ADC_CORE_SIZE_64 = 2,
} UC_ADC_eCoreSize_t;

typedef enum UC_ADC_eGroupSizeTemplate
{
   UC_ADC_GROUP_SIZE_0 = 0,
   UC_ADC_GROUP_SIZE_2 = 2,
	 UC_ADC_GROUP_SIZE_4 = 4,
	 UC_ADC_GROUP_SIZE_6 = 6,
	 UC_ADC_GROUP_SIZE_8 = 8,
	 UC_ADC_GROUP_SIZE_10 = 10,
	 UC_ADC_GROUP_SIZE_12 = 12,
	 UC_ADC_GROUP_SIZE_14 = 14,
	 UC_ADC_GROUP_SIZE_16 = 16,
	 UC_ADC_GROUP_SIZE_18 = 18,
   UC_ADC_GROUP_SIZE_20 = 20,
	 UC_ADC_GROUP_SIZE_22 = 22,
	 UC_ADC_GROUP_SIZE_24 = 24,
	 UC_ADC_GROUP_SIZE_26 = 26,
	 UC_ADC_GROUP_SIZE_28 = 28,
	 UC_ADC_GROUP_SIZE_30 = 30,
	 UC_ADC_GROUP_SIZE_32 = 32,
} UC_ADC_eGroupSize_t;

typedef struct UC_ADC_strChIdDecodeTemplate
{
  /*Channel Index*/
  UC_ADC_eChannelId_t eChannelId;
  /*Signal ID*/
  uint8_t u8SignalId;
} UC_ADC_strChIdDecode_t;

typedef struct UC_ADC_strChannelTemplate
{
  /*Channel Index*/
  uint8_t u8IndexChannel;
  /*Channel ID*/
  UC_ADC_eChannelId_t eChannelId;
  /*Value*/
  uint16_t u16Value;
} UC_ADC_strChannel_t;


typedef struct UC_ADC_strModuleTemplate
{
  /*Module Id*/
  uint8_t u8IndexModule;
  /*Module Id*/
  UC_ADC_eObjectId_t eObjectId;
  /*Pointer to the module object*/
  UC_ADC_strObj_t* pstrObj;
  /*Conversion frequency in Mhz*/
  uint8_t u8ConvFreqMhz;
  /*Core size */
  UC_ADC_eCoreSize_t eCoreSize;
  /*Size of Events*/
  UC_ADC_eGroupSize_t eGroupEventsSize;
  /*Size of Group 1*/
  UC_ADC_eGroupSize_t eGroup1Size;
  /*Number of Analog Signals*/
  uint8_t u8SignalsNum;
  /*Channels Values*/
  UC_ADC_strChannel_t* astrSignals;
} UC_ADC_strModule_t;


/*Test Variables*/
extern uint32_t g_u32_TestBufferCH0;
extern uint32_t g_u32_TestBufferCH2;
extern UC_ADC_strObj_t UC_ADC_astrObj[UC_ADC_OBJECTS_AVAILABLE];

void UC_ADC_vdInit(void);
void UC_ADC_vdMgr(void);
STATUS_t UC_ADC_eReadAnalogSignal(uint8_t u8IndexSignal, uint16_t* pu16Value);

#endif /*UC_ADC_H*/
