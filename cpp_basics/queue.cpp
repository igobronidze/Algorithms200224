#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	
	q.push(3);
	q.push(6);
	q.push(0);
	q.push(9);
	// 3 6 0 9
	
	cout << "front: " << q.front() << endl;
	cout << "back: " << q.back() << endl;
	
	q.pop();
	// 6 0 9
	
	cout << "front: " << q.front() << endl;
	cout << "back: " << q.back() << endl;
	cout << "size: " << q.size() << endl;
	
	
	return 0;
}
