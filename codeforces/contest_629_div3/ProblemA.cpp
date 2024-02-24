#include <iostream>
using namespace std;

int main() {
	int t;
	int a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		int x = a % b;
		if (x == 0) {
			cout << 0 << endl;
		} else {
			cout << b - x << endl;	
		}
	}
	
	return 0;
}
