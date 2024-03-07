#include <iostream>
using  namespace std;

string substring(string s, int from, int to);

int main() {
	string s;
	cin >> s;
	int f, t;
	cin >> f >> t;
	
	cout << substring(s, f, t) << endl;
	
	
	return 0;
}

string substring(string s, int from, int to) {
	string a;
	for (int i = from; i < to; i++) {
		a = a + s[i];
	}
	return a;
}
