function CFO = CFOPreamble(in)
%CFO_PREAMBLE Summary of this function goes here
%   Detailed explanation goes here

global d

CFO = 0;
if d.enableCFO
    phaseShift = angle(transpose(in(d.subCarriers+1:end))*conj(in(1:d.subCarriers)));

    CFO = phaseShift/(d.subCarriers*d.Ts);
end

end

