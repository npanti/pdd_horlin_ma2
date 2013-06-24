function BER=BERCalculation(bitsRX,type)

%type=0 ->preamble
%type=1 ->data

global d

if(type==1)
    incorrectBits=0;
    for m=1:length(bitsRX)
        if(bitsRX(m)~=d.data(m))
            incorrectBits=incorrectBits+1;
        end
    end
    BER=incorrectBits/d.messageLength;
    disp(['BER for data: ',num2str(BER)]);
end
if(type==0)
    incorrectBits=0;
    for m=1:length(bitsRX)
        if(bitsRX(m)~=d.preamble(m))
            incorrectBits=incorrectBits+1;
        end
    end
    BER=incorrectBits/length(bitsRX);
    disp(['BER for preamble: ',num2str(BER)]);
end

end