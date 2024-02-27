// https://codeforces.com/problemset/problem/271/A

#include <iostream>
using namespace std;

int main() {
	
	int year;
	cin >> year;
	
	while (true) {
		year++;
		int d = year % 10;
		int c = year / 10 % 10;
		int b = year / 100 % 10;
		int a = year / 1000;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			cout << year << endl;
			break;
		}
	}
	
	return 0;
}
