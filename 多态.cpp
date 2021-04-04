#include<iostream>

using namespace std;

/*动态多态满足条件：
1.继承关系
2.子类重写父类虚函数
*/
class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话\n";
	}
};

class Cat :public Animal
{
public:
	//重写： 函数返回值类型，函数名，函数参数列表完全一致
	virtual void speak()
	{
		cout << "猫在说话\n";
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "狗在说话\n";
	}
};
void doSpeak(Animal& animal)	//Animal& animal = cat; 
{
	animal.speak();
}

void test01()
{
	Cat cat;	
	//C++默认早绑定
	doSpeak(cat);
	//动态多态的使用：父类的指针或引用指向子类对象
	Dog dog;
	doSpeak(dog);
	cout << "size of cat:" << sizeof(cat) << endl;
}

int main()
{
	test01();
	return 0;
}