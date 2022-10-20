%% Exercise 01

f = [-150; -175];
A = [7 11; 10 8; 1 0; 0 1];
b = [77; 80; 9; 6];
lb = zeros(2, 1);

[X, fval, exitflag, output, lambda] = linprog(f, A, b, [], [], lb);

x = linspace(0, 9);
y1 = (-7/11*x + 7);
y2 = (10 - 10/8*x);
[u, v] = meshgrid(linspace(0, 9), linspace(0, 9));

figure
box on
hold on
plot(x, y1, 'r', 'LineWidth', 2);
plot(x, y2, 'b', 'LineWidth', 2);
plot (X(1), X(2), 'g*', 'LineWidth', 2);
contour(u, v, 150*u + 175*v, 30);
axis([0 9 0 9]);
xlabel('Regular quality');
ylabel('Premium quality');
legend('Regular quality', 'Premium quality', 'Solution');
legend boxoff
hold off
