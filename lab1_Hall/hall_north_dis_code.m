addpath('C:\Users\A1nz_01\Documents\MATLAB\function');
load('Sl_Vout_N.mat');
% load('Sl_Vout_S.mat');

% Vout_S = out.simout1;
% mT_S = out.simout2;

Vout = out.simout1;
mT = out.simout2;

chunkSize = 500;

% y = calculateChunkAverages(Vout_S, chunkSize);
% x = calculateChunkAverages(mT_S, chunkSize);

y = calculateChunkAverages(Vout, chunkSize);
% x = calculateChunkAverages(mT, chunkSize);

x = linspace(4.5, 1, 8);

ax = axes;
plot(x,y, 'LineWidth', 2);
grid('on');
xlabel(ax, "Distane (cm)");
ylabel(ax, "Vout (V)");
% sgtitle(' (North) Vout-Distane shield ');
% sgtitle(' (South) Vout-Distane shield ');
sgtitle(' (North) Vout-Distane  ');
% sgtitle(' (South) Vout-Distane ');