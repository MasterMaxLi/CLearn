#include<iostream>

using namespace std;

class Person
{
public:
	int m_Age;
	void showClassName()
	{
		cout << "this is class Person\n";
	}
	void showPersonAge()
	{
		//��ֹ�����ָ��
		if (this == NULL)
		{
			return;
		}
		//�����ָ��Ϊ��	NULL
		cout << "age = " << this->m_Age << endl;
	}
};

void test01()
{
	Person* p = NULL;
	//p->showClassName();
	p->showPersonAge();
}
int main()
{
	test01();
	return 0;
}