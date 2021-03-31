#include<iostream>

using namespace std;

class Person
{
public:
	int m_A;
	mutable int m_B;	//声明一个特殊变量，加上关键字mutable后，可在const修饰的函数和常函数中修改
	//注：this指针是指针常量
	//常函数
	//本质：Person* const this;
	void showPerson() const
	{
		this->m_B = 100;	//可修改的特殊值
		//this->m_A = 100;
		//this = NULL;	//this指针不可修改指向的地址
	}
	void func()
	{
		m_A = 100;
		m_B = 100;
	}
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;	//在对象前加const，成为常对象
	//p.m_A = 100;	//常对象的正常值不可修改
	p.m_B = 100;	//常对象的特殊值可修改

	//常对象只能调用常函数
	p.showPerson();
	p.func();	//不可调用普通函数
}

int main()
{
	test01();
	return 0;
}