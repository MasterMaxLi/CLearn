#include<iostream>

using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay();
	void visit();	//����Building�е�����
	Building* building;
};

class Building
{
	friend class GoodGay;	//GoodGay�Ǳ������Ԫ��
	public:
		Building();
		string m_SittingRoom;

	private:
		string m_BedRoom;
};

 Building:: Building()
{
	 m_SittingRoom = "����";
	 m_BedRoom = "����";
}

 GoodGay::GoodGay()
 {
	 building = new Building();
 }
 void GoodGay::visit()
 {
	 cout << "GoodGay�����ڷ��ʣ�" << building->m_SittingRoom << endl;
	 cout << "GoodGay�����ڷ��ʣ�" << building->m_BedRoom << endl;
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