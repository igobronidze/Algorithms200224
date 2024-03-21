#include <iostream>
using namespace std;

int main() {
	int n = 9;
	int arr[] = {2, 5, 3, 0, 1, 3, 0, 3, 5};
	
	// Find max
	// m = 5
	int m = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > m) {
			m = arr[i];
		}
	}
	
	// Init
	// countArr = {0, 0, 0, 0, 0, 0}
	int countArr[m + 1] = {0};
	
	// Count
	// countArr = {2, 1, 1, 3, 0, 2}
	for (int i = 0; i < n; i++) {
		countArr[arr[i]]++;
	}
	
	// Modficiation
	// countArr = {2, 3, 4, 7, 7, 9}
	for (int i = 1; i <= m; i++) {
		countArr[i] = countArr[i - 1] + countArr[i];
	}
	
	// arr = {2, 5, 3, 0, 1, 3, 0, 3, 5};
	// result = {0, 0, 1, 2, 3, 3, 3, 5, 5}
	int result[n];
	for (int i = 0; i < n; i++) {
		int x = arr[i];
		result[countArr[x] - 1] = x;
		countArr[x]--;
	}
	
	// Print
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	
	return 0;
}
