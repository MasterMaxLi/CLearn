#include<iostream>

using namespace std;

//递增运算符++重载
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
		//重载前置递增
		MyInteger& operator++()
		{
			m_Num++;
			return *this;
		}
		//重载后置递增
		//int代表占位参数，用以区分前置和后置
		MyInteger operator++(int)
		{
			//先记录当前结果
			MyInteger temp = *this;
			//递增
			m_Num++;
			//返回结果
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