#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int& b = a;
	cout << "b=" << b << endl;
	a = 20;
	cout << "b=" << b << endl;
	b = 30;
	cout << "a=" << a << endl;

	return 0;
}