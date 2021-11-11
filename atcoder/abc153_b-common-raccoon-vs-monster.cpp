#include <iostream>
using namespace std;

int main() {
		int h, n, a, sum = 0;
		cin >> h >> n;

		while (n--) {
				cin >> a;
				sum += a;
		}

		if (h - sum <= 0) {
				cout << "Yes\n";
		} else {
				cout << "No\n";
		}
		return 0;
}

