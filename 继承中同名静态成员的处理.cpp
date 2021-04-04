#include<iostream>

using namespace std;

class Father
{
	public:
		static int m_A;
		static void func()
		{
			cout << "Father�е�func\n";
		}
		static void func(int a)
		{
			cout << "Father�е�func(int a)\n";
		}
};

class Son :public Father
{
	public:
		static int m_A;
		static void func()
		{
			cout << "Son�е�func\n";
		}
};

int Father::m_A = 100;
int Son::m_A = 200;

void test01()
{
	Son s;
	cout << "Son �е�m_A=" << s.m_A << endl;
	cout << "Father �е�m_A=" << s.Father::m_A << endl;
	//ͨ���������ʸ����еľ�̬��Ա���Լ�::��ʽ����
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