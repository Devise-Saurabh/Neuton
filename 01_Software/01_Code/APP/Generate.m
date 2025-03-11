   
    clear
    clc
    clear functions;
    
    BuildDestination = '';
    xmlFrameworkName = 'SiftProbe_deVCU.fwxml';
    BuildOK = false;


    addpath(genpath('C:\Tools\deMCD_toolbox'))
    addpath(genpath('D:\VCU_Projects\deVCU_Rev2\JayemCodeReleaseRev2.2\JayemCodeRelease\01_Software'))
   
    cd 'D:\VCU_Projects\deVCU_Rev2\JayemCodeReleaseRev2.2\JayemCodeRelease\01_Software\01_Code\APP' 
    %Build_Cfg();
    deMCD_types('load');
    app_types('load');
    status = {};
    Generation_OK = 1;

    cd app_Main1msMgr
    status_app_Main1msMgr = deMCD('app_Main1msMgr');
    status = [status; {'app_Main1msMgr', status_app_Main1msMgr}];
    cd ..
status_app_Main1msMgr
    cd app_Main10msMgr
    status_app_Main10msMgr = deMCD('app_Main10msMgr');
    status = [status; {'app_Main10msMgr', status_app_Main10msMgr}];
    cd ..

    cd app_Main50msMgr
    status_app_Main50msMgr = deMCD('app_Main50msMgr');
    status = [status; {'app_Main50msMgr', status_app_Main50msMgr}];
    cd ..

    cd app_Main100msMgr
    status_app_Main100msMgr = deMCD('app_Main100msMgr');
    status = [status; {'app_Main100msMgr', status_app_Main100msMgr}];
    cd ..

    status_rte = deMCD_rte(xmlFrameworkName);
    status = [status; {'RTE LAYER', status_rte}];

    

    disp('Generation Report')

    [r,c] = size(status);
    for i=1:r
        if(strcmp(status{i,2},'STATUS_OK')==1)
            disp([status{i,1} ' ' status{i,2}])
        else
            Generation_OK = 0;
            fprintf(2,[status{i,1} ' ' status{i,2} '\n']);
        end
    end
    disp('Generation Report End')