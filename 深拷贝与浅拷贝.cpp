#include<iostream>

using namespace std;

class Person
{
	public:
		int m_Age;
		int* m_Height;

		Person()
		{
			cout << "Person类默认构造函数调用了\n";
		}
		
		Person(int age, int height)
		{
			m_Age = age;
			m_Height = new int(height);
			cout << "Person(int age)类有参构造函数调用了\n";
		}

		//默认析构函数是浅拷贝，当调用析构函数时容易造成内存二次释放
		//自己编写拷贝构造函数，解决浅拷贝问题
		Person(const Person& person)
		{
			cout << "自定义拷贝构造函数调用了\n";
			m_Age = person.m_Age;
			//深拷贝
			m_Height = new int(*person.m_Height);	//解引用
		}

		~Person()
		{
			//析构函数中的代码，通常用于将堆区创建的对象释放
			if (m_Height != NULL)
			{
				delete m_Height;
				m_Height = NULL;
			}
			cout << "Person类析构函数调用了\n";
		}
};

void test01()
{
	Person p1(18, 180);
	cout << "p1的年龄：" << p1.m_Age << endl;
	cout << "p1的身高：" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "p2的年龄：" << p2.m_Age << endl;
	cout << "p2的身高：" << *p2.m_Height << endl;
}
int main()
{
	test01();
	return 0;
}