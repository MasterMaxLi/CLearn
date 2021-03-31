#include<iostream>

using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();
	void visit();	//访问Building中的属性
	Building* building;
};

class Building
{
	friend class GoodGay;	//GoodGay是本类的友元类
	public:
		Building();
		string m_SittingRoom;

	private:
		string m_BedRoom;
};

 Building:: Building()
{
	 m_SittingRoom = "客厅";
	 m_BedRoom = "卧室";
}

 GoodGay::GoodGay()
 {
	 building = new Building();
 }
 void GoodGay::visit()
 {
	 cout << "GoodGay类正在访问：" << building->m_SittingRoom << endl;
	 cout << "GoodGay类正在访问：" << building->m_BedRoom << endl;
 }

 void test01()
 {
	 GoodGay g;
	 g.visit();
 }
int main()
{
	test01();
	return 0;
}