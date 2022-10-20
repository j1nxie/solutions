%% Exercise 02

x = 0:0.01:0.8;
y = 0.2 + 25*x - 200*x.^2 + 675*x.^3 - 900*x.^4 + 400*x.^5;
f = @(x) 0.2 + 25*x - 200*x.^2 + 675*x.^3 - 900*x.^4 + 400*x.^5;

%% a) Using trapz()

disp("a) Using trapz()")
Z = trapz(x, y);
disp(Z)

%% b) Using cumtrapz()

disp("b) Using cumtrapz()")
Z = cumtrapz(x, y);
disp(Z)

%% c) Using integral()

disp("c) Using integral()")
Z = integral(f, 0, 0.8);
disp(Z)

%% d) Using quadadapt()

disp("d) Using quadadapt()")
Z = quadadapt(f, 0, 0.8, 1e-6);
disp(Z)
