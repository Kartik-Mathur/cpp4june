#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int ans = 0;
	while (head != NULL) {
		head = head->next;
		ans++;
	}

	return ans;
}

void insertAtFront(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int data) {
	if (head == NULL) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void insertAtMiddle(node* &head, node*& tail, int data, int pos) {
	if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else {
		node* temp = head;
		for (int i = 1; i < pos; ++i)
		{
			temp = temp->next;
		}
		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void reverseLL(node* &head, node* &tail) {
	node* c = head, *p = NULL;
	node*n;
	while (c != NULL) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}

void reverseLLRec(node*head, node* p = NULL) {
	// base case
	if (head == NULL) {
		return;
	}

	// recursive case
	node* n = head->next;
	head->next = p;
	reverseLLRec(n, head);
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head =  head->next;
	}
	cout << "NULL\n";
}


node* mid(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* s = head;
	node* f = head->next;

	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}
	return s;
}

node* merge(node* a, node* b) {
	// base case
	if (a == NULL) {
		return b;
	}

	if (b == NULL) {
		return a;
	}

	// recursive case
	node* nH;
	if (a->data < b->data) {
		nH = a;
		nH->next = merge(a->next, b);
	}
	else {
		nH = b;
		nH->next = merge(a, b->next);
	}
	return nH;
}

node* mergeSort(node* head) {
	// base case
	if (head == NULL || head->next == NULL) {
		return head;
	}
	// recursive case
	// 1. Divide
	node* m = mid(head);
	node* b = m->next;
	node* a = head;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* nH = merge(a, b);
	return nH;
}

int main() {

	node* head, *tail;
	node* head1, *tail1;
	head = tail = head1 = tail1 = NULL;

	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 0);
	// insertAtMiddle(head, tail, 10, 10);

	// insertAtEnd(head1, tail1, 2);
	// insertAtEnd(head1, tail1, 4);
	// insertAtEnd(head1, tail1, 7);
	// insertAtEnd(head1, tail1, 9);

	// head = merge(head, head1);
	printLL(head);
	head = mergeSort(head);
	printLL(head);



	return 0;
}
















