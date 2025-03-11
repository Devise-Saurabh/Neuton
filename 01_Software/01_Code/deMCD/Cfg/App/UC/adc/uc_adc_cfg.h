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

File Name: uc_adc_cfg.h
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com  
***************************************************************************
***************************************************************************
*/

#ifndef UC_ADC_CFG_H
#define UC_ADC_CFG_H

#define UC_ADC_MODULE_ENABLE

#define UC_ADC_SYSTEM_INPUT_FREQUENCY_MHZ       (UC_SYSTEM_FREQUENCY_MHZ/2)
#define UC_ADC_CONVERSION_FREQUENCY_MHZ         (10U)

#define UC_ADC_CORE_NUM                         (1)
#define UC_ADC_CORE1_ID                         (0)
#define UC_ADC_CORE2_ID                         (1) /*NOT USED*/

#define UC_ADC_CORE1_SIG_NUM                    (UC_ADC_CORE1_ID<<8)|(13)
#define UC_ADC_CORE1_SIG_ID0                    (UC_ADC_CORE1_ID<<8)|(0)
#define UC_ADC_CORE1_SIG_ID1                    (UC_ADC_CORE1_ID<<8)|(1)
#define UC_ADC_CORE1_SIG_ID2                    (UC_ADC_CORE1_ID<<8)|(2)
#define UC_ADC_CORE1_SIG_ID3                    (UC_ADC_CORE1_ID<<8)|(3)
#define UC_ADC_CORE1_SIG_ID4                    (UC_ADC_CORE1_ID<<8)|(4)
#define UC_ADC_CORE1_SIG_ID5                    (UC_ADC_CORE1_ID<<8)|(5)
#define UC_ADC_CORE1_SIG_ID6                    (UC_ADC_CORE1_ID<<8)|(6)
#define UC_ADC_CORE1_SIG_ID7                    (UC_ADC_CORE1_ID<<8)|(7)
#define UC_ADC_CORE1_SIG_ID8                    (UC_ADC_CORE1_ID<<8)|(8)
#define UC_ADC_CORE1_SIG_ID9                    (UC_ADC_CORE1_ID<<8)|(9)
#define UC_ADC_CORE1_SIG_ID10                   (UC_ADC_CORE1_ID<<8)|(10)
#define UC_ADC_CORE1_SIG_ID11                   (UC_ADC_CORE1_ID<<8)|(11)
#define UC_ADC_CORE1_SIG_ID12                   (UC_ADC_CORE1_ID<<8)|(12)


 /*NOT USED*/
#define UC_ADC_CORE2_SIG_NUM                    (0)
#define UC_ADC_CORE2_SIG_ID0                    (UC_ADC_CORE2_ID<<8)|(0)
#define UC_ADC_CORE2_SIG_ID1                    (UC_ADC_CORE2_ID<<8)|(1)
#define UC_ADC_CORE2_SIG_ID2                    (UC_ADC_CORE2_ID<<8)|(2)
#define UC_ADC_CORE2_SIG_ID3                    (UC_ADC_CORE2_ID<<8)|(3)

#endif /*UC_ADC_CFG_H*/
