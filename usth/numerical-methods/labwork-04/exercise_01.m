%% Exercise 01

students = ["Lan Anh", "Van Toan", "Quang Hai","Xuan Truong","Cong Phuong", ...
    "Huyen My", "My Linh", "Duc Chinh", "Pham Van Duc"];
weight = [40, 63, 62, 68, 64, 45, 50, 66, 67];
jhi = [1450, 3817, 3708, 4300, 3950, 1896, 2339, 4200, 4312];
VanLam = 72;

%% a) using fit()

f = fit(weight', jhi', 'poly1');
func = @(x) f.p1*x + f.p2;
figure
hold on
grid on
box on
fplot(func, [20 80], 'g');
plot(weight', jhi', 'b*', "LineWidth", 2);
plot(VanLam, func(VanLam), 'r*', "LineWidth", 2);
legend("Linear Equation", "Other players", "Van Lam");
hold off

%% b) using polyfit()

f2 = polyfit(weight, jhi, 2);
func2 = @(x) f2(1)*x^2 + f2(2)*x + f2(3);
figure
hold on
grid on
box on
fplot(func2, [20 80], 'g');
plot(weight', jhi', 'b*', "LineWidth", 2);
plot(VanLam, func(VanLam), 'r*', "LineWidth", 2);
legend("Equation", "Other players", "Van Lam");
hold off

%% c) using lsqcurvefit()

c = @(f, x) f(1)*x + f(2);
a = lsqcurvefit(c, [2; 3], weight, jhi);
func3 = @(x) a(1)*x + a(2);
figure
hold on
grid on
box on
fplot(func3, [20 80], 'g');
plot(weight', jhi', 'b*', "LineWidth", 2);
plot(VanLam, func(VanLam), 'r*', "LineWidth", 2);
legend("Equation", "Other players", "Van Lam");
hold off