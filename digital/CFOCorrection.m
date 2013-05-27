function out = CFOCorrection(in)
%CFOCORRECTION Summary of this function goes here
%   Detailed explanation goes here

global d

n=1:length(in);
out = in.*exp(-1i*d.CFO*d.Ts*transpose(n));

end

