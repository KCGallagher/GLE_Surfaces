max_pos = max(data.prtcl.r, [], 3); %Max position in trajectory, per coordinate 
min_pos = min(data.prtcl.r, [], 3);

grid_max = ceil(max_pos' ./ unitcell.celldim); %Number of unit cells past 0+
grid_min = floor(min_pos' ./ unitcell.celldim); %Number of unit cells past 0-
unit_cell_dim = [length(unitcell.x), length(unitcell.y)];
potential = zeros(unit_cell_dim .* (grid_max+abs(grid_min))); %Empty array for potential


x_values = (grid_min(1) * unitcell.celldim(1) : (unitcell.x(2)-unitcell.x(1)) : grid_max(1) * unitcell.celldim(1) -(unitcell.x(2)-unitcell.x(1))); 
y_values = (grid_min(2) * unitcell.celldim(2) : (unitcell.y(2)-unitcell.y(1)) : grid_max(2) * unitcell.celldim(2)-(unitcell.y(2)-unitcell.y(1))); 
%Gives range covering whole trajectory in integer unit cells with same
%spacing as the unit cell


if size(PotMatrix) == [length(unitcell.y),length(unitcell.x)]
    disp('Warning: Concern over PotMatrix shape')
    PotMatrix = PotMatrix'; %transpose data to match unitcell data, error in PIGLE code?
end


for i=1:length(x_values)
    for j=1 : length(y_values) %yeah I know this isn't the prettiest way of doing it
        %disp([i,j])
        x_unit_coord = rem(x_values(i),unitcell.celldim(1));
        while x_unit_coord < 0 %account for negative remainders
            x_unit_coord = x_unit_coord + unitcell.celldim(1);
        end
        y_unit_coord = abs(rem(y_values(j),unitcell.celldim(2)));
        while y_unit_coord < 0 %account for negative remainders
            y_unit_coord = y_unit_coord + unitcell.celldim(2);
        end
        %to find position in original unit cell
        x_index = find(round(unitcell.x, 3) == round(x_unit_coord,3));
        y_index = find(round(unitcell.y,3) == round(y_unit_coord,3));
        try
            potential(i,j) = PotMatrix(x_index, y_index);
        catch
            %warning('Indexing outside potential, value set to NaN')
            potential(i,j) = NaN;
        end
        %potential(i,j) = interp2(unitcell.x, unitcell.y, PotMatrix, x_coord, y_coord, 'makima', 10);
    end
end

%figure; mesh(unitcell.x, unitcell.y, PotMatrix') %for one unit cell
%figure; plot(squeeze(data.prtcl.r(1,1,:)),squeeze(data.prtcl.r(2,1,:)))
figure; pcolor(x_values, y_values, potential') %surf or mesh are also possible here
colormap('gray');
hold on
plot(squeeze(data.prtcl.r(1,1,:)),squeeze(data.prtcl.r(2,1,:)),'Color',[1,0,0,0.5], 'Linewidth', 1)
hold off
Ang = char(197);
xlabel(['x displacement (' Ang ')']); ylabel(['y displacement (' Ang ')']) 









