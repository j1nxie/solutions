#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) { 
        cin >> A[i];
    }

    sort(begin(A), end(A));

    for (int i = 0; i < n - 1; i++) {
        if (A[i] == A[i + 1]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
