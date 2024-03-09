#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n, k;
		cin >> n >> k;
		int a[n];
		int h[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int j = 0; j < n; j++) {
			cin >> h[i];
		}
		int l = 0;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (i == 0 || h[i - 1] % h[i] == 0) {
				sum += a[i];
			} else {
				
			}
		}
	}
	
	
	return 0;
}
