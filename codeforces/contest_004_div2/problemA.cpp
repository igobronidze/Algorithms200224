// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	
	if (x % 2 == 0 && x != 2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	
	return 0;
}
