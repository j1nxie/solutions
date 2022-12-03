#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v(3);
	for (int i = 0; i < 3; ++i) {
		cin >> v[i];
	}
	int k;
	cin >> k;

	cout << v[0] + v[1] + v[2] + *max_element(v.begin(), v.end()) * ((int) pow(2, k) - 1);
	return 0;
}
