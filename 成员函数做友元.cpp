#include<iostream>

using namespace std;

class Building;
class GoodGay
{
	public:
		GoodGay();

		void visit();	//�������Է���Building��˽�г�Ա
		void visit2();	//���������Է���Building��˽�г�Ա
		
		Building* building;
};

class Building
{
	//GoodGay�е�visit�������Է��ʱ����е�˽�г�Ա
	friend void GoodGay::visit();

	public:
		Building();
		string m_SittingRoom;
	private:
		string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit()
{
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;

	//cout << "visit2���ڷ��ʣ�" << building->m_BedRoom << endl;
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