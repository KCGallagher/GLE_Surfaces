%Noise scales with number of particles but not number of runs

load('test_noise', 'ans')
noise_data= squeeze(ans.Data);
figure; histogram(abs(noise_data))
Ang = char(197); xlabel(['Impulse (amu ' Ang '/ps)']); ylabel('Frequency')
%set(gca,'YScale','log')
%units are likely to be forces 
%experiment what units give best freq spectrum (ie divide by 7 for 1/amu)
                   
T = sample_time;             % Sampling period       
L = length(noise_data);      % Length of signal
t = params.t_isf';        % Time vector
noise_freq = fft(noise_data);

P2 = abs(noise_freq/L); %two-sided spectrum
P1 = P2(1:L/2+1); %one-sided spectrum
P1(2:end-1) = 2*P1(2:end-1);

f = (0:(L/2))/(L * T);
figure; plot(f,P1) 
title('Single-Sided Amplitude Spectrum of X(t)')
xlabel('Frequency (1/ps)'); ylabel('Power Spectrum')

%figure; plot(noise_freq(1,:)) %Approx shapes