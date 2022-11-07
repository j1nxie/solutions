#include <iostream>

using namespace std;

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;

    cout << ((a*(a+1))/2 * (b*(b+1))/2 * (c*(c+1))/2) % 998244353;
    return 0;
}
