//-------------------------------------------------------
// Info
//-------------------------------------------------------

// Project Name:     Prakt03/a1
// Project Code:     progpp03a1

// File Name:        main.cpp
// File Description: Unit-Test code for the class Vector3D
// File Code:        progpp03a1main

// Author Name:	 Tobia Rossi
// Author Code:	 tuoyo

//-------------------------------------------------------
// Code Begin
//-------------------------------------------------------

// Application Include
#include <iostream>
#include "Vector3D.h"

// Unit test
int main()
{
	Vector3D v1;
	v1.x = 1.0;
	v1.y = 2.0;
	v1.z = 3.0;

	Vector3D v2;
	v2.x = 2.0;
	v2.y = 3.0;
	v2.z = 4.0;

	std::cout << "v1: ";
	v1.print();
	std::cout << "; v2: ";
	v2.print();
	std::cout << std::endl;

	std::cout << "v1 + v2 = ";
	v1.add(v2).print();
	std::cout << std::endl;

	std::cout << "v1 * v2 = " << v1.getDotProduct(v2) << std::endl;

	std::cout << "|v1| = " << v1.getLength() << std::endl;
	std::cout << "|v2| = " << v2.getLength() << std::endl;

	std::cout << "angle between v1 and v2 = " << v1.getAngleInDegree(v2) << std::endl;

	return 0;
}

//-------------------------------------------------------
// Code End
//-------------------------------------------------------