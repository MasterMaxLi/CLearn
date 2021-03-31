#include<iostream>

using namespace std;

class Building;
class GoodGay
{
	public:
		GoodGay();

		void visit();	//令它可以访问Building中私有成员
		void visit2();	//令它不可以访问Building中私有成员
		
		Building* building;
};

class Building
{
	//GoodGay中的visit函数可以访问本类中的私有成员
	friend void GoodGay::visit();

	public:
		Building();
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit()
{
	cout << "visit正在访问：" << building->m_SittingRoom << endl;

	cout << "visit正在访问：" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;

	//cout << "visit2正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay g;
	g.visit();
	g.visit2();
}
int main()
{
	test01();
	return 0;
}