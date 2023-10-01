#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* createTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();
	return root;
}

void preOrder(node*root) {
	// base case
	if (!root) {
		return;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (!root) {
		return;
	}

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (!root) {
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int countNodes(node* root) {
	if (!root) {
		return 0;
	}

	return countNodes(root->left) + countNodes(root->right) + 1;
}

int height(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	return max(height(root->left), height(root->right)) + 1;
}


int diameter(node* root) {
	if (!root) {
		return 0;
	}

	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}

node* findNode(node* root, int key) {
	if (!root) {
		return NULL;
	}

	if (root->data == key) {
		return root;
	}
	node* ans = findNode(root->left, key);
	if (ans != NULL) {
		return ans;
	}

	ans = findNode(root->right, key);
	if (ans != NULL) {
		return ans;
	}

	return NULL;
}

int main() {

	node* root = createTree();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	cout << "Nodes Count: " << countNodes(root) << endl;
	cout << "Tree Height: " << height(root) << endl;
	cout << "Tree Diameter: " << diameter(root) << endl;

	node* ans = findNode(root, 116);
	if (ans != NULL) {
		cout << ans->data << endl;
	}
	else {
		cout << "Nahi milli\n";
	}

	return 0;
}
















