%script for creating ports with same name as subsystem

%GET The can block name by clicking on block
CanBlockName=getfullname(gcb);

%skip ports that starts with string
SkipPortString='';

parentSystem=get_param(CanBlockName, 'Parent');

%get block position
%BlockPosition=get(CanBlockName,'PortConnectivity')
%BlockPosition = Position{i,1}.Position




%portHandels
PortHandels=get_param(CanBlockName,'PortHandles');


%size of newly preated inports or outports
w = 30;
h = 15;

%get outports
h_Outports=find_system(CanBlockName,'FindAll','On','SearchDepth',1,'BlockType','Outport');
Name_Outports=get(h_Outports,'Name');
Position=get(PortHandels.Outport,'Position');


%loop through outports
[NoOfPorts x]=size(Position);
for i = 1:NoOfPorts
    %If there is only one port, result of Position is different
    if iscell(Position)
       xyPosition=Position(i);
       xPos=xyPosition{[1]}(1);
       yPos=xyPosition{[1]}(2);
       FullPortName=strcat(parentSystem,'/',Name_Outports{i});
       PortName=Name_Outports{i};
       To=strcat(Name_Outports{i},'/',num2str(1));
    else
        xPos=Position(1);
        yPos=Position(2);
        FullPortName=strcat(parentSystem,'/',Name_Outports);
        PortName=Name_Outports;
        To=strcat(Name_Outports,'/',num2str(1));
    end
    
    %calculate position
    pos = [xPos+150 yPos-h/2 xPos+w+150 yPos+h/2];
    parentSystem=get_param(CanBlockName, 'Parent');
    

    %only add if name doesent start with "SIM_"
    FindSimInput=strfind(PortName,SkipPortString);
    %if (isempty(FindSimInput) 
    if (isempty(FindSimInput) || FindSimInput > 1)
        %addblock
        add_block('built-in/Outport', FullPortName, 'MakeNameUnique', 'on','Position',pos);
        %add line
        add_line(parentSystem,strcat(get_param(CanBlockName,'Name'),'/',num2str(i)),To,'autorouting','on');
    end
end



%get inports
h_Inports=find_system(CanBlockName,'FindAll','On','SearchDepth',1,'BlockType','Inport');
Name_Inports=get(h_Inports,'Name');
Position2=get(PortHandels.Inport,'Position');


%loop through inports
[NoOfPorts x]=size(Position2);
for i = 1:NoOfPorts;
    if iscell(Position2)
       xyPosition=Position2(i);
       xPos=xyPosition{[1]}(1);
       yPos=xyPosition{[1]}(2);
    else
        xPos=Position2(1);
        yPos=Position2(2);
    end
    
    pos = [xPos-180 yPos-h/2 xPos+w-180 yPos+h/2];
    parentSystem=get_param(CanBlockName, 'Parent');
    if iscell(Name_Inports)
        FullPortName=strcat(parentSystem,'/',Name_Inports{i});
        PortName=Name_Inports{i};
        From=strcat(Name_Inports{i},'/',num2str(1));
    else
        FullPortName=strcat(parentSystem,'/',Name_Inports);
        PortName=Name_Inports;
        From=strcat(Name_Inports,'/',num2str(1));
    end
    
    %only add if name doesent start with "SIM_"
    FindSimInput=strfind(PortName,SkipPortString);
    if (isempty(FindSimInput) || FindSimInput > 1)
        add_block('built-in/Inport', FullPortName, 'MakeNameUnique', 'on','Position',pos);
        %add line
        To=strcat(get_param(CanBlockName,'Name'),'/',num2str(i));
        add_line(parentSystem,From,To,'autorouting','on');
    end
end