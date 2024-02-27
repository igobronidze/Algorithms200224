#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 1) {
			continue;
		}
		if (i == 10) {
			break;
		}
		cout << i << endl;
	}
	
	
	return 0;
}
