#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
	stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			st.push(s[i]);
		} else {
			if (st.empty()) {
				return false;
			}
			char c = st.top(); // top of stack
			if (c == '(' && s[i] != ')') {
				return false;
			}
			if (c == '[' && s[i] != ']') {
				return false;
			}
			if (c == '{' && s[i] != '}') {
				return false;
			}
			st.pop();
		}
	}
	if (st.empty()) {
		return true;
	} else {
		return false;
	}
}

int main() {
	cout << isValid("[{[]}{}[]]()") << endl;
	cout << isValid("[{[]}{}[]}()") << endl;
	
	return 0;
}
