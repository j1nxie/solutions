%% Exercise 1
disp("Exercise 1")
disp("Define a row vector x, one row, five columns with value = (1, 2, 3, 4, 5); find the value x(3) + x(2)?")

x = [1 2 3 4 5];
fprintf("Vector x = ");
disp(x)
y = x(3) + x(2);
fprintf("Sum of x(3) and x(2) is: ");
disp(y)