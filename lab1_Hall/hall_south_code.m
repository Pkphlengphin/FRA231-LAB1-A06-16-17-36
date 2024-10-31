addpath('C:\Users\A1nz_01\Documents\MATLAB\function');
load('Sl_Vout_N.mat');
% load('Sl_Vout_S.mat');

Vout_S = out.simout1;
mT_S = out.simout2;

% Vout_N = out.simout1;
% mT_N = out.simout2;



chunkSize = 500;

y = calculateChunkAverages(Vout_S, chunkSize);
x = calculateChunkAverages(mT_S, chunkSize);
x_1 = x1;
y_1 = y2;

ax = axes;
plot(x_1,y_1, 'LineWidth', 2);
hold on;
plot(x,y, 'LineWidth', 2);

grid('on');
xlabel(ax, "Magnetic flux (mT)");
ylabel(ax, "Vout (V)");
% sgtitle(' (North) Magnetic Response ');
sgtitle(' Magnetic Response ');
ax.YAxisLocation = 'origin';