#include<iostream>

using namespace std;

void func(int a, double b)
{
	cout << "func1";
}

void func(double a, int b)
{
	cout << "func2";
}
int main()
{
	func(10, 3.14);
	return 0;
}