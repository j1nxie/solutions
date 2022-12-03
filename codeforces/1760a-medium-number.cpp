#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int _ = 0; _ < t; ++_) {
		vector<int> A(3);

		for (int i = 0; i < 3; ++i) {
			cin >> A[i];
		}

		sort(begin(A), end(A));
		cout << A[1] << "\n";
	}

	return 0;
}
