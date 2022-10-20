function [J, f] = root2(x)
    f = [x(1)*x(1) + x(1)*x(2) - 10; x(2) + 3*x(1)*x(2)*x(2) - 57];
    J = [2*x(1) + x(2), x(1); 3*x(2).^2, 1 + 6*x(1).*x(2)];
end