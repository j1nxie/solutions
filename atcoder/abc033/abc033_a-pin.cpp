#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 1111 == 0) {
        cout << "SAME\n";
    } else {
        cout << "DIFFERENT\n";
    }

    return 0;
}
