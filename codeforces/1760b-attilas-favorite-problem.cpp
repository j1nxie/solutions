#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int _ = 0; _ < t; ++_) {
		int n;
		cin >> n;
		string s;
		cin >> s;

		sort(s.begin(), s.end());

		cout << (int) s[n - 1] - 96 << "\n";
	}

	return 0;
}
