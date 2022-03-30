#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int x) {
    if (x == 0 || x == 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false; 
        }
    }
    
    return true;
}

int main() {
    int x;
    do {
        scanf("%d", &x);
    } while (x <= 1);

    printf("i gib primes: ");

    for (int i = 2; i <= x; i++) {
        if (prime(i) == true) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
