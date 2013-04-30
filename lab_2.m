load('Loc1.mat');
frequencyResponse = [];

for x=1:6
   for y=1:6
       for z=1:6
           frequencyResponse = [frequencyResponse abs(mean(data{x}{y}{z}{1}{1}{1}))];
       end
   end
end


%Fit distribution
[s, sigma] = mle(frequencyResponse,'distribution','rician');
%cf Wikipedia http://en.wikipedia.org/wiki/
s 
sigma
A = s^2 + 2*sigma^2;
K = s^2/(2*sigma^2);


%% Rice factor variation in function of delay
B = [];
for i=1:20:200
    
    impulseResponse = [];
    for x=1:6
       for y=1:6
           for z=1:6
               ifft_tmp = ifft(abs(data{x}{y}{z}{1}{1}{1}(i)));
               impulseResponse = [impulseResponse ifft_tmp];
           end
       end
    end
    B = [B mle(impulseResponse,'distribution','Rayleigh')];
end


x=0:20e-4/100:20e-4;
for i=1:1:length(B)
   
   i_tmp = i;
   ray = raylpdf(x,B(i));
   %plot(x,ray);
   
   color=[0 0 1;0 0.500000000000000 0;1 0 0;0 0.750000000000000 0.750000000000000;0.750000000000000 0 0.750000000000000;0.750000000000000 0.750000000000000 0;0.250000000000000 0.250000000000000 0.250000000000000];
   if i_tmp > length(color)
       i_tmp = i_tmp - floor((i_tmp-1)/length(color))*length(color);
   end
   plot(x,ray,'Color',color(i_tmp,:));
   hold all;

end

%% Power Delay Profile (PDP)
frequency = zeros(1,length(data{x}{y}{z}{1}{1}{1}));
for x=1:6
   for y=1:6
       for z=1:6
           frequencyResponse = frequencyResponse + abs(data{x}{y}{z}{1}{1}{1}.^2);
       end
   end
end
frequencyResponse = frequencyResponse/(6*6*6);

