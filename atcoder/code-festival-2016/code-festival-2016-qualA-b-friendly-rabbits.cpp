#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i]--;
	}

	for (int i = 0; i < n; ++i) {
		if (a[a[i]] == i) {
			++ans;
		}
	}

	cout << ans / 2;
	return 0;
}
