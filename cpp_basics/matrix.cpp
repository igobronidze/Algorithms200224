#include <iostream>
using namespace std;

int main() {	
	int n = 5;
	
	int m[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			m[i][j] = i * j;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	

	
	return 0;
}
