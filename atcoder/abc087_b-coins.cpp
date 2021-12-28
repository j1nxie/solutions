#include <iostream>

using namespace std;

int main() {
    int a, b, c, x, ans = 0;
    cin >> a >> b >> c >> x;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                int total = i * 500 + j * 100 + k * 50;
                if (total == x) {
                    ans++;
                }
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
