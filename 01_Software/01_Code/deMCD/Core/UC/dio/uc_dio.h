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


File Name: uc_dio.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#ifndef UC_DIO_H
#define UC_DIO_H

#include "lib_types.h"
#include "uc_header.h"

#define UC_DIO_OBJECTS_AVAILABLE               (8)  
#define UC_DIO_SERIES_INTERRUPT_INPUTS_ID_MAX  (32)
#define UC_DIO_NOT_USED                        (255)

 /*Pointer to function that points to Input interrupts callbacks*/
typedef void (*UC_DIO_p2fInputEventClbk_t)(void);

typedef struct UC_DIO_strObjTemplate
{     
  volatile uint32_t*                           pGIODIR;
	volatile __giodir_bits*                      pGIODIR_bit;             
	const volatile uint32_t*                     pGIODIN;
	const volatile __giodin_bits*                pGIODIN_bit;       
	volatile uint32_t*                           pGIODOUT;
	volatile __giodout_bits*                     pGIODOUT_bit;           
	volatile uint32_t*                           pGIOSET;
	volatile __gioset_bits*                      pGIOSET_bit;             
	volatile uint32_t*                           pGIOCLR;
	volatile __gioclr_bits*                      pGIOCLR_bit;             
	volatile uint32_t*                           pGIOPDR;
	volatile __giopdr_bits*                      pGIOPDR_bit;             
	volatile uint32_t*                           pGIOPULDIS;
	volatile __giopuldis_bits*                   pGIOPULDIS_bit;       
	volatile uint32_t*                           pGIOPSL;
	volatile __giopsl_bits*                      pGIOPSL_bit;
} UC_DIO_strObj_t;


typedef enum UC_DIO_eModuleIdTemplate
{
   UC_DIO_MODULE_GIOA = 0,
	 UC_DIO_MODULE_GIOB = 1,
	 UC_DIO_MODULE_NHET1 = 2,
	 UC_DIO_MODULE_NHET2 = 3, 
	 UC_DIO_MODULE_MIBSPI1 = 4, 
	 UC_DIO_MODULE_MIBSPI3 = 5, 
	 UC_DIO_MODULE_MIBSPI5 = 6, 
         UC_DIO_MODULE_AD1EVT = 7,
} UC_DIO_eModuleId_t;

typedef enum UC_DIO_ePinIdTemplate
{
   UC_DIO_PIN_0 = 0,
   UC_DIO_PIN_1 = 1,
   UC_DIO_PIN_2 = 2,
   UC_DIO_PIN_3 = 3,
   UC_DIO_PIN_4 = 4,
   UC_DIO_PIN_5 = 5,
   UC_DIO_PIN_6 = 6,
   UC_DIO_PIN_7 = 7,
   UC_DIO_PIN_8 = 8,
   UC_DIO_PIN_9 = 9,
   UC_DIO_PIN_10 = 10,
   UC_DIO_PIN_11 = 11,
   UC_DIO_PIN_12 = 12,
   UC_DIO_PIN_13 = 13,
   UC_DIO_PIN_14 = 14,
   UC_DIO_PIN_15 = 15,
   UC_DIO_PIN_16 = 16,
   UC_DIO_PIN_17 = 17,
   UC_DIO_PIN_18 = 18,
   UC_DIO_PIN_19 = 19,
   UC_DIO_PIN_20 = 20,
   UC_DIO_PIN_21 = 21,
   UC_DIO_PIN_22 = 22,
   UC_DIO_PIN_23 = 23,
   UC_DIO_PIN_24 = 24,
   UC_DIO_PIN_25 = 25,
   UC_DIO_PIN_26 = 26,
   UC_DIO_PIN_27 = 27,
   UC_DIO_PIN_28 = 28,
   UC_DIO_PIN_29 = 29,
   UC_DIO_PIN_30 = 30,
   UC_DIO_PIN_31 = 31,
   UC_DIO_SPI_CS0 = 0,
   UC_DIO_SPI_CS1 = 1,
   UC_DIO_SPI_CS2 = 2,
   UC_DIO_SPI_CS3 = 3,
   UC_DIO_SPI_CS4 = 4,
   UC_DIO_SPI_CS5 = 5,
   UC_DIO_SPI_CS6 = 6,
   UC_DIO_SPI_CS7 = 7,
   UC_DIO_SPI_EN = 8,
   UC_DIO_SPI_CLK = 9,
   UC_DIO_SPI_SIMO = 10,
   UC_DIO_SPI_SOMI = 11,
} UC_DIO_ePinId_t;

typedef enum UC_DIO_ePinDirectionTemplate
{
   UC_DIO_DIR_INPUT = 0,
	 UC_DIO_DIR_OUTPUT = 1,   
} UC_DIO_ePinDirection_t;

typedef enum UC_DIO_ePullFcnEnableTemplate
{
   UC_DIO_PULL_FCN_ENABLE = 0,
	 UC_DIO_PULL_FCN_DISABLE = 1,   
} UC_DIO_ePullFcnEnable_t;

typedef enum UC_DIO_ePinModeTemplate
{
   UC_DIO_PUSH_PULL_MODE = 0,
	 UC_DIO_OPEN_DRAIN_MODE = 1,   
} UC_DIO_ePinMode_t;

typedef enum UC_DIO_ePullModeTemplate
{
   UC_DIO_PULL_DOWN_MODE = 0,
	 UC_DIO_PULL_UP_MODE = 1,   
} UC_DIO_ePullMode_t;

typedef enum UC_DIO_eInterruptTriggerTemplate
{
   UC_DIO_INPUT_NEG_EDGE = 0,
   UC_DIO_INPUT_POS_EDGE = 1,
   UC_DIO_INPUT_POS_NEG_EDGE = 3,
   UC_DIO_INPUT_TRIGGER_NA = 255,
} UC_DIO_eInterruptTrigger_t;

typedef enum UC_DIO_eOutputCommandTemplate
{
   UC_DIO_OUT_COMMAND_OFF = 0,
   UC_DIO_OUT_COMMAND_ON = 1,
   UC_DIO_OUT_COMMAND_TOGGLE = 2,
} UC_DIO_eOutputCommand_t;

typedef enum UC_DIO_eInteruptInputPinIdTemplate
{
   UC_DIO_INT_INPUT_NA = 0,
   UC_DIO_INT_INPUT_GIOA0 = 1,
   UC_DIO_INT_INPUT_GIOA1 = 2,
   UC_DIO_INT_INPUT_GIOA2 = 3,
   UC_DIO_INT_INPUT_GIOA3 = 4,
   UC_DIO_INT_INPUT_GIOA4 = 5,
   UC_DIO_INT_INPUT_GIOA5 = 6,
   UC_DIO_INT_INPUT_GIOA6 = 7,
   UC_DIO_INT_INPUT_GIOA7 = 8,
   UC_DIO_INT_INPUT_GIOB0 = 9,
   UC_DIO_INT_INPUT_GIOB1 = 10,
   UC_DIO_INT_INPUT_GIOB2 = 11,
   UC_DIO_INT_INPUT_GIOB3 = 12,
   UC_DIO_INT_INPUT_GIOB4 = 13,
   UC_DIO_INT_INPUT_GIOB5 = 14,
   UC_DIO_INT_INPUT_GIOB6 = 15,
   UC_DIO_INT_INPUT_GIOB7 = 16,
   UC_DIO_INT_INPUT_GIOC0 = 17,
   UC_DIO_INT_INPUT_GIOC1 = 18,
   UC_DIO_INT_INPUT_GIOC2 = 19,
   UC_DIO_INT_INPUT_GIOC3 = 20,
   UC_DIO_INT_INPUT_GIOC4 = 21,
   UC_DIO_INT_INPUT_GIOC5 = 22,
   UC_DIO_INT_INPUT_GIOC6 = 23,
   UC_DIO_INT_INPUT_GIOC7 = 24,
   UC_DIO_INT_INPUT_GIOD0 = 25,
   UC_DIO_INT_INPUT_GIOD1 = 26,
   UC_DIO_INT_INPUT_GIOD2 = 27,
   UC_DIO_INT_INPUT_GIOD3 = 28,
   UC_DIO_INT_INPUT_GIOD4 = 29,
   UC_DIO_INT_INPUT_GIOD5 = 30,
   UC_DIO_INT_INPUT_GIOD6 = 31,
   UC_DIO_INT_INPUT_GIOD7 = 32,
   UC_DIO_INT_INPUT_NOT_USED = 255,
} UC_DIO_eInteruptInputPinId_t;

typedef enum UC_DIO_eInteruptPriorityTemplate
{
   UC_DIO_INT_PRIORITY_LOW = 0,
   UC_DIO_INT_PRIORITY_HIGH = 1,
} UC_DIO_eInteruptPriority_t;


typedef struct UC_DIO_strIntInputIdDecodeTemplate
{
  /*Index*/
  UC_DIO_eInteruptInputPinId_t eIndex;
  /*DIO corresponding Id*/
  uint8_t u8IndexGpio;
} UC_DIO_strIntInputIdDecode_t;

typedef struct UC_DIO_strModuleTemplate
{
  /*DIO Id*/
  uint8_t u8IndexGpio;
  /*Module Id*/
  UC_DIO_eModuleId_t eModuleId;
  /*Pin Id*/
  UC_DIO_ePinId_t ePinId;
  /*Pointer to the module object*/
  UC_DIO_strObj_t* pstrObj;
  /*Pin DIrection*/
  UC_DIO_ePinDirection_t ePinDirection;
  /*Pin Mode*/
  UC_DIO_ePinMode_t ePinMode;
  /*Pull functionality enable/disable*/
  UC_DIO_ePullFcnEnable_t ePullFcnEnable;
  /*Pull mode if any */
  UC_DIO_ePullMode_t ePullMode;
  /*Interrupt Enable/Disable*/
  uint8_t u8EnableInterrupt;
  /*Interrupt Priority*/
  UC_DIO_eInteruptPriority_t eInteruptPriority;
  /*Input Pin Interrupt Id */
  UC_DIO_eInteruptInputPinId_t eInteruptInputPinId;
  /*Interrupt Trigger*/
  UC_DIO_eInterruptTrigger_t eInterruptTrigger;
  /*Interrupt Callback */
  UC_DIO_p2fInputEventClbk_t p2fInputEventClbk;
  /* Value */
  uint8_t u8Value;
} UC_DIO_strModule_t;


extern UC_DIO_strObj_t UC_DIO_astrObj[UC_DIO_OBJECTS_AVAILABLE];

void UC_DIO_vdInit(void);
void UC_DIO_vdMgr(void);

STATUS_t UC_DIO_eCommandOutputPin(uint8_t u8IndexId, UC_DIO_eOutputCommand_t eOutputCommand);
STATUS_t UC_DIO_eReadInputPin(uint8_t u8IndexId, uint8_t* pu8Value);
STATUS_t UC_DIO_eRegisterInputEventClbk(uint8_t u8IndexGpio, UC_DIO_p2fInputEventClbk_t p2f);

#endif /*UC_DIO_H*/