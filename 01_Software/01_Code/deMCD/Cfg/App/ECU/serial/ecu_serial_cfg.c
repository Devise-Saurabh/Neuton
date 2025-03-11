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

File Name: ecu_serial_cfg.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "ecu_serial_cfg.h"
#include "ecu_serial.h"



//UC_UART_Handler_t UC_UART_astrHandler[UC_UART_HANDLER_NUM] = 
//{
//  {
//    /*UART Id*/
//    UC_UART_HANDLER_ID0,
//    /*UART Structure*/
//    &UC_UART_astrObj[UC_SCI_MODULE_1],
//    /*UART Baudrate*/
//    UC_SCI_BAUD_9600,
//    /*UART ReceivedFlag*/
//    deMCD_DEFAULT,
//    /*UART ReadTemp*/
//    deMCD_DEFAULT,
//    /*UART ReceivedData*/
//    UC_UART_RECEIVED_DATA_INIT,
//    /*UART ReceivedDataIndex*/
//    deMCD_DEFAULT,
//    /*UART ReceivedDataArrayLength*/
//    deMCD_DEFAULT,
//    /*UART InterruptCounter*/
//    deMCD_DEFAULT,
//    /*Rx Callback*/
//    deMCD_NULL,
//    /*Tx Callback*/
//    deMCD_NULL,
//  },
////  {