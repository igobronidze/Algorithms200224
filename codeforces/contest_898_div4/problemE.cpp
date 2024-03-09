#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		sort(a, a + n);
		int ans = -1;
		for (int i = 1; i < n; i++) {
			long long d = a[i] - a[i - 1];
			if (d * i >= x) {
				ans = a[i - 1] + x / i;
				break;
			} else {
				x = x - d * i;
			}
		}
		if (ans != -1) {
			cout << ans << endl;
		} else {
			cout << a[n - 1] + x / n << endl;
		}
	}
	
	
	return 0;
}
