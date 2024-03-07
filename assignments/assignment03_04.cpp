#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int m[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> m[i][j];
		}
	}
	
	int p = 1;
	for (int i = 0; i < n; i++) {
		p = p * m[i][i];
	}
	
	cout << p << endl;
	
	
	return 0;
}
