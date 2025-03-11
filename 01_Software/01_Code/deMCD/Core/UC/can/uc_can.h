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

File Name: uc_can.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_CAN_H
#define UC_CAN_H

#include "lib_types.h"
#include "uc_header.h"


#define UC_CAN_DATA_DEFAULT                  {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08}

//#define UC_CAN_DATA_DEFAULT                  {deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT,deMCD_DEFAULT}
#define UC_CAN_DATA_TEST {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08}
#define UC_CAN_OBJECTS_AVAILABLE             (3)

/*Pointer to function that points to CAN interrupts callbacks*/
typedef void (*UC_CAN_p2fMsgTriggerClbk_t)(void);

typedef struct UC_CAN_strObjTemplate
{
  volatile uint32_t*                      pDCANCTL;
  volatile __dcanctl_bits*                pDCANCTL_bit;           
  const volatile uint32_t*                pDCANES;
  const volatile __dcanes_bits*           pDCANES_bit;
  const volatile uint32_t*                pDCANERRC;
  const volatile __dcanerrc_bits*         pDCANERRC_bit; 
  volatile uint32_t*                      pDCANBTR;
  volatile __dcanbtr_bits*                pDCANBTR_bit;
  const volatile uint32_t*                pDCANINT;
  const volatile __dcanint_bits*          pDCANINT_bit;
  volatile uint32_t*                      pDCANTEST;
  volatile __dcantest_bits*               pDCANTEST_bit;
  const volatile uint32_t*                pDCANPERR;
  const volatile __dcanperr_bits*         pDCANPERR_bit;  
  volatile uint32_t*                      pDCANABOTR;     
  const volatile uint32_t*                pDCANTXRQX;
  const volatile __dcantxrqx_bits*        pDCANTXRQX_bit;
  const volatile uint32_t*                pDCANTXRQ12;
  const volatile __dcantxrq12_bits*       pDCANTXRQ12_bit; 
  const volatile uint32_t*                pDCANTXRQ34;
  const volatile __dcantxrq34_bits*       pDCANTXRQ34_bit;  
  const volatile uint32_t*                pDCANTXRQ56;
  const volatile __dcantxrq56_bits*       pDCANTXRQ56_bit;  
  const volatile uint32_t*                pDCANTXRQ78;
  const volatile __dcantxrq78_bits*       pDCANTXRQ78_bit; 
  const volatile uint32_t*                pDCANNWDATX;
  const volatile __dcannwdatx_bits*       pDCANNWDATX_bit; 
  const volatile uint32_t*                pDCANNWDAT12;
  const volatile __dcannwdat12_bits*      pDCANNWDAT12_bit;  
  const volatile uint32_t*                pDCANNWDAT34;
  const volatile __dcannwdat34_bits*      pDCANNWDAT34_bit; 
  const volatile uint32_t*                pDCANNWDAT56;
  const volatile __dcannwdat56_bits*      pDCANNWDAT56_bit;  
  const volatile uint32_t*                pDCANNWDAT78;
  const volatile __dcannwdat78_bits*      pDCANNWDAT78_bit; 
  const volatile uint32_t*                pDCANINTPNDX;
  const volatile __dcanintpndx_bits*      pDCANINTPNDX_bit;  
  const volatile uint32_t*                pDCANINTPND12;
  const volatile __dcanintpnd12_bits*     pDCANINTPND12_bit; 
  const volatile uint32_t*                pDCANINTPND34;
  const volatile __dcanintpnd34_bits*     pDCANINTPND34_bit; 
  const volatile uint32_t*                pDCANINTPND56;
  const volatile __dcanintpnd56_bits*     pDCANINTPND56_bit; 
  const volatile uint32_t*                pDCANINTPND78;
  const volatile __dcanintpnd78_bits*     pDCANINTPND78_bit; 
  const volatile uint32_t*                pDCANMSGVALX;
  const volatile __dcanmsgvalx_bits*      pDCANMSGVALX_bit; 
  const volatile uint32_t*                pDCANMSGVAL12;
  const volatile __dcanmsgval12_bits*     pDCANMSGVAL12_bit;  
  const volatile uint32_t*                pDCANMSGVAL34;
  const volatile __dcanmsgval34_bits*     pDCANMSGVAL34_bit; 
  const volatile uint32_t*                pDCANMSGVAL56;
  const volatile __dcanmsgval56_bits*     pDCANMSGVAL56_bit; 
  const volatile uint32_t*                pDCANMSGVAL78;
  const volatile __dcanmsgval78_bits*     pDCANMSGVAL78_bit;  
  volatile uint32_t*                      pDCANINTMUX12;
  volatile __dcanintmux12_bits*           pDCANINTMUX12_bit;  
  volatile uint32_t*                      pDCANINTMUX34;
  volatile __dcanintmux34_bits*           pDCANINTMUX34_bit;  
  volatile uint32_t*                      pDCANINTMUX56;
  volatile __dcanintmux56_bits*           pDCANINTMUX56_bit; 
  volatile uint32_t*                      pDCANINTMUX78;
  volatile __dcanintmux78_bits*           pDCANINTMUX78_bit;  
  volatile uint32_t*                      pDCANIF1CMD;
  volatile __dcanifcmd_bits*              pDCANIF1CMD_bit;  
  volatile uint32_t*                      pDCANIF1MSK;
  volatile __dcanifmsk_bits*              pDCANIF1MSK_bit;  
  volatile uint32_t*                      pDCANIF1ARB;
  volatile __dcanifarb_bits*              pDCANIF1ARB_bit;  
  volatile uint32_t*                      pDCANIF1MCTL;
  volatile __dcanifmctl_bits*             pDCANIF1MCTL_bit;  
  volatile uint32_t*                      pDCANIF1DATA;
  volatile __dcanifdata_bits*             pDCANIF1DATA_bit; 
  volatile uint32_t*                      pDCANIF1DATB;
  volatile __dcanifdatb_bits*             pDCANIF1DATB_bit; 
  volatile uint32_t*                      pDCANIF2CMD;
  volatile __dcanifcmd_bits*              pDCANIF2CMD_bit;  
  volatile uint32_t*                      pDCANIF2MSK;
  volatile __dcanifmsk_bits*              pDCANIF2MSK_bit;  
  volatile uint32_t*                      pDCANIF2ARB;
  volatile __dcanifarb_bits*              pDCANIF2ARB_bit;  
  volatile uint32_t*                      pDCANIF2MCTL;
  volatile __dcanifmctl_bits*             pDCANIF2MCTL_bit; 
  volatile uint32_t*                      pDCANIF2DATA;
  volatile __dcanifdata_bits*             pDCANIF2DATA_bit;  
  volatile uint32_t*                      pDCANIF2DATB;
  volatile __dcanifdatb_bits*             pDCANIF2DATB_bit;  
  volatile uint32_t*                      pDCANIF3OBS;
  volatile __dcanif3obs_bits*             pDCANIF3OBS_bit;   
  const volatile uint32_t*                pDCANIF3MSK;
  const volatile __dcanifmsk_bits*        pDCANIF3MSK_bit;   
  const volatile uint32_t*                pDCANIF3ARB;
  const volatile __dcanifarb_bits*        pDCANIF3ARB_bit;   
  const volatile uint32_t*                pDCANIF3MCTL;
  const volatile __dcanifmctl_bits*       pDCANIF3MCTL_bit;   
  const volatile uint32_t*                pDCANIF3DATA;
  const volatile __dcanifdata_bits*       pDCANIF3DATA_bit;  
  const volatile uint32_t*                pDCANIF3DATB;
  const volatile __dcanifdatb_bits*       pDCANIF3DATB_bit;  
  volatile uint32_t*                      pDCANIF3UPD12;
  volatile __dcanif3upd12_bits*           pDCANIF3UPD12_bit;  
  volatile uint32_t*                      pDCANIF3UPD34;
  volatile __dcanif3upd34_bits*           pDCANIF3UPD34_bit;   
  volatile uint32_t*                      pDCANIF3UPD56;
  volatile __dcanif3upd56_bits*           pDCANIF3UPD56_bit;   
  volatile uint32_t*                      pDCANIF3UPD78;
  volatile __dcanif3upd78_bits*           pDCANIF3UPD78_bit;   
  volatile uint32_t*                      pDCANTIOC;
  volatile __dcantioc_bits*               pDCANTIOC_bit;    
  volatile uint32_t*                      pDCANRIOC;
  volatile __dcantioc_bits*               pDCANRIOC_bit;  
  volatile uint32_t*                      pDCANRAM_BASE;
} UC_CAN_strObj_t;

typedef enum UC_CAN_eModuleIdTemplate
{
   UC_CAN_MODULE_1 = 0,
	 UC_CAN_MODULE_2 = 1,
	 UC_CAN_MODULE_3 = 2,
} UC_CAN_eModuleId_t;

typedef enum UC_CAN_eModuleEnableTemplate
{
   UC_CAN_MODULE_DISABLED = 0,
	 UC_CAN_MODULE_ENABLED = 1,
} UC_CAN_eModuleEnable_t;

typedef enum UC_CAN_eModuleStatusTemplate
{
   UC_CAN_MODULE_NOT_INITIALIZED = 0,
	 UC_CAN_MODULE_INITIALIZED = 1,
} UC_CAN_eModuleStatus_t;

typedef enum UC_CAN_eMsgObjTemplate
{
   UC_CAN_MSG_OBJ_1  = 1,
	 UC_CAN_MSG_OBJ_2  = 2,
	 UC_CAN_MSG_OBJ_3  = 3,
   UC_CAN_MSG_OBJ_4  = 4,
	 UC_CAN_MSG_OBJ_5  = 5,
	 UC_CAN_MSG_OBJ_6  = 6,
   UC_CAN_MSG_OBJ_7  = 7,
	 UC_CAN_MSG_OBJ_8  = 8,
	 UC_CAN_MSG_OBJ_9  = 9,
   UC_CAN_MSG_OBJ_10 = 10,
   UC_CAN_MSG_OBJ_11 = 11,
	 UC_CAN_MSG_OBJ_12 = 12,
	 UC_CAN_MSG_OBJ_13 = 13,
   UC_CAN_MSG_OBJ_14 = 14,
	 UC_CAN_MSG_OBJ_15 = 15,
	 UC_CAN_MSG_OBJ_16 = 16,
   UC_CAN_MSG_OBJ_17 = 17,
	 UC_CAN_MSG_OBJ_18 = 18,
	 UC_CAN_MSG_OBJ_19 = 19,
   UC_CAN_MSG_OBJ_20 = 20,
   UC_CAN_MSG_OBJ_21 = 21,
	 UC_CAN_MSG_OBJ_22 = 22,
	 UC_CAN_MSG_OBJ_23 = 23,
   UC_CAN_MSG_OBJ_24 = 24,
	 UC_CAN_MSG_OBJ_25 = 25,
	 UC_CAN_MSG_OBJ_26 = 26,
   UC_CAN_MSG_OBJ_27 = 27,
	 UC_CAN_MSG_OBJ_28 = 28,
	 UC_CAN_MSG_OBJ_29 = 29,
   UC_CAN_MSG_OBJ_30 = 30,
   UC_CAN_MSG_OBJ_31 = 31,
	 UC_CAN_MSG_OBJ_32 = 32,
	 UC_CAN_MSG_OBJ_33 = 33,
   UC_CAN_MSG_OBJ_34 = 34,
	 UC_CAN_MSG_OBJ_35 = 35,
	 UC_CAN_MSG_OBJ_36 = 36,
   UC_CAN_MSG_OBJ_37 = 37,
	 UC_CAN_MSG_OBJ_38 = 38,
	 UC_CAN_MSG_OBJ_39 = 39,
   UC_CAN_MSG_OBJ_40 = 40,
   UC_CAN_MSG_OBJ_41 = 41,
	 UC_CAN_MSG_OBJ_42 = 42,
	 UC_CAN_MSG_OBJ_43 = 43,
   UC_CAN_MSG_OBJ_44 = 44,
	 UC_CAN_MSG_OBJ_45 = 45,
	 UC_CAN_MSG_OBJ_46 = 46,
   UC_CAN_MSG_OBJ_47 = 47,
	 UC_CAN_MSG_OBJ_48 = 48,
	 UC_CAN_MSG_OBJ_49 = 49,
   UC_CAN_MSG_OBJ_50 = 50,
   UC_CAN_MSG_OBJ_51 = 51,
	 UC_CAN_MSG_OBJ_52 = 52,
	 UC_CAN_MSG_OBJ_53 = 53,
   UC_CAN_MSG_OBJ_54 = 54,
	 UC_CAN_MSG_OBJ_55 = 55,
	 UC_CAN_MSG_OBJ_56 = 56,
   UC_CAN_MSG_OBJ_57 = 57,
	 UC_CAN_MSG_OBJ_58 = 58,
	 UC_CAN_MSG_OBJ_59 = 59,
   UC_CAN_MSG_OBJ_60 = 60,
   UC_CAN_MSG_OBJ_61 = 61,
	 UC_CAN_MSG_OBJ_62 = 62,
	 UC_CAN_MSG_OBJ_63 = 63,
   UC_CAN_MSG_OBJ_64 = 64,
   // UC_CAN_MSG_OBJ_64 = 64,
   UC_CAN_MSG_OBJ_65= 65,
            UC_CAN_MSG_OBJ_66= 66,
            UC_CAN_MSG_OBJ_67= 67,
   UC_CAN_MSG_OBJ_68= 68,
   UC_CAN_MSG_OBJ_69= 69,
            UC_CAN_MSG_OBJ_70= 70,
            UC_CAN_MSG_OBJ_71= 71,
                UC_CAN_MSG_OBJ_72 = 72,
   UC_CAN_MSG_OBJ_73 = 73,
	 UC_CAN_MSG_OBJ_74 = 74,
	 UC_CAN_MSG_OBJ_75 = 75,
   UC_CAN_MSG_OBJ_76 = 76,
   UC_CAN_MSG_OBJ_77= 77,
            UC_CAN_MSG_OBJ_78= 78,
            UC_CAN_MSG_OBJ_79= 79,
   UC_CAN_MSG_OBJ_80= 80,
   UC_CAN_MSG_OBJ_81= 81,
            UC_CAN_MSG_OBJ_82= 82,
            UC_CAN_MSG_OBJ_83= 83,
   UC_CAN_MSG_OBJ_84  = 84,
	 UC_CAN_MSG_OBJ_85  = 85,
	 UC_CAN_MSG_OBJ_86  = 86,
   UC_CAN_MSG_OBJ_87  = 87,
	 UC_CAN_MSG_OBJ_88  = 88,
	 UC_CAN_MSG_OBJ_89  = 89,
   UC_CAN_MSG_OBJ_90 = 90,
   UC_CAN_MSG_OBJ_91 = 91,
	 UC_CAN_MSG_OBJ_92 = 92,
	 UC_CAN_MSG_OBJ_93 = 93,
   UC_CAN_MSG_OBJ_94 = 94,
	 UC_CAN_MSG_OBJ_95 = 95,
	 UC_CAN_MSG_OBJ_96 = 96,
   UC_CAN_MSG_OBJ_97 = 97,
	 UC_CAN_MSG_OBJ_98 = 98,
	 UC_CAN_MSG_OBJ_99 = 99,
   UC_CAN_MSG_OBJ_100 = 100,
    UC_CAN_MSG_OBJ_101  = 101,
	 UC_CAN_MSG_OBJ_102  = 102,
	 UC_CAN_MSG_OBJ_103  = 103,
   UC_CAN_MSG_OBJ_104  = 104,
	 UC_CAN_MSG_OBJ_105  = 105,
	 UC_CAN_MSG_OBJ_106  = 106,
   UC_CAN_MSG_OBJ_107  = 107,
	 UC_CAN_MSG_OBJ_108  = 108,
	 UC_CAN_MSG_OBJ_109  = 109,
   UC_CAN_MSG_OBJ_110 = 110,
   UC_CAN_MSG_OBJ_111 = 111,
	 UC_CAN_MSG_OBJ_112 = 112,
	 UC_CAN_MSG_OBJ_113 = 113,
   UC_CAN_MSG_OBJ_114 = 114,
	 UC_CAN_MSG_OBJ_115 = 115,
	 UC_CAN_MSG_OBJ_116 = 116,
   UC_CAN_MSG_OBJ_117 = 117,
	 UC_CAN_MSG_OBJ_118 = 118,
	 UC_CAN_MSG_OBJ_119 = 119,
   UC_CAN_MSG_OBJ_120 = 120,
   UC_CAN_MSG_OBJ_121 = 121,
	 UC_CAN_MSG_OBJ_122 = 122,
	 UC_CAN_MSG_OBJ_123 = 123,
   UC_CAN_MSG_OBJ_124 = 124,
	 UC_CAN_MSG_OBJ_125 = 125,
	 UC_CAN_MSG_OBJ_126 = 126,
   UC_CAN_MSG_OBJ_127 = 127,
	 UC_CAN_MSG_OBJ_128 = 128,
	 UC_CAN_MSG_OBJ_129 = 129,
   UC_CAN_MSG_OBJ_130 = 130
} UC_CAN_eMsgObjId_t;

typedef enum UC_CAN_eMsgDirTemplate
{
   UC_CAN_MSG_DIR_TX = 0,
	 UC_CAN_MSG_DIR_RX = 1,
} UC_CAN_eMsgDir_t;

typedef enum UC_CAN_eMsgTriggerTemplate
{
   UC_CAN_MSG_TRIG_PERIODIC       = 0x01,
	 UC_CAN_MSG_TRIG_EVENT          = 0x02,
   UC_CAN_MSG_TRIG_EVENT_PERIODIC = 0x03,
} UC_CAN_eMsgTrigger_t;

typedef enum UC_CAN_eMsgValidTemplate
{
   UC_CAN_MSG_INVALID = 0,
	 UC_CAN_MSG_VALID = 1,
} UC_CAN_eMsgValid_t;

typedef enum UC_CAN_eMsgEnableTemplate
{
   UC_CAN_MSG_DISABLED = 0,
	 UC_CAN_MSG_ENABLED = 1,
} UC_CAN_eMsgEnable_t;

typedef enum UC_CAN_eMsgIntLineTemplate
{
   UC_CAN_MSG_INT_LINE_0 = 0,
	 UC_CAN_MSG_INT_LINE_1 = 1,
} UC_CAN_eMsgIntLine_t;

/* CAN Message Template */
typedef struct UC_CAN_strMsgTemplate
{
  /* Message Index Id */
  uint8_t u8IndexMsg;
  /* Message Enable */
  UC_CAN_eMsgEnable_t eEnable;
  /* Message Object Box Buffer Id */
  UC_CAN_eMsgObjId_t eMsgObjBoxId;
  /* Message Frame Id */
  uint16_t u16MsgFrameId;
  /* Extended Message Frame Id */
  uint32_t u32ExtendedMsgFrameId;
  /*Message Frame DLC */
  uint8_t u8DLC;
  /* Message Direction */
  UC_CAN_eMsgDir_t eMsgDir;
  /* Message Trigger */
  UC_CAN_eMsgTrigger_t eMsgTrigger;
  /* Message Period in ms*/
  uint16_t u16PeriodMs;
  /* Message jitter in ms */
  uint16_t u16JitterMs;
  /* Message Data*/
  uint8_t au8Data[8];
  /* Message Trigger Interrupt Enable */
  uint8_t u8EnMsgTriggerInt;
  /* Message Trigger Interrupt Callback*/
  UC_CAN_p2fMsgTriggerClbk_t p2fClbk;
  /* Message timing counter */
  uint16_t u16Counter;
  /*Message Validity*/
  UC_CAN_eMsgValid_t eMsgValid;
} UC_CAN_strMsg_t;

/* CAN Module Template */
typedef struct UC_CAN_strModuleTemplate
{
  /* CAN Module Array Index */
  uint8_t u8IndexModule;
  /* CAN Node Object */
  UC_CAN_strObj_t* pstrObj;
  /* Hardware Module Id */
  UC_CAN_eModuleId_t eModuleId;
  /* CAN Module Enable */
  UC_CAN_eModuleEnable_t eEnable;
  /*CAN Module Network ID*/
  uint16_t u16NetworkId;
  /* Baud Rate kbps*/
  uint16_t u16BaudRateKbps;
  /* Global Tx Interrupt Enable*/
  uint8_t u8EnGlobalTxInt;
  /* Global Rx Interrupt Enable*/
  uint8_t u8EnGlobalRxInt;
  /* Number of Transmitted Messages */
  uint8_t u8NumTx;
  /* Array of Tx Message Objects*/
  UC_CAN_strMsg_t* astrMsgTx;
  /* Number of Received Messages */
  uint8_t u8NumRx;
  /* Array of Tx Message Objects*/
  UC_CAN_strMsg_t* astrMsgRx;
  /* Module Status */
  UC_CAN_eModuleStatus_t eModuleStatus;
} UC_CAN_strModule_t;


typedef struct UC_CAN_strObj2Template
{
  volatile __dcanctl_bits*          DCANCTL_bit; 
  volatile uint32_t*               DCANABOTR;         
} UC_CAN_strObj2_t;

extern UC_CAN_strObj_t UC_CAN_astrObj[UC_CAN_OBJECTS_AVAILABLE];

void UC_CAN_vdInit(void);
void UC_CAN_vdMgr(void);
STATUS_t UC_CAN_eRegisterCallbackForMsgEvent(uint8_t u8IndexModule, UC_CAN_eMsgDir_t eMsgDir, uint8_t u8IndexMsg, UC_CAN_p2fMsgTriggerClbk_t p2fClbk);
STATUS_t UC_CAN_eWriteCanFrameAsync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t au8Data[]);
STATUS_t UC_CAN_eReadCanFrameAsync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t* pu8Data);
STATUS_t UC_CAN_eWriteCanFrameSync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t au8Data[]);
STATUS_t UC_CAN_eReadCanFrameSync(uint8_t u8IndexModule, uint8_t u8IndexMsg, uint8_t* pu8Data);
STATUS_t UC_CAN_eGetFrameIndex(uint8_t u8IndexModule, uint32_t u32MsgFrameId, uint8_t* pu8IndexMsg);
STATUS_t UC_CAN_eGetMsgDLC(uint8_t u8IndexModule, uint8_t u8IndexMsg, UC_CAN_eMsgDir_t eMsgDir, uint8_t* pu8DLC);
STATUS_t UC_CAN_eEnableFrame(uint8_t u8IndexModule, uint8_t u8IndexMsg, UC_CAN_eMsgDir_t eMsgDir, UC_CAN_eMsgEnable_t eMsgEnable);

#endif /*UC_CAN_H*/