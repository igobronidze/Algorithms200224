#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> l;
	
	l.push_back(4);
	l.push_back(6);
	l.push_front(11);
	l.push_back(3);
	
	// 11 4 6 3
	cout << "front: " << l.front() << endl;
	cout << "back: " << l.back() << endl;
	cout << "size: " << l.size() << endl;
	
	
	return 0;
}
