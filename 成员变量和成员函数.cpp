#include<iostream>

using namespace std;

//��Ա�����ͳ�Ա�����Ƿֿ��洢��

class Person
{
	int m_A;	//�Ǿ�̬��Ա������������Ķ���
	static int m_B;	//��̬��Ա��������������Ķ���

	void func() {}	//�Ǿ�̬��Ա��������������Ķ���

	static void func2(){}	//��̬��Ա��������������Ķ���
};

int Person::m_B = 100;

void test01()
{
	Person p;
	//�ն���ռ���ڴ�Ϊ 1
	//C++���������ÿ���ն������һ���ֽڿռ䣬�����ֿն���ռ�ڴ��λ��
	//ÿ���ն�����һ����һ�޶����ڴ��ַ
	cout << "size of p��" << sizeof(p) << endl;
}

int main()
{
	test01();
	return 0;
}