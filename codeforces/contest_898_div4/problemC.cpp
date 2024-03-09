#include <iostream>
using namespace std;
int main() {
	int k = 10;
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		
		int s = 0;
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				char c;
				cin >> c;
				if (c == 'X') {
					// left   - i
					// right  - k - i - 1
					// top    - j
					// bottom - k - j - 1
					if (i <= j && i <= k - i - 1 && i <= k - j - 1) {
						s = s + (i + 1);
					} else if (j <= i && j <= k - i - 1 && j <= k - j - 1) {
						s = s + (j + 1);
					} else if (k - i - 1 <= i && k - i - 1 <= j && k - i - 1 <= k - j - 1) {
						s = s + (k - i - 1 + 1);
					} else {
						s = s + (k - j - 1 + 1);
					}
				}
			}
		}
		cout << s << endl;
	}
	
	return 0;
}
