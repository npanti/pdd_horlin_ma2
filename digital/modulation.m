function modulated_bits = modulation(bits,M)
%MODULATION Summary of this function goes here
%   Detailed explanation goes here

QAM = comm.RectangularQAMModulator(M,'SymbolMapping', 'Gray', 'BitInput', true);
modulated_bits = step(QAM,bits);

clear QAM;

end

