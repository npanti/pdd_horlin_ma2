function out=CFOTracking(input)

global d
out=zeros(size(input));
out(:,1)=input(:,1);

phaseEstimated=zeros([d.numberPilots d.OFDM]);

for z=2:d.OFDM
    phaseEstimated(:,z)=0;
    for j=1:d.numberPilots
        channelID=j*12;
        errorPhase=phase(input(channelID,z)*conj(out(channelID,z-1)));
        phaseEstimated(j,z)=errorPhase;
        out(:,z)=out(:,z)+input(:,z)*exp(-1i*phaseEstimated(j,z));
    end
    out(:,z)=out(:,z)/d.numberPilots;
end

for j=1:d.numberPilots
    phaseEstimated(j,:)=unwrap(phaseEstimated(j,:).',pi/2);
end
%plot(transpose(phaseEstimated))
phaseEstimatedFinal=mean(phaseEstimated,1);
for i=1:d.OFDM
    out(:,i)=input(:,i)*exp(-1i*mean(phaseEstimatedFinal(:,i)));
end
d.estimatedCFO=mean(phaseEstimatedFinal./(1:d.OFDM));
end