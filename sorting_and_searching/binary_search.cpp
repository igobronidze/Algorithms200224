#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
	int l = 0, r = n;
	while (l <= r) {
		int m = (l + r) / 2;
		if (arr[m] == x) {
			return m;
		}
		if (arr[m] > x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return -1;
}

int main() {
	int n = 8;
	int arr[] = {3, 5, 6, 13, 16, 21, 30, 35};
	cout << "Find(30)=" << binarySearch(arr, n, 13) << endl;
	cout << "Find(10)=" << binarySearch(arr, n, 10) << endl;
	
	return 0;
}
