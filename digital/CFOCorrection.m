function out = CFOCorrection(input,CFO)

global d

out = input.*exp(-1i*d.Ts*((1:length(input)).'-1)*CFO);

end