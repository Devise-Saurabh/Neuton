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

File Name: uc_spi_cfg.c
Author: Karim Mansour 
E-mail: shekhar.malani@deviseelectronics.com 
***************************************************************************
***************************************************************************
*/

#include "uc_spi_cfg.h"
#include "uc_spi.h"



UC_SPI_strMibDevice_t UC_SPI_astrMibIndex0Device[UC_SPI_INDEX0_DEVICES_NUM] = 
{
  {
    /*Device Id */
    UC_SPI_INDEX0_DEV_0,
    /*Chip select Id*/
    UC_SPI_CS_2,                  //lsd1
    //UC_SPI_CS_1,
    /*Format Id*/
    UC_SPI_FORMAT_3,
    /* Requests */
    UC_SPI_DEV_STATUS_IDLE,
    /*Tx Data*/
    deMCD_DEFAULT,
    /*Tx Byte Array Max*/
    deMCD_DEFAULT,
    /*Tx Byte Array*/
    deMCD_NULL,
    /*Rx Data*/
    deMCD_DEFAULT,
    /*Rx Byte Array Max*/
    deMCD_DEFAULT,
    /*Rx Byte Array*/
    deMCD_NULL,
    /*Data length*/
    UC_SPI_DATA_16_BITS,
    /*Data Receive Callback*/
    deMCD_NULL
  },
  {
    /*Device Id */
    UC_SPI_INDEX0_DEV_1,
    /*Chip select Id*/
    UC_SPI_CS_1,
    /*Format Id*/
    UC_SPI_FORMAT_1,
    /* Requests */
    UC_SPI_DEV_STATUS_IDLE,
    /*Tx Data*/
    deMCD_DEFAULT,
    /*Tx Byte Array Max*/
    deMCD_DEFAULT,
    /*Tx Byte Array*/
    deMCD_NULL,
    /*Rx Data*/
    deMCD_DEFAULT,
    /*Rx Byte Array Max*/
    deMCD_DEFAULT,
    /*Rx Byte Array*/
    deMCD_NULL,
    /*Data length*/
    UC_SPI_DATA_16_BITS,
    /*Data Receive Callback*/
    deMCD_NULL
  },
  {
    /*Device Id */
    UC_SPI_INDEX0_DEV_2,
    /*Chip select Id*/
    UC_SPI_CS_0,
    /*Format Id*/
    UC_SPI_FORMAT_1,
    /* Requests */
    UC_SPI_DEV_STATUS_IDLE,
    /*Tx Data*/
    deMCD_DEFAULT,
    /*Tx Byte Array Max*/
    deMCD_DEFAULT,
    /*Tx Byte Array*/
    deMCD_NULL,
    /*Rx Data*/
    deMCD_DEFAULT,
    /*Rx Byte Array Max*/
    deMCD_DEFAULT,
    /*Rx Byte Array*/
    deMCD_NULL,
    /*Data length*/
    UC_SPI_DATA_16_BITS,
    /*Data Receive Callback*/
    deMCD_NULL
  }
  
  ,
  {
    /*Device Id */
    UC_SPI_INDEX0_DEV_3,
    /*Chip select Id*/
    UC_SPI_CS_3,               //lsd2
    /*Format Id*/
    UC_SPI_FORMAT_0,
    /* Requests */
    UC_SPI_DEV_STATUS_IDLE,
    /*Tx Data*/
    deMCD_DEFAULT,
    /*Tx Byte Array Max*/
    deMCD_DEFAULT,
    /*Tx Byte Array*/
    deMCD_NULL,
    /*Rx Data*/
    deMCD_DEFAULT,
    /*Rx Byte Array Max*/
    deMCD_DEFAULT,
    /*Rx Byte Array*/
    deMCD_NULL,
    /*Data length*/
    UC_SPI_DATA_16_BITS,
    /*Data Receive Callback*/
    deMCD_NULL
  }
  
  ,
  {
    /*Device Id */
    UC_SPI_INDEX0_DEV_4,
    /*Chip select Id*/
    UC_SPI_CS_4,                  //h_bridge
    /*Format Id*/
    UC_SPI_FORMAT_0,
    /* Requests */
    UC_SPI_DEV_STATUS_IDLE,
    /*Tx Data*/
    deMCD_DEFAULT,
    /*Tx Byte Array Max*/
    deMCD_DEFAULT,
    /*Tx Byte Array*/
    deMCD_NULL,
    /*Rx Data*/
    deMCD_DEFAULT,
    /*Rx Byte Array Max*/
    deMCD_DEFAULT,
    /*Rx Byte Array*/
    deMCD_NULL,
    /*Data length*/
    UC_SPI_DATA_16_BITS,
    /*Data Receive Callback*/
    deMCD_NULL
  }
};

UC_SPI_strMibModule_t UC_SPI_astrMibModule[UC_SPI_MODULE_NUM] = 
{
  {
    /*Bus Id*/
    UC_SPI_MODULE_INDEX_0,
    /*Module Id*/
    UC_SPI_MIB_MODULE_3,
    /*Pointer to the module object*/
    &UC_SPI_astrMibObj[UC_SPI_MIB_MODULE_3],
    /*Format Configurations*/
    {
     {
        /*Format Id*/
        UC_SPI_FORMAT_0,
        /*Clk frequency in khz*/
        500,
        /*Date length*/
        UC_SPI_DATA_08_BITS,
        /*Data Length Mask*/
        UC_SPI_DATA_08_BITS_M,
        /*Polarity*/
        UC_SPI_CLK_LOW_INACTIVE,
        /*Phase*/
//         UC_SPI_HALF_CLK_DELAY_TO_DATA,
         UC_SPI_NO_CLK_DELAY_TO_DATA,
        /*Parity Disable/Enable*/
         UC_SPI_PARITY_DISABLE,
         /*Parity Polarity*/
         UC_SPI_PARITY_EVEN,
         /*Data Direction*/
         UC_SPI_DATA_MSB_FIRST
      },
      {
        /*Format Id*/
        UC_SPI_FORMAT_1,
        /*Clk frequency in khz*/
        500,
        /*Date length*/
        UC_SPI_DATA_08_BITS,
         /*Data Length Mask*/
        UC_SPI_DATA_08_BITS_M,
        /*Polarity*/
        UC_SPI_CLK_LOW_INACTIVE,
        /*Phase*/
         UC_SPI_HALF_CLK_DELAY_TO_DATA,
         /*Parity Disable/Enable*/
         UC_SPI_PARITY_DISABLE,
         /*Parity Polarity*/
         UC_SPI_PARITY_EVEN,
         /*Data Direction*/
         UC_SPI_DATA_MSB_FIRST
      },
      {
        /*Format Id*/
        UC_SPI_FORMAT_2,
        /*Clk frequency in khz*/
        500,
        /*Date length*/
        UC_SPI_DATA_08_BITS,
        /*Data Length Mask*/
        UC_SPI_DATA_08_BITS_M,
        /*Polarity*/
        UC_SPI_CLK_LOW_INACTIVE,
        /*Phase*/
         UC_SPI_NO_CLK_DELAY_TO_DATA,
         /*Parity Disable/Enable*/
         UC_SPI_PARITY_DISABLE,
         /*Parity Polarity*/
         UC_SPI_PARITY_EVEN,
         /*Data Direction*/
         UC_SPI_DATA_MSB_FIRST
      },
      {
        /*Format Id*/
        UC_SPI_FORMAT_3,
        /*Clk frequency in khz*/
        500,
        /*Date length*/
        UC_SPI_DATA_08_BITS,
        /*Data Length Mask*/
        UC_SPI_DATA_08_BITS_M,
        /*Polarity*/
        UC_SPI_CLK_LOW_INACTIVE,
        /*Phase*/
         UC_SPI_NO_CLK_DELAY_TO_DATA,
         /*Parity Disable/Enable*/
         UC_SPI_PARITY_DISABLE,
         /*Parity Polarity*/
         UC_SPI_PARITY_EVEN,
         /*Data Direction*/
         UC_SPI_DATA_MSB_FIRST
      }
    },
    /*Number of Devices */
    UC_SPI_INDEX0_DEVICES_NUM,
    /*Pointer to array of devices objects*/
    UC_SPI_astrMibIndex0Device,
    /*Id of the active device*/
    deMCD_DEFAULT,
    /*General Rx Interrupt Enable */
    deMCD_TRUE,
    /*General Rx Callback */
    deMCD_NULL,
    /*General Tx Interrupt Enable */
    deMCD_TRUE,
    /*General Tx Callback */
    deMCD_NULL,
    /*Busy Counter*/
    deMCD_DEFAULT,
    /*Bus Status*/
    UC_SPI_BUS_STATUS_IDLE
  }
};
