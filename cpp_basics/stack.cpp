#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	
	s.push(8);
	s.push(1);
	s.push(15);
	s.push(2);
	// 8 1 15 2
	
	cout << "top: " << s.top() << endl;
	s.pop();
	cout << "top: " << s.top() << endl;
	cout << "size: " << s.size() << endl;
	
	
	return 0;
}
