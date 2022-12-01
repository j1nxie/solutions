#include <iostream>
#include <vector>

using namespace std;

// check if any three integers are valid triangle sides:
//
// check_triangle(a, b, c):
// a, b, c <- input
// if (a + b > c) AND (a + c > b) AND (b + c > a)
//    return true
// else return false
// endif

bool check_triangle(int a, int b, int c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}

	return false;
}

// check for valid triangle sets in an array:
//
// parse_array(array A):
// n <- size of array A
// answer_count <- 0
// for i <- 0 to n - 1
//    for j <- i + 1 to n - 1
//        for k = j + 1 to n - 1
//		      if (check_triangle(A[i], A[j], A[k])) == true
//	              answer_count <- answer__count + 1
//	          endif
//	      endfor
//	  endfor
// endfor

void parse_array(vector<int> A) {
	int n = A.size(), answer_count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				if (check_triangle(A[i], A[j], A[k])) {
					++answer_count;
				}
			}
		}
	}
	cout << answer_count;
}

int main() {
	int n;
	cin >> n;

	vector<int> A(n);

	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	parse_array(A);
	return 0;
}

// total complexity of the algorithm is O(n^3) due to there being three loops
// iterating over the array.
