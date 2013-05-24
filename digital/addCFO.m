function out = addCFO(in)
%ADDCFO Summary of this function goes here
%   Detailed explanation goes here
global d

Ts = 1/d.bandwidth;
delta_omega = -pi/(d.subCarriers*Ts) + 2*pi/(d.subCarriers*Ts)*rand(1);
n = 1:length(in);

out = in*exp(1i*delta_omega*n);

end

