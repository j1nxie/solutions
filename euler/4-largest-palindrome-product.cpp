#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string ans;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; i < 1000; i++) {
            string mul, rev;
            int test = i * j;
            mul = to_string(test);
            rev = to_string(test);
            reverse(rev.begin(), rev.end());
            if (mul.compare(rev) == 0) {
                ans = mul;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
