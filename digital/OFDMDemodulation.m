function out=OFDMDemodulation(input)

[x,y]=size(input);
out=zeros(x,y);

for i=1:y
    out(:,i)=ifftshift(fft(input(:,i)));
end

end
