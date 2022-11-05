#include <iostream>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    bool ans = false;
    for (int i = 0; i < s.size(); i++) {
        if (s == t) {
            ans = true;
            break;
        }
        s = s.back() + s.substr(0, s.size() - 1);
    }

    if (ans == true) {
        cout << "Yes\n";
    }
    
    if (ans == false) {
        cout << "No\n";
    }
    
    return 0;
}
