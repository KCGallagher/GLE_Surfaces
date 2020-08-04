%best run on incoherent data for reduced noise, with multiple runs
%exponential trend is clearer on shorter time scale, e.g. 

coeff = zeros(1,length(dK)); %array for alpha parameter values
for i = 1:length(dK)
    f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))','exp1', 'StartPoint', [1, -5]); 
    %x and y must be column vectors for fit. Startpoints avoid curves with
    %negative b, but should be adjusted if there are fitting issues.
    %f2 = fit(params.t_isf',real(isf_inc_CoM(i,:,1))','exp1', 'Exclude', params.t_isf > 10); %exclude one end of x axis
    ith_coeff = coeffvalues(f);
    coeff(i) = -1 * ith_coeff(2); % for b in exp(-b)
    if coeff(i) < 0 %displays curves with negative b (ie exponential growth)
        figure; plot(f, params.t_isf',real(isf_inc_CoM(i,:,1))')
    end
end
figure; plot(dK, coeff)
Ang = char(197);
title('Run of fitting parameter alpha against Delta K')
xlabel(['Delta K (1/' Ang ')'])
ylabel('Alpha')