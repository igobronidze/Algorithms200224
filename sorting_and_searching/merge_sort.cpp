#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
	int n1 = m - l, n2 = r - m;
	int lArr[n1], rArr[n2];
	for (int i = l; i < m; i++) {
		lArr[i - l] = arr[i];
	}
	for (int i = m; i < r; i++) {
		rArr[i - m] = arr[i];
	}
	
	int i = 0, j = 0, k = l;
	while (i < n1 || j < n2) {
		if (i == n1) {
			arr[k] = rArr[j];
			j++;
		} else if (j == n2) {
			arr[k] = lArr[i];
			i++;
		} else if (lArr[i] < rArr[j]) {
			arr[k] = lArr[i];
			i++;
		} else {
			arr[k] = rArr[j];
			j++;
		}
		k++;
	}
}

void mergeSort(int arr[], int l, int r) {
	if (r - l == 1) {
		return;
	}
	int m = (l + r) / 2;
	mergeSort(arr, l, m);
	mergeSort(arr, m, r);
	merge(arr, l, m, r);
}

int main() {
	int n = 7;
	int arr[] = {3, 15, 7, 10, 8, 22, 5};
	
	mergeSort(arr, 0, n);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
