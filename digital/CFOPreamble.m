function CFO = CFOPreamble(in)
%CFO_PREAMBLE Summary of this function goes here
%   Detailed explanation goes here

global d

in = reshape(in,[],2);

inPhase = unwrap(angle(in));

%Déphasage entre les deux préambule

dPhase = inPhase(:,2) - inPhase(:,1);

%Calcul du CFO
Ts = 1/d.bandwidth;
CFO = wrapToPi(mean(dPhase))/(d.subCarriers*Ts)

end

