#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int minInd = 0;
		for (int i = 1; i < n; i++) {
			if (a[minInd] > a[i]) {
				minInd = i;
			}
		}
		a[minInd]++;
		int product = 1;
		for (int i = 0; i < n; i++) {
			product *= a[i];
		}
		cout << product << endl;
	}
	
	
	return 0;
}
