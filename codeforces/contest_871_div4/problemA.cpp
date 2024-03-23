#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n;
		cin >> n;
		int m1 = 1000000, m2 = 1000000, m3 = 1000000;
		for (int i = 0; i < n; i++) {
			int m;
			cin >> m;
			string s;
			cin >> s;
			if (s == "01") {
				if (m < m1) {
					m1 = m;
				}
			}
			if (s == "10") {
				if (m < m2) {
					m2 = m;
				}
			}
			if (s == "11") {
				if (m < m3) {
					m3 = m;
				}
			}
		}
		if (m3 == 1000000 && (m1 == 1000000 || m2 == 1000000)) {
			cout << -1 << endl;
		} else {
			if (m3 < m1 + m2) {
				cout << m3 << endl;
			} else {
				cout << m1 + m2 << endl;
			}
		}
	}
	
	return 0;
}
