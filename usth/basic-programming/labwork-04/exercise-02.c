#include <stdio.h>
#include "exercise-01\gcd.h"

int main() {
    int x, y, z, t;
    scanf("%d %d %d %d", &x, &y, &z, &t);
    int result = gcd(gcd(x, y), gcd(z, t));
    printf("i gib gcd: %d", result);
    return 0;
}
