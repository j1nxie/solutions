#include <iostream>
#include <string>

using namespace std;

void solve() {
	string yes = "";
	for (int _ = 0; _ < 18; ++_) {
		yes += "Yes";
	}

	string s;
	cin >> s;

	auto ans = yes.find(s);
	cout << ((ans != string::npos) ? "YES\n" : "NO\n");
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
