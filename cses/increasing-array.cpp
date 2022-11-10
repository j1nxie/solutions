#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n, ans = 0;
    cin >> n;
    vector<long long int> x(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    for (int i = 1; i < n; ++i) {
        if (x[i] < x[i - 1]) {
            ans += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }
    }

    cout << ans;
    return 0;
}
