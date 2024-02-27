// https://codeforces.com/problemset/problem/1/A

#include <iostream>
using namespace std;

int main() {
	int n, m, a;
	cin >> n >> m >> a;
	
	long long x = n / a;
	if (n % a != 0) {
		x++;
	}
	
	int y = m / a;
	if (m % a != 0) {
		y++;
	}
	
	cout << x * y << endl;
	
	
	return 0;
}
