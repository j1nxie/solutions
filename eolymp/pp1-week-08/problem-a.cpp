#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double x;
    cin >> x;

    double fx = x + sin(x);

    cout << fixed;
    cout << setprecision(4);
    cout << fx;
    
    return 0;
}
