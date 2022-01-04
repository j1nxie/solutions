#include <iostream>
#include <string>

using namespace std;

unsigned long long karatsuba(unsigned long long a, unsigned long long b) {
    unsigned long long digits;
    unsigned long long top_left, top_right, bottom_left, bottom_right;
    unsigned long long x1, x2, x3;
    if (a < 10 || b < 10) {
        return a * b;
    }
    string a_str = to_string(a);
    string b_str = to_string(b);
    digits = max(a_str.length(), b_str.length());
    unsigned long long half = digits / 2;
    top_left = stoi(a_str.substr(0, half));
    top_right = stoi(a_str.substr(half, digits - half));
    bottom_left = stoi(b_str.substr(0, half));
    bottom_right = stoi(b_str.substr(half, digits - half));
    x1 = karatsuba(top_left, bottom_left);
    x2 = karatsuba(top_right, bottom_right);
    x3 = karatsuba((top_left + top_right), (bottom_left + bottom_right));
    return x1 * pow(10, digits) + (x3 - x2 - x1) * pow(10, half) + x2;
}

int main() {
    cout << karatsuba(1234, 1234);
    return 0;
}
