#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void test01()
{
	//����������
	ifstream ifs;
	//���ļ����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�\n";
		return;
	}
	//������:4�ַ�ʽ
	//1
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//2
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	//3 string
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//4
	/*char c;
	while ((c = ifs.get()) != EOF)	//EOF:End Of File���ļ�β
	{
		cout << c;
	}*/
	
	//�ر�
	ifs.close();
}
int main()
{
	test01();
	return 0;
}