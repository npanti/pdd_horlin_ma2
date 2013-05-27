function out=channelEqualisation(input,channel)

global d

[x,y]=size(input);
out=zeros(x,y);

for i=1:d.OFDM
    out(:,i)=input(:,i)./channel;
end

end