#include<iostream>

using namespace std;

class Person
{
	public:
		int m_Age;
		int* m_Height;

		Person()
		{
			cout << "Person��Ĭ�Ϲ��캯��������\n";
		}
		
		Person(int age, int height)
		{
			m_Age = age;
			m_Height = new int(height);
			cout << "Person(int age)���вι��캯��������\n";
		}

		//Ĭ������������ǳ��������������������ʱ��������ڴ�����ͷ�
		//�Լ���д�������캯�������ǳ��������
		Person(const Person& person)
		{
			cout << "�Զ��忽�����캯��������\n";
			m_Age = person.m_Age;
			//���
			m_Height = new int(*person.m_Height);	//������
		}

		~Person()
		{
			//���������еĴ��룬ͨ�����ڽ����������Ķ����ͷ�
			if (m_Height != NULL)
			{
				delete m_Height;
				m_Height = NULL;
			}
			cout << "Person����������������\n";
		}
};

void test01()
{
	Person p1(18, 180);
	cout << "p1�����䣺" << p1.m_Age << endl;
	cout << "p1����ߣ�" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2�����䣺" << p2.m_Age << endl;
	cout << "p2����ߣ�" << *p2.m_Height << endl;
}
int main()
{
	test01();
	return 0;
}