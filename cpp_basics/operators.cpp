#include <iostream>
using namespace std;

int main() {
	int a = 25, b = 10;
	
	cout << "+: " << a + b << endl;
	cout << "-: " << a - b << endl;
	cout << "*: " << a * b << endl;
	cout << "/: " << a / b << endl;
	cout << "%: " << a % b << endl;
	a++;
	b--;
	cout << "a: " << a << "; b: " << b << endl;
	
	a = a + 3;
	cout << "a: " << a << endl;
	
	return 0;
}
