function out=pilotInsertion(input)

global d

%symbol used in the pilots
referenceSymbol1= 1+1i;
referenceSymbol2=-1+1i;
referenceSymbol3= 1-1i;
referenceSymbol4=-1-1i;
referenceSymbol5= 3+1i;
referenceSymbol6= 3+3i;
referenceSymbol7= 3-1i;
referenceSymbol8= 3-3i;

maskPilots=zeros(64,1);
maskPilotsTemp=zeros(64,1);
maskData=ones(64,1);
switch d.pilotPattern
    case 1
        referenceSymbol=referenceSymbol1;
        maskPilots(32)=1;
        maskPilotsTemp(32)=referenceSymbol(1);
        maskData(32)=0;
        numberPilots=1;
    case 2
        referenceSymbol=[referenceSymbol1; referenceSymbol2];
        maskPilots(16)=1;
        maskPilots(48)=1;
        maskPilotsTemp(16)=referenceSymbol(1);
        maskPilotsTemp(48)=referenceSymbol(2);
        maskData(16)=0;
        maskData(48)=0;
        numberPilots=2;
    case 3
        referenceSymbol=[   referenceSymbol1; referenceSymbol2;...
                            referenceSymbol3];
        maskPilots(16)=1;
        maskPilots(32)=1;
        maskPilots(48)=1;
        maskPilotsTemp(16)=referenceSymbol(1);
        maskPilotsTemp(32)=referenceSymbol(2);
        maskPilotsTemp(48)=referenceSymbol(3);
        maskData(16)=0;
        maskData(32)=0;
        maskData(48)=0;
        numberPilots=3;
    case 4
        referenceSymbol=[   referenceSymbol1; referenceSymbol2;... 
                            referenceSymbol3; referenceSymbol4];
        maskPilots(12)=1;
        maskPilots(24)=1;
        maskPilots(36)=1;
        maskPilots(48)=1;
        maskPilotsTemp(16)=referenceSymbol(1);
        maskPilotsTemp(24)=referenceSymbol(2);
        maskPilotsTemp(36)=referenceSymbol(3);
        maskPilotsTemp(48)=referenceSymbol(4);
        maskData(12)=0;
        maskData(24)=0;
        maskData(36)=0;
        maskData(48)=0;
        numberPilots=4;
    case 5
        referenceSymbol=[   referenceSymbol1; referenceSymbol2;...
                            referenceSymbol3; referenceSymbol4;...
                            referenceSymbol5; referenceSymbol6;...
                            referenceSymbol7; referenceSymbol8];
        maskPilots(8) =1;
        maskPilots(16)=1;
        maskPilots(24)=1;
        maskPilots(32)=1;
        maskPilots(40)=1;
        maskPilots(48)=1;
        maskPilots(56)=1;
        maskPilots(64)=1;
        maskPilotsTemp(8) =referenceSymbol(1);
        maskPilotsTemp(16)=referenceSymbol(2);
        maskPilotsTemp(24)=referenceSymbol(3);
        maskPilotsTemp(32)=referenceSymbol(4);
        maskPilotsTemp(40)=referenceSymbol(5);
        maskPilotsTemp(48)=referenceSymbol(6);
        maskPilotsTemp(56)=referenceSymbol(7);
        maskPilotsTemp(64)=referenceSymbol(8);
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
d.referenceSymbol=referenceSymbol;
d.referenceSymbolMatrix=maskPilotsTemp;
d.maskData=maskData;
d.maskPilots=maskPilots;


pilotsMatrix=repmat(maskPilotsTemp,1,d.OFDM);
dataMatrix=repmat(maskData,1,d.OFDM);
dataMatrix=dataMatrix.*input;

out=dataMatrix+pilotsMatrix;

d.data=demodulation(mux(out),d.M);

%modify the number of tranmistted bits to correctly compute the BER
d.messageLength=d.messageLength-d.OFDM*numberPilots*log2(d.M);

end