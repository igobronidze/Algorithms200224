#include <iostream>
#include <string>
using namespace std;

bool isAlphanumberic(char c) {
	return (c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9');
}

bool equalWithoutCase(char c1, char c2) {
	int d = 'a' - 'A';
	if (c1 == c2) {
		return true;
	}
	if (c1 >= 'a' && c1 <= 'z' && c1 == c2 + d) {
		return true;
	}
	if (c2 >= 'a' && c2 <= 'z' && c2 == c1 + d) {
		return true;
	}
	return false;
}

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (true) {
    	while (true) {
    		if (isAlphanumberic(s[i])) {
    			break;
			}
			i++;
			if (i == s.length()) {
				return true;
			}
		}
		
		while (true) {
    		if (isAlphanumberic(s[j])) {
    			break;
			}
			j--;
		}
		
		if (i >= j) {
			return true;
		}
		
		if (!equalWithoutCase(s[i], s[j])) {
			return false;
		} else {
			i++;
			j--;
		}
		
	}
	return true;
}

int main() {
	string s = "A man, a plan, a canal: Panama";
	cout << isPalindrome(s) << endl;
	cout << isPalindrome("0P") << endl;
	
	return 0;
}
