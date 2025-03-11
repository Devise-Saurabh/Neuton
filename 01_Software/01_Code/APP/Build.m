clear
clc

global BuildDestination;
global OutputName;
global JENKINS_BUILD_NUMBER;
global JENKINS_BUILD_USER;
global Jenkins;
global JenkinsBranch;
global BuildOK;

Build_Cfg();

FrameworkName='ICAT_VCU';
disp('Building Executable ...');
[status, results] = dos(['iarbuild ..\..\' FrameworkName '.ewp -build "Flash Debug"'], '-echo');
if(status==0)
   % errorCountCharDigit1 = results(end-29);
    errorCountCharDigit1 = results(end-50:end);
    errorCountCharDigit1=str2double(extractBetween(errorCountCharDigit1,'errors:',newline));
    if(errorCountCharDigit1 == 0)
        disp('Building executable was successful ...');
        try
            rmdir('Build','s');
        catch e
            % Do Nothing
        end

        clkid = clock();
        year = num2str(clkid(1));
        month = clkid(2);
        if(month < 10)
            month = ['0' num2str(month)];
        else
            month = num2str(month);
        end
        day = clkid(3);
        if(day < 10)
            day = ['0' num2str(day)];
        else
            day = num2str(day);
        end
        hour = clkid(4);
        if(hour < 10)
            hour = ['0' num2str(hour)];
        else
            hour = num2str(hour);
        end
        minute = clkid(5);
        if(minute < 10)
            minute = ['0' num2str(minute)];
        else
            minute = num2str(minute);
        end
		
        if(~isempty(BuildDestination))
			BuildName = [OutputName '_' year '_' month '_' day '_' hour '_' minute];
			mkdir(BuildName);
			copyfile(['..\..\Flash_Debug\Exe\' FrameworkName '.srec'],[BuildName '\' OutputName '.srec']);
			%copyfile(['..\..\Flash_Debug\Exe\' FrameworkName '.out'],[BuildName '\' OutputName '.out']);
			copyfile(['..\..\Flash_Debug\List\' FrameworkName '.map'],[BuildName '\' OutputName '.map']);
			copyfile(['..\..\Flash_Debug\List\' FrameworkName '.log'],[BuildName '\' OutputName '.log']);
			copyfile('..\..\01_Code\RTE\rte.h',[BuildName '\rte.h']);
			movefile(BuildName, BuildDestination);
			disp(['Build Name: ' BuildName]);
			%disp(['Build Location: ' BuildDestination '\' BuildName]);
        end
        
        copyfile('c:\Git\ICAT_VCU\01_Software\01_Code\RTE\rte.h','..\..\Flash_Debug\List\rte.h')
        BuildOK = true;
		
    else
        fprintf(2,['Building executable was not successful ...' '\n']);
    end
    
else
    fprintf(2,['Building executable commmand line command was not successful ...' '\n']);
end