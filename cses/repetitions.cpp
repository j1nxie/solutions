#include <iostream>

using namespace std;

int main() {
    int ans = 0, count = 1;
    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << 1;
        return 0;
    }

    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i+1]) {
            ++count;
        }
        
        if (s[i] != s[i+1]) {
            count = 1;
        }

        if (count > ans) {
            ans = count;
        }
    }

    cout << ans;
    return 0;
}
