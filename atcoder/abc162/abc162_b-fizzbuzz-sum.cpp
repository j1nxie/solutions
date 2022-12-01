#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	int n;
	cin >> n;

	long long int ans = 0;

	for (int i = 1; i <= n; ++i) {
		if (i % 3 != 0 && i % 5 != 0) {
			ans += i;
		}
	}

	cout << ans;
	return 0;
}
