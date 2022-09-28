%% a) Define matrix
disp("a) Define matrix A by two approaches: Define element by element and use function zeros")

fprintf("Matrix A defined element by element: \n")
A = [0 0 0;
     0 0 0;
     0 0 0];
disp(A)

fprintf("Matrix A defined using zeros: \n")
A = zeros(3, 3);
disp(A)

%% b) Change diagonal of A to 1 without redefining the matrix using diag
disp("b) Change diagonal of A to 1 without redefining the matrix using diag")

fprintf("Matrix A after changing diagonal to 1: \n")
for i = 1:3
    A(i, i) = 1;
end
disp(A)

%% c) Define B = A transposed
disp("c) Define B = A transposed")

fprintf("Matrix B = \n")
B = A';
disp(A)

%% d) Calculate A+B, A-B, A*B and A.*B. Give remarks about A*B and A.*B
disp("d) Calculate A+B, A-B, A*B and A.*B. Give remarks about A*B and A.*B")

fprintf("A + B = \n")
A+B

fprintf("A - B = \n")
A-B

fprintf("A * B = \n")
A*B

fprintf("A. * B = \n")
A.*B

%% e) Reduce the size of A to 2x2 by removing row 3 and column 3 of the original matrix. Do the same for B but remove row 1 and column 1. 

disp("e) Reduce the size of A to 2x2 by removing row 3 and column 3 of the original matrix. Do the same for B but remove row 1 and column 1.")

A1 = A(1:2, 1:2);
fprintf("Matrix A after reducing size: \n")
disp(A1)

B1 = B(2:3, 2:3);
fprintf("Matrix B after reducing size: \n")
disp(B1)

%% f) What's the difference between A(1:3) and A(1:3, 1) and A(:, 1)?

disp("f) What's the difference between A(1:3) and A(1:3, 1) and A(:, 1)?")
fprintf("A(1:3) = \n")
disp(A(1:3))

fprintf("A(1:3, 1) = \n")
disp(A(1:3, 1))

fprintf("A(:, 1) = \n")
disp(A(:, 1))