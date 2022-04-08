#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, prod = 1;
    printf("gib number: ");
    scanf("%d", &x);
    while (true) {
        int last_digit = x % 10;
        prod *= last_digit;
        x = x / 10;
        
        if (x / 10 == 0) {
            prod *= x;
            break;
        }
    }

    printf("i gib prod: %d", prod);
    return 0;
}
