#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long int n, sum = 0;
	cin >> n;

	vector<int> A(n);
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	for (int i = 1; i < n; i += 2) {
		sum += A[i];	
	}

	cout << sum;
	return 0;
}
