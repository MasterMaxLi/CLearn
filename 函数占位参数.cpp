#include<iostream>

using namespace std;

//ռλ����������Ĭ��ֵ
void func(int a, int = 10)
{
	cout << "����func����";
}
int main()
{
	func(10);
	return 0;
}