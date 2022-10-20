%% Exercise 2

disp("Solve the following set of equations with LU factorization with pivoting")

A = [2 1 -1; -3 -1 2; -2 1 2];
b = [8; -11; -3];

%% a) using function lu

disp("a) using function lu()")

[L, U] = lu(A);
d = L\b;
x = U\d;
disp(x)

%% b) using function LU_pivot

disp("b) using function LU_pivot")

[L1, U1, P1] = LU_pivot(A);
B1 = [-11; -3; 8];
d1 = L1\B1;
x1 = U1\d1;
disp(x)

%% c) using function LU_nonpivot

disp("c) using function LU_nonpivot")

[L2, U2, P2] = LU_nonpivot(A);
B2 = [-11; -3; 8];
d2 = L2\B2;
x2 = U2\d2;
disp(x)

%% d) using function mylup

disp("d) using function mylup")

[L3, U3, P3] = mylup(A);
B3 = [-11; -3; 8];
d3 = L3\B3;
x3 = U3\d3;
disp(x)