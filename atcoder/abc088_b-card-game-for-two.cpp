#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
		int n, ans = 0;
		cin >> n;
		vector<int> A(n);

		for (int i = 0; i < n; i++) {
				cin >> A[i];
		}

		sort(A.begin(), A.end(), greater<int>());		
		for (int i = 0; i < n; i++) {
				ans += A[i] * (i & 1 ? -1 : 1);
		}
		cout << ans << "\n";
		return 0;
}
