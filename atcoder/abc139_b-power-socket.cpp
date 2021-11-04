#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    int socket = 1;

    while (socket < b) {
        socket--;
        socket += a;
        ans++;
    }

    cout << ans;
    return 0;
}
