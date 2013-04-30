function errorRate(bits,receivedBits)
%ERRORRATE Calculate error rate

%ErrorRate = comm.ErrorRate;
%disp(step(ErrorRate,bits,receivedBits));

disp(sum(abs(bits.'-receivedBits.'))/length(bits));

clear ErrorRate;

end

