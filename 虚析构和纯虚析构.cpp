#include<iostream>

using namespace std;

//�������ָ���ͷ��������
//����Ҫ����ĺ���ʵ��
//��������Ǵ����������������ڳ����࣬�޷�ʵ��������

class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������\n";
	}
	//�����������ɽ������ָ���ͷ��������ʱ���ɾ������
	/*virtual ~Animal()
	{
		cout << "Animal��������������\n";
	}*/
	//��������
	virtual ~Animal() = 0;
	//���麯��
	virtual void speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal�Ĵ�������������\n";
}

class Cat :public Animal
{
public:
	string *m_Name;
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������\n";
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "è��˵��\n";
	}
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������\n";
			delete m_Name;
			m_Name = NULL;
		}
	}
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//����ָ����������ʱ�򣬲����������������������������������ж��������ԣ�������ڴ�й©
	delete animal;
}
int main()
{
	test01();
	return 0;
}