#include<iostream>

using namespace std;

int g_a = 10;
int g_b = 10;

int g_c_a = 10;
int g_c_b = 10;

int main()
{
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ" << (int)&g_b << endl;

	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ" << (int)&s_b << endl;

	cout << "�ַ��������ĵ�ַΪ" << (int)&"hello" << endl;

	cout << "ȫ�ֳ�����g_c_a�ĵ�ַΪ" << (int)&g_c_a << endl;
	cout << "ȫ�ֳ�����g_c_b�ĵ�ַΪ" << (int)&g_c_b << endl;

	int l_c_a = 10;
	int l_c_b = 10;
	cout << "�ֲ�����l_c_a�ĵ�ַΪ" << (int)&l_c_a << endl;
	cout << "�ֲ�����l_c_b�ĵ�ַΪ" << (int)&l_c_b << endl;

	return 0;
}
