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
			cout << "����Father�е�func����\n";
		}
		void func(int a)
		{
			cout << "����Father�е�func(int a)����\n";
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
			cout << "����Son�е�func����\n";
		}
};

void test01()
{
	Son s;
	//Ĭ�Ϸ��������Լ��ĳ�Ա
	cout << "Son�е�m_A=" << s.m_A << endl;
	//���ʸ����е�ͬ����Ա�����ϸ��������򼴿�
	cout << "Father�е�m_A=" << s.Father::m_A << endl;
	s.func();
	s.Father::func();
	//�����г��ֺ͸���ͬ���ĳ�Ա����������ͬ����Ա�����ظ���������ͬ����Ա����
	s.Father::func(1);
}

int main()
{
	test01();
	return 0;
}