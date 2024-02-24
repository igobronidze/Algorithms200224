#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Please enter a number" << endl;
	cin >> x;
	
	if (x % 2 == 0) {
		cout << "Even" << endl;
	} else {
		cout << "Odd" << endl;
	}
	
	if (x > 0) {
		cout << "Positive" << endl;
	} else if (x < 0) {
		cout << "Negative" << endl;
	} else {
		cout << "Zero" << endl;
	}
	
	// &&
	// ||
	// !
	// ^
	if (x > 9 && x < 100) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	
	return 0;
}
