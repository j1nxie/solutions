#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(200);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0 + k; i < n + k; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
