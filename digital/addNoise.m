function out=addNoise(input,SNR,Ps)


%added noise
N=sqrt(Ps/2)*10^(-SNR/20)*(randn(size(input))+1i*randn(size(input)));

out=input+N;
end