#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;
    int A[M];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int left = 0, right = 0;
    for (int i = 0; i < M; i++) {
        if (A[i] < X) {
            left++;
        } else {
            right++;
        }
    }
    cout << min(left, right) << "\n";
    return 0;
}
