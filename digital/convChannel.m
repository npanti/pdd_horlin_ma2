function out = convChannel( in,channel)
%UNTITLED Summary of this function goes here
%Detailed explanation goes here

%impulseResponse = ifft(channel);

out = conv(in,channel);
out = out(1:end-abs(length(out)-length(in)));

end

