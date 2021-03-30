#include<iostream>

using namespace std;

void func(int& a)	//int& a = a
{
	cout << "这是func(int& a)";
}

void func(const int& a)	//const int& a = 10
{
	cout << "这是func(const int& a)";
}

void func2(int a)
{
	cout << "这是func2(int a)\n";
}

void func2(int a, int b = 10)
{
	cout << "这是func2(int a, int b = 10)\n";
}

int main()
{
	//int a = 10;
	//func(a);
	//func(10);
	//func2(10);	//报错，无法执行
	return 0;
}