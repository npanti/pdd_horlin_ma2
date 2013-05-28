function out = addCFO(in,phaseCFO)
%ADDCFO Summary of this function goes here
%   Detailed explanation goes here
global d

out = in;

if d.enableCFO
    %CFO = -pi/(2*d.subCarriers*d.Ts) + 2*pi/(2*d.subCarriers*d.Ts)*rand(1);
    CFO = phaseCFO/(d.Ts*d.subCarriers);
    
    n = 1:length(in);
    out = in.*exp(1i*CFO*d.Ts*transpose(n));
end

end

