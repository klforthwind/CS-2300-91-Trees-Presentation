#include <iostream>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
};

Node* makeNode(int key);

Node* insertNode(Node* root, int key);

Node* binaryTreeSearch(Node* root, int key);

int main() {
	
	// Create tree that will be searched
	Node* n = nullptr;
	n = insertNode(n, 8);
	n = insertNode(n, 2);
	n = insertNode(n, 9);
	n = insertNode(n, 5);
	n = insertNode(n, 1);
	n = insertNode(n, 32);
	n = insertNode(n, 4);
	n = insertNode(n, 0);
	n = insertNode(n, 6);
	
	cout<<"I number (to insert): \n";
	cout<<"R number (to retrieve): \n";
	cout<<"E number (to exit): \n";
	
	while(true) {
		// Get key from user to search for
		string s;
		int key;
		cout<<"Enter data: ";
		cin>>s>>key;
		if (s=="R") {
			// Attempt to find a node with the specified key
			Node* selectedNode = binaryTreeSearch(n, key);

			if (selectedNode==nullptr) {
				cout<<"Node not found.\n";
			} else {
				cout<<"Node found with key "<<selectedNode->key<<"."<<endl;
				cout<<"Node pointer is "<<selectedNode<<"."<<endl;
			}	
		} else if(s=="I") {
			n = insertNode(n, key);
		} else {
			cout<<"Exiting";
			break;
		}
	}
}

// Create node with specific key, along with two attached nullptr nodes
Node* makeNode(int key) {
	Node* n = new Node();
	n->key = key;
	n->left = nullptr;
	n->right = nullptr;
	return n;
}

// Insert node into tree using the key
Node* insertNode(Node* root, int key) {
	if (root==nullptr) {
	// RootNode is a nullptr, so a new node can be created here.
		root = makeNode(key);
	} else if (key <= root->key) {
	// Key is less than or equal to root key:
		root->left = insertNode(root->left, key);
	} else {
	// Key is greater than root key;
		root->right = insertNode(root->right, key);
	}

	return root;
}

Node* binaryTreeSearch(Node* root, int searchKey) {
	if (root == nullptr) {
	// RootNode is a nullptr:
		return nullptr;
	} else if(searchKey == root->key) {
	// SearchKey is the same as root key:
		return root;
	} else if (searchKey<root->key) {
	// SearchKey is less than root key:
		return binaryTreeSearch(root->left, searchKey);
	} else {
	// SearchKey is greater than root key;
		return binaryTreeSearch(root->right, searchKey);
	}	
}