#include <iostream>
#include <cstring>
using namespace std;

string replace(string s, char c1, char c2) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c1) {
			s[i] = c2;
		}
	}
	return s;
}

int main() {
	cout << replace("test", 't', 'p') << endl;
	
	return 0;
}
