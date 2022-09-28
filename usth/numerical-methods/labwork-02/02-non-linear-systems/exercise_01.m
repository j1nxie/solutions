%% a) Use graph to derive good guesses using ezplot

disp("a) Use graph to derive good guesses using ezplot")

f1 = @(x1, x2) x1^2 + x1 * x2 - 10;
f2 = @(x1, x2) x2 + 3 * x1 * x2^2 - 57;

fg = figure
ax = axes;
ez1 = ezplot(f1);
hold on
grid on
ez2 = ezplot(f2);
xlim(ax, [0 8]);
ylim(ax, [0 8]);
legend('x1^2 + x1 * x2 - 10', 'x2 + 3 * x1 * x2^2 - 57')
set(ez1, 'color', [1 0 0]);
title("Line plot of y = x1^2 + x1 * x2 - 10 and y = x2 + 3 * x1 * x2^2 -57")

%% b) Solve these equations using Newton-Raphson method

disp("b) Solve these equations using Newton-Raphson method")

x = [1 1]';
N = 50;
for k = 1:N
    F = [x(1)*x(1) + x(1) * x(2) - 10; x(2) + 3 * x(1) * x(2) * x(2) - 57];
    A = [2*x(1) + x(2), x(1); 3*x(2).^2, 1 + 6*x(1).*x(2)];
    dx = A\F;
    x = x - dx;
    k = k + 1;
end
k
x'
F'

%% c) Use fsolve to find solution of the system

disp("c) Use fsolve to find solution of the system")

fun = @root2d;
x0 = [0, 0];
x = fsolve(fun, x0)

%% d) Use newtmult.m to solve above system

x0 = [1.5 3.5]';
es = 0.05;
maxit = 500;
[x, f, ea, iter] = newtmult(@root2, x0, es, maxit)