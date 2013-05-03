bandwidth = 20e6;
bandwidth_measure = 200e6;
step = 201;
start_freq = 2.6e6;
stop_freq = 2.8e6;

%% 200 to 20MHz

%Methode 1: on frequency response
% 200MHz/500 = 400kHz
% => 20MHz/400kHz = 50 points
%
step_20mhz = (step-1)*bandwidth/bandwidth_measure;
data_20mhz = data{1,1}{1,1}{1,1}{1,1}{1,1}{1,1}(100-step_20mhz/2:100+step_20mhz/2);
data_ifft_20mhz = ifft(data_20mhz);


% figure(1);
% subplot(2,2,1:2);
% plot(abs(data_20mhz));
% subplot(2,2,3);
% plot(abs(data_ifft_20mhz));

%Methode 2: on time-domain respone
%step_time_domaine = 1/200MHz = 5ns => 500*5ns = 2500ns
%step_20mhz_time_domaine = 1/20MHz = 50ns => 2500/50 = 50 points
%
% data_ifft = ifft(data{1,1}{1,1}{1,1}{1,1}{1,1}{1,1});
% data_ifft_20mhz_m2 = zeros(1,bandwidth/bandwidth_measure*(step-1));
% for s=1:1:bandwidth/bandwidth_measure*(step-1)
%     data_ifft_20mhz_m2(s)=sum(data_ifft(1+s:bandwidth/bandwidth_measure*(step-1):end));
% end
% 
% subplot(2,2,4);
% plot(abs(data_ifft_20mhz_m2));
