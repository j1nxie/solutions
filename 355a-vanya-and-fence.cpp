#include <iostream>

using namespace std;

int main() {
    int n, h, x;
    int w = 0;
    cin >> n;
    cin >> h;

    for (int i = 0; i < n; i++) {
        cin >> x;
	if (x > h) {
            w = w + 2;
        } else if (x <= h) {
            w++;
        }
    }

    cout << w;
    return 0;
}
