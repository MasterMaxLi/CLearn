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
		//防止传入空指针
		if (this == NULL)
		{
			return;
		}
		//传入的指针为空	NULL
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