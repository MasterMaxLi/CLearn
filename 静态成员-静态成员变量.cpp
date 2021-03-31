#include<iostream>

using namespace std;

class Person
{
public:
	/*静态成员变量：
	1.所有对象都共享该数据
	2.编译阶段就分配内存
	3.类内声明，类外初始化
	*/

	static int m_A;
};

int Person::m_A = 100;

void test01()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;

	cout << p2.m_A << endl;
}

int main()
{
	test01();
	return 0;
}