#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for (int p = 0; p < t; p++) {
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		
		for (int i = 0; i < k; i++) {
			int minInd = 0;
			for (int j = 1; j < n; j++) {
				if (a[j] < a[minInd]) {
					minInd = j;
				}
			}
			
			int maxInd = 0;
			for (int j = 1; j < n; j++) {
				if (b[j] > b[maxInd]) {
					maxInd = j;
				}
			}
			
			if (a[minInd] < b[maxInd]) {
				int x = a[minInd];
				a[minInd] = b[maxInd];
				b[maxInd] = x;
			} else {
				break;
			}
		}
		int s = 0;
		for (int i = 0; i < n; i++) {
			s = s + a[i];
		}
		cout << s << endl;
	}
	
	
	return 0;
}
