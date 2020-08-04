% %Plot case 3 for spike filter
% w=0:0.01:50; tau=[6 6]; eta=[2 2]; dw=[0.1 0.1]; w0=[0.28 20];
% y = zeros(size(w));
% for i=1:length(eta)
%     y=y+2*sqrt(2/pi)*(eta(i)*dw(i)/tau(i))*(dw(i)^2+w0(i)^2+w.^2)./((dw(i)^2+(w-w0(i)).^2).*(dw(i)^2+(w+w0(i)).^2));
% end
% plot(w,y)

%Noise scales with number of particles but not number of runs
if false
    load('noise_for', 'ans')
    noise_forces= squeeze(ans.Data);
%     y = 0:100:8000;
%     f = sqrt(2/3.1415) .* 1./( 1 * tau^2 + y.^2)*1.7e5; %to add best fit line, but its not scaled
    figure;histogram(abs(noise_forces(2, :)), 'EdgeColor' , 'none');
%     hold on; plot(y, f, 'LineWidth',1.5); hold off;    
    % figure;edges = [0:0.00001:0.0001];histogram(abs(noise_data(1, :)), edges);
    %xlim([0 0.1]);
    Ang = char(197); xlabel(['Force (amu ' Ang '/ps^2)']); ylabel('Bin Count')
    %set(gca,'YScale','log')
    %units are likely to be forces 
    %experiment what units give best freq spectrum (ie divide by 7 for 1/amu)
end

if true
    load('noise_for0', 'ans')
    noise_forces0= squeeze(ans.Data);
    load('noise_for1', 'ans')
    noise_forces1= squeeze(ans.Data(2,:,:));
    figure;h1 = histogram(abs(noise_forces0), 'EdgeColor' , 'none');
    hold on;h2 = histogram(abs(noise_forces1), 'EdgeColor' , 'none'); hold off; 
    h1.Normalization = 'pdf'; h2.Normalization = 'pdf';
    legend('\tau = 0', '\tau = 1')
    set(gca,'FontSize',14) %use for subplots in latex report
    %xlim([0 0.1]);
    Ang = char(197); xlabel(['Force (amu ' Ang '/ps^2)']); ylabel('Probability Density')
    %set(gca,'YScale','log')
    %set(gca,'XScale','log')
end



if false
    load('noise_mom', 'ans')
    noise_impulse= squeeze(ans.Data);
    figure;histogram(abs(noise_impulse(2, :)), 'EdgeColor' , 'none');
    % figure;edges = [0:0.00001:0.0001];histogram(abs(noise_data(1, :)), edges);
    %xlim([0 0.1]);
    Ang = char(197); xlabel(['Impulse (amu ' Ang '/ps)']); ylabel('Bin Count')
    %set(gca,'YScale','log')
    %units are likely to be forces 
    %experiment what units give best freq spectrum (ie divide by 7 for 1/amu)
end

if false
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
    end    