#include<iostream>

using namespace std;

class BasePage
{
	public:
		void header()
		{
			cout << "��ҳ��ͷ��" << endl;
		}
		void footer()
		{
			cout << "����ҳ�ײ�" << endl;
		}
		void left()
		{
			cout << "����Ҳ����б�" << endl;
		}
};

class Java : public BasePage
{
	public:
		void content()
		{
			cout << "Java�γ�" << endl;
		}
};

class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python�γ�" << endl;
	}
};

class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPP�γ�" << endl;
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