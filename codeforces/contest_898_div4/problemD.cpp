#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'B') {
				i = i + k - 1;
				ans++;
			}
		}
		cout << ans << endl;
	}
	
	
	return 0;
}
