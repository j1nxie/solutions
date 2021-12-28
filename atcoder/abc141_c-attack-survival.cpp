#include <iostream>

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    int ques[q], score[n];
    
    for (int i = 1; i <= q; i++) {
        cin >> ques[i];
    }

    for (int i = 1; i <= n; i++) {
        score[i] = k - q;
    }

    for (int i = 1; i <= q; i++) {
        score[ques[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (score[i] <= 0) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}
