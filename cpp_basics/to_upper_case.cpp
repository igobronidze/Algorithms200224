#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int x = 'a' - 'A';
	
	string s;
	cin >> s;
	
	string ans;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			ans = ans + (char) (s[i] - x);
		} else {
			ans = ans + s[i];
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
