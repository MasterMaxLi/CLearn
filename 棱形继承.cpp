#include<iostream>

using namespace std;


class Animal
{
public:
	int m_Age;
};

//�ڼ̳�֮ǰ���Ϲؼ���virtual��֮Ϊ��̳У������֮Ϊ�����
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
	//cout << "LamaGlama��m_Age=" << lg.m_Age << endl;
	cout << "Sheep::m_Age=" << lg.Sheep::m_Age << endl;
	cout << "Lama::m_Age=" << lg.Lama::m_Age << endl;
	cout << lg.m_Age << endl;
}
int main()
{
	test01();
	return 0;
}