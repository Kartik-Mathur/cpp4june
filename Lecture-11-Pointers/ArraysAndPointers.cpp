#include <iostream>
using namespace std;

int main() {

	int a = 1;

	cout  << "&a: " << &a << endl;
	cout  << "&a+1: " << &a + 1 << endl;

	char ch = 'A';
	cout  << "&ch: " << (int*)&ch << endl;
	cout  << "&ch+1: " << (int*)(&ch + 1) << endl;

	int arr[] = {1, 2, 3, 4};
	char* chp = (char*)arr;
	cout << (int*)chp << endl;
	cout << (int*)(chp + 1) << endl;
	cout  << &arr[0] << endl;
	cout  << &arr[0] + 1 << endl;

	return 0;
}















