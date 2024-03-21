#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int arr[] = {4, 7, 2, 10, 8};
	
	for (int i = 0; i < n; i++) {
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
				swapped = true;
			}
		}
		if (swapped == false) {
			break;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
