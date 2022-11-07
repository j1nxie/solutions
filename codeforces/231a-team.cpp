#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    vector<int> A(n), B(n), C(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i] >> B[i] >> C[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        if (A[i] == 1) {
            count++;
        }

        if (B[i] == 1) {
            count++;
        }

        if (C[i] == 1) {
            count++;
        }

        if (count >= 2) {
            ans++;
        }
    }
    
    cout << ans;

    return 0;
}
