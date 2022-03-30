#include <stdio.h>

int fact(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * fact(x-1);
    }
}

int main() {
    int x;
    do {
        scanf("%d", &x);
    } while (x < 0);

    printf("i gib factorial: %d", fact(x));

    return 0;
}
