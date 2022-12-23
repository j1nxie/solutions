#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s, t;
	string diff;

	cin >> s >> t;

	string s_cmp = s;
	string t_cmp = t;

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	set_difference(t.begin(), t.end(), s.begin(), s.end(), back_inserter(diff));

	for (int i = 0; i < t_cmp.length(); ++i) {
		if (diff[0] == t_cmp[i] && t_cmp[i] != s_cmp[i]) {
			cout << i + 1;
			break;
		}
	}

	return 0;
}
