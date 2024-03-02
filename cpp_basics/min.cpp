#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[1005];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	cout << min << endl;
	
	
	return 0;
}
