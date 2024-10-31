addpath('C:\Users\A1nz_01\Documents\MATLAB\function');
% load('Vout_N.mat');
load('Vout_S.mat');

Vout_S = out.simout1;
mT_S = out.simout2;

% Vout_N = out.simout1;
% mT_N = out.simout2;



chunkSize = 500;

y = calculateChunkAverages(Vout_S, chunkSize);

x = linspace(3.5, 1, 8);

ax = axes;
plot(x,y, 'LineWidth', 2);
grid('on');
xlabel(ax, "Distane (cm)");
ylabel(ax, "Vout (V)");
sgtitle(' (North) Vout-Distane ');