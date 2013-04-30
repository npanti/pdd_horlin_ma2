function noised_signal = addAWGN(input_signal,SNR)
%ADDAWGN Add an AWGN

AWGN = comm.AWGNChannel('NoiseMethod','Signal to noise ratio (SNR)','SNR',SNR);
noised_signal = step(AWGN,input_signal);

clear AWGN;

end

