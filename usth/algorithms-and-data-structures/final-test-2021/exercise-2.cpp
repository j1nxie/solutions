#include <iostream>

using namespace std;

bool prime(int number) {
	if (number == 1) {
		return true;
	} else if (number == 0) {
		return false;
	} else {
		for (int i = 2; i < sqrt(number); i++) {
			if (number % i == 0) {
				return false;
			}
		}
	}

	return true;
}

void factorization(int number) {
	int d1 = 0, d2 = 0;

	if (number % 2 == 0) {
		d1 = number / 2;
		d2 = 2;
		cout << d2 << " ";
	} else {
		for (int i = 2; i < sqrt(number); ++i) {
			if (number % i == 0) {
				d1 = number / i;
				d2 = i;
				if (prime(d1)) {
					cout << d1 << " ";
				}
				cout << d2 << " ";	
				break;
			}
		}
	}

	if (!prime(d1)) {
		factorization(d1);
	}

	if (!prime(d2)) {
		factorization(d2);
	}

	if (prime(d1) && prime(d2)) {
		return;
	}
}

int main() {
	int n;
	cin >> n;
	factorization(n);
	return 0;
}
