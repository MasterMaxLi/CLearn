#include<iostream>

using namespace std;

class Person
{
public:
	int m_A;
	mutable int m_B;	//����һ��������������Ϲؼ���mutable�󣬿���const���εĺ����ͳ��������޸�
	//ע��thisָ����ָ�볣��
	//������
	//���ʣ�Person* const this;
	void showPerson() const
	{
		this->m_B = 100;	//���޸ĵ�����ֵ
		//this->m_A = 100;
		//this = NULL;	//thisָ�벻���޸�ָ��ĵ�ַ
	}
	void func()
	{
		m_A = 100;
		m_B = 100;
	}
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p;	//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;	//�����������ֵ�����޸�
	p.m_B = 100;	//�����������ֵ���޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	p.func();	//���ɵ�����ͨ����
}

int main()
{
	test01();
	return 0;
}