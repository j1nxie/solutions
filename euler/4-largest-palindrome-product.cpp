#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int ans = 0;
    for (int i = 1; i < 100; i++)
        for (int j = 1; i < 100; i++) {
            int val = i * j;
            string mul = to_string(val);
            string rev = to_string(val);
            if (mul == rev)
                ans = val;
        }
    cout << ans << "\n";
    return 0;
}
