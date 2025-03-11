clear
clc


% global xmlFrameworkName;
% global BuildOK;
% global Jenkins;
% global JenkinsBranch;


Build_Cfg();
tapas_types('load');
app_types('load');

status = {};
Generation_OK = 1;

% cd app_Main1msMgr
% status_app_Main1msMgr = tapas('app_Main1msMgr');
% status = [status; {'app_Main1msMgr', status_app_Main1msMgr}];
% cd ..

cd app_Main10msMgr
status_app_Main10msMgr = tapas('app_Main10msMgr');
status = [status; {'app_Main10msMgr', status_app_Main10msMgr}];
cd ..

% cd app_Main50msMgr
% status_app_Main50msMgr = tapas('app_Main50msMgr');
% status = [status; {'app_Main50msMgr', status_app_Main50msMgr}];
% cd ..

cd app_Main100msMgr
status_app_Main100msMgr = tapas('app_Main100msMgr');
status = [status; {'app_Main100msMgr', status_app_Main100msMgr}];
cd ..

status_rte = tapas_rte(xmlFrameworkName);
status = [status; {'RTE LAYER', status_rte}];

clc

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

% 
% if(Generation_OK == 1)
%     Build
%     
%     if(BuildOK)
%         if(Jenkins)
%             cd('../../../');
%             system(['git checkout ' JenkinsBranch '']);
%             system(['git commit -am "<Jenkins User: ' JENKINS_BUILD_USER '><Build ID: ' JENKINS_BUILD_NUMBER '> Jenkins Generated Files"']);
%             system('git pull');
%             system('git push');
%         end
%     end
% else
%     fprintf(2,['Code Gerneation was not OK ...' '\n']);
% end