#include <iostream>
using namespace std;

class DynamicArray {
	public:
		int capacity;
		int size;
		int * buffer;
		
		DynamicArray() {
			capacity = 2;
			size = 0;
			int arr[2];
			buffer = arr;
		}
		
		// O(1) (amortized)
		void add(int value) {
			if (size == capacity) {
				capacity = capacity * 2;	
				int *temp = new int[capacity];
				copy(buffer, buffer + size, temp);
				buffer = temp;
			}
			buffer[size] = value;
			size++;
		}
		
		// O(n)
		void insert(int index, int value) {
			if (size == capacity) {
				capacity = capacity * 2;	
				int *temp = new int[capacity];
				copy(buffer, buffer + size, temp);
				buffer = temp;
			}
			for (int i = size - 1; i >= index; i--) {
				buffer[i + 1] = buffer[i];
			}
			buffer[index] = value;
			size++;
		}
		
		// O(1)
		int get(int index) {
			return buffer[index];
		}
		
		// O(1)
		int getSize() {
			return size;
		}
		
		// O(1)
		void set(int index, int value) {
			buffer[index] = value;
		}
		
		// O(n)
		void deleteByIndex(int index) {
			for (int i = index + 1; i < size; i++) {
				buffer[i - 1] = buffer[i];
			}
			size--;
		}
		
		// O(n)
		int search(int value) {
			for (int i = 0; i < size; i++) {
				if (buffer[i] == value) {
					return i;
				}
			}
			return -1;
		}
		
		// O(n)
		void print() {
			for (int i = 0; i < size; i++) {
				cout << buffer[i] << " ";
			}
			cout << endl;
		}
};

int main() {
	DynamicArray dArr;
	cout << "Add 6 element" << endl;
	dArr.add(5);
	dArr.add(9);
	dArr.add(3);
	dArr.add(2);
	dArr.add(13);
	dArr.add(7);
	
	dArr.print();
	cout << "Size: " << dArr.getSize() << endl;
	cout << "dArr(4): " << dArr.get(4) << endl;
	
	cout << "Set(4,1)" << endl;
	dArr.set(4, 1);
	cout << "dArr(4): " << dArr.get(4) << endl;
	
	cout << "Search(3): " << dArr.search(3) << endl;
	cout << "Search(8): " << dArr.search(8) << endl;
	
	dArr.print();
	cout << "DeleteByIndex(1)"<< endl;
	dArr.deleteByIndex(1);
	dArr.print();
	
	cout << "Insert(1, -6)" << endl;
	dArr.insert(1, -6);
	dArr.print();
	
	return 0;
}
