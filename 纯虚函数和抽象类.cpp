#include<iostream>

using namespace std;

class Father
{
public:
	virtual void func() = 0;
};

class Son :public Father
{
public:
	void func()
	{
		cout << "func";
	}
};

void test01()
{
	Father* s = new Son;
	s->func();
	delete s;
}

int main()
{
	test01();
	return 0;
}