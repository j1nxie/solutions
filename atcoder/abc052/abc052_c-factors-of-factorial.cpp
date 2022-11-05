#include <iostream>
using namespace std;

void sieve(int n, bool prime[]) {
    for (int i = 1; i <= n; i++) {
        prime[i] = true;
    }

    prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
}

long long int exp_factor(int n, int p) {
    int x = p;
    long long int exponent = 0;
    while ((n/x) > 0) {
        exponent += n/x;
        x *= p;
    }

    return exponent;
}

long long int count_factors(int n) {
    long long int ans = 1;

    bool prime[n + 1];
    sieve(n, prime);

    for (int p = 1; p <= n; p++) {
        if (prime[p]) {
            ans *= (exp_factor(n, p) + 1);
        }
    }

    return (ans % (10^9 + 7));
}

int main() {
    int n;
    cin >> n;
    cout << count_factors(n);
    return 0;
}
