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

File Name: main.c
Author: Devise Electronics Embedded Team
E-mail: shekhar.malani@deviseelectronics.com
***************************************************************************
***************************************************************************
*/

#include "lib_types.h"
#include "uc.h"
#include "os_cfg.h"
#include "os.h"
#include "ecu.h"
#include "rte.h"
#include "app.h"


void SYS_vdInit(void);
void SYS_vdDeInit(void);



uint8_t Array_enable[1] = {0x06}; // Write Enable command

uint8_t Array_page[7] = {0x02, 0x00, 0x00, 0x13,0x00,0x00,0x00}; // Page Program command with address
  
uint8_t Array_read[7] = {0x03, 0x00, 0x00, 0x13, 0x00,0x00,0x00}; // Read command with address

uint8_t Arrayrx_read[7] = {0x00, 0x00, 0x00, 0x00, 0x00,0x00,0x00}; // Read command with address

uint8_t Array_erase[4] = {0xD8, 0x00, 0x00, 0x13}; // Sector Erase command

uint8_t Rx1Frame[5] = {0x00, 0x00, 0x00, 0x00, 0x00}; // Initialize with zeros

uint8_t RxFrame[4] = {0x9F, 0x00, 0x00, 0x00}; // Initialize with zeros



int main(void)
{
  uint8_t u8IsReinitialized;
  uint8_t u8IsShutdownAndResetReq;
  uint8_t u8BootIntoNonDefaultMode;
  ECU_SYS_eEcuMode_t NonDefaultMode;
  STATUS_t eOsStatus;
  
  //ECU_MEM_INT_eEraseSector(ECU_MEM_TEST_SECTOR);
  while(1)
  {
    eOsStatus = STATUS_BUSY;
    u8IsReinitialized = deMCD_FALSE;
    u8IsShutdownAndResetReq = deMCD_FALSE;
    u8BootIntoNonDefaultMode = deMCD_FALSE;
    
    ECU_SYS_vdSetEcuMode(ECU_SYS_INIT);
    
    /* Initialize the system */
    SYS_vdInit();
    
  #ifdef UC_SYSTEM_MODULE_ENABLE
    /* Enable Interrupts */
    UC_SYS_vdEnableInterrupts();
  #endif /*UC_SYSTEM_MODULE_ENABLE*/
    
    /* Enable/Disable External Watchdog Hardware Module*/
    ECU_SYS_vdExtWdgManage();
    
    /* Start OS */
    OS_vdStart();
    
    //**** Check whether ecu should boot into a specific mode ****//
    u8BootIntoNonDefaultMode = APP_DIAG_u8DefaultEcuModeCheck(&NonDefaultMode);
    if(u8BootIntoNonDefaultMode == deMCD_TRUE)
    {
      if(NonDefaultMode == ECU_SYS_DEFAULT) // to avoid booting in normal session whilst in programming software
      {
#ifdef APPLICATION_SOFTWARE
        ECU_SYS_vdSetEcuMode(NonDefaultMode);                    
#endif /*APPLICATION_SOFTWARE*/
#ifdef PROGRAMMING_SOFTWARE
        ECU_SYS_vdSetEcuMode(ECU_SYS_PROGRAMMING);                
#endif /*PROGRAMMING_SOFTWARE*/
      }
      else if(NonDefaultMode == ECU_SYS_PROGRAMMING)
      {
#ifdef APPLICATION_SOFTWARE
        ECU_SYS_vdSetEcuMode(ECU_SYS_DEFAULT);                    
#endif /*APPLICATION_SOFTWARE*/
#ifdef PROGRAMMING_SOFTWARE
        ECU_SYS_vdSetEcuMode(ECU_SYS_PROGRAMMING);                
#endif /*PROGRAMMING_SOFTWARE*/        
      }
      else
      {
        ECU_SYS_vdSetEcuMode(NonDefaultMode);                    
      }
    }
    else
    {
#ifdef APPLICATION_SOFTWARE
      ECU_SYS_vdSetEcuMode(ECU_SYS_DEFAULT);
#else
      ECU_SYS_vdSetEcuMode(ECU_SYS_PROGRAMMING);
#endif /*APPLICATION_SOFTWARE*/
    }
    
    while(1)
    {
      eOsStatus = OS_vdMain(&u8IsReinitialized);
      if(eOsStatus != STATUS_BUSY)
      {
        break;
      }
      
   /*   UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO7, UC_DIO_OUT_COMMAND_ON);// NEWLSD_TESTED PIN

       uint8_t New_lsd[3] = {0x00, 0xFF, 0xFF};
      UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_0, New_lsd, sizeof(New_lsd));
      */
      

      
        // UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO7, UC_DIO_OUT_COMMAND_ON);// NEWLSD_TESTED PIN

uint8_t New_lsd[3] = {0x00, 0x00, 0x00}; 
// Assuming fltData is a float and you want to extract two bytes
uint16_t lsdData = (uint16_t)(RTE_astrData[RTE_DATA_ID_LSD_DATA].fltData);//RTE_astrData[RTE_DATA_ID_LSD_DATA].fltData

// Assign the real-time data to New_lsd
New_lsd[1] = (uint8_t)(lsdData >> 8);  // High byte
New_lsd[2] = (uint8_t)(lsdData & 0xFF); // Low byte

// Sending the SPI frame for LSD2 device
UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_0, New_lsd, sizeof(New_lsd));
      
             UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO8, UC_DIO_OUT_COMMAND_OFF);
     
              UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO8, UC_DIO_OUT_COMMAND_ON);
              
           //   uint16_t UC_IO_au16ExpSpiArrayTx_1[]= 0xC20F;
              
               uint16_t UC_IO_au16ExpSpiArrayTx_1= RTE_astrData[RTE_DATA_ID_HSD_DATA].fltData;
              // Correct the size calculation and cast to uint8_t*
               UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_3, (uint8_t*)&UC_IO_au16ExpSpiArrayTx_1, sizeof(uint16_t)); 
      
      
               if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_OUT].fltData==1)
               {
                  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIOHB3, UC_DIO_OUT_COMMAND_ON); // h_bridge ON 
               }
               
               else
               {
                 UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIOHB3, UC_DIO_OUT_COMMAND_OFF); // h_bridge OFF
               }
               
               
                if(RTE_astrData[RTE_DATA_ID_HBRIDGE2_DIRECTION_PIN_OUT].fltData == 1)
               {
                  UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIOHB1, UC_DIO_OUT_COMMAND_ON); // h_bridge 2 direction  forward
               }
               
                else
                {
                   UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIOHB1, UC_DIO_OUT_COMMAND_OFF); // h_bridge 2 direction Reverse 
                }
               
               
               
               if( RTE_astrData[RTE_DATA_ID_ECU_HSD4_OUT3_P15].fltData ==1)
              {
                 UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO15, UC_DIO_OUT_COMMAND_ON);
              }
              else
              {
                 UC_DIO_eCommandOutputPin(UC_DIO_OUTPUT_GIO15, UC_DIO_OUT_COMMAND_OFF);
              }
               
              
              
     /*  uint16_t UC_IO_au16ExpSpiArrayTx = RTE_astrData[RTE_DATA_ID_LSD_DATA].fltData;
//uint16_t UC_IO_au16ExpSpiArrayTx[] =0XAAAA;
//          // Sending the SPI frame for LSD1 device
          UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_0, (uint8_t*)&UC_IO_au16ExpSpiArrayTx, sizeof(uint16_t));

      
     uint16_t UC_IO_au16ExpSpiArrayTx_1 =  RTE_astrData[RTE_DATA_ID_LSD_DATA2].fltData;
          // Sending the SPI frame for LSD2 device
          UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_3, (uint8_t*)&UC_IO_au16ExpSpiArrayTx_1, sizeof(uint16_t));
          
          */
         // UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_4, (uint8_t*)&UC_IO_au16ExpSpiArrayTx, sizeof(uint16_t));//H-Bridge
          
         //   UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_2, (uint8_t*)&UC_IO_au16ExpSpiArrayTx, sizeof(uint16_t));
      
    //  Unit32_t RawData=0;
//      if(RTE_astrData[RTE_DATA_ID_INPUT_P29].fltData == 1)
//	{
//		
//                ECU_MEM_INT_eEraseSector(ECU_MEM_INT_SECTOR_1);
//	}
//      
//          if (RTE_astrData[RTE_DATA_ID_RTEREAD_P21].fltData == 1)  
//       {
//          RTE_astrData[RTE_DATA_ID_RTEREAD_P21].fltData =0;
//         
//        //  uint8_t array[7]=0;
//           UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_read, sizeof(Array_read)); 
//                 //            LIB_DELAY_vdNanoSeconds(35000); 
//
//       //  UC_SPI_eSendSpiFrameSync(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_read, 7, array,7);
//                      
//         
//
//       }
     
        if (RTE_astrData[RTE_DATA_ID_RTE_ERASE_ENABLE].fltData == 1)    
          {
           RTE_astrData[RTE_DATA_ID_RTE_ERASE_ENABLE].fltData = 0;
              uint8_t array[7]=0;
          
          //UC_SPI_eSendSpiFrameSync(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_read, 7, array,7);
             UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_enable, sizeof(Array_enable)); 
               //  LIB_DELAY_vdNanoSeconds(35000); 

          }   
      
      
       if (RTE_astrData[RTE_DATA_ID_ERASE].fltData == 1)    
          {
      RTE_astrData[RTE_DATA_ID_ERASE].fltData = 0;
             UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_erase, sizeof(Array_erase)); 
                 //             LIB_DELAY_vdNanoSeconds(35000); 

          }  
      
      
      
      if (RTE_astrData[RTE_DATA_ID_RTE_WRITE_ENABLE].fltData == 1)    
          {
            RTE_astrData[RTE_DATA_ID_RTE_WRITE_ENABLE].fltData = 0;
             UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_enable, sizeof(Array_enable));               

                //              LIB_DELAY_vdNanoSeconds(35000); 

          } 
      
      
      
       if (RTE_astrData[RTE_DATA_ID_WRITE].fltData == 1)    
          {
            
            RTE_astrData[RTE_DATA_ID_WRITE].fltData =0;
            
            Array_page[4]=RTE_astrData[RTE_DATA_ID_D1].fltData;
            Array_page[5]=RTE_astrData[RTE_DATA_ID_D2].fltData;
            Array_page[6]=RTE_astrData[RTE_DATA_ID_D3].fltData;

             UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_page, sizeof(Array_page)); 
                        //      LIB_DELAY_vdNanoSeconds(35000); 

          }  
      
    }
    
    ECU_SYS_vdSetEcuMode(ECU_SYS_DEINIT);
    SYS_vdDeInit();
    
    
    u8IsShutdownAndResetReq = ECU_SYS_u8IsShutdownAndReset();
    
    if(u8IsShutdownAndResetReq != deMCD_FALSE)
    {
      ECU_SYS_vdReset();
    }

    if(u8IsReinitialized == deMCD_FALSE)
    {
      break;
    }   
  }

#ifdef ECU_SYS_MODULE_ENABLE
  ECU_SYS_vdDeInit();
  ECU_SYS_vdSleep();
#endif /*ECU_SYS_MODULE_ENABLE*/
}

void SYS_vdInit(void)
{
  UC_vdInit();
  OS_vdInit();
  ECU_vdInit();
  RTE_vdInit();
  APP_vdInit();
  
   uint8_t array[7]={0,0,0,0,0,0,0};
          //  UC_SPI_eSendSpiFrame(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_read, 7); 
                 //            LIB_DELAY_vdNanoSeconds(35000); 

          UC_SPI_eSendSpiFrameSync(UC_SPI_MODULE_INDEX_0, UC_SPI_INDEX0_DEV_1, Array_read, 7, array,7);
               
          
          
                  // RTE_astrData[RTE_DATA_ID_ODOREADING1].fltData =  ((array[4]<<16)+(array[5]<<8)+(array[6]));

        RTE_astrData[RTE_DATA_ID_ODOREADING3].fltData =  ((array[4]<<16)+(array[5]<<8)+(array[6]));
}

void SYS_vdDeInit(void)
{
  /*APP DeInit*/
  APP_vdDeInit();
  /*RTE DeInit*/
  RTE_vdDeInit();
  /*ECU DeInit*/
  ECU_vdDeInit();
  /*UC DeInit*/
  UC_vdDeInit();
  /*OS DeInit*/
  OS_vdDeInit();
}
