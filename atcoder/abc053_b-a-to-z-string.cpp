#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int left = 0, right = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            left = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'Z') {
            right = i;
            break;
        }
    }
    cout << right - left + 1 << "\n";
    return 0;
}
