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
		cout << "姓名：" << student->name
			<< " 年龄：" << student->age
			<< " 分数：" << student->score
			<< " 学校：" << student->school.name
			<< " 学校地址：" << student->school.address
			<< endl;
		student++;
	}
}

int main()
{
	student s[] =
	{
		{ "张三", 18, 80, { "光明小学", "光明路" } },
		{ "李四", 20, 76, { "未来小学", "未来路" } },
		{ "王二", 21, 93, { "阳光小学", "太阳路" } },
		{ "麻子", 19, 85, { "翻斗小学", "翻斗路" } }
	};
	//cout << "sizeof(s)=" << sizeof(s) << endl;
	//cout << "sizeof(s[0])=" << sizeof(s[0]) << endl;
	int length = sizeof(s) / sizeof(s[0]);
	print_student(s, length);
	/*for (int i = 0; i < length; i++)
	{
		cout << "姓名：" << s[i].name << endl;
		cout << "年龄：" << s[i].age << endl;
		cout << "分数：" << s[i].score << endl;
	}
	student* p = s;
	cout << "姓名：" << p->name
	     << " 年龄：" << p->age
	     << " 分数：" << p->score
	     << " 学校：" << p->school.name
		 << " 学校地址：" << p->school.address 
		 << endl;
	p++;
	cout << "姓名：" << p->name
		<< "年龄：" << p->age
		<< "分数：" << p->score
		<< "学校：" << p->school.name
		<< "学校地址：" << p->school.address
		<< endl;
	p++;
	cout << "姓名：" << p->name
		<< "年龄：" << p->age
		<< "分数：" << p->score
		<< "学校：" << p->school.name
		<< "学校地址：" << p->school.address
		<< endl;
	p++;
	cout << "姓名：" << p->name
		<< "年龄：" << p->age
		<< "分数：" << p->score
		<< "学校：" << p->school.name
		<< "学校地址：" << p->school.address
		<< endl;*/
	return 0;
}