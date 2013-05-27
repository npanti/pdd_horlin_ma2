function [out, CFO] = addCFO(in)
%ADDCFO Summary of this function goes here
%   Detailed explanation goes here
global d

CFO = -pi/(d.subCarriers*d.Ts) + 2*pi/(d.subCarriers*d.Ts)*rand(1);

%rad2deg(CFO*d.Ts*d.subCarriers)

n = 1:length(in);
out = in.*exp(1i*CFO*d.Ts*transpose(n));

end

