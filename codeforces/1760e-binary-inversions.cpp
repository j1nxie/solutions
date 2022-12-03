#include <iostream>
#include <vector>

using namespace std;

long long int calc(vector<int> a) {
	long long int zeroes = 0, ans = 0;
	for (int i = a.size()-1; i >= 0; --i) {
		if (a[i] == 0) {
			++zeroes;
		} else {
			ans += zeroes;
		}
	}

	return ans;
}

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	long long int ans = calc(a);

	for (int i = 0; i < n; ++i) {
		if (a[i] == 0) {
			a[i] = 1;
			ans = max(ans, calc(a));
			a[i] = 0;
			break;
		}
	}

	for (int i = n-1; i >= 0; --i) {
		if (a[i] == 1) {
			a[i] = 0;
			ans = max(ans, calc(a));
			a[i] = 1;
			break;
		}
	}

	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
