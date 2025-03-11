function Build_Cfg()

global BuildDestination
global xmlFrameworkName;
%global OutputName;
global BuildOK;

global Jenkins;
global JenkinsBranch;
BuildDestination = 'c:\TapasTemp\OUT\03_Bin\';
xmlFrameworkName = 'icat_vcu.fwxml';
%OutputName = 'ICAT_VCU';

BuildOK = false;

Jenkins = false;
JenkinsBranch = 'master';
addpath(genpath('..\..\..\'));
try
	mkdir(BuildDestination)
end

end

