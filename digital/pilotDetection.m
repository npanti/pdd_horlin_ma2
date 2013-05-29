function out=pilotDetection(input)

global d

%replacing pilots by the reference symbol
pilotsMatrix=repmat(d.referenceSymbolMatrix,1,d.OFDM);

dataMatrix=repmat(d.maskData,1,d.OFDM);
dataMatrix=dataMatrix.*input;
out=dataMatrix+pilotsMatrix;
end