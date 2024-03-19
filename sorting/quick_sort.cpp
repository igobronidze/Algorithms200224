#include <iostream>
using namespace std;

int partition(int arr[], int l, int r) {
	int pivot = arr[r - 1];
	int j = l - 1;
	for (int i = l; i < r; i++) {
		if (arr[i] <= pivot) {
			j++;
			// swap i <-->j
			int x = arr[j];
			arr[j] = arr[i];
			arr[i] = x;
		}
	}
	return j;
}

void quickSort(int arr[], int l, int r) {
	if (r - l <= 1) {
		return;
	}
	int ind = partition(arr, l , r);
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
