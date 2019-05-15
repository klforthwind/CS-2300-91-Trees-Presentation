#include <iostream>
#include <windows.h>
#include <cwchar>

using namespace std;

HANDLE hConsole;
void setBlue();
void setGreen();
void setRed();
void setPurple();
void setOrange();
void set(int);

void next();

struct Node {
	int key;
	Node* left;
	Node* right;
};

Node* makeNode(int key);

Node* insertNode(Node* root, int key);

Node* binaryTreeSearch(Node* root, int key);

int main() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	system("cls");
	
	setGreen();
	cout<<"-----Trees-----\n\n";
	cout<<"                  5                   \n";
	cout<<"               /  |  \\                \n";
	cout<<"              4   5   9               \n";
	cout<<"             /** *|*  **\\             \n";
	cout<<"            1     5     10            \n";
	cout<<"           ***   ***    ***           \n";

	next();

	cout<<"A tree is a nonlinear, two-dimensional data structure.\n";
	cout<<"\n";
	cout<<"----- Basic Terminology-----\n";
	cout<<"Root Node: First node of the tree\n";
	cout<<"\t A node that all other nodes are linked to\n";
	cout<<"\t (whether directly or indirectly)\n";
	cout<<"Child Node: A node that is linked to a parent node \n";
	cout<<"Left Child: Root node of the left subtree\n";
	cout<<"Right Child: Root node of the right subtree\n";
	cout<<"Siblings: Children nodes of a specific node\n";
	cout<<"Leaf Node: Node with no children linked\n";
	
	next();

	setOrange();
	cout<<"-----Binary Tree Code-----\n\n";
	cout<<"#include <iostream>\n";
	cout<<"\n";
	cout<<"using namespace std;\n";
	cout<<"\nstruct Node {\n";
	cout<<"\tint key;\n";
	cout<<"\tNode* left;\n";
	cout<<"\tNode* right; \n";
	cout<<"}; \n";

	next();

		cout<<"-----Binary Tree Code-----\n\n";
	cout<<"Node* makeNode(int key);\n";
	cout<<"\n";
	cout<<"Node* insertNode(Node* root, int key);\n";
	cout<<"\n";
	cout<<"Node* binaryTreeSearch(Node* root, int key);\n";
	
	next();

	cout<<"-----Binary Tree Code-----\n\n";
	cout<<"int main() {\n";
	cout<<"\n";
	setGreen();
	cout<<"\t// Create tree that will be searched\n";
	setOrange();
	cout<<"\tNode* n = nullptr;\n";
	cout<<"\tn = insertNode(n, 8);\n";
	cout<<"\tn = insertNode(n, 9);\n";
	cout<<"\tn = insertNode(n, 2);\n";
	cout<<"\tn = insertNode(n, 5);\n";
	cout<<"\tn = insertNode(n, 1);\n";

	next();

	cout<<"-----Binary Tree Code-----\n\n";
	cout<<"\twhile(true) {\n";
	setGreen();
	cout<<"\t\t// Get key from user to search for\n";
	setOrange();
	cout<<"\t\tstring s;\n";
	cout<<"\t\tint key;\n";	
	cout<<"\t\tcout<<\"Enter Data: \";\n";
	cout<<"\t\tcout<<\"I number (to insert): \";\n";
	cout<<"\t\tcout<<\"R number (to retrieve): \";\n";
	cout<<"\t\tcout<<\"E number (to exit): \";\n";
	cout<<"\t\tcin>>s>>key;\n";
	
	next();

	cout<<"-----Binary Tree Code-----\n\n";
	cout<<"\t\tif (s==\"R\") {\n";
	setGreen();
	cout<<"\t\t// Attempt to find a node with the specified key\n";	
	setOrange();
	cout<<"\t\tNode* selectedNode = binaryTreeSearch(n, key);\n";
	cout<<"\t\tif (selectedNode==nullptr) {\n";
	cout<<"\t\t\tcout<<\"Node not found.\\n\";\n";
	cout<<"\t\t} else {\n";
	cout<<"\t\t\tcout<<\"Node found with key \"<<selectedNode->key<<\".\"<<endl;\n";
	cout<<"\t\t\tcout<<\"Node pointer is \"<<selectedNode<<\".\"<<endl;\n";
	cout<<"\t\t}\n";
	cout<<"\t\t} else if(s==\"I\") {\n";
	cout<<"\t\t\tn = insertNode(n, key);\n";
	cout<<"\t\t} else {\n";
	cout<<"\t\t\tcout<<\"Exiting\";\n";
	cout<<"\t\t\tbreak;\n";
	cout<<"\t\t}\n";

		next();

	cout<<"-----Binary Tree Code-----\n\n";
	setGreen();
	cout<<"// Create node with specific key, along with two attached nullptr nodes\n";
	setOrange();
	cout<<"Node* makeNode(int key) {\n";
	cout<<"\tNode* n = new Node();\n";
	cout<<"\tn->key = key;\n";
	cout<<"\tn->left = nullptr;\n";
	cout<<"\tn->right = nullptr;\n";
	cout<<"\treturn n;\n";
	cout<<"}\n";

	next();

	cout<<"-----Binary Tree Code-----\n\n";
	setGreen();
	cout<<"// Insert node into tree using the key\n";
	setOrange();
	cout<<"Node* insertNode(Node* root, int key) {\n";
	cout<<"\tif (root==nullptr) {\n";
	setGreen();
	cout<<"\t\t// RootNode is a nullptr, so a new node can be created here.\n";
	setOrange();
	cout<<"\t\troot = makeNode(key);\n";
	cout<<"\t} else if (key <= root->key) {\n";
	setGreen();
	cout<<"\t// Key is less than or equal to root key:\n";
	setOrange();
	cout<<"\t\troot->left = insertNode(root->left, key);\n";
	cout<<"\t} else {\n";
	setGreen();
	cout<<"\t\t// Key is greater than root key;\n";
	setOrange();
	cout<<"\t\troot->right = insertNode(root->right, key);\n";
	cout<<"\t}\n";
	cout<<"\t\n";
	cout<<"\treturn root;\n";
	cout<<"}\n";

	next();

	cout<<"-----Binary Tree Code-----\n\n";
	cout<<"Node* binaryTreeSearch(Node* root, int searchKey) {\n";
	cout<<"\tif (root == nullptr) {\n";
	setGreen();
	cout<<"\t\t// RootNode is a nullptr:\n";
	setOrange();
	cout<<"\t\treturn nullptr;\n";
	cout<<"\t} else if(searchKey == root->key) {\n";
	setGreen();
	cout<<"\t// SearchKey is the same as root key:\n";
	setOrange();
	cout<<"\t\treturn root;\n";
	cout<<"\t} else if (searchKey<root->key) {\n";
	setGreen();
	cout<<"\t// SearchKey is less than root key:\n";
	setOrange();
	cout<<"\t\treturn binaryTreeSearch(root->left, searchKey);\n";
	cout<<"\t} else {\n";
	setGreen();
	cout<<"\t// SearchKey is greater than root key;\n";
	setOrange();
	cout<<"\t\treturn binaryTreeSearch(root->right, searchKey);\n";
	cout<<"\t}\n";
	cout<<"}\n";

	next();

	setRed();
	cout<<"-----Operations-----\n\n";
	cout<<"1. Insert Node\n";
	cout<<"2. Pre Order Traversal\n";
	cout<<"3. In Order Traversal\n";
	cout<<"4. Post Order Traversal\n";
	cout<<"5. Duplicate Eliminations\n";

	next();

	setBlue();
	cout<<"-----A Binary Tree-----\n\n";
	cout<<"           8           \n";
	cout<<"         /   \\         \n";
	cout<<"        3    12        \n";
	cout<<"       / \\   / *       \n";
	cout<<"      1   5  9         \n";
	cout<<"     * * * ** *        \n";
	cout<<"Pre Order Traversal: 8, 3, 1, 5, 12, 9\n";
	cout<<"\t root then left then right\n";
	cout<<"In Order Traversal: 1, 3, 5, 8, 9, 12\n";
	cout<<"\tleft then root then right\n";
	cout<<"Post Order Traversal: 1, 5, 3, 9, 12, 8\n";
	cout<<"\tleft then right then root\n";
	next();

	cout<<"-----Applications of a Tree-----\n\n";
	cout<<"Retrieval of a value is faster if the binary tree is balanced\n";

	cout<<"-----A Binary Tree-----\n\n";
	cout<<"           8           \n";
	cout<<"         /  *        \n";
	cout<<"        3            \n";
	cout<<"       /           \n";
	cout<<"      1              \n";
	cout<<"     * *       \n";

	next();
	setPurple();
	cout<<"-----Implementation-----\n\n";
	// Create tree that will be searched
	Node* n = nullptr;
	
	cout<<"\n\n";
	cout<<"I number (to insert): \n";
	cout<<"R number (to retrieve): \n";
	cout<<"E number (to exit): \n";
	while(true) {
		// Get key from user to search for
		string s;
		int key;
		cout<<"Enter Data: \n";
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

    set(15);
	return 0;
}

void setBlue() {
	set(3);	
}

void setGreen() {
	set(2);	
}

void setRed() {
	set(4);	
}

void setPurple() {
	set(5);	
}

void setOrange() {
	set(6);	
}

void set(int n) {
	SetConsoleTextAttribute(hConsole, n);
}

void next() {
	cout<<"\n";
	cout<<"Press enter to continue\n";
	cin.ignore();
	system("CLS");
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