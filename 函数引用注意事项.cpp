#include<iostream>

using namespace std;

void func(int& a)	//int& a = a
{
	cout << "����func(int& a)";
}

void func(const int& a)	//const int& a = 10
{
	cout << "����func(const int& a)";
}

void func2(int a)
{
	cout << "����func2(int a)\n";
}

void func2(int a, int b = 10)
{
	cout << "����func2(int a, int b = 10)\n";
}

int main()
{
	//int a = 10;
	//func(a);
	//func(10);
	//func2(10);	//�����޷�ִ��
	return 0;
}