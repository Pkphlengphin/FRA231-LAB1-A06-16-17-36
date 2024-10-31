addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('ropo_B_value.mat');
% B
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);

ideal_x = [0.00,4.11,9.23,13.24,19.05,24.64,29.28,34.13,39.29,44.76,49.40,54.51,59.60,64.46,69.56,74.88,80.09,85.19,89.82,94.22,100.00];
ideal_y = [0.00,0.00,5.00,9.50,15.89,22.12,27.18,32.85,38.43,44.62,49.67,54.88,60.44,66.46,72.37,77.92,83.60,89.62,94.48,99.23,99.69];

x = linspace(0, 100, 11);
ax = axes;
hold on;
plot(x,y, 'LineWidth', 2, 'Color', 'b');
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
legend('Experiment', 'Ideal');
sgtitle('Rotary Potentiometer B');

%% B1
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,4.59,9.42,14.82,19.49,24.81,29.48,34.97,39.80,45.04,49.95,55.43,59.97,65.33,69.98,76.17,80.29,85.86,90.20,94.63,100.00];
ideal_y = [0.00,0.25,1.47,4.42,9.50,16.54,22.85,29.81,36.20,43.16,49.71,56.58,62.67,69.89,75.87,84.33,89.80,95.17,98.05,99.60,99.71];

x = linspace(0, 100, 11);
ax = axes;
hold on;
plot(x, y, 'LineWidth', 2, 'Color', 'b');
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
legend('Experiment', 'Ideal');
sgtitle('Rotary Potentiometer B');
%% B2
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,4.64,9.39,14.75,19.29,25.07,29.30,34.77,39.52,45.50,49.73,55.20,59.74,65.41,69.64,75.21,80.37,86.15,90.17,95.33,100.00];
ideal_y = [0.00,0.10,0.31,2.37,5.78,13.52,19.60,27.55,34.67,43.23,49.83,57.67,64.28,72.84,79.75,87.59,93.99,97.71,99.25,99.77,99.67];

x = linspace(0, 100, 11);
ax = axes;
hold on;
plot(x,y, 'LineWidth', 2, 'Color', 'b');
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
legend('Experiment', 'Ideal');
sgtitle('Rotary Potentiometer B');
%% B3
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,4.94,9.22,15.46,19.10,24.55,29.36,34.82,39.62,45.21,49.76,54.95,59.76,64.44,69.76,74.96,79.90,84.96,90.03,94.71,100.00];
ideal_y = [0.00,0.00,0.39,2.08,3.64,6.89,14.03,23.90,32.09,42.35,50.02,60.15,68.20,76.65,86.52,92.63,96.01,98.47,99.64,99.90,100.00];

x = linspace(0, 100, 11);
ax = axes;
hold on;
plot(x,y, 'LineWidth', 2, 'Color', 'b');
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
legend('Experiment', 'Ideal');
sgtitle('Rotary Potentiometer B');
%% B4
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,4.67,9.49,15.18,19.56,25.55,29.78,34.60,39.71,44.67,50.22,54.16,60.15,65.70,70.08,75.92,80.30,86.14,90.37,95.19,100.00];
ideal_y = [0.00,0.00,1.46,3.50,4.67,7.01,9.49,14.02,23.80,35.62,50.08,60.00,75.77,84.97,89.35,93.00,94.17,96.50,98.25,99.86,99.71];

x = linspace(0, 100, 11);
ax = axes;
hold on;
plot(x,y, 'LineWidth', 2, 'Color', 'b');
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
legend('Experiment', 'Ideal');
sgtitle('Rotary Potentiometer B');
%% B5
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,5.33,9.57,14.90,19.50,25.02,29.43,35.13,39.36,44.15,49.48,54.45,59.60,64.93,69.90,75.23,80.20,85.53,90.32,94.55,99.88];
ideal_y = [0.00,0.00,0.00,0.74,1.47,2.02,2.21,4.60,9.93,29.43,49.85,69.53,89.21,94.36,96.02,96.94,97.49,98.04,98.78,99.33,99.51];

x = linspace(0, 100, 11);
ax = axes;
hold on;
plot(x,y, 'LineWidth', 2, 'Color', 'b');
plot(ideal_x, ideal_y, 'LineWidth', 2);
% Create the error bars in red
errorbar(ideal_x,ideal_y,0.2*ideal_y , 'LineWidth', 1, 'Color', 'r')
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
legend('Experiment', 'Ideal');
sgtitle('Rotary Potentiometer B');