#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 1, x;

    printf("x = ");
    scanf("%i", &x);
    printf("%i", a * x * x + b * x + c);
    
    return 0;
}
