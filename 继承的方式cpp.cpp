#include<iostream>

using namespace std;

class Base
{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
};

//公共继承
class A :public Base
{
	public:
		void func()
		{
			a = 10;	//父类的公共权限，在子类中依然是公共权限
			b = 20;	//父类的保护权限，在子类中依然是保护权限
			//c = 30;	父类的私有权限，在子类无法访问
		}
};

//保护继承
class B :protected Base
{
public:
	void func()
	{
		a = 10;
		b = 20;
		//c = 40;	//私有成员，无法访问
	}
};

//私有继承
class C :private Base
{
public:
	void func()
	{
		a = 10;
		b = 20;
		//c = 40;	//私有成员，无法访问
	}
};

void test01()
{
	A a;
	a.a = 10;	//公共权限，在类外可以访问
	//a.b = 20;	//保护权限，在类外不可以访问
	//a.c = 10;	//私有权限，在类外不可以访问
	B b;
	//b.a = 10;	//保护权限，在类外不可以访问
	C c;
	//c.a = 10;	//私有权限，在类外不可以访问
}
int main()
{
	test01();
	return 0;
}