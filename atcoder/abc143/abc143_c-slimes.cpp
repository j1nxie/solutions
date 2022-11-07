#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    s.erase(unique(s.begin(), s.end()), s.end());

    cout << s.size();
    return 0;
}
