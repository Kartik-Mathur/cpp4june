// ReverseStack.cpp
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int top) {
	// base case
	if (s.empty()) {
		s.push(top);
		return;
	}
	// recursive case
	int ct = s.top();
	s.pop();
	insertAtBottom(s, top);
	s.push(ct);
}

void ReverseStack(stack<int> &s) {
	// base case
	if (s.empty()) {
		return;
	}

	// recursive case
	int top = s.top();
	s.pop();
	ReverseStack(s);
	insertAtBottom(s, top);
}

void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
}

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	ReverseStack(s);
	printStack(s);
	printStack(s);
	return 0;
}
















