%% Exercise 2

x = [2 3 1 5 11];

disp("a) Find length and size of x")

l = length(x);
s = size(x);
disp(l)
disp(s)

disp("b) Find the transpose of x")

disp(x')

disp("c) Calculate product of x and its transpose")

t = x';
disp(x*t)
disp(x.*t)