#include<iostream>

using namespace std;

class Person
{
	//������������������Ԫ������������Զ�����������
	friend ostream& operator<<(ostream& cout, Person& p);
	private:
		int m_A;
		int m_B;
	public:
		Person(int m_A, int m_B) :m_A(m_A), m_B(m_B) { }

		//���ó�Ա�����������Ʒ���	p<<cout
		//�������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
		//void operator<<(Person& p){}
};

//ֻ������ȫ�ֺ����������������
//ostream����ֻ����һ��
ostream& operator<<(ostream& cout, Person& p)
{
	 cout << "m_A = " << p.m_A << ", m_B = " << p.m_B;
	 return cout;
}

void test01()
{
	Person p1(10, 30);
	cout << p1<< endl;
	//cout << "p1.m_A=" << p1.m_A << endl;
}
int main()
{
	test01();
	return 0;
}