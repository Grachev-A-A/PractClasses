#include "pch.h"
#include "Circle.h"


Circle::Circle()
{
	r = 0;
}


Circle::~Circle()
{
	cout << "Delete obj\n";
}

Circle::Circle(double r)
{
	if (r <= 0)throw -1;
	this->r = r;
}

double Circle::S()
{
	return PI*r*r;
}

double Circle::P()
{
	return PI*r*2;
}

int Circle::compare(Circle & c)
{
	if (this->r == c.r) return 0;
	if (this->r < c.r) return -1;
	return 1;
}
