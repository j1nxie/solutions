#include <iostream>
using namespace std;

// pseudocode:
// get two numbers: integer a, reference integer max
// if (a > max)
//      max <- a

void find_max(int &max, int a) {
    if (a > max) {
        max = a;
    }
}

// integer n
// n <- input
//
// initialize array of size n
// for (i = 0 to n)
//      array[i] <- input
//
// max <- array[0]
//
// for (i = 0 to n)
//      find max using above function
// 
// print max

int main() {
    int n;

    cout << "gib array size plz: ";
    cin >> n;

    int arr[n];
    cout << "gib numbers plz: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 0; i < n; i++) {
        find_max(max, arr[i]);
    }

    cout << "i gib max: " << max;

    return 0;
}

// total complexity is O(n)
