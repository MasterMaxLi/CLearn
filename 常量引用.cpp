#include<iostream>

using namespace std;

void show(const int& a)
{
	//a = 100;
	cout << "a=" << a;
}

int main()
{
	int a = 10;
	//常量引用
	//const int& b = 10;
	show(a);
	return 0;
}