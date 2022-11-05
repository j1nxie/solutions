// used editorial
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int) c; i++)
const int inf = 1000000000; // 10^9

int main() {
		int N;
		cin >> N;
		vector<int> X(N);
		rep(i, N) cin >> X[i];

		// find L and R
		int L = X[0], R = X[0];
		rep(i, N) {
				L = min(L, X[i]);
				R = max(R, X[i]);
		}

		int ans = inf;
		for (int i = L; i <= R; i++) {
				int cost = 0;
				rep(j, N) cost += (X[j] - i) * (X[j] - i);
				ans = min(ans, cost);
		}
		cout << ans << endl;
		return 0;
}

