function CFO = CFOPreamble(in)
%CFO_PREAMBLE Summary of this function goes here
%   Detailed explanation goes here

global d

%in = 64x2

inPhase = arg(in);

%D�phasage entre les deux pr�ambule
dPhase = inPhase(:,2) - inPhase(:,1);

%Calcul du CFO
Ts = 1/d.bandwidth;
CFO = mean(dPhase)/(d.subCarriers*Ts);

%Correction
%out = in.*exp(-1i*CFO);

end

