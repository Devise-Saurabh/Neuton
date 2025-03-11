/*
***************************************************************************
***************************************************************************
(C) Devise electronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of Devise Electronics Pvt. Ltd and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of Devise Electronics Pvt. Ltd

Devise Electronics Pvt. Ltd
Plot no 4, Survey no 5, DSK Ranwara Rd,
411021, Bavdhan, Pune,
India

File Name: uc_uart_cfg.c
Author: Devise Electronics Embedded Team 
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "uc_uart_cfg.h"
#include "uc_uart.h"

#define UC_UART_RECEIVED_DATA_INIT  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

UC_UART_Handler_t UC_UART_astrHandler[UC_UART_HANDLER_NUM] = 
{
  {
    /*UART Id*/
    UC_UART_HANDLER_ID0,
    /*UART Enable*/
    UC_UART_SCI_ENABLE,
    /*UART Structure*/
    &UC_UART_astrObj[UC_SCI_MODULE_1],
    /*UART Baudrate*/
    (UC_UART_eSciBaudRate_t)230400,
    /*UART Received Flag*/
    deMCD_DEFAULT,
    /*UART ReadData*/
    {0,0,0,0,0,0,0,0},
    /*Byte to Send*/
    {0,0,0,0,0,0,0,0},
    /*Byte To Send Ready Flag*/
    deMCD_FALSE,
    /*UART Rx Interrupt Enable */
    UC_UART_RX_INTERRUPT_ENABLE,
    /*Rx Callback*/
    deMCD_NULL,
    /*UART Tx Interrupt Enable */
    UC_UART_TX_INTERRUPT_DISABLE,
    /*Tx Callback*/
    deMCD_NULL,
    /*UART Data Bits*/
    UC_UART_EIGHT_BIT_DATA,
    /*UART Data Bytes Number*/
    UC_UART_RxBytes1,
    /*UART Parity Bit Enable*/
    UC_UART_PARITY_DISABLE,
    /*UART Parity Polarity*/
    UC_UART_PARITY_EVEN,
    /*UART Address Bit*/
    UC_UART_ZERO_ADDRESS_BIT,
    /*UART Stop Bit*/
    UC_UART_ONE_STOP_BIT,
    /*UART Transmit Type*/
    UC_UART_ASYNCHRONOUS_TRANSMIT,  
    /*UART pointer to IOMM Tx register*/
    deMCD_NULL,
    /*UART IOMM Tx bit*/
    0,
    /*UART IOMM Tx bit default*/
    0,
    /*UART pointer to IOMM Rx register*/
    deMCD_NULL,
    /*UART IOMM Rx bit*/
    0,
    /*UART IOMM Rx bit default*/
    0,    
  },
  {
    /*UART Id*/
    UC_UART_HANDLER_ID1,
    /*UART Enable*/
    UC_UART_SCI_ENABLE,
    /*UART Structure*/
    &UC_UART_astrObj[UC_SCI_MODULE_2],
    /*UART Baudrate*/
    (UC_UART_eSciBaudRate_t)230400,
    /*UART Received Flag*/
    deMCD_DEFAULT,
    /*UART ReadData*/
    {0,0,0,0,0,0,0,0},
    /*Byte to Send*/
    {0,0,0,0,0,0,0,0},
    /*Byte To Send Ready Flag*/
    deMCD_FALSE,
    /*UART Rx Interrupt Enable */
    UC_UART_RX_INTERRUPT_ENABLE,
    /*Rx Callback*/
    deMCD_NULL,
    /*UART Tx Interrupt Enable */
    UC_UART_TX_INTERRUPT_DISABLE,
    /*Tx Callback*/
    deMCD_NULL,
    /*UART Data Bits*/
    UC_UART_EIGHT_BIT_DATA,
    /*UART Data Bytes Number*/
    UC_UART_RxBytes1,    
    /*UART Parity Bit Enable*/
    UC_UART_PARITY_DISABLE,
    /*UART Parity Polarity*/
    UC_UART_PARITY_EVEN,
    /*UART Address Bit*/
    UC_UART_ZERO_ADDRESS_BIT,
    /*UART Stop Bit*/
    UC_UART_ONE_STOP_BIT,
    /*UART Transmit Type*/
    UC_UART_ASYNCHRONOUS_TRANSMIT,  
    /*UART pointer to IOMM Tx register*/
    &IOMM_PINMMR08,
    /*UART IOMM Tx bit*/
    1,
    /*UART IOMM Tx bit default*/
    0,
    /*UART pointer to IOMM Rx register*/
    &IOMM_PINMMR07,
    /*UART IOMM Rx bit*/
    17,
    /*UART IOMM Rx bit default*/
    16,
  }
};
