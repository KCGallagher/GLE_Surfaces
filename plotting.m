load('tau3', 'fulldata_tau3', 'max_tau3');
load('tau30', 'fulldata_tau30', 'max_tau30');
load('tau1', 'fulldata_tau1', 'max_tau1');
load('tau0', 'fulldata_tau0', 'max_tau0');
load('tau300', 'fulldata_tau300', 'max_tau300');

figure; semilogx(params.t_isf',fulldata_tau0);
hold on
semilogx(params.t_isf',fulldata_tau1);
semilogx(params.t_isf',fulldata_tau3);
semilogx(params.t_isf',fulldata_tau30);
hold off
xlabel('t / ps'); ylabel('Normalised ISF'); title('Incoherent ISF for Different Noise Filters')
legend('tau = 0','tau = 1','tau = 3','tau = 30')
xlim([0.05 10])
