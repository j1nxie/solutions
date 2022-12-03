#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int _ = 0; _ < t; ++_) {
		int n;
		cin >> n;
		vector<int> a;

		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;

			if (i == 0 || x != a.back()) {
				a.push_back(x);
			}
		}

		int ans = 0;

		for (int i = 0; i < a.size(); ++i) {
			if ((i == 0 || a[i-1] > a[i]) && (i == a.size()-1 || a[i] < a[i+1])) {
				++ans;
			}
		}

		cout << (ans == 1 ? "YES\n" : "NO\n");
	}

	return 0;
}
