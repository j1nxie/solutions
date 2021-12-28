#include <iostream>

using namespace std;

int main() {
    int a, b, c; long long int k;
    cin >> a >> b >> c >> k;

    if (k % 2 == 0) {
        cout << a - b << "\n";
        return 0;
    }
    if (k % 2 != 0) {
        cout << b - a << "\n";
        return 0;
    }
    cout << "Unfair\n";
    return 0;
}
