#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    double cmp = min(max(x, y), max(y, z));

    cout << min(cmp, x+y+z);

    return 0;
}
