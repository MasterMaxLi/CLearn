#include<iostream>

using namespace std;

//ֵ����
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����
void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	swap03(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}