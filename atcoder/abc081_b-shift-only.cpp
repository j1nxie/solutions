#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n, ans;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minv = INFINITY;
    for (int i = 0; i < n; i++) {
        ans = 0;
        while (a[i] % 2 == 0) {
            ans++;
            a[i] /= 2;
        }
        minv = min(minv, ans);
    }
    cout << minv << "\n";
    return 0;
}
