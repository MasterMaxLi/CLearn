#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void test01()
{
	//创建流对象
	ifstream ifs;
	//打开文件，判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！\n";
		return;
	}
	//读数据:4种方式
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
	while ((c = ifs.get()) != EOF)	//EOF:End Of File，文件尾
	{
		cout << c;
	}*/
	
	//关闭
	ifs.close();
}
int main()
{
	test01();
	return 0;
}