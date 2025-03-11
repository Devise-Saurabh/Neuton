/*
***************************************************************************
***************************************************************************
(C) 2020 Devise Elctronics Pvt Ltd  All rights reserved.

All data and information contained in or disclosed by this document is
confidential and proprietary information of SIGRA Technologies GmbH and all
rights therein are expressly reserved.  By accepting this material the
recipient agrees that this material and the information contained therein
is held in confidence and in trust and will not be used, copied, reproduced
in whole or in part, nor its contents revealed in any manner to others
without the express written permission of SIGRA Technologies GmbH

Devise Electronics Pvt Ltd
DSK Ranvara Road, Bavdhan,
411021, Pune,
India

File Name: app_diag_cfg.h
Author: Hany elShahawy 
E-mail: shany@sigratech.de 
***************************************************************************
***************************************************************************
*/

#ifndef APP_DIAG_CFG_H
#define APP_DIAG_CFG_H

#include "app.h"

#define APP_DIAG_ENABLE

#define APP_DIAG_P2SERVER_MAX_VALUE_MS                          ECU_DIAG_P2SERVER_MAX_VALUE_US/1000 
#define APP_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_MS                  ECU_DIAG_P2_ASTRIX_SERVER_MAX_VALUE_US/1000   
#define APP_DIAG_APPLICATION_START_ADDRESS                           (0x100000)
//#define APP_DIAG_APPLICATION_START_ADDRESS                           (0x00180000)

#define APP_DIAG_HEARTBEAT_HALF_PERIOD_MS                             (100)

#define APP_DIAG_HEARTBEAT_STATIC_PERIOD_MS                          (500)
#define APP_DIAG_HEARTBEAT_FAST_COUNT                                (3)

#define APP_DIAG_APPLICATION_HEARTBEAT                          ECU_IO_DOUT_HEARTBEAT_LED
#define APP_DIAG_DIAGNOSTICS_HEARTBEAT                          ECU_IO_DOUT_INT_DIAG_HB

#define APP_DIAG_TASK_MS                                              (1)

#define APP_DIAG_RETURN_TO_DEFAULT_TIMEOUT_MS                         (2000)

#define APP_DIAG_BOOT_SERVICE_ENABLE

#ifdef APPLICATION_SOFTWARE
#define SID_ENABLE_DIAG_SESSION_CONTROL                                
#define SID_ENABLE_ECU_RESET                                           
#define SID_ENABLE_CLEAR_DIAGNOSTIC_INFORMATION                        
#define SID_ENABLE_READ_DTC_INFORMATION                                
#define SID_ENABLE_READ_DATA_BY_IDENTIFIER                             
#define SID_ENABLE_READ_MEMORY_BY_ADDRESS                              
#define SID_ENABLE_READ_SCALE_DATA_IDENTIFIER                          
#define SID_ENABLE_SECURITY_ACCESS                                     
#define SID_ENABLE_COMMUNICATION_CONTROL                               
#define SID_ENABLE_READ_DATA_IDENTIFIER_PERIODIC                       
#define SID_ENABLE_DYNAMICALLY_DEFINE_DATA_IDENTIFIER                  
#define SID_ENABLE_WRITE_DATA_BY_IDENTIFIER                            
#define SID_ENABLE_INPUT_OUTPUT_CONTROL_BY_IDENTIFER                   
#undef SID_ENABLE_ROUTINE_CONTROL                                     
#undef SID_ENABLE_REQUEST_DOWNLOAD                                    
#undef SID_ENABLE_REQUEST_UPLOAD                                      
#undef SID_ENABLE_TRANSFER_DATA                                       
#undef SID_ENABLE_REQUEST_TRANSFER_EXIT                               
#undef SID_ENABLE_REQUEST_FILE_TRANSFER                               
#define SID_ENABLE_WRITE_MEMORY_BY_ADDRESS                             
#define SID_ENABLE_TESTER_PRESENT                                      
#define SID_ENABLE_ACCESS_TIMING_PARAMETER                             
#define SID_ENABLE_SECURED_DATA_TRANSMISSION                           
#define SID_ENABLE_CONTROL_DTC_SETTINGS                                
#define SID_ENABLE_RESPONSE_ON_EVENT                                   
#define SID_ENABLE_LINK_CONTROL                                        
#endif /*APPLICATION_SOFTWARE*/

#define SKIP_STATE_MACHING                                      (0)

#endif /*APP_DIAG_CFG_H*/

