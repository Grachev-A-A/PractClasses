#pragma once
#include <iostream>
#include "string.h"
class base
{
private:
	char nameF[20];
public:
	base() :nameF("") {};
	~base();
	base(char* name) { strcpy_s(nameF, name); }
	void setName(char*s);
	char* getName();

	virtual double S();
	virtual double P();
};

