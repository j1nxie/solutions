#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = -1;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            ans = i;
        }
    }

    if (ans == -1) {
        cout << ans;
    } else {
        cout << ans + 1;
    }
    return 0;
}
