function out=signalPower(input)

sentBitsSize=length(input);
%out=input'*input/sentBitsSize;
%out=abs(out);
out=transpose(abs(input))*abs(input)/sentBitsSize;

end