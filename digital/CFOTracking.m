function out = CFOTracking(in)
%CFOTRACKING Summary of this function goes here
%   Detailed explanation goes here

global d


%% On récupère les pilotes
pilots = zeros(d.numberPilots,d.OFDM);
i=1;
for subC = 1:d.subCarriers
    if d.maskPilots(subC)
        pilots(i,:) = in(subC,:);
        i=i+1;
    end
end

%% On calcule le déphasage entre deux symboles adjacants
phaseShift = zeros(d.numberPilots,d.OFDM);
for i=2:size(pilots,2)
    
    phaseShift(:,i) = angle(pilots(:,i).*conj(pilots(:,i-1)));
    
end

phaseShift = mean(phaseShift,1);
CFO = cumsum(phaseShift);

%sum(mean(rad2deg(phaseShift),1))

%% Correction
out = zeros(size(in));
for subC = 1:d.subCarriers
    out(subC,:) = in(subC,:).*exp(-1i*CFO);
end

end

