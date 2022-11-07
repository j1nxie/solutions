#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, ans = 0;
    cin >> n >> k;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (a[0] == 0) {
        cout << "0";
    } else {
        for (auto i : a) {
            if ((i >= a[k-1]) && (i != 0)) {
                ans++; 
            }
        }
        cout << ans;
    }
    return 0;
}
