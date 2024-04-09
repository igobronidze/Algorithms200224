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
	// memory - O(n)
	public:
		QNode *front = NULL;
		QNode *rear = NULL;
		// O(1)
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
		// O(1)
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
		// O(1)
		int getFront() {
			if (front == NULL) {
				return -1;
			}
			return front -> data;
		}
		// O(1)
		int getRear() {
			if (rear == NULL) {
				return -1;
			}
			return rear -> data;
		}
		// O(1)
		bool isEmpty() {
			return front == NULL;
		}
};

int main() {
	Queue queue;
	queue.enqueue(6);
	queue.enqueue(3);
	queue.enqueue(11);
	
	cout << "deque: " << queue.dequeue() << endl; // 6
	cout << "getFront: " << queue.getFront() << endl; // 3
	cout << "getRear: " << queue.getRear() << endl; // 11
	
	queue.enqueue(9);
	
	cout << "deque: " << queue.dequeue() << endl; // 3
	cout << "deque: " << queue.dequeue() << endl; // 11
	cout << "deque: " << queue.dequeue() << endl; // 9
	
	cout << "isEmpty: " << queue.isEmpty() << endl; // 1
	
	
	return 0;
}
