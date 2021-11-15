// answer is 6857
#include <iostream>

using namespace std;

int main() {
    long long int i = 2, n = 600851475143;
    while (i * i < n) {
        while (n % i == 0) {
            n /= i;
        }
        i++;
    }
    cout << n << "\n";
    return 0;
}
