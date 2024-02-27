// Shemodis erti mteli ricxvi n(0 < n <10^9), daadginet misi cifrta jami.
#include <iostream>
using namespace std;

int main() {
	// 357460245
	
	int n;
	cin >> n;
	
	int s = 0;
	while (n != 0) {
		int x = n % 10;
		s = s + x;
		n = n / 10;
	}
	
	cout << s << endl;
	
	return 0;
}
