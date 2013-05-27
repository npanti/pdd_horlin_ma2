function out=cyclicPrefixInsertion(input)

global d

out=zeros(d.subCarriers+d.cyclicPrefix,d.OFDM);

out(1:d.cyclicPrefix,:)=input(end-d.cyclicPrefix+1:end,:);
out(d.cyclicPrefix+1:end,:)=input(1:end,:);

end