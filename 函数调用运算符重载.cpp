#include<iostream>

using namespace std;

//��ӡ��
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test01()
{
	MyPrint myPrint;
	myPrint("Hello world");	//����ʹ�������ǳ��������ã���˳�֮Ϊ�º���
}

class Add
{
	public:
		int operator()(int num1, int num2)
		{
			return num1 + num2;
		}
};

void test02()
{
	Add myAdd;
	cout << myAdd(10, 100) <<endl;
	//������������
	cout << Add()(10, 20);
}
int main()
{
	//test01();
	test02();
	return 0;
}