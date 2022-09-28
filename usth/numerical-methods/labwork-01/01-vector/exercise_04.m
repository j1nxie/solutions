%% Exercise 4
disp("Exercise 4")
disp("Define the symbolic function using the function syms. Find the value of f at x = 1 and y = 2")

syms f(x, y);
f(x, y) = x + y;

disp("Value of f at x = 1 and y = 2 is: ")
disp(f(1, 2))