addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('lipo_A_value.mat');

%Audio
A = out.simout1;
chunkSize = 500;
% Calculate the mean of each chunk of data in A
y = calculateChunkAverages(A, chunkSize);

x = linspace(0, 100, 11); % Define x for the plot

% Datasheet Values
ideal_x = [0.00,5.21,9.53,14.92,20.13,25.52,29.84,34.87,39.90,44.94,49.97,54.64,60.22,65.25,69.92,74.24,80.17,85.56,90.23,93.11,99.58];
ideal_y = [0.00,0.18,0.72,1.44,2.34,3.77,5.75,8.27,10.78,12.94,14.92,17.79,22.47,29.30,39.18,49.43,63.81,76.93,88.08,95.27,97.60];
ax = axes;

% Plot the main data (y)
hold on; % Allows overlaying multiple plots
plot(x, y, 'LineWidth', 2, 'Color', 'b'); % 

plot(ideal_x, ideal_y, 'LineWidth', 2); % Plot the Datasheet

% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')

legend('Experiment', 'Ideal');

% Enable grid
grid on;

% Labeling the axes
xlabel(ax, "Sliding distance (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
sgtitle('Audio Tapers - Linear Potentiometer A');

%% Linear

A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);

% y_error = calculateError(A, chunkSize);

% Define x for the plot
x = linspace(0, 100, 11);

ideal_x = [0.00,5.93,9.88,15.46,20.13,24.62,30.01,35.05,40.08,45.11,50.14,54.99,60.03,65.24,69.91,74.94,79.98,85.73,90.76,95.79,99.39];
ideal_y = [0.00,0.18,0.90,1.80,3.41,6.11,11.68,19.95,29.11,39.54,48.70,55.89,62.72,70.27,77.46,84.65,92.20,96.15,97.23,97.77,97.95];
ax = axes;

% Plot the main data (y) in black or any other color
hold on; % Allows overlaying multiple plots
plot(x, y, 'LineWidth', 2, 'Color', 'b'); % 'k' sets the color to black
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')

legend('Experiment', 'Ideal');

% Enable grid
grid on;

% Labeling the axes
xlabel(ax, "Sliding distance (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
sgtitle('Audio Tapers - Linear Potentiometer A');