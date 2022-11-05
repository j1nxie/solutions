#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> chars;
    string s;
    cin >> s;
    bool result = true;

    for (int i = 0; i < s.length(); i++) {
        if (chars.find(s[i]) != chars.end()) {
            chars.insert_or_assign(s[i], chars[s[i]]++);
            cout << s[i] << " " << chars[s[i]];
        } else {
            chars.insert_or_assign(s[i], 1);
        }
    }

    for (auto i = chars.begin(); i != chars.end(); i++) {
        result = result && (i->second % 2 == 0);
    }

    cout << (result ? "Yes" : "No");
    return 0;
}
