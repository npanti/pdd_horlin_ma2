function index=timeSynchronisation(input)

global d
timeSyncOffSet=1;
x=zeros(1,d.subCarriers); %utilise pour calculer la correlation
indexMax=length(input)-2*length(x);
correlation=zeros(1,indexMax);

%Compute cross-correlation
for i=1:indexMax
    Ps=signalPower(input(i:d.subCarriers*d.numberPreamble+i-1));
    x=(input(i:d.subCarriers+i-1))';
    correlation(i)=abs(x*input(i+d.subCarriers:2*d.subCarriers+i-1));
    correlation(i)=correlation(i)/(64*Ps);
    %correlation(i)=abs(transpose(input(i:d.subCarriers*d.numberPreamble+i-1))*x);
end

%Compute mean of cross-correlation over d.cyclicPrefixPreamble values
correlationMean=zeros(1,indexMax-d.cyclicPrefixPreamble);
for j=1:indexMax-d.cyclicPrefixPreamble
    correlationMean(j)=mean(correlation(j:d.cyclicPrefixPreamble+j-1));
end

[m,index]=max(correlationMean);
index=index-timeSyncOffSet;

if(d.synchronisationPlots==1)
%figure();

subplot(2,1,1),plot(correlation(1:2000));
xlabel('Sample number');
ylabel('Auto-correlation');

%figure()
subplot(2,1,2),plot(correlationMean(1:2000));
xlabel('Sample number');
ylabel('Mean  of auto-correlation');
end

end