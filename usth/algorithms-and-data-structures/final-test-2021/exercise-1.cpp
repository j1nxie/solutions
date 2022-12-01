#include <iostream>

using namespace std;

// pseudocode:
// show_prime_factor:
// number <- input
// factor <- 2
// if number < 2:
//    return nothing
// if number % factor == 0:
//    recurse: show_prime_factor(number / factor, factor)
//    print current factor
// else:
//    recurse: show_prime_factor(number, factor + 1)

void show_prime_factor(int number, int factor = 2) {
	if (number < 2) {
		return;
	}

	if (number % factor == 0) {
		show_prime_factor(number / factor, factor);
		cout << factor << " ";
	} else {
		show_prime_factor(number, factor + 1);
	}
}

int main() {
	int n;
	cin >> n;
	show_prime_factor(n);
	return 0;
}
