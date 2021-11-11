#include <iostream>
#include <string>

using namespace std;

int main() {
		string s, ans = "AC";
		cin >> s;

		if (s[0] != 'A') {
				ans = "WA";
		}

		int count = 0;
		int L = s.size();
		for (int i = 1; i < L; ++i) {
				if (isupper(s[i])) {
						if ((i == 1) || (i == L - 1) || (s[i] != 'C')) {
								ans = "WA";	
						}
						++count;
				}
		}

		if (count != 1) {
				ans = "WA";
		}

		cout << ans << "\n";
		return 0;
}
