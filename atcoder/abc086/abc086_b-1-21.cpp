#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    int x = stoi(a + b);
    if (floor(sqrt(x)) == sqrt(x)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
