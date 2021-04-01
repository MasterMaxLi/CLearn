#include<iostream>

using namespace std;

//���������++����
class MyInteger
{
	friend ostream& operator<<(ostream& cout, const MyInteger& myint);

	private:
		int m_Num;
	public:
		MyInteger()
		{
			m_Num = 0;
		}
		//����ǰ�õ���
		MyInteger& operator++()
		{
			m_Num++;
			return *this;
		}
		//���غ��õ���
		//int����ռλ��������������ǰ�úͺ���
		MyInteger operator++(int)
		{
			//�ȼ�¼��ǰ���
			MyInteger temp = *this;
			//����
			m_Num++;
			//���ؽ��
			return temp;
		}
};

ostream& operator<<(ostream& cout, const MyInteger& myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint;
}
int main()
{
	//test01();
	test02();
	return 0;
}