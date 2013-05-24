clc;
clear all;
close all;

%Load data
load('loss.mat');

%% Beamformer

bandwidth = 20e6;
bandwidth_measure = 400e6;
step = 201;
start_freq = 2.5e6;
stop_freq = 2.9e6;

pos_step=0.03;

step_20mhz = (step-1)*bandwidth/bandwidth_measure;

freq = 2.7e9;
lambda = 3e8/freq;

theta_step=30;
phi_step=60;

%Calcul de B(i,theta,phi)
tap = length(data{1}{1}{1}{1}{1}{1}(:));
h = zeros(6*6*6,tap);

i = 1;
for x=1:6
    for y=1:6
        for z=1:6
            for theta=1:theta_step
                for phi=1:phi_step
                    
                    t = theta/theta_step*pi;
                    p = 2*pi*phi/phi_step;
                    
                    B(i,theta,phi) = exp(1i*2*pi/lambda*(pos_step*x*sin(t)*cos(p)+pos_step*y*sin(t)*sin(p)+pos_step*z*cos(t)));
                end
            end
            
            h(i,:) = ifft(data{x}{y}{z}{1}{1}{1}(:));
            
            i = i + 1;
        end
    end
end

a = zeros(tap,theta_step,phi_step);

for p=1:phi_step
    a(:,:,p) = (h.')*B(:,:,p);
end

a = a/(6*6*6);

%% Physical Model

N = 30;

%Search the maximum beam
load('freq');
H = zeros(1,length(freq));
freq=freq*1e9;
x = rand(1)*2*lambda;
y = rand(1)*2*lambda;
z = rand(1)*2*lambda;
for tap=1:N
    Y = reshape(abs(a(tap,:,:)),theta_step,phi_step);
    [theta_max, phi_max] = find(Y==max(Y(:)));
    
    e1 = exp(1i*rand(1)*2*pi);
    e2 = exp(-1i*2*pi*freq*1/bandwidth_measure*(tap-1));
    e3 = exp(-1i*2*pi*freq/3e8*(cos(phi_max)*sin(theta_max)*x+sin(phi_max)*sin(theta_max)*y+cos(theta_max)*z));
    
    H = H + Y(theta_max,phi_max).*e1.*e2.*e3;
end

 