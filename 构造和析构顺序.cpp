#include<iostream>

using namespace std;

class Father
{
	public:
		int m_A;
		Father()
		{
			cout << "Father�Ĺ��캯��\n";
		}
		~Father()
		{
			cout << "Father����������\n";
		}
	protected:
		int m_B;
	private:
		int m_C;
};

class Son :public Father
{
	public:
		Son()
		{
			cout << "Son�Ĺ��캯��\n";
		}
		~Son()
		{
			cout << "Son����������\n";
		}
};

void test01()
{
	Son s;
	//�̳��еĹ���˳�����и��๹�죬�������๹��
	//����˳�����������������������
	s.m_A = 10;
}
int main()
{
	test01();
	return 0;
}