#include "pch.h"
#include "Square.h"


Square::Square()
{
	a = 0;
}

Square::Square(double a)
{
	this->a = a;
}

Square::Square(double a, char * name): base(name)
{
	this->a = a;
}


Square::~Square()
{
}

double Square::S()
{
	return a * a;
}

double Square::P()
{
	return 4*a;
}

int Square::compare(Circle & c)
{
	return (2 * c.getR() <= a)? 1: -1;
}
