#include<iostream>
using namespace std;

struct school
{
	string name;
	string address;
};

struct student
{
	string name;
	int age;
	int score;
	school school;
};

void print_student(student* student, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "������" << student->name
			<< " ���䣺" << student->age
			<< " ������" << student->score
			<< " ѧУ��" << student->school.name
			<< " ѧУ��ַ��" << student->school.address
			<< endl;
		student++;
	}
}

int main()
{
	student s[] =
	{
		{ "����", 18, 80, { "����Сѧ", "����·" } },
		{ "����", 20, 76, { "δ��Сѧ", "δ��·" } },
		{ "����", 21, 93, { "����Сѧ", "̫��·" } },
		{ "����", 19, 85, { "����Сѧ", "����·" } }
	};
	//cout << "sizeof(s)=" << sizeof(s) << endl;
	//cout << "sizeof(s[0])=" << sizeof(s[0]) << endl;
	int length = sizeof(s) / sizeof(s[0]);
	print_student(s, length);
	/*for (int i = 0; i < length; i++)
	{
		cout << "������" << s[i].name << endl;
		cout << "���䣺" << s[i].age << endl;
		cout << "������" << s[i].score << endl;
	}
	student* p = s;
	cout << "������" << p->name
	     << " ���䣺" << p->age
	     << " ������" << p->score
	     << " ѧУ��" << p->school.name
		 << " ѧУ��ַ��" << p->school.address 
		 << endl;
	p++;
	cout << "������" << p->name
		<< "���䣺" << p->age
		<< "������" << p->score
		<< "ѧУ��" << p->school.name
		<< "ѧУ��ַ��" << p->school.address
		<< endl;
	p++;
	cout << "������" << p->name
		<< "���䣺" << p->age
		<< "������" << p->score
		<< "ѧУ��" << p->school.name
		<< "ѧУ��ַ��" << p->school.address
		<< endl;
	p++;
	cout << "������" << p->name
		<< "���䣺" << p->age
		<< "������" << p->score
		<< "ѧУ��" << p->school.name
		<< "ѧУ��ַ��" << p->school.address
		<< endl;*/
	return 0;
}