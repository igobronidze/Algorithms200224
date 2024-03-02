#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i < n; i++) {
		if (i % 2 == 1) {
			cout << i << endl;
		}
	}
	
//	for (int i = 1; i < n; i+=2) {
//		cout << i << endl;
//	}
	
	return 0;
}
