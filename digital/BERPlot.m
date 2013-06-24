function BERPlot(BER)

figure()
semilogy(BER(end,:),BER(1,:),'r','linewidth',1.5);
xlabel('SNR(dB)');
ylabel('BER');
grid on;

end