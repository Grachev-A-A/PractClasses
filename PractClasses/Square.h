#pragma once
#include "Circle.h"
#include "base.h"
class Square: public base
{
private:
	double a;
public:
	Square();
	Square(double a);
	Square(double a, char* name);
	~Square();

	double S();
	double P();

	int compare(Circle &c);
};

