#include<iostream>
#include "circle.h"
//#include "point.h"

using namespace std;

void CircleAndPoint(Circle& c, Point& p)
{
	int distance = pow(c.getCenter().getX() - p.getX(), 2) + pow(c.getCenter().getY() - p.getY(), 2)
		- pow(c.get_R(), 2);
	if (distance > 0)
	{
		cout << "点在圆外";
	}
	else if (distance == 0)
	{
		cout << "点在圆上";
	}
	else
	{
		cout << "点在圆内";
	}
}

int main()
{
	Point center;

	center.setX(10);
	center.setY(0);
	Circle c;
	c.setCenter(center);
	c.setR(10);

	Point p;
	p.setX(0);
	p.setY(2);
	CircleAndPoint(c, p);
	return 0;
}