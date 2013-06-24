clear all;

close all;

load nloss
load freq
load config

%% Impulse response loading

impulseResponsesFreq = zeros([6*6*6 length(data{1,1}{1,1}{1,1}{1,1}{1,1}{1,1}(:))]);
positions = zeros([6*6*6 3]);

r = 1;
for t=1:1
    for j=1:6
        for z=1:1
            % Impulse response in the frequency domain
            impulseResponsesFreq(r,:) = data{1,t}{1,j}{1,z}{1,1}{1,1}{1,1}(:);
            positions(r,1) = (t-1)*value.dX*0.01; % Position on the x axis (in meters)
            positions(r,2) = (j-1)*value.dY*0.01; % Position on the y axis (in meters)
            positions(r,3) = (z-1)*value.dZ*0.01; % Position on the z axis (in meters)
            r = r + 1;
        end
    end
end

clear t j z

%% Transform freq domain to time domain

impulseResponsesTime = zeros([6*6*6 length(data{1,1}{1,1}{1,1}{1,1}{1,1}{1,1}(:))]);

for t=1:(6*6*6)
    impulseResponsesTime(t,:) = ifft(impulseResponsesFreq(t,:));
end

clear t


%% Computation of the spatial correlation

nbPoints = 6*6*6; % max 6*6*6

distanceVector = zeros([1 nbPoints]); 
spatialCorrVector = zeros([1 nbPoints]); 

% Reference point
distanceVector(1) = 0;
spatialCorrVector(1) = 1;

sigmah1 = realsqrt(mean(abs(impulseResponsesFreq(1,:)-mean(impulseResponsesFreq(1,:))).^2));
h1minusEh1 = impulseResponsesFreq(1,:)-mean(impulseResponsesFreq(1,:));


for z=2:nbPoints
    % Reminder: position of point 1 = (0,0,0)
    distanceVector(z) = norm(positions(z,:),2);
    
    sigmah2 = realsqrt(mean(abs(impulseResponsesFreq(z,:)-mean(impulseResponsesFreq(z,:))).^2));
    h2minusEh2 = impulseResponsesFreq(z,:)-mean(impulseResponsesFreq(z,:));
    spatialCorrVector(z) = mean(h1minusEh1.*conj(h2minusEh2))/(sigmah1*sigmah2);
end

figure
stem(distanceVector(:)*100, spatialCorrVector(:), 'MarkerSize', 6, 'Marker', '.');
xlabel('Distance [cm]'); ylabel('Spatial correlation');
grid on;






