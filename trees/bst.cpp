#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *left;
		Node *right;
		Node(int x) {
			data = x;
			left = NULL;
			right = NULL;
		}
};

class BST {
	private:
		void innerInorderTraversal(Node *node) {
			if (node == NULL) {
				return;
			}
			
			innerInorderTraversal(node -> left);
			cout << node -> data << " ";
			innerInorderTraversal(node -> right);
		}
		void innerPreorderTraversal(Node *node) {
			if (node == NULL) {
				return;
			}
			
			cout << node -> data << " ";
			innerPreorderTraversal(node -> left);
			innerPreorderTraversal(node -> right);
		}
		void innerPostorderTraversal(Node *node) {
			if (node == NULL) {
				return;
			}
			
			innerPostorderTraversal(node -> left);
			innerPostorderTraversal(node -> right);
			cout << node -> data << " ";
		}
	public:
		Node* root;
		void insert(int x) {
			if (root == NULL) {
				root = new Node(x);
			} else {
				Node *node = root;
				while (true) {
					if (node -> data > x) {
						if (node -> left == NULL) {
							node -> left = new Node(x);
							break;
						} else {
							node = node -> left;
						}
					} else {
						if (node -> right == NULL) {
							node -> right = new Node(x);
							break;
						} else {
							node = node -> right;
						}
					}
				}
			}
		}
		
		bool search(int x) {
			Node *node = root;
			while (true) {
				if (node -> data == x) {
					return true;
				}
				if (node -> data > x) {
					node = node -> left;
				} else {
					node = node -> right;
				}
				if (node == NULL) {
					return false;
				}
			}
		}
		
		int min() {
			Node *node = root;
			while (node -> left != NULL) {
				node = node -> left;
			}
			return node -> data;
		}
		
		int max() {
			Node *node = root;
			while (node -> right != NULL) {
				node = node -> right;
			}
			return node -> data;
		}
		
		void inorderTraversal() {
			innerInorderTraversal(root);
		}
		
		void preorderTraversal() {
			innerPreorderTraversal(root);
		}
		
		void postorderTraversal() {
			innerPostorderTraversal(root);
		}
		
		bool deleteElement(int x) {
			Node *node = root;
			Node *parent = NULL;
			while (true) {
				if (node -> data == x) {
					break;
				}
				parent = node;
				if (node -> data > x) {
					node = node -> left;
				} else {
					node = node -> right;
				}
				if (node == NULL) {
					return false;
				}
			}
			
			// No children
			if (node -> left == NULL && node -> right == NULL) {
				if (parent != NULL) {
					if (parent -> right -> data == x) {
						parent -> right = NULL;
					} else {
						parent -> left = NULL;
					}
				}
				delete node;
				return true;
			}
			// No right child
			if (node -> right == NULL) {
				if (parent != NULL) {
					if (parent -> right -> data == x) {
						parent -> right = node -> left;
					} else {
						parent -> left = node -> left;
					}
				}
				delete node;
				return true;
			}
			
			// Find min element in right subtree of node
			Node *min = node -> right;
			while (min -> left != NULL) {
				min = min -> left;
			}
			int minData = min -> data;
			deleteElement(minData);
			node -> data = minData;
			return true;
		}
};

int main() {
	BST bst;
	bst.insert(7);
	bst.insert(20);
	bst.insert(3);
	bst.insert(12);
	bst.insert(8);
	bst.insert(11);
	bst.insert(23);
	bst.insert(1);
	bst.insert(19);
	
	cout << "search(8): " << bst.search(8) << endl;
	cout << "search(9): " << bst.search(9) << endl;
	
	cout << "min: " << bst.min() << endl;
	cout << "max: " << bst.max() << endl;
	
	cout << "inorderTraversal: ";
	bst.inorderTraversal();
	cout << endl;
	
	cout << "preorderTraversal: ";
	bst.preorderTraversal();
	cout << endl;
	
	cout << "postorderTraversal: ";
	bst.postorderTraversal();
	cout << endl;
	
	cout << "delete(23): " << bst.deleteElement(23) << endl;
	cout << "delete(7): " << bst.deleteElement(7) << endl;
	cout << "inorderTraversal: ";
	bst.inorderTraversal();
	cout << endl;
	
	
	return 0;
}
