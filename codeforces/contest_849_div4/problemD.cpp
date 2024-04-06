#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int q = 0; q < t; q++){
		int n;
		string s;
		cin >> n;
		cin >> s;
		
		int first['z' + 1];
		int last['z' + 1];
		for (int i = 0; i <= 'z'; i++) {
			first[i] = -1;
			last[i] = -1;
		}
		for (int i = 0; i < n; i++) {
			if (first[s[i]] == - 1) {
				first[s[i]] = i;
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			if (last[s[i]] == - 1) {
				last[s[i]] = i;
			}
		}
		
		int max = 0;
		for (int i = 0; i < n; i++) {
			int f = 0;
			for (int j = 'a'; j <= 'z'; j++) {
				if (first[j] != -1) {
					if (first[j] < i) {
						f++;
					}
					if (last[j] >= i) {
						f++;
					}
				}
			}
			if (max < f) {
				max = f;
			}
		}
		cout << max << endl;
	}
	return 0;
}
