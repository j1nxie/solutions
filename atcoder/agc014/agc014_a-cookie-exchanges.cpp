#include <iostream>

using namespace std;

int main() {
    int a, b, c, ans = 0, x, y, z;
    cin >> a >> b >> c;

    if ((a == b) && (b == c) && (a % 2 == 0)) {
        cout << "-1\n";
    } else {
        while ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0)) {
            x = (a+b)/2;
            y = (b+c)/2;
            z = (c+a)/2;
            a = x; b = y; c = z;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
