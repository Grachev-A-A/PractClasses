

#include "pch.h"
#include <iostream>
#include "Circle.h"
#include<locale>
#include "Square.h"

int main()
{
	try {
		setlocale(LC_ALL, "rus");
		Circle R1(-2), R2;
		std::cout << sizeof(R1) << ' ' << sizeof(R2) << endl;
		Circle R3(3);
		double s = R3.S();
		double p = R3.P();
		cout << "s = " << s << "\np = " << p << endl;
		int flag = R1.compare(R3);
		cout << "Сравнение = " << flag << endl;
		Square S1(10);
		s = S1.S();
		p = S1.P();
		cout << "s = " << s << "\np = " << p << endl;
		flag = S1.compare(R3);
		cout << "Сравнение = " << flag << endl;
	}
	catch (char h) {
		cout << "Это символ!\n";
	}
	catch (int h) {
		cout << "r<=0!\n";

	}
}
