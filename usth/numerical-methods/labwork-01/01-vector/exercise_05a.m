%% Exercise 5a
disp("Exercise 5a")
disp("Use the function symsum to calculate")

syms f(x);
f(x) = (1/x - 1/(x+1));
f_final = symsum(f, x, 1, 20);

fprintf("Result of the equation is: ")
disp(f_final)