#include <iostream>

using namespace std;

bool parse(int h, int m) {
    int a = h / 10;
    int b = h % 10;
    int c = m / 10;
    int d = m % 10;

    int ac = a * 10 + c;
    int bd = b * 10 + d;

    return (0 <= ac && ac <= 23) && (0 <= bd && bd <= 59);
}

int main() {
    int h, m;
    cin >> h >> m;
    
    while (!parse(h, m)) {
        ++m;
        if (m == 60) {
            ++h;
            m = 0;
        }

        if (h == 24) {
            h = 0;
        }
    }

    cout << h << " " << m;
    return 0;
}
