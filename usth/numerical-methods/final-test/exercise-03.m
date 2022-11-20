%% a. Determine heat capacity c at 100C:

T = [-50; -30; 0; 60; 90; 110];
c = [1270; 1280; 1350; 1480; 1580; 1700];

f = fit(T, c, 'poly1');
x = f(100);
hold on;
plot(f);
plot(100, x, 'o');
hold off;
grid on;
%% b. Use forward difference formula with step 0.1 and 0.01:

f = @(x) 2 + x^3 + exp(2*x+1);
h1 = 0.1;
x = 0;

diff1 = (f(x + h1) - f(x))/h1;
disp("With step h = 0.1: ")
disp(diff1)

h2 = 0.01;
diff2 = (f(x + h2) - f(x))/h2;
disp("With step h = 0.01: ")
disp(diff2)

%% c. Calculate integral of f(x) from 0 to 0.8: f(x) = 9 + 25x - x^2

f = @(x) -x.^2 + 25*x + 9;
a = 0;
b = 0.8;

x = 0:0.01:0.8;
fx = f(x);
disp("Using trapz: ")
disp(trapz(x, fx))

disp("Using quad: ")
disp(quad(f, 0, 0.8))