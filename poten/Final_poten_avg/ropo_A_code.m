addpath('C:\Users\user\Documents\FRA231 RMX\lab1_poten\lab1_poten\slide_poten_avg');
load('ropo_A_value.mat');

A = out.simout1;
chunkSize = 500;

y = calculateChunkAverages(A, chunkSize);
threshold = 50;
binaryArray = y >= threshold;
disp(y)

x = linspace(0, 100, 41);
ax = axes;
plot(x,y, 'LineWidth', 2);
plot(x, binaryArray * 100, 'LineWidth', 2, 'Color', 'r');
grid('on');
xlabel(ax, "Rotational travel (%)");
ylabel(ax, "(Vout/Vin)*100 (%)");
sgtitle('Rotary Potentiometer A');
legend('Analog', 'Digital')