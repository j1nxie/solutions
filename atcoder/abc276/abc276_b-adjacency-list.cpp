#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1);
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u - 1].push_back(v);
        a[v - 1].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        sort(begin(a[i]), end(a[i]));
        cout << size(a[i]);

        for (int a : a[i]) {
            cout << ' ' << a;
        }
        cout << "\n";
    }

    return 0;
}
