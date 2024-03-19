#include <iostream>
using namespace std;

int partition(int arr[], int l, int r) {
	int pivot = arr[r - 1];
	int i = l - 1;
	for (int j = l; j < r; j++) {
		if (arr[j] <= pivot) {
			i++;
			// swap i <--> j
			int x = arr[i];
			arr[i] = arr[j];
			arr[j] = x;
		}
	}
	return i;
}

void quickSort(int arr[], int l, int r) {
	if (r - l <= 1) {
		return;
	}
	int ind = partition(arr, l, r);
	quickSort(arr, l, ind);
	quickSort(arr, ind + 1, r);
}

int main() {
	int n = 7;
	int arr[] = {4, 17, 1, 8, 6, 22, 5};
	
	quickSort(arr, 0, n);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
