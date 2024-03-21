#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
	long long l = 1, r = num;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (m * m == num) {
			return true;
		}
		if (m * m < num) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return false;
}

int main() {
	cout << isPerfectSquare(25) << endl;
	cout << isPerfectSquare(110) << endl;
	cout << isPerfectSquare(169) << endl;
	
	return 0;
}
