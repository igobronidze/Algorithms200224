#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for (int w = 0; w < t; w++) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		int min = arr[0];
		int max = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		
		bool possible = true;
		for (int i = min + 1; i < max; i++) {
			bool found = false;
			for (int j = 0; j < n; j++) {
				if (arr[j] == i) {
					found = true;
					break;
				}
			}
			if (found == false) {
				possible = false;
				break;
			}
		}
		
		if (possible == true) {
			cout << "YES" << endl;
		} else {
			cout << "NO"
		}
	}
	
	
	return 0;
}
