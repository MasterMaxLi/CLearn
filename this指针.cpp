#include<iostream>

using namespace std;

//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

class Person
{
public:
	int age;
	//������Ƴ�ͻ
	Person(int age)
	{
		this->age = age;
	}

	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//thisָ������ָ�룬*ָ�������
		return *this;
	}
};

void test01()
{
	Person p1(19);
	cout << "p1���䣺" << p1.age << endl;
}

//���ض����� *this
void test02()
{
	Person p1(28);
	Person p2(12);
	//��ʽ���
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}