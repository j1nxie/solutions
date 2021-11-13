#include <iostream>

using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    int last = a;
    while ((k--) && (k != 0)) {
        last++;
        if (last > n) {
            last = 1;
        }
    }
    
    cout << last << "\n";
    return 0;
}
