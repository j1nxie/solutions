#include <stdio.h>

double sum(int x) {
    double sum = 0;
    for (int i = x; i > 0; i--) {
        sum += 1.0/i; 
    }
    return sum;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%.2lf", sum(x));
    return 0;
}
