#include <iostream>
using namespace std;
int main() {
	
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int a = 0, b = 0, c = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				char k;
				cin >> k;
				if (k == 'A') {
					a++;
				}
				if (k == 'B') {
					b++;
				}
				if (k == 'C') {
					c++;
				}
			}
		}
		if (a == 2) {
			cout << "A" << endl;
		} else if (b == 2) {
			cout << "B" << endl;
		} else {
			cout << "C" << endl;
		}
	}
	
	return 0;
}
