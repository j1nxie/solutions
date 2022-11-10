#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, v = 7;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin.clear();
        getline(cin, s[n]);
    }

    for (auto i : s) {
        if (i == "Skru op!") {
            ++v;
        } else {
            --v;
        }

        if (v > 10) {
            v = 10;
        } else if (v < 0) {
            v = 0;
        }
    }

    cout << v;
    return 0;
}
