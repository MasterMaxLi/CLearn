#include<iostream>
#include<fstream>	//ͷ�ļ�����

using namespace std;

void test01()
{
	//����������
	ofstream ofs;
	//ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
	//д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	//�ر��ļ�
	ofs.close();

}
int main()
{
	test01();
	return 0;
}