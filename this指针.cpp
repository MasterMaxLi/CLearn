#include<iostream>

using namespace std;

//this指针指向被调用的成员函数所属的对象

class Person
{
public:
	int age;
	//解决名称冲突
	Person(int age)
	{
		this->age = age;
	}

	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//this指向对象的指针，*指向对象本体
		return *this;
	}
};

void test01()
{
	Person p1(19);
	cout << "p1年龄：" << p1.age << endl;
}

//返回对象本身 *this
void test02()
{
	Person p1(28);
	Person p2(12);
	//链式编程
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}