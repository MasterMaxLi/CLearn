#include<iostream>

using namespace std;

class Person
{
	public:
		//��̬��Ա����
		static int m_A;
		//�Ǿ�̬��Ա����
		int m_B;
		//��̬��Ա����
		static void func()
		{
			m_A = 100;	//��̬��Ա�������Է��ʾ�̬��Ա����
			//m_B = 100;	��̬��Ա���������Է��ʾ�̬��Ա�������޷��������ĸ��Ǿ�̬��Ա����������
			cout << "��̬��Ա��������\n";
		}
};

int Person::m_A = 100;

void test01()
{
	//ͨ���������
	Person p1;
	p1.func();
	//ͨ����������
	Person::func();
}
int main()
{
	test01();
	return 0;
}