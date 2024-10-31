addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\Load_cell');
load(['0_kg.mat']);
load(['Load_value.mat']);

A = out.simout1;
chunkSize = 500;
avg0 = mean(out0_kg.simout1); % average Vout when 0 kg
% disp(avg0)

y = calculateChunkAverages(A, chunkSize); % average Vout when 1- 10 kg
y = [avg0, y]; % add average 0 in average Vout when 1- 10 kg
% disp(y);
y = y - avg0; % adjust offset"

threshold = 1.65;
binaryArray = y >= threshold;

% Define x for the plot
x = linspace(0, 10, length(y));
ax = axes;

% Plot the main data (y) in black or any other color
hold on; % Allows overlaying multiple plots
plot(x, y, 'LineWidth', 2);
plot(x, binaryArray, 'LineWidth', 2, 'Color', 'r');
% Enable grid
grid on;

% Labeling the axes
xlabel(ax, "Weight (kg)");
ylabel(ax, "Vout (V)");
sgtitle('Load Cell Output and Applied Force');
legend('Analog', 'Digital')