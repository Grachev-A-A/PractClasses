#pragma once
#include "Circle.h"
class Square
{
private:
	double a;
public:
	Square();
	Square(double a);
	~Square();

	double S();
	double P();

	int compare(Circle &c);
};

