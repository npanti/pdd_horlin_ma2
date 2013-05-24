function bits = demodulation(received_signal,M)
%DEMODULATION Summary of this function goes here
%   Detailed explanation goes here

QAM = comm.RectangularQAMDemodulator(M,'SymbolMapping', 'Gray', 'BitOutput', true);
bits = step(QAM, received_signal);

clear QAM;

end

