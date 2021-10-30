#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int x = ceil(n / 1.08);

    if (floor(x * 1.08) == n) {
        cout << x;
    } else {
        cout << ":(";
    }
    return 0;
}
