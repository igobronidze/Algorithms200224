#include <iostream>
using namespace std;

class QNode {
	public:
		int data;
		QNode *next;
		QNode(int x) {
			data = x;
		}
};

class Queue {
	public:
		QNode *front = NULL;
		QNode *rear = NULL;
		void enqueue(int x) {
			QNode *node = new QNode(x);
			if (front == NULL) {
				front = node;
				rear = node;
			} else {
				rear -> next = node;
				rear = node;
			}
		}
		int dequeue() {
			if (front == NULL) {
				return -1;
			}
			if (front == rear) {
				int x = front -> data;
				front = NULL;
				rear = NULL;
				return x;
			} else {
				int x = front -> data;
				front = front -> next;
				return x;
			}
		}
		int getFront() {
			if (front == NULL) {
				return -1;
			}
			return front -> data;
		}
		int getRear() {
			if (rear == NULL) {
				return -1;
			}
			return rear -> data;
		}
		bool isEmpty() {
			return front == NULL;
		}
};

class Stack {
	public:
		Queue *q1 = new Queue();
		Queue *q2 = new Queue();
		// O(1)
		void push(int x) {
			q1 -> enqueue(x);
		}
		// O(N)
		int pop() {
			if (q1 -> isEmpty()) {
				return -1;
			}
			int x;
			while (true) {
				x = q1 -> dequeue();
				if (q1 -> isEmpty() == false) {
					q2 -> enqueue(x);
				} else {
					break;
				}
			}
			Queue *tmp = q1;
			q1 = q2;
			q2 = tmp;
			return x;
		}
};

int main() {
	Stack stack;
	stack.push(10);
	stack.push(5);
	stack.push(12);
	
	cout << "pop: " << stack.pop() << endl; // 12
	
	stack.push(3);
	
	cout << "pop: " << stack.pop() << endl; // 3
	cout << "pop: " << stack.pop() << endl; // 5
	
	return 0;
}
