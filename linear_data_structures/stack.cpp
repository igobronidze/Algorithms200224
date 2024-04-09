#include <iostream>
using namespace std;

const int maxSize = 1000;

class Stack {
	public:
		// memory - O(maxSize)
		int arr[maxSize];
		int head = -1;
		
		// O(1)
		void push(int x) {
			if (head == maxSize - 1) {
				cout << "Stack Overflow" << endl;
			} else {
				head++;
				arr[head] = x;
			}
		}
		// O(1)
		int pop() {
			if (head == -1) {
				cout << "Stack Underflow" << endl;
				return -1;
			} else {				
				int x = arr[head];
				head--;
				return x;
			}
		}
		// O(1)
		int top() {
			if (head == -1) {
				cout << "Stack Underflow" << endl;
				return -1;
			} else {
				return arr[head];
			}
		}
		// O(1)
		bool isEmpty() {
			return head == -1;
		}
		// O(1)
		int size() {
			return head + 1;
		}
};

int main() {
	Stack stack;
	stack.push(10);
	stack.push(5);
	stack.push(12);
	
	cout << "top: " << stack.top() << endl; // 12
	
	stack.push(3);
	stack.push(1);
	
	cout << "pop: " << stack.pop() << endl; // 1
	cout << "top: " << stack.top() << endl; // 3
	
	stack.push(7);
	stack.push(8);
	
	cout << "pop: " << stack.pop() << endl; // 8
	
	cout << "size: " << stack.size() << endl; // 5
	cout << "isEmpty: " << stack.isEmpty() << endl; // 0
	
	return 0;
}
