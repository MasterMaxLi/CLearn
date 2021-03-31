#include<iostream>

using namespace std;

class Phone
{
	public:
		string m_PName;
		Phone(string pName)
		{
			m_PName = pName;
			cout << "Phone的构造函数调用\n";
		}
		~Phone()
		{
			cout << "Phone的析构函数调用\n";
		}
};

class Person
{
	public:
		string m_Name;
		//类对象作为类成员时，先构造类成员，再构造类对象
		Phone m_Phone;
		Person(string name, string pName): m_Name(name), m_Phone(pName)
		{
			cout << "Person的构造函数调用\n";
		}
		~Person()
		{
			{
				cout << "Person的析构函数调用\n";
			}
		}
};

void test01()
{
	Person p1("张三", "苹果");
	cout << "名字：" << p1.m_Name << endl;
	cout << "手机：" << p1.m_Phone.m_PName << endl;
}

int main()
{
	test01();
	return 0;
}