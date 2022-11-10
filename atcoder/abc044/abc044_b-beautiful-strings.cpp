#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<char, int> chars;
    string s;
    cin >> s;
    bool result = true;

    for (auto i : s) {
        if (chars.find(i) != chars.end()) {
            chars.insert_or_assign(i, chars[i]++);
        } else {
            chars.insert({i, 1});
        }

        cout << " " << chars[i];
    }

    for (auto i : chars) {
        result = result && (i.second % 2 == 0);
    }

    cout << (result ? "Yes" : "No");
    return 0;
}
