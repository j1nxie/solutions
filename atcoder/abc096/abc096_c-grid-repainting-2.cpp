#include <iostream>

using namespace std;

int main() {
	int h, w, ans = 0;
	cin >> h >> w;

	char a[50][50];

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (a[i][j] == '#'
					&& a[i][j-1] != '#'
					&& a[i-1][j] != '#'
					&& a[i+1][j] != '#'
					&& a[i][j+1] != '#') {
				++ans;
			}
		}
	}
	
	cout << ((ans == 0) ? "Yes" : "No");
}
