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
	cout << "局部变量a的地址为" << (int)&a << endl;
	cout << "局部变量b的地址为" << (int)&b << endl;

	cout << "全局变量g_a的地址为" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为" << (int)&g_b << endl;

	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为" << (int)&s_b << endl;

	cout << "字符串常量的地址为" << (int)&"hello" << endl;

	cout << "全局常量量g_c_a的地址为" << (int)&g_c_a << endl;
	cout << "全局常量量g_c_b的地址为" << (int)&g_c_b << endl;

	int l_c_a = 10;
	int l_c_b = 10;
	cout << "局部常量l_c_a的地址为" << (int)&l_c_a << endl;
	cout << "局部常量l_c_b的地址为" << (int)&l_c_b << endl;

	return 0;
}
