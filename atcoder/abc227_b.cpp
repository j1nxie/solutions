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
        for (int a = 1; a <= 20; a++) {
            for (int b = 1; b <= a; b++) {
                if ((4*a*b + 3*a + 3*b) == s[i]) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << n-ans << "\n";
    return 0;
}
