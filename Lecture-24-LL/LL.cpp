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


void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head =  head->next;
	}
	cout << "NULL\n";
}

void deleteAtFront(node* &head, node* &tail) {
	if (!head) {
		return;
	}
	else if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (!head) {
		return;
	}
	else if (!head->next) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}
		delete tail;
		temp->next = NULL;
		tail = temp;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= lengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* temp = head;
		for (int i = 1; i < pos; ++i)
		{
			temp = temp->next;
		}
		node* n = temp->next;
		temp->next = n->next;
		delete n;
	}
}

void bubbleSort(node* &head) {
	int len = lengthLL(head);
	for (int i = 0; i < len - 1; ++i)
	{
		node* c = head, *p = NULL, *n;
		while (c != NULL and c->next != NULL) {
			n = c->next;
			if (c->data > n->data) {
				// Swapping hogi

				if (p == NULL) {// 1. Head change hoga
					c -> next = n->next;
					n -> next = c;
					p = head = n;
				}
				else { // 2. Head change nhi hoga
					c -> next = n->next;
					n -> next = c;
					p->next = n;
					p = n;
				}

			}
			else {
				// Swapping nahi hogi
				p = c;
				c = n;
			}
		}
	}
}

void breakCycle(node* head, node* f) {
	node* s = head;
	node* p = head;
	while (p->next != f) {
		p = p->next;
	}

	while (s != f) {
		p = f;
		f = f->next;
		s = s->next;
	}

	p->next = NULL;
}

// Floyd's Cycle Detection Algo
bool isCyclic(node* head) {
	node* f = head, *s =  head;
	while (f and f->next) {
		f = f->next->next;
		s = s->next;
		if (f == s) {
			breakCycle(head, f);
			return true;
		}
	}

	return false;
}

void createCycle(node* head) {
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = head->next->next->next->next;
}

int main() {

	node* head, *tail;
	head = tail = NULL;
	// int n, data;
	// cin >> n;

	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> data;
	// 	insertAtEnd(head, tail, data);

	// }
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 11);
	printLL(head);
	createCycle(head);
	// deleteAtEnd(head, tail);
	// deleteAtMid(head, tail, 3);
	// bubbleSort(head);
	if (isCyclic(head)) {
		cout << "Cycle Exist!\n";
		printLL(head);
	}
	else {
		printLL(head);
	}



	return 0;
}
















