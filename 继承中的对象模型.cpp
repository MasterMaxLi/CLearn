#include <iostream>

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

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//cl d1 reportSingleClassLayout���� "�ļ���"
class A :public Base
{
public:
	int d;
};

void test01()
{
	A a;
	//���������зǾ�̬��Ա���ᱻ����̳�
	//������˽�г�ԱҲ�ᱻ����̳У����޷�����
	cout << "size of a:" << sizeof(a) << endl;	//16
}
int main()
{
	test01();
	return 0;
}