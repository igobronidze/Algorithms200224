#include <iostream>
#include <map>
using namespace std;
int main() {
	map<string, int> mp;
	
	mp["test"] = 3;
	mp["TEST"] = 10;
	mp["test"] = 6;
	mp["t"] = 9;
	
	cout << "size: " << mp.size() << endl;
	
	cout << "test: " << mp["test"] << endl;
	
	for (pair<string, int> p : mp) {
		cout << p.first << " = " << p.second << endl;
	}
	
	return 0;
}
