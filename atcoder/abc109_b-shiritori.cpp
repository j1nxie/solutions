#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    string ans = "Yes";
    cin >> n;

    vector<string> w(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    // first condition
    for (int i = 0; i < n-1; i++) {
        if (w[i].back() != w[i+1].front()) {
            ans = "No";
        }
    }

    // second condition
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (w[i] == w[j]) {
                ans = "No";
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
