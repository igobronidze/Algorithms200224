#include <iostream>
using namespace std;

int main() {
	
	int x;
	cin >> x;
	// 576
	int c = x % 10;
	int b = x / 10 % 10;
	int a = x / 100;
	
	cout << a + b + c << endl;
	
	
	
	return 0;
}
