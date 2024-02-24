#include <iostream>
using namespace std;

int main() {
	double d;
	cin >> d;
	
	int x = (int)d;
	
	if (x == d) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	
	return 0;
}
