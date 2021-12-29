#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    string s;
    cin >> a >> b >> s;
    for (int i = 0; i < a; i++) {
        if (!('0' <= s[i] && s[i] <= '9')) {
            cout << "No\n";
            return 0;
        }
    }

    if (s[a] != '-'){
        cout << "No\n";
        return 0;
    }

    for (int i = a+1; i < a+b; i++) {
        if (!('0' <= s[i] && s[i] <= '9')) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}
