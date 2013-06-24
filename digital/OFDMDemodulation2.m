function out=OFDMDemodulation2(input,FFTSize)

[x,y]=size(input);
out=zeros(FFTSize,y);

for i=1:y
    out(:,i)=ifftshift(fft(input(:,i),FFTSize));
end

end
