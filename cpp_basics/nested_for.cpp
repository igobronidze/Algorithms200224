#include <iostream>
using namespace std;
int main() {
	
	// X000X
	// 0X0X0
	// 00X00
	// 0X0X0
	// X000X
	
	// 0 4
	// 1 3
	// 2 2
	// 3 1
	// 4 0
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1) {
				cout << "X";
			} else {
				cout << "0";
			}
		}
		cout << endl;
	}
	
	
	return 0;
}
