function out = CFOCorrection(in, CFO)
%CFOCORRECTION Summary of this function goes here
%   Detailed explanation goes here

global d
Ts = 1/d.bandwidth;

n = 1:length(in);

out = in*exp(-1i*CFO*n*Ts);

end

