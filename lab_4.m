clear all
clc
close all


load('Loc1.mat');

bandwidth = 20e6;
bandwidth_measure = 200e6;
step = 201;
start_freq = 2.6e6;
stop_freq = 2.8e6;

pos_step=0.03;

step_20mhz = (step-1)*bandwidth/bandwidth_measure;
%data_20mhz = data{1}{1}{1}{1,1}{1,1}{1,1}(100-step_20mhz/2:100+step_20mhz/2);

%% Beamformer

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

for k=1:201
    c=reshape(a(k,:,:),theta_step,phi_step);
    imagesc(abs(c));
    pause(1/3);
    
end
