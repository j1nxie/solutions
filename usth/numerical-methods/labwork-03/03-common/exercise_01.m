%% Exercise 1

disp("Create vector x that:")
disp("- is a column vector")
disp("- has all integer value elements from 1 to 20 respectively from the top")

x = 1:20;
disp(x)

%% a) Create vector y has same length and size as x but all entries are 1

disp("a) Create vector y has same length and size as x but all entries are 1")

y = ones(size(x));
disp(y);

%% b) Calculate vector z that is sum of x and y

disp("b) Calculate vector z that is sum of x and y")

z = x + y;
disp(z);

%% c) Calculate the dot product between x and y

disp("c) Calculate the dot product between x and y")

c = dot(x, y);
disp(c);

%% d) Increment the first, 5th, 16th and last element of z by 3

disp("d) Increment the first, 5th, 16th and last element of z by 3")

z(:, 1) = z(:, 1) + 3;
disp(z(:, 1))

z(:, 5) = z(:, 5) + 3;
disp(z(:, 5))

z(:, 16) = z(:, 16) + 3;
disp(z(:, 16))

z(:, 20) = z(:, 20) + 3;
disp(z(:, 20))

%% e) Multiply those elements with 6

disp("e) Multiply those elements with 6")

z(:, 1) = z(:, 1) * 6;
disp(z(:, 1))

z(:, 5) = z(:, 5) * 6;
disp(z(:, 5))

z(:, 16) = z(:, 16) * 6;
disp(z(:, 16))

z(:, 20) = z(:, 20) * 6;
disp(z(:, 20))