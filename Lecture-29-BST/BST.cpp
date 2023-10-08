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

node* searchInBST(node* root, int key) {
	// base case
	if (!root) {
		return NULL;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}
	else if (root->data > key) {
		return searchInBST(root->left, key);
	}
	else {
		return searchInBST(root->right, key);
	}
}

int height(node*root) {
	if (!root) {
		return 0;
	}

	return max(height(root->left), height(root->right)) + 1;
}

bool isBalancedBST(node*root) {
	// base case
	if (!root) {
		return true;
	}

	// recursive case
	int hl = height(root->left);
	int hr = height(root->right);
	if (abs(hl - hr) <= 1 and isBalancedBST(root->left)
	        and isBalancedBST(root->right)) {
		return true;
	}

	return false;
}

class Pair {
public:
	int height;
	bool isBalanced;
};

Pair checkBalanced(node* root) {
	//  base case
	if (!root) {
		Pair p;
		p.height = 0;
		p.isBalanced = true;
		return  p;
	}
	// recursive case
	Pair left = checkBalanced(root->left);
	Pair right = checkBalanced(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;

	if (abs(left.height - right.height) <= 1 and left.isBalanced and
	        right.isBalanced) {
		p.isBalanced = true;
	}
	else {
		p.isBalanced = false;
	}
	return p;
}

node* buildBalancedBST(int a[], int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}
	// recursive case
	int m = (s + e) / 2;
	node* root = new node(a[m]);

	root->left = buildBalancedBST(a, s, m - 1);
	root->right = buildBalancedBST(a, m + 1, e);
	return root;
}

// BST TO LL
class LinkedList {
public:
	node* head, *tail;
	LinkedList() {
		head = tail = NULL;
	}
};

LinkedList BSTtoLL(node*root) {
	LinkedList l;
	// base case
	if (!root) {
		return l;
	}
	// recursive case
	if (root->left and root->right) {
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		// left ke tail ke right mei root daal do
		left.tail->right = root;
		// root ke right mei rightKaHead
		root->right = right.head;

		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
	else if (root->left and !root->right) {
		LinkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else {
		l.head = l.tail = root;
		return l;
	}
}

// 8 3 10 1 6 14 4 7 13 -1
int main() {

	// node* root = createBST();
	int a[] = {1, 2, 4, 5, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);
	node* root = buildBalancedBST(a, 0, n - 1);
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;
	// printRange(root, 6, 13);
	// cout << endl;
	levelOrder(root);


	node* ans = searchInBST(root, 6);

	if (ans != NULL) {
		cout << "Found: " << ans->data << endl;
	}
	else {
		cout << "Not Found\n";
	}

	// if (isBalancedBST(root)) {
	// 	cout << "Balanced Hai\n";
	// }
	// else {
	// 	cout << "Balanced Nahi Hai\n";
	// }

	Pair x = checkBalanced(root);
	if (x.isBalanced) {
		cout << "Balanced Hai\n";

	}
	else {
		cout << "Balanced Nahi Hai\n";
	}

	LinkedList l = BSTtoLL(root);

	node* head = l.head;
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";

	return 0;
}
















