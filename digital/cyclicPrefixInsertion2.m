function out=cyclicPrefixInsertion2(input)

global d

out=zeros(d.samplingRate+d.cyclicPrefix,d.OFDM);

out(1:d.cyclicPrefix,:)=input(end-d.cyclicPrefix+1:end,:);
out(d.cyclicPrefix+1:end,:)=input(1:end,:);

end