#include<iostream>

using namespace std;


class Father
{
	public:
		int m_A;
		Father()
		{
			m_A = 100;
		}

		void func()
		{
			cout << "这是Father中的func函数\n";
		}
		void func(int a)
		{
			cout << "这是Father中的func(int a)函数\n";
		}
};

class Son :public Father
{
	public:
		int m_A;
		Son()
		{
			m_A = 200;
		}
		void func()
		{
			cout << "这是Son中的func函数\n";
		}
};

void test01()
{
	Son s;
	//默认访问子类自己的成员
	cout << "Son中的m_A=" << s.m_A << endl;
	//访问父类中的同名成员，加上父类作用域即可
	cout << "Father中的m_A=" << s.Father::m_A << endl;
	s.func();
	s.Father::func();
	//子类中出现和父类同名的成员函数，子类同名成员会隐藏父类中所有同名成员函数
	s.Father::func(1);
}

int main()
{
	test01();
	return 0;
}