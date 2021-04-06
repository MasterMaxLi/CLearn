#include<iostream>

using namespace std;

//解决父类指针释放子类对象
//都需要具体的函数实现
//区别：如果是纯虚析构，该类属于抽象类，无法实例化对象

class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数调用\n";
	}
	//利用虚析构可解决父类指针释放子类对象时不干净的情况
	/*virtual ~Animal()
	{
		cout << "Animal的析构函数调用\n";
	}*/
	//纯虚析构
	virtual ~Animal() = 0;
	//纯虚函数
	virtual void speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal的纯析构函数调用\n";
}

class Cat :public Animal
{
public:
	string *m_Name;
	Cat(string name)
	{
		cout << "Cat的构造函数调用\n";
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "猫在说话\n";
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用\n";
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构的时候，不会调用子类中析构函数，导致子类如果有堆区的属性，将造成内存泄漏
	delete animal;
}
int main()
{
	test01();
	return 0;
}