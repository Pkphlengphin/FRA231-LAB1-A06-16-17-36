addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('ropo_C_value.mat');
% C1
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,3.49,9.83,14.38,19.42,24.62,29.49,34.70,39.59,44.64,50.18,55.07,60.13,64.37,70.08,75.29,80.35,86.87,89.97,94.70,100.00];
ideal_y = [99.97,99.28,81.98,69.58,55.23,39.73,23.74,14.43,9.53,6.27,4.79,3.64,3.15,2.00,1.34,0.03,0.02,0.18,0.01,0.01,0.00];

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
sgtitle('Rotary Potentiometer C');

%% C
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,3.59,10.25,14.64,19.68,25.05,30.09,35.78,40.02,45.39,50.45,55.50,59.90,65.28,70.50,75.55,80.77,86.64,90.39,95.45,100.00];
ideal_y = [99.77,99.28,83.45,72.85,59.79,45.60,31.24,19.32,15.08,11.48,8.71,6.42,4.94,3.47,1.83,0.68,0.19,0.15,0.01,0.01,0.00];

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
sgtitle('Rotary Potentiometer C');
%% C3
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00,3.23,9.67,15.19,19.78,24.84,29.44,34.04,39.80,44.86,49.93,54.77,59.85,65.15,70.22,75.29,80.13,84.74,90.27,95.81,99.96];
ideal_y = [99.74,99.51,84.74,73.44,61.90,49.90,39.29,29.37,21.98,17.13,14.13,11.82,9.97,7.19,5.34,3.03,1.41,0.71,0.24,0.23,0.00];

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
sgtitle('Rotary Potentiometer C');
%% C4
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00, 4.38, 9.90, 14.73, 19.79, 24.85, 29.45, 35.43, 40.03, 44.64, 50.40, 55.24, 59.85, 64.92, 69.76, 74.83, 80.13, 84.74, 89.58, 95.35, 99.73];
ideal_y = [99.51, 98.82, 85.43, 73.90, 64.21, 53.13, 42.75, 31.90, 26.36, 22.90, 18.97, 15.51, 13.19, 10.42, 7.88, 5.10, 3.02, 1.63, 0.24, 0.01, 0.00];

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
sgtitle('Rotary Potentiometer C');
%% C5
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00, 4.38, 9.90, 14.73, 19.79, 24.85, 29.45, 35.43, 40.03, 44.64, 50.40, 55.24, 59.85, 64.92, 69.76, 74.83, 80.13, 84.74, 89.58, 95.35, 99.73];
ideal_y = [99.51, 98.82, 85.43, 73.90, 64.21, 53.13, 42.75, 31.90, 26.36, 22.90, 18.97, 15.51, 13.19, 10.42, 7.88, 5.10, 3.02, 1.63, 0.24, 0.01, 0.00];

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
sgtitle('Rotary Potentiometer C');
%% C6
A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
disp(y)

ideal_x = [0.00, 3.92, 9.90, 15.66, 20.03, 25.32, 29.69, 35.21, 39.82, 45.35, 50.64, 55.25, 59.86, 65.16, 70.00, 75.76, 79.91, 85.67, 90.05, 95.35, 99.73];
ideal_y = [99.74, 99.74, 90.28, 79.66, 70.20, 60.05, 52.43, 43.43, 37.89, 33.27, 28.89, 25.42, 22.65, 18.03, 14.80, 10.87, 8.33, 5.32, 3.24, 0.47, 0.00];

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
sgtitle('Rotary Potentiometer C');