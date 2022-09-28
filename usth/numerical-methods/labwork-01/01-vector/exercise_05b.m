%% Exercise 5b
disp("Exercise 5b")
disp("Use the function symsum to calculate")

syms f(x);
f(x) = (1/x^2);
f_final = symsum(f, x, 1, 2000);

fprintf("Result of the equation is: ")
disp(f_final)