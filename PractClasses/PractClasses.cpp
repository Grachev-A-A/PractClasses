#include "pch.h"
#include <iostream>
#include "Circle.h"
#include <locale>
#include "Square.h"

int main()
{
	setlocale(LC_ALL, "rus");
	/*try {
		
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

	}*/


	char sname[20];
	strcpy_s(sname, "Base");
	base B(sname), B1;
	cout << B.getName() << " площадь = " << B.S() << endl;
	B1 = B;
	strcpy_s(sname, "Base1");
	B1.setName(sname);
	cout << B1.getName() << " площадь = " << B1.S() << endl;
	strcpy_s(sname, "Круг");
	Circle C1(3, sname), C2, C3(4);
	cout << C1.getName() << " площадь = " << C1.S() << endl; 
	strcpy_s(sname, "Квадрат1");
	Square S1(3, sname), S2;
	cout << S1.getName() << " площадь = " << S1.S() << endl;
	S2 = S1;
	strcpy_s(sname, "Квадрат2");
	S2.setName(sname);
	cout << S2.getName() << " площадь = " << S2.S() << endl;

	int flag = C1.compare(C2);
	cout << flag << endl;

	B = C1;
	cout << B.getName() << " площадь = " << B.S() << endl;
	B = S1;
	cout << B.getName() << " площадь = " << B.S() << endl;
	base*B2 = &C1;
	cout << B2->getName() << " площадь = " << B2->S() << endl;


}
