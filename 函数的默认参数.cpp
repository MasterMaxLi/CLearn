#include<iostream>

using namespace std;

//����Ĭ�ϲ���
//�������ֵ����ʹ�ô����ֵ������ʹ��Ĭ��ֵ
//�����ĩβ������Ĭ��ֵ����������в�����������Ĭ��ֵ
//���������ͺ���ʵ��ֻ����һ����Ĭ�ϲ���
int func(int a, int b, int c = 90)
{
	return a + b + c;
}
int main()
{
	cout << func(10, 20);
	return 0;
}