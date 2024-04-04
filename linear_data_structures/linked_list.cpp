#include <iostream>
using namespace std;

class Node {
	public:
		int value;
		Node *next;
		Node(int v) {
			value = v;
			next = NULL;
		}
};

class LinkedList {
	public:
		Node *head;
		void add(int v) {
			Node* node = new Node(v); 
			if (head == NULL) {
				head = node;
			} else {
				Node *tmp = head;
				while (tmp -> next != NULL) {
					tmp = tmp -> next;
				}
				tmp -> next = node;
			}
		}
		void print() {
			Node *tmp = head;
			while (tmp != NULL) {
				cout << tmp -> value << " ";
				tmp = tmp -> next;
			}
			cout << endl;
		}
};

int main() {
	LinkedList ll;
	ll.add(7);
	ll.add(12);
	ll.add(4);
	
	ll.print();
	
	
	return 0;
}
