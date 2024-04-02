#include <iostream>
#include <string>
using namespace std;

class Car {
	public:
		string brand;
		int year;
		string getDescription() {
			return brand;
		}
};

int main() {
	Car c;
	c.brand = "BMW";
	c.year = 2024;
	
	string s = c.getDescription();
	cout << s << endl;
	
	return 0;
}
