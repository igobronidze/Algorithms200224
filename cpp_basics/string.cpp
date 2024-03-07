#include <iostream>
#include <cstring>
using namespace std;

int main() {
//	string s = "test";
//	string p = s + "2";
//	cout << p << endl;

	string s;
	cin >> s;
	int vowels = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			vowels++;
		}
	}
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << s.size() - vowels << endl;
	
	
	return 0;
}
