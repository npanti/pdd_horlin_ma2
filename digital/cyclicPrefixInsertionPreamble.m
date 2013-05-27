function out=cyclicPrefixInsertionPreamble(input)

global d

out=zeros(d.numberPreamble*d.subCarriers+d.cyclicPrefixPreamble,1);

out(1:d.cyclicPrefixPreamble)=input(end-d.cyclicPrefixPreamble+1:end);
out(d.cyclicPrefixPreamble+1:end)=input;

end