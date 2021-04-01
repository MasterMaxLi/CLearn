#include<iostream>

using namespace std;

//打印类
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myPrint;
	myPrint("Hello world");	//由于使用起来非常像函数调用，因此称之为仿函数
}

class Add
{
	public:
		int operator()(int num1, int num2)
		{
			return num1 + num2;
		}
};

void test02()
{
	Add myAdd;
	cout << myAdd(10, 100) <<endl;
	//匿名函数对象
	cout << Add()(10, 20);
}
int main()
{
	//test01();
	test02();
	return 0;
}