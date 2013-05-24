function noised_signal = addAWGN(input_signal,SNR)
%ADDAWGN Add an AWGN
power = abs(input_signal)*transpose(abs(input_signal))/length(input_signal)
power = 1;
AWGN = comm.AWGNChannel('NoiseMethod','Signal to noise ratio (SNR)','SNR',SNR, 'SignalPower', power);
noised_signal = step(AWGN,input_signal);

clear AWGN;

%noised_signal = input_signal + randn(size(input_signal))*10^(-SNR/20);

end

