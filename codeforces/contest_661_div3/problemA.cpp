#include <iostream>
#include <algorithm>
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
		
		sort(arr, arr + n);
		bool possible = true;
		for (int i = 1; i < n; i++) {
			if (arr[i] - arr[i - 1] > 1) {
				possible = false;
				break;
			}
		}
		
		if (possible == true) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	
	return 0;
}
