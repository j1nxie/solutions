#include <iostream>
using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    while (n > 0) {
        n /= k;
        ans++;
    }

    cout << ans;
    return 0;
}
