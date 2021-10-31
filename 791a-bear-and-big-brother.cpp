#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int s = 0;

    while (a <= b) {
        a = a * 3;
        b = b * 2;
        s++;
    }

    cout << s;
    return 0;
}
