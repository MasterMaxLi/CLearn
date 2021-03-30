#include<iostream>

using namespace std;

class Person
{
	private:
		int age;
	public:
		//无参(默认)构造函数
		Person()
		{
			cout << "Person构造函数调用\n";
		}
		//析构函数
		~Person()
		{
			cout << "Person析构函数调用\n";
		}
		//有参构造函数
		Person(int a)
		{
			age = a;
			cout << "Person(int a)有参构造函数调用\n";
		}
		//拷贝构造函数
		Person(const Person& p)
		{
			age = p.age;
			cout << "Person(const Person& p)拷贝构造函数构造函数调用\n"; 
		}
};

//创建在栈上，执行完毕后系统自动回收销毁
//void test01()
//{
//	Person p;
//}
int main()
{
	//test01();
	//存放在堆中，由我们自己销毁或程序结束时系统销毁
	Person p0;
	Person p1(1);
	Person p2(p1);
	return 0;
}