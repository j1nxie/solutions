#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<long long int> prime_factor(long long int n) {
	vector<long long int> ans;
	while (n % 2 == 0) { 
		ans.push_back(2);
		n /= 2;
	}

	for (long long int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			ans.push_back(i);
			n /= i;
		}
	}

	if (n > 2) {
		ans.push_back(n);
	}

	return ans;
}

int main() {
	long long int k;
	cin >> k;
	vector<long long int> v = prime_factor(k);
	sort(v.begin(), v.end());
	long long int max_prime = v[v.size() - 1];
	long long int count = 0;
	for (int i = v.size() - 1; i >= 0; --i) {
		if (v[i] == max_prime) {
			++count;
		}

		if (v[i] != max_prime) {
			break;
		}
	}

	if (count == 0 || count == 1) {
		cout << max_prime;
	} else {
		cout << max_prime * (count - 1);
	}

	return 0;
}
