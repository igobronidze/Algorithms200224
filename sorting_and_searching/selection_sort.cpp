#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int arr[] = {4, 7, 2, 10, 8};
	
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		// swap
		int x = arr[i];
		arr[i] = arr[min];
		arr[min] = x;
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
