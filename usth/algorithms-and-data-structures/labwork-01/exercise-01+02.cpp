#include <iostream>
#include <cstring>
using namespace std;

// pseudocode:
// let A be array of Boolean values, initially all set to true
//
// for i = 2, 3, 4, ..., not exceeding sqrt(n) do
//      if A[i] is true
//              for j = i^2, i^2 + i, i^2 + 2i, ..., not exceeding n do
//                      A[j] <- false

bool numbers[1001];

void sieve() {
    memset(numbers, true, sizeof(numbers));

    for (int p = 2; p*p < 1001; p++) {
        if (numbers[p]) {
            for (int i = p*2; i < 1001; i = i+p) {
                numbers[i] = false;
            }
        }
    }

}

// let divisors be array of integers, initially set to 0
// let count be an integer, initially set to 0
//
// for (i <- 1; i <= x; i++)
//      if (x mod i == 0 and count < 9)
//              increment count;
//              increment j;
//              divisors[j] <- i;
//
// let prime_divisors be an integer, initially set to 0
//
// for (i <- 1; i < count; i++)
//      if divisors[i] is prime
//              increment prime_divisors
//
// if count == 8 and prime_divisors == 3
//      return true
// else return false

bool is_sphenic(int x) {
    int divisors[8] = {0};
    int count = 0;
    int j = 0;

    for (int i = 1; i <= x; i++) {
        if (x % i == 0 && count < 9) {
            count++;
            divisors[j++] = i;
        }
    }

    int prime_divisors = 0;
    
    for (int i = 1; i < count; i++) {
        if (numbers[divisors[i]]) {
            prime_divisors++;
        }
    }

    return (count == 8 && prime_divisors == 3);
}

// complexity is O(n) as the function only has one loop

// runs above sieve algorithm
// n <- input
//
// for (i <- 1; i < n; i++) 
//      if i is sphenic
//              print i

int main() {
    sieve();
    int n;
    cout << "gib number plz: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (is_sphenic(i)) {
            cout << i << endl;
        }
    }

    return 0;
}

// total complexity of program is O(n^2)
