#include<iostream>

using namespace std;

//赋值运算符重载

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
		//重载赋值运算符
		Person& operator=(Person& p)
		{
			//编译器提供默认浅拷贝
			// m_Age = p.m_Age;
			//应先判断是否有属性在堆区，如有先释放，然后深拷贝
			if (m_Age != NULL)
			{
				delete m_Age;
				m_Age = NULL;
			}
			//深拷贝
			m_Age = new int(*p.m_Age);
			//返回自身
			return *this;
		}
};

void test01()
{
	Person p1(28);
	Person p2(20);
	Person p3(10);
	p3 = p1 = p2;
	cout << "p1的年龄：" << *p1.m_Age << endl;
	cout << "p2的年龄：" << *p2.m_Age << endl;
	cout << "p3的年龄：" << *p3.m_Age << endl;
}

int main()
{
	test01();
	return 0;
}