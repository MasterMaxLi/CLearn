#include<iostream>

using namespace std;

class Person
{
public:
	/*��̬��Ա������
	1.���ж��󶼹��������
	2.����׶ξͷ����ڴ�
	3.���������������ʼ��
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