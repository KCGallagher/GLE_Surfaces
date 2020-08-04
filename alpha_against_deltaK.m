%best run on incoherent data for reduced noise, with multiple runs
%exponential trend is clearer on shorter time scale, e.g. 

%For diffusive motion (fit to exp)
if false
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
    %title('Run of fitting parameter alpha against Delta K')
    xlabel(['\Delta K (1/' Ang ')'])
    ylabel('\alpha')
end

%For ballistic motion (fit to gaussian)
if true
    coeff = zeros(1,length(dK)); %array for alpha parameter values
    coeff(1) = NaN;
    for i = 2:length(dK)
        f_type = fittype('A*exp(-x^2/(2*B^2))', 'independent',{'x'},'coefficients',{'A','B',});
        f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))',f_type, 'StartPoint', [1, 1]);
        ith_coeff = coeffvalues(f); coeff(i) = abs(ith_coeff(2)); 
    end
    figure; plot(dK, 1./coeff)
    Ang = char(197);
    %title('Run of fitting parameter alpha against Delta K')
    xlabel(['\Delta K (1/' Ang ')'])
    ylabel('1/ \sigma')
end


%dK0 = dK; coeff0 = coeff; save('adK0', 'dK0', 'coeff0');

if false
    load('adK0', 'dK0', 'coeff0'); load('adK1', 'dK1', 'coeff1');
    load('adK3', 'dK3', 'coeff3');
    figure; plot(dK0, coeff0)
    hold on
    plot(dK1, coeff1)
    %plot(dK3, coeff3)
    plot(dK, coeff)
    hold off
    Ang = char(197);
    %title('Run of fitting parameter alpha against Delta K')
    xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha')
    legend('\tau = 0','\tau = 1','\tau = 10','Location','northwest')
end