function out=OFDMModulation(input)

[x, y]=size(input);
out=zeros(x,y);

for i=1:y
    out(:,i)=ifft(fftshift(input(:,i)));
end

end