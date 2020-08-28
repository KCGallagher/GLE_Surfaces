%best run on incoherent data for reduced noise, with multiple runs
%exponential trend is clearer on shorter time scale, e.g. 

%f2 = fit(params.t_isf',real(isf_inc_CoM(i,:,1))','exp1', 'Exclude', params.t_isf > 10); %exclude one end of x axis

%FOR DIFFUSIVE MOTION (fit to exp)
if false
    coeff = zeros(1,length(dK)); %array for alpha parameter values
    for i = 1:length(dK)
        f_diff = fittype('A*exp(-B*x) + C', 'independent',{'x'},'coefficients',{'A','B','C'});
%         f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))',f_diff, 'StartPoint', [1, 1, 0]); %exp1 works for fit type too
        f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))','exp1', 'StartPoint', [1, -1]); %exp1 works for fit type too
        %x and y must be column vectors for fit. Startpoints avoid curves with
        %negative b, but should be adjusted if there are fitting issues.
        ith_coeff = coeffvalues(f);
        coeff(i) = -1 * ith_coeff(2); % for b in exp(-b)
        if coeff(i) < 0 %displays curves with negative b (ie exponential growth)
            figure; plot(f, params.t_isf',real(isf_inc_CoM(i,:,1))')
        end
        disp(i)
    end
    L=length(dK); f = fit(dK(round(L/10):L)',coeff(round(L/10):L)','poly1');
    coeff_values = coeffvalues(f); 
    figure; plot(dK, coeff, 'ro')
    Ang = char(197);
    %title('Run of fitting parameter alpha against Delta K')
    xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha (1/ps)')
    %caption = sprintf('y = %.3f x %.3f', coeff_values(1), coeff_values(2));
    %legend('Simulation',caption,'Location','northwest')
end

%FOR BALLISTIC MOITON (fit to gaussian)
if false
    coeff = zeros(1,length(dK)); %array for alpha parameter values
    coeff(1) = NaN;
    f_ball = fittype('A*exp(-x^2/(2*B^2))', 'independent',{'x'},'coefficients',{'A','B',});
    for i = 2:length(dK)
        f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))',f_ball, 'StartPoint', [1, 1]);
        ith_coeff = coeffvalues(f); coeff(i) = abs(ith_coeff(2)); 
    end
    L=length(dK); f = fit(dK(round(L/10):L)',(1./coeff(round(L/10):L))','poly1');
    coeff_values = coeffvalues(f); 
    figure; plot(f,dK, 1./coeff)
    Ang = char(197);
    %title('Run of fitting parameter alpha against Delta K')
    xlabel(['\Delta K (1/' Ang ')'])
    ylabel('1/ \sigma')
    caption = sprintf('y = %.3f x %.3f', coeff_values(1), coeff_values(2));
    legend('Simulation',caption,'Location','northwest')
end


%dK0 = dK; coeff0 = coeff; save('adK0', 'dK0', 'coeff0');

if false %FOR COMPARING SAVED DATA
    load('adK0', 'dK0', 'coeff0'); load('adK1', 'dK1', 'coeff1');
%     L=length(dK0); f = fit(dK0(round(L/4):L)',(coeff0(round(L/4):L))','poly1');
    L=length(dK0); f = fit(dK0',coeff0','poly1','Exclude', dK0 >8 );
    coeff = coeffvalues(f); 
    figure; plot(dK1, coeff1, 'g.')
    hold on
    coeff0(1) = 0.08; plot(dK0, coeff0, 'k-')
    h = plot(f, '--b'); set(h,'LineWidth',1.5)
    hold off
    Ang = char(197);
    %title('Run of fitting parameter alpha against Delta K')
    xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha'); xlim([0 10]);
    caption = sprintf('y = %.3f x %.3f', coeff(1), coeff(2));
    legend('\tau = 1','\tau = 0',caption,'Location','northwest')
    set(gca,'FontSize',14) %use for subplots in latex report
end

if false  %COMPARISONS WITH DAVID WARD DATA Fig c
    % openfig("LiPES"); %For exact value comparison 
    % openfig("Li alphaDK"); %Data array more useful
    % openfig("Li alphaDK_fast"); %Data array more useful

%     load('kit.mat') % gives e, x, y as 16x1 vectors
%     figure; errorbar(x,y,e,'bx');% Ang = char(197); title('Li alphaDK data')
%     xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha (1/ps)'); 
%     load('kit2.mat') % gives e2, x2, y2 as 10x1 vectors
%     figure; errorbar(x2,y2,e2, 'bx'); Ang = char(197); title('Li alphaDK_fast data')
%     xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha (1/ps)');  
    
    coeff = zeros(1,length(dK)); %array for alpha parameter values
    for i = 1:length(dK)
        f_diff = fittype('A*exp(B*x) + C', 'independent',{'x'},'coefficients',{'A','B','C'});
%         f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))','exp1', 'StartPoint', [1, -1]); %exp1 works for fit type too
        f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))',f_diff,'Lower', [0, -5, -1], 'Upper', [1, 0, 1], 'StartPoint', [1, -1, 0]); %exp1 works for fit type too
        ith_coeff = coeffvalues(f); coeff(i) = -1 * ith_coeff(2); % for b in exp(-b)
        if coeff(i) < 0 %displays curves with negative b (ie exponential growth)
            figure; plot(f, params.t_isf',real(isf_inc_CoM(i,:,1))')
        end
    end
    
    load('kit.mat') % gives e, x, y as 16x1 vectors
    figure; errorbar(x,y,e,'bx');% Ang = char(197); title('Li alphaDK data')
    hold on; plot(dK, coeff, 'ro'); hold off
    %title('Figure 5.16c, \eta = 1, strong pot')
    Ang = char(197); xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha (1/ps)')
    legend('Experiment','Simulation','Location','northwest')
end

if false  %COMPARISONS WITH DAVID WARD DATA  - google chat version  
    coeff = zeros(4,length(dK)); %array for alpha parameter values
    for i = 1:length(dK)
        f_diff = fittype('A*exp(B*x) + C*exp( - x.^2 / (2 * D.^ 2))', 'independent',{'x'},'coefficients',{'A','B','C', 'D'});
        f = fit(params.t_isf',real(isf_inc_CoM(i,:,1))',f_diff,'Lower', [0, -10, 0, 0], 'Upper', [10, 0, 10, 10], 'StartPoint', [1, -1, 1, 1]); %exp1 works for fit type too
        coeff(:, i) = coeffvalues(f); 
    end
    
    load('kit2.mat') % gives e, x, y as 16x1 vectors
    figure; errorbar(x2,y2,e2,'bx');% Ang = char(197); title('Li alphaDK data')
    hold on; plot(dK, -1.*coeff(2,:), 'ro'); hold off
    title('Figure 5.16b, \tau = 0.04')
    Ang = char(197); xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha_2 (1/ps)')

%     figure; plot(dK, (coeff(1,:)./coeff(3,:)) , 'ro')
%     title('Figure 5.16a')
%     Ang = char(197); xlabel(['\Delta K (1/' Ang ')']); ylabel('A_1 / A_2')
    %legend('Simulation',caption,'Location','northwest')
end

if true  %COMPARISONS WITH DAVID WARD DATA - thesis version  
    %time = params.t_isf'; isf = real(isf_inc_CoM(:,:,1))'; %to use recently generated data
    load('isf_data', 'time', 'isf'); isf = isf'; %to use saved data
    coeff = zeros(4,length(dK)); %array for alpha parameter values  %change 2 or 4 depending on f_diff
    for i = 1:length(dK)
        f_long = fittype('A*exp(B*x) + C', 'independent',{'x'},'coefficients',{'A','B','C'});
        f = fit(time,isf(:,i),f_long,'Lower', [0, -5, -1], 'Upper', [1, 0, 1], 'StartPoint', [1, -1, 0], 'Exclude', time<1.8); 
        best_fit = feval(f, time);
        f_diff = fittype('A*exp(B*x) + C*exp( - x.^2 / (2 * D.^ 2))', 'independent',{'x'},'coefficients',{'A','B','C', 'D'});
        f2 = fit(time,(isf(:,i)-best_fit),f_diff,'Lower', [0, -10, 0, 0], 'Upper', [10, 0, 10, 10], 'StartPoint', [0.1, -0.1, 1, 0.1]); 
%         f_diff_e = fittype('A*exp(B*x)', 'independent',{'x'},'coefficients',{'A','B'});
%         f2 = fit(time,(isf(:,i)-best_fit),f_diff_e,'Lower', [0, -10], 'Upper', [10, 0], 'StartPoint', [1, -1]); 
        coeff(:, i) = coeffvalues(f2); 
    end
    
    %coeff_user = zeros(2,length(dK)); %Filled in through user altered fitting procedures
    %Adjust excluded parts as necessary, and iterate through i values
%     i=1; f = fit(time,isf(:,i),f_long,'Lower', [0, -5, -1], 'Upper', [1, 0, 1], 'StartPoint', [1, -1, 0], 'Exclude', time<1.4); figure; plot(f, time, isf(:,i));
% best_fit = feval(f, time);f2 = fit(time,(isf(:,i)-best_fit),f_diff_e,'Lower', [0, -10], 'Upper', [10, 0], 'StartPoint', [1, -1]); figure; plot(f2, time,(isf(:,i)-best_fit));
    %coeff_user(:, i) = coeffvalues(f2); 
    
    load('kit2.mat') % gives e, x, y as 16x1 vectors
    figure; errorbar(x2,y2,e2,'bx');% Ang = char(197); title('Li alphaDK data')
    hold on; plot(dK, -1.*coeff(2,:), 'ro'); hold off
    %title('Figure 5.16b, \tau = 0.8')
    Ang = char(197); xlabel(['\Delta K (1/' Ang ')']); ylabel('\alpha_2 (1/ps)'); legend('Experiment', 'Simulation', 'Location','northeast');
end