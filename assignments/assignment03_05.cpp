#include <iostream>
using namespace std;

int main() {
	
	// n = 7;  m = 4;
	//i=0|   *
	//i=1|  ***
	//i=2| *****
	//i=3|*******
	
	// spaces = 3, 2, 1, 0   ->   m - 1 - i
	// stars  = 1, 3, 5, 7   ->   i * 2 + 1
	
	int n;
	cin >> n;
	int m = (n + 1) / 2;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m - 1 - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
