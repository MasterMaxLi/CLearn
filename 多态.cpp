#include<iostream>

using namespace std;

/*��̬��̬����������
1.�̳й�ϵ
2.������д�����麯��
*/
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��\n";
	}
};

class Cat :public Animal
{
public:
	//��д�� ��������ֵ���ͣ������������������б���ȫһ��
	virtual void speak()
	{
		cout << "è��˵��\n";
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "����˵��\n";
	}
};
void doSpeak(Animal& animal)	//Animal& animal = cat; 
{
	animal.speak();
}

void test01()
{
	Cat cat;	
	//C++Ĭ�����
	doSpeak(cat);
	//��̬��̬��ʹ�ã������ָ�������ָ���������
	Dog dog;
	doSpeak(dog);
	cout << "size of cat:" << sizeof(cat) << endl;
}

int main()
{
	test01();
	return 0;
}