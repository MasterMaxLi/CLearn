#include<iostream>

using namespace std;

class Father
{
	public:
		int m_A;
		Father()
		{
			cout << "Father的构造函数\n";
		}
		~Father()
		{
			cout << "Father的析构函数\n";
		}
	protected:
		int m_B;
	private:
		int m_C;
};

class Son :public Father
{
	public:
		Son()
		{
			cout << "Son的构造函数\n";
		}
		~Son()
		{
			cout << "Son的析构函数\n";
		}
};

void test01()
{
	Son s;
	//继承中的构造顺序：现有父类构造，再有子类构造
	//析构顺序：子类先析构，父类后析构
	s.m_A = 10;
}
int main()
{
	test01();
	return 0;
}