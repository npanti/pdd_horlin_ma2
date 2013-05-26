function out = CFOCorrection(in, CFO)
%CFOCORRECTION Summary of this function goes here
%   Detailed explanation goes here

global d
Ts = 1/d.bandwidth;

%n = startIndex:length(in)+startIndex-1;
n=1:length(in);

out = in.*exp(-1i*CFO*Ts*transpose(n));

end

