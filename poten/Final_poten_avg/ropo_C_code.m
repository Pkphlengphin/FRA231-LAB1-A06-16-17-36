addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('ropo_C_value.mat');

A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

% y_error = calculateError(A, chunkSize);

% Define x for the plot
x = linspace(0, 100, 11);
ax = axes;
threshold = 50;
binaryArray = y >= threshold;
% Plot the main data (y) in black or any other color
hold on; % Allows overlaying multiple plots
plot(x, y, 'LineWidth', 2); % 'k' sets the color to black
plot(x, binaryArray * 100, 'LineWidth', 2, 'Color', 'r');
% Create the error bars in red
% errorbar(x, y, y_error, 'o', 'LineWidth', 2, 'Color', 'r'); % 'Color', 'r' sets the color to red

% Enable grid
grid on;

% Labeling the axes
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
sgtitle('Rotary Potentiometer C');
legend('Analog', 'Digital')