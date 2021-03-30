#include<iostream>

using namespace std;

//函数默认参数
//如果传入值，则使用传入的值，否则使用默认值
//如果非末尾参数有默认值，则其后所有参数都必须由默认值
//函数声明和函数实现只能有一个有默认参数
int func(int a, int b, int c = 90)
{
	return a + b + c;
}
int main()
{
	cout << func(10, 20);
	return 0;
}