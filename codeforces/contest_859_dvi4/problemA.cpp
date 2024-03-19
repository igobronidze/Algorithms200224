#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b == c) {
			cout << "+" << endl;
		} else {
			cout << "-" << endl;
		}
	}
}
