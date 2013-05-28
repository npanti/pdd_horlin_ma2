function out = CFOTracking(in)
%CFOTRACKING Summary of this function goes here
%   Detailed explanation goes here

global d


%% On récupère les pilotes
pilots = zeros(d.numberPilots,d.OFDM);
i=1;

%On passe les sous porteuse en revue (64 dans notre cas)
for subC = 1:d.subCarriers
    
    %Si on tombe sur un sous porteuse pilote
    if d.maskPilots(subC)
        pilots(i,:) = in(subC,:);
        i=i+1;
    end
end

%A la fin on obtient uniquement les sous porteuses contenant les pilotes


%% On calcule le déphasage entre deux symboles adjacants d'une même sous porteuse
phaseShift = zeros(d.numberPilots,d.OFDM);
for i=2:size(pilots,2)
    
    phaseShift(:,i) = angle(pilots(:,i).*conj(pilots(:,i-1)));
    
end

%On moyenne le déphasage pour un symbole sur chaque sous porteuse
phaseShift = mean(phaseShift,1);

%On calcule le déphasage cummulé sur chaque symbole
CFO = cumsum(phaseShift);

%sum(mean(rad2deg(phaseShift),1))

%% Correction
out = zeros(size(in));
for subC = 1:d.subCarriers
    out(subC,:) = in(subC,:).*exp(-1i*CFO);
end

end

