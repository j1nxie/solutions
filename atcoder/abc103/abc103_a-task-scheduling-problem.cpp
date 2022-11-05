#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    cout << max({a1, a2, a3}) - min({a1, a2, a3});
    return 0;
}
