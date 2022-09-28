%% Exercise 2

f = @(x) x^2 - 9;

disp("a) Find positive root using fzero")

x0 = [0 4];
x = fzero(f, x0)

disp("b) Initial guess of zero")

x0 = 0;
x = fzero(f, x0)

disp("c) Display all iterations with optimset")

x0 = 0;
options = optimset('display', 'iter');
x = fzero(f, x0, options)

disp("d) Set tolerance tolx = 10^-3")

x0 = 0
options = optimset('tolx', 1e-3);
x = fzero(f, x0, options)

disp("e) Verify solutions using roots")
p = [1 0 -9];
r = roots(p);
disp(r)