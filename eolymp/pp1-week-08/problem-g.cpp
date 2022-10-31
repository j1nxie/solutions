#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int x;
    cin >> x;

    int hundred = (x / 100);
    int ten = (x / 10) % 10;
    int digit = (x % 100) % 10;

    int sum = hundred + ten + digit;

    cout << fixed;
    cout << setprecision(3);
    cout << sqrt(sum);

    return 0;
}
