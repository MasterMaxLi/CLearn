#include<iostream>

using namespace std;

class BasePage
{
	public:
		void header()
		{
			cout << "首页、头部" << endl;
		}
		void footer()
		{
			cout << "公共页底部" << endl;
		}
		void left()
		{
			cout << "公共也左侧列表" << endl;
		}
};

class Java : public BasePage
{
	public:
		void content()
		{
			cout << "Java课程" << endl;
		}
};

class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python课程" << endl;
	}
};

class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPP课程" << endl;
	}
};

void test01()
{
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
}

int main()
{
	test01();
	return 0;
}