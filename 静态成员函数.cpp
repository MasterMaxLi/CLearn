#include<iostream>

using namespace std;

class Person
{
	public:
		//静态成员变量
		static int m_A;
		//非静态成员变量
		int m_B;
		//静态成员函数
		static void func()
		{
			m_A = 100;	//静态成员函数可以访问静态成员变量
			//m_B = 100;	静态成员函数不可以访问静态成员变量，无法区分是哪个非静态成员变量的属性
			cout << "静态成员函数调用\n";
		}
};

int Person::m_A = 100;

void test01()
{
	//通过对象访问
	Person p1;
	p1.func();
	//通过类名访问
	Person::func();
}
int main()
{
	test01();
	return 0;
}