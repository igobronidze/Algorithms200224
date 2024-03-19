#include <iostream>
using namespace std;

int main() {
	int n = 8;
	int arr[] = {5, 4, 10, 3, 1, 8, 5, 11};
	int d[n];
	d[0] = arr[0];
	for (int i = 1; i < n; i++) {
		d[i] = d[i - 1] + arr[i];
	}
	
	for (int i = 0; i < n; i++) {
		cout << d[i] << " ";
	}
	cout << endl;
	
	int q;
	cin >> q;
	for (int i = 0 ; i < q; i++) {
		int l, r;
		cin >> l >> r;
		if (l == 0) {
			cout << d[r] << endl;
		} else {
			cout << d[r] - d[l - 1] << endl;
		}
	}
	
	return 0;
}
