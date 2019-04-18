#pragma once
#include <iostream>

using namespace std;
class Circle
{
private:
	double r;
	const double PI = 3.14;
public:
	Circle();
	~Circle();
	Circle(double r);

	double getR() { return r; }

	double S();
	double P();

	int compare(Circle &c);
};

