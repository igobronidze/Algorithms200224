#include <iostream>
using namespace std;

int main() {
	// 5
	// 9 15 2 8 0
	// 15

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;
	
	bool b = false;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			b = true;
			break;
		}
	}
	
	if (b == true) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	
	return 0;
}
