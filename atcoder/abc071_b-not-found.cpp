#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool alp[26];
    for (int i = 0; i < 26; i++) {
        alp[i] = false;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        alp[s[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; i++) {
        if (!alp[i]) {
            cout << (char)(i + 'a') << "\n";
            return 0;
        }
    }
    cout << "None";
    return 0;
}
