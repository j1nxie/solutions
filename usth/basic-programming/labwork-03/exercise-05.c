#include <stdio.h>

int fib(int x) {
    if (x == 0) {
        return 0;
    } else {
        if (x == 1) {
            return 1;
        } else {
            return (fib(x-1) + fib(x-2));
        }
    }
}

int main() {
    int x;
    do {
        scanf("%d", &x);
    } while (x <= 1);

    printf("i gib fib: "); 
    for (int i = 0; i <= x; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
