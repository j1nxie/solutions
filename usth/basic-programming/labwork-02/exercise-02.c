#include <stdio.h>

int main() {
    int number[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &number[i]);
    }

    int min = number[0], max = number[0];
    for (int i = 0; i < 3; i++) {
        if (number[i] < min) {
            min = number[i];
        }
        if (number[i] > max) {
            max = number[i];
        }
    }

    printf("here ur min: %d\n", min);
    printf("here ur max: %d", max);
    
    return 0;
}
