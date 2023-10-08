#include <iostream>
#include <queue>
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

void levelOrder(node* root) {
	if (!root) {
		return;
	}

	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty()) {
		node* n = q.front();
		q.pop();

		if (n != NULL) {
			cout << n->data << " ";
			if (n->left != NULL) {
				q.push(n->left);
			}
			if (n->right != NULL) {
				q.push(n->right);
			}
		}
		else {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
	}
}

node* insertInBST(node* root, int data) {
	if (!root) {
		root = new node(data);
		return root;
	}
	if (root->data > data) {
		root->left = insertInBST(root->left, data);
	}
	else {
		root->right = insertInBST(root->right, data);
	}

	return root;
}

node* createBST() {
	node* root = NULL;
	int data;

	cin >> data;

	while (data != -1) {
		root = insertInBST(root, data);
		cin >> data;
	}

	return root;
}

void printRange(node* root, int k1, int k2) {
	// base case
	if (!root) {
		return;
	}

	printRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printRange(root->right, k1, k2);
}


// 8 3 10 1 6 14 4 7 13 -1
int main() {

	node* root = createBST();
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	printRange(root, 6, 13);

	return 0;
}
















