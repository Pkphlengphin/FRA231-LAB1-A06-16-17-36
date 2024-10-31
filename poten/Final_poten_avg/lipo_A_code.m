% call Function and Values from experiment
addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('lipo_A_value.mat');

% A = Values from experiment
A = out.simout1;
chunkSize = 500;

% Calculate the mean of each chunk of data in A
y = calculateChunkAverages(A, chunkSize);
threshold = 50;
binaryArray = y >= threshold;
% Define x for the plot
x = linspace(0, 100, 11);
ax = axes;

% Plot the main data (y)
hold on; % Allows overlaying multiple plots
plot(x, y, 'LineWidth', 2);
plot(x, binaryArray * 100, 'LineWidth', 2, 'Color', 'r');

% Enable grid
grid on;

% Labeling the axes
xlabel(ax, "Sliding distance (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
sgtitle('Audio Tapers - Linear Potentiometer A');
legend('Analog', 'Digital')