#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long int> a(n), b(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	long long int sum = 0;

	for (int i = 0; i < n; ++i) {
		b[i] = a[i] - sum;
		sum += b[i];
	}

	for (int i = 0; i < n; ++i) {
		cout << b[i] << " ";
	}

	return 0;
}
