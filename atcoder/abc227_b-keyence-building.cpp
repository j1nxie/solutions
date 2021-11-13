#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int a = 1; a <= 1000; a++) {
            for (int b = 1; b <= 1000; b++) {
                if ((4*a*b + 3*a + 3*b) == s[i]) {
                    flag = 1;
                }
            }
        }
        if (flag == 0) {
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
