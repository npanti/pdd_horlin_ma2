load('loss.mat');
frequencyResponse = [];

bandwidth_measure = 400e6;
step = 201;

max_x = length(data);
max_y = length(data{1});
max_z = length(data{1}{1});

for x=1:max_x
   for y=1:max_y
       for z=1:max_z
           frequencyResponse = [frequencyResponse abs(mean(data{x}{y}{z}{1}{1}{1}))];
       end
   end
end


%Fit distribution
[param, ~] = mle(frequencyResponse,'distribution','rician');
%cf Wikipedia http://en.wikipedia.org/wiki/
%param(1) = s
%param(2) = sigma

A = param(1)^2 + 2*param(2)^2;
K = param(1)^2/(2*param(2)^2);


%% Rice factor variation in function of delay
B = [];
for i=1:20:200
    
    impulseResponse = [];
    for x=1:max_x
       for y=1:max_y
           for z=1:max_z
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
   %plot(x,ray,'Color',color(i_tmp,:),'DisplayName',num2str(i));
   %hold all;

end

%% Power Delay Profile (PDP)
%frequency = zeros(1,length(data{max_x}{max_y}{max_z}{1}{1}{1}));
PDP = zeros(1,length(data{max_x}{max_y}{max_z}{1}{1}{1}));

for x=1:max_x
   for y=1:max_y
       for z=1:max_z
           impulseResponse = ifft(data{x}{y}{z}{1}{1}{1});
           PDP = PDP + abs(impulseResponse.^2);
           %frequencyResponse = frequencyResponse + abs(data{x}{y}{z}{1}{1}{1}.^2);
       end
   end
end

PDP = PDP/(max_x*max_y*max_z);
PDP_t = sum(PDP);

%stem(PDP);

%% Delay Spread
t = 0:1/bandwidth_measure:(step-1)/bandwidth_measure;
t_m = 1/PDP_t*sum(t.*PDP);
delay_spread = sqrt(1/PDP_t*sum(t.^2.*PDP)-t_m^2)

%% Coherence distance
delta_fc = 1/(2*pi*delay_spread)
