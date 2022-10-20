%% Exercise 04

x = -3:1:3;
y = -3:1:3;

[X, Y] = meshgrid(x, y);
Z = peaks(X, Y);

figure
surf(X, Y, Z);
title('3D Surface');

x1 = 1.2;
y1 = 2.8;
z1 = interp2(X, Y, Z, x1, y1)

x2 = 2.5;
y2 = 2.5;
z2 = interp2(X, Y, Z, x2, y2)