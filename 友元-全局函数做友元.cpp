#include<iostream>

using namespace std;

class Building
{
	friend void goodGay(Building* b);	//������Ԫ�������ú����ɷ���Building���е�˽�г�Ա
	
	public:
		string m_SittingRoom;
		Building()
		{
			m_SittingRoom = "����";
			m_BedRoom = "����";
		}
	private:
		string m_BedRoom;
};

//ȫ�ֺ���
void goodGay(Building* b)
{
	cout << "goodGay���ڷ��ʣ�" << b->m_SittingRoom << endl;
	cout << "goodGay���ڷ��ʣ�" << b->m_BedRoom << endl;
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