addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('ropo_A_value.mat');
% A2
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,5.29,9.69,15.12,19.97,25.40,29.96,35.24,40.23,45.81,50.07,56.09,60.06,65.49,69.90,75.37,80.28,83.54,88.38,90.86,94.79,100.00];
ideal_y = [0.00,0.00,0.00,0.00,1.17,2.06,2.94,4.41,5.87,7.78,9.99,12.63,16.01,22.17,31.57,46.24,59.10,68.78,80.67,88.12,97.80,98.19];

x = linspace(0, 100, 41);
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
sgtitle('Rotary Potentiometer A');

%% A1
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,5.82,9.98,15.17,20.37,25.77,30.13,35.75,40.11,46.34,50.08,55.90,60.06,65.26,70.45,74.82,80.43,85.41,91.23,93.93,94.77,100.00];
ideal_y = [0.00,0.00,0.00,0.00,0.42,0.83,1.25,2.49,3.33,4.36,5.20,7.07,9.77,14.76,24.94,38.86,54.66,68.79,84.79,92.27,97.26,97.68];

x = linspace(0, 100, 41);
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
sgtitle('Rotary Potentiometer A');
%% A3
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,5.18,9.62,15.08,20.07,25.25,29.78,34.87,39.87,45.28,49.85,54.82,60.18,65.41,70.11,74.82,80.18,84.36,87.11,90.78,94.57,100.00];
ideal_y = [0.00,0.28,0.74,1.39,2.40,3.88,6.01,8.05,10.17,12.38,14.73,17.73,22.05,29.11,39.17,49.24,62.18,73.42,79.83,87.59,97.65,97.82];

x = linspace(0, 100, 41);
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
sgtitle('Rotary Potentiometer A');
%%  A4
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,5.36,9.80,15.42,20.00,25.23,29.80,34.64,40.26,45.23,50.46,55.03,60.00,65.62,70.20,75.16,80.65,84.57,87.71,90.98,94.77,100.00];
ideal_y = [0.00,0.39,1.31,1.96,3.66,5.49,8.10,10.72,13.99,16.99,20.00,23.27,27.45,34.90,42.74,52.94,65.49,74.90,81.44,87.97,97.52,97.91];

x = linspace(0, 100, 41);
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
sgtitle('Rotary Potentiometer A');
%% A5
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,5.09,10.07,15.47,20.14,25.96,30.00,35.40,40.08,45.79,50.25,55.75,60.32,65.30,70.18,74.86,80.67,85.24,90.64,95.00,100.00];
ideal_y = [0.00,0.83,2.08,3.84,6.13,9.76,12.25,15.68,18.48,22.11,25.12,29.17,33.85,39.56,47.24,55.86,68.00,78.28,88.66,98.01,98.22];

x = linspace(0, 100, 41);
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
sgtitle('Rotary Potentiometer A');
%% A6
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,4.11,9.84,15.27,19.97,25.40,29.81,35.83,39.94,46.11,49.93,55.21,60.65,66.08,70.19,75.77,79.59,84.58,90.01,94.57,100.00];
ideal_y = [0.00,0.59,2.94,5.58,7.93,11.60,14.68,19.09,22.61,26.73,29.22,33.77,38.47,45.37,52.13,62.26,69.46,78.71,88.55,97.80,98.09];

x = linspace(0, 100, 41);
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
sgtitle('Rotary Potentiometer A');