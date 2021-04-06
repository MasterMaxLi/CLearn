#include<iostream>
#include<fstream>
//#include<string>

using namespace std;

class Person
{
public:
	char m_Name[64];	//姓名
	int m_Age;	//年龄
};

void test01()
{
	//创建流对象,打开文件
	ofstream ofs("person.txt", ios::out | ios::binary);
	//写文件
	Person p = { "王二", 20 };
	ofs.write((const char*)&p, sizeof(p));
	//关闭
	ofs.close();
}

//读文件
void test02()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败\n";
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名：" << p.m_Name << endl;
	cout << "年龄：" << p.m_Age << endl;
	ifs.close();
}

int main()
{
	//test01();
	test02();
	return 0;
}