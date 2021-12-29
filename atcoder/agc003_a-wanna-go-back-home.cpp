#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    bool n = false, w = false, s = false, e = false;
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'N') {
            n = true;
        }
        if (S[i] == 'W') {
            w = true;
        }
        if (S[i] == 'E') {
            e = true;
        }
        if (S[i] == 'S') {
            s = true;
        }
    }

    if ((n && !s) || (!n && s)) {
        cout << "No\n";
        return 0;
    }
    if ((w && !e) || (!w && e)) {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
    return 0;
}
