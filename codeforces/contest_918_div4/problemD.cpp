#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		
		int i = 0;
		while (i < n) {
			if (i + 2 == n) {
				cout << s[i] << s[i + 1];
				break;
			}
			if (i + 3 == n) {
				cout << s[i] << s[i + 1] << s[i + 2];
				break;
			}
			
			if (s[i + 3] == 'a' || s[i + 3] == 'e') {
				cout << s[i] << s[i + 1] << ".";
				i = i + 2;
			} else {
				cout << s[i] << s[i + 1] << s[i + 2] << ".";
				i = i + 3;
			}
		}
		cout << endl;
	}
	
	
	return 0;
}
