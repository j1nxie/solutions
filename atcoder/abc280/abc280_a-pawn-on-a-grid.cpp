#include <iostream>

using namespace std;

int main() {
	int h, w, ans = 0;
	cin >> h >> w;

	for (int _ = 0; _ < h; ++_) {
		string s;
		cin >> s;

		for (auto i : s) {
			if (i == '#') {
				++ans;
			}
		}
	}

	cout << ans;
	return 0;
}
