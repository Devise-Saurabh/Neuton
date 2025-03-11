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
E-mail: devcu@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "ecu_serial_cfg.h"
#include "ecu_serial.h"


ECU_SERIAL_strRxFrame_t ECU_SERIAL_astrRx1Frame[ECU_SERIAL_INTERFACE_ID0_RX_FRAMES_NUM] = 
{
  {
    /*Frame ID*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID0,
    /*Enable*/
    ECU_SERIAL_FRAME_ENABLED, 
    /*Max Frame Size*/
    ECU_SERIAL_BUFFER_BYTES_SIZE,
    /*Actual Frame Size*/
    deMCD_DEFAULT,
    /*Frame Buffer*/
    {(uint8_t)0},
    /*Frame Type*/
    ECU_SERIAL_FIXED_FRAME,
    /*Fixed Frame Size: Set to Zero in case Dynamic*/
    80,
    /*Start Sequence Bytes Array*/
    {0xB5,0x62,0x28,0x00,0,0,0,0,0,0},
    /*Frame Start Sequence Size*/
    4,
    /*Bytes Counter Start Seq*/
    deMCD_DEFAULT,
    /*End Sequence Bytes Array*/
    {0},
    /*Frame End Sequence Size*/
    0,
    /*Bytes Counter End Seq*/
    deMCD_DEFAULT,
    /*Frame Rx Byte Counter*/
    deMCD_DEFAULT,
    /*Flag Frame Start Received*/
    deMCD_FALSE,
    /*Flag Frame End Received*/
    deMCD_FALSE,
    /*u8FixedDynLenBytesIndex*/
    {0,0},
    /*u8FixedDynBytesLen*/
    {0,0},
    /*FixedDynLenOffset*/
    0,
    /*FixedDynLenMin*/
    0,
    /*FixedDyn u8FDLenBytesFoundCounter*/
    0,
    /*Callback when frame received*/
    deMCD_NULL,
    /*Status*/
    STATUS_OK,
  },
  {
    /*Frame ID*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID1,
    /*Enable*/
    ECU_SERIAL_FRAME_ENABLED, 
    /*Max Frame Size*/
    ECU_SERIAL_BUFFER_BYTES_SIZE,
    /*Actual Frame Size*/
    deMCD_DEFAULT,
    /*Frame Buffer*/
    {(uint8_t)0},
    /*Frame Type*/
    ECU_SERIAL_FIXED_DYNAMIC_FRAME,
    /*Fixed Frame Size: Set to Zero in case Dynamic*/
    24,
    /*Start Sequence Bytes Array*/
    {0xB5,0x62,0x10,0x10,0,0,0,0,0,0},
    /*Frame Start Sequence Size*/
    4,
    /*Bytes Counter Start Seq*/
    deMCD_DEFAULT,
    /*End Sequence Bytes Array*/
    {0},
    /*Frame End Sequence Size*/
    0,
    /*Bytes Counter End Seq*/
    deMCD_DEFAULT,
    /*Frame Rx Byte Counter*/
    deMCD_DEFAULT,
    /*Flag Frame Start Received*/
    deMCD_FALSE,
    /*Flag Frame End Received*/
    deMCD_FALSE,
    /*au8FixedDynLenBytesIndex*/
    {4,5},
    /*au8FixedDynBytesLen*/
    {0,0},
    /*FixedDynLenOffset*/
    8,
    /*FixedDynLenMin*/
    24,
    /*FixedDyn u8FDLenBytesFoundCounter*/
    0,
    /*Callback when frame received*/
    deMCD_NULL,
    /*Status*/
    STATUS_OK,
  },
  {
    /*Frame ID*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID2,
    /*Enable*/
    ECU_SERIAL_FRAME_ENABLED, 
    /*Max Frame Size*/
    ECU_SERIAL_BUFFER_BYTES_SIZE,
    /*Actual Frame Size*/
    deMCD_DEFAULT,
    /*Frame Buffer*/
    {(uint8_t)0},
    /*Frame Type*/
    ECU_SERIAL_FIXED_FRAME,
    /*Fixed Frame Size: Set to Zero in case Dynamic*/
    24,
    /*Start Sequence Bytes Array*/
    {0xB5,0x62,0x01,0x03,0,0,0,0,0,0},
    /*Frame Start Sequence Size*/
    4,
    /*Bytes Counter Start Seq*/
    deMCD_DEFAULT,
    /*End Sequence Bytes Array*/
    {0},
    /*Frame End Sequence Size*/
    0,
    /*Bytes Counter End Seq*/
    deMCD_DEFAULT,
    /*Frame Rx Byte Counter*/
    deMCD_DEFAULT,
    /*Flag Frame Start Received*/
    deMCD_FALSE,
    /*Flag Frame End Received*/
    deMCD_FALSE,
    /*u8FixedDynLenBytesIndex*/
    {0,0},
    /*u8FixedDynBytesLen*/
    {0,0},
    /*FixedDynLenOffset*/
    0,
    /*FixedDynLenMin*/
    0,
    /*FixedDyn u8FDLenBytesFoundCounter*/
    0,
    /*Callback when frame received*/
    deMCD_NULL,
    /*Status*/
    STATUS_OK,
  },
  {
    /*Frame ID*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID3,
    /*Enable*/
    ECU_SERIAL_FRAME_ENABLED, 
    /*Max Frame Size*/
    ECU_SERIAL_BUFFER_BYTES_SIZE,
    /*Actual Frame Size*/
    deMCD_DEFAULT,
    /*Frame Buffer*/
    {(uint8_t)0},
    /*Frame Type*/
    ECU_SERIAL_FIXED_FRAME,
    /*Fixed Frame Size: Set to Zero in case Dynamic*/
    10,
    /*Start Sequence Bytes Array*/
    {0xB5,0x62,0x05,0x01,0,0,0,0,0,0},
    /*Frame Start Sequence Size*/
    4,
    /*Bytes Counter Start Seq*/
    deMCD_DEFAULT,
    /*End Sequence Bytes Array*/
    {0},
    /*Frame End Sequence Size*/
    0,
    /*Bytes Counter End Seq*/
    deMCD_DEFAULT,
    /*Frame Rx Byte Counter*/
    deMCD_DEFAULT,
    /*Flag Frame Start Received*/
    deMCD_FALSE,
    /*Flag Frame End Received*/
    deMCD_FALSE,
    /*u8FixedDynLenBytesIndex*/
    {0,0},
    /*u8FixedDynBytesLen*/
    {0,0},
    /*FixedDynLenOffset*/
    0,
    /*FixedDynLenMin*/
    0,
    /*FixedDyn u8FDLenBytesFoundCounter*/
    0,
    /*Callback when frame received*/
    deMCD_NULL,
    /*Status*/
    STATUS_OK,
  },
  {
    /*Frame ID*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID4,
    /*Enable*/
    ECU_SERIAL_FRAME_ENABLED, 
    /*Max Frame Size*/
    ECU_SERIAL_BUFFER_BYTES_SIZE,
    /*Actual Frame Size*/
    deMCD_DEFAULT,
    /*Frame Buffer*/
    {(uint8_t)0},
    /*Frame Type*/
    ECU_SERIAL_FIXED_FRAME,
    /*Fixed Frame Size: Set to Zero in case Dynamic*/
    10,
    /*Start Sequence Bytes Array*/
    {0xB5,0x62,0x05,0x00,0,0,0,0,0,0},
    /*Frame Start Sequence Size*/
    4,
    /*Bytes Counter Start Seq*/
    deMCD_DEFAULT,
    /*End Sequence Bytes Array*/
    {0},
    /*Frame End Sequence Size*/
    0,
    /*Bytes Counter End Seq*/
    deMCD_DEFAULT,
    /*Frame Rx Byte Counter*/
    deMCD_DEFAULT,
    /*Flag Frame Start Received*/
    deMCD_FALSE,
    /*Flag Frame End Received*/
    deMCD_FALSE,
    /*u8FixedDynLenBytesIndex*/
    {0,0},
    /*u8FixedDynBytesLen*/
    {0,0},
    /*FixedDynLenOffset*/
    0,
    /*FixedDynLenMin*/
    0,
    /*FixedDyn u8FDLenBytesFoundCounter*/
    0,
    /*Callback when frame received*/
    deMCD_NULL,
    /*Status*/
    STATUS_OK,
  }, 
  {
    /*Frame ID*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAME_ID5,
    /*Enable*/
    ECU_SERIAL_FRAME_ENABLED, 
    /*Max Frame Size*/
    ECU_SERIAL_BUFFER_BYTES_SIZE,
    /*Actual Frame Size*/
    deMCD_DEFAULT,
    /*Frame Buffer*/
    {(uint8_t)0},
    /*Frame Type*/
    ECU_SERIAL_FIXED_FRAME,
    /*Fixed Frame Size: Set to Zero in case Dynamic*/
    16,
    /*Start Sequence Bytes Array*/
    {0xB5,0x62,0x09,0x14,0,0,0,0,0,0},
    /*Frame Start Sequence Size*/
    4,
    /*Bytes Counter Start Seq*/
    deMCD_DEFAULT,
    /*End Sequence Bytes Array*/
    {0},
    /*Frame End Sequence Size*/
    0,
    /*Bytes Counter End Seq*/
    deMCD_DEFAULT,
    /*Frame Rx Byte Counter*/
    deMCD_DEFAULT,
    /*Flag Frame Start Received*/
    deMCD_FALSE,
    /*Flag Frame End Received*/
    deMCD_FALSE,
    /*u8FixedDynLenBytesIndex*/
    {0,0},
    /*u8FixedDynBytesLen*/
    {0,0},
    /*FixedDynLenOffset*/
    0,
    /*FixedDynLenMin*/
    0,
    /*FixedDyn u8FDLenBytesFoundCounter*/
    0,
    /*Callback when frame received*/
    deMCD_NULL,
    /*Status*/
    STATUS_OK,
  }, 
};


ECU_SERIAL_strInterface_t ECU_SERIAL_astrInterface[ECU_SERIAL_INTERFACES_NUM] = 
{
  {
    /*Serial Interface ID*/
    ECU_SERIAL_INTERFACE_ID0,
    /*Lower Layer Uart Id */
    UC_UART_HANDLER_ID1,
    /*Lower Layer Uart Size*/
    (uint8_t)1,
    /*Status*/
    STATUS_OK,
    /*Number of Rx Frames*/
    ECU_SERIAL_INTERFACE_ID0_RX_FRAMES_NUM,
    /*Array of Rx Frames Objects*/
    ECU_SERIAL_astrRx1Frame,
    /*Callback for Lower Layer Uart Rx*/
    ECU_SERIAL_Internal_vdUart2RxCallback,
  },
};

