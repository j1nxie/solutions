%% Exercise 2

disp("Exercise 2")
disp("Create a matrix A that:")
disp("- has a size of 3*3")
disp("- all the entries is 1")

A = ones(3);
disp(A)

%% a) Create matrix B that is transpose of A

disp("a) Create matrix B that is transpose of A")

B = A';
disp(B)

%% b) Compute sum of A and B

disp("b) Compute sum of A and B")

disp(A + B)

%% c) Compute A*B and B*A

disp("c) Compute A*B and B*A")

disp(A*B)
disp(B*A)

%% d) Increment all elements of A by 2

disp("d) Increment all elements of A by 2")

for i = 1:3
    for j = 1:3
        A(i, j) = A(i, j) + 2;
    end
end

disp(A)