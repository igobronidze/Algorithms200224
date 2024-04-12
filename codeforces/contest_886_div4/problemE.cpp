#include <iostream>
#include <cmath>
using namespace std;

/*
calculateSum =
(s[0] + 2w)^2
(s[1] + 2w)^2
...
(s[n-1] + 2w)^2
*/
unsigned long long calculateSum(int n, long long s[], long long w) {
	unsigned long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + (s[i] + w * 2) * (s[i] + w * 2);
	}
	return sum;
}

int main() {
	int t;
	cin >> t;
	for (int p = 0; p < t; p++) {
		int n;
		cin >> n;
		long long c;
		cin >> c;
		long long s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		
		long long from = 1;
		long long to = sqrt(c / n) + 1;
		while (true) {
			long long mid = (from + to) / 2;
			long long sum = calculateSum(n, s, mid);
			// cout << from << " " << to << endl;
			if (sum == c) {
				cout << mid << endl;
				break;
			}
			if (sum > c) {
				to = mid;
			} else {
				from = mid + 1;
			}
		}
	}
	
	return 0;
}
