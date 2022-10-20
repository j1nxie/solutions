%% Exercise 1

disp("Exercise 1: ")
disp("Solve the system of linear equations")

A = [2 1 -1; -3 -1 2; -2 1 2];
B = [8; -11; -3];

%% a) using inv or mldivide

disp("a) using inv or mldivide")

A_inv = inv(A);
sol = A_inv*B;
disp(sol)

%% b) using the function GaussPivot.m

disp("b) using the function GaussPivot.m")

sol = GaussPivot(A, B);
disp(sol)a