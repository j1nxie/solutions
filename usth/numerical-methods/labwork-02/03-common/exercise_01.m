%% Exercise 1

disp("a) log(x) = 770")

x0 = 5;
func = @(x) log(x) - 770;
x = fzero(func, x0)

disp("b) e^x = 15")

x0 = 0;
func = @(x) exp(x) - 15;
x = fzero(func, x0)

disp("c) sin(x) = 0.12")

x0 = 0.2;
func = @(x) sin(x) - 0.12;
x = fzero(func, x0)

disp("d) sin(x + pi/5) = 0.25")

x0 = 0.2;
func = @(x) sin(x + pi/5) - 0.25;
x = fzero(func, x0)

disp("e) tan(x + 2pi/3) = 3")

x0 = 0.5;
func = @(x) tan(x + 2*pi/3) - 3;
x = fzero(func, x0)