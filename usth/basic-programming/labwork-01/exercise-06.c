#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("a = ");
    scanf("%i", &a);
    printf("b = ");
    scanf("%i", &b);
    printf("c = ");
    scanf("%i", &c);

    printf("%.2f", 3 * a - pow(b, 3) - 2 * sqrt(c));

    return 0;
}
