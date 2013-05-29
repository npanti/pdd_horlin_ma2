function out=pilotInsertion(input)

global d

%symbol used in the pilots
referenceSymbol=1+1i;
d.referenceSymbol=referenceSymbol;

maskPilots=zeros(64,1);
maskData=ones(64,1);
switch d.pilotPattern
    case 1
        maskPilots(32)=1;
        maskData(32)=0;
        numberPilots=1;
    case 2
        maskPilots(16)=1;
        maskPilots(48)=1;
        maskData(16)=0;
        maskData(48)=0;
        numberPilots=2;
    case 3
        maskPilots(16)=1;
        maskPilots(32)=1;
        maskPilots(48)=1;
        maskData(16)=0;
        maskData(32)=0;
        maskData(48)=0;
        numberPilots=3;
    case 4
        maskPilots(12)=1;
        maskPilots(24)=1;
        maskPilots(36)=1;
        maskPilots(48)=1;
        maskData(12)=0;
        maskData(24)=0;
        maskData(36)=0;
        maskData(48)=0;
        numberPilots=4;
    case 5
        maskPilots(8) =1;
        maskPilots(16)=1;
        maskPilots(24)=1;
        maskPilots(32)=1;
        maskPilots(40)=1;
        maskPilots(48)=1;
        maskPilots(56)=1;
        maskPilots(64)=1;
        maskData(8) =0;
        maskData(16)=0;
        maskData(24)=0;
        maskData(32)=0;
        maskData(40)=0;
        maskData(48)=0;
        maskData(56)=0;
        maskData(64)=0;
        numberPilots=8;
end

d.maskData=maskData;
d.maskPilots=maskPilots;

pilotsMatrix=repmat(maskPilots,1,d.OFDM);
pilotsMatrix=pilotsMatrix*referenceSymbol;
dataMatrix=repmat(maskData,1,d.OFDM);
dataMatrix=dataMatrix.*input;

out=dataMatrix+pilotsMatrix;

d.data=demodulation(mux(out),d.M);

%modify the number of tranmistted bits to correctly compute the BER
d.messageLength=d.messageLength-d.OFDM*numberPilots*log2(d.M);

end
