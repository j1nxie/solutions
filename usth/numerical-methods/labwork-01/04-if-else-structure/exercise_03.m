%% Exercise 3
prompt = "give electric plz: ";
n = input(prompt);

price50 = 50 * 1484;
price100 = price50 + (100 - 50) * 1533;
price200 = price100 + (200 - 100) * 1786;
price300 = price200 + (300 - 200) * 2242;
price400 = price300 + (400 - 300) * 2503;

if (n <= 50)
    y = n * 1484;
elseif (n <= 100)
    y = price50 + (n - 50) * 1533;
elseif (n <= 200)
    y = price100 + (n - 100) * 1786;
elseif (n <= 300)
    y = price200 + (n - 200) * 2242;
elseif (n <= 400)
    y = price300 + (n - 300) * 2503;
else
    y = price400 + (n - 400) * 2587;
end

disp("Total bill: ")
disp(y)