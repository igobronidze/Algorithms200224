#include <iostream>
#include <vector>

using namespace std;

int main() {	
	vector<int> v;
	
	cout << "capacity: " << v.capacity() << endl;
	
	v.push_back(5);
	v.push_back(9);
	v.push_back(2);
	v.push_back(10);
	v.push_back(19);
	
	cout << "v[0] = " << v[0] << endl;
	cout << "size = " << v.size() << endl;
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	
	cout << "capacity: " << v.capacity() << endl;
	
	v.pop_back();
	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;
	
	
	return 0;
}
