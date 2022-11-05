#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < 20; i++) {
        if (n < (1 << (i + 1))) {
            cout << (1 << i) << "\n";
            break;
        }
    }
    return 0;
}
