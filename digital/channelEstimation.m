function out=channelEstimation(received)

global d

meanReceived=mean(received,2);
out=meanReceived./d.preambleConstellations;

end