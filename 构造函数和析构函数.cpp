#include<iostream>

using namespace std;

class Person
{
	private:
		int age;
	public:
		//�޲�(Ĭ��)���캯��
		Person()
		{
			cout << "Person���캯������\n";
		}
		//��������
		~Person()
		{
			cout << "Person������������\n";
		}
		//�вι��캯��
		Person(int age)
		{
			this->age = age;
			cout << "Person(int a)�вι��캯������\n";
		}
		//�������캯��
		Person(const Person& p)
		{
			age = p.age;
			cout << "Person(const Person& p)�������캯�����캯������\n"; 
		}
};

//������ջ�ϣ�ִ����Ϻ�ϵͳ�Զ���������
//void test01()
//{
//	Person p;
//}

//ֵ����
//void test01(Person p)
//{
//	cout << "test01\n";
//}
//ֵ����
//Person test02()
//{
//	Person p2;
//	return p2;
//}
int main()
{
	//test01();
	//����ڶ��У��������Լ����ٻ�������ʱϵͳ����
	//Person p0;
	//Person p1(1);
	//Person p2(p1);
	//Person p1(10);
	//test02();
	return 0;
}