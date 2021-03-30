#include "circle.h"

void Circle::setCenter(Point p)
{
	center = p;
}

void Circle::setR(int r)
{
	m_R = r;
}

Point Circle::getCenter()
{
	return center;
}

int Circle::get_R()
{
	return m_R;
}