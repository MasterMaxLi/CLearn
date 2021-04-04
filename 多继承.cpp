#include<iostream>

using namespace std;

class Father1
{
public:
	int m_A;
	Father1()
	{
		m_A = 100;
	}
};

class Father2
{
	public:
		int m_A;
		Father2()
		{
			m_A = 200;
		}
};

class Son :public Father1, public Father2
{
	public:
		int m_C;
		int m_D;
		Son()
		{
			m_C = 300;
			m_D = 400;
		}
};

void test01()
{
	Son s;
	cout << "size of s：" << sizeof(s) << endl;
	//cout << "Son中的m_A：" << s.m_A << endl;
	cout << "Father1中的m_A：" << s.Father1::m_A << endl;
	cout << "Father2中的m_A：" << s.Father2::m_A << endl;
}

int main()
{
	test01();
	return 0;
}