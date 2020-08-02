%Noise scales with number of particles but not number of runs

load('noise_for', 'ans')
noise_forces= squeeze(ans.Data);
figure;histogram(abs(noise_forces(2, :)), 'EdgeColor' , 'none');
% figure;edges = [0:0.00001:0.0001];histogram(abs(noise_data(1, :)), edges);
%xlim([0 0.1]);
Ang = char(197); xlabel(['Force (amu ' Ang '/ps^2)']); ylabel('Bin Count')
%set(gca,'YScale','log')
%units are likely to be forces 
%experiment what units give best freq spectrum (ie divide by 7 for 1/amu)

load('noise_mom', 'ans')
noise_impulse= squeeze(ans.Data);
figure;histogram(abs(noise_impulse(2, :)), 'EdgeColor' , 'none');
% figure;edges = [0:0.00001:0.0001];histogram(abs(noise_data(1, :)), edges);
%xlim([0 0.1]);
Ang = char(197); xlabel(['Impulse (amu ' Ang '/ps)']); ylabel('Bin Count')
%set(gca,'YScale','log')
%units are likely to be forces 
%experiment what units give best freq spectrum (ie divide by 7 for 1/amu)

noise_data = noise_impulse;
T = sample_time;             % Sampling period       
L = length(noise_data);      % Length of signal
t = params.t_isf';        % Time vector
noise_freq = fft(noise_data);

P2 = abs(noise_freq/L); %two-sided spectrum
P1 = P2(1:L/2+1); %one-sided spectrum
P1(2:end-1) = 2*P1(2:end-1);

f = (0:(L/2))/(L * T);
figure; semilogy(f,P1) 
title('Single-Sided Amplitude Spectrum of X(t)')
xlabel('Frequency (1/ps)'); ylabel('Power Spectrum')

%figure; plot(noise_freq(1,:)) %Approx shapes