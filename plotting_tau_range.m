% run_pigle
% max_tau300 = max_isf_inc_CoM(30,:,1), %index 30 chosen arbitrarily
% fulldata_tau300 = real(isf_inc_CoM(30,:,1));
% save('tau300', 'fulldata_tau300', 'max_tau300')

load('tau_time_base', 'time_base')
load('tau3', 'fulldata_tau3', 'max_tau3');
load('tau30', 'fulldata_tau30', 'max_tau30');
load('tau1', 'fulldata_tau1', 'max_tau1');
load('tau0', 'fulldata_tau0', 'max_tau0');
load('tau300', 'fulldata_tau300', 'max_tau300');

% dK = [0 0.05 0.1 0.15 0.2:0.1:1 1.2:0.2:5];
Delta_k = dK(30); %same index as was used to obtain data

% ANALYTICAL ISF
%Comparision with the analytic form (for no potential)
Boltzmann = 0.8314; %A^2 amu ps^-2 K^-1
phi = 1 - exp(- eta * time_base);
chi = (Delta_k/ eta) * sqrt(Boltzmann * T / mass_list);
isf_exact = exp(-chi^2 * (eta * time_base - phi));
isf_lowtime = exp( -(1/2) * (chi * eta * time_base).^2);
figure; semilogx(time_base, isf_exact)
hold on
semilogx(time_base, isf_lowtime)
hold off
legend('exact','low time')


figure; semilogx(time_base, isf_exact, '--k')
hold on
semilogx(time_base',fulldata_tau0);
semilogx(time_base',fulldata_tau3);
semilogx(time_base',fulldata_tau30);
hold off
xlabel('t / ps'); ylabel('Normalised ISF'); title('Incoherent ISF for Different Noise Filters')
legend('Exact Solution','tau = 0','tau = 3','tau = 30')
xlim([0.05 10])
