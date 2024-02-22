// https://codeforces.com/contest/1915/problem/A

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b) {
			cout << c << endl;
		}
		if (b == c) {
			cout << a << endl;
		}
		if (a == c) {
			cout << b << endl;
		}
	}
	
	return 0;
}
