#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for (int i = 1; i <= 2000; i++) {
        int s = i * 8 / 100;
        int t = i * 10 / 100;
        if ((s == A) && (t == B)) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}
