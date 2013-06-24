clear all
clc
close all


load('loss.mat');

bandwidth = 20e6;
bandwidth_measure = 400e6;
step = 201;
start_freq = 2.5e6;
stop_freq = 2.9e6;

pos_step=0.03;

step_20mhz = (step-1)*bandwidth/bandwidth_measure;
%data_20mhz = data{1}{1}{1}{1,1}{1,1}{1,1}(100-step_20mhz/2:100+step_20mhz/2);

%% Beamformer

freq = 2.7e9;
lambda = 3e8/freq;

theta_step=100;
phi_step=100;

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

% for k=1:30
%     c=reshape(a(k,:,:),theta_step,phi_step);
%     pcolor(abs(c));
%     pause(1/4);
%     
% end

    close all
    scrsz = get(0,'ScreenSize');
    fig = figure ;
    %load('MyColormaps','mycmap')
    %set(fig,'Colormap',mycmap)
    panoramicPicture = imread(sprintf('ImageFinal.jpg'));
    im = image([0:360],[0:1:180],panoramicPicture) ;
    hold on;
    axis image
   
    for t=1:30
        bb=pcolor(([0:phi_step-1]*2*pi./(phi_step-1))*180./pi, ([0:theta_step-1]./(theta_step-1)*pi)*180/pi, squeeze(abs(a(t,:,:))));
        set(bb,'FaceAlpha',0.65,'EdgeAlpha',0);
        caxis([0  max(max(max(abs(a(:,:,:)))))]);
        cbar = colorbar;
        set(cbar,'CLim',[0  max(max(max(abs(a(:,:,:)))))]);
        title(['Tap ' num2str(t)]);
        axis tight;
        % lighting phong
        set(gcf,'Renderer','OpenGL')
        F(t) = getframe(1);
        im = frame2im(F(t));
        [imind,cm] = rgb2ind(im,256);
%         if t == 1;
%             imwrite(imind,cm,'hinhin.gif','gif', 'Loopcount',inf);
%         else
%             imwrite(imind,cm,'hinhin.gif','gif','WriteMode','append');
%         end
saveas(gcf,['anim-' num2str(t) '.jpg'])
       
        %pause(0.25);
        delete(bb);
    end
   
movie2avi(F, 'los.avi','fps', 2);
