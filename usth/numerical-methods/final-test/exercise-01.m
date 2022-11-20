%% a. Calculate the arithmetic operations below:
nums = (1:15);
disp("12^3 + 15! - sqrt(9) = ")
a = 12^3 + prod(nums) - sqrt(9);
disp(a)

x = [1; 2; 3; 4; 5];
disp(x')

%% b. Calculate the matrix:

A = [1 2 3; 4 5 6; 7 8 9];
B = [1 1 9; 0 1 0; 0 0 1];

disp("A + B =")
disp(A + B)

C = A*B;
disp("C = A * B = ")
disp(C)

D = A.*B;
disp("D = A.*B = ")
disp(D)

% The difference between * and .* is:
% - * is the matrix multiplication operator
% - .* multiplies the matrices, element by element

disp("Eigenvalues of matrix D: ")
disp(eig(D))

E = inv(A-B);
disp("E = inverse of (A - B) = ")
disp(E)

disp("Reducing the size of E to 2x2 by removing the 2nd row and column: ")
E = E(1:2:3, 1:2:3);
disp(E)

%% c. Plot y = 2x + 9 for x = 0:30:

x = 0:30;
y = 2*x + 9;
hold on;
grid on;
plot(x, y, '-o', 'MarkerIndices', 1:1:30);
title("y = 2x + 9");
xlabel("x");
ylabel("y = 2x + 9");
legend ("y = 2x + 9");