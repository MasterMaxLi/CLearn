#include<iostream>

using namespace std;

class Father
{
	public:
		static int m_A;
		static void func()
		{
			cout << "Father中的func\n";
		}
		static void func(int a)
		{
			cout << "Father中的func(int a)\n";
		}
};

class Son :public Father
{
	public:
		static int m_A;
		static void func()
		{
			cout << "Son中的func\n";
		}
};

int Father::m_A = 100;
int Son::m_A = 200;

void test01()
{
	Son s;
	cout << "Son 中的m_A=" << s.m_A << endl;
	cout << "Father 中的m_A=" << s.Father::m_A << endl;
	//通过类名访问父类中的静态成员，以及::方式访问
	cout << Son::Father::m_A << endl;
	s.func();
	s.Father::func();
	Son::Father::func();
	Son::Father::func(100);
}

int main()
{
	test01();
	return 0;
}