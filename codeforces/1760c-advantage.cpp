#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int t;
	cin >> t;

	for (int _ = 0; _ < t; ++_) {
		int n;
		cin >> n;
		vector<int> A(n), B(n);
		priority_queue<int> Q;
		
		for (int i = 0; i < n; ++i) {
			cin >> A[i];
			Q.push(A[i]);
		}

		for (int i = 0; i < n; ++i) {
			auto top = Q.top();
			if (A[i] == top) {
				Q.pop();
				cout << A[i] - Q.top() << " ";
				Q.push(top);
			} else {
				cout << A[i] - top << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
