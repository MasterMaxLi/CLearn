#include<iostream>

using namespace std;

//��ֵ���������

class  Person
{
	public:
		int* m_Age;
		Person(int age) 
		{
			m_Age = new int(age);
		}
		~Person()
		{
			if (m_Age != NULL)
			{
				delete m_Age;
				m_Age = NULL;
			}
		}
		//���ظ�ֵ�����
		Person& operator=(Person& p)
		{
			//�������ṩĬ��ǳ����
			// m_Age = p.m_Age;
			//Ӧ���ж��Ƿ��������ڶ������������ͷţ�Ȼ�����
			if (m_Age != NULL)
			{
				delete m_Age;
				m_Age = NULL;
			}
			//���
			m_Age = new int(*p.m_Age);
			//��������
			return *this;
		}
};

void test01()
{
	Person p1(28);
	Person p2(20);
	Person p3(10);
	p3 = p1 = p2;
	cout << "p1�����䣺" << *p1.m_Age << endl;
	cout << "p2�����䣺" << *p2.m_Age << endl;
	cout << "p3�����䣺" << *p3.m_Age << endl;
}

int main()
{
	test01();
	return 0;
}