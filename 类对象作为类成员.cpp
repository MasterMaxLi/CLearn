#include<iostream>

using namespace std;

class Phone
{
	public:
		string m_PName;
		Phone(string pName)
		{
			m_PName = pName;
			cout << "Phone�Ĺ��캯������\n";
		}
		~Phone()
		{
			cout << "Phone��������������\n";
		}
};

class Person
{
	public:
		string m_Name;
		//�������Ϊ���Աʱ���ȹ������Ա���ٹ��������
		Phone m_Phone;
		Person(string name, string pName): m_Name(name), m_Phone(pName)
		{
			cout << "Person�Ĺ��캯������\n";
		}
		~Person()
		{
			{
				cout << "Person��������������\n";
			}
		}
};

void test01()
{
	Person p1("����", "ƻ��");
	cout << "���֣�" << p1.m_Name << endl;
	cout << "�ֻ���" << p1.m_Phone.m_PName << endl;
}

int main()
{
	test01();
	return 0;
}