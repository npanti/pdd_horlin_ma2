function BERPlot(BER)

semilogy(BER(end,:),BER(1,:),'linewidth',1.5);
xlabel('SNR(dB)');
ylabel('BER');
grid on;

end