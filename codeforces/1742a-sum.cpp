#include <iostream>

using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a + b == c || c + a == b || b + c == a) ? "YES\n" : "NO\n");
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
