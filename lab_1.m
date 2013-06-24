bandwidth = 20e6;
bandwidth_measure = 400e6;
step = 201;
start_freq = 2.5e6;
stop_freq = 2.9e6;
load('loss');

%% 200 to 20MHz

%Methode 1: on frequency response
% 200MHz/500 = 400kHz
% => 20MHz/400kHz = 50 points
%
step_20mhz = (step-1)*bandwidth/bandwidth_measure;
data_20mhz = data{1}{1}{1}{1}{1}{1}(100-step_20mhz/2:100+step_20mhz/2);
data_ifft_20mhz = ifft(data_20mhz);

% figure(1);
% subplot(2,2,1:2);
% plot(abs(data_20mhz));
% subplot(2,2,3);
% stem(abs(data_ifft_20mhz));
% hold on;

% load('nloss');
% step_20mhz = (step-1)*bandwidth/bandwidth_measure;
% data_20mhz = data{1}{1}{1}{1}{1}{1}(100-step_20mhz/2:100+step_20mhz/2);
% data_ifft_20mhz = ifft(data_20mhz);
% stem(abs(data_ifft_20mhz),'r');

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
%plot(abs(data_ifft_20mhz_m2));

%% Comparaison impulse response NLOSS & LOSS
% load('nloss');
% plot(abs(ifft(data{1}{1}{1}{1}{1}{1})));
% hold on;
% grid on;
% load('loss');
% plot(abs(ifft(data{1}{1}{1}{1}{1}{1})),'-r');
% load('freq');
% %set(gca,'XTickLabel',freq);
% set(gca,'YTickLabel',get(gca,'YTick')/1e-3);
% %xlabel('Frequency [GHz]');
% xlabel('Tap');
% ylabel('Power [mW]');

%% Comparaison 400MHz vs 20MHz
load('loss');
%data = data{1}{1}{1}{1}{1}{1};
%data_20mhz = data(100-step_20mhz/2:100+step_20mhz/2);
