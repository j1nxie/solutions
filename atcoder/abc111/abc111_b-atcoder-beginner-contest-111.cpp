#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n / 111;
    if (n % 111 != 0) {
        ++i;
    }

    cout << i * 111;
    return 0;
}
