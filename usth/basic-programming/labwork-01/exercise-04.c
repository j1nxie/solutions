#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

double area(double r) {
    return M_PI * r * r;
}

double circumference(double r) {
    return M_PI * 2 * r;
}

int main() {
    double r;

    printf("%.2f\n", area(2));
    printf("%.2f\n", circumference(2));

    printf("radius: ");
    scanf("%lf", &r);
    printf("%.2f\n", area(r));
    printf("%.2f\n", circumference(r));
    return 0;
}
