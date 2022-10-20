#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sum = 0;
    cout << "gib number plz: ";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        sum += stoi(s.substr(i, 1));
    }

    cout << "sum: " << sum;
}
