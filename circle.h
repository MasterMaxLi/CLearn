#pragma once
#include "point.h"

class Circle
{
	private:
		Point center;
		int m_R;
	public:
		void setCenter(Point p);
		void setR(int r);

		Point getCenter();
		int get_R();
};
