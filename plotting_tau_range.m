% run_pigle
% max_tau300 = max_isf_inc_CoM(30,:,1), %index 30 chosen arbitrarily
% fulldata_tau300 = real(isf_inc_CoM(30,:,1));
% save('tau300', 'fulldata_tau300', 'max_tau300')

%time_base = params.t_isf';
%save('tau_time_base', 'time_base')

load('tau_time_base', 'time_base')
%load('tau3', 'fulldata_tau3', 'max_tau3');
%load('tau30', 'fulldata_tau30', 'max_tau30');
load('tau1', 'fulldata_tau1', 'max_tau1');
load('tau0', 'fulldata_tau0', 'max_tau0');
load('tau1_p', 'fulldata_tau1_p', 'max_tau1_p');
load('tau0_p', 'fulldata_tau0_p', 'max_tau0_p');
load('tau1_sp', 'fulldata_tau1_sp', 'max_tau1_sp');
load('tau0_sp', 'fulldata_tau0_sp', 'max_tau0_sp');


% dK = [0 0.05 0.1 0.15 0.2:0.1:1 1.2:0.2:5];
%Delta_k = dK(10); %same index as was used to obtain data CHANGE AS REQ
Delta_k = 1 %1.3 matches the form of the data for 0.44 - factor of 3 greater

% LE ANALYTICAL ISF
%Comparision with the analytic form (for no potential)
Boltzmann = 0.8314; %A^2 amu ps^-2 K^-1 - ie Kb /(10^4 * amu)
phi = 1 - exp(- eta * time_base);
chi = (Delta_k/ eta) * sqrt(Boltzmann * T / mass_list);
isf_LE2 = exp(-chi^2 * (eta * time_base - phi));
isf_lowtime = exp( -(1/2) * (chi * eta * time_base).^2);

%Alternative formulation of ISF from PIGLE analytic_le.m
isf_LE=exp(-Delta_k^2*(Boltzmann*T/(mass_list*eta^2))*(exp(-eta*time_base)+eta*time_base-1));

% GLE ANALYTICAL ISF
tau = 1; %to ensure wD is set correctly (workspace doesn't update tau unless run_pigle is ran)
wD = 1 / tau; %cut off frequency
C=wD-eta;
S=sqrt(wD)*(wD-3*eta)/sqrt(wD-4*eta);
omega=0.5*sqrt(wD^2-4*eta*wD);
X=(Boltzmann*T/(mass_list*eta^2))*(eta/wD-1+eta*time_base+(exp(-wD*time_base/2)/wD).*(C*cosh(omega*time_base)+S*sinh(omega*time_base)));

exponent=-Delta_k^2*X;
isf_GLE=exp(exponent);

set(gca,'FontSize',14) %use for subplots in latex report
%%NoPot SOLUTION COMPARISON 
if true
    figure; semilogx(time_base, isf_LE, 'k--')
    hold on
    semilogx(time_base',fulldata_tau0);
    semilogx(time_base',fulldata_tau0_p);
    semilogx(time_base',fulldata_tau0_sp);
    hold off
    set(gca,'FontSize',14) %use for subplots in latex report
    legend('Analytic Solution', 'No Potential', 'Cu (111) Potential', 'Magnified Potential')
    xlabel('t / ps'); ylabel('Normalised ISF'); %title('Analytic Solution Comparison')
    xlim([0.05 4])
end

%%Pot SOLUTION COMPARISON 
if true
    figure; semilogx(time_base, isf_GLE, 'k--')
    hold on
    semilogx(time_base',fulldata_tau1);
    semilogx(time_base',fulldata_tau1_p);
    semilogx(time_base',fulldata_tau1_sp);
    hold off
    set(gca,'FontSize',14) %use for subplots in latex report
    legend('Analytic Solution', 'No Potential', 'Cu (111) Potential', 'Magnified Potential')
    xlabel('t / ps'); ylabel('Normalised ISF'); %title('Analytic Solution Comparison')
    xlim([0.05 4])
end

%%EXACT SOLUTION COMPARISON
if false
    figure; semilogx(time_base, isf_LE)
    hold on
    semilogx(time_base, isf_lowtime, 'k--')
    semilogx(time_base, isf_GLE)
    hold off
    legend('Exact LE', 'Low time LE','Exact GLE')
    xlabel('t / ps'); ylabel('Normalised ISF'); title('Analytic Solution Comparison')
    %xlim([0.003 0.5])
end
% SIMULATION DATA PLOTTING
if false
    figure; semilogx(time_base, isf_LE, '--k')
    hold on
    semilogx(time_base, isf_GLE, '--r')
    semilogx(time_base',fulldata_tau0);
    %semilogx(time_base',fulldata_tau1);
    semilogx(time_base',fulldata_tau3);
    hold off
    xlabel('t / ps'); ylabel('Normalised ISF'); title('Incoherent ISF for Different Noise Filters')
    legend('Exact LE Solution','Exact GLE Solution','tau = 0','tau = 3')
    %xlim([0.05 10])
end

%PLOTTING WITH POTENTIAL
if false
    load('tau1p', 'fulldata_tau1p', 'max_tau1p');
    load('tau0p', 'fulldata_tau0p', 'max_tau0p');
    figure; semilogx(time_base, isf_LE, '--k')
    hold on
    semilogx(time_base, isf_GLE, '--r')
    semilogx(time_base',fulldata_tau0p);
    semilogx(time_base',fulldata_tau1p);
    %semilogx(time_base',fulldata_tau3p);
    hold off
    xlabel('t / ps'); ylabel('Normalised Incoherent ISF'); title('Simulated ISF with Potential against Analytic Forms')
    legend('Exact LE Solution','Exact GLE Solution','tau = 0','tau = 1')
    %xlim([0.05 10])
end  

%GLE VS LE COMPARISON
if false
    load('tau0l', 'fulldata_tau0l', 'max_tau0l');
    load('tau0g', 'fulldata_tau0g', 'max_tau0g');
    figure; semilogx(time_base, isf_LE, '--k')
    hold on
    semilogx(time_base, isf_GLE, '--r')
    semilogx(time_base',fulldata_tau0l);
    semilogx(time_base',fulldata_tau0g);
    semilogx(time_base',fulldata_tau1);
    hold off
    xlabel('t / ps'); ylabel('Normalised Incoherent ISF'); title('Simulated ISF against Analytic Forms')
    legend('Exact LE Solution','Exact GLE Solution','Simulated LE','Simulated GLE, tau = 1e-3', 'Simulated GLE, tau = 1')
end