#include <iostream>

using namespace std;

int main() {
    long long int n, ans = 1;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        ans *= 2;
        ans %= 1000000007;
    }

    cout << ans;
    return 0;
}
