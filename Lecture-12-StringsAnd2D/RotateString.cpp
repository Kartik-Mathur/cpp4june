#include <iostream>
#include <cstring>
using namespace std;

void rotate(char*a , int k) {
	int len = strlen(a);
	// ktimes har character ko aage shift krna
	int i = len - 1;
	while (i >= 0) {
		a[i + k] = a[i];
		i--;
	}
	// cout << a << endl;

	// Last se k characters ko shuru mei le aao
	i = 0;
	int j = len;
	while (i < k) {
		a[i] = a[j];
		i++;
		j++;
	}

	// cout << a << endl;
	// add \0 at len position
	a[len] = '\0';
}

int main() {

	char a[100] = "Coding";
	int k = 1012313;

	k %= strlen(a);
	rotate(a, k);
	cout << a << endl;


	return 0;
}
















