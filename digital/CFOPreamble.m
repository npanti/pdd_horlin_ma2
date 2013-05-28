function CFOPreamble(in)
%CFO_PREAMBLE Summary of this function goes here
%   Detailed explanation goes here

global d

d.CFO = 0;
if d.enableCFO
    phaseShift = angle(transpose(in(d.subCarriers+1:end))*conj(in(1:d.subCarriers)));

    d.CFO = phaseShift/(d.subCarriers*d.Ts);
end

end

