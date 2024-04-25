#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		
		map<int, int> mpA, mpB;
		for (int i = 0; i < m; i++) {
			int x = a[i];
			if (mpA.find(x) == mpA.end()) {
				mpA[x] = 1;
			} else {
				mpA[x] = mpA[x] + 1;
			}
			
			int y = b[i];
			if (mpB.find(x) == mpB.end()) {
				mpB[y] = 1;
			} else {
				mpB[y] = mpB[y] + 1;
			}
		}
		
		int c = 0;
		for (pair<int, int> pr : mpA) {
			if (mpB.find(pr.first) != mpB.end()) {
				c = c + min(pr.second, mpB[pr.first]);
			}
		}
		
		int ans = 0;
		if (c >= k) {
			ans++;
		}
		
		for (int i = m; i < n; i++) {
			int x = a[i];
			if (mpA.find(x) == mpA.end()) {
				mpA[x] = 1;
			} else {
				mpA[x] = mpA[x] + 1;
			}
			if (mpB.find(x) != mpB.end()) {
				if (mpA[x] <= mpB[x]) {
					c++;
				}
			}
			
			int y = a[i - m];
			mpA[y]--;
			if (mpB.find(y) != mpB.end()) {
				if (mpA[y] < mpB[y]) {
					c--;
				}
			}
			
			if (c >= k) {
				ans++;
			}
		}
		
		cout << ans << endl;
	}
	
	
	return 0;
}
