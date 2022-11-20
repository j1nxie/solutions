%% a. Determine an equation using curve fitting:

Mass = [400; 70; 45; 2; 0.3; 0.16];
Metabolism = [270; 82; 50; 4.8; 1.45; 0.97];

f = fit(Mass, Metabolism, 'poly1');
tiger = f(200);

disp("Equation: ");
disp(f)

disp("Metabolism rate of 200kg tiger: ");
disp(tiger)

%% b. Use newtraph.m to find the root of function y = x^2 - 9:

y = @(x) x^2 - 9;
dy = @(x) 2*x;
roots = newtraph(y, dy, 2.5, 0.00001, 50);

disp("Roots of function y = x^2 - 9:")
disp(roots)

%% c. Compute and display 1 - 1/3 + 1/5 - 1/7 + 1/9 - ... - 1/10003 using for:

a = 0;
for i = 1:4:999
    a = a + 1/i;
end
for i = 3:4:1003
    a = a - 1/i;
end

disp("1 - 1/3 + 1/5 - 1/7 + 1/9 - ... - 1/1003 = ")
disp(a)

%% d. Solve system of linear equations using inv, mldivide, lu:

A = [1 -2 3; -1 3 -1; 2 -5 5];
b = [9; -6; 17];

x1 = inv(A)*b;
disp("Solve using inv: ")
disp(x1)

x2 = mldivide(A, b);
disp("Solve using mldivide: ")
disp(x2)

[L, U, P] = lu(A);
y = L\(P*b);
x3 = U\y;
disp("Solve using lu: ");
disp(x3)