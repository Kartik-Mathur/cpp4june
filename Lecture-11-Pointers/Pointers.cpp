#include <iostream>
using namespace std;

int main() {

	int a = 10;
	float  f = 1.11;
	cout << "&a: " << &a << endl;
	cout << "&f: " << &f << endl;

	char ch = 'A';
	cout << "&ch: " << (int*)&ch << endl;

	int arr[] = {1, 2, 3, 4, 5};
	cout << "arr: " << arr << endl;
	cout << "arr[0]: " << arr[0] << endl;
	cout << "&arr[0]: " << &arr[0] << endl;

	int *ap =  &a;
	cout << "&a: " << &a << endl;
	cout << "ap: " << ap << endl;

	float *fp;
	fp = &f;

	cout << "&f: " << &f << endl;
	cout << "*(&f): " << *(&f) << endl;
	cout << "fp: " << fp << endl;
	cout << "*fp: " << *fp << endl;





	return 0;
}
















