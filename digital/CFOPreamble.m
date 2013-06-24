function CFO = CFOPreamble(in)

global d

temp=reshape(in,d.subCarriers,d.numberPreamble);

CFO=phase(temp(:,2).*conj(temp(:,1)));
CFO=mean(CFO)/(d.Ts*d.subCarriers);

end
