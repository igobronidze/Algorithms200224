#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int arr[] = {4, 7, 2, 10, 8};
	
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		while (j != -1) {
			if (arr[j] > arr[j + 1]) {
				// swap
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			} else {
				break;
			}
			j--;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	
	return 0;
}
