#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		
		if (mp.find(x) == mp.end()) {
			mp[x] = 1;
		} else {
			mp[x] = mp[x] + 1;
		}
	}
	
	for (pair<int, int> p : mp) {
		cout << p.first << " - " << p.second << endl;
	}
	
	
	return 0;
}
