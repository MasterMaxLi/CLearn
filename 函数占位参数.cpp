#include<iostream>

using namespace std;

//占位参数可以设默认值
void func(int a, int = 10)
{
	cout << "这是func函数";
}
int main()
{
	func(10);
	return 0;
}