#include<iostream>

using namespace std;

class Building
{
	friend void goodGay(Building* b);	//声明友元函数，该函数可访问Building类中的私有成员
	
	public:
		string m_SittingRoom;
		Building()
		{
			m_SittingRoom = "客厅";
			m_BedRoom = "卧室";
		}
	private:
		string m_BedRoom;
};

//全局函数
void goodGay(Building* b)
{
	cout << "goodGay正在访问：" << b->m_SittingRoom << endl;
	cout << "goodGay正在访问：" << b->m_BedRoom << endl;
}

void test01()
{
	Building b;
	goodGay(&b);
}

int main()
{
	test01();
	return 0;
}