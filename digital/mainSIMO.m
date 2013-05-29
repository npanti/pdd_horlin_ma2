clear all
close all

%% Initialisation
global d
d=struct(...
    'M',16,...                          %constellation size
    'SNRMin',30,...                     %SNR in dB
    'SNRStep',1,...                     %Step
    'SNRMax',30,...                     %SNR in dB
    'subCarriers',64,...                %subcarriers per OFDM symbol
    'cyclicPrefix',32,...               %carriers in CP
    'messageLength',64*1024*6,...        %bits sent
    'numberPreamble',2,...              %OFDM symbols in preamble
    'cyclicPrefixPreamble',64,...       %carriers in CP of preamble
    'preambleBoost',1.5,...             %amplitude boost of preamble
    'synchronisationPlots',0,...        %1=on 0=off
    'pilotPattern',4,...                %Pilot pattern used (1~5)
    'RXAntenna',4,...                   %number of RX Antenna (1=SISO, >1=SIMO)
    'bandwidthMeasured',400e6,...       %bandwidth of channel measured
    'bandwidth',20e6,...                 %bandwidth available
    'enableCFO',1 ...                   %enable CFO (on=1, off=0)
    );

%CFO
d.Ts = 1/d.bandwidth;
phaseCFO = 10e3*d.Ts*d.subCarriers;
    
%Channel characteristics
load('channelsLOSS.mat')
channel=[H1;H2;H3;H4];
step_20mhz=(length(channel)-1)*d.bandwidth/d.bandwidthMeasured;
channel_20mhz=channel(:,100-step_20mhz/2:100+step_20mhz/2);
impChannel_20mhz=zeros(d.RXAntenna,length(channel_20mhz(1,:)));
for i=1:d.RXAntenna
impChannel_20mhz(i,:)=ifft(channel_20mhz(i,:));    
end
impChannel_20mhz=transpose(impChannel_20mhz);

%dependent parameters computation
d.bitsPerSymbol=log2(d.M);
d.OFDM=d.messageLength/d.bitsPerSymbol/d.subCarriers;
SNR=d.SNRMin:d.SNRStep:d.SNRMax;
d.SNRIterations=(d.SNRMax-d.SNRMin)/d.SNRStep+1;
BER=zeros(2,d.SNRIterations);
BER(2,:)=SNR;

%% TX
%PREAMBLE
%preamble generation
preambleBits=round(rand(d.subCarriers*d.bitsPerSymbol,1));
%Replicate preamble
preambleBits=repmat(preambleBits,d.numberPreamble,1);
d.preamble=preambleBits;
%preamble mapping
preamble=modulation(preambleBits,d.M);
d.preambleConstellations=preamble(1:d.subCarriers);
%Serial to Parallel
preamble=imux(preamble,d.subCarriers);
%OFDM Modulation
preamble=OFDMModulation(preamble);
d.preambleOFDM=preamble(:,1);
%Parallel to Serial
preamble=mux(preamble);
%Cyclic Prefix insertion
preamble=cyclicPrefixInsertionPreamble(preamble);
%Preamble boosting
preamble=preamble*d.preambleBoost;
d.preambleLength=length(preamble);

%DATA
%random message generation
bitsTX=round(rand(d.messageLength, 1));
d.data=bitsTX;
%data bits mapping
data=modulation(bitsTX,d.M);
%Serial to Parallel
data=imux(data,d.subCarriers);
%Pilots insertion
data=pilotInsertion(data);
%OFDM Modulation
data=OFDMModulation(data);
%Cyclic Prefix insertion
data=cyclicPrefixInsertion(data);
%Parallel to Serial
data=mux(data);
d.dataLength=length(data);

%MESSAGE CONSTRUCTION
s=[preamble; data];
d.signalLength=length(s);

%% Channel
%Channel Convolution
rConv=zeros(d.signalLength,d.RXAntenna);
%TO BE COMPLETED in order to have several channels
for i=1:d.RXAntenna
    rConv(:,i)=convChannel(s,impChannel_20mhz(:,i));
end
%Power calculation
Ps=zeros(1,d.RXAntenna);
for i=1:d.RXAntenna
    Ps(i)=signalPower(rConv(:,i));
end
%Introducing time shift (for synchro)
temp=zeros(d.signalLength+200,d.RXAntenna);
for i=1:d.RXAntenna
    temp(:,i)=[zeros(100,1);rConv(:,i);zeros(100,1)];
end
clear rConv; rConv=temp; clear temp;
%Loop for SNR
index=1;
while(index<length(SNR)+1)
%Noise
disp(['SNR=', num2str(SNR(index))]);
r=zeros(d.signalLength+200,d.RXAntenna);
for i=1:d.RXAntenna
r(:,i)=addNoise(rConv(:,i),SNR(index),Ps(i));
end
%Add CFO
for i=1:d.RXAntenna
    r(:,i)=addCFO(r(:,i),phaseCFO);
end

%% RX
%Time synchronisation
startIndex=zeros(1,d.RXAntenna);
%startIndex(:)=101;
for i=1:d.RXAntenna
    %startIndex(i)=timeSynchronisation(r(:,i));
    startIndex(i)=timeSynchronisationSIMO_mex(r(:,i));
end
%Acquire frame
frame=zeros(d.signalLength,d.RXAntenna);
for i=1:d.RXAntenna
    frame(:,i)=r(startIndex:startIndex+d.signalLength-1,i);
end
%Separate preamble from data
preambleRX=zeros(d.preambleLength,d.RXAntenna);
dataRX=zeros(d.dataLength,d.RXAntenna);
for i=1:d.RXAntenna
    preambleRX(:,i)=frame(1:d.preambleLength,i);
    dataRX(:,i)=frame(d.preambleLength+1:end,i);
end

%CFO
%Preamble "de-boost"
preambleRX=preambleRX/d.preambleBoost;
%Remove cylic prefix
temp=zeros(d.preambleLength-d.cyclicPrefixPreamble,d.RXAntenna);
for i=1:d.RXAntenna
    temp(:,i)=preambleRX(d.cyclicPrefixPreamble+1:end,i);
    CFO = CFOPreamble(temp(:,i));
    r(:,i) = CFOCorrection(r(:,i),CFO);
end
clear preambleRX; preambleRX=temp; clear temp;
%Acquire frame
frame=zeros(d.signalLength,d.RXAntenna);
for i=1:d.RXAntenna
    frame(:,i)=r(startIndex:startIndex+d.signalLength-1,i);
end
%Separate preamble from data
preambleRX=zeros(d.preambleLength,d.RXAntenna);
dataRX=zeros(d.dataLength,d.RXAntenna);
for i=1:d.RXAntenna
    preambleRX(:,i)=frame(1:d.preambleLength,i);
    dataRX(:,i)=frame(d.preambleLength+1:end,i);
end


%PREAMBLE
%Preamble "de-boost"
preambleRX=preambleRX/d.preambleBoost;
%Remove cylic prefix
temp=zeros(d.preambleLength-d.cyclicPrefixPreamble,d.RXAntenna);
for i=1:d.RXAntenna
    temp(:,i)=preambleRX(d.cyclicPrefixPreamble+1:end,i);
end
clear preambleRX; preambleRX=temp; clear temp;
%Serial to parallel
temp=zeros(d.subCarriers,length(preambleRX(:,1))/d.subCarriers,d.RXAntenna);
for i=1:d.RXAntenna
    temp(:,:,i)=imux(preambleRX(:,i),d.subCarriers);
end
clear preambleRX; preambleRX=temp; clear temp;
%OFDM Demodulation
for i=1:d.RXAntenna
    preambleRX(:,:,i)=OFDMDemodulation(preambleRX(:,:,i));
end
%Channel Estimation
estimatedChannel=zeros(d.subCarriers,d.RXAntenna);
for i=1:d.RXAntenna
    estimatedChannel(:,i)=channelEstimation(preambleRX(:,:,i));
end
%"SIMO to SISO"
temp=mean(preambleRX,3);
clear preambleRX; preambleRX=temp; clear temp;
%Parallel to Serial
preambleRX=mux(preambleRX);
%Demapping
preambleBitsRX=demodulation(preambleRX,d.M);

%DATA
%Serial to Parallel
temp=zeros(d.subCarriers+d.cyclicPrefix,d.OFDM,d.RXAntenna);
for i=1:d.RXAntenna
    temp(:,:,i)=imux(dataRX(:,i),d.subCarriers+d.cyclicPrefix);
end
clear dataRX; dataRX=temp; clear temp;
%Remove cyclic prefix
temp=zeros(d.subCarriers,d.OFDM,d.RXAntenna);
for i=1:d.RXAntenna
    temp(:,:,i)=removeCyclicPrefix(dataRX(:,:,i),d.cyclicPrefix);
end
clear dataRX; dataRX=temp; clear temp;
%OFDM Demodulation
for i=1:d.RXAntenna
    dataRX(:,:,i)=OFDMDemodulation(dataRX(:,:,i));
end
%Channel Equalisation
for i=1:d.RXAntenna
    dataRX(:,:,i)=channelEqualisation(dataRX(:,:,i),estimatedChannel(:,i));
end

%CFO Tracking
for i=1:d.RXAntenna
    dataRX(:,:,i)=CFOTracking(dataRX(:,:,1));
end

%Pilots removal
for i=1:d.RXAntenna
    dataRX(:,:,i)=pilotDetection(dataRX(:,:,1));
end

%SIMO to SISO
temp=mean(dataRX,3);
clear dataRX; dataRX=temp; clear temp;
%Parallel to Serial
dataRX=mux(dataRX);
%Demapping
bitsRX=demodulation(dataRX,d.M);

%% Statistics
%BER Calculation
BERPreamble=BERCalculationSIMO_mex(preambleBitsRX,0);
BER(1,index)=BERCalculationSIMO_mex(bitsRX,1);

%stop the loop if BER=0
if(BER(1,index)==0)
    index=length(BER)+1;
else
    index=index+1;
end
end %while BER~=0

%% Plots
BERPlot(BER);
