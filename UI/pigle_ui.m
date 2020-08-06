

%% parameters for config_model.m

z_enabled = 0;
dKz_include_in_isf = 0;
theta_enabled = 0;
zero_p_init = 1; % set initial momentum be set to zero? (if set to 0, p_init will correspond to thermal distribution)
interactions_active = 0;
N_runs = 10;
run_parallel =0;

% Specify dK as a 2D vector, 3rd dim is azimuths.
%dK = 0.6;
%dK = [0 0.05 0.1 0.15 0.2:0.1:1 1.2:0.2:5];
%dK = [0 0.05 0.1 0.15 0.2:0.025:1 1.05:0.05:5 5.1:0.1:10]; %for greater sampling
dK = [0.1:0.1:8];

azim_1 = [0.5 0.866]; %for 112 direction scattering
%azim_1 = [1 0];
%azim_2 = [cosd(30) sind(30)]; %commented as second azimuth is removed

% specify beam parameters and geometrical parameters for scatering calculations
theta_tot = 44.4; % Degrees
beam_ki = 1;%3.3977; % ANgstrom ^{-1} 

% Specify simulation time parameters
% (those will be adjusted by the program, see below if interested)

%Ballistic Region (self-created)
% sample_time = 2e-4;
% sample_time_clist = 2e-3;
% isf_sample_time = 1e-2;
% thermalizing_time = 0;
% stop_time = 2048*0.02;

%Diffusive region (default)
sample_time = 1e-3;
sample_time_clist = 1e-3;
isf_sample_time = 1e-2;
thermalizing_time = 50;
stop_time = 1024*2;

% N_steps and N_ISF_steps are calculated after PIGLE adjusts the requested time parameters
max_N_steps = 1e9;
max_N_ISF_steps = 6e5;

