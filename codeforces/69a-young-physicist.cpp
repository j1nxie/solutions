#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, z;
    int sx = 0;
    int sy = 0;
    int sz = 0;
    cin >> n;

    while (n--) {
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    if ((sx == 0) && (sy == 0) && (sz == 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
