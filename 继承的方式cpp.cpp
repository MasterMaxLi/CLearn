#include<iostream>

using namespace std;

class Base
{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
};

//�����̳�
class A :public Base
{
	public:
		void func()
		{
			a = 10;	//����Ĺ���Ȩ�ޣ�����������Ȼ�ǹ���Ȩ��
			b = 20;	//����ı���Ȩ�ޣ�����������Ȼ�Ǳ���Ȩ��
			//c = 30;	�����˽��Ȩ�ޣ��������޷�����
		}
};

//�����̳�
class B :protected Base
{
public:
	void func()
	{
		a = 10;
		b = 20;
		//c = 40;	//˽�г�Ա���޷�����
	}
};

//˽�м̳�
class C :private Base
{
public:
	void func()
	{
		a = 10;
		b = 20;
		//c = 40;	//˽�г�Ա���޷�����
	}
};

void test01()
{
	A a;
	a.a = 10;	//����Ȩ�ޣ���������Է���
	//a.b = 20;	//����Ȩ�ޣ������ⲻ���Է���
	//a.c = 10;	//˽��Ȩ�ޣ������ⲻ���Է���
	B b;
	//b.a = 10;	//����Ȩ�ޣ������ⲻ���Է���
	C c;
	//c.a = 10;	//˽��Ȩ�ޣ������ⲻ���Է���
}
int main()
{
	test01();
	return 0;
}