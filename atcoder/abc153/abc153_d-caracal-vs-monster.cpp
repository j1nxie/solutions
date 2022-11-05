#include <iostream>
#include <cmath>

using namespace std;

long long int hits(long long int h) {
    long long int ans = 0;
    if (h == 1) {
        return 1;
    }
    if (h > 1) {
        ans = 2 * hits(floor(h/2)) + 1;
    }
    return ans;
}

int main() {
    long long int h;
    cin >> h;
    cout << hits(h) << "\n";
    return 0;
}
