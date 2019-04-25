#include "pch.h"
#include "base.h"

base::~base()
{
	std::cout << "Deleting base\n";
}

void base::setName(char * s)
{
	strcpy_s(nameF, s);
}

char * base::getName()
{
	return nameF;
}

double base::S()
{
	return 0.0;
}

double base::P()
{
	return 0.0;
}
