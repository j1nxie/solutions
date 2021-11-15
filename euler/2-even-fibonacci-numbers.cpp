// answer is 4613732
#include <iostream>

using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 1, sum = 0;
    while (fib(n) < 4000000) {
        if (fib(n) % 2 == 0) {
            sum += fib(n);
        }
        n++;
    }
    cout << sum << "\n";
    return 0;
}
