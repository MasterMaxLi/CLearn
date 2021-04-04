#include<iostream>

using namespace std;


class Animal
{
public:
	int m_Age;
};

//在继承之前加上关键字virtual称之为虚继承，则父类称之为虚基类
class Sheep :virtual public Animal
{
//public:
	//int m_Age;
};

class Lama :virtual public Animal
{
//public:
	//int m_Age;
};

class LamaGlama :public Sheep, public Lama
{
//public:
	//int m_Age;
};

void test01()
{
	LamaGlama lg;
	lg.Sheep::m_Age = 18;
	lg.Lama::m_Age = 20;
	//cout << "LamaGlama的m_Age=" << lg.m_Age << endl;
	cout << "Sheep::m_Age=" << lg.Sheep::m_Age << endl;
	cout << "Lama::m_Age=" << lg.Lama::m_Age << endl;
	cout << lg.m_Age << endl;
}
int main()
{
	test01();
	return 0;
}