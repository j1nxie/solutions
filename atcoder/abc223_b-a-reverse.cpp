#include <iostream>

using namespace std;

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    l--; r--;
    int p = l, q = r;
    while (p < q) {
        swap(s[p], s[q]);
        p++; q--;
    }
    cout << s << "\n";
    return 0;
}
