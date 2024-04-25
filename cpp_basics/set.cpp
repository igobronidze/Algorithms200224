#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	s.insert(8);
	s.insert(3);
	s.insert(12);
	s.insert(7);
	s.insert(3);
	s.insert(9);
	
	cout << "size: " << s.size() << endl;
	cout << "contains(7): " << (s.find(7) != s.end()) << endl;
	cout << "contains(10): " << (s.find(10) != s.end()) << endl;
	
	for (int x : s) {
		cout << x << " ";
	}
	cout << endl;
	
	return 0;
}
