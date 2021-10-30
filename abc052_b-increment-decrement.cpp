#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 0;
    int max = 0;
    int n; string s;
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            x++;
            if (x >= max) {
                max = x;
            }
        } else if (s[i] == 'D') {
            x--;
            if (x >= max) {
                max = x;
            }
        }
    }
    
    cout << max;
    return 0;
}
