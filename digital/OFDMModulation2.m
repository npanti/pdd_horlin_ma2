function out=OFDMModulation2(input,FFTSize)

[x, y]=size(input);
out=zeros(FFTSize,y);

for i=1:y
    out(:,i)=ifft(fftshift(input(:,i)),FFTSize);
end

end