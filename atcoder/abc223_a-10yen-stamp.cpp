#include <iostream>

using namespace std;

int main() {
    int x, y, i = 0;
    cin >> x >> y;
    while (x < y) {
        x += 10;
        i++;
    }
    cout << i;
    return 0;
}
