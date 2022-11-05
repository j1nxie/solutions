#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (0 < a && a <= b) {
        cout << "Positive\n";
        return 0;
    }
    if (a <= b && b < 0) {
        if ((b - a + 1) % 2 == 0) {
            cout << "Positive\n";
            return 0;
        } 
        if ((b - a + 1) % 2 != 0) {
            cout << "Negative\n";
            return 0;
        }
    }
    if (a <= 0 <= b) {
        cout << "Zero\n";
        return 0;
    }
}
