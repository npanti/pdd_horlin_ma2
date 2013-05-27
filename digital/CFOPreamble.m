function CFOPreamble(in)
%CFO_PREAMBLE Summary of this function goes here
%   Detailed explanation goes here

global d

%in = reshape(in,[],2);

phaseShift = angle(transpose(in(d.subCarriers+1:end))*conj(in(1:d.subCarriers)));

d.CFO = phaseShift/(d.subCarriers*d.Ts);

%rad2deg(phaseShift)

end

