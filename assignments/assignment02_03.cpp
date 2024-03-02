#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x;
	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x > max) {
			max = x;
		}
	}
	
	cout << max << endl;
	
	// 5 10 4 17 8
	// max = 0
	// max = 5
	// max = 10
	// max = 10
	// max = 17
	// max = 17
	
	
	return 0;
}
