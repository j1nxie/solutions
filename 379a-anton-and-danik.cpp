#include <iostream>
#include <string>

using namespace std;

int main() {
		int n;
		string s;
		cin >> n;
		cin >> s;
		int a = 0;
		int d = 0;

		for (int i = 0; i < n; i++) {
				if (s.at(i) == 'A') {
						a++;		
				} else if (s.at(i) == 'D') {
						d++;
				}
		}

		if (a < d) {
				cout << "Danik";
		} else if (a > d) {
				cout << "Anton";
		} else {
				cout << "Friendship";
		}
		
		return 0;
}
