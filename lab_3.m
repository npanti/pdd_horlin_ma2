load('Loc1.mat');

bandwidth = 20e6;
bandwidth_measure = 200e6;
step = 201;
start_freq = 2.6e6;
stop_freq = 2.8e6;

step_20mhz = (step-1)*bandwidth/bandwidth_measure;
%data_20mhz = data{1,1}{1,1}{1,1}{1,1}{1,1}{1,1}(100-step_20mhz/2:100+step_20mhz/2);

%% Beamformer

freq = 2.7e9;
lambda = 3e8/freq;

%rho = zeros(6,6,6);
%phi = zeros(6,6,6);
%theta = zeros(6,6,6);
i = 1;
theta_step=10;
phi_step=20;
for x=1:6
    for y=1:6
        for z=1:6

%            theta=0:pi/10:pi;
%            phi=0:2*pi/20:2*pi;

            for theta=1:theta_step
                for phi=1:phi_step
                    
                    t = theta/theta_step*pi;
                    p = 2*pi*phi/phi_step;
                    
                    B(i,theta,phi) = exp(1i*2*pi/lambda*(x*sin(t)*cos(p)+y*sin(t)*sin(p)+z*cos(t)));
                    num(theta,phi) = num(theta,phi) + ifft(data{x}{y}{z}{1}{1}{1}(100-step_20mhz/2:100+step_20mhz/2))*B(i,theta,phi);
                    
                    %
                end
            end
            %h = h + ifft(data{x}{y}{z}{1}{1}{1}(100-step_20mhz/2:100+step_20mhz/2))*B(i,:,:);
            
            i = i + 1;
        end
    end
end 

B_sum = zeros();
for j=i
    
end