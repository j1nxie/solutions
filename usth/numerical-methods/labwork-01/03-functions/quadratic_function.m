function [x1, x2] = quadratic_function(a, b, c)
    X = sqrt(b^2 - 4*a*c);
    Y = 2*a;

    x1 = (-b + X)/Y;
    x2 = (-b - X)/Y;
end