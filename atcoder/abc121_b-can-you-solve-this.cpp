#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> B(m);
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += A[i][j] * B[j];
        }
        if (sum + c > 0) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
