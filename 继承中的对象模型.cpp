#include <iostream>

using namespace std;

class Base
{
	public:
		int a;
	protected:
		int b;
	private:
		int c;
};

//利用开发人员命令提示工具查看对象模型
//cl d1 reportSingleClassLayout类名 "文件名"
class A :public Base
{
public:
	int d;
};

void test01()
{
	A a;
	//父类中所有非静态成员都会被子类继承
	//父类中私有成员也会被子类继承，但无法访问
	cout << "size of a:" << sizeof(a) << endl;	//16
}
int main()
{
	test01();
	return 0;
}