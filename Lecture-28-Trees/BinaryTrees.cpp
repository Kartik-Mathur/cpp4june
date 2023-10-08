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

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	// base case
	if (!root) {
		Pair p;
		p.height = p.diameter = 0;
		return p;
	}
	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	Pair p;
	p.height = 1 + max(left.height, right.height);

	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1, max(op2, op3));
	return p;
}

// MIRROR TREE
void mirror(node* root) {
	// basecase
	if (!root) {
		return;
	}

	// recursive case
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

// BUILD TREE USING INORDER AND PREORDER
int pre[] = {8 , 10, 1, 6, 4, 7, 3 , 14, 13 };
int k = 0;
node* buildTree(int *in, int s, int e) {
	// base case
	if (s > e) {
		return NULL;
	}
	// recursive case
	int d = pre[k++];
	node* root = new node(d);

	// find index i in inorder
	int i;
	for (int j = s; j <= e ; ++j)
	{
		if (in[j] == d) {
			i = j;
			break;
		}
	}

	root->left = buildTree(in, s, i - 1);
	root->right =  buildTree(in, i + 1, e);
	return root;
}

int main() {

	// node* root = createTree();
	int in[] = {1, 10, 4, 6, 7, 8, 3, 13, 14 };
	int n = sizeof(in) / sizeof(int);
	node* root = buildTree(in, 0, n - 1);

	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	cout << endl;

	levelOrder(root);
	mirror(root);
	levelOrder(root);


	// Pair ans = fastDiameter(root);
	// cout << "Fast Height: " << ans.height << endl;
	// cout << "Fast diameter: " << ans.diameter << endl;

	return 0;
}
















