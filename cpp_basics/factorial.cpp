#include <iostream>
using namespace std;

int factorial(int x) {
	if (x == 1) {
		return 1;
	}
	return factorial(x - 1) * x;
}

int main() {
	cout << factorial(5) << endl;
	
	return 0;
}
