#include <stdio.h>

int main() {
    int x;

    do {
        scanf("%d", &x);
    } while (x <= 1);

    printf("i gib divisor: ");

    for (int i = 2; i <= x; i++) {
        if (x % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
