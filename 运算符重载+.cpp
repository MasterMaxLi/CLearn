#include<iostream>

using namespace std;

//�Ӻ����������
class Person
{
	public:
		int m_A;
		int m_B;
		//1.��Ա��������+��
		//Person operator+(Person& p)
		//{
			//Person temp;
			//temp.m_A = this->m_A + p.m_A;
			//temp.m_B = this->m_B + p.m_B;
			//return temp;
		//}
};

//ȫ�ֺ�������+��
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

Person operator+(Person& p1, int a)
{
	Person temp;
	temp.m_A = p1.m_A + a;
	temp.m_B = p1.m_B + a;
	return temp;
}

void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 30;
	Person p3 = p1 + p2;
	cout << "p3.m_A=" << p3.m_A << endl
		<< "p3.m_B=" << p3.m_B << endl;
	Person p4 = p3 + 10;
	cout << "p4.m_A=" << p4.m_A << endl
		<< "p4.m_B=" << p4.m_B << endl;
}
int main()
{
	test01();
	return 0;
}