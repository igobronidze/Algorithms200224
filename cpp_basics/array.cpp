#include <iostream>
using namespace std;

int main() {
	int arr[10];
	
	arr[0] = 15;
	arr[9] = 4;
	
	cout << arr[0] << endl;
	
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	
	return 0;
}
