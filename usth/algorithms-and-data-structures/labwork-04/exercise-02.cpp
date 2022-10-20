#include <iostream>
using namespace std;

int sum(int x) {
    if (x == 0) {
        return 0;
    }

    return (x % 10 + sum(x / 10));
}

int main() {
    int x;
    cout << "gib number: ";
    cin >> x;

    cout << "sum of " << x << "'s digits is: " << sum(x);
    return 0;
}
