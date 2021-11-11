#include <iostream>
#include <string>

using namespace std;

int main() {
		int n, a, b, c1 = 0, c2 = 0;
		string s;
		cin >> n >> a >> b >> s;
		
		
		for (int i = 0; i < n; i++) {
				if ((s[i] == 'a') && (c1 < a + b)) {
						c1++;
						cout << "Yes" << "\n";
				} else if ((s[i] == 'b') && (c1 < a + b) && (c2 < b)) {
						c1++; c2++;
						cout << "Yes" << "\n";
				} else {
						cout << "No" << "\n";
				}
		}
		return 0;
}
