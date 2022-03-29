#include <stdio.h>

int main() {
    double temperature;

    printf("giv celcius plz: ");
    scanf("%lf", &temperature);

    double fahrenheit = (temperature * 1.8) + 32.0;

    printf("here ur fahrenheit: %.2lf", fahrenheit);
    return 0;
}
