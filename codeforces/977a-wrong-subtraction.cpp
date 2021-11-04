#include <iostream>

using namespace std;

int main() {
    int x, k;
    cin >> x >> k;
    
    while (k--) {
        if (x % 10 != 0) {
            x--;
        } else { 
            x = x / 10;
        }
    }
    
    cout << x;
    return 0;
}
