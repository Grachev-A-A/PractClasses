#pragma once
#include <iostream>
#include "base.h"

using namespace std;
class Circle: public base
{
private:
	double r;
	static const double PI;
public:
	Circle();
	~Circle();
	Circle(double r);
	Circle(double r1, char* name);

	double getR() { return r; }

	double S();
	double P();

	int compare(Circle &c);
};

