#include<iostream>
#include<fstream>
//#include<string>

using namespace std;

class Person
{
public:
	char m_Name[64];	//����
	int m_Age;	//����
};

void test01()
{
	//����������,���ļ�
	ofstream ofs("person.txt", ios::out | ios::binary);
	//д�ļ�
	Person p = { "����", 20 };
	ofs.write((const char*)&p, sizeof(p));
	//�ر�
	ofs.close();
}

//���ļ�
void test02()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��\n";
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "������" << p.m_Name << endl;
	cout << "���䣺" << p.m_Age << endl;
	ifs.close();
}

int main()
{
	//test01();
	test02();
	return 0;
}