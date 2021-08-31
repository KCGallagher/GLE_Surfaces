% % Taken from PIGLE downloaded from GITHUB repo https://zenodo.org/record/2025809#.YS6ciHySlPY
% Copyright (c) 2018, Nadav Avidor (NA).
% All rights reserved.
% This file is part of the PIGLE - Particles Interacting in Generalized Langevin Equation simulator, subject to the 
% GNU/GPL-3.0-or-later.

PIGLE - Particles Interacting in Generalized Langevin Equation simulator
Release: 1.0rc1 (a - alpha , b - beta, rc - release candidate)

PIGLE simulator solves the Generalized Langevin Equation for interacting particles, in a 4D potential energy surface.
The potential has up to 3 spatial dimensions, and a rigid-body like rotation. Particles doesn't neceseraly share the
same properties (such as mass or friction). 

Here, I (KG) consider specifically the motion line-shape in the intermediate scattering function (ISF), supervised by Dr David Ward.
I particularly focus on the ballistic region (i.e. over timescales shorter than the friction timescale), for the Li/ Cu (111) system. 
The simulink framework is adapted to include a noise filter, initially implemented as a low pass filter.

####################
# Basic Usage: #
####################

Installation:
-------------
- Install Matlab (tested with 2017b). 
- Edit prep_environment.m

Execution of jobs:
------------------
- Create a potential of your choise and save it as 'mat' file, or create a function which generates the potential.
  One can use the functions and scripts in the subfolder generatePES - I have configured a potential for the Copper (111) surface.
- Configure the parameters in m-files under the subfolder UI.
- Run 'run_pigle.m'

Visualization:
--------------
The 'make_movie' file will help you to visuallize the dynamics.

Parallel Computing:
-------------------
PIGLE support parallel computing (via matlab/Simulink support).


####################
# List of PIGLE Files (NA):   #
####################

PIGLE:
aux_files        config_model.m   generatePES  make_movie.m     pigle_sim               prep_environment.m  run_pigle.m      sweepParams  UI
benchmark  f_interaction.m  LICENSE.txt  pigle_data.mat  prepare_configuration.m  README.txt          surface_params.m  TODO.txt

./aux_files:
calc_kinetic_energy.m    calculate_sim_params.m                        generate_A_from_function.m  make_data_path.m  resample_data.m  timeinput.m
calculate_average_isf.m  generate_A_from_frequencies_multiple_gamma.m  hlp_f.m                     prepFuncs.m       sim_gle_nd.m

./benchmark:
analytic_gle.m  analytic_le.m  benchmark_biexp_gle.m  biexp_gle_isf.m  incoh_brownian_rot.m  incoh_langevin_rot.m  plot_diffusion_models.m

./generatePES:
loadPES.m  params_for_function_prepare_potential.m  PES_library  prepare_potential.m

./generatePES/PES_library:
hexagonal6interp.m  hexagonal.m

./pigle_sim:
create_model.m  delete_unconnected_lines.m  sl_interactions.slx  sl_pigle_Population.slx

./sweepParams:
config_job.m  config_job_params.m  pigle_run_single_task.m  pigle_shell_params.m  run_job.m

./UI:
pigle_ui.m  pigle_ui_surface_params.m  pigle_wrapper_params.m


####################
# List of Analysis Files (KG):   #
####################

./analysis_code:

    alpha_against_deltak - Plots fitting parameter alpha (ballistic exponential decay constant) over different incoming wavevectors
                         - Able to plot comparison with experimental data (kindly provided by Dr David Ward)

    noise_histogram      - Extracts the noise in real and fourier space from the simulink framework, and characterises noise attributes

    plotting_tau_range   - Comparison of simulated and analytic ISF plots for a range of cut-off frequencies in the low-pass noise filter

    potential_map        - Plots trajectory of single particle in real space, superimposed over periodic potential surface 


./figures - Contains high resolution versions of all figures used in the report, as well as pdf copies of the complete and shortened reports.




