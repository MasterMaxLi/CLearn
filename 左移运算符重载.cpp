#include<iostream>

using namespace std;

class Person
{
	//重载左移运算符配合友元函数可以输出自定义数据类型
	friend ostream& operator<<(ostream& cout, Person& p);
	private:
		int m_A;
		int m_B;
	public:
		Person(int m_A, int m_B) :m_A(m_A), m_B(m_B) { }

		//利用成员函数重载左移符号	p<<cout
		//不能利用成员函数重载左移运算符，因为无法实现cout在左侧
		//void operator<<(Person& p){}
};

//只能利用全局函数重载左移运算符
//ostream对象只能有一个
ostream& operator<<(ostream& cout, Person& p)
{
	 cout << "m_A = " << p.m_A << ", m_B = " << p.m_B;
	 return cout;
}

void test01()
{
	Person p1(10, 30);
	cout << p1<< endl;
	//cout << "p1.m_A=" << p1.m_A << endl;
}
int main()
{
	test01();
	return 0;
}