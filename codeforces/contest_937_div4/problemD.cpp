#include <iostream>
using namespace std;
int main() {
	int n = 16;
	int arr[] = {10, 11, 101, 111, 1001, 1011, 1101, 1111, 10001, 10011, 
	10101, 10111, 11001, 11011, 11101, 11111};
	
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int x;
		cin >> x;
		for (int i = n - 1; i >= 0; i--) {
			while (x % arr[i] == 0)	{
				x = x / arr[i];
			}
		}
		if (x == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
