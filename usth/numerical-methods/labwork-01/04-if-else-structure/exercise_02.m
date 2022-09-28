%% Exercise 2
prompt = "gib x plz: ";
x = input(prompt);

if (0 < x) && (x < 10)
    y = 4*x;
elseif (10 < x) && (x < 40)
    y = 10*x;
else
    y = x;
end

disp("Value of y is: ")
disp(y)