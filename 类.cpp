#include<iostream>

using namespace std;

#define PI 3.14

class Circle
{
	public:
		int m_r;
		double calculate()
		{
			return 2 * m_r * PI;
		}
};
int main()
{
	Circle c1;
	c1.m_r = 10;
	cout << "c1的周长为" << c1.calculate() << endl;
	return 0;
}