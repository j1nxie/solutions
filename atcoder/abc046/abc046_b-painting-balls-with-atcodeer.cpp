#include <iostream>

using namespace std;

int main() {
	int n, k, ans;
	cin >> n >> k;

	ans = k;

	for (int i = 1; i < n; ++i) {
		ans *= (k-1);
	}

	cout << ans;
	return 0;
}
