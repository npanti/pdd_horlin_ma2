function out=addCFO(input)

global d

out=input.*exp(1i*d.Ts*((1:length(input)).'-1)*d.CFO);

end