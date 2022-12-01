#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	if (s.substr(s.length() - 3, s.length()) == ".py"
			|| s.substr(s.length() - 3, s.length()) == ".Py"
			|| s.substr(s.length() - 3, s.length()) == ".pY"
			|| s.substr(s.length() - 3, s.length()) == ".PY") {
		cout << "yes";
	} else {
		cout << "no";
	}

	return 0;
}
