#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double a, b, h;
    cin >> a >> b >> h;

    for (double i = a; i <= b; i += h) {
        cout << fixed;
        cout << setprecision(3);
        cout << i << " " << 3 * sin(i) << "\n";
    }

    return 0;
}
