function Plot_image(sol,frameNumber)

close all
scrsz = get(0,'ScreenSize');
fig = figure ;
%load('MyColormaps','mycmap')
%set(fig,'Colormap',mycmap)
panoramicPicture = imread(sprintf('ImageFinal.jpg')); 
im = image([0:360],[0:1:180],panoramicPicture) ;
hold on;
axis image 


% for cc = 1 : frameNumber
% bb=pcolor(sol.phi*180/pi,sol.theta*180/pi,10*log10((abs(sol.a{cc})).^2));
% set(bb,'FaceAlpha',0.4,'EdgeAlpha',0); 
% caxis([-120 -65]);
% cbar = colorbar;
% set(cbar,'CLim',[35 80]);
% pause(0.01);
% delete(bb);
% end

for cc = 1 : frameNumber
bb=pcolor(sol.phi*180/pi,sol.theta*180/pi,10*log10((abs(sol.a{cc})).^2));
set(bb,'FaceAlpha',0.4,'EdgeAlpha',0); 
caxis([-120 -65]);
cbar = colorbar;
set(cbar,'CLim',[35 80]);
pause(0.01);
delete(bb);
end

