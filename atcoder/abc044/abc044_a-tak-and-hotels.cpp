#include <iostream>

using namespace std;

int main() {
    int n, k, x, y;
    cin >> n >> k >> x >> y;


    cout << (k < n ? ( x * k + y * (n - k) ) : ( x * n ));
    return 0;
}
