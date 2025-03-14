clear
clc
disp('Starting ...')

%% Configurations 
CFG_DBC_PATH = '../../05_Specifications/ICAT_BUS_PT_DATABASE.dbc';

CFG_ACELL_RX_FRAME_HEX_IDS = {'C00D0EF',...
                              'C01D0EF',...
                              'C02D0EF',...
                              'C03D0EF',...
                              'C04D0EF',...
                              'C06D0EB',...
                              'C05D0EB',...
                              'C07D0EB',...
                              '10F81F9E',...
                              '18F81D9E',...
                              '10F81E9E',...
                              '10F8149E',...
                              '10F8159E',...
                              '18F8169E',...
                              '18F8179E',...
                              '18F8189E',...
                              '18F8199E',...
                              '18F81A9E',...
                              '18F81B9E',...
                              '18F81C9E',...
                              '1000000'
                              };
CFG_ACELL_TX_FRAME_HEX_IDS = {'C00EFD0',...
                              'C01EFD0',...
                              'C05EBD0',...
                              'C019ED0',...
                              'C08F0EE',...
                              'C09F0D0',...
                              'C0AF0D0',...
                              'C0CF1D0',...
                              'C0BF1D0',...
                              'C0DF1D0'};

CFG_ACELL_CAN_NETWORK_NAMES = {'CAN_MAIN', 'CAN_SECONDARY', 'CAN_DIAGNOSTICS'};

CFG_STR_DIAG_TX_HEX_ID = '301';
CFG_STR_DIAG_RX_HEX_ID = '300';
CFG_NUM_XCP_CAN_CHANNEL_ID = 3;
CFG_STR_XCP_RESPONSE_TX_HEX_ID = '1A0';
CFG_STR_XCP_HEARTBEAT_TX_HEX_ID = '1A1';
CFG_STR_XCP_REQUEST_RX_HEX_ID = '2A0';
CFG_STR_XCP_HEARTBEAT_RX_HEX_ID = '2A1';

CFG_FLAG_GEN_LIB = true;
CFG_STR_OUTPUT_COM_LIB_NAME = 'Lib_ICAT_VCU_Com';
CFG_FLAG_SHOW_GEN_LIB = false;

CFG_FLAG_MOVE_FILE_TO_PROJECT = true;
CFG_STR_PATH_TAPAS_CFG = 'ICAT_VCU';

CFG_FLAG_SAVE_LOGS_TO_WORKSPACE = false;
CFG_CLEAR_OUTPUT = true;

CFG_SIGNED_SIGNALS_SUPPORTED = false;

CFG_CAN_TASK_MS = 1;

%% Generation
Status = tapas_dbc(CFG_DBC_PATH,...
                   CFG_ACELL_RX_FRAME_HEX_IDS,...
                   CFG_ACELL_TX_FRAME_HEX_IDS,...
                   CFG_ACELL_CAN_NETWORK_NAMES,...
                   CFG_STR_DIAG_TX_HEX_ID,...
                   CFG_STR_DIAG_RX_HEX_ID,...
                   CFG_NUM_XCP_CAN_CHANNEL_ID,...
                   CFG_STR_XCP_RESPONSE_TX_HEX_ID,...
                   CFG_STR_XCP_HEARTBEAT_TX_HEX_ID,...
                   CFG_STR_XCP_REQUEST_RX_HEX_ID,...
                   CFG_STR_XCP_HEARTBEAT_RX_HEX_ID,...
                   CFG_FLAG_GEN_LIB,...
                   CFG_STR_OUTPUT_COM_LIB_NAME,...
                   CFG_FLAG_SHOW_GEN_LIB,...
                   CFG_FLAG_SAVE_LOGS_TO_WORKSPACE,...
                   CFG_SIGNED_SIGNALS_SUPPORTED,...
                   CFG_CAN_TASK_MS);

if(strcmp(Status,'STATUS_NOK'))
    fprintf(2,['TAPAS ERROR: Configuration files have not been generated correctly, check errors above ...' '\n']);
end

if((CFG_FLAG_MOVE_FILE_TO_PROJECT == true) && (strcmp(Status,'STATUS_OK')))
    disp('Moving the generated files to the parent project configurations folder')
    projectPath = lib_get_project_path('01_Software');
    
    movefile('tapas_types_dbc.m', [projectPath '\01_Code\APP\app_types\tapas_types_dbc.m'],'f')
    movefile('ecu_com_cfg_gen.c', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\ECU\com\ecu_com_cfg_gen.c'],'f')
    movefile('ecu_com_cfg_gen.h', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\ECU\com\ecu_com_cfg_gen.h'],'f')
    movefile('ecu_com_cfg.h', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\ECU\com\ecu_com_cfg.h'],'f')
    movefile('ecu_com_cfg.c', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\ECU\com\ecu_com_cfg.c'],'f')
    movefile('ecu_txcp_cfg_gen.h', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\ECU\txcp\ecu_txcp_cfg_gen.h'],'f')
    movefile('uc_can_cfg.h', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\UC\can\uc_can_cfg.h'],'f')
    movefile('uc_can_cfg.c', [projectPath '\01_Code\TAPAS_CFG\' CFG_STR_PATH_TAPAS_CFG '\UC\can\uc_can_cfg.c'],'f')
    
    movefile([CFG_STR_OUTPUT_COM_LIB_NAME '.slx'], [projectPath '\01_Code\APP\app_TapasLib\01_Library\' CFG_STR_PATH_TAPAS_CFG '\' CFG_STR_OUTPUT_COM_LIB_NAME '.slx'],'f')
    
    disp('Moving the generated files to the parent project configurations folder done ..')
end

if(CFG_CLEAR_OUTPUT == true)
    disp('Clearing Outputs ...')
    clear;
    disp('Clearing Outputs Done...')
end

disp('Done ...')
